#ifndef CARYLL_TABLES_OTL_GSUB_MULTI_H
#define CARYLL_TABLES_OTL_GSUB_MULTI_H

#include "otl.h"

void otl_delete_gsub_multi(otl_Subtable *subtable);
otl_Subtable *otl_read_gsub_multi(font_file_pointer data, uint32_t tableLength, uint32_t subtableOffset);
json_value *otl_gsub_dump_multi(otl_Subtable *_subtable);
otl_Subtable *otl_gsub_parse_multi(json_value *_subtable);
caryll_buffer *caryll_build_gsub_multi_subtable(otl_Subtable *_subtable);

#endif
