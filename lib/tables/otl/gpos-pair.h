#ifndef CARYLL_TABLES_OTL_GPOS_PAIR_H
#define CARYLL_TABLES_OTL_GPOS_PAIR_H

#include "otl.h"
void otl_delete_gpos_pair(otl_Subtable *_subtable);
otl_Subtable *otl_read_gpos_pair(font_file_pointer data, uint32_t tableLength, uint32_t offset);
json_value *otl_gpos_dump_pair(otl_Subtable *_subtable);
otl_Subtable *otl_gpos_parse_pair(json_value *_subtable);
caryll_buffer *caryll_build_gpos_pair(otl_Subtable *_subtable);
#endif
