#ifndef CARYLL_TABLES_VORG_H
#define CARYLL_TABLES_VORG_H

#include <font/caryll-sfnt.h>
#include <support/util.h>

typedef struct {
	glyphid_t gid;
	int16_t verticalOrigin;
} VORG_entry;

typedef struct {
	glyphid_t numVertOriginYMetrics;
	pos_t defaultVerticalOrigin;
	VORG_entry *entries;
} table_VORG;

void table_delete_VORG(table_VORG *vorg);
table_VORG *table_read_VORG(caryll_Packet packet);
caryll_buffer *table_build_VORG(table_VORG *table, const caryll_Options *options);
#endif
