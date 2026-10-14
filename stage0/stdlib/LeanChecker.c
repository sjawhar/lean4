// Lean compiler output
// Module: LeanChecker
// Imports: public import Init public meta import Init public import Lean.CoreM public import Lean.Replay public import Lake.Load.Manifest
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_searchModuleNameOfFileName(lean_object*, lean_object*);
uint8_t l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_1274053790____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(lean_object*);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* l_Lake_Manifest_load_x3f(lean_object*);
lean_object* l_Lean_Name_capitalize(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SearchPath_findAllWithExt(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_findOLean(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_elab_environment_to_kernel_env(lean_object*);
lean_object* l_Lean_Kernel_Environment_replay(lean_object*, lean_object*);
lean_object* lean_environment_free_regions(lean_object*);
lean_object* l_Lean_readModuleDataParts(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_OLeanLevel_adjustFileName(lean_object*, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
lean_object* l_Lean_Environment_constants(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* l_Lean_withImportModules___redArg(lean_object*, lean_object*, lean_object*, uint32_t);
lean_object* l_Lean_findSysroot(lean_object*);
lean_object* l_Lean_initSearchPath(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_searchPathRef;
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_replayFromImports___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromImports___closed__0;
static lean_once_cell_t l_replayFromImports___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_replayFromImports___closed__1;
static const lean_string_object l_replayFromImports___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "failed to read module data"};
static const lean_object* l_replayFromImports___closed__2 = (const lean_object*)&l_replayFromImports___closed__2_value;
static const lean_ctor_object l_replayFromImports___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_replayFromImports___closed__2_value)}};
static const lean_object* l_replayFromImports___closed__3 = (const lean_object*)&l_replayFromImports___closed__3_value;
static const lean_string_object l_replayFromImports___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "object file '"};
static const lean_object* l_replayFromImports___closed__4 = (const lean_object*)&l_replayFromImports___closed__4_value;
static const lean_string_object l_replayFromImports___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "' of module "};
static const lean_object* l_replayFromImports___closed__5 = (const lean_object*)&l_replayFromImports___closed__5_value;
static const lean_string_object l_replayFromImports___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " does not exist"};
static const lean_object* l_replayFromImports___closed__6 = (const lean_object*)&l_replayFromImports___closed__6_value;
LEAN_EXPORT lean_object* l_replayFromImports(lean_object*);
LEAN_EXPORT lean_object* l_replayFromImports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_replayFromFresh___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_replayFromFresh___lam__0___closed__0;
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_replayFromFresh___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_replayFromFresh___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_replayFromFresh___closed__0 = (const lean_object*)&l_replayFromFresh___closed__0_value;
LEAN_EXPORT lean_object* l_replayFromFresh(lean_object*);
LEAN_EXPORT lean_object* l_replayFromFresh___boxed(lean_object*, lean_object*);
static const lean_string_object l_getCurrentModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "lake-manifest.json"};
static const lean_object* l_getCurrentModule___closed__0 = (const lean_object*)&l_getCurrentModule___closed__0_value;
LEAN_EXPORT lean_object* l_getCurrentModule();
LEAN_EXPORT lean_object* l_getCurrentModule___boxed(lean_object*);
static const lean_string_object l_List_partition_loop___at___00main_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_List_partition_loop___at___00main_spec__0___closed__0 = (const lean_object*)&l_List_partition_loop___at___00main_spec__0___closed__0_value;
static lean_once_cell_t l_List_partition_loop___at___00main_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_partition_loop___at___00main_spec__0___closed__1;
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00main_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Could not resolve module: "};
static const lean_object* l_List_mapM_loop___at___00main_spec__6___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00main_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "replaying "};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " with --fresh"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--fresh"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Could not find any oleans for: "};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "leanchecker found a problem in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static const lean_ctor_object l_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_main___closed__1 = (const lean_object*)&l_main___closed__1_value;
static const lean_array_object l_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__2 = (const lean_object*)&l_main___closed__2_value;
static const lean_string_object l_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "--fresh flag is only valid when specifying a single module:\n"};
static const lean_object* l_main___closed__3 = (const lean_object*)&l_main___closed__3_value;
static const lean_string_object l_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-v"};
static const lean_object* l_main___closed__4 = (const lean_object*)&l_main___closed__4_value;
static const lean_string_object l_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--verbose"};
static const lean_object* l_main___closed__5 = (const lean_object*)&l_main___closed__5_value;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(lean_object* v_as_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_b_4_){
_start:
{
uint8_t v___x_6_; 
v___x_6_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; 
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v_b_4_);
return v___x_7_;
}
else
{
lean_object* v_snd_8_; lean_object* v_fst_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_42_; 
v_snd_8_ = lean_ctor_get(v_b_4_, 1);
v_fst_9_ = lean_ctor_get(v_b_4_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v_b_4_);
if (v_isSharedCheck_42_ == 0)
{
v___x_11_ = v_b_4_;
v_isShared_12_ = v_isSharedCheck_42_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_snd_8_);
lean_inc(v_fst_9_);
lean_dec(v_b_4_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_42_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v_array_13_; lean_object* v_start_14_; lean_object* v_stop_15_; uint8_t v___x_16_; 
v_array_13_ = lean_ctor_get(v_snd_8_, 0);
v_start_14_ = lean_ctor_get(v_snd_8_, 1);
v_stop_15_ = lean_ctor_get(v_snd_8_, 2);
v___x_16_ = lean_nat_dec_lt(v_start_14_, v_stop_15_);
if (v___x_16_ == 0)
{
lean_object* v___x_18_; 
if (v_isShared_12_ == 0)
{
v___x_18_ = v___x_11_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_fst_9_);
lean_ctor_set(v_reuseFailAlloc_20_, 1, v_snd_8_);
v___x_18_ = v_reuseFailAlloc_20_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
lean_object* v___x_19_; 
v___x_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
return v___x_19_;
}
}
else
{
lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_38_; 
lean_inc(v_stop_15_);
lean_inc(v_start_14_);
lean_inc_ref(v_array_13_);
v_isSharedCheck_38_ = !lean_is_exclusive(v_snd_8_);
if (v_isSharedCheck_38_ == 0)
{
lean_object* v_unused_39_; lean_object* v_unused_40_; lean_object* v_unused_41_; 
v_unused_39_ = lean_ctor_get(v_snd_8_, 2);
lean_dec(v_unused_39_);
v_unused_40_ = lean_ctor_get(v_snd_8_, 1);
lean_dec(v_unused_40_);
v_unused_41_ = lean_ctor_get(v_snd_8_, 0);
lean_dec(v_unused_41_);
v___x_22_ = v_snd_8_;
v_isShared_23_ = v_isSharedCheck_38_;
goto v_resetjp_21_;
}
else
{
lean_dec(v_snd_8_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_38_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v_a_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_29_; 
v_a_24_ = lean_array_uget_borrowed(v_as_1_, v_i_3_);
v___x_25_ = lean_array_fget(v_array_13_, v_start_14_);
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = lean_nat_add(v_start_14_, v___x_26_);
lean_dec(v_start_14_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_27_);
v___x_29_ = v___x_22_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_array_13_);
lean_ctor_set(v_reuseFailAlloc_37_, 1, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_37_, 2, v_stop_15_);
v___x_29_ = v_reuseFailAlloc_37_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
lean_object* v___x_30_; lean_object* v___x_32_; 
lean_inc(v_a_24_);
v___x_30_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_9_, v_a_24_, v___x_25_);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 1, v___x_29_);
lean_ctor_set(v___x_11_, 0, v___x_30_);
v___x_32_ = v___x_11_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_29_);
v___x_32_ = v_reuseFailAlloc_36_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
size_t v___x_33_; size_t v___x_34_; 
v___x_33_ = ((size_t)1ULL);
v___x_34_ = lean_usize_add(v_i_3_, v___x_33_);
v_i_3_ = v___x_34_;
v_b_4_ = v___x_32_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0___boxed(lean_object* v_as_43_, lean_object* v_sz_44_, lean_object* v_i_45_, lean_object* v_b_46_, lean_object* v___y_47_){
_start:
{
size_t v_sz_boxed_48_; size_t v_i_boxed_49_; lean_object* v_res_50_; 
v_sz_boxed_48_ = lean_unbox_usize(v_sz_44_);
lean_dec(v_sz_44_);
v_i_boxed_49_ = lean_unbox_usize(v_i_45_);
lean_dec(v_i_45_);
v_res_50_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_as_43_, v_sz_boxed_48_, v_i_boxed_49_, v_b_46_);
lean_dec_ref(v_as_43_);
return v_res_50_;
}
}
static lean_object* _init_l_replayFromImports___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_unsigned_to_nat(16u);
v___x_53_ = lean_mk_array(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static uint8_t _init_l_replayFromImports___closed__1(void){
_start:
{
uint8_t v___x_54_; uint8_t v___x_55_; 
v___x_54_ = 2;
v___x_55_ = l_Lean_instOrdOLeanLevel_ord(v___x_54_, v___x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_replayFromImports(lean_object* v_module_62_){
_start:
{
lean_object* v___x_64_; 
lean_inc(v_module_62_);
v___x_64_ = l_Lean_findOLean(v_module_62_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_190_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_190_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_190_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_190_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
uint8_t v___x_69_; lean_object* v___y_71_; uint8_t v___y_72_; lean_object* v___y_73_; lean_object* v___y_74_; lean_object* v___y_75_; lean_object* v___y_76_; uint8_t v___y_77_; uint8_t v___y_78_; lean_object* v_fnames_139_; 
v___x_69_ = l_System_FilePath_pathExists(v_a_65_);
if (v___x_69_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_166_ = ((lean_object*)(l_replayFromImports___closed__4));
v___x_167_ = lean_string_append(v___x_166_, v_a_65_);
lean_dec(v_a_65_);
v___x_168_ = ((lean_object*)(l_replayFromImports___closed__5));
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
v___x_170_ = 1;
v___x_171_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_62_, v___x_170_);
v___x_172_ = lean_string_append(v___x_169_, v___x_171_);
lean_dec_ref(v___x_171_);
v___x_173_ = ((lean_object*)(l_replayFromImports___closed__6));
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
v___x_175_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
if (v_isShared_68_ == 0)
{
lean_ctor_set_tag(v___x_67_, 1);
lean_ctor_set(v___x_67_, 0, v___x_175_);
v___x_177_ = v___x_67_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
lean_del_object(v___x_67_);
lean_dec(v_module_62_);
v___x_179_ = lean_unsigned_to_nat(1u);
v___x_180_ = lean_mk_empty_array_with_capacity(v___x_179_);
lean_inc_n(v_a_65_, 2);
v___x_181_ = lean_array_push(v___x_180_, v_a_65_);
v___x_182_ = 1;
v___x_183_ = l_Lean_OLeanLevel_adjustFileName(v_a_65_, v___x_182_);
v___x_184_ = l_System_FilePath_pathExists(v___x_183_);
if (v___x_184_ == 0)
{
lean_dec_ref(v___x_183_);
lean_dec(v_a_65_);
v_fnames_139_ = v___x_181_;
goto v___jp_138_;
}
else
{
uint8_t v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; 
v___x_185_ = 2;
v___x_186_ = l_Lean_OLeanLevel_adjustFileName(v_a_65_, v___x_185_);
v___x_187_ = l_System_FilePath_pathExists(v___x_186_);
v___x_188_ = lean_array_push(v___x_181_, v___x_183_);
if (v___x_187_ == 0)
{
lean_dec_ref(v___x_186_);
v_fnames_139_ = v___x_188_;
goto v___jp_138_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_array_push(v___x_188_, v___x_186_);
v_fnames_139_ = v___x_189_;
goto v___jp_138_;
}
}
}
v___jp_70_:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v_imports_81_; lean_object* v___x_82_; 
v___x_79_ = l_Lean_instInhabitedImportState_default;
v___x_80_ = lean_st_mk_ref(v___x_79_);
v_imports_81_ = lean_ctor_get(v___y_74_, 0);
lean_inc_ref(v_imports_81_);
lean_dec_ref(v___y_74_);
lean_inc(v___y_71_);
v___x_82_ = l_Lean_importModulesCore(v_imports_81_, v___y_72_, v___y_71_, v___y_78_, v___y_77_, v___x_80_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; uint32_t v___x_85_; lean_object* v___x_86_; 
lean_dec_ref_known(v___x_82_, 1);
v___x_83_ = lean_st_ref_get(v___x_80_);
lean_dec(v___x_80_);
v___x_84_ = l_Lean_Options_empty;
v___x_85_ = 0;
v___x_86_ = l_Lean_finalizeImport(v___x_83_, v_imports_81_, v___x_84_, v___x_85_, v___y_77_, v___y_77_, v___y_72_, v___x_69_, v___y_77_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v_fst_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_128_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_sub(v___y_75_, v___x_88_);
lean_dec(v___y_75_);
v___x_90_ = lean_array_fget(v___y_73_, v___x_89_);
lean_dec(v___x_89_);
lean_dec_ref(v___y_73_);
v_fst_91_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v___x_90_, 1);
lean_dec(v_unused_129_);
v___x_93_ = v___x_90_;
v_isShared_94_ = v_isSharedCheck_128_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_fst_91_);
lean_dec(v___x_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_128_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_constNames_95_; lean_object* v_constants_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v_constNames_95_ = lean_ctor_get(v_fst_91_, 1);
lean_inc_ref(v_constNames_95_);
v_constants_96_ = lean_ctor_get(v_fst_91_, 2);
lean_inc_ref(v_constants_96_);
lean_dec(v_fst_91_);
v___x_97_ = lean_obj_once(&l_replayFromImports___closed__0, &l_replayFromImports___closed__0_once, _init_l_replayFromImports___closed__0);
lean_inc(v___y_76_);
v___x_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_98_, 0, v___y_76_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_array_get_size(v_constants_96_);
v___x_100_ = l_Array_toSubarray___redArg(v_constants_96_, v___y_76_, v___x_99_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v___x_100_);
lean_ctor_set(v___x_93_, 0, v___x_98_);
v___x_102_ = v___x_93_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_98_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___x_100_);
v___x_102_ = v_reuseFailAlloc_127_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
size_t v_sz_103_; size_t v___x_104_; lean_object* v___x_105_; 
v_sz_103_ = lean_array_size(v_constNames_95_);
v___x_104_ = ((size_t)0ULL);
v___x_105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_constNames_95_, v_sz_103_, v___x_104_, v___x_102_);
lean_dec_ref(v_constNames_95_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v_fst_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v_fst_107_ = lean_ctor_get(v_a_106_, 0);
lean_inc(v_fst_107_);
lean_dec(v_a_106_);
lean_inc(v_a_87_);
v___x_108_ = lean_elab_environment_to_kernel_env(v_a_87_);
v___x_109_ = l_Lean_Kernel_Environment_replay(v_fst_107_, v___x_108_);
lean_dec(v_fst_107_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v___x_110_; 
lean_dec_ref_known(v___x_109_, 1);
v___x_110_ = lean_environment_free_regions(v_a_87_);
return v___x_110_;
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
lean_dec(v_a_87_);
v_a_111_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_109_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_109_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec(v_a_87_);
v_a_119_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_105_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_105_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
lean_dec(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_73_);
v_a_130_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_86_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_86_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_dec_ref(v_imports_81_);
lean_dec(v___x_80_);
lean_dec(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_73_);
return v___x_82_;
}
}
v___jp_138_:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lean_readModuleDataParts(v_fnames_139_);
lean_dec_ref(v_fnames_139_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_157_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_157_ == 0)
{
v___x_143_ = v___x_140_;
v_isShared_144_ = v_isSharedCheck_157_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_157_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_145_ = lean_array_get_size(v_a_141_);
v___x_146_ = lean_unsigned_to_nat(0u);
v___x_147_ = lean_nat_dec_eq(v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v_fst_149_; uint8_t v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
lean_del_object(v___x_143_);
v___x_148_ = lean_array_fget_borrowed(v_a_141_, v___x_146_);
v_fst_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc(v_fst_149_);
v___x_150_ = 2;
v___x_151_ = lean_box(1);
v___x_152_ = lean_uint8_once(&l_replayFromImports___closed__1, &l_replayFromImports___closed__1_once, _init_l_replayFromImports___closed__1);
if (v___x_152_ == 0)
{
v___y_71_ = v___x_151_;
v___y_72_ = v___x_150_;
v___y_73_ = v_a_141_;
v___y_74_ = v_fst_149_;
v___y_75_ = v___x_145_;
v___y_76_ = v___x_146_;
v___y_77_ = v___x_147_;
v___y_78_ = v___x_69_;
goto v___jp_70_;
}
else
{
v___y_71_ = v___x_151_;
v___y_72_ = v___x_150_;
v___y_73_ = v_a_141_;
v___y_74_ = v_fst_149_;
v___y_75_ = v___x_145_;
v___y_76_ = v___x_146_;
v___y_77_ = v___x_147_;
v___y_78_ = v___x_147_;
goto v___jp_70_;
}
}
else
{
lean_object* v___x_153_; lean_object* v___x_155_; 
lean_dec(v_a_141_);
v___x_153_ = ((lean_object*)(l_replayFromImports___closed__3));
if (v_isShared_144_ == 0)
{
lean_ctor_set_tag(v___x_143_, 1);
lean_ctor_set(v___x_143_, 0, v___x_153_);
v___x_155_ = v___x_143_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
v_a_158_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_140_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_140_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec(v_module_62_);
v_a_191_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_64_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_64_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromImports___boxed(lean_object* v_module_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_replayFromImports(v_module_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(lean_object* v_t_202_, lean_object* v_init_203_){
_start:
{
lean_object* v_key_204_; lean_object* v_val_x3f_205_; lean_object* v_children_206_; lean_object* v_s_208_; 
v_key_204_ = lean_ctor_get(v_t_202_, 0);
lean_inc(v_key_204_);
v_val_x3f_205_ = lean_ctor_get(v_t_202_, 1);
lean_inc(v_val_x3f_205_);
v_children_206_ = lean_ctor_get(v_t_202_, 2);
lean_inc_ref(v_children_206_);
lean_dec_ref(v_t_202_);
if (lean_obj_tag(v_val_x3f_205_) == 1)
{
lean_object* v_val_219_; lean_object* v___x_220_; 
v_val_219_ = lean_ctor_get(v_val_x3f_205_, 0);
lean_inc(v_val_219_);
lean_dec_ref_known(v_val_x3f_205_, 1);
v___x_220_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(v_init_203_, v_key_204_, v_val_219_);
v_s_208_ = v___x_220_;
goto v___jp_207_;
}
else
{
lean_dec(v_val_x3f_205_);
lean_dec(v_key_204_);
v_s_208_ = v_init_203_;
goto v___jp_207_;
}
v___jp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_209_ = lean_unsigned_to_nat(0u);
v___x_210_ = lean_array_get_size(v_children_206_);
v___x_211_ = lean_nat_dec_lt(v___x_209_, v___x_210_);
if (v___x_211_ == 0)
{
lean_dec_ref(v_children_206_);
return v_s_208_;
}
else
{
uint8_t v___x_212_; 
v___x_212_ = lean_nat_dec_le(v___x_210_, v___x_210_);
if (v___x_212_ == 0)
{
if (v___x_211_ == 0)
{
lean_dec_ref(v_children_206_);
return v_s_208_;
}
else
{
size_t v___x_213_; size_t v___x_214_; lean_object* v___x_215_; 
v___x_213_ = ((size_t)0ULL);
v___x_214_ = lean_usize_of_nat(v___x_210_);
v___x_215_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(v_children_206_, v___x_213_, v___x_214_, v_s_208_);
lean_dec_ref(v_children_206_);
return v___x_215_;
}
}
else
{
size_t v___x_216_; size_t v___x_217_; lean_object* v___x_218_; 
v___x_216_ = ((size_t)0ULL);
v___x_217_ = lean_usize_of_nat(v___x_210_);
v___x_218_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(v_children_206_, v___x_216_, v___x_217_, v_s_208_);
lean_dec_ref(v_children_206_);
return v___x_218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(lean_object* v_as_221_, size_t v_i_222_, size_t v_stop_223_, lean_object* v_b_224_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = lean_usize_dec_eq(v_i_222_, v_stop_223_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; size_t v___x_228_; size_t v___x_229_; 
v___x_226_ = lean_array_uget_borrowed(v_as_221_, v_i_222_);
lean_inc(v___x_226_);
v___x_227_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(v___x_226_, v_b_224_);
v___x_228_ = ((size_t)1ULL);
v___x_229_ = lean_usize_add(v_i_222_, v___x_228_);
v_i_222_ = v___x_229_;
v_b_224_ = v___x_227_;
goto _start;
}
else
{
return v_b_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1___boxed(lean_object* v_as_231_, lean_object* v_i_232_, lean_object* v_stop_233_, lean_object* v_b_234_){
_start:
{
size_t v_i_boxed_235_; size_t v_stop_boxed_236_; lean_object* v_res_237_; 
v_i_boxed_235_ = lean_unbox_usize(v_i_232_);
lean_dec(v_i_232_);
v_stop_boxed_236_ = lean_unbox_usize(v_stop_233_);
lean_dec(v_stop_233_);
v_res_237_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(v_as_231_, v_i_boxed_235_, v_stop_boxed_236_, v_b_234_);
lean_dec_ref(v_as_231_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0(lean_object* v_t_238_, lean_object* v_init_239_){
_start:
{
switch(lean_obj_tag(v_t_238_))
{
case 0:
{
lean_object* v_tree_240_; lean_object* v___x_241_; 
v_tree_240_ = lean_ctor_get(v_t_238_, 1);
lean_inc_ref(v_tree_240_);
lean_dec_ref_known(v_t_238_, 2);
v___x_241_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(v_tree_240_, v_init_239_);
return v___x_241_;
}
case 1:
{
lean_object* v_key_242_; lean_object* v_entry_x3f_243_; lean_object* v_children_244_; lean_object* v_s_246_; 
v_key_242_ = lean_ctor_get(v_t_238_, 0);
lean_inc(v_key_242_);
v_entry_x3f_243_ = lean_ctor_get(v_t_238_, 1);
lean_inc(v_entry_x3f_243_);
v_children_244_ = lean_ctor_get(v_t_238_, 2);
lean_inc_ref(v_children_244_);
lean_dec_ref_known(v_t_238_, 4);
if (lean_obj_tag(v_entry_x3f_243_) == 1)
{
lean_object* v_val_257_; lean_object* v_fst_258_; lean_object* v___x_259_; 
v_val_257_ = lean_ctor_get(v_entry_x3f_243_, 0);
lean_inc(v_val_257_);
lean_dec_ref_known(v_entry_x3f_243_, 1);
v_fst_258_ = lean_ctor_get(v_val_257_, 0);
lean_inc(v_fst_258_);
lean_dec(v_val_257_);
v___x_259_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(v_init_239_, v_key_242_, v_fst_258_);
v_s_246_ = v___x_259_;
goto v___jp_245_;
}
else
{
lean_dec(v_entry_x3f_243_);
lean_dec(v_key_242_);
v_s_246_ = v_init_239_;
goto v___jp_245_;
}
v___jp_245_:
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = lean_array_get_size(v_children_244_);
v___x_249_ = lean_nat_dec_lt(v___x_247_, v___x_248_);
if (v___x_249_ == 0)
{
lean_dec_ref(v_children_244_);
return v_s_246_;
}
else
{
uint8_t v___x_250_; 
v___x_250_ = lean_nat_dec_le(v___x_248_, v___x_248_);
if (v___x_250_ == 0)
{
if (v___x_249_ == 0)
{
lean_dec_ref(v_children_244_);
return v_s_246_;
}
else
{
size_t v___x_251_; size_t v___x_252_; lean_object* v___x_253_; 
v___x_251_ = ((size_t)0ULL);
v___x_252_ = lean_usize_of_nat(v___x_248_);
v___x_253_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1(v_children_244_, v___x_251_, v___x_252_, v_s_246_);
lean_dec_ref(v_children_244_);
return v___x_253_;
}
}
else
{
size_t v___x_254_; size_t v___x_255_; lean_object* v___x_256_; 
v___x_254_ = ((size_t)0ULL);
v___x_255_ = lean_usize_of_nat(v___x_248_);
v___x_256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1(v_children_244_, v___x_254_, v___x_255_, v_s_246_);
lean_dec_ref(v_children_244_);
return v___x_256_;
}
}
}
}
default: 
{
lean_object* v_key_260_; lean_object* v_entry_261_; lean_object* v_expanded_262_; lean_object* v_s_264_; lean_object* v___x_277_; 
v_key_260_ = lean_ctor_get(v_t_238_, 0);
lean_inc(v_key_260_);
v_entry_261_ = lean_ctor_get(v_t_238_, 1);
lean_inc_ref(v_entry_261_);
v_expanded_262_ = lean_ctor_get(v_t_238_, 2);
lean_inc_ref(v_expanded_262_);
lean_dec_ref_known(v_t_238_, 3);
v___x_277_ = lean_thunk_get_own(v_entry_261_);
lean_dec_ref(v_entry_261_);
if (lean_obj_tag(v___x_277_) == 1)
{
lean_object* v_val_278_; lean_object* v_fst_279_; lean_object* v___x_280_; 
v_val_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_val_278_);
lean_dec_ref_known(v___x_277_, 1);
v_fst_279_ = lean_ctor_get(v_val_278_, 0);
lean_inc(v_fst_279_);
lean_dec(v_val_278_);
v___x_280_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_ReducibilityAttrs_0__Lean_initFn_00___x40_Lean_ReducibilityAttrs_3557922905____hygCtx___hyg_2__spec__1_spec__2___redArg(v_init_239_, v_key_260_, v_fst_279_);
v_s_264_ = v___x_280_;
goto v___jp_263_;
}
else
{
lean_dec(v___x_277_);
lean_dec(v_key_260_);
v_s_264_ = v_init_239_;
goto v___jp_263_;
}
v___jp_263_:
{
lean_object* v___x_265_; lean_object* v_fst_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_265_ = lean_thunk_get_own(v_expanded_262_);
lean_dec_ref(v_expanded_262_);
v_fst_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_fst_266_);
lean_dec(v___x_265_);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_array_get_size(v_fst_266_);
v___x_269_ = lean_nat_dec_lt(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_dec(v_fst_266_);
return v_s_264_;
}
else
{
uint8_t v___x_270_; 
v___x_270_ = lean_nat_dec_le(v___x_268_, v___x_268_);
if (v___x_270_ == 0)
{
if (v___x_269_ == 0)
{
lean_dec(v_fst_266_);
return v_s_264_;
}
else
{
size_t v___x_271_; size_t v___x_272_; lean_object* v___x_273_; 
v___x_271_ = ((size_t)0ULL);
v___x_272_ = lean_usize_of_nat(v___x_268_);
v___x_273_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1(v_fst_266_, v___x_271_, v___x_272_, v_s_264_);
lean_dec(v_fst_266_);
return v___x_273_;
}
}
else
{
size_t v___x_274_; size_t v___x_275_; lean_object* v___x_276_; 
v___x_274_ = ((size_t)0ULL);
v___x_275_ = lean_usize_of_nat(v___x_268_);
v___x_276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1(v_fst_266_, v___x_274_, v___x_275_, v_s_264_);
lean_dec(v_fst_266_);
return v___x_276_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1(lean_object* v_as_281_, size_t v_i_282_, size_t v_stop_283_, lean_object* v_b_284_){
_start:
{
uint8_t v___x_285_; 
v___x_285_ = lean_usize_dec_eq(v_i_282_, v_stop_283_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; size_t v___x_288_; size_t v___x_289_; 
v___x_286_ = lean_array_uget_borrowed(v_as_281_, v_i_282_);
lean_inc(v___x_286_);
v___x_287_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0(v___x_286_, v_b_284_);
v___x_288_ = ((size_t)1ULL);
v___x_289_ = lean_usize_add(v_i_282_, v___x_288_);
v_i_282_ = v___x_289_;
v_b_284_ = v___x_287_;
goto _start;
}
else
{
return v_b_284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1___boxed(lean_object* v_as_291_, lean_object* v_i_292_, lean_object* v_stop_293_, lean_object* v_b_294_){
_start:
{
size_t v_i_boxed_295_; size_t v_stop_boxed_296_; lean_object* v_res_297_; 
v_i_boxed_295_ = lean_unbox_usize(v_i_292_);
lean_dec(v_i_292_);
v_stop_boxed_296_ = lean_unbox_usize(v_stop_293_);
lean_dec(v_stop_293_);
v_res_297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__1(v_as_291_, v_i_boxed_295_, v_stop_boxed_296_, v_b_294_);
lean_dec_ref(v_as_291_);
return v_res_297_;
}
}
static lean_object* _init_l_replayFromFresh___lam__0___closed__0(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = lean_obj_once(&l_replayFromImports___closed__0, &l_replayFromImports___closed__0_once, _init_l_replayFromImports___closed__0);
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_298_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0(lean_object* v_env_301_){
_start:
{
uint32_t v___x_303_; lean_object* v___x_304_; 
v___x_303_ = 0;
v___x_304_ = l_Lean_mkEmptyEnvironment(v___x_303_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v_map_u2081_307_; lean_object* v___x_308_; lean_object* v_imported_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_a_305_ = lean_ctor_get(v___x_304_, 0);
lean_inc(v_a_305_);
lean_dec_ref_known(v___x_304_, 1);
v___x_306_ = l_Lean_Environment_constants(v_env_301_);
v_map_u2081_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc_ref(v_map_u2081_307_);
lean_dec_ref(v___x_306_);
v___x_308_ = lean_obj_once(&l_replayFromFresh___lam__0___closed__0, &l_replayFromFresh___lam__0___closed__0_once, _init_l_replayFromFresh___lam__0___closed__0);
v_imported_309_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0(v_map_u2081_307_, v___x_308_);
v___x_310_ = lean_elab_environment_to_kernel_env(v_a_305_);
v___x_311_ = l_Lean_Kernel_Environment_replay(v_imported_309_, v___x_310_);
lean_dec_ref(v_imported_309_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_319_; 
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_319_ == 0)
{
lean_object* v_unused_320_; 
v_unused_320_ = lean_ctor_get(v___x_311_, 0);
lean_dec(v_unused_320_);
v___x_313_ = v___x_311_;
v_isShared_314_ = v_isSharedCheck_319_;
goto v_resetjp_312_;
}
else
{
lean_dec(v___x_311_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_319_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_315_ = lean_box(0);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 0, v___x_315_);
v___x_317_ = v___x_313_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_315_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
v_a_321_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_311_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_311_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
lean_dec_ref(v_env_301_);
v_a_329_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_304_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_304_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0___boxed(lean_object* v_env_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_replayFromFresh___lam__0(v_env_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh(lean_object* v_module_341_){
_start:
{
lean_object* v___f_343_; uint8_t v___x_344_; uint8_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; uint32_t v___x_351_; lean_object* v___x_352_; 
v___f_343_ = ((lean_object*)(l_replayFromFresh___closed__0));
v___x_344_ = 0;
v___x_345_ = 1;
v___x_346_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_346_, 0, v_module_341_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*1, v___x_344_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*1 + 1, v___x_345_);
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*1 + 2, v___x_344_);
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_mk_empty_array_with_capacity(v___x_347_);
v___x_349_ = lean_array_push(v___x_348_, v___x_346_);
v___x_350_ = l_Lean_Options_empty;
v___x_351_ = 0;
v___x_352_ = l_Lean_withImportModules___redArg(v___x_349_, v___x_350_, v___f_343_, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___boxed(lean_object* v_module_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_replayFromFresh(v_module_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_getCurrentModule(){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(l_getCurrentModule___closed__0));
v___x_359_ = l_Lake_Manifest_load_x3f(v___x_358_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_374_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_374_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_374_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_374_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
if (lean_obj_tag(v_a_360_) == 0)
{
lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_364_ = lean_box(0);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_364_);
v___x_366_ = v___x_362_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
else
{
lean_object* v_val_368_; lean_object* v_name_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v_val_368_ = lean_ctor_get(v_a_360_, 0);
lean_inc(v_val_368_);
lean_dec_ref_known(v_a_360_, 1);
v_name_369_ = lean_ctor_get(v_val_368_, 0);
lean_inc(v_name_369_);
lean_dec(v_val_368_);
v___x_370_ = l_Lean_Name_capitalize(v_name_369_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_370_);
v___x_372_ = v___x_362_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_a_375_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_359_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_359_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_getCurrentModule___boxed(lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_getCurrentModule();
return v_res_384_;
}
}
static lean_object* _init_l_List_partition_loop___at___00main_spec__0___closed__1(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = ((lean_object*)(l_List_partition_loop___at___00main_spec__0___closed__0));
v___x_387_ = lean_string_utf8_byte_size(v___x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
if (lean_obj_tag(v_a_388_) == 0)
{
lean_object* v_fst_390_; lean_object* v_snd_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_400_; 
v_fst_390_ = lean_ctor_get(v_a_389_, 0);
v_snd_391_ = lean_ctor_get(v_a_389_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_a_389_);
if (v_isSharedCheck_400_ == 0)
{
v___x_393_ = v_a_389_;
v_isShared_394_ = v_isSharedCheck_400_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_snd_391_);
lean_inc(v_fst_390_);
lean_dec(v_a_389_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_400_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_398_; 
v___x_395_ = l_List_reverse___redArg(v_fst_390_);
v___x_396_ = l_List_reverse___redArg(v_snd_391_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 1, v___x_396_);
lean_ctor_set(v___x_393_, 0, v___x_395_);
v___x_398_ = v___x_393_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v___x_396_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
else
{
lean_object* v_head_401_; lean_object* v_tail_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_429_; 
v_head_401_ = lean_ctor_get(v_a_388_, 0);
v_tail_402_ = lean_ctor_get(v_a_388_, 1);
v_isSharedCheck_429_ = !lean_is_exclusive(v_a_388_);
if (v_isSharedCheck_429_ == 0)
{
v___x_404_ = v_a_388_;
v_isShared_405_ = v_isSharedCheck_429_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_tail_402_);
lean_inc(v_head_401_);
lean_dec(v_a_388_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_429_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_428_; 
v_fst_406_ = lean_ctor_get(v_a_389_, 0);
v_snd_407_ = lean_ctor_get(v_a_389_, 1);
v_isSharedCheck_428_ = !lean_is_exclusive(v_a_389_);
if (v_isSharedCheck_428_ == 0)
{
v___x_409_ = v_a_389_;
v_isShared_410_ = v_isSharedCheck_428_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_inc(v_fst_406_);
lean_dec(v_a_389_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_428_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_419_ = ((lean_object*)(l_List_partition_loop___at___00main_spec__0___closed__0));
v___x_420_ = lean_string_utf8_byte_size(v_head_401_);
v___x_421_ = lean_obj_once(&l_List_partition_loop___at___00main_spec__0___closed__1, &l_List_partition_loop___at___00main_spec__0___closed__1_once, _init_l_List_partition_loop___at___00main_spec__0___closed__1);
v___x_422_ = lean_nat_dec_le(v___x_421_, v___x_420_);
if (v___x_422_ == 0)
{
goto v___jp_411_;
}
else
{
lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = lean_string_memcmp(v_head_401_, v___x_419_, v___x_423_, v___x_423_, v___x_421_);
if (v___x_424_ == 0)
{
goto v___jp_411_;
}
else
{
lean_object* v___x_425_; lean_object* v___x_426_; 
lean_del_object(v___x_409_);
lean_del_object(v___x_404_);
v___x_425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_425_, 0, v_head_401_);
lean_ctor_set(v___x_425_, 1, v_fst_406_);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
lean_ctor_set(v___x_426_, 1, v_snd_407_);
v_a_388_ = v_tail_402_;
v_a_389_ = v___x_426_;
goto _start;
}
}
v___jp_411_:
{
lean_object* v___x_413_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v_snd_407_);
v___x_413_ = v___x_404_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_head_401_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_snd_407_);
v___x_413_ = v_reuseFailAlloc_418_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_415_; 
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___x_413_);
v___x_415_ = v___x_409_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_fst_406_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v___x_413_);
v___x_415_ = v_reuseFailAlloc_417_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
v_a_388_ = v_tail_402_;
v_a_389_ = v___x_415_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0(lean_object* v_head_430_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_replayFromImports(v_head_430_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_432_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_432_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
lean_ctor_set_tag(v___x_435_, 1);
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_a_441_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_432_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_432_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
lean_ctor_set_tag(v___x_443_, 0);
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0___boxed(lean_object* v_head_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0(v_head_449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg(lean_object* v_as_x27_452_, lean_object* v_b_453_){
_start:
{
if (lean_obj_tag(v_as_x27_452_) == 0)
{
lean_object* v___x_455_; 
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v_b_453_);
return v___x_455_;
}
else
{
lean_object* v_head_456_; lean_object* v_tail_457_; lean_object* v___f_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v_head_456_ = lean_ctor_get(v_as_x27_452_, 0);
v_tail_457_ = lean_ctor_get(v_as_x27_452_, 1);
lean_inc_n(v_head_456_, 2);
v___f_458_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00main_spec__3___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_458_, 0, v_head_456_);
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_io_as_task(v___f_458_, v___x_459_);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v_head_456_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = lean_array_push(v_b_453_, v___x_461_);
v_as_x27_452_ = v_tail_457_;
v_b_453_ = v___x_462_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___redArg___boxed(lean_object* v_as_x27_464_, lean_object* v_b_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg(v_as_x27_464_, v_b_465_);
lean_dec(v_as_x27_464_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6(lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
if (lean_obj_tag(v_x_469_) == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = l_List_reverse___redArg(v_x_470_);
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
else
{
lean_object* v_head_474_; lean_object* v_tail_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_489_; 
v_head_474_ = lean_ctor_get(v_x_469_, 0);
v_tail_475_ = lean_ctor_get(v_x_469_, 1);
v_isSharedCheck_489_ = !lean_is_exclusive(v_x_469_);
if (v_isSharedCheck_489_ == 0)
{
v___x_477_ = v_x_469_;
v_isShared_478_ = v_isSharedCheck_489_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_tail_475_);
lean_inc(v_head_474_);
lean_dec(v_x_469_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_489_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; uint8_t v___x_480_; 
lean_inc(v_head_474_);
v___x_479_ = l_String_toName(v_head_474_);
v___x_480_ = l_Lean_Name_isAnonymous(v___x_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_482_; 
lean_dec(v_head_474_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v_x_470_);
lean_ctor_set(v___x_477_, 0, v___x_479_);
v___x_482_ = v___x_477_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_479_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_x_470_);
v___x_482_ = v_reuseFailAlloc_484_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
v_x_469_ = v_tail_475_;
v_x_470_ = v___x_482_;
goto _start;
}
}
else
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec(v___x_479_);
lean_del_object(v___x_477_);
lean_dec(v_tail_475_);
lean_dec(v_x_470_);
v___x_485_ = ((lean_object*)(l_List_mapM_loop___at___00main_spec__6___closed__0));
v___x_486_ = lean_string_append(v___x_485_, v_head_474_);
lean_dec(v_head_474_);
v___x_487_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
v___x_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
return v___x_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00main_spec__6___boxed(lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_List_mapM_loop___at___00main_spec__6(v_x_490_, v_x_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg(uint8_t v___y_496_, lean_object* v_as_x27_497_, lean_object* v_b_498_){
_start:
{
if (lean_obj_tag(v_as_x27_497_) == 0)
{
lean_object* v___x_500_; 
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v_b_498_);
return v___x_500_;
}
else
{
lean_object* v_head_501_; lean_object* v_tail_502_; lean_object* v___x_503_; 
v_head_501_ = lean_ctor_get(v_as_x27_497_, 0);
v_tail_502_ = lean_ctor_get(v_as_x27_497_, 1);
v___x_503_ = lean_box(0);
if (v___y_496_ == 0)
{
goto v___jp_504_;
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_507_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0));
lean_inc(v_head_501_);
v___x_508_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_501_, v___y_496_);
v___x_509_ = lean_string_append(v___x_507_, v___x_508_);
lean_dec_ref(v___x_508_);
v___x_510_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__1));
v___x_511_ = lean_string_append(v___x_509_, v___x_510_);
v___x_512_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v___x_511_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_dec_ref_known(v___x_512_, 1);
goto v___jp_504_;
}
else
{
return v___x_512_;
}
}
v___jp_504_:
{
lean_object* v___x_505_; 
lean_inc(v_head_501_);
v___x_505_ = l_replayFromFresh(v_head_501_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_dec_ref_known(v___x_505_, 1);
v_as_x27_497_ = v_tail_502_;
v_b_498_ = v___x_503_;
goto _start;
}
else
{
return v___x_505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___redArg___boxed(lean_object* v___y_513_, lean_object* v_as_x27_514_, lean_object* v_b_515_, lean_object* v___y_516_){
_start:
{
uint8_t v___y_5439__boxed_517_; lean_object* v_res_518_; 
v___y_5439__boxed_517_ = lean_unbox(v___y_513_);
v_res_518_ = l_List_forIn_x27_loop___at___00main_spec__5___redArg(v___y_5439__boxed_517_, v_as_x27_514_, v_b_515_);
lean_dec(v_as_x27_514_);
return v_res_518_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0(void){
_start:
{
lean_object* v___x_519_; lean_object* v___f_520_; 
v___x_519_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_520_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_520_, 0, v___x_519_);
return v___f_520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(lean_object* v_val_522_, lean_object* v_a_523_, lean_object* v_fst_524_, lean_object* v_as_525_, size_t v_sz_526_, size_t v_i_527_, lean_object* v_b_528_){
_start:
{
lean_object* v_a_531_; uint8_t v___x_535_; 
v___x_535_ = lean_usize_dec_lt(v_i_527_, v_sz_526_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
lean_dec(v_fst_524_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v_b_528_);
return v___x_536_;
}
else
{
lean_object* v_a_537_; lean_object* v___x_538_; 
v_a_537_ = lean_array_uget_borrowed(v_as_525_, v_i_527_);
lean_inc(v_a_537_);
v___x_538_ = l_Lean_searchModuleNameOfFileName(v_a_537_, v_val_522_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___y_541_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_538_, 1);
if (lean_obj_tag(v_a_539_) == 1)
{
lean_object* v_fst_544_; lean_object* v_snd_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_562_; 
v_fst_544_ = lean_ctor_get(v_b_528_, 0);
v_snd_545_ = lean_ctor_get(v_b_528_, 1);
v_isSharedCheck_562_ = !lean_is_exclusive(v_b_528_);
if (v_isSharedCheck_562_ == 0)
{
v___x_547_ = v_b_528_;
v_isShared_548_ = v_isSharedCheck_562_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_snd_545_);
lean_inc(v_fst_544_);
lean_dec(v_b_528_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_562_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v_val_549_; lean_object* v___f_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v_val_549_ = lean_ctor_get(v_a_539_, 0);
lean_inc(v_val_549_);
lean_dec_ref_known(v_a_539_, 1);
v___f_558_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0);
v___x_559_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1));
lean_inc(v_fst_524_);
v___x_560_ = l_List_elem___redArg(v___f_558_, v___x_559_, v_fst_524_);
if (v___x_560_ == 0)
{
uint8_t v___x_561_; 
v___x_561_ = l_Lean_Name_isPrefixOf(v_a_523_, v_val_549_);
if (v___x_561_ == 0)
{
goto v___jp_553_;
}
else
{
lean_del_object(v___x_547_);
lean_dec(v_snd_545_);
goto v___jp_550_;
}
}
else
{
goto v___jp_553_;
}
v___jp_550_:
{
uint8_t v___x_551_; 
v___x_551_ = l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_1274053790____hygCtx___hyg_2__spec__1(v_val_549_, v_fst_544_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; 
v___x_552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_552_, 0, v_val_549_);
lean_ctor_set(v___x_552_, 1, v_fst_544_);
v___y_541_ = v___x_552_;
goto v___jp_540_;
}
else
{
lean_dec(v_val_549_);
v___y_541_ = v_fst_544_;
goto v___jp_540_;
}
}
v___jp_553_:
{
uint8_t v___x_554_; 
v___x_554_ = lean_name_eq(v_a_523_, v_val_549_);
if (v___x_554_ == 0)
{
lean_object* v___x_556_; 
lean_dec(v_val_549_);
if (v_isShared_548_ == 0)
{
v___x_556_ = v___x_547_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_fst_544_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_snd_545_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
v_a_531_ = v___x_556_;
goto v___jp_530_;
}
}
else
{
lean_del_object(v___x_547_);
lean_dec(v_snd_545_);
goto v___jp_550_;
}
}
}
}
else
{
lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec(v_a_539_);
v_fst_563_ = lean_ctor_get(v_b_528_, 0);
v_snd_564_ = lean_ctor_get(v_b_528_, 1);
v_isSharedCheck_571_ = !lean_is_exclusive(v_b_528_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v_b_528_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_snd_564_);
lean_inc(v_fst_563_);
lean_dec(v_b_528_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_fst_563_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v_snd_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
v_a_531_ = v___x_569_;
goto v___jp_530_;
}
}
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_box(v___x_535_);
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v___y_541_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v_a_531_ = v___x_543_;
goto v___jp_530_;
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_dec_ref(v_b_528_);
lean_dec(v_fst_524_);
v_a_572_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_538_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_538_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
v___jp_530_:
{
size_t v___x_532_; size_t v___x_533_; 
v___x_532_ = ((size_t)1ULL);
v___x_533_ = lean_usize_add(v_i_527_, v___x_532_);
v_i_527_ = v___x_533_;
v_b_528_ = v_a_531_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___boxed(lean_object* v_val_580_, lean_object* v_a_581_, lean_object* v_fst_582_, lean_object* v_as_583_, lean_object* v_sz_584_, lean_object* v_i_585_, lean_object* v_b_586_, lean_object* v___y_587_){
_start:
{
size_t v_sz_boxed_588_; size_t v_i_boxed_589_; lean_object* v_res_590_; 
v_sz_boxed_588_ = lean_unbox_usize(v_sz_584_);
lean_dec(v_sz_584_);
v_i_boxed_589_ = lean_unbox_usize(v_i_585_);
lean_dec(v_i_585_);
v_res_590_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(v_val_580_, v_a_581_, v_fst_582_, v_as_583_, v_sz_boxed_588_, v_i_boxed_589_, v_b_586_);
lean_dec_ref(v_as_583_);
lean_dec(v_a_581_);
lean_dec(v_val_580_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg(lean_object* v_val_593_, lean_object* v_fst_594_, lean_object* v_as_x27_595_, lean_object* v_b_596_){
_start:
{
if (lean_obj_tag(v_as_x27_595_) == 0)
{
lean_object* v___x_598_; 
lean_dec(v_fst_594_);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v_b_596_);
return v___x_598_;
}
else
{
lean_object* v_head_599_; lean_object* v_tail_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v_head_599_ = lean_ctor_get(v_as_x27_595_, 0);
v_tail_600_ = lean_ctor_get(v_as_x27_595_, 1);
v___x_601_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__0));
v___x_602_ = l_Lean_SearchPath_findAllWithExt(v_val_593_, v___x_601_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; uint8_t v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; size_t v_sz_607_; size_t v___x_608_; lean_object* v___x_609_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v___x_604_ = 0;
v___x_605_ = lean_box(v___x_604_);
v___x_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_606_, 0, v_b_596_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
v_sz_607_ = lean_array_size(v_a_603_);
v___x_608_ = ((size_t)0ULL);
lean_inc(v_fst_594_);
v___x_609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1(v_val_593_, v_head_599_, v_fst_594_, v_a_603_, v_sz_607_, v___x_608_, v___x_606_);
lean_dec(v_a_603_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_626_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_626_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_626_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_626_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v_snd_614_; uint8_t v___x_615_; 
v_snd_614_ = lean_ctor_get(v_a_610_, 1);
v___x_615_ = lean_unbox(v_snd_614_);
if (v___x_615_ == 0)
{
uint8_t v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
lean_dec(v_a_610_);
lean_dec(v_fst_594_);
v___x_616_ = 1;
v___x_617_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__2___redArg___closed__1));
lean_inc(v_head_599_);
v___x_618_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_599_, v___x_616_);
v___x_619_ = lean_string_append(v___x_617_, v___x_618_);
lean_dec_ref(v___x_618_);
v___x_620_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
if (v_isShared_613_ == 0)
{
lean_ctor_set_tag(v___x_612_, 1);
lean_ctor_set(v___x_612_, 0, v___x_620_);
v___x_622_ = v___x_612_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
else
{
lean_object* v_fst_624_; 
lean_del_object(v___x_612_);
v_fst_624_ = lean_ctor_get(v_a_610_, 0);
lean_inc(v_fst_624_);
lean_dec(v_a_610_);
v_as_x27_595_ = v_tail_600_;
v_b_596_ = v_fst_624_;
goto _start;
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec(v_fst_594_);
v_a_627_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_609_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_609_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_dec(v_b_596_);
lean_dec(v_fst_594_);
v_a_635_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_602_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_602_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___redArg___boxed(lean_object* v_val_643_, lean_object* v_fst_644_, lean_object* v_as_x27_645_, lean_object* v_b_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_List_forIn_x27_loop___at___00main_spec__2___redArg(v_val_643_, v_fst_644_, v_as_x27_645_, v_b_646_);
lean_dec(v_as_x27_645_);
lean_dec(v_val_643_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(uint8_t v___y_650_, lean_object* v_as_651_, size_t v_sz_652_, size_t v_i_653_, lean_object* v_b_654_){
_start:
{
uint8_t v___x_656_; 
v___x_656_ = lean_usize_dec_lt(v_i_653_, v_sz_652_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; 
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v_b_654_);
return v___x_657_;
}
else
{
lean_object* v_a_658_; lean_object* v_fst_659_; lean_object* v_snd_660_; lean_object* v___x_661_; 
v_a_658_ = lean_array_uget_borrowed(v_as_651_, v_i_653_);
v_fst_659_ = lean_ctor_get(v_a_658_, 0);
v_snd_660_ = lean_ctor_get(v_a_658_, 1);
v___x_661_ = lean_box(0);
if (v___y_650_ == 0)
{
goto v___jp_662_;
}
else
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_680_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__5___redArg___closed__0));
lean_inc(v_fst_659_);
v___x_681_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_659_, v___y_650_);
v___x_682_ = lean_string_append(v___x_680_, v___x_681_);
lean_dec_ref(v___x_681_);
v___x_683_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v___x_682_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_dec_ref_known(v___x_683_, 1);
goto v___jp_662_;
}
else
{
return v___x_683_;
}
}
v___jp_662_:
{
lean_object* v___x_663_; 
lean_inc(v_snd_660_);
v___x_663_ = lean_task_get_own(v_snd_660_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_a_664_);
lean_dec_ref_known(v___x_663_, 1);
v___x_665_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___closed__0));
lean_inc(v_fst_659_);
v___x_666_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_659_, v___x_656_);
v___x_667_ = lean_string_append(v___x_665_, v___x_666_);
lean_dec_ref(v___x_666_);
v___x_668_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_667_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v___x_668_, 0);
lean_dec(v_unused_676_);
v___x_670_ = v___x_668_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_dec(v___x_668_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 1);
lean_ctor_set(v___x_670_, 0, v_a_664_);
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_664_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
else
{
lean_dec(v_a_664_);
return v___x_668_;
}
}
else
{
size_t v___x_677_; size_t v___x_678_; 
lean_dec(v___x_663_);
v___x_677_ = ((size_t)1ULL);
v___x_678_ = lean_usize_add(v_i_653_, v___x_677_);
v_i_653_ = v___x_678_;
v_b_654_ = v___x_661_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4___boxed(lean_object* v___y_684_, lean_object* v_as_685_, lean_object* v_sz_686_, lean_object* v_i_687_, lean_object* v_b_688_, lean_object* v___y_689_){
_start:
{
uint8_t v___y_5687__boxed_690_; size_t v_sz_boxed_691_; size_t v_i_boxed_692_; lean_object* v_res_693_; 
v___y_5687__boxed_690_ = lean_unbox(v___y_684_);
v_sz_boxed_691_ = lean_unbox_usize(v_sz_686_);
lean_dec(v_sz_686_);
v_i_boxed_692_ = lean_unbox_usize(v_i_687_);
lean_dec(v_i_687_);
v_res_693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(v___y_5687__boxed_690_, v_as_685_, v_sz_boxed_691_, v_i_boxed_692_, v_b_688_);
lean_dec_ref(v_as_685_);
return v_res_693_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_702_; lean_object* v___x_703_; 
v___x_702_ = 0;
v___x_703_ = lean_box_uint32(v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_704_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = ((lean_object*)(l_main___closed__0));
v___x_710_ = l_Lean_findSysroot(v___x_709_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v___x_712_ = lean_box(0);
v___x_713_ = l_Lean_initSearchPath(v_a_711_, v___x_712_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v_fst_716_; lean_object* v_snd_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_815_; 
lean_dec_ref_known(v___x_713_, 1);
v___x_714_ = ((lean_object*)(l_main___closed__1));
v___x_715_ = l_List_partition_loop___at___00main_spec__0(v_args_704_, v___x_714_);
v_fst_716_ = lean_ctor_get(v___x_715_, 0);
v_snd_717_ = lean_ctor_get(v___x_715_, 1);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_815_ == 0)
{
v___x_719_ = v___x_715_;
v_isShared_720_ = v_isSharedCheck_815_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_snd_717_);
lean_inc(v_fst_716_);
lean_dec(v___x_715_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_815_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___f_721_; uint8_t v___y_723_; lean_object* v_targets_724_; uint8_t v___y_787_; lean_object* v___x_811_; uint8_t v___x_812_; 
v___f_721_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__0);
v___x_811_ = ((lean_object*)(l_main___closed__4));
lean_inc(v_fst_716_);
v___x_812_ = l_List_elem___redArg(v___f_721_, v___x_811_, v_fst_716_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = ((lean_object*)(l_main___closed__5));
lean_inc(v_fst_716_);
v___x_814_ = l_List_elem___redArg(v___f_721_, v___x_813_, v_fst_716_);
v___y_787_ = v___x_814_;
goto v___jp_786_;
}
else
{
v___y_787_ = v___x_812_;
goto v___jp_786_;
}
v___jp_722_:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_725_ = l_Lean_searchPathRef;
v___x_726_ = lean_st_ref_get(v___x_725_);
lean_inc(v_fst_716_);
v___x_727_ = l_List_forIn_x27_loop___at___00main_spec__2___redArg(v___x_726_, v_fst_716_, v_targets_724_, v___x_712_);
lean_dec(v_targets_724_);
lean_dec(v___x_726_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_777_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_777_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_777_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_777_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__1___closed__1));
v___x_733_ = l_List_elem___redArg(v___f_721_, v___x_732_, v_fst_716_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; 
lean_del_object(v___x_730_);
v___x_734_ = ((lean_object*)(l_main___closed__2));
v___x_735_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg(v_a_728_, v___x_734_);
lean_dec(v_a_728_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_737_; size_t v_sz_738_; size_t v___x_739_; lean_object* v___x_740_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_736_);
lean_dec_ref_known(v___x_735_, 1);
v___x_737_ = lean_box(0);
v_sz_738_ = lean_array_size(v_a_736_);
v___x_739_ = ((size_t)0ULL);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__4(v___y_723_, v_a_736_, v_sz_738_, v___x_739_, v___x_737_);
lean_dec(v_a_736_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_dec_ref_known(v___x_740_, 1);
goto v___jp_706_;
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_740_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_740_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
v_a_749_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_735_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_735_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
else
{
lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_757_ = l_List_lengthTR___redArg(v_a_728_);
v___x_758_ = lean_unsigned_to_nat(1u);
v___x_759_ = lean_nat_dec_eq(v___x_757_, v___x_758_);
lean_dec(v___x_757_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_760_ = ((lean_object*)(l_main___closed__3));
v___x_761_ = l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(v_a_728_);
v___x_762_ = lean_string_append(v___x_760_, v___x_761_);
lean_dec_ref(v___x_761_);
v___x_763_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
if (v_isShared_731_ == 0)
{
lean_ctor_set_tag(v___x_730_, 1);
lean_ctor_set(v___x_730_, 0, v___x_763_);
v___x_765_ = v___x_730_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; 
lean_del_object(v___x_730_);
v___x_767_ = lean_box(0);
v___x_768_ = l_List_forIn_x27_loop___at___00main_spec__5___redArg(v___y_723_, v_a_728_, v___x_767_);
lean_dec(v_a_728_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_dec_ref_known(v___x_768_, 1);
goto v___jp_706_;
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec(v_fst_716_);
v_a_778_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_727_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_727_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
v___jp_786_:
{
if (lean_obj_tag(v_snd_717_) == 0)
{
lean_object* v___x_788_; 
v___x_788_ = l_getCurrentModule();
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; lean_object* v___x_791_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_788_, 1);
if (v_isShared_720_ == 0)
{
lean_ctor_set_tag(v___x_719_, 1);
lean_ctor_set(v___x_719_, 1, v___x_712_);
lean_ctor_set(v___x_719_, 0, v_a_789_);
v___x_791_ = v___x_719_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_789_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_712_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v___y_723_ = v___y_787_;
v_targets_724_ = v___x_791_;
goto v___jp_722_;
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_del_object(v___x_719_);
lean_dec(v_fst_716_);
v_a_793_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_788_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_788_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
else
{
lean_object* v___x_801_; 
lean_del_object(v___x_719_);
v___x_801_ = l_List_mapM_loop___at___00main_spec__6(v_snd_717_, v___x_712_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_801_, 1);
v___y_723_ = v___y_787_;
v_targets_724_ = v_a_802_;
goto v___jp_722_;
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
lean_dec(v_fst_716_);
v_a_803_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_801_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_801_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
lean_dec(v_args_704_);
v_a_816_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_713_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_713_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec(v_args_704_);
v_a_824_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_710_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_710_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
v___jp_706_:
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = l_main___boxed__const__1;
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = _lean_main(v_args_832_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2(lean_object* v_val_835_, lean_object* v_fst_836_, lean_object* v_as_837_, lean_object* v_as_x27_838_, lean_object* v_b_839_, lean_object* v_a_840_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = l_List_forIn_x27_loop___at___00main_spec__2___redArg(v_val_835_, v_fst_836_, v_as_x27_838_, v_b_839_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__2___boxed(lean_object* v_val_843_, lean_object* v_fst_844_, lean_object* v_as_845_, lean_object* v_as_x27_846_, lean_object* v_b_847_, lean_object* v_a_848_, lean_object* v___y_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_List_forIn_x27_loop___at___00main_spec__2(v_val_843_, v_fst_844_, v_as_845_, v_as_x27_846_, v_b_847_, v_a_848_);
lean_dec(v_as_x27_846_);
lean_dec(v_as_845_);
lean_dec(v_val_843_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3(lean_object* v_as_851_, lean_object* v_as_x27_852_, lean_object* v_b_853_, lean_object* v_a_854_){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = l_List_forIn_x27_loop___at___00main_spec__3___redArg(v_as_x27_852_, v_b_853_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__3___boxed(lean_object* v_as_857_, lean_object* v_as_x27_858_, lean_object* v_b_859_, lean_object* v_a_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_List_forIn_x27_loop___at___00main_spec__3(v_as_857_, v_as_x27_858_, v_b_859_, v_a_860_);
lean_dec(v_as_x27_858_);
lean_dec(v_as_857_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5(uint8_t v___y_863_, lean_object* v_as_864_, lean_object* v_as_x27_865_, lean_object* v_b_866_, lean_object* v_a_867_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_List_forIn_x27_loop___at___00main_spec__5___redArg(v___y_863_, v_as_x27_865_, v_b_866_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__5___boxed(lean_object* v___y_870_, lean_object* v_as_871_, lean_object* v_as_x27_872_, lean_object* v_b_873_, lean_object* v_a_874_, lean_object* v___y_875_){
_start:
{
uint8_t v___y_6062__boxed_876_; lean_object* v_res_877_; 
v___y_6062__boxed_876_ = lean_unbox(v___y_870_);
v_res_877_ = l_List_forIn_x27_loop___at___00main_spec__5(v___y_6062__boxed_876_, v_as_871_, v_as_x27_872_, v_b_873_, v_a_874_);
lean_dec(v_as_x27_872_);
lean_dec(v_as_871_);
return v_res_877_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Replay(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanChecker(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Replay(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_LeanChecker(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
