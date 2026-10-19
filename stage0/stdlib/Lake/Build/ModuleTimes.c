// Lean compiler output
// Module: Lake.Build.ModuleTimes
// Imports: public import Std.Data.HashMap import Std.Data.HashSet public import Lake.Util.IO public import Lake.Util.Log import Init.Data.Array.QSort import Init.Data.String.Compare import Init.Data.ToString.Macro import Init.While
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_byte_array_get(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_byte_array_set(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_System_FilePath_withFileName(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_log2(lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_io_wait(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t l_IO_FS_instBEqSystemTime_beq(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
uint32_t lean_io_process_get_pid();
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
static const lean_array_object l_Lake_instInhabitedModuleTimeEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedModuleTimeEntry_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedModuleTimeEntry_default___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedModuleTimeEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instInhabitedModuleTimeEntry_default___closed__0_value)}};
static const lean_object* l_Lake_instInhabitedModuleTimeEntry_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedModuleTimeEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedModuleTimeEntry_default = (const lean_object*)&l_Lake_instInhabitedModuleTimeEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedModuleTimeEntry = (const lean_object*)&l_Lake_instInhabitedModuleTimeEntry_default___closed__1_value;
static const lean_string_object l_Lake_moduleTimesFileName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "module-times.tsv"};
static const lean_object* l_Lake_moduleTimesFileName___closed__0 = (const lean_object*)&l_Lake_moduleTimesFileName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_moduleTimesFileName = (const lean_object*)&l_Lake_moduleTimesFileName___closed__0_value;
static const lean_string_object l_Lake_legacyModuleTimesFileName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "module-times.json"};
static const lean_object* l_Lake_legacyModuleTimesFileName___closed__0 = (const lean_object*)&l_Lake_legacyModuleTimesFileName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_legacyModuleTimesFileName = (const lean_object*)&l_Lake_legacyModuleTimesFileName___closed__0_value;
static const lean_string_object l_Lake_moduleTimesHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "lake-module-times 3"};
static const lean_object* l_Lake_moduleTimesHeader___closed__0 = (const lean_object*)&l_Lake_moduleTimesHeader___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_moduleTimesHeader = (const lean_object*)&l_Lake_moduleTimesHeader___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_byteAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_byteAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_slice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_slice___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findByte(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findByte___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_commonPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_commonPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_compareRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_isEscapedByte(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_isEscapedByte___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_isEscaped(uint32_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_isEscaped___boxed(lean_object*);
LEAN_EXPORT uint32_t l___private_Lake_Build_ModuleTimes_0__Lake_hexDigit(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_hexDigit___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped_findSpecial(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped_findSpecial___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "%-"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore_sep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore_sep___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "%#"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_encodeModuleName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "%!"};
static const lean_object* l_Lake_encodeModuleName___closed__0 = (const lean_object*)&l_Lake_encodeModuleName___closed__0_value;
static const lean_string_object l_Lake_encodeModuleName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_encodeModuleName___closed__1 = (const lean_object*)&l_Lake_encodeModuleName___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_encodeModuleName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_encodeModuleName___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_hexVal_x3f(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_hexVal_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_componentKind(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_componentKind___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "bad name component '"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "empty name component (an empty component is written %-)"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__0_value)}};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__1 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_instInhabitedModuleTimeRow_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instInhabitedModuleTimeRow_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedModuleTimeRow_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedModuleTimeRow_default = (const lean_object*)&l_Lake_instInhabitedModuleTimeRow_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedModuleTimeRow = (const lean_object*)&l_Lake_instInhabitedModuleTimeRow_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "bad import index"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__0_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_scanImports(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_scanImports___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "' is not after '"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__0_value;
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' (lines are sorted by name)"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__1 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__1_value;
static const lean_array_object l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "line "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "expected <ms>\\t<rem>\\t<name>\\t<imports>"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "bad remaining path '"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "bad compile time '"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "line 1: expected 'lake-module-times 3', got '"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__0_value;
static const lean_array_object l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1_value),((lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1_value)}};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__2 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__2_value;
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ": import index "};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__3 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__3_value;
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ", but there are "};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__4 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__4_value;
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " lines"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__5 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "; ignoring it and starting a new record (delete it to silence this warning)"};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_readModuleTimes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_encodeModuleName___closed__1_value),((lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1_value)}};
static const lean_object* l_Lake_readModuleTimes___closed__0 = (const lean_object*)&l_Lake_readModuleTimes___closed__0_value;
static const lean_string_object l_Lake_readModuleTimes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = ": a module-times record from an older Lake"};
static const lean_object* l_Lake_readModuleTimes___closed__1 = (const lean_object*)&l_Lake_readModuleTimes___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_readModuleTimes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_readModuleTimes___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_ModuleTimes_0__Lake_importIndices___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2_value),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_importIndices___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_importIndices___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_importIndices(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_importIndices___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_writeModuleTimesFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".tmp"};
static const lean_object* l_Lake_writeModuleTimesFile___closed__0 = (const lean_object*)&l_Lake_writeModuleTimesFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_writeModuleTimesFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeModuleTimesFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_moduleTimesStamp_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_moduleTimesStamp_x3f___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_visitRemaining_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_visitRemaining_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_remainingPaths(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_remainingPaths___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compilePrio(lean_object*);
LEAN_EXPORT lean_object* l_Lake_compilePrio___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_load_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_load_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_load(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_load___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_prio(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_prio___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_record(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_record___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_markSeen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_markSeen___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_ModuleTimes_0__Lake_keepRows___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2_value),((lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2_value)}};
static const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_keepRows___closed__0 = (const lean_object*)&l___private_Lake_Build_ModuleTimes_0__Lake_keepRows___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_keepRows(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_keepRows___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_kept_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_kept_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_hollow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_hollow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_fresh_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_fresh_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_extra_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_extra_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_instInhabitedOutLine_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instInhabitedOutLine_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedOutLine_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedOutLine_default = (const lean_object*)&l_Lake_instInhabitedOutLine_default___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_instInhabitedOutLine = (const lean_object*)&l_Lake_instInhabitedOutLine_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_bsearch_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_bsearch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_ModuleTimes_save_spec__27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_ModuleTimes_save_spec__27___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_ModuleTimes_save___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_ModuleTimes_save___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__17(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_encodeModuleName___closed__1_value),((lean_object*)&l_Lake_instInhabitedModuleTimeEntry_default___closed__1_value)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14_spec__17(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lake_ModuleTimes_save_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__25___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__26(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lake_ModuleTimes_save_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9_spec__30___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_ModuleTimes_save___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "lake-module-times 3\n"};
static const lean_object* l_Lake_ModuleTimes_save___closed__0 = (const lean_object*)&l_Lake_ModuleTimes_save___closed__0_value;
static lean_once_cell_t l_Lake_ModuleTimes_save___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ModuleTimes_save___closed__1;
static lean_once_cell_t l_Lake_ModuleTimes_save___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ModuleTimes_save___closed__2;
static const lean_array_object l_Lake_ModuleTimes_save___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_ModuleTimes_save___closed__3 = (const lean_object*)&l_Lake_ModuleTimes_save___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9_spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_byteAt(lean_object* v_s_15_, lean_object* v_i_16_){
_start:
{
lean_object* v___x_17_; uint8_t v___x_18_; 
v___x_17_ = lean_string_utf8_byte_size(v_s_15_);
v___x_18_ = lean_nat_dec_lt(v_i_16_, v___x_17_);
if (v___x_18_ == 0)
{
uint8_t v___x_19_; 
lean_dec(v_i_16_);
v___x_19_ = 0;
return v___x_19_;
}
else
{
uint8_t v___x_20_; 
v___x_20_ = lean_string_get_byte_fast(v_s_15_, v_i_16_);
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_byteAt___boxed(lean_object* v_s_21_, lean_object* v_i_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l___private_Lake_Build_ModuleTimes_0__Lake_byteAt(v_s_21_, v_i_22_);
lean_dec_ref(v_s_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_slice(lean_object* v_s_25_, lean_object* v_b_26_, lean_object* v_e_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_string_utf8_extract(v_s_25_, v_b_26_, v_e_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_slice___boxed(lean_object* v_s_29_, lean_object* v_b_30_, lean_object* v_e_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l___private_Lake_Build_ModuleTimes_0__Lake_slice(v_s_29_, v_b_30_, v_e_31_);
lean_dec(v_e_31_);
lean_dec(v_b_30_);
lean_dec_ref(v_s_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findByte(lean_object* v_s_33_, uint8_t v_c_34_, lean_object* v_i_35_, lean_object* v_stop_36_){
_start:
{
uint8_t v___y_38_; uint8_t v___x_43_; 
v___x_43_ = lean_nat_dec_lt(v_i_35_, v_stop_36_);
if (v___x_43_ == 0)
{
lean_dec(v_i_35_);
lean_inc(v_stop_36_);
return v_stop_36_;
}
else
{
lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_44_ = lean_string_utf8_byte_size(v_s_33_);
v___x_45_ = lean_nat_dec_lt(v_i_35_, v___x_44_);
if (v___x_45_ == 0)
{
uint8_t v___x_46_; 
v___x_46_ = 0;
v___y_38_ = v___x_46_;
goto v___jp_37_;
}
else
{
uint8_t v___x_47_; 
lean_inc(v_i_35_);
v___x_47_ = lean_string_get_byte_fast(v_s_33_, v_i_35_);
v___y_38_ = v___x_47_;
goto v___jp_37_;
}
}
v___jp_37_:
{
uint8_t v___x_39_; 
v___x_39_ = lean_uint8_dec_eq(v___y_38_, v_c_34_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_unsigned_to_nat(1u);
v___x_41_ = lean_nat_add(v_i_35_, v___x_40_);
lean_dec(v_i_35_);
v_i_35_ = v___x_41_;
goto _start;
}
else
{
return v_i_35_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findByte___boxed(lean_object* v_s_48_, lean_object* v_c_49_, lean_object* v_i_50_, lean_object* v_stop_51_){
_start:
{
uint8_t v_c_boxed_52_; lean_object* v_res_53_; 
v_c_boxed_52_ = lean_unbox(v_c_49_);
v_res_53_ = l___private_Lake_Build_ModuleTimes_0__Lake_findByte(v_s_48_, v_c_boxed_52_, v_i_50_, v_stop_51_);
lean_dec(v_stop_51_);
lean_dec_ref(v_s_48_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd(lean_object* v_s_54_, lean_object* v_i_55_, lean_object* v_stop_56_){
_start:
{
uint8_t v___y_58_; uint8_t v___x_66_; 
v___x_66_ = lean_nat_dec_lt(v_i_55_, v_stop_56_);
if (v___x_66_ == 0)
{
lean_dec(v_i_55_);
lean_inc(v_stop_56_);
return v_stop_56_;
}
else
{
lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_67_ = lean_string_utf8_byte_size(v_s_54_);
v___x_68_ = lean_nat_dec_lt(v_i_55_, v___x_67_);
if (v___x_68_ == 0)
{
uint8_t v___x_69_; 
v___x_69_ = 0;
v___y_58_ = v___x_69_;
goto v___jp_57_;
}
else
{
uint8_t v___x_70_; 
lean_inc(v_i_55_);
v___x_70_ = lean_string_get_byte_fast(v_s_54_, v_i_55_);
v___y_58_ = v___x_70_;
goto v___jp_57_;
}
}
v___jp_57_:
{
uint8_t v___x_59_; uint8_t v___x_60_; 
v___x_59_ = 9;
v___x_60_ = lean_uint8_dec_eq(v___y_58_, v___x_59_);
if (v___x_60_ == 0)
{
uint8_t v___x_61_; uint8_t v___x_62_; 
v___x_61_ = 10;
v___x_62_ = lean_uint8_dec_eq(v___y_58_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = lean_nat_add(v_i_55_, v___x_63_);
lean_dec(v_i_55_);
v_i_55_ = v___x_64_;
goto _start;
}
else
{
return v_i_55_;
}
}
else
{
return v_i_55_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd___boxed(lean_object* v_s_71_, lean_object* v_i_72_, lean_object* v_stop_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd(v_s_71_, v_i_72_, v_stop_73_);
lean_dec(v_stop_73_);
lean_dec_ref(v_s_71_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_commonPrefix(lean_object* v_s_75_, lean_object* v_a_76_, lean_object* v_ae_77_, lean_object* v_b_78_, lean_object* v_be_79_, lean_object* v_n_80_){
_start:
{
uint8_t v___y_82_; uint8_t v___y_83_; uint8_t v___y_89_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_95_ = lean_nat_add(v_a_76_, v_n_80_);
v___x_96_ = lean_nat_dec_lt(v___x_95_, v_ae_77_);
if (v___x_96_ == 0)
{
lean_dec(v___x_95_);
return v_n_80_;
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_nat_add(v_b_78_, v_n_80_);
v___x_98_ = lean_nat_dec_lt(v___x_97_, v_be_79_);
lean_dec(v___x_97_);
if (v___x_98_ == 0)
{
lean_dec(v___x_95_);
return v_n_80_;
}
else
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_string_utf8_byte_size(v_s_75_);
v___x_100_ = lean_nat_dec_lt(v___x_95_, v___x_99_);
if (v___x_100_ == 0)
{
uint8_t v___x_101_; 
lean_dec(v___x_95_);
v___x_101_ = 0;
v___y_89_ = v___x_101_;
goto v___jp_88_;
}
else
{
uint8_t v___x_102_; 
v___x_102_ = lean_string_get_byte_fast(v_s_75_, v___x_95_);
v___y_89_ = v___x_102_;
goto v___jp_88_;
}
}
}
v___jp_81_:
{
uint8_t v___x_84_; 
v___x_84_ = lean_uint8_dec_eq(v___y_82_, v___y_83_);
if (v___x_84_ == 0)
{
return v_n_80_;
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_nat_add(v_n_80_, v___x_85_);
lean_dec(v_n_80_);
v_n_80_ = v___x_86_;
goto _start;
}
}
v___jp_88_:
{
lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_90_ = lean_nat_add(v_b_78_, v_n_80_);
v___x_91_ = lean_string_utf8_byte_size(v_s_75_);
v___x_92_ = lean_nat_dec_lt(v___x_90_, v___x_91_);
if (v___x_92_ == 0)
{
uint8_t v___x_93_; 
lean_dec(v___x_90_);
v___x_93_ = 0;
v___y_82_ = v___y_89_;
v___y_83_ = v___x_93_;
goto v___jp_81_;
}
else
{
uint8_t v___x_94_; 
v___x_94_ = lean_string_get_byte_fast(v_s_75_, v___x_90_);
v___y_82_ = v___y_89_;
v___y_83_ = v___x_94_;
goto v___jp_81_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_commonPrefix___boxed(lean_object* v_s_103_, lean_object* v_a_104_, lean_object* v_ae_105_, lean_object* v_b_106_, lean_object* v_be_107_, lean_object* v_n_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l___private_Lake_Build_ModuleTimes_0__Lake_commonPrefix(v_s_103_, v_a_104_, v_ae_105_, v_b_106_, v_be_107_, v_n_108_);
lean_dec(v_be_107_);
lean_dec(v_b_106_);
lean_dec(v_ae_105_);
lean_dec(v_a_104_);
lean_dec_ref(v_s_103_);
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(lean_object* v_s_110_, lean_object* v_b_111_, lean_object* v_e_112_, lean_object* v_t_113_, lean_object* v_j_114_){
_start:
{
uint8_t v___y_116_; uint8_t v___y_117_; uint8_t v___y_127_; uint8_t v___x_132_; 
v___x_132_ = lean_nat_dec_lt(v_b_111_, v_e_112_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; uint8_t v___x_134_; 
lean_dec(v_b_111_);
v___x_133_ = lean_string_utf8_byte_size(v_t_113_);
v___x_134_ = lean_nat_dec_lt(v_j_114_, v___x_133_);
lean_dec(v_j_114_);
if (v___x_134_ == 0)
{
uint8_t v___x_135_; 
v___x_135_ = 1;
return v___x_135_;
}
else
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
}
else
{
lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_137_ = lean_string_utf8_byte_size(v_t_113_);
v___x_138_ = lean_nat_dec_lt(v_j_114_, v___x_137_);
if (v___x_138_ == 0)
{
uint8_t v___x_139_; 
lean_dec(v_j_114_);
lean_dec(v_b_111_);
v___x_139_ = 2;
return v___x_139_;
}
else
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = lean_string_utf8_byte_size(v_s_110_);
v___x_141_ = lean_nat_dec_lt(v_b_111_, v___x_140_);
if (v___x_141_ == 0)
{
uint8_t v___x_142_; 
v___x_142_ = 0;
v___y_127_ = v___x_142_;
goto v___jp_126_;
}
else
{
uint8_t v___x_143_; 
lean_inc(v_b_111_);
v___x_143_ = lean_string_get_byte_fast(v_s_110_, v_b_111_);
v___y_127_ = v___x_143_;
goto v___jp_126_;
}
}
}
v___jp_115_:
{
uint8_t v___x_118_; 
v___x_118_ = lean_uint8_dec_lt(v___y_116_, v___y_117_);
if (v___x_118_ == 0)
{
uint8_t v___x_119_; 
v___x_119_ = lean_uint8_dec_lt(v___y_117_, v___y_116_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_unsigned_to_nat(1u);
v___x_121_ = lean_nat_add(v_b_111_, v___x_120_);
lean_dec(v_b_111_);
v___x_122_ = lean_nat_add(v_j_114_, v___x_120_);
lean_dec(v_j_114_);
v_b_111_ = v___x_121_;
v_j_114_ = v___x_122_;
goto _start;
}
else
{
uint8_t v___x_124_; 
lean_dec(v_j_114_);
lean_dec(v_b_111_);
v___x_124_ = 2;
return v___x_124_;
}
}
else
{
uint8_t v___x_125_; 
lean_dec(v_j_114_);
lean_dec(v_b_111_);
v___x_125_ = 0;
return v___x_125_;
}
}
v___jp_126_:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_string_utf8_byte_size(v_t_113_);
v___x_129_ = lean_nat_dec_lt(v_j_114_, v___x_128_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 0;
v___y_116_ = v___y_127_;
v___y_117_ = v___x_130_;
goto v___jp_115_;
}
else
{
uint8_t v___x_131_; 
lean_inc(v_j_114_);
v___x_131_ = lean_string_get_byte_fast(v_t_113_, v_j_114_);
v___y_116_ = v___y_127_;
v___y_117_ = v___x_131_;
goto v___jp_115_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_compareRange___boxed(lean_object* v_s_144_, lean_object* v_b_145_, lean_object* v_e_146_, lean_object* v_t_147_, lean_object* v_j_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v_s_144_, v_b_145_, v_e_146_, v_t_147_, v_j_148_);
lean_dec_ref(v_t_147_);
lean_dec(v_e_146_);
lean_dec_ref(v_s_144_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg(lean_object* v_s_153_, lean_object* v_range_154_, lean_object* v_b_155_, lean_object* v_i_156_){
_start:
{
lean_object* v_stop_157_; lean_object* v_step_158_; uint8_t v___x_159_; 
v_stop_157_ = lean_ctor_get(v_range_154_, 1);
v_step_158_ = lean_ctor_get(v_range_154_, 2);
v___x_159_ = lean_nat_dec_lt(v_i_156_, v_stop_157_);
if (v___x_159_ == 0)
{
lean_dec(v_i_156_);
return v_b_155_;
}
else
{
lean_object* v_snd_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_188_; 
v_snd_160_ = lean_ctor_get(v_b_155_, 1);
v_isSharedCheck_188_ = !lean_is_exclusive(v_b_155_);
if (v_isSharedCheck_188_ == 0)
{
lean_object* v_unused_189_; 
v_unused_189_ = lean_ctor_get(v_b_155_, 0);
lean_dec(v_unused_189_);
v___x_162_ = v_b_155_;
v_isShared_163_ = v_isSharedCheck_188_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_snd_160_);
lean_dec(v_b_155_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_188_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_169_; uint8_t v___y_171_; lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_169_ = lean_box(0);
v___x_184_ = lean_string_utf8_byte_size(v_s_153_);
v___x_185_ = lean_nat_dec_lt(v_i_156_, v___x_184_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; 
v___x_186_ = 0;
v___y_171_ = v___x_186_;
goto v___jp_170_;
}
else
{
uint8_t v___x_187_; 
lean_inc(v_i_156_);
v___x_187_ = lean_string_get_byte_fast(v_s_153_, v_i_156_);
v___y_171_ = v___x_187_;
goto v___jp_170_;
}
v___jp_164_:
{
lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_165_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg___closed__0));
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_165_);
v___x_167_ = v___x_162_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_165_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v_snd_160_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
v___jp_170_:
{
uint8_t v___x_172_; uint8_t v___x_173_; 
v___x_172_ = 48;
v___x_173_ = lean_uint8_dec_le(v___x_172_, v___y_171_);
if (v___x_173_ == 0)
{
lean_dec(v_i_156_);
goto v___jp_164_;
}
else
{
uint8_t v___x_174_; uint8_t v___x_175_; 
v___x_174_ = 57;
v___x_175_ = lean_uint8_dec_le(v___y_171_, v___x_174_);
if (v___x_175_ == 0)
{
lean_dec(v_i_156_);
goto v___jp_164_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
lean_del_object(v___x_162_);
v___x_176_ = lean_unsigned_to_nat(10u);
v___x_177_ = lean_nat_mul(v___x_176_, v_snd_160_);
lean_dec(v_snd_160_);
v___x_178_ = lean_uint8_sub(v___y_171_, v___x_172_);
v___x_179_ = lean_uint8_to_nat(v___x_178_);
v___x_180_ = lean_nat_add(v___x_177_, v___x_179_);
lean_dec(v___x_177_);
v___x_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_169_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = lean_nat_add(v_i_156_, v_step_158_);
lean_dec(v_i_156_);
v_b_155_ = v___x_181_;
v_i_156_ = v___x_182_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg___boxed(lean_object* v_s_190_, lean_object* v_range_191_, lean_object* v_b_192_, lean_object* v_i_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg(v_s_190_, v_range_191_, v_b_192_, v_i_193_);
lean_dec_ref(v_range_191_);
lean_dec_ref(v_s_190_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f(lean_object* v_s_198_, lean_object* v_b_199_, lean_object* v_e_200_){
_start:
{
uint8_t v___y_211_; uint8_t v___x_218_; 
v___x_218_ = lean_nat_dec_le(v_e_200_, v_b_199_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = lean_string_utf8_byte_size(v_s_198_);
v___x_220_ = lean_nat_dec_lt(v_b_199_, v___x_219_);
if (v___x_220_ == 0)
{
uint8_t v___x_221_; 
v___x_221_ = 0;
v___y_211_ = v___x_221_;
goto v___jp_210_;
}
else
{
uint8_t v___x_222_; 
lean_inc(v_b_199_);
v___x_222_ = lean_string_get_byte_fast(v_s_198_, v_b_199_);
v___y_211_ = v___x_222_;
goto v___jp_210_;
}
}
else
{
lean_object* v___x_223_; 
lean_dec(v_e_200_);
lean_dec(v_b_199_);
v___x_223_ = lean_box(0);
return v___x_223_;
}
v___jp_201_:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v_fst_206_; 
v___x_202_ = lean_unsigned_to_nat(1u);
lean_inc(v_b_199_);
v___x_203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_203_, 0, v_b_199_);
lean_ctor_set(v___x_203_, 1, v_e_200_);
lean_ctor_set(v___x_203_, 2, v___x_202_);
v___x_204_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f___closed__0));
v___x_205_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg(v_s_198_, v___x_203_, v___x_204_, v_b_199_);
lean_dec_ref_known(v___x_203_, 3);
v_fst_206_ = lean_ctor_get(v___x_205_, 0);
if (lean_obj_tag(v_fst_206_) == 0)
{
lean_object* v_snd_207_; lean_object* v___x_208_; 
v_snd_207_ = lean_ctor_get(v___x_205_, 1);
lean_inc(v_snd_207_);
lean_dec_ref(v___x_205_);
v___x_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_208_, 0, v_snd_207_);
return v___x_208_;
}
else
{
lean_object* v_val_209_; 
lean_inc_ref(v_fst_206_);
lean_dec_ref(v___x_205_);
v_val_209_ = lean_ctor_get(v_fst_206_, 0);
lean_inc(v_val_209_);
lean_dec_ref_known(v_fst_206_, 1);
return v_val_209_;
}
}
v___jp_210_:
{
uint8_t v___x_212_; uint8_t v___x_213_; 
v___x_212_ = 48;
v___x_213_ = lean_uint8_dec_eq(v___y_211_, v___x_212_);
if (v___x_213_ == 0)
{
goto v___jp_201_;
}
else
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_214_ = lean_unsigned_to_nat(1u);
v___x_215_ = lean_nat_add(v_b_199_, v___x_214_);
v___x_216_ = lean_nat_dec_lt(v___x_215_, v_e_200_);
lean_dec(v___x_215_);
if (v___x_216_ == 0)
{
goto v___jp_201_;
}
else
{
lean_object* v___x_217_; 
lean_dec(v_e_200_);
lean_dec(v_b_199_);
v___x_217_ = lean_box(0);
return v___x_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f___boxed(lean_object* v_s_224_, lean_object* v_b_225_, lean_object* v_e_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f(v_s_224_, v_b_225_, v_e_226_);
lean_dec_ref(v_s_224_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0(lean_object* v_s_228_, lean_object* v_range_229_, lean_object* v_b_230_, lean_object* v_i_231_, lean_object* v_hs_232_, lean_object* v_hl_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___redArg(v_s_228_, v_range_229_, v_b_230_, v_i_231_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0___boxed(lean_object* v_s_235_, lean_object* v_range_236_, lean_object* v_b_237_, lean_object* v_i_238_, lean_object* v_hs_239_, lean_object* v_hl_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f_spec__0(v_s_235_, v_range_236_, v_b_237_, v_i_238_, v_hs_239_, v_hl_240_);
lean_dec_ref(v_range_236_);
lean_dec_ref(v_s_235_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(lean_object* v_out_242_, lean_object* v_n_243_){
_start:
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(10u);
v___x_245_ = lean_nat_dec_lt(v_n_243_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint32_t v___x_251_; lean_object* v___x_252_; 
v___x_246_ = lean_nat_div(v_n_243_, v___x_244_);
v___x_247_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(v_out_242_, v___x_246_);
lean_dec(v___x_246_);
v___x_248_ = lean_unsigned_to_nat(48u);
v___x_249_ = lean_nat_mod(v_n_243_, v___x_244_);
v___x_250_ = lean_nat_add(v___x_248_, v___x_249_);
lean_dec(v___x_249_);
v___x_251_ = l_Char_ofNat(v___x_250_);
lean_dec(v___x_250_);
v___x_252_ = lean_string_push(v___x_247_, v___x_251_);
return v___x_252_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; uint32_t v___x_255_; lean_object* v___x_256_; 
v___x_253_ = lean_unsigned_to_nat(48u);
v___x_254_ = lean_nat_add(v___x_253_, v_n_243_);
v___x_255_ = l_Char_ofNat(v___x_254_);
lean_dec(v___x_254_);
v___x_256_ = lean_string_push(v_out_242_, v___x_255_);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNat___boxed(lean_object* v_out_257_, lean_object* v_n_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(v_out_257_, v_n_258_);
lean_dec(v_n_258_);
return v_res_259_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_isEscapedByte(uint8_t v_c_260_){
_start:
{
uint8_t v___x_261_; uint8_t v___x_262_; 
v___x_261_ = 37;
v___x_262_ = lean_uint8_dec_eq(v_c_260_, v___x_261_);
if (v___x_262_ == 0)
{
uint8_t v___x_263_; uint8_t v___x_264_; 
v___x_263_ = 46;
v___x_264_ = lean_uint8_dec_eq(v_c_260_, v___x_263_);
if (v___x_264_ == 0)
{
uint8_t v___x_265_; uint8_t v___x_266_; 
v___x_265_ = 32;
v___x_266_ = lean_uint8_dec_eq(v_c_260_, v___x_265_);
if (v___x_266_ == 0)
{
uint8_t v___x_267_; uint8_t v___x_268_; 
v___x_267_ = 9;
v___x_268_ = lean_uint8_dec_eq(v_c_260_, v___x_267_);
if (v___x_268_ == 0)
{
uint8_t v___x_269_; uint8_t v___x_270_; 
v___x_269_ = 10;
v___x_270_ = lean_uint8_dec_eq(v_c_260_, v___x_269_);
if (v___x_270_ == 0)
{
uint8_t v___x_271_; uint8_t v___x_272_; 
v___x_271_ = 13;
v___x_272_ = lean_uint8_dec_eq(v_c_260_, v___x_271_);
return v___x_272_;
}
else
{
return v___x_270_;
}
}
else
{
return v___x_268_;
}
}
else
{
return v___x_266_;
}
}
else
{
return v___x_264_;
}
}
else
{
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_isEscapedByte___boxed(lean_object* v_c_273_){
_start:
{
uint8_t v_c_boxed_274_; uint8_t v_res_275_; lean_object* v_r_276_; 
v_c_boxed_274_ = lean_unbox(v_c_273_);
v_res_275_ = l___private_Lake_Build_ModuleTimes_0__Lake_isEscapedByte(v_c_boxed_274_);
v_r_276_ = lean_box(v_res_275_);
return v_r_276_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_isEscaped(uint32_t v_c_277_){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_278_ = lean_uint32_to_nat(v_c_277_);
v___x_279_ = lean_unsigned_to_nat(128u);
v___x_280_ = lean_nat_dec_lt(v___x_278_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec(v___x_278_);
return v___x_280_;
}
else
{
uint8_t v___x_281_; uint8_t v___x_282_; uint8_t v___x_283_; 
v___x_281_ = lean_uint8_of_nat(v___x_278_);
lean_dec(v___x_278_);
v___x_282_ = 37;
v___x_283_ = lean_uint8_dec_eq(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
uint8_t v___x_284_; uint8_t v___x_285_; 
v___x_284_ = 46;
v___x_285_ = lean_uint8_dec_eq(v___x_281_, v___x_284_);
if (v___x_285_ == 0)
{
uint8_t v___x_286_; uint8_t v___x_287_; 
v___x_286_ = 32;
v___x_287_ = lean_uint8_dec_eq(v___x_281_, v___x_286_);
if (v___x_287_ == 0)
{
uint8_t v___x_288_; uint8_t v___x_289_; 
v___x_288_ = 9;
v___x_289_ = lean_uint8_dec_eq(v___x_281_, v___x_288_);
if (v___x_289_ == 0)
{
uint8_t v___x_290_; uint8_t v___x_291_; 
v___x_290_ = 10;
v___x_291_ = lean_uint8_dec_eq(v___x_281_, v___x_290_);
if (v___x_291_ == 0)
{
uint8_t v___x_292_; uint8_t v___x_293_; 
v___x_292_ = 13;
v___x_293_ = lean_uint8_dec_eq(v___x_281_, v___x_292_);
return v___x_293_;
}
else
{
return v___x_291_;
}
}
else
{
return v___x_289_;
}
}
else
{
return v___x_287_;
}
}
else
{
return v___x_285_;
}
}
else
{
return v___x_283_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_isEscaped___boxed(lean_object* v_c_294_){
_start:
{
uint32_t v_c_boxed_295_; uint8_t v_res_296_; lean_object* v_r_297_; 
v_c_boxed_295_ = lean_unbox_uint32(v_c_294_);
lean_dec(v_c_294_);
v_res_296_ = l___private_Lake_Build_ModuleTimes_0__Lake_isEscaped(v_c_boxed_295_);
v_r_297_ = lean_box(v_res_296_);
return v_r_297_;
}
}
LEAN_EXPORT uint32_t l___private_Lake_Build_ModuleTimes_0__Lake_hexDigit(lean_object* v_n_298_){
_start:
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = lean_unsigned_to_nat(10u);
v___x_300_ = lean_nat_dec_lt(v_n_298_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; uint32_t v___x_303_; 
v___x_301_ = lean_unsigned_to_nat(55u);
v___x_302_ = lean_nat_add(v___x_301_, v_n_298_);
v___x_303_ = l_Char_ofNat(v___x_302_);
lean_dec(v___x_302_);
return v___x_303_;
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; uint32_t v___x_306_; 
v___x_304_ = lean_unsigned_to_nat(48u);
v___x_305_ = lean_nat_add(v___x_304_, v_n_298_);
v___x_306_ = l_Char_ofNat(v___x_305_);
lean_dec(v___x_305_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_hexDigit___boxed(lean_object* v_n_307_){
_start:
{
uint32_t v_res_308_; lean_object* v_r_309_; 
v_res_308_ = l___private_Lake_Build_ModuleTimes_0__Lake_hexDigit(v_n_307_);
lean_dec(v_n_307_);
v_r_309_ = lean_box_uint32(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped_findSpecial(lean_object* v_s_310_, lean_object* v_i_311_, lean_object* v_e_312_){
_start:
{
uint8_t v___y_314_; uint8_t v___x_330_; 
v___x_330_ = lean_nat_dec_lt(v_i_311_, v_e_312_);
if (v___x_330_ == 0)
{
return v_i_311_;
}
else
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = lean_string_utf8_byte_size(v_s_310_);
v___x_332_ = lean_nat_dec_lt(v_i_311_, v___x_331_);
if (v___x_332_ == 0)
{
uint8_t v___x_333_; 
v___x_333_ = 0;
v___y_314_ = v___x_333_;
goto v___jp_313_;
}
else
{
uint8_t v___x_334_; 
lean_inc(v_i_311_);
v___x_334_ = lean_string_get_byte_fast(v_s_310_, v_i_311_);
v___y_314_ = v___x_334_;
goto v___jp_313_;
}
}
v___jp_313_:
{
uint8_t v___x_315_; uint8_t v___x_316_; 
v___x_315_ = 37;
v___x_316_ = lean_uint8_dec_eq(v___y_314_, v___x_315_);
if (v___x_316_ == 0)
{
uint8_t v___x_317_; uint8_t v___x_318_; 
v___x_317_ = 46;
v___x_318_ = lean_uint8_dec_eq(v___y_314_, v___x_317_);
if (v___x_318_ == 0)
{
uint8_t v___x_319_; uint8_t v___x_320_; 
v___x_319_ = 32;
v___x_320_ = lean_uint8_dec_eq(v___y_314_, v___x_319_);
if (v___x_320_ == 0)
{
uint8_t v___x_321_; uint8_t v___x_322_; 
v___x_321_ = 9;
v___x_322_ = lean_uint8_dec_eq(v___y_314_, v___x_321_);
if (v___x_322_ == 0)
{
uint8_t v___x_323_; uint8_t v___x_324_; 
v___x_323_ = 10;
v___x_324_ = lean_uint8_dec_eq(v___y_314_, v___x_323_);
if (v___x_324_ == 0)
{
uint8_t v___x_325_; uint8_t v___x_326_; 
v___x_325_ = 13;
v___x_326_ = lean_uint8_dec_eq(v___y_314_, v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(1u);
v___x_328_ = lean_nat_add(v_i_311_, v___x_327_);
lean_dec(v_i_311_);
v_i_311_ = v___x_328_;
goto _start;
}
else
{
return v_i_311_;
}
}
else
{
return v_i_311_;
}
}
else
{
return v_i_311_;
}
}
else
{
return v_i_311_;
}
}
else
{
return v_i_311_;
}
}
else
{
return v_i_311_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped_findSpecial___boxed(lean_object* v_s_335_, lean_object* v_i_336_, lean_object* v_e_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped_findSpecial(v_s_335_, v_i_336_, v_e_337_);
lean_dec(v_e_337_);
lean_dec_ref(v_s_335_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped(lean_object* v_out_339_, lean_object* v_s_340_, lean_object* v_i_341_, lean_object* v_e_342_){
_start:
{
uint8_t v___y_344_; uint8_t v___y_360_; uint8_t v___x_379_; 
v___x_379_ = lean_nat_dec_lt(v_i_341_, v_e_342_);
if (v___x_379_ == 0)
{
lean_dec(v_i_341_);
return v_out_339_;
}
else
{
lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_380_ = lean_string_utf8_byte_size(v_s_340_);
v___x_381_ = lean_nat_dec_lt(v_i_341_, v___x_380_);
if (v___x_381_ == 0)
{
uint8_t v___x_382_; 
v___x_382_ = 0;
v___y_360_ = v___x_382_;
goto v___jp_359_;
}
else
{
uint8_t v___x_383_; 
lean_inc(v_i_341_);
v___x_383_ = lean_string_get_byte_fast(v_s_340_, v_i_341_);
v___y_360_ = v___x_383_;
goto v___jp_359_;
}
}
v___jp_343_:
{
uint32_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; uint32_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint32_t v___x_354_; lean_object* v_out_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_345_ = 37;
v___x_346_ = lean_string_push(v_out_339_, v___x_345_);
v___x_347_ = lean_uint8_to_nat(v___y_344_);
v___x_348_ = lean_unsigned_to_nat(16u);
v___x_349_ = lean_unsigned_to_nat(4u);
v___x_350_ = lean_nat_shiftr(v___x_347_, v___x_349_);
v___x_351_ = l___private_Lake_Build_ModuleTimes_0__Lake_hexDigit(v___x_350_);
lean_dec(v___x_350_);
v___x_352_ = lean_string_push(v___x_346_, v___x_351_);
v___x_353_ = lean_nat_mod(v___x_347_, v___x_348_);
v___x_354_ = l___private_Lake_Build_ModuleTimes_0__Lake_hexDigit(v___x_353_);
lean_dec(v___x_353_);
v_out_355_ = lean_string_push(v___x_352_, v___x_354_);
v___x_356_ = lean_unsigned_to_nat(1u);
v___x_357_ = lean_nat_add(v_i_341_, v___x_356_);
lean_dec(v_i_341_);
v_out_339_ = v_out_355_;
v_i_341_ = v___x_357_;
goto _start;
}
v___jp_359_:
{
uint8_t v___x_361_; uint8_t v___x_362_; 
v___x_361_ = 37;
v___x_362_ = lean_uint8_dec_eq(v___y_360_, v___x_361_);
if (v___x_362_ == 0)
{
uint8_t v___x_363_; uint8_t v___x_364_; 
v___x_363_ = 46;
v___x_364_ = lean_uint8_dec_eq(v___y_360_, v___x_363_);
if (v___x_364_ == 0)
{
uint8_t v___x_365_; uint8_t v___x_366_; 
v___x_365_ = 32;
v___x_366_ = lean_uint8_dec_eq(v___y_360_, v___x_365_);
if (v___x_366_ == 0)
{
uint8_t v___x_367_; uint8_t v___x_368_; 
v___x_367_ = 9;
v___x_368_ = lean_uint8_dec_eq(v___y_360_, v___x_367_);
if (v___x_368_ == 0)
{
uint8_t v___x_369_; uint8_t v___x_370_; 
v___x_369_ = 10;
v___x_370_ = lean_uint8_dec_eq(v___y_360_, v___x_369_);
if (v___x_370_ == 0)
{
uint8_t v___x_371_; uint8_t v___x_372_; 
v___x_371_ = 13;
v___x_372_ = lean_uint8_dec_eq(v___y_360_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_next_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_373_ = lean_unsigned_to_nat(1u);
v___x_374_ = lean_nat_add(v_i_341_, v___x_373_);
v_next_375_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped_findSpecial(v_s_340_, v___x_374_, v_e_342_);
v___x_376_ = lean_string_utf8_extract(v_s_340_, v_i_341_, v_next_375_);
lean_dec(v_i_341_);
v___x_377_ = lean_string_append(v_out_339_, v___x_376_);
lean_dec_ref(v___x_376_);
v_out_339_ = v___x_377_;
v_i_341_ = v_next_375_;
goto _start;
}
else
{
v___y_344_ = v___y_360_;
goto v___jp_343_;
}
}
else
{
v___y_344_ = v___y_360_;
goto v___jp_343_;
}
}
else
{
v___y_344_ = v___y_360_;
goto v___jp_343_;
}
}
else
{
v___y_344_ = v___y_360_;
goto v___jp_343_;
}
}
else
{
v___y_344_ = v___y_360_;
goto v___jp_343_;
}
}
else
{
v___y_344_ = v___y_360_;
goto v___jp_343_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped___boxed(lean_object* v_out_384_, lean_object* v_s_385_, lean_object* v_i_386_, lean_object* v_e_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped(v_out_384_, v_s_385_, v_i_386_, v_e_387_);
lean_dec(v_e_387_);
lean_dec_ref(v_s_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent(lean_object* v_out_390_, lean_object* v_s_391_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_392_ = lean_string_utf8_byte_size(v_s_391_);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_nat_dec_eq(v___x_392_, v___x_393_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; 
v___x_395_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushEscaped(v_out_390_, v_s_391_, v___x_393_, v___x_392_);
return v___x_395_;
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent___closed__0));
v___x_397_ = lean_string_append(v_out_390_, v___x_396_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent___boxed(lean_object* v_out_398_, lean_object* v_s_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent(v_out_398_, v_s_399_);
lean_dec_ref(v_s_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore_sep(lean_object* v_out_401_, lean_object* v_a_402_){
_start:
{
if (lean_obj_tag(v_a_402_) == 0)
{
return v_out_401_;
}
else
{
uint32_t v___x_403_; lean_object* v___x_404_; 
v___x_403_ = 46;
v___x_404_ = lean_string_push(v_out_401_, v___x_403_);
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore_sep___boxed(lean_object* v_out_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore_sep(v_out_405_, v_a_406_);
lean_dec(v_a_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore(lean_object* v_out_409_, lean_object* v_x_410_){
_start:
{
switch(lean_obj_tag(v_x_410_))
{
case 0:
{
lean_inc_ref(v_out_409_);
return v_out_409_;
}
case 1:
{
lean_object* v_pre_411_; lean_object* v_str_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_pre_411_ = lean_ctor_get(v_x_410_, 0);
v_str_412_ = lean_ctor_get(v_x_410_, 1);
v___x_413_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore(v_out_409_, v_pre_411_);
v___x_414_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore_sep(v___x_413_, v_pre_411_);
v___x_415_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushComponent(v___x_414_, v_str_412_);
return v___x_415_;
}
default: 
{
lean_object* v_pre_416_; lean_object* v_i_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_pre_416_ = lean_ctor_get(v_x_410_, 0);
v_i_417_ = lean_ctor_get(v_x_410_, 1);
v___x_418_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore(v_out_409_, v_pre_416_);
v___x_419_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore_sep(v___x_418_, v_pre_416_);
v___x_420_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore___closed__0));
v___x_421_ = lean_string_append(v___x_419_, v___x_420_);
v___x_422_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(v___x_421_, v_i_417_);
return v___x_422_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore___boxed(lean_object* v_out_423_, lean_object* v_x_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore(v_out_423_, v_x_424_);
lean_dec(v_x_424_);
lean_dec_ref(v_out_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lake_encodeModuleName(lean_object* v_x_428_){
_start:
{
if (lean_obj_tag(v_x_428_) == 0)
{
lean_object* v___x_429_; 
v___x_429_ = ((lean_object*)(l_Lake_encodeModuleName___closed__0));
return v___x_429_;
}
else
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lake_encodeModuleName___closed__1));
v___x_431_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNameCore(v___x_430_, v_x_428_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_encodeModuleName___boxed(lean_object* v_x_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lake_encodeModuleName(v_x_432_);
lean_dec(v_x_432_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_hexVal_x3f(uint8_t v_c_434_){
_start:
{
uint8_t v___x_446_; uint8_t v___x_447_; 
v___x_446_ = 48;
v___x_447_ = lean_uint8_dec_le(v___x_446_, v_c_434_);
if (v___x_447_ == 0)
{
goto v___jp_435_;
}
else
{
uint8_t v___x_448_; uint8_t v___x_449_; 
v___x_448_ = 57;
v___x_449_ = lean_uint8_dec_le(v_c_434_, v___x_448_);
if (v___x_449_ == 0)
{
goto v___jp_435_;
}
else
{
uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_uint8_sub(v_c_434_, v___x_446_);
v___x_451_ = lean_uint8_to_nat(v___x_450_);
v___x_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
v___jp_435_:
{
uint8_t v___x_436_; uint8_t v___x_437_; 
v___x_436_ = 65;
v___x_437_ = lean_uint8_dec_le(v___x_436_, v_c_434_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; 
v___x_438_ = lean_box(0);
return v___x_438_;
}
else
{
uint8_t v___x_439_; uint8_t v___x_440_; 
v___x_439_ = 70;
v___x_440_ = lean_uint8_dec_le(v_c_434_, v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; 
v___x_441_ = lean_box(0);
return v___x_441_;
}
else
{
uint8_t v___x_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_442_ = 55;
v___x_443_ = lean_uint8_sub(v_c_434_, v___x_442_);
v___x_444_ = lean_uint8_to_nat(v___x_443_);
v___x_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
return v___x_445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_hexVal_x3f___boxed(lean_object* v_c_453_){
_start:
{
uint8_t v_c_boxed_454_; lean_object* v_res_455_; 
v_c_boxed_454_ = lean_unbox(v_c_453_);
v_res_455_ = l___private_Lake_Build_ModuleTimes_0__Lake_hexVal_x3f(v_c_boxed_454_);
return v_res_455_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_ModuleTimes_0__Lake_componentKind(lean_object* v_s_456_, lean_object* v_i_457_, lean_object* v_e_458_, uint8_t v_k_459_){
_start:
{
uint8_t v___y_461_; uint8_t v___x_475_; 
v___x_475_ = lean_nat_dec_lt(v_i_457_, v_e_458_);
if (v___x_475_ == 0)
{
lean_dec(v_i_457_);
return v_k_459_;
}
else
{
lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_476_ = lean_string_utf8_byte_size(v_s_456_);
v___x_477_ = lean_nat_dec_lt(v_i_457_, v___x_476_);
if (v___x_477_ == 0)
{
uint8_t v___x_478_; 
v___x_478_ = 0;
v___y_461_ = v___x_478_;
goto v___jp_460_;
}
else
{
uint8_t v___x_479_; 
lean_inc(v_i_457_);
v___x_479_ = lean_string_get_byte_fast(v_s_456_, v_i_457_);
v___y_461_ = v___x_479_;
goto v___jp_460_;
}
}
v___jp_460_:
{
uint8_t v___x_462_; uint8_t v___x_463_; 
v___x_462_ = 32;
v___x_463_ = lean_uint8_dec_eq(v___y_461_, v___x_462_);
if (v___x_463_ == 0)
{
uint8_t v___x_464_; uint8_t v___x_465_; 
v___x_464_ = 13;
v___x_465_ = lean_uint8_dec_eq(v___y_461_, v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; uint8_t v___x_469_; 
v___x_466_ = lean_unsigned_to_nat(1u);
v___x_467_ = lean_nat_add(v_i_457_, v___x_466_);
lean_dec(v_i_457_);
v___x_468_ = 37;
v___x_469_ = lean_uint8_dec_eq(v___y_461_, v___x_468_);
if (v___x_469_ == 0)
{
v_i_457_ = v___x_467_;
goto _start;
}
else
{
uint8_t v___x_471_; 
v___x_471_ = 1;
v_i_457_ = v___x_467_;
v_k_459_ = v___x_471_;
goto _start;
}
}
else
{
uint8_t v___x_473_; 
lean_dec(v_i_457_);
v___x_473_ = 2;
return v___x_473_;
}
}
else
{
uint8_t v___x_474_; 
lean_dec(v_i_457_);
v___x_474_ = 2;
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_componentKind___boxed(lean_object* v_s_480_, lean_object* v_i_481_, lean_object* v_e_482_, lean_object* v_k_483_){
_start:
{
uint8_t v_k_boxed_484_; uint8_t v_res_485_; lean_object* v_r_486_; 
v_k_boxed_484_ = lean_unbox(v_k_483_);
v_res_485_ = l___private_Lake_Build_ModuleTimes_0__Lake_componentKind(v_s_480_, v_i_481_, v_e_482_, v_k_boxed_484_);
lean_dec(v_e_482_);
lean_dec_ref(v_s_480_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(lean_object* v_s_489_, lean_object* v_b_490_, lean_object* v_e_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_492_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__0));
v___x_493_ = lean_string_utf8_extract(v_s_489_, v_b_490_, v_e_491_);
v___x_494_ = lean_string_append(v___x_492_, v___x_493_);
lean_dec_ref(v___x_493_);
v___x_495_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1));
v___x_496_ = lean_string_append(v___x_494_, v___x_495_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___boxed(lean_object* v_s_498_, lean_object* v_b_499_, lean_object* v_e_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_498_, v_b_499_, v_e_500_);
lean_dec(v_e_500_);
lean_dec(v_b_499_);
lean_dec_ref(v_s_498_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent(lean_object* v_00_u03b1_502_, lean_object* v_s_503_, lean_object* v_b_504_, lean_object* v_e_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_503_, v_b_504_, v_e_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___boxed(lean_object* v_00_u03b1_507_, lean_object* v_s_508_, lean_object* v_b_509_, lean_object* v_e_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent(v_00_u03b1_507_, v_s_508_, v_b_509_, v_e_510_);
lean_dec(v_e_510_);
lean_dec(v_b_509_);
lean_dec_ref(v_s_508_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___redArg(lean_object* v_s_512_, lean_object* v_b_513_, lean_object* v_e_514_, lean_object* v_a_515_){
_start:
{
lean_object* v_snd_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_664_; 
v_snd_516_ = lean_ctor_get(v_a_515_, 1);
v_isSharedCheck_664_ = !lean_is_exclusive(v_a_515_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; 
v_unused_665_ = lean_ctor_get(v_a_515_, 0);
lean_dec(v_unused_665_);
v___x_518_ = v_a_515_;
v_isShared_519_ = v_isSharedCheck_664_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_snd_516_);
lean_dec(v_a_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_664_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v_fst_520_; lean_object* v_snd_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_663_; 
v_fst_520_ = lean_ctor_get(v_snd_516_, 0);
v_snd_521_ = lean_ctor_get(v_snd_516_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_snd_516_);
if (v_isSharedCheck_663_ == 0)
{
v___x_523_ = v_snd_516_;
v_isShared_524_ = v_isSharedCheck_663_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_snd_521_);
lean_inc(v_fst_520_);
lean_dec(v_snd_516_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_663_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_550_; uint32_t v___y_552_; uint8_t v___x_559_; 
v___x_550_ = lean_box(0);
v___x_559_ = lean_nat_dec_lt(v_snd_521_, v_e_514_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___x_560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_560_, 0, v_fst_520_);
lean_ctor_set(v___x_560_, 1, v_snd_521_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_550_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
else
{
uint8_t v___x_563_; lean_object* v___y_565_; uint8_t v___y_566_; lean_object* v___y_601_; uint8_t v___y_602_; uint8_t v___y_622_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_563_ = 37;
v___x_659_ = lean_string_utf8_byte_size(v_s_512_);
v___x_660_ = lean_nat_dec_lt(v_snd_521_, v___x_659_);
if (v___x_660_ == 0)
{
uint8_t v___x_661_; 
v___x_661_ = 0;
v___y_622_ = v___x_661_;
goto v___jp_621_;
}
else
{
uint8_t v___x_662_; 
lean_inc(v_snd_521_);
v___x_662_ = lean_string_get_byte_fast(v_s_512_, v_snd_521_);
v___y_622_ = v___x_662_;
goto v___jp_621_;
}
v___jp_564_:
{
lean_object* v___x_567_; 
v___x_567_ = l___private_Lake_Build_ModuleTimes_0__Lake_hexVal_x3f(v___y_566_);
if (lean_obj_tag(v___x_567_) == 1)
{
lean_object* v_val_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; uint32_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; 
v_val_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_val_568_);
lean_dec_ref_known(v___x_567_, 1);
v___x_569_ = lean_unsigned_to_nat(16u);
v___x_570_ = lean_nat_mul(v___x_569_, v___y_565_);
lean_dec(v___y_565_);
v___x_571_ = lean_nat_add(v___x_570_, v_val_568_);
lean_dec(v_val_568_);
lean_dec(v___x_570_);
v___x_572_ = l_Char_ofNat(v___x_571_);
lean_dec(v___x_571_);
v___x_573_ = lean_uint32_to_nat(v___x_572_);
v___x_574_ = lean_unsigned_to_nat(128u);
v___x_575_ = lean_nat_dec_lt(v___x_573_, v___x_574_);
if (v___x_575_ == 0)
{
lean_dec(v___x_573_);
goto v___jp_525_;
}
else
{
uint8_t v___x_576_; uint8_t v___x_577_; 
v___x_576_ = lean_uint8_of_nat(v___x_573_);
lean_dec(v___x_573_);
v___x_577_ = lean_uint8_dec_eq(v___x_576_, v___x_563_);
if (v___x_577_ == 0)
{
uint8_t v___x_578_; uint8_t v___x_579_; 
v___x_578_ = 46;
v___x_579_ = lean_uint8_dec_eq(v___x_576_, v___x_578_);
if (v___x_579_ == 0)
{
uint8_t v___x_580_; uint8_t v___x_581_; 
v___x_580_ = 32;
v___x_581_ = lean_uint8_dec_eq(v___x_576_, v___x_580_);
if (v___x_581_ == 0)
{
uint8_t v___x_582_; uint8_t v___x_583_; 
v___x_582_ = 9;
v___x_583_ = lean_uint8_dec_eq(v___x_576_, v___x_582_);
if (v___x_583_ == 0)
{
uint8_t v___x_584_; uint8_t v___x_585_; 
v___x_584_ = 10;
v___x_585_ = lean_uint8_dec_eq(v___x_576_, v___x_584_);
if (v___x_585_ == 0)
{
uint8_t v___x_586_; uint8_t v___x_587_; 
v___x_586_ = 13;
v___x_587_ = lean_uint8_dec_eq(v___x_576_, v___x_586_);
if (v___x_587_ == 0)
{
goto v___jp_525_;
}
else
{
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___y_552_ = v___x_572_;
goto v___jp_551_;
}
}
else
{
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___y_552_ = v___x_572_;
goto v___jp_551_;
}
}
else
{
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___y_552_ = v___x_572_;
goto v___jp_551_;
}
}
else
{
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___y_552_ = v___x_572_;
goto v___jp_551_;
}
}
else
{
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___y_552_ = v___x_572_;
goto v___jp_551_;
}
}
else
{
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___y_552_ = v___x_572_;
goto v___jp_551_;
}
}
}
else
{
lean_object* v___x_588_; 
lean_dec(v___x_567_);
lean_dec(v___y_565_);
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___x_588_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_512_, v_b_513_, v_e_514_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec(v_snd_521_);
lean_dec(v_fst_520_);
v_a_589_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_588_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_588_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec_ref_known(v___x_588_, 1);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_fst_520_);
lean_ctor_set(v___x_597_, 1, v_snd_521_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_550_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v_a_515_ = v___x_598_;
goto _start;
}
}
}
v___jp_600_:
{
lean_object* v___x_603_; 
v___x_603_ = l___private_Lake_Build_ModuleTimes_0__Lake_hexVal_x3f(v___y_602_);
if (lean_obj_tag(v___x_603_) == 1)
{
lean_object* v_val_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v_val_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_val_604_);
lean_dec_ref_known(v___x_603_, 1);
v___x_605_ = lean_string_utf8_byte_size(v_s_512_);
v___x_606_ = lean_nat_dec_lt(v___y_601_, v___x_605_);
if (v___x_606_ == 0)
{
uint8_t v___x_607_; 
lean_dec(v___y_601_);
v___x_607_ = 0;
v___y_565_ = v_val_604_;
v___y_566_ = v___x_607_;
goto v___jp_564_;
}
else
{
uint8_t v___x_608_; 
v___x_608_ = lean_string_get_byte_fast(v_s_512_, v___y_601_);
v___y_565_ = v_val_604_;
v___y_566_ = v___x_608_;
goto v___jp_564_;
}
}
else
{
lean_object* v___x_609_; 
lean_dec(v___x_603_);
lean_dec(v___y_601_);
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___x_609_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_512_, v_b_513_, v_e_514_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec(v_snd_521_);
lean_dec(v_fst_520_);
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
else
{
lean_object* v___x_618_; lean_object* v___x_619_; 
lean_dec_ref_known(v___x_609_, 1);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v_fst_520_);
lean_ctor_set(v___x_618_, 1, v_snd_521_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_550_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v_a_515_ = v___x_619_;
goto _start;
}
}
}
v___jp_621_:
{
uint8_t v___x_623_; 
v___x_623_ = lean_uint8_dec_eq(v___y_622_, v___x_563_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
lean_inc(v_snd_521_);
v___x_624_ = l___private_Lake_Build_ModuleTimes_0__Lake_findByte(v_s_512_, v___x_563_, v_snd_521_, v_e_514_);
v___x_625_ = lean_string_utf8_extract(v_s_512_, v_snd_521_, v___x_624_);
lean_dec(v_snd_521_);
v___x_626_ = lean_string_append(v_fst_520_, v___x_625_);
lean_dec_ref(v___x_625_);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
lean_ctor_set(v___x_627_, 1, v___x_624_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_550_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v_a_515_ = v___x_628_;
goto _start;
}
else
{
lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_630_ = lean_unsigned_to_nat(2u);
v___x_631_ = lean_nat_add(v_snd_521_, v___x_630_);
v___x_632_ = lean_nat_dec_lt(v___x_631_, v_e_514_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; 
lean_dec(v___x_631_);
lean_del_object(v___x_523_);
lean_del_object(v___x_518_);
v___x_633_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_512_, v_b_513_, v_e_514_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec(v_snd_521_);
lean_dec(v_fst_520_);
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_652_; 
v_a_642_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_652_ == 0)
{
v___x_644_ = v___x_633_;
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_633_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_646_, 0, v_a_642_);
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v_fst_520_);
lean_ctor_set(v___x_647_, 1, v_snd_521_);
v___x_648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v___x_648_);
v___x_650_ = v___x_644_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = lean_nat_add(v_snd_521_, v___x_653_);
v___x_655_ = lean_string_utf8_byte_size(v_s_512_);
v___x_656_ = lean_nat_dec_lt(v___x_654_, v___x_655_);
if (v___x_656_ == 0)
{
uint8_t v___x_657_; 
lean_dec(v___x_654_);
v___x_657_ = 0;
v___y_601_ = v___x_631_;
v___y_602_ = v___x_657_;
goto v___jp_600_;
}
else
{
uint8_t v___x_658_; 
v___x_658_ = lean_string_get_byte_fast(v_s_512_, v___x_654_);
v___y_601_ = v___x_631_;
v___y_602_ = v___x_658_;
goto v___jp_600_;
}
}
}
}
}
v___jp_525_:
{
lean_object* v___x_526_; 
v___x_526_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_512_, v_b_513_, v_e_514_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_del_object(v___x_523_);
lean_dec(v_snd_521_);
lean_dec(v_fst_520_);
lean_del_object(v___x_518_);
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_549_; 
v_a_535_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_549_ == 0)
{
v___x_537_ = v___x_526_;
v_isShared_538_ = v_isSharedCheck_549_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_526_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_549_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v_a_535_);
if (v_isShared_524_ == 0)
{
v___x_541_ = v___x_523_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_fst_520_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_snd_521_);
v___x_541_ = v_reuseFailAlloc_548_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_543_; 
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 1, v___x_541_);
lean_ctor_set(v___x_518_, 0, v___x_539_);
v___x_543_ = v___x_518_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v___x_541_);
v___x_543_ = v_reuseFailAlloc_547_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_545_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 0, v___x_543_);
v___x_545_ = v___x_537_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
}
v___jp_551_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_553_ = lean_string_push(v_fst_520_, v___y_552_);
v___x_554_ = lean_unsigned_to_nat(3u);
v___x_555_ = lean_nat_add(v_snd_521_, v___x_554_);
lean_dec(v_snd_521_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_553_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_550_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v_a_515_ = v___x_557_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___redArg___boxed(lean_object* v_s_666_, lean_object* v_b_667_, lean_object* v_e_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___redArg(v_s_666_, v_b_667_, v_e_668_, v_a_669_);
lean_dec(v_e_668_);
lean_dec(v_b_667_);
lean_dec_ref(v_s_666_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent(lean_object* v_s_674_, lean_object* v_b_675_, lean_object* v_e_676_, lean_object* v_p_677_){
_start:
{
uint8_t v___y_718_; uint8_t v___y_751_; uint8_t v___y_752_; uint8_t v___y_759_; uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_le(v_e_676_, v_b_675_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_772_ = lean_string_utf8_byte_size(v_s_674_);
v___x_773_ = lean_nat_dec_lt(v_b_675_, v___x_772_);
if (v___x_773_ == 0)
{
uint8_t v___x_774_; 
v___x_774_ = 0;
v___y_759_ = v___x_774_;
goto v___jp_758_;
}
else
{
uint8_t v___x_775_; 
lean_inc(v_b_675_);
v___x_775_ = lean_string_get_byte_fast(v_s_674_, v_b_675_);
v___y_759_ = v___x_775_;
goto v___jp_758_;
}
}
else
{
lean_object* v___x_776_; 
lean_dec(v_p_677_);
lean_dec(v_e_676_);
lean_dec(v_b_675_);
v___x_776_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___closed__1));
return v___x_776_;
}
v___jp_678_:
{
uint8_t v___x_679_; uint8_t v___x_680_; uint8_t v___x_681_; 
v___x_679_ = 0;
lean_inc(v_b_675_);
v___x_680_ = l___private_Lake_Build_ModuleTimes_0__Lake_componentKind(v_s_674_, v_b_675_, v_e_676_, v___x_679_);
v___x_681_ = lean_uint8_dec_eq(v___x_680_, v___x_679_);
if (v___x_681_ == 0)
{
uint8_t v___x_682_; uint8_t v___x_683_; 
v___x_682_ = 1;
v___x_683_ = lean_uint8_dec_eq(v___x_680_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; 
lean_dec(v_p_677_);
v___x_684_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_674_, v_b_675_, v_e_676_);
lean_dec(v_e_676_);
lean_dec(v_b_675_);
return v___x_684_;
}
else
{
lean_object* v_out_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_out_685_ = ((lean_object*)(l_Lake_encodeModuleName___closed__1));
v___x_686_ = lean_box(0);
lean_inc(v_b_675_);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v_out_685_);
lean_ctor_set(v___x_687_, 1, v_b_675_);
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_686_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___redArg(v_s_674_, v_b_675_, v_e_676_, v___x_688_);
lean_dec(v_e_676_);
lean_dec(v_b_675_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec(v_p_677_);
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_713_; 
v_a_698_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_713_ == 0)
{
v___x_700_ = v___x_689_;
v_isShared_701_ = v_isSharedCheck_713_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_689_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_713_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v_fst_702_; 
v_fst_702_ = lean_ctor_get(v_a_698_, 0);
if (lean_obj_tag(v_fst_702_) == 0)
{
lean_object* v_snd_703_; lean_object* v_fst_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v_snd_703_ = lean_ctor_get(v_a_698_, 1);
lean_inc(v_snd_703_);
lean_dec(v_a_698_);
v_fst_704_ = lean_ctor_get(v_snd_703_, 0);
lean_inc(v_fst_704_);
lean_dec(v_snd_703_);
v___x_705_ = l_Lean_Name_str___override(v_p_677_, v_fst_704_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_705_);
v___x_707_ = v___x_700_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
else
{
lean_object* v_val_709_; lean_object* v___x_711_; 
lean_inc_ref(v_fst_702_);
lean_dec(v_a_698_);
lean_dec(v_p_677_);
v_val_709_ = lean_ctor_get(v_fst_702_, 0);
lean_inc(v_val_709_);
lean_dec_ref_known(v_fst_702_, 1);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v_val_709_);
v___x_711_ = v___x_700_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_val_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = lean_string_utf8_extract(v_s_674_, v_b_675_, v_e_676_);
lean_dec(v_e_676_);
lean_dec(v_b_675_);
v___x_715_ = l_Lean_Name_str___override(v_p_677_, v___x_714_);
v___x_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
return v___x_716_;
}
}
v___jp_717_:
{
uint8_t v___x_719_; uint8_t v___x_720_; 
v___x_719_ = 35;
v___x_720_ = lean_uint8_dec_eq(v___y_718_, v___x_719_);
if (v___x_720_ == 0)
{
goto v___jp_678_;
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_721_ = lean_unsigned_to_nat(2u);
v___x_722_ = lean_nat_add(v_b_675_, v___x_721_);
lean_inc(v_e_676_);
v___x_723_ = l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f(v_s_674_, v___x_722_, v_e_676_);
if (lean_obj_tag(v___x_723_) == 1)
{
lean_object* v_val_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_732_; 
lean_dec(v_e_676_);
lean_dec(v_b_675_);
v_val_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_732_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_732_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_val_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_732_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; lean_object* v___x_730_; 
v___x_728_ = l_Lean_Name_num___override(v_p_677_, v_val_724_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_728_);
v___x_730_ = v___x_726_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
else
{
lean_object* v___x_733_; lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_741_; 
lean_dec(v___x_723_);
lean_dec(v_p_677_);
v___x_733_ = l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg(v_s_674_, v_b_675_, v_e_676_);
lean_dec(v_e_676_);
lean_dec(v_b_675_);
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_741_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_734_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
}
v___jp_742_:
{
lean_object* v___x_743_; lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_743_ = lean_unsigned_to_nat(1u);
v___x_744_ = lean_nat_add(v_b_675_, v___x_743_);
v___x_745_ = lean_nat_dec_lt(v___x_744_, v_e_676_);
if (v___x_745_ == 0)
{
lean_dec(v___x_744_);
goto v___jp_678_;
}
else
{
lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_746_ = lean_string_utf8_byte_size(v_s_674_);
v___x_747_ = lean_nat_dec_lt(v___x_744_, v___x_746_);
if (v___x_747_ == 0)
{
uint8_t v___x_748_; 
lean_dec(v___x_744_);
v___x_748_ = 0;
v___y_718_ = v___x_748_;
goto v___jp_717_;
}
else
{
uint8_t v___x_749_; 
v___x_749_ = lean_string_get_byte_fast(v_s_674_, v___x_744_);
v___y_718_ = v___x_749_;
goto v___jp_717_;
}
}
}
v___jp_750_:
{
uint8_t v___x_753_; uint8_t v___x_754_; 
v___x_753_ = 45;
v___x_754_ = lean_uint8_dec_eq(v___y_752_, v___x_753_);
if (v___x_754_ == 0)
{
if (v___y_751_ == 0)
{
goto v___jp_678_;
}
else
{
goto v___jp_742_;
}
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
lean_dec(v_e_676_);
lean_dec(v_b_675_);
v___x_755_ = ((lean_object*)(l_Lake_encodeModuleName___closed__1));
v___x_756_ = l_Lean_Name_str___override(v_p_677_, v___x_755_);
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
return v___x_757_;
}
}
v___jp_758_:
{
uint8_t v___x_760_; uint8_t v___x_761_; 
v___x_760_ = 37;
v___x_761_ = lean_uint8_dec_eq(v___y_759_, v___x_760_);
if (v___x_761_ == 0)
{
goto v___jp_678_;
}
else
{
lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; 
v___x_762_ = lean_unsigned_to_nat(2u);
v___x_763_ = lean_nat_add(v_b_675_, v___x_762_);
v___x_764_ = lean_nat_dec_eq(v_e_676_, v___x_763_);
lean_dec(v___x_763_);
if (v___x_764_ == 0)
{
goto v___jp_742_;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; 
v___x_765_ = lean_unsigned_to_nat(1u);
v___x_766_ = lean_nat_add(v_b_675_, v___x_765_);
v___x_767_ = lean_string_utf8_byte_size(v_s_674_);
v___x_768_ = lean_nat_dec_lt(v___x_766_, v___x_767_);
if (v___x_768_ == 0)
{
uint8_t v___x_769_; 
lean_dec(v___x_766_);
v___x_769_ = 0;
v___y_751_ = v___x_761_;
v___y_752_ = v___x_769_;
goto v___jp_750_;
}
else
{
uint8_t v___x_770_; 
v___x_770_ = lean_string_get_byte_fast(v_s_674_, v___x_766_);
v___y_751_ = v___x_761_;
v___y_752_ = v___x_770_;
goto v___jp_750_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent___boxed(lean_object* v_s_777_, lean_object* v_b_778_, lean_object* v_e_779_, lean_object* v_p_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent(v_s_777_, v_b_778_, v_e_779_, v_p_780_);
lean_dec_ref(v_s_777_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0(lean_object* v_s_782_, lean_object* v_b_783_, lean_object* v_e_784_, lean_object* v_inst_785_, lean_object* v_a_786_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___redArg(v_s_782_, v_b_783_, v_e_784_, v_a_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0___boxed(lean_object* v_s_788_, lean_object* v_b_789_, lean_object* v_e_790_, lean_object* v_inst_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeComponent_spec__0(v_s_788_, v_b_789_, v_e_790_, v_inst_791_, v_a_792_);
lean_dec(v_e_790_);
lean_dec(v_b_789_);
lean_dec_ref(v_s_788_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___redArg(lean_object* v_size_799_, lean_object* v_s_800_, lean_object* v_a_801_){
_start:
{
uint8_t v___y_803_; uint8_t v___x_811_; 
v___x_811_ = lean_nat_dec_lt(v_a_801_, v_size_799_);
if (v___x_811_ == 0)
{
return v_a_801_;
}
else
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = lean_string_utf8_byte_size(v_s_800_);
v___x_813_ = lean_nat_dec_lt(v_a_801_, v___x_812_);
if (v___x_813_ == 0)
{
uint8_t v___x_814_; 
v___x_814_ = 0;
v___y_803_ = v___x_814_;
goto v___jp_802_;
}
else
{
uint8_t v___x_815_; 
lean_inc(v_a_801_);
v___x_815_ = lean_string_get_byte_fast(v_s_800_, v_a_801_);
v___y_803_ = v___x_815_;
goto v___jp_802_;
}
}
v___jp_802_:
{
uint8_t v___x_804_; uint8_t v___x_805_; 
v___x_804_ = 48;
v___x_805_ = lean_uint8_dec_le(v___x_804_, v___y_803_);
if (v___x_805_ == 0)
{
return v_a_801_;
}
else
{
uint8_t v___x_806_; uint8_t v___x_807_; 
v___x_806_ = 57;
v___x_807_ = lean_uint8_dec_le(v___y_803_, v___x_806_);
if (v___x_807_ == 0)
{
return v_a_801_;
}
else
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = lean_unsigned_to_nat(1u);
v___x_809_ = lean_nat_add(v_a_801_, v___x_808_);
lean_dec(v_a_801_);
v_a_801_ = v___x_809_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___redArg___boxed(lean_object* v_size_816_, lean_object* v_s_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___redArg(v_size_816_, v_s_817_, v_a_818_);
lean_dec_ref(v_s_817_);
lean_dec(v_size_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg(lean_object* v_size_823_, lean_object* v_s_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_fst_826_; lean_object* v_snd_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_858_; 
v_fst_826_ = lean_ctor_get(v_a_825_, 0);
v_snd_827_ = lean_ctor_get(v_a_825_, 1);
v_isSharedCheck_858_ = !lean_is_exclusive(v_a_825_);
if (v_isSharedCheck_858_ == 0)
{
v___x_829_ = v_a_825_;
v_isShared_830_ = v_isSharedCheck_858_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_snd_827_);
lean_inc(v_fst_826_);
lean_dec(v_a_825_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_858_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; lean_object* v___y_833_; lean_object* v___y_839_; uint8_t v___y_840_; lean_object* v___y_848_; lean_object* v___x_854_; 
lean_inc(v_fst_826_);
v___x_831_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___redArg(v_size_823_, v_s_824_, v_fst_826_);
lean_inc(v___x_831_);
v___x_854_ = l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f(v_s_824_, v_fst_826_, v___x_831_);
if (lean_obj_tag(v___x_854_) == 1)
{
lean_object* v_val_855_; uint8_t v___x_856_; 
v_val_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_val_855_);
lean_dec_ref_known(v___x_854_, 1);
v___x_856_ = lean_nat_dec_le(v_snd_827_, v_val_855_);
if (v___x_856_ == 0)
{
lean_dec(v_val_855_);
v___y_848_ = v_snd_827_;
goto v___jp_847_;
}
else
{
lean_dec(v_snd_827_);
v___y_848_ = v_val_855_;
goto v___jp_847_;
}
}
else
{
lean_object* v___x_857_; 
lean_dec(v___x_854_);
lean_dec(v___x_831_);
lean_del_object(v___x_829_);
lean_dec(v_snd_827_);
v___x_857_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__1));
return v___x_857_;
}
v___jp_832_:
{
lean_object* v___x_835_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v___y_833_);
lean_ctor_set(v___x_829_, 0, v___x_831_);
v___x_835_ = v___x_829_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_831_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v___y_833_);
v___x_835_ = v_reuseFailAlloc_837_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_836_; 
v___x_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
}
v___jp_838_:
{
uint8_t v___x_841_; uint8_t v___x_842_; 
v___x_841_ = 32;
v___x_842_ = lean_uint8_dec_eq(v___y_840_, v___x_841_);
if (v___x_842_ == 0)
{
v___y_833_ = v___y_839_;
goto v___jp_832_;
}
else
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
lean_del_object(v___x_829_);
v___x_843_ = lean_unsigned_to_nat(1u);
v___x_844_ = lean_nat_add(v___x_831_, v___x_843_);
lean_dec(v___x_831_);
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v___y_839_);
v_a_825_ = v___x_845_;
goto _start;
}
}
v___jp_847_:
{
uint8_t v___x_849_; 
v___x_849_ = lean_nat_dec_lt(v___x_831_, v_size_823_);
if (v___x_849_ == 0)
{
v___y_833_ = v___y_848_;
goto v___jp_832_;
}
else
{
lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_850_ = lean_string_utf8_byte_size(v_s_824_);
v___x_851_ = lean_nat_dec_lt(v___x_831_, v___x_850_);
if (v___x_851_ == 0)
{
uint8_t v___x_852_; 
v___x_852_ = 0;
v___y_839_ = v___y_848_;
v___y_840_ = v___x_852_;
goto v___jp_838_;
}
else
{
uint8_t v___x_853_; 
lean_inc(v___x_831_);
v___x_853_ = lean_string_get_byte_fast(v_s_824_, v___x_831_);
v___y_839_ = v___y_848_;
v___y_840_ = v___x_853_;
goto v___jp_838_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___boxed(lean_object* v_size_859_, lean_object* v_s_860_, lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg(v_size_859_, v_s_860_, v_a_861_);
lean_dec_ref(v_s_860_);
lean_dec(v_size_859_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_scanImports(lean_object* v_s_863_, lean_object* v_i_864_, lean_object* v_size_865_){
_start:
{
lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_872_; lean_object* v___y_873_; uint8_t v___y_874_; lean_object* v_p_879_; lean_object* v_top_880_; lean_object* v_top_886_; uint8_t v___y_888_; uint8_t v___x_896_; 
v_top_886_ = lean_unsigned_to_nat(0u);
v___x_896_ = lean_nat_dec_lt(v_i_864_, v_size_865_);
if (v___x_896_ == 0)
{
v_p_879_ = v_i_864_;
v_top_880_ = v_top_886_;
goto v___jp_878_;
}
else
{
lean_object* v___x_897_; uint8_t v___x_898_; 
v___x_897_ = lean_string_utf8_byte_size(v_s_863_);
v___x_898_ = lean_nat_dec_lt(v_i_864_, v___x_897_);
if (v___x_898_ == 0)
{
uint8_t v___x_899_; 
v___x_899_ = 0;
v___y_888_ = v___x_899_;
goto v___jp_887_;
}
else
{
uint8_t v___x_900_; 
lean_inc(v_i_864_);
v___x_900_ = lean_string_get_byte_fast(v_s_863_, v_i_864_);
v___y_888_ = v___x_900_;
goto v___jp_887_;
}
}
v___jp_866_:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_869_, 0, v___y_867_);
lean_ctor_set(v___x_869_, 1, v___y_868_);
v___x_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
return v___x_870_;
}
v___jp_871_:
{
uint8_t v___x_875_; uint8_t v___x_876_; 
v___x_875_ = 10;
v___x_876_ = lean_uint8_dec_eq(v___y_874_, v___x_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; 
lean_dec(v___y_873_);
lean_dec(v___y_872_);
v___x_877_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg___closed__1));
return v___x_877_;
}
else
{
v___y_867_ = v___y_872_;
v___y_868_ = v___y_873_;
goto v___jp_866_;
}
}
v___jp_878_:
{
uint8_t v___x_881_; 
v___x_881_ = lean_nat_dec_eq(v_p_879_, v_size_865_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; uint8_t v___x_883_; 
v___x_882_ = lean_string_utf8_byte_size(v_s_863_);
v___x_883_ = lean_nat_dec_lt(v_p_879_, v___x_882_);
if (v___x_883_ == 0)
{
uint8_t v___x_884_; 
v___x_884_ = 0;
v___y_872_ = v_p_879_;
v___y_873_ = v_top_880_;
v___y_874_ = v___x_884_;
goto v___jp_871_;
}
else
{
uint8_t v___x_885_; 
lean_inc(v_p_879_);
v___x_885_ = lean_string_get_byte_fast(v_s_863_, v_p_879_);
v___y_872_ = v_p_879_;
v___y_873_ = v_top_880_;
v___y_874_ = v___x_885_;
goto v___jp_871_;
}
}
else
{
v___y_867_ = v_p_879_;
v___y_868_ = v_top_880_;
goto v___jp_866_;
}
}
v___jp_887_:
{
uint8_t v___x_889_; uint8_t v___x_890_; 
v___x_889_ = 10;
v___x_890_ = lean_uint8_dec_eq(v___y_888_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_891_, 0, v_i_864_);
lean_ctor_set(v___x_891_, 1, v_top_886_);
v___x_892_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg(v_size_865_, v_s_863_, v___x_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
return v___x_892_;
}
else
{
lean_object* v_a_893_; lean_object* v_fst_894_; lean_object* v_snd_895_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_892_, 1);
v_fst_894_ = lean_ctor_get(v_a_893_, 0);
lean_inc(v_fst_894_);
v_snd_895_ = lean_ctor_get(v_a_893_, 1);
lean_inc(v_snd_895_);
lean_dec(v_a_893_);
v_p_879_ = v_fst_894_;
v_top_880_ = v_snd_895_;
goto v___jp_878_;
}
}
else
{
v_p_879_ = v_i_864_;
v_top_880_ = v_top_886_;
goto v___jp_878_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_scanImports___boxed(lean_object* v_s_901_, lean_object* v_i_902_, lean_object* v_size_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l___private_Lake_Build_ModuleTimes_0__Lake_scanImports(v_s_901_, v_i_902_, v_size_903_);
lean_dec(v_size_903_);
lean_dec_ref(v_s_901_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0(lean_object* v_size_905_, lean_object* v_s_906_, lean_object* v_inst_907_, lean_object* v_a_908_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___redArg(v_size_905_, v_s_906_, v_a_908_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0___boxed(lean_object* v_size_910_, lean_object* v_s_911_, lean_object* v_inst_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__0(v_size_910_, v_s_911_, v_inst_912_, v_a_913_);
lean_dec_ref(v_s_911_);
lean_dec(v_size_910_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1(lean_object* v_size_915_, lean_object* v_s_916_, lean_object* v_inst_917_, lean_object* v_a_918_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___redArg(v_size_915_, v_s_916_, v_a_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1___boxed(lean_object* v_size_920_, lean_object* v_s_921_, lean_object* v_inst_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_scanImports_spec__1(v_size_920_, v_s_921_, v_inst_922_, v_a_923_);
lean_dec_ref(v_s_921_);
lean_dec(v_size_920_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___redArg(lean_object* v_ends_925_, lean_object* v_lcp_926_, lean_object* v_kb_927_, lean_object* v_s_928_, lean_object* v_range_929_, lean_object* v_b_930_, lean_object* v_i_931_){
_start:
{
lean_object* v_stop_932_; lean_object* v_step_933_; uint8_t v___x_934_; 
v_stop_932_ = lean_ctor_get(v_range_929_, 1);
v_step_933_ = lean_ctor_get(v_range_929_, 2);
v___x_934_ = lean_nat_dec_lt(v_i_931_, v_stop_932_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; 
lean_dec(v_i_931_);
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v_b_930_);
return v___x_935_;
}
else
{
lean_object* v___x_936_; uint8_t v___y_942_; lean_object* v_r_946_; uint8_t v___x_947_; 
v___x_936_ = lean_unsigned_to_nat(1u);
v_r_946_ = lean_array_fget_borrowed(v_ends_925_, v_i_931_);
v___x_947_ = lean_nat_dec_lt(v_r_946_, v_lcp_926_);
if (v___x_947_ == 0)
{
uint8_t v___x_948_; 
v___x_948_ = lean_nat_dec_eq(v_r_946_, v_lcp_926_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; 
lean_dec(v_i_931_);
v___x_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_949_, 0, v_b_930_);
return v___x_949_;
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_950_ = lean_nat_add(v_kb_927_, v_r_946_);
v___x_951_ = lean_string_utf8_byte_size(v_s_928_);
v___x_952_ = lean_nat_dec_lt(v___x_950_, v___x_951_);
if (v___x_952_ == 0)
{
uint8_t v___x_953_; 
lean_dec(v___x_950_);
v___x_953_ = 0;
v___y_942_ = v___x_953_;
goto v___jp_941_;
}
else
{
uint8_t v___x_954_; 
v___x_954_ = lean_string_get_byte_fast(v_s_928_, v___x_950_);
v___y_942_ = v___x_954_;
goto v___jp_941_;
}
}
}
else
{
lean_dec(v_b_930_);
goto v___jp_937_;
}
v___jp_937_:
{
lean_object* v_shared_938_; lean_object* v___x_939_; 
v_shared_938_ = lean_nat_add(v_i_931_, v___x_936_);
v___x_939_ = lean_nat_add(v_i_931_, v_step_933_);
lean_dec(v_i_931_);
v_b_930_ = v_shared_938_;
v_i_931_ = v___x_939_;
goto _start;
}
v___jp_941_:
{
uint8_t v___x_943_; uint8_t v___x_944_; 
v___x_943_ = 46;
v___x_944_ = lean_uint8_dec_eq(v___y_942_, v___x_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; 
lean_dec(v_i_931_);
v___x_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_945_, 0, v_b_930_);
return v___x_945_;
}
else
{
lean_dec(v_b_930_);
goto v___jp_937_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___redArg___boxed(lean_object* v_ends_955_, lean_object* v_lcp_956_, lean_object* v_kb_957_, lean_object* v_s_958_, lean_object* v_range_959_, lean_object* v_b_960_, lean_object* v_i_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___redArg(v_ends_955_, v_lcp_956_, v_kb_957_, v_s_958_, v_range_959_, v_b_960_, v_i_961_);
lean_dec_ref(v_range_959_);
lean_dec_ref(v_s_958_);
lean_dec(v_kb_957_);
lean_dec(v_lcp_956_);
lean_dec_ref(v_ends_955_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___redArg(lean_object* v_s_963_, lean_object* v_ke_964_, lean_object* v_kb_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_snd_967_; lean_object* v_snd_968_; lean_object* v_fst_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_1029_; 
v_snd_967_ = lean_ctor_get(v_a_966_, 1);
lean_inc(v_snd_967_);
v_snd_968_ = lean_ctor_get(v_snd_967_, 1);
lean_inc(v_snd_968_);
v_fst_969_ = lean_ctor_get(v_a_966_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v_a_966_);
if (v_isSharedCheck_1029_ == 0)
{
lean_object* v_unused_1030_; 
v_unused_1030_ = lean_ctor_get(v_a_966_, 1);
lean_dec(v_unused_1030_);
v___x_971_ = v_a_966_;
v_isShared_972_ = v_isSharedCheck_1029_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_fst_969_);
lean_dec(v_a_966_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_1029_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v_fst_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_1027_; 
v_fst_973_ = lean_ctor_get(v_snd_967_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v_snd_967_);
if (v_isSharedCheck_1027_ == 0)
{
lean_object* v_unused_1028_; 
v_unused_1028_ = lean_ctor_get(v_snd_967_, 1);
lean_dec(v_unused_1028_);
v___x_975_ = v_snd_967_;
v_isShared_976_ = v_isSharedCheck_1027_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_fst_973_);
lean_dec(v_snd_967_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_1027_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v_fst_977_; lean_object* v_snd_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_1026_; 
v_fst_977_ = lean_ctor_get(v_snd_968_, 0);
v_snd_978_ = lean_ctor_get(v_snd_968_, 1);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_snd_968_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_980_ = v_snd_968_;
v_isShared_981_ = v_isSharedCheck_1026_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_snd_978_);
lean_inc(v_fst_977_);
lean_dec(v_snd_968_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_1026_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
uint8_t v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_982_ = 46;
lean_inc_n(v_snd_978_, 2);
v___x_983_ = l___private_Lake_Build_ModuleTimes_0__Lake_findByte(v_s_963_, v___x_982_, v_snd_978_, v_ke_964_);
lean_inc(v___x_983_);
v___x_984_ = l___private_Lake_Build_ModuleTimes_0__Lake_decodeComponent(v_s_963_, v_snd_978_, v___x_983_, v_fst_977_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec(v___x_983_);
lean_del_object(v___x_980_);
lean_dec(v_snd_978_);
lean_del_object(v___x_975_);
lean_dec(v_fst_973_);
lean_del_object(v___x_971_);
lean_dec(v_fst_969_);
v_a_985_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_984_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_984_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
else
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1025_; 
v_a_993_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_995_ = v___x_984_;
v_isShared_996_ = v_isSharedCheck_1025_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_984_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1025_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_997_ = lean_nat_sub(v___x_983_, v_kb_965_);
v___x_998_ = lean_array_push(v_fst_969_, v___x_997_);
lean_inc(v_a_993_);
v___x_999_ = lean_array_push(v_fst_973_, v_a_993_);
v___x_1000_ = lean_nat_dec_eq(v___x_983_, v_ke_964_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1004_; 
lean_del_object(v___x_995_);
lean_dec(v_snd_978_);
v___x_1001_ = lean_unsigned_to_nat(1u);
v___x_1002_ = lean_nat_add(v___x_983_, v___x_1001_);
lean_dec(v___x_983_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 1, v___x_1002_);
lean_ctor_set(v___x_980_, 0, v_a_993_);
v___x_1004_ = v___x_980_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_993_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
lean_object* v___x_1006_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 1, v___x_1004_);
lean_ctor_set(v___x_975_, 0, v___x_999_);
v___x_1006_ = v___x_975_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v___x_1004_);
v___x_1006_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1008_; 
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 1, v___x_1006_);
lean_ctor_set(v___x_971_, 0, v___x_998_);
v___x_1008_ = v___x_971_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_998_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
v_a_966_ = v___x_1008_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1014_; 
lean_dec(v___x_983_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 0, v_a_993_);
v___x_1014_ = v___x_980_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_993_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_snd_978_);
v___x_1014_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1016_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 1, v___x_1014_);
lean_ctor_set(v___x_975_, 0, v___x_999_);
v___x_1016_ = v___x_975_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1018_; 
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 1, v___x_1016_);
lean_ctor_set(v___x_971_, 0, v___x_998_);
v___x_1018_ = v___x_971_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_998_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1020_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 0, v___x_1018_);
v___x_1020_ = v___x_995_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___redArg___boxed(lean_object* v_s_1031_, lean_object* v_ke_1032_, lean_object* v_kb_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___redArg(v_s_1031_, v_ke_1032_, v_kb_1033_, v_a_1034_);
lean_dec(v_kb_1033_);
lean_dec(v_ke_1032_);
lean_dec_ref(v_s_1031_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___redArg(lean_object* v_a_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v_fst_1038_; lean_object* v_snd_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1055_; 
v_fst_1038_ = lean_ctor_get(v_a_1037_, 0);
v_snd_1039_ = lean_ctor_get(v_a_1037_, 1);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_a_1037_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1041_ = v_a_1037_;
v_isShared_1042_ = v_isSharedCheck_1055_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_snd_1039_);
lean_inc(v_fst_1038_);
lean_dec(v_a_1037_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1055_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1043_; uint8_t v___x_1044_; 
v___x_1043_ = lean_array_get_size(v_fst_1038_);
v___x_1044_ = lean_nat_dec_lt(v_a_1036_, v___x_1043_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1046_; 
if (v_isShared_1042_ == 0)
{
v___x_1046_ = v___x_1041_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_fst_1038_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_snd_1039_);
v___x_1046_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
return v___x_1047_;
}
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1049_ = lean_array_pop(v_fst_1038_);
v___x_1050_ = lean_array_pop(v_snd_1039_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 1, v___x_1050_);
lean_ctor_set(v___x_1041_, 0, v___x_1049_);
v___x_1052_ = v___x_1041_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
v_a_1037_ = v___x_1052_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___redArg___boxed(lean_object* v_a_1056_, lean_object* v_a_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___redArg(v_a_1056_, v_a_1057_);
lean_dec(v_a_1056_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey(lean_object* v_s_1063_, lean_object* v_kb_1064_, lean_object* v_ke_1065_, uint8_t v_ordered_1066_, lean_object* v_prev_1067_){
_start:
{
lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v_start_1107_; lean_object* v_stop_1108_; lean_object* v_ends_1109_; lean_object* v_prefixes_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1212_; 
v_start_1107_ = lean_ctor_get(v_prev_1067_, 0);
v_stop_1108_ = lean_ctor_get(v_prev_1067_, 1);
v_ends_1109_ = lean_ctor_get(v_prev_1067_, 2);
v_prefixes_1110_ = lean_ctor_get(v_prev_1067_, 3);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_prev_1067_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1112_ = v_prev_1067_;
v_isShared_1113_ = v_isSharedCheck_1212_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_prefixes_1110_);
lean_inc(v_ends_1109_);
lean_inc(v_stop_1108_);
lean_inc(v_start_1107_);
lean_dec(v_prev_1067_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1212_;
goto v_resetjp_1111_;
}
v___jp_1068_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___y_1069_);
lean_ctor_set(v___x_1073_, 1, v___y_1072_);
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___y_1071_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___y_1070_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___redArg(v_s_1063_, v_ke_1065_, v_kb_1064_, v___x_1075_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_dec(v_ke_1065_);
lean_dec(v_kb_1064_);
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1076_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1076_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1106_; 
v_a_1085_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1087_ = v___x_1076_;
v_isShared_1088_ = v_isSharedCheck_1106_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1076_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1106_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v_snd_1089_; lean_object* v_snd_1090_; lean_object* v_fst_1091_; lean_object* v_fst_1092_; lean_object* v_fst_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1104_; 
v_snd_1089_ = lean_ctor_get(v_a_1085_, 1);
lean_inc(v_snd_1089_);
v_snd_1090_ = lean_ctor_get(v_snd_1089_, 1);
lean_inc(v_snd_1090_);
v_fst_1091_ = lean_ctor_get(v_a_1085_, 0);
lean_inc(v_fst_1091_);
lean_dec(v_a_1085_);
v_fst_1092_ = lean_ctor_get(v_snd_1089_, 0);
lean_inc(v_fst_1092_);
lean_dec(v_snd_1089_);
v_fst_1093_ = lean_ctor_get(v_snd_1090_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v_snd_1090_);
if (v_isSharedCheck_1104_ == 0)
{
lean_object* v_unused_1105_; 
v_unused_1105_ = lean_ctor_get(v_snd_1090_, 1);
lean_dec(v_unused_1105_);
v___x_1095_ = v_snd_1090_;
v_isShared_1096_ = v_isSharedCheck_1104_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_fst_1093_);
lean_dec(v_snd_1090_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1104_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1099_; 
v___x_1097_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1097_, 0, v_kb_1064_);
lean_ctor_set(v___x_1097_, 1, v_ke_1065_);
lean_ctor_set(v___x_1097_, 2, v_fst_1091_);
lean_ctor_set(v___x_1097_, 3, v_fst_1092_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v___x_1097_);
v___x_1099_ = v___x_1095_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_fst_1093_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
lean_object* v___x_1101_; 
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1099_);
v___x_1101_ = v___x_1087_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
}
}
v_resetjp_1111_:
{
lean_object* v___x_1125_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v_lcp_1138_; uint8_t v___y_1164_; uint8_t v___y_1175_; uint8_t v___y_1193_; uint8_t v___y_1194_; uint8_t v___y_1197_; 
v___x_1125_ = lean_unsigned_to_nat(0u);
v_lcp_1138_ = l___private_Lake_Build_ModuleTimes_0__Lake_commonPrefix(v_s_1063_, v_start_1107_, v_stop_1108_, v_kb_1064_, v_ke_1065_, v___x_1125_);
if (v_ordered_1066_ == 0)
{
lean_dec(v_stop_1108_);
lean_dec(v_start_1107_);
goto v___jp_1184_;
}
else
{
lean_object* v___x_1203_; uint8_t v___x_1204_; 
v___x_1203_ = lean_nat_sub(v_ke_1065_, v_kb_1064_);
v___x_1204_ = lean_nat_dec_eq(v_lcp_1138_, v___x_1203_);
lean_dec(v___x_1203_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = lean_nat_sub(v_stop_1108_, v_start_1107_);
v___x_1206_ = lean_nat_dec_lt(v_lcp_1138_, v___x_1205_);
lean_dec(v___x_1205_);
if (v___x_1206_ == 0)
{
lean_dec(v_stop_1108_);
lean_dec(v_start_1107_);
goto v___jp_1184_;
}
else
{
lean_object* v___x_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; 
v___x_1207_ = lean_nat_add(v_kb_1064_, v_lcp_1138_);
v___x_1208_ = lean_string_utf8_byte_size(v_s_1063_);
v___x_1209_ = lean_nat_dec_lt(v___x_1207_, v___x_1208_);
if (v___x_1209_ == 0)
{
uint8_t v___x_1210_; 
lean_dec(v___x_1207_);
v___x_1210_ = 0;
v___y_1197_ = v___x_1210_;
goto v___jp_1196_;
}
else
{
uint8_t v___x_1211_; 
v___x_1211_ = lean_string_get_byte_fast(v_s_1063_, v___x_1207_);
v___y_1197_ = v___x_1211_;
goto v___jp_1196_;
}
}
}
else
{
lean_dec(v_lcp_1138_);
lean_del_object(v___x_1112_);
lean_dec_ref(v_prefixes_1110_);
lean_dec_ref(v_ends_1109_);
goto v___jp_1114_;
}
}
v___jp_1114_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1115_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1));
v___x_1116_ = lean_string_utf8_extract(v_s_1063_, v_kb_1064_, v_ke_1065_);
lean_dec(v_ke_1065_);
lean_dec(v_kb_1064_);
v___x_1117_ = lean_string_append(v___x_1115_, v___x_1116_);
lean_dec_ref(v___x_1116_);
v___x_1118_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__0));
v___x_1119_ = lean_string_append(v___x_1117_, v___x_1118_);
v___x_1120_ = lean_string_utf8_extract(v_s_1063_, v_start_1107_, v_stop_1108_);
lean_dec(v_stop_1108_);
lean_dec(v_start_1107_);
v___x_1121_ = lean_string_append(v___x_1119_, v___x_1120_);
lean_dec_ref(v___x_1120_);
v___x_1122_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__1));
v___x_1123_ = lean_string_append(v___x_1121_, v___x_1122_);
v___x_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
return v___x_1124_;
}
v___jp_1126_:
{
uint8_t v___x_1132_; 
v___x_1132_ = lean_nat_dec_eq(v___y_1128_, v___x_1125_);
lean_dec(v___y_1128_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1133_ = lean_array_get_size(v___y_1129_);
v___x_1134_ = lean_nat_sub(v___x_1133_, v___y_1127_);
v___x_1135_ = lean_array_get_borrowed(v___x_1125_, v___y_1129_, v___x_1134_);
lean_dec(v___x_1134_);
v___x_1136_ = lean_nat_add(v_kb_1064_, v___x_1135_);
v___x_1137_ = lean_nat_add(v___x_1136_, v___y_1127_);
lean_dec(v___x_1136_);
v___y_1069_ = v___y_1131_;
v___y_1070_ = v___y_1129_;
v___y_1071_ = v___y_1130_;
v___y_1072_ = v___x_1137_;
goto v___jp_1068_;
}
else
{
lean_inc(v_kb_1064_);
v___y_1069_ = v___y_1131_;
v___y_1070_ = v___y_1129_;
v___y_1071_ = v___y_1130_;
v___y_1072_ = v_kb_1064_;
goto v___jp_1068_;
}
}
v___jp_1139_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v_a_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1140_ = lean_array_get_size(v_ends_1109_);
v___x_1141_ = lean_unsigned_to_nat(1u);
v___x_1142_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1125_);
lean_ctor_set(v___x_1142_, 1, v___x_1140_);
lean_ctor_set(v___x_1142_, 2, v___x_1141_);
v___x_1143_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___redArg(v_ends_1109_, v_lcp_1138_, v_kb_1064_, v_s_1063_, v___x_1142_, v___x_1125_, v___x_1125_);
lean_dec_ref_known(v___x_1142_, 3);
lean_dec(v_lcp_1138_);
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref(v___x_1143_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_ends_1109_);
lean_ctor_set(v___x_1145_, 1, v_prefixes_1110_);
v___x_1146_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___redArg(v_a_1144_, v___x_1145_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
lean_dec(v_a_1144_);
lean_dec(v_ke_1065_);
lean_dec(v_kb_1064_);
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1147_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
else
{
lean_object* v_a_1155_; lean_object* v_fst_1156_; lean_object* v_snd_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v_a_1155_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_1146_, 1);
v_fst_1156_ = lean_ctor_get(v_a_1155_, 0);
lean_inc(v_fst_1156_);
v_snd_1157_ = lean_ctor_get(v_a_1155_, 1);
lean_inc(v_snd_1157_);
lean_dec(v_a_1155_);
v___x_1158_ = lean_array_get_size(v_snd_1157_);
v___x_1159_ = lean_nat_sub(v___x_1158_, v___x_1141_);
v___x_1160_ = lean_nat_dec_lt(v___x_1159_, v___x_1158_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; 
lean_dec(v___x_1159_);
v___x_1161_ = lean_box(0);
v___y_1127_ = v___x_1141_;
v___y_1128_ = v_a_1144_;
v___y_1129_ = v_fst_1156_;
v___y_1130_ = v_snd_1157_;
v___y_1131_ = v___x_1161_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_array_fget(v_snd_1157_, v___x_1159_);
lean_dec(v___x_1159_);
v___y_1127_ = v___x_1141_;
v___y_1128_ = v_a_1144_;
v___y_1129_ = v_fst_1156_;
v___y_1130_ = v_snd_1157_;
v___y_1131_ = v___x_1162_;
goto v___jp_1126_;
}
}
}
v___jp_1163_:
{
uint8_t v___x_1165_; uint8_t v___x_1166_; 
v___x_1165_ = 33;
v___x_1166_ = lean_uint8_dec_eq(v___y_1164_, v___x_1165_);
if (v___x_1166_ == 0)
{
lean_del_object(v___x_1112_);
goto v___jp_1139_;
}
else
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
lean_dec(v_lcp_1138_);
lean_dec_ref(v_prefixes_1110_);
lean_dec_ref(v_ends_1109_);
v___x_1167_ = lean_box(0);
v___x_1168_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2));
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 3, v___x_1168_);
lean_ctor_set(v___x_1112_, 2, v___x_1168_);
lean_ctor_set(v___x_1112_, 1, v_ke_1065_);
lean_ctor_set(v___x_1112_, 0, v_kb_1064_);
v___x_1170_ = v___x_1112_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_kb_1064_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_ke_1065_);
lean_ctor_set(v_reuseFailAlloc_1173_, 2, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1173_, 3, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1167_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
v___x_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
return v___x_1172_;
}
}
}
v___jp_1174_:
{
uint8_t v___x_1176_; uint8_t v___x_1177_; 
v___x_1176_ = 37;
v___x_1177_ = lean_uint8_dec_eq(v___y_1175_, v___x_1176_);
if (v___x_1177_ == 0)
{
lean_del_object(v___x_1112_);
goto v___jp_1139_;
}
else
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; 
v___x_1178_ = lean_unsigned_to_nat(1u);
v___x_1179_ = lean_nat_add(v_kb_1064_, v___x_1178_);
v___x_1180_ = lean_string_utf8_byte_size(v_s_1063_);
v___x_1181_ = lean_nat_dec_lt(v___x_1179_, v___x_1180_);
if (v___x_1181_ == 0)
{
uint8_t v___x_1182_; 
lean_dec(v___x_1179_);
v___x_1182_ = 0;
v___y_1164_ = v___x_1182_;
goto v___jp_1163_;
}
else
{
uint8_t v___x_1183_; 
v___x_1183_ = lean_string_get_byte_fast(v_s_1063_, v___x_1179_);
v___y_1164_ = v___x_1183_;
goto v___jp_1163_;
}
}
}
v___jp_1184_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1185_ = lean_unsigned_to_nat(2u);
v___x_1186_ = lean_nat_add(v_kb_1064_, v___x_1185_);
v___x_1187_ = lean_nat_dec_eq(v_ke_1065_, v___x_1186_);
lean_dec(v___x_1186_);
if (v___x_1187_ == 0)
{
lean_del_object(v___x_1112_);
goto v___jp_1139_;
}
else
{
lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1188_ = lean_string_utf8_byte_size(v_s_1063_);
v___x_1189_ = lean_nat_dec_lt(v_kb_1064_, v___x_1188_);
if (v___x_1189_ == 0)
{
uint8_t v___x_1190_; 
v___x_1190_ = 0;
v___y_1175_ = v___x_1190_;
goto v___jp_1174_;
}
else
{
uint8_t v___x_1191_; 
lean_inc(v_kb_1064_);
v___x_1191_ = lean_string_get_byte_fast(v_s_1063_, v_kb_1064_);
v___y_1175_ = v___x_1191_;
goto v___jp_1174_;
}
}
}
v___jp_1192_:
{
uint8_t v___x_1195_; 
v___x_1195_ = lean_uint8_dec_lt(v___y_1193_, v___y_1194_);
if (v___x_1195_ == 0)
{
lean_dec(v_stop_1108_);
lean_dec(v_start_1107_);
goto v___jp_1184_;
}
else
{
lean_dec(v_lcp_1138_);
lean_del_object(v___x_1112_);
lean_dec_ref(v_prefixes_1110_);
lean_dec_ref(v_ends_1109_);
goto v___jp_1114_;
}
}
v___jp_1196_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1198_ = lean_nat_add(v_start_1107_, v_lcp_1138_);
v___x_1199_ = lean_string_utf8_byte_size(v_s_1063_);
v___x_1200_ = lean_nat_dec_lt(v___x_1198_, v___x_1199_);
if (v___x_1200_ == 0)
{
uint8_t v___x_1201_; 
lean_dec(v___x_1198_);
v___x_1201_ = 0;
v___y_1193_ = v___y_1197_;
v___y_1194_ = v___x_1201_;
goto v___jp_1192_;
}
else
{
uint8_t v___x_1202_; 
v___x_1202_ = lean_string_get_byte_fast(v_s_1063_, v___x_1198_);
v___y_1193_ = v___y_1197_;
v___y_1194_ = v___x_1202_;
goto v___jp_1192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___boxed(lean_object* v_s_1213_, lean_object* v_kb_1214_, lean_object* v_ke_1215_, lean_object* v_ordered_1216_, lean_object* v_prev_1217_){
_start:
{
uint8_t v_ordered_boxed_1218_; lean_object* v_res_1219_; 
v_ordered_boxed_1218_ = lean_unbox(v_ordered_1216_);
v_res_1219_ = l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey(v_s_1213_, v_kb_1214_, v_ke_1215_, v_ordered_boxed_1218_, v_prev_1217_);
lean_dec_ref(v_s_1213_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0(lean_object* v_ends_1220_, lean_object* v_lcp_1221_, lean_object* v_kb_1222_, lean_object* v_s_1223_, lean_object* v_range_1224_, lean_object* v_b_1225_, lean_object* v_i_1226_, lean_object* v_hs_1227_, lean_object* v_hl_1228_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___redArg(v_ends_1220_, v_lcp_1221_, v_kb_1222_, v_s_1223_, v_range_1224_, v_b_1225_, v_i_1226_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0___boxed(lean_object* v_ends_1230_, lean_object* v_lcp_1231_, lean_object* v_kb_1232_, lean_object* v_s_1233_, lean_object* v_range_1234_, lean_object* v_b_1235_, lean_object* v_i_1236_, lean_object* v_hs_1237_, lean_object* v_hl_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__0(v_ends_1230_, v_lcp_1231_, v_kb_1232_, v_s_1233_, v_range_1234_, v_b_1235_, v_i_1236_, v_hs_1237_, v_hl_1238_);
lean_dec_ref(v_range_1234_);
lean_dec_ref(v_s_1233_);
lean_dec(v_kb_1232_);
lean_dec(v_lcp_1231_);
lean_dec_ref(v_ends_1230_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1(lean_object* v_a_1240_, lean_object* v_inst_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v___x_1243_; 
v___x_1243_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___redArg(v_a_1240_, v_a_1242_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1___boxed(lean_object* v_a_1244_, lean_object* v_inst_1245_, lean_object* v_a_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__1(v_a_1244_, v_inst_1245_, v_a_1246_);
lean_dec(v_a_1244_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2(lean_object* v_s_1248_, lean_object* v_ke_1249_, lean_object* v_kb_1250_, lean_object* v_inst_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v___x_1253_; 
v___x_1253_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___redArg(v_s_1248_, v_ke_1249_, v_kb_1250_, v_a_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2___boxed(lean_object* v_s_1254_, lean_object* v_ke_1255_, lean_object* v_kb_1256_, lean_object* v_inst_1257_, lean_object* v_a_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_decodeKey_spec__2(v_s_1254_, v_ke_1255_, v_kb_1256_, v_inst_1257_, v_a_1258_);
lean_dec(v_kb_1256_);
lean_dec(v_ke_1255_);
lean_dec_ref(v_s_1254_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(lean_object* v_snd_1262_, lean_object* v_msg_1263_){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1264_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__0));
v___x_1265_ = l_Nat_reprFast(v_snd_1262_);
v___x_1266_ = lean_string_append(v___x_1264_, v___x_1265_);
lean_dec_ref(v___x_1265_);
v___x_1267_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__1));
v___x_1268_ = lean_string_append(v___x_1266_, v___x_1267_);
v___x_1269_ = lean_string_append(v___x_1268_, v_msg_1263_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___boxed(lean_object* v_snd_1270_, lean_object* v_msg_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(v_snd_1270_, v_msg_1271_);
lean_dec_ref(v_msg_1271_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__1(lean_object* v_fst_1273_, lean_object* v_val_1274_, lean_object* v_val_1275_, lean_object* v___x_1276_, lean_object* v___x_1277_, lean_object* v___x_1278_, lean_object* v_fst_1279_, lean_object* v_fst_1280_, lean_object* v___x_1281_, lean_object* v_snd_1282_, lean_object* v_snd_1283_, lean_object* v_____r_1284_, lean_object* v_top_1285_, lean_object* v_topLine_1286_){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
lean_inc(v_fst_1279_);
v___x_1287_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1287_, 0, v_fst_1273_);
lean_ctor_set(v___x_1287_, 1, v_val_1274_);
lean_ctor_set(v___x_1287_, 2, v_val_1275_);
lean_ctor_set(v___x_1287_, 3, v___x_1276_);
lean_ctor_set(v___x_1287_, 4, v___x_1277_);
lean_ctor_set(v___x_1287_, 5, v___x_1278_);
lean_ctor_set(v___x_1287_, 6, v_fst_1279_);
v___x_1288_ = lean_array_push(v_fst_1280_, v___x_1287_);
v___x_1289_ = lean_nat_add(v_fst_1279_, v___x_1281_);
lean_dec(v_fst_1279_);
v___x_1290_ = lean_nat_add(v_snd_1282_, v___x_1281_);
v___x_1291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1289_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1292_, 0, v_topLine_1286_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1293_, 0, v_top_1285_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
v___x_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1294_, 0, v_snd_1283_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1288_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
v___x_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__1___boxed(lean_object* v_fst_1298_, lean_object* v_val_1299_, lean_object* v_val_1300_, lean_object* v___x_1301_, lean_object* v___x_1302_, lean_object* v___x_1303_, lean_object* v_fst_1304_, lean_object* v_fst_1305_, lean_object* v___x_1306_, lean_object* v_snd_1307_, lean_object* v_snd_1308_, lean_object* v_____r_1309_, lean_object* v_top_1310_, lean_object* v_topLine_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__1(v_fst_1298_, v_val_1299_, v_val_1300_, v___x_1301_, v___x_1302_, v___x_1303_, v_fst_1304_, v_fst_1305_, v___x_1306_, v_snd_1307_, v_snd_1308_, v_____r_1309_, v_top_1310_, v_topLine_1311_);
lean_dec(v_snd_1307_);
lean_dec(v___x_1306_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg(lean_object* v_size_1316_, lean_object* v_s_1317_, lean_object* v_a_1318_){
_start:
{
lean_object* v___y_1320_; lean_object* v_snd_1340_; lean_object* v_snd_1341_; lean_object* v_snd_1342_; lean_object* v_snd_1343_; lean_object* v_fst_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1492_; 
v_snd_1340_ = lean_ctor_get(v_a_1318_, 1);
lean_inc(v_snd_1340_);
v_snd_1341_ = lean_ctor_get(v_snd_1340_, 1);
lean_inc(v_snd_1341_);
v_snd_1342_ = lean_ctor_get(v_snd_1341_, 1);
lean_inc(v_snd_1342_);
v_snd_1343_ = lean_ctor_get(v_snd_1342_, 1);
lean_inc(v_snd_1343_);
v_fst_1344_ = lean_ctor_get(v_a_1318_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_a_1318_);
if (v_isSharedCheck_1492_ == 0)
{
lean_object* v_unused_1493_; 
v_unused_1493_ = lean_ctor_get(v_a_1318_, 1);
lean_dec(v_unused_1493_);
v___x_1346_ = v_a_1318_;
v_isShared_1347_ = v_isSharedCheck_1492_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_fst_1344_);
lean_dec(v_a_1318_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1492_;
goto v_resetjp_1345_;
}
v___jp_1319_:
{
if (lean_obj_tag(v___y_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1328_; 
v_a_1321_ = lean_ctor_get(v___y_1320_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___y_1320_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1323_ = v___y_1320_;
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___y_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1321_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1339_; 
v_a_1329_ = lean_ctor_get(v___y_1320_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___y_1320_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1331_ = v___y_1320_;
v_isShared_1332_ = v_isSharedCheck_1339_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___y_1320_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1339_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
if (lean_obj_tag(v_a_1329_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1335_; 
v_a_1333_ = lean_ctor_get(v_a_1329_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v_a_1329_, 1);
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 0, v_a_1333_);
v___x_1335_ = v___x_1331_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
else
{
lean_object* v_a_1337_; 
lean_del_object(v___x_1331_);
v_a_1337_ = lean_ctor_get(v_a_1329_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v_a_1329_, 1);
v_a_1318_ = v_a_1337_;
goto _start;
}
}
}
}
v_resetjp_1345_:
{
lean_object* v_fst_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1490_; 
v_fst_1348_ = lean_ctor_get(v_snd_1340_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_snd_1340_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; 
v_unused_1491_ = lean_ctor_get(v_snd_1340_, 1);
lean_dec(v_unused_1491_);
v___x_1350_ = v_snd_1340_;
v_isShared_1351_ = v_isSharedCheck_1490_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_fst_1348_);
lean_dec(v_snd_1340_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1490_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v_fst_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1488_; 
v_fst_1352_ = lean_ctor_get(v_snd_1341_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_snd_1341_);
if (v_isSharedCheck_1488_ == 0)
{
lean_object* v_unused_1489_; 
v_unused_1489_ = lean_ctor_get(v_snd_1341_, 1);
lean_dec(v_unused_1489_);
v___x_1354_ = v_snd_1341_;
v_isShared_1355_ = v_isSharedCheck_1488_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_fst_1352_);
lean_dec(v_snd_1341_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1488_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v_fst_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1486_; 
v_fst_1356_ = lean_ctor_get(v_snd_1342_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_snd_1342_);
if (v_isSharedCheck_1486_ == 0)
{
lean_object* v_unused_1487_; 
v_unused_1487_ = lean_ctor_get(v_snd_1342_, 1);
lean_dec(v_unused_1487_);
v___x_1358_ = v_snd_1342_;
v_isShared_1359_ = v_isSharedCheck_1486_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_fst_1356_);
lean_dec(v_snd_1342_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1486_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v_fst_1360_; lean_object* v_snd_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1485_; 
v_fst_1360_ = lean_ctor_get(v_snd_1343_, 0);
v_snd_1361_ = lean_ctor_get(v_snd_1343_, 1);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_snd_1343_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1363_ = v_snd_1343_;
v_isShared_1364_ = v_isSharedCheck_1485_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_snd_1361_);
lean_inc(v_fst_1360_);
lean_dec(v_snd_1343_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1485_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___y_1366_; lean_object* v___y_1367_; uint8_t v___x_1370_; 
v___x_1370_ = lean_nat_dec_lt(v_fst_1360_, v_size_1316_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1372_; 
if (v_isShared_1364_ == 0)
{
v___x_1372_ = v___x_1363_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_fst_1360_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_snd_1361_);
v___x_1372_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1374_; 
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 1, v___x_1372_);
v___x_1374_ = v___x_1358_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_fst_1356_);
lean_ctor_set(v_reuseFailAlloc_1385_, 1, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1376_; 
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 1, v___x_1374_);
v___x_1376_ = v___x_1354_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_fst_1352_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
lean_object* v___x_1378_; 
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 1, v___x_1376_);
v___x_1378_ = v___x_1350_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_fst_1348_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v___x_1376_);
v___x_1378_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
lean_object* v___x_1380_; 
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 1, v___x_1378_);
v___x_1380_ = v___x_1346_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_fst_1344_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
return v___x_1381_;
}
}
}
}
}
}
else
{
lean_object* v___x_1387_; lean_object* v_top_1388_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___y_1399_; lean_object* v___y_1400_; uint8_t v___y_1401_; uint8_t v___y_1435_; uint8_t v___y_1466_; uint8_t v___y_1474_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
lean_del_object(v___x_1363_);
lean_del_object(v___x_1358_);
lean_del_object(v___x_1354_);
lean_del_object(v___x_1350_);
lean_del_object(v___x_1346_);
v___x_1387_ = lean_unsigned_to_nat(1u);
v_top_1388_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_1360_);
v___x_1393_ = l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd(v_s_1317_, v_fst_1360_, v_size_1316_);
v___x_1394_ = lean_nat_add(v___x_1393_, v___x_1387_);
lean_inc(v___x_1394_);
v___x_1395_ = l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd(v_s_1317_, v___x_1394_, v_size_1316_);
v___x_1396_ = lean_nat_add(v___x_1395_, v___x_1387_);
lean_inc(v___x_1396_);
v___x_1397_ = l___private_Lake_Build_ModuleTimes_0__Lake_findFieldEnd(v_s_1317_, v___x_1396_, v_size_1316_);
v___x_1481_ = lean_string_utf8_byte_size(v_s_1317_);
v___x_1482_ = lean_nat_dec_lt(v___x_1393_, v___x_1481_);
if (v___x_1482_ == 0)
{
uint8_t v___x_1483_; 
v___x_1483_ = 0;
v___y_1474_ = v___x_1483_;
goto v___jp_1473_;
}
else
{
uint8_t v___x_1484_; 
lean_inc(v___x_1393_);
v___x_1484_ = lean_string_get_byte_fast(v_s_1317_, v___x_1393_);
v___y_1474_ = v___x_1484_;
goto v___jp_1473_;
}
v___jp_1389_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1390_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__0));
v___x_1391_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(v_snd_1361_, v___x_1390_);
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
return v___x_1392_;
}
v___jp_1398_:
{
lean_object* v___x_1402_; 
lean_inc(v___x_1397_);
lean_inc(v___x_1396_);
v___x_1402_ = l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey(v_s_1317_, v___x_1396_, v___x_1397_, v___y_1401_, v_fst_1348_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1344_);
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1405_ = v___x_1402_;
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1402_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1407_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(v_snd_1361_, v_a_1403_);
lean_dec(v_a_1403_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1407_);
v___x_1409_ = v___x_1405_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v_fst_1413_; lean_object* v_snd_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v_a_1412_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1402_, 1);
v_fst_1413_ = lean_ctor_get(v_a_1412_, 0);
lean_inc(v_fst_1413_);
v_snd_1414_ = lean_ctor_get(v_a_1412_, 1);
lean_inc(v_snd_1414_);
lean_dec(v_a_1412_);
v___x_1415_ = lean_nat_add(v___x_1397_, v___x_1387_);
lean_inc(v___x_1415_);
v___x_1416_ = l___private_Lake_Build_ModuleTimes_0__Lake_scanImports(v_s_1317_, v___x_1415_, v_size_1316_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1425_; 
lean_dec(v___x_1415_);
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_dec(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1344_);
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1419_ = v___x_1416_;
v_isShared_1420_ = v_isSharedCheck_1425_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1416_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1425_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1423_; 
v___x_1421_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(v_snd_1361_, v_a_1417_);
lean_dec(v_a_1417_);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1421_);
v___x_1423_ = v___x_1419_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
else
{
lean_object* v_a_1426_; lean_object* v_fst_1427_; lean_object* v_snd_1428_; lean_object* v___f_1429_; uint8_t v___x_1430_; 
v_a_1426_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1416_, 1);
v_fst_1427_ = lean_ctor_get(v_a_1426_, 0);
lean_inc_n(v_fst_1427_, 2);
v_snd_1428_ = lean_ctor_get(v_a_1426_, 1);
lean_inc(v_snd_1428_);
lean_dec(v_a_1426_);
lean_inc(v_snd_1414_);
lean_inc(v_snd_1361_);
lean_inc(v_fst_1344_);
lean_inc(v___x_1415_);
lean_inc(v___x_1397_);
lean_inc(v___x_1396_);
lean_inc(v___y_1399_);
lean_inc(v___y_1400_);
lean_inc(v_fst_1413_);
v___f_1429_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__1___boxed), 14, 11);
lean_closure_set(v___f_1429_, 0, v_fst_1413_);
lean_closure_set(v___f_1429_, 1, v___y_1400_);
lean_closure_set(v___f_1429_, 2, v___y_1399_);
lean_closure_set(v___f_1429_, 3, v___x_1396_);
lean_closure_set(v___f_1429_, 4, v___x_1397_);
lean_closure_set(v___f_1429_, 5, v___x_1415_);
lean_closure_set(v___f_1429_, 6, v_fst_1427_);
lean_closure_set(v___f_1429_, 7, v_fst_1344_);
lean_closure_set(v___f_1429_, 8, v___x_1387_);
lean_closure_set(v___f_1429_, 9, v_snd_1361_);
lean_closure_set(v___f_1429_, 10, v_snd_1414_);
v___x_1430_ = lean_nat_dec_lt(v_fst_1352_, v_snd_1428_);
if (v___x_1430_ == 0)
{
uint8_t v___x_1431_; 
v___x_1431_ = lean_nat_dec_eq(v_fst_1356_, v_top_1388_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
lean_dec_ref(v___f_1429_);
lean_dec(v_snd_1428_);
v___x_1432_ = lean_box(0);
v___x_1433_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__1(v_fst_1413_, v___y_1400_, v___y_1399_, v___x_1396_, v___x_1397_, v___x_1415_, v_fst_1427_, v_fst_1344_, v___x_1387_, v_snd_1361_, v_snd_1414_, v___x_1432_, v_fst_1352_, v_fst_1356_);
lean_dec(v_snd_1361_);
v___y_1320_ = v___x_1433_;
goto v___jp_1319_;
}
else
{
lean_dec(v_fst_1427_);
lean_dec(v___x_1415_);
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_dec(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1344_);
v___y_1366_ = v_snd_1428_;
v___y_1367_ = v___f_1429_;
goto v___jp_1365_;
}
}
else
{
lean_dec(v_fst_1427_);
lean_dec(v___x_1415_);
lean_dec(v_snd_1414_);
lean_dec(v_fst_1413_);
lean_dec(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1344_);
v___y_1366_ = v_snd_1428_;
v___y_1367_ = v___f_1429_;
goto v___jp_1365_;
}
}
}
}
v___jp_1434_:
{
uint8_t v___x_1436_; uint8_t v___x_1437_; 
v___x_1436_ = 9;
v___x_1437_ = lean_uint8_dec_eq(v___y_1435_, v___x_1436_);
if (v___x_1437_ == 0)
{
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v___x_1395_);
lean_dec(v___x_1394_);
lean_dec(v___x_1393_);
lean_dec(v_fst_1360_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1348_);
lean_dec(v_fst_1344_);
goto v___jp_1389_;
}
else
{
lean_object* v___x_1438_; 
lean_inc(v___x_1393_);
lean_inc(v_fst_1360_);
v___x_1438_ = l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f(v_s_1317_, v_fst_1360_, v___x_1393_);
if (lean_obj_tag(v___x_1438_) == 1)
{
lean_object* v_val_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1457_; 
lean_dec(v___x_1393_);
lean_dec(v_fst_1360_);
v_val_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1457_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_val_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1457_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1443_; 
lean_inc(v___x_1395_);
lean_inc(v___x_1394_);
v___x_1443_ = l___private_Lake_Build_ModuleTimes_0__Lake_parseNat_x3f(v_s_1317_, v___x_1394_, v___x_1395_);
if (lean_obj_tag(v___x_1443_) == 1)
{
lean_object* v_val_1444_; lean_object* v___x_1445_; uint8_t v___x_1446_; 
lean_del_object(v___x_1441_);
lean_dec(v___x_1395_);
lean_dec(v___x_1394_);
v_val_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_val_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1445_ = lean_array_get_size(v_fst_1344_);
v___x_1446_ = lean_nat_dec_eq(v___x_1445_, v_top_1388_);
if (v___x_1446_ == 0)
{
v___y_1399_ = v_val_1444_;
v___y_1400_ = v_val_1439_;
v___y_1401_ = v___x_1370_;
goto v___jp_1398_;
}
else
{
uint8_t v___x_1447_; 
v___x_1447_ = 0;
v___y_1399_ = v_val_1444_;
v___y_1400_ = v_val_1439_;
v___y_1401_ = v___x_1447_;
goto v___jp_1398_;
}
}
else
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1455_; 
lean_dec(v___x_1443_);
lean_dec(v_val_1439_);
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1348_);
lean_dec(v_fst_1344_);
v___x_1448_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__1));
v___x_1449_ = lean_string_utf8_extract(v_s_1317_, v___x_1394_, v___x_1395_);
lean_dec(v___x_1395_);
lean_dec(v___x_1394_);
v___x_1450_ = lean_string_append(v___x_1448_, v___x_1449_);
lean_dec_ref(v___x_1449_);
v___x_1451_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1));
v___x_1452_ = lean_string_append(v___x_1450_, v___x_1451_);
v___x_1453_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(v_snd_1361_, v___x_1452_);
lean_dec_ref(v___x_1452_);
if (v_isShared_1442_ == 0)
{
lean_ctor_set_tag(v___x_1441_, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1453_);
v___x_1455_ = v___x_1441_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
else
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
lean_dec(v___x_1438_);
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v___x_1395_);
lean_dec(v___x_1394_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1348_);
lean_dec(v_fst_1344_);
v___x_1458_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___closed__2));
v___x_1459_ = lean_string_utf8_extract(v_s_1317_, v_fst_1360_, v___x_1393_);
lean_dec(v___x_1393_);
lean_dec(v_fst_1360_);
v___x_1460_ = lean_string_append(v___x_1458_, v___x_1459_);
lean_dec_ref(v___x_1459_);
v___x_1461_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1));
v___x_1462_ = lean_string_append(v___x_1460_, v___x_1461_);
v___x_1463_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0(v_snd_1361_, v___x_1462_);
lean_dec_ref(v___x_1462_);
v___x_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
return v___x_1464_;
}
}
}
v___jp_1465_:
{
uint8_t v___x_1467_; uint8_t v___x_1468_; 
v___x_1467_ = 9;
v___x_1468_ = lean_uint8_dec_eq(v___y_1466_, v___x_1467_);
if (v___x_1468_ == 0)
{
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v___x_1395_);
lean_dec(v___x_1394_);
lean_dec(v___x_1393_);
lean_dec(v_fst_1360_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1348_);
lean_dec(v_fst_1344_);
goto v___jp_1389_;
}
else
{
lean_object* v___x_1469_; uint8_t v___x_1470_; 
v___x_1469_ = lean_string_utf8_byte_size(v_s_1317_);
v___x_1470_ = lean_nat_dec_lt(v___x_1397_, v___x_1469_);
if (v___x_1470_ == 0)
{
uint8_t v___x_1471_; 
v___x_1471_ = 0;
v___y_1435_ = v___x_1471_;
goto v___jp_1434_;
}
else
{
uint8_t v___x_1472_; 
lean_inc(v___x_1397_);
v___x_1472_ = lean_string_get_byte_fast(v_s_1317_, v___x_1397_);
v___y_1435_ = v___x_1472_;
goto v___jp_1434_;
}
}
}
v___jp_1473_:
{
uint8_t v___x_1475_; uint8_t v___x_1476_; 
v___x_1475_ = 9;
v___x_1476_ = lean_uint8_dec_eq(v___y_1474_, v___x_1475_);
if (v___x_1476_ == 0)
{
lean_dec(v___x_1397_);
lean_dec(v___x_1396_);
lean_dec(v___x_1395_);
lean_dec(v___x_1394_);
lean_dec(v___x_1393_);
lean_dec(v_fst_1360_);
lean_dec(v_fst_1356_);
lean_dec(v_fst_1352_);
lean_dec(v_fst_1348_);
lean_dec(v_fst_1344_);
goto v___jp_1389_;
}
else
{
lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1477_ = lean_string_utf8_byte_size(v_s_1317_);
v___x_1478_ = lean_nat_dec_lt(v___x_1395_, v___x_1477_);
if (v___x_1478_ == 0)
{
uint8_t v___x_1479_; 
v___x_1479_ = 0;
v___y_1466_ = v___x_1479_;
goto v___jp_1465_;
}
else
{
uint8_t v___x_1480_; 
lean_inc(v___x_1395_);
v___x_1480_ = lean_string_get_byte_fast(v_s_1317_, v___x_1395_);
v___y_1466_ = v___x_1480_;
goto v___jp_1465_;
}
}
}
}
v___jp_1365_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_box(0);
v___x_1369_ = lean_apply_3(v___y_1367_, v___x_1368_, v___y_1366_, v_snd_1361_);
v___y_1320_ = v___x_1369_;
goto v___jp_1319_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___boxed(lean_object* v_size_1494_, lean_object* v_s_1495_, lean_object* v_a_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg(v_size_1494_, v_s_1495_, v_a_1496_);
lean_dec_ref(v_s_1495_);
lean_dec(v_size_1494_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes(lean_object* v_s_1507_){
_start:
{
lean_object* v_size_1508_; uint8_t v___x_1509_; lean_object* v_top_1510_; lean_object* v_hdrEnd_1511_; lean_object* v_hdr_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v_size_1508_ = lean_string_utf8_byte_size(v_s_1507_);
v___x_1509_ = 10;
v_top_1510_ = lean_unsigned_to_nat(0u);
v_hdrEnd_1511_ = l___private_Lake_Build_ModuleTimes_0__Lake_findByte(v_s_1507_, v___x_1509_, v_top_1510_, v_size_1508_);
v_hdr_1512_ = lean_string_utf8_extract(v_s_1507_, v_top_1510_, v_hdrEnd_1511_);
v___x_1513_ = ((lean_object*)(l_Lake_moduleTimesHeader___closed__0));
v___x_1514_ = lean_string_dec_eq(v_hdr_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
lean_dec(v_hdrEnd_1511_);
lean_dec_ref(v_s_1507_);
v___x_1515_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__0));
v___x_1516_ = lean_string_append(v___x_1515_, v_hdr_1512_);
lean_dec_ref(v_hdr_1512_);
v___x_1517_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_badComponent___redArg___closed__1));
v___x_1518_ = lean_string_append(v___x_1516_, v___x_1517_);
v___x_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
return v___x_1519_;
}
else
{
lean_object* v_rows_1520_; lean_object* v_prev_1521_; lean_object* v___x_1522_; lean_object* v_i_1523_; lean_object* v_line_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
lean_dec_ref(v_hdr_1512_);
v_rows_1520_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1));
v_prev_1521_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__2));
v___x_1522_ = lean_unsigned_to_nat(1u);
v_i_1523_ = lean_nat_add(v_hdrEnd_1511_, v___x_1522_);
lean_dec(v_hdrEnd_1511_);
v_line_1524_ = lean_unsigned_to_nat(2u);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v_i_1523_);
lean_ctor_set(v___x_1525_, 1, v_line_1524_);
v___x_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1526_, 0, v_top_1510_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1527_, 0, v_top_1510_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1528_, 0, v_prev_1521_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
v___x_1529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1529_, 0, v_rows_1520_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg(v_size_1508_, v_s_1507_, v___x_1529_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
lean_dec_ref(v_s_1507_);
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1530_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1530_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1577_; 
v_a_1539_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1541_ = v___x_1530_;
v_isShared_1542_ = v_isSharedCheck_1577_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1530_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1577_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v_fst_1543_; lean_object* v_snd_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1576_; 
v_fst_1543_ = lean_ctor_get(v_a_1539_, 0);
v_snd_1544_ = lean_ctor_get(v_a_1539_, 1);
v_isSharedCheck_1576_ = !lean_is_exclusive(v_a_1539_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1546_ = v_a_1539_;
v_isShared_1547_ = v_isSharedCheck_1576_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_snd_1544_);
lean_inc(v_fst_1543_);
lean_dec(v_a_1539_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1576_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v_snd_1555_; lean_object* v_snd_1556_; lean_object* v_fst_1557_; lean_object* v_fst_1558_; uint8_t v___x_1559_; 
v_snd_1555_ = lean_ctor_get(v_snd_1544_, 1);
lean_inc(v_snd_1555_);
lean_dec(v_snd_1544_);
v_snd_1556_ = lean_ctor_get(v_snd_1555_, 1);
lean_inc(v_snd_1556_);
v_fst_1557_ = lean_ctor_get(v_snd_1555_, 0);
lean_inc(v_fst_1557_);
lean_dec(v_snd_1555_);
v_fst_1558_ = lean_ctor_get(v_snd_1556_, 0);
lean_inc(v_fst_1558_);
lean_dec(v_snd_1556_);
v___x_1559_ = lean_nat_dec_eq(v_fst_1558_, v_top_1510_);
if (v___x_1559_ == 0)
{
lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = lean_array_get_size(v_fst_1543_);
v___x_1561_ = lean_nat_dec_le(v___x_1560_, v_fst_1557_);
if (v___x_1561_ == 0)
{
lean_dec(v_fst_1558_);
lean_dec(v_fst_1557_);
goto v___jp_1548_;
}
else
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_del_object(v___x_1546_);
lean_dec(v_fst_1543_);
lean_del_object(v___x_1541_);
lean_dec_ref(v_s_1507_);
v___x_1562_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__0));
v___x_1563_ = l_Nat_reprFast(v_fst_1558_);
v___x_1564_ = lean_string_append(v___x_1562_, v___x_1563_);
lean_dec_ref(v___x_1563_);
v___x_1565_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__3));
v___x_1566_ = lean_string_append(v___x_1564_, v___x_1565_);
v___x_1567_ = l_Nat_reprFast(v_fst_1557_);
v___x_1568_ = lean_string_append(v___x_1566_, v___x_1567_);
lean_dec_ref(v___x_1567_);
v___x_1569_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__4));
v___x_1570_ = lean_string_append(v___x_1568_, v___x_1569_);
v___x_1571_ = l_Nat_reprFast(v___x_1560_);
v___x_1572_ = lean_string_append(v___x_1570_, v___x_1571_);
lean_dec_ref(v___x_1571_);
v___x_1573_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__5));
v___x_1574_ = lean_string_append(v___x_1572_, v___x_1573_);
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
return v___x_1575_;
}
}
else
{
lean_dec(v_fst_1558_);
lean_dec(v_fst_1557_);
goto v___jp_1548_;
}
v___jp_1548_:
{
lean_object* v___x_1550_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 1, v_fst_1543_);
lean_ctor_set(v___x_1546_, 0, v_s_1507_);
v___x_1550_ = v___x_1546_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_s_1507_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v_fst_1543_);
v___x_1550_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1552_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1550_);
v___x_1552_ = v___x_1541_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0(lean_object* v_size_1578_, lean_object* v_s_1579_, lean_object* v_inst_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg(v_size_1578_, v_s_1579_, v_a_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___boxed(lean_object* v_size_1583_, lean_object* v_s_1584_, lean_object* v_inst_1585_, lean_object* v_a_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0(v_size_1583_, v_s_1584_, v_inst_1585_, v_a_1586_);
lean_dec_ref(v_s_1584_);
lean_dec(v_size_1583_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord(lean_object* v_inst_1589_, lean_object* v_why_1590_){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; uint8_t v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1592_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___closed__0));
v___x_1593_ = lean_string_append(v_why_1590_, v___x_1592_);
v___x_1594_ = 2;
v___x_1595_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1595_, 0, v___x_1593_);
lean_ctor_set_uint8(v___x_1595_, sizeof(void*)*1, v___x_1594_);
v___x_1596_ = lean_apply_2(v_inst_1589_, v___x_1595_, lean_box(0));
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___boxed(lean_object* v_inst_1597_, lean_object* v_why_1598_, lean_object* v_a_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord(v_inst_1597_, v_why_1598_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0(lean_object* v_logger_1601_, lean_object* v_why_1602_){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; uint8_t v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1604_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___closed__0));
v___x_1605_ = lean_string_append(v_why_1602_, v___x_1604_);
v___x_1606_ = 2;
v___x_1607_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1607_, 0, v___x_1605_);
lean_ctor_set_uint8(v___x_1607_, sizeof(void*)*1, v___x_1606_);
v___x_1608_ = lean_apply_2(v_logger_1601_, v___x_1607_, lean_box(0));
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0___boxed(lean_object* v_logger_1609_, lean_object* v_why_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0(v_logger_1609_, v_why_1610_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lake_readModuleTimes(lean_object* v_logger_1617_, lean_object* v_path_1618_){
_start:
{
uint8_t v___x_1623_; 
v___x_1623_ = l_System_FilePath_pathExists(v_path_1618_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1624_ = ((lean_object*)(l_Lake_legacyModuleTimesFileName___closed__0));
v___x_1625_ = l_System_FilePath_withFileName(v_path_1618_, v___x_1624_);
v___x_1626_ = l_System_FilePath_pathExists(v___x_1625_);
if (v___x_1626_ == 0)
{
lean_dec_ref(v___x_1625_);
lean_dec_ref(v_logger_1617_);
goto v___jp_1620_;
}
else
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1627_ = ((lean_object*)(l_Lake_readModuleTimes___closed__1));
v___x_1628_ = lean_string_append(v___x_1625_, v___x_1627_);
v___x_1629_ = l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0(v_logger_1617_, v___x_1628_);
goto v___jp_1620_;
}
}
else
{
lean_object* v___x_1630_; 
v___x_1630_ = l_IO_FS_readFile(v_path_1618_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1649_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1633_ = v___x_1630_;
v_isShared_1634_ = v_isSharedCheck_1649_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1630_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1649_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1635_; 
v___x_1635_ = l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes(v_a_1631_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1643_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc(v_a_1636_);
lean_dec_ref_known(v___x_1635_, 1);
v___x_1637_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__1));
v___x_1638_ = lean_string_append(v_path_1618_, v___x_1637_);
v___x_1639_ = lean_string_append(v___x_1638_, v_a_1636_);
lean_dec(v_a_1636_);
v___x_1640_ = l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0(v_logger_1617_, v___x_1639_);
v___x_1641_ = ((lean_object*)(l_Lake_readModuleTimes___closed__0));
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 0, v___x_1641_);
v___x_1643_ = v___x_1633_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
else
{
lean_object* v_a_1645_; lean_object* v___x_1647_; 
lean_dec_ref(v_path_1618_);
lean_dec_ref(v_logger_1617_);
v_a_1645_ = lean_ctor_get(v___x_1635_, 0);
lean_inc(v_a_1645_);
lean_dec_ref_known(v___x_1635_, 1);
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 0, v_a_1645_);
v___x_1647_ = v___x_1633_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
lean_dec_ref(v_path_1618_);
lean_dec_ref(v_logger_1617_);
v_a_1650_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1630_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1630_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
v___jp_1620_:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = ((lean_object*)(l_Lake_readModuleTimes___closed__0));
v___x_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
return v___x_1622_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_readModuleTimes___boxed(lean_object* v_logger_1658_, lean_object* v_path_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Lake_readModuleTimes(v_logger_1658_, v_path_1659_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg(lean_object* v_s_1666_, lean_object* v_range_1667_, lean_object* v_b_1668_, lean_object* v_i_1669_){
_start:
{
lean_object* v_stop_1670_; lean_object* v_step_1671_; lean_object* v_a_1673_; uint8_t v___x_1676_; 
v_stop_1670_ = lean_ctor_get(v_range_1667_, 1);
v_step_1671_ = lean_ctor_get(v_range_1667_, 2);
v___x_1676_ = lean_nat_dec_lt(v_i_1669_, v_stop_1670_);
if (v___x_1676_ == 0)
{
lean_dec(v_i_1669_);
return v_b_1668_;
}
else
{
lean_object* v_snd_1677_; lean_object* v_fst_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1714_; 
v_snd_1677_ = lean_ctor_get(v_b_1668_, 1);
v_fst_1678_ = lean_ctor_get(v_b_1668_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v_b_1668_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1680_ = v_b_1668_;
v_isShared_1681_ = v_isSharedCheck_1714_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_snd_1677_);
lean_inc(v_fst_1678_);
lean_dec(v_b_1668_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1714_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v_fst_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1712_; 
v_fst_1682_ = lean_ctor_get(v_snd_1677_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v_snd_1677_);
if (v_isSharedCheck_1712_ == 0)
{
lean_object* v_unused_1713_; 
v_unused_1713_ = lean_ctor_get(v_snd_1677_, 1);
lean_dec(v_unused_1713_);
v___x_1684_ = v_snd_1677_;
v_isShared_1685_ = v_isSharedCheck_1712_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_fst_1682_);
lean_dec(v_snd_1677_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1712_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1686_; uint8_t v___y_1688_; lean_object* v___x_1708_; uint8_t v___x_1709_; 
v___x_1686_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg___closed__0));
v___x_1708_ = lean_string_utf8_byte_size(v_s_1666_);
v___x_1709_ = lean_nat_dec_lt(v_i_1669_, v___x_1708_);
if (v___x_1709_ == 0)
{
uint8_t v___x_1710_; 
v___x_1710_ = 0;
v___y_1688_ = v___x_1710_;
goto v___jp_1687_;
}
else
{
uint8_t v___x_1711_; 
lean_inc(v_i_1669_);
v___x_1711_ = lean_string_get_byte_fast(v_s_1666_, v_i_1669_);
v___y_1688_ = v___x_1711_;
goto v___jp_1687_;
}
v___jp_1687_:
{
uint8_t v___x_1689_; uint8_t v___x_1690_; 
v___x_1689_ = 32;
v___x_1690_ = lean_uint8_dec_eq(v___y_1688_, v___x_1689_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; uint8_t v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1699_; 
v___x_1691_ = lean_unsigned_to_nat(10u);
v___x_1692_ = lean_nat_mul(v___x_1691_, v_fst_1682_);
lean_dec(v_fst_1682_);
v___x_1693_ = 48;
v___x_1694_ = lean_uint8_sub(v___y_1688_, v___x_1693_);
v___x_1695_ = lean_uint8_to_nat(v___x_1694_);
v___x_1696_ = lean_nat_add(v___x_1692_, v___x_1695_);
lean_dec(v___x_1692_);
v___x_1697_ = lean_box(v___x_1676_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1697_);
lean_ctor_set(v___x_1684_, 0, v___x_1696_);
v___x_1699_ = v___x_1684_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1696_);
lean_ctor_set(v_reuseFailAlloc_1703_, 1, v___x_1697_);
v___x_1699_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1701_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1699_);
v___x_1701_ = v___x_1680_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_fst_1678_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
v_a_1673_ = v___x_1701_;
goto v___jp_1672_;
}
}
}
else
{
lean_object* v___x_1704_; lean_object* v___x_1706_; 
lean_del_object(v___x_1680_);
v___x_1704_ = lean_array_push(v_fst_1678_, v_fst_1682_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1686_);
lean_ctor_set(v___x_1684_, 0, v___x_1704_);
v___x_1706_ = v___x_1684_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v___x_1704_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v___x_1686_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
v_a_1673_ = v___x_1706_;
goto v___jp_1672_;
}
}
}
}
}
}
v___jp_1672_:
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_nat_add(v_i_1669_, v_step_1671_);
lean_dec(v_i_1669_);
v_b_1668_ = v_a_1673_;
v_i_1669_ = v___x_1674_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg___boxed(lean_object* v_s_1715_, lean_object* v_range_1716_, lean_object* v_b_1717_, lean_object* v_i_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg(v_s_1715_, v_range_1716_, v_b_1717_, v_i_1718_);
lean_dec_ref(v_range_1716_);
lean_dec_ref(v_s_1715_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_importIndices(lean_object* v_s_1723_, lean_object* v_b_1724_, lean_object* v_e_1725_){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v_snd_1730_; lean_object* v_snd_1731_; uint8_t v___x_1732_; 
v___x_1726_ = lean_unsigned_to_nat(1u);
lean_inc(v_b_1724_);
v___x_1727_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1727_, 0, v_b_1724_);
lean_ctor_set(v___x_1727_, 1, v_e_1725_);
lean_ctor_set(v___x_1727_, 2, v___x_1726_);
v___x_1728_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_importIndices___closed__0));
v___x_1729_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg(v_s_1723_, v___x_1727_, v___x_1728_, v_b_1724_);
lean_dec_ref_known(v___x_1727_, 3);
v_snd_1730_ = lean_ctor_get(v___x_1729_, 1);
v_snd_1731_ = lean_ctor_get(v_snd_1730_, 1);
v___x_1732_ = lean_unbox(v_snd_1731_);
if (v___x_1732_ == 0)
{
lean_object* v_fst_1733_; 
v_fst_1733_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_fst_1733_);
lean_dec_ref(v___x_1729_);
return v_fst_1733_;
}
else
{
lean_object* v_fst_1734_; lean_object* v_fst_1735_; lean_object* v___x_1736_; 
lean_inc(v_snd_1730_);
v_fst_1734_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_fst_1734_);
lean_dec_ref(v___x_1729_);
v_fst_1735_ = lean_ctor_get(v_snd_1730_, 0);
lean_inc(v_fst_1735_);
lean_dec(v_snd_1730_);
v___x_1736_ = lean_array_push(v_fst_1734_, v_fst_1735_);
return v___x_1736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_importIndices___boxed(lean_object* v_s_1737_, lean_object* v_b_1738_, lean_object* v_e_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Lake_Build_ModuleTimes_0__Lake_importIndices(v_s_1737_, v_b_1738_, v_e_1739_);
lean_dec_ref(v_s_1737_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0(lean_object* v_s_1741_, lean_object* v_range_1742_, lean_object* v_b_1743_, lean_object* v_i_1744_, lean_object* v_hs_1745_, lean_object* v_hl_1746_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___redArg(v_s_1741_, v_range_1742_, v_b_1743_, v_i_1744_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0___boxed(lean_object* v_s_1748_, lean_object* v_range_1749_, lean_object* v_b_1750_, lean_object* v_i_1751_, lean_object* v_hs_1752_, lean_object* v_hl_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_importIndices_spec__0(v_s_1748_, v_range_1749_, v_b_1750_, v_i_1751_, v_hs_1752_, v_hl_1753_);
lean_dec_ref(v_range_1749_);
lean_dec_ref(v_s_1748_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeModuleTimesFile(lean_object* v_path_1756_, lean_object* v_contents_1757_){
_start:
{
uint32_t v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v_a_1766_; lean_object* v___x_1784_; 
v___x_1759_ = lean_io_process_get_pid();
v___x_1760_ = lean_uint32_to_nat(v___x_1759_);
v___x_1761_ = l_Nat_reprFast(v___x_1760_);
v___x_1762_ = ((lean_object*)(l_Lake_writeModuleTimesFile___closed__0));
v___x_1763_ = lean_string_append(v___x_1761_, v___x_1762_);
lean_inc_ref_n(v_path_1756_, 2);
v___x_1764_ = l_System_FilePath_addExtension(v_path_1756_, v___x_1763_);
lean_dec_ref(v___x_1763_);
v___x_1784_ = l_Lake_createParentDirs(v_path_1756_);
if (lean_obj_tag(v___x_1784_) == 0)
{
uint8_t v___x_1785_; lean_object* v___x_1786_; 
lean_dec_ref_known(v___x_1784_, 1);
v___x_1785_ = 1;
v___x_1786_ = lean_io_prim_handle_mk(v___x_1764_, v___x_1785_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1788_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v___x_1788_ = lean_io_prim_handle_put_str(v_a_1787_, v_contents_1757_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v___x_1789_; 
lean_dec_ref_known(v___x_1788_, 1);
v___x_1789_ = lean_io_prim_handle_flush(v_a_1787_);
lean_dec(v_a_1787_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v___x_1790_; 
lean_dec_ref_known(v___x_1789_, 1);
v___x_1790_ = lean_io_rename(v___x_1764_, v_path_1756_);
lean_dec_ref(v_path_1756_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_dec_ref(v___x_1764_);
return v___x_1790_;
}
else
{
lean_object* v_a_1791_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1790_, 1);
v_a_1766_ = v_a_1791_;
goto v___jp_1765_;
}
}
else
{
lean_object* v_a_1792_; 
lean_dec_ref(v_path_1756_);
v_a_1792_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1792_);
lean_dec_ref_known(v___x_1789_, 1);
v_a_1766_ = v_a_1792_;
goto v___jp_1765_;
}
}
else
{
lean_object* v_a_1793_; 
lean_dec(v_a_1787_);
lean_dec_ref(v_path_1756_);
v_a_1793_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1788_, 1);
v_a_1766_ = v_a_1793_;
goto v___jp_1765_;
}
}
else
{
lean_object* v_a_1794_; 
lean_dec_ref(v_path_1756_);
v_a_1794_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1786_, 1);
v_a_1766_ = v_a_1794_;
goto v___jp_1765_;
}
}
else
{
lean_dec_ref(v___x_1764_);
lean_dec_ref(v_path_1756_);
return v___x_1784_;
}
v___jp_1765_:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_io_remove_file(v___x_1764_);
lean_dec_ref(v___x_1764_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1774_ == 0)
{
lean_object* v_unused_1775_; 
v_unused_1775_ = lean_ctor_get(v___x_1767_, 0);
lean_dec(v_unused_1775_);
v___x_1769_ = v___x_1767_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_dec(v___x_1767_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
lean_ctor_set_tag(v___x_1769_, 1);
lean_ctor_set(v___x_1769_, 0, v_a_1766_);
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1766_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
else
{
lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1782_ == 0)
{
lean_object* v_unused_1783_; 
v_unused_1783_ = lean_ctor_get(v___x_1767_, 0);
lean_dec(v_unused_1783_);
v___x_1777_ = v___x_1767_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_dec(v___x_1767_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v_a_1766_);
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1766_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_writeModuleTimesFile___boxed(lean_object* v_path_1795_, lean_object* v_contents_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Lake_writeModuleTimesFile(v_path_1795_, v_contents_1796_);
lean_dec_ref(v_contents_1796_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l_Lake_moduleTimesStamp_x3f(lean_object* v_path_1799_){
_start:
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_io_metadata(v_path_1799_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1814_; 
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1804_ = v___x_1801_;
v_isShared_1805_ = v_isSharedCheck_1814_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1801_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1814_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v_modified_1806_; uint64_t v_byteSize_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1812_; 
v_modified_1806_ = lean_ctor_get(v_a_1802_, 1);
lean_inc_ref(v_modified_1806_);
v_byteSize_1807_ = lean_ctor_get_uint64(v_a_1802_, sizeof(void*)*2);
lean_dec(v_a_1802_);
v___x_1808_ = lean_box_uint64(v_byteSize_1807_);
v___x_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
lean_ctor_set(v___x_1809_, 1, v_modified_1806_);
v___x_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v___x_1810_);
v___x_1812_ = v___x_1804_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___x_1810_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1826_; 
v_a_1815_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1817_ = v___x_1801_;
v_isShared_1818_ = v_isSharedCheck_1826_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1801_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1826_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
if (lean_obj_tag(v_a_1815_) == 11)
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
lean_dec_ref_known(v_a_1815_, 2);
v___x_1819_ = lean_box(0);
if (v_isShared_1818_ == 0)
{
lean_ctor_set_tag(v___x_1817_, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1819_);
v___x_1821_ = v___x_1817_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
else
{
lean_object* v___x_1824_; 
if (v_isShared_1818_ == 0)
{
v___x_1824_ = v___x_1817_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1815_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_moduleTimesStamp_x3f___boxed(lean_object* v_path_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lake_moduleTimesStamp_x3f(v_path_1827_);
lean_dec_ref(v_path_1827_);
return v_res_1829_;
}
}
static lean_object* _init_l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0(void){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = l_Array_instInhabited___redArg();
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining(lean_object* v_ms_1831_, lean_object* v_importers_1832_, lean_object* v_n_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_rem_1835_; lean_object* v_mark_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; uint8_t v___x_1839_; uint8_t v___x_1840_; 
v_rem_1835_ = lean_ctor_get(v_a_1834_, 0);
v_mark_1836_ = lean_ctor_get(v_a_1834_, 1);
v___x_1837_ = lean_unsigned_to_nat(0u);
v___x_1838_ = lean_byte_array_get(v_mark_1836_, v_n_1833_);
v___x_1839_ = 2;
v___x_1840_ = lean_uint8_dec_eq(v___x_1838_, v___x_1839_);
if (v___x_1840_ == 0)
{
uint8_t v___x_1841_; uint8_t v___x_1842_; 
v___x_1841_ = 1;
v___x_1842_ = lean_uint8_dec_eq(v___x_1838_, v___x_1841_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1877_; 
lean_inc_ref(v_mark_1836_);
lean_inc_ref(v_rem_1835_);
v_isSharedCheck_1877_ = !lean_is_exclusive(v_a_1834_);
if (v_isSharedCheck_1877_ == 0)
{
lean_object* v_unused_1878_; lean_object* v_unused_1879_; 
v_unused_1878_ = lean_ctor_get(v_a_1834_, 1);
lean_dec(v_unused_1878_);
v_unused_1879_ = lean_ctor_get(v_a_1834_, 0);
lean_dec(v_unused_1879_);
v___x_1844_ = v_a_1834_;
v_isShared_1845_ = v_isSharedCheck_1877_;
goto v_resetjp_1843_;
}
else
{
lean_dec(v_a_1834_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1877_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1846_ = lean_obj_once(&l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0, &l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0_once, _init_l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0);
v___x_1847_ = lean_byte_array_set(v_mark_1836_, v_n_1833_, v___x_1841_);
if (v_isShared_1845_ == 0)
{
lean_ctor_set(v___x_1844_, 1, v___x_1847_);
v___x_1849_ = v___x_1844_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_rem_1835_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1850_; size_t v_sz_1851_; size_t v___x_1852_; lean_object* v___x_1853_; lean_object* v_snd_1854_; lean_object* v_fst_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1875_; 
v___x_1850_ = lean_array_get_borrowed(v___x_1846_, v_importers_1832_, v_n_1833_);
v_sz_1851_ = lean_array_size(v___x_1850_);
v___x_1852_ = ((size_t)0ULL);
v___x_1853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_visitRemaining_spec__0(v_ms_1831_, v_importers_1832_, v___x_1850_, v_sz_1851_, v___x_1852_, v___x_1837_, v___x_1849_);
v_snd_1854_ = lean_ctor_get(v___x_1853_, 1);
v_fst_1855_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1857_ = v___x_1853_;
v_isShared_1858_ = v_isSharedCheck_1875_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_snd_1854_);
lean_inc(v_fst_1855_);
lean_dec(v___x_1853_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1875_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v_rem_1859_; lean_object* v_mark_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1874_; 
v_rem_1859_ = lean_ctor_get(v_snd_1854_, 0);
v_mark_1860_ = lean_ctor_get(v_snd_1854_, 1);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_snd_1854_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1862_ = v_snd_1854_;
v_isShared_1863_ = v_isSharedCheck_1874_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_mark_1860_);
lean_inc(v_rem_1859_);
lean_dec(v_snd_1854_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1874_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1864_ = lean_array_get_borrowed(v___x_1837_, v_ms_1831_, v_n_1833_);
v___x_1865_ = lean_nat_add(v___x_1864_, v_fst_1855_);
lean_dec(v_fst_1855_);
lean_inc(v___x_1865_);
v___x_1866_ = lean_array_set(v_rem_1859_, v_n_1833_, v___x_1865_);
v___x_1867_ = lean_byte_array_set(v_mark_1860_, v_n_1833_, v___x_1839_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 1, v___x_1867_);
lean_ctor_set(v___x_1862_, 0, v___x_1866_);
v___x_1869_ = v___x_1862_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1866_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1871_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 1, v___x_1869_);
lean_ctor_set(v___x_1857_, 0, v___x_1865_);
v___x_1871_ = v___x_1857_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1872_, 1, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1880_; 
v___x_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1837_);
lean_ctor_set(v___x_1880_, 1, v_a_1834_);
return v___x_1880_;
}
}
else
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = lean_array_get(v___x_1837_, v_rem_1835_, v_n_1833_);
v___x_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
lean_ctor_set(v___x_1882_, 1, v_a_1834_);
return v___x_1882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_visitRemaining_spec__0(lean_object* v_ms_1883_, lean_object* v_importers_1884_, lean_object* v_as_1885_, size_t v_sz_1886_, size_t v_i_1887_, lean_object* v_b_1888_, lean_object* v___y_1889_){
_start:
{
uint8_t v___x_1890_; 
v___x_1890_ = lean_usize_dec_lt(v_i_1887_, v_sz_1886_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; 
v___x_1891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1891_, 0, v_b_1888_);
lean_ctor_set(v___x_1891_, 1, v___y_1889_);
return v___x_1891_;
}
else
{
lean_object* v_a_1892_; lean_object* v___x_1893_; lean_object* v_fst_1894_; lean_object* v_snd_1895_; lean_object* v_a_1897_; uint8_t v___x_1901_; 
v_a_1892_ = lean_array_uget_borrowed(v_as_1885_, v_i_1887_);
v___x_1893_ = l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining(v_ms_1883_, v_importers_1884_, v_a_1892_, v___y_1889_);
v_fst_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_fst_1894_);
v_snd_1895_ = lean_ctor_get(v___x_1893_, 1);
lean_inc(v_snd_1895_);
lean_dec_ref(v___x_1893_);
v___x_1901_ = lean_nat_dec_le(v_b_1888_, v_fst_1894_);
if (v___x_1901_ == 0)
{
lean_dec(v_fst_1894_);
v_a_1897_ = v_b_1888_;
goto v___jp_1896_;
}
else
{
lean_dec(v_b_1888_);
v_a_1897_ = v_fst_1894_;
goto v___jp_1896_;
}
v___jp_1896_:
{
size_t v___x_1898_; size_t v___x_1899_; 
v___x_1898_ = ((size_t)1ULL);
v___x_1899_ = lean_usize_add(v_i_1887_, v___x_1898_);
v_i_1887_ = v___x_1899_;
v_b_1888_ = v_a_1897_;
v___y_1889_ = v_snd_1895_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_visitRemaining_spec__0___boxed(lean_object* v_ms_1902_, lean_object* v_importers_1903_, lean_object* v_as_1904_, lean_object* v_sz_1905_, lean_object* v_i_1906_, lean_object* v_b_1907_, lean_object* v___y_1908_){
_start:
{
size_t v_sz_boxed_1909_; size_t v_i_boxed_1910_; lean_object* v_res_1911_; 
v_sz_boxed_1909_ = lean_unbox_usize(v_sz_1905_);
lean_dec(v_sz_1905_);
v_i_boxed_1910_ = lean_unbox_usize(v_i_1906_);
lean_dec(v_i_1906_);
v_res_1911_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_visitRemaining_spec__0(v_ms_1902_, v_importers_1903_, v_as_1904_, v_sz_boxed_1909_, v_i_boxed_1910_, v_b_1907_, v___y_1908_);
lean_dec_ref(v_as_1904_);
lean_dec_ref(v_importers_1903_);
lean_dec_ref(v_ms_1902_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___boxed(lean_object* v_ms_1912_, lean_object* v_importers_1913_, lean_object* v_n_1914_, lean_object* v_a_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining(v_ms_1912_, v_importers_1913_, v_n_1914_, v_a_1915_);
lean_dec(v_n_1914_);
lean_dec_ref(v_importers_1913_);
lean_dec_ref(v_ms_1912_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___redArg(lean_object* v_ms_1917_, lean_object* v_importers_1918_, lean_object* v_range_1919_, lean_object* v_b_1920_, lean_object* v_i_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v_stop_1923_; lean_object* v_step_1924_; uint8_t v___x_1925_; 
v_stop_1923_ = lean_ctor_get(v_range_1919_, 1);
v_step_1924_ = lean_ctor_get(v_range_1919_, 2);
v___x_1925_ = lean_nat_dec_lt(v_i_1921_, v_stop_1923_);
if (v___x_1925_ == 0)
{
lean_object* v___x_1926_; 
lean_dec(v_i_1921_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v_b_1920_);
lean_ctor_set(v___x_1926_, 1, v___y_1922_);
return v___x_1926_;
}
else
{
lean_object* v___x_1927_; lean_object* v_snd_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1927_ = l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining(v_ms_1917_, v_importers_1918_, v_i_1921_, v___y_1922_);
v_snd_1928_ = lean_ctor_get(v___x_1927_, 1);
lean_inc(v_snd_1928_);
lean_dec_ref(v___x_1927_);
v___x_1929_ = lean_box(0);
v___x_1930_ = lean_nat_add(v_i_1921_, v_step_1924_);
lean_dec(v_i_1921_);
v_b_1920_ = v___x_1929_;
v_i_1921_ = v___x_1930_;
v___y_1922_ = v_snd_1928_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___redArg___boxed(lean_object* v_ms_1932_, lean_object* v_importers_1933_, lean_object* v_range_1934_, lean_object* v_b_1935_, lean_object* v_i_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___redArg(v_ms_1932_, v_importers_1933_, v_range_1934_, v_b_1935_, v_i_1936_, v___y_1937_);
lean_dec_ref(v_range_1934_);
lean_dec_ref(v_importers_1933_);
lean_dec_ref(v_ms_1932_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lake_remainingPaths(lean_object* v_ms_1939_, lean_object* v_importers_1940_){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; uint8_t v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v_init_1951_; lean_object* v___x_1952_; lean_object* v_snd_1953_; lean_object* v_rem_1954_; 
v___x_1941_ = lean_unsigned_to_nat(0u);
v___x_1942_ = lean_array_get_size(v_ms_1939_);
v___x_1943_ = lean_unsigned_to_nat(1u);
v___x_1944_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1941_);
lean_ctor_set(v___x_1944_, 1, v___x_1942_);
lean_ctor_set(v___x_1944_, 2, v___x_1943_);
v___x_1945_ = lean_box(0);
v___x_1946_ = lean_mk_array(v___x_1942_, v___x_1941_);
v___x_1947_ = 0;
v___x_1948_ = lean_box(v___x_1947_);
v___x_1949_ = lean_mk_array(v___x_1942_, v___x_1948_);
v___x_1950_ = lean_byte_array_mk(v___x_1949_);
v_init_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_init_1951_, 0, v___x_1946_);
lean_ctor_set(v_init_1951_, 1, v___x_1950_);
v___x_1952_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___redArg(v_ms_1939_, v_importers_1940_, v___x_1944_, v___x_1945_, v___x_1941_, v_init_1951_);
lean_dec_ref_known(v___x_1944_, 3);
v_snd_1953_ = lean_ctor_get(v___x_1952_, 1);
lean_inc(v_snd_1953_);
lean_dec_ref(v___x_1952_);
v_rem_1954_ = lean_ctor_get(v_snd_1953_, 0);
lean_inc_ref(v_rem_1954_);
lean_dec(v_snd_1953_);
return v_rem_1954_;
}
}
LEAN_EXPORT lean_object* l_Lake_remainingPaths___boxed(lean_object* v_ms_1955_, lean_object* v_importers_1956_){
_start:
{
lean_object* v_res_1957_; 
v_res_1957_ = l_Lake_remainingPaths(v_ms_1955_, v_importers_1956_);
lean_dec_ref(v_importers_1956_);
lean_dec_ref(v_ms_1955_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0(lean_object* v_ms_1958_, lean_object* v_importers_1959_, lean_object* v_range_1960_, lean_object* v_b_1961_, lean_object* v_i_1962_, lean_object* v_hs_1963_, lean_object* v_hl_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1966_; 
v___x_1966_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___redArg(v_ms_1958_, v_importers_1959_, v_range_1960_, v_b_1961_, v_i_1962_, v___y_1965_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0___boxed(lean_object* v_ms_1967_, lean_object* v_importers_1968_, lean_object* v_range_1969_, lean_object* v_b_1970_, lean_object* v_i_1971_, lean_object* v_hs_1972_, lean_object* v_hl_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_remainingPaths_spec__0(v_ms_1967_, v_importers_1968_, v_range_1969_, v_b_1970_, v_i_1971_, v_hs_1972_, v_hl_1973_, v___y_1974_);
lean_dec_ref(v_range_1969_);
lean_dec_ref(v_importers_1968_);
lean_dec_ref(v_ms_1967_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Lake_compilePrio(lean_object* v_remainingMs_1976_){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; uint8_t v___x_1981_; 
v___x_1977_ = lean_unsigned_to_nat(7u);
v___x_1978_ = lean_unsigned_to_nat(1000u);
v___x_1979_ = lean_nat_div(v_remainingMs_1976_, v___x_1978_);
v___x_1980_ = lean_nat_log2(v___x_1979_);
lean_dec(v___x_1979_);
v___x_1981_ = lean_nat_dec_le(v___x_1977_, v___x_1980_);
if (v___x_1981_ == 0)
{
return v___x_1980_;
}
else
{
lean_dec(v___x_1980_);
return v___x_1977_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compilePrio___boxed(lean_object* v_remainingMs_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lake_compilePrio(v_remainingMs_1982_);
lean_dec(v_remainingMs_1982_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__2___redArg(lean_object* v_a_1984_, lean_object* v_b_1985_, lean_object* v_x_1986_){
_start:
{
if (lean_obj_tag(v_x_1986_) == 0)
{
lean_dec(v_b_1985_);
lean_dec(v_a_1984_);
return v_x_1986_;
}
else
{
lean_object* v_key_1987_; lean_object* v_value_1988_; lean_object* v_tail_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_2001_; 
v_key_1987_ = lean_ctor_get(v_x_1986_, 0);
v_value_1988_ = lean_ctor_get(v_x_1986_, 1);
v_tail_1989_ = lean_ctor_get(v_x_1986_, 2);
v_isSharedCheck_2001_ = !lean_is_exclusive(v_x_1986_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1991_ = v_x_1986_;
v_isShared_1992_ = v_isSharedCheck_2001_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_tail_1989_);
lean_inc(v_value_1988_);
lean_inc(v_key_1987_);
lean_dec(v_x_1986_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_2001_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
uint8_t v___x_1993_; 
v___x_1993_ = lean_name_eq(v_key_1987_, v_a_1984_);
if (v___x_1993_ == 0)
{
lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1994_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__2___redArg(v_a_1984_, v_b_1985_, v_tail_1989_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 2, v___x_1994_);
v___x_1996_ = v___x_1991_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_key_1987_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_value_1988_);
lean_ctor_set(v_reuseFailAlloc_1997_, 2, v___x_1994_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
else
{
lean_object* v___x_1999_; 
lean_dec(v_value_1988_);
lean_dec(v_key_1987_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 1, v_b_1985_);
lean_ctor_set(v___x_1991_, 0, v_a_1984_);
v___x_1999_ = v___x_1991_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1984_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v_b_1985_);
lean_ctor_set(v_reuseFailAlloc_2000_, 2, v_tail_1989_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_2002_, lean_object* v_x_2003_){
_start:
{
if (lean_obj_tag(v_x_2003_) == 0)
{
return v_x_2002_;
}
else
{
lean_object* v_key_2004_; lean_object* v_value_2005_; lean_object* v_tail_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2032_; 
v_key_2004_ = lean_ctor_get(v_x_2003_, 0);
v_value_2005_ = lean_ctor_get(v_x_2003_, 1);
v_tail_2006_ = lean_ctor_get(v_x_2003_, 2);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_x_2003_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2008_ = v_x_2003_;
v_isShared_2009_ = v_isSharedCheck_2032_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_tail_2006_);
lean_inc(v_value_2005_);
lean_inc(v_key_2004_);
lean_dec(v_x_2003_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2032_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2010_; uint64_t v___y_2012_; 
v___x_2010_ = lean_array_get_size(v_x_2002_);
if (lean_obj_tag(v_key_2004_) == 0)
{
uint64_t v___x_2030_; 
v___x_2030_ = 1723ULL;
v___y_2012_ = v___x_2030_;
goto v___jp_2011_;
}
else
{
uint64_t v_hash_2031_; 
v_hash_2031_ = lean_ctor_get_uint64(v_key_2004_, sizeof(void*)*2);
v___y_2012_ = v_hash_2031_;
goto v___jp_2011_;
}
v___jp_2011_:
{
uint64_t v___x_2013_; uint64_t v___x_2014_; uint64_t v_fold_2015_; uint64_t v___x_2016_; uint64_t v___x_2017_; uint64_t v___x_2018_; size_t v___x_2019_; size_t v___x_2020_; size_t v___x_2021_; size_t v___x_2022_; size_t v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2013_ = 32ULL;
v___x_2014_ = lean_uint64_shift_right(v___y_2012_, v___x_2013_);
v_fold_2015_ = lean_uint64_xor(v___y_2012_, v___x_2014_);
v___x_2016_ = 16ULL;
v___x_2017_ = lean_uint64_shift_right(v_fold_2015_, v___x_2016_);
v___x_2018_ = lean_uint64_xor(v_fold_2015_, v___x_2017_);
v___x_2019_ = lean_uint64_to_usize(v___x_2018_);
v___x_2020_ = lean_usize_of_nat(v___x_2010_);
v___x_2021_ = ((size_t)1ULL);
v___x_2022_ = lean_usize_sub(v___x_2020_, v___x_2021_);
v___x_2023_ = lean_usize_land(v___x_2019_, v___x_2022_);
v___x_2024_ = lean_array_uget_borrowed(v_x_2002_, v___x_2023_);
lean_inc(v___x_2024_);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 2, v___x_2024_);
v___x_2026_ = v___x_2008_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_key_2004_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_value_2005_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
lean_object* v___x_2027_; 
v___x_2027_ = lean_array_uset(v_x_2002_, v___x_2023_, v___x_2026_);
v_x_2002_ = v___x_2027_;
v_x_2003_ = v_tail_2006_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2___redArg(lean_object* v_i_2033_, lean_object* v_source_2034_, lean_object* v_target_2035_){
_start:
{
lean_object* v___x_2036_; uint8_t v___x_2037_; 
v___x_2036_ = lean_array_get_size(v_source_2034_);
v___x_2037_ = lean_nat_dec_lt(v_i_2033_, v___x_2036_);
if (v___x_2037_ == 0)
{
lean_dec_ref(v_source_2034_);
lean_dec(v_i_2033_);
return v_target_2035_;
}
else
{
lean_object* v_es_2038_; lean_object* v___x_2039_; lean_object* v_source_2040_; lean_object* v_target_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v_es_2038_ = lean_array_fget(v_source_2034_, v_i_2033_);
v___x_2039_ = lean_box(0);
v_source_2040_ = lean_array_fset(v_source_2034_, v_i_2033_, v___x_2039_);
v_target_2041_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2_spec__4___redArg(v_target_2035_, v_es_2038_);
v___x_2042_ = lean_unsigned_to_nat(1u);
v___x_2043_ = lean_nat_add(v_i_2033_, v___x_2042_);
lean_dec(v_i_2033_);
v_i_2033_ = v___x_2043_;
v_source_2034_ = v_source_2040_;
v_target_2035_ = v_target_2041_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1___redArg(lean_object* v_data_2045_){
_start:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v_nbuckets_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2046_ = lean_array_get_size(v_data_2045_);
v___x_2047_ = lean_unsigned_to_nat(2u);
v_nbuckets_2048_ = lean_nat_mul(v___x_2046_, v___x_2047_);
v___x_2049_ = lean_unsigned_to_nat(0u);
v___x_2050_ = lean_box(0);
v___x_2051_ = lean_mk_array(v_nbuckets_2048_, v___x_2050_);
v___x_2052_ = lean_array_propagate_mark(v_data_2045_, v___x_2051_);
v___x_2053_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2___redArg(v___x_2049_, v_data_2045_, v___x_2052_);
return v___x_2053_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg(lean_object* v_a_2054_, lean_object* v_x_2055_){
_start:
{
if (lean_obj_tag(v_x_2055_) == 0)
{
uint8_t v___x_2056_; 
v___x_2056_ = 0;
return v___x_2056_;
}
else
{
lean_object* v_key_2057_; lean_object* v_tail_2058_; uint8_t v___x_2059_; 
v_key_2057_ = lean_ctor_get(v_x_2055_, 0);
v_tail_2058_ = lean_ctor_get(v_x_2055_, 2);
v___x_2059_ = lean_name_eq(v_key_2057_, v_a_2054_);
if (v___x_2059_ == 0)
{
v_x_2055_ = v_tail_2058_;
goto _start;
}
else
{
return v___x_2059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg___boxed(lean_object* v_a_2061_, lean_object* v_x_2062_){
_start:
{
uint8_t v_res_2063_; lean_object* v_r_2064_; 
v_res_2063_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg(v_a_2061_, v_x_2062_);
lean_dec(v_x_2062_);
lean_dec(v_a_2061_);
v_r_2064_ = lean_box(v_res_2063_);
return v_r_2064_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0___redArg(lean_object* v_m_2065_, lean_object* v_a_2066_, lean_object* v_b_2067_){
_start:
{
lean_object* v_size_2068_; lean_object* v_buckets_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2115_; 
v_size_2068_ = lean_ctor_get(v_m_2065_, 0);
v_buckets_2069_ = lean_ctor_get(v_m_2065_, 1);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_m_2065_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2071_ = v_m_2065_;
v_isShared_2072_ = v_isSharedCheck_2115_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_buckets_2069_);
lean_inc(v_size_2068_);
lean_dec(v_m_2065_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2115_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2073_; uint64_t v___y_2075_; 
v___x_2073_ = lean_array_get_size(v_buckets_2069_);
if (lean_obj_tag(v_a_2066_) == 0)
{
uint64_t v___x_2113_; 
v___x_2113_ = 1723ULL;
v___y_2075_ = v___x_2113_;
goto v___jp_2074_;
}
else
{
uint64_t v_hash_2114_; 
v_hash_2114_ = lean_ctor_get_uint64(v_a_2066_, sizeof(void*)*2);
v___y_2075_ = v_hash_2114_;
goto v___jp_2074_;
}
v___jp_2074_:
{
uint64_t v___x_2076_; uint64_t v___x_2077_; uint64_t v_fold_2078_; uint64_t v___x_2079_; uint64_t v___x_2080_; uint64_t v___x_2081_; size_t v___x_2082_; size_t v___x_2083_; size_t v___x_2084_; size_t v___x_2085_; size_t v___x_2086_; lean_object* v_bkt_2087_; uint8_t v___x_2088_; 
v___x_2076_ = 32ULL;
v___x_2077_ = lean_uint64_shift_right(v___y_2075_, v___x_2076_);
v_fold_2078_ = lean_uint64_xor(v___y_2075_, v___x_2077_);
v___x_2079_ = 16ULL;
v___x_2080_ = lean_uint64_shift_right(v_fold_2078_, v___x_2079_);
v___x_2081_ = lean_uint64_xor(v_fold_2078_, v___x_2080_);
v___x_2082_ = lean_uint64_to_usize(v___x_2081_);
v___x_2083_ = lean_usize_of_nat(v___x_2073_);
v___x_2084_ = ((size_t)1ULL);
v___x_2085_ = lean_usize_sub(v___x_2083_, v___x_2084_);
v___x_2086_ = lean_usize_land(v___x_2082_, v___x_2085_);
v_bkt_2087_ = lean_array_uget_borrowed(v_buckets_2069_, v___x_2086_);
v___x_2088_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg(v_a_2066_, v_bkt_2087_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; lean_object* v_size_x27_2090_; lean_object* v___x_2091_; lean_object* v_buckets_x27_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; uint8_t v___x_2098_; 
v___x_2089_ = lean_unsigned_to_nat(1u);
v_size_x27_2090_ = lean_nat_add(v_size_2068_, v___x_2089_);
lean_dec(v_size_2068_);
lean_inc(v_bkt_2087_);
v___x_2091_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2091_, 0, v_a_2066_);
lean_ctor_set(v___x_2091_, 1, v_b_2067_);
lean_ctor_set(v___x_2091_, 2, v_bkt_2087_);
v_buckets_x27_2092_ = lean_array_uset(v_buckets_2069_, v___x_2086_, v___x_2091_);
v___x_2093_ = lean_unsigned_to_nat(4u);
v___x_2094_ = lean_nat_mul(v_size_x27_2090_, v___x_2093_);
v___x_2095_ = lean_unsigned_to_nat(3u);
v___x_2096_ = lean_nat_div(v___x_2094_, v___x_2095_);
lean_dec(v___x_2094_);
v___x_2097_ = lean_array_get_size(v_buckets_x27_2092_);
v___x_2098_ = lean_nat_dec_le(v___x_2096_, v___x_2097_);
lean_dec(v___x_2096_);
if (v___x_2098_ == 0)
{
lean_object* v_val_2099_; lean_object* v___x_2101_; 
v_val_2099_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1___redArg(v_buckets_x27_2092_);
if (v_isShared_2072_ == 0)
{
lean_ctor_set(v___x_2071_, 1, v_val_2099_);
lean_ctor_set(v___x_2071_, 0, v_size_x27_2090_);
v___x_2101_ = v___x_2071_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_size_x27_2090_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_val_2099_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
else
{
lean_object* v___x_2104_; 
if (v_isShared_2072_ == 0)
{
lean_ctor_set(v___x_2071_, 1, v_buckets_x27_2092_);
lean_ctor_set(v___x_2071_, 0, v_size_x27_2090_);
v___x_2104_ = v___x_2071_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_size_x27_2090_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v_buckets_x27_2092_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
else
{
lean_object* v___x_2106_; lean_object* v_buckets_x27_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2111_; 
lean_inc(v_bkt_2087_);
v___x_2106_ = lean_box(0);
v_buckets_x27_2107_ = lean_array_uset(v_buckets_2069_, v___x_2086_, v___x_2106_);
v___x_2108_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__2___redArg(v_a_2066_, v_b_2067_, v_bkt_2087_);
v___x_2109_ = lean_array_uset(v_buckets_x27_2107_, v___x_2086_, v___x_2108_);
if (v_isShared_2072_ == 0)
{
lean_ctor_set(v___x_2071_, 1, v___x_2109_);
v___x_2111_ = v___x_2071_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_size_2068_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v___x_2109_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_load_spec__1(lean_object* v_as_2116_, size_t v_sz_2117_, size_t v_i_2118_, lean_object* v_b_2119_){
_start:
{
uint8_t v___x_2121_; 
v___x_2121_ = lean_usize_dec_lt(v_i_2118_, v_sz_2117_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2122_; 
v___x_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2122_, 0, v_b_2119_);
return v___x_2122_;
}
else
{
lean_object* v_a_2123_; lean_object* v_name_2124_; lean_object* v_rem_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; size_t v___x_2128_; size_t v___x_2129_; 
v_a_2123_ = lean_array_uget_borrowed(v_as_2116_, v_i_2118_);
v_name_2124_ = lean_ctor_get(v_a_2123_, 0);
v_rem_2125_ = lean_ctor_get(v_a_2123_, 2);
v___x_2126_ = l_Lake_compilePrio(v_rem_2125_);
lean_inc(v_name_2124_);
v___x_2127_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0___redArg(v_b_2119_, v_name_2124_, v___x_2126_);
v___x_2128_ = ((size_t)1ULL);
v___x_2129_ = lean_usize_add(v_i_2118_, v___x_2128_);
v_i_2118_ = v___x_2129_;
v_b_2119_ = v___x_2127_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_load_spec__1___boxed(lean_object* v_as_2131_, lean_object* v_sz_2132_, lean_object* v_i_2133_, lean_object* v_b_2134_, lean_object* v___y_2135_){
_start:
{
size_t v_sz_boxed_2136_; size_t v_i_boxed_2137_; lean_object* v_res_2138_; 
v_sz_boxed_2136_ = lean_unbox_usize(v_sz_2132_);
lean_dec(v_sz_2132_);
v_i_boxed_2137_ = lean_unbox_usize(v_i_2133_);
lean_dec(v_i_2133_);
v_res_2138_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_load_spec__1(v_as_2131_, v_sz_boxed_2136_, v_i_boxed_2137_, v_b_2134_);
lean_dec_ref(v_as_2131_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_load(lean_object* v_logger_2139_, lean_object* v_path_2140_){
_start:
{
lean_object* v_fst_2143_; lean_object* v_snd_2144_; lean_object* v_rows_2145_; lean_object* v_a_2180_; lean_object* v___x_2189_; 
v___x_2189_ = l_Lake_moduleTimesStamp_x3f(v_path_2140_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v_a_2190_; lean_object* v___x_2191_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_a_2190_);
lean_dec_ref_known(v___x_2189_, 1);
lean_inc_ref(v_path_2140_);
lean_inc_ref(v_logger_2139_);
v___x_2191_ = l_Lake_readModuleTimes(v_logger_2139_, v_path_2140_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; lean_object* v_rows_2193_; 
lean_dec_ref(v_logger_2139_);
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
lean_inc(v_a_2192_);
lean_dec_ref_known(v___x_2191_, 1);
v_rows_2193_ = lean_ctor_get(v_a_2192_, 1);
lean_inc_ref(v_rows_2193_);
v_fst_2143_ = v_a_2190_;
v_snd_2144_ = v_a_2192_;
v_rows_2145_ = v_rows_2193_;
goto v___jp_2142_;
}
else
{
lean_object* v_a_2194_; 
lean_dec(v_a_2190_);
v_a_2194_ = lean_ctor_get(v___x_2191_, 0);
lean_inc(v_a_2194_);
lean_dec_ref_known(v___x_2191_, 1);
v_a_2180_ = v_a_2194_;
goto v___jp_2179_;
}
}
else
{
lean_object* v_a_2195_; 
v_a_2195_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v___x_2189_, 1);
v_a_2180_ = v_a_2195_;
goto v___jp_2179_;
}
v___jp_2142_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; size_t v_sz_2156_; size_t v___x_2157_; lean_object* v___x_2158_; 
v___x_2146_ = lean_array_get_size(v_rows_2145_);
v___x_2147_ = lean_unsigned_to_nat(0u);
v___x_2148_ = lean_unsigned_to_nat(4u);
v___x_2149_ = lean_nat_mul(v___x_2146_, v___x_2148_);
v___x_2150_ = lean_unsigned_to_nat(3u);
v___x_2151_ = lean_nat_div(v___x_2149_, v___x_2150_);
lean_dec(v___x_2149_);
v___x_2152_ = l_Nat_nextPowerOfTwo(v___x_2151_);
lean_dec(v___x_2151_);
v___x_2153_ = lean_box(0);
v___x_2154_ = lean_mk_array(v___x_2152_, v___x_2153_);
v___x_2155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2147_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v_sz_2156_ = lean_array_size(v_rows_2145_);
v___x_2157_ = ((size_t)0ULL);
v___x_2158_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_load_spec__1(v_rows_2145_, v_sz_2156_, v___x_2157_, v___x_2155_);
lean_dec_ref(v_rows_2145_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2170_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2170_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2170_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2168_; 
v___x_2163_ = lean_box(0);
v___x_2164_ = lean_st_mk_ref(v___x_2163_);
v___x_2165_ = lean_st_mk_ref(v___x_2163_);
v___x_2166_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2166_, 0, v_path_2140_);
lean_ctor_set(v___x_2166_, 1, v_fst_2143_);
lean_ctor_set(v___x_2166_, 2, v_snd_2144_);
lean_ctor_set(v___x_2166_, 3, v_a_2159_);
lean_ctor_set(v___x_2166_, 4, v___x_2164_);
lean_ctor_set(v___x_2166_, 5, v___x_2165_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2166_);
v___x_2168_ = v___x_2161_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v_snd_2144_);
lean_dec(v_fst_2143_);
lean_dec_ref(v_path_2140_);
v_a_2171_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2158_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2158_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
v___jp_2179_:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2181_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes_spec__0___redArg___lam__0___closed__1));
lean_inc_ref(v_path_2140_);
v___x_2182_ = lean_string_append(v_path_2140_, v___x_2181_);
v___x_2183_ = lean_io_error_to_string(v_a_2180_);
v___x_2184_ = lean_string_append(v___x_2182_, v___x_2183_);
lean_dec_ref(v___x_2183_);
v___x_2185_ = l___private_Lake_Build_ModuleTimes_0__Lake_logIgnoredRecord___at___00Lake_readModuleTimes_spec__0(v_logger_2139_, v___x_2184_);
v___x_2186_ = lean_box(0);
v___x_2187_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_parseModuleTimes___closed__1));
v___x_2188_ = ((lean_object*)(l_Lake_readModuleTimes___closed__0));
v_fst_2143_ = v___x_2186_;
v_snd_2144_ = v___x_2188_;
v_rows_2145_ = v___x_2187_;
goto v___jp_2142_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_load___boxed(lean_object* v_logger_2196_, lean_object* v_path_2197_, lean_object* v_a_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l_Lake_ModuleTimes_load(v_logger_2196_, v_path_2197_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0(lean_object* v_00_u03b2_2200_, lean_object* v_m_2201_, lean_object* v_a_2202_, lean_object* v_b_2203_){
_start:
{
lean_object* v___x_2204_; 
v___x_2204_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0___redArg(v_m_2201_, v_a_2202_, v_b_2203_);
return v___x_2204_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0(lean_object* v_00_u03b2_2205_, lean_object* v_a_2206_, lean_object* v_x_2207_){
_start:
{
uint8_t v___x_2208_; 
v___x_2208_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg(v_a_2206_, v_x_2207_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2209_, lean_object* v_a_2210_, lean_object* v_x_2211_){
_start:
{
uint8_t v_res_2212_; lean_object* v_r_2213_; 
v_res_2212_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0(v_00_u03b2_2209_, v_a_2210_, v_x_2211_);
lean_dec(v_x_2211_);
lean_dec(v_a_2210_);
v_r_2213_ = lean_box(v_res_2212_);
return v_r_2213_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1(lean_object* v_00_u03b2_2214_, lean_object* v_data_2215_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1___redArg(v_data_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__2(lean_object* v_00_u03b2_2217_, lean_object* v_a_2218_, lean_object* v_b_2219_, lean_object* v_x_2220_){
_start:
{
lean_object* v___x_2221_; 
v___x_2221_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__2___redArg(v_a_2218_, v_b_2219_, v_x_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2222_, lean_object* v_i_2223_, lean_object* v_source_2224_, lean_object* v_target_2225_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2___redArg(v_i_2223_, v_source_2224_, v_target_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_2227_, lean_object* v_x_2228_, lean_object* v_x_2229_){
_start:
{
lean_object* v___x_2230_; 
v___x_2230_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1_spec__2_spec__4___redArg(v_x_2228_, v_x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___redArg(lean_object* v_a_2231_, lean_object* v_fallback_2232_, lean_object* v_x_2233_){
_start:
{
if (lean_obj_tag(v_x_2233_) == 0)
{
lean_inc(v_fallback_2232_);
return v_fallback_2232_;
}
else
{
lean_object* v_key_2234_; lean_object* v_value_2235_; lean_object* v_tail_2236_; uint8_t v___x_2237_; 
v_key_2234_ = lean_ctor_get(v_x_2233_, 0);
v_value_2235_ = lean_ctor_get(v_x_2233_, 1);
v_tail_2236_ = lean_ctor_get(v_x_2233_, 2);
v___x_2237_ = lean_name_eq(v_key_2234_, v_a_2231_);
if (v___x_2237_ == 0)
{
v_x_2233_ = v_tail_2236_;
goto _start;
}
else
{
lean_inc(v_value_2235_);
return v_value_2235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___redArg___boxed(lean_object* v_a_2239_, lean_object* v_fallback_2240_, lean_object* v_x_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___redArg(v_a_2239_, v_fallback_2240_, v_x_2241_);
lean_dec(v_x_2241_);
lean_dec(v_fallback_2240_);
lean_dec(v_a_2239_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___redArg(lean_object* v_m_2243_, lean_object* v_a_2244_, lean_object* v_fallback_2245_){
_start:
{
lean_object* v_buckets_2246_; lean_object* v___x_2247_; uint64_t v___y_2249_; 
v_buckets_2246_ = lean_ctor_get(v_m_2243_, 1);
v___x_2247_ = lean_array_get_size(v_buckets_2246_);
if (lean_obj_tag(v_a_2244_) == 0)
{
uint64_t v___x_2263_; 
v___x_2263_ = 1723ULL;
v___y_2249_ = v___x_2263_;
goto v___jp_2248_;
}
else
{
uint64_t v_hash_2264_; 
v_hash_2264_ = lean_ctor_get_uint64(v_a_2244_, sizeof(void*)*2);
v___y_2249_ = v_hash_2264_;
goto v___jp_2248_;
}
v___jp_2248_:
{
uint64_t v___x_2250_; uint64_t v___x_2251_; uint64_t v_fold_2252_; uint64_t v___x_2253_; uint64_t v___x_2254_; uint64_t v___x_2255_; size_t v___x_2256_; size_t v___x_2257_; size_t v___x_2258_; size_t v___x_2259_; size_t v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2250_ = 32ULL;
v___x_2251_ = lean_uint64_shift_right(v___y_2249_, v___x_2250_);
v_fold_2252_ = lean_uint64_xor(v___y_2249_, v___x_2251_);
v___x_2253_ = 16ULL;
v___x_2254_ = lean_uint64_shift_right(v_fold_2252_, v___x_2253_);
v___x_2255_ = lean_uint64_xor(v_fold_2252_, v___x_2254_);
v___x_2256_ = lean_uint64_to_usize(v___x_2255_);
v___x_2257_ = lean_usize_of_nat(v___x_2247_);
v___x_2258_ = ((size_t)1ULL);
v___x_2259_ = lean_usize_sub(v___x_2257_, v___x_2258_);
v___x_2260_ = lean_usize_land(v___x_2256_, v___x_2259_);
v___x_2261_ = lean_array_uget_borrowed(v_buckets_2246_, v___x_2260_);
v___x_2262_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___redArg(v_a_2244_, v_fallback_2245_, v___x_2261_);
return v___x_2262_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___redArg___boxed(lean_object* v_m_2265_, lean_object* v_a_2266_, lean_object* v_fallback_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___redArg(v_m_2265_, v_a_2266_, v_fallback_2267_);
lean_dec(v_fallback_2267_);
lean_dec(v_a_2266_);
lean_dec_ref(v_m_2265_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_prio(lean_object* v_self_2269_, lean_object* v_mod_2270_){
_start:
{
lean_object* v_prios_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v_prios_2271_ = lean_ctor_get(v_self_2269_, 3);
v___x_2272_ = lean_unsigned_to_nat(0u);
v___x_2273_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___redArg(v_prios_2271_, v_mod_2270_, v___x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_prio___boxed(lean_object* v_self_2274_, lean_object* v_mod_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lake_ModuleTimes_prio(v_self_2274_, v_mod_2275_);
lean_dec(v_mod_2275_);
lean_dec_ref(v_self_2274_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0(lean_object* v_00_u03b2_2277_, lean_object* v_m_2278_, lean_object* v_a_2279_, lean_object* v_fallback_2280_){
_start:
{
lean_object* v___x_2281_; 
v___x_2281_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___redArg(v_m_2278_, v_a_2279_, v_fallback_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0___boxed(lean_object* v_00_u03b2_2282_, lean_object* v_m_2283_, lean_object* v_a_2284_, lean_object* v_fallback_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0(v_00_u03b2_2282_, v_m_2283_, v_a_2284_, v_fallback_2285_);
lean_dec(v_fallback_2285_);
lean_dec(v_a_2284_);
lean_dec_ref(v_m_2283_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0(lean_object* v_00_u03b2_2287_, lean_object* v_a_2288_, lean_object* v_fallback_2289_, lean_object* v_x_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___redArg(v_a_2288_, v_fallback_2289_, v_x_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2292_, lean_object* v_a_2293_, lean_object* v_fallback_2294_, lean_object* v_x_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lake_ModuleTimes_prio_spec__0_spec__0(v_00_u03b2_2292_, v_a_2293_, v_fallback_2294_, v_x_2295_);
lean_dec(v_x_2295_);
lean_dec(v_fallback_2294_);
lean_dec(v_a_2293_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_record(lean_object* v_self_2297_, lean_object* v_e_2298_){
_start:
{
lean_object* v_new_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_new_2300_ = lean_ctor_get(v_self_2297_, 4);
v___x_2301_ = lean_st_ref_take(v_new_2300_);
v___x_2302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2302_, 0, v_e_2298_);
lean_ctor_set(v___x_2302_, 1, v___x_2301_);
v___x_2303_ = lean_st_ref_put(v_new_2300_, v___x_2302_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_record___boxed(lean_object* v_self_2304_, lean_object* v_e_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lake_ModuleTimes_record(v_self_2304_, v_e_2305_);
lean_dec_ref(v_self_2304_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_markSeen(lean_object* v_self_2308_, lean_object* v_mod_2309_){
_start:
{
lean_object* v_seen_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; 
v_seen_2311_ = lean_ctor_get(v_self_2308_, 5);
v___x_2312_ = lean_st_ref_take(v_seen_2311_);
v___x_2313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2313_, 0, v_mod_2309_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
v___x_2314_ = lean_st_ref_put(v_seen_2311_, v___x_2313_);
return v___x_2314_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_markSeen___boxed(lean_object* v_self_2315_, lean_object* v_mod_2316_, lean_object* v_a_2317_){
_start:
{
lean_object* v_res_2318_; 
v_res_2318_ = l_Lake_ModuleTimes_markSeen(v_self_2315_, v_mod_2316_);
lean_dec_ref(v_self_2315_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___redArg(lean_object* v_rows_2319_, lean_object* v_fresh_2320_, lean_object* v_seen_2321_, lean_object* v_sourceOf_2322_, lean_object* v_range_2323_, lean_object* v_b_2324_, lean_object* v_i_2325_){
_start:
{
lean_object* v_stop_2327_; lean_object* v_step_2328_; lean_object* v_a_2330_; uint8_t v___x_2333_; 
v_stop_2327_ = lean_ctor_get(v_range_2323_, 1);
v_step_2328_ = lean_ctor_get(v_range_2323_, 2);
v___x_2333_ = lean_nat_dec_lt(v_i_2325_, v_stop_2327_);
if (v___x_2333_ == 0)
{
lean_dec(v_i_2325_);
lean_dec_ref(v_sourceOf_2322_);
lean_dec_ref(v_seen_2321_);
lean_dec_ref(v_fresh_2320_);
return v_b_2324_;
}
else
{
lean_object* v_snd_2334_; lean_object* v_fst_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2385_; 
v_snd_2334_ = lean_ctor_get(v_b_2324_, 1);
v_fst_2335_ = lean_ctor_get(v_b_2324_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v_b_2324_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2337_ = v_b_2324_;
v_isShared_2338_ = v_isSharedCheck_2385_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_snd_2334_);
lean_inc(v_fst_2335_);
lean_dec(v_b_2324_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2385_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v_fst_2339_; lean_object* v_snd_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2384_; 
v_fst_2339_ = lean_ctor_get(v_snd_2334_, 0);
v_snd_2340_ = lean_ctor_get(v_snd_2334_, 1);
v_isSharedCheck_2384_ = !lean_is_exclusive(v_snd_2334_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2342_ = v_snd_2334_;
v_isShared_2343_ = v_isSharedCheck_2384_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_snd_2340_);
lean_inc(v_fst_2339_);
lean_dec(v_snd_2334_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2384_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2344_; lean_object* v_name_2345_; lean_object* v___x_2346_; uint8_t v___x_2347_; 
v___x_2344_ = lean_array_fget_borrowed(v_rows_2319_, v_i_2325_);
v_name_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc_ref(v_fresh_2320_);
lean_inc(v_name_2345_);
v___x_2346_ = lean_apply_1(v_fresh_2320_, v_name_2345_);
v___x_2347_ = lean_unbox(v___x_2346_);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; uint8_t v___x_2349_; 
lean_inc_ref(v_seen_2321_);
lean_inc(v_name_2345_);
v___x_2348_ = lean_apply_1(v_seen_2321_, v_name_2345_);
v___x_2349_ = lean_unbox(v___x_2348_);
if (v___x_2349_ == 0)
{
uint8_t v___x_2350_; lean_object* v_flags_2351_; lean_object* v___x_2352_; 
v___x_2350_ = 0;
v_flags_2351_ = lean_byte_array_push(v_fst_2335_, v___x_2350_);
lean_inc_ref(v_sourceOf_2322_);
lean_inc(v_name_2345_);
v___x_2352_ = lean_apply_1(v_sourceOf_2322_, v_name_2345_);
if (lean_obj_tag(v___x_2352_) == 1)
{
lean_object* v_val_2353_; lean_object* v_ask_2354_; lean_object* v_paths_2355_; lean_object* v___x_2357_; 
v_val_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_val_2353_);
lean_dec_ref_known(v___x_2352_, 1);
lean_inc(v_i_2325_);
v_ask_2354_ = lean_array_push(v_fst_2339_, v_i_2325_);
v_paths_2355_ = lean_array_push(v_snd_2340_, v_val_2353_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 1, v_paths_2355_);
lean_ctor_set(v___x_2342_, 0, v_ask_2354_);
v___x_2357_ = v___x_2342_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_ask_2354_);
lean_ctor_set(v_reuseFailAlloc_2361_, 1, v_paths_2355_);
v___x_2357_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2359_; 
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 1, v___x_2357_);
lean_ctor_set(v___x_2337_, 0, v_flags_2351_);
v___x_2359_ = v___x_2337_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_flags_2351_);
lean_ctor_set(v_reuseFailAlloc_2360_, 1, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
v_a_2330_ = v___x_2359_;
goto v___jp_2329_;
}
}
}
else
{
lean_object* v___x_2363_; 
lean_dec(v___x_2352_);
if (v_isShared_2343_ == 0)
{
v___x_2363_ = v___x_2342_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_fst_2339_);
lean_ctor_set(v_reuseFailAlloc_2367_, 1, v_snd_2340_);
v___x_2363_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
lean_object* v___x_2365_; 
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 1, v___x_2363_);
lean_ctor_set(v___x_2337_, 0, v_flags_2351_);
v___x_2365_ = v___x_2337_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_flags_2351_);
lean_ctor_set(v_reuseFailAlloc_2366_, 1, v___x_2363_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
v_a_2330_ = v___x_2365_;
goto v___jp_2329_;
}
}
}
}
else
{
uint8_t v___x_2368_; lean_object* v_flags_2369_; lean_object* v___x_2371_; 
v___x_2368_ = 1;
v_flags_2369_ = lean_byte_array_push(v_fst_2335_, v___x_2368_);
if (v_isShared_2343_ == 0)
{
v___x_2371_ = v___x_2342_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_fst_2339_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v_snd_2340_);
v___x_2371_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
lean_object* v___x_2373_; 
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 1, v___x_2371_);
lean_ctor_set(v___x_2337_, 0, v_flags_2369_);
v___x_2373_ = v___x_2337_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_flags_2369_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
v_a_2330_ = v___x_2373_;
goto v___jp_2329_;
}
}
}
}
else
{
uint8_t v___x_2376_; lean_object* v_flags_2377_; lean_object* v___x_2379_; 
v___x_2376_ = 0;
v_flags_2377_ = lean_byte_array_push(v_fst_2335_, v___x_2376_);
if (v_isShared_2343_ == 0)
{
v___x_2379_ = v___x_2342_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_fst_2339_);
lean_ctor_set(v_reuseFailAlloc_2383_, 1, v_snd_2340_);
v___x_2379_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2381_; 
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 1, v___x_2379_);
lean_ctor_set(v___x_2337_, 0, v_flags_2377_);
v___x_2381_ = v___x_2337_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_flags_2377_);
lean_ctor_set(v_reuseFailAlloc_2382_, 1, v___x_2379_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
v_a_2330_ = v___x_2381_;
goto v___jp_2329_;
}
}
}
}
}
}
v___jp_2329_:
{
lean_object* v___x_2331_; 
v___x_2331_ = lean_nat_add(v_i_2325_, v_step_2328_);
lean_dec(v_i_2325_);
v_b_2324_ = v_a_2330_;
v_i_2325_ = v___x_2331_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___redArg___boxed(lean_object* v_rows_2386_, lean_object* v_fresh_2387_, lean_object* v_seen_2388_, lean_object* v_sourceOf_2389_, lean_object* v_range_2390_, lean_object* v_b_2391_, lean_object* v_i_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___redArg(v_rows_2386_, v_fresh_2387_, v_seen_2388_, v_sourceOf_2389_, v_range_2390_, v_b_2391_, v_i_2392_);
lean_dec_ref(v_range_2390_);
lean_dec_ref(v_rows_2386_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___redArg(lean_object* v_val_2395_, lean_object* v_fst_2396_, lean_object* v___x_2397_, lean_object* v_range_2398_, lean_object* v_b_2399_, lean_object* v_i_2400_){
_start:
{
lean_object* v_stop_2402_; lean_object* v_step_2403_; lean_object* v_a_2405_; uint8_t v___x_2408_; 
v_stop_2402_ = lean_ctor_get(v_range_2398_, 1);
v_step_2403_ = lean_ctor_get(v_range_2398_, 2);
v___x_2408_ = lean_nat_dec_lt(v_i_2400_, v_stop_2402_);
if (v___x_2408_ == 0)
{
lean_dec(v_i_2400_);
return v_b_2399_;
}
else
{
lean_object* v___x_2409_; uint8_t v___x_2410_; 
v___x_2409_ = lean_array_fget_borrowed(v_val_2395_, v_i_2400_);
v___x_2410_ = lean_unbox(v___x_2409_);
if (v___x_2410_ == 0)
{
v_a_2405_ = v_b_2399_;
goto v___jp_2404_;
}
else
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; lean_object* v___x_2415_; 
v___x_2411_ = lean_unsigned_to_nat(0u);
v___x_2412_ = lean_nat_add(v_fst_2396_, v_i_2400_);
v___x_2413_ = lean_array_get_borrowed(v___x_2411_, v___x_2397_, v___x_2412_);
lean_dec(v___x_2412_);
v___x_2414_ = 1;
v___x_2415_ = lean_byte_array_set(v_b_2399_, v___x_2413_, v___x_2414_);
v_a_2405_ = v___x_2415_;
goto v___jp_2404_;
}
}
v___jp_2404_:
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_nat_add(v_i_2400_, v_step_2403_);
lean_dec(v_i_2400_);
v_b_2399_ = v_a_2405_;
v_i_2400_ = v___x_2406_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___redArg___boxed(lean_object* v_val_2416_, lean_object* v_fst_2417_, lean_object* v___x_2418_, lean_object* v_range_2419_, lean_object* v_b_2420_, lean_object* v_i_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___redArg(v_val_2416_, v_fst_2417_, v___x_2418_, v_range_2419_, v_b_2420_, v_i_2421_);
lean_dec_ref(v_range_2419_);
lean_dec_ref(v___x_2418_);
lean_dec(v_fst_2417_);
lean_dec_ref(v_val_2416_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__4(lean_object* v___x_2424_, lean_object* v_as_2425_, size_t v_sz_2426_, size_t v_i_2427_, lean_object* v_b_2428_){
_start:
{
uint8_t v___x_2430_; 
v___x_2430_ = lean_usize_dec_lt(v_i_2427_, v_sz_2426_);
if (v___x_2430_ == 0)
{
return v_b_2428_;
}
else
{
lean_object* v_a_2431_; lean_object* v_fst_2432_; lean_object* v_snd_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; size_t v___x_2440_; size_t v___x_2441_; 
v_a_2431_ = lean_array_uget_borrowed(v_as_2425_, v_i_2427_);
v_fst_2432_ = lean_ctor_get(v_a_2431_, 0);
v_snd_2433_ = lean_ctor_get(v_a_2431_, 1);
v___x_2434_ = lean_unsigned_to_nat(0u);
v___x_2435_ = lean_unsigned_to_nat(1u);
lean_inc(v_snd_2433_);
v___x_2436_ = lean_io_wait(v_snd_2433_);
v___x_2437_ = lean_array_get_size(v___x_2436_);
v___x_2438_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2434_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
lean_ctor_set(v___x_2438_, 2, v___x_2435_);
v___x_2439_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___redArg(v___x_2436_, v_fst_2432_, v___x_2424_, v___x_2438_, v_b_2428_, v___x_2434_);
lean_dec_ref_known(v___x_2438_, 3);
lean_dec(v___x_2436_);
v___x_2440_ = ((size_t)1ULL);
v___x_2441_ = lean_usize_add(v_i_2427_, v___x_2440_);
v_i_2427_ = v___x_2441_;
v_b_2428_ = v___x_2439_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__4___boxed(lean_object* v___x_2443_, lean_object* v_as_2444_, lean_object* v_sz_2445_, lean_object* v_i_2446_, lean_object* v_b_2447_, lean_object* v___y_2448_){
_start:
{
size_t v_sz_boxed_2449_; size_t v_i_boxed_2450_; lean_object* v_res_2451_; 
v_sz_boxed_2449_ = lean_unbox_usize(v_sz_2445_);
lean_dec(v_sz_2445_);
v_i_boxed_2450_ = lean_unbox_usize(v_i_2446_);
lean_dec(v_i_2446_);
v_res_2451_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__4(v___x_2443_, v_as_2444_, v_sz_boxed_2449_, v_i_boxed_2450_, v_b_2447_);
lean_dec_ref(v_as_2444_);
lean_dec_ref(v___x_2443_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__2(size_t v_sz_2452_, size_t v_i_2453_, lean_object* v_bs_2454_){
_start:
{
uint8_t v___x_2456_; 
v___x_2456_ = lean_usize_dec_lt(v_i_2453_, v_sz_2452_);
if (v___x_2456_ == 0)
{
return v_bs_2454_;
}
else
{
lean_object* v_v_2457_; lean_object* v___x_2458_; lean_object* v_bs_x27_2459_; uint8_t v___x_2460_; size_t v___x_2461_; size_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v_v_2457_ = lean_array_uget(v_bs_2454_, v_i_2453_);
v___x_2458_ = lean_unsigned_to_nat(0u);
v_bs_x27_2459_ = lean_array_uset(v_bs_2454_, v_i_2453_, v___x_2458_);
v___x_2460_ = l_System_FilePath_pathExists(v_v_2457_);
lean_dec(v_v_2457_);
v___x_2461_ = ((size_t)1ULL);
v___x_2462_ = lean_usize_add(v_i_2453_, v___x_2461_);
v___x_2463_ = lean_box(v___x_2460_);
v___x_2464_ = lean_array_uset(v_bs_x27_2459_, v_i_2453_, v___x_2463_);
v_i_2453_ = v___x_2462_;
v_bs_2454_ = v___x_2464_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__2___boxed(lean_object* v_sz_2466_, lean_object* v_i_2467_, lean_object* v_bs_2468_, lean_object* v___y_2469_){
_start:
{
size_t v_sz_boxed_2470_; size_t v_i_boxed_2471_; lean_object* v_res_2472_; 
v_sz_boxed_2470_ = lean_unbox_usize(v_sz_2466_);
lean_dec(v_sz_2466_);
v_i_boxed_2471_ = lean_unbox_usize(v_i_2467_);
lean_dec(v_i_2467_);
v_res_2472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__2(v_sz_boxed_2470_, v_i_boxed_2471_, v_bs_2468_);
return v_res_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg(lean_object* v___x_2475_, lean_object* v_range_2476_, lean_object* v_b_2477_, lean_object* v_i_2478_){
_start:
{
lean_object* v_stop_2480_; lean_object* v_step_2481_; uint8_t v___x_2482_; 
v_stop_2480_ = lean_ctor_get(v_range_2476_, 1);
v_step_2481_ = lean_ctor_get(v_range_2476_, 2);
v___x_2482_ = lean_nat_dec_lt(v_i_2478_, v_stop_2480_);
if (v___x_2482_ == 0)
{
lean_dec(v_i_2478_);
return v_b_2477_;
}
else
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; size_t v_sz_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2483_ = lean_unsigned_to_nat(512u);
v___x_2484_ = lean_unsigned_to_nat(1u);
v___x_2485_ = lean_nat_mul(v_i_2478_, v___x_2483_);
v___x_2486_ = lean_nat_add(v_i_2478_, v___x_2484_);
v___x_2487_ = lean_nat_mul(v___x_2486_, v___x_2483_);
lean_dec(v___x_2486_);
lean_inc(v___x_2485_);
v___x_2488_ = l_Array_extract___redArg(v___x_2475_, v___x_2485_, v___x_2487_);
v_sz_2489_ = lean_array_size(v___x_2488_);
v___x_2490_ = lean_box_usize(v_sz_2489_);
v___x_2491_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg___boxed__const__1));
v___x_2492_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__2___boxed), 4, 3);
lean_closure_set(v___x_2492_, 0, v___x_2490_);
lean_closure_set(v___x_2492_, 1, v___x_2491_);
lean_closure_set(v___x_2492_, 2, v___x_2488_);
v___x_2493_ = lean_unsigned_to_nat(0u);
v___x_2494_ = lean_io_as_task(v___x_2492_, v___x_2493_);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2485_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
v___x_2496_ = lean_array_push(v_b_2477_, v___x_2495_);
v___x_2497_ = lean_nat_add(v_i_2478_, v_step_2481_);
lean_dec(v_i_2478_);
v_b_2477_ = v___x_2496_;
v_i_2478_ = v___x_2497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg___boxed(lean_object* v___x_2499_, lean_object* v_range_2500_, lean_object* v_b_2501_, lean_object* v_i_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg(v___x_2499_, v_range_2500_, v_b_2501_, v_i_2502_);
lean_dec_ref(v_range_2500_);
lean_dec_ref(v___x_2499_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_keepRows(lean_object* v_rows_2507_, lean_object* v_fresh_2508_, lean_object* v_seen_2509_, lean_object* v_sourceOf_2510_){
_start:
{
lean_object* v___x_2512_; lean_object* v_flags_2513_; lean_object* v___x_2514_; lean_object* v_ask_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v_snd_2521_; lean_object* v_fst_2522_; lean_object* v_fst_2523_; lean_object* v_snd_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; size_t v_sz_2533_; size_t v___x_2534_; lean_object* v___x_2535_; 
v___x_2512_ = lean_array_get_size(v_rows_2507_);
v_flags_2513_ = lean_mk_empty_byte_array(v___x_2512_);
v___x_2514_ = lean_unsigned_to_nat(0u);
v_ask_2515_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2));
v___x_2516_ = lean_unsigned_to_nat(1u);
v___x_2517_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2514_);
lean_ctor_set(v___x_2517_, 1, v___x_2512_);
lean_ctor_set(v___x_2517_, 2, v___x_2516_);
v___x_2518_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_keepRows___closed__0));
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v_flags_2513_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___redArg(v_rows_2507_, v_fresh_2508_, v_seen_2509_, v_sourceOf_2510_, v___x_2517_, v___x_2519_, v___x_2514_);
lean_dec_ref_known(v___x_2517_, 3);
v_snd_2521_ = lean_ctor_get(v___x_2520_, 1);
lean_inc(v_snd_2521_);
v_fst_2522_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_fst_2522_);
lean_dec_ref(v___x_2520_);
v_fst_2523_ = lean_ctor_get(v_snd_2521_, 0);
lean_inc(v_fst_2523_);
v_snd_2524_ = lean_ctor_get(v_snd_2521_, 1);
lean_inc(v_snd_2524_);
lean_dec(v_snd_2521_);
v___x_2525_ = lean_unsigned_to_nat(512u);
v___x_2526_ = lean_array_get_size(v_snd_2524_);
v___x_2527_ = lean_nat_add(v___x_2526_, v___x_2525_);
v___x_2528_ = lean_nat_sub(v___x_2527_, v___x_2516_);
lean_dec(v___x_2527_);
v___x_2529_ = lean_unsigned_to_nat(9u);
v___x_2530_ = lean_nat_shiftr(v___x_2528_, v___x_2529_);
lean_dec(v___x_2528_);
v___x_2531_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2514_);
lean_ctor_set(v___x_2531_, 1, v___x_2530_);
lean_ctor_set(v___x_2531_, 2, v___x_2516_);
v___x_2532_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg(v_snd_2524_, v___x_2531_, v_ask_2515_, v___x_2514_);
lean_dec_ref_known(v___x_2531_, 3);
lean_dec(v_snd_2524_);
v_sz_2533_ = lean_array_size(v___x_2532_);
v___x_2534_ = ((size_t)0ULL);
v___x_2535_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__4(v_fst_2523_, v___x_2532_, v_sz_2533_, v___x_2534_, v_fst_2522_);
lean_dec_ref(v___x_2532_);
lean_dec(v_fst_2523_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_keepRows___boxed(lean_object* v_rows_2536_, lean_object* v_fresh_2537_, lean_object* v_seen_2538_, lean_object* v_sourceOf_2539_, lean_object* v_a_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l___private_Lake_Build_ModuleTimes_0__Lake_keepRows(v_rows_2536_, v_fresh_2537_, v_seen_2538_, v_sourceOf_2539_);
lean_dec_ref(v_rows_2536_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0(lean_object* v_rows_2542_, lean_object* v_fresh_2543_, lean_object* v_seen_2544_, lean_object* v_sourceOf_2545_, lean_object* v_range_2546_, lean_object* v_b_2547_, lean_object* v_i_2548_, lean_object* v_hs_2549_, lean_object* v_hl_2550_){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___redArg(v_rows_2542_, v_fresh_2543_, v_seen_2544_, v_sourceOf_2545_, v_range_2546_, v_b_2547_, v_i_2548_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0___boxed(lean_object* v_rows_2553_, lean_object* v_fresh_2554_, lean_object* v_seen_2555_, lean_object* v_sourceOf_2556_, lean_object* v_range_2557_, lean_object* v_b_2558_, lean_object* v_i_2559_, lean_object* v_hs_2560_, lean_object* v_hl_2561_, lean_object* v___y_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__0(v_rows_2553_, v_fresh_2554_, v_seen_2555_, v_sourceOf_2556_, v_range_2557_, v_b_2558_, v_i_2559_, v_hs_2560_, v_hl_2561_);
lean_dec_ref(v_range_2557_);
lean_dec_ref(v_rows_2553_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1(lean_object* v_val_2564_, lean_object* v_fst_2565_, lean_object* v___x_2566_, lean_object* v_range_2567_, lean_object* v_b_2568_, lean_object* v_i_2569_, lean_object* v_hs_2570_, lean_object* v_hl_2571_){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___redArg(v_val_2564_, v_fst_2565_, v___x_2566_, v_range_2567_, v_b_2568_, v_i_2569_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1___boxed(lean_object* v_val_2574_, lean_object* v_fst_2575_, lean_object* v___x_2576_, lean_object* v_range_2577_, lean_object* v_b_2578_, lean_object* v_i_2579_, lean_object* v_hs_2580_, lean_object* v_hl_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v_res_2583_; 
v_res_2583_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__1(v_val_2574_, v_fst_2575_, v___x_2576_, v_range_2577_, v_b_2578_, v_i_2579_, v_hs_2580_, v_hl_2581_);
lean_dec_ref(v_range_2577_);
lean_dec_ref(v___x_2576_);
lean_dec(v_fst_2575_);
lean_dec_ref(v_val_2574_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3(lean_object* v___x_2584_, lean_object* v_range_2585_, lean_object* v_b_2586_, lean_object* v_i_2587_, lean_object* v_hs_2588_, lean_object* v_hl_2589_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___redArg(v___x_2584_, v_range_2585_, v_b_2586_, v_i_2587_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3___boxed(lean_object* v___x_2592_, lean_object* v_range_2593_, lean_object* v_b_2594_, lean_object* v_i_2595_, lean_object* v_hs_2596_, lean_object* v_hl_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lake_Build_ModuleTimes_0__Lake_keepRows_spec__3(v___x_2592_, v_range_2593_, v_b_2594_, v_i_2595_, v_hs_2596_, v_hl_2597_);
lean_dec_ref(v_range_2593_);
lean_dec_ref(v___x_2592_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorIdx___impl(lean_object* v_x_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = lean_obj_tag_nat(v_x_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorIdx___impl___boxed(lean_object* v_x_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorIdx___impl(v_x_2602_);
lean_dec_ref(v_x_2602_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(lean_object* v_t_2604_, lean_object* v_k_2605_){
_start:
{
lean_object* v_row_2606_; lean_object* v___x_2607_; 
v_row_2606_ = lean_ctor_get(v_t_2604_, 0);
lean_inc(v_row_2606_);
lean_dec_ref(v_t_2604_);
v___x_2607_ = lean_apply_1(v_k_2605_, v_row_2606_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim(lean_object* v_motive_2608_, lean_object* v_ctorIdx_2609_, lean_object* v_t_2610_, lean_object* v_h_2611_, lean_object* v_k_2612_){
_start:
{
lean_object* v___x_2613_; 
v___x_2613_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2610_, v_k_2612_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___boxed(lean_object* v_motive_2614_, lean_object* v_ctorIdx_2615_, lean_object* v_t_2616_, lean_object* v_h_2617_, lean_object* v_k_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim(v_motive_2614_, v_ctorIdx_2615_, v_t_2616_, v_h_2617_, v_k_2618_);
lean_dec(v_ctorIdx_2615_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_kept_elim___redArg(lean_object* v_t_2620_, lean_object* v_kept_2621_){
_start:
{
lean_object* v___x_2622_; 
v___x_2622_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2620_, v_kept_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_kept_elim(lean_object* v_motive_2623_, lean_object* v_t_2624_, lean_object* v_h_2625_, lean_object* v_kept_2626_){
_start:
{
lean_object* v___x_2627_; 
v___x_2627_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2624_, v_kept_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_hollow_elim___redArg(lean_object* v_t_2628_, lean_object* v_hollow_2629_){
_start:
{
lean_object* v___x_2630_; 
v___x_2630_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2628_, v_hollow_2629_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_hollow_elim(lean_object* v_motive_2631_, lean_object* v_t_2632_, lean_object* v_h_2633_, lean_object* v_hollow_2634_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2632_, v_hollow_2634_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_fresh_elim___redArg(lean_object* v_t_2636_, lean_object* v_fresh_2637_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2636_, v_fresh_2637_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_fresh_elim(lean_object* v_motive_2639_, lean_object* v_t_2640_, lean_object* v_h_2641_, lean_object* v_fresh_2642_){
_start:
{
lean_object* v___x_2643_; 
v___x_2643_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2640_, v_fresh_2642_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_extra_elim___redArg(lean_object* v_t_2644_, lean_object* v_extra_2645_){
_start:
{
lean_object* v___x_2646_; 
v___x_2646_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2644_, v_extra_2645_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_extra_elim(lean_object* v_motive_2647_, lean_object* v_t_2648_, lean_object* v_h_2649_, lean_object* v_extra_2650_){
_start:
{
lean_object* v___x_2651_; 
v___x_2651_ = l___private_Lake_Build_ModuleTimes_0__Lake_OutLine_ctorElim___redArg(v_t_2648_, v_extra_2650_);
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_bsearch_spec__0___redArg(lean_object* v_cmp_2656_, lean_object* v_a_2657_){
_start:
{
lean_object* v_snd_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2704_; 
v_snd_2658_ = lean_ctor_get(v_a_2657_, 1);
v_isSharedCheck_2704_ = !lean_is_exclusive(v_a_2657_);
if (v_isSharedCheck_2704_ == 0)
{
lean_object* v_unused_2705_; 
v_unused_2705_ = lean_ctor_get(v_a_2657_, 0);
lean_dec(v_unused_2705_);
v___x_2660_ = v_a_2657_;
v_isShared_2661_ = v_isSharedCheck_2704_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_snd_2658_);
lean_dec(v_a_2657_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2704_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v_fst_2662_; lean_object* v_snd_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2703_; 
v_fst_2662_ = lean_ctor_get(v_snd_2658_, 0);
v_snd_2663_ = lean_ctor_get(v_snd_2658_, 1);
v_isSharedCheck_2703_ = !lean_is_exclusive(v_snd_2658_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2665_ = v_snd_2658_;
v_isShared_2666_ = v_isSharedCheck_2703_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_snd_2663_);
lean_inc(v_fst_2662_);
lean_dec(v_snd_2658_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2703_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2667_; uint8_t v___x_2668_; 
v___x_2667_ = lean_box(0);
v___x_2668_ = lean_nat_dec_lt(v_fst_2662_, v_snd_2663_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2670_; 
lean_dec_ref(v_cmp_2656_);
if (v_isShared_2666_ == 0)
{
v___x_2670_ = v___x_2665_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_fst_2662_);
lean_ctor_set(v_reuseFailAlloc_2674_, 1, v_snd_2663_);
v___x_2670_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
lean_object* v___x_2672_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v___x_2670_);
lean_ctor_set(v___x_2660_, 0, v___x_2667_);
v___x_2672_ = v___x_2660_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v___x_2667_);
lean_ctor_set(v_reuseFailAlloc_2673_, 1, v___x_2670_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2675_ = lean_nat_add(v_fst_2662_, v_snd_2663_);
v___x_2676_ = lean_unsigned_to_nat(1u);
v___x_2677_ = lean_nat_shiftr(v___x_2675_, v___x_2676_);
lean_dec(v___x_2675_);
lean_inc_ref(v_cmp_2656_);
lean_inc(v___x_2677_);
v___x_2678_ = lean_apply_1(v_cmp_2656_, v___x_2677_);
v___x_2679_ = lean_unbox(v___x_2678_);
switch(v___x_2679_)
{
case 0:
{
lean_object* v___x_2680_; lean_object* v___x_2682_; 
lean_dec(v_fst_2662_);
v___x_2680_ = lean_nat_add(v___x_2677_, v___x_2676_);
lean_dec(v___x_2677_);
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 0, v___x_2680_);
v___x_2682_ = v___x_2665_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2680_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v_snd_2663_);
v___x_2682_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
lean_object* v___x_2684_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v___x_2682_);
lean_ctor_set(v___x_2660_, 0, v___x_2667_);
v___x_2684_ = v___x_2660_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2667_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v___x_2682_);
v___x_2684_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
v_a_2657_ = v___x_2684_;
goto _start;
}
}
}
case 1:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2691_; 
lean_dec_ref(v_cmp_2656_);
v___x_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2677_);
v___x_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2688_);
if (v_isShared_2666_ == 0)
{
v___x_2691_ = v___x_2665_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_fst_2662_);
lean_ctor_set(v_reuseFailAlloc_2695_, 1, v_snd_2663_);
v___x_2691_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
lean_object* v___x_2693_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v___x_2691_);
lean_ctor_set(v___x_2660_, 0, v___x_2689_);
v___x_2693_ = v___x_2660_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v___x_2689_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v___x_2691_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
default: 
{
lean_object* v___x_2697_; 
lean_dec(v_snd_2663_);
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 1, v___x_2677_);
v___x_2697_ = v___x_2665_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_fst_2662_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v___x_2677_);
v___x_2697_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
lean_object* v___x_2699_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v___x_2697_);
lean_ctor_set(v___x_2660_, 0, v___x_2667_);
v___x_2699_ = v___x_2660_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v___x_2667_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
v_a_2657_ = v___x_2699_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(lean_object* v_n_2706_, lean_object* v_cmp_2707_){
_start:
{
lean_object* v_lo_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v_fst_2713_; 
v_lo_2708_ = lean_unsigned_to_nat(0u);
v___x_2709_ = lean_box(0);
v___x_2710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2710_, 0, v_lo_2708_);
lean_ctor_set(v___x_2710_, 1, v_n_2706_);
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2709_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_bsearch_spec__0___redArg(v_cmp_2707_, v___x_2711_);
v_fst_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc(v_fst_2713_);
lean_dec_ref(v___x_2712_);
if (lean_obj_tag(v_fst_2713_) == 0)
{
return v___x_2709_;
}
else
{
lean_object* v_val_2714_; 
v_val_2714_ = lean_ctor_get(v_fst_2713_, 0);
lean_inc(v_val_2714_);
lean_dec_ref_known(v_fst_2713_, 1);
return v_val_2714_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_bsearch_spec__0(lean_object* v_cmp_2715_, lean_object* v_inst_2716_, lean_object* v_a_2717_){
_start:
{
lean_object* v___x_2718_; 
v___x_2718_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lake_Build_ModuleTimes_0__Lake_bsearch_spec__0___redArg(v_cmp_2715_, v_a_2717_);
return v___x_2718_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_ModuleTimes_save_spec__27(lean_object* v_x_2719_, lean_object* v_x_2720_){
_start:
{
if (lean_obj_tag(v_x_2719_) == 0)
{
if (lean_obj_tag(v_x_2720_) == 0)
{
uint8_t v___x_2721_; 
v___x_2721_ = 1;
return v___x_2721_;
}
else
{
uint8_t v___x_2722_; 
v___x_2722_ = 0;
return v___x_2722_;
}
}
else
{
if (lean_obj_tag(v_x_2720_) == 0)
{
uint8_t v___x_2723_; 
v___x_2723_ = 0;
return v___x_2723_;
}
else
{
lean_object* v_val_2724_; lean_object* v_val_2725_; lean_object* v_fst_2726_; lean_object* v_snd_2727_; lean_object* v_fst_2728_; lean_object* v_snd_2729_; uint64_t v___x_2730_; uint64_t v___x_2731_; uint8_t v___x_2732_; 
v_val_2724_ = lean_ctor_get(v_x_2719_, 0);
v_val_2725_ = lean_ctor_get(v_x_2720_, 0);
v_fst_2726_ = lean_ctor_get(v_val_2724_, 0);
v_snd_2727_ = lean_ctor_get(v_val_2724_, 1);
v_fst_2728_ = lean_ctor_get(v_val_2725_, 0);
v_snd_2729_ = lean_ctor_get(v_val_2725_, 1);
v___x_2730_ = lean_unbox_uint64(v_fst_2726_);
v___x_2731_ = lean_unbox_uint64(v_fst_2728_);
v___x_2732_ = lean_uint64_dec_eq(v___x_2730_, v___x_2731_);
if (v___x_2732_ == 0)
{
return v___x_2732_;
}
else
{
uint8_t v___x_2733_; 
v___x_2733_ = l_IO_FS_instBEqSystemTime_beq(v_snd_2727_, v_snd_2729_);
return v___x_2733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_ModuleTimes_save_spec__27___boxed(lean_object* v_x_2734_, lean_object* v_x_2735_){
_start:
{
uint8_t v_res_2736_; lean_object* v_r_2737_; 
v_res_2736_ = l_instBEqOption_beq___at___00Lake_ModuleTimes_save_spec__27(v_x_2734_, v_x_2735_);
lean_dec(v_x_2735_);
lean_dec(v_x_2734_);
v_r_2737_ = lean_box(v_res_2736_);
return v_r_2737_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg(lean_object* v_m_2738_, lean_object* v_a_2739_){
_start:
{
lean_object* v_buckets_2740_; lean_object* v___x_2741_; uint64_t v___y_2743_; 
v_buckets_2740_ = lean_ctor_get(v_m_2738_, 1);
v___x_2741_ = lean_array_get_size(v_buckets_2740_);
if (lean_obj_tag(v_a_2739_) == 0)
{
uint64_t v___x_2757_; 
v___x_2757_ = 1723ULL;
v___y_2743_ = v___x_2757_;
goto v___jp_2742_;
}
else
{
uint64_t v_hash_2758_; 
v_hash_2758_ = lean_ctor_get_uint64(v_a_2739_, sizeof(void*)*2);
v___y_2743_ = v_hash_2758_;
goto v___jp_2742_;
}
v___jp_2742_:
{
uint64_t v___x_2744_; uint64_t v___x_2745_; uint64_t v_fold_2746_; uint64_t v___x_2747_; uint64_t v___x_2748_; uint64_t v___x_2749_; size_t v___x_2750_; size_t v___x_2751_; size_t v___x_2752_; size_t v___x_2753_; size_t v___x_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; 
v___x_2744_ = 32ULL;
v___x_2745_ = lean_uint64_shift_right(v___y_2743_, v___x_2744_);
v_fold_2746_ = lean_uint64_xor(v___y_2743_, v___x_2745_);
v___x_2747_ = 16ULL;
v___x_2748_ = lean_uint64_shift_right(v_fold_2746_, v___x_2747_);
v___x_2749_ = lean_uint64_xor(v_fold_2746_, v___x_2748_);
v___x_2750_ = lean_uint64_to_usize(v___x_2749_);
v___x_2751_ = lean_usize_of_nat(v___x_2741_);
v___x_2752_ = ((size_t)1ULL);
v___x_2753_ = lean_usize_sub(v___x_2751_, v___x_2752_);
v___x_2754_ = lean_usize_land(v___x_2750_, v___x_2753_);
v___x_2755_ = lean_array_uget_borrowed(v_buckets_2740_, v___x_2754_);
v___x_2756_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg(v_a_2739_, v___x_2755_);
return v___x_2756_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg___boxed(lean_object* v_m_2759_, lean_object* v_a_2760_){
_start:
{
uint8_t v_res_2761_; lean_object* v_r_2762_; 
v_res_2761_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg(v_m_2759_, v_a_2760_);
lean_dec(v_a_2760_);
lean_dec_ref(v_m_2759_);
v_r_2762_ = lean_box(v_res_2761_);
return v_r_2762_;
}
}
LEAN_EXPORT uint8_t l_Lake_ModuleTimes_save___lam__0(lean_object* v___x_2763_, lean_object* v___y_2764_){
_start:
{
uint8_t v___x_2765_; 
v___x_2765_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg(v___x_2763_, v___y_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save___lam__0___boxed(lean_object* v___x_2766_, lean_object* v___y_2767_){
_start:
{
uint8_t v_res_2768_; lean_object* v_r_2769_; 
v_res_2768_ = l_Lake_ModuleTimes_save___lam__0(v___x_2766_, v___y_2767_);
lean_dec(v___y_2767_);
lean_dec_ref(v___x_2766_);
v_r_2769_ = lean_box(v_res_2768_);
return v_r_2769_;
}
}
LEAN_EXPORT uint8_t l_Lake_ModuleTimes_save___lam__1(lean_object* v___x_2770_, lean_object* v_n_2771_){
_start:
{
uint8_t v___x_2772_; 
v___x_2772_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg(v___x_2770_, v_n_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save___lam__1___boxed(lean_object* v___x_2773_, lean_object* v_n_2774_){
_start:
{
uint8_t v_res_2775_; lean_object* v_r_2776_; 
v_res_2775_ = l_Lake_ModuleTimes_save___lam__1(v___x_2773_, v_n_2774_);
lean_dec(v_n_2774_);
lean_dec_ref(v___x_2773_);
v_r_2776_ = lean_box(v_res_2775_);
return v_r_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___redArg(lean_object* v_hi_2777_, lean_object* v_pivot_2778_, lean_object* v_as_2779_, lean_object* v_i_2780_, lean_object* v_k_2781_){
_start:
{
uint8_t v___x_2782_; 
v___x_2782_ = lean_nat_dec_lt(v_k_2781_, v_hi_2777_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; lean_object* v___x_2784_; 
lean_dec(v_k_2781_);
v___x_2783_ = lean_array_fswap(v_as_2779_, v_i_2780_, v_hi_2777_);
v___x_2784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2784_, 0, v_i_2780_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
return v___x_2784_;
}
else
{
lean_object* v___x_2785_; uint8_t v___x_2786_; 
v___x_2785_ = lean_array_fget_borrowed(v_as_2779_, v_k_2781_);
v___x_2786_ = lean_string_dec_lt(v___x_2785_, v_pivot_2778_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2787_ = lean_unsigned_to_nat(1u);
v___x_2788_ = lean_nat_add(v_k_2781_, v___x_2787_);
lean_dec(v_k_2781_);
v_k_2781_ = v___x_2788_;
goto _start;
}
else
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2790_ = lean_array_fswap(v_as_2779_, v_i_2780_, v_k_2781_);
v___x_2791_ = lean_unsigned_to_nat(1u);
v___x_2792_ = lean_nat_add(v_i_2780_, v___x_2791_);
lean_dec(v_i_2780_);
v___x_2793_ = lean_nat_add(v_k_2781_, v___x_2791_);
lean_dec(v_k_2781_);
v_as_2779_ = v___x_2790_;
v_i_2780_ = v___x_2792_;
v_k_2781_ = v___x_2793_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___redArg___boxed(lean_object* v_hi_2795_, lean_object* v_pivot_2796_, lean_object* v_as_2797_, lean_object* v_i_2798_, lean_object* v_k_2799_){
_start:
{
lean_object* v_res_2800_; 
v_res_2800_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___redArg(v_hi_2795_, v_pivot_2796_, v_as_2797_, v_i_2798_, v_k_2799_);
lean_dec_ref(v_pivot_2796_);
lean_dec(v_hi_2795_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg(lean_object* v_n_2801_, lean_object* v_as_2802_, lean_object* v_lo_2803_, lean_object* v_hi_2804_){
_start:
{
lean_object* v___y_2806_; uint8_t v___x_2816_; 
v___x_2816_ = lean_nat_dec_lt(v_lo_2803_, v_hi_2804_);
if (v___x_2816_ == 0)
{
lean_dec(v_lo_2803_);
return v_as_2802_;
}
else
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v_mid_2819_; lean_object* v___y_2821_; lean_object* v___y_2827_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; 
v___x_2817_ = lean_nat_add(v_lo_2803_, v_hi_2804_);
v___x_2818_ = lean_unsigned_to_nat(1u);
v_mid_2819_ = lean_nat_shiftr(v___x_2817_, v___x_2818_);
lean_dec(v___x_2817_);
v___x_2832_ = lean_array_fget_borrowed(v_as_2802_, v_mid_2819_);
v___x_2833_ = lean_array_fget_borrowed(v_as_2802_, v_lo_2803_);
v___x_2834_ = lean_string_dec_lt(v___x_2832_, v___x_2833_);
if (v___x_2834_ == 0)
{
v___y_2827_ = v_as_2802_;
goto v___jp_2826_;
}
else
{
lean_object* v___x_2835_; 
v___x_2835_ = lean_array_fswap(v_as_2802_, v_lo_2803_, v_mid_2819_);
v___y_2827_ = v___x_2835_;
goto v___jp_2826_;
}
v___jp_2820_:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; 
v___x_2822_ = lean_array_fget_borrowed(v___y_2821_, v_mid_2819_);
v___x_2823_ = lean_array_fget_borrowed(v___y_2821_, v_hi_2804_);
v___x_2824_ = lean_string_dec_lt(v___x_2822_, v___x_2823_);
if (v___x_2824_ == 0)
{
lean_dec(v_mid_2819_);
v___y_2806_ = v___y_2821_;
goto v___jp_2805_;
}
else
{
lean_object* v___x_2825_; 
v___x_2825_ = lean_array_fswap(v___y_2821_, v_mid_2819_, v_hi_2804_);
lean_dec(v_mid_2819_);
v___y_2806_ = v___x_2825_;
goto v___jp_2805_;
}
}
v___jp_2826_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; uint8_t v___x_2830_; 
v___x_2828_ = lean_array_fget_borrowed(v___y_2827_, v_hi_2804_);
v___x_2829_ = lean_array_fget_borrowed(v___y_2827_, v_lo_2803_);
v___x_2830_ = lean_string_dec_lt(v___x_2828_, v___x_2829_);
if (v___x_2830_ == 0)
{
v___y_2821_ = v___y_2827_;
goto v___jp_2820_;
}
else
{
lean_object* v___x_2831_; 
v___x_2831_ = lean_array_fswap(v___y_2827_, v_lo_2803_, v_hi_2804_);
v___y_2821_ = v___x_2831_;
goto v___jp_2820_;
}
}
}
v___jp_2805_:
{
lean_object* v_pivot_2807_; lean_object* v___x_2808_; lean_object* v_fst_2809_; lean_object* v_snd_2810_; uint8_t v___x_2811_; 
v_pivot_2807_ = lean_array_fget(v___y_2806_, v_hi_2804_);
lean_inc_n(v_lo_2803_, 2);
v___x_2808_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___redArg(v_hi_2804_, v_pivot_2807_, v___y_2806_, v_lo_2803_, v_lo_2803_);
lean_dec(v_pivot_2807_);
v_fst_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_fst_2809_);
v_snd_2810_ = lean_ctor_get(v___x_2808_, 1);
lean_inc(v_snd_2810_);
lean_dec_ref(v___x_2808_);
v___x_2811_ = lean_nat_dec_le(v_hi_2804_, v_fst_2809_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2812_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg(v_n_2801_, v_snd_2810_, v_lo_2803_, v_fst_2809_);
v___x_2813_ = lean_unsigned_to_nat(1u);
v___x_2814_ = lean_nat_add(v_fst_2809_, v___x_2813_);
lean_dec(v_fst_2809_);
v_as_2802_ = v___x_2812_;
v_lo_2803_ = v___x_2814_;
goto _start;
}
else
{
lean_dec(v_fst_2809_);
lean_dec(v_lo_2803_);
return v_snd_2810_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg___boxed(lean_object* v_n_2836_, lean_object* v_as_2837_, lean_object* v_lo_2838_, lean_object* v_hi_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg(v_n_2836_, v_as_2837_, v_lo_2838_, v_hi_2839_);
lean_dec(v_hi_2839_);
lean_dec(v_n_2836_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__17(lean_object* v_l_2841_, lean_object* v_as_2842_, size_t v_sz_2843_, size_t v_i_2844_, lean_object* v_b_2845_){
_start:
{
lean_object* v_a_2848_; uint8_t v___x_2852_; 
v___x_2852_ = lean_usize_dec_lt(v_i_2844_, v_sz_2843_);
if (v___x_2852_ == 0)
{
lean_object* v___x_2853_; 
lean_dec(v_l_2841_);
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v_b_2845_);
return v___x_2853_;
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2855_; uint8_t v___x_2856_; 
v_a_2854_ = lean_array_uget_borrowed(v_as_2842_, v_i_2844_);
v___x_2855_ = lean_array_get_size(v_b_2845_);
v___x_2856_ = lean_nat_dec_lt(v_a_2854_, v___x_2855_);
if (v___x_2856_ == 0)
{
v_a_2848_ = v_b_2845_;
goto v___jp_2847_;
}
else
{
lean_object* v_v_2857_; lean_object* v___x_2858_; lean_object* v_xs_x27_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v_v_2857_ = lean_array_fget(v_b_2845_, v_a_2854_);
v___x_2858_ = lean_box(0);
v_xs_x27_2859_ = lean_array_fset(v_b_2845_, v_a_2854_, v___x_2858_);
lean_inc(v_l_2841_);
v___x_2860_ = lean_array_push(v_v_2857_, v_l_2841_);
v___x_2861_ = lean_array_fset(v_xs_x27_2859_, v_a_2854_, v___x_2860_);
v_a_2848_ = v___x_2861_;
goto v___jp_2847_;
}
}
v___jp_2847_:
{
size_t v___x_2849_; size_t v___x_2850_; 
v___x_2849_ = ((size_t)1ULL);
v___x_2850_ = lean_usize_add(v_i_2844_, v___x_2849_);
v_i_2844_ = v___x_2850_;
v_b_2845_ = v_a_2848_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__17___boxed(lean_object* v_l_2862_, lean_object* v_as_2863_, lean_object* v_sz_2864_, lean_object* v_i_2865_, lean_object* v_b_2866_, lean_object* v___y_2867_){
_start:
{
size_t v_sz_boxed_2868_; size_t v_i_boxed_2869_; lean_object* v_res_2870_; 
v_sz_boxed_2868_ = lean_unbox_usize(v_sz_2864_);
lean_dec(v_sz_2864_);
v_i_boxed_2869_ = lean_unbox_usize(v_i_2865_);
lean_dec(v_i_2865_);
v_res_2870_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__17(v_l_2862_, v_as_2863_, v_sz_boxed_2868_, v_i_boxed_2869_, v_b_2866_);
lean_dec_ref(v_as_2863_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___redArg(lean_object* v___x_2871_, lean_object* v_range_2872_, lean_object* v_b_2873_, lean_object* v_i_2874_){
_start:
{
lean_object* v_stop_2876_; lean_object* v_step_2877_; uint8_t v___x_2878_; 
v_stop_2876_ = lean_ctor_get(v_range_2872_, 1);
v_step_2877_ = lean_ctor_get(v_range_2872_, 2);
v___x_2878_ = lean_nat_dec_lt(v_i_2874_, v_stop_2876_);
if (v___x_2878_ == 0)
{
lean_object* v___x_2879_; 
lean_dec(v_i_2874_);
v___x_2879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2879_, 0, v_b_2873_);
return v___x_2879_;
}
else
{
lean_object* v___x_2880_; size_t v_sz_2881_; size_t v___x_2882_; lean_object* v___x_2883_; 
v___x_2880_ = lean_array_fget_borrowed(v___x_2871_, v_i_2874_);
v_sz_2881_ = lean_array_size(v___x_2880_);
v___x_2882_ = ((size_t)0ULL);
lean_inc(v_i_2874_);
v___x_2883_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__17(v_i_2874_, v___x_2880_, v_sz_2881_, v___x_2882_, v_b_2873_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2885_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v___x_2883_, 1);
v___x_2885_ = lean_nat_add(v_i_2874_, v_step_2877_);
lean_dec(v_i_2874_);
v_b_2873_ = v_a_2884_;
v_i_2874_ = v___x_2885_;
goto _start;
}
else
{
lean_dec(v_i_2874_);
return v___x_2883_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___redArg___boxed(lean_object* v___x_2887_, lean_object* v_range_2888_, lean_object* v_b_2889_, lean_object* v_i_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___redArg(v___x_2887_, v_range_2888_, v_b_2889_, v_i_2890_);
lean_dec_ref(v_range_2888_);
lean_dec_ref(v___x_2887_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___redArg(lean_object* v___x_2893_, lean_object* v_range_2894_, lean_object* v_b_2895_, lean_object* v_i_2896_){
_start:
{
lean_object* v_stop_2898_; lean_object* v_step_2899_; lean_object* v_out_2901_; uint8_t v___x_2906_; 
v_stop_2898_ = lean_ctor_get(v_range_2894_, 1);
v_step_2899_ = lean_ctor_get(v_range_2894_, 2);
v___x_2906_ = lean_nat_dec_lt(v_i_2896_, v_stop_2898_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; 
lean_dec(v_i_2896_);
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v_b_2895_);
return v___x_2907_;
}
else
{
lean_object* v___x_2908_; uint8_t v___x_2909_; 
v___x_2908_ = lean_unsigned_to_nat(0u);
v___x_2909_ = lean_nat_dec_lt(v___x_2908_, v_i_2896_);
if (v___x_2909_ == 0)
{
v_out_2901_ = v_b_2895_;
goto v___jp_2900_;
}
else
{
uint32_t v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = 32;
v___x_2911_ = lean_string_push(v_b_2895_, v___x_2910_);
v_out_2901_ = v___x_2911_;
goto v___jp_2900_;
}
}
v___jp_2900_:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2902_ = lean_array_fget_borrowed(v___x_2893_, v_i_2896_);
v___x_2903_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(v_out_2901_, v___x_2902_);
v___x_2904_ = lean_nat_add(v_i_2896_, v_step_2899_);
lean_dec(v_i_2896_);
v_b_2895_ = v___x_2903_;
v_i_2896_ = v___x_2904_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___redArg___boxed(lean_object* v___x_2912_, lean_object* v_range_2913_, lean_object* v_b_2914_, lean_object* v_i_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___redArg(v___x_2912_, v_range_2913_, v_b_2914_, v_i_2915_);
lean_dec_ref(v_range_2913_);
lean_dec_ref(v___x_2912_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___lam__0(lean_object* v___x_2918_, lean_object* v___x_2919_, lean_object* v___x_2920_, lean_object* v___x_2921_, lean_object* v_i_2922_){
_start:
{
lean_object* v___x_2923_; lean_object* v_keyStart_2924_; lean_object* v_keyStop_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2923_ = lean_array_get_borrowed(v___x_2918_, v___x_2919_, v_i_2922_);
v_keyStart_2924_ = lean_ctor_get(v___x_2923_, 3);
v_keyStop_2925_ = lean_ctor_get(v___x_2923_, 4);
v___x_2926_ = lean_string_utf8_extract(v___x_2920_, v_keyStart_2924_, v_keyStop_2925_);
v___x_2927_ = lean_string_append(v___x_2921_, v___x_2926_);
lean_dec_ref(v___x_2926_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___lam__0___boxed(lean_object* v___x_2928_, lean_object* v___x_2929_, lean_object* v___x_2930_, lean_object* v___x_2931_, lean_object* v_i_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___lam__0(v___x_2928_, v___x_2929_, v___x_2930_, v___x_2931_, v_i_2932_);
lean_dec(v_i_2932_);
lean_dec_ref(v___x_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v___x_2928_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg(lean_object* v___x_2937_, lean_object* v___x_2938_, lean_object* v___x_2939_, lean_object* v___x_2940_, lean_object* v___x_2941_, lean_object* v___x_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v_range_2945_, lean_object* v_b_2946_, lean_object* v_i_2947_){
_start:
{
lean_object* v_stop_2949_; lean_object* v_step_2950_; uint8_t v___x_2951_; 
v_stop_2949_ = lean_ctor_get(v_range_2945_, 1);
v_step_2950_ = lean_ctor_get(v_range_2945_, 2);
v___x_2951_ = lean_nat_dec_lt(v_i_2947_, v_stop_2949_);
if (v___x_2951_ == 0)
{
lean_object* v___x_2952_; 
lean_dec(v_i_2947_);
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v_b_2946_);
return v___x_2952_;
}
else
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; uint32_t v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; uint32_t v___x_2961_; lean_object* v___y_2963_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2953_ = lean_unsigned_to_nat(0u);
v___x_2954_ = lean_obj_once(&l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0, &l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0_once, _init_l___private_Lake_Build_ModuleTimes_0__Lake_visitRemaining___closed__0);
v___x_2955_ = lean_unsigned_to_nat(1u);
v___x_2956_ = 10;
v___x_2957_ = ((lean_object*)(l_Lake_instInhabitedModuleTimeRow_default));
v___x_2958_ = ((lean_object*)(l_Lake_encodeModuleName___closed__1));
v___x_2959_ = lean_array_get_borrowed(v___x_2953_, v___x_2937_, v_i_2947_);
v___x_2960_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(v_b_2946_, v___x_2959_);
v___x_2961_ = 9;
v___x_2973_ = lean_string_push(v___x_2960_, v___x_2961_);
v___x_2974_ = lean_array_get_borrowed(v___x_2953_, v___x_2939_, v_i_2947_);
v___x_2975_ = l___private_Lake_Build_ModuleTimes_0__Lake_pushNat(v___x_2973_, v___x_2974_);
v___x_2976_ = lean_string_push(v___x_2975_, v___x_2961_);
v___x_2977_ = lean_array_fget_borrowed(v___x_2942_, v_i_2947_);
switch(lean_obj_tag(v___x_2977_))
{
case 2:
{
lean_object* v_entry_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v_fst_2981_; lean_object* v___x_2982_; 
v_entry_2978_ = lean_ctor_get(v___x_2977_, 0);
v___x_2979_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0));
v___x_2980_ = lean_array_get_borrowed(v___x_2979_, v___y_2943_, v_entry_2978_);
v_fst_2981_ = lean_ctor_get(v___x_2980_, 0);
v___x_2982_ = lean_string_append(v___x_2976_, v_fst_2981_);
v___y_2963_ = v___x_2982_;
goto v___jp_2962_;
}
case 3:
{
lean_object* v_name_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v_name_2983_ = lean_ctor_get(v___x_2977_, 0);
v___x_2984_ = lean_array_get_borrowed(v___x_2958_, v___y_2944_, v_name_2983_);
v___x_2985_ = lean_string_append(v___x_2976_, v___x_2984_);
v___y_2963_ = v___x_2985_;
goto v___jp_2962_;
}
default: 
{
lean_object* v_row_2986_; lean_object* v___x_2987_; 
v_row_2986_ = lean_ctor_get(v___x_2977_, 0);
v___x_2987_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___lam__0(v___x_2957_, v___x_2940_, v___x_2941_, v___x_2976_, v_row_2986_);
v___y_2963_ = v___x_2987_;
goto v___jp_2962_;
}
}
v___jp_2962_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v_a_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2964_ = lean_string_push(v___y_2963_, v___x_2961_);
v___x_2965_ = lean_array_get_borrowed(v___x_2954_, v___x_2938_, v_i_2947_);
v___x_2966_ = lean_array_get_size(v___x_2965_);
v___x_2967_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2953_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
lean_ctor_set(v___x_2967_, 2, v___x_2955_);
v___x_2968_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___redArg(v___x_2965_, v___x_2967_, v___x_2964_, v___x_2953_);
lean_dec_ref_known(v___x_2967_, 3);
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
lean_inc(v_a_2969_);
lean_dec_ref(v___x_2968_);
v___x_2970_ = lean_string_push(v_a_2969_, v___x_2956_);
v___x_2971_ = lean_nat_add(v_i_2947_, v_step_2950_);
lean_dec(v_i_2947_);
v_b_2946_ = v___x_2970_;
v_i_2947_ = v___x_2971_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___boxed(lean_object* v___x_2988_, lean_object* v___x_2989_, lean_object* v___x_2990_, lean_object* v___x_2991_, lean_object* v___x_2992_, lean_object* v___x_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v_range_2996_, lean_object* v_b_2997_, lean_object* v_i_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg(v___x_2988_, v___x_2989_, v___x_2990_, v___x_2991_, v___x_2992_, v___x_2993_, v___y_2994_, v___y_2995_, v_range_2996_, v_b_2997_, v_i_2998_);
lean_dec_ref(v_range_2996_);
lean_dec_ref(v___y_2995_);
lean_dec_ref(v___y_2994_);
lean_dec_ref(v___x_2993_);
lean_dec_ref(v___x_2992_);
lean_dec_ref(v___x_2991_);
lean_dec_ref(v___x_2990_);
lean_dec_ref(v___x_2989_);
lean_dec_ref(v___x_2988_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14_spec__17(lean_object* v_a_3001_, lean_object* v___x_3002_, lean_object* v_as_3003_, size_t v_i_3004_, size_t v_stop_3005_, lean_object* v_b_3006_){
_start:
{
lean_object* v___y_3008_; uint8_t v___x_3012_; 
v___x_3012_ = lean_usize_dec_eq(v_i_3004_, v_stop_3005_);
if (v___x_3012_ == 0)
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; uint8_t v___x_3016_; 
v___x_3013_ = lean_unsigned_to_nat(0u);
v___x_3014_ = lean_array_uget_borrowed(v_as_3003_, v_i_3004_);
v___x_3015_ = lean_array_get_borrowed(v___x_3013_, v_a_3001_, v___x_3014_);
v___x_3016_ = lean_nat_dec_eq(v___x_3015_, v___x_3002_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; 
lean_inc(v___x_3015_);
v___x_3017_ = lean_array_push(v_b_3006_, v___x_3015_);
v___y_3008_ = v___x_3017_;
goto v___jp_3007_;
}
else
{
v___y_3008_ = v_b_3006_;
goto v___jp_3007_;
}
}
else
{
return v_b_3006_;
}
v___jp_3007_:
{
size_t v___x_3009_; size_t v___x_3010_; 
v___x_3009_ = ((size_t)1ULL);
v___x_3010_ = lean_usize_add(v_i_3004_, v___x_3009_);
v_i_3004_ = v___x_3010_;
v_b_3006_ = v___y_3008_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14_spec__17___boxed(lean_object* v_a_3018_, lean_object* v___x_3019_, lean_object* v_as_3020_, lean_object* v_i_3021_, lean_object* v_stop_3022_, lean_object* v_b_3023_){
_start:
{
size_t v_i_boxed_3024_; size_t v_stop_boxed_3025_; lean_object* v_res_3026_; 
v_i_boxed_3024_ = lean_unbox_usize(v_i_3021_);
lean_dec(v_i_3021_);
v_stop_boxed_3025_ = lean_unbox_usize(v_stop_3022_);
lean_dec(v_stop_3022_);
v_res_3026_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14_spec__17(v_a_3018_, v___x_3019_, v_as_3020_, v_i_boxed_3024_, v_stop_boxed_3025_, v_b_3023_);
lean_dec_ref(v_as_3020_);
lean_dec(v___x_3019_);
lean_dec_ref(v_a_3018_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14(lean_object* v_a_3027_, lean_object* v___x_3028_, lean_object* v_as_3029_, lean_object* v_start_3030_, lean_object* v_stop_3031_){
_start:
{
lean_object* v___x_3032_; uint8_t v___x_3033_; 
v___x_3032_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2));
v___x_3033_ = lean_nat_dec_lt(v_start_3030_, v_stop_3031_);
if (v___x_3033_ == 0)
{
return v___x_3032_;
}
else
{
lean_object* v___x_3034_; uint8_t v___x_3035_; 
v___x_3034_ = lean_array_get_size(v_as_3029_);
v___x_3035_ = lean_nat_dec_le(v_stop_3031_, v___x_3034_);
if (v___x_3035_ == 0)
{
uint8_t v___x_3036_; 
v___x_3036_ = lean_nat_dec_lt(v_start_3030_, v___x_3034_);
if (v___x_3036_ == 0)
{
return v___x_3032_;
}
else
{
size_t v___x_3037_; size_t v___x_3038_; lean_object* v___x_3039_; 
v___x_3037_ = lean_usize_of_nat(v_start_3030_);
v___x_3038_ = lean_usize_of_nat(v___x_3034_);
v___x_3039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14_spec__17(v_a_3027_, v___x_3028_, v_as_3029_, v___x_3037_, v___x_3038_, v___x_3032_);
return v___x_3039_;
}
}
else
{
size_t v___x_3040_; size_t v___x_3041_; lean_object* v___x_3042_; 
v___x_3040_ = lean_usize_of_nat(v_start_3030_);
v___x_3041_ = lean_usize_of_nat(v_stop_3031_);
v___x_3042_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14_spec__17(v_a_3027_, v___x_3028_, v_as_3029_, v___x_3040_, v___x_3041_, v___x_3032_);
return v___x_3042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14___boxed(lean_object* v_a_3043_, lean_object* v___x_3044_, lean_object* v_as_3045_, lean_object* v_start_3046_, lean_object* v_stop_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14(v_a_3043_, v___x_3044_, v_as_3045_, v_start_3046_, v_stop_3047_);
lean_dec(v_stop_3047_);
lean_dec(v_start_3046_);
lean_dec_ref(v_as_3045_);
lean_dec(v___x_3044_);
lean_dec_ref(v_a_3043_);
return v_res_3048_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1(lean_object* v___x_3049_, lean_object* v___x_3050_, lean_object* v___x_3051_, lean_object* v___x_3052_, lean_object* v___x_3053_, lean_object* v_i_3054_){
_start:
{
lean_object* v___x_3055_; lean_object* v_keyStart_3056_; lean_object* v_keyStop_3057_; uint8_t v___x_3058_; 
v___x_3055_ = lean_array_get_borrowed(v___x_3049_, v___x_3050_, v_i_3054_);
v_keyStart_3056_ = lean_ctor_get(v___x_3055_, 3);
v_keyStop_3057_ = lean_ctor_get(v___x_3055_, 4);
lean_inc(v_keyStart_3056_);
v___x_3058_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v___x_3051_, v_keyStart_3056_, v_keyStop_3057_, v___x_3052_, v___x_3053_);
return v___x_3058_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1___boxed(lean_object* v___x_3059_, lean_object* v___x_3060_, lean_object* v___x_3061_, lean_object* v___x_3062_, lean_object* v___x_3063_, lean_object* v_i_3064_){
_start:
{
uint8_t v_res_3065_; lean_object* v_r_3066_; 
v_res_3065_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1(v___x_3059_, v___x_3060_, v___x_3061_, v___x_3062_, v___x_3063_, v_i_3064_);
lean_dec(v_i_3064_);
lean_dec_ref(v___x_3062_);
lean_dec_ref(v___x_3061_);
lean_dec_ref(v___x_3060_);
lean_dec_ref(v___x_3059_);
v_r_3066_ = lean_box(v_res_3065_);
return v_r_3066_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___lam__2(lean_object* v___x_3067_, lean_object* v___y_3068_, lean_object* v___x_3069_, lean_object* v___x_3070_, lean_object* v_x_3071_){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; uint8_t v___x_3074_; 
v___x_3072_ = lean_array_get_borrowed(v___x_3067_, v___y_3068_, v_x_3071_);
v___x_3073_ = lean_string_utf8_byte_size(v___x_3072_);
lean_inc(v___x_3069_);
v___x_3074_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v___x_3072_, v___x_3069_, v___x_3073_, v___x_3070_, v___x_3069_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___lam__2___boxed(lean_object* v___x_3075_, lean_object* v___y_3076_, lean_object* v___x_3077_, lean_object* v___x_3078_, lean_object* v_x_3079_){
_start:
{
uint8_t v_res_3080_; lean_object* v_r_3081_; 
v_res_3080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___lam__2(v___x_3075_, v___y_3076_, v___x_3077_, v___x_3078_, v_x_3079_);
lean_dec(v_x_3079_);
lean_dec_ref(v___x_3078_);
lean_dec_ref(v___y_3076_);
lean_dec_ref(v___x_3075_);
v_r_3081_ = lean_box(v_res_3080_);
return v_r_3081_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0(lean_object* v___x_3082_, lean_object* v___y_3083_, lean_object* v___x_3084_, lean_object* v___x_3085_, lean_object* v_j_3086_){
_start:
{
lean_object* v___x_3087_; lean_object* v_fst_3088_; lean_object* v___x_3089_; uint8_t v___x_3090_; 
v___x_3087_ = lean_array_get_borrowed(v___x_3082_, v___y_3083_, v_j_3086_);
v_fst_3088_ = lean_ctor_get(v___x_3087_, 0);
v___x_3089_ = lean_string_utf8_byte_size(v_fst_3088_);
lean_inc(v___x_3084_);
v___x_3090_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v_fst_3088_, v___x_3084_, v___x_3089_, v___x_3085_, v___x_3084_);
return v___x_3090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0___boxed(lean_object* v___x_3091_, lean_object* v___y_3092_, lean_object* v___x_3093_, lean_object* v___x_3094_, lean_object* v_j_3095_){
_start:
{
uint8_t v_res_3096_; lean_object* v_r_3097_; 
v_res_3096_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0(v___x_3091_, v___y_3092_, v___x_3093_, v___x_3094_, v_j_3095_);
lean_dec(v_j_3095_);
lean_dec_ref(v___x_3094_);
lean_dec_ref(v___y_3092_);
lean_dec_ref(v___x_3091_);
v_r_3097_ = lean_box(v_res_3096_);
return v_r_3097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19(lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___x_3100_, lean_object* v___x_3101_, lean_object* v___x_3102_, lean_object* v___x_3103_, lean_object* v___x_3104_, lean_object* v_a_3105_, lean_object* v___x_3106_, lean_object* v___x_3107_, lean_object* v_as_3108_, size_t v_i_3109_, size_t v_stop_3110_, lean_object* v_b_3111_){
_start:
{
lean_object* v___y_3113_; uint8_t v___x_3117_; 
v___x_3117_ = lean_usize_dec_eq(v_i_3109_, v_stop_3110_);
if (v___x_3117_ == 0)
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___f_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3118_ = ((lean_object*)(l_Lake_encodeModuleName___closed__1));
v___x_3119_ = lean_unsigned_to_nat(0u);
v___x_3120_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0));
v___x_3121_ = lean_array_uget_borrowed(v_as_3108_, v_i_3109_);
v___x_3122_ = l_Lake_encodeModuleName(v___x_3121_);
lean_inc_ref(v___x_3122_);
lean_inc_ref(v___y_3099_);
v___f_3123_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3123_, 0, v___x_3120_);
lean_closure_set(v___f_3123_, 1, v___y_3099_);
lean_closure_set(v___f_3123_, 2, v___x_3119_);
lean_closure_set(v___f_3123_, 3, v___x_3122_);
v___x_3124_ = lean_array_get_size(v___y_3099_);
v___x_3125_ = l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(v___x_3124_, v___f_3123_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v___x_3126_; lean_object* v___f_3127_; lean_object* v___x_3128_; 
v___x_3126_ = ((lean_object*)(l_Lake_instInhabitedModuleTimeRow_default));
lean_inc_ref(v___x_3122_);
lean_inc_ref(v___x_3101_);
lean_inc_ref(v___x_3100_);
v___f_3127_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1___boxed), 6, 5);
lean_closure_set(v___f_3127_, 0, v___x_3126_);
lean_closure_set(v___f_3127_, 1, v___x_3100_);
lean_closure_set(v___f_3127_, 2, v___x_3101_);
lean_closure_set(v___f_3127_, 3, v___x_3122_);
lean_closure_set(v___f_3127_, 4, v___x_3119_);
lean_inc(v___x_3102_);
v___x_3128_ = l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(v___x_3102_, v___f_3127_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v___f_3129_; lean_object* v___x_3130_; 
lean_inc_ref(v___y_3098_);
v___f_3129_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___lam__2___boxed), 5, 4);
lean_closure_set(v___f_3129_, 0, v___x_3118_);
lean_closure_set(v___f_3129_, 1, v___y_3098_);
lean_closure_set(v___f_3129_, 2, v___x_3119_);
lean_closure_set(v___f_3129_, 3, v___x_3122_);
lean_inc(v___x_3103_);
v___x_3130_ = l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(v___x_3103_, v___f_3129_);
if (lean_obj_tag(v___x_3130_) == 0)
{
v___y_3113_ = v_b_3111_;
goto v___jp_3112_;
}
else
{
lean_object* v_val_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v_val_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_val_3131_);
lean_dec_ref_known(v___x_3130_, 1);
v___x_3132_ = lean_array_get_borrowed(v___x_3119_, v___x_3104_, v_val_3131_);
lean_dec(v_val_3131_);
lean_inc(v___x_3132_);
v___x_3133_ = lean_array_push(v_b_3111_, v___x_3132_);
v___y_3113_ = v___x_3133_;
goto v___jp_3112_;
}
}
else
{
lean_object* v_val_3134_; lean_object* v___x_3135_; uint8_t v___x_3136_; 
lean_dec_ref(v___x_3122_);
v_val_3134_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_val_3134_);
lean_dec_ref_known(v___x_3128_, 1);
v___x_3135_ = lean_array_get_borrowed(v___x_3119_, v_a_3105_, v_val_3134_);
lean_dec(v_val_3134_);
v___x_3136_ = lean_nat_dec_eq(v___x_3135_, v___x_3106_);
if (v___x_3136_ == 0)
{
lean_object* v___x_3137_; 
lean_inc(v___x_3135_);
v___x_3137_ = lean_array_push(v_b_3111_, v___x_3135_);
v___y_3113_ = v___x_3137_;
goto v___jp_3112_;
}
else
{
v___y_3113_ = v_b_3111_;
goto v___jp_3112_;
}
}
}
else
{
lean_object* v_val_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
lean_dec_ref(v___x_3122_);
v_val_3138_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_val_3138_);
lean_dec_ref_known(v___x_3125_, 1);
v___x_3139_ = lean_array_get_borrowed(v___x_3119_, v___x_3107_, v_val_3138_);
lean_dec(v_val_3138_);
lean_inc(v___x_3139_);
v___x_3140_ = lean_array_push(v_b_3111_, v___x_3139_);
v___y_3113_ = v___x_3140_;
goto v___jp_3112_;
}
}
else
{
lean_dec(v___x_3103_);
lean_dec(v___x_3102_);
lean_dec_ref(v___x_3101_);
lean_dec_ref(v___x_3100_);
lean_dec_ref(v___y_3099_);
lean_dec_ref(v___y_3098_);
return v_b_3111_;
}
v___jp_3112_:
{
size_t v___x_3114_; size_t v___x_3115_; 
v___x_3114_ = ((size_t)1ULL);
v___x_3115_ = lean_usize_add(v_i_3109_, v___x_3114_);
v_i_3109_ = v___x_3115_;
v_b_3111_ = v___y_3113_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19___boxed(lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___x_3143_, lean_object* v___x_3144_, lean_object* v___x_3145_, lean_object* v___x_3146_, lean_object* v___x_3147_, lean_object* v_a_3148_, lean_object* v___x_3149_, lean_object* v___x_3150_, lean_object* v_as_3151_, lean_object* v_i_3152_, lean_object* v_stop_3153_, lean_object* v_b_3154_){
_start:
{
size_t v_i_boxed_3155_; size_t v_stop_boxed_3156_; lean_object* v_res_3157_; 
v_i_boxed_3155_ = lean_unbox_usize(v_i_3152_);
lean_dec(v_i_3152_);
v_stop_boxed_3156_ = lean_unbox_usize(v_stop_3153_);
lean_dec(v_stop_3153_);
v_res_3157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19(v___y_3141_, v___y_3142_, v___x_3143_, v___x_3144_, v___x_3145_, v___x_3146_, v___x_3147_, v_a_3148_, v___x_3149_, v___x_3150_, v_as_3151_, v_i_boxed_3155_, v_stop_boxed_3156_, v_b_3154_);
lean_dec_ref(v_as_3151_);
lean_dec_ref(v___x_3150_);
lean_dec(v___x_3149_);
lean_dec_ref(v_a_3148_);
lean_dec_ref(v___x_3147_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15(lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___x_3160_, lean_object* v___x_3161_, lean_object* v___x_3162_, lean_object* v___x_3163_, lean_object* v___x_3164_, lean_object* v_a_3165_, lean_object* v___x_3166_, lean_object* v___x_3167_, lean_object* v_as_3168_, lean_object* v_start_3169_, lean_object* v_stop_3170_){
_start:
{
lean_object* v___x_3171_; uint8_t v___x_3172_; 
v___x_3171_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2));
v___x_3172_ = lean_nat_dec_lt(v_start_3169_, v_stop_3170_);
if (v___x_3172_ == 0)
{
lean_dec(v___x_3163_);
lean_dec(v___x_3162_);
lean_dec_ref(v___x_3161_);
lean_dec_ref(v___x_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
return v___x_3171_;
}
else
{
lean_object* v___x_3173_; uint8_t v___x_3174_; 
v___x_3173_ = lean_array_get_size(v_as_3168_);
v___x_3174_ = lean_nat_dec_le(v_stop_3170_, v___x_3173_);
if (v___x_3174_ == 0)
{
uint8_t v___x_3175_; 
v___x_3175_ = lean_nat_dec_lt(v_start_3169_, v___x_3173_);
if (v___x_3175_ == 0)
{
lean_dec(v___x_3163_);
lean_dec(v___x_3162_);
lean_dec_ref(v___x_3161_);
lean_dec_ref(v___x_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
return v___x_3171_;
}
else
{
size_t v___x_3176_; size_t v___x_3177_; lean_object* v___x_3178_; 
v___x_3176_ = lean_usize_of_nat(v_start_3169_);
v___x_3177_ = lean_usize_of_nat(v___x_3173_);
v___x_3178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19(v___y_3158_, v___y_3159_, v___x_3160_, v___x_3161_, v___x_3162_, v___x_3163_, v___x_3164_, v_a_3165_, v___x_3166_, v___x_3167_, v_as_3168_, v___x_3176_, v___x_3177_, v___x_3171_);
return v___x_3178_;
}
}
else
{
size_t v___x_3179_; size_t v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = lean_usize_of_nat(v_start_3169_);
v___x_3180_ = lean_usize_of_nat(v_stop_3170_);
v___x_3181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15_spec__19(v___y_3158_, v___y_3159_, v___x_3160_, v___x_3161_, v___x_3162_, v___x_3163_, v___x_3164_, v_a_3165_, v___x_3166_, v___x_3167_, v_as_3168_, v___x_3179_, v___x_3180_, v___x_3171_);
return v___x_3181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15___boxed(lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___x_3184_, lean_object* v___x_3185_, lean_object* v___x_3186_, lean_object* v___x_3187_, lean_object* v___x_3188_, lean_object* v_a_3189_, lean_object* v___x_3190_, lean_object* v___x_3191_, lean_object* v_as_3192_, lean_object* v_start_3193_, lean_object* v_stop_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15(v___y_3182_, v___y_3183_, v___x_3184_, v___x_3185_, v___x_3186_, v___x_3187_, v___x_3188_, v_a_3189_, v___x_3190_, v___x_3191_, v_as_3192_, v_start_3193_, v_stop_3194_);
lean_dec(v_stop_3194_);
lean_dec(v_start_3193_);
lean_dec_ref(v_as_3192_);
lean_dec_ref(v___x_3191_);
lean_dec(v___x_3190_);
lean_dec_ref(v_a_3189_);
lean_dec_ref(v___x_3188_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__16(lean_object* v___x_3196_, lean_object* v___x_3197_, lean_object* v_a_3198_, lean_object* v___x_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___x_3202_, lean_object* v___x_3203_, lean_object* v___x_3204_, lean_object* v___x_3205_, lean_object* v_as_3206_, size_t v_sz_3207_, size_t v_i_3208_, lean_object* v_b_3209_){
_start:
{
lean_object* v_a_3212_; uint8_t v___x_3216_; 
v___x_3216_ = lean_usize_dec_lt(v_i_3208_, v_sz_3207_);
if (v___x_3216_ == 0)
{
lean_object* v___x_3217_; 
lean_dec(v___x_3203_);
lean_dec(v___x_3202_);
lean_dec_ref(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec_ref(v___x_3197_);
lean_dec_ref(v___x_3196_);
v___x_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3217_, 0, v_b_3209_);
return v___x_3217_;
}
else
{
lean_object* v_fst_3218_; lean_object* v_snd_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3263_; 
v_fst_3218_ = lean_ctor_get(v_b_3209_, 0);
v_snd_3219_ = lean_ctor_get(v_b_3209_, 1);
v_isSharedCheck_3263_ = !lean_is_exclusive(v_b_3209_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3221_ = v_b_3209_;
v_isShared_3222_ = v_isSharedCheck_3263_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_snd_3219_);
lean_inc(v_fst_3218_);
lean_dec(v_b_3209_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3263_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3223_; lean_object* v_a_3224_; 
v___x_3223_ = lean_unsigned_to_nat(0u);
v_a_3224_ = lean_array_uget_borrowed(v_as_3206_, v_i_3208_);
switch(lean_obj_tag(v_a_3224_))
{
case 0:
{
lean_object* v_row_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v_ms_3228_; lean_object* v_impStart_3229_; lean_object* v_impStop_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3237_; 
v_row_3225_ = lean_ctor_get(v_a_3224_, 0);
v___x_3226_ = ((lean_object*)(l_Lake_instInhabitedModuleTimeRow_default));
v___x_3227_ = lean_array_get_borrowed(v___x_3226_, v___x_3196_, v_row_3225_);
v_ms_3228_ = lean_ctor_get(v___x_3227_, 1);
v_impStart_3229_ = lean_ctor_get(v___x_3227_, 5);
v_impStop_3230_ = lean_ctor_get(v___x_3227_, 6);
lean_inc(v_ms_3228_);
v___x_3231_ = lean_array_push(v_fst_3218_, v_ms_3228_);
lean_inc(v_impStop_3230_);
lean_inc(v_impStart_3229_);
v___x_3232_ = l___private_Lake_Build_ModuleTimes_0__Lake_importIndices(v___x_3197_, v_impStart_3229_, v_impStop_3230_);
v___x_3233_ = lean_array_get_size(v___x_3232_);
v___x_3234_ = l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__14(v_a_3198_, v___x_3199_, v___x_3232_, v___x_3223_, v___x_3233_);
lean_dec_ref(v___x_3232_);
v___x_3235_ = lean_array_push(v_snd_3219_, v___x_3234_);
if (v_isShared_3222_ == 0)
{
lean_ctor_set(v___x_3221_, 1, v___x_3235_);
lean_ctor_set(v___x_3221_, 0, v___x_3231_);
v___x_3237_ = v___x_3221_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3231_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v___x_3235_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
v_a_3212_ = v___x_3237_;
goto v___jp_3211_;
}
}
case 2:
{
lean_object* v_entry_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v_snd_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3255_; 
lean_del_object(v___x_3221_);
v_entry_3239_ = lean_ctor_get(v_a_3224_, 0);
v___x_3240_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0));
v___x_3241_ = lean_array_get(v___x_3240_, v___y_3200_, v_entry_3239_);
v_snd_3242_ = lean_ctor_get(v___x_3241_, 1);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3241_);
if (v_isSharedCheck_3255_ == 0)
{
lean_object* v_unused_3256_; 
v_unused_3256_ = lean_ctor_get(v___x_3241_, 0);
lean_dec(v_unused_3256_);
v___x_3244_ = v___x_3241_;
v_isShared_3245_ = v_isSharedCheck_3255_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_snd_3242_);
lean_dec(v___x_3241_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3255_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v_ms_3246_; lean_object* v_imports_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3253_; 
v_ms_3246_ = lean_ctor_get(v_snd_3242_, 1);
lean_inc(v_ms_3246_);
v_imports_3247_ = lean_ctor_get(v_snd_3242_, 2);
lean_inc_ref(v_imports_3247_);
lean_dec(v_snd_3242_);
v___x_3248_ = lean_array_push(v_fst_3218_, v_ms_3246_);
v___x_3249_ = lean_array_get_size(v_imports_3247_);
lean_inc(v___x_3203_);
lean_inc(v___x_3202_);
lean_inc_ref(v___x_3197_);
lean_inc_ref(v___x_3196_);
lean_inc_ref(v___y_3200_);
lean_inc_ref(v___y_3201_);
v___x_3250_ = l_Array_filterMapM___at___00Lake_ModuleTimes_save_spec__15(v___y_3201_, v___y_3200_, v___x_3196_, v___x_3197_, v___x_3202_, v___x_3203_, v___x_3204_, v_a_3198_, v___x_3199_, v___x_3205_, v_imports_3247_, v___x_3223_, v___x_3249_);
lean_dec_ref(v_imports_3247_);
v___x_3251_ = lean_array_push(v_snd_3219_, v___x_3250_);
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 1, v___x_3251_);
lean_ctor_set(v___x_3244_, 0, v___x_3248_);
v___x_3253_ = v___x_3244_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_3248_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v___x_3251_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
v_a_3212_ = v___x_3253_;
goto v___jp_3211_;
}
}
}
default: 
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3261_; 
v___x_3257_ = lean_array_push(v_fst_3218_, v___x_3223_);
v___x_3258_ = ((lean_object*)(l___private_Lake_Build_ModuleTimes_0__Lake_decodeKey___closed__2));
v___x_3259_ = lean_array_push(v_snd_3219_, v___x_3258_);
if (v_isShared_3222_ == 0)
{
lean_ctor_set(v___x_3221_, 1, v___x_3259_);
lean_ctor_set(v___x_3221_, 0, v___x_3257_);
v___x_3261_ = v___x_3221_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3262_, 1, v___x_3259_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
v_a_3212_ = v___x_3261_;
goto v___jp_3211_;
}
}
}
}
}
v___jp_3211_:
{
size_t v___x_3213_; size_t v___x_3214_; 
v___x_3213_ = ((size_t)1ULL);
v___x_3214_ = lean_usize_add(v_i_3208_, v___x_3213_);
v_i_3208_ = v___x_3214_;
v_b_3209_ = v_a_3212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__16___boxed(lean_object* v___x_3264_, lean_object* v___x_3265_, lean_object* v_a_3266_, lean_object* v___x_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___x_3270_, lean_object* v___x_3271_, lean_object* v___x_3272_, lean_object* v___x_3273_, lean_object* v_as_3274_, lean_object* v_sz_3275_, lean_object* v_i_3276_, lean_object* v_b_3277_, lean_object* v___y_3278_){
_start:
{
size_t v_sz_boxed_3279_; size_t v_i_boxed_3280_; lean_object* v_res_3281_; 
v_sz_boxed_3279_ = lean_unbox_usize(v_sz_3275_);
lean_dec(v_sz_3275_);
v_i_boxed_3280_ = lean_unbox_usize(v_i_3276_);
lean_dec(v_i_3276_);
v_res_3281_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__16(v___x_3264_, v___x_3265_, v_a_3266_, v___x_3267_, v___y_3268_, v___y_3269_, v___x_3270_, v___x_3271_, v___x_3272_, v___x_3273_, v_as_3274_, v_sz_boxed_3279_, v_i_boxed_3280_, v_b_3277_);
lean_dec_ref(v_as_3274_);
lean_dec_ref(v___x_3273_);
lean_dec_ref(v___x_3272_);
lean_dec(v___x_3267_);
lean_dec_ref(v_a_3266_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___redArg(lean_object* v___x_3282_, lean_object* v___x_3283_, lean_object* v_a_3284_){
_start:
{
uint8_t v___x_3286_; 
v___x_3286_ = lean_nat_dec_lt(v_a_3284_, v___x_3282_);
if (v___x_3286_ == 0)
{
lean_object* v___x_3287_; 
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v_a_3284_);
return v___x_3287_;
}
else
{
uint8_t v___x_3288_; uint8_t v___x_3289_; uint8_t v___x_3290_; 
v___x_3288_ = lean_byte_array_get(v___x_3283_, v_a_3284_);
v___x_3289_ = 1;
v___x_3290_ = lean_uint8_dec_eq(v___x_3288_, v___x_3289_);
if (v___x_3290_ == 0)
{
uint8_t v___x_3291_; uint8_t v___x_3292_; 
v___x_3291_ = 3;
v___x_3292_ = lean_uint8_dec_eq(v___x_3288_, v___x_3291_);
if (v___x_3292_ == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = lean_unsigned_to_nat(1u);
v___x_3294_ = lean_nat_add(v_a_3284_, v___x_3293_);
lean_dec(v_a_3284_);
v_a_3284_ = v___x_3294_;
goto _start;
}
else
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3296_, 0, v_a_3284_);
return v___x_3296_;
}
}
else
{
lean_object* v___x_3297_; 
v___x_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3297_, 0, v_a_3284_);
return v___x_3297_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___redArg___boxed(lean_object* v___x_3298_, lean_object* v___x_3299_, lean_object* v_a_3300_, lean_object* v___y_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___redArg(v___x_3298_, v___x_3299_, v_a_3300_);
lean_dec_ref(v___x_3299_);
lean_dec(v___x_3298_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___lam__0(lean_object* v_fst_3303_, lean_object* v_a_3304_, lean_object* v___x_3305_, lean_object* v_fst_3306_, lean_object* v_snd_3307_, lean_object* v_fst_3308_, lean_object* v_fst_3309_, lean_object* v___x_3310_, lean_object* v_fst_3311_, lean_object* v___x_3312_, lean_object* v___x_3313_, lean_object* v___y_3314_, lean_object* v___x_3315_, lean_object* v___y_3316_, lean_object* v___x_3317_, lean_object* v___x_3318_, lean_object* v___x_3319_, lean_object* v___x_3320_, lean_object* v___x_3321_, lean_object* v_____r_3322_, lean_object* v_pick_3323_){
_start:
{
lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v_pick_3339_; lean_object* v___y_3388_; uint8_t v___y_3389_; lean_object* v_pick_3391_; uint8_t v___x_3412_; 
v___x_3412_ = lean_nat_dec_lt(v_fst_3306_, v___x_3320_);
if (v___x_3412_ == 0)
{
v_pick_3391_ = v_pick_3323_;
goto v___jp_3390_;
}
else
{
uint8_t v___x_3413_; 
v___x_3413_ = lean_nat_dec_eq(v_pick_3323_, v___x_3321_);
if (v___x_3413_ == 0)
{
lean_object* v___x_3414_; lean_object* v_keyStart_3415_; lean_object* v_keyStop_3416_; lean_object* v___x_3417_; lean_object* v_fst_3418_; uint8_t v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; uint8_t v___x_3423_; 
v___x_3414_ = lean_array_get_borrowed(v___x_3317_, v___x_3318_, v_a_3304_);
v_keyStart_3415_ = lean_ctor_get(v___x_3414_, 3);
v_keyStop_3416_ = lean_ctor_get(v___x_3414_, 4);
v___x_3417_ = lean_array_fget_borrowed(v___y_3316_, v_fst_3306_);
v_fst_3418_ = lean_ctor_get(v___x_3417_, 0);
lean_inc(v___x_3310_);
lean_inc(v_keyStart_3415_);
v___x_3419_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v___x_3319_, v_keyStart_3415_, v_keyStop_3416_, v_fst_3418_, v___x_3310_);
v___x_3420_ = lean_box(v___x_3419_);
v___x_3421_ = lean_obj_tag_nat(v___x_3420_);
lean_dec(v___x_3420_);
v___x_3422_ = lean_unsigned_to_nat(2u);
v___x_3423_ = lean_nat_dec_eq(v___x_3421_, v___x_3422_);
if (v___x_3423_ == 0)
{
v_pick_3391_ = v_pick_3323_;
goto v___jp_3390_;
}
else
{
v_pick_3391_ = v___x_3305_;
goto v___jp_3390_;
}
}
else
{
v_pick_3391_ = v___x_3305_;
goto v___jp_3390_;
}
}
v___jp_3325_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3328_ = lean_array_push(v_fst_3303_, v___y_3327_);
v___x_3329_ = lean_nat_add(v_a_3304_, v___x_3305_);
lean_dec(v_a_3304_);
v___x_3330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3330_, 0, v_fst_3306_);
lean_ctor_set(v___x_3330_, 1, v_snd_3307_);
v___x_3331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3329_);
lean_ctor_set(v___x_3331_, 1, v___x_3330_);
v___x_3332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3332_, 0, v_fst_3308_);
lean_ctor_set(v___x_3332_, 1, v___x_3331_);
v___x_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3333_, 0, v_fst_3309_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3334_, 0, v___y_3326_);
lean_ctor_set(v___x_3334_, 1, v___x_3333_);
v___x_3335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3328_);
lean_ctor_set(v___x_3335_, 1, v___x_3334_);
v___x_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
v___x_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3336_);
return v___x_3337_;
}
v___jp_3338_:
{
uint8_t v___x_3340_; 
v___x_3340_ = lean_nat_dec_eq(v_pick_3339_, v___x_3310_);
lean_dec(v___x_3310_);
if (v___x_3340_ == 0)
{
uint8_t v___x_3341_; 
v___x_3341_ = lean_nat_dec_eq(v_pick_3339_, v___x_3305_);
if (v___x_3341_ == 0)
{
lean_object* v___x_3342_; uint8_t v___x_3343_; 
v___x_3342_ = lean_unsigned_to_nat(2u);
v___x_3343_ = lean_nat_dec_eq(v_pick_3339_, v___x_3342_);
if (v___x_3343_ == 0)
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3344_, 0, v_fst_3306_);
lean_ctor_set(v___x_3344_, 1, v_snd_3307_);
v___x_3345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3345_, 0, v_a_3304_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
v___x_3346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3346_, 0, v_fst_3308_);
lean_ctor_set(v___x_3346_, 1, v___x_3345_);
v___x_3347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3347_, 0, v_fst_3309_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
v___x_3348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3348_, 0, v_fst_3311_);
lean_ctor_set(v___x_3348_, 1, v___x_3347_);
v___x_3349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3349_, 0, v_fst_3303_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
return v___x_3351_;
}
else
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3352_ = lean_array_get_size(v_fst_3303_);
v___x_3353_ = lean_array_set(v_fst_3308_, v_snd_3307_, v___x_3352_);
lean_inc(v_snd_3307_);
v___x_3354_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3354_, 0, v_snd_3307_);
v___x_3355_ = lean_array_push(v_fst_3303_, v___x_3354_);
v___x_3356_ = lean_nat_add(v_snd_3307_, v___x_3305_);
lean_dec(v_snd_3307_);
v___x_3357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3357_, 0, v_fst_3306_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
v___x_3358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3358_, 0, v_a_3304_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3353_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3360_, 0, v_fst_3309_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
v___x_3361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3361_, 0, v_fst_3311_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
v___x_3362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3355_);
lean_ctor_set(v___x_3362_, 1, v___x_3361_);
v___x_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3362_);
v___x_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
return v___x_3364_;
}
}
else
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___x_3365_ = lean_array_get_size(v_fst_3303_);
v___x_3366_ = lean_array_set(v_fst_3309_, v_fst_3306_, v___x_3365_);
lean_inc(v_fst_3306_);
v___x_3367_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3367_, 0, v_fst_3306_);
v___x_3368_ = lean_array_push(v_fst_3303_, v___x_3367_);
v___x_3369_ = lean_nat_add(v_fst_3306_, v___x_3305_);
lean_dec(v_fst_3306_);
v___x_3370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
lean_ctor_set(v___x_3370_, 1, v_snd_3307_);
v___x_3371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3371_, 0, v_a_3304_);
lean_ctor_set(v___x_3371_, 1, v___x_3370_);
v___x_3372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3372_, 0, v_fst_3308_);
lean_ctor_set(v___x_3372_, 1, v___x_3371_);
v___x_3373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3366_);
lean_ctor_set(v___x_3373_, 1, v___x_3372_);
v___x_3374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3374_, 0, v_fst_3311_);
lean_ctor_set(v___x_3374_, 1, v___x_3373_);
v___x_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3368_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
v___x_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3375_);
v___x_3377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
return v___x_3377_;
}
}
else
{
lean_object* v___x_3378_; lean_object* v___x_3379_; uint8_t v___x_3380_; uint8_t v___x_3381_; uint8_t v___x_3382_; 
v___x_3378_ = lean_array_get_size(v_fst_3303_);
v___x_3379_ = lean_array_set(v_fst_3311_, v_a_3304_, v___x_3378_);
v___x_3380_ = lean_byte_array_get(v___x_3312_, v_a_3304_);
v___x_3381_ = 1;
v___x_3382_ = lean_uint8_dec_eq(v___x_3380_, v___x_3381_);
if (v___x_3382_ == 0)
{
lean_object* v___x_3383_; 
lean_inc(v_a_3304_);
v___x_3383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3383_, 0, v_a_3304_);
v___y_3326_ = v___x_3379_;
v___y_3327_ = v___x_3383_;
goto v___jp_3325_;
}
else
{
lean_object* v___x_3384_; 
lean_inc(v_a_3304_);
v___x_3384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3384_, 0, v_a_3304_);
v___y_3326_ = v___x_3379_;
v___y_3327_ = v___x_3384_;
goto v___jp_3325_;
}
}
}
v___jp_3385_:
{
lean_object* v___x_3386_; 
v___x_3386_ = lean_unsigned_to_nat(2u);
v_pick_3339_ = v___x_3386_;
goto v___jp_3338_;
}
v___jp_3387_:
{
if (v___y_3389_ == 0)
{
v_pick_3339_ = v___y_3388_;
goto v___jp_3338_;
}
else
{
goto v___jp_3385_;
}
}
v___jp_3390_:
{
uint8_t v___x_3392_; 
v___x_3392_ = lean_nat_dec_lt(v_snd_3307_, v___x_3313_);
if (v___x_3392_ == 0)
{
v_pick_3339_ = v_pick_3391_;
goto v___jp_3338_;
}
else
{
lean_object* v___x_3393_; uint8_t v___x_3394_; 
v___x_3393_ = lean_array_fget_borrowed(v___y_3314_, v_snd_3307_);
v___x_3394_ = lean_nat_dec_eq(v_pick_3391_, v___x_3310_);
if (v___x_3394_ == 0)
{
uint8_t v___x_3395_; 
v___x_3395_ = lean_nat_dec_eq(v_pick_3391_, v___x_3305_);
if (v___x_3395_ == 0)
{
goto v___jp_3385_;
}
else
{
lean_object* v___x_3396_; lean_object* v_fst_3397_; lean_object* v___x_3398_; uint8_t v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; uint8_t v___x_3403_; 
v___x_3396_ = lean_array_get_borrowed(v___x_3315_, v___y_3316_, v_fst_3306_);
v_fst_3397_ = lean_ctor_get(v___x_3396_, 0);
v___x_3398_ = lean_string_utf8_byte_size(v_fst_3397_);
lean_inc_n(v___x_3310_, 2);
v___x_3399_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v_fst_3397_, v___x_3310_, v___x_3398_, v___x_3393_, v___x_3310_);
v___x_3400_ = lean_box(v___x_3399_);
v___x_3401_ = lean_obj_tag_nat(v___x_3400_);
lean_dec(v___x_3400_);
v___x_3402_ = lean_unsigned_to_nat(2u);
v___x_3403_ = lean_nat_dec_eq(v___x_3401_, v___x_3402_);
v___y_3388_ = v_pick_3391_;
v___y_3389_ = v___x_3403_;
goto v___jp_3387_;
}
}
else
{
lean_object* v___x_3404_; lean_object* v_keyStart_3405_; lean_object* v_keyStop_3406_; uint8_t v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; uint8_t v___x_3411_; 
v___x_3404_ = lean_array_get_borrowed(v___x_3317_, v___x_3318_, v_a_3304_);
v_keyStart_3405_ = lean_ctor_get(v___x_3404_, 3);
v_keyStop_3406_ = lean_ctor_get(v___x_3404_, 4);
lean_inc(v___x_3310_);
lean_inc(v_keyStart_3405_);
v___x_3407_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v___x_3319_, v_keyStart_3405_, v_keyStop_3406_, v___x_3393_, v___x_3310_);
v___x_3408_ = lean_box(v___x_3407_);
v___x_3409_ = lean_obj_tag_nat(v___x_3408_);
lean_dec(v___x_3408_);
v___x_3410_ = lean_unsigned_to_nat(2u);
v___x_3411_ = lean_nat_dec_eq(v___x_3409_, v___x_3410_);
v___y_3388_ = v_pick_3391_;
v___y_3389_ = v___x_3411_;
goto v___jp_3387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_fst_3424_ = _args[0];
lean_object* v_a_3425_ = _args[1];
lean_object* v___x_3426_ = _args[2];
lean_object* v_fst_3427_ = _args[3];
lean_object* v_snd_3428_ = _args[4];
lean_object* v_fst_3429_ = _args[5];
lean_object* v_fst_3430_ = _args[6];
lean_object* v___x_3431_ = _args[7];
lean_object* v_fst_3432_ = _args[8];
lean_object* v___x_3433_ = _args[9];
lean_object* v___x_3434_ = _args[10];
lean_object* v___y_3435_ = _args[11];
lean_object* v___x_3436_ = _args[12];
lean_object* v___y_3437_ = _args[13];
lean_object* v___x_3438_ = _args[14];
lean_object* v___x_3439_ = _args[15];
lean_object* v___x_3440_ = _args[16];
lean_object* v___x_3441_ = _args[17];
lean_object* v___x_3442_ = _args[18];
lean_object* v_____r_3443_ = _args[19];
lean_object* v_pick_3444_ = _args[20];
lean_object* v___y_3445_ = _args[21];
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___lam__0(v_fst_3424_, v_a_3425_, v___x_3426_, v_fst_3427_, v_snd_3428_, v_fst_3429_, v_fst_3430_, v___x_3431_, v_fst_3432_, v___x_3433_, v___x_3434_, v___y_3435_, v___x_3436_, v___y_3437_, v___x_3438_, v___x_3439_, v___x_3440_, v___x_3441_, v___x_3442_, v_____r_3443_, v_pick_3444_);
lean_dec(v_pick_3444_);
lean_dec(v___x_3442_);
lean_dec(v___x_3441_);
lean_dec_ref(v___x_3440_);
lean_dec_ref(v___x_3439_);
lean_dec_ref(v___x_3438_);
lean_dec_ref(v___y_3437_);
lean_dec_ref(v___x_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___x_3434_);
lean_dec_ref(v___x_3433_);
lean_dec(v___x_3426_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg(lean_object* v___x_3447_, lean_object* v___x_3448_, lean_object* v___x_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___x_3452_, lean_object* v___x_3453_, lean_object* v___x_3454_, lean_object* v_a_3455_){
_start:
{
lean_object* v___y_3458_; lean_object* v_snd_3478_; lean_object* v_snd_3479_; lean_object* v_snd_3480_; lean_object* v_snd_3481_; lean_object* v_snd_3482_; lean_object* v_fst_3483_; lean_object* v_fst_3484_; lean_object* v_fst_3485_; lean_object* v_fst_3486_; lean_object* v_fst_3487_; lean_object* v_fst_3488_; lean_object* v_snd_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
v_snd_3478_ = lean_ctor_get(v_a_3455_, 1);
lean_inc(v_snd_3478_);
v_snd_3479_ = lean_ctor_get(v_snd_3478_, 1);
lean_inc(v_snd_3479_);
v_snd_3480_ = lean_ctor_get(v_snd_3479_, 1);
lean_inc(v_snd_3480_);
v_snd_3481_ = lean_ctor_get(v_snd_3480_, 1);
lean_inc(v_snd_3481_);
v_snd_3482_ = lean_ctor_get(v_snd_3481_, 1);
lean_inc(v_snd_3482_);
v_fst_3483_ = lean_ctor_get(v_a_3455_, 0);
lean_inc(v_fst_3483_);
lean_dec_ref(v_a_3455_);
v_fst_3484_ = lean_ctor_get(v_snd_3478_, 0);
lean_inc(v_fst_3484_);
lean_dec(v_snd_3478_);
v_fst_3485_ = lean_ctor_get(v_snd_3479_, 0);
lean_inc(v_fst_3485_);
lean_dec(v_snd_3479_);
v_fst_3486_ = lean_ctor_get(v_snd_3480_, 0);
lean_inc(v_fst_3486_);
lean_dec(v_snd_3480_);
v_fst_3487_ = lean_ctor_get(v_snd_3481_, 0);
lean_inc(v_fst_3487_);
lean_dec(v_snd_3481_);
v_fst_3488_ = lean_ctor_get(v_snd_3482_, 0);
lean_inc(v_fst_3488_);
v_snd_3489_ = lean_ctor_get(v_snd_3482_, 1);
lean_inc(v_snd_3489_);
lean_dec(v_snd_3482_);
v___x_3490_ = lean_unsigned_to_nat(0u);
v___x_3491_ = lean_unsigned_to_nat(1u);
v___x_3492_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0));
v___x_3493_ = ((lean_object*)(l_Lake_instInhabitedModuleTimeRow_default));
v___x_3494_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___redArg(v___x_3447_, v___x_3448_, v_fst_3487_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v_a_3495_; lean_object* v___x_3496_; uint8_t v___x_3497_; 
v_a_3495_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v___x_3494_, 1);
v___x_3496_ = lean_unsigned_to_nat(3u);
v___x_3497_ = lean_nat_dec_lt(v_a_3495_, v___x_3447_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3498_ = lean_box(0);
v___x_3499_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___lam__0(v_fst_3483_, v_a_3495_, v___x_3491_, v_fst_3488_, v_snd_3489_, v_fst_3486_, v_fst_3485_, v___x_3490_, v_fst_3484_, v___x_3448_, v___x_3449_, v___y_3450_, v___x_3492_, v___y_3451_, v___x_3493_, v___x_3452_, v___x_3453_, v___x_3454_, v___x_3496_, v___x_3498_, v___x_3496_);
v___y_3458_ = v___x_3499_;
goto v___jp_3457_;
}
else
{
lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3500_ = lean_box(0);
v___x_3501_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___lam__0(v_fst_3483_, v_a_3495_, v___x_3491_, v_fst_3488_, v_snd_3489_, v_fst_3486_, v_fst_3485_, v___x_3490_, v_fst_3484_, v___x_3448_, v___x_3449_, v___y_3450_, v___x_3492_, v___y_3451_, v___x_3493_, v___x_3452_, v___x_3453_, v___x_3454_, v___x_3496_, v___x_3500_, v___x_3490_);
v___y_3458_ = v___x_3501_;
goto v___jp_3457_;
}
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
lean_dec(v_snd_3489_);
lean_dec(v_fst_3488_);
lean_dec(v_fst_3486_);
lean_dec(v_fst_3485_);
lean_dec(v_fst_3484_);
lean_dec(v_fst_3483_);
v_a_3502_ = lean_ctor_get(v___x_3494_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3504_ = v___x_3494_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3494_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3502_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
v___jp_3457_:
{
if (lean_obj_tag(v___y_3458_) == 0)
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3469_; 
v_a_3459_ = lean_ctor_get(v___y_3458_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___y_3458_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3461_ = v___y_3458_;
v_isShared_3462_ = v_isSharedCheck_3469_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___y_3458_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3469_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
if (lean_obj_tag(v_a_3459_) == 0)
{
lean_object* v_a_3463_; lean_object* v___x_3465_; 
v_a_3463_ = lean_ctor_get(v_a_3459_, 0);
lean_inc(v_a_3463_);
lean_dec_ref_known(v_a_3459_, 1);
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 0, v_a_3463_);
v___x_3465_ = v___x_3461_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_a_3463_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
else
{
lean_object* v_a_3467_; 
lean_del_object(v___x_3461_);
v_a_3467_ = lean_ctor_get(v_a_3459_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v_a_3459_, 1);
v_a_3455_ = v_a_3467_;
goto _start;
}
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
v_a_3470_ = lean_ctor_get(v___y_3458_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___y_3458_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___y_3458_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___y_3458_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg___boxed(lean_object* v___x_3510_, lean_object* v___x_3511_, lean_object* v___x_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___x_3515_, lean_object* v___x_3516_, lean_object* v___x_3517_, lean_object* v_a_3518_, lean_object* v___y_3519_){
_start:
{
lean_object* v_res_3520_; 
v_res_3520_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg(v___x_3510_, v___x_3511_, v___x_3512_, v___y_3513_, v___y_3514_, v___x_3515_, v___x_3516_, v___x_3517_, v_a_3518_);
lean_dec(v___x_3517_);
lean_dec_ref(v___x_3516_);
lean_dec_ref(v___x_3515_);
lean_dec_ref(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___x_3512_);
lean_dec_ref(v___x_3511_);
lean_dec(v___x_3510_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__0___redArg(lean_object* v_m_3521_, lean_object* v_a_3522_, lean_object* v_b_3523_){
_start:
{
lean_object* v_size_3524_; lean_object* v_buckets_3525_; lean_object* v___x_3526_; uint64_t v___y_3528_; 
v_size_3524_ = lean_ctor_get(v_m_3521_, 0);
v_buckets_3525_ = lean_ctor_get(v_m_3521_, 1);
v___x_3526_ = lean_array_get_size(v_buckets_3525_);
if (lean_obj_tag(v_a_3522_) == 0)
{
uint64_t v___x_3565_; 
v___x_3565_ = 1723ULL;
v___y_3528_ = v___x_3565_;
goto v___jp_3527_;
}
else
{
uint64_t v_hash_3566_; 
v_hash_3566_ = lean_ctor_get_uint64(v_a_3522_, sizeof(void*)*2);
v___y_3528_ = v_hash_3566_;
goto v___jp_3527_;
}
v___jp_3527_:
{
uint64_t v___x_3529_; uint64_t v___x_3530_; uint64_t v_fold_3531_; uint64_t v___x_3532_; uint64_t v___x_3533_; uint64_t v___x_3534_; size_t v___x_3535_; size_t v___x_3536_; size_t v___x_3537_; size_t v___x_3538_; size_t v___x_3539_; lean_object* v_bkt_3540_; uint8_t v___x_3541_; 
v___x_3529_ = 32ULL;
v___x_3530_ = lean_uint64_shift_right(v___y_3528_, v___x_3529_);
v_fold_3531_ = lean_uint64_xor(v___y_3528_, v___x_3530_);
v___x_3532_ = 16ULL;
v___x_3533_ = lean_uint64_shift_right(v_fold_3531_, v___x_3532_);
v___x_3534_ = lean_uint64_xor(v_fold_3531_, v___x_3533_);
v___x_3535_ = lean_uint64_to_usize(v___x_3534_);
v___x_3536_ = lean_usize_of_nat(v___x_3526_);
v___x_3537_ = ((size_t)1ULL);
v___x_3538_ = lean_usize_sub(v___x_3536_, v___x_3537_);
v___x_3539_ = lean_usize_land(v___x_3535_, v___x_3538_);
v_bkt_3540_ = lean_array_uget_borrowed(v_buckets_3525_, v___x_3539_);
v___x_3541_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__0___redArg(v_a_3522_, v_bkt_3540_);
if (v___x_3541_ == 0)
{
lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3562_; 
lean_inc_ref(v_buckets_3525_);
lean_inc(v_size_3524_);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_m_3521_);
if (v_isSharedCheck_3562_ == 0)
{
lean_object* v_unused_3563_; lean_object* v_unused_3564_; 
v_unused_3563_ = lean_ctor_get(v_m_3521_, 1);
lean_dec(v_unused_3563_);
v_unused_3564_ = lean_ctor_get(v_m_3521_, 0);
lean_dec(v_unused_3564_);
v___x_3543_ = v_m_3521_;
v_isShared_3544_ = v_isSharedCheck_3562_;
goto v_resetjp_3542_;
}
else
{
lean_dec(v_m_3521_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3562_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3545_; lean_object* v_size_x27_3546_; lean_object* v___x_3547_; lean_object* v_buckets_x27_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; uint8_t v___x_3554_; 
v___x_3545_ = lean_unsigned_to_nat(1u);
v_size_x27_3546_ = lean_nat_add(v_size_3524_, v___x_3545_);
lean_dec(v_size_3524_);
lean_inc(v_bkt_3540_);
v___x_3547_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3547_, 0, v_a_3522_);
lean_ctor_set(v___x_3547_, 1, v_b_3523_);
lean_ctor_set(v___x_3547_, 2, v_bkt_3540_);
v_buckets_x27_3548_ = lean_array_uset(v_buckets_3525_, v___x_3539_, v___x_3547_);
v___x_3549_ = lean_unsigned_to_nat(4u);
v___x_3550_ = lean_nat_mul(v_size_x27_3546_, v___x_3549_);
v___x_3551_ = lean_unsigned_to_nat(3u);
v___x_3552_ = lean_nat_div(v___x_3550_, v___x_3551_);
lean_dec(v___x_3550_);
v___x_3553_ = lean_array_get_size(v_buckets_x27_3548_);
v___x_3554_ = lean_nat_dec_le(v___x_3552_, v___x_3553_);
lean_dec(v___x_3552_);
if (v___x_3554_ == 0)
{
lean_object* v_val_3555_; lean_object* v___x_3557_; 
v_val_3555_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lake_ModuleTimes_load_spec__0_spec__1___redArg(v_buckets_x27_3548_);
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 1, v_val_3555_);
lean_ctor_set(v___x_3543_, 0, v_size_x27_3546_);
v___x_3557_ = v___x_3543_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v_size_x27_3546_);
lean_ctor_set(v_reuseFailAlloc_3558_, 1, v_val_3555_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
else
{
lean_object* v___x_3560_; 
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 1, v_buckets_x27_3548_);
lean_ctor_set(v___x_3543_, 0, v_size_x27_3546_);
v___x_3560_ = v___x_3543_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v_size_x27_3546_);
lean_ctor_set(v_reuseFailAlloc_3561_, 1, v_buckets_x27_3548_);
v___x_3560_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
return v___x_3560_;
}
}
}
}
else
{
lean_dec(v_b_3523_);
lean_dec(v_a_3522_);
return v_m_3521_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lake_ModuleTimes_save_spec__3(lean_object* v_x_3567_, lean_object* v_x_3568_){
_start:
{
if (lean_obj_tag(v_x_3568_) == 0)
{
return v_x_3567_;
}
else
{
lean_object* v_head_3569_; lean_object* v_tail_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; 
v_head_3569_ = lean_ctor_get(v_x_3568_, 0);
lean_inc(v_head_3569_);
v_tail_3570_ = lean_ctor_get(v_x_3568_, 1);
lean_inc(v_tail_3570_);
lean_dec_ref_known(v_x_3568_, 2);
v___x_3571_ = lean_box(0);
v___x_3572_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__0___redArg(v_x_3567_, v_head_3569_, v___x_3571_);
v_x_3567_ = v___x_3572_;
v_x_3568_ = v_tail_3570_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0(lean_object* v_x1_3574_, lean_object* v_x2_3575_){
_start:
{
lean_object* v_fst_3576_; lean_object* v_fst_3577_; uint8_t v___x_3578_; 
v_fst_3576_ = lean_ctor_get(v_x1_3574_, 0);
v_fst_3577_ = lean_ctor_get(v_x2_3575_, 0);
v___x_3578_ = lean_string_dec_lt(v_fst_3576_, v_fst_3577_);
return v___x_3578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0___boxed(lean_object* v_x1_3579_, lean_object* v_x2_3580_){
_start:
{
uint8_t v_res_3581_; lean_object* v_r_3582_; 
v_res_3581_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0(v_x1_3579_, v_x2_3580_);
lean_dec_ref(v_x2_3580_);
lean_dec_ref(v_x1_3579_);
v_r_3582_ = lean_box(v_res_3581_);
return v_r_3582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___redArg(lean_object* v_hi_3583_, lean_object* v_pivot_3584_, lean_object* v_as_3585_, lean_object* v_i_3586_, lean_object* v_k_3587_){
_start:
{
uint8_t v___x_3588_; 
v___x_3588_ = lean_nat_dec_lt(v_k_3587_, v_hi_3583_);
if (v___x_3588_ == 0)
{
lean_object* v___x_3589_; lean_object* v___x_3590_; 
lean_dec(v_k_3587_);
v___x_3589_ = lean_array_fswap(v_as_3585_, v_i_3586_, v_hi_3583_);
v___x_3590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3590_, 0, v_i_3586_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
return v___x_3590_;
}
else
{
lean_object* v___x_3591_; lean_object* v_fst_3592_; lean_object* v_fst_3593_; uint8_t v___x_3594_; 
v___x_3591_ = lean_array_fget_borrowed(v_as_3585_, v_k_3587_);
v_fst_3592_ = lean_ctor_get(v___x_3591_, 0);
v_fst_3593_ = lean_ctor_get(v_pivot_3584_, 0);
v___x_3594_ = lean_string_dec_lt(v_fst_3592_, v_fst_3593_);
if (v___x_3594_ == 0)
{
lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3595_ = lean_unsigned_to_nat(1u);
v___x_3596_ = lean_nat_add(v_k_3587_, v___x_3595_);
lean_dec(v_k_3587_);
v_k_3587_ = v___x_3596_;
goto _start;
}
else
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3598_ = lean_array_fswap(v_as_3585_, v_i_3586_, v_k_3587_);
v___x_3599_ = lean_unsigned_to_nat(1u);
v___x_3600_ = lean_nat_add(v_i_3586_, v___x_3599_);
lean_dec(v_i_3586_);
v___x_3601_ = lean_nat_add(v_k_3587_, v___x_3599_);
lean_dec(v_k_3587_);
v_as_3585_ = v___x_3598_;
v_i_3586_ = v___x_3600_;
v_k_3587_ = v___x_3601_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___redArg___boxed(lean_object* v_hi_3603_, lean_object* v_pivot_3604_, lean_object* v_as_3605_, lean_object* v_i_3606_, lean_object* v_k_3607_){
_start:
{
lean_object* v_res_3608_; 
v_res_3608_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___redArg(v_hi_3603_, v_pivot_3604_, v_as_3605_, v_i_3606_, v_k_3607_);
lean_dec_ref(v_pivot_3604_);
lean_dec(v_hi_3603_);
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg(lean_object* v_n_3609_, lean_object* v_as_3610_, lean_object* v_lo_3611_, lean_object* v_hi_3612_){
_start:
{
lean_object* v___y_3614_; uint8_t v___x_3624_; 
v___x_3624_ = lean_nat_dec_lt(v_lo_3611_, v_hi_3612_);
if (v___x_3624_ == 0)
{
lean_dec(v_lo_3611_);
return v_as_3610_;
}
else
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v_mid_3627_; lean_object* v___y_3629_; lean_object* v___y_3635_; lean_object* v___x_3640_; lean_object* v___x_3641_; uint8_t v___x_3642_; 
v___x_3625_ = lean_nat_add(v_lo_3611_, v_hi_3612_);
v___x_3626_ = lean_unsigned_to_nat(1u);
v_mid_3627_ = lean_nat_shiftr(v___x_3625_, v___x_3626_);
lean_dec(v___x_3625_);
v___x_3640_ = lean_array_fget_borrowed(v_as_3610_, v_mid_3627_);
v___x_3641_ = lean_array_fget_borrowed(v_as_3610_, v_lo_3611_);
v___x_3642_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0(v___x_3640_, v___x_3641_);
if (v___x_3642_ == 0)
{
v___y_3635_ = v_as_3610_;
goto v___jp_3634_;
}
else
{
lean_object* v___x_3643_; 
v___x_3643_ = lean_array_fswap(v_as_3610_, v_lo_3611_, v_mid_3627_);
v___y_3635_ = v___x_3643_;
goto v___jp_3634_;
}
v___jp_3628_:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; uint8_t v___x_3632_; 
v___x_3630_ = lean_array_fget_borrowed(v___y_3629_, v_mid_3627_);
v___x_3631_ = lean_array_fget_borrowed(v___y_3629_, v_hi_3612_);
v___x_3632_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0(v___x_3630_, v___x_3631_);
if (v___x_3632_ == 0)
{
lean_dec(v_mid_3627_);
v___y_3614_ = v___y_3629_;
goto v___jp_3613_;
}
else
{
lean_object* v___x_3633_; 
v___x_3633_ = lean_array_fswap(v___y_3629_, v_mid_3627_, v_hi_3612_);
lean_dec(v_mid_3627_);
v___y_3614_ = v___x_3633_;
goto v___jp_3613_;
}
}
v___jp_3634_:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; uint8_t v___x_3638_; 
v___x_3636_ = lean_array_fget_borrowed(v___y_3635_, v_hi_3612_);
v___x_3637_ = lean_array_fget_borrowed(v___y_3635_, v_lo_3611_);
v___x_3638_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___lam__0(v___x_3636_, v___x_3637_);
if (v___x_3638_ == 0)
{
v___y_3629_ = v___y_3635_;
goto v___jp_3628_;
}
else
{
lean_object* v___x_3639_; 
v___x_3639_ = lean_array_fswap(v___y_3635_, v_lo_3611_, v_hi_3612_);
v___y_3629_ = v___x_3639_;
goto v___jp_3628_;
}
}
}
v___jp_3613_:
{
lean_object* v_pivot_3615_; lean_object* v___x_3616_; lean_object* v_fst_3617_; lean_object* v_snd_3618_; uint8_t v___x_3619_; 
v_pivot_3615_ = lean_array_fget(v___y_3614_, v_hi_3612_);
lean_inc_n(v_lo_3611_, 2);
v___x_3616_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___redArg(v_hi_3612_, v_pivot_3615_, v___y_3614_, v_lo_3611_, v_lo_3611_);
lean_dec(v_pivot_3615_);
v_fst_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_fst_3617_);
v_snd_3618_ = lean_ctor_get(v___x_3616_, 1);
lean_inc(v_snd_3618_);
lean_dec_ref(v___x_3616_);
v___x_3619_ = lean_nat_dec_le(v_hi_3612_, v_fst_3617_);
if (v___x_3619_ == 0)
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3620_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg(v_n_3609_, v_snd_3618_, v_lo_3611_, v_fst_3617_);
v___x_3621_ = lean_unsigned_to_nat(1u);
v___x_3622_ = lean_nat_add(v_fst_3617_, v___x_3621_);
lean_dec(v_fst_3617_);
v_as_3610_ = v___x_3620_;
v_lo_3611_ = v___x_3622_;
goto _start;
}
else
{
lean_dec(v_fst_3617_);
lean_dec(v_lo_3611_);
return v_snd_3618_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg___boxed(lean_object* v_n_3644_, lean_object* v_as_3645_, lean_object* v_lo_3646_, lean_object* v_hi_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg(v_n_3644_, v_as_3645_, v_lo_3646_, v_hi_3647_);
lean_dec(v_hi_3647_);
lean_dec(v_n_3644_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__25(lean_object* v_x_3649_, lean_object* v_x_3650_){
_start:
{
if (lean_obj_tag(v_x_3650_) == 0)
{
return v_x_3649_;
}
else
{
lean_object* v_value_3651_; lean_object* v_tail_3652_; lean_object* v_name_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v_value_3651_ = lean_ctor_get(v_x_3650_, 1);
v_tail_3652_ = lean_ctor_get(v_x_3650_, 2);
v_name_3653_ = lean_ctor_get(v_value_3651_, 0);
v___x_3654_ = l_Lake_encodeModuleName(v_name_3653_);
lean_inc(v_value_3651_);
v___x_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3654_);
lean_ctor_set(v___x_3655_, 1, v_value_3651_);
v___x_3656_ = lean_array_push(v_x_3649_, v___x_3655_);
v_x_3649_ = v___x_3656_;
v_x_3650_ = v_tail_3652_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__25___boxed(lean_object* v_x_3658_, lean_object* v_x_3659_){
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__25(v_x_3658_, v_x_3659_);
lean_dec(v_x_3659_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__26(lean_object* v_as_3661_, size_t v_i_3662_, size_t v_stop_3663_, lean_object* v_b_3664_){
_start:
{
uint8_t v___x_3665_; 
v___x_3665_ = lean_usize_dec_eq(v_i_3662_, v_stop_3663_);
if (v___x_3665_ == 0)
{
lean_object* v___x_3666_; lean_object* v___x_3667_; size_t v___x_3668_; size_t v___x_3669_; 
v___x_3666_ = lean_array_uget_borrowed(v_as_3661_, v_i_3662_);
v___x_3667_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__25(v_b_3664_, v___x_3666_);
v___x_3668_ = ((size_t)1ULL);
v___x_3669_ = lean_usize_add(v_i_3662_, v___x_3668_);
v_i_3662_ = v___x_3669_;
v_b_3664_ = v___x_3667_;
goto _start;
}
else
{
return v_b_3664_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__26___boxed(lean_object* v_as_3671_, lean_object* v_i_3672_, lean_object* v_stop_3673_, lean_object* v_b_3674_){
_start:
{
size_t v_i_boxed_3675_; size_t v_stop_boxed_3676_; lean_object* v_res_3677_; 
v_i_boxed_3675_ = lean_unbox_usize(v_i_3672_);
lean_dec(v_i_3672_);
v_stop_boxed_3676_ = lean_unbox_usize(v_stop_3673_);
lean_dec(v_stop_3673_);
v_res_3677_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__26(v_as_3671_, v_i_boxed_3675_, v_stop_boxed_3676_, v_b_3674_);
lean_dec_ref(v_as_3671_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lake_ModuleTimes_save_spec__1(lean_object* v_x_3678_, lean_object* v_x_3679_){
_start:
{
if (lean_obj_tag(v_x_3679_) == 0)
{
return v_x_3678_;
}
else
{
lean_object* v_head_3680_; lean_object* v_tail_3681_; lean_object* v_name_3682_; lean_object* v___x_3683_; 
v_head_3680_ = lean_ctor_get(v_x_3679_, 0);
lean_inc(v_head_3680_);
v_tail_3681_ = lean_ctor_get(v_x_3679_, 1);
lean_inc(v_tail_3681_);
lean_dec_ref_known(v_x_3679_, 2);
v_name_3682_ = lean_ctor_get(v_head_3680_, 0);
lean_inc(v_name_3682_);
v___x_3683_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__0___redArg(v_x_3678_, v_name_3682_, v_head_3680_);
v_x_3678_ = v___x_3683_;
v_x_3679_ = v_tail_3681_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___redArg(lean_object* v___y_3685_, lean_object* v___x_3686_, lean_object* v___x_3687_, lean_object* v_a_3688_){
_start:
{
lean_object* v_fst_3690_; lean_object* v_snd_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3728_; 
v_fst_3690_ = lean_ctor_get(v_a_3688_, 0);
v_snd_3691_ = lean_ctor_get(v_a_3688_, 1);
v_isSharedCheck_3728_ = !lean_is_exclusive(v_a_3688_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3693_ = v_a_3688_;
v_isShared_3694_ = v_isSharedCheck_3728_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_snd_3691_);
lean_inc(v_fst_3690_);
lean_dec(v_a_3688_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3728_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3695_; uint8_t v___x_3696_; 
v___x_3695_ = lean_array_get_size(v___y_3685_);
v___x_3696_ = lean_nat_dec_lt(v_fst_3690_, v___x_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3698_; 
lean_dec_ref(v___x_3686_);
if (v_isShared_3694_ == 0)
{
v___x_3698_ = v___x_3693_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_fst_3690_);
lean_ctor_set(v_reuseFailAlloc_3700_, 1, v_snd_3691_);
v___x_3698_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3699_; 
v___x_3699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3698_);
return v___x_3699_;
}
}
else
{
lean_object* v_keyStart_3701_; lean_object* v_keyStop_3702_; lean_object* v___x_3703_; lean_object* v_fst_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3726_; 
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_keyStart_3701_ = lean_ctor_get(v___x_3686_, 3);
v_keyStop_3702_ = lean_ctor_get(v___x_3686_, 4);
v___x_3703_ = lean_array_fget(v___y_3685_, v_fst_3690_);
v_fst_3704_ = lean_ctor_get(v___x_3703_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3703_);
if (v_isSharedCheck_3726_ == 0)
{
lean_object* v_unused_3727_; 
v_unused_3727_ = lean_ctor_get(v___x_3703_, 1);
lean_dec(v_unused_3727_);
v___x_3706_ = v___x_3703_;
v_isShared_3707_ = v_isSharedCheck_3726_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_fst_3704_);
lean_dec(v___x_3703_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3726_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3708_; uint8_t v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; uint8_t v___x_3713_; 
v___x_3708_ = lean_unsigned_to_nat(0u);
lean_inc(v_keyStart_3701_);
v___x_3709_ = l___private_Lake_Build_ModuleTimes_0__Lake_compareRange(v___x_3687_, v_keyStart_3701_, v_keyStop_3702_, v_fst_3704_, v___x_3708_);
lean_dec(v_fst_3704_);
v___x_3710_ = lean_box(v___x_3709_);
v___x_3711_ = lean_obj_tag_nat(v___x_3710_);
lean_dec(v___x_3710_);
v___x_3712_ = lean_unsigned_to_nat(2u);
v___x_3713_ = lean_nat_dec_eq(v___x_3711_, v___x_3712_);
if (v___x_3713_ == 0)
{
lean_object* v___x_3714_; lean_object* v___x_3716_; 
lean_dec_ref(v___x_3686_);
v___x_3714_ = lean_box(v___x_3709_);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 1, v___x_3714_);
lean_ctor_set(v___x_3706_, 0, v_fst_3690_);
v___x_3716_ = v___x_3706_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_fst_3690_);
lean_ctor_set(v_reuseFailAlloc_3718_, 1, v___x_3714_);
v___x_3716_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
lean_object* v___x_3717_; 
v___x_3717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
return v___x_3717_;
}
}
else
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3723_; 
v___x_3719_ = lean_unsigned_to_nat(1u);
v___x_3720_ = lean_nat_add(v_fst_3690_, v___x_3719_);
lean_dec(v_fst_3690_);
v___x_3721_ = lean_box(v___x_3709_);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 1, v___x_3721_);
lean_ctor_set(v___x_3706_, 0, v___x_3720_);
v___x_3723_ = v___x_3706_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3720_);
lean_ctor_set(v_reuseFailAlloc_3725_, 1, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
v_a_3688_ = v___x_3723_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___redArg___boxed(lean_object* v___y_3729_, lean_object* v___x_3730_, lean_object* v___x_3731_, lean_object* v_a_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___redArg(v___y_3729_, v___x_3730_, v___x_3731_, v_a_3732_);
lean_dec_ref(v___x_3731_);
lean_dec_ref(v___y_3729_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___redArg(lean_object* v___x_3735_, lean_object* v___y_3736_, lean_object* v___x_3737_, lean_object* v_val_3738_, uint8_t v___x_3739_, lean_object* v_range_3740_, lean_object* v_b_3741_, lean_object* v_i_3742_){
_start:
{
lean_object* v_stop_3744_; lean_object* v_step_3745_; lean_object* v_a_3747_; uint8_t v___x_3750_; 
v_stop_3744_ = lean_ctor_get(v_range_3740_, 1);
v_step_3745_ = lean_ctor_get(v_range_3740_, 2);
v___x_3750_ = lean_nat_dec_lt(v_i_3742_, v_stop_3744_);
if (v___x_3750_ == 0)
{
lean_object* v___x_3751_; 
lean_dec(v_i_3742_);
v___x_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3751_, 0, v_b_3741_);
return v___x_3751_;
}
else
{
lean_object* v_snd_3752_; lean_object* v_fst_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3815_; 
v_snd_3752_ = lean_ctor_get(v_b_3741_, 1);
v_fst_3753_ = lean_ctor_get(v_b_3741_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v_b_3741_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3755_ = v_b_3741_;
v_isShared_3756_ = v_isSharedCheck_3815_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_snd_3752_);
lean_inc(v_fst_3753_);
lean_dec(v_b_3741_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3815_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v_fst_3757_; lean_object* v_snd_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3814_; 
v_fst_3757_ = lean_ctor_get(v_snd_3752_, 0);
v_snd_3758_ = lean_ctor_get(v_snd_3752_, 1);
v_isSharedCheck_3814_ = !lean_is_exclusive(v_snd_3752_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3760_ = v_snd_3752_;
v_isShared_3761_ = v_isSharedCheck_3814_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_snd_3758_);
lean_inc(v_fst_3757_);
lean_dec(v_snd_3752_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3814_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; uint8_t v___x_3763_; lean_object* v___x_3764_; uint8_t v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3768_; 
v___x_3762_ = lean_unsigned_to_nat(0u);
v___x_3763_ = 0;
v___x_3764_ = lean_array_fget_borrowed(v___x_3735_, v_i_3742_);
v___x_3765_ = 0;
v___x_3766_ = lean_box(v___x_3765_);
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 1, v___x_3766_);
lean_ctor_set(v___x_3760_, 0, v_snd_3758_);
v___x_3768_ = v___x_3760_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_snd_3758_);
lean_ctor_set(v_reuseFailAlloc_3813_, 1, v___x_3766_);
v___x_3768_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
lean_object* v___x_3769_; 
lean_inc(v___x_3764_);
v___x_3769_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___redArg(v___y_3736_, v___x_3764_, v___x_3737_, v___x_3768_);
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_object* v_a_3770_; lean_object* v_fst_3771_; lean_object* v_snd_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3804_; 
v_a_3770_ = lean_ctor_get(v___x_3769_, 0);
lean_inc(v_a_3770_);
lean_dec_ref_known(v___x_3769_, 1);
v_fst_3771_ = lean_ctor_get(v_a_3770_, 0);
v_snd_3772_ = lean_ctor_get(v_a_3770_, 1);
v_isSharedCheck_3804_ = !lean_is_exclusive(v_a_3770_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3774_ = v_a_3770_;
v_isShared_3775_ = v_isSharedCheck_3804_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_snd_3772_);
lean_inc(v_fst_3771_);
lean_dec(v_a_3770_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3804_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
uint8_t v___y_3791_; lean_object* v___x_3794_; uint8_t v___x_3795_; 
v___x_3794_ = lean_array_get_size(v___y_3736_);
v___x_3795_ = lean_nat_dec_lt(v_fst_3771_, v___x_3794_);
if (v___x_3795_ == 0)
{
lean_dec(v_snd_3772_);
v___y_3791_ = v___x_3739_;
goto v___jp_3790_;
}
else
{
lean_object* v___x_3796_; lean_object* v___x_3797_; uint8_t v___x_3798_; 
v___x_3796_ = lean_obj_tag_nat(v_snd_3772_);
lean_dec(v_snd_3772_);
v___x_3797_ = lean_unsigned_to_nat(1u);
v___x_3798_ = lean_nat_dec_eq(v___x_3796_, v___x_3797_);
if (v___x_3798_ == 0)
{
v___y_3791_ = v___x_3798_;
goto v___jp_3790_;
}
else
{
uint8_t v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
lean_del_object(v___x_3774_);
lean_del_object(v___x_3755_);
v___x_3799_ = 2;
v___x_3800_ = lean_byte_array_set(v_fst_3753_, v_i_3742_, v___x_3799_);
lean_inc(v_fst_3771_);
v___x_3801_ = lean_array_set(v_fst_3757_, v_i_3742_, v_fst_3771_);
v___x_3802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3801_);
lean_ctor_set(v___x_3802_, 1, v_fst_3771_);
v___x_3803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3800_);
lean_ctor_set(v___x_3803_, 1, v___x_3802_);
v_a_3747_ = v___x_3803_;
goto v___jp_3746_;
}
}
v___jp_3776_:
{
lean_object* v___x_3778_; 
if (v_isShared_3775_ == 0)
{
lean_ctor_set(v___x_3774_, 1, v_fst_3771_);
lean_ctor_set(v___x_3774_, 0, v_fst_3757_);
v___x_3778_ = v___x_3774_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_fst_3757_);
lean_ctor_set(v_reuseFailAlloc_3782_, 1, v_fst_3771_);
v___x_3778_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
lean_object* v___x_3780_; 
if (v_isShared_3756_ == 0)
{
lean_ctor_set(v___x_3755_, 1, v___x_3778_);
v___x_3780_ = v___x_3755_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_fst_3753_);
lean_ctor_set(v_reuseFailAlloc_3781_, 1, v___x_3778_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
v_a_3747_ = v___x_3780_;
goto v___jp_3746_;
}
}
}
v___jp_3783_:
{
lean_object* v_ms_3784_; uint8_t v___x_3785_; 
v_ms_3784_ = lean_ctor_get(v___x_3764_, 1);
v___x_3785_ = lean_nat_dec_lt(v___x_3762_, v_ms_3784_);
if (v___x_3785_ == 0)
{
goto v___jp_3776_;
}
else
{
uint8_t v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
lean_del_object(v___x_3774_);
lean_del_object(v___x_3755_);
v___x_3786_ = 1;
v___x_3787_ = lean_byte_array_set(v_fst_3753_, v_i_3742_, v___x_3786_);
v___x_3788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3788_, 0, v_fst_3757_);
lean_ctor_set(v___x_3788_, 1, v_fst_3771_);
v___x_3789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3787_);
lean_ctor_set(v___x_3789_, 1, v___x_3788_);
v_a_3747_ = v___x_3789_;
goto v___jp_3746_;
}
}
v___jp_3790_:
{
uint8_t v___x_3792_; uint8_t v___x_3793_; 
v___x_3792_ = lean_byte_array_get(v_val_3738_, v_i_3742_);
v___x_3793_ = lean_uint8_dec_eq(v___x_3792_, v___x_3763_);
if (v___x_3793_ == 0)
{
goto v___jp_3783_;
}
else
{
if (v___y_3791_ == 0)
{
goto v___jp_3776_;
}
else
{
goto v___jp_3783_;
}
}
}
}
}
else
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3812_; 
lean_dec(v_fst_3757_);
lean_del_object(v___x_3755_);
lean_dec(v_fst_3753_);
lean_dec(v_i_3742_);
v_a_3805_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3812_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3812_ == 0)
{
v___x_3807_ = v___x_3769_;
v_isShared_3808_ = v_isSharedCheck_3812_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3769_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3812_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3810_; 
if (v_isShared_3808_ == 0)
{
v___x_3810_ = v___x_3807_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v_a_3805_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
return v___x_3810_;
}
}
}
}
}
}
}
v___jp_3746_:
{
lean_object* v___x_3748_; 
v___x_3748_ = lean_nat_add(v_i_3742_, v_step_3745_);
lean_dec(v_i_3742_);
v_b_3741_ = v_a_3747_;
v_i_3742_ = v___x_3748_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___redArg___boxed(lean_object* v___x_3816_, lean_object* v___y_3817_, lean_object* v___x_3818_, lean_object* v_val_3819_, lean_object* v___x_3820_, lean_object* v_range_3821_, lean_object* v_b_3822_, lean_object* v_i_3823_, lean_object* v___y_3824_){
_start:
{
uint8_t v___x_19361__boxed_3825_; lean_object* v_res_3826_; 
v___x_19361__boxed_3825_ = lean_unbox(v___x_3820_);
v_res_3826_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___redArg(v___x_3816_, v___y_3817_, v___x_3818_, v_val_3819_, v___x_19361__boxed_3825_, v_range_3821_, v_b_3822_, v_i_3823_);
lean_dec_ref(v_range_3821_);
lean_dec_ref(v_val_3819_);
lean_dec_ref(v___x_3818_);
lean_dec_ref(v___y_3817_);
lean_dec_ref(v___x_3816_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__22(lean_object* v_x_3827_, lean_object* v_x_3828_){
_start:
{
if (lean_obj_tag(v_x_3828_) == 0)
{
return v_x_3827_;
}
else
{
lean_object* v_key_3829_; lean_object* v_tail_3830_; lean_object* v___x_3831_; 
v_key_3829_ = lean_ctor_get(v_x_3828_, 0);
lean_inc(v_key_3829_);
v_tail_3830_ = lean_ctor_get(v_x_3828_, 2);
lean_inc(v_tail_3830_);
lean_dec_ref_known(v_x_3828_, 3);
v___x_3831_ = lean_array_push(v_x_3827_, v_key_3829_);
v_x_3827_ = v___x_3831_;
v_x_3828_ = v_tail_3830_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__23(lean_object* v_as_3833_, size_t v_i_3834_, size_t v_stop_3835_, lean_object* v_b_3836_){
_start:
{
uint8_t v___x_3837_; 
v___x_3837_ = lean_usize_dec_eq(v_i_3834_, v_stop_3835_);
if (v___x_3837_ == 0)
{
lean_object* v___x_3838_; lean_object* v___x_3839_; size_t v___x_3840_; size_t v___x_3841_; 
v___x_3838_ = lean_array_uget_borrowed(v_as_3833_, v_i_3834_);
lean_inc(v___x_3838_);
v___x_3839_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_ModuleTimes_save_spec__22(v_b_3836_, v___x_3838_);
v___x_3840_ = ((size_t)1ULL);
v___x_3841_ = lean_usize_add(v_i_3834_, v___x_3840_);
v_i_3834_ = v___x_3841_;
v_b_3836_ = v___x_3839_;
goto _start;
}
else
{
return v_b_3836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__23___boxed(lean_object* v_as_3843_, lean_object* v_i_3844_, lean_object* v_stop_3845_, lean_object* v_b_3846_){
_start:
{
size_t v_i_boxed_3847_; size_t v_stop_boxed_3848_; lean_object* v_res_3849_; 
v_i_boxed_3847_ = lean_unbox_usize(v_i_3844_);
lean_dec(v_i_3844_);
v_stop_boxed_3848_ = lean_unbox_usize(v_stop_3845_);
lean_dec(v_stop_3845_);
v_res_3849_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__23(v_as_3843_, v_i_boxed_3847_, v_stop_boxed_3848_, v_b_3846_);
lean_dec_ref(v_as_3843_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___redArg(lean_object* v___x_3850_, lean_object* v___x_3851_, lean_object* v___x_3852_, lean_object* v_range_3853_, lean_object* v_b_3854_, lean_object* v_i_3855_){
_start:
{
lean_object* v_stop_3857_; lean_object* v_step_3858_; lean_object* v_a_3860_; uint8_t v___x_3863_; 
v_stop_3857_ = lean_ctor_get(v_range_3853_, 1);
v_step_3858_ = lean_ctor_get(v_range_3853_, 2);
v___x_3863_ = lean_nat_dec_lt(v_i_3855_, v_stop_3857_);
if (v___x_3863_ == 0)
{
lean_object* v___x_3864_; 
lean_dec(v_i_3855_);
v___x_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3864_, 0, v_b_3854_);
return v___x_3864_;
}
else
{
uint8_t v___x_3865_; uint8_t v___x_3866_; uint8_t v___x_3867_; 
v___x_3865_ = lean_byte_array_get(v___x_3850_, v_i_3855_);
v___x_3866_ = 2;
v___x_3867_ = lean_uint8_dec_eq(v___x_3865_, v___x_3866_);
if (v___x_3867_ == 0)
{
v_a_3860_ = v_b_3854_;
goto v___jp_3859_;
}
else
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3868_ = lean_unsigned_to_nat(0u);
v___x_3869_ = lean_array_get_borrowed(v___x_3868_, v___x_3851_, v_i_3855_);
v___x_3870_ = lean_array_get_borrowed(v___x_3868_, v___x_3852_, v___x_3869_);
lean_inc(v___x_3870_);
v___x_3871_ = lean_array_set(v_b_3854_, v_i_3855_, v___x_3870_);
v_a_3860_ = v___x_3871_;
goto v___jp_3859_;
}
}
v___jp_3859_:
{
lean_object* v___x_3861_; 
v___x_3861_ = lean_nat_add(v_i_3855_, v_step_3858_);
lean_dec(v_i_3855_);
v_b_3854_ = v_a_3860_;
v_i_3855_ = v___x_3861_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___redArg___boxed(lean_object* v___x_3872_, lean_object* v___x_3873_, lean_object* v___x_3874_, lean_object* v_range_3875_, lean_object* v_b_3876_, lean_object* v_i_3877_, lean_object* v___y_3878_){
_start:
{
lean_object* v_res_3879_; 
v_res_3879_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___redArg(v___x_3872_, v___x_3873_, v___x_3874_, v_range_3875_, v_b_3876_, v_i_3877_);
lean_dec_ref(v_range_3875_);
lean_dec_ref(v___x_3874_);
lean_dec_ref(v___x_3873_);
lean_dec_ref(v___x_3872_);
return v_res_3879_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___redArg(lean_object* v_a_3880_, lean_object* v_x_3881_){
_start:
{
if (lean_obj_tag(v_x_3881_) == 0)
{
uint8_t v___x_3882_; 
v___x_3882_ = 0;
return v___x_3882_;
}
else
{
lean_object* v_key_3883_; lean_object* v_tail_3884_; uint8_t v___x_3885_; 
v_key_3883_ = lean_ctor_get(v_x_3881_, 0);
v_tail_3884_ = lean_ctor_get(v_x_3881_, 2);
v___x_3885_ = lean_string_dec_eq(v_key_3883_, v_a_3880_);
if (v___x_3885_ == 0)
{
v_x_3881_ = v_tail_3884_;
goto _start;
}
else
{
return v___x_3885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___redArg___boxed(lean_object* v_a_3887_, lean_object* v_x_3888_){
_start:
{
uint8_t v_res_3889_; lean_object* v_r_3890_; 
v_res_3889_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___redArg(v_a_3887_, v_x_3888_);
lean_dec(v_x_3888_);
lean_dec_ref(v_a_3887_);
v_r_3890_ = lean_box(v_res_3889_);
return v_r_3890_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9_spec__30___redArg(lean_object* v_x_3891_, lean_object* v_x_3892_){
_start:
{
if (lean_obj_tag(v_x_3892_) == 0)
{
return v_x_3891_;
}
else
{
lean_object* v_key_3893_; lean_object* v_value_3894_; lean_object* v_tail_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3918_; 
v_key_3893_ = lean_ctor_get(v_x_3892_, 0);
v_value_3894_ = lean_ctor_get(v_x_3892_, 1);
v_tail_3895_ = lean_ctor_get(v_x_3892_, 2);
v_isSharedCheck_3918_ = !lean_is_exclusive(v_x_3892_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3897_ = v_x_3892_;
v_isShared_3898_ = v_isSharedCheck_3918_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_tail_3895_);
lean_inc(v_value_3894_);
lean_inc(v_key_3893_);
lean_dec(v_x_3892_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3918_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3899_; uint64_t v___x_3900_; uint64_t v___x_3901_; uint64_t v___x_3902_; uint64_t v_fold_3903_; uint64_t v___x_3904_; uint64_t v___x_3905_; uint64_t v___x_3906_; size_t v___x_3907_; size_t v___x_3908_; size_t v___x_3909_; size_t v___x_3910_; size_t v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3914_; 
v___x_3899_ = lean_array_get_size(v_x_3891_);
v___x_3900_ = lean_string_hash(v_key_3893_);
v___x_3901_ = 32ULL;
v___x_3902_ = lean_uint64_shift_right(v___x_3900_, v___x_3901_);
v_fold_3903_ = lean_uint64_xor(v___x_3900_, v___x_3902_);
v___x_3904_ = 16ULL;
v___x_3905_ = lean_uint64_shift_right(v_fold_3903_, v___x_3904_);
v___x_3906_ = lean_uint64_xor(v_fold_3903_, v___x_3905_);
v___x_3907_ = lean_uint64_to_usize(v___x_3906_);
v___x_3908_ = lean_usize_of_nat(v___x_3899_);
v___x_3909_ = ((size_t)1ULL);
v___x_3910_ = lean_usize_sub(v___x_3908_, v___x_3909_);
v___x_3911_ = lean_usize_land(v___x_3907_, v___x_3910_);
v___x_3912_ = lean_array_uget_borrowed(v_x_3891_, v___x_3911_);
lean_inc(v___x_3912_);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 2, v___x_3912_);
v___x_3914_ = v___x_3897_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v_key_3893_);
lean_ctor_set(v_reuseFailAlloc_3917_, 1, v_value_3894_);
lean_ctor_set(v_reuseFailAlloc_3917_, 2, v___x_3912_);
v___x_3914_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
lean_object* v___x_3915_; 
v___x_3915_ = lean_array_uset(v_x_3891_, v___x_3911_, v___x_3914_);
v_x_3891_ = v___x_3915_;
v_x_3892_ = v_tail_3895_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9___redArg(lean_object* v_i_3919_, lean_object* v_source_3920_, lean_object* v_target_3921_){
_start:
{
lean_object* v___x_3922_; uint8_t v___x_3923_; 
v___x_3922_ = lean_array_get_size(v_source_3920_);
v___x_3923_ = lean_nat_dec_lt(v_i_3919_, v___x_3922_);
if (v___x_3923_ == 0)
{
lean_dec_ref(v_source_3920_);
lean_dec(v_i_3919_);
return v_target_3921_;
}
else
{
lean_object* v_es_3924_; lean_object* v___x_3925_; lean_object* v_source_3926_; lean_object* v_target_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v_es_3924_ = lean_array_fget(v_source_3920_, v_i_3919_);
v___x_3925_ = lean_box(0);
v_source_3926_ = lean_array_fset(v_source_3920_, v_i_3919_, v___x_3925_);
v_target_3927_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9_spec__30___redArg(v_target_3921_, v_es_3924_);
v___x_3928_ = lean_unsigned_to_nat(1u);
v___x_3929_ = lean_nat_add(v_i_3919_, v___x_3928_);
lean_dec(v_i_3919_);
v_i_3919_ = v___x_3929_;
v_source_3920_ = v_source_3926_;
v_target_3921_ = v_target_3927_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7___redArg(lean_object* v_data_3931_){
_start:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v_nbuckets_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3932_ = lean_array_get_size(v_data_3931_);
v___x_3933_ = lean_unsigned_to_nat(2u);
v_nbuckets_3934_ = lean_nat_mul(v___x_3932_, v___x_3933_);
v___x_3935_ = lean_unsigned_to_nat(0u);
v___x_3936_ = lean_box(0);
v___x_3937_ = lean_mk_array(v_nbuckets_3934_, v___x_3936_);
v___x_3938_ = lean_array_propagate_mark(v_data_3931_, v___x_3937_);
v___x_3939_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9___redArg(v___x_3935_, v_data_3931_, v___x_3938_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6___redArg(lean_object* v_m_3940_, lean_object* v_a_3941_, lean_object* v_b_3942_){
_start:
{
lean_object* v_size_3943_; lean_object* v_buckets_3944_; lean_object* v___x_3945_; uint64_t v___x_3946_; uint64_t v___x_3947_; uint64_t v___x_3948_; uint64_t v_fold_3949_; uint64_t v___x_3950_; uint64_t v___x_3951_; uint64_t v___x_3952_; size_t v___x_3953_; size_t v___x_3954_; size_t v___x_3955_; size_t v___x_3956_; size_t v___x_3957_; lean_object* v_bkt_3958_; uint8_t v___x_3959_; 
v_size_3943_ = lean_ctor_get(v_m_3940_, 0);
v_buckets_3944_ = lean_ctor_get(v_m_3940_, 1);
v___x_3945_ = lean_array_get_size(v_buckets_3944_);
v___x_3946_ = lean_string_hash(v_a_3941_);
v___x_3947_ = 32ULL;
v___x_3948_ = lean_uint64_shift_right(v___x_3946_, v___x_3947_);
v_fold_3949_ = lean_uint64_xor(v___x_3946_, v___x_3948_);
v___x_3950_ = 16ULL;
v___x_3951_ = lean_uint64_shift_right(v_fold_3949_, v___x_3950_);
v___x_3952_ = lean_uint64_xor(v_fold_3949_, v___x_3951_);
v___x_3953_ = lean_uint64_to_usize(v___x_3952_);
v___x_3954_ = lean_usize_of_nat(v___x_3945_);
v___x_3955_ = ((size_t)1ULL);
v___x_3956_ = lean_usize_sub(v___x_3954_, v___x_3955_);
v___x_3957_ = lean_usize_land(v___x_3953_, v___x_3956_);
v_bkt_3958_ = lean_array_uget_borrowed(v_buckets_3944_, v___x_3957_);
v___x_3959_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___redArg(v_a_3941_, v_bkt_3958_);
if (v___x_3959_ == 0)
{
lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3980_; 
lean_inc_ref(v_buckets_3944_);
lean_inc(v_size_3943_);
v_isSharedCheck_3980_ = !lean_is_exclusive(v_m_3940_);
if (v_isSharedCheck_3980_ == 0)
{
lean_object* v_unused_3981_; lean_object* v_unused_3982_; 
v_unused_3981_ = lean_ctor_get(v_m_3940_, 1);
lean_dec(v_unused_3981_);
v_unused_3982_ = lean_ctor_get(v_m_3940_, 0);
lean_dec(v_unused_3982_);
v___x_3961_ = v_m_3940_;
v_isShared_3962_ = v_isSharedCheck_3980_;
goto v_resetjp_3960_;
}
else
{
lean_dec(v_m_3940_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3980_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3963_; lean_object* v_size_x27_3964_; lean_object* v___x_3965_; lean_object* v_buckets_x27_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; uint8_t v___x_3972_; 
v___x_3963_ = lean_unsigned_to_nat(1u);
v_size_x27_3964_ = lean_nat_add(v_size_3943_, v___x_3963_);
lean_dec(v_size_3943_);
lean_inc(v_bkt_3958_);
v___x_3965_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3965_, 0, v_a_3941_);
lean_ctor_set(v___x_3965_, 1, v_b_3942_);
lean_ctor_set(v___x_3965_, 2, v_bkt_3958_);
v_buckets_x27_3966_ = lean_array_uset(v_buckets_3944_, v___x_3957_, v___x_3965_);
v___x_3967_ = lean_unsigned_to_nat(4u);
v___x_3968_ = lean_nat_mul(v_size_x27_3964_, v___x_3967_);
v___x_3969_ = lean_unsigned_to_nat(3u);
v___x_3970_ = lean_nat_div(v___x_3968_, v___x_3969_);
lean_dec(v___x_3968_);
v___x_3971_ = lean_array_get_size(v_buckets_x27_3966_);
v___x_3972_ = lean_nat_dec_le(v___x_3970_, v___x_3971_);
lean_dec(v___x_3970_);
if (v___x_3972_ == 0)
{
lean_object* v_val_3973_; lean_object* v___x_3975_; 
v_val_3973_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7___redArg(v_buckets_x27_3966_);
if (v_isShared_3962_ == 0)
{
lean_ctor_set(v___x_3961_, 1, v_val_3973_);
lean_ctor_set(v___x_3961_, 0, v_size_x27_3964_);
v___x_3975_ = v___x_3961_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_size_x27_3964_);
lean_ctor_set(v_reuseFailAlloc_3976_, 1, v_val_3973_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
else
{
lean_object* v___x_3978_; 
if (v_isShared_3962_ == 0)
{
lean_ctor_set(v___x_3961_, 1, v_buckets_x27_3966_);
lean_ctor_set(v___x_3961_, 0, v_size_x27_3964_);
v___x_3978_ = v___x_3961_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_size_x27_3964_);
lean_ctor_set(v_reuseFailAlloc_3979_, 1, v_buckets_x27_3966_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
else
{
lean_dec(v_b_3942_);
lean_dec_ref(v_a_3941_);
return v_m_3940_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7_spec__9(lean_object* v___y_3983_, lean_object* v___x_3984_, lean_object* v___x_3985_, lean_object* v___x_3986_, lean_object* v_val_3987_, lean_object* v_as_3988_, size_t v_sz_3989_, size_t v_i_3990_, lean_object* v_b_3991_){
_start:
{
lean_object* v_a_3994_; uint8_t v___x_3998_; 
v___x_3998_ = lean_usize_dec_lt(v_i_3990_, v_sz_3989_);
if (v___x_3998_ == 0)
{
lean_object* v___x_3999_; 
lean_dec(v___x_3986_);
lean_dec_ref(v___x_3985_);
lean_dec_ref(v___x_3984_);
lean_dec_ref(v___y_3983_);
v___x_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3999_, 0, v_b_3991_);
return v___x_3999_;
}
else
{
lean_object* v_fst_4000_; lean_object* v_snd_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4032_; 
v_fst_4000_ = lean_ctor_get(v_b_3991_, 0);
v_snd_4001_ = lean_ctor_get(v_b_3991_, 1);
v_isSharedCheck_4032_ = !lean_is_exclusive(v_b_3991_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4003_ = v_b_3991_;
v_isShared_4004_ = v_isSharedCheck_4032_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_snd_4001_);
lean_inc(v_fst_4000_);
lean_dec(v_b_3991_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4032_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v_a_4011_; lean_object* v___x_4012_; lean_object* v___f_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
v___x_4009_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0));
v___x_4010_ = lean_unsigned_to_nat(0u);
v_a_4011_ = lean_array_uget_borrowed(v_as_3988_, v_i_3990_);
v___x_4012_ = l_Lake_encodeModuleName(v_a_4011_);
lean_inc_ref(v___x_4012_);
lean_inc_ref(v___y_3983_);
v___f_4013_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4013_, 0, v___x_4009_);
lean_closure_set(v___f_4013_, 1, v___y_3983_);
lean_closure_set(v___f_4013_, 2, v___x_4010_);
lean_closure_set(v___f_4013_, 3, v___x_4012_);
v___x_4014_ = lean_array_get_size(v___y_3983_);
v___x_4015_ = l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(v___x_4014_, v___f_4013_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v___x_4016_; lean_object* v___f_4017_; lean_object* v___x_4018_; 
v___x_4016_ = ((lean_object*)(l_Lake_instInhabitedModuleTimeRow_default));
lean_inc_ref(v___x_4012_);
lean_inc_ref(v___x_3985_);
lean_inc_ref(v___x_3984_);
v___f_4017_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1___boxed), 6, 5);
lean_closure_set(v___f_4017_, 0, v___x_4016_);
lean_closure_set(v___f_4017_, 1, v___x_3984_);
lean_closure_set(v___f_4017_, 2, v___x_3985_);
lean_closure_set(v___f_4017_, 3, v___x_4012_);
lean_closure_set(v___f_4017_, 4, v___x_4010_);
lean_inc(v___x_3986_);
v___x_4018_ = l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(v___x_3986_, v___f_4017_);
if (lean_obj_tag(v___x_4018_) == 0)
{
lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
lean_del_object(v___x_4003_);
v___x_4019_ = lean_box(0);
v___x_4020_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6___redArg(v_snd_4001_, v___x_4012_, v___x_4019_);
v___x_4021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4021_, 0, v_fst_4000_);
lean_ctor_set(v___x_4021_, 1, v___x_4020_);
v_a_3994_ = v___x_4021_;
goto v___jp_3993_;
}
else
{
lean_object* v_val_4022_; uint8_t v___x_4023_; uint8_t v___x_4024_; uint8_t v___x_4025_; 
lean_dec_ref(v___x_4012_);
v_val_4022_ = lean_ctor_get(v___x_4018_, 0);
lean_inc(v_val_4022_);
lean_dec_ref_known(v___x_4018_, 1);
v___x_4023_ = 0;
v___x_4024_ = lean_byte_array_get(v_fst_4000_, v_val_4022_);
v___x_4025_ = lean_uint8_dec_eq(v___x_4024_, v___x_4023_);
if (v___x_4025_ == 0)
{
lean_dec(v_val_4022_);
goto v___jp_4005_;
}
else
{
uint8_t v___x_4026_; uint8_t v___x_4027_; 
v___x_4026_ = lean_byte_array_get(v_val_3987_, v_val_4022_);
v___x_4027_ = lean_uint8_dec_eq(v___x_4026_, v___x_4023_);
if (v___x_4027_ == 0)
{
uint8_t v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
lean_del_object(v___x_4003_);
v___x_4028_ = 3;
v___x_4029_ = lean_byte_array_set(v_fst_4000_, v_val_4022_, v___x_4028_);
lean_dec(v_val_4022_);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4029_);
lean_ctor_set(v___x_4030_, 1, v_snd_4001_);
v_a_3994_ = v___x_4030_;
goto v___jp_3993_;
}
else
{
lean_dec(v_val_4022_);
goto v___jp_4005_;
}
}
}
}
else
{
lean_object* v___x_4031_; 
lean_dec_ref_known(v___x_4015_, 1);
lean_dec_ref(v___x_4012_);
lean_del_object(v___x_4003_);
v___x_4031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4031_, 0, v_fst_4000_);
lean_ctor_set(v___x_4031_, 1, v_snd_4001_);
v_a_3994_ = v___x_4031_;
goto v___jp_3993_;
}
v___jp_4005_:
{
lean_object* v___x_4007_; 
if (v_isShared_4004_ == 0)
{
v___x_4007_ = v___x_4003_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_fst_4000_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v_snd_4001_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
v_a_3994_ = v___x_4007_;
goto v___jp_3993_;
}
}
}
}
v___jp_3993_:
{
size_t v___x_3995_; size_t v___x_3996_; 
v___x_3995_ = ((size_t)1ULL);
v___x_3996_ = lean_usize_add(v_i_3990_, v___x_3995_);
v_i_3990_ = v___x_3996_;
v_b_3991_ = v_a_3994_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7_spec__9___boxed(lean_object* v___y_4033_, lean_object* v___x_4034_, lean_object* v___x_4035_, lean_object* v___x_4036_, lean_object* v_val_4037_, lean_object* v_as_4038_, lean_object* v_sz_4039_, lean_object* v_i_4040_, lean_object* v_b_4041_, lean_object* v___y_4042_){
_start:
{
size_t v_sz_boxed_4043_; size_t v_i_boxed_4044_; lean_object* v_res_4045_; 
v_sz_boxed_4043_ = lean_unbox_usize(v_sz_4039_);
lean_dec(v_sz_4039_);
v_i_boxed_4044_ = lean_unbox_usize(v_i_4040_);
lean_dec(v_i_4040_);
v_res_4045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7_spec__9(v___y_4033_, v___x_4034_, v___x_4035_, v___x_4036_, v_val_4037_, v_as_4038_, v_sz_boxed_4043_, v_i_boxed_4044_, v_b_4041_);
lean_dec_ref(v_as_4038_);
lean_dec_ref(v_val_4037_);
return v_res_4045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7(lean_object* v___y_4046_, lean_object* v___x_4047_, lean_object* v___x_4048_, lean_object* v___x_4049_, lean_object* v_val_4050_, lean_object* v_as_4051_, size_t v_sz_4052_, size_t v_i_4053_, lean_object* v_b_4054_){
_start:
{
lean_object* v_a_4057_; uint8_t v___x_4061_; 
v___x_4061_ = lean_usize_dec_lt(v_i_4053_, v_sz_4052_);
if (v___x_4061_ == 0)
{
lean_object* v___x_4062_; 
lean_dec(v___x_4049_);
lean_dec_ref(v___x_4048_);
lean_dec_ref(v___x_4047_);
lean_dec_ref(v___y_4046_);
v___x_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4062_, 0, v_b_4054_);
return v___x_4062_;
}
else
{
lean_object* v_fst_4063_; lean_object* v_snd_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4095_; 
v_fst_4063_ = lean_ctor_get(v_b_4054_, 0);
v_snd_4064_ = lean_ctor_get(v_b_4054_, 1);
v_isSharedCheck_4095_ = !lean_is_exclusive(v_b_4054_);
if (v_isSharedCheck_4095_ == 0)
{
v___x_4066_ = v_b_4054_;
v_isShared_4067_ = v_isSharedCheck_4095_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_snd_4064_);
lean_inc(v_fst_4063_);
lean_dec(v_b_4054_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4095_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v_a_4074_; lean_object* v___x_4075_; lean_object* v___f_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; 
v___x_4072_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg___closed__0));
v___x_4073_ = lean_unsigned_to_nat(0u);
v_a_4074_ = lean_array_uget_borrowed(v_as_4051_, v_i_4053_);
v___x_4075_ = l_Lake_encodeModuleName(v_a_4074_);
lean_inc_ref(v___x_4075_);
lean_inc_ref(v___y_4046_);
v___f_4076_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4076_, 0, v___x_4072_);
lean_closure_set(v___f_4076_, 1, v___y_4046_);
lean_closure_set(v___f_4076_, 2, v___x_4073_);
lean_closure_set(v___f_4076_, 3, v___x_4075_);
v___x_4077_ = lean_array_get_size(v___y_4046_);
v___x_4078_ = l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(v___x_4077_, v___f_4076_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v___x_4079_; lean_object* v___f_4080_; lean_object* v___x_4081_; 
v___x_4079_ = ((lean_object*)(l_Lake_instInhabitedModuleTimeRow_default));
lean_inc_ref(v___x_4075_);
lean_inc_ref(v___x_4048_);
lean_inc_ref(v___x_4047_);
v___f_4080_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___lam__1___boxed), 6, 5);
lean_closure_set(v___f_4080_, 0, v___x_4079_);
lean_closure_set(v___f_4080_, 1, v___x_4047_);
lean_closure_set(v___f_4080_, 2, v___x_4048_);
lean_closure_set(v___f_4080_, 3, v___x_4075_);
lean_closure_set(v___f_4080_, 4, v___x_4073_);
lean_inc(v___x_4049_);
v___x_4081_ = l___private_Lake_Build_ModuleTimes_0__Lake_bsearch(v___x_4049_, v___f_4080_);
if (lean_obj_tag(v___x_4081_) == 0)
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
lean_del_object(v___x_4066_);
v___x_4082_ = lean_box(0);
v___x_4083_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6___redArg(v_snd_4064_, v___x_4075_, v___x_4082_);
v___x_4084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4084_, 0, v_fst_4063_);
lean_ctor_set(v___x_4084_, 1, v___x_4083_);
v_a_4057_ = v___x_4084_;
goto v___jp_4056_;
}
else
{
lean_object* v_val_4085_; uint8_t v___x_4086_; uint8_t v___x_4087_; uint8_t v___x_4088_; 
lean_dec_ref(v___x_4075_);
v_val_4085_ = lean_ctor_get(v___x_4081_, 0);
lean_inc(v_val_4085_);
lean_dec_ref_known(v___x_4081_, 1);
v___x_4086_ = 0;
v___x_4087_ = lean_byte_array_get(v_fst_4063_, v_val_4085_);
v___x_4088_ = lean_uint8_dec_eq(v___x_4087_, v___x_4086_);
if (v___x_4088_ == 0)
{
lean_dec(v_val_4085_);
goto v___jp_4068_;
}
else
{
uint8_t v___x_4089_; uint8_t v___x_4090_; 
v___x_4089_ = lean_byte_array_get(v_val_4050_, v_val_4085_);
v___x_4090_ = lean_uint8_dec_eq(v___x_4089_, v___x_4086_);
if (v___x_4090_ == 0)
{
uint8_t v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; 
lean_del_object(v___x_4066_);
v___x_4091_ = 3;
v___x_4092_ = lean_byte_array_set(v_fst_4063_, v_val_4085_, v___x_4091_);
lean_dec(v_val_4085_);
v___x_4093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4093_, 0, v___x_4092_);
lean_ctor_set(v___x_4093_, 1, v_snd_4064_);
v_a_4057_ = v___x_4093_;
goto v___jp_4056_;
}
else
{
lean_dec(v_val_4085_);
goto v___jp_4068_;
}
}
}
}
else
{
lean_object* v___x_4094_; 
lean_dec_ref_known(v___x_4078_, 1);
lean_dec_ref(v___x_4075_);
lean_del_object(v___x_4066_);
v___x_4094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4094_, 0, v_fst_4063_);
lean_ctor_set(v___x_4094_, 1, v_snd_4064_);
v_a_4057_ = v___x_4094_;
goto v___jp_4056_;
}
v___jp_4068_:
{
lean_object* v___x_4070_; 
if (v_isShared_4067_ == 0)
{
v___x_4070_ = v___x_4066_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_fst_4063_);
lean_ctor_set(v_reuseFailAlloc_4071_, 1, v_snd_4064_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
v_a_4057_ = v___x_4070_;
goto v___jp_4056_;
}
}
}
}
v___jp_4056_:
{
size_t v___x_4058_; size_t v___x_4059_; lean_object* v___x_4060_; 
v___x_4058_ = ((size_t)1ULL);
v___x_4059_ = lean_usize_add(v_i_4053_, v___x_4058_);
v___x_4060_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7_spec__9(v___y_4046_, v___x_4047_, v___x_4048_, v___x_4049_, v_val_4050_, v_as_4051_, v_sz_4052_, v___x_4059_, v_a_4057_);
return v___x_4060_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7___boxed(lean_object* v___y_4096_, lean_object* v___x_4097_, lean_object* v___x_4098_, lean_object* v___x_4099_, lean_object* v_val_4100_, lean_object* v_as_4101_, lean_object* v_sz_4102_, lean_object* v_i_4103_, lean_object* v_b_4104_, lean_object* v___y_4105_){
_start:
{
size_t v_sz_boxed_4106_; size_t v_i_boxed_4107_; lean_object* v_res_4108_; 
v_sz_boxed_4106_ = lean_unbox_usize(v_sz_4102_);
lean_dec(v_sz_4102_);
v_i_boxed_4107_ = lean_unbox_usize(v_i_4103_);
lean_dec(v_i_4103_);
v_res_4108_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7(v___y_4096_, v___x_4097_, v___x_4098_, v___x_4099_, v_val_4100_, v_as_4101_, v_sz_boxed_4106_, v_i_boxed_4107_, v_b_4104_);
lean_dec_ref(v_as_4101_);
lean_dec_ref(v_val_4100_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__10(lean_object* v___y_4109_, lean_object* v___x_4110_, lean_object* v___x_4111_, lean_object* v___x_4112_, lean_object* v_val_4113_, lean_object* v_as_4114_, size_t v_sz_4115_, size_t v_i_4116_, lean_object* v_b_4117_){
_start:
{
uint8_t v___x_4119_; 
v___x_4119_ = lean_usize_dec_lt(v_i_4116_, v_sz_4115_);
if (v___x_4119_ == 0)
{
lean_object* v___x_4120_; 
lean_dec(v___x_4112_);
lean_dec_ref(v___x_4111_);
lean_dec_ref(v___x_4110_);
lean_dec_ref(v___y_4109_);
v___x_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4120_, 0, v_b_4117_);
return v___x_4120_;
}
else
{
lean_object* v_a_4121_; lean_object* v_snd_4122_; lean_object* v_fst_4123_; lean_object* v_snd_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4148_; 
v_a_4121_ = lean_array_uget_borrowed(v_as_4114_, v_i_4116_);
v_snd_4122_ = lean_ctor_get(v_a_4121_, 1);
v_fst_4123_ = lean_ctor_get(v_b_4117_, 0);
v_snd_4124_ = lean_ctor_get(v_b_4117_, 1);
v_isSharedCheck_4148_ = !lean_is_exclusive(v_b_4117_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4126_ = v_b_4117_;
v_isShared_4127_ = v_isSharedCheck_4148_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_snd_4124_);
lean_inc(v_fst_4123_);
lean_dec(v_b_4117_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4148_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v_imports_4128_; lean_object* v___x_4130_; 
v_imports_4128_ = lean_ctor_get(v_snd_4122_, 2);
if (v_isShared_4127_ == 0)
{
v___x_4130_ = v___x_4126_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v_fst_4123_);
lean_ctor_set(v_reuseFailAlloc_4147_, 1, v_snd_4124_);
v___x_4130_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
size_t v_sz_4131_; size_t v___x_4132_; lean_object* v___x_4133_; 
v_sz_4131_ = lean_array_size(v_imports_4128_);
v___x_4132_ = ((size_t)0ULL);
lean_inc(v___x_4112_);
lean_inc_ref(v___x_4111_);
lean_inc_ref(v___x_4110_);
lean_inc_ref(v___y_4109_);
v___x_4133_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__7(v___y_4109_, v___x_4110_, v___x_4111_, v___x_4112_, v_val_4113_, v_imports_4128_, v_sz_4131_, v___x_4132_, v___x_4130_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; lean_object* v_fst_4135_; lean_object* v_snd_4136_; lean_object* v___x_4138_; uint8_t v_isShared_4139_; uint8_t v_isSharedCheck_4146_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_a_4134_);
lean_dec_ref_known(v___x_4133_, 1);
v_fst_4135_ = lean_ctor_get(v_a_4134_, 0);
v_snd_4136_ = lean_ctor_get(v_a_4134_, 1);
v_isSharedCheck_4146_ = !lean_is_exclusive(v_a_4134_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4138_ = v_a_4134_;
v_isShared_4139_ = v_isSharedCheck_4146_;
goto v_resetjp_4137_;
}
else
{
lean_inc(v_snd_4136_);
lean_inc(v_fst_4135_);
lean_dec(v_a_4134_);
v___x_4138_ = lean_box(0);
v_isShared_4139_ = v_isSharedCheck_4146_;
goto v_resetjp_4137_;
}
v_resetjp_4137_:
{
lean_object* v___x_4141_; 
if (v_isShared_4139_ == 0)
{
v___x_4141_ = v___x_4138_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v_fst_4135_);
lean_ctor_set(v_reuseFailAlloc_4145_, 1, v_snd_4136_);
v___x_4141_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
size_t v___x_4142_; size_t v___x_4143_; 
v___x_4142_ = ((size_t)1ULL);
v___x_4143_ = lean_usize_add(v_i_4116_, v___x_4142_);
v_i_4116_ = v___x_4143_;
v_b_4117_ = v___x_4141_;
goto _start;
}
}
}
else
{
lean_dec(v___x_4112_);
lean_dec_ref(v___x_4111_);
lean_dec_ref(v___x_4110_);
lean_dec_ref(v___y_4109_);
return v___x_4133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__10___boxed(lean_object* v___y_4149_, lean_object* v___x_4150_, lean_object* v___x_4151_, lean_object* v___x_4152_, lean_object* v_val_4153_, lean_object* v_as_4154_, lean_object* v_sz_4155_, lean_object* v_i_4156_, lean_object* v_b_4157_, lean_object* v___y_4158_){
_start:
{
size_t v_sz_boxed_4159_; size_t v_i_boxed_4160_; lean_object* v_res_4161_; 
v_sz_boxed_4159_ = lean_unbox_usize(v_sz_4155_);
lean_dec(v_sz_4155_);
v_i_boxed_4160_ = lean_unbox_usize(v_i_4156_);
lean_dec(v_i_4156_);
v_res_4161_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__10(v___y_4149_, v___x_4150_, v___x_4151_, v___x_4152_, v_val_4153_, v_as_4154_, v_sz_boxed_4159_, v_i_boxed_4160_, v_b_4157_);
lean_dec_ref(v_as_4154_);
lean_dec_ref(v_val_4153_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__5(lean_object* v_val_4162_, lean_object* v_as_4163_, size_t v_sz_4164_, size_t v_i_4165_, lean_object* v_b_4166_){
_start:
{
lean_object* v_a_4169_; uint8_t v___x_4173_; 
v___x_4173_ = lean_usize_dec_lt(v_i_4165_, v_sz_4164_);
if (v___x_4173_ == 0)
{
lean_object* v___x_4174_; 
v___x_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4174_, 0, v_b_4166_);
return v___x_4174_;
}
else
{
uint8_t v___x_4175_; lean_object* v_a_4176_; uint8_t v___x_4177_; uint8_t v___x_4178_; 
v___x_4175_ = 0;
v_a_4176_ = lean_array_uget_borrowed(v_as_4163_, v_i_4165_);
v___x_4177_ = lean_byte_array_get(v_b_4166_, v_a_4176_);
v___x_4178_ = lean_uint8_dec_eq(v___x_4177_, v___x_4175_);
if (v___x_4178_ == 0)
{
v_a_4169_ = v_b_4166_;
goto v___jp_4168_;
}
else
{
uint8_t v___x_4179_; uint8_t v___x_4180_; 
v___x_4179_ = lean_byte_array_get(v_val_4162_, v_a_4176_);
v___x_4180_ = lean_uint8_dec_eq(v___x_4179_, v___x_4175_);
if (v___x_4180_ == 0)
{
uint8_t v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = 3;
v___x_4182_ = lean_byte_array_set(v_b_4166_, v_a_4176_, v___x_4181_);
v_a_4169_ = v___x_4182_;
goto v___jp_4168_;
}
else
{
v_a_4169_ = v_b_4166_;
goto v___jp_4168_;
}
}
}
v___jp_4168_:
{
size_t v___x_4170_; size_t v___x_4171_; 
v___x_4170_ = ((size_t)1ULL);
v___x_4171_ = lean_usize_add(v_i_4165_, v___x_4170_);
v_i_4165_ = v___x_4171_;
v_b_4166_ = v_a_4169_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__5___boxed(lean_object* v_val_4183_, lean_object* v_as_4184_, lean_object* v_sz_4185_, lean_object* v_i_4186_, lean_object* v_b_4187_, lean_object* v___y_4188_){
_start:
{
size_t v_sz_boxed_4189_; size_t v_i_boxed_4190_; lean_object* v_res_4191_; 
v_sz_boxed_4189_ = lean_unbox_usize(v_sz_4185_);
lean_dec(v_sz_4185_);
v_i_boxed_4190_ = lean_unbox_usize(v_i_4186_);
lean_dec(v_i_4186_);
v_res_4191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__5(v_val_4183_, v_as_4184_, v_sz_boxed_4189_, v_i_boxed_4190_, v_b_4187_);
lean_dec_ref(v_as_4184_);
lean_dec_ref(v_val_4183_);
return v_res_4191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___redArg(lean_object* v___x_4192_, lean_object* v___x_4193_, lean_object* v_val_4194_, lean_object* v_range_4195_, lean_object* v_b_4196_, lean_object* v_i_4197_){
_start:
{
lean_object* v_stop_4199_; lean_object* v_step_4200_; lean_object* v_a_4202_; uint8_t v___x_4205_; 
v_stop_4199_ = lean_ctor_get(v_range_4195_, 1);
v_step_4200_ = lean_ctor_get(v_range_4195_, 2);
v___x_4205_ = lean_nat_dec_lt(v_i_4197_, v_stop_4199_);
if (v___x_4205_ == 0)
{
lean_object* v___x_4206_; 
lean_dec(v_i_4197_);
v___x_4206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4206_, 0, v_b_4196_);
return v___x_4206_;
}
else
{
uint8_t v___x_4207_; uint8_t v___x_4208_; uint8_t v___x_4209_; 
v___x_4207_ = lean_byte_array_get(v_b_4196_, v_i_4197_);
v___x_4208_ = 1;
v___x_4209_ = lean_uint8_dec_eq(v___x_4207_, v___x_4208_);
if (v___x_4209_ == 0)
{
v_a_4202_ = v_b_4196_;
goto v___jp_4201_;
}
else
{
lean_object* v___x_4210_; lean_object* v_impStart_4211_; lean_object* v_impStop_4212_; lean_object* v___x_4213_; size_t v_sz_4214_; size_t v___x_4215_; lean_object* v___x_4216_; 
v___x_4210_ = lean_array_fget_borrowed(v___x_4192_, v_i_4197_);
v_impStart_4211_ = lean_ctor_get(v___x_4210_, 5);
v_impStop_4212_ = lean_ctor_get(v___x_4210_, 6);
lean_inc(v_impStop_4212_);
lean_inc(v_impStart_4211_);
v___x_4213_ = l___private_Lake_Build_ModuleTimes_0__Lake_importIndices(v___x_4193_, v_impStart_4211_, v_impStop_4212_);
v_sz_4214_ = lean_array_size(v___x_4213_);
v___x_4215_ = ((size_t)0ULL);
v___x_4216_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__5(v_val_4194_, v___x_4213_, v_sz_4214_, v___x_4215_, v_b_4196_);
lean_dec_ref(v___x_4213_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v_a_4217_; 
v_a_4217_ = lean_ctor_get(v___x_4216_, 0);
lean_inc(v_a_4217_);
lean_dec_ref_known(v___x_4216_, 1);
v_a_4202_ = v_a_4217_;
goto v___jp_4201_;
}
else
{
lean_dec(v_i_4197_);
return v___x_4216_;
}
}
}
v___jp_4201_:
{
lean_object* v___x_4203_; 
v___x_4203_ = lean_nat_add(v_i_4197_, v_step_4200_);
lean_dec(v_i_4197_);
v_b_4196_ = v_a_4202_;
v_i_4197_ = v___x_4203_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___redArg___boxed(lean_object* v___x_4218_, lean_object* v___x_4219_, lean_object* v_val_4220_, lean_object* v_range_4221_, lean_object* v_b_4222_, lean_object* v_i_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v_res_4225_; 
v_res_4225_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___redArg(v___x_4218_, v___x_4219_, v_val_4220_, v_range_4221_, v_b_4222_, v_i_4223_);
lean_dec_ref(v_range_4221_);
lean_dec_ref(v_val_4220_);
lean_dec_ref(v___x_4219_);
lean_dec_ref(v___x_4218_);
return v_res_4225_;
}
}
static lean_object* _init_l_Lake_ModuleTimes_save___closed__1(void){
_start:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4227_ = lean_box(0);
v___x_4228_ = lean_unsigned_to_nat(16u);
v___x_4229_ = lean_mk_array(v___x_4228_, v___x_4227_);
return v___x_4229_;
}
}
static lean_object* _init_l_Lake_ModuleTimes_save___closed__2(void){
_start:
{
lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4230_ = lean_obj_once(&l_Lake_ModuleTimes_save___closed__1, &l_Lake_ModuleTimes_save___closed__1_once, _init_l_Lake_ModuleTimes_save___closed__1);
v___x_4231_ = lean_unsigned_to_nat(0u);
v___x_4232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4232_, 0, v___x_4231_);
lean_ctor_set(v___x_4232_, 1, v___x_4230_);
return v___x_4232_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save(lean_object* v_logger_4235_, lean_object* v_self_4236_, lean_object* v_sourceOf_4237_){
_start:
{
lean_object* v_path_4239_; lean_object* v_stamp_x3f_4240_; lean_object* v_file_4241_; lean_object* v_new_4242_; lean_object* v_seen_4243_; lean_object* v___x_4244_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; size_t v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; lean_object* v___y_4355_; lean_object* v___y_4356_; size_t v___y_4357_; lean_object* v___y_4358_; lean_object* v___y_4359_; lean_object* v___y_4360_; lean_object* v___y_4361_; lean_object* v___y_4362_; lean_object* v___y_4363_; lean_object* v___y_4364_; lean_object* v___y_4367_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4371_; size_t v___y_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; lean_object* v___y_4386_; lean_object* v___y_4387_; lean_object* v___y_4388_; lean_object* v___y_4389_; lean_object* v___y_4390_; size_t v___y_4391_; lean_object* v___y_4392_; lean_object* v___y_4393_; uint8_t v___x_4398_; lean_object* v___y_4400_; lean_object* v___y_4401_; lean_object* v___y_4402_; lean_object* v___y_4403_; lean_object* v___y_4404_; lean_object* v___y_4405_; lean_object* v___y_4406_; lean_object* v___y_4476_; lean_object* v___y_4477_; lean_object* v___y_4478_; lean_object* v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; lean_object* v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4488_; lean_object* v___y_4489_; lean_object* v___y_4490_; lean_object* v___y_4491_; lean_object* v___y_4492_; lean_object* v___y_4493_; lean_object* v___y_4494_; lean_object* v___y_4495_; lean_object* v___y_4496_; lean_object* v___y_4497_; lean_object* v___y_4500_; lean_object* v___y_4501_; lean_object* v___y_4502_; lean_object* v___y_4503_; lean_object* v___y_4504_; lean_object* v___y_4505_; lean_object* v_file_4512_; 
v_path_4239_ = lean_ctor_get(v_self_4236_, 0);
lean_inc_ref(v_path_4239_);
v_stamp_x3f_4240_ = lean_ctor_get(v_self_4236_, 1);
lean_inc(v_stamp_x3f_4240_);
v_file_4241_ = lean_ctor_get(v_self_4236_, 2);
lean_inc_ref(v_file_4241_);
v_new_4242_ = lean_ctor_get(v_self_4236_, 4);
lean_inc(v_new_4242_);
v_seen_4243_ = lean_ctor_get(v_self_4236_, 5);
lean_inc(v_seen_4243_);
lean_dec_ref(v_self_4236_);
v___x_4244_ = lean_st_ref_get(v_new_4242_);
lean_dec(v_new_4242_);
v___x_4398_ = l_List_isEmpty___redArg(v___x_4244_);
if (v___x_4398_ == 0)
{
lean_object* v___x_4527_; 
v___x_4527_ = l_Lake_moduleTimesStamp_x3f(v_path_4239_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; uint8_t v___x_4529_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
lean_inc(v_a_4528_);
lean_dec_ref_known(v___x_4527_, 1);
v___x_4529_ = l_instBEqOption_beq___at___00Lake_ModuleTimes_save_spec__27(v_a_4528_, v_stamp_x3f_4240_);
lean_dec(v_stamp_x3f_4240_);
lean_dec(v_a_4528_);
if (v___x_4529_ == 0)
{
lean_object* v___x_4530_; 
lean_dec_ref(v_file_4241_);
lean_inc_ref(v_path_4239_);
v___x_4530_ = l_Lake_readModuleTimes(v_logger_4235_, v_path_4239_);
if (lean_obj_tag(v___x_4530_) == 0)
{
lean_object* v_a_4531_; 
v_a_4531_ = lean_ctor_get(v___x_4530_, 0);
lean_inc(v_a_4531_);
lean_dec_ref_known(v___x_4530_, 1);
v_file_4512_ = v_a_4531_;
goto v___jp_4511_;
}
else
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4539_; 
lean_dec(v___x_4244_);
lean_dec(v_seen_4243_);
lean_dec_ref(v_path_4239_);
lean_dec_ref(v_sourceOf_4237_);
v_a_4532_ = lean_ctor_get(v___x_4530_, 0);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___x_4530_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4534_ = v___x_4530_;
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4530_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4537_; 
if (v_isShared_4535_ == 0)
{
v___x_4537_ = v___x_4534_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_a_4532_);
v___x_4537_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
return v___x_4537_;
}
}
}
}
else
{
lean_dec_ref(v_logger_4235_);
v_file_4512_ = v_file_4241_;
goto v___jp_4511_;
}
}
else
{
lean_object* v_a_4540_; lean_object* v___x_4542_; uint8_t v_isShared_4543_; uint8_t v_isSharedCheck_4547_; 
lean_dec(v___x_4244_);
lean_dec(v_seen_4243_);
lean_dec_ref(v_file_4241_);
lean_dec(v_stamp_x3f_4240_);
lean_dec_ref(v_path_4239_);
lean_dec_ref(v_sourceOf_4237_);
lean_dec_ref(v_logger_4235_);
v_a_4540_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4542_ = v___x_4527_;
v_isShared_4543_ = v_isSharedCheck_4547_;
goto v_resetjp_4541_;
}
else
{
lean_inc(v_a_4540_);
lean_dec(v___x_4527_);
v___x_4542_ = lean_box(0);
v_isShared_4543_ = v_isSharedCheck_4547_;
goto v_resetjp_4541_;
}
v_resetjp_4541_:
{
lean_object* v___x_4545_; 
if (v_isShared_4543_ == 0)
{
v___x_4545_ = v___x_4542_;
goto v_reusejp_4544_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v_a_4540_);
v___x_4545_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4544_;
}
v_reusejp_4544_:
{
return v___x_4545_;
}
}
}
}
else
{
lean_object* v___x_4548_; lean_object* v___x_4549_; 
lean_dec(v___x_4244_);
lean_dec(v_seen_4243_);
lean_dec_ref(v_file_4241_);
lean_dec(v_stamp_x3f_4240_);
lean_dec_ref(v_path_4239_);
lean_dec_ref(v_sourceOf_4237_);
lean_dec_ref(v_logger_4235_);
v___x_4548_ = lean_unsigned_to_nat(0u);
v___x_4549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4548_);
return v___x_4549_;
}
v___jp_4245_:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; 
v___x_4257_ = lean_array_get_size(v___y_4249_);
v___x_4258_ = lean_nat_add(v___y_4253_, v___x_4257_);
v___x_4259_ = lean_array_get_size(v___y_4256_);
v___x_4260_ = lean_nat_add(v___x_4258_, v___x_4259_);
lean_dec(v___x_4258_);
v___x_4261_ = lean_mk_empty_array_with_capacity(v___x_4260_);
lean_inc_n(v___x_4260_, 3);
lean_inc(v___y_4253_);
v___x_4262_ = lean_mk_array(v___y_4253_, v___x_4260_);
v___x_4263_ = lean_mk_array(v___x_4257_, v___x_4260_);
v___x_4264_ = lean_mk_array(v___x_4259_, v___x_4260_);
lean_inc_n(v___y_4247_, 3);
v___x_4265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___y_4247_);
lean_ctor_set(v___x_4265_, 1, v___y_4247_);
v___x_4266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4266_, 0, v___y_4247_);
lean_ctor_set(v___x_4266_, 1, v___x_4265_);
v___x_4267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4264_);
lean_ctor_set(v___x_4267_, 1, v___x_4266_);
v___x_4268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4263_);
lean_ctor_set(v___x_4268_, 1, v___x_4267_);
v___x_4269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4262_);
lean_ctor_set(v___x_4269_, 1, v___x_4268_);
v___x_4270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4261_);
lean_ctor_set(v___x_4270_, 1, v___x_4269_);
v___x_4271_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg(v___y_4253_, v___y_4251_, v___x_4259_, v___y_4256_, v___y_4249_, v___y_4252_, v___y_4248_, v___x_4257_, v___x_4270_);
if (lean_obj_tag(v___x_4271_) == 0)
{
lean_object* v_a_4272_; lean_object* v_snd_4273_; lean_object* v_snd_4274_; lean_object* v_snd_4275_; lean_object* v_fst_4276_; lean_object* v_fst_4277_; lean_object* v_fst_4278_; lean_object* v_fst_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4340_; 
v_a_4272_ = lean_ctor_get(v___x_4271_, 0);
lean_inc(v_a_4272_);
lean_dec_ref_known(v___x_4271_, 1);
v_snd_4273_ = lean_ctor_get(v_a_4272_, 1);
lean_inc(v_snd_4273_);
v_snd_4274_ = lean_ctor_get(v_snd_4273_, 1);
lean_inc(v_snd_4274_);
v_snd_4275_ = lean_ctor_get(v_snd_4274_, 1);
lean_inc(v_snd_4275_);
v_fst_4276_ = lean_ctor_get(v_a_4272_, 0);
lean_inc(v_fst_4276_);
lean_dec(v_a_4272_);
v_fst_4277_ = lean_ctor_get(v_snd_4273_, 0);
lean_inc(v_fst_4277_);
lean_dec(v_snd_4273_);
v_fst_4278_ = lean_ctor_get(v_snd_4274_, 0);
lean_inc(v_fst_4278_);
lean_dec(v_snd_4274_);
v_fst_4279_ = lean_ctor_get(v_snd_4275_, 0);
v_isSharedCheck_4340_ = !lean_is_exclusive(v_snd_4275_);
if (v_isSharedCheck_4340_ == 0)
{
lean_object* v_unused_4341_; 
v_unused_4341_ = lean_ctor_get(v_snd_4275_, 1);
lean_dec(v_unused_4341_);
v___x_4281_ = v_snd_4275_;
v_isShared_4282_ = v_isSharedCheck_4340_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_fst_4279_);
lean_dec(v_snd_4275_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4340_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v___x_4283_; lean_object* v_a_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4288_; 
lean_inc(v___y_4247_);
v___x_4283_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___redArg(v___y_4251_, v___y_4255_, v_fst_4278_, v___y_4250_, v_fst_4277_, v___y_4247_);
lean_dec_ref(v___y_4250_);
lean_dec(v___y_4255_);
lean_dec(v___y_4251_);
v_a_4284_ = lean_ctor_get(v___x_4283_, 0);
lean_inc(v_a_4284_);
lean_dec_ref(v___x_4283_);
v___x_4285_ = lean_array_get_size(v_fst_4276_);
v___x_4286_ = lean_mk_empty_array_with_capacity(v___x_4285_);
lean_inc_ref(v___x_4286_);
if (v_isShared_4282_ == 0)
{
lean_ctor_set(v___x_4281_, 1, v___x_4286_);
lean_ctor_set(v___x_4281_, 0, v___x_4286_);
v___x_4288_ = v___x_4281_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4339_; 
v_reuseFailAlloc_4339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4339_, 0, v___x_4286_);
lean_ctor_set(v_reuseFailAlloc_4339_, 1, v___x_4286_);
v___x_4288_ = v_reuseFailAlloc_4339_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
size_t v_sz_4289_; lean_object* v___x_4290_; 
v_sz_4289_ = lean_array_size(v_fst_4276_);
lean_inc_ref(v___y_4256_);
lean_inc_ref(v___y_4249_);
lean_inc_ref(v___y_4248_);
lean_inc_ref(v___y_4252_);
v___x_4290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__16(v___y_4252_, v___y_4248_, v_a_4284_, v___x_4260_, v___y_4249_, v___y_4256_, v___y_4253_, v___x_4259_, v_fst_4279_, v_fst_4278_, v_fst_4276_, v_sz_4289_, v___y_4254_, v___x_4288_);
lean_dec(v_fst_4278_);
lean_dec(v_fst_4279_);
lean_dec(v___x_4260_);
lean_dec(v_a_4284_);
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_object* v_a_4291_; lean_object* v_fst_4292_; lean_object* v_snd_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v_a_4291_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_a_4291_);
lean_dec_ref_known(v___x_4290_, 1);
v_fst_4292_ = lean_ctor_get(v_a_4291_, 0);
lean_inc(v_fst_4292_);
v_snd_4293_ = lean_ctor_get(v_a_4291_, 1);
lean_inc(v_snd_4293_);
lean_dec(v_a_4291_);
v___x_4294_ = lean_mk_empty_array_with_capacity(v___y_4247_);
v___x_4295_ = lean_mk_array(v___x_4285_, v___x_4294_);
v___x_4296_ = lean_array_get_size(v_snd_4293_);
lean_inc(v___y_4246_);
lean_inc_n(v___y_4247_, 2);
v___x_4297_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4297_, 0, v___y_4247_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
lean_ctor_set(v___x_4297_, 2, v___y_4246_);
v___x_4298_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___redArg(v_snd_4293_, v___x_4297_, v___x_4295_, v___y_4247_);
lean_dec_ref_known(v___x_4297_, 3);
if (lean_obj_tag(v___x_4298_) == 0)
{
lean_object* v_a_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v_a_4304_; lean_object* v___x_4305_; 
v_a_4299_ = lean_ctor_get(v___x_4298_, 0);
lean_inc(v_a_4299_);
lean_dec_ref_known(v___x_4298_, 1);
v___x_4300_ = l_Lake_remainingPaths(v_fst_4292_, v_a_4299_);
lean_dec(v_a_4299_);
v___x_4301_ = ((lean_object*)(l_Lake_ModuleTimes_save___closed__0));
lean_inc(v___y_4247_);
v___x_4302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4302_, 0, v___y_4247_);
lean_ctor_set(v___x_4302_, 1, v___x_4285_);
lean_ctor_set(v___x_4302_, 2, v___y_4246_);
v___x_4303_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg(v_fst_4292_, v_snd_4293_, v___x_4300_, v___y_4252_, v___y_4248_, v_fst_4276_, v___y_4249_, v___y_4256_, v___x_4302_, v___x_4301_, v___y_4247_);
lean_dec_ref_known(v___x_4302_, 3);
lean_dec_ref(v___y_4256_);
lean_dec_ref(v___y_4249_);
lean_dec(v_fst_4276_);
lean_dec_ref(v___y_4248_);
lean_dec_ref(v___y_4252_);
lean_dec_ref(v___x_4300_);
lean_dec(v_snd_4293_);
lean_dec(v_fst_4292_);
v_a_4304_ = lean_ctor_get(v___x_4303_, 0);
lean_inc(v_a_4304_);
lean_dec_ref(v___x_4303_);
v___x_4305_ = l_Lake_writeModuleTimesFile(v_path_4239_, v_a_4304_);
lean_dec(v_a_4304_);
if (lean_obj_tag(v___x_4305_) == 0)
{
lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4313_; 
v_isSharedCheck_4313_ = !lean_is_exclusive(v___x_4305_);
if (v_isSharedCheck_4313_ == 0)
{
lean_object* v_unused_4314_; 
v_unused_4314_ = lean_ctor_get(v___x_4305_, 0);
lean_dec(v_unused_4314_);
v___x_4307_ = v___x_4305_;
v_isShared_4308_ = v_isSharedCheck_4313_;
goto v_resetjp_4306_;
}
else
{
lean_dec(v___x_4305_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4313_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4309_; lean_object* v___x_4311_; 
v___x_4309_ = l_List_lengthTR___redArg(v___x_4244_);
lean_dec(v___x_4244_);
if (v_isShared_4308_ == 0)
{
lean_ctor_set(v___x_4307_, 0, v___x_4309_);
v___x_4311_ = v___x_4307_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4312_; 
v_reuseFailAlloc_4312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4312_, 0, v___x_4309_);
v___x_4311_ = v_reuseFailAlloc_4312_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
return v___x_4311_;
}
}
}
else
{
lean_object* v_a_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4322_; 
lean_dec(v___x_4244_);
v_a_4315_ = lean_ctor_get(v___x_4305_, 0);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4305_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4317_ = v___x_4305_;
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
else
{
lean_inc(v_a_4315_);
lean_dec(v___x_4305_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4322_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4320_; 
if (v_isShared_4318_ == 0)
{
v___x_4320_ = v___x_4317_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4315_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
}
else
{
lean_object* v_a_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4330_; 
lean_dec(v_snd_4293_);
lean_dec(v_fst_4292_);
lean_dec(v_fst_4276_);
lean_dec_ref(v___y_4256_);
lean_dec_ref(v___y_4252_);
lean_dec_ref(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec(v___y_4247_);
lean_dec(v___y_4246_);
lean_dec(v___x_4244_);
lean_dec_ref(v_path_4239_);
v_a_4323_ = lean_ctor_get(v___x_4298_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4325_ = v___x_4298_;
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_a_4323_);
lean_dec(v___x_4298_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4328_; 
if (v_isShared_4326_ == 0)
{
v___x_4328_ = v___x_4325_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_a_4323_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
return v___x_4328_;
}
}
}
}
else
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4338_; 
lean_dec(v_fst_4276_);
lean_dec_ref(v___y_4256_);
lean_dec_ref(v___y_4252_);
lean_dec_ref(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec(v___y_4247_);
lean_dec(v___y_4246_);
lean_dec(v___x_4244_);
lean_dec_ref(v_path_4239_);
v_a_4331_ = lean_ctor_get(v___x_4290_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4290_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4333_ = v___x_4290_;
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4290_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4336_; 
if (v_isShared_4334_ == 0)
{
v___x_4336_ = v___x_4333_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4331_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
}
}
else
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
lean_dec(v___x_4260_);
lean_dec_ref(v___y_4256_);
lean_dec(v___y_4255_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
lean_dec(v___y_4251_);
lean_dec_ref(v___y_4250_);
lean_dec_ref(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec(v___y_4247_);
lean_dec(v___y_4246_);
lean_dec(v___x_4244_);
lean_dec_ref(v_path_4239_);
v_a_4342_ = lean_ctor_get(v___x_4271_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4271_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4344_ = v___x_4271_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4271_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
}
v___jp_4350_:
{
lean_object* v___x_4365_; 
v___x_4365_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg(v___y_4361_, v___y_4352_, v___y_4355_, v___y_4364_);
lean_dec(v___y_4364_);
lean_dec(v___y_4361_);
v___y_4246_ = v___y_4351_;
v___y_4247_ = v___y_4359_;
v___y_4248_ = v___y_4353_;
v___y_4249_ = v___y_4360_;
v___y_4250_ = v___y_4354_;
v___y_4251_ = v___y_4362_;
v___y_4252_ = v___y_4363_;
v___y_4253_ = v___y_4356_;
v___y_4254_ = v___y_4357_;
v___y_4255_ = v___y_4358_;
v___y_4256_ = v___x_4365_;
goto v___jp_4245_;
}
v___jp_4366_:
{
uint8_t v___x_4381_; 
v___x_4381_ = lean_nat_dec_le(v___y_4380_, v___y_4376_);
if (v___x_4381_ == 0)
{
lean_dec(v___y_4376_);
lean_inc(v___y_4380_);
v___y_4351_ = v___y_4367_;
v___y_4352_ = v___y_4368_;
v___y_4353_ = v___y_4369_;
v___y_4354_ = v___y_4370_;
v___y_4355_ = v___y_4380_;
v___y_4356_ = v___y_4371_;
v___y_4357_ = v___y_4372_;
v___y_4358_ = v___y_4373_;
v___y_4359_ = v___y_4374_;
v___y_4360_ = v___y_4375_;
v___y_4361_ = v___y_4377_;
v___y_4362_ = v___y_4378_;
v___y_4363_ = v___y_4379_;
v___y_4364_ = v___y_4380_;
goto v___jp_4350_;
}
else
{
v___y_4351_ = v___y_4367_;
v___y_4352_ = v___y_4368_;
v___y_4353_ = v___y_4369_;
v___y_4354_ = v___y_4370_;
v___y_4355_ = v___y_4380_;
v___y_4356_ = v___y_4371_;
v___y_4357_ = v___y_4372_;
v___y_4358_ = v___y_4373_;
v___y_4359_ = v___y_4374_;
v___y_4360_ = v___y_4375_;
v___y_4361_ = v___y_4377_;
v___y_4362_ = v___y_4378_;
v___y_4363_ = v___y_4379_;
v___y_4364_ = v___y_4376_;
goto v___jp_4350_;
}
}
v___jp_4382_:
{
lean_object* v___x_4394_; uint8_t v___x_4395_; 
v___x_4394_ = lean_array_get_size(v___y_4393_);
v___x_4395_ = lean_nat_dec_eq(v___x_4394_, v___y_4384_);
if (v___x_4395_ == 0)
{
lean_object* v___x_4396_; uint8_t v___x_4397_; 
v___x_4396_ = lean_nat_sub(v___x_4394_, v___y_4383_);
v___x_4397_ = lean_nat_dec_le(v___y_4384_, v___x_4396_);
if (v___x_4397_ == 0)
{
lean_inc(v___x_4396_);
v___y_4367_ = v___y_4383_;
v___y_4368_ = v___y_4393_;
v___y_4369_ = v___y_4386_;
v___y_4370_ = v___y_4387_;
v___y_4371_ = v___y_4390_;
v___y_4372_ = v___y_4391_;
v___y_4373_ = v___y_4392_;
v___y_4374_ = v___y_4384_;
v___y_4375_ = v___y_4385_;
v___y_4376_ = v___x_4396_;
v___y_4377_ = v___x_4394_;
v___y_4378_ = v___y_4388_;
v___y_4379_ = v___y_4389_;
v___y_4380_ = v___x_4396_;
goto v___jp_4366_;
}
else
{
lean_inc(v___y_4384_);
v___y_4367_ = v___y_4383_;
v___y_4368_ = v___y_4393_;
v___y_4369_ = v___y_4386_;
v___y_4370_ = v___y_4387_;
v___y_4371_ = v___y_4390_;
v___y_4372_ = v___y_4391_;
v___y_4373_ = v___y_4392_;
v___y_4374_ = v___y_4384_;
v___y_4375_ = v___y_4385_;
v___y_4376_ = v___x_4396_;
v___y_4377_ = v___x_4394_;
v___y_4378_ = v___y_4388_;
v___y_4379_ = v___y_4389_;
v___y_4380_ = v___y_4384_;
goto v___jp_4366_;
}
}
else
{
v___y_4246_ = v___y_4383_;
v___y_4247_ = v___y_4384_;
v___y_4248_ = v___y_4386_;
v___y_4249_ = v___y_4385_;
v___y_4250_ = v___y_4387_;
v___y_4251_ = v___y_4388_;
v___y_4252_ = v___y_4389_;
v___y_4253_ = v___y_4390_;
v___y_4254_ = v___y_4391_;
v___y_4255_ = v___y_4392_;
v___y_4256_ = v___y_4393_;
goto v___jp_4245_;
}
}
v___jp_4399_:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___f_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; uint8_t v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; 
v___x_4407_ = lean_st_ref_get(v_seen_4243_);
lean_dec(v_seen_4243_);
v___x_4408_ = lean_box(0);
v___x_4409_ = lean_mk_array(v___y_4404_, v___x_4408_);
lean_inc_n(v___y_4401_, 5);
v___x_4410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4410_, 0, v___y_4401_);
lean_ctor_set(v___x_4410_, 1, v___x_4409_);
lean_inc_ref(v___x_4410_);
v___x_4411_ = l_List_foldl___at___00Lake_ModuleTimes_save_spec__3(v___x_4410_, v___x_4407_);
v___f_4412_ = lean_alloc_closure((void*)(l_Lake_ModuleTimes_save___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4412_, 0, v___x_4411_);
v___x_4413_ = l___private_Lake_Build_ModuleTimes_0__Lake_keepRows(v___y_4405_, v___y_4403_, v___f_4412_, v_sourceOf_4237_);
v___x_4414_ = lean_array_get_size(v___y_4405_);
v___x_4415_ = 0;
v___x_4416_ = lean_box(v___x_4415_);
v___x_4417_ = lean_mk_array(v___x_4414_, v___x_4416_);
v___x_4418_ = lean_byte_array_mk(v___x_4417_);
v___x_4419_ = lean_mk_array(v___x_4414_, v___y_4401_);
lean_inc(v___y_4400_);
v___x_4420_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4420_, 0, v___y_4401_);
lean_ctor_set(v___x_4420_, 1, v___x_4414_);
lean_ctor_set(v___x_4420_, 2, v___y_4400_);
v___x_4421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4421_, 0, v___x_4419_);
lean_ctor_set(v___x_4421_, 1, v___y_4401_);
v___x_4422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4422_, 0, v___x_4418_);
lean_ctor_set(v___x_4422_, 1, v___x_4421_);
v___x_4423_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___redArg(v___y_4405_, v___y_4406_, v___y_4402_, v___x_4413_, v___x_4398_, v___x_4420_, v___x_4422_, v___y_4401_);
if (lean_obj_tag(v___x_4423_) == 0)
{
lean_object* v_a_4424_; lean_object* v_snd_4425_; lean_object* v_fst_4426_; lean_object* v_fst_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4465_; 
v_a_4424_ = lean_ctor_get(v___x_4423_, 0);
lean_inc(v_a_4424_);
lean_dec_ref_known(v___x_4423_, 1);
v_snd_4425_ = lean_ctor_get(v_a_4424_, 1);
lean_inc(v_snd_4425_);
v_fst_4426_ = lean_ctor_get(v_a_4424_, 0);
lean_inc(v_fst_4426_);
lean_dec(v_a_4424_);
v_fst_4427_ = lean_ctor_get(v_snd_4425_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v_snd_4425_);
if (v_isSharedCheck_4465_ == 0)
{
lean_object* v_unused_4466_; 
v_unused_4466_ = lean_ctor_get(v_snd_4425_, 1);
lean_dec(v_unused_4466_);
v___x_4429_ = v_snd_4425_;
v_isShared_4430_ = v_isSharedCheck_4465_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_fst_4427_);
lean_dec(v_snd_4425_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4465_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
lean_object* v___x_4431_; 
lean_inc(v___y_4401_);
v___x_4431_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___redArg(v___y_4405_, v___y_4402_, v___x_4413_, v___x_4420_, v_fst_4426_, v___y_4401_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v_a_4432_; lean_object* v___x_4434_; 
v_a_4432_ = lean_ctor_get(v___x_4431_, 0);
lean_inc(v_a_4432_);
lean_dec_ref_known(v___x_4431_, 1);
if (v_isShared_4430_ == 0)
{
lean_ctor_set(v___x_4429_, 1, v___x_4410_);
lean_ctor_set(v___x_4429_, 0, v_a_4432_);
v___x_4434_ = v___x_4429_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_a_4432_);
lean_ctor_set(v_reuseFailAlloc_4456_, 1, v___x_4410_);
v___x_4434_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
size_t v_sz_4435_; size_t v___x_4436_; lean_object* v___x_4437_; 
v_sz_4435_ = lean_array_size(v___y_4406_);
v___x_4436_ = ((size_t)0ULL);
lean_inc_ref(v___y_4402_);
lean_inc_ref(v___y_4405_);
lean_inc_ref(v___y_4406_);
v___x_4437_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_ModuleTimes_save_spec__10(v___y_4406_, v___y_4405_, v___y_4402_, v___x_4414_, v___x_4413_, v___y_4406_, v_sz_4435_, v___x_4436_, v___x_4434_);
lean_dec_ref(v___x_4413_);
if (lean_obj_tag(v___x_4437_) == 0)
{
lean_object* v_a_4438_; lean_object* v_snd_4439_; lean_object* v_fst_4440_; lean_object* v_size_4441_; lean_object* v_buckets_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; uint8_t v___x_4445_; 
v_a_4438_ = lean_ctor_get(v___x_4437_, 0);
lean_inc(v_a_4438_);
lean_dec_ref_known(v___x_4437_, 1);
v_snd_4439_ = lean_ctor_get(v_a_4438_, 1);
lean_inc(v_snd_4439_);
v_fst_4440_ = lean_ctor_get(v_a_4438_, 0);
lean_inc(v_fst_4440_);
lean_dec(v_a_4438_);
v_size_4441_ = lean_ctor_get(v_snd_4439_, 0);
lean_inc(v_size_4441_);
v_buckets_4442_ = lean_ctor_get(v_snd_4439_, 1);
lean_inc_ref(v_buckets_4442_);
lean_dec(v_snd_4439_);
v___x_4443_ = lean_mk_empty_array_with_capacity(v_size_4441_);
lean_dec(v_size_4441_);
v___x_4444_ = lean_array_get_size(v_buckets_4442_);
v___x_4445_ = lean_nat_dec_lt(v___y_4401_, v___x_4444_);
if (v___x_4445_ == 0)
{
lean_dec_ref(v_buckets_4442_);
v___y_4383_ = v___y_4400_;
v___y_4384_ = v___y_4401_;
v___y_4385_ = v___y_4406_;
v___y_4386_ = v___y_4402_;
v___y_4387_ = v___x_4420_;
v___y_4388_ = v_fst_4440_;
v___y_4389_ = v___y_4405_;
v___y_4390_ = v___x_4414_;
v___y_4391_ = v___x_4436_;
v___y_4392_ = v_fst_4427_;
v___y_4393_ = v___x_4443_;
goto v___jp_4382_;
}
else
{
size_t v___x_4446_; lean_object* v___x_4447_; 
v___x_4446_ = lean_usize_of_nat(v___x_4444_);
v___x_4447_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__23(v_buckets_4442_, v___x_4436_, v___x_4446_, v___x_4443_);
lean_dec_ref(v_buckets_4442_);
v___y_4383_ = v___y_4400_;
v___y_4384_ = v___y_4401_;
v___y_4385_ = v___y_4406_;
v___y_4386_ = v___y_4402_;
v___y_4387_ = v___x_4420_;
v___y_4388_ = v_fst_4440_;
v___y_4389_ = v___y_4405_;
v___y_4390_ = v___x_4414_;
v___y_4391_ = v___x_4436_;
v___y_4392_ = v_fst_4427_;
v___y_4393_ = v___x_4447_;
goto v___jp_4382_;
}
}
else
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4455_; 
lean_dec(v_fst_4427_);
lean_dec_ref_known(v___x_4420_, 3);
lean_dec_ref(v___y_4406_);
lean_dec_ref(v___y_4405_);
lean_dec_ref(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec(v___y_4400_);
lean_dec(v___x_4244_);
lean_dec_ref(v_path_4239_);
v_a_4448_ = lean_ctor_get(v___x_4437_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4437_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4450_ = v___x_4437_;
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4437_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_del_object(v___x_4429_);
lean_dec(v_fst_4427_);
lean_dec_ref_known(v___x_4420_, 3);
lean_dec_ref(v___x_4413_);
lean_dec_ref_known(v___x_4410_, 2);
lean_dec_ref(v___y_4406_);
lean_dec_ref(v___y_4405_);
lean_dec_ref(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec(v___y_4400_);
lean_dec(v___x_4244_);
lean_dec_ref(v_path_4239_);
v_a_4457_ = lean_ctor_get(v___x_4431_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4431_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4431_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4431_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
}
else
{
lean_object* v_a_4467_; lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4474_; 
lean_dec_ref_known(v___x_4420_, 3);
lean_dec_ref(v___x_4413_);
lean_dec_ref_known(v___x_4410_, 2);
lean_dec_ref(v___y_4406_);
lean_dec_ref(v___y_4405_);
lean_dec_ref(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec(v___y_4400_);
lean_dec(v___x_4244_);
lean_dec_ref(v_path_4239_);
v_a_4467_ = lean_ctor_get(v___x_4423_, 0);
v_isSharedCheck_4474_ = !lean_is_exclusive(v___x_4423_);
if (v_isSharedCheck_4474_ == 0)
{
v___x_4469_ = v___x_4423_;
v_isShared_4470_ = v_isSharedCheck_4474_;
goto v_resetjp_4468_;
}
else
{
lean_inc(v_a_4467_);
lean_dec(v___x_4423_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4474_;
goto v_resetjp_4468_;
}
v_resetjp_4468_:
{
lean_object* v___x_4472_; 
if (v_isShared_4470_ == 0)
{
v___x_4472_ = v___x_4469_;
goto v_reusejp_4471_;
}
else
{
lean_object* v_reuseFailAlloc_4473_; 
v_reuseFailAlloc_4473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4473_, 0, v_a_4467_);
v___x_4472_ = v_reuseFailAlloc_4473_;
goto v_reusejp_4471_;
}
v_reusejp_4471_:
{
return v___x_4472_;
}
}
}
}
v___jp_4475_:
{
lean_object* v___x_4486_; 
v___x_4486_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg(v___y_4482_, v___y_4477_, v___y_4484_, v___y_4485_);
lean_dec(v___y_4485_);
lean_dec(v___y_4482_);
v___y_4400_ = v___y_4476_;
v___y_4401_ = v___y_4478_;
v___y_4402_ = v___y_4479_;
v___y_4403_ = v___y_4480_;
v___y_4404_ = v___y_4481_;
v___y_4405_ = v___y_4483_;
v___y_4406_ = v___x_4486_;
goto v___jp_4399_;
}
v___jp_4487_:
{
uint8_t v___x_4498_; 
v___x_4498_ = lean_nat_dec_le(v___y_4497_, v___y_4492_);
if (v___x_4498_ == 0)
{
lean_dec(v___y_4492_);
lean_inc(v___y_4497_);
v___y_4476_ = v___y_4488_;
v___y_4477_ = v___y_4489_;
v___y_4478_ = v___y_4490_;
v___y_4479_ = v___y_4491_;
v___y_4480_ = v___y_4493_;
v___y_4481_ = v___y_4494_;
v___y_4482_ = v___y_4495_;
v___y_4483_ = v___y_4496_;
v___y_4484_ = v___y_4497_;
v___y_4485_ = v___y_4497_;
goto v___jp_4475_;
}
else
{
v___y_4476_ = v___y_4488_;
v___y_4477_ = v___y_4489_;
v___y_4478_ = v___y_4490_;
v___y_4479_ = v___y_4491_;
v___y_4480_ = v___y_4493_;
v___y_4481_ = v___y_4494_;
v___y_4482_ = v___y_4495_;
v___y_4483_ = v___y_4496_;
v___y_4484_ = v___y_4497_;
v___y_4485_ = v___y_4492_;
goto v___jp_4475_;
}
}
v___jp_4499_:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; uint8_t v___x_4508_; 
v___x_4506_ = lean_unsigned_to_nat(1u);
v___x_4507_ = lean_array_get_size(v___y_4505_);
v___x_4508_ = lean_nat_dec_eq(v___x_4507_, v___y_4500_);
if (v___x_4508_ == 0)
{
lean_object* v___x_4509_; uint8_t v___x_4510_; 
v___x_4509_ = lean_nat_sub(v___x_4507_, v___x_4506_);
v___x_4510_ = lean_nat_dec_le(v___y_4500_, v___x_4509_);
if (v___x_4510_ == 0)
{
lean_inc(v___x_4509_);
v___y_4488_ = v___x_4506_;
v___y_4489_ = v___y_4505_;
v___y_4490_ = v___y_4500_;
v___y_4491_ = v___y_4501_;
v___y_4492_ = v___x_4509_;
v___y_4493_ = v___y_4502_;
v___y_4494_ = v___y_4503_;
v___y_4495_ = v___x_4507_;
v___y_4496_ = v___y_4504_;
v___y_4497_ = v___x_4509_;
goto v___jp_4487_;
}
else
{
lean_inc(v___y_4500_);
v___y_4488_ = v___x_4506_;
v___y_4489_ = v___y_4505_;
v___y_4490_ = v___y_4500_;
v___y_4491_ = v___y_4501_;
v___y_4492_ = v___x_4509_;
v___y_4493_ = v___y_4502_;
v___y_4494_ = v___y_4503_;
v___y_4495_ = v___x_4507_;
v___y_4496_ = v___y_4504_;
v___y_4497_ = v___y_4500_;
goto v___jp_4487_;
}
}
else
{
v___y_4400_ = v___x_4506_;
v___y_4401_ = v___y_4500_;
v___y_4402_ = v___y_4501_;
v___y_4403_ = v___y_4502_;
v___y_4404_ = v___y_4503_;
v___y_4405_ = v___y_4504_;
v___y_4406_ = v___y_4505_;
goto v___jp_4399_;
}
}
v___jp_4511_:
{
lean_object* v_contents_4513_; lean_object* v_rows_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v_buckets_4519_; lean_object* v___f_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; uint8_t v___x_4523_; 
v_contents_4513_ = lean_ctor_get(v_file_4512_, 0);
lean_inc_ref(v_contents_4513_);
v_rows_4514_ = lean_ctor_get(v_file_4512_, 1);
lean_inc_ref(v_rows_4514_);
lean_dec_ref(v_file_4512_);
v___x_4515_ = lean_unsigned_to_nat(0u);
v___x_4516_ = lean_unsigned_to_nat(16u);
v___x_4517_ = lean_obj_once(&l_Lake_ModuleTimes_save___closed__2, &l_Lake_ModuleTimes_save___closed__2_once, _init_l_Lake_ModuleTimes_save___closed__2);
lean_inc(v___x_4244_);
v___x_4518_ = l_List_foldl___at___00Lake_ModuleTimes_save_spec__1(v___x_4517_, v___x_4244_);
v_buckets_4519_ = lean_ctor_get(v___x_4518_, 1);
lean_inc_ref(v_buckets_4519_);
v___f_4520_ = lean_alloc_closure((void*)(l_Lake_ModuleTimes_save___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4520_, 0, v___x_4518_);
v___x_4521_ = ((lean_object*)(l_Lake_ModuleTimes_save___closed__3));
v___x_4522_ = lean_array_get_size(v_buckets_4519_);
v___x_4523_ = lean_nat_dec_lt(v___x_4515_, v___x_4522_);
if (v___x_4523_ == 0)
{
lean_dec_ref(v_buckets_4519_);
v___y_4500_ = v___x_4515_;
v___y_4501_ = v_contents_4513_;
v___y_4502_ = v___f_4520_;
v___y_4503_ = v___x_4516_;
v___y_4504_ = v_rows_4514_;
v___y_4505_ = v___x_4521_;
goto v___jp_4499_;
}
else
{
size_t v___x_4524_; size_t v___x_4525_; lean_object* v___x_4526_; 
v___x_4524_ = ((size_t)0ULL);
v___x_4525_ = lean_usize_of_nat(v___x_4522_);
v___x_4526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ModuleTimes_save_spec__26(v_buckets_4519_, v___x_4524_, v___x_4525_, v___x_4521_);
lean_dec_ref(v_buckets_4519_);
v___y_4500_ = v___x_4515_;
v___y_4501_ = v_contents_4513_;
v___y_4502_ = v___f_4520_;
v___y_4503_ = v___x_4516_;
v___y_4504_ = v_rows_4514_;
v___y_4505_ = v___x_4526_;
goto v___jp_4499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleTimes_save___boxed(lean_object* v_logger_4550_, lean_object* v_self_4551_, lean_object* v_sourceOf_4552_, lean_object* v_a_4553_){
_start:
{
lean_object* v_res_4554_; 
v_res_4554_ = l_Lake_ModuleTimes_save(v_logger_4550_, v_self_4551_, v_sourceOf_4552_);
return v_res_4554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__0(lean_object* v_00_u03b2_4555_, lean_object* v_m_4556_, lean_object* v_a_4557_, lean_object* v_b_4558_){
_start:
{
lean_object* v___x_4559_; 
v___x_4559_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__0___redArg(v_m_4556_, v_a_4557_, v_b_4558_);
return v___x_4559_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2(lean_object* v_00_u03b2_4560_, lean_object* v_m_4561_, lean_object* v_a_4562_){
_start:
{
uint8_t v___x_4563_; 
v___x_4563_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___redArg(v_m_4561_, v_a_4562_);
return v___x_4563_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2___boxed(lean_object* v_00_u03b2_4564_, lean_object* v_m_4565_, lean_object* v_a_4566_){
_start:
{
uint8_t v_res_4567_; lean_object* v_r_4568_; 
v_res_4567_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_ModuleTimes_save_spec__2(v_00_u03b2_4564_, v_m_4565_, v_a_4566_);
lean_dec(v_a_4566_);
lean_dec_ref(v_m_4565_);
v_r_4568_ = lean_box(v_res_4567_);
return v_r_4568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4(lean_object* v___y_4569_, lean_object* v___x_4570_, lean_object* v___x_4571_, lean_object* v_inst_4572_, lean_object* v_a_4573_){
_start:
{
lean_object* v___x_4575_; 
v___x_4575_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___redArg(v___y_4569_, v___x_4570_, v___x_4571_, v_a_4573_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4___boxed(lean_object* v___y_4576_, lean_object* v___x_4577_, lean_object* v___x_4578_, lean_object* v_inst_4579_, lean_object* v_a_4580_, lean_object* v___y_4581_){
_start:
{
lean_object* v_res_4582_; 
v_res_4582_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__4(v___y_4576_, v___x_4577_, v___x_4578_, v_inst_4579_, v_a_4580_);
lean_dec_ref(v___x_4578_);
lean_dec_ref(v___y_4576_);
return v_res_4582_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6(lean_object* v_00_u03b2_4583_, lean_object* v_m_4584_, lean_object* v_a_4585_, lean_object* v_b_4586_){
_start:
{
lean_object* v___x_4587_; 
v___x_4587_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6___redArg(v_m_4584_, v_a_4585_, v_b_4586_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8(lean_object* v___x_4588_, lean_object* v___y_4589_, lean_object* v___x_4590_, lean_object* v_val_4591_, uint8_t v___x_4592_, lean_object* v_range_4593_, lean_object* v_b_4594_, lean_object* v_i_4595_, lean_object* v_hs_4596_, lean_object* v_hl_4597_){
_start:
{
lean_object* v___x_4599_; 
v___x_4599_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___redArg(v___x_4588_, v___y_4589_, v___x_4590_, v_val_4591_, v___x_4592_, v_range_4593_, v_b_4594_, v_i_4595_);
return v___x_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8___boxed(lean_object* v___x_4600_, lean_object* v___y_4601_, lean_object* v___x_4602_, lean_object* v_val_4603_, lean_object* v___x_4604_, lean_object* v_range_4605_, lean_object* v_b_4606_, lean_object* v_i_4607_, lean_object* v_hs_4608_, lean_object* v_hl_4609_, lean_object* v___y_4610_){
_start:
{
uint8_t v___x_20696__boxed_4611_; lean_object* v_res_4612_; 
v___x_20696__boxed_4611_ = lean_unbox(v___x_4604_);
v_res_4612_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__8(v___x_4600_, v___y_4601_, v___x_4602_, v_val_4603_, v___x_20696__boxed_4611_, v_range_4605_, v_b_4606_, v_i_4607_, v_hs_4608_, v_hl_4609_);
lean_dec_ref(v_range_4605_);
lean_dec_ref(v_val_4603_);
lean_dec_ref(v___x_4602_);
lean_dec_ref(v___y_4601_);
lean_dec_ref(v___x_4600_);
return v_res_4612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9(lean_object* v___x_4613_, lean_object* v___x_4614_, lean_object* v_val_4615_, lean_object* v_range_4616_, lean_object* v_b_4617_, lean_object* v_i_4618_, lean_object* v_hs_4619_, lean_object* v_hl_4620_){
_start:
{
lean_object* v___x_4622_; 
v___x_4622_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___redArg(v___x_4613_, v___x_4614_, v_val_4615_, v_range_4616_, v_b_4617_, v_i_4618_);
return v___x_4622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9___boxed(lean_object* v___x_4623_, lean_object* v___x_4624_, lean_object* v_val_4625_, lean_object* v_range_4626_, lean_object* v_b_4627_, lean_object* v_i_4628_, lean_object* v_hs_4629_, lean_object* v_hl_4630_, lean_object* v___y_4631_){
_start:
{
lean_object* v_res_4632_; 
v_res_4632_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__9(v___x_4623_, v___x_4624_, v_val_4625_, v_range_4626_, v_b_4627_, v_i_4628_, v_hs_4629_, v_hl_4630_);
lean_dec_ref(v_range_4626_);
lean_dec_ref(v_val_4625_);
lean_dec_ref(v___x_4624_);
lean_dec_ref(v___x_4623_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11(lean_object* v___x_4633_, lean_object* v___x_4634_, lean_object* v_inst_4635_, lean_object* v_a_4636_){
_start:
{
lean_object* v___x_4638_; 
v___x_4638_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___redArg(v___x_4633_, v___x_4634_, v_a_4636_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11___boxed(lean_object* v___x_4639_, lean_object* v___x_4640_, lean_object* v_inst_4641_, lean_object* v_a_4642_, lean_object* v___y_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__11(v___x_4639_, v___x_4640_, v_inst_4641_, v_a_4642_);
lean_dec_ref(v___x_4640_);
lean_dec(v___x_4639_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12(lean_object* v___x_4645_, lean_object* v___x_4646_, lean_object* v___x_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___x_4650_, lean_object* v___x_4651_, lean_object* v___x_4652_, lean_object* v_inst_4653_, lean_object* v_a_4654_){
_start:
{
lean_object* v___x_4656_; 
v___x_4656_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___redArg(v___x_4645_, v___x_4646_, v___x_4647_, v___y_4648_, v___y_4649_, v___x_4650_, v___x_4651_, v___x_4652_, v_a_4654_);
return v___x_4656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12___boxed(lean_object* v___x_4657_, lean_object* v___x_4658_, lean_object* v___x_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___x_4662_, lean_object* v___x_4663_, lean_object* v___x_4664_, lean_object* v_inst_4665_, lean_object* v_a_4666_, lean_object* v___y_4667_){
_start:
{
lean_object* v_res_4668_; 
v_res_4668_ = l___private_Init_While_0__repeatM_erased___at___00Lake_ModuleTimes_save_spec__12(v___x_4657_, v___x_4658_, v___x_4659_, v___y_4660_, v___y_4661_, v___x_4662_, v___x_4663_, v___x_4664_, v_inst_4665_, v_a_4666_);
lean_dec(v___x_4664_);
lean_dec_ref(v___x_4663_);
lean_dec_ref(v___x_4662_);
lean_dec_ref(v___y_4661_);
lean_dec_ref(v___y_4660_);
lean_dec(v___x_4659_);
lean_dec_ref(v___x_4658_);
lean_dec(v___x_4657_);
return v_res_4668_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13(lean_object* v___x_4669_, lean_object* v___x_4670_, lean_object* v___x_4671_, lean_object* v_range_4672_, lean_object* v_b_4673_, lean_object* v_i_4674_, lean_object* v_hs_4675_, lean_object* v_hl_4676_){
_start:
{
lean_object* v___x_4678_; 
v___x_4678_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___redArg(v___x_4669_, v___x_4670_, v___x_4671_, v_range_4672_, v_b_4673_, v_i_4674_);
return v___x_4678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13___boxed(lean_object* v___x_4679_, lean_object* v___x_4680_, lean_object* v___x_4681_, lean_object* v_range_4682_, lean_object* v_b_4683_, lean_object* v_i_4684_, lean_object* v_hs_4685_, lean_object* v_hl_4686_, lean_object* v___y_4687_){
_start:
{
lean_object* v_res_4688_; 
v_res_4688_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__13(v___x_4679_, v___x_4680_, v___x_4681_, v_range_4682_, v_b_4683_, v_i_4684_, v_hs_4685_, v_hl_4686_);
lean_dec_ref(v_range_4682_);
lean_dec_ref(v___x_4681_);
lean_dec_ref(v___x_4680_);
lean_dec_ref(v___x_4679_);
return v_res_4688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18(lean_object* v___x_4689_, lean_object* v_range_4690_, lean_object* v_b_4691_, lean_object* v_i_4692_, lean_object* v_hs_4693_, lean_object* v_hl_4694_){
_start:
{
lean_object* v___x_4696_; 
v___x_4696_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___redArg(v___x_4689_, v_range_4690_, v_b_4691_, v_i_4692_);
return v___x_4696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18___boxed(lean_object* v___x_4697_, lean_object* v_range_4698_, lean_object* v_b_4699_, lean_object* v_i_4700_, lean_object* v_hs_4701_, lean_object* v_hl_4702_, lean_object* v___y_4703_){
_start:
{
lean_object* v_res_4704_; 
v_res_4704_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__18(v___x_4697_, v_range_4698_, v_b_4699_, v_i_4700_, v_hs_4701_, v_hl_4702_);
lean_dec_ref(v_range_4698_);
lean_dec_ref(v___x_4697_);
return v_res_4704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19(lean_object* v___x_4705_, lean_object* v_range_4706_, lean_object* v_b_4707_, lean_object* v_i_4708_, lean_object* v_hs_4709_, lean_object* v_hl_4710_){
_start:
{
lean_object* v___x_4712_; 
v___x_4712_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___redArg(v___x_4705_, v_range_4706_, v_b_4707_, v_i_4708_);
return v___x_4712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19___boxed(lean_object* v___x_4713_, lean_object* v_range_4714_, lean_object* v_b_4715_, lean_object* v_i_4716_, lean_object* v_hs_4717_, lean_object* v_hl_4718_, lean_object* v___y_4719_){
_start:
{
lean_object* v_res_4720_; 
v_res_4720_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__19(v___x_4713_, v_range_4714_, v_b_4715_, v_i_4716_, v_hs_4717_, v_hl_4718_);
lean_dec_ref(v_range_4714_);
lean_dec_ref(v___x_4713_);
return v_res_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20(lean_object* v___x_4721_, lean_object* v___x_4722_, lean_object* v___x_4723_, lean_object* v___x_4724_, lean_object* v___x_4725_, lean_object* v___x_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v_range_4729_, lean_object* v_b_4730_, lean_object* v_i_4731_, lean_object* v_hs_4732_, lean_object* v_hl_4733_){
_start:
{
lean_object* v___x_4735_; 
v___x_4735_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___redArg(v___x_4721_, v___x_4722_, v___x_4723_, v___x_4724_, v___x_4725_, v___x_4726_, v___y_4727_, v___y_4728_, v_range_4729_, v_b_4730_, v_i_4731_);
return v___x_4735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20___boxed(lean_object* v___x_4736_, lean_object* v___x_4737_, lean_object* v___x_4738_, lean_object* v___x_4739_, lean_object* v___x_4740_, lean_object* v___x_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v_range_4744_, lean_object* v_b_4745_, lean_object* v_i_4746_, lean_object* v_hs_4747_, lean_object* v_hl_4748_, lean_object* v___y_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lake_ModuleTimes_save_spec__20(v___x_4736_, v___x_4737_, v___x_4738_, v___x_4739_, v___x_4740_, v___x_4741_, v___y_4742_, v___y_4743_, v_range_4744_, v_b_4745_, v_i_4746_, v_hs_4747_, v_hl_4748_);
lean_dec_ref(v_range_4744_);
lean_dec_ref(v___y_4743_);
lean_dec_ref(v___y_4742_);
lean_dec_ref(v___x_4741_);
lean_dec_ref(v___x_4740_);
lean_dec_ref(v___x_4739_);
lean_dec_ref(v___x_4738_);
lean_dec_ref(v___x_4737_);
lean_dec_ref(v___x_4736_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21(lean_object* v_n_4751_, lean_object* v_as_4752_, lean_object* v_lo_4753_, lean_object* v_hi_4754_, lean_object* v_w_4755_, lean_object* v_hlo_4756_, lean_object* v_hhi_4757_){
_start:
{
lean_object* v___x_4758_; 
v___x_4758_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___redArg(v_n_4751_, v_as_4752_, v_lo_4753_, v_hi_4754_);
return v___x_4758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21___boxed(lean_object* v_n_4759_, lean_object* v_as_4760_, lean_object* v_lo_4761_, lean_object* v_hi_4762_, lean_object* v_w_4763_, lean_object* v_hlo_4764_, lean_object* v_hhi_4765_){
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21(v_n_4759_, v_as_4760_, v_lo_4761_, v_hi_4762_, v_w_4763_, v_hlo_4764_, v_hhi_4765_);
lean_dec(v_hi_4762_);
lean_dec(v_n_4759_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24(lean_object* v_n_4767_, lean_object* v_as_4768_, lean_object* v_lo_4769_, lean_object* v_hi_4770_, lean_object* v_w_4771_, lean_object* v_hlo_4772_, lean_object* v_hhi_4773_){
_start:
{
lean_object* v___x_4774_; 
v___x_4774_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___redArg(v_n_4767_, v_as_4768_, v_lo_4769_, v_hi_4770_);
return v___x_4774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24___boxed(lean_object* v_n_4775_, lean_object* v_as_4776_, lean_object* v_lo_4777_, lean_object* v_hi_4778_, lean_object* v_w_4779_, lean_object* v_hlo_4780_, lean_object* v_hhi_4781_){
_start:
{
lean_object* v_res_4782_; 
v_res_4782_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24(v_n_4775_, v_as_4776_, v_lo_4777_, v_hi_4778_, v_w_4779_, v_hlo_4780_, v_hhi_4781_);
lean_dec(v_hi_4778_);
lean_dec(v_n_4775_);
return v_res_4782_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6(lean_object* v_00_u03b2_4783_, lean_object* v_a_4784_, lean_object* v_x_4785_){
_start:
{
uint8_t v___x_4786_; 
v___x_4786_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___redArg(v_a_4784_, v_x_4785_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6___boxed(lean_object* v_00_u03b2_4787_, lean_object* v_a_4788_, lean_object* v_x_4789_){
_start:
{
uint8_t v_res_4790_; lean_object* v_r_4791_; 
v_res_4790_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__6(v_00_u03b2_4787_, v_a_4788_, v_x_4789_);
lean_dec(v_x_4789_);
lean_dec_ref(v_a_4788_);
v_r_4791_ = lean_box(v_res_4790_);
return v_r_4791_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7(lean_object* v_00_u03b2_4792_, lean_object* v_data_4793_){
_start:
{
lean_object* v___x_4794_; 
v___x_4794_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7___redArg(v_data_4793_);
return v___x_4794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26(lean_object* v_n_4795_, lean_object* v_lo_4796_, lean_object* v_hi_4797_, lean_object* v_hhi_4798_, lean_object* v_pivot_4799_, lean_object* v_as_4800_, lean_object* v_i_4801_, lean_object* v_k_4802_, lean_object* v_ilo_4803_, lean_object* v_ik_4804_, lean_object* v_w_4805_){
_start:
{
lean_object* v___x_4806_; 
v___x_4806_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___redArg(v_hi_4797_, v_pivot_4799_, v_as_4800_, v_i_4801_, v_k_4802_);
return v___x_4806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26___boxed(lean_object* v_n_4807_, lean_object* v_lo_4808_, lean_object* v_hi_4809_, lean_object* v_hhi_4810_, lean_object* v_pivot_4811_, lean_object* v_as_4812_, lean_object* v_i_4813_, lean_object* v_k_4814_, lean_object* v_ilo_4815_, lean_object* v_ik_4816_, lean_object* v_w_4817_){
_start:
{
lean_object* v_res_4818_; 
v_res_4818_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__21_spec__26(v_n_4807_, v_lo_4808_, v_hi_4809_, v_hhi_4810_, v_pivot_4811_, v_as_4812_, v_i_4813_, v_k_4814_, v_ilo_4815_, v_ik_4816_, v_w_4817_);
lean_dec_ref(v_pivot_4811_);
lean_dec(v_hi_4809_);
lean_dec(v_lo_4808_);
lean_dec(v_n_4807_);
return v_res_4818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30(lean_object* v_n_4819_, lean_object* v_lo_4820_, lean_object* v_hi_4821_, lean_object* v_hhi_4822_, lean_object* v_pivot_4823_, lean_object* v_as_4824_, lean_object* v_i_4825_, lean_object* v_k_4826_, lean_object* v_ilo_4827_, lean_object* v_ik_4828_, lean_object* v_w_4829_){
_start:
{
lean_object* v___x_4830_; 
v___x_4830_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___redArg(v_hi_4821_, v_pivot_4823_, v_as_4824_, v_i_4825_, v_k_4826_);
return v___x_4830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30___boxed(lean_object* v_n_4831_, lean_object* v_lo_4832_, lean_object* v_hi_4833_, lean_object* v_hhi_4834_, lean_object* v_pivot_4835_, lean_object* v_as_4836_, lean_object* v_i_4837_, lean_object* v_k_4838_, lean_object* v_ilo_4839_, lean_object* v_ik_4840_, lean_object* v_w_4841_){
_start:
{
lean_object* v_res_4842_; 
v_res_4842_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_ModuleTimes_save_spec__24_spec__30(v_n_4831_, v_lo_4832_, v_hi_4833_, v_hhi_4834_, v_pivot_4835_, v_as_4836_, v_i_4837_, v_k_4838_, v_ilo_4839_, v_ik_4840_, v_w_4841_);
lean_dec_ref(v_pivot_4835_);
lean_dec(v_hi_4833_);
lean_dec(v_lo_4832_);
lean_dec(v_n_4831_);
return v_res_4842_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9(lean_object* v_00_u03b2_4843_, lean_object* v_i_4844_, lean_object* v_source_4845_, lean_object* v_target_4846_){
_start:
{
lean_object* v___x_4847_; 
v___x_4847_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9___redArg(v_i_4844_, v_source_4845_, v_target_4846_);
return v___x_4847_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9_spec__30(lean_object* v_00_u03b2_4848_, lean_object* v_x_4849_, lean_object* v_x_4850_){
_start:
{
lean_object* v___x_4851_; 
v___x_4851_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_ModuleTimes_save_spec__6_spec__7_spec__9_spec__30___redArg(v_x_4849_, v_x_4850_);
return v___x_4851_;
}
}
lean_object* runtime_initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Compare(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_ModuleTimes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_ModuleTimes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_Log(uint8_t builtin);
lean_object* initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* initialize_Init_Data_String_Compare(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_ModuleTimes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_ModuleTimes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_ModuleTimes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_ModuleTimes(builtin);
}
#ifdef __cplusplus
}
#endif
