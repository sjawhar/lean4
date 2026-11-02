// Lean compiler output
// Module: LeanChecker
// Imports: public import Init public meta import Init public import Lean.CoreM public import Lean.Replay public import Lake.Load.Manifest public import LeanExport.Parse
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
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_LeanExport_parseStream(lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
lean_object* lean_elab_environment_to_kernel_env(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Kernel_Environment_replay(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_DTreeMap_Internal_Impl___aux__Std__Data__DTreeMap__Internal__Lemmas______macroRules__Std__DTreeMap__Internal__Impl__tacticSimp__to__model_x5b___x5dUsing____1_spec__1___redArg(lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
uint8_t l_Lean_instBEqConstantInfo_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lake_Manifest_load_x3f(lean_object*);
lean_object* l_Lean_Name_capitalize(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*);
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
size_t lean_array_size(lean_object*);
lean_object* lean_environment_free_regions(lean_object*);
lean_object* l_Lean_readModuleDataParts(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_OLeanLevel_adjustFileName(lean_object*, uint8_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_imported_consts_force_shared(lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_withImportModules___redArg(lean_object*, lean_object*, lean_object*, uint32_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
extern lean_object* l_Lean_searchPathRef;
lean_object* l_Lean_SearchPath_findAllWithExt(lean_object*, lean_object*);
lean_object* l_Lean_searchModuleNameOfFileName(lean_object*, lean_object*);
uint8_t l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_4052238930____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(lean_object*);
lean_object* l_Lean_findSysroot(lean_object*);
lean_object* l_Lean_initSearchPath(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_println(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_println___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0(lean_object*, lean_object*);
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
static const lean_string_object l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Quotient constant mismatch on: "};
static const lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Could not find quotient constant in final kernel env: "};
static const lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_checkExport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Exactly one export file expected but got: "};
static const lean_object* l_checkExport___closed__0 = (const lean_object*)&l_checkExport___closed__0_value;
static const lean_string_object l_checkExport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean default kernel rejects the solution: "};
static const lean_object* l_checkExport___closed__1 = (const lean_object*)&l_checkExport___closed__1_value;
static const lean_string_object l_checkExport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_checkExport___closed__2 = (const lean_object*)&l_checkExport___closed__2_value;
static const lean_string_object l_checkExport___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_checkExport___closed__3 = (const lean_object*)&l_checkExport___closed__3_value;
static const lean_ctor_object l_checkExport___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_checkExport___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__4_value_aux_0),((lean_object*)&l_checkExport___closed__3_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_checkExport___closed__4 = (const lean_object*)&l_checkExport___closed__4_value;
static const lean_string_object l_checkExport___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l_checkExport___closed__5 = (const lean_object*)&l_checkExport___closed__5_value;
static const lean_ctor_object l_checkExport___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_checkExport___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__6_value_aux_0),((lean_object*)&l_checkExport___closed__5_value),LEAN_SCALAR_PTR_LITERAL(91, 125, 38, 34, 222, 200, 201, 80)}};
static const lean_object* l_checkExport___closed__6 = (const lean_object*)&l_checkExport___closed__6_value;
static const lean_string_object l_checkExport___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l_checkExport___closed__7 = (const lean_object*)&l_checkExport___closed__7_value;
static const lean_ctor_object l_checkExport___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_checkExport___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__8_value_aux_0),((lean_object*)&l_checkExport___closed__7_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l_checkExport___closed__8 = (const lean_object*)&l_checkExport___closed__8_value;
static const lean_ctor_object l_checkExport___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_checkExport___closed__9 = (const lean_object*)&l_checkExport___closed__9_value;
static const lean_ctor_object l_checkExport___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__6_value),((lean_object*)&l_checkExport___closed__9_value)}};
static const lean_object* l_checkExport___closed__10 = (const lean_object*)&l_checkExport___closed__10_value;
static const lean_ctor_object l_checkExport___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__4_value),((lean_object*)&l_checkExport___closed__10_value)}};
static const lean_object* l_checkExport___closed__11 = (const lean_object*)&l_checkExport___closed__11_value;
static const lean_string_object l_checkExport___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean default kernel accepts the solution"};
static const lean_object* l_checkExport___closed__12 = (const lean_object*)&l_checkExport___closed__12_value;
static const lean_ctor_object l_checkExport___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_checkExport___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l_checkExport___closed__13 = (const lean_object*)&l_checkExport___closed__13_value;
static const lean_ctor_object l_checkExport___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_checkExport___closed__13_value),((lean_object*)&l_checkExport___closed__11_value)}};
static const lean_object* l_checkExport___closed__14 = (const lean_object*)&l_checkExport___closed__14_value;
static const lean_string_object l_checkExport___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Quotient post-check rejects the solution: "};
static const lean_object* l_checkExport___closed__15 = (const lean_object*)&l_checkExport___closed__15_value;
LEAN_EXPORT lean_object* l_checkExport___boxed__const__1;
LEAN_EXPORT lean_object* l_checkExport___boxed__const__2;
LEAN_EXPORT lean_object* l_checkExport(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_checkExport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "leanchecker found a problem in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "replaying "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00checkOlean_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Could not resolve module: "};
static const lean_object* l_List_mapM_loop___at___00checkOlean_spec__5___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00checkOlean_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Could not find any oleans for: "};
static const lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " with --fresh"};
static const lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_checkOlean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_checkOlean___closed__0 = (const lean_object*)&l_checkOlean___closed__0_value;
static const lean_string_object l_checkOlean___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "--fresh flag is only valid when specifying a single module:\n"};
static const lean_object* l_checkOlean___closed__1 = (const lean_object*)&l_checkOlean___closed__1_value;
static const lean_string_object l_checkOlean___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_checkOlean___closed__2 = (const lean_object*)&l_checkOlean___closed__2_value;
LEAN_EXPORT lean_object* l_checkOlean(lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_checkOlean___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_partition_loop___at___00main_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_List_partition_loop___at___00main_spec__0___closed__0 = (const lean_object*)&l_List_partition_loop___at___00main_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static const lean_string_object l_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--fresh"};
static const lean_object* l_main___closed__1 = (const lean_object*)&l_main___closed__1_value;
static const lean_string_object l_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--silent"};
static const lean_object* l_main___closed__2 = (const lean_object*)&l_main___closed__2_value;
static const lean_string_object l_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "--from-export"};
static const lean_object* l_main___closed__3 = (const lean_object*)&l_main___closed__3_value;
static const lean_string_object l_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-v"};
static const lean_object* l_main___closed__4 = (const lean_object*)&l_main___closed__4_value;
static const lean_string_object l_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--verbose"};
static const lean_object* l_main___closed__5 = (const lean_object*)&l_main___closed__5_value;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_println(lean_object* v_msg_1_, uint8_t v_silent_2_){
_start:
{
if (v_silent_2_ == 0)
{
lean_object* v___x_4_; 
v___x_4_ = l_IO_println___at___00__private_Lean_Language_Basic_0__Lean_Language_reportMessages_spec__3(v_msg_1_);
return v___x_4_;
}
else
{
lean_object* v___x_5_; lean_object* v___x_6_; 
lean_dec_ref(v_msg_1_);
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l_println___boxed(lean_object* v_msg_7_, lean_object* v_silent_8_, lean_object* v_a_9_){
_start:
{
uint8_t v_silent_boxed_10_; lean_object* v_res_11_; 
v_silent_boxed_10_ = lean_unbox(v_silent_8_);
v_res_11_ = l_println(v_msg_7_, v_silent_boxed_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(lean_object* v_as_12_, size_t v_sz_13_, size_t v_i_14_, lean_object* v_b_15_){
_start:
{
uint8_t v___x_17_; 
v___x_17_ = lean_usize_dec_lt(v_i_14_, v_sz_13_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; 
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v_b_15_);
return v___x_18_;
}
else
{
lean_object* v_snd_19_; lean_object* v_fst_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_53_; 
v_snd_19_ = lean_ctor_get(v_b_15_, 1);
v_fst_20_ = lean_ctor_get(v_b_15_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v_b_15_);
if (v_isSharedCheck_53_ == 0)
{
v___x_22_ = v_b_15_;
v_isShared_23_ = v_isSharedCheck_53_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_snd_19_);
lean_inc(v_fst_20_);
lean_dec(v_b_15_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_53_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v_array_24_; lean_object* v_start_25_; lean_object* v_stop_26_; uint8_t v___x_27_; 
v_array_24_ = lean_ctor_get(v_snd_19_, 0);
v_start_25_ = lean_ctor_get(v_snd_19_, 1);
v_stop_26_ = lean_ctor_get(v_snd_19_, 2);
v___x_27_ = lean_nat_dec_lt(v_start_25_, v_stop_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_29_; 
if (v_isShared_23_ == 0)
{
v___x_29_ = v___x_22_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_fst_20_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v_snd_19_);
v___x_29_ = v_reuseFailAlloc_31_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
lean_object* v___x_30_; 
v___x_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
else
{
lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_49_; 
lean_inc(v_stop_26_);
lean_inc(v_start_25_);
lean_inc_ref(v_array_24_);
v_isSharedCheck_49_ = !lean_is_exclusive(v_snd_19_);
if (v_isSharedCheck_49_ == 0)
{
lean_object* v_unused_50_; lean_object* v_unused_51_; lean_object* v_unused_52_; 
v_unused_50_ = lean_ctor_get(v_snd_19_, 2);
lean_dec(v_unused_50_);
v_unused_51_ = lean_ctor_get(v_snd_19_, 1);
lean_dec(v_unused_51_);
v_unused_52_ = lean_ctor_get(v_snd_19_, 0);
lean_dec(v_unused_52_);
v___x_33_ = v_snd_19_;
v_isShared_34_ = v_isSharedCheck_49_;
goto v_resetjp_32_;
}
else
{
lean_dec(v_snd_19_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_49_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v_a_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
v_a_35_ = lean_array_uget_borrowed(v_as_12_, v_i_14_);
v___x_36_ = lean_array_fget(v_array_24_, v_start_25_);
v___x_37_ = lean_unsigned_to_nat(1u);
v___x_38_ = lean_nat_add(v_start_25_, v___x_37_);
lean_dec(v_start_25_);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 1, v___x_38_);
v___x_40_ = v___x_33_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_array_24_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v___x_38_);
lean_ctor_set(v_reuseFailAlloc_48_, 2, v_stop_26_);
v___x_40_ = v_reuseFailAlloc_48_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_43_; 
lean_inc(v_a_35_);
v___x_41_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_fst_20_, v_a_35_, v___x_36_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_40_);
lean_ctor_set(v___x_22_, 0, v___x_41_);
v___x_43_ = v___x_22_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_47_, 1, v___x_40_);
v___x_43_ = v_reuseFailAlloc_47_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
size_t v___x_44_; size_t v___x_45_; 
v___x_44_ = ((size_t)1ULL);
v___x_45_ = lean_usize_add(v_i_14_, v___x_44_);
v_i_14_ = v___x_45_;
v_b_15_ = v___x_43_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0___boxed(lean_object* v_as_54_, lean_object* v_sz_55_, lean_object* v_i_56_, lean_object* v_b_57_, lean_object* v___y_58_){
_start:
{
size_t v_sz_boxed_59_; size_t v_i_boxed_60_; lean_object* v_res_61_; 
v_sz_boxed_59_ = lean_unbox_usize(v_sz_55_);
lean_dec(v_sz_55_);
v_i_boxed_60_ = lean_unbox_usize(v_i_56_);
lean_dec(v_i_56_);
v_res_61_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_as_54_, v_sz_boxed_59_, v_i_boxed_60_, v_b_57_);
lean_dec_ref(v_as_54_);
return v_res_61_;
}
}
static lean_object* _init_l_replayFromImports___closed__0(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_box(0);
v___x_63_ = lean_unsigned_to_nat(16u);
v___x_64_ = lean_mk_array(v___x_63_, v___x_62_);
return v___x_64_;
}
}
static uint8_t _init_l_replayFromImports___closed__1(void){
_start:
{
uint8_t v___x_65_; uint8_t v___x_66_; 
v___x_65_ = 2;
v___x_66_ = l_Lean_instOrdOLeanLevel_ord(v___x_65_, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_replayFromImports(lean_object* v_module_73_){
_start:
{
lean_object* v___x_75_; 
lean_inc(v_module_73_);
v___x_75_ = l_Lean_findOLean(v_module_73_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_201_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_201_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_201_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_201_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
uint8_t v___x_80_; uint8_t v___y_82_; lean_object* v___y_83_; lean_object* v___y_84_; lean_object* v___y_85_; uint8_t v___y_86_; lean_object* v___y_87_; lean_object* v___y_88_; uint8_t v___y_89_; lean_object* v_fnames_149_; 
v___x_80_ = l_System_FilePath_pathExists(v_a_76_);
if (v___x_80_ == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_177_ = ((lean_object*)(l_replayFromImports___closed__4));
v___x_178_ = lean_string_append(v___x_177_, v_a_76_);
lean_dec(v_a_76_);
v___x_179_ = ((lean_object*)(l_replayFromImports___closed__5));
v___x_180_ = lean_string_append(v___x_178_, v___x_179_);
v___x_181_ = 1;
v___x_182_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_73_, v___x_181_);
v___x_183_ = lean_string_append(v___x_180_, v___x_182_);
lean_dec_ref(v___x_182_);
v___x_184_ = ((lean_object*)(l_replayFromImports___closed__6));
v___x_185_ = lean_string_append(v___x_183_, v___x_184_);
v___x_186_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 1);
lean_ctor_set(v___x_78_, 0, v___x_186_);
v___x_188_ = v___x_78_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
else
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
lean_del_object(v___x_78_);
lean_dec(v_module_73_);
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_mk_empty_array_with_capacity(v___x_190_);
lean_inc_n(v_a_76_, 2);
v___x_192_ = lean_array_push(v___x_191_, v_a_76_);
v___x_193_ = 1;
v___x_194_ = l_Lean_OLeanLevel_adjustFileName(v_a_76_, v___x_193_);
v___x_195_ = l_System_FilePath_pathExists(v___x_194_);
if (v___x_195_ == 0)
{
lean_dec_ref(v___x_194_);
lean_dec(v_a_76_);
v_fnames_149_ = v___x_192_;
goto v___jp_148_;
}
else
{
lean_object* v___x_196_; uint8_t v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_196_ = lean_array_push(v___x_192_, v___x_194_);
v___x_197_ = 2;
v___x_198_ = l_Lean_OLeanLevel_adjustFileName(v_a_76_, v___x_197_);
v___x_199_ = l_System_FilePath_pathExists(v___x_198_);
if (v___x_199_ == 0)
{
lean_dec_ref(v___x_198_);
v_fnames_149_ = v___x_196_;
goto v___jp_148_;
}
else
{
lean_object* v___x_200_; 
v___x_200_ = lean_array_push(v___x_196_, v___x_198_);
v_fnames_149_ = v___x_200_;
goto v___jp_148_;
}
}
}
v___jp_81_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = l_Lean_instInhabitedImportState_default;
v___x_91_ = lean_st_mk_ref(v___x_90_);
lean_inc(v___y_84_);
v___x_92_ = l_Lean_importModulesCore(v___y_83_, v___y_86_, v___y_84_, v___y_89_, v___y_82_, v___x_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v___x_93_; lean_object* v___x_94_; uint32_t v___x_95_; lean_object* v___x_96_; 
lean_dec_ref_known(v___x_92_, 1);
v___x_93_ = lean_st_ref_get(v___x_91_);
lean_dec(v___x_91_);
v___x_94_ = l_Lean_Options_empty;
v___x_95_ = 0;
v___x_96_ = l_Lean_finalizeImport(v___x_93_, v___y_83_, v___x_94_, v___x_95_, v___y_82_, v___y_82_, v___y_86_, v___x_80_, v___y_82_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_fst_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_138_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_a_97_);
lean_dec_ref_known(v___x_96_, 1);
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = lean_nat_sub(v___y_85_, v___x_98_);
lean_dec(v___y_85_);
v___x_100_ = lean_array_fget(v___y_87_, v___x_99_);
lean_dec(v___x_99_);
lean_dec_ref(v___y_87_);
v_fst_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; 
v_unused_139_ = lean_ctor_get(v___x_100_, 1);
lean_dec(v_unused_139_);
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_138_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_fst_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_138_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v_constNames_105_; lean_object* v_constants_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_112_; 
v_constNames_105_ = lean_ctor_get(v_fst_101_, 1);
lean_inc_ref(v_constNames_105_);
v_constants_106_ = lean_ctor_get(v_fst_101_, 2);
lean_inc_ref(v_constants_106_);
lean_dec(v_fst_101_);
v___x_107_ = lean_obj_once(&l_replayFromImports___closed__0, &l_replayFromImports___closed__0_once, _init_l_replayFromImports___closed__0);
lean_inc(v___y_88_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_88_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_array_get_size(v_constants_106_);
v___x_110_ = l_Array_toSubarray___redArg(v_constants_106_, v___y_88_, v___x_109_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___x_110_);
lean_ctor_set(v___x_103_, 0, v___x_108_);
v___x_112_ = v___x_103_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v___x_110_);
v___x_112_ = v_reuseFailAlloc_137_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
size_t v_sz_113_; size_t v___x_114_; lean_object* v___x_115_; 
v_sz_113_ = lean_array_size(v_constNames_105_);
v___x_114_ = ((size_t)0ULL);
v___x_115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00replayFromImports_spec__0(v_constNames_105_, v_sz_113_, v___x_114_, v___x_112_);
lean_dec_ref(v_constNames_105_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v_fst_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_a_116_);
lean_dec_ref_known(v___x_115_, 1);
v_fst_117_ = lean_ctor_get(v_a_116_, 0);
lean_inc(v_fst_117_);
lean_dec(v_a_116_);
lean_inc(v_a_97_);
v___x_118_ = lean_elab_environment_to_kernel_env(v_a_97_);
v___x_119_ = l_Lean_Kernel_Environment_replay(v_fst_117_, v___x_118_);
lean_dec(v_fst_117_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v___x_120_; 
lean_dec_ref_known(v___x_119_, 1);
v___x_120_ = lean_environment_free_regions(v_a_97_);
return v___x_120_;
}
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
lean_dec(v_a_97_);
v_a_121_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_119_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_119_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
else
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
lean_dec(v_a_97_);
v_a_129_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_115_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_115_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_85_);
v_a_140_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_96_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_96_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_dec(v___x_91_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_83_);
return v___x_92_;
}
}
v___jp_148_:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lean_readModuleDataParts(v_fnames_149_);
lean_dec_ref(v_fnames_149_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_168_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_168_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_168_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_168_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_155_ = lean_array_get_size(v_a_151_);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_nat_dec_eq(v___x_155_, v___x_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; lean_object* v_fst_159_; lean_object* v_imports_160_; uint8_t v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
lean_del_object(v___x_153_);
v___x_158_ = lean_array_fget_borrowed(v_a_151_, v___x_156_);
v_fst_159_ = lean_ctor_get(v___x_158_, 0);
v_imports_160_ = lean_ctor_get(v_fst_159_, 0);
lean_inc_ref(v_imports_160_);
v___x_161_ = 2;
v___x_162_ = lean_box(1);
v___x_163_ = lean_uint8_once(&l_replayFromImports___closed__1, &l_replayFromImports___closed__1_once, _init_l_replayFromImports___closed__1);
if (v___x_163_ == 0)
{
v___y_82_ = v___x_157_;
v___y_83_ = v_imports_160_;
v___y_84_ = v___x_162_;
v___y_85_ = v___x_155_;
v___y_86_ = v___x_161_;
v___y_87_ = v_a_151_;
v___y_88_ = v___x_156_;
v___y_89_ = v___x_80_;
goto v___jp_81_;
}
else
{
v___y_82_ = v___x_157_;
v___y_83_ = v_imports_160_;
v___y_84_ = v___x_162_;
v___y_85_ = v___x_155_;
v___y_86_ = v___x_161_;
v___y_87_ = v_a_151_;
v___y_88_ = v___x_156_;
v___y_89_ = v___x_157_;
goto v___jp_81_;
}
}
else
{
lean_object* v___x_164_; lean_object* v___x_166_; 
lean_dec(v_a_151_);
v___x_164_ = ((lean_object*)(l_replayFromImports___closed__3));
if (v_isShared_154_ == 0)
{
lean_ctor_set_tag(v___x_153_, 1);
lean_ctor_set(v___x_153_, 0, v___x_164_);
v___x_166_ = v___x_153_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
else
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
v_a_169_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_150_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___x_150_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
lean_dec(v_module_73_);
v_a_202_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_75_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_75_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromImports___boxed(lean_object* v_module_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_replayFromImports(v_module_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(lean_object* v_t_213_, lean_object* v_init_214_){
_start:
{
lean_object* v_key_215_; lean_object* v_val_x3f_216_; lean_object* v_children_217_; lean_object* v_s_219_; 
v_key_215_ = lean_ctor_get(v_t_213_, 0);
lean_inc(v_key_215_);
v_val_x3f_216_ = lean_ctor_get(v_t_213_, 1);
lean_inc(v_val_x3f_216_);
v_children_217_ = lean_ctor_get(v_t_213_, 2);
lean_inc_ref(v_children_217_);
lean_dec_ref(v_t_213_);
if (lean_obj_tag(v_val_x3f_216_) == 1)
{
lean_object* v_val_226_; lean_object* v___x_227_; 
v_val_226_ = lean_ctor_get(v_val_x3f_216_, 0);
lean_inc(v_val_226_);
lean_dec_ref_known(v_val_x3f_216_, 1);
v___x_227_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_init_214_, v_key_215_, v_val_226_);
v_s_219_ = v___x_227_;
goto v___jp_218_;
}
else
{
lean_dec(v_val_x3f_216_);
lean_dec(v_key_215_);
v_s_219_ = v_init_214_;
goto v___jp_218_;
}
v___jp_218_:
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_220_ = lean_unsigned_to_nat(0u);
v___x_221_ = lean_array_get_size(v_children_217_);
v___x_222_ = lean_nat_dec_lt(v___x_220_, v___x_221_);
if (v___x_222_ == 0)
{
lean_dec_ref(v_children_217_);
return v_s_219_;
}
else
{
size_t v___x_223_; size_t v___x_224_; lean_object* v___x_225_; 
v___x_223_ = ((size_t)0ULL);
v___x_224_ = lean_usize_of_nat(v___x_221_);
v___x_225_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1_spec__2(v_children_217_, v___x_223_, v___x_224_, v_s_219_);
lean_dec_ref(v_children_217_);
return v___x_225_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1_spec__2(lean_object* v_as_228_, size_t v_i_229_, size_t v_stop_230_, lean_object* v_b_231_){
_start:
{
uint8_t v___x_232_; 
v___x_232_ = lean_usize_dec_eq(v_i_229_, v_stop_230_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; size_t v___x_235_; size_t v___x_236_; 
v___x_233_ = lean_array_uget_borrowed(v_as_228_, v_i_229_);
lean_inc(v___x_233_);
v___x_234_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(v___x_233_, v_b_231_);
v___x_235_ = ((size_t)1ULL);
v___x_236_ = lean_usize_add(v_i_229_, v___x_235_);
v_i_229_ = v___x_236_;
v_b_231_ = v___x_234_;
goto _start;
}
else
{
return v_b_231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_as_238_, lean_object* v_i_239_, lean_object* v_stop_240_, lean_object* v_b_241_){
_start:
{
size_t v_i_boxed_242_; size_t v_stop_boxed_243_; lean_object* v_res_244_; 
v_i_boxed_242_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_stop_boxed_243_ = lean_unbox_usize(v_stop_240_);
lean_dec(v_stop_240_);
v_res_244_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1_spec__2(v_as_238_, v_i_boxed_242_, v_stop_boxed_243_, v_b_241_);
lean_dec_ref(v_as_238_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(lean_object* v_t_245_, lean_object* v_init_246_){
_start:
{
switch(lean_obj_tag(v_t_245_))
{
case 0:
{
lean_object* v_tree_247_; lean_object* v___x_248_; 
v_tree_247_ = lean_ctor_get(v_t_245_, 1);
lean_inc_ref(v_tree_247_);
lean_dec_ref_known(v_t_245_, 2);
v___x_248_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__1(v_tree_247_, v_init_246_);
return v___x_248_;
}
case 1:
{
lean_object* v_key_249_; lean_object* v_entry_x3f_250_; lean_object* v_children_251_; lean_object* v_s_253_; 
v_key_249_ = lean_ctor_get(v_t_245_, 0);
lean_inc(v_key_249_);
v_entry_x3f_250_ = lean_ctor_get(v_t_245_, 1);
lean_inc(v_entry_x3f_250_);
v_children_251_ = lean_ctor_get(v_t_245_, 2);
lean_inc_ref(v_children_251_);
lean_dec_ref_known(v_t_245_, 4);
if (lean_obj_tag(v_entry_x3f_250_) == 1)
{
lean_object* v_val_260_; lean_object* v_fst_261_; lean_object* v___x_262_; 
v_val_260_ = lean_ctor_get(v_entry_x3f_250_, 0);
lean_inc(v_val_260_);
lean_dec_ref_known(v_entry_x3f_250_, 1);
v_fst_261_ = lean_ctor_get(v_val_260_, 0);
lean_inc(v_fst_261_);
lean_dec(v_val_260_);
v___x_262_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_init_246_, v_key_249_, v_fst_261_);
v_s_253_ = v___x_262_;
goto v___jp_252_;
}
else
{
lean_dec(v_entry_x3f_250_);
lean_dec(v_key_249_);
v_s_253_ = v_init_246_;
goto v___jp_252_;
}
v___jp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = lean_array_get_size(v_children_251_);
v___x_256_ = lean_nat_dec_lt(v___x_254_, v___x_255_);
if (v___x_256_ == 0)
{
lean_dec_ref(v_children_251_);
return v_s_253_;
}
else
{
size_t v___x_257_; size_t v___x_258_; lean_object* v___x_259_; 
v___x_257_ = ((size_t)0ULL);
v___x_258_ = lean_usize_of_nat(v___x_255_);
v___x_259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__2(v_children_251_, v___x_257_, v___x_258_, v_s_253_);
lean_dec_ref(v_children_251_);
return v___x_259_;
}
}
}
case 2:
{
lean_object* v_key_263_; lean_object* v_entry_264_; lean_object* v_expanded_265_; lean_object* v_s_267_; lean_object* v___x_276_; 
v_key_263_ = lean_ctor_get(v_t_245_, 0);
lean_inc(v_key_263_);
v_entry_264_ = lean_ctor_get(v_t_245_, 1);
lean_inc_ref(v_entry_264_);
v_expanded_265_ = lean_ctor_get(v_t_245_, 2);
lean_inc_ref(v_expanded_265_);
lean_dec_ref_known(v_t_245_, 3);
v___x_276_ = lean_imported_consts_force_shared(v_entry_264_);
lean_dec_ref(v_entry_264_);
if (lean_obj_tag(v___x_276_) == 1)
{
lean_object* v_val_277_; lean_object* v_fst_278_; lean_object* v___x_279_; 
v_val_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_val_277_);
lean_dec_ref_known(v___x_276_, 1);
v_fst_278_ = lean_ctor_get(v_val_277_, 0);
lean_inc(v_fst_278_);
lean_dec(v_val_277_);
v___x_279_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseAxiomInfo_spec__1___redArg(v_init_246_, v_key_263_, v_fst_278_);
v_s_267_ = v___x_279_;
goto v___jp_266_;
}
else
{
lean_dec(v___x_276_);
lean_dec(v_key_263_);
v_s_267_ = v_init_246_;
goto v___jp_266_;
}
v___jp_266_:
{
lean_object* v___x_268_; lean_object* v_fst_269_; lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_268_ = lean_imported_consts_force_shared(v_expanded_265_);
lean_dec_ref(v_expanded_265_);
v_fst_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_fst_269_);
lean_dec(v___x_268_);
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = lean_array_get_size(v_fst_269_);
v___x_272_ = lean_nat_dec_lt(v___x_270_, v___x_271_);
if (v___x_272_ == 0)
{
lean_dec(v_fst_269_);
return v_s_267_;
}
else
{
size_t v___x_273_; size_t v___x_274_; lean_object* v___x_275_; 
v___x_273_ = ((size_t)0ULL);
v___x_274_ = lean_usize_of_nat(v___x_271_);
v___x_275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__2(v_fst_269_, v___x_273_, v___x_274_, v_s_267_);
lean_dec(v_fst_269_);
return v___x_275_;
}
}
}
default: 
{
lean_object* v_tree_280_; 
v_tree_280_ = lean_ctor_get(v_t_245_, 1);
lean_inc_ref(v_tree_280_);
lean_dec_ref_known(v_t_245_, 2);
v_t_245_ = v_tree_280_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__2(lean_object* v_as_282_, size_t v_i_283_, size_t v_stop_284_, lean_object* v_b_285_){
_start:
{
uint8_t v___x_286_; 
v___x_286_ = lean_usize_dec_eq(v_i_283_, v_stop_284_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; lean_object* v___x_288_; size_t v___x_289_; size_t v___x_290_; 
v___x_287_ = lean_array_uget_borrowed(v_as_282_, v_i_283_);
lean_inc(v___x_287_);
v___x_288_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(v___x_287_, v_b_285_);
v___x_289_ = ((size_t)1ULL);
v___x_290_ = lean_usize_add(v_i_283_, v___x_289_);
v_i_283_ = v___x_290_;
v_b_285_ = v___x_288_;
goto _start;
}
else
{
return v_b_285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__2___boxed(lean_object* v_as_292_, lean_object* v_i_293_, lean_object* v_stop_294_, lean_object* v_b_295_){
_start:
{
size_t v_i_boxed_296_; size_t v_stop_boxed_297_; lean_object* v_res_298_; 
v_i_boxed_296_ = lean_unbox_usize(v_i_293_);
lean_dec(v_i_293_);
v_stop_boxed_297_ = lean_unbox_usize(v_stop_294_);
lean_dec(v_stop_294_);
v_res_298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0_spec__2(v_as_292_, v_i_boxed_296_, v_stop_boxed_297_, v_b_295_);
lean_dec_ref(v_as_292_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0(lean_object* v_t_299_, lean_object* v_init_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(v_t_299_, v_init_300_);
return v___x_301_;
}
}
static lean_object* _init_l_replayFromFresh___lam__0___closed__0(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_obj_once(&l_replayFromImports___closed__0, &l_replayFromImports___closed__0_once, _init_l_replayFromImports___closed__0);
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0(lean_object* v_env_305_){
_start:
{
lean_object* v___x_307_; lean_object* v_map_u2081_308_; lean_object* v___x_309_; lean_object* v_imported_310_; uint32_t v___x_311_; lean_object* v___x_312_; 
v___x_307_ = l_Lean_Environment_constants(v_env_305_);
v_map_u2081_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc_ref(v_map_u2081_308_);
lean_dec_ref(v___x_307_);
v___x_309_ = lean_obj_once(&l_replayFromFresh___lam__0___closed__0, &l_replayFromFresh___lam__0___closed__0_once, _init_l_replayFromFresh___lam__0___closed__0);
v_imported_310_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00replayFromFresh_spec__0_spec__0(v_map_u2081_308_, v___x_309_);
v___x_311_ = 0;
v___x_312_ = l_Lean_mkEmptyEnvironment(v___x_311_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v_a_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v_a_313_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_a_313_);
lean_dec_ref_known(v___x_312_, 1);
v___x_314_ = lean_elab_environment_to_kernel_env(v_a_313_);
v___x_315_ = lean_box(0);
v___x_316_ = l_Lean_Kernel_Environment_replay(v_imported_310_, v___x_314_);
lean_dec_ref(v_imported_310_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; 
v_unused_324_ = lean_ctor_get(v___x_316_, 0);
lean_dec(v_unused_324_);
v___x_318_ = v___x_316_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_dec(v___x_316_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_315_);
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_315_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
v_a_325_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_316_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_316_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
else
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
lean_dec_ref(v_imported_310_);
v_a_333_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_312_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_312_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___lam__0___boxed(lean_object* v_env_341_, lean_object* v___y_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_replayFromFresh___lam__0(v_env_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh(lean_object* v_module_345_){
_start:
{
lean_object* v___f_347_; uint8_t v___x_348_; uint8_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; uint32_t v___x_355_; lean_object* v___x_356_; 
v___f_347_ = ((lean_object*)(l_replayFromFresh___closed__0));
v___x_348_ = 0;
v___x_349_ = 1;
v___x_350_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_350_, 0, v_module_345_);
lean_ctor_set_uint8(v___x_350_, sizeof(void*)*1, v___x_348_);
lean_ctor_set_uint8(v___x_350_, sizeof(void*)*1 + 1, v___x_349_);
lean_ctor_set_uint8(v___x_350_, sizeof(void*)*1 + 2, v___x_348_);
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = lean_mk_empty_array_with_capacity(v___x_351_);
v___x_353_ = lean_array_push(v___x_352_, v___x_350_);
v___x_354_ = l_Lean_Options_empty;
v___x_355_ = 0;
v___x_356_ = l_Lean_withImportModules___redArg(v___x_353_, v___x_354_, v___f_347_, v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_replayFromFresh___boxed(lean_object* v_module_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_replayFromFresh(v_module_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_getCurrentModule(){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = ((lean_object*)(l_getCurrentModule___closed__0));
v___x_363_ = l_Lake_Manifest_load_x3f(v___x_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_378_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_378_ == 0)
{
v___x_366_ = v___x_363_;
v_isShared_367_ = v_isSharedCheck_378_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_378_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
if (lean_obj_tag(v_a_364_) == 0)
{
lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_368_ = lean_box(0);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 0, v___x_368_);
v___x_370_ = v___x_366_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_368_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
else
{
lean_object* v_val_372_; lean_object* v_name_373_; lean_object* v___x_374_; lean_object* v___x_376_; 
v_val_372_ = lean_ctor_get(v_a_364_, 0);
lean_inc(v_val_372_);
lean_dec_ref_known(v_a_364_, 1);
v_name_373_ = lean_ctor_get(v_val_372_, 0);
lean_inc(v_name_373_);
lean_dec(v_val_372_);
v___x_374_ = l_Lean_Name_capitalize(v_name_373_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 0, v___x_374_);
v___x_376_ = v___x_366_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_374_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_386_; 
v_a_379_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_386_ == 0)
{
v___x_381_ = v___x_363_;
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_363_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_382_ == 0)
{
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_a_379_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_getCurrentModule___boxed(lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_getCurrentModule();
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(lean_object* v___x_391_, lean_object* v_a_392_, lean_object* v_as_x27_393_, lean_object* v_b_394_){
_start:
{
if (lean_obj_tag(v_as_x27_393_) == 0)
{
lean_object* v___x_396_; 
lean_dec_ref(v_a_392_);
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v_b_394_);
return v___x_396_;
}
else
{
lean_object* v_head_397_; lean_object* v_tail_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v_head_397_ = lean_ctor_get(v_as_x27_393_, 0);
v_tail_398_ = lean_ctor_get(v_as_x27_393_, 1);
v___x_399_ = lean_box(0);
v___x_400_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_DTreeMap_Internal_Impl___aux__Std__Data__DTreeMap__Internal__Lemmas______macroRules__Std__DTreeMap__Internal__Impl__tacticSimp__to__model_x5b___x5dUsing____1_spec__1___redArg(v___x_391_, v_head_397_);
if (lean_obj_tag(v___x_400_) == 1)
{
lean_object* v_val_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_431_; 
v_val_401_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_431_ == 0)
{
v___x_403_ = v___x_400_;
v_isShared_404_ = v_isSharedCheck_431_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_val_401_);
lean_dec(v___x_400_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_431_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; 
lean_inc(v_head_397_);
lean_inc_ref(v_a_392_);
v___x_405_ = lean_environment_find(v_a_392_, v_head_397_);
if (lean_obj_tag(v___x_405_) == 1)
{
lean_object* v_val_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_422_; 
v_val_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_422_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_422_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_val_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_422_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
uint8_t v___x_410_; 
v___x_410_ = l_Lean_instBEqConstantInfo_beq(v_val_401_, v_val_406_);
lean_dec(v_val_406_);
lean_dec(v_val_401_);
if (v___x_410_ == 0)
{
uint8_t v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
lean_dec_ref(v_a_392_);
v___x_411_ = 1;
v___x_412_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__0));
lean_inc(v_head_397_);
v___x_413_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_397_, v___x_411_);
v___x_414_ = lean_string_append(v___x_412_, v___x_413_);
lean_dec_ref(v___x_413_);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 18);
lean_ctor_set(v___x_408_, 0, v___x_414_);
v___x_416_ = v___x_408_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_414_);
v___x_416_ = v_reuseFailAlloc_420_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v___x_418_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_416_);
v___x_418_ = v___x_403_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_416_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
else
{
lean_del_object(v___x_408_);
lean_del_object(v___x_403_);
v_as_x27_393_ = v_tail_398_;
v_b_394_ = v___x_399_;
goto _start;
}
}
}
else
{
lean_object* v___x_423_; uint8_t v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_428_; 
lean_dec(v___x_405_);
lean_dec(v_val_401_);
lean_dec_ref(v_a_392_);
v___x_423_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___closed__1));
v___x_424_ = 1;
lean_inc(v_head_397_);
v___x_425_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_397_, v___x_424_);
v___x_426_ = lean_string_append(v___x_423_, v___x_425_);
lean_dec_ref(v___x_425_);
if (v_isShared_404_ == 0)
{
lean_ctor_set_tag(v___x_403_, 18);
lean_ctor_set(v___x_403_, 0, v___x_426_);
v___x_428_ = v___x_403_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_426_);
v___x_428_ = v_reuseFailAlloc_430_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_object* v___x_429_; 
v___x_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
}
}
}
else
{
lean_dec(v___x_400_);
v_as_x27_393_ = v_tail_398_;
v_b_394_ = v___x_399_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg___boxed(lean_object* v___x_433_, lean_object* v_a_434_, lean_object* v_as_x27_435_, lean_object* v_b_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(v___x_433_, v_a_434_, v_as_x27_435_, v_b_436_);
lean_dec(v_as_x27_435_);
lean_dec_ref(v___x_433_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0(lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
if (lean_obj_tag(v_x_440_) == 0)
{
return v_x_439_;
}
else
{
lean_object* v_head_441_; lean_object* v_tail_442_; lean_object* v___x_443_; 
v_head_441_ = lean_ctor_get(v_x_440_, 0);
v_tail_442_ = lean_ctor_get(v_x_440_, 1);
v___x_443_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(v_x_439_, v_head_441_);
v_x_439_ = v___x_443_;
v_x_440_ = v_tail_442_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00checkExport_spec__0___boxed(lean_object* v_x_445_, lean_object* v_x_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_List_foldl___at___00checkExport_spec__0(v_x_445_, v_x_446_);
lean_dec(v_x_446_);
return v_res_447_;
}
}
static lean_object* _init_l_checkExport___boxed__const__1(void){
_start:
{
uint32_t v___x_479_; lean_object* v___x_480_; 
v___x_479_ = 1;
v___x_480_ = lean_box_uint32(v___x_479_);
return v___x_480_;
}
}
static lean_object* _init_l_checkExport___boxed__const__2(void){
_start:
{
uint32_t v___x_481_; lean_object* v___x_482_; 
v___x_481_ = 0;
v___x_482_ = lean_box_uint32(v___x_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_checkExport(lean_object* v_args_483_, uint8_t v_silent_484_){
_start:
{
lean_object* v_a_493_; 
if (lean_obj_tag(v_args_483_) == 1)
{
lean_object* v_tail_515_; 
v_tail_515_ = lean_ctor_get(v_args_483_, 1);
if (lean_obj_tag(v_tail_515_) == 0)
{
lean_object* v_head_516_; uint8_t v___x_517_; lean_object* v___x_518_; 
v_head_516_ = lean_ctor_get(v_args_483_, 0);
v___x_517_ = 0;
v___x_518_ = lean_io_prim_handle_mk(v_head_516_, v___x_517_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
v___x_520_ = lean_stream_of_handle(v_a_519_);
v___x_521_ = l_LeanExport_parseStream(v___x_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; uint32_t v___x_523_; lean_object* v___x_524_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v___x_521_, 1);
v___x_523_ = 0;
v___x_524_ = l_Lean_mkEmptyEnvironment(v___x_523_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v_constMap_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_524_, 1);
v_constMap_526_ = lean_ctor_get(v_a_522_, 0);
lean_inc_ref_n(v_constMap_526_, 2);
lean_dec(v_a_522_);
v___x_527_ = lean_elab_environment_to_kernel_env(v_a_525_);
v___x_528_ = ((lean_object*)(l_checkExport___closed__11));
v___x_529_ = l_List_foldl___at___00checkExport_spec__0(v_constMap_526_, v___x_528_);
v___x_530_ = l_Lean_Kernel_Environment_replay(v___x_529_, v___x_527_);
lean_dec_ref(v___x_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_530_, 1);
v___x_532_ = ((lean_object*)(l_checkExport___closed__12));
v___x_533_ = l_println(v___x_532_, v_silent_484_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec_ref_known(v___x_533_, 1);
v___x_534_ = ((lean_object*)(l_checkExport___closed__14));
v___x_535_ = lean_box(0);
v___x_536_ = l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(v_constMap_526_, v_a_531_, v___x_534_, v___x_535_);
lean_dec_ref(v_constMap_526_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_544_; 
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_544_ == 0)
{
lean_object* v_unused_545_; 
v_unused_545_ = lean_ctor_get(v___x_536_, 0);
lean_dec(v_unused_545_);
v___x_538_ = v___x_536_;
v_isShared_539_ = v_isSharedCheck_544_;
goto v_resetjp_537_;
}
else
{
lean_dec(v___x_536_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_544_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_540_ = l_checkExport___boxed__const__2;
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_540_);
v___x_542_ = v___x_538_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_540_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_a_546_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_536_, 1);
v___x_547_ = ((lean_object*)(l_checkExport___closed__15));
v___x_548_ = lean_io_error_to_string(v_a_546_);
v___x_549_ = lean_string_append(v___x_547_, v___x_548_);
lean_dec_ref(v___x_548_);
v___x_550_ = l_println(v___x_549_, v_silent_484_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_558_; 
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; 
v_unused_559_ = lean_ctor_get(v___x_550_, 0);
lean_dec(v_unused_559_);
v___x_552_ = v___x_550_;
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
else
{
lean_dec(v___x_550_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_554_ = l_checkExport___boxed__const__1;
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v___x_554_);
v___x_556_ = v___x_552_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_a_560_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_550_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_550_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
}
else
{
lean_object* v_a_568_; 
lean_dec(v_a_531_);
lean_dec_ref(v_constMap_526_);
v_a_568_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_533_, 1);
v_a_493_ = v_a_568_;
goto v___jp_492_;
}
}
else
{
lean_object* v_a_569_; 
lean_dec_ref(v_constMap_526_);
v_a_569_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_530_, 1);
v_a_493_ = v_a_569_;
goto v___jp_492_;
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec(v_a_522_);
v_a_570_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_524_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_524_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
v_a_578_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_521_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_521_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
v_a_586_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_518_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_518_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
else
{
goto v___jp_486_;
}
}
else
{
goto v___jp_486_;
}
v___jp_486_:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_487_ = ((lean_object*)(l_checkExport___closed__0));
v___x_488_ = l_List_toString___at___00__private_LeanExport_Parse_0__LeanExport_Parse_parseItem_spec__1(v_args_483_);
v___x_489_ = lean_string_append(v___x_487_, v___x_488_);
lean_dec_ref(v___x_488_);
v___x_490_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
v___x_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
return v___x_491_;
}
v___jp_492_:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_494_ = ((lean_object*)(l_checkExport___closed__1));
v___x_495_ = lean_io_error_to_string(v_a_493_);
v___x_496_ = lean_string_append(v___x_494_, v___x_495_);
lean_dec_ref(v___x_495_);
v___x_497_ = l_println(v___x_496_, v_silent_484_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_505_ == 0)
{
lean_object* v_unused_506_; 
v_unused_506_ = lean_ctor_get(v___x_497_, 0);
lean_dec(v_unused_506_);
v___x_499_ = v___x_497_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_dec(v___x_497_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = l_checkExport___boxed__const__1;
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
else
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
v_a_507_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_514_ == 0)
{
v___x_509_ = v___x_497_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_497_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_checkExport___boxed(lean_object* v_args_594_, lean_object* v_silent_595_, lean_object* v_a_596_){
_start:
{
uint8_t v_silent_boxed_597_; lean_object* v_res_598_; 
v_silent_boxed_597_ = lean_unbox(v_silent_595_);
v_res_598_ = l_checkExport(v_args_594_, v_silent_boxed_597_);
lean_dec(v_args_594_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1(lean_object* v___x_599_, lean_object* v_a_600_, lean_object* v_as_601_, lean_object* v_as_x27_602_, lean_object* v_b_603_, lean_object* v_a_604_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_List_forIn_x27_loop___at___00checkExport_spec__1___redArg(v___x_599_, v_a_600_, v_as_x27_602_, v_b_603_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkExport_spec__1___boxed(lean_object* v___x_607_, lean_object* v_a_608_, lean_object* v_as_609_, lean_object* v_as_x27_610_, lean_object* v_b_611_, lean_object* v_a_612_, lean_object* v___y_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_List_forIn_x27_loop___at___00checkExport_spec__1(v___x_607_, v_a_608_, v_as_609_, v_as_x27_610_, v_b_611_, v_a_612_);
lean_dec(v_as_x27_610_);
lean_dec(v_as_609_);
lean_dec_ref(v___x_607_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(uint8_t v_verbose_617_, uint8_t v_silent_618_, lean_object* v_as_619_, size_t v_sz_620_, size_t v_i_621_, lean_object* v_b_622_){
_start:
{
uint8_t v___x_624_; 
v___x_624_ = lean_usize_dec_lt(v_i_621_, v_sz_620_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; 
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v_b_622_);
return v___x_625_;
}
else
{
lean_object* v_a_626_; lean_object* v_fst_627_; lean_object* v_snd_628_; lean_object* v___x_629_; 
v_a_626_ = lean_array_uget_borrowed(v_as_619_, v_i_621_);
v_fst_627_ = lean_ctor_get(v_a_626_, 0);
v_snd_628_ = lean_ctor_get(v_a_626_, 1);
v___x_629_ = lean_box(0);
if (v_verbose_617_ == 0)
{
goto v___jp_630_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_648_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1));
lean_inc(v_fst_627_);
v___x_649_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_627_, v_verbose_617_);
v___x_650_ = lean_string_append(v___x_648_, v___x_649_);
lean_dec_ref(v___x_649_);
v___x_651_ = l_println(v___x_650_, v_silent_618_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_dec_ref_known(v___x_651_, 1);
goto v___jp_630_;
}
else
{
return v___x_651_;
}
}
v___jp_630_:
{
lean_object* v___x_631_; 
lean_inc(v_snd_628_);
v___x_631_ = lean_task_get_own(v_snd_628_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__0));
lean_inc(v_fst_627_);
v___x_634_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_627_, v___x_624_);
v___x_635_ = lean_string_append(v___x_633_, v___x_634_);
lean_dec_ref(v___x_634_);
v___x_636_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_635_);
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; 
v_unused_644_ = lean_ctor_get(v___x_636_, 0);
lean_dec(v_unused_644_);
v___x_638_ = v___x_636_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_dec(v___x_636_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
lean_ctor_set_tag(v___x_638_, 1);
lean_ctor_set(v___x_638_, 0, v_a_632_);
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_632_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
else
{
lean_dec(v_a_632_);
return v___x_636_;
}
}
else
{
size_t v___x_645_; size_t v___x_646_; 
lean_dec(v___x_631_);
v___x_645_ = ((size_t)1ULL);
v___x_646_ = lean_usize_add(v_i_621_, v___x_645_);
v_i_621_ = v___x_646_;
v_b_622_ = v___x_629_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___boxed(lean_object* v_verbose_652_, lean_object* v_silent_653_, lean_object* v_as_654_, lean_object* v_sz_655_, lean_object* v_i_656_, lean_object* v_b_657_, lean_object* v___y_658_){
_start:
{
uint8_t v_verbose_boxed_659_; uint8_t v_silent_boxed_660_; size_t v_sz_boxed_661_; size_t v_i_boxed_662_; lean_object* v_res_663_; 
v_verbose_boxed_659_ = lean_unbox(v_verbose_652_);
v_silent_boxed_660_ = lean_unbox(v_silent_653_);
v_sz_boxed_661_ = lean_unbox_usize(v_sz_655_);
lean_dec(v_sz_655_);
v_i_boxed_662_ = lean_unbox_usize(v_i_656_);
lean_dec(v_i_656_);
v_res_663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(v_verbose_boxed_659_, v_silent_boxed_660_, v_as_654_, v_sz_boxed_661_, v_i_boxed_662_, v_b_657_);
lean_dec_ref(v_as_654_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0(lean_object* v_head_664_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_replayFromImports(v_head_664_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_674_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_674_ == 0)
{
v___x_669_ = v___x_666_;
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v___x_666_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_672_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set_tag(v___x_669_, 1);
v___x_672_ = v___x_669_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_667_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
v_a_675_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_666_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_666_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
lean_ctor_set_tag(v___x_677_, 0);
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0___boxed(lean_object* v_head_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0(v_head_683_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(lean_object* v_as_x27_686_, lean_object* v_b_687_){
_start:
{
if (lean_obj_tag(v_as_x27_686_) == 0)
{
lean_object* v___x_689_; 
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v_b_687_);
return v___x_689_;
}
else
{
lean_object* v_head_690_; lean_object* v_tail_691_; lean_object* v___f_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v_head_690_ = lean_ctor_get(v_as_x27_686_, 0);
v_tail_691_ = lean_ctor_get(v_as_x27_686_, 1);
lean_inc_n(v_head_690_, 2);
v___f_692_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_692_, 0, v_head_690_);
v___x_693_ = lean_unsigned_to_nat(0u);
v___x_694_ = lean_io_as_task(v___f_692_, v___x_693_);
v___x_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_695_, 0, v_head_690_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = lean_array_push(v_b_687_, v___x_695_);
v_as_x27_686_ = v_tail_691_;
v_b_687_ = v___x_696_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg___boxed(lean_object* v_as_x27_698_, lean_object* v_b_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(v_as_x27_698_, v_b_699_);
lean_dec(v_as_x27_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5(lean_object* v_x_703_, lean_object* v_x_704_){
_start:
{
if (lean_obj_tag(v_x_703_) == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = l_List_reverse___redArg(v_x_704_);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
else
{
lean_object* v_head_708_; lean_object* v_tail_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_723_; 
v_head_708_ = lean_ctor_get(v_x_703_, 0);
v_tail_709_ = lean_ctor_get(v_x_703_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v_x_703_);
if (v_isSharedCheck_723_ == 0)
{
v___x_711_ = v_x_703_;
v_isShared_712_ = v_isSharedCheck_723_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_tail_709_);
lean_inc(v_head_708_);
lean_dec(v_x_703_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_723_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; uint8_t v___x_714_; 
lean_inc(v_head_708_);
v___x_713_ = l_String_toName(v_head_708_);
v___x_714_ = l_Lean_Name_isAnonymous(v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_716_; 
lean_dec(v_head_708_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v_x_704_);
lean_ctor_set(v___x_711_, 0, v___x_713_);
v___x_716_ = v___x_711_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_x_704_);
v___x_716_ = v_reuseFailAlloc_718_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
v_x_703_ = v_tail_709_;
v_x_704_ = v___x_716_;
goto _start;
}
}
else
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
lean_dec(v___x_713_);
lean_del_object(v___x_711_);
lean_dec(v_tail_709_);
lean_dec(v_x_704_);
v___x_719_ = ((lean_object*)(l_List_mapM_loop___at___00checkOlean_spec__5___closed__0));
v___x_720_ = lean_string_append(v___x_719_, v_head_708_);
lean_dec(v_head_708_);
v___x_721_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
v___x_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
return v___x_722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00checkOlean_spec__5___boxed(lean_object* v_x_724_, lean_object* v_x_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_List_mapM_loop___at___00checkOlean_spec__5(v_x_724_, v_x_725_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(lean_object* v_val_728_, lean_object* v_a_729_, uint8_t v_fresh_730_, lean_object* v_as_731_, size_t v_sz_732_, size_t v_i_733_, lean_object* v_b_734_){
_start:
{
lean_object* v_a_737_; uint8_t v___x_741_; 
v___x_741_ = lean_usize_dec_lt(v_i_733_, v_sz_732_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
v___x_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_742_, 0, v_b_734_);
return v___x_742_;
}
else
{
lean_object* v_fst_743_; lean_object* v_snd_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_774_; 
v_fst_743_ = lean_ctor_get(v_b_734_, 0);
v_snd_744_ = lean_ctor_get(v_b_734_, 1);
v_isSharedCheck_774_ = !lean_is_exclusive(v_b_734_);
if (v_isSharedCheck_774_ == 0)
{
v___x_746_ = v_b_734_;
v_isShared_747_ = v_isSharedCheck_774_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_snd_744_);
lean_inc(v_fst_743_);
lean_dec(v_b_734_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_774_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v_a_748_; lean_object* v___x_749_; 
v_a_748_ = lean_array_uget_borrowed(v_as_731_, v_i_733_);
lean_inc(v_a_748_);
v___x_749_ = l_Lean_searchModuleNameOfFileName(v_a_748_, v_val_728_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___y_752_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_749_, 1);
if (lean_obj_tag(v_a_750_) == 1)
{
lean_object* v_val_757_; 
v_val_757_ = lean_ctor_get(v_a_750_, 0);
lean_inc(v_val_757_);
lean_dec_ref_known(v_a_750_, 1);
if (v_fresh_730_ == 0)
{
uint8_t v___x_764_; 
v___x_764_ = l_Lean_Name_isPrefixOf(v_a_729_, v_val_757_);
if (v___x_764_ == 0)
{
goto v___jp_761_;
}
else
{
lean_dec(v_snd_744_);
goto v___jp_758_;
}
}
else
{
goto v___jp_761_;
}
v___jp_758_:
{
uint8_t v___x_759_; 
v___x_759_ = l_List_elem___at___00__private_Lean_Class_0__Lean_initFn_00___x40_Lean_Class_4052238930____hygCtx___hyg_2__spec__1(v_val_757_, v_fst_743_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; 
v___x_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_760_, 0, v_val_757_);
lean_ctor_set(v___x_760_, 1, v_fst_743_);
v___y_752_ = v___x_760_;
goto v___jp_751_;
}
else
{
lean_dec(v_val_757_);
v___y_752_ = v_fst_743_;
goto v___jp_751_;
}
}
v___jp_761_:
{
uint8_t v___x_762_; 
v___x_762_ = lean_name_eq(v_a_729_, v_val_757_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
lean_dec(v_val_757_);
lean_del_object(v___x_746_);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v_fst_743_);
lean_ctor_set(v___x_763_, 1, v_snd_744_);
v_a_737_ = v___x_763_;
goto v___jp_736_;
}
else
{
lean_dec(v_snd_744_);
goto v___jp_758_;
}
}
}
else
{
lean_object* v___x_765_; 
lean_dec(v_a_750_);
lean_del_object(v___x_746_);
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v_fst_743_);
lean_ctor_set(v___x_765_, 1, v_snd_744_);
v_a_737_ = v___x_765_;
goto v___jp_736_;
}
v___jp_751_:
{
lean_object* v___x_753_; lean_object* v___x_755_; 
v___x_753_ = lean_box(v___x_741_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 1, v___x_753_);
lean_ctor_set(v___x_746_, 0, v___y_752_);
v___x_755_ = v___x_746_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___y_752_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v___x_753_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
v_a_737_ = v___x_755_;
goto v___jp_736_;
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_del_object(v___x_746_);
lean_dec(v_snd_744_);
lean_dec(v_fst_743_);
v_a_766_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_749_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_749_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
v___jp_736_:
{
size_t v___x_738_; size_t v___x_739_; 
v___x_738_ = ((size_t)1ULL);
v___x_739_ = lean_usize_add(v_i_733_, v___x_738_);
v_i_733_ = v___x_739_;
v_b_734_ = v_a_737_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0___boxed(lean_object* v_val_775_, lean_object* v_a_776_, lean_object* v_fresh_777_, lean_object* v_as_778_, lean_object* v_sz_779_, lean_object* v_i_780_, lean_object* v_b_781_, lean_object* v___y_782_){
_start:
{
uint8_t v_fresh_boxed_783_; size_t v_sz_boxed_784_; size_t v_i_boxed_785_; lean_object* v_res_786_; 
v_fresh_boxed_783_ = lean_unbox(v_fresh_777_);
v_sz_boxed_784_ = lean_unbox_usize(v_sz_779_);
lean_dec(v_sz_779_);
v_i_boxed_785_ = lean_unbox_usize(v_i_780_);
lean_dec(v_i_780_);
v_res_786_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(v_val_775_, v_a_776_, v_fresh_boxed_783_, v_as_778_, v_sz_boxed_784_, v_i_boxed_785_, v_b_781_);
lean_dec_ref(v_as_778_);
lean_dec(v_a_776_);
lean_dec(v_val_775_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(lean_object* v_val_789_, uint8_t v_fresh_790_, lean_object* v_as_x27_791_, lean_object* v_b_792_){
_start:
{
if (lean_obj_tag(v_as_x27_791_) == 0)
{
lean_object* v___x_794_; 
v___x_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_794_, 0, v_b_792_);
return v___x_794_;
}
else
{
lean_object* v_head_795_; lean_object* v_tail_796_; uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_head_795_ = lean_ctor_get(v_as_x27_791_, 0);
v_tail_796_ = lean_ctor_get(v_as_x27_791_, 1);
v___x_797_ = 0;
v___x_798_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__0));
v___x_799_ = l_Lean_SearchPath_findAllWithExt(v_val_789_, v___x_798_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_801_; lean_object* v___x_802_; size_t v_sz_803_; size_t v___x_804_; lean_object* v___x_805_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref_known(v___x_799_, 1);
v___x_801_ = lean_box(v___x_797_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v_b_792_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v_sz_803_ = lean_array_size(v_a_800_);
v___x_804_ = ((size_t)0ULL);
v___x_805_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__0(v_val_789_, v_head_795_, v_fresh_790_, v_a_800_, v_sz_803_, v___x_804_, v___x_802_);
lean_dec(v_a_800_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_822_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_822_ == 0)
{
v___x_808_ = v___x_805_;
v_isShared_809_ = v_isSharedCheck_822_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_805_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_822_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v_snd_810_; uint8_t v___x_811_; 
v_snd_810_ = lean_ctor_get(v_a_806_, 1);
v___x_811_ = lean_unbox(v_snd_810_);
if (v___x_811_ == 0)
{
uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_818_; 
lean_dec(v_a_806_);
v___x_812_ = 1;
v___x_813_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___closed__1));
lean_inc(v_head_795_);
v___x_814_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_795_, v___x_812_);
v___x_815_ = lean_string_append(v___x_813_, v___x_814_);
lean_dec_ref(v___x_814_);
v___x_816_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
if (v_isShared_809_ == 0)
{
lean_ctor_set_tag(v___x_808_, 1);
lean_ctor_set(v___x_808_, 0, v___x_816_);
v___x_818_ = v___x_808_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
else
{
lean_object* v_fst_820_; 
lean_del_object(v___x_808_);
v_fst_820_ = lean_ctor_get(v_a_806_, 0);
lean_inc(v_fst_820_);
lean_dec(v_a_806_);
v_as_x27_791_ = v_tail_796_;
v_b_792_ = v_fst_820_;
goto _start;
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
v_a_823_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_805_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_805_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
lean_dec(v_b_792_);
v_a_831_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_799_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_799_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg___boxed(lean_object* v_val_839_, lean_object* v_fresh_840_, lean_object* v_as_x27_841_, lean_object* v_b_842_, lean_object* v___y_843_){
_start:
{
uint8_t v_fresh_boxed_844_; lean_object* v_res_845_; 
v_fresh_boxed_844_ = lean_unbox(v_fresh_840_);
v_res_845_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(v_val_839_, v_fresh_boxed_844_, v_as_x27_841_, v_b_842_);
lean_dec(v_as_x27_841_);
lean_dec(v_val_839_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(uint8_t v_verbose_847_, uint8_t v_silent_848_, lean_object* v_as_x27_849_, lean_object* v_b_850_){
_start:
{
if (lean_obj_tag(v_as_x27_849_) == 0)
{
lean_object* v___x_852_; 
v___x_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_852_, 0, v_b_850_);
return v___x_852_;
}
else
{
lean_object* v_head_853_; lean_object* v_tail_854_; lean_object* v___x_855_; 
v_head_853_ = lean_ctor_get(v_as_x27_849_, 0);
v_tail_854_ = lean_ctor_get(v_as_x27_849_, 1);
v___x_855_ = lean_box(0);
if (v_verbose_847_ == 0)
{
goto v___jp_856_;
}
else
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_859_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3___closed__1));
lean_inc(v_head_853_);
v___x_860_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_853_, v_verbose_847_);
v___x_861_ = lean_string_append(v___x_859_, v___x_860_);
lean_dec_ref(v___x_860_);
v___x_862_ = ((lean_object*)(l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___closed__0));
v___x_863_ = lean_string_append(v___x_861_, v___x_862_);
v___x_864_ = l_println(v___x_863_, v_silent_848_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_dec_ref_known(v___x_864_, 1);
goto v___jp_856_;
}
else
{
return v___x_864_;
}
}
v___jp_856_:
{
lean_object* v___x_857_; 
lean_inc(v_head_853_);
v___x_857_ = l_replayFromFresh(v_head_853_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_dec_ref_known(v___x_857_, 1);
v_as_x27_849_ = v_tail_854_;
v_b_850_ = v___x_855_;
goto _start;
}
else
{
return v___x_857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg___boxed(lean_object* v_verbose_865_, lean_object* v_silent_866_, lean_object* v_as_x27_867_, lean_object* v_b_868_, lean_object* v___y_869_){
_start:
{
uint8_t v_verbose_boxed_870_; uint8_t v_silent_boxed_871_; lean_object* v_res_872_; 
v_verbose_boxed_870_ = lean_unbox(v_verbose_865_);
v_silent_boxed_871_ = lean_unbox(v_silent_866_);
v_res_872_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(v_verbose_boxed_870_, v_silent_boxed_871_, v_as_x27_867_, v_b_868_);
lean_dec(v_as_x27_867_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_checkOlean(lean_object* v_args_877_, uint8_t v_fresh_878_, uint8_t v_verbose_879_, uint8_t v_silent_880_){
_start:
{
lean_object* v_targets_886_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = ((lean_object*)(l_checkOlean___closed__2));
v___x_949_ = l_Lean_findSysroot(v___x_948_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v___x_951_ = lean_box(0);
v___x_952_ = l_Lean_initSearchPath(v_a_950_, v___x_951_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_dec_ref_known(v___x_952_, 1);
if (lean_obj_tag(v_args_877_) == 0)
{
lean_object* v___x_953_; 
v___x_953_ = l_getCurrentModule();
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_955_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_955_, 0, v_a_954_);
lean_ctor_set(v___x_955_, 1, v___x_951_);
v_targets_886_ = v___x_955_;
goto v___jp_885_;
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
v_a_956_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_953_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_953_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
else
{
lean_object* v___x_964_; 
v___x_964_ = l_List_mapM_loop___at___00checkOlean_spec__5(v_args_877_, v___x_951_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v_targets_886_ = v_a_965_;
goto v___jp_885_;
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_a_966_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_964_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_964_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
lean_dec(v_args_877_);
v_a_974_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_952_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_952_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
lean_dec(v_args_877_);
v_a_982_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_949_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_949_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
v___jp_882_:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = l_checkExport___boxed__const__2;
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
return v___x_884_;
}
v___jp_885_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_887_ = lean_box(0);
v___x_888_ = l_Lean_searchPathRef;
v___x_889_ = lean_st_ref_get(v___x_888_);
v___x_890_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(v___x_889_, v_fresh_878_, v_targets_886_, v___x_887_);
lean_dec(v_targets_886_);
lean_dec(v___x_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
if (v_fresh_878_ == 0)
{
lean_object* v_a_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v___x_890_, 1);
v___x_892_ = ((lean_object*)(l_checkOlean___closed__0));
v___x_893_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(v_a_891_, v___x_892_);
lean_dec(v_a_891_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_895_; size_t v_sz_896_; size_t v___x_897_; lean_object* v___x_898_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_893_, 1);
v___x_895_ = lean_box(0);
v_sz_896_ = lean_array_size(v_a_894_);
v___x_897_ = ((size_t)0ULL);
v___x_898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00checkOlean_spec__3(v_verbose_879_, v_silent_880_, v_a_894_, v_sz_896_, v___x_897_, v___x_895_);
lean_dec(v_a_894_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_dec_ref_known(v___x_898_, 1);
goto v___jp_882_;
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_898_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_898_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_a_907_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_893_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_893_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_939_; 
v_a_915_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_939_ == 0)
{
v___x_917_ = v___x_890_;
v_isShared_918_ = v_isSharedCheck_939_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_890_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_939_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_919_ = l_List_lengthTR___redArg(v_a_915_);
v___x_920_ = lean_unsigned_to_nat(1u);
v___x_921_ = lean_nat_dec_eq(v___x_919_, v___x_920_);
lean_dec(v___x_919_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_922_ = ((lean_object*)(l_checkOlean___closed__1));
v___x_923_ = l_List_toString___at___00Lean_Environment_AddConstAsyncResult_commitConst_spec__1(v_a_915_);
v___x_924_ = lean_string_append(v___x_922_, v___x_923_);
lean_dec_ref(v___x_923_);
v___x_925_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
if (v_isShared_918_ == 0)
{
lean_ctor_set_tag(v___x_917_, 1);
lean_ctor_set(v___x_917_, 0, v___x_925_);
v___x_927_ = v___x_917_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
else
{
lean_object* v___x_929_; lean_object* v___x_930_; 
lean_del_object(v___x_917_);
v___x_929_ = lean_box(0);
v___x_930_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(v_verbose_879_, v_silent_880_, v_a_915_, v___x_929_);
lean_dec(v_a_915_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_dec_ref_known(v___x_930_, 1);
goto v___jp_882_;
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
v_a_940_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_890_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_890_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_checkOlean___boxed(lean_object* v_args_990_, lean_object* v_fresh_991_, lean_object* v_verbose_992_, lean_object* v_silent_993_, lean_object* v_a_994_){
_start:
{
uint8_t v_fresh_boxed_995_; uint8_t v_verbose_boxed_996_; uint8_t v_silent_boxed_997_; lean_object* v_res_998_; 
v_fresh_boxed_995_ = lean_unbox(v_fresh_991_);
v_verbose_boxed_996_ = lean_unbox(v_verbose_992_);
v_silent_boxed_997_ = lean_unbox(v_silent_993_);
v_res_998_ = l_checkOlean(v_args_990_, v_fresh_boxed_995_, v_verbose_boxed_996_, v_silent_boxed_997_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1(lean_object* v_val_999_, uint8_t v_fresh_1000_, lean_object* v_as_1001_, lean_object* v_as_x27_1002_, lean_object* v_b_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1___redArg(v_val_999_, v_fresh_1000_, v_as_x27_1002_, v_b_1003_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__1___boxed(lean_object* v_val_1007_, lean_object* v_fresh_1008_, lean_object* v_as_1009_, lean_object* v_as_x27_1010_, lean_object* v_b_1011_, lean_object* v_a_1012_, lean_object* v___y_1013_){
_start:
{
uint8_t v_fresh_boxed_1014_; lean_object* v_res_1015_; 
v_fresh_boxed_1014_ = lean_unbox(v_fresh_1008_);
v_res_1015_ = l_List_forIn_x27_loop___at___00checkOlean_spec__1(v_val_1007_, v_fresh_boxed_1014_, v_as_1009_, v_as_x27_1010_, v_b_1011_, v_a_1012_);
lean_dec(v_as_x27_1010_);
lean_dec(v_as_1009_);
lean_dec(v_val_1007_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2(lean_object* v_as_1016_, lean_object* v_as_x27_1017_, lean_object* v_b_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2___redArg(v_as_x27_1017_, v_b_1018_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__2___boxed(lean_object* v_as_1022_, lean_object* v_as_x27_1023_, lean_object* v_b_1024_, lean_object* v_a_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_List_forIn_x27_loop___at___00checkOlean_spec__2(v_as_1022_, v_as_x27_1023_, v_b_1024_, v_a_1025_);
lean_dec(v_as_x27_1023_);
lean_dec(v_as_1022_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4(uint8_t v_verbose_1028_, uint8_t v_silent_1029_, lean_object* v_as_1030_, lean_object* v_as_x27_1031_, lean_object* v_b_1032_, lean_object* v_a_1033_){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4___redArg(v_verbose_1028_, v_silent_1029_, v_as_x27_1031_, v_b_1032_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00checkOlean_spec__4___boxed(lean_object* v_verbose_1036_, lean_object* v_silent_1037_, lean_object* v_as_1038_, lean_object* v_as_x27_1039_, lean_object* v_b_1040_, lean_object* v_a_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v_verbose_boxed_1043_; uint8_t v_silent_boxed_1044_; lean_object* v_res_1045_; 
v_verbose_boxed_1043_ = lean_unbox(v_verbose_1036_);
v_silent_boxed_1044_ = lean_unbox(v_silent_1037_);
v_res_1045_ = l_List_forIn_x27_loop___at___00checkOlean_spec__4(v_verbose_boxed_1043_, v_silent_boxed_1044_, v_as_1038_, v_as_x27_1039_, v_b_1040_, v_a_1041_);
lean_dec(v_as_x27_1039_);
lean_dec(v_as_1038_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_List_partition_loop___at___00main_spec__0(lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
if (lean_obj_tag(v_a_1047_) == 0)
{
lean_object* v_fst_1049_; lean_object* v_snd_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1059_; 
v_fst_1049_ = lean_ctor_get(v_a_1048_, 0);
v_snd_1050_ = lean_ctor_get(v_a_1048_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_a_1048_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1052_ = v_a_1048_;
v_isShared_1053_ = v_isSharedCheck_1059_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_snd_1050_);
lean_inc(v_fst_1049_);
lean_dec(v_a_1048_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1059_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1057_; 
v___x_1054_ = l_List_reverse___redArg(v_fst_1049_);
v___x_1055_ = l_List_reverse___redArg(v_snd_1050_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 1, v___x_1055_);
lean_ctor_set(v___x_1052_, 0, v___x_1054_);
v___x_1057_ = v___x_1052_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
lean_object* v_head_1060_; lean_object* v_tail_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1088_; 
v_head_1060_ = lean_ctor_get(v_a_1047_, 0);
v_tail_1061_ = lean_ctor_get(v_a_1047_, 1);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_a_1047_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1063_ = v_a_1047_;
v_isShared_1064_ = v_isSharedCheck_1088_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_tail_1061_);
lean_inc(v_head_1060_);
lean_dec(v_a_1047_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1088_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v_fst_1065_; lean_object* v_snd_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1087_; 
v_fst_1065_ = lean_ctor_get(v_a_1048_, 0);
v_snd_1066_ = lean_ctor_get(v_a_1048_, 1);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_a_1048_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1068_ = v_a_1048_;
v_isShared_1069_ = v_isSharedCheck_1087_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_snd_1066_);
lean_inc(v_fst_1065_);
lean_dec(v_a_1048_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1087_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1078_ = lean_string_utf8_byte_size(v_head_1060_);
v___x_1079_ = lean_unsigned_to_nat(1u);
v___x_1080_ = lean_nat_dec_le(v___x_1079_, v___x_1078_);
if (v___x_1080_ == 0)
{
goto v___jp_1070_;
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1081_ = ((lean_object*)(l_List_partition_loop___at___00main_spec__0___closed__0));
v___x_1082_ = lean_unsigned_to_nat(0u);
v___x_1083_ = lean_string_memcmp(v_head_1060_, v___x_1081_, v___x_1082_, v___x_1082_, v___x_1079_);
if (v___x_1083_ == 0)
{
goto v___jp_1070_;
}
else
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_del_object(v___x_1068_);
lean_del_object(v___x_1063_);
v___x_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1084_, 0, v_head_1060_);
lean_ctor_set(v___x_1084_, 1, v_fst_1065_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v_snd_1066_);
v_a_1047_ = v_tail_1061_;
v_a_1048_ = v___x_1085_;
goto _start;
}
}
v___jp_1070_:
{
lean_object* v___x_1072_; 
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 1, v_snd_1066_);
v___x_1072_ = v___x_1063_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_head_1060_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_snd_1066_);
v___x_1072_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1074_; 
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 1, v___x_1072_);
v___x_1074_ = v___x_1068_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_fst_1065_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___x_1072_);
v___x_1074_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
v_a_1047_ = v_tail_1061_;
v_a_1048_ = v___x_1074_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v_fst_1100_; lean_object* v_snd_1101_; uint8_t v___y_1103_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1098_ = ((lean_object*)(l_main___closed__0));
v___x_1099_ = l_List_partition_loop___at___00main_spec__0(v_args_1096_, v___x_1098_);
v_fst_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_fst_1100_);
v_snd_1101_ = lean_ctor_get(v___x_1099_, 1);
lean_inc(v_snd_1101_);
lean_dec_ref(v___x_1099_);
v___x_1109_ = ((lean_object*)(l_main___closed__3));
v___x_1110_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1109_, v_fst_1100_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; uint8_t v___x_1112_; 
v___x_1111_ = ((lean_object*)(l_main___closed__4));
v___x_1112_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1111_, v_fst_1100_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1113_ = ((lean_object*)(l_main___closed__5));
v___x_1114_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1113_, v_fst_1100_);
v___y_1103_ = v___x_1114_;
goto v___jp_1102_;
}
else
{
v___y_1103_ = v___x_1112_;
goto v___jp_1102_;
}
}
else
{
lean_object* v___x_1115_; uint8_t v___x_1116_; lean_object* v___x_1117_; 
v___x_1115_ = ((lean_object*)(l_main___closed__2));
v___x_1116_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1115_, v_fst_1100_);
lean_dec(v_fst_1100_);
v___x_1117_ = l_checkExport(v_snd_1101_, v___x_1116_);
lean_dec(v_snd_1101_);
return v___x_1117_;
}
v___jp_1102_:
{
lean_object* v___x_1104_; uint8_t v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; lean_object* v___x_1108_; 
v___x_1104_ = ((lean_object*)(l_main___closed__1));
v___x_1105_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1104_, v_fst_1100_);
v___x_1106_ = ((lean_object*)(l_main___closed__2));
v___x_1107_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v___x_1106_, v_fst_1100_);
lean_dec(v_fst_1100_);
v___x_1108_ = l_checkOlean(v_snd_1101_, v___x_1105_, v___y_1103_, v___x_1107_);
return v___x_1108_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = _lean_main(v_args_1118_);
return v_res_1120_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Replay(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* initialize_LeanExport_Parse(uint8_t builtin);
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
res = initialize_LeanExport_Parse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_checkExport___boxed__const__1 = _init_l_checkExport___boxed__const__1();
lean_mark_persistent(l_checkExport___boxed__const__1);
l_checkExport___boxed__const__2 = _init_l_checkExport___boxed__const__2();
lean_mark_persistent(l_checkExport___boxed__const__2);
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
