#include "gsub-single.h"

typedef struct {
	int fromid;
	sds fromname;
	int toid;
	sds toname;
	UT_hash_handle hh;
} gsub_single_map_hash;
static int by_from_id(gsub_single_map_hash *a, gsub_single_map_hash *b) {
	return a->fromid - b->fromid;
}
bool consolidate_gsub_single(caryll_Font *font, table_OTL *table, otl_Subtable *_subtable, sds lookupName) {
	subtable_gsub_single *subtable = &(_subtable->gsub_single);
	fontop_consolidateCoverage(font, subtable->from, lookupName);
	fontop_consolidateCoverage(font, subtable->to, lookupName);
	glyphid_t len =subtable->to->numGlyphs;
	if(subtable->from->numGlyphs < subtable->to->numGlyphs){
		len = subtable->from->numGlyphs;
	}
	gsub_single_map_hash *h = NULL;
	for (glyphid_t k = 0; k < len; k++) {
		if (subtable->from->glyphs[k].name && subtable->to->glyphs[k].name) {
			gsub_single_map_hash *s;
			int fromid = subtable->from->glyphs[k].index;
			HASH_FIND_INT(h, &fromid, s);
			if (s) {
				fprintf(stderr, "[Consolidate] Double-mapping a glyph in a "
				                "single substitution /%s.\n",
				        subtable->from->glyphs[k].name);
			} else {
				NEW(s);
				s->fromid = subtable->from->glyphs[k].index;
				s->toid = subtable->to->glyphs[k].index;
				s->fromname = subtable->from->glyphs[k].name;
				s->toname = subtable->to->glyphs[k].name;
				HASH_ADD_INT(h, fromid, s);
			}
		}
	}
	HASH_SORT(h, by_from_id);
	if (HASH_COUNT(h) != subtable->from->numGlyphs || HASH_COUNT(h) != subtable->to->numGlyphs) {
		fprintf(stderr, "[Consolidate] In single subsitution lookup %s, some "
		                "mappings are ignored.\n",
		        lookupName);
	}
	subtable->from->numGlyphs = HASH_COUNT(h);
	subtable->to->numGlyphs = HASH_COUNT(h);
	FREE(subtable->from->glyphs);
	FREE(subtable->to->glyphs);
	NEW_N(subtable->from->glyphs, subtable->from->numGlyphs);
	NEW_N(subtable->to->glyphs, subtable->to->numGlyphs);
	{
		gsub_single_map_hash *s, *tmp;
		glyphid_t j = 0;
		HASH_ITER(hh, h, s, tmp) {
			subtable->from->glyphs[j] = handle_fromConsolidated(s->fromid, s->fromname);
			subtable->to->glyphs[j] = handle_fromConsolidated(s->toid, s->toname);
			j++;
			HASH_DEL(h, s);
			free(s);
		}
	}
	return (subtable->from->numGlyphs == 0);
}
