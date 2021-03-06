#ifndef CARYLL_TABLES_OTL_GSUB_SINGLE_H
#define CARYLL_TABLES_OTL_GSUB_SINGLE_H

#include "otl.h"

void otl_delete_gsub_single(otl_Subtable *subtable);
otl_Subtable *otl_read_gsub_single(font_file_pointer data, uint32_t tableLength, uint32_t subtableOffset);
json_value *otl_gsub_dump_single(otl_Subtable *_subtable);
otl_Subtable *otl_gsub_parse_single(json_value *_subtable);
caryll_buffer *caryll_build_gsub_single_subtable(otl_Subtable *_subtable);

#endif
