// Lean compiler output
// Module: Lean.Parser.Tactic.Doc
// Imports: public import Lean.Environment import Lean.Elab.InfoTree.Main meta import Lean.Parser.Attr import Lean.Parser.Extension import Lean.ExtraModUses
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
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Parser_parserExtension;
extern lean_object* l_Lean_Parser_ParserExtension_instInhabitedState_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Parser_registerParserAttributeHook(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_andList(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_Doc_isTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_Parser_Tactic_Doc_isTactic___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_isTactic___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_Doc_isTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Tactic_Doc_isTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_Parser_Tactic_Doc_isTactic___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_isTactic___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_isTactic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_isTactic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "tacticAlternativeExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(73, 93, 47, 100, 105, 134, 228, 150)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_alternativeOfTactic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__4_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__5 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__5_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__10_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__3(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "` is itself an alternative for `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "` is not a tactic (it is in the categor"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ies"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Invalid `["};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` attribute syntax"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is not a tactic"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_alt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(185, 29, 168, 181, 197, 113, 106, 176)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 58, 155, 4, 51, 160, 88)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(82, 168, 115, 176, 65, 44, 32, 74)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(170, 127, 150, 230, 147, 51, 9, 44)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(171, 201, 216, 96, 187, 41, 25, 8)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(150, 217, 225, 249, 92, 227, 115, 9)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 73, 235, 188, 43, 204, 182, 169)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 40, 120, 84, 223, 15, 213, 179)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 14, 153, 180, 178, 10, 178, 110)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 228, 109, 71, 114, 58, 146, 87)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__17_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(102, 220, 235, 94, 119, 251, 240, 121)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__18_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(239, 121, 233, 68, 41, 52, 222, 209)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__19_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 103, 238, 221, 135, 73, 246, 74)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__20_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 42, 205, 170, 76, 149, 101, 166)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__21_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(187, 231, 66, 168, 91, 162, 207, 65)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)(((size_t)(710499956) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(132, 168, 224, 4, 116, 200, 36, 20)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__23_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(171, 185, 77, 24, 123, 10, 110, 133)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__25_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 67, 140, 101, 31, 178, 245, 191)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__27_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(190, 125, 37, 177, 215, 25, 59, 117)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 121, .m_capacity = 121, .m_length = 120, .m_data = "Register a tactic parser as an alternative form of an existing tactic, so they can be grouped together in documentation."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__28_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__29_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21_spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "knownTacticTagExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(91, 95, 108, 201, 158, 34, 35, 73)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
static const lean_ctor_object l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0_value;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tacticTagExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 16, 159, 45, 73, 112, 111, 154)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__11_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticTagExt;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "(expected "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Unknown tag `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "` "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "one of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ", ..."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__12_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "(no tags defined)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "` is an alternative form of `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_tag"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 132, 153, 94, 172, 4, 109, 157)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed, .m_arity = 10, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1176478476) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(6, 145, 207, 84, 40, 68, 96, 133)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 222, 3, 19, 240, 88, 68, 38)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 217, 170, 202, 224, 178, 78, 10)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(228, 145, 95, 106, 189, 62, 63, 24)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 116, .m_capacity = 116, .m_length = 115, .m_data = "Register a tactic parser as an alternative of an existing tactic, so they can be grouped together in documentation."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tacticDocExtExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(149, 237, 208, 207, 38, 173, 216, 107)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "   "};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__2(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " * "};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n\nExtensions:\n\n"};
static const lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensionString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticNameExt"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 146, 24, 182, 49, 189, 94, 210)}};
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 229, 37, 106, 74, 105, 187, 225)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 8, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tacticNameExt;
static const lean_closure_object l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "The tactic `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` already has the custom name `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "` is defined in an imported module, but custom names can only be added in the tactic's defining module."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` is defined in `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "`, but custom names can only be added in the tactic's defining module."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__12_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_name"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(157, 250, 159, 49, 179, 121, 155, 115)}};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed, .m_arity = 11, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 132, .m_capacity = 132, .m_length = 131, .m_data = "Registers a custom name for a tactic. This custom name should be a prefix of the tactic's syntax, because it is used in completion."};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "` is not a tactic, but it was assigned a tactic name `"};
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0 = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics = (const lean_object*)&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(lean_object* v_keys_1_, lean_object* v_i_2_, lean_object* v_k_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_array_get_size(v_keys_1_);
v___x_5_ = lean_nat_dec_lt(v_i_2_, v___x_4_);
if (v___x_5_ == 0)
{
lean_dec(v_i_2_);
return v___x_5_;
}
else
{
lean_object* v_k_x27_6_; uint8_t v___x_7_; 
v_k_x27_6_ = lean_array_fget_borrowed(v_keys_1_, v_i_2_);
v___x_7_ = lean_name_eq(v_k_3_, v_k_x27_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_add(v_i_2_, v___x_8_);
lean_dec(v_i_2_);
v_i_2_ = v___x_9_;
goto _start;
}
else
{
lean_dec(v_i_2_);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_keys_11_, lean_object* v_i_12_, lean_object* v_k_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(v_keys_11_, v_i_12_, v_k_13_);
lean_dec(v_k_13_);
lean_dec_ref(v_keys_11_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(lean_object* v_x_16_, size_t v_x_17_, lean_object* v_x_18_){
_start:
{
if (lean_obj_tag(v_x_16_) == 0)
{
lean_object* v_es_19_; lean_object* v___x_20_; size_t v___x_21_; size_t v___x_22_; lean_object* v_j_23_; lean_object* v___x_24_; 
v_es_19_ = lean_ctor_get(v_x_16_, 0);
v___x_20_ = lean_box(2);
v___x_21_ = ((size_t)31ULL);
v___x_22_ = lean_usize_land(v_x_17_, v___x_21_);
v_j_23_ = lean_usize_to_nat(v___x_22_);
v___x_24_ = lean_array_get_borrowed(v___x_20_, v_es_19_, v_j_23_);
lean_dec(v_j_23_);
switch(lean_obj_tag(v___x_24_))
{
case 0:
{
lean_object* v_key_25_; uint8_t v___x_26_; 
v_key_25_ = lean_ctor_get(v___x_24_, 0);
v___x_26_ = lean_name_eq(v_x_18_, v_key_25_);
return v___x_26_;
}
case 1:
{
lean_object* v_node_27_; size_t v___x_28_; size_t v___x_29_; 
v_node_27_ = lean_ctor_get(v___x_24_, 0);
v___x_28_ = ((size_t)5ULL);
v___x_29_ = lean_usize_shift_right(v_x_17_, v___x_28_);
v_x_16_ = v_node_27_;
v_x_17_ = v___x_29_;
goto _start;
}
default: 
{
uint8_t v___x_31_; 
v___x_31_ = 0;
return v___x_31_;
}
}
}
else
{
lean_object* v_ks_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v_ks_32_ = lean_ctor_get(v_x_16_, 0);
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(v_ks_32_, v___x_33_, v_x_18_);
return v___x_34_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg___boxed(lean_object* v_x_35_, lean_object* v_x_36_, lean_object* v_x_37_){
_start:
{
size_t v_x_357__boxed_38_; uint8_t v_res_39_; lean_object* v_r_40_; 
v_x_357__boxed_38_ = lean_unbox_usize(v_x_36_);
lean_dec(v_x_36_);
v_res_39_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(v_x_35_, v_x_357__boxed_38_, v_x_37_);
lean_dec(v_x_37_);
lean_dec_ref(v_x_35_);
v_r_40_ = lean_box(v_res_39_);
return v_r_40_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
uint64_t v___y_44_; 
if (lean_obj_tag(v_x_42_) == 0)
{
uint64_t v___x_47_; 
v___x_47_ = 1723ULL;
v___y_44_ = v___x_47_;
goto v___jp_43_;
}
else
{
uint64_t v_hash_48_; 
v_hash_48_ = lean_ctor_get_uint64(v_x_42_, sizeof(void*)*2);
v___y_44_ = v_hash_48_;
goto v___jp_43_;
}
v___jp_43_:
{
size_t v___x_45_; uint8_t v___x_46_; 
v___x_45_ = lean_uint64_to_usize(v___y_44_);
v___x_46_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(v_x_41_, v___x_45_, v_x_42_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg___boxed(lean_object* v_x_49_, lean_object* v_x_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(v_x_49_, v_x_50_);
lean_dec(v_x_50_);
lean_dec_ref(v_x_49_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_53_, lean_object* v_vals_54_, lean_object* v_i_55_, lean_object* v_k_56_){
_start:
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_array_get_size(v_keys_53_);
v___x_58_ = lean_nat_dec_lt(v_i_55_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; 
lean_dec(v_i_55_);
v___x_59_ = lean_box(0);
return v___x_59_;
}
else
{
lean_object* v_k_x27_60_; uint8_t v___x_61_; 
v_k_x27_60_ = lean_array_fget_borrowed(v_keys_53_, v_i_55_);
v___x_61_ = lean_name_eq(v_k_56_, v_k_x27_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(1u);
v___x_63_ = lean_nat_add(v_i_55_, v___x_62_);
lean_dec(v_i_55_);
v_i_55_ = v___x_63_;
goto _start;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_array_fget_borrowed(v_vals_54_, v_i_55_);
lean_dec(v_i_55_);
lean_inc(v___x_65_);
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_67_, lean_object* v_vals_68_, lean_object* v_i_69_, lean_object* v_k_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(v_keys_67_, v_vals_68_, v_i_69_, v_k_70_);
lean_dec(v_k_70_);
lean_dec_ref(v_vals_68_);
lean_dec_ref(v_keys_67_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(lean_object* v_x_72_, size_t v_x_73_, lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_x_72_) == 0)
{
lean_object* v_es_75_; lean_object* v___x_76_; size_t v___x_77_; size_t v___x_78_; lean_object* v_j_79_; lean_object* v___x_80_; 
v_es_75_ = lean_ctor_get(v_x_72_, 0);
v___x_76_ = lean_box(2);
v___x_77_ = ((size_t)31ULL);
v___x_78_ = lean_usize_land(v_x_73_, v___x_77_);
v_j_79_ = lean_usize_to_nat(v___x_78_);
v___x_80_ = lean_array_get_borrowed(v___x_76_, v_es_75_, v_j_79_);
lean_dec(v_j_79_);
switch(lean_obj_tag(v___x_80_))
{
case 0:
{
lean_object* v_key_81_; lean_object* v_val_82_; uint8_t v___x_83_; 
v_key_81_ = lean_ctor_get(v___x_80_, 0);
v_val_82_ = lean_ctor_get(v___x_80_, 1);
v___x_83_ = lean_name_eq(v_x_74_, v_key_81_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
lean_object* v___x_85_; 
lean_inc(v_val_82_);
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v_val_82_);
return v___x_85_;
}
}
case 1:
{
lean_object* v_node_86_; size_t v___x_87_; size_t v___x_88_; 
v_node_86_ = lean_ctor_get(v___x_80_, 0);
v___x_87_ = ((size_t)5ULL);
v___x_88_ = lean_usize_shift_right(v_x_73_, v___x_87_);
v_x_72_ = v_node_86_;
v_x_73_ = v___x_88_;
goto _start;
}
default: 
{
lean_object* v___x_90_; 
v___x_90_ = lean_box(0);
return v___x_90_;
}
}
}
else
{
lean_object* v_ks_91_; lean_object* v_vs_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_ks_91_ = lean_ctor_get(v_x_72_, 0);
v_vs_92_ = lean_ctor_get(v_x_72_, 1);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(v_ks_91_, v_vs_92_, v___x_93_, v_x_74_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg___boxed(lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
size_t v_x_432__boxed_98_; lean_object* v_res_99_; 
v_x_432__boxed_98_ = lean_unbox_usize(v_x_96_);
lean_dec(v_x_96_);
v_res_99_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(v_x_95_, v_x_432__boxed_98_, v_x_97_);
lean_dec(v_x_97_);
lean_dec_ref(v_x_95_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
uint64_t v___y_103_; 
if (lean_obj_tag(v_x_101_) == 0)
{
uint64_t v___x_106_; 
v___x_106_ = 1723ULL;
v___y_103_ = v___x_106_;
goto v___jp_102_;
}
else
{
uint64_t v_hash_107_; 
v_hash_107_ = lean_ctor_get_uint64(v_x_101_, sizeof(void*)*2);
v___y_103_ = v_hash_107_;
goto v___jp_102_;
}
v___jp_102_:
{
size_t v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_uint64_to_usize(v___y_103_);
v___x_105_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(v_x_100_, v___x_104_, v_x_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg___boxed(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(v_x_108_, v_x_109_);
lean_dec(v_x_109_);
lean_dec_ref(v_x_108_);
return v_res_110_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_isTactic(lean_object* v_env_114_, lean_object* v_kind_115_){
_start:
{
lean_object* v___x_116_; lean_object* v_ext_117_; lean_object* v_toEnvExtension_118_; lean_object* v_asyncMode_119_; lean_object* v___x_120_; uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v_categories_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_116_ = l_Lean_Parser_parserExtension;
v_ext_117_ = lean_ctor_get(v___x_116_, 1);
v_toEnvExtension_118_ = lean_ctor_get(v_ext_117_, 0);
v_asyncMode_119_ = lean_ctor_get(v_toEnvExtension_118_, 2);
v___x_120_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_121_ = 0;
v___x_122_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_120_, v___x_116_, v_env_114_, v_asyncMode_119_, v___x_121_);
v_categories_123_ = lean_ctor_get(v___x_122_, 2);
lean_inc_ref(v_categories_123_);
lean_dec(v___x_122_);
v___x_124_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_isTactic___closed__1));
v___x_125_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(v_categories_123_, v___x_124_);
lean_dec_ref(v_categories_123_);
if (lean_obj_tag(v___x_125_) == 1)
{
lean_object* v_val_126_; lean_object* v_kinds_127_; uint8_t v___x_128_; 
v_val_126_ = lean_ctor_get(v___x_125_, 0);
lean_inc(v_val_126_);
lean_dec_ref_known(v___x_125_, 1);
v_kinds_127_ = lean_ctor_get(v_val_126_, 1);
lean_inc_ref(v_kinds_127_);
lean_dec(v_val_126_);
v___x_128_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(v_kinds_127_, v_kind_115_);
lean_dec_ref(v_kinds_127_);
return v___x_128_;
}
else
{
lean_dec(v___x_125_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_isTactic___boxed(lean_object* v_env_129_, lean_object* v_kind_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_129_, v_kind_130_);
lean_dec(v_kind_130_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0(lean_object* v_00_u03b2_133_, lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___redArg(v_x_134_, v_x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0___boxed(lean_object* v_00_u03b2_137_, lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0(v_00_u03b2_137_, v_x_138_, v_x_139_);
lean_dec(v_x_139_);
lean_dec_ref(v_x_138_);
return v_res_140_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1(lean_object* v_00_u03b2_141_, lean_object* v_x_142_, lean_object* v_x_143_){
_start:
{
uint8_t v___x_144_; 
v___x_144_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(v_x_142_, v_x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___boxed(lean_object* v_00_u03b2_145_, lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v_res_148_; lean_object* v_r_149_; 
v_res_148_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1(v_00_u03b2_145_, v_x_146_, v_x_147_);
lean_dec(v_x_147_);
lean_dec_ref(v_x_146_);
v_r_149_ = lean_box(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0(lean_object* v_00_u03b2_150_, lean_object* v_x_151_, size_t v_x_152_, lean_object* v_x_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___redArg(v_x_151_, v_x_152_, v_x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0___boxed(lean_object* v_00_u03b2_155_, lean_object* v_x_156_, lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
size_t v_x_536__boxed_159_; lean_object* v_res_160_; 
v_x_536__boxed_159_ = lean_unbox_usize(v_x_157_);
lean_dec(v_x_157_);
v_res_160_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0(v_00_u03b2_155_, v_x_156_, v_x_536__boxed_159_, v_x_158_);
lean_dec(v_x_158_);
lean_dec_ref(v_x_156_);
return v_res_160_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2(lean_object* v_00_u03b2_161_, lean_object* v_x_162_, size_t v_x_163_, lean_object* v_x_164_){
_start:
{
uint8_t v___x_165_; 
v___x_165_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___redArg(v_x_162_, v_x_163_, v_x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2___boxed(lean_object* v_00_u03b2_166_, lean_object* v_x_167_, lean_object* v_x_168_, lean_object* v_x_169_){
_start:
{
size_t v_x_547__boxed_170_; uint8_t v_res_171_; lean_object* v_r_172_; 
v_x_547__boxed_170_ = lean_unbox_usize(v_x_168_);
lean_dec(v_x_168_);
v_res_171_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2(v_00_u03b2_166_, v_x_167_, v_x_547__boxed_170_, v_x_169_);
lean_dec(v_x_169_);
lean_dec_ref(v_x_167_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_173_, lean_object* v_keys_174_, lean_object* v_vals_175_, lean_object* v_heq_176_, lean_object* v_i_177_, lean_object* v_k_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___redArg(v_keys_174_, v_vals_175_, v_i_177_, v_k_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_180_, lean_object* v_keys_181_, lean_object* v_vals_182_, lean_object* v_heq_183_, lean_object* v_i_184_, lean_object* v_k_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Parser_Tactic_Doc_isTactic_spec__0_spec__0_spec__1(v_00_u03b2_180_, v_keys_181_, v_vals_182_, v_heq_183_, v_i_184_, v_k_185_);
lean_dec(v_k_185_);
lean_dec_ref(v_vals_182_);
lean_dec_ref(v_keys_181_);
return v_res_186_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_187_, lean_object* v_keys_188_, lean_object* v_vals_189_, lean_object* v_heq_190_, lean_object* v_i_191_, lean_object* v_k_192_){
_start:
{
uint8_t v___x_193_; 
v___x_193_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___redArg(v_keys_188_, v_i_191_, v_k_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_194_, lean_object* v_keys_195_, lean_object* v_vals_196_, lean_object* v_heq_197_, lean_object* v_i_198_, lean_object* v_k_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1_spec__2_spec__4(v_00_u03b2_194_, v_keys_195_, v_vals_196_, v_heq_197_, v_i_198_, v_k_199_);
lean_dec(v_k_199_);
lean_dec_ref(v_vals_196_);
lean_dec_ref(v_keys_195_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_as_202_, lean_object* v_x_203_){
_start:
{
lean_object* v_fst_204_; lean_object* v_snd_205_; lean_object* v___x_206_; 
v_fst_204_ = lean_ctor_get(v_x_203_, 0);
lean_inc(v_fst_204_);
v_snd_205_ = lean_ctor_get(v_x_203_, 1);
lean_inc(v_snd_205_);
lean_dec_ref(v_x_203_);
v___x_206_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_204_, v_snd_205_, v_as_202_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_207_, lean_object* v_pivot_208_, lean_object* v_as_209_, lean_object* v_i_210_, lean_object* v_k_211_){
_start:
{
uint8_t v___x_212_; 
v___x_212_ = lean_nat_dec_lt(v_k_211_, v_hi_207_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec(v_k_211_);
v___x_213_ = lean_array_fswap(v_as_209_, v_i_210_, v_hi_207_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v_i_210_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
return v___x_214_;
}
else
{
lean_object* v___x_215_; lean_object* v_fst_216_; lean_object* v_fst_217_; uint8_t v___x_218_; 
v___x_215_ = lean_array_fget_borrowed(v_as_209_, v_k_211_);
v_fst_216_ = lean_ctor_get(v___x_215_, 0);
v_fst_217_ = lean_ctor_get(v_pivot_208_, 0);
v___x_218_ = l_Lean_Name_quickLt(v_fst_216_, v_fst_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(1u);
v___x_220_ = lean_nat_add(v_k_211_, v___x_219_);
lean_dec(v_k_211_);
v_k_211_ = v___x_220_;
goto _start;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_222_ = lean_array_fswap(v_as_209_, v_i_210_, v_k_211_);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_nat_add(v_i_210_, v___x_223_);
lean_dec(v_i_210_);
v___x_225_ = lean_nat_add(v_k_211_, v___x_223_);
lean_dec(v_k_211_);
v_as_209_ = v___x_222_;
v_i_210_ = v___x_224_;
v_k_211_ = v___x_225_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_227_, lean_object* v_pivot_228_, lean_object* v_as_229_, lean_object* v_i_230_, lean_object* v_k_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_227_, v_pivot_228_, v_as_229_, v_i_230_, v_k_231_);
lean_dec_ref(v_pivot_228_);
lean_dec(v_hi_227_);
return v_res_232_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_233_, lean_object* v_x2_234_){
_start:
{
lean_object* v_fst_235_; lean_object* v_fst_236_; uint8_t v___x_237_; 
v_fst_235_ = lean_ctor_get(v_x1_233_, 0);
v_fst_236_ = lean_ctor_get(v_x2_234_, 0);
v___x_237_ = l_Lean_Name_quickLt(v_fst_235_, v_fst_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_238_, lean_object* v_x2_239_){
_start:
{
uint8_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_238_, v_x2_239_);
lean_dec_ref(v_x2_239_);
lean_dec_ref(v_x1_238_);
v_r_241_ = lean_box(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_242_, lean_object* v_as_243_, lean_object* v_lo_244_, lean_object* v_hi_245_){
_start:
{
lean_object* v___y_247_; uint8_t v___x_257_; 
v___x_257_ = lean_nat_dec_lt(v_lo_244_, v_hi_245_);
if (v___x_257_ == 0)
{
lean_dec(v_lo_244_);
return v_as_243_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v_mid_260_; lean_object* v___y_262_; lean_object* v___y_268_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_258_ = lean_nat_add(v_lo_244_, v_hi_245_);
v___x_259_ = lean_unsigned_to_nat(1u);
v_mid_260_ = lean_nat_shiftr(v___x_258_, v___x_259_);
lean_dec(v___x_258_);
v___x_273_ = lean_array_fget_borrowed(v_as_243_, v_mid_260_);
v___x_274_ = lean_array_fget_borrowed(v_as_243_, v_lo_244_);
v___x_275_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_273_, v___x_274_);
if (v___x_275_ == 0)
{
v___y_268_ = v_as_243_;
goto v___jp_267_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = lean_array_fswap(v_as_243_, v_lo_244_, v_mid_260_);
v___y_268_ = v___x_276_;
goto v___jp_267_;
}
v___jp_261_:
{
lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_263_ = lean_array_fget_borrowed(v___y_262_, v_mid_260_);
v___x_264_ = lean_array_fget_borrowed(v___y_262_, v_hi_245_);
v___x_265_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_dec(v_mid_260_);
v___y_247_ = v___y_262_;
goto v___jp_246_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_array_fswap(v___y_262_, v_mid_260_, v_hi_245_);
lean_dec(v_mid_260_);
v___y_247_ = v___x_266_;
goto v___jp_246_;
}
}
v___jp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_269_ = lean_array_fget_borrowed(v___y_268_, v_hi_245_);
v___x_270_ = lean_array_fget_borrowed(v___y_268_, v_lo_244_);
v___x_271_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_269_, v___x_270_);
if (v___x_271_ == 0)
{
v___y_262_ = v___y_268_;
goto v___jp_261_;
}
else
{
lean_object* v___x_272_; 
v___x_272_ = lean_array_fswap(v___y_268_, v_lo_244_, v_hi_245_);
v___y_262_ = v___x_272_;
goto v___jp_261_;
}
}
}
v___jp_246_:
{
lean_object* v_pivot_248_; lean_object* v___x_249_; lean_object* v_fst_250_; lean_object* v_snd_251_; uint8_t v___x_252_; 
v_pivot_248_ = lean_array_fget(v___y_247_, v_hi_245_);
lean_inc_n(v_lo_244_, 2);
v___x_249_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_245_, v_pivot_248_, v___y_247_, v_lo_244_, v_lo_244_);
lean_dec(v_pivot_248_);
v_fst_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_fst_250_);
v_snd_251_ = lean_ctor_get(v___x_249_, 1);
lean_inc(v_snd_251_);
lean_dec_ref(v___x_249_);
v___x_252_ = lean_nat_dec_le(v_hi_245_, v_fst_250_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v_n_242_, v_snd_251_, v_lo_244_, v_fst_250_);
v___x_254_ = lean_unsigned_to_nat(1u);
v___x_255_ = lean_nat_add(v_fst_250_, v___x_254_);
lean_dec(v_fst_250_);
v_as_243_ = v___x_253_;
v_lo_244_ = v___x_255_;
goto _start;
}
else
{
lean_dec(v_fst_250_);
lean_dec(v_lo_244_);
return v_snd_251_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_277_, lean_object* v_as_278_, lean_object* v_lo_279_, lean_object* v_hi_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v_n_277_, v_as_278_, v_lo_279_, v_hi_280_);
lean_dec(v_hi_280_);
lean_dec(v_n_277_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_282_, lean_object* v_x_283_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
lean_object* v_k_284_; lean_object* v_v_285_; lean_object* v_l_286_; lean_object* v_r_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_k_284_ = lean_ctor_get(v_x_283_, 1);
v_v_285_ = lean_ctor_get(v_x_283_, 2);
v_l_286_ = lean_ctor_get(v_x_283_, 3);
v_r_287_ = lean_ctor_get(v_x_283_, 4);
v___x_288_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v_init_282_, v_l_286_);
lean_inc(v_v_285_);
lean_inc(v_k_284_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v_k_284_);
lean_ctor_set(v___x_289_, 1, v_v_285_);
v___x_290_ = lean_array_push(v___x_288_, v___x_289_);
v_init_282_ = v___x_290_;
v_x_283_ = v_r_287_;
goto _start;
}
else
{
return v_init_282_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_292_, lean_object* v_x_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v_init_292_, v_x_293_);
lean_dec(v_x_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_x_297_, lean_object* v_s_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___y_304_; lean_object* v___y_305_; uint8_t v___x_308_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_301_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v___x_300_, v_s_298_);
v___x_302_ = lean_array_get_size(v___x_301_);
v___x_308_ = lean_nat_dec_eq(v___x_302_, v___x_299_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___y_312_; uint8_t v___x_314_; 
v___x_309_ = lean_unsigned_to_nat(1u);
v___x_310_ = lean_nat_sub(v___x_302_, v___x_309_);
v___x_314_ = lean_nat_dec_le(v___x_299_, v___x_310_);
if (v___x_314_ == 0)
{
lean_inc(v___x_310_);
v___y_312_ = v___x_310_;
goto v___jp_311_;
}
else
{
v___y_312_ = v___x_299_;
goto v___jp_311_;
}
v___jp_311_:
{
uint8_t v___x_313_; 
v___x_313_ = lean_nat_dec_le(v___y_312_, v___x_310_);
if (v___x_313_ == 0)
{
lean_dec(v___x_310_);
lean_inc(v___y_312_);
v___y_304_ = v___y_312_;
v___y_305_ = v___y_312_;
goto v___jp_303_;
}
else
{
v___y_304_ = v___y_312_;
v___y_305_ = v___x_310_;
goto v___jp_303_;
}
}
}
else
{
lean_object* v___x_315_; 
lean_inc_ref_n(v___x_301_, 2);
v___x_315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_315_, 0, v___x_301_);
lean_ctor_set(v___x_315_, 1, v___x_301_);
lean_ctor_set(v___x_315_, 2, v___x_301_);
return v___x_315_;
}
v___jp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v___x_302_, v___x_301_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_inc_ref_n(v___x_306_, 2);
v___x_307_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
lean_ctor_set(v___x_307_, 2, v___x_306_);
return v___x_307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_x_316_, lean_object* v_s_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v_x_316_, v_s_317_);
lean_dec(v_s_317_);
lean_dec_ref(v_x_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_x_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_box(0);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_x_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v_x_321_);
lean_dec(v_x_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v_es_323_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_326_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v___x_325_, v_es_323_);
v___x_327_ = lean_array_get_size(v___x_326_);
v___x_328_ = lean_nat_dec_eq(v___x_327_, v___x_324_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___y_332_; uint8_t v___x_336_; 
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_nat_sub(v___x_327_, v___x_329_);
v___x_336_ = lean_nat_dec_le(v___x_324_, v___x_330_);
if (v___x_336_ == 0)
{
lean_inc(v___x_330_);
v___y_332_ = v___x_330_;
goto v___jp_331_;
}
else
{
v___y_332_ = v___x_324_;
goto v___jp_331_;
}
v___jp_331_:
{
uint8_t v___x_333_; 
v___x_333_ = lean_nat_dec_le(v___y_332_, v___x_330_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v___x_330_);
lean_inc(v___y_332_);
v___x_334_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v___x_327_, v___x_326_, v___y_332_, v___y_332_);
lean_dec(v___y_332_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v___x_327_, v___x_326_, v___y_332_, v___x_330_);
lean_dec(v___x_330_);
return v___x_335_;
}
}
}
else
{
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_es_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v_es_337_);
lean_dec(v_es_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v___x_339_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_339_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v___x_342_, lean_object* v___y_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v___x_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(lean_object* v___x_345_, lean_object* v_x_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_345_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v___x_350_, lean_object* v_x_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(v___x_350_, v_x_351_, v___y_352_);
lean_dec_ref(v___y_352_);
lean_dec_ref(v_x_351_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__13_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_389_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2____boxed(lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_();
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0(lean_object* v_init_392_, lean_object* v_t_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0_spec__0(v_init_392_, v_t_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_395_, lean_object* v_t_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__0(v_init_395_, v_t_396_);
lean_dec(v_t_396_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1(lean_object* v_n_398_, lean_object* v_as_399_, lean_object* v_lo_400_, lean_object* v_hi_401_, lean_object* v_w_402_, lean_object* v_hlo_403_, lean_object* v_hhi_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg(v_n_398_, v_as_399_, v_lo_400_, v_hi_401_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_406_, lean_object* v_as_407_, lean_object* v_lo_408_, lean_object* v_hi_409_, lean_object* v_w_410_, lean_object* v_hlo_411_, lean_object* v_hhi_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1(v_n_406_, v_as_407_, v_lo_408_, v_hi_409_, v_w_410_, v_hlo_411_, v_hhi_412_);
lean_dec(v_hi_409_);
lean_dec(v_n_406_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_414_, lean_object* v_lo_415_, lean_object* v_hi_416_, lean_object* v_hhi_417_, lean_object* v_pivot_418_, lean_object* v_as_419_, lean_object* v_i_420_, lean_object* v_k_421_, lean_object* v_ilo_422_, lean_object* v_ik_423_, lean_object* v_w_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_416_, v_pivot_418_, v_as_419_, v_i_420_, v_k_421_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_426_, lean_object* v_lo_427_, lean_object* v_hi_428_, lean_object* v_hhi_429_, lean_object* v_pivot_430_, lean_object* v_as_431_, lean_object* v_i_432_, lean_object* v_k_433_, lean_object* v_ilo_434_, lean_object* v_ik_435_, lean_object* v_w_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1_spec__2(v_n_426_, v_lo_427_, v_hi_428_, v_hhi_429_, v_pivot_430_, v_as_431_, v_i_432_, v_k_433_, v_ilo_434_, v_ik_435_, v_w_436_);
lean_dec_ref(v_pivot_430_);
lean_dec(v_hi_428_);
lean_dec(v_lo_427_);
lean_dec(v_n_426_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(lean_object* v_as_438_, lean_object* v_k_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v_m_444_; lean_object* v_a_445_; uint8_t v___x_446_; 
v___x_442_ = lean_nat_add(v_x_440_, v_x_441_);
v___x_443_ = lean_unsigned_to_nat(1u);
v_m_444_ = lean_nat_shiftr(v___x_442_, v___x_443_);
lean_dec(v___x_442_);
v_a_445_ = lean_array_fget_borrowed(v_as_438_, v_m_444_);
v___x_446_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_445_, v_k_439_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; 
lean_dec(v_x_441_);
v___x_447_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_439_, v_a_445_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
lean_dec(v_m_444_);
lean_dec(v_x_440_);
lean_inc(v_a_445_);
v___x_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_448_, 0, v_a_445_);
return v___x_448_;
}
else
{
lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_nat_dec_eq(v_m_444_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_nat_sub(v_m_444_, v___x_443_);
lean_dec(v_m_444_);
v___x_452_ = lean_nat_dec_lt(v___x_451_, v_x_440_);
if (v___x_452_ == 0)
{
v_x_441_ = v___x_451_;
goto _start;
}
else
{
lean_object* v___x_454_; 
lean_dec(v___x_451_);
lean_dec(v_x_440_);
v___x_454_ = lean_box(0);
return v___x_454_;
}
}
else
{
lean_object* v___x_455_; 
lean_dec(v_m_444_);
lean_dec(v_x_440_);
v___x_455_ = lean_box(0);
return v___x_455_;
}
}
}
else
{
lean_object* v___x_456_; uint8_t v___x_457_; 
lean_dec(v_x_440_);
v___x_456_ = lean_nat_add(v_m_444_, v___x_443_);
lean_dec(v_m_444_);
v___x_457_ = lean_nat_dec_le(v___x_456_, v_x_441_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec(v___x_456_);
lean_dec(v_x_441_);
v___x_458_ = lean_box(0);
return v___x_458_;
}
else
{
v_x_440_ = v___x_456_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg___boxed(lean_object* v_as_460_, lean_object* v_k_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(v_as_460_, v_k_461_, v_x_462_, v_x_463_);
lean_dec_ref(v_k_461_);
lean_dec_ref(v_as_460_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_alternativeOfTactic(lean_object* v_env_465_, lean_object* v_tac_466_){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_box(1);
v___x_468_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_465_, v_tac_466_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v___x_469_; lean_object* v_toEnvExtension_470_; lean_object* v_asyncMode_471_; lean_object* v___x_472_; uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_469_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v_toEnvExtension_470_ = lean_ctor_get(v___x_469_, 0);
v_asyncMode_471_ = lean_ctor_get(v_toEnvExtension_470_, 2);
v___x_472_ = lean_box(0);
v___x_473_ = 0;
v___x_474_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_467_, v___x_469_, v_env_465_, v_asyncMode_471_, v___x_472_, v___x_473_);
v___x_475_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_474_, v_tac_466_);
lean_dec(v_tac_466_);
lean_dec(v___x_474_);
return v___x_475_;
}
else
{
lean_object* v_val_476_; lean_object* v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_val_476_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_val_476_);
lean_dec_ref_known(v___x_468_, 1);
v___x_477_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v___x_478_ = 0;
v___x_479_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_467_, v___x_477_, v_env_465_, v_val_476_, v___x_478_);
lean_dec(v_val_476_);
lean_dec_ref(v_env_465_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_array_get_size(v___x_479_);
v___x_482_ = lean_nat_dec_lt(v___x_480_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
lean_dec_ref(v___x_479_);
lean_dec(v_tac_466_);
v___x_483_ = lean_box(0);
return v___x_483_;
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_484_ = lean_unsigned_to_nat(1u);
v___x_485_ = lean_nat_sub(v___x_481_, v___x_484_);
v___x_486_ = lean_nat_dec_le(v___x_480_, v___x_485_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; 
lean_dec(v___x_485_);
lean_dec_ref(v___x_479_);
lean_dec(v_tac_466_);
v___x_487_ = lean_box(0);
return v___x_487_;
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_box(0);
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v_tac_466_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(v___x_479_, v___x_489_, v___x_480_, v___x_485_);
lean_dec_ref_known(v___x_489_, 2);
lean_dec_ref(v___x_479_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_491_; 
v___x_491_ = lean_box(0);
return v___x_491_;
}
else
{
lean_object* v_val_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
v_val_492_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v___x_490_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_val_492_);
lean_dec(v___x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v_snd_496_; lean_object* v___x_498_; 
v_snd_496_ = lean_ctor_get(v_val_492_, 1);
lean_inc(v_snd_496_);
lean_dec(v_val_492_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v_snd_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_snd_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0(lean_object* v_as_501_, lean_object* v_k_502_, lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___redArg(v_as_501_, v_k_502_, v_x_503_, v_x_504_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0___boxed(lean_object* v_as_507_, lean_object* v_k_508_, lean_object* v_x_509_, lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_alternativeOfTactic_spec__0(v_as_507_, v_k_508_, v_x_509_, v_x_510_, v_x_511_);
lean_dec_ref(v_k_508_);
lean_dec_ref(v_as_507_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0(lean_object* v_toPure_513_, lean_object* v_____do__lift_514_){
_start:
{
lean_object* v_a_515_; lean_object* v___x_516_; 
v_a_515_ = lean_ctor_get(v_____do__lift_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref(v_____do__lift_514_);
v___x_516_ = lean_apply_2(v_toPure_513_, lean_box(0), v_a_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1(lean_object* v_tac_517_, lean_object* v_toPure_518_, lean_object* v_a_519_, lean_object* v_b_520_, lean_object* v_c_521_){
_start:
{
uint8_t v___x_522_; 
v___x_522_ = lean_name_eq(v_b_520_, v_tac_517_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec(v_a_519_);
v___x_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_523_, 0, v_c_521_);
v___x_524_ = lean_apply_2(v_toPure_518_, lean_box(0), v___x_523_);
return v___x_524_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_525_ = l_Lean_NameSet_insert(v_c_521_, v_a_519_);
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
v___x_527_ = lean_apply_2(v_toPure_518_, lean_box(0), v___x_526_);
return v___x_527_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1___boxed(lean_object* v_tac_528_, lean_object* v_toPure_529_, lean_object* v_a_530_, lean_object* v_b_531_, lean_object* v_c_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1(v_tac_528_, v_toPure_529_, v_a_530_, v_b_531_, v_c_532_);
lean_dec(v_b_531_);
lean_dec(v_tac_528_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2(lean_object* v_tac_534_, lean_object* v_toPure_535_, lean_object* v_a_536_, lean_object* v_x_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_fst_539_; lean_object* v_snd_540_; uint8_t v___x_541_; 
v_fst_539_ = lean_ctor_get(v_a_536_, 0);
lean_inc(v_fst_539_);
v_snd_540_ = lean_ctor_get(v_a_536_, 1);
lean_inc(v_snd_540_);
lean_dec_ref(v_a_536_);
v___x_541_ = lean_name_eq(v_snd_540_, v_tac_534_);
lean_dec(v_snd_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec(v_fst_539_);
v___x_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_542_, 0, v___y_538_);
v___x_543_ = lean_apply_2(v_toPure_535_, lean_box(0), v___x_542_);
return v___x_543_;
}
else
{
lean_object* v_found_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_found_544_ = l_Lean_NameSet_insert(v___y_538_, v_fst_539_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v_found_544_);
v___x_546_ = lean_apply_2(v_toPure_535_, lean_box(0), v___x_545_);
return v___x_546_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2___boxed(lean_object* v_tac_547_, lean_object* v_toPure_548_, lean_object* v_a_549_, lean_object* v_x_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2(v_tac_547_, v_toPure_548_, v_a_549_, v_x_550_, v___y_551_);
lean_dec(v_tac_547_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3(lean_object* v_toPure_553_, lean_object* v_____s_554_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_555_, 0, v_____s_554_);
v___x_556_ = lean_apply_2(v_toPure_553_, lean_box(0), v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__4(lean_object* v_inst_557_, lean_object* v___f_558_, lean_object* v_toBind_559_, lean_object* v___f_560_, lean_object* v_a_561_, lean_object* v_x_562_, lean_object* v___y_563_){
_start:
{
size_t v_sz_564_; size_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_sz_564_ = lean_array_size(v_a_561_);
v___x_565_ = ((size_t)0ULL);
v___x_566_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_557_, v_a_561_, v___f_558_, v_sz_564_, v___x_565_, v___y_563_);
v___x_567_ = lean_apply_4(v_toBind_559_, lean_box(0), lean_box(0), v___x_566_, v___f_560_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__5(lean_object* v_toPure_568_, lean_object* v_____s_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_apply_2(v_toPure_568_, lean_box(0), v_____s_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6(lean_object* v___x_571_, lean_object* v_toEnvExtension_572_, lean_object* v_env_573_, lean_object* v_asyncMode_574_, lean_object* v___x_575_, uint8_t v___x_576_, lean_object* v_inst_577_, lean_object* v___f_578_, lean_object* v_toBind_579_, lean_object* v___f_580_, lean_object* v_____s_581_){
_start:
{
lean_object* v___x_582_; lean_object* v_importedEntries_583_; size_t v_sz_584_; size_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_582_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_571_, v_toEnvExtension_572_, v_env_573_, v_asyncMode_574_, v___x_575_, v___x_576_);
v_importedEntries_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc_ref(v_importedEntries_583_);
lean_dec(v___x_582_);
v_sz_584_ = lean_array_size(v_importedEntries_583_);
v___x_585_ = ((size_t)0ULL);
v___x_586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_577_, v_importedEntries_583_, v___f_578_, v_sz_584_, v___x_585_, v_____s_581_);
v___x_587_ = lean_apply_4(v_toBind_579_, lean_box(0), lean_box(0), v___x_586_, v___f_580_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6___boxed(lean_object* v___x_588_, lean_object* v_toEnvExtension_589_, lean_object* v_env_590_, lean_object* v_asyncMode_591_, lean_object* v___x_592_, lean_object* v___x_593_, lean_object* v_inst_594_, lean_object* v___f_595_, lean_object* v_toBind_596_, lean_object* v___f_597_, lean_object* v_____s_598_){
_start:
{
uint8_t v___x_355__boxed_599_; lean_object* v_res_600_; 
v___x_355__boxed_599_ = lean_unbox(v___x_593_);
v_res_600_ = l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6(v___x_588_, v_toEnvExtension_589_, v_env_590_, v_asyncMode_591_, v___x_592_, v___x_355__boxed_599_, v_inst_594_, v___f_595_, v_toBind_596_, v___f_597_, v_____s_598_);
lean_dec(v_asyncMode_591_);
lean_dec_ref(v_toEnvExtension_589_);
lean_dec_ref(v___x_588_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__7(lean_object* v___x_601_, lean_object* v_inst_602_, lean_object* v___f_603_, lean_object* v_toBind_604_, lean_object* v___f_605_, lean_object* v___x_606_, lean_object* v___f_607_, lean_object* v___f_608_, lean_object* v_env_609_){
_start:
{
lean_object* v___x_610_; lean_object* v_toEnvExtension_611_; lean_object* v_asyncMode_612_; lean_object* v_found_613_; lean_object* v___x_614_; uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_610_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v_toEnvExtension_611_ = lean_ctor_get(v___x_610_, 0);
v_asyncMode_612_ = lean_ctor_get(v_toEnvExtension_611_, 2);
v_found_613_ = l_Lean_NameSet_empty;
v___x_614_ = lean_box(0);
v___x_615_ = 0;
v___x_616_ = lean_box(v___x_615_);
lean_inc_n(v_toBind_604_, 2);
lean_inc_ref(v_inst_602_);
lean_inc(v_asyncMode_612_);
lean_inc_ref(v_env_609_);
lean_inc_ref(v_toEnvExtension_611_);
v___f_617_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_617_, 0, v___x_601_);
lean_closure_set(v___f_617_, 1, v_toEnvExtension_611_);
lean_closure_set(v___f_617_, 2, v_env_609_);
lean_closure_set(v___f_617_, 3, v_asyncMode_612_);
lean_closure_set(v___f_617_, 4, v___x_614_);
lean_closure_set(v___f_617_, 5, v___x_616_);
lean_closure_set(v___f_617_, 6, v_inst_602_);
lean_closure_set(v___f_617_, 7, v___f_603_);
lean_closure_set(v___f_617_, 8, v_toBind_604_);
lean_closure_set(v___f_617_, 9, v___f_605_);
v___x_618_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_606_, v___x_610_, v_env_609_, v_asyncMode_612_, v___x_614_, v___x_615_);
v___x_619_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_602_, v___f_607_, v_found_613_, v___x_618_);
v___x_620_ = lean_apply_4(v_toBind_604_, lean_box(0), lean_box(0), v___x_619_, v___f_608_);
v___x_621_ = lean_apply_4(v_toBind_604_, lean_box(0), lean_box(0), v___x_620_, v___f_617_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_box(1);
v___x_623_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases___redArg(lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_tac_626_){
_start:
{
lean_object* v_toApplicative_627_; lean_object* v_toBind_628_; lean_object* v_getEnv_629_; lean_object* v_toPure_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___f_637_; lean_object* v___f_638_; lean_object* v___f_639_; lean_object* v___x_640_; 
v_toApplicative_627_ = lean_ctor_get(v_inst_624_, 0);
v_toBind_628_ = lean_ctor_get(v_inst_624_, 1);
lean_inc_n(v_toBind_628_, 3);
v_getEnv_629_ = lean_ctor_get(v_inst_625_, 0);
lean_inc(v_getEnv_629_);
lean_dec_ref(v_inst_625_);
v_toPure_630_ = lean_ctor_get(v_toApplicative_627_, 1);
v___x_631_ = lean_box(1);
v___x_632_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
lean_inc_n(v_toPure_630_, 5);
v___f_633_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0), 2, 1);
lean_closure_set(v___f_633_, 0, v_toPure_630_);
lean_inc(v_tac_626_);
v___f_634_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_634_, 0, v_tac_626_);
lean_closure_set(v___f_634_, 1, v_toPure_630_);
v___f_635_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__2___boxed), 5, 2);
lean_closure_set(v___f_635_, 0, v_tac_626_);
lean_closure_set(v___f_635_, 1, v_toPure_630_);
v___f_636_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3), 2, 1);
lean_closure_set(v___f_636_, 0, v_toPure_630_);
lean_inc_ref(v_inst_624_);
v___f_637_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__4), 7, 4);
lean_closure_set(v___f_637_, 0, v_inst_624_);
lean_closure_set(v___f_637_, 1, v___f_635_);
lean_closure_set(v___f_637_, 2, v_toBind_628_);
lean_closure_set(v___f_637_, 3, v___f_636_);
v___f_638_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__5), 2, 1);
lean_closure_set(v___f_638_, 0, v_toPure_630_);
v___f_639_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__7), 9, 8);
lean_closure_set(v___f_639_, 0, v___x_632_);
lean_closure_set(v___f_639_, 1, v_inst_624_);
lean_closure_set(v___f_639_, 2, v___f_637_);
lean_closure_set(v___f_639_, 3, v_toBind_628_);
lean_closure_set(v___f_639_, 4, v___f_638_);
lean_closure_set(v___f_639_, 5, v___x_631_);
lean_closure_set(v___f_639_, 6, v___f_634_);
lean_closure_set(v___f_639_, 7, v___f_633_);
v___x_640_ = lean_apply_4(v_toBind_628_, lean_box(0), lean_box(0), v_getEnv_629_, v___f_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_aliases(lean_object* v_m_641_, lean_object* v_inst_642_, lean_object* v_inst_643_, lean_object* v_tac_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_Parser_Tactic_Doc_aliases___redArg(v_inst_642_, v_inst_643_, v_tac_644_);
return v___x_645_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_646_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
return v___x_648_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_649_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_650_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_651_ = lean_unsigned_to_nat(0u);
v___x_652_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
lean_ctor_set(v___x_652_, 2, v___x_651_);
lean_ctor_set(v___x_652_, 3, v___x_651_);
lean_ctor_set(v___x_652_, 4, v___x_650_);
lean_ctor_set(v___x_652_, 5, v___x_650_);
lean_ctor_set(v___x_652_, 6, v___x_650_);
lean_ctor_set(v___x_652_, 7, v___x_650_);
lean_ctor_set(v___x_652_, 8, v___x_650_);
lean_ctor_set(v___x_652_, 9, v___x_650_);
lean_ctor_set(v___x_652_, 10, v___x_650_);
lean_ctor_set(v___x_652_, 11, v___x_649_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_unsigned_to_nat(32u);
v___x_654_ = lean_mk_empty_array_with_capacity(v___x_653_);
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_656_ = ((size_t)5ULL);
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = lean_unsigned_to_nat(32u);
v___x_659_ = lean_mk_empty_array_with_capacity(v___x_658_);
v___x_660_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_661_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_661_, 0, v___x_660_);
lean_ctor_set(v___x_661_, 1, v___x_659_);
lean_ctor_set(v___x_661_, 2, v___x_657_);
lean_ctor_set(v___x_661_, 3, v___x_657_);
lean_ctor_set_usize(v___x_661_, 4, v___x_656_);
return v___x_661_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_662_ = lean_box(1);
v___x_663_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_664_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_665_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v___x_663_);
lean_ctor_set(v___x_665_, 2, v___x_662_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v___x_670_; lean_object* v_toCold_671_; lean_object* v_env_672_; lean_object* v_options_673_; uint8_t v___x_674_; lean_object* v_env_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_670_ = lean_st_ref_get(v___y_668_);
v_toCold_671_ = lean_ctor_get(v___y_667_, 0);
v_env_672_ = lean_ctor_get(v___x_670_, 0);
lean_inc_ref(v_env_672_);
lean_dec(v___x_670_);
v_options_673_ = lean_ctor_get(v_toCold_671_, 2);
v___x_674_ = 0;
v_env_675_ = l_Lean_Environment_setRecordingDeps(v_env_672_, v___x_674_);
v___x_676_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_677_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_673_);
v___x_678_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_678_, 0, v_env_675_);
lean_ctor_set(v___x_678_, 1, v___x_676_);
lean_ctor_set(v___x_678_, 2, v___x_677_);
lean_ctor_set(v___x_678_, 3, v_options_673_);
v___x_679_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v_msgData_666_);
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0(v_msgData_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v_ref_690_; lean_object* v___x_691_; lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_700_; 
v_ref_690_ = lean_ctor_get(v___y_687_, 2);
v___x_691_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0(v_msg_686_, v___y_687_, v___y_688_);
v_a_692_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_700_ == 0)
{
v___x_694_ = v___x_691_;
v_isShared_695_ = v_isSharedCheck_700_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_700_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_696_; lean_object* v___x_698_; 
lean_inc(v_ref_690_);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v_ref_690_);
lean_ctor_set(v___x_696_, 1, v_a_692_);
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 1);
lean_ctor_set(v___x_694_, 0, v___x_696_);
v___x_698_ = v___x_694_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v_msg_701_, v___y_702_, v___y_703_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
return v_res_705_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_708_ = l_Lean_stringToMessageData(v___x_707_);
return v___x_708_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_711_ = l_Lean_stringToMessageData(v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object* v_name_712_, lean_object* v_decl_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_717_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_718_ = l_Lean_MessageData_ofName(v_name_712_);
v___x_719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_719_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v___x_722_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_721_, v___y_714_, v___y_715_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object* v_name_723_, lean_object* v_decl_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(v_name_723_, v_decl_724_, v___y_725_, v___y_726_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v_decl_724_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object* v_addEntryFn_729_, lean_object* v___x_730_, lean_object* v_s_731_){
_start:
{
lean_object* v_importedEntries_732_; lean_object* v_state_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_741_; 
v_importedEntries_732_ = lean_ctor_get(v_s_731_, 0);
v_state_733_ = lean_ctor_get(v_s_731_, 1);
v_isSharedCheck_741_ = !lean_is_exclusive(v_s_731_);
if (v_isSharedCheck_741_ == 0)
{
v___x_735_ = v_s_731_;
v_isShared_736_ = v_isSharedCheck_741_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_state_733_);
lean_inc(v_importedEntries_732_);
lean_dec(v_s_731_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_741_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_state_737_; lean_object* v___x_739_; 
v_state_737_ = lean_apply_2(v_addEntryFn_729_, v_state_733_, v___x_730_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 1, v_state_737_);
v___x_739_ = v___x_735_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_importedEntries_732_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_state_737_);
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
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object* v_decl_742_, lean_object* v_x_743_, lean_object* v_____s_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v_snd_748_; lean_object* v_fst_749_; lean_object* v_kinds_750_; uint8_t v___x_751_; 
v_snd_748_ = lean_ctor_get(v_x_743_, 1);
lean_inc(v_snd_748_);
v_fst_749_ = lean_ctor_get(v_x_743_, 0);
lean_inc(v_fst_749_);
lean_dec_ref(v_x_743_);
v_kinds_750_ = lean_ctor_get(v_snd_748_, 1);
lean_inc_ref(v_kinds_750_);
lean_dec(v_snd_748_);
v___x_751_ = l_Lean_PersistentHashMap_contains___at___00Lean_Parser_Tactic_Doc_isTactic_spec__1___redArg(v_kinds_750_, v_decl_742_);
lean_dec_ref(v_kinds_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; lean_object* v___x_753_; 
lean_dec(v_fst_749_);
v___x_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_752_, 0, v_____s_744_);
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
return v___x_753_;
}
else
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = lean_array_push(v_____s_744_, v_fst_749_);
v___x_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
v___x_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
return v___x_756_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object* v_decl_757_, lean_object* v_x_758_, lean_object* v_____s_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(v_decl_757_, v_x_758_, v_____s_759_, v___y_760_, v___y_761_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v_decl_757_);
return v_res_763_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__0));
v___x_766_ = l_Lean_stringToMessageData(v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2(size_t v_sz_767_, size_t v_i_768_, lean_object* v_bs_769_){
_start:
{
uint8_t v___x_770_; 
v___x_770_ = lean_usize_dec_lt(v_i_768_, v_sz_767_);
if (v___x_770_ == 0)
{
return v_bs_769_;
}
else
{
lean_object* v_v_771_; lean_object* v___x_772_; lean_object* v_bs_x27_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; size_t v___x_778_; size_t v___x_779_; lean_object* v___x_780_; 
v_v_771_ = lean_array_uget(v_bs_769_, v_i_768_);
v___x_772_ = lean_unsigned_to_nat(0u);
v_bs_x27_773_ = lean_array_uset(v_bs_769_, v_i_768_, v___x_772_);
v___x_774_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_775_ = l_Lean_MessageData_ofName(v_v_771_);
v___x_776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_774_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v___x_774_);
v___x_778_ = ((size_t)1ULL);
v___x_779_ = lean_usize_add(v_i_768_, v___x_778_);
v___x_780_ = lean_array_uset(v_bs_x27_773_, v_i_768_, v___x_777_);
v_i_768_ = v___x_779_;
v_bs_769_ = v___x_780_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___boxed(lean_object* v_sz_782_, lean_object* v_i_783_, lean_object* v_bs_784_){
_start:
{
size_t v_sz_boxed_785_; size_t v_i_boxed_786_; lean_object* v_res_787_; 
v_sz_boxed_785_ = lean_unbox_usize(v_sz_782_);
lean_dec(v_sz_782_);
v_i_boxed_786_ = lean_unbox_usize(v_i_783_);
lean_dec(v_i_783_);
v_res_787_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2(v_sz_boxed_785_, v_i_boxed_786_, v_bs_784_);
return v_res_787_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__0));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_792_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__2));
v___x_793_ = l_Lean_stringToMessageData(v___x_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg(lean_object* v_name_797_, uint8_t v_kind_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___y_808_; 
v___x_802_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__1);
v___x_803_ = l_Lean_MessageData_ofName(v_name_797_);
v___x_804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_802_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__3);
v___x_806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_804_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
switch(v_kind_798_)
{
case 0:
{
lean_object* v___x_815_; 
v___x_815_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__4));
v___y_808_ = v___x_815_;
goto v___jp_807_;
}
case 1:
{
lean_object* v___x_816_; 
v___x_816_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__5));
v___y_808_ = v___x_816_;
goto v___jp_807_;
}
default: 
{
lean_object* v___x_817_; 
v___x_817_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___closed__6));
v___y_808_ = v___x_817_;
goto v___jp_807_;
}
}
v___jp_807_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_inc_ref(v___y_808_);
v___x_809_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_809_, 0, v___y_808_);
v___x_810_ = l_Lean_MessageData_ofFormat(v___x_809_);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_806_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_813_, v___y_799_, v___y_800_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg___boxed(lean_object* v_name_818_, lean_object* v_kind_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
uint8_t v_kind_boxed_823_; lean_object* v_res_824_; 
v_kind_boxed_823_ = lean_unbox(v_kind_819_);
v_res_824_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg(v_name_818_, v_kind_boxed_823_, v___y_820_, v___y_821_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___redArg(lean_object* v_f_825_, lean_object* v_keys_826_, lean_object* v_vals_827_, lean_object* v_i_828_, lean_object* v_acc_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_833_ = lean_array_get_size(v_keys_826_);
v___x_834_ = lean_nat_dec_lt(v_i_828_, v___x_833_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; lean_object* v___x_836_; 
lean_dec(v_i_828_);
lean_dec_ref(v_f_825_);
v___x_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_835_, 0, v_acc_829_);
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
else
{
lean_object* v_k_837_; lean_object* v_v_838_; lean_object* v___x_839_; 
v_k_837_ = lean_array_fget_borrowed(v_keys_826_, v_i_828_);
v_v_838_ = lean_array_fget_borrowed(v_vals_827_, v_i_828_);
lean_inc_ref(v_f_825_);
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
lean_inc(v_v_838_);
lean_inc(v_k_837_);
v___x_839_ = lean_apply_6(v_f_825_, v_acc_829_, v_k_837_, v_v_838_, v___y_830_, v___y_831_, lean_box(0));
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; 
v_a_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_840_);
if (lean_obj_tag(v_a_840_) == 0)
{
lean_dec_ref_known(v_a_840_, 1);
lean_dec(v_i_828_);
lean_dec_ref(v_f_825_);
return v___x_839_;
}
else
{
lean_object* v_a_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
lean_dec_ref_known(v___x_839_, 1);
v_a_841_ = lean_ctor_get(v_a_840_, 0);
lean_inc(v_a_841_);
lean_dec_ref_known(v_a_840_, 1);
v___x_842_ = lean_unsigned_to_nat(1u);
v___x_843_ = lean_nat_add(v_i_828_, v___x_842_);
lean_dec(v_i_828_);
v_i_828_ = v___x_843_;
v_acc_829_ = v_a_841_;
goto _start;
}
}
else
{
lean_dec(v_i_828_);
lean_dec_ref(v_f_825_);
return v___x_839_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___redArg___boxed(lean_object* v_f_845_, lean_object* v_keys_846_, lean_object* v_vals_847_, lean_object* v_i_848_, lean_object* v_acc_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___redArg(v_f_845_, v_keys_846_, v_vals_847_, v_i_848_, v_acc_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec_ref(v_vals_847_);
lean_dec_ref(v_keys_846_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___redArg(lean_object* v_f_854_, lean_object* v_as_855_, size_t v_i_856_, size_t v_stop_857_, lean_object* v_b_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_a_863_; lean_object* v___y_868_; uint8_t v___x_871_; 
v___x_871_ = lean_usize_dec_eq(v_i_856_, v_stop_857_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; 
v___x_872_ = lean_array_uget_borrowed(v_as_855_, v_i_856_);
switch(lean_obj_tag(v___x_872_))
{
case 0:
{
lean_object* v_key_873_; lean_object* v_val_874_; lean_object* v___x_875_; 
v_key_873_ = lean_ctor_get(v___x_872_, 0);
v_val_874_ = lean_ctor_get(v___x_872_, 1);
lean_inc_ref(v_f_854_);
lean_inc(v___y_860_);
lean_inc_ref(v___y_859_);
lean_inc(v_val_874_);
lean_inc(v_key_873_);
v___x_875_ = lean_apply_6(v_f_854_, v_b_858_, v_key_873_, v_val_874_, v___y_859_, v___y_860_, lean_box(0));
v___y_868_ = v___x_875_;
goto v___jp_867_;
}
case 1:
{
lean_object* v_node_876_; lean_object* v___x_877_; 
v_node_876_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_node_876_);
lean_inc_ref(v_f_854_);
v___x_877_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_f_854_, v_node_876_, v_b_858_, v___y_859_, v___y_860_);
v___y_868_ = v___x_877_;
goto v___jp_867_;
}
default: 
{
v_a_863_ = v_b_858_;
goto v___jp_862_;
}
}
}
else
{
lean_object* v___x_878_; lean_object* v___x_879_; 
lean_dec_ref(v_f_854_);
v___x_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_878_, 0, v_b_858_);
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
v___jp_862_:
{
size_t v___x_864_; size_t v___x_865_; 
v___x_864_ = ((size_t)1ULL);
v___x_865_ = lean_usize_add(v_i_856_, v___x_864_);
v_i_856_ = v___x_865_;
v_b_858_ = v_a_863_;
goto _start;
}
v___jp_867_:
{
if (lean_obj_tag(v___y_868_) == 0)
{
lean_object* v_a_869_; 
v_a_869_ = lean_ctor_get(v___y_868_, 0);
if (lean_obj_tag(v_a_869_) == 0)
{
lean_dec_ref(v_f_854_);
return v___y_868_;
}
else
{
lean_object* v_a_870_; 
lean_inc_ref(v_a_869_);
lean_dec_ref_known(v___y_868_, 1);
v_a_870_ = lean_ctor_get(v_a_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v_a_869_, 1);
v_a_863_ = v_a_870_;
goto v___jp_862_;
}
}
else
{
lean_dec_ref(v_f_854_);
return v___y_868_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(lean_object* v_f_880_, lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
if (lean_obj_tag(v_x_881_) == 0)
{
lean_object* v_es_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_900_; 
v_es_886_ = lean_ctor_get(v_x_881_, 0);
v_isSharedCheck_900_ = !lean_is_exclusive(v_x_881_);
if (v_isSharedCheck_900_ == 0)
{
v___x_888_ = v_x_881_;
v_isShared_889_ = v_isSharedCheck_900_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_es_886_);
lean_dec(v_x_881_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_900_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = lean_array_get_size(v_es_886_);
v___x_892_ = lean_nat_dec_lt(v___x_890_, v___x_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_894_; 
lean_dec_ref(v_es_886_);
lean_dec_ref(v_f_880_);
if (v_isShared_889_ == 0)
{
lean_ctor_set_tag(v___x_888_, 1);
lean_ctor_set(v___x_888_, 0, v_x_882_);
v___x_894_ = v___x_888_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_x_882_);
v___x_894_ = v_reuseFailAlloc_896_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_895_; 
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
else
{
size_t v___x_897_; size_t v___x_898_; lean_object* v___x_899_; 
lean_del_object(v___x_888_);
v___x_897_ = ((size_t)0ULL);
v___x_898_ = lean_usize_of_nat(v___x_891_);
v___x_899_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___redArg(v_f_880_, v_es_886_, v___x_897_, v___x_898_, v_x_882_, v___y_883_, v___y_884_);
lean_dec_ref(v_es_886_);
return v___x_899_;
}
}
}
else
{
lean_object* v_ks_901_; lean_object* v_vs_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_ks_901_ = lean_ctor_get(v_x_881_, 0);
lean_inc_ref(v_ks_901_);
v_vs_902_ = lean_ctor_get(v_x_881_, 1);
lean_inc_ref(v_vs_902_);
lean_dec_ref_known(v_x_881_, 2);
v___x_903_ = lean_unsigned_to_nat(0u);
v___x_904_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___redArg(v_f_880_, v_ks_901_, v_vs_902_, v___x_903_, v_x_882_, v___y_883_, v___y_884_);
lean_dec_ref(v_vs_902_);
lean_dec_ref(v_ks_901_);
return v___x_904_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_f_905_, lean_object* v_x_906_, lean_object* v_x_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_f_905_, v_x_906_, v_x_907_, v___y_908_, v___y_909_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___redArg___boxed(lean_object* v_f_912_, lean_object* v_as_913_, lean_object* v_i_914_, lean_object* v_stop_915_, lean_object* v_b_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
size_t v_i_boxed_920_; size_t v_stop_boxed_921_; lean_object* v_res_922_; 
v_i_boxed_920_ = lean_unbox_usize(v_i_914_);
lean_dec(v_i_914_);
v_stop_boxed_921_ = lean_unbox_usize(v_stop_915_);
lean_dec(v_stop_915_);
v_res_922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___redArg(v_f_912_, v_as_913_, v_i_boxed_920_, v_stop_boxed_921_, v_b_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec_ref(v_as_913_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_f_923_, lean_object* v_s_924_, lean_object* v_a_925_, lean_object* v_b_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_930_, 0, v_a_925_);
lean_ctor_set(v___x_930_, 1, v_b_926_);
lean_inc(v___y_928_);
lean_inc_ref(v___y_927_);
v___x_931_ = lean_apply_5(v_f_923_, v___x_930_, v_s_924_, v___y_927_, v___y_928_, lean_box(0));
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_958_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_958_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_958_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_958_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
if (lean_obj_tag(v_a_932_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_946_; 
v_a_936_ = lean_ctor_get(v_a_932_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v_a_932_);
if (v_isSharedCheck_946_ == 0)
{
v___x_938_ = v_a_932_;
v_isShared_939_ = v_isSharedCheck_946_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v_a_932_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_946_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_945_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_943_; 
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_941_);
v___x_943_ = v___x_934_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_957_; 
v_a_947_ = lean_ctor_get(v_a_932_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v_a_932_);
if (v_isSharedCheck_957_ == 0)
{
v___x_949_ = v_a_932_;
v_isShared_950_ = v_isSharedCheck_957_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v_a_932_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_957_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_956_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_954_; 
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_952_);
v___x_954_ = v___x_934_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v_a_959_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_931_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_931_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_f_967_, lean_object* v_s_968_, lean_object* v_a_969_, lean_object* v_b_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___lam__0(v_f_967_, v_s_968_, v_a_969_, v_b_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg(lean_object* v_map_975_, lean_object* v_init_976_, lean_object* v_f_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v___f_981_; lean_object* v___x_982_; 
v___f_981_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_981_, 0, v_f_977_);
lean_inc_ref(v_map_975_);
v___x_982_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v___f_981_, v_map_975_, v_init_976_, v___y_978_, v___y_979_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_991_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_991_ == 0)
{
v___x_985_ = v___x_982_;
v_isShared_986_ = v_isSharedCheck_991_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_982_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_991_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v_a_987_; lean_object* v___x_989_; 
v_a_987_ = lean_ctor_get(v_a_983_, 0);
lean_inc(v_a_987_);
lean_dec(v_a_983_);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v_a_987_);
v___x_989_ = v___x_985_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
v_a_992_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_982_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_982_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_map_1000_, lean_object* v_init_1001_, lean_object* v_f_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg(v_map_1000_, v_init_1001_, v_f_1002_, v___y_1003_, v___y_1004_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec_ref(v_map_1000_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___lam__0(lean_object* v___x_1007_, lean_object* v_entry_1008_, lean_object* v_s_1009_){
_start:
{
lean_object* v_addEntryFn_1010_; lean_object* v_importedEntries_1011_; lean_object* v_state_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1020_; 
v_addEntryFn_1010_ = lean_ctor_get(v___x_1007_, 3);
lean_inc(v_addEntryFn_1010_);
lean_dec_ref(v___x_1007_);
v_importedEntries_1011_ = lean_ctor_get(v_s_1009_, 0);
v_state_1012_ = lean_ctor_get(v_s_1009_, 1);
v_isSharedCheck_1020_ = !lean_is_exclusive(v_s_1009_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1014_ = v_s_1009_;
v_isShared_1015_ = v_isSharedCheck_1020_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_state_1012_);
lean_inc(v_importedEntries_1011_);
lean_dec(v_s_1009_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1020_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_state_1016_; lean_object* v___x_1018_; 
v_state_1016_ = lean_apply_2(v_addEntryFn_1010_, v_state_1012_, v_entry_1008_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 1, v_state_1016_);
v___x_1018_ = v___x_1014_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_importedEntries_1011_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_state_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21_spec__24___redArg(lean_object* v_x_1021_, lean_object* v_x_1022_){
_start:
{
if (lean_obj_tag(v_x_1022_) == 0)
{
return v_x_1021_;
}
else
{
lean_object* v_key_1023_; lean_object* v_value_1024_; lean_object* v_tail_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1048_; 
v_key_1023_ = lean_ctor_get(v_x_1022_, 0);
v_value_1024_ = lean_ctor_get(v_x_1022_, 1);
v_tail_1025_ = lean_ctor_get(v_x_1022_, 2);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_x_1022_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1027_ = v_x_1022_;
v_isShared_1028_ = v_isSharedCheck_1048_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_tail_1025_);
lean_inc(v_value_1024_);
lean_inc(v_key_1023_);
lean_dec(v_x_1022_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1048_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1029_; uint64_t v___x_1030_; uint64_t v___x_1031_; uint64_t v___x_1032_; uint64_t v_fold_1033_; uint64_t v___x_1034_; uint64_t v___x_1035_; uint64_t v___x_1036_; size_t v___x_1037_; size_t v___x_1038_; size_t v___x_1039_; size_t v___x_1040_; size_t v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1044_; 
v___x_1029_ = lean_array_get_size(v_x_1021_);
v___x_1030_ = l_Lean_instHashableExtraModUse_hash(v_key_1023_);
v___x_1031_ = 32ULL;
v___x_1032_ = lean_uint64_shift_right(v___x_1030_, v___x_1031_);
v_fold_1033_ = lean_uint64_xor(v___x_1030_, v___x_1032_);
v___x_1034_ = 16ULL;
v___x_1035_ = lean_uint64_shift_right(v_fold_1033_, v___x_1034_);
v___x_1036_ = lean_uint64_xor(v_fold_1033_, v___x_1035_);
v___x_1037_ = lean_uint64_to_usize(v___x_1036_);
v___x_1038_ = lean_usize_of_nat(v___x_1029_);
v___x_1039_ = ((size_t)1ULL);
v___x_1040_ = lean_usize_sub(v___x_1038_, v___x_1039_);
v___x_1041_ = lean_usize_land(v___x_1037_, v___x_1040_);
v___x_1042_ = lean_array_uget_borrowed(v_x_1021_, v___x_1041_);
lean_inc(v___x_1042_);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 2, v___x_1042_);
v___x_1044_ = v___x_1027_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_key_1023_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v_value_1024_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v___x_1042_);
v___x_1044_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_array_uset(v_x_1021_, v___x_1041_, v___x_1044_);
v_x_1021_ = v___x_1045_;
v_x_1022_ = v_tail_1025_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21___redArg(lean_object* v_i_1049_, lean_object* v_source_1050_, lean_object* v_target_1051_){
_start:
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1052_ = lean_array_get_size(v_source_1050_);
v___x_1053_ = lean_nat_dec_lt(v_i_1049_, v___x_1052_);
if (v___x_1053_ == 0)
{
lean_dec_ref(v_source_1050_);
lean_dec(v_i_1049_);
return v_target_1051_;
}
else
{
lean_object* v_es_1054_; lean_object* v___x_1055_; lean_object* v_source_1056_; lean_object* v_target_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_es_1054_ = lean_array_fget(v_source_1050_, v_i_1049_);
v___x_1055_ = lean_box(0);
v_source_1056_ = lean_array_fset(v_source_1050_, v_i_1049_, v___x_1055_);
v_target_1057_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21_spec__24___redArg(v_target_1051_, v_es_1054_);
v___x_1058_ = lean_unsigned_to_nat(1u);
v___x_1059_ = lean_nat_add(v_i_1049_, v___x_1058_);
lean_dec(v_i_1049_);
v_i_1049_ = v___x_1059_;
v_source_1050_ = v_source_1056_;
v_target_1051_ = v_target_1057_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17___redArg(lean_object* v_data_1061_){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v_nbuckets_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1062_ = lean_array_get_size(v_data_1061_);
v___x_1063_ = lean_unsigned_to_nat(2u);
v_nbuckets_1064_ = lean_nat_mul(v___x_1062_, v___x_1063_);
v___x_1065_ = lean_unsigned_to_nat(0u);
v___x_1066_ = lean_box(0);
v___x_1067_ = lean_mk_array(v_nbuckets_1064_, v___x_1066_);
v___x_1068_ = lean_array_propagate_mark(v_data_1061_, v___x_1067_);
v___x_1069_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21___redArg(v___x_1065_, v_data_1061_, v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___redArg(lean_object* v_a_1070_, lean_object* v_x_1071_){
_start:
{
if (lean_obj_tag(v_x_1071_) == 0)
{
uint8_t v___x_1072_; 
v___x_1072_ = 0;
return v___x_1072_;
}
else
{
lean_object* v_key_1073_; lean_object* v_tail_1074_; uint8_t v___x_1075_; 
v_key_1073_ = lean_ctor_get(v_x_1071_, 0);
v_tail_1074_ = lean_ctor_get(v_x_1071_, 2);
v___x_1075_ = l_Lean_instBEqExtraModUse_beq(v_key_1073_, v_a_1070_);
if (v___x_1075_ == 0)
{
v_x_1071_ = v_tail_1074_;
goto _start;
}
else
{
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___redArg___boxed(lean_object* v_a_1077_, lean_object* v_x_1078_){
_start:
{
uint8_t v_res_1079_; lean_object* v_r_1080_; 
v_res_1079_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___redArg(v_a_1077_, v_x_1078_);
lean_dec(v_x_1078_);
lean_dec_ref(v_a_1077_);
v_r_1080_ = lean_box(v_res_1079_);
return v_r_1080_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(lean_object* v_m_1081_, lean_object* v_a_1082_, lean_object* v_b_1083_){
_start:
{
lean_object* v_size_1084_; lean_object* v_buckets_1085_; lean_object* v___x_1086_; uint64_t v___x_1087_; uint64_t v___x_1088_; uint64_t v___x_1089_; uint64_t v_fold_1090_; uint64_t v___x_1091_; uint64_t v___x_1092_; uint64_t v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; size_t v___x_1096_; size_t v___x_1097_; size_t v___x_1098_; lean_object* v_bkt_1099_; uint8_t v___x_1100_; 
v_size_1084_ = lean_ctor_get(v_m_1081_, 0);
v_buckets_1085_ = lean_ctor_get(v_m_1081_, 1);
v___x_1086_ = lean_array_get_size(v_buckets_1085_);
v___x_1087_ = l_Lean_instHashableExtraModUse_hash(v_a_1082_);
v___x_1088_ = 32ULL;
v___x_1089_ = lean_uint64_shift_right(v___x_1087_, v___x_1088_);
v_fold_1090_ = lean_uint64_xor(v___x_1087_, v___x_1089_);
v___x_1091_ = 16ULL;
v___x_1092_ = lean_uint64_shift_right(v_fold_1090_, v___x_1091_);
v___x_1093_ = lean_uint64_xor(v_fold_1090_, v___x_1092_);
v___x_1094_ = lean_uint64_to_usize(v___x_1093_);
v___x_1095_ = lean_usize_of_nat(v___x_1086_);
v___x_1096_ = ((size_t)1ULL);
v___x_1097_ = lean_usize_sub(v___x_1095_, v___x_1096_);
v___x_1098_ = lean_usize_land(v___x_1094_, v___x_1097_);
v_bkt_1099_ = lean_array_uget_borrowed(v_buckets_1085_, v___x_1098_);
v___x_1100_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___redArg(v_a_1082_, v_bkt_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1121_; 
lean_inc_ref(v_buckets_1085_);
lean_inc(v_size_1084_);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_m_1081_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; lean_object* v_unused_1123_; 
v_unused_1122_ = lean_ctor_get(v_m_1081_, 1);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_m_1081_, 0);
lean_dec(v_unused_1123_);
v___x_1102_ = v_m_1081_;
v_isShared_1103_ = v_isSharedCheck_1121_;
goto v_resetjp_1101_;
}
else
{
lean_dec(v_m_1081_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1121_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v_size_x27_1105_; lean_object* v___x_1106_; lean_object* v_buckets_x27_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1104_ = lean_unsigned_to_nat(1u);
v_size_x27_1105_ = lean_nat_add(v_size_1084_, v___x_1104_);
lean_dec(v_size_1084_);
lean_inc(v_bkt_1099_);
v___x_1106_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1106_, 0, v_a_1082_);
lean_ctor_set(v___x_1106_, 1, v_b_1083_);
lean_ctor_set(v___x_1106_, 2, v_bkt_1099_);
v_buckets_x27_1107_ = lean_array_uset(v_buckets_1085_, v___x_1098_, v___x_1106_);
v___x_1108_ = lean_unsigned_to_nat(4u);
v___x_1109_ = lean_nat_mul(v_size_x27_1105_, v___x_1108_);
v___x_1110_ = lean_unsigned_to_nat(3u);
v___x_1111_ = lean_nat_div(v___x_1109_, v___x_1110_);
lean_dec(v___x_1109_);
v___x_1112_ = lean_array_get_size(v_buckets_x27_1107_);
v___x_1113_ = lean_nat_dec_le(v___x_1111_, v___x_1112_);
lean_dec(v___x_1111_);
if (v___x_1113_ == 0)
{
lean_object* v_val_1114_; lean_object* v___x_1116_; 
v_val_1114_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17___redArg(v_buckets_x27_1107_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 1, v_val_1114_);
lean_ctor_set(v___x_1102_, 0, v_size_x27_1105_);
v___x_1116_ = v___x_1102_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_size_x27_1105_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_val_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
else
{
lean_object* v___x_1119_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 1, v_buckets_x27_1107_);
lean_ctor_set(v___x_1102_, 0, v_size_x27_1105_);
v___x_1119_ = v___x_1102_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_size_x27_1105_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v_buckets_x27_1107_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
else
{
lean_dec(v_b_1083_);
lean_dec_ref(v_a_1082_);
return v_m_1081_;
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__0(void){
_start:
{
lean_object* v___x_1124_; double v___x_1125_; 
v___x_1124_ = lean_unsigned_to_nat(0u);
v___x_1125_ = lean_float_of_nat(v___x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10(lean_object* v_cls_1129_, lean_object* v_msg_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v_ref_1134_; lean_object* v___x_1135_; lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1181_; 
v_ref_1134_ = lean_ctor_get(v___y_1131_, 2);
v___x_1135_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0(v_msg_1130_, v___y_1131_, v___y_1132_);
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1138_ = v___x_1135_;
v_isShared_1139_ = v_isSharedCheck_1181_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1135_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1181_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; lean_object* v_traceState_1141_; lean_object* v_env_1142_; lean_object* v_nextMacroScope_1143_; lean_object* v_ngen_1144_; lean_object* v_auxDeclNGen_1145_; lean_object* v_cache_1146_; lean_object* v_recordedDeps_1147_; lean_object* v_messages_1148_; lean_object* v_infoState_1149_; lean_object* v_snapshotTasks_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1180_; 
v___x_1140_ = lean_st_ref_take(v___y_1132_);
v_traceState_1141_ = lean_ctor_get(v___x_1140_, 4);
v_env_1142_ = lean_ctor_get(v___x_1140_, 0);
v_nextMacroScope_1143_ = lean_ctor_get(v___x_1140_, 1);
v_ngen_1144_ = lean_ctor_get(v___x_1140_, 2);
v_auxDeclNGen_1145_ = lean_ctor_get(v___x_1140_, 3);
v_cache_1146_ = lean_ctor_get(v___x_1140_, 5);
v_recordedDeps_1147_ = lean_ctor_get(v___x_1140_, 6);
v_messages_1148_ = lean_ctor_get(v___x_1140_, 7);
v_infoState_1149_ = lean_ctor_get(v___x_1140_, 8);
v_snapshotTasks_1150_ = lean_ctor_get(v___x_1140_, 9);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1152_ = v___x_1140_;
v_isShared_1153_ = v_isSharedCheck_1180_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_snapshotTasks_1150_);
lean_inc(v_infoState_1149_);
lean_inc(v_messages_1148_);
lean_inc(v_recordedDeps_1147_);
lean_inc(v_cache_1146_);
lean_inc(v_traceState_1141_);
lean_inc(v_auxDeclNGen_1145_);
lean_inc(v_ngen_1144_);
lean_inc(v_nextMacroScope_1143_);
lean_inc(v_env_1142_);
lean_dec(v___x_1140_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1180_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
uint64_t v_tid_1154_; lean_object* v_traces_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1179_; 
v_tid_1154_ = lean_ctor_get_uint64(v_traceState_1141_, sizeof(void*)*1);
v_traces_1155_ = lean_ctor_get(v_traceState_1141_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_traceState_1141_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1157_ = v_traceState_1141_;
v_isShared_1158_ = v_isSharedCheck_1179_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_traces_1155_);
lean_dec(v_traceState_1141_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1179_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; double v___x_1161_; uint8_t v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1159_ = lean_box(0);
v___x_1160_ = lean_box(0);
v___x_1161_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__0);
v___x_1162_ = 0;
v___x_1163_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
v___x_1164_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1164_, 0, v_cls_1129_);
lean_ctor_set(v___x_1164_, 1, v___x_1160_);
lean_ctor_set(v___x_1164_, 2, v___x_1163_);
lean_ctor_set_float(v___x_1164_, sizeof(void*)*3, v___x_1161_);
lean_ctor_set_float(v___x_1164_, sizeof(void*)*3 + 8, v___x_1161_);
lean_ctor_set_uint8(v___x_1164_, sizeof(void*)*3 + 16, v___x_1162_);
v___x_1165_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__2));
v___x_1166_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1164_);
lean_ctor_set(v___x_1166_, 1, v_a_1136_);
lean_ctor_set(v___x_1166_, 2, v___x_1165_);
lean_inc(v_ref_1134_);
v___x_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1167_, 0, v_ref_1134_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
v___x_1168_ = l_Lean_PersistentArray_push___redArg(v_traces_1155_, v___x_1167_);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 0, v___x_1168_);
v___x_1170_ = v___x_1157_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1168_);
lean_ctor_set_uint64(v_reuseFailAlloc_1178_, sizeof(void*)*1, v_tid_1154_);
v___x_1170_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1172_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 4, v___x_1170_);
v___x_1172_ = v___x_1152_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_env_1142_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_nextMacroScope_1143_);
lean_ctor_set(v_reuseFailAlloc_1177_, 2, v_ngen_1144_);
lean_ctor_set(v_reuseFailAlloc_1177_, 3, v_auxDeclNGen_1145_);
lean_ctor_set(v_reuseFailAlloc_1177_, 4, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1177_, 5, v_cache_1146_);
lean_ctor_set(v_reuseFailAlloc_1177_, 6, v_recordedDeps_1147_);
lean_ctor_set(v_reuseFailAlloc_1177_, 7, v_messages_1148_);
lean_ctor_set(v_reuseFailAlloc_1177_, 8, v_infoState_1149_);
lean_ctor_set(v_reuseFailAlloc_1177_, 9, v_snapshotTasks_1150_);
v___x_1172_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1173_ = lean_st_ref_put(v___y_1132_, v___x_1172_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 0, v___x_1159_);
v___x_1175_ = v___x_1138_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1159_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___boxed(lean_object* v_cls_1182_, lean_object* v_msg_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10(v_cls_1182_, v_msg_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1187_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___redArg(lean_object* v_keys_1188_, lean_object* v_i_1189_, lean_object* v_k_1190_){
_start:
{
lean_object* v___x_1191_; uint8_t v___x_1192_; 
v___x_1191_ = lean_array_get_size(v_keys_1188_);
v___x_1192_ = lean_nat_dec_lt(v_i_1189_, v___x_1191_);
if (v___x_1192_ == 0)
{
lean_dec(v_i_1189_);
return v___x_1192_;
}
else
{
lean_object* v_k_x27_1193_; uint8_t v___x_1194_; 
v_k_x27_1193_ = lean_array_fget_borrowed(v_keys_1188_, v_i_1189_);
v___x_1194_ = l_Lean_instBEqExtraModUse_beq(v_k_1190_, v_k_x27_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_unsigned_to_nat(1u);
v___x_1196_ = lean_nat_add(v_i_1189_, v___x_1195_);
lean_dec(v_i_1189_);
v_i_1189_ = v___x_1196_;
goto _start;
}
else
{
lean_dec(v_i_1189_);
return v___x_1192_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___redArg___boxed(lean_object* v_keys_1198_, lean_object* v_i_1199_, lean_object* v_k_1200_){
_start:
{
uint8_t v_res_1201_; lean_object* v_r_1202_; 
v_res_1201_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___redArg(v_keys_1198_, v_i_1199_, v_k_1200_);
lean_dec_ref(v_k_1200_);
lean_dec_ref(v_keys_1198_);
v_r_1202_ = lean_box(v_res_1201_);
return v_r_1202_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___redArg(lean_object* v_x_1203_, size_t v_x_1204_, lean_object* v_x_1205_){
_start:
{
if (lean_obj_tag(v_x_1203_) == 0)
{
lean_object* v_es_1206_; lean_object* v___x_1207_; size_t v___x_1208_; size_t v___x_1209_; lean_object* v_j_1210_; lean_object* v___x_1211_; 
v_es_1206_ = lean_ctor_get(v_x_1203_, 0);
v___x_1207_ = lean_box(2);
v___x_1208_ = ((size_t)31ULL);
v___x_1209_ = lean_usize_land(v_x_1204_, v___x_1208_);
v_j_1210_ = lean_usize_to_nat(v___x_1209_);
v___x_1211_ = lean_array_get_borrowed(v___x_1207_, v_es_1206_, v_j_1210_);
lean_dec(v_j_1210_);
switch(lean_obj_tag(v___x_1211_))
{
case 0:
{
lean_object* v_key_1212_; uint8_t v___x_1213_; 
v_key_1212_ = lean_ctor_get(v___x_1211_, 0);
v___x_1213_ = l_Lean_instBEqExtraModUse_beq(v_x_1205_, v_key_1212_);
return v___x_1213_;
}
case 1:
{
lean_object* v_node_1214_; size_t v___x_1215_; size_t v___x_1216_; 
v_node_1214_ = lean_ctor_get(v___x_1211_, 0);
v___x_1215_ = ((size_t)5ULL);
v___x_1216_ = lean_usize_shift_right(v_x_1204_, v___x_1215_);
v_x_1203_ = v_node_1214_;
v_x_1204_ = v___x_1216_;
goto _start;
}
default: 
{
uint8_t v___x_1218_; 
v___x_1218_ = 0;
return v___x_1218_;
}
}
}
else
{
lean_object* v_ks_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v_ks_1219_ = lean_ctor_get(v_x_1203_, 0);
v___x_1220_ = lean_unsigned_to_nat(0u);
v___x_1221_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___redArg(v_ks_1219_, v___x_1220_, v_x_1205_);
return v___x_1221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___redArg___boxed(lean_object* v_x_1222_, lean_object* v_x_1223_, lean_object* v_x_1224_){
_start:
{
size_t v_x_12479__boxed_1225_; uint8_t v_res_1226_; lean_object* v_r_1227_; 
v_x_12479__boxed_1225_ = lean_unbox_usize(v_x_1223_);
lean_dec(v_x_1223_);
v_res_1226_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___redArg(v_x_1222_, v_x_12479__boxed_1225_, v_x_1224_);
lean_dec_ref(v_x_1224_);
lean_dec_ref(v_x_1222_);
v_r_1227_ = lean_box(v_res_1226_);
return v_r_1227_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___redArg(lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
uint64_t v___x_1230_; size_t v___x_1231_; uint8_t v___x_1232_; 
v___x_1230_ = l_Lean_instHashableExtraModUse_hash(v_x_1229_);
v___x_1231_ = lean_uint64_to_usize(v___x_1230_);
v___x_1232_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___redArg(v_x_1228_, v___x_1231_, v_x_1229_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_x_1233_, lean_object* v_x_1234_){
_start:
{
uint8_t v_res_1235_; lean_object* v_r_1236_; 
v_res_1235_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___redArg(v_x_1233_, v_x_1234_);
lean_dec_ref(v_x_1234_);
lean_dec_ref(v_x_1233_);
v_r_1236_ = lean_box(v_res_1235_);
return v_r_1236_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1(void){
_start:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__0);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
return v___x_1240_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1241_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__6(void){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__5));
v___x_1247_ = l_Lean_stringToMessageData(v___x_1246_);
return v___x_1247_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__8(void){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1249_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__7));
v___x_1250_ = l_Lean_stringToMessageData(v___x_1249_);
return v___x_1250_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__9(void){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
v___x_1252_ = l_Lean_stringToMessageData(v___x_1251_);
return v___x_1252_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__12(void){
_start:
{
lean_object* v_cls_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_cls_1256_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__4));
v___x_1257_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__11));
v___x_1258_ = l_Lean_Name_append(v___x_1257_, v_cls_1256_);
return v___x_1258_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__14(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__13));
v___x_1261_ = l_Lean_stringToMessageData(v___x_1260_);
return v___x_1261_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__15));
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6(lean_object* v_mod_1269_, uint8_t v_isMeta_1270_, lean_object* v_hint_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v___y_1276_; lean_object* v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v_env_1293_; uint8_t v_isExporting_1294_; lean_object* v_entry_1295_; lean_object* v___x_1296_; lean_object* v_env_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1291_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__2);
v___x_1292_ = lean_st_ref_get(v___y_1273_);
v_env_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc_ref(v_env_1293_);
lean_dec(v___x_1292_);
v_isExporting_1294_ = lean_ctor_get_uint8(v_env_1293_, sizeof(void*)*13);
lean_dec_ref(v_env_1293_);
lean_inc(v_mod_1269_);
v_entry_1295_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1295_, 0, v_mod_1269_);
lean_ctor_set_uint8(v_entry_1295_, sizeof(void*)*1, v_isExporting_1294_);
lean_ctor_set_uint8(v_entry_1295_, sizeof(void*)*1 + 1, v_isMeta_1270_);
v___x_1296_ = lean_st_ref_get(v___y_1273_);
v_env_1297_ = lean_ctor_get(v___x_1296_, 0);
lean_inc_ref(v_env_1297_);
lean_dec(v___x_1296_);
v___x_1298_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1299_ = lean_box(1);
v___x_1300_ = lean_box(0);
v___x_1301_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1291_, v___x_1298_, v_env_1297_, v___x_1299_, v___x_1300_);
v___x_1302_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___redArg(v___x_1301_, v_entry_1295_);
lean_dec(v___x_1301_);
if (v___x_1302_ == 0)
{
lean_object* v_toCold_1303_; lean_object* v_options_1304_; lean_object* v_inheritedTraceOptions_1305_; uint8_t v_hasTrace_1306_; lean_object* v___f_1307_; uint8_t v___x_1308_; lean_object* v___y_1310_; lean_object* v___y_1329_; 
v_toCold_1303_ = lean_ctor_get(v___y_1272_, 0);
v_options_1304_ = lean_ctor_get(v_toCold_1303_, 2);
v_inheritedTraceOptions_1305_ = lean_ctor_get(v_toCold_1303_, 11);
v_hasTrace_1306_ = lean_ctor_get_uint8(v_options_1304_, sizeof(void*)*1);
lean_inc_ref(v_entry_1295_);
v___f_1307_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___lam__0), 3, 2);
lean_closure_set(v___f_1307_, 0, v___x_1298_);
lean_closure_set(v___f_1307_, 1, v_entry_1295_);
v___x_1308_ = 1;
if (v_hasTrace_1306_ == 0)
{
lean_dec(v_hint_1271_);
lean_dec(v_mod_1269_);
v___y_1329_ = v___y_1273_;
goto v___jp_1328_;
}
else
{
lean_object* v_cls_1336_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v_cls_1336_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__4));
v___x_1356_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__12);
v___x_1357_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1305_, v_options_1304_, v___x_1356_);
if (v___x_1357_ == 0)
{
lean_dec(v_hint_1271_);
lean_dec(v_mod_1269_);
v___y_1329_ = v___y_1273_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1358_; lean_object* v___y_1360_; 
v___x_1358_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__14);
if (v_isExporting_1294_ == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__19));
v___y_1360_ = v___x_1367_;
goto v___jp_1359_;
}
else
{
lean_object* v___x_1368_; 
v___x_1368_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__20));
v___y_1360_ = v___x_1368_;
goto v___jp_1359_;
}
v___jp_1359_:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
lean_inc_ref(v___y_1360_);
v___x_1361_ = l_Lean_stringToMessageData(v___y_1360_);
v___x_1362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1358_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16);
v___x_1364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
if (v_isMeta_1270_ == 0)
{
lean_object* v___x_1365_; 
v___x_1365_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__17));
v___y_1343_ = v___x_1364_;
v___y_1344_ = v___x_1365_;
goto v___jp_1342_;
}
else
{
lean_object* v___x_1366_; 
v___x_1366_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__18));
v___y_1343_ = v___x_1364_;
v___y_1344_ = v___x_1366_;
goto v___jp_1342_;
}
}
}
v___jp_1337_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___y_1338_);
lean_ctor_set(v___x_1340_, 1, v___y_1339_);
v___x_1341_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10(v_cls_1336_, v___x_1340_, v___y_1272_, v___y_1273_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_dec_ref_known(v___x_1341_, 1);
v___y_1329_ = v___y_1273_;
goto v___jp_1328_;
}
else
{
lean_dec_ref(v___f_1307_);
lean_dec_ref_known(v_entry_1295_, 1);
return v___x_1341_;
}
}
v___jp_1342_:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; 
lean_inc_ref(v___y_1344_);
v___x_1345_ = l_Lean_stringToMessageData(v___y_1344_);
v___x_1346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___y_1343_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__6);
v___x_1348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1346_);
lean_ctor_set(v___x_1348_, 1, v___x_1347_);
v___x_1349_ = l_Lean_MessageData_ofName(v_mod_1269_);
v___x_1350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
v___x_1351_ = l_Lean_Name_isAnonymous(v_hint_1271_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1352_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__8);
v___x_1353_ = l_Lean_MessageData_ofName(v_hint_1271_);
v___x_1354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1352_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
v___y_1338_ = v___x_1350_;
v___y_1339_ = v___x_1354_;
goto v___jp_1337_;
}
else
{
lean_object* v___x_1355_; 
lean_dec(v_hint_1271_);
v___x_1355_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__9);
v___y_1338_ = v___x_1350_;
v___y_1339_ = v___x_1355_;
goto v___jp_1337_;
}
}
}
v___jp_1309_:
{
lean_object* v___x_1311_; lean_object* v_toEnvExtension_1312_; lean_object* v_env_1313_; lean_object* v_nextMacroScope_1314_; lean_object* v_ngen_1315_; lean_object* v_auxDeclNGen_1316_; lean_object* v_traceState_1317_; lean_object* v_recordedDeps_1318_; lean_object* v_messages_1319_; lean_object* v_infoState_1320_; lean_object* v_snapshotTasks_1321_; lean_object* v_asyncMode_1322_; uint8_t v_logWrites_1323_; lean_object* v___x_1324_; 
v___x_1311_ = lean_st_ref_take(v___y_1310_);
v_toEnvExtension_1312_ = lean_ctor_get(v___x_1298_, 0);
v_env_1313_ = lean_ctor_get(v___x_1311_, 0);
lean_inc_ref(v_env_1313_);
v_nextMacroScope_1314_ = lean_ctor_get(v___x_1311_, 1);
lean_inc(v_nextMacroScope_1314_);
v_ngen_1315_ = lean_ctor_get(v___x_1311_, 2);
lean_inc_ref(v_ngen_1315_);
v_auxDeclNGen_1316_ = lean_ctor_get(v___x_1311_, 3);
lean_inc_ref(v_auxDeclNGen_1316_);
v_traceState_1317_ = lean_ctor_get(v___x_1311_, 4);
lean_inc_ref(v_traceState_1317_);
v_recordedDeps_1318_ = lean_ctor_get(v___x_1311_, 6);
lean_inc_ref(v_recordedDeps_1318_);
v_messages_1319_ = lean_ctor_get(v___x_1311_, 7);
lean_inc_ref(v_messages_1319_);
v_infoState_1320_ = lean_ctor_get(v___x_1311_, 8);
lean_inc_ref(v_infoState_1320_);
v_snapshotTasks_1321_ = lean_ctor_get(v___x_1311_, 9);
lean_inc_ref(v_snapshotTasks_1321_);
lean_dec(v___x_1311_);
v_asyncMode_1322_ = lean_ctor_get(v_toEnvExtension_1312_, 2);
v_logWrites_1323_ = lean_ctor_get_uint8(v_toEnvExtension_1312_, sizeof(void*)*6);
v___x_1324_ = lean_box(0);
if (v_logWrites_1323_ == 0)
{
lean_object* v___x_1325_; 
lean_inc_ref(v_toEnvExtension_1312_);
v___x_1325_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1312_, v_env_1313_, v___f_1307_, v_asyncMode_1322_, v___x_1300_, v___x_1308_);
v___y_1276_ = v_snapshotTasks_1321_;
v___y_1277_ = v_ngen_1315_;
v___y_1278_ = v_nextMacroScope_1314_;
v___y_1279_ = v___y_1310_;
v___y_1280_ = v_auxDeclNGen_1316_;
v___y_1281_ = v_messages_1319_;
v___y_1282_ = v___x_1324_;
v___y_1283_ = v_traceState_1317_;
v___y_1284_ = v_recordedDeps_1318_;
v___y_1285_ = v_infoState_1320_;
v___y_1286_ = v___x_1325_;
goto v___jp_1275_;
}
else
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
lean_inc_ref_n(v_toEnvExtension_1312_, 2);
v___x_1326_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1312_, v_env_1313_);
lean_dec_ref(v_env_1313_);
v___x_1327_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1312_, v___x_1326_, v___f_1307_, v_asyncMode_1322_, v___x_1300_, v___x_1308_);
v___y_1276_ = v_snapshotTasks_1321_;
v___y_1277_ = v_ngen_1315_;
v___y_1278_ = v_nextMacroScope_1314_;
v___y_1279_ = v___y_1310_;
v___y_1280_ = v_auxDeclNGen_1316_;
v___y_1281_ = v_messages_1319_;
v___y_1282_ = v___x_1324_;
v___y_1283_ = v_traceState_1317_;
v___y_1284_ = v_recordedDeps_1318_;
v___y_1285_ = v_infoState_1320_;
v___y_1286_ = v___x_1327_;
goto v___jp_1275_;
}
}
v___jp_1328_:
{
uint8_t v___x_1330_; 
v___x_1330_ = l_Lean_usageRecordingEnabled();
if (v___x_1330_ == 0)
{
lean_dec_ref_known(v_entry_1295_, 1);
v___y_1310_ = v___y_1329_;
goto v___jp_1309_;
}
else
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1331_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_1332_ = lean_st_ref_take(v___x_1331_);
v___x_1333_ = lean_box(0);
v___x_1334_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(v___x_1332_, v_entry_1295_, v___x_1333_);
v___x_1335_ = lean_st_ref_put(v___x_1331_, v___x_1334_);
v___y_1310_ = v___y_1329_;
goto v___jp_1309_;
}
}
}
else
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
lean_dec_ref_known(v_entry_1295_, 1);
lean_dec(v_hint_1271_);
lean_dec(v_mod_1269_);
v___x_1369_ = lean_box(0);
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
return v___x_1370_;
}
v___jp_1275_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1287_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1);
v___x_1288_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1288_, 0, v___y_1286_);
lean_ctor_set(v___x_1288_, 1, v___y_1278_);
lean_ctor_set(v___x_1288_, 2, v___y_1277_);
lean_ctor_set(v___x_1288_, 3, v___y_1280_);
lean_ctor_set(v___x_1288_, 4, v___y_1283_);
lean_ctor_set(v___x_1288_, 5, v___x_1287_);
lean_ctor_set(v___x_1288_, 6, v___y_1284_);
lean_ctor_set(v___x_1288_, 7, v___y_1281_);
lean_ctor_set(v___x_1288_, 8, v___y_1285_);
lean_ctor_set(v___x_1288_, 9, v___y_1276_);
v___x_1289_ = lean_st_ref_put(v___y_1279_, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___y_1282_);
return v___x_1290_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object* v_mod_1371_, lean_object* v_isMeta_1372_, lean_object* v_hint_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
uint8_t v_isMeta_boxed_1377_; lean_object* v_res_1378_; 
v_isMeta_boxed_1377_ = lean_unbox(v_isMeta_1372_);
v_res_1378_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6(v_mod_1371_, v_isMeta_boxed_1377_, v_hint_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__7(lean_object* v___x_1379_, lean_object* v_declName_1380_, lean_object* v_as_1381_, size_t v_sz_1382_, size_t v_i_1383_, lean_object* v_b_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
uint8_t v___x_1388_; 
v___x_1388_ = lean_usize_dec_lt(v_i_1383_, v_sz_1382_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; 
lean_dec(v_declName_1380_);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v_b_1384_);
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; lean_object* v_modules_1391_; lean_object* v___x_1392_; lean_object* v_a_1393_; lean_object* v___x_1394_; lean_object* v_toImport_1395_; lean_object* v_module_1396_; lean_object* v___x_1397_; uint8_t v___x_1398_; lean_object* v___x_1399_; 
v___x_1390_ = l_Lean_Environment_header(v___x_1379_);
v_modules_1391_ = lean_ctor_get(v___x_1390_, 3);
lean_inc_ref(v_modules_1391_);
lean_dec_ref(v___x_1390_);
v___x_1392_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1393_ = lean_array_uget_borrowed(v_as_1381_, v_i_1383_);
v___x_1394_ = lean_array_get(v___x_1392_, v_modules_1391_, v_a_1393_);
lean_dec_ref(v_modules_1391_);
v_toImport_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc_ref(v_toImport_1395_);
lean_dec(v___x_1394_);
v_module_1396_ = lean_ctor_get(v_toImport_1395_, 0);
lean_inc(v_module_1396_);
lean_dec_ref(v_toImport_1395_);
v___x_1397_ = lean_box(0);
v___x_1398_ = 0;
lean_inc(v_declName_1380_);
v___x_1399_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6(v_module_1396_, v___x_1398_, v_declName_1380_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1399_) == 0)
{
size_t v___x_1400_; size_t v___x_1401_; 
lean_dec_ref_known(v___x_1399_, 1);
v___x_1400_ = ((size_t)1ULL);
v___x_1401_ = lean_usize_add(v_i_1383_, v___x_1400_);
v_i_1383_ = v___x_1401_;
v_b_1384_ = v___x_1397_;
goto _start;
}
else
{
lean_dec(v_declName_1380_);
return v___x_1399_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__7___boxed(lean_object* v___x_1403_, lean_object* v_declName_1404_, lean_object* v_as_1405_, lean_object* v_sz_1406_, lean_object* v_i_1407_, lean_object* v_b_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
size_t v_sz_boxed_1412_; size_t v_i_boxed_1413_; lean_object* v_res_1414_; 
v_sz_boxed_1412_ = lean_unbox_usize(v_sz_1406_);
lean_dec(v_sz_1406_);
v_i_boxed_1413_ = lean_unbox_usize(v_i_1407_);
lean_dec(v_i_1407_);
v_res_1414_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__7(v___x_1403_, v_declName_1404_, v_as_1405_, v_sz_boxed_1412_, v_i_boxed_1413_, v_b_1408_, v___y_1409_, v___y_1410_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec_ref(v_as_1405_);
lean_dec_ref(v___x_1403_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___redArg(lean_object* v_a_1415_, lean_object* v_x_1416_){
_start:
{
if (lean_obj_tag(v_x_1416_) == 0)
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_box(0);
return v___x_1417_;
}
else
{
lean_object* v_key_1418_; lean_object* v_value_1419_; lean_object* v_tail_1420_; uint8_t v___x_1421_; 
v_key_1418_ = lean_ctor_get(v_x_1416_, 0);
v_value_1419_ = lean_ctor_get(v_x_1416_, 1);
v_tail_1420_ = lean_ctor_get(v_x_1416_, 2);
v___x_1421_ = lean_name_eq(v_key_1418_, v_a_1415_);
if (v___x_1421_ == 0)
{
v_x_1416_ = v_tail_1420_;
goto _start;
}
else
{
lean_object* v___x_1423_; 
lean_inc(v_value_1419_);
v___x_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1423_, 0, v_value_1419_);
return v___x_1423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___redArg___boxed(lean_object* v_a_1424_, lean_object* v_x_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___redArg(v_a_1424_, v_x_1425_);
lean_dec(v_x_1425_);
lean_dec(v_a_1424_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___redArg(lean_object* v_m_1427_, lean_object* v_a_1428_){
_start:
{
lean_object* v_buckets_1429_; lean_object* v___x_1430_; uint64_t v___y_1432_; 
v_buckets_1429_ = lean_ctor_get(v_m_1427_, 1);
v___x_1430_ = lean_array_get_size(v_buckets_1429_);
if (lean_obj_tag(v_a_1428_) == 0)
{
uint64_t v___x_1446_; 
v___x_1446_ = 1723ULL;
v___y_1432_ = v___x_1446_;
goto v___jp_1431_;
}
else
{
uint64_t v_hash_1447_; 
v_hash_1447_ = lean_ctor_get_uint64(v_a_1428_, sizeof(void*)*2);
v___y_1432_ = v_hash_1447_;
goto v___jp_1431_;
}
v___jp_1431_:
{
uint64_t v___x_1433_; uint64_t v___x_1434_; uint64_t v_fold_1435_; uint64_t v___x_1436_; uint64_t v___x_1437_; uint64_t v___x_1438_; size_t v___x_1439_; size_t v___x_1440_; size_t v___x_1441_; size_t v___x_1442_; size_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1433_ = 32ULL;
v___x_1434_ = lean_uint64_shift_right(v___y_1432_, v___x_1433_);
v_fold_1435_ = lean_uint64_xor(v___y_1432_, v___x_1434_);
v___x_1436_ = 16ULL;
v___x_1437_ = lean_uint64_shift_right(v_fold_1435_, v___x_1436_);
v___x_1438_ = lean_uint64_xor(v_fold_1435_, v___x_1437_);
v___x_1439_ = lean_uint64_to_usize(v___x_1438_);
v___x_1440_ = lean_usize_of_nat(v___x_1430_);
v___x_1441_ = ((size_t)1ULL);
v___x_1442_ = lean_usize_sub(v___x_1440_, v___x_1441_);
v___x_1443_ = lean_usize_land(v___x_1439_, v___x_1442_);
v___x_1444_ = lean_array_uget_borrowed(v_buckets_1429_, v___x_1443_);
v___x_1445_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___redArg(v_a_1428_, v___x_1444_);
return v___x_1445_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___redArg___boxed(lean_object* v_m_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___redArg(v_m_1448_, v_a_1449_);
lean_dec(v_a_1449_);
lean_dec_ref(v_m_1448_);
return v_res_1450_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__0(void){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4(lean_object* v_declName_1454_, uint8_t v_isMeta_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v_env_1464_; lean_object* v___y_1466_; lean_object* v___x_1479_; 
v___x_1459_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__0);
v___x_1460_ = lean_st_ref_get(v___y_1457_);
v_env_1464_ = lean_ctor_get(v___x_1460_, 0);
lean_inc_ref(v_env_1464_);
lean_dec(v___x_1460_);
v___x_1479_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1464_, v_declName_1454_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_dec_ref(v_env_1464_);
lean_dec(v_declName_1454_);
goto v___jp_1461_;
}
else
{
lean_object* v_val_1480_; lean_object* v___x_1481_; lean_object* v_modules_1482_; lean_object* v___x_1483_; uint8_t v___x_1484_; 
v_val_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc(v_val_1480_);
lean_dec_ref_known(v___x_1479_, 1);
v___x_1481_ = l_Lean_Environment_header(v_env_1464_);
v_modules_1482_ = lean_ctor_get(v___x_1481_, 3);
lean_inc_ref(v_modules_1482_);
lean_dec_ref(v___x_1481_);
v___x_1483_ = lean_array_get_size(v_modules_1482_);
v___x_1484_ = lean_nat_dec_lt(v_val_1480_, v___x_1483_);
if (v___x_1484_ == 0)
{
lean_dec_ref(v_modules_1482_);
lean_dec(v_val_1480_);
lean_dec_ref(v_env_1464_);
lean_dec(v_declName_1454_);
goto v___jp_1461_;
}
else
{
lean_object* v___x_1485_; lean_object* v___x_1486_; uint8_t v___y_1488_; 
v___x_1485_ = lean_array_fget(v_modules_1482_, v_val_1480_);
lean_dec(v_val_1480_);
lean_dec_ref(v_modules_1482_);
v___x_1486_ = lean_st_ref_get(v___y_1457_);
if (v_isMeta_1455_ == 0)
{
lean_dec(v___x_1486_);
v___y_1488_ = v_isMeta_1455_;
goto v___jp_1487_;
}
else
{
lean_object* v_env_1499_; uint8_t v___x_1500_; 
v_env_1499_ = lean_ctor_get(v___x_1486_, 0);
lean_inc_ref(v_env_1499_);
lean_dec(v___x_1486_);
lean_inc(v_declName_1454_);
v___x_1500_ = l_Lean_isMarkedMeta(v_env_1499_, v_declName_1454_);
if (v___x_1500_ == 0)
{
v___y_1488_ = v_isMeta_1455_;
goto v___jp_1487_;
}
else
{
uint8_t v___x_1501_; 
v___x_1501_ = 0;
v___y_1488_ = v___x_1501_;
goto v___jp_1487_;
}
}
v___jp_1487_:
{
lean_object* v_toImport_1489_; lean_object* v_module_1490_; lean_object* v___x_1491_; 
v_toImport_1489_ = lean_ctor_get(v___x_1485_, 0);
lean_inc_ref(v_toImport_1489_);
lean_dec(v___x_1485_);
v_module_1490_ = lean_ctor_get(v_toImport_1489_, 0);
lean_inc(v_module_1490_);
lean_dec_ref(v_toImport_1489_);
lean_inc(v_declName_1454_);
v___x_1491_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6(v_module_1490_, v___y_1488_, v_declName_1454_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1491_) == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_dec_ref_known(v___x_1491_, 1);
v___x_1492_ = l_Lean_indirectModUseExt;
v___x_1493_ = lean_box(1);
v___x_1494_ = lean_box(0);
lean_inc_ref(v_env_1464_);
v___x_1495_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1459_, v___x_1492_, v_env_1464_, v___x_1493_, v___x_1494_);
v___x_1496_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___redArg(v___x_1495_, v_declName_1454_);
lean_dec(v___x_1495_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v___x_1497_; 
v___x_1497_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___closed__1));
v___y_1466_ = v___x_1497_;
goto v___jp_1465_;
}
else
{
lean_object* v_val_1498_; 
v_val_1498_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_val_1498_);
lean_dec_ref_known(v___x_1496_, 1);
v___y_1466_ = v_val_1498_;
goto v___jp_1465_;
}
}
else
{
lean_dec_ref(v_env_1464_);
lean_dec(v_declName_1454_);
return v___x_1491_;
}
}
}
}
v___jp_1461_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_box(0);
v___x_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1462_);
return v___x_1463_;
}
v___jp_1465_:
{
lean_object* v___x_1467_; size_t v_sz_1468_; size_t v___x_1469_; lean_object* v___x_1470_; 
v___x_1467_ = lean_box(0);
v_sz_1468_ = lean_array_size(v___y_1466_);
v___x_1469_ = ((size_t)0ULL);
v___x_1470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__7(v_env_1464_, v_declName_1454_, v___y_1466_, v_sz_1468_, v___x_1469_, v___x_1467_, v___y_1456_, v___y_1457_);
lean_dec_ref(v___y_1466_);
lean_dec_ref(v_env_1464_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1477_ == 0)
{
lean_object* v_unused_1478_; 
v_unused_1478_ = lean_ctor_get(v___x_1470_, 0);
lean_dec(v_unused_1478_);
v___x_1472_ = v___x_1470_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_dec(v___x_1470_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 0, v___x_1467_);
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v___x_1467_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
else
{
return v___x_1470_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4___boxed(lean_object* v_declName_1502_, lean_object* v_isMeta_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
uint8_t v_isMeta_boxed_1507_; lean_object* v_res_1508_; 
v_isMeta_boxed_1507_ = lean_unbox(v_isMeta_1503_);
v_res_1508_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4(v_declName_1502_, v_isMeta_boxed_1507_, v___y_1504_, v___y_1505_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(lean_object* v_ref_1509_, lean_object* v_msg_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_toCold_1514_; lean_object* v_currRecDepth_1515_; lean_object* v_ref_1516_; uint16_t v_optionFlags_1517_; uint8_t v_suppressElabErrors_1518_; uint8_t v_isRecordingDeps_1519_; lean_object* v_ref_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v_toCold_1514_ = lean_ctor_get(v___y_1511_, 0);
v_currRecDepth_1515_ = lean_ctor_get(v___y_1511_, 1);
v_ref_1516_ = lean_ctor_get(v___y_1511_, 2);
v_optionFlags_1517_ = lean_ctor_get_uint16(v___y_1511_, sizeof(void*)*3);
v_suppressElabErrors_1518_ = lean_ctor_get_uint8(v___y_1511_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1519_ = lean_ctor_get_uint8(v___y_1511_, sizeof(void*)*3 + 3);
v_ref_1520_ = l_Lean_replaceRef(v_ref_1509_, v_ref_1516_);
lean_inc(v_currRecDepth_1515_);
lean_inc_ref(v_toCold_1514_);
v___x_1521_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1521_, 0, v_toCold_1514_);
lean_ctor_set(v___x_1521_, 1, v_currRecDepth_1515_);
lean_ctor_set(v___x_1521_, 2, v_ref_1520_);
lean_ctor_set_uint16(v___x_1521_, sizeof(void*)*3, v_optionFlags_1517_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*3 + 2, v_suppressElabErrors_1518_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*3 + 3, v_isRecordingDeps_1519_);
v___x_1522_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v_msg_1510_, v___x_1521_, v___y_1512_);
lean_dec_ref_known(v___x_1521_, 3);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg___boxed(lean_object* v_ref_1523_, lean_object* v_msg_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_ref_1523_, v_msg_1524_, v___y_1525_, v___y_1526_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v_ref_1523_);
return v_res_1528_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1530_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__0));
v___x_1531_ = l_Lean_stringToMessageData(v___x_1530_);
return v___x_1531_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__2));
v___x_1534_ = l_Lean_stringToMessageData(v___x_1533_);
return v___x_1534_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__4));
v___x_1537_ = l_Lean_stringToMessageData(v___x_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg(lean_object* v_attrName_1538_, lean_object* v_declName_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1543_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__1);
v___x_1544_ = l_Lean_MessageData_ofName(v_attrName_1538_);
v___x_1545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1543_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__3);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = 0;
v___x_1549_ = l_Lean_MessageData_ofConstName(v_declName_1539_, v___x_1548_);
v___x_1550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1547_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
v___x_1551_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___closed__5);
v___x_1552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_1552_, v___y_1540_, v___y_1541_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg___boxed(lean_object* v_attrName_1554_, lean_object* v_declName_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg(v_attrName_1554_, v_declName_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
return v_res_1559_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__3(uint8_t v___x_1560_, lean_object* v_as_1561_, size_t v_i_1562_, size_t v_stop_1563_){
_start:
{
uint8_t v___x_1568_; 
v___x_1568_ = lean_usize_dec_eq(v_i_1562_, v_stop_1563_);
if (v___x_1568_ == 0)
{
lean_object* v___x_1569_; lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1569_ = lean_array_uget_borrowed(v_as_1561_, v_i_1562_);
v___x_1570_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_isTactic___closed__1));
v___x_1571_ = lean_name_eq(v___x_1569_, v___x_1570_);
if (v___x_1571_ == 0)
{
goto v___jp_1564_;
}
else
{
if (v___x_1560_ == 0)
{
goto v___jp_1564_;
}
else
{
return v___x_1560_;
}
}
}
else
{
uint8_t v___x_1572_; 
v___x_1572_ = 0;
return v___x_1572_;
}
v___jp_1564_:
{
size_t v___x_1565_; size_t v___x_1566_; 
v___x_1565_ = ((size_t)1ULL);
v___x_1566_ = lean_usize_add(v_i_1562_, v___x_1565_);
v_i_1562_ = v___x_1566_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__3___boxed(lean_object* v___x_1573_, lean_object* v_as_1574_, lean_object* v_i_1575_, lean_object* v_stop_1576_){
_start:
{
uint8_t v___x_13052__boxed_1577_; size_t v_i_boxed_1578_; size_t v_stop_boxed_1579_; uint8_t v_res_1580_; lean_object* v_r_1581_; 
v___x_13052__boxed_1577_ = lean_unbox(v___x_1573_);
v_i_boxed_1578_ = lean_unbox_usize(v_i_1575_);
lean_dec(v_i_1575_);
v_stop_boxed_1579_ = lean_unbox_usize(v_stop_1576_);
lean_dec(v_stop_1576_);
v_res_1580_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__3(v___x_13052__boxed_1577_, v_as_1574_, v_i_boxed_1578_, v_stop_boxed_1579_);
lean_dec_ref(v_as_1574_);
v_r_1581_ = lean_box(v_res_1580_);
return v_r_1581_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1584_ = l_Lean_stringToMessageData(v___x_1583_);
return v___x_1584_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1587_ = l_Lean_stringToMessageData(v___x_1586_);
return v___x_1587_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__4_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1590_ = l_Lean_stringToMessageData(v___x_1589_);
return v___x_1590_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__6_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1593_ = l_Lean_stringToMessageData(v___x_1592_);
return v___x_1593_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__8_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1596_ = l_Lean_stringToMessageData(v___x_1595_);
return v___x_1596_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1599_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__11_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1600_ = l_Lean_stringToMessageData(v___x_1599_);
return v___x_1600_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1602_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__13_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1603_ = l_Lean_stringToMessageData(v___x_1602_);
return v___x_1603_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__15_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1606_ = l_Lean_stringToMessageData(v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(lean_object* v___x_1607_, lean_object* v___x_1608_, lean_object* v___x_1609_, lean_object* v___x_1610_, lean_object* v___x_1611_, lean_object* v___x_1612_, lean_object* v_name_1613_, lean_object* v_decl_1614_, lean_object* v_stx_1615_, uint8_t v_kind_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v___y_1621_; lean_object* v_nextMacroScope_1622_; lean_object* v_ngen_1623_; lean_object* v_auxDeclNGen_1624_; lean_object* v_traceState_1625_; lean_object* v_recordedDeps_1626_; lean_object* v_messages_1627_; lean_object* v_infoState_1628_; lean_object* v_snapshotTasks_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1637_; uint8_t v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1662_; uint8_t v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1680_; lean_object* v___y_1681_; uint8_t v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1701_; uint8_t v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___f_1714_; lean_object* v___y_1716_; uint8_t v___y_1717_; uint8_t v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1748_; lean_object* v___y_1749_; uint8_t v___x_1788_; uint8_t v___x_1789_; 
lean_inc(v_decl_1614_);
v___f_1714_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed), 6, 1);
lean_closure_set(v___f_1714_, 0, v_decl_1614_);
v___x_1788_ = 0;
v___x_1789_ = l_Lean_instBEqAttributeKind_beq(v_kind_1616_, v___x_1788_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; 
lean_dec_ref(v___f_1714_);
lean_dec(v_stx_1615_);
lean_dec(v_decl_1614_);
lean_dec_ref(v___x_1612_);
lean_dec_ref(v___x_1611_);
lean_dec_ref(v___x_1610_);
lean_dec(v___x_1607_);
v___x_1790_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg(v_name_1613_, v_kind_1616_, v___y_1617_, v___y_1618_);
return v___x_1790_;
}
else
{
goto v___jp_1783_;
}
v___jp_1620_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1632_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1);
v___x_1633_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1633_, 0, v___y_1631_);
lean_ctor_set(v___x_1633_, 1, v_nextMacroScope_1622_);
lean_ctor_set(v___x_1633_, 2, v_ngen_1623_);
lean_ctor_set(v___x_1633_, 3, v_auxDeclNGen_1624_);
lean_ctor_set(v___x_1633_, 4, v_traceState_1625_);
lean_ctor_set(v___x_1633_, 5, v___x_1632_);
lean_ctor_set(v___x_1633_, 6, v_recordedDeps_1626_);
lean_ctor_set(v___x_1633_, 7, v_messages_1627_);
lean_ctor_set(v___x_1633_, 8, v_infoState_1628_);
lean_ctor_set(v___x_1633_, 9, v_snapshotTasks_1629_);
v___x_1634_ = lean_st_ref_put(v___y_1630_, v___x_1633_);
v___x_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___y_1621_);
return v___x_1635_;
}
v___jp_1636_:
{
lean_object* v___x_1640_; lean_object* v_env_1641_; lean_object* v_nextMacroScope_1642_; lean_object* v_ngen_1643_; lean_object* v_auxDeclNGen_1644_; lean_object* v_traceState_1645_; lean_object* v_recordedDeps_1646_; lean_object* v_messages_1647_; lean_object* v_infoState_1648_; lean_object* v_snapshotTasks_1649_; lean_object* v___x_1650_; lean_object* v_toEnvExtension_1651_; lean_object* v_addEntryFn_1652_; lean_object* v_asyncMode_1653_; uint8_t v_logWrites_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___f_1657_; 
v___x_1640_ = lean_st_ref_take(v___y_1639_);
v_env_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc_ref(v_env_1641_);
v_nextMacroScope_1642_ = lean_ctor_get(v___x_1640_, 1);
lean_inc(v_nextMacroScope_1642_);
v_ngen_1643_ = lean_ctor_get(v___x_1640_, 2);
lean_inc_ref(v_ngen_1643_);
v_auxDeclNGen_1644_ = lean_ctor_get(v___x_1640_, 3);
lean_inc_ref(v_auxDeclNGen_1644_);
v_traceState_1645_ = lean_ctor_get(v___x_1640_, 4);
lean_inc_ref(v_traceState_1645_);
v_recordedDeps_1646_ = lean_ctor_get(v___x_1640_, 6);
lean_inc_ref(v_recordedDeps_1646_);
v_messages_1647_ = lean_ctor_get(v___x_1640_, 7);
lean_inc_ref(v_messages_1647_);
v_infoState_1648_ = lean_ctor_get(v___x_1640_, 8);
lean_inc_ref(v_infoState_1648_);
v_snapshotTasks_1649_ = lean_ctor_get(v___x_1640_, 9);
lean_inc_ref(v_snapshotTasks_1649_);
lean_dec(v___x_1640_);
v___x_1650_ = l_Lean_Parser_Tactic_Doc_tacticAlternativeExt;
v_toEnvExtension_1651_ = lean_ctor_get(v___x_1650_, 0);
v_addEntryFn_1652_ = lean_ctor_get(v___x_1650_, 3);
v_asyncMode_1653_ = lean_ctor_get(v_toEnvExtension_1651_, 2);
v_logWrites_1654_ = lean_ctor_get_uint8(v_toEnvExtension_1651_, sizeof(void*)*6);
v___x_1655_ = lean_box(0);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v_decl_1614_);
lean_ctor_set(v___x_1656_, 1, v___y_1637_);
lean_inc(v_addEntryFn_1652_);
v___f_1657_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_), 3, 2);
lean_closure_set(v___f_1657_, 0, v_addEntryFn_1652_);
lean_closure_set(v___f_1657_, 1, v___x_1656_);
if (v_logWrites_1654_ == 0)
{
lean_object* v___x_1658_; 
lean_inc_ref(v_toEnvExtension_1651_);
v___x_1658_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1651_, v_env_1641_, v___f_1657_, v_asyncMode_1653_, v___x_1607_, v___y_1638_);
v___y_1621_ = v___x_1655_;
v_nextMacroScope_1622_ = v_nextMacroScope_1642_;
v_ngen_1623_ = v_ngen_1643_;
v_auxDeclNGen_1624_ = v_auxDeclNGen_1644_;
v_traceState_1625_ = v_traceState_1645_;
v_recordedDeps_1626_ = v_recordedDeps_1646_;
v_messages_1627_ = v_messages_1647_;
v_infoState_1628_ = v_infoState_1648_;
v_snapshotTasks_1629_ = v_snapshotTasks_1649_;
v___y_1630_ = v___y_1639_;
v___y_1631_ = v___x_1658_;
goto v___jp_1620_;
}
else
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
lean_inc_ref_n(v_toEnvExtension_1651_, 2);
v___x_1659_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1651_, v_env_1641_);
lean_dec_ref(v_env_1641_);
v___x_1660_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1651_, v___x_1659_, v___f_1657_, v_asyncMode_1653_, v___x_1607_, v___y_1638_);
v___y_1621_ = v___x_1655_;
v_nextMacroScope_1622_ = v_nextMacroScope_1642_;
v_ngen_1623_ = v_ngen_1643_;
v_auxDeclNGen_1624_ = v_auxDeclNGen_1644_;
v_traceState_1625_ = v_traceState_1645_;
v_recordedDeps_1626_ = v_recordedDeps_1646_;
v_messages_1627_ = v_messages_1647_;
v_infoState_1628_ = v_infoState_1648_;
v_snapshotTasks_1629_ = v_snapshotTasks_1649_;
v___y_1630_ = v___y_1639_;
v___y_1631_ = v___x_1660_;
goto v___jp_1620_;
}
}
v___jp_1661_:
{
lean_object* v___x_1666_; lean_object* v_env_1667_; lean_object* v___x_1668_; 
v___x_1666_ = lean_st_ref_get(v___y_1665_);
v_env_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc_ref(v_env_1667_);
lean_dec(v___x_1666_);
lean_inc(v___y_1662_);
v___x_1668_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_1667_, v___y_1662_);
if (lean_obj_tag(v___x_1668_) == 1)
{
lean_object* v_val_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
lean_dec(v_decl_1614_);
lean_dec(v___x_1607_);
v_val_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_val_1669_);
lean_dec_ref_known(v___x_1668_, 1);
v___x_1670_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_1671_ = l_Lean_MessageData_ofName(v___y_1662_);
v___x_1672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1670_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = l_Lean_MessageData_ofName(v_val_1669_);
v___x_1676_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1674_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
lean_ctor_set(v___x_1677_, 1, v___x_1670_);
v___x_1678_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_1677_, v___y_1664_, v___y_1665_);
return v___x_1678_;
}
else
{
lean_dec(v___x_1668_);
v___y_1637_ = v___y_1662_;
v___y_1638_ = v___y_1663_;
v___y_1639_ = v___y_1665_;
goto v___jp_1636_;
}
}
v___jp_1679_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
lean_dec(v___y_1680_);
v___x_1686_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_1687_ = l_Lean_MessageData_ofName(v_decl_1614_);
v___x_1688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1686_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1688_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
lean_inc_ref(v___y_1685_);
v___x_1691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
lean_ctor_set(v___x_1691_, 1, v___y_1685_);
v___x_1692_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__16);
v___x_1693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1691_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
v___x_1694_ = lean_array_to_list(v___y_1681_);
v___x_1695_ = l_Lean_MessageData_andList(v___x_1694_);
v___x_1696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1693_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_1698_, v___y_1684_, v___y_1683_);
return v___x_1699_;
}
v___jp_1700_:
{
size_t v_sz_1707_; size_t v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_sz_1707_ = lean_array_size(v___y_1705_);
v___x_1708_ = ((size_t)0ULL);
v___x_1709_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2(v_sz_1707_, v___x_1708_, v___y_1705_);
v___x_1710_ = lean_array_get_size(v___x_1709_);
v___x_1711_ = lean_nat_dec_lt(v___y_1704_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; 
v___x_1712_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__7_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___y_1680_ = v___y_1701_;
v___y_1681_ = v___x_1709_;
v___y_1682_ = v___y_1702_;
v___y_1683_ = v___y_1703_;
v___y_1684_ = v___y_1706_;
v___y_1685_ = v___x_1712_;
goto v___jp_1679_;
}
else
{
lean_object* v___x_1713_; 
v___x_1713_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___y_1680_ = v___y_1701_;
v___y_1681_ = v___x_1709_;
v___y_1682_ = v___y_1702_;
v___y_1683_ = v___y_1703_;
v___y_1684_ = v___y_1706_;
v___y_1685_ = v___x_1713_;
goto v___jp_1679_;
}
}
v___jp_1715_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v_env_1724_; lean_object* v___x_1725_; lean_object* v_ext_1726_; lean_object* v_toEnvExtension_1727_; lean_object* v_asyncMode_1728_; lean_object* v___x_1729_; lean_object* v_categories_1730_; lean_object* v___x_1731_; 
v___x_1722_ = lean_mk_empty_array_with_capacity(v___x_1608_);
v___x_1723_ = lean_st_ref_get(v___y_1721_);
v_env_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc_ref(v_env_1724_);
lean_dec(v___x_1723_);
v___x_1725_ = l_Lean_Parser_parserExtension;
v_ext_1726_ = lean_ctor_get(v___x_1725_, 1);
v_toEnvExtension_1727_ = lean_ctor_get(v_ext_1726_, 0);
v_asyncMode_1728_ = lean_ctor_get(v_toEnvExtension_1727_, 2);
v___x_1729_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1609_, v___x_1725_, v_env_1724_, v_asyncMode_1728_, v___y_1717_);
v_categories_1730_ = lean_ctor_get(v___x_1729_, 2);
lean_inc_ref(v_categories_1730_);
lean_dec(v___x_1729_);
v___x_1731_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg(v_categories_1730_, v___x_1722_, v___f_1714_, v___y_1720_, v___y_1721_);
lean_dec_ref(v_categories_1730_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1732_);
lean_dec_ref_known(v___x_1731_, 1);
v___x_1733_ = lean_array_get_size(v_a_1732_);
v___x_1734_ = lean_nat_dec_eq(v___x_1733_, v___x_1608_);
if (v___x_1734_ == 0)
{
uint8_t v___x_1735_; 
v___x_1735_ = lean_nat_dec_lt(v___x_1608_, v___x_1733_);
if (v___x_1735_ == 0)
{
lean_dec(v___x_1607_);
v___y_1701_ = v___y_1716_;
v___y_1702_ = v___y_1718_;
v___y_1703_ = v___y_1721_;
v___y_1704_ = v___y_1719_;
v___y_1705_ = v_a_1732_;
v___y_1706_ = v___y_1720_;
goto v___jp_1700_;
}
else
{
if (v___x_1735_ == 0)
{
lean_dec(v___x_1607_);
v___y_1701_ = v___y_1716_;
v___y_1702_ = v___y_1718_;
v___y_1703_ = v___y_1721_;
v___y_1704_ = v___y_1719_;
v___y_1705_ = v_a_1732_;
v___y_1706_ = v___y_1720_;
goto v___jp_1700_;
}
else
{
size_t v___x_1736_; size_t v___x_1737_; uint8_t v___x_1738_; 
v___x_1736_ = ((size_t)0ULL);
v___x_1737_ = lean_usize_of_nat(v___x_1733_);
v___x_1738_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__3(v___y_1718_, v_a_1732_, v___x_1736_, v___x_1737_);
if (v___x_1738_ == 0)
{
lean_dec(v___x_1607_);
v___y_1701_ = v___y_1716_;
v___y_1702_ = v___y_1718_;
v___y_1703_ = v___y_1721_;
v___y_1704_ = v___y_1719_;
v___y_1705_ = v_a_1732_;
v___y_1706_ = v___y_1720_;
goto v___jp_1700_;
}
else
{
lean_dec(v_a_1732_);
v___y_1662_ = v___y_1716_;
v___y_1663_ = v___y_1718_;
v___y_1664_ = v___y_1720_;
v___y_1665_ = v___y_1721_;
goto v___jp_1661_;
}
}
}
}
else
{
lean_dec(v_a_1732_);
v___y_1662_ = v___y_1716_;
v___y_1663_ = v___y_1718_;
v___y_1664_ = v___y_1720_;
v___y_1665_ = v___y_1721_;
goto v___jp_1661_;
}
}
else
{
lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1746_; 
lean_dec(v___y_1716_);
lean_dec(v_decl_1614_);
lean_dec(v___x_1607_);
v_a_1739_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1741_ = v___x_1731_;
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v___x_1731_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1742_ == 0)
{
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1739_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
v___jp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1750_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1751_ = l_Lean_Name_mkStr4(v___x_1610_, v___x_1611_, v___x_1750_, v___x_1612_);
lean_inc(v_stx_1615_);
v___x_1752_ = l_Lean_Syntax_isOfKind(v_stx_1615_, v___x_1751_);
lean_dec(v___x_1751_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
lean_dec_ref(v___f_1714_);
lean_dec(v_stx_1615_);
lean_dec(v_decl_1614_);
lean_dec(v___x_1607_);
v___x_1753_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1754_ = l_Lean_MessageData_ofName(v_name_1613_);
v___x_1755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1753_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
v___x_1756_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1755_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_1757_, v___y_1748_, v___y_1749_);
return v___x_1758_;
}
else
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
lean_dec(v_name_1613_);
v___x_1759_ = lean_unsigned_to_nat(1u);
v___x_1760_ = l_Lean_Syntax_getArg(v_stx_1615_, v___x_1759_);
lean_dec(v_stx_1615_);
v___x_1761_ = lean_box(0);
lean_inc(v___x_1760_);
v___x_1762_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_1760_, v___x_1761_, v___y_1748_, v___y_1749_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_a_1763_; uint8_t v___x_1764_; lean_object* v___x_1765_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc_n(v_a_1763_, 2);
lean_dec_ref_known(v___x_1762_, 1);
v___x_1764_ = 0;
v___x_1765_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4(v_a_1763_, v___x_1764_, v___y_1748_, v___y_1749_);
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v___x_1766_; lean_object* v_env_1767_; uint8_t v___x_1768_; 
lean_dec_ref_known(v___x_1765_, 1);
v___x_1766_ = lean_st_ref_get(v___y_1749_);
v_env_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc_ref(v_env_1767_);
lean_dec(v___x_1766_);
v___x_1768_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_1767_, v_a_1763_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
lean_dec_ref(v___f_1714_);
lean_dec(v_decl_1614_);
lean_dec(v___x_1607_);
v___x_1769_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_1770_ = l_Lean_MessageData_ofName(v_a_1763_);
v___x_1771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1771_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
v___x_1774_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v___x_1760_, v___x_1773_, v___y_1748_, v___y_1749_);
lean_dec(v___x_1760_);
return v___x_1774_;
}
else
{
lean_dec(v___x_1760_);
v___y_1716_ = v_a_1763_;
v___y_1717_ = v___x_1764_;
v___y_1718_ = v___x_1752_;
v___y_1719_ = v___x_1759_;
v___y_1720_ = v___y_1748_;
v___y_1721_ = v___y_1749_;
goto v___jp_1715_;
}
}
else
{
lean_dec(v_a_1763_);
lean_dec(v___x_1760_);
lean_dec_ref(v___f_1714_);
lean_dec(v_decl_1614_);
lean_dec(v___x_1607_);
return v___x_1765_;
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v___x_1760_);
lean_dec_ref(v___f_1714_);
lean_dec(v_decl_1614_);
lean_dec(v___x_1607_);
v_a_1775_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1762_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1762_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
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
v___jp_1783_:
{
lean_object* v___x_1784_; lean_object* v_env_1785_; lean_object* v___x_1786_; 
v___x_1784_ = lean_st_ref_get(v___y_1618_);
v_env_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc_ref(v_env_1785_);
lean_dec(v___x_1784_);
v___x_1786_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1785_, v_decl_1614_);
lean_dec_ref(v_env_1785_);
if (lean_obj_tag(v___x_1786_) == 0)
{
v___y_1748_ = v___y_1617_;
v___y_1749_ = v___y_1618_;
goto v___jp_1747_;
}
else
{
lean_object* v___x_1787_; 
lean_dec_ref_known(v___x_1786_, 1);
lean_dec_ref(v___f_1714_);
lean_dec(v_stx_1615_);
lean_dec_ref(v___x_1612_);
lean_dec_ref(v___x_1611_);
lean_dec_ref(v___x_1610_);
lean_dec(v___x_1607_);
v___x_1787_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg(v_name_1613_, v_decl_1614_, v___y_1617_, v___y_1618_);
return v___x_1787_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object* v___x_1791_, lean_object* v___x_1792_, lean_object* v___x_1793_, lean_object* v___x_1794_, lean_object* v___x_1795_, lean_object* v___x_1796_, lean_object* v_name_1797_, lean_object* v_decl_1798_, lean_object* v_stx_1799_, lean_object* v_kind_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
uint8_t v_kind_boxed_1804_; lean_object* v_res_1805_; 
v_kind_boxed_1804_ = lean_unbox(v_kind_1800_);
v_res_1805_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(v___x_1791_, v___x_1792_, v___x_1793_, v___x_1794_, v___x_1795_, v___x_1796_, v_name_1797_, v_decl_1798_, v_stx_1799_, v_kind_boxed_1804_, v___y_1801_, v___y_1802_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec_ref(v___x_1793_);
lean_dec(v___x_1792_);
return v_res_1805_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v_name_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___f_1834_; 
v_name_1827_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1828_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__0_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1829_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_1830_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_1831_ = l_Lean_Parser_ParserExtension_instInhabitedState_default;
v___x_1832_ = lean_unsigned_to_nat(0u);
v___x_1833_ = lean_box(0);
v___f_1834_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed), 13, 7);
lean_closure_set(v___f_1834_, 0, v___x_1833_);
lean_closure_set(v___f_1834_, 1, v___x_1832_);
lean_closure_set(v___f_1834_, 2, v___x_1831_);
lean_closure_set(v___f_1834_, 3, v___x_1830_);
lean_closure_set(v___f_1834_, 4, v___x_1829_);
lean_closure_set(v___f_1834_, 5, v___x_1828_);
lean_closure_set(v___f_1834_, 6, v_name_1827_);
return v___f_1834_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1890_; lean_object* v___f_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___f_1890_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___f_1891_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1892_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__30_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_1893_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
lean_ctor_set(v___x_1893_, 1, v___f_1891_);
lean_ctor_set(v___x_1893_, 2, v___f_1890_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__31_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_1896_ = l_Lean_registerBuiltinAttribute(v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2____boxed(lean_object* v_a_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_();
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1899_, lean_object* v_msg_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v_msg_1900_, v___y_1901_, v___y_1902_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1905_, lean_object* v_msg_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0(v_00_u03b1_1905_, v_msg_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1(lean_object* v_00_u03c3_1911_, lean_object* v_00_u03b2_1912_, lean_object* v_map_1913_, lean_object* v_init_1914_, lean_object* v_f_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___redArg(v_map_1913_, v_init_1914_, v_f_1915_, v___y_1916_, v___y_1917_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03c3_1920_, lean_object* v_00_u03b2_1921_, lean_object* v_map_1922_, lean_object* v_init_1923_, lean_object* v_f_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1(v_00_u03c3_1920_, v_00_u03b2_1921_, v_map_1922_, v_init_1923_, v_f_1924_, v___y_1925_, v___y_1926_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec_ref(v_map_1922_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5(lean_object* v_00_u03b1_1929_, lean_object* v_ref_1930_, lean_object* v_msg_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_ref_1930_, v_msg_1931_, v___y_1932_, v___y_1933_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___boxed(lean_object* v_00_u03b1_1936_, lean_object* v_ref_1937_, lean_object* v_msg_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5(v_00_u03b1_1936_, v_ref_1937_, v_msg_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v_ref_1937_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6(lean_object* v_00_u03b1_1943_, lean_object* v_attrName_1944_, lean_object* v_declName_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___redArg(v_attrName_1944_, v_declName_1945_, v___y_1946_, v___y_1947_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6___boxed(lean_object* v_00_u03b1_1950_, lean_object* v_attrName_1951_, lean_object* v_declName_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_throwAttrDeclInImportedModule___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__6(v_00_u03b1_1950_, v_attrName_1951_, v_declName_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7(lean_object* v_00_u03b1_1957_, lean_object* v_name_1958_, uint8_t v_kind_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v___x_1963_; 
v___x_1963_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg(v_name_1958_, v_kind_1959_, v___y_1960_, v___y_1961_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___boxed(lean_object* v_00_u03b1_1964_, lean_object* v_name_1965_, lean_object* v_kind_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_){
_start:
{
uint8_t v_kind_boxed_1970_; lean_object* v_res_1971_; 
v_kind_boxed_1970_ = lean_unbox(v_kind_1966_);
v_res_1971_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7(v_00_u03b1_1964_, v_name_1965_, v_kind_boxed_1970_, v___y_1967_, v___y_1968_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_map_1972_, lean_object* v_f_1973_, lean_object* v_init_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v___x_1978_; 
v___x_1978_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_f_1973_, v_map_1972_, v_init_1974_, v___y_1975_, v___y_1976_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_map_1979_, lean_object* v_f_1980_, lean_object* v_init_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_1979_, v_f_1980_, v_init_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03c3_1986_, lean_object* v_00_u03c3_1987_, lean_object* v_00_u03b2_1988_, lean_object* v_map_1989_, lean_object* v_f_1990_, lean_object* v_init_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_f_1990_, v_map_1989_, v_init_1991_, v___y_1992_, v___y_1993_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03c3_1996_, lean_object* v_00_u03c3_1997_, lean_object* v_00_u03b2_1998_, lean_object* v_map_1999_, lean_object* v_f_2000_, lean_object* v_init_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2(v_00_u03c3_1996_, v_00_u03c3_1997_, v_00_u03b2_1998_, v_map_1999_, v_f_2000_, v_init_2001_, v___y_2002_, v___y_2003_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8(lean_object* v_00_u03b2_2006_, lean_object* v_m_2007_, lean_object* v_a_2008_){
_start:
{
lean_object* v___x_2009_; 
v___x_2009_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___redArg(v_m_2007_, v_a_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8___boxed(lean_object* v_00_u03b2_2010_, lean_object* v_m_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8(v_00_u03b2_2010_, v_m_2011_, v_a_2012_);
lean_dec(v_a_2012_);
lean_dec_ref(v_m_2011_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3(lean_object* v_00_u03c3_2014_, lean_object* v_00_u03c3_2015_, lean_object* v_00_u03b1_2016_, lean_object* v_00_u03b2_2017_, lean_object* v_f_2018_, lean_object* v_x_2019_, lean_object* v_x_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___redArg(v_f_2018_, v_x_2019_, v_x_2020_, v___y_2021_, v___y_2022_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03c3_2025_, lean_object* v_00_u03c3_2026_, lean_object* v_00_u03b1_2027_, lean_object* v_00_u03b2_2028_, lean_object* v_f_2029_, lean_object* v_x_2030_, lean_object* v_x_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3(v_00_u03c3_2025_, v_00_u03c3_2026_, v_00_u03b1_2027_, v_00_u03b2_2028_, v_f_2029_, v_x_2030_, v_x_2031_, v___y_2032_, v___y_2033_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
return v_res_2035_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8(lean_object* v_00_u03b2_2036_, lean_object* v_x_2037_, lean_object* v_x_2038_){
_start:
{
uint8_t v___x_2039_; 
v___x_2039_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___redArg(v_x_2037_, v_x_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b2_2040_, lean_object* v_x_2041_, lean_object* v_x_2042_){
_start:
{
uint8_t v_res_2043_; lean_object* v_r_2044_; 
v_res_2043_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8(v_00_u03b2_2040_, v_x_2041_, v_x_2042_);
lean_dec_ref(v_x_2042_);
lean_dec_ref(v_x_2041_);
v_r_2044_ = lean_box(v_res_2043_);
return v_r_2044_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9(lean_object* v_00_u03b2_2045_, lean_object* v_m_2046_, lean_object* v_a_2047_, lean_object* v_b_2048_){
_start:
{
lean_object* v___x_2049_; 
v___x_2049_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9___redArg(v_m_2046_, v_a_2047_, v_b_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13(lean_object* v_00_u03b2_2050_, lean_object* v_a_2051_, lean_object* v_x_2052_){
_start:
{
lean_object* v___x_2053_; 
v___x_2053_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___redArg(v_a_2051_, v_x_2052_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13___boxed(lean_object* v_00_u03b2_2054_, lean_object* v_a_2055_, lean_object* v_x_2056_){
_start:
{
lean_object* v_res_2057_; 
v_res_2057_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__8_spec__13(v_00_u03b2_2054_, v_a_2055_, v_x_2056_);
lean_dec(v_x_2056_);
lean_dec(v_a_2055_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10(lean_object* v_00_u03b1_2058_, lean_object* v_00_u03b2_2059_, lean_object* v_00_u03c3_2060_, lean_object* v_00_u03c3_2061_, lean_object* v_f_2062_, lean_object* v_as_2063_, size_t v_i_2064_, size_t v_stop_2065_, lean_object* v_b_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v___x_2070_; 
v___x_2070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___redArg(v_f_2062_, v_as_2063_, v_i_2064_, v_stop_2065_, v_b_2066_, v___y_2067_, v___y_2068_);
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10___boxed(lean_object* v_00_u03b1_2071_, lean_object* v_00_u03b2_2072_, lean_object* v_00_u03c3_2073_, lean_object* v_00_u03c3_2074_, lean_object* v_f_2075_, lean_object* v_as_2076_, lean_object* v_i_2077_, lean_object* v_stop_2078_, lean_object* v_b_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
size_t v_i_boxed_2083_; size_t v_stop_boxed_2084_; lean_object* v_res_2085_; 
v_i_boxed_2083_ = lean_unbox_usize(v_i_2077_);
lean_dec(v_i_2077_);
v_stop_boxed_2084_ = lean_unbox_usize(v_stop_2078_);
lean_dec(v_stop_2078_);
v_res_2085_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__10(v_00_u03b1_2071_, v_00_u03b2_2072_, v_00_u03c3_2073_, v_00_u03c3_2074_, v_f_2075_, v_as_2076_, v_i_boxed_2083_, v_stop_boxed_2084_, v_b_2079_, v___y_2080_, v___y_2081_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec_ref(v_as_2076_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11(lean_object* v_00_u03c3_2086_, lean_object* v_00_u03c3_2087_, lean_object* v_00_u03b1_2088_, lean_object* v_00_u03b2_2089_, lean_object* v_f_2090_, lean_object* v_keys_2091_, lean_object* v_vals_2092_, lean_object* v_heq_2093_, lean_object* v_i_2094_, lean_object* v_acc_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v___x_2099_; 
v___x_2099_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___redArg(v_f_2090_, v_keys_2091_, v_vals_2092_, v_i_2094_, v_acc_2095_, v___y_2096_, v___y_2097_);
return v___x_2099_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11___boxed(lean_object* v_00_u03c3_2100_, lean_object* v_00_u03c3_2101_, lean_object* v_00_u03b1_2102_, lean_object* v_00_u03b2_2103_, lean_object* v_f_2104_, lean_object* v_keys_2105_, lean_object* v_vals_2106_, lean_object* v_heq_2107_, lean_object* v_i_2108_, lean_object* v_acc_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forIn___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__1_spec__2_spec__3_spec__11(v_00_u03c3_2100_, v_00_u03c3_2101_, v_00_u03b1_2102_, v_00_u03b2_2103_, v_f_2104_, v_keys_2105_, v_vals_2106_, v_heq_2107_, v_i_2108_, v_acc_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec_ref(v_vals_2106_);
lean_dec_ref(v_keys_2105_);
return v_res_2113_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14(lean_object* v_00_u03b2_2114_, lean_object* v_x_2115_, size_t v_x_2116_, lean_object* v_x_2117_){
_start:
{
uint8_t v___x_2118_; 
v___x_2118_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___redArg(v_x_2115_, v_x_2116_, v_x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14___boxed(lean_object* v_00_u03b2_2119_, lean_object* v_x_2120_, lean_object* v_x_2121_, lean_object* v_x_2122_){
_start:
{
size_t v_x_13886__boxed_2123_; uint8_t v_res_2124_; lean_object* v_r_2125_; 
v_x_13886__boxed_2123_ = lean_unbox_usize(v_x_2121_);
lean_dec(v_x_2121_);
v_res_2124_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14(v_00_u03b2_2119_, v_x_2120_, v_x_13886__boxed_2123_, v_x_2122_);
lean_dec_ref(v_x_2122_);
lean_dec_ref(v_x_2120_);
v_r_2125_ = lean_box(v_res_2124_);
return v_r_2125_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16(lean_object* v_00_u03b2_2126_, lean_object* v_a_2127_, lean_object* v_x_2128_){
_start:
{
uint8_t v___x_2129_; 
v___x_2129_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___redArg(v_a_2127_, v_x_2128_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16___boxed(lean_object* v_00_u03b2_2130_, lean_object* v_a_2131_, lean_object* v_x_2132_){
_start:
{
uint8_t v_res_2133_; lean_object* v_r_2134_; 
v_res_2133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__16(v_00_u03b2_2130_, v_a_2131_, v_x_2132_);
lean_dec(v_x_2132_);
lean_dec_ref(v_a_2131_);
v_r_2134_ = lean_box(v_res_2133_);
return v_r_2134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17(lean_object* v_00_u03b2_2135_, lean_object* v_data_2136_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17___redArg(v_data_2136_);
return v___x_2137_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17(lean_object* v_00_u03b2_2138_, lean_object* v_keys_2139_, lean_object* v_vals_2140_, lean_object* v_heq_2141_, lean_object* v_i_2142_, lean_object* v_k_2143_){
_start:
{
uint8_t v___x_2144_; 
v___x_2144_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___redArg(v_keys_2139_, v_i_2142_, v_k_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17___boxed(lean_object* v_00_u03b2_2145_, lean_object* v_keys_2146_, lean_object* v_vals_2147_, lean_object* v_heq_2148_, lean_object* v_i_2149_, lean_object* v_k_2150_){
_start:
{
uint8_t v_res_2151_; lean_object* v_r_2152_; 
v_res_2151_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__8_spec__14_spec__17(v_00_u03b2_2145_, v_keys_2146_, v_vals_2147_, v_heq_2148_, v_i_2149_, v_k_2150_);
lean_dec_ref(v_k_2150_);
lean_dec_ref(v_vals_2147_);
lean_dec_ref(v_keys_2146_);
v_r_2152_ = lean_box(v_res_2151_);
return v_r_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21(lean_object* v_00_u03b2_2153_, lean_object* v_i_2154_, lean_object* v_source_2155_, lean_object* v_target_2156_){
_start:
{
lean_object* v___x_2157_; 
v___x_2157_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21___redArg(v_i_2154_, v_source_2155_, v_target_2156_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21_spec__24(lean_object* v_00_u03b2_2158_, lean_object* v_x_2159_, lean_object* v_x_2160_){
_start:
{
lean_object* v___x_2161_; 
v___x_2161_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__9_spec__17_spec__21_spec__24___redArg(v_x_2159_, v_x_2160_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v_as_2162_, lean_object* v_x_2163_){
_start:
{
lean_object* v_fst_2164_; lean_object* v_snd_2165_; lean_object* v___x_2166_; 
v_fst_2164_ = lean_ctor_get(v_x_2163_, 0);
lean_inc(v_fst_2164_);
v_snd_2165_ = lean_ctor_get(v_x_2163_, 1);
lean_inc(v_snd_2165_);
lean_dec_ref(v_x_2163_);
v___x_2166_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2164_, v_snd_2165_, v_as_2162_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_2167_, lean_object* v_x_2168_){
_start:
{
if (lean_obj_tag(v_x_2168_) == 0)
{
lean_object* v_k_2169_; lean_object* v_v_2170_; lean_object* v_l_2171_; lean_object* v_r_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v_k_2169_ = lean_ctor_get(v_x_2168_, 1);
v_v_2170_ = lean_ctor_get(v_x_2168_, 2);
v_l_2171_ = lean_ctor_get(v_x_2168_, 3);
v_r_2172_ = lean_ctor_get(v_x_2168_, 4);
v___x_2173_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v_init_2167_, v_l_2171_);
lean_inc(v_v_2170_);
lean_inc(v_k_2169_);
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v_k_2169_);
lean_ctor_set(v___x_2174_, 1, v_v_2170_);
v___x_2175_ = lean_array_push(v___x_2173_, v___x_2174_);
v_init_2167_ = v___x_2175_;
v_x_2168_ = v_r_2172_;
goto _start;
}
else
{
return v_init_2167_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_2177_, lean_object* v_x_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v_init_2177_, v_x_2178_);
lean_dec(v_x_2178_);
return v_res_2179_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_2180_, lean_object* v_x2_2181_){
_start:
{
lean_object* v_fst_2182_; lean_object* v_fst_2183_; uint8_t v___x_2184_; 
v_fst_2182_ = lean_ctor_get(v_x1_2180_, 0);
v_fst_2183_ = lean_ctor_get(v_x2_2181_, 0);
v___x_2184_ = l_Lean_Name_quickLt(v_fst_2182_, v_fst_2183_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_2185_, lean_object* v_x2_2186_){
_start:
{
uint8_t v_res_2187_; lean_object* v_r_2188_; 
v_res_2187_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_2185_, v_x2_2186_);
lean_dec_ref(v_x2_2186_);
lean_dec_ref(v_x1_2185_);
v_r_2188_ = lean_box(v_res_2187_);
return v_r_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_2189_, lean_object* v_pivot_2190_, lean_object* v_as_2191_, lean_object* v_i_2192_, lean_object* v_k_2193_){
_start:
{
uint8_t v___x_2194_; 
v___x_2194_ = lean_nat_dec_lt(v_k_2193_, v_hi_2189_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
lean_dec(v_k_2193_);
v___x_2195_ = lean_array_fswap(v_as_2191_, v_i_2192_, v_hi_2189_);
v___x_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2196_, 0, v_i_2192_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
return v___x_2196_;
}
else
{
lean_object* v___x_2197_; lean_object* v_fst_2198_; lean_object* v_fst_2199_; uint8_t v___x_2200_; 
v___x_2197_ = lean_array_fget_borrowed(v_as_2191_, v_k_2193_);
v_fst_2198_ = lean_ctor_get(v___x_2197_, 0);
v_fst_2199_ = lean_ctor_get(v_pivot_2190_, 0);
v___x_2200_ = l_Lean_Name_quickLt(v_fst_2198_, v_fst_2199_);
if (v___x_2200_ == 0)
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = lean_unsigned_to_nat(1u);
v___x_2202_ = lean_nat_add(v_k_2193_, v___x_2201_);
lean_dec(v_k_2193_);
v_k_2193_ = v___x_2202_;
goto _start;
}
else
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2204_ = lean_array_fswap(v_as_2191_, v_i_2192_, v_k_2193_);
v___x_2205_ = lean_unsigned_to_nat(1u);
v___x_2206_ = lean_nat_add(v_i_2192_, v___x_2205_);
lean_dec(v_i_2192_);
v___x_2207_ = lean_nat_add(v_k_2193_, v___x_2205_);
lean_dec(v_k_2193_);
v_as_2191_ = v___x_2204_;
v_i_2192_ = v___x_2206_;
v_k_2193_ = v___x_2207_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_2209_, lean_object* v_pivot_2210_, lean_object* v_as_2211_, lean_object* v_i_2212_, lean_object* v_k_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_2209_, v_pivot_2210_, v_as_2211_, v_i_2212_, v_k_2213_);
lean_dec_ref(v_pivot_2210_);
lean_dec(v_hi_2209_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_2215_, lean_object* v_as_2216_, lean_object* v_lo_2217_, lean_object* v_hi_2218_){
_start:
{
lean_object* v___y_2220_; uint8_t v___x_2230_; 
v___x_2230_ = lean_nat_dec_lt(v_lo_2217_, v_hi_2218_);
if (v___x_2230_ == 0)
{
lean_dec(v_lo_2217_);
return v_as_2216_;
}
else
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v_mid_2233_; lean_object* v___y_2235_; lean_object* v___y_2241_; lean_object* v___x_2246_; lean_object* v___x_2247_; uint8_t v___x_2248_; 
v___x_2231_ = lean_nat_add(v_lo_2217_, v_hi_2218_);
v___x_2232_ = lean_unsigned_to_nat(1u);
v_mid_2233_ = lean_nat_shiftr(v___x_2231_, v___x_2232_);
lean_dec(v___x_2231_);
v___x_2246_ = lean_array_fget_borrowed(v_as_2216_, v_mid_2233_);
v___x_2247_ = lean_array_fget_borrowed(v_as_2216_, v_lo_2217_);
v___x_2248_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_2246_, v___x_2247_);
if (v___x_2248_ == 0)
{
v___y_2241_ = v_as_2216_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2249_; 
v___x_2249_ = lean_array_fswap(v_as_2216_, v_lo_2217_, v_mid_2233_);
v___y_2241_ = v___x_2249_;
goto v___jp_2240_;
}
v___jp_2234_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2236_ = lean_array_fget_borrowed(v___y_2235_, v_mid_2233_);
v___x_2237_ = lean_array_fget_borrowed(v___y_2235_, v_hi_2218_);
v___x_2238_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_2236_, v___x_2237_);
if (v___x_2238_ == 0)
{
lean_dec(v_mid_2233_);
v___y_2220_ = v___y_2235_;
goto v___jp_2219_;
}
else
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_array_fswap(v___y_2235_, v_mid_2233_, v_hi_2218_);
lean_dec(v_mid_2233_);
v___y_2220_ = v___x_2239_;
goto v___jp_2219_;
}
}
v___jp_2240_:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; uint8_t v___x_2244_; 
v___x_2242_ = lean_array_fget_borrowed(v___y_2241_, v_hi_2218_);
v___x_2243_ = lean_array_fget_borrowed(v___y_2241_, v_lo_2217_);
v___x_2244_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_2242_, v___x_2243_);
if (v___x_2244_ == 0)
{
v___y_2235_ = v___y_2241_;
goto v___jp_2234_;
}
else
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_array_fswap(v___y_2241_, v_lo_2217_, v_hi_2218_);
v___y_2235_ = v___x_2245_;
goto v___jp_2234_;
}
}
}
v___jp_2219_:
{
lean_object* v_pivot_2221_; lean_object* v___x_2222_; lean_object* v_fst_2223_; lean_object* v_snd_2224_; uint8_t v___x_2225_; 
v_pivot_2221_ = lean_array_fget(v___y_2220_, v_hi_2218_);
lean_inc_n(v_lo_2217_, 2);
v___x_2222_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_2218_, v_pivot_2221_, v___y_2220_, v_lo_2217_, v_lo_2217_);
lean_dec(v_pivot_2221_);
v_fst_2223_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_fst_2223_);
v_snd_2224_ = lean_ctor_get(v___x_2222_, 1);
lean_inc(v_snd_2224_);
lean_dec_ref(v___x_2222_);
v___x_2225_ = lean_nat_dec_le(v_hi_2218_, v_fst_2223_);
if (v___x_2225_ == 0)
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v_n_2215_, v_snd_2224_, v_lo_2217_, v_fst_2223_);
v___x_2227_ = lean_unsigned_to_nat(1u);
v___x_2228_ = lean_nat_add(v_fst_2223_, v___x_2227_);
lean_dec(v_fst_2223_);
v_as_2216_ = v___x_2226_;
v_lo_2217_ = v___x_2228_;
goto _start;
}
else
{
lean_dec(v_fst_2223_);
lean_dec(v_lo_2217_);
return v_snd_2224_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_2250_, lean_object* v_as_2251_, lean_object* v_lo_2252_, lean_object* v_hi_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v_n_2250_, v_as_2251_, v_lo_2252_, v_hi_2253_);
lean_dec(v_hi_2253_);
lean_dec(v_n_2250_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v_x_2257_, lean_object* v_s_2258_){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___y_2264_; lean_object* v___y_2265_; uint8_t v___x_2268_; 
v___x_2259_ = lean_unsigned_to_nat(0u);
v___x_2260_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v___x_2261_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v___x_2260_, v_s_2258_);
v___x_2262_ = lean_array_get_size(v___x_2261_);
v___x_2268_ = lean_nat_dec_eq(v___x_2262_, v___x_2259_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___y_2272_; uint8_t v___x_2274_; 
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = lean_nat_sub(v___x_2262_, v___x_2269_);
v___x_2274_ = lean_nat_dec_le(v___x_2259_, v___x_2270_);
if (v___x_2274_ == 0)
{
lean_inc(v___x_2270_);
v___y_2272_ = v___x_2270_;
goto v___jp_2271_;
}
else
{
v___y_2272_ = v___x_2259_;
goto v___jp_2271_;
}
v___jp_2271_:
{
uint8_t v___x_2273_; 
v___x_2273_ = lean_nat_dec_le(v___y_2272_, v___x_2270_);
if (v___x_2273_ == 0)
{
lean_dec(v___x_2270_);
lean_inc(v___y_2272_);
v___y_2264_ = v___y_2272_;
v___y_2265_ = v___y_2272_;
goto v___jp_2263_;
}
else
{
v___y_2264_ = v___y_2272_;
v___y_2265_ = v___x_2270_;
goto v___jp_2263_;
}
}
}
else
{
lean_object* v___x_2275_; 
lean_inc_ref_n(v___x_2261_, 2);
v___x_2275_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2261_);
lean_ctor_set(v___x_2275_, 1, v___x_2261_);
lean_ctor_set(v___x_2275_, 2, v___x_2261_);
return v___x_2275_;
}
v___jp_2263_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v___x_2262_, v___x_2261_, v___y_2264_, v___y_2265_);
lean_dec(v___y_2265_);
lean_inc_ref_n(v___x_2266_, 2);
v___x_2267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
lean_ctor_set(v___x_2267_, 1, v___x_2266_);
lean_ctor_set(v___x_2267_, 2, v___x_2266_);
return v___x_2267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v_x_2276_, lean_object* v_s_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(v_x_2276_, v_s_2277_);
lean_dec(v_s_2277_);
lean_dec_ref(v_x_2276_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v_es_2279_){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; uint8_t v___x_2284_; 
v___x_2280_ = lean_unsigned_to_nat(0u);
v___x_2281_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v___x_2282_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v___x_2281_, v_es_2279_);
v___x_2283_ = lean_array_get_size(v___x_2282_);
v___x_2284_ = lean_nat_dec_eq(v___x_2283_, v___x_2280_);
if (v___x_2284_ == 0)
{
lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___y_2288_; uint8_t v___x_2292_; 
v___x_2285_ = lean_unsigned_to_nat(1u);
v___x_2286_ = lean_nat_sub(v___x_2283_, v___x_2285_);
v___x_2292_ = lean_nat_dec_le(v___x_2280_, v___x_2286_);
if (v___x_2292_ == 0)
{
lean_inc(v___x_2286_);
v___y_2288_ = v___x_2286_;
goto v___jp_2287_;
}
else
{
v___y_2288_ = v___x_2280_;
goto v___jp_2287_;
}
v___jp_2287_:
{
uint8_t v___x_2289_; 
v___x_2289_ = lean_nat_dec_le(v___y_2288_, v___x_2286_);
if (v___x_2289_ == 0)
{
lean_object* v___x_2290_; 
lean_dec(v___x_2286_);
lean_inc(v___y_2288_);
v___x_2290_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v___x_2283_, v___x_2282_, v___y_2288_, v___y_2288_);
lean_dec(v___y_2288_);
return v___x_2290_;
}
else
{
lean_object* v___x_2291_; 
v___x_2291_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v___x_2283_, v___x_2282_, v___y_2288_, v___x_2286_);
lean_dec(v___x_2286_);
return v___x_2291_;
}
}
}
else
{
return v___x_2282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v_es_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(v_es_2293_);
lean_dec(v_es_2293_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(lean_object* v___x_2295_, lean_object* v_x_2296_, lean_object* v___y_2297_){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2295_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v___x_2300_, lean_object* v_x_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(v___x_2300_, v_x_2301_, v___y_2302_);
lean_dec_ref(v___y_2302_);
lean_dec_ref(v_x_2301_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v___x_2332_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2331_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2____boxed(lean_object* v_a_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_();
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0(lean_object* v_init_2335_, lean_object* v_t_2336_){
_start:
{
lean_object* v___x_2337_; 
v___x_2337_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0_spec__0(v_init_2335_, v_t_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_2338_, lean_object* v_t_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__0(v_init_2338_, v_t_2339_);
lean_dec(v_t_2339_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1(lean_object* v_n_2341_, lean_object* v_as_2342_, lean_object* v_lo_2343_, lean_object* v_hi_2344_, lean_object* v_w_2345_, lean_object* v_hlo_2346_, lean_object* v_hhi_2347_){
_start:
{
lean_object* v___x_2348_; 
v___x_2348_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg(v_n_2341_, v_as_2342_, v_lo_2343_, v_hi_2344_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_2349_, lean_object* v_as_2350_, lean_object* v_lo_2351_, lean_object* v_hi_2352_, lean_object* v_w_2353_, lean_object* v_hlo_2354_, lean_object* v_hhi_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1(v_n_2349_, v_as_2350_, v_lo_2351_, v_hi_2352_, v_w_2353_, v_hlo_2354_, v_hhi_2355_);
lean_dec(v_hi_2352_);
lean_dec(v_n_2349_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_2357_, lean_object* v_lo_2358_, lean_object* v_hi_2359_, lean_object* v_hhi_2360_, lean_object* v_pivot_2361_, lean_object* v_as_2362_, lean_object* v_i_2363_, lean_object* v_k_2364_, lean_object* v_ilo_2365_, lean_object* v_ik_2366_, lean_object* v_w_2367_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_2359_, v_pivot_2361_, v_as_2362_, v_i_2363_, v_k_2364_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_2369_, lean_object* v_lo_2370_, lean_object* v_hi_2371_, lean_object* v_hhi_2372_, lean_object* v_pivot_2373_, lean_object* v_as_2374_, lean_object* v_i_2375_, lean_object* v_k_2376_, lean_object* v_ilo_2377_, lean_object* v_ik_2378_, lean_object* v_w_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1_spec__2(v_n_2369_, v_lo_2370_, v_hi_2371_, v_hhi_2372_, v_pivot_2373_, v_as_2374_, v_i_2375_, v_k_2376_, v_ilo_2377_, v_ik_2378_, v_w_2379_);
lean_dec_ref(v_pivot_2373_);
lean_dec(v_hi_2371_);
lean_dec(v_lo_2370_);
lean_dec(v_n_2369_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1(lean_object* v_tag_2385_, lean_object* v___x_2386_, lean_object* v_toPure_2387_, lean_object* v___f_2388_, lean_object* v_env_2389_){
_start:
{
lean_object* v___x_2393_; 
v___x_2393_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2389_, v_tag_2385_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v___x_2394_; lean_object* v_toEnvExtension_2395_; lean_object* v_asyncMode_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
lean_dec_ref(v___f_2388_);
v___x_2394_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2395_ = lean_ctor_get(v___x_2394_, 0);
v_asyncMode_2396_ = lean_ctor_get(v_toEnvExtension_2395_, 2);
v___x_2397_ = lean_box(0);
v___x_2398_ = 0;
v___x_2399_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2386_, v___x_2394_, v_env_2389_, v_asyncMode_2396_, v___x_2397_, v___x_2398_);
v___x_2400_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2399_, v_tag_2385_);
lean_dec(v_tag_2385_);
lean_dec(v___x_2399_);
v___x_2401_ = lean_apply_2(v_toPure_2387_, lean_box(0), v___x_2400_);
return v___x_2401_;
}
else
{
lean_object* v_val_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; 
v_val_2402_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_val_2402_);
lean_dec_ref_known(v___x_2393_, 1);
v___x_2403_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v___x_2404_ = 0;
v___x_2405_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2386_, v___x_2403_, v_env_2389_, v_val_2402_, v___x_2404_);
lean_dec(v_val_2402_);
lean_dec_ref(v_env_2389_);
v___x_2406_ = lean_unsigned_to_nat(0u);
v___x_2407_ = lean_array_get_size(v___x_2405_);
v___x_2408_ = lean_nat_dec_lt(v___x_2406_, v___x_2407_);
if (v___x_2408_ == 0)
{
lean_dec_ref(v___x_2405_);
lean_dec_ref(v___f_2388_);
lean_dec(v_tag_2385_);
goto v___jp_2390_;
}
else
{
lean_object* v___x_2409_; lean_object* v___x_2410_; uint8_t v___x_2411_; 
v___x_2409_ = lean_unsigned_to_nat(1u);
v___x_2410_ = lean_nat_sub(v___x_2407_, v___x_2409_);
v___x_2411_ = lean_nat_dec_le(v___x_2406_, v___x_2410_);
if (v___x_2411_ == 0)
{
lean_dec(v___x_2410_);
lean_dec_ref(v___x_2405_);
lean_dec_ref(v___f_2388_);
lean_dec(v_tag_2385_);
goto v___jp_2390_;
}
else
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2412_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0));
v___x_2413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2413_, 0, v_tag_2385_);
lean_ctor_set(v___x_2413_, 1, v___x_2412_);
v___x_2414_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__1));
v___x_2415_ = l_Array_binSearchAux___redArg(v___f_2388_, v___x_2414_, v___x_2405_, v___x_2413_, v___x_2406_, v___x_2410_);
lean_dec_ref(v___x_2405_);
if (lean_obj_tag(v___x_2415_) == 0)
{
goto v___jp_2390_;
}
else
{
lean_object* v_val_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2425_; 
v_val_2416_ = lean_ctor_get(v___x_2415_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2418_ = v___x_2415_;
v_isShared_2419_ = v_isSharedCheck_2425_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_val_2416_);
lean_dec(v___x_2415_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2425_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v_snd_2420_; lean_object* v___x_2422_; 
v_snd_2420_ = lean_ctor_get(v_val_2416_, 1);
lean_inc(v_snd_2420_);
lean_dec(v_val_2416_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 0, v_snd_2420_);
v___x_2422_ = v___x_2418_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_snd_2420_);
v___x_2422_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_apply_2(v_toPure_2387_, lean_box(0), v___x_2422_);
return v___x_2423_;
}
}
}
}
}
}
v___jp_2390_:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2391_ = lean_box(0);
v___x_2392_ = lean_apply_2(v_toPure_2387_, lean_box(0), v___x_2391_);
return v___x_2392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___redArg(lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_tag_2429_){
_start:
{
lean_object* v_toApplicative_2430_; lean_object* v_toBind_2431_; lean_object* v_getEnv_2432_; lean_object* v_toPure_2433_; lean_object* v___f_2434_; lean_object* v___x_2435_; lean_object* v___f_2436_; lean_object* v___x_2437_; 
v_toApplicative_2430_ = lean_ctor_get(v_inst_2427_, 0);
lean_inc_ref(v_toApplicative_2430_);
v_toBind_2431_ = lean_ctor_get(v_inst_2427_, 1);
lean_inc(v_toBind_2431_);
lean_dec_ref(v_inst_2427_);
v_getEnv_2432_ = lean_ctor_get(v_inst_2428_, 0);
lean_inc(v_getEnv_2432_);
lean_dec_ref(v_inst_2428_);
v_toPure_2433_ = lean_ctor_get(v_toApplicative_2430_, 1);
lean_inc(v_toPure_2433_);
lean_dec_ref(v_toApplicative_2430_);
v___f_2434_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___closed__0));
v___x_2435_ = lean_box(1);
v___f_2436_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2436_, 0, v_tag_2429_);
lean_closure_set(v___f_2436_, 1, v___x_2435_);
lean_closure_set(v___f_2436_, 2, v_toPure_2433_);
lean_closure_set(v___f_2436_, 3, v___f_2434_);
v___x_2437_ = lean_apply_4(v_toBind_2431_, lean_box(0), lean_box(0), v_getEnv_2432_, v___f_2436_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo(lean_object* v_m_2438_, lean_object* v_inst_2439_, lean_object* v_inst_2440_, lean_object* v_tag_2441_){
_start:
{
lean_object* v___x_2442_; 
v___x_2442_ = l_Lean_Parser_Tactic_Doc_tagInfo___redArg(v_inst_2439_, v_inst_2440_, v_tag_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__0(lean_object* v_l_2443_, lean_object* v_k_2444_, lean_object* v_x_2445_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_array_push(v_l_2443_, v_k_2444_);
return v___x_2446_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1(lean_object* v_x1_2447_, lean_object* v_x2_2448_){
_start:
{
uint8_t v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; uint8_t v___x_2452_; 
v___x_2449_ = 1;
v___x_2450_ = l_Lean_Name_toString(v_x1_2447_, v___x_2449_);
v___x_2451_ = l_Lean_Name_toString(v_x2_2448_, v___x_2449_);
v___x_2452_ = lean_string_dec_lt(v___x_2450_, v___x_2451_);
lean_dec_ref(v___x_2451_);
lean_dec_ref(v___x_2450_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1___boxed(lean_object* v_x1_2453_, lean_object* v_x2_2454_){
_start:
{
uint8_t v_res_2455_; lean_object* v_r_2456_; 
v_res_2455_ = l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__1(v_x1_2453_, v_x2_2454_);
v_r_2456_ = lean_box(v_res_2455_);
return v_r_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3(lean_object* v_toPure_2457_, lean_object* v_a_2458_, lean_object* v_b_2459_, lean_object* v_c_2460_){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2461_ = l_Lean_NameSet_insert(v_c_2460_, v_a_2458_);
v___x_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
v___x_2463_ = lean_apply_2(v_toPure_2457_, lean_box(0), v___x_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3___boxed(lean_object* v_toPure_2464_, lean_object* v_a_2465_, lean_object* v_b_2466_, lean_object* v_c_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3(v_toPure_2464_, v_a_2465_, v_b_2466_, v_c_2467_);
lean_dec_ref(v_b_2466_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__2(lean_object* v_toPure_2469_, lean_object* v_a_2470_, lean_object* v_x_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v_fst_2473_; lean_object* v_found_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v_fst_2473_ = lean_ctor_get(v_a_2470_, 0);
lean_inc(v_fst_2473_);
lean_dec_ref(v_a_2470_);
v_found_2474_ = l_Lean_NameSet_insert(v___y_2472_, v_fst_2473_);
v___x_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2475_, 0, v_found_2474_);
v___x_2476_ = lean_apply_2(v_toPure_2469_, lean_box(0), v___x_2475_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5(lean_object* v_inst_2477_, lean_object* v___f_2478_, lean_object* v_toBind_2479_, lean_object* v___f_2480_, lean_object* v_a_2481_, lean_object* v_x_2482_, lean_object* v___y_2483_){
_start:
{
size_t v_sz_2484_; size_t v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v_sz_2484_ = lean_array_size(v_a_2481_);
v___x_2485_ = ((size_t)0ULL);
v___x_2486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2477_, v_a_2481_, v___f_2478_, v_sz_2484_, v___x_2485_, v___y_2483_);
v___x_2487_ = lean_apply_4(v_toBind_2479_, lean_box(0), lean_box(0), v___x_2486_, v___f_2480_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__4(lean_object* v_toPure_2488_, lean_object* v___f_2489_, lean_object* v___f_2490_, lean_object* v_____s_2491_){
_start:
{
lean_object* v___y_2493_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2509_; 
if (lean_obj_tag(v_____s_2491_) == 0)
{
lean_object* v_size_2518_; 
v_size_2518_ = lean_ctor_get(v_____s_2491_, 0);
lean_inc(v_size_2518_);
v___y_2509_ = v_size_2518_;
goto v___jp_2508_;
}
else
{
lean_object* v___x_2519_; 
v___x_2519_ = lean_unsigned_to_nat(0u);
v___y_2509_ = v___x_2519_;
goto v___jp_2508_;
}
v___jp_2492_:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2494_ = lean_array_to_list(v___y_2493_);
v___x_2495_ = lean_apply_2(v_toPure_2488_, lean_box(0), v___x_2494_);
return v___x_2495_;
}
v___jp_2496_:
{
lean_object* v___x_2501_; 
v___x_2501_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_2489_, v___y_2498_, v___y_2497_, v___y_2499_, v___y_2500_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2500_);
lean_dec(v___y_2498_);
v___y_2493_ = v___x_2501_;
goto v___jp_2492_;
}
v___jp_2502_:
{
uint8_t v___x_2507_; 
v___x_2507_ = lean_nat_dec_le(v___y_2506_, v___y_2504_);
if (v___x_2507_ == 0)
{
lean_dec(v___y_2504_);
lean_inc(v___y_2506_);
v___y_2497_ = v___y_2503_;
v___y_2498_ = v___y_2505_;
v___y_2499_ = v___y_2506_;
v___y_2500_ = v___y_2506_;
goto v___jp_2496_;
}
else
{
v___y_2497_ = v___y_2503_;
v___y_2498_ = v___y_2505_;
v___y_2499_ = v___y_2506_;
v___y_2500_ = v___y_2504_;
goto v___jp_2496_;
}
}
v___jp_2508_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2510_ = lean_mk_empty_array_with_capacity(v___y_2509_);
lean_dec(v___y_2509_);
v___x_2511_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_2490_, v___x_2510_, v_____s_2491_);
v___x_2512_ = lean_array_get_size(v___x_2511_);
v___x_2513_ = lean_unsigned_to_nat(0u);
v___x_2514_ = lean_nat_dec_eq(v___x_2512_, v___x_2513_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; lean_object* v___x_2516_; uint8_t v___x_2517_; 
v___x_2515_ = lean_unsigned_to_nat(1u);
v___x_2516_ = lean_nat_sub(v___x_2512_, v___x_2515_);
v___x_2517_ = lean_nat_dec_le(v___x_2513_, v___x_2516_);
if (v___x_2517_ == 0)
{
lean_inc(v___x_2516_);
v___y_2503_ = v___x_2511_;
v___y_2504_ = v___x_2516_;
v___y_2505_ = v___x_2512_;
v___y_2506_ = v___x_2516_;
goto v___jp_2502_;
}
else
{
v___y_2503_ = v___x_2511_;
v___y_2504_ = v___x_2516_;
v___y_2505_ = v___x_2512_;
v___y_2506_ = v___x_2513_;
goto v___jp_2502_;
}
}
else
{
lean_dec_ref(v___f_2489_);
v___y_2493_ = v___x_2511_;
goto v___jp_2492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6(lean_object* v___x_2520_, lean_object* v_toEnvExtension_2521_, lean_object* v_env_2522_, lean_object* v_asyncMode_2523_, lean_object* v___x_2524_, uint8_t v___x_2525_, lean_object* v_inst_2526_, lean_object* v___f_2527_, lean_object* v_toBind_2528_, lean_object* v___f_2529_, lean_object* v_____s_2530_){
_start:
{
lean_object* v___x_2531_; lean_object* v_importedEntries_2532_; size_t v_sz_2533_; size_t v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2531_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2520_, v_toEnvExtension_2521_, v_env_2522_, v_asyncMode_2523_, v___x_2524_, v___x_2525_);
v_importedEntries_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc_ref(v_importedEntries_2532_);
lean_dec(v___x_2531_);
v_sz_2533_ = lean_array_size(v_importedEntries_2532_);
v___x_2534_ = ((size_t)0ULL);
v___x_2535_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2526_, v_importedEntries_2532_, v___f_2527_, v_sz_2533_, v___x_2534_, v_____s_2530_);
v___x_2536_ = lean_apply_4(v_toBind_2528_, lean_box(0), lean_box(0), v___x_2535_, v___f_2529_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed(lean_object* v___x_2537_, lean_object* v_toEnvExtension_2538_, lean_object* v_env_2539_, lean_object* v_asyncMode_2540_, lean_object* v___x_2541_, lean_object* v___x_2542_, lean_object* v_inst_2543_, lean_object* v___f_2544_, lean_object* v_toBind_2545_, lean_object* v___f_2546_, lean_object* v_____s_2547_){
_start:
{
uint8_t v___x_532__boxed_2548_; lean_object* v_res_2549_; 
v___x_532__boxed_2548_ = lean_unbox(v___x_2542_);
v_res_2549_ = l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6(v___x_2537_, v_toEnvExtension_2538_, v_env_2539_, v_asyncMode_2540_, v___x_2541_, v___x_532__boxed_2548_, v_inst_2543_, v___f_2544_, v_toBind_2545_, v___f_2546_, v_____s_2547_);
lean_dec(v_asyncMode_2540_);
lean_dec_ref(v_toEnvExtension_2538_);
lean_dec_ref(v___x_2537_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__7(lean_object* v___x_2550_, lean_object* v_inst_2551_, lean_object* v___f_2552_, lean_object* v_toBind_2553_, lean_object* v___f_2554_, lean_object* v___x_2555_, lean_object* v___f_2556_, lean_object* v___f_2557_, lean_object* v_env_2558_){
_start:
{
lean_object* v___x_2559_; lean_object* v_toEnvExtension_2560_; lean_object* v_asyncMode_2561_; lean_object* v_found_2562_; lean_object* v___x_2563_; uint8_t v___x_2564_; lean_object* v___x_2565_; lean_object* v___f_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2559_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2560_ = lean_ctor_get(v___x_2559_, 0);
v_asyncMode_2561_ = lean_ctor_get(v_toEnvExtension_2560_, 2);
v_found_2562_ = l_Lean_NameSet_empty;
v___x_2563_ = lean_box(0);
v___x_2564_ = 0;
v___x_2565_ = lean_box(v___x_2564_);
lean_inc_n(v_toBind_2553_, 2);
lean_inc_ref(v_inst_2551_);
lean_inc(v_asyncMode_2561_);
lean_inc_ref(v_env_2558_);
lean_inc_ref(v_toEnvExtension_2560_);
v___f_2566_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_2566_, 0, v___x_2550_);
lean_closure_set(v___f_2566_, 1, v_toEnvExtension_2560_);
lean_closure_set(v___f_2566_, 2, v_env_2558_);
lean_closure_set(v___f_2566_, 3, v_asyncMode_2561_);
lean_closure_set(v___f_2566_, 4, v___x_2563_);
lean_closure_set(v___f_2566_, 5, v___x_2565_);
lean_closure_set(v___f_2566_, 6, v_inst_2551_);
lean_closure_set(v___f_2566_, 7, v___f_2552_);
lean_closure_set(v___f_2566_, 8, v_toBind_2553_);
lean_closure_set(v___f_2566_, 9, v___f_2554_);
v___x_2567_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2555_, v___x_2559_, v_env_2558_, v_asyncMode_2561_, v___x_2563_, v___x_2564_);
v___x_2568_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_2551_, v___f_2556_, v_found_2562_, v___x_2567_);
v___x_2569_ = lean_apply_4(v_toBind_2553_, lean_box(0), lean_box(0), v___x_2568_, v___f_2557_);
v___x_2570_ = lean_apply_4(v_toBind_2553_, lean_box(0), lean_box(0), v___x_2569_, v___f_2566_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___redArg(lean_object* v_inst_2573_, lean_object* v_inst_2574_){
_start:
{
lean_object* v_toApplicative_2575_; lean_object* v_toBind_2576_; lean_object* v_getEnv_2577_; lean_object* v_toPure_2578_; lean_object* v___f_2579_; lean_object* v___f_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___f_2583_; lean_object* v___f_2584_; lean_object* v___f_2585_; lean_object* v___f_2586_; lean_object* v___f_2587_; lean_object* v___f_2588_; lean_object* v___f_2589_; lean_object* v___x_2590_; 
v_toApplicative_2575_ = lean_ctor_get(v_inst_2573_, 0);
v_toBind_2576_ = lean_ctor_get(v_inst_2573_, 1);
lean_inc_n(v_toBind_2576_, 3);
v_getEnv_2577_ = lean_ctor_get(v_inst_2574_, 0);
lean_inc(v_getEnv_2577_);
lean_dec_ref(v_inst_2574_);
v_toPure_2578_ = lean_ctor_get(v_toApplicative_2575_, 1);
v___f_2579_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__0));
v___f_2580_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___closed__1));
v___x_2581_ = lean_box(1);
v___x_2582_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
lean_inc_n(v_toPure_2578_, 5);
v___f_2583_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2583_, 0, v_toPure_2578_);
v___f_2584_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__3___boxed), 4, 1);
lean_closure_set(v___f_2584_, 0, v_toPure_2578_);
v___f_2585_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__2), 4, 1);
lean_closure_set(v___f_2585_, 0, v_toPure_2578_);
v___f_2586_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2586_, 0, v_toPure_2578_);
lean_inc_ref(v_inst_2573_);
v___f_2587_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5), 7, 4);
lean_closure_set(v___f_2587_, 0, v_inst_2573_);
lean_closure_set(v___f_2587_, 1, v___f_2585_);
lean_closure_set(v___f_2587_, 2, v_toBind_2576_);
lean_closure_set(v___f_2587_, 3, v___f_2586_);
v___f_2588_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__4), 4, 3);
lean_closure_set(v___f_2588_, 0, v_toPure_2578_);
lean_closure_set(v___f_2588_, 1, v___f_2580_);
lean_closure_set(v___f_2588_, 2, v___f_2579_);
v___f_2589_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__7), 9, 8);
lean_closure_set(v___f_2589_, 0, v___x_2582_);
lean_closure_set(v___f_2589_, 1, v_inst_2573_);
lean_closure_set(v___f_2589_, 2, v___f_2587_);
lean_closure_set(v___f_2589_, 3, v_toBind_2576_);
lean_closure_set(v___f_2589_, 4, v___f_2588_);
lean_closure_set(v___f_2589_, 5, v___x_2581_);
lean_closure_set(v___f_2589_, 6, v___f_2584_);
lean_closure_set(v___f_2589_, 7, v___f_2583_);
v___x_2590_ = lean_apply_4(v_toBind_2576_, lean_box(0), lean_box(0), v_getEnv_2577_, v___f_2589_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags(lean_object* v_m_2591_, lean_object* v_inst_2592_, lean_object* v_inst_2593_){
_start:
{
lean_object* v___x_2594_; 
v___x_2594_ = l_Lean_Parser_Tactic_Doc_allTags___redArg(v_inst_2592_, v_inst_2593_);
return v___x_2594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__0(lean_object* v_arr_2595_, lean_object* v_k_2596_, lean_object* v_v_2597_){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2598_, 0, v_k_2596_);
lean_ctor_set(v___x_2598_, 1, v_v_2597_);
v___x_2599_ = lean_array_push(v_arr_2595_, v___x_2598_);
return v___x_2599_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1(lean_object* v_x1_2600_, lean_object* v_x2_2601_){
_start:
{
lean_object* v_fst_2602_; lean_object* v_fst_2603_; uint8_t v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; uint8_t v___x_2607_; 
v_fst_2602_ = lean_ctor_get(v_x1_2600_, 0);
lean_inc(v_fst_2602_);
lean_dec_ref(v_x1_2600_);
v_fst_2603_ = lean_ctor_get(v_x2_2601_, 0);
lean_inc(v_fst_2603_);
lean_dec_ref(v_x2_2601_);
v___x_2604_ = 1;
v___x_2605_ = l_Lean_Name_toString(v_fst_2602_, v___x_2604_);
v___x_2606_ = l_Lean_Name_toString(v_fst_2603_, v___x_2604_);
v___x_2607_ = lean_string_dec_lt(v___x_2605_, v___x_2606_);
lean_dec_ref(v___x_2606_);
lean_dec_ref(v___x_2605_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1___boxed(lean_object* v_x1_2608_, lean_object* v_x2_2609_){
_start:
{
uint8_t v_res_2610_; lean_object* v_r_2611_; 
v_res_2610_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__1(v_x1_2608_, v_x2_2609_);
v_r_2611_ = lean_box(v_res_2610_);
return v_r_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__3(lean_object* v_toPure_2612_, lean_object* v_a_2613_, lean_object* v_b_2614_, lean_object* v_c_2615_){
_start:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2616_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_a_2613_, v_b_2614_, v_c_2615_);
v___x_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
v___x_2618_ = lean_apply_2(v_toPure_2612_, lean_box(0), v___x_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__2(lean_object* v_toPure_2619_, lean_object* v_a_2620_, lean_object* v_x_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v_fst_2623_; lean_object* v_snd_2624_; lean_object* v_found_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v_fst_2623_ = lean_ctor_get(v_a_2620_, 0);
lean_inc(v_fst_2623_);
v_snd_2624_ = lean_ctor_get(v_a_2620_, 1);
lean_inc(v_snd_2624_);
lean_dec_ref(v_a_2620_);
v_found_2625_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2623_, v_snd_2624_, v___y_2622_);
v___x_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2626_, 0, v_found_2625_);
v___x_2627_ = lean_apply_2(v_toPure_2619_, lean_box(0), v___x_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__6(lean_object* v_toPure_2628_, lean_object* v___f_2629_, lean_object* v___f_2630_, lean_object* v_____s_2631_){
_start:
{
lean_object* v___y_2633_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v_arr_2638_; lean_object* v___x_2639_; lean_object* v___y_2641_; lean_object* v___y_2642_; uint8_t v___x_2644_; 
v___x_2636_ = lean_unsigned_to_nat(0u);
v___x_2637_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_));
v_arr_2638_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_2629_, v___x_2637_, v_____s_2631_);
v___x_2639_ = lean_array_get_size(v_arr_2638_);
v___x_2644_ = lean_nat_dec_eq(v___x_2639_, v___x_2636_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___y_2648_; uint8_t v___x_2650_; 
v___x_2645_ = lean_unsigned_to_nat(1u);
v___x_2646_ = lean_nat_sub(v___x_2639_, v___x_2645_);
v___x_2650_ = lean_nat_dec_le(v___x_2636_, v___x_2646_);
if (v___x_2650_ == 0)
{
lean_inc(v___x_2646_);
v___y_2648_ = v___x_2646_;
goto v___jp_2647_;
}
else
{
v___y_2648_ = v___x_2636_;
goto v___jp_2647_;
}
v___jp_2647_:
{
uint8_t v___x_2649_; 
v___x_2649_ = lean_nat_dec_le(v___y_2648_, v___x_2646_);
if (v___x_2649_ == 0)
{
lean_dec(v___x_2646_);
lean_inc(v___y_2648_);
v___y_2641_ = v___y_2648_;
v___y_2642_ = v___y_2648_;
goto v___jp_2640_;
}
else
{
v___y_2641_ = v___y_2648_;
v___y_2642_ = v___x_2646_;
goto v___jp_2640_;
}
}
}
else
{
lean_dec_ref(v___f_2630_);
v___y_2633_ = v_arr_2638_;
goto v___jp_2632_;
}
v___jp_2632_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2634_ = lean_array_to_list(v___y_2633_);
v___x_2635_ = lean_apply_2(v_toPure_2628_, lean_box(0), v___x_2634_);
return v___x_2635_;
}
v___jp_2640_:
{
lean_object* v___x_2643_; 
v___x_2643_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_2630_, v___x_2639_, v_arr_2638_, v___y_2641_, v___y_2642_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2642_);
v___y_2633_ = v___x_2643_;
goto v___jp_2632_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__5(lean_object* v___x_2651_, lean_object* v_inst_2652_, lean_object* v___f_2653_, lean_object* v_toBind_2654_, lean_object* v___f_2655_, lean_object* v___x_2656_, lean_object* v___f_2657_, lean_object* v___f_2658_, lean_object* v_env_2659_){
_start:
{
lean_object* v___x_2660_; lean_object* v_toEnvExtension_2661_; lean_object* v_asyncMode_2662_; lean_object* v_found_2663_; lean_object* v___x_2664_; uint8_t v___x_2665_; lean_object* v___x_2666_; lean_object* v___f_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2660_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2661_ = lean_ctor_get(v___x_2660_, 0);
v_asyncMode_2662_ = lean_ctor_get(v_toEnvExtension_2661_, 2);
v_found_2663_ = lean_box(1);
v___x_2664_ = lean_box(0);
v___x_2665_ = 0;
v___x_2666_ = lean_box(v___x_2665_);
lean_inc_n(v_toBind_2654_, 2);
lean_inc_ref(v_inst_2652_);
lean_inc(v_asyncMode_2662_);
lean_inc_ref(v_env_2659_);
lean_inc_ref(v_toEnvExtension_2661_);
v___f_2667_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_2667_, 0, v___x_2651_);
lean_closure_set(v___f_2667_, 1, v_toEnvExtension_2661_);
lean_closure_set(v___f_2667_, 2, v_env_2659_);
lean_closure_set(v___f_2667_, 3, v_asyncMode_2662_);
lean_closure_set(v___f_2667_, 4, v___x_2664_);
lean_closure_set(v___f_2667_, 5, v___x_2666_);
lean_closure_set(v___f_2667_, 6, v_inst_2652_);
lean_closure_set(v___f_2667_, 7, v___f_2653_);
lean_closure_set(v___f_2667_, 8, v_toBind_2654_);
lean_closure_set(v___f_2667_, 9, v___f_2655_);
v___x_2668_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2656_, v___x_2660_, v_env_2659_, v_asyncMode_2662_, v___x_2664_, v___x_2665_);
v___x_2669_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_2652_, v___f_2657_, v_found_2663_, v___x_2668_);
v___x_2670_ = lean_apply_4(v_toBind_2654_, lean_box(0), lean_box(0), v___x_2669_, v___f_2658_);
v___x_2671_ = lean_apply_4(v_toBind_2654_, lean_box(0), lean_box(0), v___x_2670_, v___f_2667_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg(lean_object* v_inst_2674_, lean_object* v_inst_2675_){
_start:
{
lean_object* v_toApplicative_2676_; lean_object* v_toBind_2677_; lean_object* v_getEnv_2678_; lean_object* v_toPure_2679_; lean_object* v___f_2680_; lean_object* v___f_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___f_2684_; lean_object* v___f_2685_; lean_object* v___f_2686_; lean_object* v___f_2687_; lean_object* v___f_2688_; lean_object* v___f_2689_; lean_object* v___f_2690_; lean_object* v___x_2691_; 
v_toApplicative_2676_ = lean_ctor_get(v_inst_2674_, 0);
v_toBind_2677_ = lean_ctor_get(v_inst_2674_, 1);
lean_inc_n(v_toBind_2677_, 3);
v_getEnv_2678_ = lean_ctor_get(v_inst_2675_, 0);
lean_inc(v_getEnv_2678_);
lean_dec_ref(v_inst_2675_);
v_toPure_2679_ = lean_ctor_get(v_toApplicative_2676_, 1);
v___f_2680_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__0));
v___f_2681_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___closed__1));
v___x_2682_ = lean_box(1);
v___x_2683_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
lean_inc_n(v_toPure_2679_, 5);
v___f_2684_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2684_, 0, v_toPure_2679_);
v___f_2685_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__3), 4, 1);
lean_closure_set(v___f_2685_, 0, v_toPure_2679_);
v___f_2686_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__2), 4, 1);
lean_closure_set(v___f_2686_, 0, v_toPure_2679_);
v___f_2687_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_aliases___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2687_, 0, v_toPure_2679_);
lean_inc_ref(v_inst_2674_);
v___f_2688_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTags___redArg___lam__5), 7, 4);
lean_closure_set(v___f_2688_, 0, v_inst_2674_);
lean_closure_set(v___f_2688_, 1, v___f_2686_);
lean_closure_set(v___f_2688_, 2, v_toBind_2677_);
lean_closure_set(v___f_2688_, 3, v___f_2687_);
v___f_2689_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__6), 4, 3);
lean_closure_set(v___f_2689_, 0, v_toPure_2679_);
lean_closure_set(v___f_2689_, 1, v___f_2680_);
lean_closure_set(v___f_2689_, 2, v___f_2681_);
v___f_2690_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg___lam__5), 9, 8);
lean_closure_set(v___f_2690_, 0, v___x_2683_);
lean_closure_set(v___f_2690_, 1, v_inst_2674_);
lean_closure_set(v___f_2690_, 2, v___f_2688_);
lean_closure_set(v___f_2690_, 3, v_toBind_2677_);
lean_closure_set(v___f_2690_, 4, v___f_2689_);
lean_closure_set(v___f_2690_, 5, v___x_2682_);
lean_closure_set(v___f_2690_, 6, v___f_2685_);
lean_closure_set(v___f_2690_, 7, v___f_2684_);
v___x_2691_ = lean_apply_4(v_toBind_2677_, lean_box(0), lean_box(0), v_getEnv_2678_, v___f_2690_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTagsWithInfo(lean_object* v_m_2692_, lean_object* v_inst_2693_, lean_object* v_inst_2694_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = l_Lean_Parser_Tactic_Doc_allTagsWithInfo___redArg(v_inst_2693_, v_inst_2694_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(lean_object* v_a_2696_, lean_object* v_init_2697_, lean_object* v_x_2698_){
_start:
{
if (lean_obj_tag(v_x_2698_) == 0)
{
lean_object* v_k_2699_; lean_object* v_l_2700_; lean_object* v_r_2701_; lean_object* v___x_2702_; lean_object* v_a_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; 
v_k_2699_ = lean_ctor_get(v_x_2698_, 1);
v_l_2700_ = lean_ctor_get(v_x_2698_, 3);
v_r_2701_ = lean_ctor_get(v_x_2698_, 4);
lean_inc_n(v_a_2696_, 2);
v___x_2702_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(v_a_2696_, v_init_2697_, v_l_2700_);
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref(v___x_2702_);
lean_inc(v_k_2699_);
v___x_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2704_, 0, v_a_2696_);
lean_ctor_set(v___x_2704_, 1, v_k_2699_);
v___x_2705_ = lean_array_push(v_a_2703_, v___x_2704_);
v_init_2697_ = v___x_2705_;
v_x_2698_ = v_r_2701_;
goto _start;
}
else
{
lean_object* v___x_2707_; 
lean_dec(v_a_2696_);
v___x_2707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2707_, 0, v_init_2697_);
return v___x_2707_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1___boxed(lean_object* v_a_2708_, lean_object* v_init_2709_, lean_object* v_x_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(v_a_2708_, v_init_2709_, v_x_2710_);
lean_dec(v_x_2710_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(lean_object* v_init_2712_, lean_object* v_x_2713_){
_start:
{
if (lean_obj_tag(v_x_2713_) == 0)
{
lean_object* v_k_2714_; lean_object* v_v_2715_; lean_object* v_l_2716_; lean_object* v_r_2717_; lean_object* v___x_2718_; lean_object* v_a_2719_; lean_object* v___x_2720_; lean_object* v_a_2721_; 
v_k_2714_ = lean_ctor_get(v_x_2713_, 1);
lean_inc(v_k_2714_);
v_v_2715_ = lean_ctor_get(v_x_2713_, 2);
lean_inc(v_v_2715_);
v_l_2716_ = lean_ctor_get(v_x_2713_, 3);
lean_inc(v_l_2716_);
v_r_2717_ = lean_ctor_get(v_x_2713_, 4);
lean_inc(v_r_2717_);
lean_dec_ref_known(v_x_2713_, 5);
v___x_2718_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(v_init_2712_, v_l_2716_);
v_a_2719_ = lean_ctor_get(v___x_2718_, 0);
lean_inc(v_a_2719_);
lean_dec_ref(v___x_2718_);
v___x_2720_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__1(v_k_2714_, v_a_2719_, v_v_2715_);
lean_dec(v_v_2715_);
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
lean_inc(v_a_2721_);
lean_dec_ref(v___x_2720_);
v_init_2712_ = v_a_2721_;
v_x_2713_ = v_r_2717_;
goto _start;
}
else
{
lean_object* v___x_2723_; 
v___x_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2723_, 0, v_init_2712_);
return v___x_2723_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object* v_tags_2724_){
_start:
{
lean_object* v_exported_2725_; lean_object* v___x_2726_; lean_object* v_a_2727_; 
v_exported_2725_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_2726_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(v_exported_2725_, v_tags_2724_);
v_a_2727_ = lean_ctor_get(v___x_2726_, 0);
lean_inc(v_a_2727_);
lean_dec_ref(v___x_2726_);
return v_a_2727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object* v_x_2728_, lean_object* v_s_2729_){
_start:
{
lean_object* v_exported_2730_; lean_object* v___x_2731_; lean_object* v_a_2732_; lean_object* v___x_2733_; 
v_exported_2730_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_));
v___x_2731_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__2(v_exported_2730_, v_s_2729_);
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc_n(v_a_2732_, 3);
lean_dec_ref(v___x_2731_);
v___x_2733_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2733_, 0, v_a_2732_);
lean_ctor_set(v___x_2733_, 1, v_a_2732_);
lean_ctor_set(v___x_2733_, 2, v_a_2732_);
return v___x_2733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object* v_x_2734_, lean_object* v_s_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(v_x_2734_, v_s_2735_);
lean_dec_ref(v_x_2734_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(lean_object* v_t_2737_, lean_object* v_k_2738_, lean_object* v_fallback_2739_){
_start:
{
if (lean_obj_tag(v_t_2737_) == 0)
{
lean_object* v_k_2740_; lean_object* v_v_2741_; lean_object* v_l_2742_; lean_object* v_r_2743_; uint8_t v___x_2744_; 
v_k_2740_ = lean_ctor_get(v_t_2737_, 1);
v_v_2741_ = lean_ctor_get(v_t_2737_, 2);
v_l_2742_ = lean_ctor_get(v_t_2737_, 3);
v_r_2743_ = lean_ctor_get(v_t_2737_, 4);
v___x_2744_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2738_, v_k_2740_);
switch(v___x_2744_)
{
case 0:
{
v_t_2737_ = v_l_2742_;
goto _start;
}
case 1:
{
lean_inc(v_v_2741_);
return v_v_2741_;
}
default: 
{
v_t_2737_ = v_r_2743_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2739_);
return v_fallback_2739_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_t_2747_, lean_object* v_k_2748_, lean_object* v_fallback_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_t_2747_, v_k_2748_, v_fallback_2749_);
lean_dec(v_fallback_2749_);
lean_dec(v_k_2748_);
lean_dec(v_t_2747_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(lean_object* v_tags_2751_, lean_object* v_x_2752_){
_start:
{
lean_object* v_fst_2753_; lean_object* v_snd_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v_fst_2753_ = lean_ctor_get(v_x_2752_, 0);
lean_inc(v_fst_2753_);
v_snd_2754_ = lean_ctor_get(v_x_2752_, 1);
lean_inc(v_snd_2754_);
lean_dec_ref(v_x_2752_);
v___x_2755_ = l_Lean_NameSet_empty;
v___x_2756_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_tags_2751_, v_fst_2753_, v___x_2755_);
v___x_2757_ = l_Lean_NameSet_insert(v___x_2756_, v_snd_2754_);
v___x_2758_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2753_, v___x_2757_, v_tags_2751_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2783_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_));
v___x_2784_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2____boxed(lean_object* v_a_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_();
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b4_2787_, lean_object* v_t_2788_, lean_object* v_k_2789_, lean_object* v_fallback_2790_){
_start:
{
lean_object* v___x_2791_; 
v___x_2791_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_t_2788_, v_k_2789_, v_fallback_2790_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b4_2792_, lean_object* v_t_2793_, lean_object* v_k_2794_, lean_object* v_fallback_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0(v_00_u03b4_2792_, v_t_2793_, v_k_2794_, v_fallback_2795_);
lean_dec(v_fallback_2795_);
lean_dec(v_k_2794_);
lean_dec(v_t_2793_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(lean_object* v_a_2797_, lean_object* v_a_2798_){
_start:
{
if (lean_obj_tag(v_a_2797_) == 0)
{
lean_object* v___x_2799_; 
v___x_2799_ = l_List_reverse___redArg(v_a_2798_);
return v___x_2799_;
}
else
{
lean_object* v_head_2800_; lean_object* v_tail_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2813_; 
v_head_2800_ = lean_ctor_get(v_a_2797_, 0);
v_tail_2801_ = lean_ctor_get(v_a_2797_, 1);
v_isSharedCheck_2813_ = !lean_is_exclusive(v_a_2797_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2803_ = v_a_2797_;
v_isShared_2804_ = v_isSharedCheck_2813_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_tail_2801_);
lean_inc(v_head_2800_);
lean_dec(v_a_2797_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2813_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2810_; 
v___x_2805_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_2806_ = l_Lean_MessageData_ofName(v_head_2800_);
v___x_2807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2805_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
v___x_2808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
lean_ctor_set(v___x_2808_, 1, v___x_2805_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 1, v_a_2798_);
lean_ctor_set(v___x_2803_, 0, v___x_2808_);
v___x_2810_ = v___x_2803_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2808_);
lean_ctor_set(v_reuseFailAlloc_2812_, 1, v_a_2798_);
v___x_2810_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
v_a_2797_ = v_tail_2801_;
v_a_2798_ = v___x_2810_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___lam__0(lean_object* v_addEntryFn_2814_, lean_object* v___x_2815_, lean_object* v_s_2816_){
_start:
{
lean_object* v_importedEntries_2817_; lean_object* v_state_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2826_; 
v_importedEntries_2817_ = lean_ctor_get(v_s_2816_, 0);
v_state_2818_ = lean_ctor_get(v_s_2816_, 1);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_s_2816_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2820_ = v_s_2816_;
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_state_2818_);
lean_inc(v_importedEntries_2817_);
lean_dec(v_s_2816_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v_state_2822_; lean_object* v___x_2824_; 
v_state_2822_ = lean_apply_2(v_addEntryFn_2814_, v_state_2818_, v___x_2815_);
if (v_isShared_2821_ == 0)
{
lean_ctor_set(v___x_2820_, 1, v_state_2822_);
v___x_2824_ = v___x_2820_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_importedEntries_2817_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v_state_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_as_2827_, lean_object* v_k_2828_, lean_object* v_x_2829_, lean_object* v_x_2830_){
_start:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v_m_2833_; lean_object* v_a_2834_; uint8_t v___x_2835_; 
v___x_2831_ = lean_nat_add(v_x_2829_, v_x_2830_);
v___x_2832_ = lean_unsigned_to_nat(1u);
v_m_2833_ = lean_nat_shiftr(v___x_2831_, v___x_2832_);
lean_dec(v___x_2831_);
v_a_2834_ = lean_array_fget_borrowed(v_as_2827_, v_m_2833_);
v___x_2835_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_2834_, v_k_2828_);
if (v___x_2835_ == 0)
{
uint8_t v___x_2836_; 
lean_dec(v_x_2830_);
v___x_2836_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_2828_, v_a_2834_);
if (v___x_2836_ == 0)
{
lean_object* v___x_2837_; 
lean_dec(v_m_2833_);
lean_dec(v_x_2829_);
lean_inc(v_a_2834_);
v___x_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2837_, 0, v_a_2834_);
return v___x_2837_;
}
else
{
lean_object* v___x_2838_; uint8_t v___x_2839_; 
v___x_2838_ = lean_unsigned_to_nat(0u);
v___x_2839_ = lean_nat_dec_eq(v_m_2833_, v___x_2838_);
if (v___x_2839_ == 0)
{
lean_object* v___x_2840_; uint8_t v___x_2841_; 
v___x_2840_ = lean_nat_sub(v_m_2833_, v___x_2832_);
lean_dec(v_m_2833_);
v___x_2841_ = lean_nat_dec_lt(v___x_2840_, v_x_2829_);
if (v___x_2841_ == 0)
{
v_x_2830_ = v___x_2840_;
goto _start;
}
else
{
lean_object* v___x_2843_; 
lean_dec(v___x_2840_);
lean_dec(v_x_2829_);
v___x_2843_ = lean_box(0);
return v___x_2843_;
}
}
else
{
lean_object* v___x_2844_; 
lean_dec(v_m_2833_);
lean_dec(v_x_2829_);
v___x_2844_ = lean_box(0);
return v___x_2844_;
}
}
}
else
{
lean_object* v___x_2845_; uint8_t v___x_2846_; 
lean_dec(v_x_2829_);
v___x_2845_ = lean_nat_add(v_m_2833_, v___x_2832_);
lean_dec(v_m_2833_);
v___x_2846_ = lean_nat_dec_le(v___x_2845_, v_x_2830_);
if (v___x_2846_ == 0)
{
lean_object* v___x_2847_; 
lean_dec(v___x_2845_);
lean_dec(v_x_2830_);
v___x_2847_ = lean_box(0);
return v___x_2847_;
}
else
{
v_x_2829_ = v___x_2845_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_as_2849_, lean_object* v_k_2850_, lean_object* v_x_2851_, lean_object* v_x_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_2849_, v_k_2850_, v_x_2851_, v_x_2852_);
lean_dec_ref(v_k_2850_);
lean_dec_ref(v_as_2849_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(lean_object* v_tag_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v_env_2862_; lean_object* v___x_2863_; 
v___x_2857_ = lean_box(1);
v___x_2858_ = lean_st_ref_get(v___y_2855_);
v_env_2862_ = lean_ctor_get(v___x_2858_, 0);
lean_inc_ref(v_env_2862_);
lean_dec(v___x_2858_);
v___x_2863_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2862_, v_tag_2854_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v___x_2864_; lean_object* v_toEnvExtension_2865_; lean_object* v_asyncMode_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2864_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_2865_ = lean_ctor_get(v___x_2864_, 0);
v_asyncMode_2866_ = lean_ctor_get(v_toEnvExtension_2865_, 2);
v___x_2867_ = lean_box(0);
v___x_2868_ = 0;
v___x_2869_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2857_, v___x_2864_, v_env_2862_, v_asyncMode_2866_, v___x_2867_, v___x_2868_);
v___x_2870_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2869_, v_tag_2854_);
lean_dec(v_tag_2854_);
lean_dec(v___x_2869_);
v___x_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
return v___x_2871_;
}
else
{
lean_object* v_val_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2900_; 
v_val_2872_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2874_ = v___x_2863_;
v_isShared_2875_ = v_isSharedCheck_2900_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_val_2872_);
lean_dec(v___x_2863_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2900_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; uint8_t v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; uint8_t v___x_2881_; 
v___x_2876_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v___x_2877_ = 0;
v___x_2878_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2857_, v___x_2876_, v_env_2862_, v_val_2872_, v___x_2877_);
lean_dec(v_val_2872_);
lean_dec_ref(v_env_2862_);
v___x_2879_ = lean_unsigned_to_nat(0u);
v___x_2880_ = lean_array_get_size(v___x_2878_);
v___x_2881_ = lean_nat_dec_lt(v___x_2879_, v___x_2880_);
if (v___x_2881_ == 0)
{
lean_dec_ref(v___x_2878_);
lean_del_object(v___x_2874_);
lean_dec(v_tag_2854_);
goto v___jp_2859_;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; uint8_t v___x_2884_; 
v___x_2882_ = lean_unsigned_to_nat(1u);
v___x_2883_ = lean_nat_sub(v___x_2880_, v___x_2882_);
v___x_2884_ = lean_nat_dec_le(v___x_2879_, v___x_2883_);
if (v___x_2884_ == 0)
{
lean_dec(v___x_2883_);
lean_dec_ref(v___x_2878_);
lean_del_object(v___x_2874_);
lean_dec(v_tag_2854_);
goto v___jp_2859_;
}
else
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2885_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_tagInfo___redArg___lam__1___closed__0));
v___x_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2886_, 0, v_tag_2854_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(v___x_2878_, v___x_2886_, v___x_2879_, v___x_2883_);
lean_dec_ref_known(v___x_2886_, 2);
lean_dec_ref(v___x_2878_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_del_object(v___x_2874_);
goto v___jp_2859_;
}
else
{
lean_object* v_val_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2899_; 
v_val_2888_ = lean_ctor_get(v___x_2887_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2890_ = v___x_2887_;
v_isShared_2891_ = v_isSharedCheck_2899_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_val_2888_);
lean_dec(v___x_2887_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2899_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v_snd_2892_; lean_object* v___x_2894_; 
v_snd_2892_ = lean_ctor_get(v_val_2888_, 1);
lean_inc(v_snd_2892_);
lean_dec(v_val_2888_);
if (v_isShared_2891_ == 0)
{
lean_ctor_set(v___x_2890_, 0, v_snd_2892_);
v___x_2894_ = v___x_2890_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_snd_2892_);
v___x_2894_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
lean_object* v___x_2896_; 
if (v_isShared_2875_ == 0)
{
lean_ctor_set_tag(v___x_2874_, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2894_);
v___x_2896_ = v___x_2874_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v___x_2894_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
}
}
}
}
v___jp_2859_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2860_ = lean_box(0);
v___x_2861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
return v___x_2861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_tag_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v_res_2904_; 
v_res_2904_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(v_tag_2901_, v___y_2902_);
lean_dec(v___y_2902_);
return v_res_2904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_as_2905_, size_t v_sz_2906_, size_t v_i_2907_, lean_object* v_b_2908_){
_start:
{
uint8_t v___x_2910_; 
v___x_2910_ = lean_usize_dec_lt(v_i_2907_, v_sz_2906_);
if (v___x_2910_ == 0)
{
lean_object* v___x_2911_; 
v___x_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_b_2908_);
return v___x_2911_;
}
else
{
lean_object* v_a_2912_; lean_object* v_fst_2913_; lean_object* v_found_2914_; size_t v___x_2915_; size_t v___x_2916_; 
v_a_2912_ = lean_array_uget_borrowed(v_as_2905_, v_i_2907_);
v_fst_2913_ = lean_ctor_get(v_a_2912_, 0);
lean_inc(v_fst_2913_);
v_found_2914_ = l_Lean_NameSet_insert(v_b_2908_, v_fst_2913_);
v___x_2915_ = ((size_t)1ULL);
v___x_2916_ = lean_usize_add(v_i_2907_, v___x_2915_);
v_i_2907_ = v___x_2916_;
v_b_2908_ = v_found_2914_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_as_2918_, lean_object* v_sz_2919_, lean_object* v_i_2920_, lean_object* v_b_2921_, lean_object* v___y_2922_){
_start:
{
size_t v_sz_boxed_2923_; size_t v_i_boxed_2924_; lean_object* v_res_2925_; 
v_sz_boxed_2923_ = lean_unbox_usize(v_sz_2919_);
lean_dec(v_sz_2919_);
v_i_boxed_2924_ = lean_unbox_usize(v_i_2920_);
lean_dec(v_i_2920_);
v_res_2925_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(v_as_2918_, v_sz_boxed_2923_, v_i_boxed_2924_, v_b_2921_);
lean_dec_ref(v_as_2918_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(lean_object* v_as_2926_, size_t v_sz_2927_, size_t v_i_2928_, lean_object* v_b_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_){
_start:
{
uint8_t v___x_2933_; 
v___x_2933_ = lean_usize_dec_lt(v_i_2928_, v_sz_2927_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2934_, 0, v_b_2929_);
return v___x_2934_;
}
else
{
lean_object* v_a_2935_; size_t v_sz_2936_; size_t v___x_2937_; lean_object* v___x_2938_; 
v_a_2935_ = lean_array_uget_borrowed(v_as_2926_, v_i_2928_);
v_sz_2936_ = lean_array_size(v_a_2935_);
v___x_2937_ = ((size_t)0ULL);
v___x_2938_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(v_a_2935_, v_sz_2936_, v___x_2937_, v_b_2929_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; size_t v___x_2940_; size_t v___x_2941_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref_known(v___x_2938_, 1);
v___x_2940_ = ((size_t)1ULL);
v___x_2941_ = lean_usize_add(v_i_2928_, v___x_2940_);
v_i_2928_ = v___x_2941_;
v_b_2929_ = v_a_2939_;
goto _start;
}
else
{
return v___x_2938_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object* v_as_2943_, lean_object* v_sz_2944_, lean_object* v_i_2945_, lean_object* v_b_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_){
_start:
{
size_t v_sz_boxed_2950_; size_t v_i_boxed_2951_; lean_object* v_res_2952_; 
v_sz_boxed_2950_ = lean_unbox_usize(v_sz_2944_);
lean_dec(v_sz_2944_);
v_i_boxed_2951_ = lean_unbox_usize(v_i_2945_);
lean_dec(v_i_2945_);
v_res_2952_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(v_as_2943_, v_sz_boxed_2950_, v_i_boxed_2951_, v_b_2946_, v___y_2947_, v___y_2948_);
lean_dec(v___y_2948_);
lean_dec_ref(v___y_2947_);
lean_dec_ref(v_as_2943_);
return v_res_2952_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(uint8_t v___x_2953_, lean_object* v_x1_2954_, lean_object* v_x2_2955_){
_start:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; 
v___x_2956_ = l_Lean_Name_toString(v_x1_2954_, v___x_2953_);
v___x_2957_ = l_Lean_Name_toString(v_x2_2955_, v___x_2953_);
v___x_2958_ = lean_string_dec_lt(v___x_2956_, v___x_2957_);
lean_dec_ref(v___x_2957_);
lean_dec_ref(v___x_2956_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0___boxed(lean_object* v___x_2959_, lean_object* v_x1_2960_, lean_object* v_x2_2961_){
_start:
{
uint8_t v___x_6897__boxed_2962_; uint8_t v_res_2963_; lean_object* v_r_2964_; 
v___x_6897__boxed_2962_ = lean_unbox(v___x_2959_);
v_res_2963_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_6897__boxed_2962_, v_x1_2960_, v_x2_2961_);
v_r_2964_ = lean_box(v_res_2963_);
return v_r_2964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(lean_object* v_hi_2965_, lean_object* v_pivot_2966_, lean_object* v_as_2967_, lean_object* v_i_2968_, lean_object* v_k_2969_){
_start:
{
uint8_t v___x_2970_; 
v___x_2970_ = lean_nat_dec_lt(v_k_2969_, v_hi_2965_);
if (v___x_2970_ == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
lean_dec(v_k_2969_);
lean_dec(v_pivot_2966_);
v___x_2971_ = lean_array_fswap(v_as_2967_, v_i_2968_, v_hi_2965_);
v___x_2972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2972_, 0, v_i_2968_);
lean_ctor_set(v___x_2972_, 1, v___x_2971_);
return v___x_2972_;
}
else
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; uint8_t v___x_2976_; 
v___x_2973_ = lean_array_fget_borrowed(v_as_2967_, v_k_2969_);
lean_inc(v___x_2973_);
v___x_2974_ = l_Lean_Name_toString(v___x_2973_, v___x_2970_);
lean_inc(v_pivot_2966_);
v___x_2975_ = l_Lean_Name_toString(v_pivot_2966_, v___x_2970_);
v___x_2976_ = lean_string_dec_lt(v___x_2974_, v___x_2975_);
lean_dec_ref(v___x_2975_);
lean_dec_ref(v___x_2974_);
if (v___x_2976_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2977_ = lean_unsigned_to_nat(1u);
v___x_2978_ = lean_nat_add(v_k_2969_, v___x_2977_);
lean_dec(v_k_2969_);
v_k_2969_ = v___x_2978_;
goto _start;
}
else
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2980_ = lean_array_fswap(v_as_2967_, v_i_2968_, v_k_2969_);
v___x_2981_ = lean_unsigned_to_nat(1u);
v___x_2982_ = lean_nat_add(v_i_2968_, v___x_2981_);
lean_dec(v_i_2968_);
v___x_2983_ = lean_nat_add(v_k_2969_, v___x_2981_);
lean_dec(v_k_2969_);
v_as_2967_ = v___x_2980_;
v_i_2968_ = v___x_2982_;
v_k_2969_ = v___x_2983_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg___boxed(lean_object* v_hi_2985_, lean_object* v_pivot_2986_, lean_object* v_as_2987_, lean_object* v_i_2988_, lean_object* v_k_2989_){
_start:
{
lean_object* v_res_2990_; 
v_res_2990_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(v_hi_2985_, v_pivot_2986_, v_as_2987_, v_i_2988_, v_k_2989_);
lean_dec(v_hi_2985_);
return v_res_2990_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object* v_n_2991_, lean_object* v_as_2992_, lean_object* v_lo_2993_, lean_object* v_hi_2994_){
_start:
{
lean_object* v___y_2996_; uint8_t v___x_3006_; 
v___x_3006_ = lean_nat_dec_lt(v_lo_2993_, v_hi_2994_);
if (v___x_3006_ == 0)
{
lean_dec(v_lo_2993_);
return v_as_2992_;
}
else
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v_mid_3009_; lean_object* v___y_3011_; lean_object* v___y_3017_; lean_object* v___x_3022_; lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3007_ = lean_nat_add(v_lo_2993_, v_hi_2994_);
v___x_3008_ = lean_unsigned_to_nat(1u);
v_mid_3009_ = lean_nat_shiftr(v___x_3007_, v___x_3008_);
lean_dec(v___x_3007_);
v___x_3022_ = lean_array_fget_borrowed(v_as_2992_, v_mid_3009_);
v___x_3023_ = lean_array_fget_borrowed(v_as_2992_, v_lo_2993_);
lean_inc(v___x_3023_);
lean_inc(v___x_3022_);
v___x_3024_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_3006_, v___x_3022_, v___x_3023_);
if (v___x_3024_ == 0)
{
v___y_3017_ = v_as_2992_;
goto v___jp_3016_;
}
else
{
lean_object* v___x_3025_; 
v___x_3025_ = lean_array_fswap(v_as_2992_, v_lo_2993_, v_mid_3009_);
v___y_3017_ = v___x_3025_;
goto v___jp_3016_;
}
v___jp_3010_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; uint8_t v___x_3014_; 
v___x_3012_ = lean_array_fget_borrowed(v___y_3011_, v_mid_3009_);
v___x_3013_ = lean_array_fget_borrowed(v___y_3011_, v_hi_2994_);
lean_inc(v___x_3013_);
lean_inc(v___x_3012_);
v___x_3014_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_3006_, v___x_3012_, v___x_3013_);
if (v___x_3014_ == 0)
{
lean_dec(v_mid_3009_);
v___y_2996_ = v___y_3011_;
goto v___jp_2995_;
}
else
{
lean_object* v___x_3015_; 
v___x_3015_ = lean_array_fswap(v___y_3011_, v_mid_3009_, v_hi_2994_);
lean_dec(v_mid_3009_);
v___y_2996_ = v___x_3015_;
goto v___jp_2995_;
}
}
v___jp_3016_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; 
v___x_3018_ = lean_array_fget_borrowed(v___y_3017_, v_hi_2994_);
v___x_3019_ = lean_array_fget_borrowed(v___y_3017_, v_lo_2993_);
lean_inc(v___x_3019_);
lean_inc(v___x_3018_);
v___x_3020_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___lam__0(v___x_3006_, v___x_3018_, v___x_3019_);
if (v___x_3020_ == 0)
{
v___y_3011_ = v___y_3017_;
goto v___jp_3010_;
}
else
{
lean_object* v___x_3021_; 
v___x_3021_ = lean_array_fswap(v___y_3017_, v_lo_2993_, v_hi_2994_);
v___y_3011_ = v___x_3021_;
goto v___jp_3010_;
}
}
}
v___jp_2995_:
{
lean_object* v_pivot_2997_; lean_object* v___x_2998_; lean_object* v_fst_2999_; lean_object* v_snd_3000_; uint8_t v___x_3001_; 
v_pivot_2997_ = lean_array_fget(v___y_2996_, v_hi_2994_);
lean_inc_n(v_lo_2993_, 2);
v___x_2998_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(v_hi_2994_, v_pivot_2997_, v___y_2996_, v_lo_2993_, v_lo_2993_);
v_fst_2999_ = lean_ctor_get(v___x_2998_, 0);
lean_inc(v_fst_2999_);
v_snd_3000_ = lean_ctor_get(v___x_2998_, 1);
lean_inc(v_snd_3000_);
lean_dec_ref(v___x_2998_);
v___x_3001_ = lean_nat_dec_le(v_hi_2994_, v_fst_2999_);
if (v___x_3001_ == 0)
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3002_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v_n_2991_, v_snd_3000_, v_lo_2993_, v_fst_2999_);
v___x_3003_ = lean_unsigned_to_nat(1u);
v___x_3004_ = lean_nat_add(v_fst_2999_, v___x_3003_);
lean_dec(v_fst_2999_);
v_as_2992_ = v___x_3002_;
v_lo_2993_ = v___x_3004_;
goto _start;
}
else
{
lean_dec(v_fst_2999_);
lean_dec(v_lo_2993_);
return v_snd_3000_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object* v_n_3026_, lean_object* v_as_3027_, lean_object* v_lo_3028_, lean_object* v_hi_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v_n_3026_, v_as_3027_, v_lo_3028_, v_hi_3029_);
lean_dec(v_hi_3029_);
lean_dec(v_n_3026_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(lean_object* v_init_3031_, lean_object* v_x_3032_){
_start:
{
if (lean_obj_tag(v_x_3032_) == 0)
{
lean_object* v_k_3034_; lean_object* v_l_3035_; lean_object* v_r_3036_; lean_object* v___x_3037_; lean_object* v_a_3038_; lean_object* v_a_3039_; lean_object* v___x_3040_; 
v_k_3034_ = lean_ctor_get(v_x_3032_, 1);
lean_inc(v_k_3034_);
v_l_3035_ = lean_ctor_get(v_x_3032_, 3);
lean_inc(v_l_3035_);
v_r_3036_ = lean_ctor_get(v_x_3032_, 4);
lean_inc(v_r_3036_);
lean_dec_ref_known(v_x_3032_, 5);
v___x_3037_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_init_3031_, v_l_3035_);
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_a_3038_);
lean_dec_ref(v___x_3037_);
v_a_3039_ = lean_ctor_get(v_a_3038_, 0);
lean_inc(v_a_3039_);
lean_dec(v_a_3038_);
v___x_3040_ = l_Lean_NameSet_insert(v_a_3039_, v_k_3034_);
v_init_3031_ = v___x_3040_;
v_x_3032_ = v_r_3036_;
goto _start;
}
else
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3042_, 0, v_init_3031_);
v___x_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
return v___x_3043_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg___boxed(lean_object* v_init_3044_, lean_object* v_x_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_init_3044_, v_x_3045_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(lean_object* v_init_3048_, lean_object* v_x_3049_){
_start:
{
if (lean_obj_tag(v_x_3049_) == 0)
{
lean_object* v_k_3050_; lean_object* v_l_3051_; lean_object* v_r_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v_k_3050_ = lean_ctor_get(v_x_3049_, 1);
lean_inc(v_k_3050_);
v_l_3051_ = lean_ctor_get(v_x_3049_, 3);
lean_inc(v_l_3051_);
v_r_3052_ = lean_ctor_get(v_x_3049_, 4);
lean_inc(v_r_3052_);
lean_dec_ref_known(v_x_3049_, 5);
v___x_3053_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(v_init_3048_, v_l_3051_);
v___x_3054_ = lean_array_push(v___x_3053_, v_k_3050_);
v_init_3048_ = v___x_3054_;
v_x_3049_ = v_r_3052_;
goto _start;
}
else
{
return v_init_3048_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v___y_3060_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v_env_3089_; lean_object* v___x_3090_; lean_object* v_toEnvExtension_3091_; lean_object* v_asyncMode_3092_; lean_object* v_found_3093_; lean_object* v___x_3094_; uint8_t v___x_3095_; lean_object* v_a_3097_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v_a_3116_; lean_object* v_a_3117_; 
v___x_3086_ = lean_box(1);
v___x_3087_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
v___x_3088_ = lean_st_ref_get(v___y_3057_);
v_env_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc_ref_n(v_env_3089_, 2);
lean_dec(v___x_3088_);
v___x_3090_ = l_Lean_Parser_Tactic_Doc_knownTacticTagExt;
v_toEnvExtension_3091_ = lean_ctor_get(v___x_3090_, 0);
v_asyncMode_3092_ = lean_ctor_get(v_toEnvExtension_3091_, 2);
v_found_3093_ = l_Lean_NameSet_empty;
v___x_3094_ = lean_box(0);
v___x_3095_ = 0;
v___x_3114_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3086_, v___x_3090_, v_env_3089_, v_asyncMode_3092_, v___x_3094_, v___x_3095_);
v___x_3115_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_found_3093_, v___x_3114_);
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_a_3116_);
lean_dec_ref(v___x_3115_);
v_a_3117_ = lean_ctor_get(v_a_3116_, 0);
lean_inc(v_a_3117_);
lean_dec(v_a_3116_);
v_a_3097_ = v_a_3117_;
goto v___jp_3096_;
v___jp_3059_:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = lean_array_to_list(v___y_3060_);
v___x_3062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
return v___x_3062_;
}
v___jp_3063_:
{
lean_object* v___x_3068_; 
v___x_3068_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v___y_3066_, v___y_3065_, v___y_3064_, v___y_3067_);
lean_dec(v___y_3067_);
lean_dec(v___y_3066_);
v___y_3060_ = v___x_3068_;
goto v___jp_3059_;
}
v___jp_3069_:
{
uint8_t v___x_3074_; 
v___x_3074_ = lean_nat_dec_le(v___y_3073_, v___y_3072_);
if (v___x_3074_ == 0)
{
lean_dec(v___y_3072_);
lean_inc(v___y_3073_);
v___y_3064_ = v___y_3073_;
v___y_3065_ = v___y_3071_;
v___y_3066_ = v___y_3070_;
v___y_3067_ = v___y_3073_;
goto v___jp_3063_;
}
else
{
v___y_3064_ = v___y_3073_;
v___y_3065_ = v___y_3071_;
v___y_3066_ = v___y_3070_;
v___y_3067_ = v___y_3072_;
goto v___jp_3063_;
}
}
v___jp_3075_:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; 
v___x_3078_ = lean_mk_empty_array_with_capacity(v___y_3077_);
lean_dec(v___y_3077_);
v___x_3079_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(v___x_3078_, v___y_3076_);
v___x_3080_ = lean_array_get_size(v___x_3079_);
v___x_3081_ = lean_unsigned_to_nat(0u);
v___x_3082_ = lean_nat_dec_eq(v___x_3080_, v___x_3081_);
if (v___x_3082_ == 0)
{
lean_object* v___x_3083_; lean_object* v___x_3084_; uint8_t v___x_3085_; 
v___x_3083_ = lean_unsigned_to_nat(1u);
v___x_3084_ = lean_nat_sub(v___x_3080_, v___x_3083_);
v___x_3085_ = lean_nat_dec_le(v___x_3081_, v___x_3084_);
if (v___x_3085_ == 0)
{
lean_inc(v___x_3084_);
v___y_3070_ = v___x_3080_;
v___y_3071_ = v___x_3079_;
v___y_3072_ = v___x_3084_;
v___y_3073_ = v___x_3084_;
goto v___jp_3069_;
}
else
{
v___y_3070_ = v___x_3080_;
v___y_3071_ = v___x_3079_;
v___y_3072_ = v___x_3084_;
v___y_3073_ = v___x_3081_;
goto v___jp_3069_;
}
}
else
{
v___y_3060_ = v___x_3079_;
goto v___jp_3059_;
}
}
v___jp_3096_:
{
lean_object* v___x_3098_; lean_object* v_importedEntries_3099_; size_t v_sz_3100_; size_t v___x_3101_; lean_object* v___x_3102_; 
v___x_3098_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3087_, v_toEnvExtension_3091_, v_env_3089_, v_asyncMode_3092_, v___x_3094_, v___x_3095_);
v_importedEntries_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc_ref(v_importedEntries_3099_);
lean_dec(v___x_3098_);
v_sz_3100_ = lean_array_size(v_importedEntries_3099_);
v___x_3101_ = ((size_t)0ULL);
v___x_3102_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__3(v_importedEntries_3099_, v_sz_3100_, v___x_3101_, v_a_3097_, v___y_3056_, v___y_3057_);
lean_dec_ref(v_importedEntries_3099_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3103_);
lean_dec_ref_known(v___x_3102_, 1);
if (lean_obj_tag(v_a_3103_) == 0)
{
lean_object* v_size_3104_; 
v_size_3104_ = lean_ctor_get(v_a_3103_, 0);
lean_inc(v_size_3104_);
v___y_3076_ = v_a_3103_;
v___y_3077_ = v_size_3104_;
goto v___jp_3075_;
}
else
{
lean_object* v___x_3105_; 
v___x_3105_ = lean_unsigned_to_nat(0u);
v___y_3076_ = v_a_3103_;
v___y_3077_ = v___x_3105_;
goto v___jp_3075_;
}
}
else
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
v_a_3106_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3102_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3102_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1___boxed(lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(v___y_3118_, v___y_3119_);
lean_dec(v___y_3119_);
lean_dec_ref(v___y_3118_);
return v_res_3121_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1(void){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__0));
v___x_3124_ = l_Lean_stringToMessageData(v___x_3123_);
return v___x_3124_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3(void){
_start:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__2));
v___x_3127_ = l_Lean_stringToMessageData(v___x_3126_);
return v___x_3127_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5(void){
_start:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3129_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__4));
v___x_3130_ = l_Lean_stringToMessageData(v___x_3129_);
return v___x_3130_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7(void){
_start:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3132_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__6));
v___x_3133_ = l_Lean_stringToMessageData(v___x_3132_);
return v___x_3133_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11(void){
_start:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3139_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__10));
v___x_3140_ = l_Lean_MessageData_ofFormat(v___x_3139_);
return v___x_3140_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14(void){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__13));
v___x_3145_ = l_Lean_MessageData_ofFormat(v___x_3144_);
return v___x_3145_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16(void){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__15));
v___x_3148_ = l_Lean_stringToMessageData(v___x_3147_);
return v___x_3148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(lean_object* v_decl_3149_, uint8_t v___x_3150_, lean_object* v_as_3151_, size_t v_sz_3152_, size_t v_i_3153_, lean_object* v_b_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_){
_start:
{
lean_object* v_a_3159_; uint8_t v___x_3163_; 
v___x_3163_ = lean_usize_dec_lt(v_i_3153_, v_sz_3152_);
if (v___x_3163_ == 0)
{
lean_object* v___x_3164_; 
lean_dec(v_decl_3149_);
v___x_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3164_, 0, v_b_3154_);
return v___x_3164_;
}
else
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v_a_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3165_ = lean_box(0);
v___x_3166_ = lean_box(0);
v___x_3167_ = lean_unsigned_to_nat(0u);
v___x_3168_ = lean_unsigned_to_nat(1u);
v_a_3169_ = lean_array_uget_borrowed(v_as_3151_, v_i_3153_);
v___x_3170_ = l_Lean_TSyntax_getId(v_a_3169_);
lean_inc(v___x_3170_);
v___x_3171_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(v___x_3170_, v___y_3156_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
lean_inc(v_a_3172_);
lean_dec_ref_known(v___x_3171_, 1);
if (lean_obj_tag(v_a_3172_) == 1)
{
lean_object* v___x_3173_; lean_object* v_env_3174_; lean_object* v_nextMacroScope_3175_; lean_object* v_ngen_3176_; lean_object* v_auxDeclNGen_3177_; lean_object* v_traceState_3178_; lean_object* v_recordedDeps_3179_; lean_object* v_messages_3180_; lean_object* v_infoState_3181_; lean_object* v_snapshotTasks_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3203_; 
lean_dec_ref_known(v_a_3172_, 1);
v___x_3173_ = lean_st_ref_take(v___y_3156_);
v_env_3174_ = lean_ctor_get(v___x_3173_, 0);
v_nextMacroScope_3175_ = lean_ctor_get(v___x_3173_, 1);
v_ngen_3176_ = lean_ctor_get(v___x_3173_, 2);
v_auxDeclNGen_3177_ = lean_ctor_get(v___x_3173_, 3);
v_traceState_3178_ = lean_ctor_get(v___x_3173_, 4);
v_recordedDeps_3179_ = lean_ctor_get(v___x_3173_, 6);
v_messages_3180_ = lean_ctor_get(v___x_3173_, 7);
v_infoState_3181_ = lean_ctor_get(v___x_3173_, 8);
v_snapshotTasks_3182_ = lean_ctor_get(v___x_3173_, 9);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3203_ == 0)
{
lean_object* v_unused_3204_; 
v_unused_3204_ = lean_ctor_get(v___x_3173_, 5);
lean_dec(v_unused_3204_);
v___x_3184_ = v___x_3173_;
v_isShared_3185_ = v_isSharedCheck_3203_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_snapshotTasks_3182_);
lean_inc(v_infoState_3181_);
lean_inc(v_messages_3180_);
lean_inc(v_recordedDeps_3179_);
lean_inc(v_traceState_3178_);
lean_inc(v_auxDeclNGen_3177_);
lean_inc(v_ngen_3176_);
lean_inc(v_nextMacroScope_3175_);
lean_inc(v_env_3174_);
lean_dec(v___x_3173_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3203_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___y_3187_; lean_object* v___x_3193_; lean_object* v_toEnvExtension_3194_; lean_object* v_addEntryFn_3195_; lean_object* v_asyncMode_3196_; uint8_t v_logWrites_3197_; lean_object* v___x_3198_; lean_object* v___f_3199_; 
v___x_3193_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_3194_ = lean_ctor_get(v___x_3193_, 0);
v_addEntryFn_3195_ = lean_ctor_get(v___x_3193_, 3);
v_asyncMode_3196_ = lean_ctor_get(v_toEnvExtension_3194_, 2);
v_logWrites_3197_ = lean_ctor_get_uint8(v_toEnvExtension_3194_, sizeof(void*)*6);
lean_inc(v_decl_3149_);
v___x_3198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3198_, 0, v_decl_3149_);
lean_ctor_set(v___x_3198_, 1, v___x_3170_);
lean_inc(v_addEntryFn_3195_);
v___f_3199_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___lam__0), 3, 2);
lean_closure_set(v___f_3199_, 0, v_addEntryFn_3195_);
lean_closure_set(v___f_3199_, 1, v___x_3198_);
if (v_logWrites_3197_ == 0)
{
lean_object* v___x_3200_; 
lean_inc_ref(v_toEnvExtension_3194_);
v___x_3200_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3194_, v_env_3174_, v___f_3199_, v_asyncMode_3196_, v___x_3166_, v___x_3150_);
v___y_3187_ = v___x_3200_;
goto v___jp_3186_;
}
else
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
lean_inc_ref_n(v_toEnvExtension_3194_, 2);
v___x_3201_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3194_, v_env_3174_);
lean_dec_ref(v_env_3174_);
v___x_3202_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3194_, v___x_3201_, v___f_3199_, v_asyncMode_3196_, v___x_3166_, v___x_3150_);
v___y_3187_ = v___x_3202_;
goto v___jp_3186_;
}
v___jp_3186_:
{
lean_object* v___x_3188_; lean_object* v___x_3190_; 
v___x_3188_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1);
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 5, v___x_3188_);
lean_ctor_set(v___x_3184_, 0, v___y_3187_);
v___x_3190_ = v___x_3184_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v___y_3187_);
lean_ctor_set(v_reuseFailAlloc_3192_, 1, v_nextMacroScope_3175_);
lean_ctor_set(v_reuseFailAlloc_3192_, 2, v_ngen_3176_);
lean_ctor_set(v_reuseFailAlloc_3192_, 3, v_auxDeclNGen_3177_);
lean_ctor_set(v_reuseFailAlloc_3192_, 4, v_traceState_3178_);
lean_ctor_set(v_reuseFailAlloc_3192_, 5, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3192_, 6, v_recordedDeps_3179_);
lean_ctor_set(v_reuseFailAlloc_3192_, 7, v_messages_3180_);
lean_ctor_set(v_reuseFailAlloc_3192_, 8, v_infoState_3181_);
lean_ctor_set(v_reuseFailAlloc_3192_, 9, v_snapshotTasks_3182_);
v___x_3190_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3191_; 
v___x_3191_ = lean_st_ref_put(v___y_3156_, v___x_3190_);
v_a_3159_ = v___x_3165_;
goto v___jp_3158_;
}
}
}
}
else
{
lean_object* v___x_3205_; 
lean_dec(v_a_3172_);
v___x_3205_ = l_Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1(v___y_3155_, v___y_3156_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; lean_object* v___y_3208_; lean_object* v___x_3220_; uint8_t v___x_3221_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3205_, 1);
v___x_3220_ = l_List_lengthTR___redArg(v_a_3206_);
v___x_3221_ = lean_nat_dec_eq(v___x_3220_, v___x_3167_);
if (v___x_3221_ == 0)
{
uint8_t v___x_3222_; 
v___x_3222_ = lean_nat_dec_eq(v___x_3220_, v___x_3168_);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; uint8_t v___x_3224_; 
v___x_3223_ = lean_unsigned_to_nat(10u);
v___x_3224_ = lean_nat_dec_lt(v___x_3220_, v___x_3223_);
lean_dec(v___x_3220_);
if (v___x_3224_ == 0)
{
lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3225_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7);
v___x_3226_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__8));
lean_inc(v_a_3206_);
v___x_3227_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_a_3206_, v_a_3206_, v___x_3223_, v___x_3226_);
lean_dec(v_a_3206_);
v___x_3228_ = lean_box(0);
v___x_3229_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(v___x_3227_, v___x_3228_);
v___x_3230_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11);
v___x_3231_ = l_Lean_MessageData_joinSep(v___x_3229_, v___x_3230_);
v___x_3232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3225_);
lean_ctor_set(v___x_3232_, 1, v___x_3231_);
v___x_3233_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__14);
v___x_3234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3232_);
lean_ctor_set(v___x_3234_, 1, v___x_3233_);
v___y_3208_ = v___x_3234_;
goto v___jp_3207_;
}
else
{
lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3235_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__7);
v___x_3236_ = lean_box(0);
v___x_3237_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(v_a_3206_, v___x_3236_);
v___x_3238_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11);
v___x_3239_ = l_Lean_MessageData_joinSep(v___x_3237_, v___x_3238_);
v___x_3240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3235_);
lean_ctor_set(v___x_3240_, 1, v___x_3239_);
v___y_3208_ = v___x_3240_;
goto v___jp_3207_;
}
}
else
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
lean_dec(v___x_3220_);
v___x_3241_ = lean_box(0);
v___x_3242_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__2(v_a_3206_, v___x_3241_);
v___x_3243_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__11);
v___x_3244_ = l_Lean_MessageData_joinSep(v___x_3242_, v___x_3243_);
v___y_3208_ = v___x_3244_;
goto v___jp_3207_;
}
}
else
{
lean_object* v___x_3245_; 
lean_dec(v___x_3220_);
lean_dec(v_a_3206_);
v___x_3245_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__16);
v___y_3208_ = v___x_3245_;
goto v___jp_3207_;
}
v___jp_3207_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3209_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__1);
v___x_3210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
lean_ctor_set(v___x_3210_, 1, v___y_3208_);
v___x_3211_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__5_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_3212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3210_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__3);
v___x_3214_ = l_Lean_MessageData_ofName(v___x_3170_);
v___x_3215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3213_);
lean_ctor_set(v___x_3215_, 1, v___x_3214_);
v___x_3216_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___closed__5);
v___x_3217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3215_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3217_);
lean_ctor_set(v___x_3218_, 1, v___x_3212_);
v___x_3219_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_a_3169_, v___x_3218_, v___y_3155_, v___y_3156_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_dec_ref_known(v___x_3219_, 1);
v_a_3159_ = v___x_3165_;
goto v___jp_3158_;
}
else
{
lean_dec(v_decl_3149_);
return v___x_3219_;
}
}
}
else
{
lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3253_; 
lean_dec(v___x_3170_);
lean_dec(v_decl_3149_);
v_a_3246_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3248_ = v___x_3205_;
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3205_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3253_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3251_; 
if (v_isShared_3249_ == 0)
{
v___x_3251_ = v___x_3248_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_a_3246_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
}
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
lean_dec(v___x_3170_);
lean_dec(v_decl_3149_);
v_a_3254_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3171_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3171_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
v___jp_3158_:
{
size_t v___x_3160_; size_t v___x_3161_; 
v___x_3160_ = ((size_t)1ULL);
v___x_3161_ = lean_usize_add(v_i_3153_, v___x_3160_);
v_i_3153_ = v___x_3161_;
v_b_3154_ = v_a_3159_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3___boxed(lean_object* v_decl_3262_, lean_object* v___x_3263_, lean_object* v_as_3264_, lean_object* v_sz_3265_, lean_object* v_i_3266_, lean_object* v_b_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
uint8_t v___x_7245__boxed_3271_; size_t v_sz_boxed_3272_; size_t v_i_boxed_3273_; lean_object* v_res_3274_; 
v___x_7245__boxed_3271_ = lean_unbox(v___x_3263_);
v_sz_boxed_3272_ = lean_unbox_usize(v_sz_3265_);
lean_dec(v_sz_3265_);
v_i_boxed_3273_ = lean_unbox_usize(v_i_3266_);
lean_dec(v_i_3266_);
v_res_3274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(v_decl_3262_, v___x_7245__boxed_3271_, v_as_3264_, v_sz_boxed_3272_, v_i_boxed_3273_, v_b_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec_ref(v_as_3264_);
return v_res_3274_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3276_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_));
v___x_3277_ = l_Lean_stringToMessageData(v___x_3276_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(lean_object* v___x_3278_, lean_object* v___x_3279_, lean_object* v___x_3280_, lean_object* v_name_3281_, lean_object* v_decl_3282_, lean_object* v_stx_3283_, uint8_t v_kind_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
uint8_t v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; lean_object* v___y_3292_; uint8_t v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; uint8_t v___x_3350_; uint8_t v___x_3351_; 
v___x_3350_ = 0;
v___x_3351_ = l_Lean_instBEqAttributeKind_beq(v_kind_3284_, v___x_3350_);
if (v___x_3351_ == 0)
{
lean_object* v___x_3352_; 
lean_dec(v_stx_3283_);
lean_dec(v_decl_3282_);
lean_dec_ref(v___x_3280_);
lean_dec_ref(v___x_3279_);
lean_dec_ref(v___x_3278_);
v___x_3352_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg(v_name_3281_, v_kind_3284_, v___y_3285_, v___y_3286_);
return v___x_3352_;
}
else
{
goto v___jp_3324_;
}
v___jp_3288_:
{
lean_object* v___x_3293_; size_t v_sz_3294_; size_t v___x_3295_; lean_object* v___x_3296_; 
v___x_3293_ = lean_box(0);
v_sz_3294_ = lean_array_size(v___y_3290_);
v___x_3295_ = ((size_t)0ULL);
v___x_3296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__3(v_decl_3282_, v___y_3289_, v___y_3290_, v_sz_3294_, v___x_3295_, v___x_3293_, v___y_3291_, v___y_3292_);
lean_dec_ref(v___y_3290_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3303_; 
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3303_ == 0)
{
lean_object* v_unused_3304_; 
v_unused_3304_ = lean_ctor_get(v___x_3296_, 0);
lean_dec(v_unused_3304_);
v___x_3298_ = v___x_3296_;
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
else
{
lean_dec(v___x_3296_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3301_; 
if (v_isShared_3299_ == 0)
{
lean_ctor_set(v___x_3298_, 0, v___x_3293_);
v___x_3301_ = v___x_3298_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v___x_3293_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
else
{
return v___x_3296_;
}
}
v___jp_3305_:
{
lean_object* v___x_3310_; lean_object* v_env_3311_; lean_object* v___x_3312_; 
v___x_3310_ = lean_st_ref_get(v___y_3309_);
v_env_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc_ref(v_env_3311_);
lean_dec(v___x_3310_);
lean_inc(v_decl_3282_);
v___x_3312_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_3311_, v_decl_3282_);
if (lean_obj_tag(v___x_3312_) == 1)
{
lean_object* v_val_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
lean_dec_ref(v___y_3307_);
v_val_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc(v_val_3313_);
lean_dec_ref_known(v___x_3312_, 1);
v___x_3314_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_3315_ = 0;
v___x_3316_ = l_Lean_MessageData_ofConstName(v_decl_3282_, v___x_3315_);
v___x_3317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3314_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_);
v___x_3319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3317_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
v___x_3320_ = l_Lean_MessageData_ofConstName(v_val_3313_, v___x_3315_);
v___x_3321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3319_);
lean_ctor_set(v___x_3321_, 1, v___x_3320_);
v___x_3322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3322_, 0, v___x_3321_);
lean_ctor_set(v___x_3322_, 1, v___x_3314_);
v___x_3323_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_stx_3283_, v___x_3322_, v___y_3308_, v___y_3309_);
lean_dec(v_stx_3283_);
return v___x_3323_;
}
else
{
lean_dec(v___x_3312_);
lean_dec(v_stx_3283_);
v___y_3289_ = v___y_3306_;
v___y_3290_ = v___y_3307_;
v___y_3291_ = v___y_3308_;
v___y_3292_ = v___y_3309_;
goto v___jp_3288_;
}
}
v___jp_3324_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; uint8_t v___x_3327_; 
v___x_3325_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_3326_ = l_Lean_Name_mkStr4(v___x_3278_, v___x_3279_, v___x_3325_, v___x_3280_);
lean_inc(v_stx_3283_);
v___x_3327_ = l_Lean_Syntax_isOfKind(v_stx_3283_, v___x_3326_);
lean_dec(v___x_3326_);
if (v___x_3327_ == 0)
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
lean_dec(v_stx_3283_);
lean_dec(v_decl_3282_);
v___x_3328_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_3329_ = l_Lean_MessageData_ofName(v_name_3281_);
v___x_3330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3328_);
lean_ctor_set(v___x_3330_, 1, v___x_3329_);
v___x_3331_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_3332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3330_);
lean_ctor_set(v___x_3332_, 1, v___x_3331_);
v___x_3333_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_3332_, v___y_3285_, v___y_3286_);
return v___x_3333_;
}
else
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v_tags_3336_; lean_object* v___x_3337_; lean_object* v_env_3338_; uint8_t v___x_3339_; lean_object* v___x_3340_; 
lean_dec(v_name_3281_);
v___x_3334_ = lean_unsigned_to_nat(1u);
v___x_3335_ = l_Lean_Syntax_getArg(v_stx_3283_, v___x_3334_);
v_tags_3336_ = l_Lean_Syntax_getArgs(v___x_3335_);
lean_dec(v___x_3335_);
v___x_3337_ = lean_st_ref_get(v___y_3286_);
v_env_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc_ref(v_env_3338_);
lean_dec(v___x_3337_);
v___x_3339_ = 0;
lean_inc(v_decl_3282_);
v___x_3340_ = l_Lean_Environment_find_x3f(v_env_3338_, v_decl_3282_, v___x_3339_);
if (lean_obj_tag(v___x_3340_) == 0)
{
v___y_3306_ = v___x_3327_;
v___y_3307_ = v_tags_3336_;
v___y_3308_ = v___y_3285_;
v___y_3309_ = v___y_3286_;
goto v___jp_3305_;
}
else
{
lean_object* v___x_3341_; lean_object* v_env_3342_; uint8_t v___x_3343_; 
lean_dec_ref_known(v___x_3340_, 1);
v___x_3341_ = lean_st_ref_get(v___y_3286_);
v_env_3342_ = lean_ctor_get(v___x_3341_, 0);
lean_inc_ref(v_env_3342_);
lean_dec(v___x_3341_);
v___x_3343_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_3342_, v_decl_3282_);
if (v___x_3343_ == 0)
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
lean_dec_ref(v_tags_3336_);
v___x_3344_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_3345_ = l_Lean_MessageData_ofConstName(v_decl_3282_, v___x_3339_);
v___x_3346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3344_);
lean_ctor_set(v___x_3346_, 1, v___x_3345_);
v___x_3347_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_3348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3346_);
lean_ctor_set(v___x_3348_, 1, v___x_3347_);
v___x_3349_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_stx_3283_, v___x_3348_, v___y_3285_, v___y_3286_);
lean_dec(v_stx_3283_);
return v___x_3349_;
}
else
{
v___y_3306_ = v___x_3327_;
v___y_3307_ = v_tags_3336_;
v___y_3308_ = v___y_3285_;
v___y_3309_ = v___y_3286_;
goto v___jp_3305_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object* v___x_3353_, lean_object* v___x_3354_, lean_object* v___x_3355_, lean_object* v_name_3356_, lean_object* v_decl_3357_, lean_object* v_stx_3358_, lean_object* v_kind_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_){
_start:
{
uint8_t v_kind_boxed_3363_; lean_object* v_res_3364_; 
v_kind_boxed_3363_ = lean_unbox(v_kind_3359_);
v_res_3364_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(v___x_3353_, v___x_3354_, v___x_3355_, v_name_3356_, v_decl_3357_, v_stx_3358_, v_kind_boxed_3363_, v___y_3360_, v___y_3361_);
lean_dec(v___y_3361_);
lean_dec_ref(v___y_3360_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_));
v___x_3399_ = l_Lean_registerBuiltinAttribute(v___x_3398_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2____boxed(lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_();
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0(lean_object* v_tag_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___redArg(v_tag_3402_, v___y_3404_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0___boxed(lean_object* v_tag_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l_Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0(v_tag_3407_, v___y_3408_, v___y_3409_);
lean_dec(v___y_3409_);
lean_dec_ref(v___y_3408_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_3412_, lean_object* v_k_3413_, lean_object* v_x_3414_, lean_object* v_x_3415_, lean_object* v_x_3416_){
_start:
{
lean_object* v___x_3417_; 
v___x_3417_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_3412_, v_k_3413_, v_x_3414_, v_x_3415_);
return v___x_3417_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_3418_, lean_object* v_k_3419_, lean_object* v_x_3420_, lean_object* v_x_3421_, lean_object* v_x_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_tagInfo___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__0_spec__0(v_as_3418_, v_k_3419_, v_x_3420_, v_x_3421_, v_x_3422_);
lean_dec_ref(v_k_3419_);
lean_dec_ref(v_as_3418_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_as_3424_, size_t v_sz_3425_, size_t v_i_3426_, lean_object* v_b_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_){
_start:
{
lean_object* v___x_3431_; 
v___x_3431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___redArg(v_as_3424_, v_sz_3425_, v_i_3426_, v_b_3427_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_as_3432_, lean_object* v_sz_3433_, lean_object* v_i_3434_, lean_object* v_b_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_){
_start:
{
size_t v_sz_boxed_3439_; size_t v_i_boxed_3440_; lean_object* v_res_3441_; 
v_sz_boxed_3439_ = lean_unbox_usize(v_sz_3433_);
lean_dec(v_sz_3433_);
v_i_boxed_3440_ = lean_unbox_usize(v_i_3434_);
lean_dec(v_i_3434_);
v_res_3441_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__2(v_as_3432_, v_sz_boxed_3439_, v_i_boxed_3440_, v_b_3435_, v___y_3436_, v___y_3437_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
lean_dec_ref(v_as_3432_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4(lean_object* v_init_3442_, lean_object* v_t_3443_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__4_spec__5(v_init_3442_, v_t_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5(lean_object* v_n_3445_, lean_object* v_as_3446_, lean_object* v_lo_3447_, lean_object* v_hi_3448_, lean_object* v_w_3449_, lean_object* v_hlo_3450_, lean_object* v_hhi_3451_){
_start:
{
lean_object* v___x_3452_; 
v___x_3452_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___redArg(v_n_3445_, v_as_3446_, v_lo_3447_, v_hi_3448_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object* v_n_3453_, lean_object* v_as_3454_, lean_object* v_lo_3455_, lean_object* v_hi_3456_, lean_object* v_w_3457_, lean_object* v_hlo_3458_, lean_object* v_hhi_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5(v_n_3453_, v_as_3454_, v_lo_3455_, v_hi_3456_, v_w_3457_, v_hlo_3458_, v_hhi_3459_);
lean_dec(v_hi_3456_);
lean_dec(v_n_3453_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6(lean_object* v_init_3461_, lean_object* v_x_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_){
_start:
{
lean_object* v___x_3466_; 
v___x_3466_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___redArg(v_init_3461_, v_x_3462_);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6___boxed(lean_object* v_init_3467_, lean_object* v_x_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__6(v_init_3467_, v_x_3468_, v___y_3469_, v___y_3470_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7(lean_object* v_n_3473_, lean_object* v_lo_3474_, lean_object* v_hi_3475_, lean_object* v_hhi_3476_, lean_object* v_pivot_3477_, lean_object* v_as_3478_, lean_object* v_i_3479_, lean_object* v_k_3480_, lean_object* v_ilo_3481_, lean_object* v_ik_3482_, lean_object* v_w_3483_){
_start:
{
lean_object* v___x_3484_; 
v___x_3484_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___redArg(v_hi_3475_, v_pivot_3477_, v_as_3478_, v_i_3479_, v_k_3480_);
return v___x_3484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7___boxed(lean_object* v_n_3485_, lean_object* v_lo_3486_, lean_object* v_hi_3487_, lean_object* v_hhi_3488_, lean_object* v_pivot_3489_, lean_object* v_as_3490_, lean_object* v_i_3491_, lean_object* v_k_3492_, lean_object* v_ilo_3493_, lean_object* v_ik_3494_, lean_object* v_w_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Tactic_Doc_allTags___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__spec__1_spec__5_spec__7(v_n_3485_, v_lo_3486_, v_hi_3487_, v_hhi_3488_, v_pivot_3489_, v_as_3490_, v_i_3491_, v_k_3492_, v_ilo_3493_, v_ik_3494_, v_w_3495_);
lean_dec(v_hi_3487_);
lean_dec(v_lo_3486_);
lean_dec(v_n_3485_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v_es_3499_, lean_object* v_x_3500_){
_start:
{
lean_object* v_fst_3501_; lean_object* v_snd_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v_fst_3501_ = lean_ctor_get(v_x_3500_, 0);
lean_inc(v_fst_3501_);
v_snd_3502_ = lean_ctor_get(v_x_3500_, 1);
lean_inc(v_snd_3502_);
lean_dec_ref(v_x_3500_);
v___x_3503_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3504_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2__spec__0___redArg(v_es_3499_, v_fst_3501_, v___x_3503_);
v___x_3505_ = lean_array_push(v___x_3504_, v_snd_3502_);
v___x_3506_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_3501_, v___x_3505_, v_es_3499_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_3507_, lean_object* v_x_3508_){
_start:
{
if (lean_obj_tag(v_x_3508_) == 0)
{
lean_object* v_k_3509_; lean_object* v_v_3510_; lean_object* v_l_3511_; lean_object* v_r_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v_k_3509_ = lean_ctor_get(v_x_3508_, 1);
v_v_3510_ = lean_ctor_get(v_x_3508_, 2);
v_l_3511_ = lean_ctor_get(v_x_3508_, 3);
v_r_3512_ = lean_ctor_get(v_x_3508_, 4);
v___x_3513_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v_init_3507_, v_l_3511_);
lean_inc(v_v_3510_);
lean_inc(v_k_3509_);
v___x_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3514_, 0, v_k_3509_);
lean_ctor_set(v___x_3514_, 1, v_v_3510_);
v___x_3515_ = lean_array_push(v___x_3513_, v___x_3514_);
v_init_3507_ = v___x_3515_;
v_x_3508_ = v_r_3512_;
goto _start;
}
else
{
return v_init_3507_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_3517_, lean_object* v_x_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v_init_3517_, v_x_3518_);
lean_dec(v_x_3518_);
return v_res_3519_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_3520_, lean_object* v_x2_3521_){
_start:
{
lean_object* v_fst_3522_; lean_object* v_fst_3523_; uint8_t v___x_3524_; 
v_fst_3522_ = lean_ctor_get(v_x1_3520_, 0);
v_fst_3523_ = lean_ctor_get(v_x2_3521_, 0);
v___x_3524_ = l_Lean_Name_quickLt(v_fst_3522_, v_fst_3523_);
return v___x_3524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_3525_, lean_object* v_x2_3526_){
_start:
{
uint8_t v_res_3527_; lean_object* v_r_3528_; 
v_res_3527_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_3525_, v_x2_3526_);
lean_dec_ref(v_x2_3526_);
lean_dec_ref(v_x1_3525_);
v_r_3528_ = lean_box(v_res_3527_);
return v_r_3528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_3529_, lean_object* v_pivot_3530_, lean_object* v_as_3531_, lean_object* v_i_3532_, lean_object* v_k_3533_){
_start:
{
uint8_t v___x_3534_; 
v___x_3534_ = lean_nat_dec_lt(v_k_3533_, v_hi_3529_);
if (v___x_3534_ == 0)
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
lean_dec(v_k_3533_);
v___x_3535_ = lean_array_fswap(v_as_3531_, v_i_3532_, v_hi_3529_);
v___x_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3536_, 0, v_i_3532_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
return v___x_3536_;
}
else
{
lean_object* v___x_3537_; lean_object* v_fst_3538_; lean_object* v_fst_3539_; uint8_t v___x_3540_; 
v___x_3537_ = lean_array_fget_borrowed(v_as_3531_, v_k_3533_);
v_fst_3538_ = lean_ctor_get(v___x_3537_, 0);
v_fst_3539_ = lean_ctor_get(v_pivot_3530_, 0);
v___x_3540_ = l_Lean_Name_quickLt(v_fst_3538_, v_fst_3539_);
if (v___x_3540_ == 0)
{
lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3541_ = lean_unsigned_to_nat(1u);
v___x_3542_ = lean_nat_add(v_k_3533_, v___x_3541_);
lean_dec(v_k_3533_);
v_k_3533_ = v___x_3542_;
goto _start;
}
else
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3544_ = lean_array_fswap(v_as_3531_, v_i_3532_, v_k_3533_);
v___x_3545_ = lean_unsigned_to_nat(1u);
v___x_3546_ = lean_nat_add(v_i_3532_, v___x_3545_);
lean_dec(v_i_3532_);
v___x_3547_ = lean_nat_add(v_k_3533_, v___x_3545_);
lean_dec(v_k_3533_);
v_as_3531_ = v___x_3544_;
v_i_3532_ = v___x_3546_;
v_k_3533_ = v___x_3547_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_3549_, lean_object* v_pivot_3550_, lean_object* v_as_3551_, lean_object* v_i_3552_, lean_object* v_k_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3549_, v_pivot_3550_, v_as_3551_, v_i_3552_, v_k_3553_);
lean_dec_ref(v_pivot_3550_);
lean_dec(v_hi_3549_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_3555_, lean_object* v_as_3556_, lean_object* v_lo_3557_, lean_object* v_hi_3558_){
_start:
{
lean_object* v___y_3560_; uint8_t v___x_3570_; 
v___x_3570_ = lean_nat_dec_lt(v_lo_3557_, v_hi_3558_);
if (v___x_3570_ == 0)
{
lean_dec(v_lo_3557_);
return v_as_3556_;
}
else
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v_mid_3573_; lean_object* v___y_3575_; lean_object* v___y_3581_; lean_object* v___x_3586_; lean_object* v___x_3587_; uint8_t v___x_3588_; 
v___x_3571_ = lean_nat_add(v_lo_3557_, v_hi_3558_);
v___x_3572_ = lean_unsigned_to_nat(1u);
v_mid_3573_ = lean_nat_shiftr(v___x_3571_, v___x_3572_);
lean_dec(v___x_3571_);
v___x_3586_ = lean_array_fget_borrowed(v_as_3556_, v_mid_3573_);
v___x_3587_ = lean_array_fget_borrowed(v_as_3556_, v_lo_3557_);
v___x_3588_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3586_, v___x_3587_);
if (v___x_3588_ == 0)
{
v___y_3581_ = v_as_3556_;
goto v___jp_3580_;
}
else
{
lean_object* v___x_3589_; 
v___x_3589_ = lean_array_fswap(v_as_3556_, v_lo_3557_, v_mid_3573_);
v___y_3581_ = v___x_3589_;
goto v___jp_3580_;
}
v___jp_3574_:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; uint8_t v___x_3578_; 
v___x_3576_ = lean_array_fget_borrowed(v___y_3575_, v_mid_3573_);
v___x_3577_ = lean_array_fget_borrowed(v___y_3575_, v_hi_3558_);
v___x_3578_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3576_, v___x_3577_);
if (v___x_3578_ == 0)
{
lean_dec(v_mid_3573_);
v___y_3560_ = v___y_3575_;
goto v___jp_3559_;
}
else
{
lean_object* v___x_3579_; 
v___x_3579_ = lean_array_fswap(v___y_3575_, v_mid_3573_, v_hi_3558_);
lean_dec(v_mid_3573_);
v___y_3560_ = v___x_3579_;
goto v___jp_3559_;
}
}
v___jp_3580_:
{
lean_object* v___x_3582_; lean_object* v___x_3583_; uint8_t v___x_3584_; 
v___x_3582_ = lean_array_fget_borrowed(v___y_3581_, v_hi_3558_);
v___x_3583_ = lean_array_fget_borrowed(v___y_3581_, v_lo_3557_);
v___x_3584_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_3582_, v___x_3583_);
if (v___x_3584_ == 0)
{
v___y_3575_ = v___y_3581_;
goto v___jp_3574_;
}
else
{
lean_object* v___x_3585_; 
v___x_3585_ = lean_array_fswap(v___y_3581_, v_lo_3557_, v_hi_3558_);
v___y_3575_ = v___x_3585_;
goto v___jp_3574_;
}
}
}
v___jp_3559_:
{
lean_object* v_pivot_3561_; lean_object* v___x_3562_; lean_object* v_fst_3563_; lean_object* v_snd_3564_; uint8_t v___x_3565_; 
v_pivot_3561_ = lean_array_fget(v___y_3560_, v_hi_3558_);
lean_inc_n(v_lo_3557_, 2);
v___x_3562_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3558_, v_pivot_3561_, v___y_3560_, v_lo_3557_, v_lo_3557_);
lean_dec(v_pivot_3561_);
v_fst_3563_ = lean_ctor_get(v___x_3562_, 0);
lean_inc(v_fst_3563_);
v_snd_3564_ = lean_ctor_get(v___x_3562_, 1);
lean_inc(v_snd_3564_);
lean_dec_ref(v___x_3562_);
v___x_3565_ = lean_nat_dec_le(v_hi_3558_, v_fst_3563_);
if (v___x_3565_ == 0)
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3566_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v_n_3555_, v_snd_3564_, v_lo_3557_, v_fst_3563_);
v___x_3567_ = lean_unsigned_to_nat(1u);
v___x_3568_ = lean_nat_add(v_fst_3563_, v___x_3567_);
lean_dec(v_fst_3563_);
v_as_3556_ = v___x_3566_;
v_lo_3557_ = v___x_3568_;
goto _start;
}
else
{
lean_dec(v_fst_3563_);
lean_dec(v_lo_3557_);
return v_snd_3564_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_3590_, lean_object* v_as_3591_, lean_object* v_lo_3592_, lean_object* v_hi_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v_n_3590_, v_as_3591_, v_lo_3592_, v_hi_3593_);
lean_dec(v_hi_3593_);
lean_dec(v_n_3590_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v_x_3597_, lean_object* v_s_3598_){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___y_3604_; lean_object* v___y_3605_; uint8_t v___x_3608_; 
v___x_3599_ = lean_unsigned_to_nat(0u);
v___x_3600_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3601_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v___x_3600_, v_s_3598_);
v___x_3602_ = lean_array_get_size(v___x_3601_);
v___x_3608_ = lean_nat_dec_eq(v___x_3602_, v___x_3599_);
if (v___x_3608_ == 0)
{
lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___y_3612_; uint8_t v___x_3614_; 
v___x_3609_ = lean_unsigned_to_nat(1u);
v___x_3610_ = lean_nat_sub(v___x_3602_, v___x_3609_);
v___x_3614_ = lean_nat_dec_le(v___x_3599_, v___x_3610_);
if (v___x_3614_ == 0)
{
lean_inc(v___x_3610_);
v___y_3612_ = v___x_3610_;
goto v___jp_3611_;
}
else
{
v___y_3612_ = v___x_3599_;
goto v___jp_3611_;
}
v___jp_3611_:
{
uint8_t v___x_3613_; 
v___x_3613_ = lean_nat_dec_le(v___y_3612_, v___x_3610_);
if (v___x_3613_ == 0)
{
lean_dec(v___x_3610_);
lean_inc(v___y_3612_);
v___y_3604_ = v___y_3612_;
v___y_3605_ = v___y_3612_;
goto v___jp_3603_;
}
else
{
v___y_3604_ = v___y_3612_;
v___y_3605_ = v___x_3610_;
goto v___jp_3603_;
}
}
}
else
{
lean_object* v___x_3615_; 
lean_inc_ref_n(v___x_3601_, 2);
v___x_3615_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3601_);
lean_ctor_set(v___x_3615_, 1, v___x_3601_);
lean_ctor_set(v___x_3615_, 2, v___x_3601_);
return v___x_3615_;
}
v___jp_3603_:
{
lean_object* v___x_3606_; lean_object* v___x_3607_; 
v___x_3606_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v___x_3602_, v___x_3601_, v___y_3604_, v___y_3605_);
lean_dec(v___y_3605_);
lean_inc_ref_n(v___x_3606_, 2);
v___x_3607_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
lean_ctor_set(v___x_3607_, 2, v___x_3606_);
return v___x_3607_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v_x_3616_, lean_object* v_s_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(v_x_3616_, v_s_3617_);
lean_dec(v_s_3617_);
lean_dec_ref(v_x_3616_);
return v_res_3618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v_es_3619_){
_start:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; uint8_t v___x_3624_; 
v___x_3620_ = lean_unsigned_to_nat(0u);
v___x_3621_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3622_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v___x_3621_, v_es_3619_);
v___x_3623_ = lean_array_get_size(v___x_3622_);
v___x_3624_ = lean_nat_dec_eq(v___x_3623_, v___x_3620_);
if (v___x_3624_ == 0)
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___y_3628_; uint8_t v___x_3632_; 
v___x_3625_ = lean_unsigned_to_nat(1u);
v___x_3626_ = lean_nat_sub(v___x_3623_, v___x_3625_);
v___x_3632_ = lean_nat_dec_le(v___x_3620_, v___x_3626_);
if (v___x_3632_ == 0)
{
lean_inc(v___x_3626_);
v___y_3628_ = v___x_3626_;
goto v___jp_3627_;
}
else
{
v___y_3628_ = v___x_3620_;
goto v___jp_3627_;
}
v___jp_3627_:
{
uint8_t v___x_3629_; 
v___x_3629_ = lean_nat_dec_le(v___y_3628_, v___x_3626_);
if (v___x_3629_ == 0)
{
lean_object* v___x_3630_; 
lean_dec(v___x_3626_);
lean_inc(v___y_3628_);
v___x_3630_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v___x_3623_, v___x_3622_, v___y_3628_, v___y_3628_);
lean_dec(v___y_3628_);
return v___x_3630_;
}
else
{
lean_object* v___x_3631_; 
v___x_3631_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v___x_3623_, v___x_3622_, v___y_3628_, v___x_3626_);
lean_dec(v___x_3626_);
return v___x_3631_;
}
}
}
else
{
return v___x_3622_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v_es_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(v_es_3633_);
lean_dec(v_es_3633_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(lean_object* v___x_3635_, lean_object* v_x_3636_, lean_object* v___y_3637_){
_start:
{
lean_object* v___x_3639_; 
v___x_3639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3635_);
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v___x_3640_, lean_object* v_x_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(v___x_3640_, v_x_3641_, v___y_3642_);
lean_dec_ref(v___y_3642_);
lean_dec_ref(v_x_3641_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3671_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v___x_3672_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_3671_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2____boxed(lean_object* v_a_3673_){
_start:
{
lean_object* v_res_3674_; 
v_res_3674_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_();
return v_res_3674_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0(lean_object* v_init_3675_, lean_object* v_t_3676_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0_spec__0(v_init_3675_, v_t_3676_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_3678_, lean_object* v_t_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__0(v_init_3678_, v_t_3679_);
lean_dec(v_t_3679_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1(lean_object* v_n_3681_, lean_object* v_as_3682_, lean_object* v_lo_3683_, lean_object* v_hi_3684_, lean_object* v_w_3685_, lean_object* v_hlo_3686_, lean_object* v_hhi_3687_){
_start:
{
lean_object* v___x_3688_; 
v___x_3688_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg(v_n_3681_, v_as_3682_, v_lo_3683_, v_hi_3684_);
return v___x_3688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_3689_, lean_object* v_as_3690_, lean_object* v_lo_3691_, lean_object* v_hi_3692_, lean_object* v_w_3693_, lean_object* v_hlo_3694_, lean_object* v_hhi_3695_){
_start:
{
lean_object* v_res_3696_; 
v_res_3696_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1(v_n_3689_, v_as_3690_, v_lo_3691_, v_hi_3692_, v_w_3693_, v_hlo_3694_, v_hhi_3695_);
lean_dec(v_hi_3692_);
lean_dec(v_n_3689_);
return v_res_3696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_3697_, lean_object* v_lo_3698_, lean_object* v_hi_3699_, lean_object* v_hhi_3700_, lean_object* v_pivot_3701_, lean_object* v_as_3702_, lean_object* v_i_3703_, lean_object* v_k_3704_, lean_object* v_ilo_3705_, lean_object* v_ik_3706_, lean_object* v_w_3707_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_3699_, v_pivot_3701_, v_as_3702_, v_i_3703_, v_k_3704_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_3709_, lean_object* v_lo_3710_, lean_object* v_hi_3711_, lean_object* v_hhi_3712_, lean_object* v_pivot_3713_, lean_object* v_as_3714_, lean_object* v_i_3715_, lean_object* v_k_3716_, lean_object* v_ilo_3717_, lean_object* v_ik_3718_, lean_object* v_w_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1_spec__2(v_n_3709_, v_lo_3710_, v_hi_3711_, v_hhi_3712_, v_pivot_3713_, v_as_3714_, v_i_3715_, v_k_3716_, v_ilo_3717_, v_ik_3718_, v_w_3719_);
lean_dec_ref(v_pivot_3713_);
lean_dec(v_hi_3711_);
lean_dec(v_lo_3710_);
lean_dec(v_n_3709_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(lean_object* v_as_3721_, lean_object* v_k_3722_, lean_object* v_x_3723_, lean_object* v_x_3724_){
_start:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v_m_3727_; lean_object* v_a_3728_; uint8_t v___x_3729_; 
v___x_3725_ = lean_nat_add(v_x_3723_, v_x_3724_);
v___x_3726_ = lean_unsigned_to_nat(1u);
v_m_3727_ = lean_nat_shiftr(v___x_3725_, v___x_3726_);
lean_dec(v___x_3725_);
v_a_3728_ = lean_array_fget_borrowed(v_as_3721_, v_m_3727_);
v___x_3729_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_3728_, v_k_3722_);
if (v___x_3729_ == 0)
{
uint8_t v___x_3730_; 
lean_dec(v_x_3724_);
v___x_3730_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_3722_, v_a_3728_);
if (v___x_3730_ == 0)
{
lean_object* v___x_3731_; 
lean_dec(v_m_3727_);
lean_dec(v_x_3723_);
lean_inc(v_a_3728_);
v___x_3731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3731_, 0, v_a_3728_);
return v___x_3731_;
}
else
{
lean_object* v___x_3732_; uint8_t v___x_3733_; 
v___x_3732_ = lean_unsigned_to_nat(0u);
v___x_3733_ = lean_nat_dec_eq(v_m_3727_, v___x_3732_);
if (v___x_3733_ == 0)
{
lean_object* v___x_3734_; uint8_t v___x_3735_; 
v___x_3734_ = lean_nat_sub(v_m_3727_, v___x_3726_);
lean_dec(v_m_3727_);
v___x_3735_ = lean_nat_dec_lt(v___x_3734_, v_x_3723_);
if (v___x_3735_ == 0)
{
v_x_3724_ = v___x_3734_;
goto _start;
}
else
{
lean_object* v___x_3737_; 
lean_dec(v___x_3734_);
lean_dec(v_x_3723_);
v___x_3737_ = lean_box(0);
return v___x_3737_;
}
}
else
{
lean_object* v___x_3738_; 
lean_dec(v_m_3727_);
lean_dec(v_x_3723_);
v___x_3738_ = lean_box(0);
return v___x_3738_;
}
}
}
else
{
lean_object* v___x_3739_; uint8_t v___x_3740_; 
lean_dec(v_x_3723_);
v___x_3739_ = lean_nat_add(v_m_3727_, v___x_3726_);
lean_dec(v_m_3727_);
v___x_3740_ = lean_nat_dec_le(v___x_3739_, v_x_3724_);
if (v___x_3740_ == 0)
{
lean_object* v___x_3741_; 
lean_dec(v___x_3739_);
lean_dec(v_x_3724_);
v___x_3741_ = lean_box(0);
return v___x_3741_;
}
else
{
v_x_3723_ = v___x_3739_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg___boxed(lean_object* v_as_3743_, lean_object* v_k_3744_, lean_object* v_x_3745_, lean_object* v_x_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(v_as_3743_, v_k_3744_, v_x_3745_, v_x_3746_);
lean_dec_ref(v_k_3744_);
lean_dec_ref(v_as_3743_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(lean_object* v_tactic_3748_, lean_object* v_as_3749_, size_t v_sz_3750_, size_t v_i_3751_, lean_object* v_b_3752_){
_start:
{
lean_object* v_a_3754_; uint8_t v___x_3758_; 
v___x_3758_ = lean_usize_dec_lt(v_i_3751_, v_sz_3750_);
if (v___x_3758_ == 0)
{
lean_dec(v_tactic_3748_);
return v_b_3752_;
}
else
{
lean_object* v___x_3759_; lean_object* v_a_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; 
v___x_3759_ = lean_unsigned_to_nat(0u);
v_a_3760_ = lean_array_uget_borrowed(v_as_3749_, v_i_3751_);
v___x_3761_ = lean_array_get_size(v_a_3760_);
v___x_3762_ = lean_nat_dec_lt(v___x_3759_, v___x_3761_);
if (v___x_3762_ == 0)
{
v_a_3754_ = v_b_3752_;
goto v___jp_3753_;
}
else
{
lean_object* v___x_3763_; lean_object* v___x_3764_; uint8_t v___x_3765_; 
v___x_3763_ = lean_unsigned_to_nat(1u);
v___x_3764_ = lean_nat_sub(v___x_3761_, v___x_3763_);
v___x_3765_ = lean_nat_dec_le(v___x_3759_, v___x_3764_);
if (v___x_3765_ == 0)
{
lean_dec(v___x_3764_);
v_a_3754_ = v_b_3752_;
goto v___jp_3753_;
}
else
{
lean_object* v_extensions_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
v_extensions_3766_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
lean_inc(v_tactic_3748_);
v___x_3767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3767_, 0, v_tactic_3748_);
lean_ctor_set(v___x_3767_, 1, v_extensions_3766_);
v___x_3768_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(v_a_3760_, v___x_3767_, v___x_3759_, v___x_3764_);
lean_dec_ref_known(v___x_3767_, 2);
if (lean_obj_tag(v___x_3768_) == 1)
{
lean_object* v_val_3769_; lean_object* v_snd_3770_; lean_object* v___x_3771_; 
v_val_3769_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_val_3769_);
lean_dec_ref_known(v___x_3768_, 1);
v_snd_3770_ = lean_ctor_get(v_val_3769_, 1);
lean_inc(v_snd_3770_);
lean_dec(v_val_3769_);
v___x_3771_ = l_Array_append___redArg(v_b_3752_, v_snd_3770_);
lean_dec(v_snd_3770_);
v_a_3754_ = v___x_3771_;
goto v___jp_3753_;
}
else
{
lean_dec(v___x_3768_);
v_a_3754_ = v_b_3752_;
goto v___jp_3753_;
}
}
}
}
v___jp_3753_:
{
size_t v___x_3755_; size_t v___x_3756_; 
v___x_3755_ = ((size_t)1ULL);
v___x_3756_ = lean_usize_add(v_i_3751_, v___x_3755_);
v_i_3751_ = v___x_3756_;
v_b_3752_ = v_a_3754_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1___boxed(lean_object* v_tactic_3772_, lean_object* v_as_3773_, lean_object* v_sz_3774_, lean_object* v_i_3775_, lean_object* v_b_3776_){
_start:
{
size_t v_sz_boxed_3777_; size_t v_i_boxed_3778_; lean_object* v_res_3779_; 
v_sz_boxed_3777_ = lean_unbox_usize(v_sz_3774_);
lean_dec(v_sz_3774_);
v_i_boxed_3778_ = lean_unbox_usize(v_i_3775_);
lean_dec(v_i_3775_);
v_res_3779_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(v_tactic_3772_, v_as_3773_, v_sz_boxed_3777_, v_i_boxed_3778_, v_b_3776_);
lean_dec_ref(v_as_3773_);
return v_res_3779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensions(lean_object* v_env_3780_, lean_object* v_tactic_3781_){
_start:
{
lean_object* v___x_3782_; lean_object* v_toEnvExtension_3783_; lean_object* v_asyncMode_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; uint8_t v___x_3788_; lean_object* v___x_3789_; lean_object* v_importedEntries_3790_; lean_object* v_extensions_3791_; size_t v_sz_3792_; size_t v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3782_ = l_Lean_Parser_Tactic_Doc_tacticDocExtExt;
v_toEnvExtension_3783_ = lean_ctor_get(v___x_3782_, 0);
v_asyncMode_3784_ = lean_ctor_get(v_toEnvExtension_3783_, 2);
v___x_3785_ = lean_box(1);
v___x_3786_ = lean_obj_once(&l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0, &l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0_once, _init_l_Lean_Parser_Tactic_Doc_aliases___redArg___closed__0);
v___x_3787_ = lean_box(0);
v___x_3788_ = 0;
lean_inc_ref(v_env_3780_);
v___x_3789_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_3786_, v_toEnvExtension_3783_, v_env_3780_, v_asyncMode_3784_, v___x_3787_, v___x_3788_);
v_importedEntries_3790_ = lean_ctor_get(v___x_3789_, 0);
lean_inc_ref(v_importedEntries_3790_);
lean_dec(v___x_3789_);
v_extensions_3791_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_));
v_sz_3792_ = lean_array_size(v_importedEntries_3790_);
v___x_3793_ = ((size_t)0ULL);
lean_inc(v_tactic_3781_);
v___x_3794_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__1(v_tactic_3781_, v_importedEntries_3790_, v_sz_3792_, v___x_3793_, v_extensions_3791_);
lean_dec_ref(v_importedEntries_3790_);
v___x_3795_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3785_, v___x_3782_, v_env_3780_, v_asyncMode_3784_, v___x_3787_, v___x_3788_);
v___x_3796_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3795_, v_tactic_3781_);
lean_dec(v_tactic_3781_);
lean_dec(v___x_3795_);
if (lean_obj_tag(v___x_3796_) == 1)
{
lean_object* v_val_3797_; lean_object* v___x_3798_; 
v_val_3797_ = lean_ctor_get(v___x_3796_, 0);
lean_inc(v_val_3797_);
lean_dec_ref_known(v___x_3796_, 1);
v___x_3798_ = l_Array_append___redArg(v___x_3794_, v_val_3797_);
lean_dec(v_val_3797_);
return v___x_3798_;
}
else
{
lean_dec(v___x_3796_);
return v___x_3794_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0(lean_object* v_as_3799_, lean_object* v_k_3800_, lean_object* v_x_3801_, lean_object* v_x_3802_, lean_object* v_x_3803_){
_start:
{
lean_object* v___x_3804_; 
v___x_3804_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___redArg(v_as_3799_, v_k_3800_, v_x_3801_, v_x_3802_);
return v___x_3804_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0___boxed(lean_object* v_as_3805_, lean_object* v_k_3806_, lean_object* v_x_3807_, lean_object* v_x_3808_, lean_object* v_x_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_getTacticExtensions_spec__0(v_as_3805_, v_k_3806_, v_x_3807_, v_x_3808_, v_x_3809_);
lean_dec_ref(v_k_3806_);
lean_dec_ref(v_as_3805_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(lean_object* v_s_3811_, lean_object* v_pos_3812_){
_start:
{
lean_object* v_str_3813_; lean_object* v_startInclusive_3814_; lean_object* v_endExclusive_3815_; lean_object* v___x_3816_; lean_object* v___x_3825_; lean_object* v___x_3826_; uint8_t v_decide_3827_; 
v_str_3813_ = lean_ctor_get(v_s_3811_, 0);
v_startInclusive_3814_ = lean_ctor_get(v_s_3811_, 1);
v_endExclusive_3815_ = lean_ctor_get(v_s_3811_, 2);
v___x_3816_ = lean_nat_add(v_startInclusive_3814_, v_pos_3812_);
v___x_3825_ = lean_unsigned_to_nat(0u);
v___x_3826_ = lean_nat_sub(v_endExclusive_3815_, v___x_3816_);
v_decide_3827_ = lean_nat_dec_eq(v___x_3825_, v___x_3826_);
lean_dec(v___x_3826_);
if (v_decide_3827_ == 0)
{
uint32_t v___x_3828_; uint32_t v___x_3829_; uint8_t v___x_3830_; 
v___x_3828_ = lean_string_utf8_get_fast(v_str_3813_, v___x_3816_);
v___x_3829_ = 32;
v___x_3830_ = lean_uint32_dec_eq(v___x_3828_, v___x_3829_);
if (v___x_3830_ == 0)
{
uint32_t v___x_3831_; uint8_t v___x_3832_; 
v___x_3831_ = 9;
v___x_3832_ = lean_uint32_dec_eq(v___x_3828_, v___x_3831_);
if (v___x_3832_ == 0)
{
uint32_t v___x_3833_; uint8_t v___x_3834_; 
v___x_3833_ = 13;
v___x_3834_ = lean_uint32_dec_eq(v___x_3828_, v___x_3833_);
if (v___x_3834_ == 0)
{
uint32_t v___x_3835_; uint8_t v___x_3836_; 
v___x_3835_ = 10;
v___x_3836_ = lean_uint32_dec_eq(v___x_3828_, v___x_3835_);
if (v___x_3836_ == 0)
{
lean_dec(v___x_3816_);
return v_pos_3812_;
}
else
{
goto v___jp_3817_;
}
}
else
{
goto v___jp_3817_;
}
}
else
{
goto v___jp_3817_;
}
}
else
{
goto v___jp_3817_;
}
}
else
{
lean_dec(v___x_3816_);
return v_pos_3812_;
}
v___jp_3817_:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; uint8_t v___x_3823_; 
v___x_3818_ = lean_string_utf8_next_fast(v_str_3813_, v___x_3816_);
v___x_3819_ = lean_nat_sub(v___x_3818_, v___x_3816_);
lean_dec(v___x_3816_);
v___x_3820_ = lean_nat_add(v_pos_3812_, v___x_3819_);
lean_dec(v___x_3819_);
v___x_3821_ = lean_unsigned_to_nat(1u);
v___x_3822_ = lean_nat_add(v_pos_3812_, v___x_3821_);
v___x_3823_ = lean_nat_dec_le(v___x_3822_, v___x_3820_);
lean_dec(v___x_3822_);
if (v___x_3823_ == 0)
{
lean_dec(v___x_3820_);
return v_pos_3812_;
}
else
{
lean_dec(v_pos_3812_);
v_pos_3812_ = v___x_3820_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0___boxed(lean_object* v_s_3837_, lean_object* v_pos_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v_s_3837_, v_pos_3838_);
lean_dec_ref(v_s_3837_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(lean_object* v_str_3842_){
_start:
{
lean_object* v___y_3844_; lean_object* v_str_3847_; lean_object* v_startInclusive_3848_; lean_object* v_endExclusive_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; uint8_t v_decide_3853_; 
v_str_3847_ = lean_ctor_get(v_str_3842_, 0);
v_startInclusive_3848_ = lean_ctor_get(v_str_3842_, 1);
v_endExclusive_3849_ = lean_ctor_get(v_str_3842_, 2);
v___x_3850_ = lean_unsigned_to_nat(0u);
v___x_3851_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine_spec__0(v_str_3842_, v___x_3850_);
v___x_3852_ = lean_nat_sub(v_endExclusive_3849_, v_startInclusive_3848_);
v_decide_3853_ = lean_nat_dec_eq(v___x_3851_, v___x_3852_);
lean_dec(v___x_3852_);
lean_dec(v___x_3851_);
if (v_decide_3853_ == 0)
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3854_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__1));
v___x_3855_ = lean_string_utf8_extract_fast(v_str_3847_, v_startInclusive_3848_, v_endExclusive_3849_);
v___x_3856_ = lean_string_append(v___x_3854_, v___x_3855_);
lean_dec_ref(v___x_3855_);
v___y_3844_ = v___x_3856_;
goto v___jp_3843_;
}
else
{
lean_object* v___x_3857_; 
v___x_3857_ = lean_string_utf8_extract_fast(v_str_3847_, v_startInclusive_3848_, v_endExclusive_3849_);
v___y_3844_ = v___x_3857_;
goto v___jp_3843_;
}
v___jp_3843_:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3845_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0));
v___x_3846_ = lean_string_append(v___y_3844_, v___x_3845_);
return v___x_3846_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___boxed(lean_object* v_str_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(v_str_3858_);
lean_dec_ref(v_str_3858_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg(){
_start:
{
lean_object* v___x_3863_; 
v___x_3863_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___closed__0));
return v___x_3863_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg___boxed(lean_object* v___dummy_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg();
return v_res_3865_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3866_; 
v___x_3866_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___redArg();
return v___x_3866_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0(lean_object* v_s_3867_){
_start:
{
lean_object* v___x_3868_; 
v___x_3868_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___boxed(lean_object* v_s_3869_){
_start:
{
lean_object* v_res_3870_; 
v_res_3870_ = l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0(v_s_3869_);
lean_dec_ref(v_s_3869_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(lean_object* v_str_3871_, lean_object* v___x_3872_, lean_object* v___x_3873_, lean_object* v_a_3874_, lean_object* v_b_3875_){
_start:
{
lean_object* v_it_3877_; lean_object* v_startInclusive_3878_; lean_object* v_endExclusive_3879_; 
if (lean_obj_tag(v_a_3874_) == 0)
{
lean_object* v_currPos_3883_; lean_object* v_searcher_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3907_; 
v_currPos_3883_ = lean_ctor_get(v_a_3874_, 0);
v_searcher_3884_ = lean_ctor_get(v_a_3874_, 1);
v_isSharedCheck_3907_ = !lean_is_exclusive(v_a_3874_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3886_ = v_a_3874_;
v_isShared_3887_ = v_isSharedCheck_3907_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_searcher_3884_);
lean_inc(v_currPos_3883_);
lean_dec(v_a_3874_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3907_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
uint8_t v_decide_3888_; 
v_decide_3888_ = lean_nat_dec_eq(v_searcher_3884_, v___x_3873_);
if (v_decide_3888_ == 0)
{
uint32_t v___x_3889_; uint32_t v___x_3890_; uint8_t v___x_3891_; 
v___x_3889_ = 10;
v___x_3890_ = lean_string_utf8_get_fast(v_str_3871_, v_searcher_3884_);
v___x_3891_ = lean_uint32_dec_eq(v___x_3890_, v___x_3889_);
if (v___x_3891_ == 0)
{
lean_object* v___x_3892_; lean_object* v___x_3894_; 
v___x_3892_ = lean_string_utf8_next_fast(v_str_3871_, v_searcher_3884_);
lean_dec(v_searcher_3884_);
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 1, v___x_3892_);
v___x_3894_ = v___x_3886_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_currPos_3883_);
lean_ctor_set(v_reuseFailAlloc_3896_, 1, v___x_3892_);
v___x_3894_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
v_a_3874_ = v___x_3894_;
goto _start;
}
}
else
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v_slice_3900_; lean_object* v_nextIt_3902_; 
v___x_3897_ = lean_string_utf8_next_fast(v_str_3871_, v_searcher_3884_);
v___x_3898_ = lean_nat_sub(v___x_3897_, v_searcher_3884_);
v___x_3899_ = lean_nat_add(v_searcher_3884_, v___x_3898_);
lean_dec(v___x_3898_);
v_slice_3900_ = l_String_Slice_subslice_x21(v___x_3872_, v_currPos_3883_, v_searcher_3884_);
lean_inc(v___x_3899_);
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 1, v___x_3899_);
lean_ctor_set(v___x_3886_, 0, v___x_3899_);
v_nextIt_3902_ = v___x_3886_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v___x_3899_);
lean_ctor_set(v_reuseFailAlloc_3905_, 1, v___x_3899_);
v_nextIt_3902_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
lean_object* v_startInclusive_3903_; lean_object* v_endExclusive_3904_; 
v_startInclusive_3903_ = lean_ctor_get(v_slice_3900_, 0);
lean_inc(v_startInclusive_3903_);
v_endExclusive_3904_ = lean_ctor_get(v_slice_3900_, 1);
lean_inc(v_endExclusive_3904_);
lean_dec_ref(v_slice_3900_);
v_it_3877_ = v_nextIt_3902_;
v_startInclusive_3878_ = v_startInclusive_3903_;
v_endExclusive_3879_ = v_endExclusive_3904_;
goto v___jp_3876_;
}
}
}
else
{
lean_object* v___x_3906_; 
lean_del_object(v___x_3886_);
lean_dec(v_searcher_3884_);
v___x_3906_ = lean_box(1);
lean_inc(v___x_3873_);
v_it_3877_ = v___x_3906_;
v_startInclusive_3878_ = v_currPos_3883_;
v_endExclusive_3879_ = v___x_3873_;
goto v___jp_3876_;
}
}
}
else
{
lean_dec(v___x_3873_);
lean_dec_ref(v_str_3871_);
return v_b_3875_;
}
v___jp_3876_:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; 
lean_inc_ref(v_str_3871_);
v___x_3880_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3880_, 0, v_str_3871_);
lean_ctor_set(v___x_3880_, 1, v_startInclusive_3878_);
lean_ctor_set(v___x_3880_, 2, v_endExclusive_3879_);
v___x_3881_ = lean_array_push(v_b_3875_, v___x_3880_);
v_a_3874_ = v_it_3877_;
v_b_3875_ = v___x_3881_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg___boxed(lean_object* v_str_3908_, lean_object* v___x_3909_, lean_object* v___x_3910_, lean_object* v_a_3911_, lean_object* v_b_3912_){
_start:
{
lean_object* v_res_3913_; 
v_res_3913_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(v_str_3908_, v___x_3909_, v___x_3910_, v_a_3911_, v_b_3912_);
lean_dec_ref(v___x_3909_);
return v_res_3913_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(lean_object* v_x_3914_, lean_object* v_x_3915_){
_start:
{
if (lean_obj_tag(v_x_3915_) == 0)
{
return v_x_3914_;
}
else
{
lean_object* v_head_3916_; lean_object* v_tail_3917_; lean_object* v___x_3918_; 
v_head_3916_ = lean_ctor_get(v_x_3915_, 0);
v_tail_3917_ = lean_ctor_get(v_x_3915_, 1);
v___x_3918_ = lean_string_append(v_x_3914_, v_head_3916_);
v_x_3914_ = v___x_3918_;
v_x_3915_ = v_tail_3917_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3___boxed(lean_object* v_x_3920_, lean_object* v_x_3921_){
_start:
{
lean_object* v_res_3922_; 
v_res_3922_ = l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(v_x_3920_, v_x_3921_);
lean_dec(v_x_3921_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__2(lean_object* v_a_3923_, lean_object* v_a_3924_){
_start:
{
if (lean_obj_tag(v_a_3923_) == 0)
{
lean_object* v___x_3925_; 
v___x_3925_ = l_List_reverse___redArg(v_a_3924_);
return v___x_3925_;
}
else
{
lean_object* v_head_3926_; lean_object* v_tail_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3936_; 
v_head_3926_ = lean_ctor_get(v_a_3923_, 0);
v_tail_3927_ = lean_ctor_get(v_a_3923_, 1);
v_isSharedCheck_3936_ = !lean_is_exclusive(v_a_3923_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3929_ = v_a_3923_;
v_isShared_3930_ = v_isSharedCheck_3936_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_tail_3927_);
lean_inc(v_head_3926_);
lean_dec(v_a_3923_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3936_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3931_; lean_object* v___x_3933_; 
v___x_3931_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine(v_head_3926_);
lean_dec(v_head_3926_);
if (v_isShared_3930_ == 0)
{
lean_ctor_set(v___x_3929_, 1, v_a_3924_);
lean_ctor_set(v___x_3929_, 0, v___x_3931_);
v___x_3933_ = v___x_3929_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v___x_3931_);
lean_ctor_set(v_reuseFailAlloc_3935_, 1, v_a_3924_);
v___x_3933_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
v_a_3923_ = v_tail_3927_;
v_a_3924_ = v___x_3933_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet(lean_object* v_str_3941_){
_start:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v_lines_3948_; 
v___x_3942_ = lean_unsigned_to_nat(0u);
v___x_3943_ = lean_string_utf8_byte_size(v_str_3941_);
lean_inc_ref(v_str_3941_);
v___x_3944_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3944_, 0, v_str_3941_);
lean_ctor_set(v___x_3944_, 1, v___x_3942_);
lean_ctor_set(v___x_3944_, 2, v___x_3943_);
v___x_3945_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__0___closed__0);
v___x_3946_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__0));
v___x_3947_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(v_str_3941_, v___x_3944_, v___x_3943_, v___x_3945_, v___x_3946_);
lean_dec_ref_known(v___x_3944_, 3);
v_lines_3948_ = lean_array_to_list(v___x_3947_);
if (lean_obj_tag(v_lines_3948_) == 0)
{
lean_object* v___x_3949_; 
v___x_3949_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
return v___x_3949_;
}
else
{
lean_object* v_tail_3950_; 
v_tail_3950_ = lean_ctor_get(v_lines_3948_, 1);
if (lean_obj_tag(v_tail_3950_) == 0)
{
lean_object* v_head_3951_; lean_object* v_str_3952_; lean_object* v_startInclusive_3953_; lean_object* v_endExclusive_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; 
v_head_3951_ = lean_ctor_get(v_lines_3948_, 0);
lean_inc(v_head_3951_);
lean_dec_ref_known(v_lines_3948_, 2);
v_str_3952_ = lean_ctor_get(v_head_3951_, 0);
lean_inc_ref(v_str_3952_);
v_startInclusive_3953_ = lean_ctor_get(v_head_3951_, 1);
lean_inc(v_startInclusive_3953_);
v_endExclusive_3954_ = lean_ctor_get(v_head_3951_, 2);
lean_inc(v_endExclusive_3954_);
lean_dec(v_head_3951_);
v___x_3955_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1));
v___x_3956_ = lean_string_utf8_extract_fast(v_str_3952_, v_startInclusive_3953_, v_endExclusive_3954_);
lean_dec(v_endExclusive_3954_);
lean_dec(v_startInclusive_3953_);
lean_dec_ref(v_str_3952_);
v___x_3957_ = lean_string_append(v___x_3955_, v___x_3956_);
lean_dec_ref(v___x_3956_);
v___x_3958_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2));
v___x_3959_ = lean_string_append(v___x_3957_, v___x_3958_);
return v___x_3959_;
}
else
{
lean_object* v_head_3960_; lean_object* v_str_3961_; lean_object* v_startInclusive_3962_; lean_object* v_endExclusive_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
lean_inc(v_tail_3950_);
v_head_3960_ = lean_ctor_get(v_lines_3948_, 0);
lean_inc(v_head_3960_);
lean_dec_ref_known(v_lines_3948_, 2);
v_str_3961_ = lean_ctor_get(v_head_3960_, 0);
lean_inc_ref(v_str_3961_);
v_startInclusive_3962_ = lean_ctor_get(v_head_3960_, 1);
lean_inc(v_startInclusive_3962_);
v_endExclusive_3963_ = lean_ctor_get(v_head_3960_, 2);
lean_inc(v_endExclusive_3963_);
lean_dec(v_head_3960_);
v___x_3964_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__1));
v___x_3965_ = lean_string_utf8_extract_fast(v_str_3961_, v_startInclusive_3962_, v_endExclusive_3963_);
lean_dec(v_endExclusive_3963_);
lean_dec(v_startInclusive_3962_);
lean_dec_ref(v_str_3961_);
v___x_3966_ = lean_string_append(v___x_3964_, v___x_3965_);
lean_dec_ref(v___x_3965_);
v___x_3967_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_indentLine___closed__0));
v___x_3968_ = lean_string_append(v___x_3966_, v___x_3967_);
v___x_3969_ = lean_box(0);
v___x_3970_ = l_List_mapTR_loop___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__2(v_tail_3950_, v___x_3969_);
v___x_3971_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
v___x_3972_ = l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(v___x_3971_, v___x_3970_);
lean_dec(v___x_3970_);
v___x_3973_ = lean_string_append(v___x_3968_, v___x_3972_);
lean_dec_ref(v___x_3972_);
v___x_3974_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet___closed__2));
v___x_3975_ = lean_string_append(v___x_3973_, v___x_3974_);
return v___x_3975_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1(lean_object* v_str_3976_, lean_object* v___x_3977_, lean_object* v___x_3978_, lean_object* v_inst_3979_, lean_object* v_R_3980_, lean_object* v_a_3981_, lean_object* v_b_3982_){
_start:
{
lean_object* v___x_3983_; 
v___x_3983_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___redArg(v_str_3976_, v___x_3977_, v___x_3978_, v_a_3981_, v_b_3982_);
return v___x_3983_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1___boxed(lean_object* v_str_3984_, lean_object* v___x_3985_, lean_object* v___x_3986_, lean_object* v_inst_3987_, lean_object* v_R_3988_, lean_object* v_a_3989_, lean_object* v_b_3990_){
_start:
{
lean_object* v_res_3991_; 
v_res_3991_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__1(v_str_3984_, v___x_3985_, v___x_3986_, v_inst_3987_, v_R_3988_, v_a_3989_, v_b_3990_);
lean_dec_ref(v___x_3985_);
return v_res_3991_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__0(lean_object* v_a_3992_, lean_object* v_a_3993_){
_start:
{
if (lean_obj_tag(v_a_3992_) == 0)
{
lean_object* v___x_3994_; 
v___x_3994_ = l_List_reverse___redArg(v_a_3993_);
return v___x_3994_;
}
else
{
lean_object* v_head_3995_; lean_object* v_tail_3996_; lean_object* v___x_3998_; uint8_t v_isShared_3999_; uint8_t v_isSharedCheck_4005_; 
v_head_3995_ = lean_ctor_get(v_a_3992_, 0);
v_tail_3996_ = lean_ctor_get(v_a_3992_, 1);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_a_3992_);
if (v_isSharedCheck_4005_ == 0)
{
v___x_3998_ = v_a_3992_;
v_isShared_3999_ = v_isSharedCheck_4005_;
goto v_resetjp_3997_;
}
else
{
lean_inc(v_tail_3996_);
lean_inc(v_head_3995_);
lean_dec(v_a_3992_);
v___x_3998_ = lean_box(0);
v_isShared_3999_ = v_isSharedCheck_4005_;
goto v_resetjp_3997_;
}
v_resetjp_3997_:
{
lean_object* v___x_4000_; lean_object* v___x_4002_; 
v___x_4000_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet(v_head_3995_);
if (v_isShared_3999_ == 0)
{
lean_ctor_set(v___x_3998_, 1, v_a_3993_);
lean_ctor_set(v___x_3998_, 0, v___x_4000_);
v___x_4002_ = v___x_3998_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v___x_4000_);
lean_ctor_set(v_reuseFailAlloc_4004_, 1, v_a_3993_);
v___x_4002_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
v_a_3992_ = v_tail_3996_;
v_a_3993_ = v___x_4002_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(lean_object* v_s_4006_, lean_object* v_pos_4007_){
_start:
{
lean_object* v_str_4008_; lean_object* v_startInclusive_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; uint8_t v_decide_4013_; 
v_str_4008_ = lean_ctor_get(v_s_4006_, 0);
v_startInclusive_4009_ = lean_ctor_get(v_s_4006_, 1);
v___x_4010_ = lean_nat_add(v_startInclusive_4009_, v_pos_4007_);
v___x_4011_ = lean_nat_sub(v___x_4010_, v_startInclusive_4009_);
v___x_4012_ = lean_unsigned_to_nat(0u);
v_decide_4013_ = lean_nat_dec_eq(v___x_4011_, v___x_4012_);
if (v_decide_4013_ == 0)
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4022_; uint32_t v___x_4023_; uint32_t v___x_4024_; uint8_t v___x_4025_; 
lean_inc(v_startInclusive_4009_);
lean_inc_ref(v_str_4008_);
v___x_4014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4014_, 0, v_str_4008_);
lean_ctor_set(v___x_4014_, 1, v_startInclusive_4009_);
lean_ctor_set(v___x_4014_, 2, v___x_4010_);
v___x_4015_ = lean_unsigned_to_nat(1u);
v___x_4016_ = lean_nat_sub(v___x_4011_, v___x_4015_);
lean_dec(v___x_4011_);
v___x_4017_ = l_String_Slice_posLE(v___x_4014_, v___x_4016_);
lean_dec_ref_known(v___x_4014_, 3);
v___x_4022_ = lean_nat_add(v_startInclusive_4009_, v___x_4017_);
v___x_4023_ = lean_string_utf8_get_fast(v_str_4008_, v___x_4022_);
lean_dec(v___x_4022_);
v___x_4024_ = 32;
v___x_4025_ = lean_uint32_dec_eq(v___x_4023_, v___x_4024_);
if (v___x_4025_ == 0)
{
uint32_t v___x_4026_; uint8_t v___x_4027_; 
v___x_4026_ = 9;
v___x_4027_ = lean_uint32_dec_eq(v___x_4023_, v___x_4026_);
if (v___x_4027_ == 0)
{
uint32_t v___x_4028_; uint8_t v___x_4029_; 
v___x_4028_ = 13;
v___x_4029_ = lean_uint32_dec_eq(v___x_4023_, v___x_4028_);
if (v___x_4029_ == 0)
{
uint32_t v___x_4030_; uint8_t v___x_4031_; 
v___x_4030_ = 10;
v___x_4031_ = lean_uint32_dec_eq(v___x_4023_, v___x_4030_);
if (v___x_4031_ == 0)
{
lean_dec(v___x_4017_);
return v_pos_4007_;
}
else
{
goto v___jp_4018_;
}
}
else
{
goto v___jp_4018_;
}
}
else
{
goto v___jp_4018_;
}
}
else
{
goto v___jp_4018_;
}
v___jp_4018_:
{
lean_object* v___x_4019_; uint8_t v___x_4020_; 
v___x_4019_ = lean_nat_add(v___x_4017_, v___x_4015_);
v___x_4020_ = lean_nat_dec_le(v___x_4019_, v_pos_4007_);
lean_dec(v___x_4019_);
if (v___x_4020_ == 0)
{
lean_dec(v___x_4017_);
return v_pos_4007_;
}
else
{
lean_dec(v_pos_4007_);
v_pos_4007_ = v___x_4017_;
goto _start;
}
}
}
else
{
lean_dec(v___x_4011_);
lean_dec(v___x_4010_);
return v_pos_4007_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1___boxed(lean_object* v_s_4032_, lean_object* v_pos_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(v_s_4032_, v_pos_4033_);
lean_dec_ref(v_s_4032_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_getTacticExtensionString(lean_object* v_env_4036_, lean_object* v_tactic_4037_){
_start:
{
lean_object* v_exts_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; uint8_t v___x_4041_; 
v_exts_4038_ = l_Lean_Parser_Tactic_Doc_getTacticExtensions(v_env_4036_, v_tactic_4037_);
v___x_4039_ = lean_array_get_size(v_exts_4038_);
v___x_4040_ = lean_unsigned_to_nat(0u);
v___x_4041_ = lean_nat_dec_eq(v___x_4039_, v___x_4040_);
if (v___x_4041_ == 0)
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___x_4042_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_getTacticExtensionString___closed__0));
v___x_4043_ = lean_array_to_list(v_exts_4038_);
v___x_4044_ = lean_box(0);
v___x_4045_ = l_List_mapTR_loop___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__0(v___x_4043_, v___x_4044_);
v___x_4046_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
v___x_4047_ = l_List_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_getTacticExtensionString_bullet_spec__3(v___x_4046_, v___x_4045_);
lean_dec(v___x_4045_);
v___x_4048_ = lean_string_append(v___x_4042_, v___x_4047_);
lean_dec_ref(v___x_4047_);
v___x_4049_ = lean_string_utf8_byte_size(v___x_4048_);
lean_inc_ref(v___x_4048_);
v___x_4050_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4050_, 0, v___x_4048_);
lean_ctor_set(v___x_4050_, 1, v___x_4040_);
lean_ctor_set(v___x_4050_, 2, v___x_4049_);
v___x_4051_ = l_String_Slice_Pos_revSkipWhile___at___00Lean_Parser_Tactic_Doc_getTacticExtensionString_spec__1(v___x_4050_, v___x_4049_);
lean_dec_ref_known(v___x_4050_, 3);
v___x_4052_ = lean_string_utf8_extract_fast(v___x_4048_, v___x_4040_, v___x_4051_);
lean_dec(v___x_4051_);
lean_dec_ref(v___x_4048_);
return v___x_4052_;
}
else
{
lean_object* v___x_4053_; 
lean_dec_ref(v_exts_4038_);
v___x_4053_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
return v___x_4053_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v_as_4054_, lean_object* v_x_4055_){
_start:
{
lean_object* v_fst_4056_; lean_object* v_snd_4057_; lean_object* v___x_4058_; 
v_fst_4056_ = lean_ctor_get(v_x_4055_, 0);
lean_inc(v_fst_4056_);
v_snd_4057_ = lean_ctor_get(v_x_4055_, 1);
lean_inc(v_snd_4057_);
lean_dec_ref(v_x_4055_);
v___x_4058_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_4056_, v_snd_4057_, v_as_4054_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_4059_, lean_object* v_x_4060_){
_start:
{
if (lean_obj_tag(v_x_4060_) == 0)
{
lean_object* v_k_4061_; lean_object* v_v_4062_; lean_object* v_l_4063_; lean_object* v_r_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; 
v_k_4061_ = lean_ctor_get(v_x_4060_, 1);
v_v_4062_ = lean_ctor_get(v_x_4060_, 2);
v_l_4063_ = lean_ctor_get(v_x_4060_, 3);
v_r_4064_ = lean_ctor_get(v_x_4060_, 4);
v___x_4065_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v_init_4059_, v_l_4063_);
lean_inc(v_v_4062_);
lean_inc(v_k_4061_);
v___x_4066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4066_, 0, v_k_4061_);
lean_ctor_set(v___x_4066_, 1, v_v_4062_);
v___x_4067_ = lean_array_push(v___x_4065_, v___x_4066_);
v_init_4059_ = v___x_4067_;
v_x_4060_ = v_r_4064_;
goto _start;
}
else
{
return v_init_4059_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_4069_, lean_object* v_x_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v_init_4069_, v_x_4070_);
lean_dec(v_x_4070_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_4072_, lean_object* v_pivot_4073_, lean_object* v_as_4074_, lean_object* v_i_4075_, lean_object* v_k_4076_){
_start:
{
uint8_t v___x_4077_; 
v___x_4077_ = lean_nat_dec_lt(v_k_4076_, v_hi_4072_);
if (v___x_4077_ == 0)
{
lean_object* v___x_4078_; lean_object* v___x_4079_; 
lean_dec(v_k_4076_);
v___x_4078_ = lean_array_fswap(v_as_4074_, v_i_4075_, v_hi_4072_);
v___x_4079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4079_, 0, v_i_4075_);
lean_ctor_set(v___x_4079_, 1, v___x_4078_);
return v___x_4079_;
}
else
{
lean_object* v___x_4080_; lean_object* v_fst_4081_; lean_object* v_fst_4082_; uint8_t v___x_4083_; 
v___x_4080_ = lean_array_fget_borrowed(v_as_4074_, v_k_4076_);
v_fst_4081_ = lean_ctor_get(v___x_4080_, 0);
v_fst_4082_ = lean_ctor_get(v_pivot_4073_, 0);
v___x_4083_ = l_Lean_Name_quickLt(v_fst_4081_, v_fst_4082_);
if (v___x_4083_ == 0)
{
lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4084_ = lean_unsigned_to_nat(1u);
v___x_4085_ = lean_nat_add(v_k_4076_, v___x_4084_);
lean_dec(v_k_4076_);
v_k_4076_ = v___x_4085_;
goto _start;
}
else
{
lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4087_ = lean_array_fswap(v_as_4074_, v_i_4075_, v_k_4076_);
v___x_4088_ = lean_unsigned_to_nat(1u);
v___x_4089_ = lean_nat_add(v_i_4075_, v___x_4088_);
lean_dec(v_i_4075_);
v___x_4090_ = lean_nat_add(v_k_4076_, v___x_4088_);
lean_dec(v_k_4076_);
v_as_4074_ = v___x_4087_;
v_i_4075_ = v___x_4089_;
v_k_4076_ = v___x_4090_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_4092_, lean_object* v_pivot_4093_, lean_object* v_as_4094_, lean_object* v_i_4095_, lean_object* v_k_4096_){
_start:
{
lean_object* v_res_4097_; 
v_res_4097_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_4092_, v_pivot_4093_, v_as_4094_, v_i_4095_, v_k_4096_);
lean_dec_ref(v_pivot_4093_);
lean_dec(v_hi_4092_);
return v_res_4097_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_x1_4098_, lean_object* v_x2_4099_){
_start:
{
lean_object* v_fst_4100_; lean_object* v_fst_4101_; uint8_t v___x_4102_; 
v_fst_4100_ = lean_ctor_get(v_x1_4098_, 0);
v_fst_4101_ = lean_ctor_get(v_x2_4099_, 0);
v___x_4102_ = l_Lean_Name_quickLt(v_fst_4100_, v_fst_4101_);
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0___boxed(lean_object* v_x1_4103_, lean_object* v_x2_4104_){
_start:
{
uint8_t v_res_4105_; lean_object* v_r_4106_; 
v_res_4105_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v_x1_4103_, v_x2_4104_);
lean_dec_ref(v_x2_4104_);
lean_dec_ref(v_x1_4103_);
v_r_4106_ = lean_box(v_res_4105_);
return v_r_4106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_4107_, lean_object* v_as_4108_, lean_object* v_lo_4109_, lean_object* v_hi_4110_){
_start:
{
lean_object* v___y_4112_; uint8_t v___x_4122_; 
v___x_4122_ = lean_nat_dec_lt(v_lo_4109_, v_hi_4110_);
if (v___x_4122_ == 0)
{
lean_dec(v_lo_4109_);
return v_as_4108_;
}
else
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v_mid_4125_; lean_object* v___y_4127_; lean_object* v___y_4133_; lean_object* v___x_4138_; lean_object* v___x_4139_; uint8_t v___x_4140_; 
v___x_4123_ = lean_nat_add(v_lo_4109_, v_hi_4110_);
v___x_4124_ = lean_unsigned_to_nat(1u);
v_mid_4125_ = lean_nat_shiftr(v___x_4123_, v___x_4124_);
lean_dec(v___x_4123_);
v___x_4138_ = lean_array_fget_borrowed(v_as_4108_, v_mid_4125_);
v___x_4139_ = lean_array_fget_borrowed(v_as_4108_, v_lo_4109_);
v___x_4140_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_4138_, v___x_4139_);
if (v___x_4140_ == 0)
{
v___y_4133_ = v_as_4108_;
goto v___jp_4132_;
}
else
{
lean_object* v___x_4141_; 
v___x_4141_ = lean_array_fswap(v_as_4108_, v_lo_4109_, v_mid_4125_);
v___y_4133_ = v___x_4141_;
goto v___jp_4132_;
}
v___jp_4126_:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; uint8_t v___x_4130_; 
v___x_4128_ = lean_array_fget_borrowed(v___y_4127_, v_mid_4125_);
v___x_4129_ = lean_array_fget_borrowed(v___y_4127_, v_hi_4110_);
v___x_4130_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_4128_, v___x_4129_);
if (v___x_4130_ == 0)
{
lean_dec(v_mid_4125_);
v___y_4112_ = v___y_4127_;
goto v___jp_4111_;
}
else
{
lean_object* v___x_4131_; 
v___x_4131_ = lean_array_fswap(v___y_4127_, v_mid_4125_, v_hi_4110_);
lean_dec(v_mid_4125_);
v___y_4112_ = v___x_4131_;
goto v___jp_4111_;
}
}
v___jp_4132_:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; uint8_t v___x_4136_; 
v___x_4134_ = lean_array_fget_borrowed(v___y_4133_, v_hi_4110_);
v___x_4135_ = lean_array_fget_borrowed(v___y_4133_, v_lo_4109_);
v___x_4136_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v___x_4134_, v___x_4135_);
if (v___x_4136_ == 0)
{
v___y_4127_ = v___y_4133_;
goto v___jp_4126_;
}
else
{
lean_object* v___x_4137_; 
v___x_4137_ = lean_array_fswap(v___y_4133_, v_lo_4109_, v_hi_4110_);
v___y_4127_ = v___x_4137_;
goto v___jp_4126_;
}
}
}
v___jp_4111_:
{
lean_object* v_pivot_4113_; lean_object* v___x_4114_; lean_object* v_fst_4115_; lean_object* v_snd_4116_; uint8_t v___x_4117_; 
v_pivot_4113_ = lean_array_fget(v___y_4112_, v_hi_4110_);
lean_inc_n(v_lo_4109_, 2);
v___x_4114_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_4110_, v_pivot_4113_, v___y_4112_, v_lo_4109_, v_lo_4109_);
lean_dec(v_pivot_4113_);
v_fst_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_fst_4115_);
v_snd_4116_ = lean_ctor_get(v___x_4114_, 1);
lean_inc(v_snd_4116_);
lean_dec_ref(v___x_4114_);
v___x_4117_ = lean_nat_dec_le(v_hi_4110_, v_fst_4115_);
if (v___x_4117_ == 0)
{
lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___x_4118_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v_n_4107_, v_snd_4116_, v_lo_4109_, v_fst_4115_);
v___x_4119_ = lean_unsigned_to_nat(1u);
v___x_4120_ = lean_nat_add(v_fst_4115_, v___x_4119_);
lean_dec(v_fst_4115_);
v_as_4108_ = v___x_4118_;
v_lo_4109_ = v___x_4120_;
goto _start;
}
else
{
lean_dec(v_fst_4115_);
lean_dec(v_lo_4109_);
return v_snd_4116_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_4142_, lean_object* v_as_4143_, lean_object* v_lo_4144_, lean_object* v_hi_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v_n_4142_, v_as_4143_, v_lo_4144_, v_hi_4145_);
lean_dec(v_hi_4145_);
lean_dec(v_n_4142_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v_x_4149_, lean_object* v_s_4150_){
_start:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___y_4156_; lean_object* v___y_4157_; uint8_t v___x_4160_; 
v___x_4151_ = lean_unsigned_to_nat(0u);
v___x_4152_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_));
v___x_4153_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v___x_4152_, v_s_4150_);
v___x_4154_ = lean_array_get_size(v___x_4153_);
v___x_4160_ = lean_nat_dec_eq(v___x_4154_, v___x_4151_);
if (v___x_4160_ == 0)
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___y_4164_; uint8_t v___x_4166_; 
v___x_4161_ = lean_unsigned_to_nat(1u);
v___x_4162_ = lean_nat_sub(v___x_4154_, v___x_4161_);
v___x_4166_ = lean_nat_dec_le(v___x_4151_, v___x_4162_);
if (v___x_4166_ == 0)
{
lean_inc(v___x_4162_);
v___y_4164_ = v___x_4162_;
goto v___jp_4163_;
}
else
{
v___y_4164_ = v___x_4151_;
goto v___jp_4163_;
}
v___jp_4163_:
{
uint8_t v___x_4165_; 
v___x_4165_ = lean_nat_dec_le(v___y_4164_, v___x_4162_);
if (v___x_4165_ == 0)
{
lean_dec(v___x_4162_);
lean_inc(v___y_4164_);
v___y_4156_ = v___y_4164_;
v___y_4157_ = v___y_4164_;
goto v___jp_4155_;
}
else
{
v___y_4156_ = v___y_4164_;
v___y_4157_ = v___x_4162_;
goto v___jp_4155_;
}
}
}
else
{
lean_object* v___x_4167_; 
lean_inc_ref_n(v___x_4153_, 2);
v___x_4167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4167_, 0, v___x_4153_);
lean_ctor_set(v___x_4167_, 1, v___x_4153_);
lean_ctor_set(v___x_4167_, 2, v___x_4153_);
return v___x_4167_;
}
v___jp_4155_:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; 
v___x_4158_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v___x_4154_, v___x_4153_, v___y_4156_, v___y_4157_);
lean_dec(v___y_4157_);
lean_inc_ref_n(v___x_4158_, 2);
v___x_4159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
lean_ctor_set(v___x_4159_, 1, v___x_4158_);
lean_ctor_set(v___x_4159_, 2, v___x_4158_);
return v___x_4159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v_x_4168_, lean_object* v_s_4169_){
_start:
{
lean_object* v_res_4170_; 
v_res_4170_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(v_x_4168_, v_s_4169_);
lean_dec(v_s_4169_);
lean_dec_ref(v_x_4168_);
return v_res_4170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v_es_4171_){
_start:
{
lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; uint8_t v___x_4176_; 
v___x_4172_ = lean_unsigned_to_nat(0u);
v___x_4173_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__0_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_));
v___x_4174_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v___x_4173_, v_es_4171_);
v___x_4175_ = lean_array_get_size(v___x_4174_);
v___x_4176_ = lean_nat_dec_eq(v___x_4175_, v___x_4172_);
if (v___x_4176_ == 0)
{
lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___y_4180_; uint8_t v___x_4184_; 
v___x_4177_ = lean_unsigned_to_nat(1u);
v___x_4178_ = lean_nat_sub(v___x_4175_, v___x_4177_);
v___x_4184_ = lean_nat_dec_le(v___x_4172_, v___x_4178_);
if (v___x_4184_ == 0)
{
lean_inc(v___x_4178_);
v___y_4180_ = v___x_4178_;
goto v___jp_4179_;
}
else
{
v___y_4180_ = v___x_4172_;
goto v___jp_4179_;
}
v___jp_4179_:
{
uint8_t v___x_4181_; 
v___x_4181_ = lean_nat_dec_le(v___y_4180_, v___x_4178_);
if (v___x_4181_ == 0)
{
lean_object* v___x_4182_; 
lean_dec(v___x_4178_);
lean_inc(v___y_4180_);
v___x_4182_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v___x_4175_, v___x_4174_, v___y_4180_, v___y_4180_);
lean_dec(v___y_4180_);
return v___x_4182_;
}
else
{
lean_object* v___x_4183_; 
v___x_4183_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v___x_4175_, v___x_4174_, v___y_4180_, v___x_4178_);
lean_dec(v___x_4178_);
return v___x_4183_;
}
}
}
else
{
return v___x_4174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v_es_4185_){
_start:
{
lean_object* v_res_4186_; 
v_res_4186_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(v_es_4185_);
lean_dec(v_es_4185_);
return v_res_4186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(lean_object* v___x_4187_, lean_object* v_x_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v___x_4191_; 
v___x_4191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4191_, 0, v___x_4187_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v___x_4192_, lean_object* v_x_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__4_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(v___x_4192_, v_x_4193_, v___y_4194_);
lean_dec_ref(v___y_4194_);
lean_dec_ref(v_x_4193_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4223_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_));
v___x_4224_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_4223_);
return v___x_4224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2____boxed(lean_object* v_a_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_();
return v_res_4226_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0(lean_object* v_init_4227_, lean_object* v_t_4228_){
_start:
{
lean_object* v___x_4229_; 
v___x_4229_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0_spec__0(v_init_4227_, v_t_4228_);
return v___x_4229_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_4230_, lean_object* v_t_4231_){
_start:
{
lean_object* v_res_4232_; 
v_res_4232_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__0(v_init_4230_, v_t_4231_);
lean_dec(v_t_4231_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1(lean_object* v_n_4233_, lean_object* v_as_4234_, lean_object* v_lo_4235_, lean_object* v_hi_4236_, lean_object* v_w_4237_, lean_object* v_hlo_4238_, lean_object* v_hhi_4239_){
_start:
{
lean_object* v___x_4240_; 
v___x_4240_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg(v_n_4233_, v_as_4234_, v_lo_4235_, v_hi_4236_);
return v___x_4240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_4241_, lean_object* v_as_4242_, lean_object* v_lo_4243_, lean_object* v_hi_4244_, lean_object* v_w_4245_, lean_object* v_hlo_4246_, lean_object* v_hhi_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1(v_n_4241_, v_as_4242_, v_lo_4243_, v_hi_4244_, v_w_4245_, v_hlo_4246_, v_hhi_4247_);
lean_dec(v_hi_4244_);
lean_dec(v_n_4241_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_4249_, lean_object* v_lo_4250_, lean_object* v_hi_4251_, lean_object* v_hhi_4252_, lean_object* v_pivot_4253_, lean_object* v_as_4254_, lean_object* v_i_4255_, lean_object* v_k_4256_, lean_object* v_ilo_4257_, lean_object* v_ik_4258_, lean_object* v_w_4259_){
_start:
{
lean_object* v___x_4260_; 
v___x_4260_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_4251_, v_pivot_4253_, v_as_4254_, v_i_4255_, v_k_4256_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_4261_, lean_object* v_lo_4262_, lean_object* v_hi_4263_, lean_object* v_hhi_4264_, lean_object* v_pivot_4265_, lean_object* v_as_4266_, lean_object* v_i_4267_, lean_object* v_k_4268_, lean_object* v_ilo_4269_, lean_object* v_ik_4270_, lean_object* v_w_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1_spec__2(v_n_4261_, v_lo_4262_, v_hi_4263_, v_hhi_4264_, v_pivot_4265_, v_as_4266_, v_i_4267_, v_k_4268_, v_ilo_4269_, v_ik_4270_, v_w_4271_);
lean_dec_ref(v_pivot_4265_);
lean_dec(v_hi_4263_);
lean_dec(v_lo_4262_);
lean_dec(v_n_4261_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1(lean_object* v_tac_4274_, lean_object* v___x_4275_, lean_object* v_toPure_4276_, lean_object* v___f_4277_, lean_object* v_env_4278_){
_start:
{
lean_object* v___x_4282_; 
v___x_4282_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4278_, v_tac_4274_);
if (lean_obj_tag(v___x_4282_) == 0)
{
lean_object* v___x_4283_; lean_object* v_toEnvExtension_4284_; lean_object* v_asyncMode_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
lean_dec_ref(v___f_4277_);
v___x_4283_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_4284_ = lean_ctor_get(v___x_4283_, 0);
v_asyncMode_4285_ = lean_ctor_get(v_toEnvExtension_4284_, 2);
v___x_4286_ = lean_box(0);
v___x_4287_ = 0;
v___x_4288_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4275_, v___x_4283_, v_env_4278_, v_asyncMode_4285_, v___x_4286_, v___x_4287_);
v___x_4289_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_4288_, v_tac_4274_);
lean_dec(v_tac_4274_);
lean_dec(v___x_4288_);
v___x_4290_ = lean_apply_2(v_toPure_4276_, lean_box(0), v___x_4289_);
return v___x_4290_;
}
else
{
lean_object* v_val_4291_; lean_object* v___x_4292_; uint8_t v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; uint8_t v___x_4297_; 
v_val_4291_ = lean_ctor_get(v___x_4282_, 0);
lean_inc(v_val_4291_);
lean_dec_ref_known(v___x_4282_, 1);
v___x_4292_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v___x_4293_ = 0;
v___x_4294_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_4275_, v___x_4292_, v_env_4278_, v_val_4291_, v___x_4293_);
lean_dec(v_val_4291_);
lean_dec_ref(v_env_4278_);
v___x_4295_ = lean_unsigned_to_nat(0u);
v___x_4296_ = lean_array_get_size(v___x_4294_);
v___x_4297_ = lean_nat_dec_lt(v___x_4295_, v___x_4296_);
if (v___x_4297_ == 0)
{
lean_dec_ref(v___x_4294_);
lean_dec_ref(v___f_4277_);
lean_dec(v_tac_4274_);
goto v___jp_4279_;
}
else
{
lean_object* v___x_4298_; lean_object* v___x_4299_; uint8_t v___x_4300_; 
v___x_4298_ = lean_unsigned_to_nat(1u);
v___x_4299_ = lean_nat_sub(v___x_4296_, v___x_4298_);
v___x_4300_ = lean_nat_dec_le(v___x_4295_, v___x_4299_);
if (v___x_4300_ == 0)
{
lean_dec(v___x_4299_);
lean_dec_ref(v___x_4294_);
lean_dec_ref(v___f_4277_);
lean_dec(v_tac_4274_);
goto v___jp_4279_;
}
else
{
lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4301_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
v___x_4302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4302_, 0, v_tac_4274_);
lean_ctor_set(v___x_4302_, 1, v___x_4301_);
v___x_4303_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1___closed__0));
v___x_4304_ = l_Array_binSearchAux___redArg(v___f_4277_, v___x_4303_, v___x_4294_, v___x_4302_, v___x_4295_, v___x_4299_);
lean_dec_ref(v___x_4294_);
if (lean_obj_tag(v___x_4304_) == 0)
{
goto v___jp_4279_;
}
else
{
lean_object* v_val_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4314_; 
v_val_4305_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4314_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4314_ == 0)
{
v___x_4307_ = v___x_4304_;
v_isShared_4308_ = v_isSharedCheck_4314_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_val_4305_);
lean_dec(v___x_4304_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4314_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v_snd_4309_; lean_object* v___x_4311_; 
v_snd_4309_ = lean_ctor_get(v_val_4305_, 1);
lean_inc(v_snd_4309_);
lean_dec(v_val_4305_);
if (v_isShared_4308_ == 0)
{
lean_ctor_set(v___x_4307_, 0, v_snd_4309_);
v___x_4311_ = v___x_4307_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4313_; 
v_reuseFailAlloc_4313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4313_, 0, v_snd_4309_);
v___x_4311_ = v_reuseFailAlloc_4313_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
lean_object* v___x_4312_; 
v___x_4312_ = lean_apply_2(v_toPure_4276_, lean_box(0), v___x_4311_);
return v___x_4312_;
}
}
}
}
}
}
v___jp_4279_:
{
lean_object* v___x_4280_; lean_object* v___x_4281_; 
v___x_4280_ = lean_box(0);
v___x_4281_ = lean_apply_2(v_toPure_4276_, lean_box(0), v___x_4280_);
return v___x_4281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___redArg(lean_object* v_inst_4316_, lean_object* v_inst_4317_, lean_object* v_tac_4318_){
_start:
{
lean_object* v_toApplicative_4319_; lean_object* v_toBind_4320_; lean_object* v_getEnv_4321_; lean_object* v_toPure_4322_; lean_object* v___f_4323_; lean_object* v___x_4324_; lean_object* v___f_4325_; lean_object* v___x_4326_; 
v_toApplicative_4319_ = lean_ctor_get(v_inst_4316_, 0);
lean_inc_ref(v_toApplicative_4319_);
v_toBind_4320_ = lean_ctor_get(v_inst_4316_, 1);
lean_inc(v_toBind_4320_);
lean_dec_ref(v_inst_4316_);
v_getEnv_4321_ = lean_ctor_get(v_inst_4317_, 0);
lean_inc(v_getEnv_4321_);
lean_dec_ref(v_inst_4317_);
v_toPure_4322_ = lean_ctor_get(v_toApplicative_4319_, 1);
lean_inc(v_toPure_4322_);
lean_dec_ref(v_toApplicative_4319_);
v___f_4323_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_customTacticName___redArg___closed__0));
v___x_4324_ = lean_box(1);
v___f_4325_ = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_Doc_customTacticName___redArg___lam__1), 5, 4);
lean_closure_set(v___f_4325_, 0, v_tac_4318_);
lean_closure_set(v___f_4325_, 1, v___x_4324_);
lean_closure_set(v___f_4325_, 2, v_toPure_4322_);
lean_closure_set(v___f_4325_, 3, v___f_4323_);
v___x_4326_ = lean_apply_4(v_toBind_4320_, lean_box(0), lean_box(0), v_getEnv_4321_, v___f_4325_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName(lean_object* v_m_4327_, lean_object* v_inst_4328_, lean_object* v_inst_4329_, lean_object* v_tac_4330_){
_start:
{
lean_object* v___x_4331_; 
v___x_4331_ = l_Lean_Parser_Tactic_Doc_customTacticName___redArg(v_inst_4328_, v_inst_4329_, v_tac_4330_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object* v_addEntryFn_4332_, lean_object* v___x_4333_, lean_object* v_s_4334_){
_start:
{
lean_object* v_importedEntries_4335_; lean_object* v_state_4336_; lean_object* v___x_4338_; uint8_t v_isShared_4339_; uint8_t v_isSharedCheck_4344_; 
v_importedEntries_4335_ = lean_ctor_get(v_s_4334_, 0);
v_state_4336_ = lean_ctor_get(v_s_4334_, 1);
v_isSharedCheck_4344_ = !lean_is_exclusive(v_s_4334_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4338_ = v_s_4334_;
v_isShared_4339_ = v_isSharedCheck_4344_;
goto v_resetjp_4337_;
}
else
{
lean_inc(v_state_4336_);
lean_inc(v_importedEntries_4335_);
lean_dec(v_s_4334_);
v___x_4338_ = lean_box(0);
v_isShared_4339_ = v_isSharedCheck_4344_;
goto v_resetjp_4337_;
}
v_resetjp_4337_:
{
lean_object* v_state_4340_; lean_object* v___x_4342_; 
v_state_4340_ = lean_apply_2(v_addEntryFn_4332_, v_state_4336_, v___x_4333_);
if (v_isShared_4339_ == 0)
{
lean_ctor_set(v___x_4338_, 1, v_state_4340_);
v___x_4342_ = v___x_4338_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_importedEntries_4335_);
lean_ctor_set(v_reuseFailAlloc_4343_, 1, v_state_4340_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_as_4345_, lean_object* v_k_4346_, lean_object* v_x_4347_, lean_object* v_x_4348_){
_start:
{
lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v_m_4351_; lean_object* v_a_4352_; uint8_t v___x_4353_; 
v___x_4349_ = lean_nat_add(v_x_4347_, v_x_4348_);
v___x_4350_ = lean_unsigned_to_nat(1u);
v_m_4351_ = lean_nat_shiftr(v___x_4349_, v___x_4350_);
lean_dec(v___x_4349_);
v_a_4352_ = lean_array_fget_borrowed(v_as_4345_, v_m_4351_);
v___x_4353_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v_a_4352_, v_k_4346_);
if (v___x_4353_ == 0)
{
uint8_t v___x_4354_; 
lean_dec(v_x_4348_);
v___x_4354_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2__spec__1___redArg___lam__0(v_k_4346_, v_a_4352_);
if (v___x_4354_ == 0)
{
lean_object* v___x_4355_; 
lean_dec(v_m_4351_);
lean_dec(v_x_4347_);
lean_inc(v_a_4352_);
v___x_4355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4355_, 0, v_a_4352_);
return v___x_4355_;
}
else
{
lean_object* v___x_4356_; uint8_t v___x_4357_; 
v___x_4356_ = lean_unsigned_to_nat(0u);
v___x_4357_ = lean_nat_dec_eq(v_m_4351_, v___x_4356_);
if (v___x_4357_ == 0)
{
lean_object* v___x_4358_; uint8_t v___x_4359_; 
v___x_4358_ = lean_nat_sub(v_m_4351_, v___x_4350_);
lean_dec(v_m_4351_);
v___x_4359_ = lean_nat_dec_lt(v___x_4358_, v_x_4347_);
if (v___x_4359_ == 0)
{
v_x_4348_ = v___x_4358_;
goto _start;
}
else
{
lean_object* v___x_4361_; 
lean_dec(v___x_4358_);
lean_dec(v_x_4347_);
v___x_4361_ = lean_box(0);
return v___x_4361_;
}
}
else
{
lean_object* v___x_4362_; 
lean_dec(v_m_4351_);
lean_dec(v_x_4347_);
v___x_4362_ = lean_box(0);
return v___x_4362_;
}
}
}
else
{
lean_object* v___x_4363_; uint8_t v___x_4364_; 
lean_dec(v_x_4347_);
v___x_4363_ = lean_nat_add(v_m_4351_, v___x_4350_);
lean_dec(v_m_4351_);
v___x_4364_ = lean_nat_dec_le(v___x_4363_, v_x_4348_);
if (v___x_4364_ == 0)
{
lean_object* v___x_4365_; 
lean_dec(v___x_4363_);
lean_dec(v_x_4348_);
v___x_4365_ = lean_box(0);
return v___x_4365_;
}
else
{
v_x_4347_ = v___x_4363_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_as_4367_, lean_object* v_k_4368_, lean_object* v_x_4369_, lean_object* v_x_4370_){
_start:
{
lean_object* v_res_4371_; 
v_res_4371_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_4367_, v_k_4368_, v_x_4369_, v_x_4370_);
lean_dec_ref(v_k_4368_);
lean_dec_ref(v_as_4367_);
return v_res_4371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(lean_object* v_tac_4372_, lean_object* v___y_4373_){
_start:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v_env_4380_; lean_object* v___x_4381_; 
v___x_4375_ = lean_box(1);
v___x_4376_ = lean_st_ref_get(v___y_4373_);
v_env_4380_ = lean_ctor_get(v___x_4376_, 0);
lean_inc_ref(v_env_4380_);
lean_dec(v___x_4376_);
v___x_4381_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4380_, v_tac_4372_);
if (lean_obj_tag(v___x_4381_) == 0)
{
lean_object* v___x_4382_; lean_object* v_toEnvExtension_4383_; lean_object* v_asyncMode_4384_; lean_object* v___x_4385_; uint8_t v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4382_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_4383_ = lean_ctor_get(v___x_4382_, 0);
v_asyncMode_4384_ = lean_ctor_get(v_toEnvExtension_4383_, 2);
v___x_4385_ = lean_box(0);
v___x_4386_ = 0;
v___x_4387_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4375_, v___x_4382_, v_env_4380_, v_asyncMode_4384_, v___x_4385_, v___x_4386_);
v___x_4388_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_4387_, v_tac_4372_);
lean_dec(v_tac_4372_);
lean_dec(v___x_4387_);
v___x_4389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4389_, 0, v___x_4388_);
return v___x_4389_;
}
else
{
lean_object* v_val_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4418_; 
v_val_4390_ = lean_ctor_get(v___x_4381_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4381_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4392_ = v___x_4381_;
v_isShared_4393_ = v_isSharedCheck_4418_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_val_4390_);
lean_dec(v___x_4381_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4418_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
lean_object* v___x_4394_; uint8_t v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; uint8_t v___x_4399_; 
v___x_4394_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v___x_4395_ = 0;
v___x_4396_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_4375_, v___x_4394_, v_env_4380_, v_val_4390_, v___x_4395_);
lean_dec(v_val_4390_);
lean_dec_ref(v_env_4380_);
v___x_4397_ = lean_unsigned_to_nat(0u);
v___x_4398_ = lean_array_get_size(v___x_4396_);
v___x_4399_ = lean_nat_dec_lt(v___x_4397_, v___x_4398_);
if (v___x_4399_ == 0)
{
lean_dec_ref(v___x_4396_);
lean_del_object(v___x_4392_);
lean_dec(v_tac_4372_);
goto v___jp_4377_;
}
else
{
lean_object* v___x_4400_; lean_object* v___x_4401_; uint8_t v___x_4402_; 
v___x_4400_ = lean_unsigned_to_nat(1u);
v___x_4401_ = lean_nat_sub(v___x_4398_, v___x_4400_);
v___x_4402_ = lean_nat_dec_le(v___x_4397_, v___x_4401_);
if (v___x_4402_ == 0)
{
lean_dec(v___x_4401_);
lean_dec_ref(v___x_4396_);
lean_del_object(v___x_4392_);
lean_dec(v_tac_4372_);
goto v___jp_4377_;
}
else
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4403_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6_spec__10___closed__1));
v___x_4404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4404_, 0, v_tac_4372_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
v___x_4405_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(v___x_4396_, v___x_4404_, v___x_4397_, v___x_4401_);
lean_dec_ref_known(v___x_4404_, 2);
lean_dec_ref(v___x_4396_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_del_object(v___x_4392_);
goto v___jp_4377_;
}
else
{
lean_object* v_val_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4417_; 
v_val_4406_ = lean_ctor_get(v___x_4405_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4408_ = v___x_4405_;
v_isShared_4409_ = v_isSharedCheck_4417_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_val_4406_);
lean_dec(v___x_4405_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4417_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v_snd_4410_; lean_object* v___x_4412_; 
v_snd_4410_ = lean_ctor_get(v_val_4406_, 1);
lean_inc(v_snd_4410_);
lean_dec(v_val_4406_);
if (v_isShared_4409_ == 0)
{
lean_ctor_set(v___x_4408_, 0, v_snd_4410_);
v___x_4412_ = v___x_4408_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_snd_4410_);
v___x_4412_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
lean_object* v___x_4414_; 
if (v_isShared_4393_ == 0)
{
lean_ctor_set_tag(v___x_4392_, 0);
lean_ctor_set(v___x_4392_, 0, v___x_4412_);
v___x_4414_ = v___x_4392_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v___x_4412_);
v___x_4414_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
return v___x_4414_;
}
}
}
}
}
}
}
}
v___jp_4377_:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4378_ = lean_box(0);
v___x_4379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4378_);
return v___x_4379_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_tac_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_){
_start:
{
lean_object* v_res_4422_; 
v_res_4422_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(v_tac_4419_, v___y_4420_);
lean_dec(v___y_4420_);
return v_res_4422_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4424_; lean_object* v___x_4425_; 
v___x_4424_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4425_ = l_Lean_stringToMessageData(v___x_4424_);
return v___x_4425_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4427_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4428_ = l_Lean_stringToMessageData(v___x_4427_);
return v___x_4428_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; 
v___x_4430_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4431_ = l_Lean_stringToMessageData(v___x_4430_);
return v___x_4431_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; 
v___x_4433_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4434_ = l_Lean_stringToMessageData(v___x_4433_);
return v___x_4434_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___x_4436_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4437_ = l_Lean_stringToMessageData(v___x_4436_);
return v___x_4437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(lean_object* v___x_4444_, lean_object* v___x_4445_, lean_object* v___x_4446_, lean_object* v___x_4447_, lean_object* v_name_4448_, lean_object* v_decl_4449_, lean_object* v_stx_4450_, uint8_t v_kind_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_){
_start:
{
lean_object* v___y_4456_; lean_object* v___y_4457_; lean_object* v_nextMacroScope_4458_; lean_object* v_ngen_4459_; lean_object* v_auxDeclNGen_4460_; lean_object* v_traceState_4461_; lean_object* v_recordedDeps_4462_; lean_object* v_messages_4463_; lean_object* v_infoState_4464_; lean_object* v_snapshotTasks_4465_; lean_object* v___y_4466_; lean_object* v___y_4472_; lean_object* v___y_4473_; lean_object* v___y_4497_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___y_4515_; lean_object* v___y_4516_; lean_object* v___y_4517_; lean_object* v___y_4533_; uint8_t v___y_4534_; lean_object* v___y_4535_; lean_object* v___y_4536_; lean_object* v_name_4564_; lean_object* v___y_4565_; lean_object* v___y_4566_; uint8_t v___x_4621_; uint8_t v___x_4622_; 
v___x_4621_ = 0;
v___x_4622_ = l_Lean_instBEqAttributeKind_beq(v_kind_4451_, v___x_4621_);
if (v___x_4622_ == 0)
{
lean_object* v___x_4623_; 
lean_dec(v_stx_4450_);
lean_dec(v_decl_4449_);
lean_dec_ref(v___x_4447_);
lean_dec_ref(v___x_4446_);
lean_dec_ref(v___x_4445_);
lean_dec(v___x_4444_);
v___x_4623_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__7___redArg(v_name_4448_, v_kind_4451_, v___y_4452_, v___y_4453_);
return v___x_4623_;
}
else
{
goto v___jp_4580_;
}
v___jp_4455_:
{
lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4467_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__4_spec__6___closed__1);
v___x_4468_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4468_, 0, v___y_4466_);
lean_ctor_set(v___x_4468_, 1, v_nextMacroScope_4458_);
lean_ctor_set(v___x_4468_, 2, v_ngen_4459_);
lean_ctor_set(v___x_4468_, 3, v_auxDeclNGen_4460_);
lean_ctor_set(v___x_4468_, 4, v_traceState_4461_);
lean_ctor_set(v___x_4468_, 5, v___x_4467_);
lean_ctor_set(v___x_4468_, 6, v_recordedDeps_4462_);
lean_ctor_set(v___x_4468_, 7, v_messages_4463_);
lean_ctor_set(v___x_4468_, 8, v_infoState_4464_);
lean_ctor_set(v___x_4468_, 9, v_snapshotTasks_4465_);
v___x_4469_ = lean_st_ref_put(v___y_4457_, v___x_4468_);
v___x_4470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4470_, 0, v___y_4456_);
return v___x_4470_;
}
v___jp_4471_:
{
lean_object* v___x_4474_; lean_object* v_env_4475_; lean_object* v_nextMacroScope_4476_; lean_object* v_ngen_4477_; lean_object* v_auxDeclNGen_4478_; lean_object* v_traceState_4479_; lean_object* v_recordedDeps_4480_; lean_object* v_messages_4481_; lean_object* v_infoState_4482_; lean_object* v_snapshotTasks_4483_; lean_object* v___x_4484_; lean_object* v_toEnvExtension_4485_; lean_object* v_addEntryFn_4486_; lean_object* v_asyncMode_4487_; uint8_t v_logWrites_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___f_4491_; uint8_t v___x_4492_; 
v___x_4474_ = lean_st_ref_take(v___y_4473_);
v_env_4475_ = lean_ctor_get(v___x_4474_, 0);
lean_inc_ref(v_env_4475_);
v_nextMacroScope_4476_ = lean_ctor_get(v___x_4474_, 1);
lean_inc(v_nextMacroScope_4476_);
v_ngen_4477_ = lean_ctor_get(v___x_4474_, 2);
lean_inc_ref(v_ngen_4477_);
v_auxDeclNGen_4478_ = lean_ctor_get(v___x_4474_, 3);
lean_inc_ref(v_auxDeclNGen_4478_);
v_traceState_4479_ = lean_ctor_get(v___x_4474_, 4);
lean_inc_ref(v_traceState_4479_);
v_recordedDeps_4480_ = lean_ctor_get(v___x_4474_, 6);
lean_inc_ref(v_recordedDeps_4480_);
v_messages_4481_ = lean_ctor_get(v___x_4474_, 7);
lean_inc_ref(v_messages_4481_);
v_infoState_4482_ = lean_ctor_get(v___x_4474_, 8);
lean_inc_ref(v_infoState_4482_);
v_snapshotTasks_4483_ = lean_ctor_get(v___x_4474_, 9);
lean_inc_ref(v_snapshotTasks_4483_);
lean_dec(v___x_4474_);
v___x_4484_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_4485_ = lean_ctor_get(v___x_4484_, 0);
v_addEntryFn_4486_ = lean_ctor_get(v___x_4484_, 3);
v_asyncMode_4487_ = lean_ctor_get(v_toEnvExtension_4485_, 2);
v_logWrites_4488_ = lean_ctor_get_uint8(v_toEnvExtension_4485_, sizeof(void*)*6);
v___x_4489_ = lean_box(0);
v___x_4490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4490_, 0, v_decl_4449_);
lean_ctor_set(v___x_4490_, 1, v___y_4472_);
lean_inc(v_addEntryFn_4486_);
v___f_4491_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_), 3, 2);
lean_closure_set(v___f_4491_, 0, v_addEntryFn_4486_);
lean_closure_set(v___f_4491_, 1, v___x_4490_);
v___x_4492_ = 1;
if (v_logWrites_4488_ == 0)
{
lean_object* v___x_4493_; 
lean_inc_ref(v_toEnvExtension_4485_);
v___x_4493_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4485_, v_env_4475_, v___f_4491_, v_asyncMode_4487_, v___x_4444_, v___x_4492_);
v___y_4456_ = v___x_4489_;
v___y_4457_ = v___y_4473_;
v_nextMacroScope_4458_ = v_nextMacroScope_4476_;
v_ngen_4459_ = v_ngen_4477_;
v_auxDeclNGen_4460_ = v_auxDeclNGen_4478_;
v_traceState_4461_ = v_traceState_4479_;
v_recordedDeps_4462_ = v_recordedDeps_4480_;
v_messages_4463_ = v_messages_4481_;
v_infoState_4464_ = v_infoState_4482_;
v_snapshotTasks_4465_ = v_snapshotTasks_4483_;
v___y_4466_ = v___x_4493_;
goto v___jp_4455_;
}
else
{
lean_object* v___x_4494_; lean_object* v___x_4495_; 
lean_inc_ref_n(v_toEnvExtension_4485_, 2);
v___x_4494_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_4485_, v_env_4475_);
lean_dec_ref(v_env_4475_);
v___x_4495_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4485_, v___x_4494_, v___f_4491_, v_asyncMode_4487_, v___x_4444_, v___x_4492_);
v___y_4456_ = v___x_4489_;
v___y_4457_ = v___y_4473_;
v_nextMacroScope_4458_ = v_nextMacroScope_4476_;
v_ngen_4459_ = v_ngen_4477_;
v_auxDeclNGen_4460_ = v_auxDeclNGen_4478_;
v_traceState_4461_ = v_traceState_4479_;
v_recordedDeps_4462_ = v_recordedDeps_4480_;
v_messages_4463_ = v_messages_4481_;
v_infoState_4464_ = v_infoState_4482_;
v_snapshotTasks_4465_ = v_snapshotTasks_4483_;
v___y_4466_ = v___x_4495_;
goto v___jp_4455_;
}
}
v___jp_4496_:
{
lean_object* v___x_4500_; lean_object* v_a_4501_; 
lean_inc(v_decl_4449_);
v___x_4500_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(v_decl_4449_, v___y_4499_);
v_a_4501_ = lean_ctor_get(v___x_4500_, 0);
lean_inc(v_a_4501_);
lean_dec_ref(v___x_4500_);
if (lean_obj_tag(v_a_4501_) == 1)
{
lean_object* v_val_4502_; lean_object* v___x_4503_; uint8_t v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
lean_dec_ref(v___y_4497_);
lean_dec(v___x_4444_);
v_val_4502_ = lean_ctor_get(v_a_4501_, 0);
lean_inc(v_val_4502_);
lean_dec_ref_known(v_a_4501_, 1);
v___x_4503_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4504_ = 0;
v___x_4505_ = l_Lean_MessageData_ofConstName(v_decl_4449_, v___x_4504_);
v___x_4506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4503_);
lean_ctor_set(v___x_4506_, 1, v___x_4505_);
v___x_4507_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4508_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4508_, 0, v___x_4506_);
lean_ctor_set(v___x_4508_, 1, v___x_4507_);
v___x_4509_ = l_Lean_stringToMessageData(v_val_4502_);
v___x_4510_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4510_, 0, v___x_4508_);
lean_ctor_set(v___x_4510_, 1, v___x_4509_);
v___x_4511_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4510_);
lean_ctor_set(v___x_4512_, 1, v___x_4511_);
v___x_4513_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_4512_, v___y_4498_, v___y_4499_);
return v___x_4513_;
}
else
{
lean_dec(v_a_4501_);
v___y_4472_ = v___y_4497_;
v___y_4473_ = v___y_4499_;
goto v___jp_4471_;
}
}
v___jp_4514_:
{
lean_object* v___x_4518_; lean_object* v_env_4519_; lean_object* v___x_4520_; 
v___x_4518_ = lean_st_ref_get(v___y_4517_);
v_env_4519_ = lean_ctor_get(v___x_4518_, 0);
lean_inc_ref(v_env_4519_);
lean_dec(v___x_4518_);
lean_inc(v_decl_4449_);
v___x_4520_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_4519_, v_decl_4449_);
if (lean_obj_tag(v___x_4520_) == 1)
{
lean_object* v_val_4521_; lean_object* v___x_4522_; uint8_t v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
lean_dec_ref(v___y_4515_);
lean_dec(v___x_4444_);
v_val_4521_ = lean_ctor_get(v___x_4520_, 0);
lean_inc(v_val_4521_);
lean_dec_ref_known(v___x_4520_, 1);
v___x_4522_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4523_ = 0;
v___x_4524_ = l_Lean_MessageData_ofConstName(v_decl_4449_, v___x_4523_);
v___x_4525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4522_);
lean_ctor_set(v___x_4525_, 1, v___x_4524_);
v___x_4526_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__1___closed__1_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_);
v___x_4527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4525_);
lean_ctor_set(v___x_4527_, 1, v___x_4526_);
v___x_4528_ = l_Lean_MessageData_ofConstName(v_val_4521_, v___x_4523_);
v___x_4529_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4527_);
lean_ctor_set(v___x_4529_, 1, v___x_4528_);
v___x_4530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4530_, 0, v___x_4529_);
lean_ctor_set(v___x_4530_, 1, v___x_4522_);
v___x_4531_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_stx_4450_, v___x_4530_, v___y_4516_, v___y_4517_);
lean_dec(v_stx_4450_);
return v___x_4531_;
}
else
{
lean_dec(v___x_4520_);
lean_dec(v_stx_4450_);
v___y_4497_ = v___y_4515_;
v___y_4498_ = v___y_4516_;
v___y_4499_ = v___y_4517_;
goto v___jp_4496_;
}
}
v___jp_4532_:
{
lean_object* v___x_4537_; lean_object* v_env_4538_; lean_object* v___x_4539_; 
v___x_4537_ = lean_st_ref_get(v___y_4536_);
v_env_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc_ref(v_env_4538_);
lean_dec(v___x_4537_);
v___x_4539_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4538_, v_decl_4449_);
lean_dec_ref(v_env_4538_);
if (lean_obj_tag(v___x_4539_) == 1)
{
lean_object* v_val_4540_; lean_object* v___x_4541_; lean_object* v_env_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; uint8_t v___x_4545_; 
lean_dec_ref(v___y_4533_);
lean_dec(v___x_4444_);
v_val_4540_ = lean_ctor_get(v___x_4539_, 0);
lean_inc(v_val_4540_);
lean_dec_ref_known(v___x_4539_, 1);
v___x_4541_ = lean_st_ref_get(v___y_4536_);
v_env_4542_ = lean_ctor_get(v___x_4541_, 0);
lean_inc_ref(v_env_4542_);
lean_dec(v___x_4541_);
v___x_4543_ = l_Lean_Environment_allImportedModuleNames(v_env_4542_);
lean_dec_ref(v_env_4542_);
v___x_4544_ = lean_array_get_size(v___x_4543_);
v___x_4545_ = lean_nat_dec_lt(v_val_4540_, v___x_4544_);
if (v___x_4545_ == 0)
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; 
lean_dec_ref(v___x_4543_);
lean_dec(v_val_4540_);
v___x_4546_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4547_ = l_Lean_MessageData_ofConstName(v_decl_4449_, v___y_4534_);
v___x_4548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4546_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4548_);
lean_ctor_set(v___x_4550_, 1, v___x_4549_);
v___x_4551_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_stx_4450_, v___x_4550_, v___y_4535_, v___y_4536_);
lean_dec(v_stx_4450_);
return v___x_4551_;
}
else
{
lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4552_ = lean_array_fget(v___x_4543_, v_val_4540_);
lean_dec(v_val_4540_);
lean_dec_ref(v___x_4543_);
v___x_4553_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4554_ = l_Lean_MessageData_ofConstName(v_decl_4449_, v___y_4534_);
v___x_4555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4555_, 0, v___x_4553_);
lean_ctor_set(v___x_4555_, 1, v___x_4554_);
v___x_4556_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4555_);
lean_ctor_set(v___x_4557_, 1, v___x_4556_);
v___x_4558_ = l_Lean_MessageData_ofName(v___x_4552_);
v___x_4559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4557_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
v___x_4560_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4559_);
lean_ctor_set(v___x_4561_, 1, v___x_4560_);
v___x_4562_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_stx_4450_, v___x_4561_, v___y_4535_, v___y_4536_);
lean_dec(v_stx_4450_);
return v___x_4562_;
}
}
else
{
lean_dec(v___x_4539_);
v___y_4515_ = v___y_4533_;
v___y_4516_ = v___y_4535_;
v___y_4517_ = v___y_4536_;
goto v___jp_4514_;
}
}
v___jp_4563_:
{
lean_object* v___x_4567_; lean_object* v_env_4568_; uint8_t v___x_4569_; lean_object* v___x_4570_; 
v___x_4567_ = lean_st_ref_get(v___y_4566_);
v_env_4568_ = lean_ctor_get(v___x_4567_, 0);
lean_inc_ref(v_env_4568_);
lean_dec(v___x_4567_);
v___x_4569_ = 0;
lean_inc(v_decl_4449_);
v___x_4570_ = l_Lean_Environment_find_x3f(v_env_4568_, v_decl_4449_, v___x_4569_);
if (lean_obj_tag(v___x_4570_) == 0)
{
v___y_4515_ = v_name_4564_;
v___y_4516_ = v___y_4565_;
v___y_4517_ = v___y_4566_;
goto v___jp_4514_;
}
else
{
lean_object* v___x_4571_; lean_object* v_env_4572_; uint8_t v___x_4573_; 
lean_dec_ref_known(v___x_4570_, 1);
v___x_4571_ = lean_st_ref_get(v___y_4566_);
v_env_4572_ = lean_ctor_get(v___x_4571_, 0);
lean_inc_ref(v_env_4572_);
lean_dec(v___x_4571_);
v___x_4573_ = l_Lean_Parser_Tactic_Doc_isTactic(v_env_4572_, v_decl_4449_);
if (v___x_4573_ == 0)
{
lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
lean_dec_ref(v_name_4564_);
lean_dec(v___x_4444_);
v___x_4574_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4575_ = l_Lean_MessageData_ofConstName(v_decl_4449_, v___x_4569_);
v___x_4576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4576_, 0, v___x_4574_);
lean_ctor_set(v___x_4576_, 1, v___x_4575_);
v___x_4577_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_4578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4578_, 0, v___x_4576_);
lean_ctor_set(v___x_4578_, 1, v___x_4577_);
v___x_4579_ = l_Lean_throwErrorAt___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__5___redArg(v_stx_4450_, v___x_4578_, v___y_4565_, v___y_4566_);
lean_dec(v_stx_4450_);
return v___x_4579_;
}
else
{
v___y_4533_ = v_name_4564_;
v___y_4534_ = v___x_4569_;
v___y_4535_ = v___y_4565_;
v___y_4536_ = v___y_4566_;
goto v___jp_4532_;
}
}
}
v___jp_4580_:
{
lean_object* v___x_4581_; lean_object* v___x_4582_; uint8_t v___x_4583_; 
v___x_4581_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__10_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_4582_ = l_Lean_Name_mkStr4(v___x_4445_, v___x_4446_, v___x_4581_, v___x_4447_);
lean_inc(v_stx_4450_);
v___x_4583_ = l_Lean_Syntax_isOfKind(v_stx_4450_, v___x_4582_);
lean_dec(v___x_4582_);
if (v___x_4583_ == 0)
{
lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4597_; 
lean_dec(v_stx_4450_);
lean_dec(v_decl_4449_);
lean_dec(v___x_4444_);
v___x_4584_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_4585_ = l_Lean_MessageData_ofName(v_name_4448_);
v___x_4586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4586_, 0, v___x_4584_);
lean_ctor_set(v___x_4586_, 1, v___x_4585_);
v___x_4587_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_4588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4588_, 0, v___x_4586_);
lean_ctor_set(v___x_4588_, 1, v___x_4587_);
v___x_4589_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_4588_, v___y_4452_, v___y_4453_);
v_a_4590_ = lean_ctor_get(v___x_4589_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4592_ = v___x_4589_;
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v___x_4589_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
return v___x_4595_;
}
}
}
else
{
lean_object* v___x_4598_; lean_object* v_name_4599_; lean_object* v___x_4600_; uint8_t v___x_4601_; 
v___x_4598_ = lean_unsigned_to_nat(1u);
v_name_4599_ = l_Lean_Syntax_getArg(v_stx_4450_, v___x_4598_);
v___x_4600_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__11_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
lean_inc(v_name_4599_);
v___x_4601_ = l_Lean_Syntax_isOfKind(v_name_4599_, v___x_4600_);
if (v___x_4601_ == 0)
{
lean_object* v___x_4602_; uint8_t v___x_4603_; 
v___x_4602_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0___closed__13_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
lean_inc(v_name_4599_);
v___x_4603_ = l_Lean_Syntax_isOfKind(v_name_4599_, v___x_4602_);
if (v___x_4603_ == 0)
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v_a_4610_; lean_object* v___x_4612_; uint8_t v_isShared_4613_; uint8_t v_isSharedCheck_4617_; 
lean_dec(v_name_4599_);
lean_dec(v_stx_4450_);
lean_dec(v_decl_4449_);
lean_dec(v___x_4444_);
v___x_4604_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__12_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_4605_ = l_Lean_MessageData_ofName(v_name_4448_);
v___x_4606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4606_, 0, v___x_4604_);
lean_ctor_set(v___x_4606_, 1, v___x_4605_);
v___x_4607_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__14_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_4608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4606_);
lean_ctor_set(v___x_4608_, 1, v___x_4607_);
v___x_4609_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_4608_, v___y_4452_, v___y_4453_);
v_a_4610_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4617_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4612_ = v___x_4609_;
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
else
{
lean_inc(v_a_4610_);
lean_dec(v___x_4609_);
v___x_4612_ = lean_box(0);
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
v_resetjp_4611_:
{
lean_object* v___x_4615_; 
if (v_isShared_4613_ == 0)
{
v___x_4615_ = v___x_4612_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v_a_4610_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
}
}
}
else
{
lean_object* v___x_4618_; lean_object* v___x_4619_; 
lean_dec(v_name_4448_);
v___x_4618_ = l_Lean_TSyntax_getId(v_name_4599_);
lean_dec(v_name_4599_);
v___x_4619_ = l_Lean_Name_toString(v___x_4618_, v___x_4601_);
v_name_4564_ = v___x_4619_;
v___y_4565_ = v___y_4452_;
v___y_4566_ = v___y_4453_;
goto v___jp_4563_;
}
}
else
{
lean_object* v___x_4620_; 
lean_dec(v_name_4448_);
v___x_4620_ = l_Lean_TSyntax_getString(v_name_4599_);
lean_dec(v_name_4599_);
v_name_4564_ = v___x_4620_;
v___y_4565_ = v___y_4452_;
v___y_4566_ = v___y_4453_;
goto v___jp_4563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object* v___x_4624_, lean_object* v___x_4625_, lean_object* v___x_4626_, lean_object* v___x_4627_, lean_object* v_name_4628_, lean_object* v_decl_4629_, lean_object* v_stx_4630_, lean_object* v_kind_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_){
_start:
{
uint8_t v_kind_boxed_4635_; lean_object* v_res_4636_; 
v_kind_boxed_4635_ = lean_unbox(v_kind_4631_);
v_res_4636_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__0_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(v___x_4624_, v___x_4625_, v___x_4626_, v___x_4627_, v_name_4628_, v_decl_4629_, v_stx_4630_, v_kind_boxed_4635_, v___y_4632_, v___y_4633_);
lean_dec(v___y_4633_);
lean_dec_ref(v___y_4632_);
return v_res_4636_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4648_ = lean_unsigned_to_nat(3374007381u);
v___x_4649_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__22_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_4650_ = l_Lean_Name_num___override(v___x_4649_, v___x_4648_);
return v___x_4650_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; 
v___x_4651_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__24_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_4652_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__4_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4653_ = l_Lean_Name_str___override(v___x_4652_, v___x_4651_);
return v___x_4653_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4654_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__26_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_));
v___x_4655_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__5_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4656_ = l_Lean_Name_str___override(v___x_4655_, v___x_4654_);
return v___x_4656_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4657_ = lean_unsigned_to_nat(2u);
v___x_4658_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__6_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4659_ = l_Lean_Name_num___override(v___x_4658_, v___x_4657_);
return v___x_4659_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4661_; lean_object* v___x_4662_; lean_object* v_name_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4661_ = 2;
v___x_4662_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__8_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v_name_4663_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__1_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4664_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__7_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4665_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4665_, 0, v___x_4664_);
lean_ctor_set(v___x_4665_, 1, v_name_4663_);
lean_ctor_set(v___x_4665_, 2, v___x_4662_);
lean_ctor_set_uint8(v___x_4665_, sizeof(void*)*3, v___x_4661_);
return v___x_4665_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4666_; lean_object* v___f_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___f_4666_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__2_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___f_4667_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__3_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_));
v___x_4668_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__9_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4668_);
lean_ctor_set(v___x_4669_, 1, v___f_4667_);
lean_ctor_set(v___x_4669_, 2, v___f_4666_);
return v___x_4669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4671_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___closed__10_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_);
v___x_4672_ = l_Lean_registerBuiltinAttribute(v___x_4671_);
return v___x_4672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2____boxed(lean_object* v_a_4673_){
_start:
{
lean_object* v_res_4674_; 
v_res_4674_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_();
return v_res_4674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0(lean_object* v_tac_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
lean_object* v___x_4679_; 
v___x_4679_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___redArg(v_tac_4675_, v___y_4677_);
return v___x_4679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0___boxed(lean_object* v_tac_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_){
_start:
{
lean_object* v_res_4684_; 
v_res_4684_ = l_Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0(v_tac_4680_, v___y_4681_, v___y_4682_);
lean_dec(v___y_4682_);
lean_dec_ref(v___y_4681_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_as_4685_, lean_object* v_k_4686_, lean_object* v_x_4687_, lean_object* v_x_4688_, lean_object* v_x_4689_){
_start:
{
lean_object* v___x_4690_; 
v___x_4690_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___redArg(v_as_4685_, v_k_4686_, v_x_4687_, v_x_4688_);
return v___x_4690_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_as_4691_, lean_object* v_k_4692_, lean_object* v_x_4693_, lean_object* v_x_4694_, lean_object* v_x_4695_){
_start:
{
lean_object* v_res_4696_; 
v_res_4696_ = l_Array_binSearchAux___at___00Lean_Parser_Tactic_Doc_customTacticName___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2__spec__0_spec__0(v_as_4691_, v_k_4692_, v_x_4693_, v_x_4694_, v_x_4695_);
lean_dec_ref(v_k_4692_);
lean_dec_ref(v_as_4691_);
return v_res_4696_;
}
}
static lean_object* _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; 
v___x_4698_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__0));
v___x_4699_ = l_Lean_stringToMessageData(v___x_4698_);
return v___x_4699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0(lean_object* v___x_4700_, lean_object* v___x_4701_, lean_object* v_catName_4702_, lean_object* v_declName_4703_, uint8_t v___builtIn_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_){
_start:
{
lean_object* v___x_4708_; uint8_t v___x_4709_; lean_object* v___y_4711_; lean_object* v___y_4712_; lean_object* v___y_4734_; lean_object* v___y_4735_; 
v___x_4708_ = ((lean_object*)(l_Lean_Parser_Tactic_Doc_isTactic___closed__1));
v___x_4709_ = lean_name_eq(v_catName_4702_, v___x_4708_);
if (v___x_4709_ == 0)
{
lean_object* v___x_4751_; lean_object* v_env_4752_; lean_object* v___x_4753_; 
v___x_4751_ = lean_st_ref_get(v___y_4706_);
v_env_4752_ = lean_ctor_get(v___x_4751_, 0);
lean_inc_ref(v_env_4752_);
lean_dec(v___x_4751_);
lean_inc(v_declName_4703_);
v___x_4753_ = l_Lean_Parser_Tactic_Doc_alternativeOfTactic(v_env_4752_, v_declName_4703_);
if (lean_obj_tag(v___x_4753_) == 0)
{
v___y_4734_ = v___y_4705_;
v___y_4735_ = v___y_4706_;
goto v___jp_4733_;
}
else
{
lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; 
lean_dec_ref_known(v___x_4753_, 1);
lean_dec(v___x_4701_);
lean_dec(v___x_4700_);
v___x_4754_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4755_ = l_Lean_MessageData_ofConstName(v_declName_4703_, v___x_4709_);
v___x_4756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4756_, 0, v___x_4754_);
lean_ctor_set(v___x_4756_, 1, v___x_4755_);
v___x_4757_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_4758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4758_, 0, v___x_4756_);
lean_ctor_set(v___x_4758_, 1, v___x_4757_);
v___x_4759_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_4758_, v___y_4705_, v___y_4706_);
return v___x_4759_;
}
}
else
{
lean_object* v___x_4760_; lean_object* v___x_4761_; 
lean_dec(v_declName_4703_);
lean_dec(v___x_4701_);
lean_dec(v___x_4700_);
v___x_4760_ = lean_box(0);
v___x_4761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4761_, 0, v___x_4760_);
return v___x_4761_;
}
v___jp_4710_:
{
lean_object* v___x_4713_; lean_object* v_env_4714_; lean_object* v___x_4715_; lean_object* v_toEnvExtension_4716_; lean_object* v_asyncMode_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4713_ = lean_st_ref_get(v___y_4712_);
v_env_4714_ = lean_ctor_get(v___x_4713_, 0);
lean_inc_ref(v_env_4714_);
lean_dec(v___x_4713_);
v___x_4715_ = l_Lean_Parser_Tactic_Doc_tacticNameExt;
v_toEnvExtension_4716_ = lean_ctor_get(v___x_4715_, 0);
v_asyncMode_4717_ = lean_ctor_get(v_toEnvExtension_4716_, 2);
v___x_4718_ = lean_box(0);
v___x_4719_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4700_, v___x_4715_, v_env_4714_, v_asyncMode_4717_, v___x_4718_, v___x_4709_);
v___x_4720_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_4719_, v_declName_4703_);
lean_dec(v___x_4719_);
if (lean_obj_tag(v___x_4720_) == 1)
{
lean_object* v_val_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
v_val_4721_ = lean_ctor_get(v___x_4720_, 0);
lean_inc(v_val_4721_);
lean_dec_ref_known(v___x_4720_, 1);
v___x_4722_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4723_ = l_Lean_MessageData_ofConstName(v_declName_4703_, v___x_4709_);
v___x_4724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4724_, 0, v___x_4722_);
lean_ctor_set(v___x_4724_, 1, v___x_4723_);
v___x_4725_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1_once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___closed__1);
v___x_4726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4724_);
lean_ctor_set(v___x_4726_, 1, v___x_4725_);
v___x_4727_ = l_Lean_stringToMessageData(v_val_4721_);
v___x_4728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4726_);
lean_ctor_set(v___x_4728_, 1, v___x_4727_);
v___x_4729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4729_, 0, v___x_4728_);
lean_ctor_set(v___x_4729_, 1, v___x_4722_);
v___x_4730_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_4729_, v___y_4711_, v___y_4712_);
return v___x_4730_;
}
else
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
lean_dec(v___x_4720_);
lean_dec(v_declName_4703_);
v___x_4731_ = lean_box(0);
v___x_4732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4732_, 0, v___x_4731_);
return v___x_4732_;
}
}
v___jp_4733_:
{
lean_object* v___x_4736_; lean_object* v_env_4737_; lean_object* v___x_4738_; lean_object* v_toEnvExtension_4739_; lean_object* v_asyncMode_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; 
v___x_4736_ = lean_st_ref_get(v___y_4735_);
v_env_4737_ = lean_ctor_get(v___x_4736_, 0);
lean_inc_ref(v_env_4737_);
lean_dec(v___x_4736_);
v___x_4738_ = l_Lean_Parser_Tactic_Doc_tacticTagExt;
v_toEnvExtension_4739_ = lean_ctor_get(v___x_4738_, 0);
v_asyncMode_4740_ = lean_ctor_get(v_toEnvExtension_4739_, 2);
v___x_4741_ = lean_box(0);
v___x_4742_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4701_, v___x_4738_, v_env_4737_, v_asyncMode_4740_, v___x_4741_, v___x_4709_);
v___x_4743_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_4742_, v_declName_4703_);
lean_dec(v___x_4742_);
if (lean_obj_tag(v___x_4743_) == 1)
{
lean_object* v_val_4744_; 
v_val_4744_ = lean_ctor_get(v___x_4743_, 0);
lean_inc(v_val_4744_);
lean_dec_ref_known(v___x_4743_, 1);
if (lean_obj_tag(v_val_4744_) == 0)
{
lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; 
lean_dec_ref_known(v_val_4744_, 5);
lean_dec(v___x_4700_);
v___x_4745_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__2___closed__1);
v___x_4746_ = l_Lean_MessageData_ofConstName(v_declName_4703_, v___x_4709_);
v___x_4747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4745_);
lean_ctor_set(v___x_4747_, 1, v___x_4746_);
v___x_4748_ = lean_obj_once(&l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_, &l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn___lam__3___closed__16_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_);
v___x_4749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4749_, 0, v___x_4747_);
lean_ctor_set(v___x_4749_, 1, v___x_4748_);
v___x_4750_ = l_Lean_throwError___at___00__private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2__spec__0___redArg(v___x_4749_, v___y_4734_, v___y_4735_);
return v___x_4750_;
}
else
{
v___y_4711_ = v___y_4734_;
v___y_4712_ = v___y_4735_;
goto v___jp_4710_;
}
}
else
{
lean_dec(v___x_4743_);
v___y_4711_ = v___y_4734_;
v___y_4712_ = v___y_4735_;
goto v___jp_4710_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0___boxed(lean_object* v___x_4762_, lean_object* v___x_4763_, lean_object* v_catName_4764_, lean_object* v_declName_4765_, lean_object* v___builtIn_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_){
_start:
{
uint8_t v___builtIn_boxed_4770_; lean_object* v_res_4771_; 
v___builtIn_boxed_4770_ = lean_unbox(v___builtIn_4766_);
v_res_4771_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics___lam__0(v___x_4762_, v___x_4763_, v_catName_4764_, v_declName_4765_, v___builtIn_boxed_4770_, v___y_4767_, v___y_4768_);
lean_dec(v___y_4768_);
lean_dec_ref(v___y_4767_);
lean_dec(v_catName_4764_);
return v_res_4771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4776_; lean_object* v___x_4777_; 
v___x_4776_ = ((lean_object*)(l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_tacticDocsOnTactics));
v___x_4777_ = l_Lean_Parser_registerParserAttributeHook(v___x_4776_);
return v___x_4777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2____boxed(lean_object* v_a_4778_){
_start:
{
lean_object* v_res_4779_; 
v_res_4779_ = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_();
return v_res_4779_;
}
}
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_44007290____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticAlternativeExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticAlternativeExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_710499956____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3047250029____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_knownTacticTagExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_knownTacticTagExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2845012366____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticTagExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticTagExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_1176478476____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_291731992____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticDocExtExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticDocExtExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_754966946____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_Tactic_Doc_tacticNameExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_Tactic_Doc_tacticNameExt);
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_3374007381____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Tactic_Doc_0__Lean_Parser_Tactic_Doc_initFn_00___x40_Lean_Parser_Tactic_Doc_2735967850____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Attr(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* initialize_Lean_Parser_Attr(uint8_t builtin);
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Tactic_Doc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Tactic_Doc(builtin);
}
#ifdef __cplusplus
}
#endif
