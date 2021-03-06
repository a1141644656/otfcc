#ifndef CARYLL_TABLES_OTL_GSUB_REVERSE_H
#define CARYLL_TABLES_OTL_GSUB_REVERSE_H

#include "otl.h"

void otl_delete_gsub_reverse(otl_Subtable *_subtable);
otl_Subtable *otl_read_gsub_reverse(font_file_pointer data, uint32_t tableLength, uint32_t offset);
json_value *otl_gsub_dump_reverse(otl_Subtable *_subtable);
otl_Subtable *otl_gsub_parse_reverse(json_value *_subtable);
caryll_buffer *caryll_build_gsub_reverse(otl_Subtable *_subtable);

#endif
