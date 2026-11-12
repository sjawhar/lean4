// Lean compiler output
// Module: Lean.Elab.MacroArgUtil
// Imports: public import Lean.Elab.Syntax
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Parser_getParserAliasInfo(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParserName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Parser_getSyntaxKindOfParserAlias_x3f(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_strLitToPattern___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 91, 11, 245, 227, 176, 7, 196)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unary"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(48, 77, 42, 108, 13, 102, 39, 65)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "precedence"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__8_value),LEAN_SCALAR_PTR_LITERAL(69, 243, 176, 51, 48, 112, 202, 160)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 185, 174, 62, 133, 84, 210, 196)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1_value;
static const lean_array_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__2 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__2_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strLit"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__3 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__3_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__4 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__4_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__7 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__7_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "unknown parser declaration/category/alias `"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__8 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__9;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__10 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "atom"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__0 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 22, 146, 169, 39, 242, 124, 88)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nonReserved"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__2 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 78, 166, 169, 121, 44, 215, 226)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__4 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__4_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__9 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__9_value),LEAN_SCALAR_PTR_LITERAL(195, 96, 22, 193, 32, 12, 216, 27)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sepBy1"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__11 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__11_value),LEAN_SCALAR_PTR_LITERAL(61, 224, 0, 238, 204, 234, 239, 47)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__13 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__9_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__14 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__14_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__15 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__15_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__16 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__16_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__17 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__17_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__19 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__19_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__20 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__20_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__21 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__21_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__22 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__22_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__23 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__23_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__23_value),LEAN_SCALAR_PTR_LITERAL(55, 136, 52, 6, 12, 19, 78, 239)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__24 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__24_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__25 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__25_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__26 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__26_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withPosition"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__27 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__27_value),LEAN_SCALAR_PTR_LITERAL(246, 171, 180, 145, 132, 143, 108, 238)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__28 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__28_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__29;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__30 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__30_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__31 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__31_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__32 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__32_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__33 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__33_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__34 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__34_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "token_antiquot"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__35 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__35_value;
static const lean_ctor_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__35_value),LEAN_SCALAR_PTR_LITERAL(33, 159, 231, 44, 235, 156, 55, 135)}};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__36 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__36_value;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "%"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__37 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__37_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38;
static const lean_string_object l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__39 = (const lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__39_value;
static lean_once_cell_t l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40;
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19_spec__21(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_expandMacroArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Elab_Command_expandMacroArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__7_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandMacroArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Command_expandMacroArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandMacroArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_Command_expandMacroArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_expandMacroArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_expandMacroArg___closed__0 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_expandMacroArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_expandMacroArg___closed__1 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_expandMacroArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "macroArg"};
static const lean_object* l_Lean_Elab_Command_expandMacroArg___closed__2 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(198, 202, 94, 136, 146, 138, 176, 98)}};
static const lean_object* l_Lean_Elab_Command_expandMacroArg___closed__3 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_expandMacroArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Command_expandMacroArg___closed__4 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Command_expandMacroArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_expandMacroArg___closed__5;
static const lean_ctor_object l_Lean_Elab_Command_expandMacroArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Command_expandMacroArg___closed__6 = (const lean_object*)&l_Lean_Elab_Command_expandMacroArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandMacroArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandMacroArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_nat_dec_eq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0(lean_object* v_00___16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(lean_object* v_id_18_, lean_object* v___x_19_, uint8_t v___x_20_, uint8_t v___x_21_, lean_object* v_x_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = l_Lean_TSyntax_getId(v_id_18_);
v___x_27_ = l_Lean_Parser_getParserAliasInfo(v___x_26_);
lean_dec(v___x_26_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_43_; 
v_a_28_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_43_ == 0)
{
v___x_30_ = v___x_27_;
v_isShared_31_ = v_isSharedCheck_43_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v___x_27_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_43_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v_stackSz_x3f_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v_stackSz_x3f_32_ = lean_ctor_get(v_a_28_, 1);
lean_inc(v_stackSz_x3f_32_);
lean_dec(v_a_28_);
v___x_33_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_19_);
v___x_34_ = l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0(v_stackSz_x3f_32_, v___x_33_);
lean_dec_ref_known(v___x_33_, 1);
lean_dec(v_stackSz_x3f_32_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_35_ = lean_box(v___x_20_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_35_);
v___x_37_ = v___x_30_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
else
{
lean_object* v___x_39_; lean_object* v___x_41_; 
v___x_39_ = lean_box(v___x_21_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_39_);
v___x_41_ = v___x_30_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v___x_39_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
}
}
else
{
lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_56_; 
lean_dec(v___x_19_);
v_a_44_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_56_ == 0)
{
v___x_46_ = v___x_27_;
v_isShared_47_ = v_isSharedCheck_56_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v___x_27_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_56_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v_ref_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_54_; 
v_ref_48_ = lean_ctor_get(v___y_23_, 7);
v___x_49_ = lean_io_error_to_string(v_a_44_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
lean_inc(v_ref_48_);
v___x_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_52_, 0, v_ref_48_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 0, v___x_52_);
v___x_54_ = v___x_46_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0___boxed(lean_object* v_id_57_, lean_object* v___x_58_, lean_object* v___x_59_, lean_object* v___x_60_, lean_object* v_x_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
uint8_t v___x_14934__boxed_65_; uint8_t v___x_14935__boxed_66_; lean_object* v_res_67_; 
v___x_14934__boxed_65_ = lean_unbox(v___x_59_);
v___x_14935__boxed_66_ = lean_unbox(v___x_60_);
v_res_67_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(v_id_57_, v___x_58_, v___x_14934__boxed_65_, v___x_14935__boxed_66_, v_x_61_, v___y_62_, v___y_63_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v_id_57_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4(uint8_t v___x_90_, lean_object* v_as_91_, size_t v_i_92_, size_t v_stop_93_, lean_object* v_b_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_a_99_; uint8_t v___x_103_; 
v___x_103_ = lean_usize_dec_eq(v_i_92_, v_stop_93_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___y_111_; uint8_t v___x_122_; 
v___x_104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4));
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_array_uget_borrowed(v_as_91_, v_i_92_);
lean_inc(v___x_107_);
v___x_122_ = l_Lean_Syntax_isOfKind(v___x_107_, v___x_104_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6));
lean_inc(v___x_107_);
v___x_124_ = l_Lean_Syntax_isOfKind(v___x_107_, v___x_123_);
if (v___x_124_ == 0)
{
goto v___jp_108_;
}
else
{
lean_object* v_id_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v_id_125_ = l_Lean_Syntax_getArg(v___x_107_, v___x_105_);
v___x_126_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v_id_125_);
v___x_127_ = l_Lean_Syntax_isOfKind(v_id_125_, v___x_126_);
if (v___x_127_ == 0)
{
lean_dec(v_id_125_);
goto v___jp_108_;
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_128_ = lean_unsigned_to_nat(2u);
v___x_129_ = l_Lean_Syntax_getArg(v___x_107_, v___x_128_);
v___x_130_ = l_Lean_Syntax_matchesNull(v___x_129_, v___x_106_);
if (v___x_130_ == 0)
{
lean_dec(v_id_125_);
goto v___jp_108_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = l_Lean_TSyntax_getId(v_id_125_);
lean_dec(v_id_125_);
v___x_132_ = l_Lean_Parser_getParserAliasInfo(v___x_131_);
lean_dec(v___x_131_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v_a_133_; lean_object* v_stackSz_x3f_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v_a_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc(v_a_133_);
lean_dec_ref_known(v___x_132_, 1);
v_stackSz_x3f_134_ = lean_ctor_get(v_a_133_, 1);
lean_inc(v_stackSz_x3f_134_);
lean_dec(v_a_133_);
v___x_135_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__7));
v___x_136_ = l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0(v_stackSz_x3f_134_, v___x_135_);
lean_dec(v_stackSz_x3f_134_);
if (v___x_136_ == 0)
{
goto v___jp_108_;
}
else
{
v_a_99_ = v_b_94_;
goto v___jp_98_;
}
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_149_; 
lean_dec_ref(v_b_94_);
v_a_137_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_149_ == 0)
{
v___x_139_ = v___x_132_;
v_isShared_140_ = v_isSharedCheck_149_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_132_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_149_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v_ref_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v_ref_141_ = lean_ctor_get(v___y_95_, 7);
v___x_142_ = lean_io_error_to_string(v_a_137_);
v___x_143_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
v___x_144_ = l_Lean_MessageData_ofFormat(v___x_143_);
lean_inc(v_ref_141_);
v___x_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_145_, 0, v_ref_141_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_145_);
v___x_147_ = v___x_139_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
}
}
}
else
{
lean_object* v_id_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_id_150_ = l_Lean_Syntax_getArg(v___x_107_, v___x_105_);
v___x_151_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v_id_150_);
v___x_152_ = l_Lean_Syntax_isOfKind(v_id_150_, v___x_151_);
if (v___x_152_ == 0)
{
lean_dec(v_id_150_);
goto v___jp_108_;
}
else
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = l_Lean_Syntax_getArg(v___x_107_, v___x_106_);
v___x_154_ = l_Lean_Syntax_isNone(v___x_153_);
if (v___x_154_ == 0)
{
uint8_t v___x_155_; 
lean_inc(v___x_153_);
v___x_155_ = l_Lean_Syntax_matchesNull(v___x_153_, v___x_106_);
if (v___x_155_ == 0)
{
lean_dec(v___x_153_);
lean_dec(v_id_150_);
goto v___jp_108_;
}
else
{
lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9));
v___x_157_ = l_Lean_Syntax_getArg(v___x_153_, v___x_105_);
lean_dec(v___x_153_);
v___x_158_ = l_Lean_Syntax_isOfKind(v___x_157_, v___x_156_);
if (v___x_158_ == 0)
{
lean_dec(v_id_150_);
goto v___jp_108_;
}
else
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_box(0);
v___x_160_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(v_id_150_, v___x_105_, v___x_122_, v___x_90_, v___x_159_, v___y_95_, v___y_96_);
lean_dec(v_id_150_);
v___y_111_ = v___x_160_;
goto v___jp_110_;
}
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_dec(v___x_153_);
v___x_161_ = lean_box(0);
v___x_162_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(v_id_150_, v___x_105_, v___x_122_, v___x_90_, v___x_161_, v___y_95_, v___y_96_);
lean_dec(v_id_150_);
v___y_111_ = v___x_162_;
goto v___jp_110_;
}
}
}
v___jp_108_:
{
lean_object* v___x_109_; 
lean_inc(v___x_107_);
v___x_109_ = lean_array_push(v_b_94_, v___x_107_);
v_a_99_ = v___x_109_;
goto v___jp_98_;
}
v___jp_110_:
{
if (lean_obj_tag(v___y_111_) == 0)
{
lean_object* v_a_112_; uint8_t v___x_113_; 
v_a_112_ = lean_ctor_get(v___y_111_, 0);
lean_inc(v_a_112_);
lean_dec_ref_known(v___y_111_, 1);
v___x_113_ = lean_unbox(v_a_112_);
lean_dec(v_a_112_);
if (v___x_113_ == 0)
{
v_a_99_ = v_b_94_;
goto v___jp_98_;
}
else
{
goto v___jp_108_;
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
lean_dec_ref(v_b_94_);
v_a_114_ = lean_ctor_get(v___y_111_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___y_111_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___y_111_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___y_111_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
}
else
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_b_94_);
return v___x_163_;
}
v___jp_98_:
{
size_t v___x_100_; size_t v___x_101_; 
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_add(v_i_92_, v___x_100_);
v_i_92_ = v___x_101_;
v_b_94_ = v_a_99_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___boxed(lean_object* v___x_164_, lean_object* v_as_165_, lean_object* v_i_166_, lean_object* v_stop_167_, lean_object* v_b_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
uint8_t v___x_15062__boxed_172_; size_t v_i_boxed_173_; size_t v_stop_boxed_174_; lean_object* v_res_175_; 
v___x_15062__boxed_172_ = lean_unbox(v___x_164_);
v_i_boxed_173_ = lean_unbox_usize(v_i_166_);
lean_dec(v_i_166_);
v_stop_boxed_174_ = lean_unbox_usize(v_stop_167_);
lean_dec(v_stop_167_);
v_res_175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4(v___x_15062__boxed_172_, v_as_165_, v_i_boxed_173_, v_stop_boxed_174_, v_b_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec_ref(v_as_165_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__3(uint8_t v___x_176_, lean_object* v_as_177_, size_t v_i_178_, size_t v_stop_179_, lean_object* v_b_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_a_185_; uint8_t v___x_189_; 
v___x_189_ = lean_usize_dec_eq(v_i_178_, v_stop_179_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___y_197_; uint8_t v___x_208_; 
v___x_190_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4));
v___x_191_ = lean_unsigned_to_nat(0u);
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_array_uget_borrowed(v_as_177_, v_i_178_);
lean_inc(v___x_193_);
v___x_208_ = l_Lean_Syntax_isOfKind(v___x_193_, v___x_190_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6));
lean_inc(v___x_193_);
v___x_210_ = l_Lean_Syntax_isOfKind(v___x_193_, v___x_209_);
if (v___x_210_ == 0)
{
goto v___jp_194_;
}
else
{
lean_object* v_id_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v_id_211_ = l_Lean_Syntax_getArg(v___x_193_, v___x_191_);
v___x_212_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v_id_211_);
v___x_213_ = l_Lean_Syntax_isOfKind(v_id_211_, v___x_212_);
if (v___x_213_ == 0)
{
lean_dec(v_id_211_);
goto v___jp_194_;
}
else
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_214_ = lean_unsigned_to_nat(2u);
v___x_215_ = l_Lean_Syntax_getArg(v___x_193_, v___x_214_);
v___x_216_ = l_Lean_Syntax_matchesNull(v___x_215_, v___x_192_);
if (v___x_216_ == 0)
{
lean_dec(v_id_211_);
goto v___jp_194_;
}
else
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = l_Lean_TSyntax_getId(v_id_211_);
lean_dec(v_id_211_);
v___x_218_ = l_Lean_Parser_getParserAliasInfo(v___x_217_);
lean_dec(v___x_217_);
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_219_; lean_object* v_stackSz_x3f_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v_a_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_a_219_);
lean_dec_ref_known(v___x_218_, 1);
v_stackSz_x3f_220_ = lean_ctor_get(v_a_219_, 1);
lean_inc(v_stackSz_x3f_220_);
lean_dec(v_a_219_);
v___x_221_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__7));
v___x_222_ = l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0(v_stackSz_x3f_220_, v___x_221_);
lean_dec(v_stackSz_x3f_220_);
if (v___x_222_ == 0)
{
goto v___jp_194_;
}
else
{
v_a_185_ = v_b_180_;
goto v___jp_184_;
}
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_235_; 
lean_dec_ref(v_b_180_);
v_a_223_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_235_ == 0)
{
v___x_225_ = v___x_218_;
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_218_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v_ref_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v_ref_227_ = lean_ctor_get(v___y_181_, 7);
v___x_228_ = lean_io_error_to_string(v_a_223_);
v___x_229_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
v___x_230_ = l_Lean_MessageData_ofFormat(v___x_229_);
lean_inc(v_ref_227_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v_ref_227_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_231_);
v___x_233_ = v___x_225_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
}
}
else
{
lean_object* v_id_236_; lean_object* v___x_237_; uint8_t v___x_238_; 
v_id_236_ = l_Lean_Syntax_getArg(v___x_193_, v___x_191_);
v___x_237_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v_id_236_);
v___x_238_ = l_Lean_Syntax_isOfKind(v_id_236_, v___x_237_);
if (v___x_238_ == 0)
{
lean_dec(v_id_236_);
goto v___jp_194_;
}
else
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = l_Lean_Syntax_getArg(v___x_193_, v___x_192_);
v___x_240_ = l_Lean_Syntax_isNone(v___x_239_);
if (v___x_240_ == 0)
{
uint8_t v___x_241_; 
lean_inc(v___x_239_);
v___x_241_ = l_Lean_Syntax_matchesNull(v___x_239_, v___x_192_);
if (v___x_241_ == 0)
{
lean_dec(v___x_239_);
lean_dec(v_id_236_);
goto v___jp_194_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_242_ = l_Lean_Syntax_getArg(v___x_239_, v___x_191_);
lean_dec(v___x_239_);
v___x_243_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9));
v___x_244_ = l_Lean_Syntax_isOfKind(v___x_242_, v___x_243_);
if (v___x_244_ == 0)
{
lean_dec(v_id_236_);
goto v___jp_194_;
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_box(0);
v___x_246_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(v_id_236_, v___x_191_, v___x_208_, v___x_176_, v___x_245_, v___y_181_, v___y_182_);
lean_dec(v_id_236_);
v___y_197_ = v___x_246_;
goto v___jp_196_;
}
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec(v___x_239_);
v___x_247_ = lean_box(0);
v___x_248_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(v_id_236_, v___x_191_, v___x_208_, v___x_176_, v___x_247_, v___y_181_, v___y_182_);
lean_dec(v_id_236_);
v___y_197_ = v___x_248_;
goto v___jp_196_;
}
}
}
v___jp_194_:
{
lean_object* v___x_195_; 
lean_inc(v___x_193_);
v___x_195_ = lean_array_push(v_b_180_, v___x_193_);
v_a_185_ = v___x_195_;
goto v___jp_184_;
}
v___jp_196_:
{
if (lean_obj_tag(v___y_197_) == 0)
{
lean_object* v_a_198_; uint8_t v___x_199_; 
v_a_198_ = lean_ctor_get(v___y_197_, 0);
lean_inc(v_a_198_);
lean_dec_ref_known(v___y_197_, 1);
v___x_199_ = lean_unbox(v_a_198_);
lean_dec(v_a_198_);
if (v___x_199_ == 0)
{
v_a_185_ = v_b_180_;
goto v___jp_184_;
}
else
{
goto v___jp_194_;
}
}
else
{
lean_object* v_a_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_207_; 
lean_dec_ref(v_b_180_);
v_a_200_ = lean_ctor_get(v___y_197_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___y_197_);
if (v_isSharedCheck_207_ == 0)
{
v___x_202_ = v___y_197_;
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v___y_197_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_200_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
}
else
{
lean_object* v___x_249_; 
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v_b_180_);
return v___x_249_;
}
v___jp_184_:
{
size_t v___x_186_; size_t v___x_187_; 
v___x_186_ = ((size_t)1ULL);
v___x_187_ = lean_usize_add(v_i_178_, v___x_186_);
v_i_178_ = v___x_187_;
v_b_180_ = v_a_185_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__3___boxed(lean_object* v___x_250_, lean_object* v_as_251_, lean_object* v_i_252_, lean_object* v_stop_253_, lean_object* v_b_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
uint8_t v___x_15248__boxed_258_; size_t v_i_boxed_259_; size_t v_stop_boxed_260_; lean_object* v_res_261_; 
v___x_15248__boxed_258_ = lean_unbox(v___x_250_);
v_i_boxed_259_ = lean_unbox_usize(v_i_252_);
lean_dec(v_i_252_);
v_stop_boxed_260_ = lean_unbox_usize(v_stop_253_);
lean_dec(v_stop_253_);
v_res_261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__3(v___x_15248__boxed_258_, v_as_251_, v_i_boxed_259_, v_stop_boxed_260_, v_b_254_, v___y_255_, v___y_256_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec_ref(v_as_251_);
return v_res_261_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__4(lean_object* v_opts_262_, lean_object* v_opt_263_){
_start:
{
lean_object* v_name_264_; lean_object* v_defValue_265_; lean_object* v_map_266_; lean_object* v___x_267_; 
v_name_264_ = lean_ctor_get(v_opt_263_, 0);
v_defValue_265_ = lean_ctor_get(v_opt_263_, 1);
v_map_266_ = lean_ctor_get(v_opts_262_, 0);
v___x_267_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_266_, v_name_264_);
if (lean_obj_tag(v___x_267_) == 0)
{
uint8_t v___x_268_; 
v___x_268_ = lean_unbox(v_defValue_265_);
return v___x_268_;
}
else
{
lean_object* v_val_269_; 
v_val_269_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_val_269_);
lean_dec_ref_known(v___x_267_, 1);
if (lean_obj_tag(v_val_269_) == 1)
{
uint8_t v_v_270_; 
v_v_270_ = lean_ctor_get_uint8(v_val_269_, 0);
lean_dec_ref_known(v_val_269_, 0);
return v_v_270_;
}
else
{
uint8_t v___x_271_; 
lean_dec(v_val_269_);
v___x_271_ = lean_unbox(v_defValue_265_);
return v___x_271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__4___boxed(lean_object* v_opts_272_, lean_object* v_opt_273_){
_start:
{
uint8_t v_res_274_; lean_object* v_r_275_; 
v_res_274_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__4(v_opts_272_, v_opt_273_);
lean_dec_ref(v_opt_273_);
lean_dec_ref(v_opts_272_);
v_r_275_ = lean_box(v_res_274_);
return v_r_275_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = lean_box(1);
v___x_277_ = l_Lean_MessageData_ofFormat(v___x_276_);
return v___x_277_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__3(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__2));
v___x_282_ = l_Lean_MessageData_ofFormat(v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5(lean_object* v_x_283_, lean_object* v_x_284_){
_start:
{
if (lean_obj_tag(v_x_284_) == 0)
{
return v_x_283_;
}
else
{
lean_object* v_head_285_; lean_object* v_tail_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_308_; 
v_head_285_ = lean_ctor_get(v_x_284_, 0);
v_tail_286_ = lean_ctor_get(v_x_284_, 1);
v_isSharedCheck_308_ = !lean_is_exclusive(v_x_284_);
if (v_isSharedCheck_308_ == 0)
{
v___x_288_ = v_x_284_;
v_isShared_289_ = v_isSharedCheck_308_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_tail_286_);
lean_inc(v_head_285_);
lean_dec(v_x_284_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_308_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v_before_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_306_; 
v_before_290_ = lean_ctor_get(v_head_285_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v_head_285_);
if (v_isSharedCheck_306_ == 0)
{
lean_object* v_unused_307_; 
v_unused_307_ = lean_ctor_get(v_head_285_, 1);
lean_dec(v_unused_307_);
v___x_292_ = v_head_285_;
v_isShared_293_ = v_isSharedCheck_306_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_before_290_);
lean_dec(v_head_285_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_306_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_294_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0);
if (v_isShared_293_ == 0)
{
lean_ctor_set_tag(v___x_292_, 7);
lean_ctor_set(v___x_292_, 1, v___x_294_);
lean_ctor_set(v___x_292_, 0, v_x_283_);
v___x_296_ = v___x_292_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_x_283_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v___x_294_);
v___x_296_ = v_reuseFailAlloc_305_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_297_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__3);
if (v_isShared_289_ == 0)
{
lean_ctor_set_tag(v___x_288_, 7);
lean_ctor_set(v___x_288_, 1, v___x_297_);
lean_ctor_set(v___x_288_, 0, v___x_296_);
v___x_299_ = v___x_288_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_297_);
v___x_299_ = v_reuseFailAlloc_304_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_300_ = l_Lean_MessageData_ofSyntax(v_before_290_);
v___x_301_ = l_Lean_indentD(v___x_300_);
v___x_302_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_299_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v_x_283_ = v___x_302_;
v_x_284_ = v_tail_286_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__1));
v___x_313_ = l_Lean_MessageData_ofFormat(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg(lean_object* v_msgData_314_, lean_object* v_macroStack_315_, lean_object* v___y_316_){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v_scopes_320_; lean_object* v___x_321_; lean_object* v_opts_322_; lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_318_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_319_ = lean_st_ref_get(v___y_316_);
v_scopes_320_ = lean_ctor_get(v___x_319_, 2);
lean_inc(v_scopes_320_);
lean_dec(v___x_319_);
v___x_321_ = l_List_head_x21___redArg(v___x_318_, v_scopes_320_);
lean_dec(v_scopes_320_);
v_opts_322_ = lean_ctor_get(v___x_321_, 1);
lean_inc_ref(v_opts_322_);
lean_dec(v___x_321_);
v___x_323_ = l_Lean_Elab_pp_macroStack;
v___x_324_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__4(v_opts_322_, v___x_323_);
lean_dec_ref(v_opts_322_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; 
lean_dec(v_macroStack_315_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v_msgData_314_);
return v___x_325_;
}
else
{
if (lean_obj_tag(v_macroStack_315_) == 0)
{
lean_object* v___x_326_; 
v___x_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_326_, 0, v_msgData_314_);
return v___x_326_;
}
else
{
lean_object* v_head_327_; lean_object* v_after_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_343_; 
v_head_327_ = lean_ctor_get(v_macroStack_315_, 0);
lean_inc(v_head_327_);
v_after_328_ = lean_ctor_get(v_head_327_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_head_327_);
if (v_isSharedCheck_343_ == 0)
{
lean_object* v_unused_344_; 
v_unused_344_ = lean_ctor_get(v_head_327_, 0);
lean_dec(v_unused_344_);
v___x_330_ = v_head_327_;
v_isShared_331_ = v_isSharedCheck_343_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_after_328_);
lean_dec(v_head_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_343_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_332_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5___closed__0);
if (v_isShared_331_ == 0)
{
lean_ctor_set_tag(v___x_330_, 7);
lean_ctor_set(v___x_330_, 1, v___x_332_);
lean_ctor_set(v___x_330_, 0, v_msgData_314_);
v___x_334_ = v___x_330_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_msgData_314_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v___x_332_);
v___x_334_ = v_reuseFailAlloc_342_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v_msgData_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_335_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___closed__2);
v___x_336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v___x_337_ = l_Lean_MessageData_ofSyntax(v_after_328_);
v___x_338_ = l_Lean_indentD(v___x_337_);
v_msgData_339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_339_, 0, v___x_336_);
lean_ctor_set(v_msgData_339_, 1, v___x_338_);
v___x_340_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3_spec__5(v_msgData_339_, v_macroStack_315_);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
return v___x_341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg___boxed(lean_object* v_msgData_345_, lean_object* v_macroStack_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg(v_msgData_345_, v_macroStack_346_, v___y_347_);
lean_dec(v___y_347_);
return v_res_349_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_350_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__0);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_353_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_354_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1);
v___x_355_ = lean_unsigned_to_nat(0u);
v___x_356_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
lean_ctor_set(v___x_356_, 2, v___x_355_);
lean_ctor_set(v___x_356_, 3, v___x_355_);
lean_ctor_set(v___x_356_, 4, v___x_354_);
lean_ctor_set(v___x_356_, 5, v___x_354_);
lean_ctor_set(v___x_356_, 6, v___x_354_);
lean_ctor_set(v___x_356_, 7, v___x_354_);
lean_ctor_set(v___x_356_, 8, v___x_354_);
lean_ctor_set(v___x_356_, 9, v___x_354_);
lean_ctor_set(v___x_356_, 10, v___x_354_);
lean_ctor_set(v___x_356_, 11, v___x_353_);
return v___x_356_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = lean_unsigned_to_nat(32u);
v___x_358_ = lean_mk_empty_array_with_capacity(v___x_357_);
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__4(void){
_start:
{
size_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_360_ = ((size_t)5ULL);
v___x_361_ = lean_unsigned_to_nat(0u);
v___x_362_ = lean_unsigned_to_nat(32u);
v___x_363_ = lean_mk_empty_array_with_capacity(v___x_362_);
v___x_364_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__3);
v___x_365_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v___x_363_);
lean_ctor_set(v___x_365_, 2, v___x_361_);
lean_ctor_set(v___x_365_, 3, v___x_361_);
lean_ctor_set_usize(v___x_365_, 4, v___x_360_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_366_ = lean_box(1);
v___x_367_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__4);
v___x_368_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__1);
v___x_369_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v___x_367_);
lean_ctor_set(v___x_369_, 2, v___x_366_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg(lean_object* v_msgData_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; lean_object* v_env_374_; uint8_t v___x_375_; lean_object* v_env_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v_scopes_379_; lean_object* v___x_380_; lean_object* v_opts_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_373_ = lean_st_ref_get(v___y_371_);
v_env_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc_ref(v_env_374_);
lean_dec(v___x_373_);
v___x_375_ = 0;
v_env_376_ = l_Lean_Environment_setRecordingDeps(v_env_374_, v___x_375_);
v___x_377_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_378_ = lean_st_ref_get(v___y_371_);
v_scopes_379_ = lean_ctor_get(v___x_378_, 2);
lean_inc(v_scopes_379_);
lean_dec(v___x_378_);
v___x_380_ = l_List_head_x21___redArg(v___x_377_, v_scopes_379_);
lean_dec(v_scopes_379_);
v_opts_381_ = lean_ctor_get(v___x_380_, 1);
lean_inc_ref(v_opts_381_);
lean_dec(v___x_380_);
v___x_382_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__2);
v___x_383_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___closed__5);
v___x_384_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_384_, 0, v_env_376_);
lean_ctor_set(v___x_384_, 1, v___x_382_);
lean_ctor_set(v___x_384_, 2, v___x_383_);
lean_ctor_set(v___x_384_, 3, v_opts_381_);
v___x_385_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v_msgData_370_);
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg___boxed(lean_object* v_msgData_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg(v_msgData_387_, v___y_388_);
lean_dec(v___y_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg(lean_object* v_msg_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Lean_Elab_Command_getRef___redArg(v___y_392_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v_macroStack_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v_a_400_; lean_object* v___x_401_; lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_410_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
lean_dec_ref_known(v___x_395_, 1);
v_macroStack_397_ = lean_ctor_get(v___y_392_, 4);
v___x_398_ = l_Lean_Elab_getBetterRef(v_a_396_, v_macroStack_397_);
lean_dec(v_a_396_);
v___x_399_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg(v_msg_391_, v___y_393_);
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref(v___x_399_);
lean_inc(v_macroStack_397_);
v___x_401_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg(v_a_400_, v_macroStack_397_, v___y_393_);
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_410_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_410_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_410_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_408_; 
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_398_);
lean_ctor_set(v___x_406_, 1, v_a_402_);
if (v_isShared_405_ == 0)
{
lean_ctor_set_tag(v___x_404_, 1);
lean_ctor_set(v___x_404_, 0, v___x_406_);
v___x_408_ = v___x_404_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_406_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
lean_dec_ref(v_msg_391_);
v_a_411_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_395_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_395_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg___boxed(lean_object* v_msg_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg(v_msg_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1(uint8_t v___x_424_, lean_object* v_as_425_, size_t v_i_426_, size_t v_stop_427_, lean_object* v_b_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_a_433_; uint8_t v___x_437_; 
v___x_437_ = lean_usize_dec_eq(v_i_426_, v_stop_427_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___y_443_; uint8_t v___x_454_; 
v___x_438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4));
v___x_439_ = lean_array_uget_borrowed(v_as_425_, v_i_426_);
lean_inc(v___x_439_);
v___x_454_ = l_Lean_Syntax_isOfKind(v___x_439_, v___x_438_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6));
lean_inc(v___x_439_);
v___x_456_ = l_Lean_Syntax_isOfKind(v___x_439_, v___x_455_);
if (v___x_456_ == 0)
{
goto v___jp_440_;
}
else
{
lean_object* v___x_457_; lean_object* v_id_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_457_ = lean_unsigned_to_nat(0u);
v_id_458_ = l_Lean_Syntax_getArg(v___x_439_, v___x_457_);
v___x_459_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v_id_458_);
v___x_460_ = l_Lean_Syntax_isOfKind(v_id_458_, v___x_459_);
if (v___x_460_ == 0)
{
lean_dec(v_id_458_);
goto v___jp_440_;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_461_ = lean_unsigned_to_nat(1u);
v___x_462_ = lean_unsigned_to_nat(2u);
v___x_463_ = l_Lean_Syntax_getArg(v___x_439_, v___x_462_);
v___x_464_ = l_Lean_Syntax_matchesNull(v___x_463_, v___x_461_);
if (v___x_464_ == 0)
{
lean_dec(v_id_458_);
goto v___jp_440_;
}
else
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = l_Lean_TSyntax_getId(v_id_458_);
lean_dec(v_id_458_);
v___x_466_ = l_Lean_Parser_getParserAliasInfo(v___x_465_);
lean_dec(v___x_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v_stackSz_x3f_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_466_, 1);
v_stackSz_x3f_468_ = lean_ctor_get(v_a_467_, 1);
lean_inc(v_stackSz_x3f_468_);
lean_dec(v_a_467_);
v___x_469_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__7));
v___x_470_ = l_instBEqOption_beq___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__0(v_stackSz_x3f_468_, v___x_469_);
lean_dec(v_stackSz_x3f_468_);
if (v___x_470_ == 0)
{
goto v___jp_440_;
}
else
{
v_a_433_ = v_b_428_;
goto v___jp_432_;
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_483_; 
lean_dec_ref(v_b_428_);
v_a_471_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_483_ == 0)
{
v___x_473_ = v___x_466_;
v_isShared_474_ = v_isSharedCheck_483_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_466_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_483_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v_ref_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_481_; 
v_ref_475_ = lean_ctor_get(v___y_429_, 7);
v___x_476_ = lean_io_error_to_string(v_a_471_);
v___x_477_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
v___x_478_ = l_Lean_MessageData_ofFormat(v___x_477_);
lean_inc(v_ref_475_);
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v_ref_475_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_479_);
v___x_481_ = v___x_473_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_484_; lean_object* v_id_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_484_ = lean_unsigned_to_nat(0u);
v_id_485_ = l_Lean_Syntax_getArg(v___x_439_, v___x_484_);
v___x_486_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v_id_485_);
v___x_487_ = l_Lean_Syntax_isOfKind(v_id_485_, v___x_486_);
if (v___x_487_ == 0)
{
lean_dec(v_id_485_);
goto v___jp_440_;
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = l_Lean_Syntax_getArg(v___x_439_, v___x_488_);
v___x_490_ = l_Lean_Syntax_isNone(v___x_489_);
if (v___x_490_ == 0)
{
uint8_t v___x_491_; 
lean_inc(v___x_489_);
v___x_491_ = l_Lean_Syntax_matchesNull(v___x_489_, v___x_488_);
if (v___x_491_ == 0)
{
lean_dec(v___x_489_);
lean_dec(v_id_485_);
goto v___jp_440_;
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; 
v___x_492_ = l_Lean_Syntax_getArg(v___x_489_, v___x_484_);
lean_dec(v___x_489_);
v___x_493_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9));
v___x_494_ = l_Lean_Syntax_isOfKind(v___x_492_, v___x_493_);
if (v___x_494_ == 0)
{
lean_dec(v_id_485_);
goto v___jp_440_;
}
else
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_box(0);
v___x_496_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(v_id_485_, v___x_484_, v___x_454_, v___x_424_, v___x_495_, v___y_429_, v___y_430_);
lean_dec(v_id_485_);
v___y_443_ = v___x_496_;
goto v___jp_442_;
}
}
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec(v___x_489_);
v___x_497_ = lean_box(0);
v___x_498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___lam__0(v_id_485_, v___x_484_, v___x_454_, v___x_424_, v___x_497_, v___y_429_, v___y_430_);
lean_dec(v_id_485_);
v___y_443_ = v___x_498_;
goto v___jp_442_;
}
}
}
v___jp_440_:
{
lean_object* v___x_441_; 
lean_inc(v___x_439_);
v___x_441_ = lean_array_push(v_b_428_, v___x_439_);
v_a_433_ = v___x_441_;
goto v___jp_432_;
}
v___jp_442_:
{
if (lean_obj_tag(v___y_443_) == 0)
{
lean_object* v_a_444_; uint8_t v___x_445_; 
v_a_444_ = lean_ctor_get(v___y_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___y_443_, 1);
v___x_445_ = lean_unbox(v_a_444_);
lean_dec(v_a_444_);
if (v___x_445_ == 0)
{
v_a_433_ = v_b_428_;
goto v___jp_432_;
}
else
{
goto v___jp_440_;
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec_ref(v_b_428_);
v_a_446_ = lean_ctor_get(v___y_443_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___y_443_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___y_443_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___y_443_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
else
{
lean_object* v___x_499_; 
v___x_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_499_, 0, v_b_428_);
return v___x_499_;
}
v___jp_432_:
{
size_t v___x_434_; size_t v___x_435_; 
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_add(v_i_426_, v___x_434_);
v_i_426_ = v___x_435_;
v_b_428_ = v_a_433_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1___boxed(lean_object* v___x_500_, lean_object* v_as_501_, lean_object* v_i_502_, lean_object* v_stop_503_, lean_object* v_b_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_){
_start:
{
uint8_t v___x_15733__boxed_508_; size_t v_i_boxed_509_; size_t v_stop_boxed_510_; lean_object* v_res_511_; 
v___x_15733__boxed_508_ = lean_unbox(v___x_500_);
v_i_boxed_509_ = lean_unbox_usize(v_i_502_);
lean_dec(v_i_502_);
v_stop_boxed_510_ = lean_unbox_usize(v_stop_503_);
lean_dec(v_stop_503_);
v_res_511_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1(v___x_15733__boxed_508_, v_as_501_, v_i_boxed_509_, v_stop_boxed_510_, v_b_504_, v___y_505_, v___y_506_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec_ref(v_as_501_);
return v_res_511_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_box(0);
v___x_525_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__9(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__8));
v___x_529_ = l_Lean_stringToMessageData(v___x_528_);
return v___x_529_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__11(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__10));
v___x_532_ = l_Lean_stringToMessageData(v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; uint8_t v___x_542_; 
v___x_538_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__0));
v___x_539_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__1));
v___x_540_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4));
lean_inc(v_a_533_);
v___x_541_ = l_Lean_Syntax_isOfKind(v_a_533_, v___x_540_);
v___x_542_ = 1;
if (v___x_541_ == 0)
{
lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_549_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1));
lean_inc(v_a_533_);
v___x_550_ = l_Lean_Syntax_isOfKind(v_a_533_, v___x_549_);
if (v___x_550_ == 0)
{
lean_dec(v_a_533_);
goto v___jp_543_;
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v_a_556_; lean_object* v___x_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_551_ = lean_unsigned_to_nat(1u);
v___x_552_ = l_Lean_Syntax_getArg(v_a_533_, v___x_551_);
lean_dec(v_a_533_);
v___x_553_ = l_Lean_Syntax_getArgs(v___x_552_);
lean_dec(v___x_552_);
v___x_554_ = lean_unsigned_to_nat(0u);
v___x_561_ = lean_array_get_size(v___x_553_);
v___x_562_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__2));
v___x_563_ = lean_nat_dec_lt(v___x_554_, v___x_561_);
if (v___x_563_ == 0)
{
lean_dec_ref(v___x_553_);
v_a_556_ = v___x_562_;
goto v___jp_555_;
}
else
{
size_t v___x_564_; size_t v___x_565_; lean_object* v___x_566_; 
v___x_564_ = ((size_t)0ULL);
v___x_565_ = lean_usize_of_nat(v___x_561_);
v___x_566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__1(v___x_541_, v___x_553_, v___x_564_, v___x_565_, v___x_562_, v_a_535_, v_a_536_);
lean_dec_ref(v___x_553_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_567_; 
v_a_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v___x_566_, 1);
v_a_556_ = v_a_567_;
goto v___jp_555_;
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
lean_dec(v_a_534_);
v_a_568_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_566_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_566_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
v___jp_555_:
{
lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_557_ = lean_array_get_size(v_a_556_);
v___x_558_ = lean_nat_dec_eq(v___x_557_, v___x_551_);
if (v___x_558_ == 0)
{
lean_dec_ref(v_a_556_);
goto v___jp_543_;
}
else
{
lean_object* v___x_559_; 
v___x_559_ = lean_array_fget(v_a_556_, v___x_554_);
lean_dec_ref(v_a_556_);
v_a_533_ = v___x_559_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_576_; lean_object* v___y_588_; lean_object* v___y_594_; lean_object* v_id_604_; lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_576_ = lean_unsigned_to_nat(0u);
v_id_604_ = l_Lean_Syntax_getArg(v_a_533_, v___x_576_);
v___x_605_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__0));
v___x_606_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v_id_604_);
v___x_607_ = l_Lean_Syntax_isOfKind(v_id_604_, v___x_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; uint8_t v___x_609_; 
lean_dec(v_id_604_);
v___x_608_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1));
lean_inc(v_a_533_);
v___x_609_ = l_Lean_Syntax_isOfKind(v_a_533_, v___x_608_);
if (v___x_609_ == 0)
{
lean_dec(v_a_533_);
goto v___jp_599_;
}
else
{
lean_object* v___x_610_; lean_object* v_a_612_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_610_ = lean_unsigned_to_nat(1u);
v___x_617_ = l_Lean_Syntax_getArg(v_a_533_, v___x_610_);
lean_dec(v_a_533_);
v___x_618_ = l_Lean_Syntax_getArgs(v___x_617_);
lean_dec(v___x_617_);
v___x_619_ = lean_array_get_size(v___x_618_);
v___x_620_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__2));
v___x_621_ = lean_nat_dec_lt(v___x_576_, v___x_619_);
if (v___x_621_ == 0)
{
lean_dec_ref(v___x_618_);
v_a_612_ = v___x_620_;
goto v___jp_611_;
}
else
{
size_t v___x_622_; size_t v___x_623_; lean_object* v___x_624_; 
v___x_622_ = ((size_t)0ULL);
v___x_623_ = lean_usize_of_nat(v___x_619_);
v___x_624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__3(v___x_607_, v___x_618_, v___x_622_, v___x_623_, v___x_620_, v_a_535_, v_a_536_);
lean_dec_ref(v___x_618_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_625_);
lean_dec_ref_known(v___x_624_, 1);
v_a_612_ = v_a_625_;
goto v___jp_611_;
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v_a_534_);
v_a_626_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_624_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_624_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
v___jp_611_:
{
lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_613_ = lean_array_get_size(v_a_612_);
v___x_614_ = lean_nat_dec_eq(v___x_613_, v___x_610_);
if (v___x_614_ == 0)
{
lean_dec_ref(v_a_612_);
goto v___jp_599_;
}
else
{
lean_object* v___x_615_; 
v___x_615_ = lean_array_fget(v_a_612_, v___x_576_);
lean_dec_ref(v_a_612_);
v_a_533_ = v___x_615_;
goto _start;
}
}
}
}
else
{
lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___x_716_; lean_object* v_a_718_; lean_object* v_a_724_; lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_716_ = lean_unsigned_to_nat(1u);
v___x_729_ = l_Lean_Syntax_getArg(v_a_533_, v___x_716_);
v___x_730_ = l_Lean_Syntax_isNone(v___x_729_);
if (v___x_730_ == 0)
{
uint8_t v___x_731_; 
lean_inc(v___x_729_);
v___x_731_ = l_Lean_Syntax_matchesNull(v___x_729_, v___x_716_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; uint8_t v___x_733_; 
lean_dec(v_id_604_);
v___x_732_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1));
v___x_733_ = l_Lean_Syntax_isOfKind(v_a_533_, v___x_732_);
if (v___x_733_ == 0)
{
lean_dec(v___x_729_);
goto v___jp_582_;
}
else
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_734_ = l_Lean_Syntax_getArgs(v___x_729_);
lean_dec(v___x_729_);
v___x_735_ = lean_array_get_size(v___x_734_);
v___x_736_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__2));
v___x_737_ = lean_nat_dec_lt(v___x_576_, v___x_735_);
if (v___x_737_ == 0)
{
lean_dec_ref(v___x_734_);
v_a_724_ = v___x_736_;
goto v___jp_723_;
}
else
{
size_t v___x_738_; size_t v___x_739_; lean_object* v___x_740_; 
v___x_738_ = ((size_t)0ULL);
v___x_739_ = lean_usize_of_nat(v___x_735_);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__3(v___x_731_, v___x_734_, v___x_738_, v___x_739_, v___x_736_, v_a_535_, v_a_536_);
lean_dec_ref(v___x_734_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v_a_724_ = v_a_741_;
goto v___jp_723_;
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec(v_a_534_);
v_a_742_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_740_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_740_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
}
else
{
lean_object* v___x_750_; lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_750_ = l_Lean_Syntax_getArg(v___x_729_, v___x_576_);
v___x_751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__9));
v___x_752_ = l_Lean_Syntax_isOfKind(v___x_750_, v___x_751_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; uint8_t v___x_754_; 
lean_dec(v_id_604_);
v___x_753_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__1));
v___x_754_ = l_Lean_Syntax_isOfKind(v_a_533_, v___x_753_);
if (v___x_754_ == 0)
{
lean_dec(v___x_729_);
goto v___jp_577_;
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; uint8_t v___x_758_; 
v___x_755_ = l_Lean_Syntax_getArgs(v___x_729_);
lean_dec(v___x_729_);
v___x_756_ = lean_array_get_size(v___x_755_);
v___x_757_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__2));
v___x_758_ = lean_nat_dec_lt(v___x_576_, v___x_756_);
if (v___x_758_ == 0)
{
lean_dec_ref(v___x_755_);
v_a_718_ = v___x_757_;
goto v___jp_717_;
}
else
{
size_t v___x_759_; size_t v___x_760_; lean_object* v___x_761_; 
v___x_759_ = ((size_t)0ULL);
v___x_760_ = lean_usize_of_nat(v___x_756_);
v___x_761_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4(v___x_752_, v___x_755_, v___x_759_, v___x_760_, v___x_757_, v_a_535_, v_a_536_);
lean_dec_ref(v___x_755_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_a_762_; 
v_a_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_a_762_);
lean_dec_ref_known(v___x_761_, 1);
v_a_718_ = v_a_762_;
goto v___jp_717_;
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_a_534_);
v_a_763_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_761_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
}
else
{
lean_dec(v___x_729_);
lean_dec(v_a_533_);
v___y_635_ = v_a_535_;
v___y_636_ = v_a_536_;
goto v___jp_634_;
}
}
}
else
{
lean_dec(v___x_729_);
lean_dec(v_a_533_);
v___y_635_ = v_a_535_;
v___y_636_ = v_a_536_;
goto v___jp_634_;
}
v___jp_634_:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
lean_inc(v_id_604_);
v___x_637_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabParserName_x3f___boxed), 8, 1);
lean_closure_set(v___x_637_, 0, v_id_604_);
v___x_638_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_637_, v___y_635_, v___y_636_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_707_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_707_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_707_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_707_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
if (lean_obj_tag(v_a_639_) == 1)
{
lean_object* v_val_643_; 
v_val_643_ = lean_ctor_get(v_a_639_, 0);
lean_inc(v_val_643_);
lean_dec_ref_known(v_a_639_, 1);
switch(lean_obj_tag(v_val_643_))
{
case 0:
{
lean_object* v_cat_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_648_; 
lean_dec(v_id_604_);
v_cat_644_ = lean_ctor_get(v_val_643_, 0);
lean_inc(v_cat_644_);
lean_dec_ref_known(v_val_643_, 1);
v___x_645_ = lean_box(0);
v___x_646_ = l_Lean_Syntax_mkAntiquotNode(v_cat_644_, v_a_534_, v___x_576_, v___x_645_, v___x_542_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v___x_646_);
v___x_648_ = v___x_641_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
case 1:
{
lean_object* v_decl_650_; 
lean_del_object(v___x_641_);
lean_dec(v_id_604_);
v_decl_650_ = lean_ctor_get(v_val_643_, 0);
lean_inc(v_decl_650_);
lean_dec_ref_known(v_val_643_, 1);
if (lean_obj_tag(v_decl_650_) == 1)
{
lean_object* v_pre_651_; 
v_pre_651_ = lean_ctor_get(v_decl_650_, 0);
if (lean_obj_tag(v_pre_651_) == 1)
{
lean_object* v_pre_652_; 
v_pre_652_ = lean_ctor_get(v_pre_651_, 0);
if (lean_obj_tag(v_pre_652_) == 1)
{
lean_object* v_pre_653_; 
v_pre_653_ = lean_ctor_get(v_pre_652_, 0);
switch(lean_obj_tag(v_pre_653_))
{
case 0:
{
lean_object* v_str_654_; lean_object* v_str_655_; lean_object* v_str_656_; uint8_t v___x_657_; 
v_str_654_ = lean_ctor_get(v_decl_650_, 1);
v_str_655_ = lean_ctor_get(v_pre_651_, 1);
v_str_656_ = lean_ctor_get(v_pre_652_, 1);
v___x_657_ = lean_string_dec_eq(v_str_656_, v___x_538_);
if (v___x_657_ == 0)
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
else
{
uint8_t v___x_658_; 
v___x_658_ = lean_string_dec_eq(v_str_655_, v___x_539_);
if (v___x_658_ == 0)
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
else
{
uint8_t v___x_659_; 
v___x_659_ = lean_string_dec_eq(v_str_654_, v___x_605_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_660_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__3));
v___x_661_ = lean_string_dec_eq(v_str_654_, v___x_660_);
if (v___x_661_ == 0)
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
else
{
lean_object* v___x_662_; 
lean_dec_ref_known(v_decl_650_, 2);
v___x_662_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5));
v___y_594_ = v___x_662_;
goto v___jp_593_;
}
}
else
{
lean_object* v___x_663_; 
lean_dec_ref_known(v_decl_650_, 2);
v___x_663_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6);
v___y_594_ = v___x_663_;
goto v___jp_593_;
}
}
}
}
case 1:
{
lean_object* v_pre_664_; 
v_pre_664_ = lean_ctor_get(v_pre_653_, 0);
if (lean_obj_tag(v_pre_664_) == 0)
{
lean_object* v_str_665_; lean_object* v_str_666_; lean_object* v_str_667_; lean_object* v_str_668_; uint8_t v___x_669_; 
v_str_665_ = lean_ctor_get(v_decl_650_, 1);
v_str_666_ = lean_ctor_get(v_pre_651_, 1);
v_str_667_ = lean_ctor_get(v_pre_652_, 1);
v_str_668_ = lean_ctor_get(v_pre_653_, 1);
v___x_669_ = lean_string_dec_eq(v_str_668_, v___x_538_);
if (v___x_669_ == 0)
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
else
{
uint8_t v___x_670_; 
v___x_670_ = lean_string_dec_eq(v_str_667_, v___x_539_);
if (v___x_670_ == 0)
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
else
{
lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_671_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__7));
v___x_672_ = lean_string_dec_eq(v_str_666_, v___x_671_);
if (v___x_672_ == 0)
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
else
{
uint8_t v___x_673_; 
v___x_673_ = lean_string_dec_eq(v_str_665_, v___x_605_);
if (v___x_673_ == 0)
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
else
{
lean_object* v___x_674_; 
lean_dec_ref_known(v_decl_650_, 2);
v___x_674_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__6);
v___y_594_ = v___x_674_;
goto v___jp_593_;
}
}
}
}
}
else
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
}
default: 
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
}
}
else
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
}
else
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
}
else
{
v___y_594_ = v_decl_650_;
goto v___jp_593_;
}
}
default: 
{
lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_699_; 
lean_del_object(v___x_641_);
v_isSharedCheck_699_ = !lean_is_exclusive(v_val_643_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; 
v_unused_700_ = lean_ctor_get(v_val_643_, 0);
lean_dec(v_unused_700_);
v___x_676_ = v_val_643_;
v_isShared_677_ = v_isSharedCheck_699_;
goto v_resetjp_675_;
}
else
{
lean_dec(v_val_643_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_699_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_678_ = l_Lean_TSyntax_getId(v_id_604_);
lean_dec(v_id_604_);
v___x_679_ = l_Lean_Name_eraseMacroScopes(v___x_678_);
lean_dec(v___x_678_);
v___x_680_ = l_Lean_Parser_getSyntaxKindOfParserAlias_x3f(v___x_679_);
lean_dec(v___x_679_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; 
lean_del_object(v___x_676_);
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
if (lean_obj_tag(v_a_681_) == 0)
{
lean_object* v___x_682_; 
v___x_682_ = lean_box(0);
v___y_588_ = v___x_682_;
goto v___jp_587_;
}
else
{
lean_object* v_val_683_; 
v_val_683_ = lean_ctor_get(v_a_681_, 0);
lean_inc(v_val_683_);
lean_dec_ref_known(v_a_681_, 1);
v___y_588_ = v_val_683_;
goto v___jp_587_;
}
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_698_; 
lean_dec(v_a_534_);
v_a_684_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_698_ == 0)
{
v___x_686_ = v___x_680_;
v_isShared_687_ = v_isSharedCheck_698_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_680_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_698_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v_ref_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v_ref_688_ = lean_ctor_get(v___y_635_, 7);
v___x_689_ = lean_io_error_to_string(v_a_684_);
if (v_isShared_677_ == 0)
{
lean_ctor_set_tag(v___x_676_, 3);
lean_ctor_set(v___x_676_, 0, v___x_689_);
v___x_691_ = v___x_676_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_697_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_692_ = l_Lean_MessageData_ofFormat(v___x_691_);
lean_inc(v_ref_688_);
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v_ref_688_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_693_);
v___x_695_ = v___x_686_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
lean_del_object(v___x_641_);
lean_dec(v_a_639_);
lean_dec(v_a_534_);
v___x_701_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__9, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__9_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__9);
v___x_702_ = l_Lean_MessageData_ofSyntax(v_id_604_);
v___x_703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__11, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__11_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__11);
v___x_705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg(v___x_705_, v___y_635_, v___y_636_);
return v___x_706_;
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec(v_id_604_);
lean_dec(v_a_534_);
v_a_708_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_638_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_638_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
v___jp_717_:
{
lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_719_ = lean_array_get_size(v_a_718_);
v___x_720_ = lean_nat_dec_eq(v___x_719_, v___x_716_);
if (v___x_720_ == 0)
{
lean_dec_ref(v_a_718_);
goto v___jp_577_;
}
else
{
lean_object* v___x_721_; 
v___x_721_ = lean_array_fget(v_a_718_, v___x_576_);
lean_dec_ref(v_a_718_);
v_a_533_ = v___x_721_;
goto _start;
}
}
v___jp_723_:
{
lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_725_ = lean_array_get_size(v_a_724_);
v___x_726_ = lean_nat_dec_eq(v___x_725_, v___x_716_);
if (v___x_726_ == 0)
{
lean_dec_ref(v_a_724_);
goto v___jp_582_;
}
else
{
lean_object* v___x_727_; 
v___x_727_ = lean_array_fget(v_a_724_, v___x_576_);
lean_dec_ref(v_a_724_);
v_a_533_ = v___x_727_;
goto _start;
}
}
}
v___jp_577_:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_578_ = lean_box(0);
v___x_579_ = lean_box(0);
v___x_580_ = l_Lean_Syntax_mkAntiquotNode(v___x_578_, v_a_534_, v___x_576_, v___x_579_, v___x_542_);
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
v___jp_582_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_583_ = lean_box(0);
v___x_584_ = lean_box(0);
v___x_585_ = l_Lean_Syntax_mkAntiquotNode(v___x_583_, v_a_534_, v___x_576_, v___x_584_, v___x_542_);
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
return v___x_586_;
}
v___jp_587_:
{
lean_object* v___x_589_; uint8_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_589_ = lean_box(0);
v___x_590_ = 0;
v___x_591_ = l_Lean_Syntax_mkAntiquotNode(v___y_588_, v_a_534_, v___x_576_, v___x_589_, v___x_590_);
v___x_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
return v___x_592_;
}
v___jp_593_:
{
lean_object* v___x_595_; uint8_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_595_ = lean_box(0);
v___x_596_ = 0;
v___x_597_ = l_Lean_Syntax_mkAntiquotNode(v___y_594_, v_a_534_, v___x_576_, v___x_595_, v___x_596_);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
return v___x_598_;
}
v___jp_599_:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_600_ = lean_box(0);
v___x_601_ = lean_box(0);
v___x_602_ = l_Lean_Syntax_mkAntiquotNode(v___x_600_, v_a_534_, v___x_576_, v___x_601_, v___x_542_);
v___x_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
return v___x_603_;
}
}
v___jp_543_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_544_ = lean_box(0);
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = lean_box(0);
v___x_547_ = l_Lean_Syntax_mkAntiquotNode(v___x_544_, v_a_534_, v___x_545_, v___x_546_, v___x_542_);
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___boxed(lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_a_771_, v_a_772_, v_a_773_, v_a_774_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2(lean_object* v_msgData_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg(v_msgData_777_, v___y_779_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___boxed(lean_object* v_msgData_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2(v_msgData_782_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2(lean_object* v_00_u03b1_787_, lean_object* v_msg_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg(v_msg_788_, v___y_789_, v___y_790_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___boxed(lean_object* v_00_u03b1_793_, lean_object* v_msg_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2(v_00_u03b1_793_, v_msg_794_, v___y_795_, v___y_796_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3(lean_object* v_msgData_799_, lean_object* v_macroStack_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___redArg(v_msgData_799_, v_macroStack_800_, v___y_802_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3___boxed(lean_object* v_msgData_805_, lean_object* v_macroStack_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__3(v_msgData_805_, v_macroStack_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(lean_object* v_kind_814_, lean_object* v_stx_815_, lean_object* v_id_816_, lean_object* v_suffix_817_, lean_object* v_a_818_, lean_object* v_a_819_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_815_, v_id_816_, v_a_818_, v_a_819_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_836_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_836_ == 0)
{
v___x_824_ = v___x_821_;
v_isShared_825_ = v_isSharedCheck_836_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_821_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_836_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_834_; 
v___x_826_ = l_Lean_Syntax_mkAntiquotSuffixSpliceNode(v_kind_814_, v_a_822_, v_suffix_817_);
v___x_827_ = lean_unsigned_to_nat(1u);
v___x_828_ = lean_mk_empty_array_with_capacity(v___x_827_);
v___x_829_ = lean_array_push(v___x_828_, v___x_826_);
v___x_830_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
v___x_831_ = lean_box(2);
v___x_832_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
lean_ctor_set(v___x_832_, 1, v___x_830_);
lean_ctor_set(v___x_832_, 2, v___x_829_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 0, v___x_832_);
v___x_834_ = v___x_824_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
else
{
lean_dec_ref(v_suffix_817_);
lean_dec(v_kind_814_);
return v___x_821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___boxed(lean_object* v_kind_837_, lean_object* v_stx_838_, lean_object* v_id_839_, lean_object* v_suffix_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(v_kind_837_, v_stx_838_, v_id_839_, v_suffix_840_, v_a_841_, v_a_842_);
lean_dec(v_a_842_);
lean_dec_ref(v_a_841_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; lean_object* v_env_848_; lean_object* v___x_849_; lean_object* v_mainModule_850_; lean_object* v___x_851_; 
v___x_847_ = lean_st_ref_get(v___y_845_);
v_env_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc_ref(v_env_848_);
lean_dec(v___x_847_);
v___x_849_ = l_Lean_Environment_header(v_env_848_);
lean_dec_ref(v_env_848_);
v_mainModule_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_mainModule_850_);
lean_dec_ref(v___x_849_);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v_mainModule_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg___boxed(lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v___y_852_);
lean_dec(v___y_852_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0(lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v___y_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___boxed(lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0(v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1(lean_object* v_msg_864_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1___closed__0));
v___x_866_ = lean_panic_fn_borrowed(v___x_865_, v_msg_864_);
return v___x_866_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = l_Lean_maxRecDepthErrorMessage;
v___x_873_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__4(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__3);
v___x_875_ = l_Lean_MessageData_ofFormat(v___x_874_);
return v___x_875_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_876_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__4);
v___x_877_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__2));
v___x_878_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
lean_ctor_set(v___x_878_, 1, v___x_876_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg(lean_object* v_ref_879_){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_881_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___closed__5);
v___x_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_882_, 0, v_ref_879_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg___boxed(lean_object* v_ref_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg(v_ref_884_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__0(lean_object* v_env_887_, lean_object* v_declName_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
uint8_t v___x_891_; lean_object* v_env_892_; lean_object* v___x_893_; uint8_t v___x_894_; uint8_t v___x_895_; 
v___x_891_ = 0;
v_env_892_ = l_Lean_Environment_setExporting(v_env_887_, v___x_891_);
lean_inc(v_declName_888_);
v___x_893_ = l_Lean_mkPrivateName(v_env_892_, v_declName_888_);
v___x_894_ = 1;
lean_inc_ref(v_env_892_);
v___x_895_ = l_Lean_Environment_contains(v_env_892_, v___x_893_, v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; uint8_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_896_ = l_Lean_privateToUserName(v_declName_888_);
v___x_897_ = l_Lean_Environment_contains(v_env_892_, v___x_896_, v___x_894_);
v___x_898_ = lean_box(v___x_897_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v___y_890_);
return v___x_899_;
}
else
{
lean_object* v___x_900_; lean_object* v___x_901_; 
lean_dec_ref(v_env_892_);
lean_dec(v_declName_888_);
v___x_900_ = lean_box(v___x_895_);
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
lean_ctor_set(v___x_901_, 1, v___y_890_);
return v___x_901_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__0___boxed(lean_object* v_env_902_, lean_object* v_declName_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__0(v_env_902_, v_declName_903_, v___y_904_, v___y_905_);
lean_dec_ref(v___y_904_);
return v_res_906_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___redArg(lean_object* v_a_907_, lean_object* v_x_908_){
_start:
{
if (lean_obj_tag(v_x_908_) == 0)
{
uint8_t v___x_909_; 
v___x_909_ = 0;
return v___x_909_;
}
else
{
lean_object* v_key_910_; lean_object* v_tail_911_; uint8_t v___x_912_; 
v_key_910_ = lean_ctor_get(v_x_908_, 0);
v_tail_911_ = lean_ctor_get(v_x_908_, 2);
v___x_912_ = l_Lean_instBEqExtraModUse_beq(v_key_910_, v_a_907_);
if (v___x_912_ == 0)
{
v_x_908_ = v_tail_911_;
goto _start;
}
else
{
return v___x_912_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___redArg___boxed(lean_object* v_a_914_, lean_object* v_x_915_){
_start:
{
uint8_t v_res_916_; lean_object* v_r_917_; 
v_res_916_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___redArg(v_a_914_, v_x_915_);
lean_dec(v_x_915_);
lean_dec_ref(v_a_914_);
v_r_917_ = lean_box(v_res_916_);
return v_r_917_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19_spec__21___redArg(lean_object* v_x_918_, lean_object* v_x_919_){
_start:
{
if (lean_obj_tag(v_x_919_) == 0)
{
return v_x_918_;
}
else
{
lean_object* v_key_920_; lean_object* v_value_921_; lean_object* v_tail_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_945_; 
v_key_920_ = lean_ctor_get(v_x_919_, 0);
v_value_921_ = lean_ctor_get(v_x_919_, 1);
v_tail_922_ = lean_ctor_get(v_x_919_, 2);
v_isSharedCheck_945_ = !lean_is_exclusive(v_x_919_);
if (v_isSharedCheck_945_ == 0)
{
v___x_924_ = v_x_919_;
v_isShared_925_ = v_isSharedCheck_945_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_tail_922_);
lean_inc(v_value_921_);
lean_inc(v_key_920_);
lean_dec(v_x_919_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_945_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; uint64_t v___x_927_; uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v_fold_930_; uint64_t v___x_931_; uint64_t v___x_932_; uint64_t v___x_933_; size_t v___x_934_; size_t v___x_935_; size_t v___x_936_; size_t v___x_937_; size_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_941_; 
v___x_926_ = lean_array_get_size(v_x_918_);
v___x_927_ = l_Lean_instHashableExtraModUse_hash(v_key_920_);
v___x_928_ = 32ULL;
v___x_929_ = lean_uint64_shift_right(v___x_927_, v___x_928_);
v_fold_930_ = lean_uint64_xor(v___x_927_, v___x_929_);
v___x_931_ = 16ULL;
v___x_932_ = lean_uint64_shift_right(v_fold_930_, v___x_931_);
v___x_933_ = lean_uint64_xor(v_fold_930_, v___x_932_);
v___x_934_ = lean_uint64_to_usize(v___x_933_);
v___x_935_ = lean_usize_of_nat(v___x_926_);
v___x_936_ = ((size_t)1ULL);
v___x_937_ = lean_usize_sub(v___x_935_, v___x_936_);
v___x_938_ = lean_usize_land(v___x_934_, v___x_937_);
v___x_939_ = lean_array_uget_borrowed(v_x_918_, v___x_938_);
lean_inc(v___x_939_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 2, v___x_939_);
v___x_941_ = v___x_924_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_key_920_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_value_921_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v___x_939_);
v___x_941_ = v_reuseFailAlloc_944_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_942_; 
v___x_942_ = lean_array_uset(v_x_918_, v___x_938_, v___x_941_);
v_x_918_ = v___x_942_;
v_x_919_ = v_tail_922_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19___redArg(lean_object* v_i_946_, lean_object* v_source_947_, lean_object* v_target_948_){
_start:
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = lean_array_get_size(v_source_947_);
v___x_950_ = lean_nat_dec_lt(v_i_946_, v___x_949_);
if (v___x_950_ == 0)
{
lean_dec_ref(v_source_947_);
lean_dec(v_i_946_);
return v_target_948_;
}
else
{
lean_object* v_es_951_; lean_object* v___x_952_; lean_object* v_source_953_; lean_object* v_target_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_es_951_ = lean_array_fget(v_source_947_, v_i_946_);
v___x_952_ = lean_box(0);
v_source_953_ = lean_array_fset(v_source_947_, v_i_946_, v___x_952_);
v_target_954_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19_spec__21___redArg(v_target_948_, v_es_951_);
v___x_955_ = lean_unsigned_to_nat(1u);
v___x_956_ = lean_nat_add(v_i_946_, v___x_955_);
lean_dec(v_i_946_);
v_i_946_ = v___x_956_;
v_source_947_ = v_source_953_;
v_target_948_ = v_target_954_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15___redArg(lean_object* v_data_958_){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v_nbuckets_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_959_ = lean_array_get_size(v_data_958_);
v___x_960_ = lean_unsigned_to_nat(2u);
v_nbuckets_961_ = lean_nat_mul(v___x_959_, v___x_960_);
v___x_962_ = lean_unsigned_to_nat(0u);
v___x_963_ = lean_box(0);
v___x_964_ = lean_mk_array(v_nbuckets_961_, v___x_963_);
v___x_965_ = lean_array_propagate_mark(v_data_958_, v___x_964_);
v___x_966_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19___redArg(v___x_962_, v_data_958_, v___x_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9___redArg(lean_object* v_m_967_, lean_object* v_a_968_, lean_object* v_b_969_){
_start:
{
lean_object* v_size_970_; lean_object* v_buckets_971_; lean_object* v___x_972_; uint64_t v___x_973_; uint64_t v___x_974_; uint64_t v___x_975_; uint64_t v_fold_976_; uint64_t v___x_977_; uint64_t v___x_978_; uint64_t v___x_979_; size_t v___x_980_; size_t v___x_981_; size_t v___x_982_; size_t v___x_983_; size_t v___x_984_; lean_object* v_bkt_985_; uint8_t v___x_986_; 
v_size_970_ = lean_ctor_get(v_m_967_, 0);
v_buckets_971_ = lean_ctor_get(v_m_967_, 1);
v___x_972_ = lean_array_get_size(v_buckets_971_);
v___x_973_ = l_Lean_instHashableExtraModUse_hash(v_a_968_);
v___x_974_ = 32ULL;
v___x_975_ = lean_uint64_shift_right(v___x_973_, v___x_974_);
v_fold_976_ = lean_uint64_xor(v___x_973_, v___x_975_);
v___x_977_ = 16ULL;
v___x_978_ = lean_uint64_shift_right(v_fold_976_, v___x_977_);
v___x_979_ = lean_uint64_xor(v_fold_976_, v___x_978_);
v___x_980_ = lean_uint64_to_usize(v___x_979_);
v___x_981_ = lean_usize_of_nat(v___x_972_);
v___x_982_ = ((size_t)1ULL);
v___x_983_ = lean_usize_sub(v___x_981_, v___x_982_);
v___x_984_ = lean_usize_land(v___x_980_, v___x_983_);
v_bkt_985_ = lean_array_uget_borrowed(v_buckets_971_, v___x_984_);
v___x_986_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___redArg(v_a_968_, v_bkt_985_);
if (v___x_986_ == 0)
{
lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1007_; 
lean_inc_ref(v_buckets_971_);
lean_inc(v_size_970_);
v_isSharedCheck_1007_ = !lean_is_exclusive(v_m_967_);
if (v_isSharedCheck_1007_ == 0)
{
lean_object* v_unused_1008_; lean_object* v_unused_1009_; 
v_unused_1008_ = lean_ctor_get(v_m_967_, 1);
lean_dec(v_unused_1008_);
v_unused_1009_ = lean_ctor_get(v_m_967_, 0);
lean_dec(v_unused_1009_);
v___x_988_ = v_m_967_;
v_isShared_989_ = v_isSharedCheck_1007_;
goto v_resetjp_987_;
}
else
{
lean_dec(v_m_967_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1007_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v_size_x27_991_; lean_object* v___x_992_; lean_object* v_buckets_x27_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; uint8_t v___x_999_; 
v___x_990_ = lean_unsigned_to_nat(1u);
v_size_x27_991_ = lean_nat_add(v_size_970_, v___x_990_);
lean_dec(v_size_970_);
lean_inc(v_bkt_985_);
v___x_992_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_992_, 0, v_a_968_);
lean_ctor_set(v___x_992_, 1, v_b_969_);
lean_ctor_set(v___x_992_, 2, v_bkt_985_);
v_buckets_x27_993_ = lean_array_uset(v_buckets_971_, v___x_984_, v___x_992_);
v___x_994_ = lean_unsigned_to_nat(4u);
v___x_995_ = lean_nat_mul(v_size_x27_991_, v___x_994_);
v___x_996_ = lean_unsigned_to_nat(3u);
v___x_997_ = lean_nat_div(v___x_995_, v___x_996_);
lean_dec(v___x_995_);
v___x_998_ = lean_array_get_size(v_buckets_x27_993_);
v___x_999_ = lean_nat_dec_le(v___x_997_, v___x_998_);
lean_dec(v___x_997_);
if (v___x_999_ == 0)
{
lean_object* v_val_1000_; lean_object* v___x_1002_; 
v_val_1000_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15___redArg(v_buckets_x27_993_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v_val_1000_);
lean_ctor_set(v___x_988_, 0, v_size_x27_991_);
v___x_1002_ = v___x_988_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_size_x27_991_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_val_1000_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
else
{
lean_object* v___x_1005_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v_buckets_x27_993_);
lean_ctor_set(v___x_988_, 0, v_size_x27_991_);
v___x_1005_ = v___x_988_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_size_x27_991_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_buckets_x27_993_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
else
{
lean_dec(v_b_969_);
lean_dec_ref(v_a_968_);
return v_m_967_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___redArg(lean_object* v_keys_1010_, lean_object* v_i_1011_, lean_object* v_k_1012_){
_start:
{
lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = lean_array_get_size(v_keys_1010_);
v___x_1014_ = lean_nat_dec_lt(v_i_1011_, v___x_1013_);
if (v___x_1014_ == 0)
{
lean_dec(v_i_1011_);
return v___x_1014_;
}
else
{
lean_object* v_k_x27_1015_; uint8_t v___x_1016_; 
v_k_x27_1015_ = lean_array_fget_borrowed(v_keys_1010_, v_i_1011_);
v___x_1016_ = l_Lean_instBEqExtraModUse_beq(v_k_1012_, v_k_x27_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = lean_nat_add(v_i_1011_, v___x_1017_);
lean_dec(v_i_1011_);
v_i_1011_ = v___x_1018_;
goto _start;
}
else
{
lean_dec(v_i_1011_);
return v___x_1014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___redArg___boxed(lean_object* v_keys_1020_, lean_object* v_i_1021_, lean_object* v_k_1022_){
_start:
{
uint8_t v_res_1023_; lean_object* v_r_1024_; 
v_res_1023_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___redArg(v_keys_1020_, v_i_1021_, v_k_1022_);
lean_dec_ref(v_k_1022_);
lean_dec_ref(v_keys_1020_);
v_r_1024_ = lean_box(v_res_1023_);
return v_r_1024_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___redArg(lean_object* v_x_1025_, size_t v_x_1026_, lean_object* v_x_1027_){
_start:
{
if (lean_obj_tag(v_x_1025_) == 0)
{
lean_object* v_es_1028_; lean_object* v___x_1029_; size_t v___x_1030_; size_t v___x_1031_; lean_object* v_j_1032_; lean_object* v___x_1033_; 
v_es_1028_ = lean_ctor_get(v_x_1025_, 0);
v___x_1029_ = lean_box(2);
v___x_1030_ = ((size_t)31ULL);
v___x_1031_ = lean_usize_land(v_x_1026_, v___x_1030_);
v_j_1032_ = lean_usize_to_nat(v___x_1031_);
v___x_1033_ = lean_array_get_borrowed(v___x_1029_, v_es_1028_, v_j_1032_);
lean_dec(v_j_1032_);
switch(lean_obj_tag(v___x_1033_))
{
case 0:
{
lean_object* v_key_1034_; uint8_t v___x_1035_; 
v_key_1034_ = lean_ctor_get(v___x_1033_, 0);
v___x_1035_ = l_Lean_instBEqExtraModUse_beq(v_x_1027_, v_key_1034_);
return v___x_1035_;
}
case 1:
{
lean_object* v_node_1036_; size_t v___x_1037_; size_t v___x_1038_; 
v_node_1036_ = lean_ctor_get(v___x_1033_, 0);
v___x_1037_ = ((size_t)5ULL);
v___x_1038_ = lean_usize_shift_right(v_x_1026_, v___x_1037_);
v_x_1025_ = v_node_1036_;
v_x_1026_ = v___x_1038_;
goto _start;
}
default: 
{
uint8_t v___x_1040_; 
v___x_1040_ = 0;
return v___x_1040_;
}
}
}
else
{
lean_object* v_ks_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; 
v_ks_1041_ = lean_ctor_get(v_x_1025_, 0);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___redArg(v_ks_1041_, v___x_1042_, v_x_1027_);
return v___x_1043_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___redArg___boxed(lean_object* v_x_1044_, lean_object* v_x_1045_, lean_object* v_x_1046_){
_start:
{
size_t v_x_43510__boxed_1047_; uint8_t v_res_1048_; lean_object* v_r_1049_; 
v_x_43510__boxed_1047_ = lean_unbox_usize(v_x_1045_);
lean_dec(v_x_1045_);
v_res_1048_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___redArg(v_x_1044_, v_x_43510__boxed_1047_, v_x_1046_);
lean_dec_ref(v_x_1046_);
lean_dec_ref(v_x_1044_);
v_r_1049_ = lean_box(v_res_1048_);
return v_r_1049_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___redArg(lean_object* v_x_1050_, lean_object* v_x_1051_){
_start:
{
uint64_t v___x_1052_; size_t v___x_1053_; uint8_t v___x_1054_; 
v___x_1052_ = l_Lean_instHashableExtraModUse_hash(v_x_1051_);
v___x_1053_ = lean_uint64_to_usize(v___x_1052_);
v___x_1054_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___redArg(v_x_1050_, v___x_1053_, v_x_1051_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___redArg___boxed(lean_object* v_x_1055_, lean_object* v_x_1056_){
_start:
{
uint8_t v_res_1057_; lean_object* v_r_1058_; 
v_res_1057_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___redArg(v_x_1055_, v_x_1056_);
lean_dec_ref(v_x_1056_);
lean_dec_ref(v_x_1055_);
v_r_1058_ = lean_box(v_res_1057_);
return v_r_1058_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1059_; double v___x_1060_; 
v___x_1059_ = lean_unsigned_to_nat(0u);
v___x_1060_ = lean_float_of_nat(v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2(lean_object* v_cls_1063_, lean_object* v_msg_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_Elab_Command_getRef___redArg(v___y_1065_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1119_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2_spec__2___redArg(v_msg_1064_, v___y_1066_);
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1073_ = v___x_1070_;
v_isShared_1074_ = v_isSharedCheck_1119_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1070_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1119_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; lean_object* v_traceState_1076_; lean_object* v_env_1077_; lean_object* v_messages_1078_; lean_object* v_scopes_1079_; lean_object* v_usedQuotCtxts_1080_; lean_object* v_nextMacroScope_1081_; lean_object* v_maxRecDepth_1082_; lean_object* v_ngen_1083_; lean_object* v_auxDeclNGen_1084_; lean_object* v_infoState_1085_; lean_object* v_snapshotTasks_1086_; lean_object* v_prevLinterStates_1087_; lean_object* v_codeQualityEntryTasks_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1118_; 
v___x_1075_ = lean_st_ref_take(v___y_1066_);
v_traceState_1076_ = lean_ctor_get(v___x_1075_, 9);
v_env_1077_ = lean_ctor_get(v___x_1075_, 0);
v_messages_1078_ = lean_ctor_get(v___x_1075_, 1);
v_scopes_1079_ = lean_ctor_get(v___x_1075_, 2);
v_usedQuotCtxts_1080_ = lean_ctor_get(v___x_1075_, 3);
v_nextMacroScope_1081_ = lean_ctor_get(v___x_1075_, 4);
v_maxRecDepth_1082_ = lean_ctor_get(v___x_1075_, 5);
v_ngen_1083_ = lean_ctor_get(v___x_1075_, 6);
v_auxDeclNGen_1084_ = lean_ctor_get(v___x_1075_, 7);
v_infoState_1085_ = lean_ctor_get(v___x_1075_, 8);
v_snapshotTasks_1086_ = lean_ctor_get(v___x_1075_, 10);
v_prevLinterStates_1087_ = lean_ctor_get(v___x_1075_, 11);
v_codeQualityEntryTasks_1088_ = lean_ctor_get(v___x_1075_, 12);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1090_ = v___x_1075_;
v_isShared_1091_ = v_isSharedCheck_1118_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1088_);
lean_inc(v_prevLinterStates_1087_);
lean_inc(v_snapshotTasks_1086_);
lean_inc(v_traceState_1076_);
lean_inc(v_infoState_1085_);
lean_inc(v_auxDeclNGen_1084_);
lean_inc(v_ngen_1083_);
lean_inc(v_maxRecDepth_1082_);
lean_inc(v_nextMacroScope_1081_);
lean_inc(v_usedQuotCtxts_1080_);
lean_inc(v_scopes_1079_);
lean_inc(v_messages_1078_);
lean_inc(v_env_1077_);
lean_dec(v___x_1075_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1118_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
uint64_t v_tid_1092_; lean_object* v_traces_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1117_; 
v_tid_1092_ = lean_ctor_get_uint64(v_traceState_1076_, sizeof(void*)*1);
v_traces_1093_ = lean_ctor_get(v_traceState_1076_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_traceState_1076_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1095_ = v_traceState_1076_;
v_isShared_1096_ = v_isSharedCheck_1117_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_traces_1093_);
lean_dec(v_traceState_1076_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1117_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; double v___x_1099_; uint8_t v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1097_ = lean_box(0);
v___x_1098_ = lean_box(0);
v___x_1099_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__0);
v___x_1100_ = 0;
v___x_1101_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1___closed__0));
v___x_1102_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1102_, 0, v_cls_1063_);
lean_ctor_set(v___x_1102_, 1, v___x_1098_);
lean_ctor_set(v___x_1102_, 2, v___x_1101_);
lean_ctor_set_float(v___x_1102_, sizeof(void*)*3, v___x_1099_);
lean_ctor_set_float(v___x_1102_, sizeof(void*)*3 + 8, v___x_1099_);
lean_ctor_set_uint8(v___x_1102_, sizeof(void*)*3 + 16, v___x_1100_);
v___x_1103_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___closed__1));
v___x_1104_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set(v___x_1104_, 1, v_a_1071_);
lean_ctor_set(v___x_1104_, 2, v___x_1103_);
v___x_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1105_, 0, v_a_1069_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = l_Lean_PersistentArray_push___redArg(v_traces_1093_, v___x_1105_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1106_);
v___x_1108_ = v___x_1095_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1106_);
lean_ctor_set_uint64(v_reuseFailAlloc_1116_, sizeof(void*)*1, v_tid_1092_);
v___x_1108_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1110_; 
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 9, v___x_1108_);
v___x_1110_ = v___x_1090_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_env_1077_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_messages_1078_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v_scopes_1079_);
lean_ctor_set(v_reuseFailAlloc_1115_, 3, v_usedQuotCtxts_1080_);
lean_ctor_set(v_reuseFailAlloc_1115_, 4, v_nextMacroScope_1081_);
lean_ctor_set(v_reuseFailAlloc_1115_, 5, v_maxRecDepth_1082_);
lean_ctor_set(v_reuseFailAlloc_1115_, 6, v_ngen_1083_);
lean_ctor_set(v_reuseFailAlloc_1115_, 7, v_auxDeclNGen_1084_);
lean_ctor_set(v_reuseFailAlloc_1115_, 8, v_infoState_1085_);
lean_ctor_set(v_reuseFailAlloc_1115_, 9, v___x_1108_);
lean_ctor_set(v_reuseFailAlloc_1115_, 10, v_snapshotTasks_1086_);
lean_ctor_set(v_reuseFailAlloc_1115_, 11, v_prevLinterStates_1087_);
lean_ctor_set(v_reuseFailAlloc_1115_, 12, v_codeQualityEntryTasks_1088_);
v___x_1110_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1111_ = lean_st_ref_put(v___y_1066_, v___x_1110_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v___x_1097_);
v___x_1113_ = v___x_1073_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1097_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec_ref(v_msg_1064_);
lean_dec(v_cls_1063_);
v_a_1120_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1068_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1068_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2___boxed(lean_object* v_cls_1128_, lean_object* v_msg_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2(v_cls_1128_, v_msg_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___lam__0(lean_object* v___x_1134_, lean_object* v_entry_1135_, lean_object* v_s_1136_){
_start:
{
lean_object* v_addEntryFn_1137_; lean_object* v_importedEntries_1138_; lean_object* v_state_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1147_; 
v_addEntryFn_1137_ = lean_ctor_get(v___x_1134_, 3);
lean_inc(v_addEntryFn_1137_);
lean_dec_ref(v___x_1134_);
v_importedEntries_1138_ = lean_ctor_get(v_s_1136_, 0);
v_state_1139_ = lean_ctor_get(v_s_1136_, 1);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_s_1136_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1141_ = v_s_1136_;
v_isShared_1142_ = v_isSharedCheck_1147_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_state_1139_);
lean_inc(v_importedEntries_1138_);
lean_dec(v_s_1136_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1147_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v_state_1143_; lean_object* v___x_1145_; 
v_state_1143_ = lean_apply_2(v_addEntryFn_1137_, v_state_1139_, v_entry_1135_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 1, v_state_1143_);
v___x_1145_ = v___x_1141_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_importedEntries_1138_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v_state_1143_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1148_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__4(void){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__3));
v___x_1154_ = l_Lean_stringToMessageData(v___x_1153_);
return v___x_1154_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__6(void){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__5));
v___x_1157_ = l_Lean_stringToMessageData(v___x_1156_);
return v___x_1157_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__9(void){
_start:
{
lean_object* v_cls_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_cls_1161_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__2));
v___x_1162_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__8));
v___x_1163_ = l_Lean_Name_append(v___x_1162_, v_cls_1161_);
return v___x_1163_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__11(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__10));
v___x_1166_ = l_Lean_stringToMessageData(v___x_1165_);
return v___x_1166_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__13(void){
_start:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__12));
v___x_1169_ = l_Lean_stringToMessageData(v___x_1168_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5(lean_object* v_mod_1174_, uint8_t v_isMeta_1175_, lean_object* v_hint_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v___y_1193_; lean_object* v___y_1194_; lean_object* v___y_1195_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v_env_1201_; uint8_t v_isExporting_1202_; lean_object* v_entry_1203_; lean_object* v___x_1204_; lean_object* v_env_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1199_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__0);
v___x_1200_ = lean_st_ref_get(v___y_1178_);
v_env_1201_ = lean_ctor_get(v___x_1200_, 0);
lean_inc_ref(v_env_1201_);
lean_dec(v___x_1200_);
v_isExporting_1202_ = lean_ctor_get_uint8(v_env_1201_, sizeof(void*)*13);
lean_dec_ref(v_env_1201_);
lean_inc(v_mod_1174_);
v_entry_1203_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1203_, 0, v_mod_1174_);
lean_ctor_set_uint8(v_entry_1203_, sizeof(void*)*1, v_isExporting_1202_);
lean_ctor_set_uint8(v_entry_1203_, sizeof(void*)*1 + 1, v_isMeta_1175_);
v___x_1204_ = lean_st_ref_get(v___y_1178_);
v_env_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc_ref(v_env_1205_);
lean_dec(v___x_1204_);
v___x_1206_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1207_ = lean_box(1);
v___x_1208_ = lean_box(0);
v___x_1209_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1199_, v___x_1206_, v_env_1205_, v___x_1207_, v___x_1208_);
v___x_1210_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___redArg(v___x_1209_, v_entry_1203_);
lean_dec(v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___f_1211_; uint8_t v___x_1212_; lean_object* v___y_1214_; lean_object* v___y_1237_; lean_object* v_cls_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v_scopes_1269_; lean_object* v___x_1270_; lean_object* v_opts_1271_; uint8_t v_hasTrace_1272_; 
lean_inc_ref(v_entry_1203_);
v___f_1211_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___lam__0), 3, 2);
lean_closure_set(v___f_1211_, 0, v___x_1206_);
lean_closure_set(v___f_1211_, 1, v_entry_1203_);
v___x_1212_ = 1;
v_cls_1244_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__2));
v___x_1245_ = l_Lean_inheritedTraceOptions;
v___x_1246_ = lean_st_ref_get(v___x_1245_);
v___x_1247_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1248_ = lean_st_ref_get(v___y_1178_);
v_scopes_1269_ = lean_ctor_get(v___x_1248_, 2);
lean_inc(v_scopes_1269_);
lean_dec(v___x_1248_);
v___x_1270_ = l_List_head_x21___redArg(v___x_1247_, v_scopes_1269_);
lean_dec(v_scopes_1269_);
v_opts_1271_ = lean_ctor_get(v___x_1270_, 1);
lean_inc_ref(v_opts_1271_);
lean_dec(v___x_1270_);
v_hasTrace_1272_ = lean_ctor_get_uint8(v_opts_1271_, sizeof(void*)*1);
if (v_hasTrace_1272_ == 0)
{
lean_dec_ref(v_opts_1271_);
lean_dec(v___x_1246_);
lean_dec(v_hint_1176_);
lean_dec(v_mod_1174_);
v___y_1237_ = v___y_1178_;
goto v___jp_1236_;
}
else
{
lean_object* v___x_1273_; uint8_t v___x_1274_; 
v___x_1273_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__9);
v___x_1274_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1246_, v_opts_1271_, v___x_1273_);
lean_dec_ref(v_opts_1271_);
lean_dec(v___x_1246_);
if (v___x_1274_ == 0)
{
lean_dec(v_hint_1176_);
lean_dec(v_mod_1174_);
v___y_1237_ = v___y_1178_;
goto v___jp_1236_;
}
else
{
lean_object* v___x_1275_; lean_object* v___y_1277_; 
v___x_1275_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__11);
if (v_isExporting_1202_ == 0)
{
lean_object* v___x_1284_; 
v___x_1284_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__16));
v___y_1277_ = v___x_1284_;
goto v___jp_1276_;
}
else
{
lean_object* v___x_1285_; 
v___x_1285_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__17));
v___y_1277_ = v___x_1285_;
goto v___jp_1276_;
}
v___jp_1276_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
lean_inc_ref(v___y_1277_);
v___x_1278_ = l_Lean_stringToMessageData(v___y_1277_);
v___x_1279_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1275_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__13);
v___x_1281_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1279_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
if (v_isMeta_1175_ == 0)
{
lean_object* v___x_1282_; 
v___x_1282_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__14));
v___y_1255_ = v___x_1281_;
v___y_1256_ = v___x_1282_;
goto v___jp_1254_;
}
else
{
lean_object* v___x_1283_; 
v___x_1283_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__15));
v___y_1255_ = v___x_1281_;
v___y_1256_ = v___x_1283_;
goto v___jp_1254_;
}
}
}
}
v___jp_1213_:
{
lean_object* v___x_1215_; lean_object* v_toEnvExtension_1216_; lean_object* v_env_1217_; lean_object* v_messages_1218_; lean_object* v_scopes_1219_; lean_object* v_usedQuotCtxts_1220_; lean_object* v_nextMacroScope_1221_; lean_object* v_maxRecDepth_1222_; lean_object* v_ngen_1223_; lean_object* v_auxDeclNGen_1224_; lean_object* v_infoState_1225_; lean_object* v_traceState_1226_; lean_object* v_snapshotTasks_1227_; lean_object* v_prevLinterStates_1228_; lean_object* v_codeQualityEntryTasks_1229_; lean_object* v_asyncMode_1230_; uint8_t v_logWrites_1231_; lean_object* v___x_1232_; 
v___x_1215_ = lean_st_ref_take(v___y_1214_);
v_toEnvExtension_1216_ = lean_ctor_get(v___x_1206_, 0);
v_env_1217_ = lean_ctor_get(v___x_1215_, 0);
lean_inc_ref(v_env_1217_);
v_messages_1218_ = lean_ctor_get(v___x_1215_, 1);
lean_inc_ref(v_messages_1218_);
v_scopes_1219_ = lean_ctor_get(v___x_1215_, 2);
lean_inc(v_scopes_1219_);
v_usedQuotCtxts_1220_ = lean_ctor_get(v___x_1215_, 3);
lean_inc(v_usedQuotCtxts_1220_);
v_nextMacroScope_1221_ = lean_ctor_get(v___x_1215_, 4);
lean_inc(v_nextMacroScope_1221_);
v_maxRecDepth_1222_ = lean_ctor_get(v___x_1215_, 5);
lean_inc(v_maxRecDepth_1222_);
v_ngen_1223_ = lean_ctor_get(v___x_1215_, 6);
lean_inc_ref(v_ngen_1223_);
v_auxDeclNGen_1224_ = lean_ctor_get(v___x_1215_, 7);
lean_inc_ref(v_auxDeclNGen_1224_);
v_infoState_1225_ = lean_ctor_get(v___x_1215_, 8);
lean_inc_ref(v_infoState_1225_);
v_traceState_1226_ = lean_ctor_get(v___x_1215_, 9);
lean_inc_ref(v_traceState_1226_);
v_snapshotTasks_1227_ = lean_ctor_get(v___x_1215_, 10);
lean_inc_ref(v_snapshotTasks_1227_);
v_prevLinterStates_1228_ = lean_ctor_get(v___x_1215_, 11);
lean_inc(v_prevLinterStates_1228_);
v_codeQualityEntryTasks_1229_ = lean_ctor_get(v___x_1215_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1229_);
lean_dec(v___x_1215_);
v_asyncMode_1230_ = lean_ctor_get(v_toEnvExtension_1216_, 2);
v_logWrites_1231_ = lean_ctor_get_uint8(v_toEnvExtension_1216_, sizeof(void*)*6);
v___x_1232_ = lean_box(0);
if (v_logWrites_1231_ == 0)
{
lean_object* v___x_1233_; 
lean_inc_ref(v_toEnvExtension_1216_);
v___x_1233_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1216_, v_env_1217_, v___f_1211_, v_asyncMode_1230_, v___x_1208_, v___x_1212_);
v___y_1181_ = v_traceState_1226_;
v___y_1182_ = v_codeQualityEntryTasks_1229_;
v___y_1183_ = v_usedQuotCtxts_1220_;
v___y_1184_ = v___x_1232_;
v___y_1185_ = v_nextMacroScope_1221_;
v___y_1186_ = v_prevLinterStates_1228_;
v___y_1187_ = v___y_1214_;
v___y_1188_ = v_maxRecDepth_1222_;
v___y_1189_ = v_infoState_1225_;
v___y_1190_ = v_snapshotTasks_1227_;
v___y_1191_ = v_messages_1218_;
v___y_1192_ = v_scopes_1219_;
v___y_1193_ = v_ngen_1223_;
v___y_1194_ = v_auxDeclNGen_1224_;
v___y_1195_ = v___x_1233_;
goto v___jp_1180_;
}
else
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_inc_ref_n(v_toEnvExtension_1216_, 2);
v___x_1234_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1216_, v_env_1217_);
lean_dec_ref(v_env_1217_);
v___x_1235_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1216_, v___x_1234_, v___f_1211_, v_asyncMode_1230_, v___x_1208_, v___x_1212_);
v___y_1181_ = v_traceState_1226_;
v___y_1182_ = v_codeQualityEntryTasks_1229_;
v___y_1183_ = v_usedQuotCtxts_1220_;
v___y_1184_ = v___x_1232_;
v___y_1185_ = v_nextMacroScope_1221_;
v___y_1186_ = v_prevLinterStates_1228_;
v___y_1187_ = v___y_1214_;
v___y_1188_ = v_maxRecDepth_1222_;
v___y_1189_ = v_infoState_1225_;
v___y_1190_ = v_snapshotTasks_1227_;
v___y_1191_ = v_messages_1218_;
v___y_1192_ = v_scopes_1219_;
v___y_1193_ = v_ngen_1223_;
v___y_1194_ = v_auxDeclNGen_1224_;
v___y_1195_ = v___x_1235_;
goto v___jp_1180_;
}
}
v___jp_1236_:
{
uint8_t v___x_1238_; 
v___x_1238_ = l_Lean_usageRecordingEnabled();
if (v___x_1238_ == 0)
{
lean_dec_ref_known(v_entry_1203_, 1);
v___y_1214_ = v___y_1237_;
goto v___jp_1213_;
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1239_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_1240_ = lean_st_ref_take(v___x_1239_);
v___x_1241_ = lean_box(0);
v___x_1242_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9___redArg(v___x_1240_, v_entry_1203_, v___x_1241_);
v___x_1243_ = lean_st_ref_put(v___x_1239_, v___x_1242_);
v___y_1214_ = v___y_1237_;
goto v___jp_1213_;
}
}
v___jp_1249_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___y_1250_);
lean_ctor_set(v___x_1252_, 1, v___y_1251_);
v___x_1253_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2(v_cls_1244_, v___x_1252_, v___y_1177_, v___y_1178_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_dec_ref_known(v___x_1253_, 1);
v___y_1237_ = v___y_1178_;
goto v___jp_1236_;
}
else
{
lean_dec_ref(v___f_1211_);
lean_dec_ref_known(v_entry_1203_, 1);
return v___x_1253_;
}
}
v___jp_1254_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
lean_inc_ref(v___y_1256_);
v___x_1257_ = l_Lean_stringToMessageData(v___y_1256_);
v___x_1258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___y_1255_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__4);
v___x_1260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = l_Lean_MessageData_ofName(v_mod_1174_);
v___x_1262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1260_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = l_Lean_Name_isAnonymous(v_hint_1176_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__6);
v___x_1265_ = l_Lean_MessageData_ofName(v_hint_1176_);
v___x_1266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1264_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v___y_1250_ = v___x_1262_;
v___y_1251_ = v___x_1266_;
goto v___jp_1249_;
}
else
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_dec(v_hint_1176_);
v___x_1267_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1___closed__0));
v___x_1268_ = l_Lean_stringToMessageData(v___x_1267_);
v___y_1250_ = v___x_1262_;
v___y_1251_ = v___x_1268_;
goto v___jp_1249_;
}
}
}
else
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec_ref_known(v_entry_1203_, 1);
lean_dec(v_hint_1176_);
lean_dec(v_mod_1174_);
v___x_1286_ = lean_box(0);
v___x_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
return v___x_1287_;
}
v___jp_1180_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1196_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1196_, 0, v___y_1195_);
lean_ctor_set(v___x_1196_, 1, v___y_1191_);
lean_ctor_set(v___x_1196_, 2, v___y_1192_);
lean_ctor_set(v___x_1196_, 3, v___y_1183_);
lean_ctor_set(v___x_1196_, 4, v___y_1185_);
lean_ctor_set(v___x_1196_, 5, v___y_1188_);
lean_ctor_set(v___x_1196_, 6, v___y_1193_);
lean_ctor_set(v___x_1196_, 7, v___y_1194_);
lean_ctor_set(v___x_1196_, 8, v___y_1189_);
lean_ctor_set(v___x_1196_, 9, v___y_1181_);
lean_ctor_set(v___x_1196_, 10, v___y_1190_);
lean_ctor_set(v___x_1196_, 11, v___y_1186_);
lean_ctor_set(v___x_1196_, 12, v___y_1182_);
v___x_1197_ = lean_st_ref_put(v___y_1187_, v___x_1196_);
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___y_1184_);
return v___x_1198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___boxed(lean_object* v_mod_1288_, lean_object* v_isMeta_1289_, lean_object* v_hint_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
uint8_t v_isMeta_boxed_1294_; lean_object* v_res_1295_; 
v_isMeta_boxed_1294_ = lean_unbox(v_isMeta_1289_);
v_res_1295_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5(v_mod_1288_, v_isMeta_boxed_1294_, v_hint_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__6(lean_object* v___x_1296_, lean_object* v_declName_1297_, lean_object* v_as_1298_, size_t v_sz_1299_, size_t v_i_1300_, lean_object* v_b_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_usize_dec_lt(v_i_1300_, v_sz_1299_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; 
lean_dec(v_declName_1297_);
v___x_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1306_, 0, v_b_1301_);
return v___x_1306_;
}
else
{
lean_object* v___x_1307_; lean_object* v_modules_1308_; lean_object* v___x_1309_; lean_object* v_a_1310_; lean_object* v___x_1311_; lean_object* v_toImport_1312_; lean_object* v_module_1313_; lean_object* v___x_1314_; uint8_t v___x_1315_; lean_object* v___x_1316_; 
v___x_1307_ = l_Lean_Environment_header(v___x_1296_);
v_modules_1308_ = lean_ctor_get(v___x_1307_, 3);
lean_inc_ref(v_modules_1308_);
lean_dec_ref(v___x_1307_);
v___x_1309_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1310_ = lean_array_uget_borrowed(v_as_1298_, v_i_1300_);
v___x_1311_ = lean_array_get(v___x_1309_, v_modules_1308_, v_a_1310_);
lean_dec_ref(v_modules_1308_);
v_toImport_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc_ref(v_toImport_1312_);
lean_dec(v___x_1311_);
v_module_1313_ = lean_ctor_get(v_toImport_1312_, 0);
lean_inc(v_module_1313_);
lean_dec_ref(v_toImport_1312_);
v___x_1314_ = lean_box(0);
v___x_1315_ = 0;
lean_inc(v_declName_1297_);
v___x_1316_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5(v_module_1313_, v___x_1315_, v_declName_1297_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1316_) == 0)
{
size_t v___x_1317_; size_t v___x_1318_; 
lean_dec_ref_known(v___x_1316_, 1);
v___x_1317_ = ((size_t)1ULL);
v___x_1318_ = lean_usize_add(v_i_1300_, v___x_1317_);
v_i_1300_ = v___x_1318_;
v_b_1301_ = v___x_1314_;
goto _start;
}
else
{
lean_dec(v_declName_1297_);
return v___x_1316_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__6___boxed(lean_object* v___x_1320_, lean_object* v_declName_1321_, lean_object* v_as_1322_, lean_object* v_sz_1323_, lean_object* v_i_1324_, lean_object* v_b_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
size_t v_sz_boxed_1329_; size_t v_i_boxed_1330_; lean_object* v_res_1331_; 
v_sz_boxed_1329_ = lean_unbox_usize(v_sz_1323_);
lean_dec(v_sz_1323_);
v_i_boxed_1330_ = lean_unbox_usize(v_i_1324_);
lean_dec(v_i_1324_);
v_res_1331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__6(v___x_1320_, v_declName_1321_, v_as_1322_, v_sz_boxed_1329_, v_i_boxed_1330_, v_b_1325_, v___y_1326_, v___y_1327_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec_ref(v_as_1322_);
lean_dec_ref(v___x_1320_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___redArg(lean_object* v_a_1332_, lean_object* v_x_1333_){
_start:
{
if (lean_obj_tag(v_x_1333_) == 0)
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_box(0);
return v___x_1334_;
}
else
{
lean_object* v_key_1335_; lean_object* v_value_1336_; lean_object* v_tail_1337_; uint8_t v___x_1338_; 
v_key_1335_ = lean_ctor_get(v_x_1333_, 0);
v_value_1336_ = lean_ctor_get(v_x_1333_, 1);
v_tail_1337_ = lean_ctor_get(v_x_1333_, 2);
v___x_1338_ = lean_name_eq(v_key_1335_, v_a_1332_);
if (v___x_1338_ == 0)
{
v_x_1333_ = v_tail_1337_;
goto _start;
}
else
{
lean_object* v___x_1340_; 
lean_inc(v_value_1336_);
v___x_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1340_, 0, v_value_1336_);
return v___x_1340_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___redArg___boxed(lean_object* v_a_1341_, lean_object* v_x_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___redArg(v_a_1341_, v_x_1342_);
lean_dec(v_x_1342_);
lean_dec(v_a_1341_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___redArg(lean_object* v_m_1344_, lean_object* v_a_1345_){
_start:
{
lean_object* v_buckets_1346_; lean_object* v___x_1347_; uint64_t v___y_1349_; 
v_buckets_1346_ = lean_ctor_get(v_m_1344_, 1);
v___x_1347_ = lean_array_get_size(v_buckets_1346_);
if (lean_obj_tag(v_a_1345_) == 0)
{
uint64_t v___x_1363_; 
v___x_1363_ = 1723ULL;
v___y_1349_ = v___x_1363_;
goto v___jp_1348_;
}
else
{
uint64_t v_hash_1364_; 
v_hash_1364_ = lean_ctor_get_uint64(v_a_1345_, sizeof(void*)*2);
v___y_1349_ = v_hash_1364_;
goto v___jp_1348_;
}
v___jp_1348_:
{
uint64_t v___x_1350_; uint64_t v___x_1351_; uint64_t v_fold_1352_; uint64_t v___x_1353_; uint64_t v___x_1354_; uint64_t v___x_1355_; size_t v___x_1356_; size_t v___x_1357_; size_t v___x_1358_; size_t v___x_1359_; size_t v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1350_ = 32ULL;
v___x_1351_ = lean_uint64_shift_right(v___y_1349_, v___x_1350_);
v_fold_1352_ = lean_uint64_xor(v___y_1349_, v___x_1351_);
v___x_1353_ = 16ULL;
v___x_1354_ = lean_uint64_shift_right(v_fold_1352_, v___x_1353_);
v___x_1355_ = lean_uint64_xor(v_fold_1352_, v___x_1354_);
v___x_1356_ = lean_uint64_to_usize(v___x_1355_);
v___x_1357_ = lean_usize_of_nat(v___x_1347_);
v___x_1358_ = ((size_t)1ULL);
v___x_1359_ = lean_usize_sub(v___x_1357_, v___x_1358_);
v___x_1360_ = lean_usize_land(v___x_1356_, v___x_1359_);
v___x_1361_ = lean_array_uget_borrowed(v_buckets_1346_, v___x_1360_);
v___x_1362_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___redArg(v_a_1345_, v___x_1361_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_m_1365_, lean_object* v_a_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___redArg(v_m_1365_, v_a_1366_);
lean_dec(v_a_1366_);
lean_dec_ref(v_m_1365_);
return v_res_1367_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4(lean_object* v_declName_1371_, uint8_t v_isMeta_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v_env_1381_; lean_object* v___y_1383_; lean_object* v___x_1396_; 
v___x_1376_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__0);
v___x_1377_ = lean_st_ref_get(v___y_1374_);
v_env_1381_ = lean_ctor_get(v___x_1377_, 0);
lean_inc_ref(v_env_1381_);
lean_dec(v___x_1377_);
v___x_1396_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1381_, v_declName_1371_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_dec_ref(v_env_1381_);
lean_dec(v_declName_1371_);
goto v___jp_1378_;
}
else
{
lean_object* v_val_1397_; lean_object* v___x_1398_; lean_object* v_modules_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v_val_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_val_1397_);
lean_dec_ref_known(v___x_1396_, 1);
v___x_1398_ = l_Lean_Environment_header(v_env_1381_);
v_modules_1399_ = lean_ctor_get(v___x_1398_, 3);
lean_inc_ref(v_modules_1399_);
lean_dec_ref(v___x_1398_);
v___x_1400_ = lean_array_get_size(v_modules_1399_);
v___x_1401_ = lean_nat_dec_lt(v_val_1397_, v___x_1400_);
if (v___x_1401_ == 0)
{
lean_dec_ref(v_modules_1399_);
lean_dec(v_val_1397_);
lean_dec_ref(v_env_1381_);
lean_dec(v_declName_1371_);
goto v___jp_1378_;
}
else
{
lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___y_1405_; 
v___x_1402_ = lean_array_fget(v_modules_1399_, v_val_1397_);
lean_dec(v_val_1397_);
lean_dec_ref(v_modules_1399_);
v___x_1403_ = lean_st_ref_get(v___y_1374_);
if (v_isMeta_1372_ == 0)
{
lean_dec(v___x_1403_);
v___y_1405_ = v_isMeta_1372_;
goto v___jp_1404_;
}
else
{
lean_object* v_env_1416_; uint8_t v___x_1417_; 
v_env_1416_ = lean_ctor_get(v___x_1403_, 0);
lean_inc_ref(v_env_1416_);
lean_dec(v___x_1403_);
lean_inc(v_declName_1371_);
v___x_1417_ = l_Lean_isMarkedMeta(v_env_1416_, v_declName_1371_);
if (v___x_1417_ == 0)
{
v___y_1405_ = v_isMeta_1372_;
goto v___jp_1404_;
}
else
{
uint8_t v___x_1418_; 
v___x_1418_ = 0;
v___y_1405_ = v___x_1418_;
goto v___jp_1404_;
}
}
v___jp_1404_:
{
lean_object* v_toImport_1406_; lean_object* v_module_1407_; lean_object* v___x_1408_; 
v_toImport_1406_ = lean_ctor_get(v___x_1402_, 0);
lean_inc_ref(v_toImport_1406_);
lean_dec(v___x_1402_);
v_module_1407_ = lean_ctor_get(v_toImport_1406_, 0);
lean_inc(v_module_1407_);
lean_dec_ref(v_toImport_1406_);
lean_inc(v_declName_1371_);
v___x_1408_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5(v_module_1407_, v___y_1405_, v_declName_1371_, v___y_1373_, v___y_1374_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_dec_ref_known(v___x_1408_, 1);
v___x_1409_ = l_Lean_indirectModUseExt;
v___x_1410_ = lean_box(1);
v___x_1411_ = lean_box(0);
lean_inc_ref(v_env_1381_);
v___x_1412_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1376_, v___x_1409_, v_env_1381_, v___x_1410_, v___x_1411_);
v___x_1413_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___redArg(v___x_1412_, v_declName_1371_);
lean_dec(v___x_1412_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v___x_1414_; 
v___x_1414_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___closed__1));
v___y_1383_ = v___x_1414_;
goto v___jp_1382_;
}
else
{
lean_object* v_val_1415_; 
v_val_1415_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_val_1415_);
lean_dec_ref_known(v___x_1413_, 1);
v___y_1383_ = v_val_1415_;
goto v___jp_1382_;
}
}
else
{
lean_dec_ref(v_env_1381_);
lean_dec(v_declName_1371_);
return v___x_1408_;
}
}
}
}
v___jp_1378_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_box(0);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
v___jp_1382_:
{
lean_object* v___x_1384_; size_t v_sz_1385_; size_t v___x_1386_; lean_object* v___x_1387_; 
v___x_1384_ = lean_box(0);
v_sz_1385_ = lean_array_size(v___y_1383_);
v___x_1386_ = ((size_t)0ULL);
v___x_1387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__6(v_env_1381_, v_declName_1371_, v___y_1383_, v_sz_1385_, v___x_1386_, v___x_1384_, v___y_1373_, v___y_1374_);
lean_dec_ref(v___y_1383_);
lean_dec_ref(v_env_1381_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1394_ == 0)
{
lean_object* v_unused_1395_; 
v_unused_1395_ = lean_ctor_get(v___x_1387_, 0);
lean_dec(v_unused_1395_);
v___x_1389_ = v___x_1387_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_dec(v___x_1387_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1384_);
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1384_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
else
{
return v___x_1387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4___boxed(lean_object* v_declName_1419_, lean_object* v_isMeta_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
uint8_t v_isMeta_boxed_1424_; lean_object* v_res_1425_; 
v_isMeta_boxed_1424_ = lean_unbox(v_isMeta_1420_);
v_res_1425_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4(v_declName_1419_, v_isMeta_boxed_1424_, v___y_1421_, v___y_1422_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___redArg(lean_object* v_as_x27_1426_, lean_object* v_b_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_){
_start:
{
if (lean_obj_tag(v_as_x27_1426_) == 0)
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1431_, 0, v_b_1427_);
return v___x_1431_;
}
else
{
lean_object* v_head_1432_; lean_object* v_tail_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; lean_object* v___x_1436_; 
v_head_1432_ = lean_ctor_get(v_as_x27_1426_, 0);
v_tail_1433_ = lean_ctor_get(v_as_x27_1426_, 1);
v___x_1434_ = lean_box(0);
v___x_1435_ = 1;
lean_inc(v_head_1432_);
v___x_1436_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4(v_head_1432_, v___x_1435_, v___y_1428_, v___y_1429_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_dec_ref_known(v___x_1436_, 1);
v_as_x27_1426_ = v_tail_1433_;
v_b_1427_ = v___x_1434_;
goto _start;
}
else
{
return v___x_1436_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___redArg___boxed(lean_object* v_as_x27_1438_, lean_object* v_b_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___redArg(v_as_x27_1438_, v_b_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v_as_x27_1438_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__4(lean_object* v_env_1444_, lean_object* v_opts_1445_, lean_object* v_currNamespace_1446_, lean_object* v_openDecls_1447_, lean_object* v_n_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = l_Lean_ResolveName_resolveGlobalName(v_env_1444_, v_opts_1445_, v_currNamespace_1446_, v_openDecls_1447_, v_n_1448_);
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
lean_ctor_set(v___x_1452_, 1, v___y_1450_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__4___boxed(lean_object* v_env_1453_, lean_object* v_opts_1454_, lean_object* v_currNamespace_1455_, lean_object* v_openDecls_1456_, lean_object* v_n_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__4(v_env_1453_, v_opts_1454_, v_currNamespace_1455_, v_openDecls_1456_, v_n_1457_, v___y_1458_, v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec_ref(v_opts_1454_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___redArg(lean_object* v_ref_1461_, lean_object* v_msg_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lean_Elab_Command_getRef___redArg(v___y_1463_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v_fileName_1468_; lean_object* v_fileMap_1469_; lean_object* v_currRecDepth_1470_; lean_object* v_cmdPos_1471_; lean_object* v_macroStack_1472_; lean_object* v_quotContext_x3f_1473_; lean_object* v_currMacroScope_1474_; lean_object* v_snap_x3f_1475_; lean_object* v_cancelTk_x3f_1476_; uint8_t v_suppressElabErrors_1477_; lean_object* v_ref_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v_fileName_1468_ = lean_ctor_get(v___y_1463_, 0);
v_fileMap_1469_ = lean_ctor_get(v___y_1463_, 1);
v_currRecDepth_1470_ = lean_ctor_get(v___y_1463_, 2);
v_cmdPos_1471_ = lean_ctor_get(v___y_1463_, 3);
v_macroStack_1472_ = lean_ctor_get(v___y_1463_, 4);
v_quotContext_x3f_1473_ = lean_ctor_get(v___y_1463_, 5);
v_currMacroScope_1474_ = lean_ctor_get(v___y_1463_, 6);
v_snap_x3f_1475_ = lean_ctor_get(v___y_1463_, 8);
v_cancelTk_x3f_1476_ = lean_ctor_get(v___y_1463_, 9);
v_suppressElabErrors_1477_ = lean_ctor_get_uint8(v___y_1463_, sizeof(void*)*10);
v_ref_1478_ = l_Lean_replaceRef(v_ref_1461_, v_a_1467_);
lean_dec(v_a_1467_);
lean_inc(v_cancelTk_x3f_1476_);
lean_inc(v_snap_x3f_1475_);
lean_inc(v_currMacroScope_1474_);
lean_inc(v_quotContext_x3f_1473_);
lean_inc(v_macroStack_1472_);
lean_inc(v_cmdPos_1471_);
lean_inc(v_currRecDepth_1470_);
lean_inc_ref(v_fileMap_1469_);
lean_inc_ref(v_fileName_1468_);
v___x_1479_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1479_, 0, v_fileName_1468_);
lean_ctor_set(v___x_1479_, 1, v_fileMap_1469_);
lean_ctor_set(v___x_1479_, 2, v_currRecDepth_1470_);
lean_ctor_set(v___x_1479_, 3, v_cmdPos_1471_);
lean_ctor_set(v___x_1479_, 4, v_macroStack_1472_);
lean_ctor_set(v___x_1479_, 5, v_quotContext_x3f_1473_);
lean_ctor_set(v___x_1479_, 6, v_currMacroScope_1474_);
lean_ctor_set(v___x_1479_, 7, v_ref_1478_);
lean_ctor_set(v___x_1479_, 8, v_snap_x3f_1475_);
lean_ctor_set(v___x_1479_, 9, v_cancelTk_x3f_1476_);
lean_ctor_set_uint8(v___x_1479_, sizeof(void*)*10, v_suppressElabErrors_1477_);
v___x_1480_ = l_Lean_throwError___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__2___redArg(v_msg_1462_, v___x_1479_, v___y_1464_);
lean_dec_ref_known(v___x_1479_, 10);
return v___x_1480_;
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
lean_dec_ref(v_msg_1462_);
v_a_1481_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1466_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1466_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___redArg___boxed(lean_object* v_ref_1489_, lean_object* v_msg_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___redArg(v_ref_1489_, v_msg_1490_, v___y_1491_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v_ref_1489_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__3(lean_object* v_env_1495_, lean_object* v_currNamespace_1496_, lean_object* v_openDecls_1497_, lean_object* v_n_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = l_Lean_ResolveName_resolveNamespace(v_env_1495_, v_currNamespace_1496_, v_openDecls_1497_, v_n_1498_);
v___x_1502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
lean_ctor_set(v___x_1502_, 1, v___y_1500_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__3___boxed(lean_object* v_env_1503_, lean_object* v_currNamespace_1504_, lean_object* v_openDecls_1505_, lean_object* v_n_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__3(v_env_1503_, v_currNamespace_1504_, v_openDecls_1505_, v_n_1506_, v___y_1507_, v___y_1508_);
lean_dec_ref(v___y_1507_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__2(lean_object* v_currNamespace_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1513_, 0, v_currNamespace_1510_);
lean_ctor_set(v___x_1513_, 1, v___y_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__2___boxed(lean_object* v_currNamespace_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__2(v_currNamespace_1514_, v___y_1515_, v___y_1516_);
lean_dec_ref(v___y_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg(lean_object* v_x_1518_, lean_object* v___y_1519_){
_start:
{
if (lean_obj_tag(v_x_1518_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1521_; 
v_a_1520_ = lean_ctor_get(v_x_1518_, 0);
lean_inc(v_a_1520_);
v___x_1521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1521_, 0, v_a_1520_);
lean_ctor_set(v___x_1521_, 1, v___y_1519_);
return v___x_1521_;
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1523_; 
v_a_1522_ = lean_ctor_get(v_x_1518_, 0);
lean_inc(v_a_1522_);
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v_a_1522_);
lean_ctor_set(v___x_1523_, 1, v___y_1519_);
return v___x_1523_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg___boxed(lean_object* v_x_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg(v_x_1524_, v___y_1525_);
lean_dec_ref(v_x_1524_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__1(lean_object* v_env_1527_, lean_object* v_stx_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1527_, v_stx_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
lean_inc(v_a_1532_);
if (lean_obj_tag(v_a_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1541_; 
v_a_1533_ = lean_ctor_get(v___x_1531_, 1);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1541_ == 0)
{
lean_object* v_unused_1542_; 
v_unused_1542_ = lean_ctor_get(v___x_1531_, 0);
lean_dec(v_unused_1542_);
v___x_1535_ = v___x_1531_;
v_isShared_1536_ = v_isSharedCheck_1541_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1531_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1541_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1537_ = lean_box(0);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1537_);
v___x_1539_ = v___x_1535_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v_a_1533_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
else
{
lean_object* v_val_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1571_; 
v_val_1543_ = lean_ctor_get(v_a_1532_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_a_1532_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1545_ = v_a_1532_;
v_isShared_1546_ = v_isSharedCheck_1571_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_val_1543_);
lean_dec(v_a_1532_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1571_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v_snd_1547_; 
v_snd_1547_ = lean_ctor_get(v_val_1543_, 1);
lean_inc(v_snd_1547_);
lean_dec(v_val_1543_);
if (lean_obj_tag(v_snd_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1557_; 
lean_del_object(v___x_1545_);
v_a_1548_ = lean_ctor_get(v___x_1531_, 1);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1531_, 2);
v_a_1549_ = lean_ctor_get(v_snd_1547_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_snd_1547_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1551_ = v_snd_1547_;
v_isShared_1552_ = v_isSharedCheck_1557_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v_snd_1547_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1557_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg(v___x_1554_, v_a_1548_);
lean_dec_ref(v___x_1554_);
return v___x_1555_;
}
}
}
else
{
lean_object* v_a_1558_; lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1570_; 
v_a_1558_ = lean_ctor_get(v___x_1531_, 1);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1531_, 2);
v_a_1559_ = lean_ctor_get(v_snd_1547_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_snd_1547_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1561_ = v_snd_1547_;
v_isShared_1562_ = v_isSharedCheck_1570_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v_snd_1547_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1570_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 0, v_a_1559_);
v___x_1564_ = v___x_1545_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
lean_object* v___x_1566_; 
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1564_);
v___x_1566_ = v___x_1561_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1564_);
v___x_1566_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1567_; 
v___x_1567_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg(v___x_1566_, v_a_1558_);
lean_dec_ref(v___x_1566_);
return v___x_1567_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1572_; lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
v_a_1572_ = lean_ctor_get(v___x_1531_, 0);
v_a_1573_ = lean_ctor_get(v___x_1531_, 1);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1531_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_inc(v_a_1572_);
lean_dec(v___x_1531_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1572_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__1___boxed(lean_object* v_env_1581_, lean_object* v_stx_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__1(v_env_1581_, v_stx_1582_, v___y_1583_, v___y_1584_);
lean_dec_ref(v___y_1583_);
return v_res_1585_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1586_ = lean_box(0);
v___x_1587_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
lean_ctor_set(v___x_1588_, 1, v___x_1586_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg(){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___closed__0);
v___x_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg___boxed(lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg();
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__6(lean_object* v_as_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
if (lean_obj_tag(v_as_1594_) == 0)
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = lean_box(0);
v___x_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
return v___x_1599_;
}
else
{
lean_object* v_head_1600_; lean_object* v_tail_1601_; lean_object* v_fst_1602_; lean_object* v_snd_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v_scopes_1608_; lean_object* v___x_1609_; lean_object* v_opts_1610_; uint8_t v_hasTrace_1611_; 
v_head_1600_ = lean_ctor_get(v_as_1594_, 0);
lean_inc(v_head_1600_);
v_tail_1601_ = lean_ctor_get(v_as_1594_, 1);
lean_inc(v_tail_1601_);
lean_dec_ref_known(v_as_1594_, 2);
v_fst_1602_ = lean_ctor_get(v_head_1600_, 0);
lean_inc(v_fst_1602_);
v_snd_1603_ = lean_ctor_get(v_head_1600_, 1);
lean_inc(v_snd_1603_);
lean_dec(v_head_1600_);
v___x_1604_ = l_Lean_inheritedTraceOptions;
v___x_1605_ = lean_st_ref_get(v___x_1604_);
v___x_1606_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1607_ = lean_st_ref_get(v___y_1596_);
v_scopes_1608_ = lean_ctor_get(v___x_1607_, 2);
lean_inc(v_scopes_1608_);
lean_dec(v___x_1607_);
v___x_1609_ = l_List_head_x21___redArg(v___x_1606_, v_scopes_1608_);
lean_dec(v_scopes_1608_);
v_opts_1610_ = lean_ctor_get(v___x_1609_, 1);
lean_inc_ref(v_opts_1610_);
lean_dec(v___x_1609_);
v_hasTrace_1611_ = lean_ctor_get_uint8(v_opts_1610_, sizeof(void*)*1);
if (v_hasTrace_1611_ == 0)
{
lean_dec_ref(v_opts_1610_);
lean_dec(v___x_1605_);
lean_dec(v_snd_1603_);
lean_dec(v_fst_1602_);
v_as_1594_ = v_tail_1601_;
goto _start;
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1614_; uint8_t v___x_1615_; 
v___x_1613_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5___closed__8));
lean_inc(v_fst_1602_);
v___x_1614_ = l_Lean_Name_append(v___x_1613_, v_fst_1602_);
v___x_1615_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1605_, v_opts_1610_, v___x_1614_);
lean_dec(v___x_1614_);
lean_dec_ref(v_opts_1610_);
lean_dec(v___x_1605_);
if (v___x_1615_ == 0)
{
lean_dec(v_snd_1603_);
lean_dec(v_fst_1602_);
v_as_1594_ = v_tail_1601_;
goto _start;
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1617_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1617_, 0, v_snd_1603_);
v___x_1618_ = l_Lean_MessageData_ofFormat(v___x_1617_);
v___x_1619_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__2(v_fst_1602_, v___x_1618_, v___y_1595_, v___y_1596_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_dec_ref_known(v___x_1619_, 1);
v_as_1594_ = v_tail_1601_;
goto _start;
}
else
{
lean_dec(v_tail_1601_);
return v___x_1619_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__6___boxed(lean_object* v_as_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__6(v_as_1621_, v___y_1622_, v___y_1623_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg(lean_object* v_x_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v___x_1631_; lean_object* v_env_1632_; lean_object* v___f_1633_; lean_object* v___f_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v_scopes_1637_; lean_object* v___x_1638_; lean_object* v_opts_1639_; lean_object* v___x_1640_; 
v___x_1631_ = lean_st_ref_get(v___y_1629_);
v_env_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc_ref_n(v_env_1632_, 3);
lean_dec(v___x_1631_);
v___f_1633_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1633_, 0, v_env_1632_);
v___f_1634_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1634_, 0, v_env_1632_);
v___x_1635_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1636_ = lean_st_ref_get(v___y_1629_);
v_scopes_1637_ = lean_ctor_get(v___x_1636_, 2);
lean_inc(v_scopes_1637_);
lean_dec(v___x_1636_);
v___x_1638_ = l_List_head_x21___redArg(v___x_1635_, v_scopes_1637_);
lean_dec(v_scopes_1637_);
v_opts_1639_ = lean_ctor_get(v___x_1638_, 1);
lean_inc_ref(v_opts_1639_);
lean_dec(v___x_1638_);
v___x_1640_ = l_Lean_Elab_Command_getScope___redArg(v___y_1629_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v_currNamespace_1642_; lean_object* v___f_1643_; lean_object* v___x_1644_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v_currNamespace_1642_ = lean_ctor_get(v_a_1641_, 2);
lean_inc_n(v_currNamespace_1642_, 2);
lean_dec(v_a_1641_);
v___f_1643_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1643_, 0, v_currNamespace_1642_);
v___x_1644_ = l_Lean_Elab_Command_getScope___redArg(v___y_1629_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; lean_object* v_openDecls_1646_; lean_object* v___f_1647_; lean_object* v___f_1648_; lean_object* v_methods_1649_; lean_object* v___x_1650_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
lean_inc(v_a_1645_);
lean_dec_ref_known(v___x_1644_, 1);
v_openDecls_1646_ = lean_ctor_get(v_a_1645_, 3);
lean_inc_n(v_openDecls_1646_, 2);
lean_dec(v_a_1645_);
lean_inc(v_currNamespace_1642_);
lean_inc_ref(v_env_1632_);
v___f_1647_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_1647_, 0, v_env_1632_);
lean_closure_set(v___f_1647_, 1, v_currNamespace_1642_);
lean_closure_set(v___f_1647_, 2, v_openDecls_1646_);
v___f_1648_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_1648_, 0, v_env_1632_);
lean_closure_set(v___f_1648_, 1, v_opts_1639_);
lean_closure_set(v___f_1648_, 2, v_currNamespace_1642_);
lean_closure_set(v___f_1648_, 3, v_openDecls_1646_);
v_methods_1649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1649_, 0, v___f_1634_);
lean_ctor_set(v_methods_1649_, 1, v___f_1643_);
lean_ctor_set(v_methods_1649_, 2, v___f_1633_);
lean_ctor_set(v_methods_1649_, 3, v___f_1647_);
lean_ctor_set(v_methods_1649_, 4, v___f_1648_);
v___x_1650_ = l_Lean_Elab_Command_getRef___redArg(v___y_1628_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1652_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1652_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_1628_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v_currRecDepth_1654_; lean_object* v_quotContext_x3f_1655_; lean_object* v_a_1657_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
v_currRecDepth_1654_ = lean_ctor_get(v___y_1628_, 2);
v_quotContext_x3f_1655_ = lean_ctor_get(v___y_1628_, 5);
if (lean_obj_tag(v_quotContext_x3f_1655_) == 0)
{
lean_object* v___x_1731_; lean_object* v_a_1732_; 
v___x_1731_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v___y_1629_);
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1732_);
lean_dec_ref(v___x_1731_);
v_a_1657_ = v_a_1732_;
goto v___jp_1656_;
}
else
{
lean_object* v_val_1733_; 
v_val_1733_ = lean_ctor_get(v_quotContext_x3f_1655_, 0);
lean_inc(v_val_1733_);
v_a_1657_ = v_val_1733_;
goto v___jp_1656_;
}
v___jp_1656_:
{
lean_object* v___x_1658_; lean_object* v_maxRecDepth_1659_; lean_object* v___x_1660_; lean_object* v_nextMacroScope_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1658_ = lean_st_ref_get(v___y_1629_);
v_maxRecDepth_1659_ = lean_ctor_get(v___x_1658_, 5);
lean_inc(v_maxRecDepth_1659_);
lean_dec(v___x_1658_);
v___x_1660_ = lean_st_ref_get(v___y_1629_);
v_nextMacroScope_1661_ = lean_ctor_get(v___x_1660_, 4);
lean_inc(v_nextMacroScope_1661_);
lean_dec(v___x_1660_);
lean_inc(v_currRecDepth_1654_);
v___x_1662_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1662_, 0, v_methods_1649_);
lean_ctor_set(v___x_1662_, 1, v_a_1657_);
lean_ctor_set(v___x_1662_, 2, v_a_1653_);
lean_ctor_set(v___x_1662_, 3, v_currRecDepth_1654_);
lean_ctor_set(v___x_1662_, 4, v_maxRecDepth_1659_);
lean_ctor_set(v___x_1662_, 5, v_a_1651_);
v___x_1663_ = lean_box(0);
v___x_1664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1664_, 0, v_nextMacroScope_1661_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
lean_ctor_set(v___x_1664_, 2, v___x_1663_);
v___x_1665_ = lean_apply_2(v_x_1627_, v___x_1662_, v___x_1664_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v_a_1667_; lean_object* v_macroScope_1668_; lean_object* v_traceMsgs_1669_; lean_object* v_expandedMacroDecls_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v_a_1666_ = lean_ctor_get(v___x_1665_, 1);
lean_inc(v_a_1666_);
v_a_1667_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1665_, 2);
v_macroScope_1668_ = lean_ctor_get(v_a_1666_, 0);
lean_inc(v_macroScope_1668_);
v_traceMsgs_1669_ = lean_ctor_get(v_a_1666_, 1);
lean_inc(v_traceMsgs_1669_);
v_expandedMacroDecls_1670_ = lean_ctor_get(v_a_1666_, 2);
lean_inc(v_expandedMacroDecls_1670_);
lean_dec(v_a_1666_);
v___x_1671_ = lean_box(0);
v___x_1672_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___redArg(v_expandedMacroDecls_1670_, v___x_1671_, v___y_1628_, v___y_1629_);
lean_dec(v_expandedMacroDecls_1670_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v___x_1673_; lean_object* v_env_1674_; lean_object* v_messages_1675_; lean_object* v_scopes_1676_; lean_object* v_usedQuotCtxts_1677_; lean_object* v_maxRecDepth_1678_; lean_object* v_ngen_1679_; lean_object* v_auxDeclNGen_1680_; lean_object* v_infoState_1681_; lean_object* v_traceState_1682_; lean_object* v_snapshotTasks_1683_; lean_object* v_prevLinterStates_1684_; lean_object* v_codeQualityEntryTasks_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1711_; 
lean_dec_ref_known(v___x_1672_, 1);
v___x_1673_ = lean_st_ref_take(v___y_1629_);
v_env_1674_ = lean_ctor_get(v___x_1673_, 0);
v_messages_1675_ = lean_ctor_get(v___x_1673_, 1);
v_scopes_1676_ = lean_ctor_get(v___x_1673_, 2);
v_usedQuotCtxts_1677_ = lean_ctor_get(v___x_1673_, 3);
v_maxRecDepth_1678_ = lean_ctor_get(v___x_1673_, 5);
v_ngen_1679_ = lean_ctor_get(v___x_1673_, 6);
v_auxDeclNGen_1680_ = lean_ctor_get(v___x_1673_, 7);
v_infoState_1681_ = lean_ctor_get(v___x_1673_, 8);
v_traceState_1682_ = lean_ctor_get(v___x_1673_, 9);
v_snapshotTasks_1683_ = lean_ctor_get(v___x_1673_, 10);
v_prevLinterStates_1684_ = lean_ctor_get(v___x_1673_, 11);
v_codeQualityEntryTasks_1685_ = lean_ctor_get(v___x_1673_, 12);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1711_ == 0)
{
lean_object* v_unused_1712_; 
v_unused_1712_ = lean_ctor_get(v___x_1673_, 4);
lean_dec(v_unused_1712_);
v___x_1687_ = v___x_1673_;
v_isShared_1688_ = v_isSharedCheck_1711_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1685_);
lean_inc(v_prevLinterStates_1684_);
lean_inc(v_snapshotTasks_1683_);
lean_inc(v_traceState_1682_);
lean_inc(v_infoState_1681_);
lean_inc(v_auxDeclNGen_1680_);
lean_inc(v_ngen_1679_);
lean_inc(v_maxRecDepth_1678_);
lean_inc(v_usedQuotCtxts_1677_);
lean_inc(v_scopes_1676_);
lean_inc(v_messages_1675_);
lean_inc(v_env_1674_);
lean_dec(v___x_1673_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1711_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 4, v_macroScope_1668_);
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_env_1674_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v_messages_1675_);
lean_ctor_set(v_reuseFailAlloc_1710_, 2, v_scopes_1676_);
lean_ctor_set(v_reuseFailAlloc_1710_, 3, v_usedQuotCtxts_1677_);
lean_ctor_set(v_reuseFailAlloc_1710_, 4, v_macroScope_1668_);
lean_ctor_set(v_reuseFailAlloc_1710_, 5, v_maxRecDepth_1678_);
lean_ctor_set(v_reuseFailAlloc_1710_, 6, v_ngen_1679_);
lean_ctor_set(v_reuseFailAlloc_1710_, 7, v_auxDeclNGen_1680_);
lean_ctor_set(v_reuseFailAlloc_1710_, 8, v_infoState_1681_);
lean_ctor_set(v_reuseFailAlloc_1710_, 9, v_traceState_1682_);
lean_ctor_set(v_reuseFailAlloc_1710_, 10, v_snapshotTasks_1683_);
lean_ctor_set(v_reuseFailAlloc_1710_, 11, v_prevLinterStates_1684_);
lean_ctor_set(v_reuseFailAlloc_1710_, 12, v_codeQualityEntryTasks_1685_);
v___x_1690_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_st_ref_put(v___y_1629_, v___x_1690_);
v___x_1692_ = l_List_reverse___redArg(v_traceMsgs_1669_);
v___x_1693_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__6(v___x_1692_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1700_ == 0)
{
lean_object* v_unused_1701_; 
v_unused_1701_ = lean_ctor_get(v___x_1693_, 0);
lean_dec(v_unused_1701_);
v___x_1695_ = v___x_1693_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_dec(v___x_1693_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 0, v_a_1667_);
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1667_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec(v_a_1667_);
v_a_1702_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1693_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1693_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec(v_traceMsgs_1669_);
lean_dec(v_macroScope_1668_);
lean_dec(v_a_1667_);
v_a_1713_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1672_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1672_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
else
{
lean_object* v_a_1721_; 
v_a_1721_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1665_, 2);
if (lean_obj_tag(v_a_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v_a_1723_; lean_object* v___x_1724_; uint8_t v___x_1725_; 
v_a_1722_ = lean_ctor_get(v_a_1721_, 0);
lean_inc(v_a_1722_);
v_a_1723_ = lean_ctor_get(v_a_1721_, 1);
lean_inc_ref(v_a_1723_);
lean_dec_ref_known(v_a_1721_, 2);
v___x_1724_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___closed__0));
v___x_1725_ = lean_string_dec_eq(v_a_1723_, v___x_1724_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1726_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1726_, 0, v_a_1723_);
v___x_1727_ = l_Lean_MessageData_ofFormat(v___x_1726_);
v___x_1728_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___redArg(v_a_1722_, v___x_1727_, v___y_1628_, v___y_1629_);
lean_dec(v_a_1722_);
return v___x_1728_;
}
else
{
lean_object* v___x_1729_; 
lean_dec_ref(v_a_1723_);
v___x_1729_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg(v_a_1722_);
return v___x_1729_;
}
}
else
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg();
return v___x_1730_;
}
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec(v_a_1651_);
lean_dec_ref_known(v_methods_1649_, 5);
lean_dec_ref(v_x_1627_);
v_a_1734_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1652_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1652_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec_ref_known(v_methods_1649_, 5);
lean_dec_ref(v_x_1627_);
v_a_1742_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1650_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1650_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v___f_1643_);
lean_dec(v_currNamespace_1642_);
lean_dec_ref(v_opts_1639_);
lean_dec_ref(v___f_1634_);
lean_dec_ref(v___f_1633_);
lean_dec_ref(v_env_1632_);
lean_dec_ref(v_x_1627_);
v_a_1750_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1644_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1644_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec_ref(v_opts_1639_);
lean_dec_ref(v___f_1634_);
lean_dec_ref(v___f_1633_);
lean_dec_ref(v_env_1632_);
lean_dec_ref(v_x_1627_);
v_a_1758_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1640_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1640_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg___boxed(lean_object* v_x_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg(v_x_1766_, v___y_1767_, v___y_1768_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
return v_res_1770_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__4));
v___x_1785_ = l_String_toRawSubstring_x27(v___x_1784_);
return v___x_1785_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1808_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__17));
v___x_1809_ = lean_unsigned_to_nat(14u);
v___x_1810_ = lean_unsigned_to_nat(22u);
v___x_1811_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__16));
v___x_1812_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__15));
v___x_1813_ = l_mkPanicMessageWithDecl(v___x_1812_, v___x_1811_, v___x_1810_, v___x_1809_, v___x_1808_);
return v___x_1813_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__29(void){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1829_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__27));
v___x_1830_ = l_String_toRawSubstring_x27(v___x_1829_);
return v___x_1830_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__37));
v___x_1843_ = l_Lean_mkAtom(v___x_1842_);
return v___x_1843_;
}
}
static lean_object* _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40(void){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__39));
v___x_1846_ = l_Lean_mkAtom(v___x_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat(lean_object* v_id_x3f_1847_, lean_object* v_id_1848_, lean_object* v_stx_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_){
_start:
{
lean_object* v_pat_1854_; lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1857_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__1));
lean_inc(v_stx_1849_);
v___x_1858_ = l_Lean_Syntax_isOfKind(v_stx_1849_, v___x_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1859_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__3));
lean_inc(v_stx_1849_);
v___x_1860_ = l_Lean_Syntax_isOfKind(v_stx_1849_, v___x_1859_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1866_; lean_object* v_a_1867_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v_a_1903_; uint8_t v___x_1934_; 
v___x_1861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6));
lean_inc(v_stx_1849_);
v___x_1934_ = l_Lean_Syntax_isOfKind(v_stx_1849_, v___x_1861_);
if (v___x_1934_ == 0)
{
lean_object* v___x_1935_; uint8_t v___x_1936_; 
v___x_1935_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__10));
lean_inc(v_stx_1849_);
v___x_1936_ = l_Lean_Syntax_isOfKind(v_stx_1849_, v___x_1935_);
if (v___x_1936_ == 0)
{
lean_object* v___x_1937_; uint8_t v___x_1938_; 
v___x_1937_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__12));
lean_inc(v_stx_1849_);
v___x_1938_ = l_Lean_Syntax_isOfKind(v_stx_1849_, v___x_1937_);
if (v___x_1938_ == 0)
{
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_1939_; 
v___x_1939_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1941_ = l_Lean_SourceInfo_fromRef(v_a_1940_, v___x_1938_);
lean_dec(v_a_1940_);
v___x_1942_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v_a_1945_; lean_object* v_quotContext_x3f_1976_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_a_1943_);
lean_dec_ref_known(v___x_1942_, 1);
v_quotContext_x3f_1976_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_1976_) == 0)
{
lean_object* v___x_1977_; 
v___x_1977_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
lean_inc(v_a_1978_);
lean_dec_ref_known(v___x_1977_, 1);
v_a_1945_ = v_a_1978_;
goto v___jp_1944_;
}
else
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
lean_dec(v_a_1943_);
lean_dec(v___x_1941_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_1979_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1977_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1977_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
else
{
lean_object* v_val_1987_; 
v_val_1987_ = lean_ctor_get(v_quotContext_x3f_1976_, 0);
lean_inc(v_val_1987_);
v_a_1945_ = v_val_1987_;
goto v___jp_1944_;
}
v___jp_1944_:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1946_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_1947_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_1948_ = l_Lean_addMacroScope(v_a_1945_, v___x_1947_, v_a_1943_);
v___x_1949_ = lean_box(0);
lean_inc_n(v___x_1941_, 4);
v___x_1950_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1941_);
lean_ctor_set(v___x_1950_, 1, v___x_1946_);
lean_ctor_set(v___x_1950_, 2, v___x_1948_);
lean_ctor_set(v___x_1950_, 3, v___x_1949_);
v___x_1951_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_1952_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1941_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_1954_ = l_Lean_Syntax_node1(v___x_1941_, v___x_1953_, v_stx_1849_);
v___x_1955_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_1956_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1941_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
v___x_1957_ = l_Lean_Syntax_node4(v___x_1941_, v___x_1861_, v___x_1950_, v___x_1952_, v___x_1954_, v___x_1956_);
v___x_1958_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1967_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1961_ = v___x_1958_;
v_isShared_1962_ = v_isSharedCheck_1967_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1967_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1957_);
lean_ctor_set(v___x_1963_, 1, v_a_1959_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1963_);
v___x_1965_ = v___x_1961_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
else
{
lean_object* v_a_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1975_; 
lean_dec(v___x_1957_);
v_a_1968_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1970_ = v___x_1958_;
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_a_1968_);
lean_dec(v___x_1958_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_a_1968_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
}
else
{
lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1995_; 
lean_dec(v___x_1941_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_1988_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1990_ = v___x_1942_;
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v___x_1942_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1993_; 
if (v_isShared_1991_ == 0)
{
v___x_1993_ = v___x_1990_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1988_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
else
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_1996_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___x_1939_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1939_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
else
{
lean_object* v_val_2004_; lean_object* v___x_2005_; 
lean_dec(v_id_1848_);
v_val_2004_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2004_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2005_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2004_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
lean_inc(v_a_2006_);
lean_dec_ref_known(v___x_2005_, 1);
v_pat_1854_ = v_a_2006_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
lean_dec(v_stx_1849_);
v_a_2007_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2009_ = v___x_2005_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_a_2007_);
lean_dec(v___x_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
}
else
{
lean_object* v___x_2015_; lean_object* v___x_2016_; uint8_t v___x_2017_; 
v___x_2015_ = lean_unsigned_to_nat(1u);
v___x_2016_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2015_);
lean_inc(v___x_2016_);
v___x_2017_ = l_Lean_Syntax_matchesNull(v___x_2016_, v___x_2015_);
if (v___x_2017_ == 0)
{
lean_dec(v___x_2016_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2018_; 
v___x_2018_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
lean_dec_ref_known(v___x_2018_, 1);
v___x_2020_ = l_Lean_SourceInfo_fromRef(v_a_2019_, v___x_2017_);
lean_dec(v_a_2019_);
v___x_2021_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v_a_2024_; lean_object* v_quotContext_x3f_2055_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref_known(v___x_2021_, 1);
v_quotContext_x3f_2055_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2055_) == 0)
{
lean_object* v___x_2056_; 
v___x_2056_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2056_) == 0)
{
lean_object* v_a_2057_; 
v_a_2057_ = lean_ctor_get(v___x_2056_, 0);
lean_inc(v_a_2057_);
lean_dec_ref_known(v___x_2056_, 1);
v_a_2024_ = v_a_2057_;
goto v___jp_2023_;
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec(v_a_2022_);
lean_dec(v___x_2020_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2058_ = lean_ctor_get(v___x_2056_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2056_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2056_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
else
{
lean_object* v_val_2066_; 
v_val_2066_ = lean_ctor_get(v_quotContext_x3f_2055_, 0);
lean_inc(v_val_2066_);
v_a_2024_ = v_val_2066_;
goto v___jp_2023_;
}
v___jp_2023_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2025_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2026_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2027_ = l_Lean_addMacroScope(v_a_2024_, v___x_2026_, v_a_2022_);
v___x_2028_ = lean_box(0);
lean_inc_n(v___x_2020_, 4);
v___x_2029_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2020_);
lean_ctor_set(v___x_2029_, 1, v___x_2025_);
lean_ctor_set(v___x_2029_, 2, v___x_2027_);
lean_ctor_set(v___x_2029_, 3, v___x_2028_);
v___x_2030_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2031_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2020_);
lean_ctor_set(v___x_2031_, 1, v___x_2030_);
v___x_2032_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2033_ = l_Lean_Syntax_node1(v___x_2020_, v___x_2032_, v_stx_1849_);
v___x_2034_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2035_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2020_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = l_Lean_Syntax_node4(v___x_2020_, v___x_1861_, v___x_2029_, v___x_2031_, v___x_2033_, v___x_2035_);
v___x_2037_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2046_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2036_);
lean_ctor_set(v___x_2042_, 1, v_a_2038_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2042_);
v___x_2044_ = v___x_2040_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_dec(v___x_2036_);
v_a_2047_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2037_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2037_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
}
else
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2074_; 
lean_dec(v___x_2020_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2067_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2069_ = v___x_2021_;
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2021_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2082_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2075_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2077_ = v___x_2018_;
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2018_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2080_; 
if (v_isShared_2078_ == 0)
{
v___x_2080_ = v___x_2077_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_a_2075_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
else
{
lean_object* v_val_2083_; lean_object* v___x_2084_; 
lean_dec(v_id_1848_);
v_val_2083_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2083_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2084_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2083_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2084_, 1);
v_pat_1854_ = v_a_2085_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec(v_stx_1849_);
v_a_2086_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2084_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2084_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
else
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; uint8_t v___x_2097_; 
v___x_2094_ = lean_unsigned_to_nat(3u);
v___x_2095_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2094_);
v___x_2096_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5));
lean_inc(v___x_2095_);
v___x_2097_ = l_Lean_Syntax_isOfKind(v___x_2095_, v___x_2096_);
if (v___x_2097_ == 0)
{
lean_dec(v___x_2095_);
lean_dec(v___x_2016_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2098_; 
v___x_2098_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2100_ = l_Lean_SourceInfo_fromRef(v_a_2099_, v___x_1936_);
lean_dec(v_a_2099_);
v___x_2101_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v_a_2104_; lean_object* v_quotContext_x3f_2135_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref_known(v___x_2101_, 1);
v_quotContext_x3f_2135_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2135_) == 0)
{
lean_object* v___x_2136_; 
v___x_2136_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2137_);
lean_dec_ref_known(v___x_2136_, 1);
v_a_2104_ = v_a_2137_;
goto v___jp_2103_;
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
lean_dec(v_a_2102_);
lean_dec(v___x_2100_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2138_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___x_2136_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2136_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
else
{
lean_object* v_val_2146_; 
v_val_2146_ = lean_ctor_get(v_quotContext_x3f_2135_, 0);
lean_inc(v_val_2146_);
v_a_2104_ = v_val_2146_;
goto v___jp_2103_;
}
v___jp_2103_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2105_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2106_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2107_ = l_Lean_addMacroScope(v_a_2104_, v___x_2106_, v_a_2102_);
v___x_2108_ = lean_box(0);
lean_inc_n(v___x_2100_, 4);
v___x_2109_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2100_);
lean_ctor_set(v___x_2109_, 1, v___x_2105_);
lean_ctor_set(v___x_2109_, 2, v___x_2107_);
lean_ctor_set(v___x_2109_, 3, v___x_2108_);
v___x_2110_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2111_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2100_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2113_ = l_Lean_Syntax_node1(v___x_2100_, v___x_2112_, v_stx_1849_);
v___x_2114_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2115_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2100_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = l_Lean_Syntax_node4(v___x_2100_, v___x_1861_, v___x_2109_, v___x_2111_, v___x_2113_, v___x_2115_);
v___x_2117_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2126_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2120_ = v___x_2117_;
v_isShared_2121_ = v_isSharedCheck_2126_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2117_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2126_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; lean_object* v___x_2124_; 
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2116_);
lean_ctor_set(v___x_2122_, 1, v_a_2118_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v___x_2122_);
v___x_2124_ = v___x_2120_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2122_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2134_; 
lean_dec(v___x_2116_);
v_a_2127_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2129_ = v___x_2117_;
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2117_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_a_2127_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec(v___x_2100_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2147_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2101_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2101_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2155_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2157_ = v___x_2098_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2098_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_a_2155_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
else
{
lean_object* v_val_2163_; lean_object* v___x_2164_; 
lean_dec(v_id_1848_);
v_val_2163_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2163_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2164_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2163_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
lean_inc(v_a_2165_);
lean_dec_ref_known(v___x_2164_, 1);
v_pat_1854_ = v_a_2165_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2173_; 
lean_dec(v_stx_1849_);
v_a_2166_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2168_ = v___x_2164_;
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_a_2166_);
lean_dec(v___x_2164_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2171_; 
if (v_isShared_2169_ == 0)
{
v___x_2171_ = v___x_2168_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2166_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
}
else
{
lean_object* v___x_2174_; lean_object* v_stx_2175_; lean_object* v___y_2177_; lean_object* v___y_2178_; lean_object* v___y_2179_; lean_object* v___y_2180_; lean_object* v___y_2194_; lean_object* v___y_2195_; lean_object* v___x_2201_; lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___x_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; 
v___x_2174_ = lean_unsigned_to_nat(0u);
v_stx_2175_ = l_Lean_Syntax_getArg(v___x_2016_, v___x_2174_);
lean_dec(v___x_2016_);
v___x_2201_ = lean_unsigned_to_nat(2u);
v___x_2254_ = lean_unsigned_to_nat(4u);
v___x_2255_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2254_);
v___x_2256_ = l_Lean_Syntax_isNone(v___x_2255_);
if (v___x_2256_ == 0)
{
uint8_t v___x_2257_; 
lean_inc(v___x_2255_);
v___x_2257_ = l_Lean_Syntax_matchesNull(v___x_2255_, v___x_2201_);
if (v___x_2257_ == 0)
{
lean_dec(v___x_2255_);
lean_dec(v_stx_2175_);
lean_dec(v___x_2095_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2258_, 1);
v___x_2260_ = l_Lean_SourceInfo_fromRef(v_a_2259_, v___x_2257_);
lean_dec(v_a_2259_);
v___x_2261_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v_a_2264_; lean_object* v_quotContext_x3f_2295_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2262_);
lean_dec_ref_known(v___x_2261_, 1);
v_quotContext_x3f_2295_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2295_) == 0)
{
lean_object* v___x_2296_; 
v___x_2296_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_object* v_a_2297_; 
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
lean_inc(v_a_2297_);
lean_dec_ref_known(v___x_2296_, 1);
v_a_2264_ = v_a_2297_;
goto v___jp_2263_;
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec(v_a_2262_);
lean_dec(v___x_2260_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2298_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2296_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2296_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
else
{
lean_object* v_val_2306_; 
v_val_2306_ = lean_ctor_get(v_quotContext_x3f_2295_, 0);
lean_inc(v_val_2306_);
v_a_2264_ = v_val_2306_;
goto v___jp_2263_;
}
v___jp_2263_:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2265_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2266_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2267_ = l_Lean_addMacroScope(v_a_2264_, v___x_2266_, v_a_2262_);
v___x_2268_ = lean_box(0);
lean_inc_n(v___x_2260_, 4);
v___x_2269_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2260_);
lean_ctor_set(v___x_2269_, 1, v___x_2265_);
lean_ctor_set(v___x_2269_, 2, v___x_2267_);
lean_ctor_set(v___x_2269_, 3, v___x_2268_);
v___x_2270_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2271_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2260_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___x_2272_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2273_ = l_Lean_Syntax_node1(v___x_2260_, v___x_2272_, v_stx_1849_);
v___x_2274_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2260_);
lean_ctor_set(v___x_2275_, 1, v___x_2274_);
v___x_2276_ = l_Lean_Syntax_node4(v___x_2260_, v___x_1861_, v___x_2269_, v___x_2271_, v___x_2273_, v___x_2275_);
v___x_2277_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2286_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2280_ = v___x_2277_;
v_isShared_2281_ = v_isSharedCheck_2286_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2286_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2276_);
lean_ctor_set(v___x_2282_, 1, v_a_2278_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 0, v___x_2282_);
v___x_2284_ = v___x_2280_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
else
{
lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2294_; 
lean_dec(v___x_2276_);
v_a_2287_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2289_ = v___x_2277_;
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_dec(v___x_2277_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2294_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2292_; 
if (v_isShared_2290_ == 0)
{
v___x_2292_ = v___x_2289_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_a_2287_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
}
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec(v___x_2260_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2307_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2261_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2261_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2315_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2258_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2258_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
else
{
lean_object* v_val_2323_; lean_object* v___x_2324_; 
lean_dec(v_id_1848_);
v_val_2323_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2323_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2324_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2323_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; 
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v_pat_1854_ = v_a_2325_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
lean_dec(v_stx_1849_);
v_a_2326_ = lean_ctor_get(v___x_2324_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2324_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2328_ = v___x_2324_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2324_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2326_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
}
else
{
lean_object* v___x_2334_; uint8_t v___x_2335_; 
v___x_2334_ = l_Lean_Syntax_getArg(v___x_2255_, v___x_2015_);
lean_dec(v___x_2255_);
v___x_2335_ = l_Lean_Syntax_matchesNull(v___x_2334_, v___x_2015_);
if (v___x_2335_ == 0)
{
lean_dec(v_stx_2175_);
lean_dec(v___x_2095_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2336_; 
v___x_2336_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_a_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v___x_2338_ = l_Lean_SourceInfo_fromRef(v_a_2337_, v___x_2335_);
lean_dec(v_a_2337_);
v___x_2339_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v_a_2342_; lean_object* v_quotContext_x3f_2373_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v_quotContext_x3f_2373_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2373_) == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v___x_2374_, 1);
v_a_2342_ = v_a_2375_;
goto v___jp_2341_;
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec(v_a_2340_);
lean_dec(v___x_2338_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2376_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2374_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2374_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_object* v_val_2384_; 
v_val_2384_ = lean_ctor_get(v_quotContext_x3f_2373_, 0);
lean_inc(v_val_2384_);
v_a_2342_ = v_val_2384_;
goto v___jp_2341_;
}
v___jp_2341_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2343_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2344_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2345_ = l_Lean_addMacroScope(v_a_2342_, v___x_2344_, v_a_2340_);
v___x_2346_ = lean_box(0);
lean_inc_n(v___x_2338_, 4);
v___x_2347_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2338_);
lean_ctor_set(v___x_2347_, 1, v___x_2343_);
lean_ctor_set(v___x_2347_, 2, v___x_2345_);
lean_ctor_set(v___x_2347_, 3, v___x_2346_);
v___x_2348_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2338_);
lean_ctor_set(v___x_2349_, 1, v___x_2348_);
v___x_2350_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2351_ = l_Lean_Syntax_node1(v___x_2338_, v___x_2350_, v_stx_1849_);
v___x_2352_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2353_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2338_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = l_Lean_Syntax_node4(v___x_2338_, v___x_1861_, v___x_2347_, v___x_2349_, v___x_2351_, v___x_2353_);
v___x_2355_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2364_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2358_ = v___x_2355_;
v_isShared_2359_ = v_isSharedCheck_2364_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2355_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2364_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v___x_2362_; 
v___x_2360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2354_);
lean_ctor_set(v___x_2360_, 1, v_a_2356_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v___x_2360_);
v___x_2362_ = v___x_2358_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec(v___x_2354_);
v_a_2365_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2355_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2355_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec(v___x_2338_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2385_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2339_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2339_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2393_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2336_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2336_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
else
{
lean_object* v_val_2401_; lean_object* v___x_2402_; 
lean_dec(v_id_1848_);
v_val_2401_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2401_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2402_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2401_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
lean_dec_ref_known(v___x_2402_, 1);
v_pat_1854_ = v_a_2403_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
lean_dec(v_stx_1849_);
v_a_2404_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2402_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2402_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
else
{
v___y_2203_ = v_a_1850_;
v___y_2204_ = v_a_1851_;
goto v___jp_2202_;
}
}
}
else
{
lean_dec(v___x_2255_);
v___y_2203_ = v_a_1850_;
v___y_2204_ = v_a_1851_;
goto v___jp_2202_;
}
v___jp_2176_:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2181_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__13));
v___x_2182_ = lean_string_append(v___y_2180_, v___x_2181_);
lean_inc(v___y_2177_);
v___x_2183_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(v___y_2177_, v_stx_2175_, v_id_1848_, v___x_2182_, v___y_2178_, v___y_2179_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
lean_dec_ref_known(v___x_2183_, 1);
v_pat_1854_ = v_a_2184_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
lean_dec(v_stx_1849_);
v_a_2185_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2183_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2183_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
v___jp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__14));
v___x_2197_ = l_Lean_Syntax_isStrLit_x3f(v___x_2095_);
lean_dec(v___x_2095_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18);
v___x_2199_ = l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1(v___x_2198_);
v___y_2177_ = v___x_2196_;
v___y_2178_ = v___y_2194_;
v___y_2179_ = v___y_2195_;
v___y_2180_ = v___x_2199_;
goto v___jp_2176_;
}
else
{
lean_object* v_val_2200_; 
v_val_2200_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_val_2200_);
lean_dec_ref_known(v___x_2197_, 1);
v___y_2177_ = v___x_2196_;
v___y_2178_ = v___y_2194_;
v___y_2179_ = v___y_2195_;
v___y_2180_ = v_val_2200_;
goto v___jp_2176_;
}
}
v___jp_2202_:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2205_ = lean_unsigned_to_nat(5u);
v___x_2206_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2205_);
v___x_2207_ = l_Lean_Syntax_isNone(v___x_2206_);
if (v___x_2207_ == 0)
{
uint8_t v___x_2208_; 
v___x_2208_ = l_Lean_Syntax_matchesNull(v___x_2206_, v___x_2201_);
if (v___x_2208_ == 0)
{
lean_dec(v_stx_2175_);
lean_dec(v___x_2095_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2209_; 
v___x_2209_ = l_Lean_Elab_Command_getRef___redArg(v___y_2203_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
v___x_2211_ = l_Lean_SourceInfo_fromRef(v_a_2210_, v___x_2208_);
lean_dec(v_a_2210_);
v___x_2212_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2203_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_quotContext_x3f_2213_; 
v_quotContext_x3f_2213_ = lean_ctor_get(v___y_2203_, 5);
if (lean_obj_tag(v_quotContext_x3f_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2215_; 
v_a_2214_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2214_);
lean_dec_ref_known(v___x_2212_, 1);
v___x_2215_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v___y_2204_);
if (lean_obj_tag(v___x_2215_) == 0)
{
lean_object* v_a_2216_; 
v_a_2216_ = lean_ctor_get(v___x_2215_, 0);
lean_inc(v_a_2216_);
lean_dec_ref_known(v___x_2215_, 1);
v___y_1863_ = v___x_2211_;
v___y_1864_ = v___y_2203_;
v___y_1865_ = v_a_2214_;
v___y_1866_ = v___y_2204_;
v_a_1867_ = v_a_2216_;
goto v___jp_1862_;
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
lean_dec(v_a_2214_);
lean_dec(v___x_2211_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2217_ = lean_ctor_get(v___x_2215_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2215_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v___x_2215_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2215_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_a_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
else
{
lean_object* v_a_2225_; lean_object* v_val_2226_; 
v_a_2225_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2212_, 1);
v_val_2226_ = lean_ctor_get(v_quotContext_x3f_2213_, 0);
lean_inc(v_val_2226_);
v___y_1863_ = v___x_2211_;
v___y_1864_ = v___y_2203_;
v___y_1865_ = v_a_2225_;
v___y_1866_ = v___y_2204_;
v_a_1867_ = v_val_2226_;
goto v___jp_1862_;
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
lean_dec(v___x_2211_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2227_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2212_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2212_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2235_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2209_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2209_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v_val_2243_; lean_object* v___x_2244_; 
lean_dec(v_id_1848_);
v_val_2243_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2243_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2244_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2243_, v___y_2203_, v___y_2204_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v_pat_1854_ = v_a_2245_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_dec(v_stx_1849_);
v_a_2246_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2244_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2244_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
else
{
lean_dec(v_id_x3f_1847_);
v___y_2194_ = v___y_2203_;
v___y_2195_ = v___y_2204_;
goto v___jp_2193_;
}
}
else
{
lean_dec(v___x_2206_);
lean_dec(v_id_x3f_1847_);
v___y_2194_ = v___y_2203_;
v___y_2195_ = v___y_2204_;
goto v___jp_2193_;
}
}
}
}
}
}
else
{
lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; 
v___x_2412_ = lean_unsigned_to_nat(1u);
v___x_2413_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2412_);
lean_inc(v___x_2413_);
v___x_2414_ = l_Lean_Syntax_matchesNull(v___x_2413_, v___x_2412_);
if (v___x_2414_ == 0)
{
lean_dec(v___x_2413_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2415_; 
v___x_2415_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v_a_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v___x_2415_, 1);
v___x_2417_ = l_Lean_SourceInfo_fromRef(v_a_2416_, v___x_2414_);
lean_dec(v_a_2416_);
v___x_2418_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v_a_2419_; lean_object* v_a_2421_; lean_object* v_quotContext_x3f_2452_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_a_2419_);
lean_dec_ref_known(v___x_2418_, 1);
v_quotContext_x3f_2452_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2452_) == 0)
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v_a_2454_; 
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
lean_inc(v_a_2454_);
lean_dec_ref_known(v___x_2453_, 1);
v_a_2421_ = v_a_2454_;
goto v___jp_2420_;
}
else
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2462_; 
lean_dec(v_a_2419_);
lean_dec(v___x_2417_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2455_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2457_ = v___x_2453_;
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2453_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2460_; 
if (v_isShared_2458_ == 0)
{
v___x_2460_ = v___x_2457_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v_a_2455_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
}
else
{
lean_object* v_val_2463_; 
v_val_2463_ = lean_ctor_get(v_quotContext_x3f_2452_, 0);
lean_inc(v_val_2463_);
v_a_2421_ = v_val_2463_;
goto v___jp_2420_;
}
v___jp_2420_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2422_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2423_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2424_ = l_Lean_addMacroScope(v_a_2421_, v___x_2423_, v_a_2419_);
v___x_2425_ = lean_box(0);
lean_inc_n(v___x_2417_, 4);
v___x_2426_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2417_);
lean_ctor_set(v___x_2426_, 1, v___x_2422_);
lean_ctor_set(v___x_2426_, 2, v___x_2424_);
lean_ctor_set(v___x_2426_, 3, v___x_2425_);
v___x_2427_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2428_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2417_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2430_ = l_Lean_Syntax_node1(v___x_2417_, v___x_2429_, v_stx_1849_);
v___x_2431_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2432_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2432_, 0, v___x_2417_);
lean_ctor_set(v___x_2432_, 1, v___x_2431_);
v___x_2433_ = l_Lean_Syntax_node4(v___x_2417_, v___x_1861_, v___x_2426_, v___x_2428_, v___x_2430_, v___x_2432_);
v___x_2434_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2443_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2437_ = v___x_2434_;
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2434_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2441_; 
v___x_2439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2433_);
lean_ctor_set(v___x_2439_, 1, v_a_2435_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v___x_2439_);
v___x_2441_ = v___x_2437_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2451_; 
lean_dec(v___x_2433_);
v_a_2444_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2446_ = v___x_2434_;
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2434_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2451_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_a_2444_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
return v___x_2449_;
}
}
}
}
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2471_; 
lean_dec(v___x_2417_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2464_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2466_ = v___x_2418_;
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2418_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2472_ = lean_ctor_get(v___x_2415_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2415_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2415_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
else
{
lean_object* v_val_2480_; lean_object* v___x_2481_; 
lean_dec(v_id_1848_);
v_val_2480_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2480_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2481_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2480_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_object* v_a_2482_; 
v_a_2482_ = lean_ctor_get(v___x_2481_, 0);
lean_inc(v_a_2482_);
lean_dec_ref_known(v___x_2481_, 1);
v_pat_1854_ = v_a_2482_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec(v_stx_1849_);
v_a_2483_ = lean_ctor_get(v___x_2481_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2481_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2481_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
else
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; uint8_t v___x_2494_; 
v___x_2491_ = lean_unsigned_to_nat(3u);
v___x_2492_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2491_);
v___x_2493_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5));
lean_inc(v___x_2492_);
v___x_2494_ = l_Lean_Syntax_isOfKind(v___x_2492_, v___x_2493_);
if (v___x_2494_ == 0)
{
lean_dec(v___x_2492_);
lean_dec(v___x_2413_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2495_; 
v___x_2495_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
v___x_2497_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_1934_);
lean_dec(v_a_2496_);
v___x_2498_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; lean_object* v_a_2501_; lean_object* v_quotContext_x3f_2532_; 
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2498_, 1);
v_quotContext_x3f_2532_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2532_) == 0)
{
lean_object* v___x_2533_; 
v___x_2533_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
v_a_2501_ = v_a_2534_;
goto v___jp_2500_;
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec(v_a_2499_);
lean_dec(v___x_2497_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2535_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2533_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2533_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
else
{
lean_object* v_val_2543_; 
v_val_2543_ = lean_ctor_get(v_quotContext_x3f_2532_, 0);
lean_inc(v_val_2543_);
v_a_2501_ = v_val_2543_;
goto v___jp_2500_;
}
v___jp_2500_:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2502_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2503_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2504_ = l_Lean_addMacroScope(v_a_2501_, v___x_2503_, v_a_2499_);
v___x_2505_ = lean_box(0);
lean_inc_n(v___x_2497_, 4);
v___x_2506_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2497_);
lean_ctor_set(v___x_2506_, 1, v___x_2502_);
lean_ctor_set(v___x_2506_, 2, v___x_2504_);
lean_ctor_set(v___x_2506_, 3, v___x_2505_);
v___x_2507_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2508_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2497_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
v___x_2509_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2510_ = l_Lean_Syntax_node1(v___x_2497_, v___x_2509_, v_stx_1849_);
v___x_2511_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2497_);
lean_ctor_set(v___x_2512_, 1, v___x_2511_);
v___x_2513_ = l_Lean_Syntax_node4(v___x_2497_, v___x_1861_, v___x_2506_, v___x_2508_, v___x_2510_, v___x_2512_);
v___x_2514_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2523_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2517_ = v___x_2514_;
v_isShared_2518_ = v_isSharedCheck_2523_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2514_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2523_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2519_; lean_object* v___x_2521_; 
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2513_);
lean_ctor_set(v___x_2519_, 1, v_a_2515_);
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 0, v___x_2519_);
v___x_2521_ = v___x_2517_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2519_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
lean_dec(v___x_2513_);
v_a_2524_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2514_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2514_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
lean_dec(v___x_2497_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2544_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2498_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2498_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2559_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2552_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2554_ = v___x_2495_;
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2495_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2552_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
else
{
lean_object* v_val_2560_; lean_object* v___x_2561_; 
lean_dec(v_id_1848_);
v_val_2560_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2560_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2561_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2560_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc(v_a_2562_);
lean_dec_ref_known(v___x_2561_, 1);
v_pat_1854_ = v_a_2562_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
lean_dec(v_stx_1849_);
v_a_2563_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___x_2561_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2561_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2563_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
}
}
else
{
lean_object* v___x_2571_; lean_object* v_stx_2572_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___x_2598_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___x_2651_; lean_object* v___x_2652_; uint8_t v___x_2653_; 
v___x_2571_ = lean_unsigned_to_nat(0u);
v_stx_2572_ = l_Lean_Syntax_getArg(v___x_2413_, v___x_2571_);
lean_dec(v___x_2413_);
v___x_2598_ = lean_unsigned_to_nat(2u);
v___x_2651_ = lean_unsigned_to_nat(4u);
v___x_2652_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2651_);
v___x_2653_ = l_Lean_Syntax_isNone(v___x_2652_);
if (v___x_2653_ == 0)
{
uint8_t v___x_2654_; 
lean_inc(v___x_2652_);
v___x_2654_ = l_Lean_Syntax_matchesNull(v___x_2652_, v___x_2598_);
if (v___x_2654_ == 0)
{
lean_dec(v___x_2652_);
lean_dec(v_stx_2572_);
lean_dec(v___x_2492_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2655_; 
v___x_2655_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v___x_2655_, 1);
v___x_2657_ = l_Lean_SourceInfo_fromRef(v_a_2656_, v___x_2654_);
lean_dec(v_a_2656_);
v___x_2658_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v_a_2661_; lean_object* v_quotContext_x3f_2692_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v_quotContext_x3f_2692_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2692_) == 0)
{
lean_object* v___x_2693_; 
v___x_2693_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v_a_2694_; 
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_a_2694_);
lean_dec_ref_known(v___x_2693_, 1);
v_a_2661_ = v_a_2694_;
goto v___jp_2660_;
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v_a_2659_);
lean_dec(v___x_2657_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2695_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2693_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
else
{
lean_object* v_val_2703_; 
v_val_2703_ = lean_ctor_get(v_quotContext_x3f_2692_, 0);
lean_inc(v_val_2703_);
v_a_2661_ = v_val_2703_;
goto v___jp_2660_;
}
v___jp_2660_:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2662_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2663_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2664_ = l_Lean_addMacroScope(v_a_2661_, v___x_2663_, v_a_2659_);
v___x_2665_ = lean_box(0);
lean_inc_n(v___x_2657_, 4);
v___x_2666_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2657_);
lean_ctor_set(v___x_2666_, 1, v___x_2662_);
lean_ctor_set(v___x_2666_, 2, v___x_2664_);
lean_ctor_set(v___x_2666_, 3, v___x_2665_);
v___x_2667_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2668_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2657_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2670_ = l_Lean_Syntax_node1(v___x_2657_, v___x_2669_, v_stx_1849_);
v___x_2671_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2672_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2657_);
lean_ctor_set(v___x_2672_, 1, v___x_2671_);
v___x_2673_ = l_Lean_Syntax_node4(v___x_2657_, v___x_1861_, v___x_2666_, v___x_2668_, v___x_2670_, v___x_2672_);
v___x_2674_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2683_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2677_ = v___x_2674_;
v_isShared_2678_ = v_isSharedCheck_2683_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2674_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2683_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2681_; 
v___x_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2673_);
lean_ctor_set(v___x_2679_, 1, v_a_2675_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2679_);
v___x_2681_ = v___x_2677_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2679_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
else
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2691_; 
lean_dec(v___x_2673_);
v_a_2684_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2686_ = v___x_2674_;
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2674_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
return v___x_2689_;
}
}
}
}
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
lean_dec(v___x_2657_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2704_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2658_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2658_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2712_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2714_ = v___x_2655_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2655_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2712_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
else
{
lean_object* v_val_2720_; lean_object* v___x_2721_; 
lean_dec(v_id_1848_);
v_val_2720_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2720_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2721_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2720_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2721_) == 0)
{
lean_object* v_a_2722_; 
v_a_2722_ = lean_ctor_get(v___x_2721_, 0);
lean_inc(v_a_2722_);
lean_dec_ref_known(v___x_2721_, 1);
v_pat_1854_ = v_a_2722_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
lean_dec(v_stx_1849_);
v_a_2723_ = lean_ctor_get(v___x_2721_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2721_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2721_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2721_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
}
else
{
lean_object* v___x_2731_; uint8_t v___x_2732_; 
v___x_2731_ = l_Lean_Syntax_getArg(v___x_2652_, v___x_2412_);
lean_dec(v___x_2652_);
v___x_2732_ = l_Lean_Syntax_matchesNull(v___x_2731_, v___x_2412_);
if (v___x_2732_ == 0)
{
lean_dec(v_stx_2572_);
lean_dec(v___x_2492_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2733_; 
v___x_2733_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
lean_dec_ref_known(v___x_2733_, 1);
v___x_2735_ = l_Lean_SourceInfo_fromRef(v_a_2734_, v___x_2732_);
lean_dec(v_a_2734_);
v___x_2736_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v_a_2739_; lean_object* v_quotContext_x3f_2770_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref_known(v___x_2736_, 1);
v_quotContext_x3f_2770_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2770_) == 0)
{
lean_object* v___x_2771_; 
v___x_2771_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v_a_2772_; 
v_a_2772_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_a_2772_);
lean_dec_ref_known(v___x_2771_, 1);
v_a_2739_ = v_a_2772_;
goto v___jp_2738_;
}
else
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2780_; 
lean_dec(v_a_2737_);
lean_dec(v___x_2735_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2773_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2775_ = v___x_2771_;
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2771_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_a_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
else
{
lean_object* v_val_2781_; 
v_val_2781_ = lean_ctor_get(v_quotContext_x3f_2770_, 0);
lean_inc(v_val_2781_);
v_a_2739_ = v_val_2781_;
goto v___jp_2738_;
}
v___jp_2738_:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2740_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2741_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2742_ = l_Lean_addMacroScope(v_a_2739_, v___x_2741_, v_a_2737_);
v___x_2743_ = lean_box(0);
lean_inc_n(v___x_2735_, 4);
v___x_2744_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2735_);
lean_ctor_set(v___x_2744_, 1, v___x_2740_);
lean_ctor_set(v___x_2744_, 2, v___x_2742_);
lean_ctor_set(v___x_2744_, 3, v___x_2743_);
v___x_2745_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2746_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2735_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2748_ = l_Lean_Syntax_node1(v___x_2735_, v___x_2747_, v_stx_1849_);
v___x_2749_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2750_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2735_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = l_Lean_Syntax_node4(v___x_2735_, v___x_1861_, v___x_2744_, v___x_2746_, v___x_2748_, v___x_2750_);
v___x_2752_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2761_; 
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2755_ = v___x_2752_;
v_isShared_2756_ = v_isSharedCheck_2761_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2752_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2761_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v___x_2759_; 
v___x_2757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2751_);
lean_ctor_set(v___x_2757_, 1, v_a_2753_);
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 0, v___x_2757_);
v___x_2759_ = v___x_2755_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2757_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
else
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
lean_dec(v___x_2751_);
v_a_2762_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2752_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2752_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v___x_2735_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2782_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2736_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2736_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2790_ = lean_ctor_get(v___x_2733_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2733_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2733_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
else
{
lean_object* v_val_2798_; lean_object* v___x_2799_; 
lean_dec(v_id_1848_);
v_val_2798_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2798_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2799_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2798_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
v_pat_1854_ = v_a_2800_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2808_; 
lean_dec(v_stx_1849_);
v_a_2801_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2803_ = v___x_2799_;
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2799_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
}
else
{
v___y_2600_ = v_a_1850_;
v___y_2601_ = v_a_1851_;
goto v___jp_2599_;
}
}
}
else
{
lean_dec(v___x_2652_);
v___y_2600_ = v_a_1850_;
v___y_2601_ = v_a_1851_;
goto v___jp_2599_;
}
v___jp_2573_:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2578_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__13));
v___x_2579_ = lean_string_append(v___y_2577_, v___x_2578_);
lean_inc(v___y_2574_);
v___x_2580_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(v___y_2574_, v_stx_2572_, v_id_1848_, v___x_2579_, v___y_2575_, v___y_2576_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
lean_inc(v_a_2581_);
lean_dec_ref_known(v___x_2580_, 1);
v_pat_1854_ = v_a_2581_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2589_; 
lean_dec(v_stx_1849_);
v_a_2582_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2584_ = v___x_2580_;
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2580_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2587_; 
if (v_isShared_2585_ == 0)
{
v___x_2587_ = v___x_2584_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_a_2582_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
v___jp_2590_:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__14));
v___x_2594_ = l_Lean_Syntax_isStrLit_x3f(v___x_2492_);
lean_dec(v___x_2492_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2595_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__18);
v___x_2596_ = l_panic___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__1(v___x_2595_);
v___y_2574_ = v___x_2593_;
v___y_2575_ = v___y_2591_;
v___y_2576_ = v___y_2592_;
v___y_2577_ = v___x_2596_;
goto v___jp_2573_;
}
else
{
lean_object* v_val_2597_; 
v_val_2597_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_val_2597_);
lean_dec_ref_known(v___x_2594_, 1);
v___y_2574_ = v___x_2593_;
v___y_2575_ = v___y_2591_;
v___y_2576_ = v___y_2592_;
v___y_2577_ = v_val_2597_;
goto v___jp_2573_;
}
}
v___jp_2599_:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; uint8_t v___x_2604_; 
v___x_2602_ = lean_unsigned_to_nat(5u);
v___x_2603_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2602_);
v___x_2604_ = l_Lean_Syntax_isNone(v___x_2603_);
if (v___x_2604_ == 0)
{
uint8_t v___x_2605_; 
v___x_2605_ = l_Lean_Syntax_matchesNull(v___x_2603_, v___x_2598_);
if (v___x_2605_ == 0)
{
lean_dec(v_stx_2572_);
lean_dec(v___x_2492_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2606_; 
v___x_2606_ = l_Lean_Elab_Command_getRef___redArg(v___y_2600_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
lean_inc(v_a_2607_);
lean_dec_ref_known(v___x_2606_, 1);
v___x_2608_ = l_Lean_SourceInfo_fromRef(v_a_2607_, v___x_2605_);
lean_dec(v_a_2607_);
v___x_2609_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2600_);
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_quotContext_x3f_2610_; 
v_quotContext_x3f_2610_ = lean_ctor_get(v___y_2600_, 5);
if (lean_obj_tag(v_quotContext_x3f_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2612_; 
v_a_2611_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2609_, 1);
v___x_2612_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v___y_2601_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2612_, 1);
v___y_1899_ = v___x_2608_;
v___y_1900_ = v___y_2601_;
v___y_1901_ = v___y_2600_;
v___y_1902_ = v_a_2611_;
v_a_1903_ = v_a_2613_;
goto v___jp_1898_;
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
lean_dec(v_a_2611_);
lean_dec(v___x_2608_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2614_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2612_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2612_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
else
{
lean_object* v_a_2622_; lean_object* v_val_2623_; 
v_a_2622_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2622_);
lean_dec_ref_known(v___x_2609_, 1);
v_val_2623_ = lean_ctor_get(v_quotContext_x3f_2610_, 0);
lean_inc(v_val_2623_);
v___y_1899_ = v___x_2608_;
v___y_1900_ = v___y_2601_;
v___y_1901_ = v___y_2600_;
v___y_1902_ = v_a_2622_;
v_a_1903_ = v_val_2623_;
goto v___jp_1898_;
}
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
lean_dec(v___x_2608_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2624_ = lean_ctor_get(v___x_2609_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2609_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2609_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2609_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2632_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2606_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2606_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
else
{
lean_object* v_val_2640_; lean_object* v___x_2641_; 
lean_dec(v_id_1848_);
v_val_2640_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2640_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2641_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2640_, v___y_2600_, v___y_2601_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2642_);
lean_dec_ref_known(v___x_2641_, 1);
v_pat_1854_ = v_a_2642_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec(v_stx_1849_);
v_a_2643_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2641_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2641_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
}
else
{
lean_dec(v_id_x3f_1847_);
v___y_2591_ = v___y_2600_;
v___y_2592_ = v___y_2601_;
goto v___jp_2590_;
}
}
else
{
lean_dec(v___x_2603_);
lean_dec(v_id_x3f_1847_);
v___y_2591_ = v___y_2600_;
v___y_2592_ = v___y_2601_;
goto v___jp_2590_;
}
}
}
}
}
}
else
{
lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; uint8_t v___x_2812_; 
v___x_2809_ = lean_unsigned_to_nat(0u);
v___x_2810_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2809_);
v___x_2811_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__20));
v___x_2812_ = l_Lean_Syntax_matchesIdent(v___x_2810_, v___x_2811_);
if (v___x_2812_ == 0)
{
lean_object* v___x_2813_; uint8_t v___x_2814_; 
v___x_2813_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__22));
v___x_2814_ = l_Lean_Syntax_matchesIdent(v___x_2810_, v___x_2813_);
if (v___x_2814_ == 0)
{
lean_object* v___x_2815_; uint8_t v___x_2816_; 
v___x_2815_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__24));
v___x_2816_ = l_Lean_Syntax_matchesIdent(v___x_2810_, v___x_2815_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2817_; uint8_t v___x_2818_; 
v___x_2817_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__26));
v___x_2818_ = l_Lean_Syntax_matchesIdent(v___x_2810_, v___x_2817_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; uint8_t v___x_2820_; 
v___x_2819_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__28));
v___x_2820_ = l_Lean_Syntax_matchesIdent(v___x_2810_, v___x_2819_);
lean_dec(v___x_2810_);
if (v___x_2820_ == 0)
{
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2821_, 1);
v___x_2823_ = l_Lean_SourceInfo_fromRef(v_a_2822_, v___x_2820_);
lean_dec(v_a_2822_);
v___x_2824_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v_a_2827_; lean_object* v_quotContext_x3f_2858_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v_quotContext_x3f_2858_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2858_) == 0)
{
lean_object* v___x_2859_; 
v___x_2859_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
lean_inc(v_a_2860_);
lean_dec_ref_known(v___x_2859_, 1);
v_a_2827_ = v_a_2860_;
goto v___jp_2826_;
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
lean_dec(v_a_2825_);
lean_dec(v___x_2823_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2861_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v___x_2859_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2859_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2861_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
else
{
lean_object* v_val_2869_; 
v_val_2869_ = lean_ctor_get(v_quotContext_x3f_2858_, 0);
lean_inc(v_val_2869_);
v_a_2827_ = v_val_2869_;
goto v___jp_2826_;
}
v___jp_2826_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; 
v___x_2828_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2829_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2830_ = l_Lean_addMacroScope(v_a_2827_, v___x_2829_, v_a_2825_);
v___x_2831_ = lean_box(0);
lean_inc_n(v___x_2823_, 4);
v___x_2832_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2823_);
lean_ctor_set(v___x_2832_, 1, v___x_2828_);
lean_ctor_set(v___x_2832_, 2, v___x_2830_);
lean_ctor_set(v___x_2832_, 3, v___x_2831_);
v___x_2833_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2834_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2823_);
lean_ctor_set(v___x_2834_, 1, v___x_2833_);
v___x_2835_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2836_ = l_Lean_Syntax_node1(v___x_2823_, v___x_2835_, v_stx_1849_);
v___x_2837_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2838_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2823_);
lean_ctor_set(v___x_2838_, 1, v___x_2837_);
v___x_2839_ = l_Lean_Syntax_node4(v___x_2823_, v___x_1861_, v___x_2832_, v___x_2834_, v___x_2836_, v___x_2838_);
v___x_2840_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2849_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2843_ = v___x_2840_;
v_isShared_2844_ = v_isSharedCheck_2849_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2840_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2849_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2845_; lean_object* v___x_2847_; 
v___x_2845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2839_);
lean_ctor_set(v___x_2845_, 1, v_a_2841_);
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 0, v___x_2845_);
v___x_2847_ = v___x_2843_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v___x_2845_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_dec(v___x_2839_);
v_a_2850_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2840_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2840_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
}
else
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2877_; 
lean_dec(v___x_2823_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2870_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2872_ = v___x_2824_;
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2824_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2875_; 
if (v_isShared_2873_ == 0)
{
v___x_2875_ = v___x_2872_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2870_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
else
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2885_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2878_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2880_ = v___x_2821_;
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2821_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2883_; 
if (v_isShared_2881_ == 0)
{
v___x_2883_ = v___x_2880_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2878_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
else
{
lean_object* v_val_2886_; lean_object* v___x_2887_; 
lean_dec(v_id_1848_);
v_val_2886_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2886_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2887_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2886_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v_a_2888_; 
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2888_);
lean_dec_ref_known(v___x_2887_, 1);
v_pat_1854_ = v_a_2888_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2896_; 
lean_dec(v_stx_1849_);
v_a_2889_ = lean_ctor_get(v___x_2887_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2891_ = v___x_2887_;
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_dec(v___x_2887_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2894_; 
if (v_isShared_2892_ == 0)
{
v___x_2894_ = v___x_2891_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_a_2889_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
}
else
{
lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; uint8_t v___x_2900_; 
v___x_2897_ = lean_unsigned_to_nat(1u);
v___x_2898_ = lean_unsigned_to_nat(2u);
v___x_2899_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_2898_);
lean_inc(v___x_2899_);
v___x_2900_ = l_Lean_Syntax_matchesNull(v___x_2899_, v___x_2897_);
if (v___x_2900_ == 0)
{
lean_dec(v___x_2899_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_2901_; 
v___x_2901_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
lean_inc(v_a_2902_);
lean_dec_ref_known(v___x_2901_, 1);
v___x_2903_ = l_Lean_SourceInfo_fromRef(v_a_2902_, v___x_2900_);
lean_dec(v_a_2902_);
v___x_2904_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v_a_2905_; lean_object* v_a_2907_; lean_object* v_quotContext_x3f_2938_; 
v_a_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_a_2905_);
lean_dec_ref_known(v___x_2904_, 1);
v_quotContext_x3f_2938_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_2938_) == 0)
{
lean_object* v___x_2939_; 
v___x_2939_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v___x_2939_, 1);
v_a_2907_ = v_a_2940_;
goto v___jp_2906_;
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v_a_2905_);
lean_dec(v___x_2903_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2941_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2939_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2939_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
else
{
lean_object* v_val_2949_; 
v_val_2949_ = lean_ctor_get(v_quotContext_x3f_2938_, 0);
lean_inc(v_val_2949_);
v_a_2907_ = v_val_2949_;
goto v___jp_2906_;
}
v___jp_2906_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2908_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_2909_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_2910_ = l_Lean_addMacroScope(v_a_2907_, v___x_2909_, v_a_2905_);
v___x_2911_ = lean_box(0);
lean_inc_n(v___x_2903_, 4);
v___x_2912_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2903_);
lean_ctor_set(v___x_2912_, 1, v___x_2908_);
lean_ctor_set(v___x_2912_, 2, v___x_2910_);
lean_ctor_set(v___x_2912_, 3, v___x_2911_);
v___x_2913_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_2914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2903_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
v___x_2915_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_2916_ = l_Lean_Syntax_node1(v___x_2903_, v___x_2915_, v_stx_1849_);
v___x_2917_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_2918_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2903_);
lean_ctor_set(v___x_2918_, 1, v___x_2917_);
v___x_2919_ = l_Lean_Syntax_node4(v___x_2903_, v___x_1861_, v___x_2912_, v___x_2914_, v___x_2916_, v___x_2918_);
v___x_2920_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2929_; 
v_a_2921_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2923_ = v___x_2920_;
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2920_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2925_; lean_object* v___x_2927_; 
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2919_);
lean_ctor_set(v___x_2925_, 1, v_a_2921_);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 0, v___x_2925_);
v___x_2927_ = v___x_2923_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___x_2925_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
else
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
lean_dec(v___x_2919_);
v_a_2930_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2932_ = v___x_2920_;
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2920_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
}
else
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2957_; 
lean_dec(v___x_2903_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2950_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_2957_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2952_ = v___x_2904_;
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2904_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2955_; 
if (v_isShared_2953_ == 0)
{
v___x_2955_ = v___x_2952_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_a_2950_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
}
}
else
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_2958_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v___x_2901_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v___x_2901_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
}
else
{
lean_object* v_val_2966_; lean_object* v___x_2967_; 
lean_dec(v_id_1848_);
v_val_2966_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_2966_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_2967_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_2966_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_a_2968_; 
v_a_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_a_2968_);
lean_dec_ref_known(v___x_2967_, 1);
v_pat_1854_ = v_a_2968_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
lean_dec(v_stx_1849_);
v_a_2969_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2967_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2967_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
}
else
{
lean_object* v_stx_2977_; lean_object* v___x_2978_; 
lean_dec(v_stx_1849_);
v_stx_2977_ = l_Lean_Syntax_getArg(v___x_2899_, v___x_2809_);
lean_dec(v___x_2899_);
v___x_2978_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat(v_id_x3f_1847_, v_id_1848_, v_stx_2977_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v_fst_2980_; lean_object* v_snd_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_3041_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___x_2978_, 1);
v_fst_2980_ = lean_ctor_get(v_a_2979_, 0);
v_snd_2981_ = lean_ctor_get(v_a_2979_, 1);
v_isSharedCheck_3041_ = !lean_is_exclusive(v_a_2979_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_2983_ = v_a_2979_;
v_isShared_2984_ = v_isSharedCheck_3041_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_snd_2981_);
lean_inc(v_fst_2980_);
lean_dec(v_a_2979_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_3041_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2985_; 
v___x_2985_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v_a_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_a_2986_);
lean_dec_ref_known(v___x_2985_, 1);
v___x_2987_ = l_Lean_SourceInfo_fromRef(v_a_2986_, v___x_2818_);
lean_dec(v_a_2986_);
v___x_2988_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3024_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_2991_ = v___x_2988_;
v_isShared_2992_ = v_isSharedCheck_3024_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3024_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v_a_2994_; lean_object* v_quotContext_x3f_3012_; 
v_quotContext_x3f_3012_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3012_) == 0)
{
lean_object* v___x_3013_; 
v___x_3013_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_a_3014_);
lean_dec_ref_known(v___x_3013_, 1);
v_a_2994_ = v_a_3014_;
goto v___jp_2993_;
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
lean_del_object(v___x_2991_);
lean_dec(v_a_2989_);
lean_dec(v___x_2987_);
lean_del_object(v___x_2983_);
lean_dec(v_snd_2981_);
lean_dec(v_fst_2980_);
v_a_3015_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_3013_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_3013_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
else
{
lean_object* v_val_3023_; 
v_val_3023_ = lean_ctor_get(v_quotContext_x3f_3012_, 0);
lean_inc(v_val_3023_);
v_a_2994_ = v_val_3023_;
goto v___jp_2993_;
}
v___jp_2993_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3007_; 
v___x_2995_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__29, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__29_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__29);
v___x_2996_ = l_Lean_addMacroScope(v_a_2994_, v___x_2819_, v_a_2989_);
v___x_2997_ = lean_box(0);
lean_inc_n(v___x_2987_, 4);
v___x_2998_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2987_);
lean_ctor_set(v___x_2998_, 1, v___x_2995_);
lean_ctor_set(v___x_2998_, 2, v___x_2996_);
lean_ctor_set(v___x_2998_, 3, v___x_2997_);
v___x_2999_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3000_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2987_);
lean_ctor_set(v___x_3000_, 1, v___x_2999_);
v___x_3001_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
v___x_3002_ = l_Lean_Syntax_node1(v___x_2987_, v___x_3001_, v_fst_2980_);
v___x_3003_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_2987_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = l_Lean_Syntax_node4(v___x_2987_, v___x_1861_, v___x_2998_, v___x_3000_, v___x_3002_, v___x_3004_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_3005_);
v___x_3007_ = v___x_2983_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_3005_);
lean_ctor_set(v_reuseFailAlloc_3011_, 1, v_snd_2981_);
v___x_3007_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
lean_object* v___x_3009_; 
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v___x_3007_);
v___x_3009_ = v___x_2991_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v___x_3007_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec(v___x_2987_);
lean_del_object(v___x_2983_);
lean_dec(v_snd_2981_);
lean_dec(v_fst_2980_);
v_a_3025_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_2988_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_2988_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_del_object(v___x_2983_);
lean_dec(v_snd_2981_);
lean_dec(v_fst_2980_);
v_a_3033_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_2985_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_2985_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
}
}
else
{
return v___x_2978_;
}
}
}
}
else
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; uint8_t v___x_3045_; 
lean_dec(v___x_2810_);
v___x_3042_ = lean_unsigned_to_nat(1u);
v___x_3043_ = lean_unsigned_to_nat(2u);
v___x_3044_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_3043_);
lean_inc(v___x_3044_);
v___x_3045_ = l_Lean_Syntax_matchesNull(v___x_3044_, v___x_3042_);
if (v___x_3045_ == 0)
{
lean_dec(v___x_3044_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3046_; 
v___x_3046_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3046_) == 0)
{
lean_object* v_a_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v_a_3047_ = lean_ctor_get(v___x_3046_, 0);
lean_inc(v_a_3047_);
lean_dec_ref_known(v___x_3046_, 1);
v___x_3048_ = l_Lean_SourceInfo_fromRef(v_a_3047_, v___x_3045_);
lean_dec(v_a_3047_);
v___x_3049_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v_a_3052_; lean_object* v_quotContext_x3f_3083_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v_quotContext_x3f_3083_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3083_) == 0)
{
lean_object* v___x_3084_; 
v___x_3084_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; 
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
lean_inc(v_a_3085_);
lean_dec_ref_known(v___x_3084_, 1);
v_a_3052_ = v_a_3085_;
goto v___jp_3051_;
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec(v_a_3050_);
lean_dec(v___x_3048_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3086_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3084_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3084_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
else
{
lean_object* v_val_3094_; 
v_val_3094_ = lean_ctor_get(v_quotContext_x3f_3083_, 0);
lean_inc(v_val_3094_);
v_a_3052_ = v_val_3094_;
goto v___jp_3051_;
}
v___jp_3051_:
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3053_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3054_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3055_ = l_Lean_addMacroScope(v_a_3052_, v___x_3054_, v_a_3050_);
v___x_3056_ = lean_box(0);
lean_inc_n(v___x_3048_, 4);
v___x_3057_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3048_);
lean_ctor_set(v___x_3057_, 1, v___x_3053_);
lean_ctor_set(v___x_3057_, 2, v___x_3055_);
lean_ctor_set(v___x_3057_, 3, v___x_3056_);
v___x_3058_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3048_);
lean_ctor_set(v___x_3059_, 1, v___x_3058_);
v___x_3060_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3061_ = l_Lean_Syntax_node1(v___x_3048_, v___x_3060_, v_stx_1849_);
v___x_3062_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3063_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3048_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
v___x_3064_ = l_Lean_Syntax_node4(v___x_3048_, v___x_1861_, v___x_3057_, v___x_3059_, v___x_3061_, v___x_3063_);
v___x_3065_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3074_; 
v_a_3066_ = lean_ctor_get(v___x_3065_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3068_ = v___x_3065_;
v_isShared_3069_ = v_isSharedCheck_3074_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3065_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3074_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3070_; lean_object* v___x_3072_; 
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3064_);
lean_ctor_set(v___x_3070_, 1, v_a_3066_);
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v___x_3070_);
v___x_3072_ = v___x_3068_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___x_3070_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_dec(v___x_3064_);
v_a_3075_ = lean_ctor_get(v___x_3065_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3065_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3065_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_dec(v___x_3048_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3095_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3049_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3049_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3103_ = lean_ctor_get(v___x_3046_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3046_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3046_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3046_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
else
{
lean_object* v_val_3111_; lean_object* v___x_3112_; 
lean_dec(v_id_1848_);
v_val_3111_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3111_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3112_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3111_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3112_, 1);
v_pat_1854_ = v_a_3113_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
lean_dec(v_stx_1849_);
v_a_3114_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3112_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3112_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
}
}
else
{
lean_object* v___x_3122_; lean_object* v___x_3123_; uint8_t v___x_3124_; 
v___x_3122_ = l_Lean_Syntax_getArg(v___x_3044_, v___x_2809_);
lean_dec(v___x_3044_);
v___x_3123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__4));
lean_inc(v___x_3122_);
v___x_3124_ = l_Lean_Syntax_isOfKind(v___x_3122_, v___x_3123_);
if (v___x_3124_ == 0)
{
lean_dec(v___x_3122_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3125_; 
v___x_3125_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3125_, 1);
v___x_3127_ = l_Lean_SourceInfo_fromRef(v_a_3126_, v___x_3124_);
lean_dec(v_a_3126_);
v___x_3128_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; lean_object* v_a_3131_; lean_object* v_quotContext_x3f_3162_; 
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_a_3129_);
lean_dec_ref_known(v___x_3128_, 1);
v_quotContext_x3f_3162_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3162_) == 0)
{
lean_object* v___x_3163_; 
v___x_3163_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v___x_3163_, 1);
v_a_3131_ = v_a_3164_;
goto v___jp_3130_;
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
lean_dec(v_a_3129_);
lean_dec(v___x_3127_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3165_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3163_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3163_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
else
{
lean_object* v_val_3173_; 
v_val_3173_ = lean_ctor_get(v_quotContext_x3f_3162_, 0);
lean_inc(v_val_3173_);
v_a_3131_ = v_val_3173_;
goto v___jp_3130_;
}
v___jp_3130_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3132_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3133_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3134_ = l_Lean_addMacroScope(v_a_3131_, v___x_3133_, v_a_3129_);
v___x_3135_ = lean_box(0);
lean_inc_n(v___x_3127_, 4);
v___x_3136_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3127_);
lean_ctor_set(v___x_3136_, 1, v___x_3132_);
lean_ctor_set(v___x_3136_, 2, v___x_3134_);
lean_ctor_set(v___x_3136_, 3, v___x_3135_);
v___x_3137_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3138_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3127_);
lean_ctor_set(v___x_3138_, 1, v___x_3137_);
v___x_3139_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3140_ = l_Lean_Syntax_node1(v___x_3127_, v___x_3139_, v_stx_1849_);
v___x_3141_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3142_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3127_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
v___x_3143_ = l_Lean_Syntax_node4(v___x_3127_, v___x_1861_, v___x_3136_, v___x_3138_, v___x_3140_, v___x_3142_);
v___x_3144_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3153_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3153_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3153_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3149_; lean_object* v___x_3151_; 
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3143_);
lean_ctor_set(v___x_3149_, 1, v_a_3145_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 0, v___x_3149_);
v___x_3151_ = v___x_3147_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v___x_3149_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
lean_dec(v___x_3143_);
v_a_3154_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3144_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3144_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
}
else
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3181_; 
lean_dec(v___x_3127_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3174_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3176_ = v___x_3128_;
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v___x_3128_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3179_; 
if (v_isShared_3177_ == 0)
{
v___x_3179_ = v___x_3176_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_a_3174_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
}
}
else
{
lean_object* v_a_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3182_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3184_ = v___x_3125_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_a_3182_);
lean_dec(v___x_3125_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3182_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
else
{
lean_object* v_val_3190_; lean_object* v___x_3191_; 
lean_dec(v_id_1848_);
v_val_3190_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3190_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3191_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3190_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_a_3192_);
lean_dec_ref_known(v___x_3191_, 1);
v_pat_1854_ = v_a_3192_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3200_; 
lean_dec(v_stx_1849_);
v_a_3193_ = lean_ctor_get(v___x_3191_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3195_ = v___x_3191_;
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___x_3191_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3193_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
}
}
else
{
lean_object* v___x_3201_; lean_object* v___x_3202_; uint8_t v___x_3203_; 
v___x_3201_ = l_Lean_Syntax_getArg(v___x_3122_, v___x_2809_);
v___x_3202_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__31));
v___x_3203_ = l_Lean_Syntax_matchesIdent(v___x_3201_, v___x_3202_);
lean_dec(v___x_3201_);
if (v___x_3203_ == 0)
{
lean_dec(v___x_3122_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3204_; 
v___x_3204_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v_a_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v_a_3205_ = lean_ctor_get(v___x_3204_, 0);
lean_inc(v_a_3205_);
lean_dec_ref_known(v___x_3204_, 1);
v___x_3206_ = l_Lean_SourceInfo_fromRef(v_a_3205_, v___x_3203_);
lean_dec(v_a_3205_);
v___x_3207_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; lean_object* v_a_3210_; lean_object* v_quotContext_x3f_3241_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3208_);
lean_dec_ref_known(v___x_3207_, 1);
v_quotContext_x3f_3241_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3241_) == 0)
{
lean_object* v___x_3242_; 
v___x_3242_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_a_3243_);
lean_dec_ref_known(v___x_3242_, 1);
v_a_3210_ = v_a_3243_;
goto v___jp_3209_;
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec(v_a_3208_);
lean_dec(v___x_3206_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3244_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3242_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3242_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3249_; 
if (v_isShared_3247_ == 0)
{
v___x_3249_ = v___x_3246_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
else
{
lean_object* v_val_3252_; 
v_val_3252_ = lean_ctor_get(v_quotContext_x3f_3241_, 0);
lean_inc(v_val_3252_);
v_a_3210_ = v_val_3252_;
goto v___jp_3209_;
}
v___jp_3209_:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3211_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3212_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3213_ = l_Lean_addMacroScope(v_a_3210_, v___x_3212_, v_a_3208_);
v___x_3214_ = lean_box(0);
lean_inc_n(v___x_3206_, 4);
v___x_3215_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3206_);
lean_ctor_set(v___x_3215_, 1, v___x_3211_);
lean_ctor_set(v___x_3215_, 2, v___x_3213_);
lean_ctor_set(v___x_3215_, 3, v___x_3214_);
v___x_3216_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3206_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3219_ = l_Lean_Syntax_node1(v___x_3206_, v___x_3218_, v_stx_1849_);
v___x_3220_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3206_);
lean_ctor_set(v___x_3221_, 1, v___x_3220_);
v___x_3222_ = l_Lean_Syntax_node4(v___x_3206_, v___x_1861_, v___x_3215_, v___x_3217_, v___x_3219_, v___x_3221_);
v___x_3223_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3232_; 
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3226_ = v___x_3223_;
v_isShared_3227_ = v_isSharedCheck_3232_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3223_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3232_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3228_; lean_object* v___x_3230_; 
v___x_3228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3222_);
lean_ctor_set(v___x_3228_, 1, v_a_3224_);
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v___x_3228_);
v___x_3230_ = v___x_3226_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v___x_3228_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
lean_dec(v___x_3222_);
v_a_3233_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3223_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3223_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
else
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
lean_dec(v___x_3206_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3253_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3207_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3207_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3261_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3204_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3204_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
else
{
lean_object* v_val_3269_; lean_object* v___x_3270_; 
lean_dec(v_id_1848_);
v_val_3269_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3269_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3270_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3269_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v_pat_1854_ = v_a_3271_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3279_; 
lean_dec(v_stx_1849_);
v_a_3272_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3274_ = v___x_3270_;
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3270_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
}
else
{
lean_object* v___x_3280_; uint8_t v___x_3281_; 
v___x_3280_ = l_Lean_Syntax_getArg(v___x_3122_, v___x_3042_);
lean_dec(v___x_3122_);
v___x_3281_ = l_Lean_Syntax_matchesNull(v___x_3280_, v___x_2809_);
if (v___x_3281_ == 0)
{
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3284_ = l_Lean_SourceInfo_fromRef(v_a_3283_, v___x_3281_);
lean_dec(v_a_3283_);
v___x_3285_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v_a_3288_; lean_object* v_quotContext_x3f_3319_; 
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3286_);
lean_dec_ref_known(v___x_3285_, 1);
v_quotContext_x3f_3319_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3319_) == 0)
{
lean_object* v___x_3320_; 
v___x_3320_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
v_a_3288_ = v_a_3321_;
goto v___jp_3287_;
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
lean_dec(v_a_3286_);
lean_dec(v___x_3284_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3322_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3320_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3320_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
}
else
{
lean_object* v_val_3330_; 
v_val_3330_ = lean_ctor_get(v_quotContext_x3f_3319_, 0);
lean_inc(v_val_3330_);
v_a_3288_ = v_val_3330_;
goto v___jp_3287_;
}
v___jp_3287_:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3289_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3290_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3291_ = l_Lean_addMacroScope(v_a_3288_, v___x_3290_, v_a_3286_);
v___x_3292_ = lean_box(0);
lean_inc_n(v___x_3284_, 4);
v___x_3293_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3284_);
lean_ctor_set(v___x_3293_, 1, v___x_3289_);
lean_ctor_set(v___x_3293_, 2, v___x_3291_);
lean_ctor_set(v___x_3293_, 3, v___x_3292_);
v___x_3294_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3284_);
lean_ctor_set(v___x_3295_, 1, v___x_3294_);
v___x_3296_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3297_ = l_Lean_Syntax_node1(v___x_3284_, v___x_3296_, v_stx_1849_);
v___x_3298_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3284_);
lean_ctor_set(v___x_3299_, 1, v___x_3298_);
v___x_3300_ = l_Lean_Syntax_node4(v___x_3284_, v___x_1861_, v___x_3293_, v___x_3295_, v___x_3297_, v___x_3299_);
v___x_3301_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3301_) == 0)
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3310_; 
v_a_3302_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3304_ = v___x_3301_;
v_isShared_3305_ = v_isSharedCheck_3310_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3301_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3310_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3306_; lean_object* v___x_3308_; 
v___x_3306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3300_);
lean_ctor_set(v___x_3306_, 1, v_a_3302_);
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 0, v___x_3306_);
v___x_3308_ = v___x_3304_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3306_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec(v___x_3300_);
v_a_3311_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3301_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3301_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
}
else
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
lean_dec(v___x_3284_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3331_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___x_3285_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3285_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
else
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3346_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3339_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3341_ = v___x_3282_;
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3282_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
}
else
{
lean_object* v_val_3347_; lean_object* v___x_3348_; 
lean_dec(v_id_1848_);
v_val_3347_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3347_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3348_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3347_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_a_3349_; 
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_a_3349_);
lean_dec_ref_known(v___x_3348_, 1);
v_pat_1854_ = v_a_3349_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
lean_dec(v_stx_1849_);
v_a_3350_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3348_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3348_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
}
else
{
lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
lean_dec(v_id_x3f_1847_);
v___x_3358_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__33));
v___x_3359_ = lean_box(0);
v___x_3360_ = l_Lean_Syntax_mkAntiquotNode(v___x_3358_, v_id_1848_, v___x_2809_, v___x_3359_, v___x_2816_);
v_pat_1854_ = v___x_3360_;
goto v___jp_1853_;
}
}
}
}
}
}
else
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; 
lean_dec(v___x_2810_);
v___x_3361_ = lean_unsigned_to_nat(1u);
v___x_3362_ = lean_unsigned_to_nat(2u);
v___x_3363_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_3362_);
lean_inc(v___x_3363_);
v___x_3364_ = l_Lean_Syntax_matchesNull(v___x_3363_, v___x_3361_);
if (v___x_3364_ == 0)
{
lean_dec(v___x_3363_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3365_; 
v___x_3365_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3365_, 1);
v___x_3367_ = l_Lean_SourceInfo_fromRef(v_a_3366_, v___x_3364_);
lean_dec(v_a_3366_);
v___x_3368_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; lean_object* v_a_3371_; lean_object* v_quotContext_x3f_3402_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3369_);
lean_dec_ref_known(v___x_3368_, 1);
v_quotContext_x3f_3402_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3402_) == 0)
{
lean_object* v___x_3403_; 
v___x_3403_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3404_);
lean_dec_ref_known(v___x_3403_, 1);
v_a_3371_ = v_a_3404_;
goto v___jp_3370_;
}
else
{
lean_object* v_a_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3412_; 
lean_dec(v_a_3369_);
lean_dec(v___x_3367_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3405_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3407_ = v___x_3403_;
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_a_3405_);
lean_dec(v___x_3403_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3410_; 
if (v_isShared_3408_ == 0)
{
v___x_3410_ = v___x_3407_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3405_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
else
{
lean_object* v_val_3413_; 
v_val_3413_ = lean_ctor_get(v_quotContext_x3f_3402_, 0);
lean_inc(v_val_3413_);
v_a_3371_ = v_val_3413_;
goto v___jp_3370_;
}
v___jp_3370_:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3372_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3373_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3374_ = l_Lean_addMacroScope(v_a_3371_, v___x_3373_, v_a_3369_);
v___x_3375_ = lean_box(0);
lean_inc_n(v___x_3367_, 4);
v___x_3376_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3367_);
lean_ctor_set(v___x_3376_, 1, v___x_3372_);
lean_ctor_set(v___x_3376_, 2, v___x_3374_);
lean_ctor_set(v___x_3376_, 3, v___x_3375_);
v___x_3377_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3378_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3378_, 0, v___x_3367_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
v___x_3379_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3380_ = l_Lean_Syntax_node1(v___x_3367_, v___x_3379_, v_stx_1849_);
v___x_3381_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3382_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3367_);
lean_ctor_set(v___x_3382_, 1, v___x_3381_);
v___x_3383_ = l_Lean_Syntax_node4(v___x_3367_, v___x_1861_, v___x_3376_, v___x_3378_, v___x_3380_, v___x_3382_);
v___x_3384_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v_a_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3393_; 
v_a_3385_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3387_ = v___x_3384_;
v_isShared_3388_ = v_isSharedCheck_3393_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_a_3385_);
lean_dec(v___x_3384_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3393_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3389_; lean_object* v___x_3391_; 
v___x_3389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3383_);
lean_ctor_set(v___x_3389_, 1, v_a_3385_);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3389_);
v___x_3391_ = v___x_3387_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3389_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec(v___x_3383_);
v_a_3394_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3384_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3384_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
}
else
{
lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
lean_dec(v___x_3367_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3414_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3368_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_dec(v___x_3368_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3422_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3365_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3365_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
}
else
{
lean_object* v_val_3430_; lean_object* v___x_3431_; 
lean_dec(v_id_1848_);
v_val_3430_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3430_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3431_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3430_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3431_, 1);
v_pat_1854_ = v_a_3432_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
lean_dec(v_stx_1849_);
v_a_3433_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3431_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3431_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
}
else
{
lean_object* v_stx_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
lean_dec(v_id_x3f_1847_);
v_stx_3441_ = l_Lean_Syntax_getArg(v___x_3363_, v___x_2809_);
lean_dec(v___x_3363_);
v___x_3442_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__13));
v___x_3443_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(v___x_2813_, v_stx_3441_, v_id_1848_, v___x_3442_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
v_pat_1854_ = v_a_3444_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3452_; 
lean_dec(v_stx_1849_);
v_a_3445_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3447_ = v___x_3443_;
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3443_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
if (v_isShared_3448_ == 0)
{
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_a_3445_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
return v___x_3450_;
}
}
}
}
}
}
else
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; uint8_t v___x_3456_; 
lean_dec(v___x_2810_);
v___x_3453_ = lean_unsigned_to_nat(1u);
v___x_3454_ = lean_unsigned_to_nat(2u);
v___x_3455_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_3454_);
lean_inc(v___x_3455_);
v___x_3456_ = l_Lean_Syntax_matchesNull(v___x_3455_, v___x_3453_);
if (v___x_3456_ == 0)
{
lean_dec(v___x_3455_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3457_; 
v___x_3457_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3457_) == 0)
{
lean_object* v_a_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_a_3458_);
lean_dec_ref_known(v___x_3457_, 1);
v___x_3459_ = l_Lean_SourceInfo_fromRef(v_a_3458_, v___x_3456_);
lean_dec(v_a_3458_);
v___x_3460_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v_a_3463_; lean_object* v_quotContext_x3f_3494_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_a_3461_);
lean_dec_ref_known(v___x_3460_, 1);
v_quotContext_x3f_3494_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3494_) == 0)
{
lean_object* v___x_3495_; 
v___x_3495_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref_known(v___x_3495_, 1);
v_a_3463_ = v_a_3496_;
goto v___jp_3462_;
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_dec(v_a_3461_);
lean_dec(v___x_3459_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3497_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3495_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3495_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
}
else
{
lean_object* v_val_3505_; 
v_val_3505_ = lean_ctor_get(v_quotContext_x3f_3494_, 0);
lean_inc(v_val_3505_);
v_a_3463_ = v_val_3505_;
goto v___jp_3462_;
}
v___jp_3462_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3464_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3465_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3466_ = l_Lean_addMacroScope(v_a_3463_, v___x_3465_, v_a_3461_);
v___x_3467_ = lean_box(0);
lean_inc_n(v___x_3459_, 4);
v___x_3468_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3459_);
lean_ctor_set(v___x_3468_, 1, v___x_3464_);
lean_ctor_set(v___x_3468_, 2, v___x_3466_);
lean_ctor_set(v___x_3468_, 3, v___x_3467_);
v___x_3469_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3470_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3459_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
v___x_3471_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3472_ = l_Lean_Syntax_node1(v___x_3459_, v___x_3471_, v_stx_1849_);
v___x_3473_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3459_);
lean_ctor_set(v___x_3474_, 1, v___x_3473_);
v___x_3475_ = l_Lean_Syntax_node4(v___x_3459_, v___x_1861_, v___x_3468_, v___x_3470_, v___x_3472_, v___x_3474_);
v___x_3476_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3485_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3479_ = v___x_3476_;
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3476_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3481_; lean_object* v___x_3483_; 
v___x_3481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3475_);
lean_ctor_set(v___x_3481_, 1, v_a_3477_);
if (v_isShared_3480_ == 0)
{
lean_ctor_set(v___x_3479_, 0, v___x_3481_);
v___x_3483_ = v___x_3479_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v___x_3481_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
else
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3493_; 
lean_dec(v___x_3475_);
v_a_3486_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3488_ = v___x_3476_;
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3476_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3491_; 
if (v_isShared_3489_ == 0)
{
v___x_3491_ = v___x_3488_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_a_3486_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
}
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec(v___x_3459_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3506_ = lean_ctor_get(v___x_3460_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3460_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3460_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3514_ = lean_ctor_get(v___x_3457_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3457_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3457_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3457_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
else
{
lean_object* v_val_3522_; lean_object* v___x_3523_; 
lean_dec(v_id_1848_);
v_val_3522_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3522_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3523_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3522_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3523_) == 0)
{
lean_object* v_a_3524_; 
v_a_3524_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3523_, 1);
v_pat_1854_ = v_a_3524_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3532_; 
lean_dec(v_stx_1849_);
v_a_3525_ = lean_ctor_get(v___x_3523_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3523_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3527_ = v___x_3523_;
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3523_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3528_ == 0)
{
v___x_3530_ = v___x_3527_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_a_3525_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
}
else
{
lean_object* v_stx_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
lean_dec(v_id_x3f_1847_);
v_stx_3533_ = l_Lean_Syntax_getArg(v___x_3455_, v___x_2809_);
lean_dec(v___x_3455_);
v___x_3534_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__13));
v___x_3535_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(v___x_2813_, v_stx_3533_, v_id_1848_, v___x_3534_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v_a_3536_; 
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_a_3536_);
lean_dec_ref_known(v___x_3535_, 1);
v_pat_1854_ = v_a_3536_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3544_; 
lean_dec(v_stx_1849_);
v_a_3537_ = lean_ctor_get(v___x_3535_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3539_ = v___x_3535_;
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3535_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
}
}
}
}
else
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; uint8_t v___x_3548_; 
lean_dec(v___x_2810_);
v___x_3545_ = lean_unsigned_to_nat(1u);
v___x_3546_ = lean_unsigned_to_nat(2u);
v___x_3547_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_3546_);
lean_inc(v___x_3547_);
v___x_3548_ = l_Lean_Syntax_matchesNull(v___x_3547_, v___x_3545_);
if (v___x_3548_ == 0)
{
lean_dec(v___x_3547_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3549_; 
v___x_3549_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_a_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3549_, 1);
v___x_3551_ = l_Lean_SourceInfo_fromRef(v_a_3550_, v___x_3548_);
lean_dec(v_a_3550_);
v___x_3552_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v_a_3555_; lean_object* v_quotContext_x3f_3586_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_a_3553_);
lean_dec_ref_known(v___x_3552_, 1);
v_quotContext_x3f_3586_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3586_) == 0)
{
lean_object* v___x_3587_; 
v___x_3587_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v_a_3555_ = v_a_3588_;
goto v___jp_3554_;
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec(v_a_3553_);
lean_dec(v___x_3551_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3589_ = lean_ctor_get(v___x_3587_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3587_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3587_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
else
{
lean_object* v_val_3597_; 
v_val_3597_ = lean_ctor_get(v_quotContext_x3f_3586_, 0);
lean_inc(v_val_3597_);
v_a_3555_ = v_val_3597_;
goto v___jp_3554_;
}
v___jp_3554_:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3556_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3557_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3558_ = l_Lean_addMacroScope(v_a_3555_, v___x_3557_, v_a_3553_);
v___x_3559_ = lean_box(0);
lean_inc_n(v___x_3551_, 4);
v___x_3560_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3551_);
lean_ctor_set(v___x_3560_, 1, v___x_3556_);
lean_ctor_set(v___x_3560_, 2, v___x_3558_);
lean_ctor_set(v___x_3560_, 3, v___x_3559_);
v___x_3561_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3551_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
v___x_3563_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3564_ = l_Lean_Syntax_node1(v___x_3551_, v___x_3563_, v_stx_1849_);
v___x_3565_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3566_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3551_);
lean_ctor_set(v___x_3566_, 1, v___x_3565_);
v___x_3567_ = l_Lean_Syntax_node4(v___x_3551_, v___x_1861_, v___x_3560_, v___x_3562_, v___x_3564_, v___x_3566_);
v___x_3568_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3577_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3571_ = v___x_3568_;
v_isShared_3572_ = v_isSharedCheck_3577_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3568_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3577_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3573_; lean_object* v___x_3575_; 
v___x_3573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3567_);
lean_ctor_set(v___x_3573_, 1, v_a_3569_);
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v___x_3573_);
v___x_3575_ = v___x_3571_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3573_);
v___x_3575_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
return v___x_3575_;
}
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_dec(v___x_3567_);
v_a_3578_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3568_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3568_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
lean_dec(v___x_3551_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3598_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3552_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v___x_3552_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
}
else
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3613_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3606_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3608_ = v___x_3549_;
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3549_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3611_; 
if (v_isShared_3609_ == 0)
{
v___x_3611_ = v___x_3608_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3606_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
}
}
}
}
else
{
lean_object* v_val_3614_; lean_object* v___x_3615_; 
lean_dec(v_id_1848_);
v_val_3614_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3614_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3615_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3614_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
lean_inc(v_a_3616_);
lean_dec_ref_known(v___x_3615_, 1);
v_pat_1854_ = v_a_3616_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3624_; 
lean_dec(v_stx_1849_);
v_a_3617_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3619_ = v___x_3615_;
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_a_3617_);
lean_dec(v___x_3615_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3622_; 
if (v_isShared_3620_ == 0)
{
v___x_3622_ = v___x_3619_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3617_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
return v___x_3622_;
}
}
}
}
}
else
{
lean_object* v_stx_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
lean_dec(v_id_x3f_1847_);
v_stx_3625_ = l_Lean_Syntax_getArg(v___x_3547_, v___x_2809_);
lean_dec(v___x_3547_);
v___x_3626_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__34));
v___x_3627_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat(v___x_2811_, v_stx_3625_, v_id_1848_, v___x_3626_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc(v_a_3628_);
lean_dec_ref_known(v___x_3627_, 1);
v_pat_1854_ = v_a_3628_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3636_; 
lean_dec(v_stx_1849_);
v_a_3629_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3631_ = v___x_3627_;
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3627_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
}
}
v___jp_1862_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1868_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_1869_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_1870_ = l_Lean_addMacroScope(v_a_1867_, v___x_1869_, v___y_1865_);
v___x_1871_ = lean_box(0);
lean_inc_n(v___y_1863_, 4);
v___x_1872_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1872_, 0, v___y_1863_);
lean_ctor_set(v___x_1872_, 1, v___x_1868_);
lean_ctor_set(v___x_1872_, 2, v___x_1870_);
lean_ctor_set(v___x_1872_, 3, v___x_1871_);
v___x_1873_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_1874_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___y_1863_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_1876_ = l_Lean_Syntax_node1(v___y_1863_, v___x_1875_, v_stx_1849_);
v___x_1877_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_1878_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1878_, 0, v___y_1863_);
lean_ctor_set(v___x_1878_, 1, v___x_1877_);
v___x_1879_ = l_Lean_Syntax_node4(v___y_1863_, v___x_1861_, v___x_1872_, v___x_1874_, v___x_1876_, v___x_1878_);
v___x_1880_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v___y_1864_, v___y_1866_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1889_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1883_ = v___x_1880_;
v_isShared_1884_ = v_isSharedCheck_1889_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1880_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1889_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1885_; lean_object* v___x_1887_; 
v___x_1885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1879_);
lean_ctor_set(v___x_1885_, 1, v_a_1881_);
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 0, v___x_1885_);
v___x_1887_ = v___x_1883_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
lean_dec(v___x_1879_);
v_a_1890_ = lean_ctor_get(v___x_1880_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1880_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1880_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
v___jp_1898_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1904_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_1905_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_1906_ = l_Lean_addMacroScope(v_a_1903_, v___x_1905_, v___y_1902_);
v___x_1907_ = lean_box(0);
lean_inc_n(v___y_1899_, 4);
v___x_1908_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1908_, 0, v___y_1899_);
lean_ctor_set(v___x_1908_, 1, v___x_1904_);
lean_ctor_set(v___x_1908_, 2, v___x_1906_);
lean_ctor_set(v___x_1908_, 3, v___x_1907_);
v___x_1909_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_1910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___y_1899_);
lean_ctor_set(v___x_1910_, 1, v___x_1909_);
v___x_1911_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_1912_ = l_Lean_Syntax_node1(v___y_1899_, v___x_1911_, v_stx_1849_);
v___x_1913_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_1914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1914_, 0, v___y_1899_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v___x_1915_ = l_Lean_Syntax_node4(v___y_1899_, v___x_1861_, v___x_1908_, v___x_1910_, v___x_1912_, v___x_1914_);
v___x_1916_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v___y_1901_, v___y_1900_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1925_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1919_ = v___x_1916_;
v_isShared_1920_ = v_isSharedCheck_1925_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1916_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1925_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1921_; lean_object* v___x_1923_; 
v___x_1921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1915_);
lean_ctor_set(v___x_1921_, 1, v_a_1917_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v___x_1921_);
v___x_1923_ = v___x_1919_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1921_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v___x_1915_);
v_a_1926_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1916_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1916_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
else
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; uint8_t v___x_3640_; 
v___x_3637_ = lean_unsigned_to_nat(1u);
v___x_3638_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_3637_);
v___x_3639_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5));
lean_inc(v___x_3638_);
v___x_3640_ = l_Lean_Syntax_isOfKind(v___x_3638_, v___x_3639_);
if (v___x_3640_ == 0)
{
lean_dec(v___x_3638_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3641_; 
v___x_3641_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3642_);
lean_dec_ref_known(v___x_3641_, 1);
v___x_3643_ = l_Lean_SourceInfo_fromRef(v_a_3642_, v___x_1858_);
lean_dec(v_a_3642_);
v___x_3644_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v_a_3645_; lean_object* v_a_3647_; lean_object* v_quotContext_x3f_3679_; 
v_a_3645_ = lean_ctor_get(v___x_3644_, 0);
lean_inc(v_a_3645_);
lean_dec_ref_known(v___x_3644_, 1);
v_quotContext_x3f_3679_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3679_) == 0)
{
lean_object* v___x_3680_; 
v___x_3680_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v_a_3681_; 
v_a_3681_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_a_3681_);
lean_dec_ref_known(v___x_3680_, 1);
v_a_3647_ = v_a_3681_;
goto v___jp_3646_;
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec(v_a_3645_);
lean_dec(v___x_3643_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3682_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3680_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3680_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
else
{
lean_object* v_val_3690_; 
v_val_3690_ = lean_ctor_get(v_quotContext_x3f_3679_, 0);
lean_inc(v_val_3690_);
v_a_3647_ = v_val_3690_;
goto v___jp_3646_;
}
v___jp_3646_:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3648_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6));
v___x_3649_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3650_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3651_ = l_Lean_addMacroScope(v_a_3647_, v___x_3650_, v_a_3645_);
v___x_3652_ = lean_box(0);
lean_inc_n(v___x_3643_, 4);
v___x_3653_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3653_, 0, v___x_3643_);
lean_ctor_set(v___x_3653_, 1, v___x_3649_);
lean_ctor_set(v___x_3653_, 2, v___x_3651_);
lean_ctor_set(v___x_3653_, 3, v___x_3652_);
v___x_3654_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3655_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3643_);
lean_ctor_set(v___x_3655_, 1, v___x_3654_);
v___x_3656_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3657_ = l_Lean_Syntax_node1(v___x_3643_, v___x_3656_, v_stx_1849_);
v___x_3658_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3659_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3643_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
v___x_3660_ = l_Lean_Syntax_node4(v___x_3643_, v___x_3648_, v___x_3653_, v___x_3655_, v___x_3657_, v___x_3659_);
v___x_3661_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3670_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3670_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3670_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3666_; lean_object* v___x_3668_; 
v___x_3666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3660_);
lean_ctor_set(v___x_3666_, 1, v_a_3662_);
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 0, v___x_3666_);
v___x_3668_ = v___x_3664_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v___x_3666_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
else
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3678_; 
lean_dec(v___x_3660_);
v_a_3671_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3673_ = v___x_3661_;
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3661_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
if (v_isShared_3674_ == 0)
{
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3698_; 
lean_dec(v___x_3643_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3691_ = lean_ctor_get(v___x_3644_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3693_ = v___x_3644_;
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3644_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3696_; 
if (v_isShared_3694_ == 0)
{
v___x_3696_ = v___x_3693_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3691_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
else
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3706_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3699_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3701_ = v___x_3641_;
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3641_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
else
{
lean_object* v_val_3707_; lean_object* v___x_3708_; 
lean_dec(v_id_1848_);
v_val_3707_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3707_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3708_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3707_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3708_) == 0)
{
lean_object* v_a_3709_; 
v_a_3709_ = lean_ctor_get(v___x_3708_, 0);
lean_inc(v_a_3709_);
lean_dec_ref_known(v___x_3708_, 1);
v_pat_1854_ = v_a_3709_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_stx_1849_);
v_a_3710_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3708_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3708_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
}
else
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
lean_dec(v_id_x3f_1847_);
v___x_3718_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_strLitToPattern___boxed), 3, 1);
lean_closure_set(v___x_3718_, 0, v___x_3638_);
v___x_3719_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg(v___x_3718_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
v___x_3721_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__36));
v___x_3722_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38);
v___x_3723_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40);
v___x_3724_ = lean_unsigned_to_nat(4u);
v___x_3725_ = lean_mk_empty_array_with_capacity(v___x_3724_);
v___x_3726_ = lean_array_push(v___x_3725_, v_a_3720_);
v___x_3727_ = lean_array_push(v___x_3726_, v___x_3722_);
v___x_3728_ = lean_array_push(v___x_3727_, v___x_3723_);
v___x_3729_ = lean_array_push(v___x_3728_, v_id_1848_);
v___x_3730_ = lean_box(2);
v___x_3731_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3730_);
lean_ctor_set(v___x_3731_, 1, v___x_3721_);
lean_ctor_set(v___x_3731_, 2, v___x_3729_);
v_pat_1854_ = v___x_3731_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3732_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3719_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3719_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
}
}
}
}
else
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; uint8_t v___x_3743_; 
v___x_3740_ = lean_unsigned_to_nat(0u);
v___x_3741_ = l_Lean_Syntax_getArg(v_stx_1849_, v___x_3740_);
v___x_3742_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___closed__5));
lean_inc(v___x_3741_);
v___x_3743_ = l_Lean_Syntax_isOfKind(v___x_3741_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_dec(v___x_3741_);
if (lean_obj_tag(v_id_x3f_1847_) == 0)
{
lean_object* v___x_3744_; 
v___x_3744_ = l_Lean_Elab_Command_getRef___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v_a_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; 
v_a_3745_ = lean_ctor_get(v___x_3744_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v___x_3744_, 1);
v___x_3746_ = l_Lean_SourceInfo_fromRef(v_a_3745_, v___x_3743_);
lean_dec(v_a_3745_);
v___x_3747_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_1850_);
if (lean_obj_tag(v___x_3747_) == 0)
{
lean_object* v_a_3748_; lean_object* v_a_3750_; lean_object* v_quotContext_x3f_3782_; 
v_a_3748_ = lean_ctor_get(v___x_3747_, 0);
lean_inc(v_a_3748_);
lean_dec_ref_known(v___x_3747_, 1);
v_quotContext_x3f_3782_ = lean_ctor_get(v_a_1850_, 5);
if (lean_obj_tag(v_quotContext_x3f_3782_) == 0)
{
lean_object* v___x_3783_; 
v___x_3783_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_1851_);
if (lean_obj_tag(v___x_3783_) == 0)
{
lean_object* v_a_3784_; 
v_a_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_a_3784_);
lean_dec_ref_known(v___x_3783_, 1);
v_a_3750_ = v_a_3784_;
goto v___jp_3749_;
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
lean_dec(v_a_3748_);
lean_dec(v___x_3746_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3785_ = lean_ctor_get(v___x_3783_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3783_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3783_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3783_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
}
else
{
lean_object* v_val_3793_; 
v_val_3793_ = lean_ctor_get(v_quotContext_x3f_3782_, 0);
lean_inc(v_val_3793_);
v_a_3750_ = v_val_3793_;
goto v___jp_3749_;
}
v___jp_3749_:
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode_spec__4___closed__6));
v___x_3752_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__5);
v___x_3753_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__6));
v___x_3754_ = l_Lean_addMacroScope(v_a_3750_, v___x_3753_, v_a_3748_);
v___x_3755_ = lean_box(0);
lean_inc_n(v___x_3746_, 4);
v___x_3756_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3746_);
lean_ctor_set(v___x_3756_, 1, v___x_3752_);
lean_ctor_set(v___x_3756_, 2, v___x_3754_);
lean_ctor_set(v___x_3756_, 3, v___x_3755_);
v___x_3757_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__7));
v___x_3758_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3746_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSplicePat___closed__1));
lean_inc(v_stx_1849_);
v___x_3760_ = l_Lean_Syntax_node1(v___x_3746_, v___x_3759_, v_stx_1849_);
v___x_3761_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__8));
v___x_3762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3746_);
lean_ctor_set(v___x_3762_, 1, v___x_3761_);
v___x_3763_ = l_Lean_Syntax_node4(v___x_3746_, v___x_3751_, v___x_3756_, v___x_3758_, v___x_3760_, v___x_3762_);
v___x_3764_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_id_1848_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3773_; 
v_a_3765_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3767_ = v___x_3764_;
v_isShared_3768_ = v_isSharedCheck_3773_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3764_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3773_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3763_);
lean_ctor_set(v___x_3769_, 1, v_a_3765_);
if (v_isShared_3768_ == 0)
{
lean_ctor_set(v___x_3767_, 0, v___x_3769_);
v___x_3771_ = v___x_3767_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v___x_3769_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
else
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3781_; 
lean_dec(v___x_3763_);
v_a_3774_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3776_ = v___x_3764_;
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3764_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3779_; 
if (v_isShared_3777_ == 0)
{
v___x_3779_ = v___x_3776_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_a_3774_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
return v___x_3779_;
}
}
}
}
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
lean_dec(v___x_3746_);
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3794_ = lean_ctor_get(v___x_3747_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3747_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___x_3747_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___x_3747_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3802_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3744_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3744_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
else
{
lean_object* v_val_3810_; lean_object* v___x_3811_; 
lean_dec(v_id_1848_);
v_val_3810_ = lean_ctor_get(v_id_x3f_1847_, 0);
lean_inc(v_val_3810_);
lean_dec_ref_known(v_id_x3f_1847_, 1);
lean_inc(v_stx_1849_);
v___x_3811_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode(v_stx_1849_, v_val_3810_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_a_3812_);
lean_dec_ref_known(v___x_3811_, 1);
v_pat_1854_ = v_a_3812_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
lean_dec(v_stx_1849_);
v_a_3813_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3815_ = v___x_3811_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3811_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3813_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
}
else
{
lean_object* v___x_3821_; lean_object* v___x_3822_; 
lean_dec(v_id_x3f_1847_);
v___x_3821_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_strLitToPattern___boxed), 3, 1);
lean_closure_set(v___x_3821_, 0, v___x_3741_);
v___x_3822_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg(v___x_3821_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_object* v_a_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
lean_inc(v_a_3823_);
lean_dec_ref_known(v___x_3822_, 1);
v___x_3824_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__36));
v___x_3825_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__38);
v___x_3826_ = lean_obj_once(&l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40, &l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40_once, _init_l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___closed__40);
v___x_3827_ = lean_unsigned_to_nat(4u);
v___x_3828_ = lean_mk_empty_array_with_capacity(v___x_3827_);
v___x_3829_ = lean_array_push(v___x_3828_, v_a_3823_);
v___x_3830_ = lean_array_push(v___x_3829_, v___x_3825_);
v___x_3831_ = lean_array_push(v___x_3830_, v___x_3826_);
v___x_3832_ = lean_array_push(v___x_3831_, v_id_1848_);
v___x_3833_ = lean_box(2);
v___x_3834_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3834_, 0, v___x_3833_);
lean_ctor_set(v___x_3834_, 1, v___x_3824_);
lean_ctor_set(v___x_3834_, 2, v___x_3832_);
v_pat_1854_ = v___x_3834_;
goto v___jp_1853_;
}
else
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3842_; 
lean_dec(v_stx_1849_);
lean_dec(v_id_1848_);
v_a_3835_ = lean_ctor_get(v___x_3822_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3837_ = v___x_3822_;
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v___x_3822_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3840_; 
if (v_isShared_3838_ == 0)
{
v___x_3840_ = v___x_3837_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3835_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
return v___x_3840_;
}
}
}
}
}
v___jp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1855_, 0, v_stx_1849_);
lean_ctor_set(v___x_1855_, 1, v_pat_1854_);
v___x_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
return v___x_1856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat___boxed(lean_object* v_id_x3f_3843_, lean_object* v_id_3844_, lean_object* v_stx_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_){
_start:
{
lean_object* v_res_3849_; 
v_res_3849_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat(v_id_x3f_3843_, v_id_3844_, v_stx_3845_, v_a_3846_, v_a_3847_);
lean_dec(v_a_3847_);
lean_dec_ref(v_a_3846_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3(lean_object* v_00_u03b1_3850_, lean_object* v_x_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___redArg(v_x_3851_, v___y_3853_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3___boxed(lean_object* v_00_u03b1_3855_, lean_object* v_x_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__3(v_00_u03b1_3855_, v_x_3856_, v___y_3857_, v___y_3858_);
lean_dec_ref(v___y_3857_);
lean_dec_ref(v_x_3856_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8(lean_object* v_00_u03b1_3860_, lean_object* v_ref_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v___x_3865_; 
v___x_3865_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___redArg(v_ref_3861_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8___boxed(lean_object* v_00_u03b1_3866_, lean_object* v_ref_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__8(v_00_u03b1_3866_, v_ref_3867_, v___y_3868_, v___y_3869_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3868_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9(lean_object* v_00_u03b1_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_){
_start:
{
lean_object* v___x_3876_; 
v___x_3876_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg();
return v___x_3876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___boxed(lean_object* v_00_u03b1_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9(v_00_u03b1_3877_, v___y_3878_, v___y_3879_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2(lean_object* v_00_u03b1_3882_, lean_object* v_x_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v___x_3887_; 
v___x_3887_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg(v_x_3883_, v___y_3884_, v___y_3885_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___boxed(lean_object* v_00_u03b1_3888_, lean_object* v_x_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2(v_00_u03b1_3888_, v_x_3889_, v___y_3890_, v___y_3891_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5(lean_object* v_as_3894_, lean_object* v_as_x27_3895_, lean_object* v_b_3896_, lean_object* v_a_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
lean_object* v___x_3901_; 
v___x_3901_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___redArg(v_as_x27_3895_, v_b_3896_, v___y_3898_, v___y_3899_);
return v___x_3901_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5___boxed(lean_object* v_as_3902_, lean_object* v_as_x27_3903_, lean_object* v_b_3904_, lean_object* v_a_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__5(v_as_3902_, v_as_x27_3903_, v_b_3904_, v_a_3905_, v___y_3906_, v___y_3907_);
lean_dec(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v_as_x27_3903_);
lean_dec(v_as_3902_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7(lean_object* v_00_u03b1_3910_, lean_object* v_ref_3911_, lean_object* v_msg_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___redArg(v_ref_3911_, v_msg_3912_, v___y_3913_, v___y_3914_);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7___boxed(lean_object* v_00_u03b1_3917_, lean_object* v_ref_3918_, lean_object* v_msg_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__7(v_00_u03b1_3917_, v_ref_3918_, v_msg_3919_, v___y_3920_, v___y_3921_);
lean_dec(v___y_3921_);
lean_dec_ref(v___y_3920_);
lean_dec(v_ref_3918_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_3924_, lean_object* v_m_3925_, lean_object* v_a_3926_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___redArg(v_m_3925_, v_a_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_3928_, lean_object* v_m_3929_, lean_object* v_a_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7(v_00_u03b2_3928_, v_m_3929_, v_a_3930_);
lean_dec(v_a_3930_);
lean_dec_ref(v_m_3929_);
return v_res_3931_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8(lean_object* v_00_u03b2_3932_, lean_object* v_x_3933_, lean_object* v_x_3934_){
_start:
{
uint8_t v___x_3935_; 
v___x_3935_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___redArg(v_x_3933_, v_x_3934_);
return v___x_3935_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8___boxed(lean_object* v_00_u03b2_3936_, lean_object* v_x_3937_, lean_object* v_x_3938_){
_start:
{
uint8_t v_res_3939_; lean_object* v_r_3940_; 
v_res_3939_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8(v_00_u03b2_3936_, v_x_3937_, v_x_3938_);
lean_dec_ref(v_x_3938_);
lean_dec_ref(v_x_3937_);
v_r_3940_ = lean_box(v_res_3939_);
return v_r_3940_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9(lean_object* v_00_u03b2_3941_, lean_object* v_m_3942_, lean_object* v_a_3943_, lean_object* v_b_3944_){
_start:
{
lean_object* v___x_3945_; 
v___x_3945_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9___redArg(v_m_3942_, v_a_3943_, v_b_3944_);
return v___x_3945_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12(lean_object* v_00_u03b2_3946_, lean_object* v_a_3947_, lean_object* v_x_3948_){
_start:
{
lean_object* v___x_3949_; 
v___x_3949_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___redArg(v_a_3947_, v_x_3948_);
return v___x_3949_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12___boxed(lean_object* v_00_u03b2_3950_, lean_object* v_a_3951_, lean_object* v_x_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__7_spec__12(v_00_u03b2_3950_, v_a_3951_, v_x_3952_);
lean_dec(v_x_3952_);
lean_dec(v_a_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12(lean_object* v_00_u03b2_3954_, lean_object* v_x_3955_, size_t v_x_3956_, lean_object* v_x_3957_){
_start:
{
uint8_t v___x_3958_; 
v___x_3958_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___redArg(v_x_3955_, v_x_3956_, v_x_3957_);
return v___x_3958_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12___boxed(lean_object* v_00_u03b2_3959_, lean_object* v_x_3960_, lean_object* v_x_3961_, lean_object* v_x_3962_){
_start:
{
size_t v_x_49166__boxed_3963_; uint8_t v_res_3964_; lean_object* v_r_3965_; 
v_x_49166__boxed_3963_ = lean_unbox_usize(v_x_3961_);
lean_dec(v_x_3961_);
v_res_3964_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12(v_00_u03b2_3959_, v_x_3960_, v_x_49166__boxed_3963_, v_x_3962_);
lean_dec_ref(v_x_3962_);
lean_dec_ref(v_x_3960_);
v_r_3965_ = lean_box(v_res_3964_);
return v_r_3965_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14(lean_object* v_00_u03b2_3966_, lean_object* v_a_3967_, lean_object* v_x_3968_){
_start:
{
uint8_t v___x_3969_; 
v___x_3969_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___redArg(v_a_3967_, v_x_3968_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14___boxed(lean_object* v_00_u03b2_3970_, lean_object* v_a_3971_, lean_object* v_x_3972_){
_start:
{
uint8_t v_res_3973_; lean_object* v_r_3974_; 
v_res_3973_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__14(v_00_u03b2_3970_, v_a_3971_, v_x_3972_);
lean_dec(v_x_3972_);
lean_dec_ref(v_a_3971_);
v_r_3974_ = lean_box(v_res_3973_);
return v_r_3974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15(lean_object* v_00_u03b2_3975_, lean_object* v_data_3976_){
_start:
{
lean_object* v___x_3977_; 
v___x_3977_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15___redArg(v_data_3976_);
return v___x_3977_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15(lean_object* v_00_u03b2_3978_, lean_object* v_keys_3979_, lean_object* v_vals_3980_, lean_object* v_heq_3981_, lean_object* v_i_3982_, lean_object* v_k_3983_){
_start:
{
uint8_t v___x_3984_; 
v___x_3984_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___redArg(v_keys_3979_, v_i_3982_, v_k_3983_);
return v___x_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15___boxed(lean_object* v_00_u03b2_3985_, lean_object* v_keys_3986_, lean_object* v_vals_3987_, lean_object* v_heq_3988_, lean_object* v_i_3989_, lean_object* v_k_3990_){
_start:
{
uint8_t v_res_3991_; lean_object* v_r_3992_; 
v_res_3991_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__8_spec__12_spec__15(v_00_u03b2_3985_, v_keys_3986_, v_vals_3987_, v_heq_3988_, v_i_3989_, v_k_3990_);
lean_dec_ref(v_k_3990_);
lean_dec_ref(v_vals_3987_);
lean_dec_ref(v_keys_3986_);
v_r_3992_ = lean_box(v_res_3991_);
return v_r_3992_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19(lean_object* v_00_u03b2_3993_, lean_object* v_i_3994_, lean_object* v_source_3995_, lean_object* v_target_3996_){
_start:
{
lean_object* v___x_3997_; 
v___x_3997_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19___redArg(v_i_3994_, v_source_3995_, v_target_3996_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19_spec__21(lean_object* v_00_u03b2_3998_, lean_object* v_x_3999_, lean_object* v_x_4000_){
_start:
{
lean_object* v___x_4001_; 
v___x_4001_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__4_spec__5_spec__9_spec__15_spec__19_spec__21___redArg(v_x_3999_, v_x_4000_);
return v___x_4001_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Command_expandMacroArg___lam__0(lean_object* v_k_4008_){
_start:
{
lean_object* v___x_4009_; uint8_t v___x_4010_; 
v___x_4009_ = ((lean_object*)(l_Lean_Elab_Command_expandMacroArg___lam__0___closed__1));
v___x_4010_ = lean_name_eq(v_k_4008_, v___x_4009_);
if (v___x_4010_ == 0)
{
uint8_t v___x_4011_; 
v___x_4011_ = 1;
return v___x_4011_;
}
else
{
uint8_t v___x_4012_; 
v___x_4012_ = 0;
return v___x_4012_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandMacroArg___lam__0___boxed(lean_object* v_k_4013_){
_start:
{
uint8_t v_res_4014_; lean_object* v_r_4015_; 
v_res_4014_ = l_Lean_Elab_Command_expandMacroArg___lam__0(v_k_4013_);
lean_dec(v_k_4013_);
v_r_4015_ = lean_box(v_res_4014_);
return v_r_4015_;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMacroArg___closed__5(void){
_start:
{
lean_object* v___x_4025_; lean_object* v___x_4026_; 
v___x_4025_ = ((lean_object*)(l_Lean_Elab_Command_expandMacroArg___closed__4));
v___x_4026_ = l_String_toRawSubstring_x27(v___x_4025_);
return v___x_4026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandMacroArg(lean_object* v_stx_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_){
_start:
{
lean_object* v___f_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___f_4033_ = ((lean_object*)(l_Lean_Elab_Command_expandMacroArg___closed__0));
v___x_4034_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_4034_, 0, v_stx_4029_);
lean_closure_set(v___x_4034_, 1, v___f_4033_);
v___x_4035_ = l_Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2___redArg(v___x_4034_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4035_) == 0)
{
lean_object* v_a_4036_; lean_object* v___x_4037_; uint8_t v___x_4038_; 
v_a_4036_ = lean_ctor_get(v___x_4035_, 0);
lean_inc_n(v_a_4036_, 2);
lean_dec_ref_known(v___x_4035_, 1);
v___x_4037_ = ((lean_object*)(l_Lean_Elab_Command_expandMacroArg___closed__3));
v___x_4038_ = l_Lean_Syntax_isOfKind(v_a_4036_, v___x_4037_);
if (v___x_4038_ == 0)
{
lean_object* v___x_4039_; lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4047_; 
lean_dec(v_a_4036_);
v___x_4039_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg();
v_a_4040_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4042_ = v___x_4039_;
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_4039_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
else
{
lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; uint8_t v___x_4051_; 
v___x_4048_ = lean_unsigned_to_nat(0u);
v___x_4049_ = l_Lean_Syntax_getArg(v_a_4036_, v___x_4048_);
v___x_4050_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_4049_);
v___x_4051_ = l_Lean_Syntax_matchesNull(v___x_4049_, v___x_4050_);
if (v___x_4051_ == 0)
{
uint8_t v___x_4052_; 
v___x_4052_ = l_Lean_Syntax_matchesNull(v___x_4049_, v___x_4048_);
if (v___x_4052_ == 0)
{
lean_object* v___x_4053_; lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4061_; 
lean_dec(v_a_4036_);
v___x_4053_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg();
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4056_ = v___x_4053_;
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v___x_4053_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4059_; 
if (v_isShared_4057_ == 0)
{
v___x_4059_ = v___x_4056_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v_a_4054_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
else
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; 
v___x_4062_ = lean_unsigned_to_nat(1u);
v___x_4063_ = l_Lean_Syntax_getArg(v_a_4036_, v___x_4062_);
lean_dec(v_a_4036_);
v___x_4064_ = l_Lean_Elab_Command_getRef___redArg(v_a_4030_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
lean_inc(v_a_4065_);
lean_dec_ref_known(v___x_4064_, 1);
v___x_4066_ = l_Lean_SourceInfo_fromRef(v_a_4065_, v___x_4051_);
lean_dec(v_a_4065_);
v___x_4067_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_4030_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v_a_4070_; lean_object* v_quotContext_x3f_4078_; 
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref_known(v___x_4067_, 1);
v_quotContext_x3f_4078_ = lean_ctor_get(v_a_4030_, 5);
if (lean_obj_tag(v_quotContext_x3f_4078_) == 0)
{
lean_object* v___x_4079_; lean_object* v_a_4080_; 
v___x_4079_ = l_Lean_getMainModule___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__0___redArg(v_a_4031_);
v_a_4080_ = lean_ctor_get(v___x_4079_, 0);
lean_inc(v_a_4080_);
lean_dec_ref(v___x_4079_);
v_a_4070_ = v_a_4080_;
goto v___jp_4069_;
}
else
{
lean_object* v_val_4081_; 
v_val_4081_ = lean_ctor_get(v_quotContext_x3f_4078_, 0);
lean_inc(v_val_4081_);
v_a_4070_ = v_val_4081_;
goto v___jp_4069_;
}
v___jp_4069_:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4071_ = lean_obj_once(&l_Lean_Elab_Command_expandMacroArg___closed__5, &l_Lean_Elab_Command_expandMacroArg___closed__5_once, _init_l_Lean_Elab_Command_expandMacroArg___closed__5);
v___x_4072_ = ((lean_object*)(l_Lean_Elab_Command_expandMacroArg___closed__6));
v___x_4073_ = l_Lean_addMacroScope(v_a_4070_, v___x_4072_, v_a_4068_);
v___x_4074_ = lean_box(0);
v___x_4075_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4066_);
lean_ctor_set(v___x_4075_, 1, v___x_4071_);
lean_ctor_set(v___x_4075_, 2, v___x_4073_);
lean_ctor_set(v___x_4075_, 3, v___x_4074_);
v___x_4076_ = lean_box(0);
v___x_4077_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat(v___x_4076_, v___x_4075_, v___x_4063_, v_a_4030_, v_a_4031_);
return v___x_4077_;
}
}
else
{
lean_object* v_a_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4089_; 
lean_dec(v___x_4066_);
lean_dec(v___x_4063_);
v_a_4082_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4089_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4084_ = v___x_4067_;
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_a_4082_);
lean_dec(v___x_4067_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v___x_4087_; 
if (v_isShared_4085_ == 0)
{
v___x_4087_ = v___x_4084_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v_a_4082_);
v___x_4087_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
return v___x_4087_;
}
}
}
}
else
{
lean_object* v_a_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4097_; 
lean_dec(v___x_4063_);
v_a_4090_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4097_ == 0)
{
v___x_4092_ = v___x_4064_;
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_a_4090_);
lean_dec(v___x_4064_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4095_; 
if (v_isShared_4093_ == 0)
{
v___x_4095_ = v___x_4092_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v_a_4090_);
v___x_4095_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
return v___x_4095_;
}
}
}
}
}
else
{
lean_object* v___x_4098_; lean_object* v___x_4099_; uint8_t v___x_4100_; 
v___x_4098_ = l_Lean_Syntax_getArg(v___x_4049_, v___x_4048_);
lean_dec(v___x_4049_);
v___x_4099_ = ((lean_object*)(l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkAntiquotNode___lam__0___closed__1));
lean_inc(v___x_4098_);
v___x_4100_ = l_Lean_Syntax_isOfKind(v___x_4098_, v___x_4099_);
if (v___x_4100_ == 0)
{
lean_object* v___x_4101_; lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
lean_dec(v___x_4098_);
lean_dec(v_a_4036_);
v___x_4101_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00__private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat_spec__2_spec__9___redArg();
v_a_4102_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_4101_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_4101_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
else
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4110_ = lean_unsigned_to_nat(1u);
v___x_4111_ = l_Lean_Syntax_getArg(v_a_4036_, v___x_4110_);
lean_dec(v_a_4036_);
lean_inc(v___x_4098_);
v___x_4112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4098_);
v___x_4113_ = l___private_Lean_Elab_MacroArgUtil_0__Lean_Elab_Command_expandMacroArg_mkSyntaxAndPat(v___x_4112_, v___x_4098_, v___x_4111_, v_a_4030_, v_a_4031_);
return v___x_4113_;
}
}
}
}
else
{
lean_object* v_a_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4121_; 
v_a_4114_ = lean_ctor_get(v___x_4035_, 0);
v_isSharedCheck_4121_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4121_ == 0)
{
v___x_4116_ = v___x_4035_;
v_isShared_4117_ = v_isSharedCheck_4121_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_a_4114_);
lean_dec(v___x_4035_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4121_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4119_; 
if (v_isShared_4117_ == 0)
{
v___x_4119_ = v___x_4116_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_a_4114_);
v___x_4119_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
return v___x_4119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandMacroArg___boxed(lean_object* v_stx_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_){
_start:
{
lean_object* v_res_4126_; 
v_res_4126_ = l_Lean_Elab_Command_expandMacroArg(v_stx_4122_, v_a_4123_, v_a_4124_);
lean_dec(v_a_4124_);
lean_dec_ref(v_a_4123_);
return v_res_4126_;
}
}
lean_object* runtime_initialize_Lean_Elab_Syntax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_MacroArgUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_MacroArgUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_MacroArgUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_MacroArgUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_MacroArgUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_MacroArgUtil(builtin);
}
#ifdef __cplusplus
}
#endif
