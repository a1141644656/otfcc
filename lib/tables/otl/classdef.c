#include "classdef.h"

void otl_delete_ClassDef(otl_ClassDef *cd) {
	if (cd) {
		if (cd->glyphs) {
			for (glyphid_t j = 0; j < cd->numGlyphs; j++) {
				handle_delete(&cd->glyphs[j]);
			}
			free(cd->glyphs);
		}
		free(cd->classes);
		free(cd);
	}
}

typedef struct {
	int gid;
	int covIndex;
	UT_hash_handle hh;
} coverage_entry;

static int by_covIndex(coverage_entry *a, coverage_entry *b) {
	return a->covIndex - b->covIndex;
}

otl_ClassDef *otl_read_ClassDef(font_file_pointer data, uint32_t tableLength, uint32_t offset) {
	otl_ClassDef *cd;
	NEW(cd);
	cd->numGlyphs = 0;
	cd->glyphs = NULL;
	cd->classes = NULL;
	if (tableLength < offset + 4) return cd;
	uint16_t format = read_16u(data + offset);
	if (format == 1 && tableLength >= offset + 6) {
		glyphid_t startGID = read_16u(data + offset + 2);
		glyphid_t count = read_16u(data + offset + 4);
		if (count && tableLength >= offset + 6 + count * 2) {
			cd->numGlyphs = count;
			NEW_N(cd->glyphs, count);
			NEW_N(cd->classes, count);
			uint16_t maxclass = 0;
			for (glyphid_t j = 0; j < count; j++) {
				cd->glyphs[j] = handle_fromIndex(startGID + j);
				cd->classes[j] = read_16u(data + offset + 6 + j * 2);
				if (cd->classes[j] > maxclass) maxclass = cd->classes[j];
			}
			cd->maxclass = maxclass;
			return cd;
		}
	} else if (format == 2) {
		// The ranges may overlap.
		// Use hashtable.
		uint16_t rangeCount = read_16u(data + offset + 2);
		if (tableLength < offset + 4 + rangeCount * 6) return cd;
		coverage_entry *hash = NULL;
		for (uint16_t j = 0; j < rangeCount; j++) {
			uint16_t start = read_16u(data + offset + 4 + 6 * j);
			uint16_t end = read_16u(data + offset + 4 + 6 * j + 2);
			uint16_t cls = read_16u(data + offset + 4 + 6 * j + 4);
			for (int k = start; k <= end; k++) {
				coverage_entry *item = NULL;
				HASH_FIND_INT(hash, &k, item);
				if (!item) {
					NEW(item);
					item->gid = k;
					item->covIndex = cls;
					HASH_ADD_INT(hash, gid, item);
				}
			}
		}
		HASH_SORT(hash, by_covIndex);
		cd->numGlyphs = HASH_COUNT(hash);
		if (cd->numGlyphs) {
			NEW_N(cd->glyphs, cd->numGlyphs);
			NEW_N(cd->classes, cd->numGlyphs);
			{
				glyphid_t j = 0;
				glyphclass_t maxclass = 0;
				coverage_entry *e, *tmp;
				HASH_ITER(hh, hash, e, tmp) {
					cd->glyphs[j] = handle_fromIndex(e->gid);
					cd->classes[j] = e->covIndex;
					if (e->covIndex > maxclass) maxclass = e->covIndex;
					HASH_DEL(hash, e);
					free(e);
					j++;
				}
				cd->maxclass = maxclass;
			}
		}
		return cd;
	}
	return cd;
}

otl_ClassDef *otl_expand_ClassDef(otl_Coverage *cov, otl_ClassDef *ocd) {
	otl_ClassDef *cd;
	NEW(cd);
	coverage_entry *hash = NULL;
	for (glyphid_t j = 0; j < ocd->numGlyphs; j++) {
		int gid = ocd->glyphs[j].index;
		int cid = ocd->classes[j];
		coverage_entry *item = NULL;
		HASH_FIND_INT(hash, &gid, item);
		if (!item) {
			NEW(item);
			item->gid = gid;
			item->covIndex = cid;
			HASH_ADD_INT(hash, gid, item);
		}
	}
	for (glyphid_t j = 0; j < cov->numGlyphs; j++) {
		int gid = cov->glyphs[j].index;
		coverage_entry *item = NULL;
		HASH_FIND_INT(hash, &gid, item);
		if (!item) {
			NEW(item);
			item->gid = gid;
			item->covIndex = 0;
			HASH_ADD_INT(hash, gid, item);
		}
	}
	cd->numGlyphs = HASH_COUNT(hash);
	HASH_SORT(hash, by_covIndex);
	NEW_N(cd->glyphs, cd->numGlyphs);
	NEW_N(cd->classes, cd->numGlyphs);
	{
		glyphid_t j = 0;
		glyphclass_t maxclass = 0;
		coverage_entry *e, *tmp;
		HASH_ITER(hh, hash, e, tmp) {
			cd->glyphs[j] = handle_fromIndex(e->gid);
			cd->classes[j] = e->covIndex;
			if (e->covIndex > maxclass) maxclass = e->covIndex;
			HASH_DEL(hash, e);
			free(e);
			j++;
		}
		cd->maxclass = maxclass;
	}
	otl_delete_ClassDef(ocd);
	return cd;
}

json_value *otl_dump_ClassDef(otl_ClassDef *cd) {
	json_value *a = json_object_new(cd->numGlyphs);
	for (glyphid_t j = 0; j < cd->numGlyphs; j++) {
		json_object_push(a, cd->glyphs[j].name, json_integer_new(cd->classes[j]));
	}
	return preserialize(a);
}

otl_ClassDef *otl_parse_ClassDef(json_value *_cd) {
	if (!_cd || _cd->type != json_object) return NULL;
	otl_ClassDef *cd;
	NEW(cd);
	cd->numGlyphs = _cd->u.object.length;
	NEW_N(cd->glyphs, cd->numGlyphs);
	NEW_N(cd->classes, cd->numGlyphs);
	glyphclass_t maxclass = 0;
	for (glyphid_t j = 0; j < _cd->u.object.length; j++) {
		cd->glyphs[j] = handle_fromName(sdsnewlen(_cd->u.object.values[j].name, _cd->u.object.values[j].name_length));
		json_value *_cid = _cd->u.object.values[j].value;
		if (_cid->type == json_integer) {
			cd->classes[j] = _cid->u.integer;
		} else if (_cid->type == json_double) {
			cd->classes[j] = _cid->u.dbl;
		} else {
			cd->classes[j] = 0;
		}
		if (cd->classes[j] > maxclass) maxclass = cd->classes[j];
	}
	cd->maxclass = maxclass;
	return cd;
}

typedef struct {
	glyphid_t gid;
	glyphclass_t cid;
} classdef_sortrecord;
static int by_gid(const void *a, const void *b) {
	return ((classdef_sortrecord *)a)->gid - ((classdef_sortrecord *)b)->gid;
}
caryll_buffer *otl_build_ClassDef(otl_ClassDef *cd) {
	caryll_buffer *buf = bufnew();
	bufwrite16b(buf, 2);
	if (!cd->numGlyphs) { // no glyphs, return a blank classdef
		bufwrite16b(buf, 0);
		return buf;
	}

	classdef_sortrecord *r;
	NEW_N(r, cd->numGlyphs);
	glyphid_t jj = 0;
	for (glyphid_t j = 0; j < cd->numGlyphs; j++) {
		if (cd->classes[j]) {
			r[jj].gid = cd->glyphs[j].index;
			r[jj].cid = cd->classes[j];
			jj++;
		}
	}
	if (!jj) { // The classdef has only class 0
		free(r);
		bufwrite16b(buf, 0);
		return buf;
	}
	qsort(r, jj, sizeof(classdef_sortrecord), by_gid);

	glyphid_t startGID = r[0].gid;
	glyphid_t endGID = startGID;
	glyphclass_t lastClass = r[0].cid;
	glyphid_t nRanges = 0;
	caryll_buffer *ranges = bufnew();
	for (glyphid_t j = 1; j < jj; j++) {
		glyphid_t current = r[j].gid;
		if (current == endGID + 1 && r[j].cid == lastClass) {
			endGID = current;
		} else {
			bufwrite16b(ranges, startGID);
			bufwrite16b(ranges, endGID);
			bufwrite16b(ranges, lastClass);
			nRanges += 1;
			startGID = endGID = current;
			lastClass = r[j].cid;
		}
	}
	bufwrite16b(ranges, startGID);
	bufwrite16b(ranges, endGID);
	bufwrite16b(ranges, lastClass);
	nRanges += 1;
	bufwrite16b(buf, nRanges);
	bufwrite_bufdel(buf, ranges);
	free(r);
	return buf;
}
