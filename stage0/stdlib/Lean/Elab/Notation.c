// Lean compiler output
// Module: Lean.Elab.Notation
// Imports: public import Lean.Elab.Syntax public import Lean.Elab.AuxDef public import Lean.Elab.BuiltinNotation
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Command_strLitToPattern___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_topDown(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Command_visibility_ofAttrKind(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_isLocalAttrKind(lean_object*);
extern lean_object* l_Lean_Elab_Term_Quotation_quotPrecheck_allowSectionVars;
lean_object* l_Lean_Elab_Command_elabCommand___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_evalOptPrio___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inherit_doc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(83, 8, 69, 42, 53, 230, 51, 166)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_addInheritDocDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__0 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_addInheritDocDefault___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__1 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_addInheritDocDefault___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Command_addInheritDocDefault___closed__2 = (const lean_object*)&l_Lean_Elab_Command_addInheritDocDefault___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addInheritDocDefault(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cat"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__1_value),LEAN_SCALAR_PTR_LITERAL(95, 91, 11, 245, 227, 176, 7, 196)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "precedence"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 243, 176, 51, 48, 112, 202, 160)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6_value;
static const lean_array_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "identPrec"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__9_value),LEAN_SCALAR_PTR_LITERAL(251, 25, 252, 182, 120, 175, 78, 126)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__11_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unicodeAtom"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__13_value),LEAN_SCALAR_PTR_LITERAL(29, 147, 94, 13, 45, 35, 101, 109)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "atom"};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 112, 238, 38, 106, 122, 129, 24)}};
static const lean_ctor_object l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__15_value),LEAN_SCALAR_PTR_LITERAL(144, 22, 146, 169, 39, 242, 124, 88)}};
static const lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16 = (const lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__0 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__1 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__2 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__3 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_removeParentheses___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__4 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Command_removeParentheses___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_Command_removeParentheses___closed__5 = (const lean_object*)&l_Lean_Elab_Command_removeParentheses___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_Command_hasDuplicateAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__0 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 107, 218, 203, 20, 35, 251, 156)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__1 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__2 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__3 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__4;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__3_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__5 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__6 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__7 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__8 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aux_def"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__9 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__9_value),LEAN_SCALAR_PTR_LITERAL(83, 33, 36, 212, 17, 187, 86, 94)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__10 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__11 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__11_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__12 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__13 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "app_unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__14 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__15;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__14_value),LEAN_SCALAR_PTR_LITERAL(173, 94, 177, 152, 198, 163, 81, 20)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__16 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__16_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__17 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__17_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unexpand"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__18 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__19;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__18_value),LEAN_SCALAR_PTR_LITERAL(42, 154, 37, 229, 99, 64, 199, 76)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__20 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__20_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.PrettyPrinter.Unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__21 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__22;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__23 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__23_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Unexpander"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__24 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__23_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__24_value),LEAN_SCALAR_PTR_LITERAL(127, 37, 73, 100, 13, 145, 76, 255)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__25 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__25_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__26 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__26_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__27 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__27_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__28 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__28_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__29 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__29_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__29_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__30 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__30_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__31 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__31_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__32 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__32_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__33 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__33_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__34 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__34_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__35 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__35_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`("};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__36 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__36_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__37 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__37_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__38 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__38_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "withRef"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__39 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__40;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value),LEAN_SCALAR_PTR_LITERAL(193, 74, 233, 14, 30, 198, 157, 185)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__41 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__41_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__42_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__39_value),LEAN_SCALAR_PTR_LITERAL(128, 176, 237, 189, 54, 129, 101, 238)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__42 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__42_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__43 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__43_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__44 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__44_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__45 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__45_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "throw"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__46 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__47;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value),LEAN_SCALAR_PTR_LITERAL(60, 81, 80, 209, 187, 239, 255, 113)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__48 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__48_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadExcept"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__49 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__49_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__49_value),LEAN_SCALAR_PTR_LITERAL(162, 154, 253, 120, 110, 153, 103, 113)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__50_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__46_value),LEAN_SCALAR_PTR_LITERAL(121, 11, 61, 69, 62, 207, 229, 53)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__50 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__50_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__51 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__51_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__51_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__52 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__52_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__53 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__53_value;
static const lean_string_object l_Lean_Elab_Command_mkUnexpander___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__54 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__54_value;
static lean_once_cell_t l_Lean_Elab_Command_mkUnexpander___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_mkUnexpander___closed__55;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__56 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__56_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__57 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__58 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__58_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__59 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__60 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__60_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__61 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__62 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__62_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__63 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__63_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__64 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__64_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__61_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__64_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__65 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__59_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__65_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__66 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__66_value;
static const lean_ctor_object l_Lean_Elab_Command_mkUnexpander___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__57_value),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__66_value)}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__67 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__67_value;
static const lean_array_object l_Lean_Elab_Command_mkUnexpander___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_mkUnexpander___closed__68 = (const lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__68_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__28(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__28___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27_spec__31___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "notation"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 34, 53, 7, 182, 20, 8, 182)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "macro_rules"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__2_value),LEAN_SCALAR_PTR_LITERAL(125, 80, 75, 5, 165, 87, 197, 1)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "precheckedQuot"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedPrio"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__6_value),LEAN_SCALAR_PTR_LITERAL(171, 32, 2, 102, 118, 75, 64, 185)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "priority"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namedName"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__9_value),LEAN_SCALAR_PTR_LITERAL(73, 173, 122, 11, 5, 195, 101, 245)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "syntax"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__12_value),LEAN_SCALAR_PTR_LITERAL(39, 60, 146, 133, 142, 21, 8, 39)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabNotation___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabNotation___closed__14_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_Command_elabNotation___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNotation___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_elabNotation___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Command_elabNotation___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27_spec__31(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabNotation"};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Command_mkUnexpander___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 81, 117, 114, 113, 220, 215, 248)}};
static const lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(lean_object* v_id_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_6_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
v___x_7_ = l_Lean_Syntax_getId(v___x_6_);
v___x_8_ = l_Lean_TSyntax_getId(v_id_1_);
v___x_9_ = lean_name_eq(v___x_7_, v___x_8_);
lean_dec(v___x_8_);
lean_dec(v___x_7_);
if (v___x_9_ == 0)
{
size_t v___x_10_; size_t v___x_11_; 
v___x_10_ = ((size_t)1ULL);
v___x_11_ = lean_usize_add(v_i_3_, v___x_10_);
v_i_3_ = v___x_11_;
goto _start;
}
else
{
return v___x_9_;
}
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1___boxed(lean_object* v_id_14_, lean_object* v_as_15_, lean_object* v_i_16_, lean_object* v_stop_17_){
_start:
{
size_t v_i_boxed_18_; size_t v_stop_boxed_19_; uint8_t v_res_20_; lean_object* v_r_21_; 
v_i_boxed_18_ = lean_unbox_usize(v_i_16_);
lean_dec(v_i_16_);
v_stop_boxed_19_ = lean_unbox_usize(v_stop_17_);
lean_dec(v_stop_17_);
v_res_20_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(v_id_14_, v_as_15_, v_i_boxed_18_, v_stop_boxed_19_);
lean_dec_ref(v_as_15_);
lean_dec(v_id_14_);
v_r_21_ = lean_box(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(lean_object* v_vars_28_, lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_x_29_);
v___x_31_ = l_Lean_Syntax_isOfKind(v_x_29_, v___x_30_);
if (v___x_31_ == 0)
{
if (lean_obj_tag(v_x_29_) == 1)
{
lean_object* v_info_32_; lean_object* v_kind_33_; lean_object* v_args_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_44_; 
v_info_32_ = lean_ctor_get(v_x_29_, 0);
v_kind_33_ = lean_ctor_get(v_x_29_, 1);
v_args_34_ = lean_ctor_get(v_x_29_, 2);
v_isSharedCheck_44_ = !lean_is_exclusive(v_x_29_);
if (v_isSharedCheck_44_ == 0)
{
v___x_36_ = v_x_29_;
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_args_34_);
lean_inc(v_kind_33_);
lean_inc(v_info_32_);
lean_dec(v_x_29_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_44_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
size_t v_sz_38_; size_t v___x_39_; lean_object* v___x_40_; lean_object* v___x_42_; 
v_sz_38_ = lean_array_size(v_args_34_);
v___x_39_ = ((size_t)0ULL);
v___x_40_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(v_vars_28_, v_sz_38_, v___x_39_, v_args_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 2, v___x_40_);
v___x_42_ = v___x_36_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_info_32_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v_kind_33_);
lean_ctor_set(v_reuseFailAlloc_43_, 2, v___x_40_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
else
{
return v_x_29_;
}
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_array_get_size(v_vars_28_);
v___x_47_ = lean_nat_dec_lt(v___x_45_, v___x_46_);
if (v___x_47_ == 0)
{
return v_x_29_;
}
else
{
if (v___x_47_ == 0)
{
return v_x_29_;
}
else
{
size_t v___x_48_; size_t v___x_49_; uint8_t v___x_50_; 
v___x_48_ = ((size_t)0ULL);
v___x_49_ = lean_usize_of_nat(v___x_46_);
v___x_50_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__1(v_x_29_, v_vars_28_, v___x_48_, v___x_49_);
if (v___x_50_ == 0)
{
return v_x_29_;
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v___x_52_ = lean_box(0);
v___x_53_ = l_Lean_Syntax_mkAntiquotNode(v___x_51_, v_x_29_, v___x_45_, v___x_52_, v___x_31_);
return v___x_53_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(lean_object* v_vars_54_, size_t v_sz_55_, size_t v_i_56_, lean_object* v_bs_57_){
_start:
{
uint8_t v___x_58_; 
v___x_58_ = lean_usize_dec_lt(v_i_56_, v_sz_55_);
if (v___x_58_ == 0)
{
return v_bs_57_;
}
else
{
lean_object* v_v_59_; lean_object* v___x_60_; lean_object* v_bs_x27_61_; lean_object* v___x_62_; size_t v___x_63_; size_t v___x_64_; lean_object* v___x_65_; 
v_v_59_ = lean_array_uget(v_bs_57_, v_i_56_);
v___x_60_ = lean_unsigned_to_nat(0u);
v_bs_x27_61_ = lean_array_uset(v_bs_57_, v_i_56_, v___x_60_);
v___x_62_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v_vars_54_, v_v_59_);
v___x_63_ = ((size_t)1ULL);
v___x_64_ = lean_usize_add(v_i_56_, v___x_63_);
v___x_65_ = lean_array_uset(v_bs_x27_61_, v_i_56_, v___x_62_);
v_i_56_ = v___x_64_;
v_bs_57_ = v___x_65_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0___boxed(lean_object* v_vars_67_, lean_object* v_sz_68_, lean_object* v_i_69_, lean_object* v_bs_70_){
_start:
{
size_t v_sz_boxed_71_; size_t v_i_boxed_72_; lean_object* v_res_73_; 
v_sz_boxed_71_ = lean_unbox_usize(v_sz_68_);
lean_dec(v_sz_68_);
v_i_boxed_72_ = lean_unbox_usize(v_i_69_);
lean_dec(v_i_69_);
v_res_73_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote_spec__0(v_vars_67_, v_sz_boxed_71_, v_i_boxed_72_, v_bs_70_);
lean_dec_ref(v_vars_67_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___boxed(lean_object* v_vars_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v_vars_74_, v_x_75_);
lean_dec_ref(v_vars_74_);
return v_res_76_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14(void){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Array_mkArray0___redArg();
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(uint8_t v___x_106_, lean_object* v___x_107_, size_t v_sz_108_, size_t v_i_109_, lean_object* v_bs_110_){
_start:
{
uint8_t v___x_111_; 
v___x_111_ = lean_usize_dec_lt(v_i_109_, v_sz_108_);
if (v___x_111_ == 0)
{
lean_dec(v___x_107_);
return v_bs_110_;
}
else
{
lean_object* v___x_112_; lean_object* v_v_113_; lean_object* v___x_114_; lean_object* v_bs_x27_115_; lean_object* v___y_117_; uint8_t v___x_122_; 
v___x_112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v_v_113_ = lean_array_uget(v_bs_110_, v_i_109_);
v___x_114_ = lean_unsigned_to_nat(0u);
v_bs_x27_115_ = lean_array_uset(v_bs_110_, v_i_109_, v___x_114_);
lean_inc(v_v_113_);
v___x_122_ = l_Lean_Syntax_isOfKind(v_v_113_, v___x_112_);
if (v___x_122_ == 0)
{
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = l_Lean_Syntax_getArg(v_v_113_, v___x_114_);
v___x_124_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v___x_123_);
v___x_125_ = l_Lean_Syntax_isOfKind(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_dec(v___x_123_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = l_Lean_Syntax_getArg(v___x_123_, v___x_114_);
lean_dec(v___x_123_);
v___x_127_ = l_Lean_Syntax_matchesNull(v___x_126_, v___x_114_);
if (v___x_127_ == 0)
{
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_128_ = lean_unsigned_to_nat(1u);
v___x_129_ = l_Lean_Syntax_getArg(v_v_113_, v___x_128_);
v___x_130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
lean_inc(v___x_129_);
v___x_131_ = l_Lean_Syntax_isOfKind(v___x_129_, v___x_130_);
if (v___x_131_ == 0)
{
lean_dec(v___x_129_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_132_; lean_object* v_attr_133_; uint8_t v___x_134_; 
v___x_132_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v_attr_133_ = l_Lean_Syntax_getArg(v___x_129_, v___x_114_);
lean_inc(v_attr_133_);
v___x_134_ = l_Lean_Syntax_isOfKind(v_attr_133_, v___x_132_);
if (v___x_134_ == 0)
{
lean_dec(v_attr_133_);
lean_dec(v___x_129_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_135_ = l_Lean_Syntax_getArg(v___x_129_, v___x_128_);
lean_dec(v___x_129_);
v___x_136_ = l_Lean_Syntax_matchesNull(v___x_135_, v___x_114_);
if (v___x_136_ == 0)
{
lean_dec(v_attr_133_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v___x_137_ = l_Lean_TSyntax_getId(v_attr_133_);
v___x_138_ = l_Lean_Name_eraseMacroScopes(v___x_137_);
lean_dec(v___x_137_);
v___x_139_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11));
v___x_140_ = lean_name_eq(v___x_138_, v___x_139_);
lean_dec(v___x_138_);
if (v___x_140_ == 0)
{
lean_dec(v_attr_133_);
v___y_117_ = v_v_113_;
goto v___jp_116_;
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec(v_v_113_);
v___x_141_ = lean_box(0);
v___x_142_ = l_Lean_SourceInfo_fromRef(v___x_141_, v___x_106_);
v___x_143_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_144_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
lean_inc_n(v___x_142_, 4);
v___x_145_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_145_, 0, v___x_142_);
lean_ctor_set(v___x_145_, 1, v___x_143_);
lean_ctor_set(v___x_145_, 2, v___x_144_);
v___x_146_ = l_Lean_Syntax_node1(v___x_142_, v___x_124_, v___x_145_);
lean_inc(v___x_107_);
v___x_147_ = l_Lean_Syntax_node1(v___x_142_, v___x_143_, v___x_107_);
v___x_148_ = l_Lean_Syntax_node2(v___x_142_, v___x_130_, v_attr_133_, v___x_147_);
v___x_149_ = l_Lean_Syntax_node2(v___x_142_, v___x_112_, v___x_146_, v___x_148_);
v___y_117_ = v___x_149_;
goto v___jp_116_;
}
}
}
}
}
}
}
v___jp_116_:
{
size_t v___x_118_; size_t v___x_119_; lean_object* v___x_120_; 
v___x_118_ = ((size_t)1ULL);
v___x_119_ = lean_usize_add(v_i_109_, v___x_118_);
v___x_120_ = lean_array_uset(v_bs_x27_115_, v_i_109_, v___y_117_);
v_i_109_ = v___x_119_;
v_bs_110_ = v___x_120_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___boxed(lean_object* v___x_150_, lean_object* v___x_151_, lean_object* v_sz_152_, lean_object* v_i_153_, lean_object* v_bs_154_){
_start:
{
uint8_t v___x_7287__boxed_155_; size_t v_sz_boxed_156_; size_t v_i_boxed_157_; lean_object* v_res_158_; 
v___x_7287__boxed_155_ = lean_unbox(v___x_150_);
v_sz_boxed_156_ = lean_unbox_usize(v_sz_152_);
lean_dec(v_sz_152_);
v_i_boxed_157_ = lean_unbox_usize(v_i_153_);
lean_dec(v_i_153_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(v___x_7287__boxed_155_, v___x_151_, v_sz_boxed_156_, v_i_boxed_157_, v_bs_154_);
return v_res_158_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0(void){
_start:
{
uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = 0;
v___x_160_ = lean_box(0);
v___x_161_ = l_Lean_SourceInfo_fromRef(v___x_160_, v___x_159_);
return v___x_161_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_162_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
v___x_163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_164_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_165_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
lean_ctor_set(v___x_165_, 2, v___x_162_);
return v___x_165_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_166_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__1);
v___x_167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
v___x_168_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_169_ = l_Lean_Syntax_node1(v___x_168_, v___x_167_, v___x_166_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(lean_object* v___x_170_, size_t v_sz_171_, size_t v_i_172_, lean_object* v_bs_173_){
_start:
{
uint8_t v___x_174_; 
v___x_174_ = lean_usize_dec_lt(v_i_172_, v_sz_171_);
if (v___x_174_ == 0)
{
lean_dec(v___x_170_);
return v_bs_173_;
}
else
{
lean_object* v___x_175_; lean_object* v_v_176_; lean_object* v___x_177_; lean_object* v_bs_x27_178_; lean_object* v___y_180_; uint8_t v___x_185_; 
v___x_175_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v_v_176_ = lean_array_uget(v_bs_173_, v_i_172_);
v___x_177_ = lean_unsigned_to_nat(0u);
v_bs_x27_178_ = lean_array_uset(v_bs_173_, v_i_172_, v___x_177_);
lean_inc(v_v_176_);
v___x_185_ = l_Lean_Syntax_isOfKind(v_v_176_, v___x_175_);
if (v___x_185_ == 0)
{
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = l_Lean_Syntax_getArg(v_v_176_, v___x_177_);
v___x_187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v___x_186_);
v___x_188_ = l_Lean_Syntax_isOfKind(v___x_186_, v___x_187_);
if (v___x_188_ == 0)
{
lean_dec(v___x_186_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = l_Lean_Syntax_getArg(v___x_186_, v___x_177_);
lean_dec(v___x_186_);
v___x_190_ = l_Lean_Syntax_matchesNull(v___x_189_, v___x_177_);
if (v___x_190_ == 0)
{
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = l_Lean_Syntax_getArg(v_v_176_, v___x_191_);
v___x_193_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
lean_inc(v___x_192_);
v___x_194_ = l_Lean_Syntax_isOfKind(v___x_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_dec(v___x_192_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_195_; lean_object* v_attr_196_; uint8_t v___x_197_; 
v___x_195_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v_attr_196_ = l_Lean_Syntax_getArg(v___x_192_, v___x_177_);
lean_inc(v_attr_196_);
v___x_197_ = l_Lean_Syntax_isOfKind(v_attr_196_, v___x_195_);
if (v___x_197_ == 0)
{
lean_dec(v_attr_196_);
lean_dec(v___x_192_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_198_ = l_Lean_Syntax_getArg(v___x_192_, v___x_191_);
lean_dec(v___x_192_);
v___x_199_ = l_Lean_Syntax_matchesNull(v___x_198_, v___x_177_);
if (v___x_199_ == 0)
{
lean_dec(v_attr_196_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_200_ = l_Lean_TSyntax_getId(v_attr_196_);
v___x_201_ = l_Lean_Name_eraseMacroScopes(v___x_200_);
lean_dec(v___x_200_);
v___x_202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__11));
v___x_203_ = lean_name_eq(v___x_201_, v___x_202_);
lean_dec(v___x_201_);
if (v___x_203_ == 0)
{
lean_dec(v_attr_196_);
v___y_180_ = v_v_176_;
goto v___jp_179_;
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec(v_v_176_);
v___x_204_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__0);
v___x_205_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_206_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___closed__2);
lean_inc(v___x_170_);
v___x_207_ = l_Lean_Syntax_node1(v___x_204_, v___x_205_, v___x_170_);
v___x_208_ = l_Lean_Syntax_node2(v___x_204_, v___x_193_, v_attr_196_, v___x_207_);
v___x_209_ = l_Lean_Syntax_node2(v___x_204_, v___x_175_, v___x_206_, v___x_208_);
v___y_180_ = v___x_209_;
goto v___jp_179_;
}
}
}
}
}
}
}
v___jp_179_:
{
size_t v___x_181_; size_t v___x_182_; lean_object* v___x_183_; 
v___x_181_ = ((size_t)1ULL);
v___x_182_ = lean_usize_add(v_i_172_, v___x_181_);
v___x_183_ = lean_array_uset(v_bs_x27_178_, v_i_172_, v___y_180_);
v_i_172_ = v___x_182_;
v_bs_173_ = v___x_183_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1___boxed(lean_object* v___x_210_, lean_object* v_sz_211_, lean_object* v_i_212_, lean_object* v_bs_213_){
_start:
{
size_t v_sz_boxed_214_; size_t v_i_boxed_215_; lean_object* v_res_216_; 
v_sz_boxed_214_ = lean_unbox_usize(v_sz_211_);
lean_dec(v_sz_211_);
v_i_boxed_215_ = lean_unbox_usize(v_i_212_);
lean_dec(v_i_212_);
v_res_216_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(v___x_210_, v_sz_boxed_214_, v_i_boxed_215_, v_bs_213_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_addInheritDocDefault(lean_object* v_rhs_224_, lean_object* v_attrs_x3f_225_){
_start:
{
if (lean_obj_tag(v_attrs_x3f_225_) == 0)
{
lean_dec(v_rhs_224_);
return v_attrs_x3f_225_;
}
else
{
lean_object* v_val_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_val_226_ = lean_ctor_get(v_attrs_x3f_225_, 0);
v___x_227_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
lean_inc(v_rhs_224_);
v___x_228_ = l_Lean_Syntax_isOfKind(v_rhs_224_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_rhs_224_);
v___x_230_ = l_Lean_Syntax_isOfKind(v_rhs_224_, v___x_229_);
if (v___x_230_ == 0)
{
lean_dec(v_rhs_224_);
return v_attrs_x3f_225_;
}
else
{
lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_243_; 
lean_inc(v_val_226_);
v_isSharedCheck_243_ = !lean_is_exclusive(v_attrs_x3f_225_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; 
v_unused_244_ = lean_ctor_get(v_attrs_x3f_225_, 0);
lean_dec(v_unused_244_);
v___x_232_ = v_attrs_x3f_225_;
v_isShared_233_ = v_isSharedCheck_243_;
goto v_resetjp_231_;
}
else
{
lean_dec(v_attrs_x3f_225_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_243_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; lean_object* v___x_235_; size_t v_sz_236_; size_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_234_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__2));
v___x_235_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_226_);
lean_dec(v_val_226_);
v_sz_236_ = lean_array_size(v___x_235_);
v___x_237_ = ((size_t)0ULL);
v___x_238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0(v___x_228_, v_rhs_224_, v_sz_236_, v___x_237_, v___x_235_);
v___x_239_ = l_Lean_Syntax_SepArray_ofElems(v___x_234_, v___x_238_);
lean_dec_ref(v___x_238_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 0, v___x_239_);
v___x_241_ = v___x_232_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = l_Lean_Syntax_getArg(v_rhs_224_, v___x_245_);
lean_dec(v_rhs_224_);
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v___x_246_);
v___x_248_ = l_Lean_Syntax_isOfKind(v___x_246_, v___x_247_);
if (v___x_248_ == 0)
{
lean_dec(v___x_246_);
return v_attrs_x3f_225_;
}
else
{
lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_261_; 
lean_inc(v_val_226_);
v_isSharedCheck_261_ = !lean_is_exclusive(v_attrs_x3f_225_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; 
v_unused_262_ = lean_ctor_get(v_attrs_x3f_225_, 0);
lean_dec(v_unused_262_);
v___x_250_ = v_attrs_x3f_225_;
v_isShared_251_ = v_isSharedCheck_261_;
goto v_resetjp_249_;
}
else
{
lean_dec(v_attrs_x3f_225_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_261_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_253_; size_t v_sz_254_; size_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_252_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__2));
v___x_253_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_226_);
lean_dec(v_val_226_);
v_sz_254_ = lean_array_size(v___x_253_);
v___x_255_ = ((size_t)0ULL);
v___x_256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__1(v___x_246_, v_sz_254_, v___x_255_, v___x_253_);
v___x_257_ = l_Lean_Syntax_SepArray_ofElems(v___x_252_, v___x_256_);
lean_dec_ref(v___x_256_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 0, v___x_257_);
v___x_259_ = v___x_250_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__2));
v___x_271_ = l_String_toRawSubstring_x27(v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(lean_object* v_x_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_312_; lean_object* v_prec_x3f_318_; lean_object* v___y_319_; lean_object* v___y_320_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
lean_inc(v_x_302_);
v___x_342_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12));
lean_inc(v_x_302_);
v___x_344_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_345_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_346_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; 
lean_dec(v_x_302_);
v___x_347_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_347_;
}
else
{
lean_object* v___x_348_; 
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v_x_302_);
lean_ctor_set(v___x_348_, 1, v_a_304_);
return v___x_348_;
}
}
else
{
lean_object* v_ref_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_ref_349_ = lean_ctor_get(v_a_303_, 5);
v___x_350_ = l_Lean_SourceInfo_fromRef(v_ref_349_, v___x_342_);
v___x_351_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__16));
v___x_352_ = l_Lean_Syntax_node1(v___x_350_, v___x_351_, v_x_302_);
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v_a_304_);
return v___x_353_;
}
}
else
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = l_Lean_Syntax_getArg(v_x_302_, v___x_354_);
v___x_356_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
v___x_357_ = l_Lean_Syntax_isOfKind(v___x_355_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_359_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
lean_dec(v_x_302_);
v___x_360_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_360_;
}
else
{
lean_object* v___x_361_; 
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_x_302_);
lean_ctor_set(v___x_361_, 1, v_a_304_);
return v___x_361_;
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = l_Lean_Syntax_getArg(v_x_302_, v___x_362_);
v___x_364_ = l_Lean_Syntax_isNone(v___x_363_);
if (v___x_364_ == 0)
{
uint8_t v___x_365_; 
lean_inc(v___x_363_);
v___x_365_ = l_Lean_Syntax_matchesNull(v___x_363_, v___x_362_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; uint8_t v___x_367_; 
lean_dec(v___x_363_);
v___x_366_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_367_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
lean_dec(v_x_302_);
v___x_368_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_368_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_x_302_);
lean_ctor_set(v___x_369_, 1, v_a_304_);
return v___x_369_;
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_370_ = l_Lean_Syntax_getArg(v___x_363_, v___x_354_);
lean_dec(v___x_363_);
v___x_371_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
lean_inc(v___x_370_);
v___x_372_ = l_Lean_Syntax_isOfKind(v___x_370_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; uint8_t v___x_374_; 
lean_dec(v___x_370_);
v___x_373_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
lean_inc(v_x_302_);
v___x_374_ = l_Lean_Syntax_isOfKind(v_x_302_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v_x_302_);
v___x_375_ = l_Lean_Macro_throwUnsupported___redArg(v_a_304_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; 
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v_x_302_);
lean_ctor_set(v___x_376_, 1, v_a_304_);
return v___x_376_;
}
}
else
{
lean_object* v_prec_x3f_377_; lean_object* v___x_378_; 
lean_dec(v_x_302_);
v_prec_x3f_377_ = l_Lean_Syntax_getArg(v___x_370_, v___x_362_);
lean_dec(v___x_370_);
v___x_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_378_, 0, v_prec_x3f_377_);
v_prec_x3f_318_ = v___x_378_;
v___y_319_ = v_a_303_;
v___y_320_ = v_a_304_;
goto v___jp_317_;
}
}
}
else
{
lean_object* v___x_379_; 
lean_dec(v___x_363_);
lean_dec(v_x_302_);
v___x_379_ = lean_box(0);
v_prec_x3f_318_ = v___x_379_;
v___y_319_ = v_a_303_;
v___y_320_ = v_a_304_;
goto v___jp_317_;
}
}
}
v___jp_305_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_inc_ref(v___y_308_);
v___x_313_ = l_Array_append___redArg(v___y_308_, v___y_312_);
lean_dec_ref(v___y_312_);
lean_inc(v___y_307_);
lean_inc(v___y_311_);
v___x_314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_314_, 0, v___y_311_);
lean_ctor_set(v___x_314_, 1, v___y_307_);
lean_ctor_set(v___x_314_, 2, v___x_313_);
lean_inc(v___y_309_);
v___x_315_ = l_Lean_Syntax_node2(v___y_311_, v___y_309_, v___y_306_, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___y_310_);
return v___x_316_;
}
v___jp_317_:
{
lean_object* v_quotContext_321_; lean_object* v_currMacroScope_322_; lean_object* v_ref_323_; uint8_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_quotContext_321_ = lean_ctor_get(v___y_319_, 1);
v_currMacroScope_322_ = lean_ctor_get(v___y_319_, 2);
v_ref_323_ = lean_ctor_get(v___y_319_, 5);
v___x_324_ = 0;
v___x_325_ = l_Lean_SourceInfo_fromRef(v_ref_323_, v___x_324_);
v___x_326_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__2));
v___x_327_ = lean_obj_once(&l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3, &l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3_once, _init_l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__3);
v___x_328_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
lean_inc(v_currMacroScope_322_);
lean_inc(v_quotContext_321_);
v___x_329_ = l_Lean_addMacroScope(v_quotContext_321_, v___x_328_, v_currMacroScope_322_);
v___x_330_ = lean_box(0);
lean_inc(v___x_325_);
v___x_331_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_331_, 0, v___x_325_);
lean_ctor_set(v___x_331_, 1, v___x_327_);
lean_ctor_set(v___x_331_, 2, v___x_329_);
lean_ctor_set(v___x_331_, 3, v___x_330_);
v___x_332_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_333_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
if (lean_obj_tag(v_prec_x3f_318_) == 1)
{
lean_object* v_val_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_val_334_ = lean_ctor_get(v_prec_x3f_318_, 0);
lean_inc(v_val_334_);
lean_dec_ref_known(v_prec_x3f_318_, 1);
v___x_335_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
v___x_336_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
lean_inc_n(v___x_325_, 2);
v___x_337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_325_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v___x_338_ = l_Lean_Syntax_node2(v___x_325_, v___x_335_, v___x_337_, v_val_334_);
v___x_339_ = l_Array_mkArray1___redArg(v___x_338_);
v___y_306_ = v___x_331_;
v___y_307_ = v___x_332_;
v___y_308_ = v___x_333_;
v___y_309_ = v___x_326_;
v___y_310_ = v___y_320_;
v___y_311_ = v___x_325_;
v___y_312_ = v___x_339_;
goto v___jp_305_;
}
else
{
lean_object* v___x_340_; 
lean_dec(v_prec_x3f_318_);
v___x_340_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_306_ = v___x_331_;
v___y_307_ = v___x_332_;
v___y_308_ = v___x_333_;
v___y_309_ = v___x_326_;
v___y_310_ = v___y_320_;
v___y_311_ = v___x_325_;
v___y_312_ = v___x_340_;
goto v___jp_305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___boxed(lean_object* v_x_380_, lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(v_x_380_, v_a_381_, v_a_382_);
lean_dec_ref(v_a_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(lean_object* v_stx_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_k_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
lean_inc(v_stx_384_);
v_k_386_ = l_Lean_Syntax_getKind(v_stx_384_);
v___x_387_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
v___x_388_ = lean_name_eq(v_k_386_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__12));
v___x_390_ = lean_name_eq(v_k_386_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__14));
v___x_392_ = lean_name_eq(v_k_386_, v___x_391_);
lean_dec(v_k_386_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
lean_dec(v_stx_384_);
v___x_393_ = l_Lean_Macro_throwUnsupported___redArg(v_a_385_);
return v___x_393_;
}
else
{
lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_394_ = lean_unsigned_to_nat(4u);
v___x_395_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_394_);
v___x_396_ = l_Lean_Syntax_isNone(v___x_395_);
lean_dec(v___x_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = lean_unsigned_to_nat(3u);
v___x_398_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_397_);
lean_dec(v_stx_384_);
v___x_399_ = l_Lean_Elab_Command_strLitToPattern___redArg(v___x_398_, v_a_385_);
lean_dec(v___x_398_);
return v___x_399_;
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_400_);
lean_dec(v_stx_384_);
v___x_402_ = l_Lean_Elab_Command_strLitToPattern___redArg(v___x_401_, v_a_385_);
lean_dec(v___x_401_);
return v___x_402_;
}
}
}
else
{
lean_object* v___x_403_; 
lean_dec(v_k_386_);
v___x_403_ = l_Lean_Elab_Command_strLitToPattern___redArg(v_stx_384_, v_a_385_);
lean_dec(v_stx_384_);
return v___x_403_;
}
}
else
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec(v_k_386_);
v___x_404_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = l_Lean_Syntax_getArg(v_stx_384_, v___x_405_);
lean_dec(v_stx_384_);
v___x_407_ = lean_box(0);
v___x_408_ = l_Lean_Syntax_mkAntiquotNode(v___x_404_, v___x_406_, v___x_405_, v___x_407_, v___x_388_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v_a_385_);
return v___x_409_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern(lean_object* v_stx_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(v_stx_410_, v_a_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_expandNotationItemIntoPattern___boxed(lean_object* v_stx_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Elab_Command_expandNotationItemIntoPattern(v_stx_414_, v_a_415_, v_a_416_);
lean_dec_ref(v_a_415_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux(lean_object* v_parens_418_, lean_object* v_body_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lean_Syntax_getHeadInfo(v_parens_418_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v_leading_421_; lean_object* v___x_422_; 
v_leading_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc_ref(v_leading_421_);
lean_dec_ref_known(v___x_420_, 4);
v___x_422_ = l_Lean_Syntax_getHeadInfo(v_body_419_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_pos_423_; lean_object* v_trailing_424_; lean_object* v_endPos_425_; lean_object* v___x_426_; 
v_pos_423_ = lean_ctor_get(v___x_422_, 1);
lean_inc(v_pos_423_);
v_trailing_424_ = lean_ctor_get(v___x_422_, 2);
lean_inc_ref(v_trailing_424_);
v_endPos_425_ = lean_ctor_get(v___x_422_, 3);
lean_inc(v_endPos_425_);
lean_dec_ref_known(v___x_422_, 4);
v___x_426_ = l_Lean_Syntax_getTailInfo(v_body_419_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_leading_427_; lean_object* v_pos_428_; lean_object* v_endPos_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_450_; 
v_leading_427_ = lean_ctor_get(v___x_426_, 0);
v_pos_428_ = lean_ctor_get(v___x_426_, 1);
v_endPos_429_ = lean_ctor_get(v___x_426_, 3);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v___x_426_, 2);
lean_dec(v_unused_451_);
v___x_431_ = v___x_426_;
v_isShared_432_ = v_isSharedCheck_450_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_endPos_429_);
lean_inc(v_pos_428_);
lean_inc(v_leading_427_);
lean_dec(v___x_426_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_450_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lean_Syntax_getTailInfo(v_parens_418_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_trailing_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_446_; 
v_trailing_434_ = lean_ctor_get(v___x_433_, 2);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; lean_object* v_unused_448_; lean_object* v_unused_449_; 
v_unused_447_ = lean_ctor_get(v___x_433_, 3);
lean_dec(v_unused_447_);
v_unused_448_ = lean_ctor_get(v___x_433_, 1);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v___x_433_, 0);
lean_dec(v_unused_449_);
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_trailing_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 3, v_endPos_425_);
lean_ctor_set(v___x_436_, 2, v_trailing_424_);
lean_ctor_set(v___x_436_, 1, v_pos_423_);
lean_ctor_set(v___x_436_, 0, v_leading_421_);
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_leading_421_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_pos_423_);
lean_ctor_set(v_reuseFailAlloc_445_, 2, v_trailing_424_);
lean_ctor_set(v_reuseFailAlloc_445_, 3, v_endPos_425_);
v___x_439_ = v_reuseFailAlloc_445_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_440_ = l_Lean_Syntax_setHeadInfo(v_body_419_, v___x_439_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 2, v_trailing_434_);
v___x_442_ = v___x_431_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_leading_427_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_pos_428_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_trailing_434_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v_endPos_429_);
v___x_442_ = v_reuseFailAlloc_444_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_Syntax_setTailInfo(v___x_440_, v___x_442_);
return v___x_443_;
}
}
}
}
else
{
lean_dec(v___x_433_);
lean_del_object(v___x_431_);
lean_dec(v_endPos_429_);
lean_dec(v_pos_428_);
lean_dec_ref(v_leading_427_);
lean_dec(v_endPos_425_);
lean_dec_ref(v_trailing_424_);
lean_dec(v_pos_423_);
lean_dec_ref(v_leading_421_);
return v_body_419_;
}
}
}
else
{
lean_dec(v___x_426_);
lean_dec(v_endPos_425_);
lean_dec_ref(v_trailing_424_);
lean_dec(v_pos_423_);
lean_dec_ref(v_leading_421_);
return v_body_419_;
}
}
else
{
lean_dec(v___x_422_);
lean_dec_ref(v_leading_421_);
return v_body_419_;
}
}
else
{
lean_dec(v___x_420_);
return v_body_419_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParenthesesAux___boxed(lean_object* v_parens_452_, lean_object* v_body_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_Command_removeParenthesesAux(v_parens_452_, v_body_453_);
lean_dec(v_parens_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses(lean_object* v_stx_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__1));
lean_inc(v_stx_470_);
v___x_474_ = l_Lean_Syntax_isOfKind(v_stx_470_, v___x_473_);
if (v___x_474_ == 0)
{
if (lean_obj_tag(v_stx_470_) == 1)
{
lean_object* v_info_475_; lean_object* v_kind_476_; lean_object* v_args_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_505_; 
v_info_475_ = lean_ctor_get(v_stx_470_, 0);
v_kind_476_ = lean_ctor_get(v_stx_470_, 1);
v_args_477_ = lean_ctor_get(v_stx_470_, 2);
v_isSharedCheck_505_ = !lean_is_exclusive(v_stx_470_);
if (v_isSharedCheck_505_ == 0)
{
v___x_479_ = v_stx_470_;
v_isShared_480_ = v_isSharedCheck_505_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_args_477_);
lean_inc(v_kind_476_);
lean_inc(v_info_475_);
lean_dec(v_stx_470_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_505_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
size_t v_sz_481_; size_t v___x_482_; lean_object* v___x_483_; 
v_sz_481_ = lean_array_size(v_args_477_);
v___x_482_ = ((size_t)0ULL);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_481_, v___x_482_, v_args_477_, v_a_471_, v_a_472_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_495_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_a_485_ = lean_ctor_get(v___x_483_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_495_ == 0)
{
v___x_487_ = v___x_483_;
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 2, v_a_484_);
v___x_490_ = v___x_479_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_info_475_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_kind_476_);
lean_ctor_set(v_reuseFailAlloc_494_, 2, v_a_484_);
v___x_490_ = v_reuseFailAlloc_494_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_492_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_490_);
v___x_492_ = v___x_487_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_a_485_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
else
{
lean_object* v_a_496_; lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_del_object(v___x_479_);
lean_dec(v_kind_476_);
lean_dec(v_info_475_);
v_a_496_ = lean_ctor_get(v___x_483_, 0);
v_a_497_ = lean_ctor_get(v___x_483_, 1);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_483_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_inc(v_a_496_);
lean_dec(v___x_483_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_496_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
else
{
lean_object* v___x_506_; 
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v_stx_470_);
lean_ctor_set(v___x_506_, 1, v_a_472_);
return v___x_506_;
}
}
else
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = l_Lean_Syntax_getArg(v_stx_470_, v___x_507_);
v___x_509_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__3));
lean_inc(v___x_508_);
v___x_510_ = l_Lean_Syntax_isOfKind(v___x_508_, v___x_509_);
if (v___x_510_ == 0)
{
lean_dec(v___x_508_);
if (lean_obj_tag(v_stx_470_) == 1)
{
lean_object* v_info_511_; lean_object* v_kind_512_; lean_object* v_args_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_541_; 
v_info_511_ = lean_ctor_get(v_stx_470_, 0);
v_kind_512_ = lean_ctor_get(v_stx_470_, 1);
v_args_513_ = lean_ctor_get(v_stx_470_, 2);
v_isSharedCheck_541_ = !lean_is_exclusive(v_stx_470_);
if (v_isSharedCheck_541_ == 0)
{
v___x_515_ = v_stx_470_;
v_isShared_516_ = v_isSharedCheck_541_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_args_513_);
lean_inc(v_kind_512_);
lean_inc(v_info_511_);
lean_dec(v_stx_470_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_541_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
size_t v_sz_517_; size_t v___x_518_; lean_object* v___x_519_; 
v_sz_517_ = lean_array_size(v_args_513_);
v___x_518_ = ((size_t)0ULL);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_517_, v___x_518_, v_args_513_, v_a_471_, v_a_472_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_531_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
v_a_521_ = lean_ctor_get(v___x_519_, 1);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_531_ == 0)
{
v___x_523_ = v___x_519_;
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_inc(v_a_520_);
lean_dec(v___x_519_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 2, v_a_520_);
v___x_526_ = v___x_515_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_info_511_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_kind_512_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_a_520_);
v___x_526_ = v_reuseFailAlloc_530_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_528_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_526_);
v___x_528_ = v___x_523_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_a_521_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
else
{
lean_object* v_a_532_; lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
lean_del_object(v___x_515_);
lean_dec(v_kind_512_);
lean_dec(v_info_511_);
v_a_532_ = lean_ctor_get(v___x_519_, 0);
v_a_533_ = lean_ctor_get(v___x_519_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_519_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_inc(v_a_532_);
lean_dec(v___x_519_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_532_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
else
{
lean_object* v___x_542_; 
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v_stx_470_);
lean_ctor_set(v___x_542_, 1, v_a_472_);
return v___x_542_;
}
}
else
{
lean_object* v___x_543_; lean_object* v_h_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_543_ = lean_unsigned_to_nat(1u);
v_h_544_ = l_Lean_Syntax_getArg(v___x_508_, v___x_543_);
lean_dec(v___x_508_);
v___x_545_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__5));
lean_inc(v_h_544_);
v___x_546_ = l_Lean_Syntax_isOfKind(v_h_544_, v___x_545_);
if (v___x_546_ == 0)
{
lean_dec(v_h_544_);
if (lean_obj_tag(v_stx_470_) == 1)
{
lean_object* v_info_547_; lean_object* v_kind_548_; lean_object* v_args_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_577_; 
v_info_547_ = lean_ctor_get(v_stx_470_, 0);
v_kind_548_ = lean_ctor_get(v_stx_470_, 1);
v_args_549_ = lean_ctor_get(v_stx_470_, 2);
v_isSharedCheck_577_ = !lean_is_exclusive(v_stx_470_);
if (v_isSharedCheck_577_ == 0)
{
v___x_551_ = v_stx_470_;
v_isShared_552_ = v_isSharedCheck_577_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_args_549_);
lean_inc(v_kind_548_);
lean_inc(v_info_547_);
lean_dec(v_stx_470_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_577_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
size_t v_sz_553_; size_t v___x_554_; lean_object* v___x_555_; 
v_sz_553_ = lean_array_size(v_args_549_);
v___x_554_ = ((size_t)0ULL);
v___x_555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_553_, v___x_554_, v_args_549_, v_a_471_, v_a_472_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_567_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
v_a_557_ = lean_ctor_get(v___x_555_, 1);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_567_ == 0)
{
v___x_559_ = v___x_555_;
v_isShared_560_ = v_isSharedCheck_567_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_inc(v_a_556_);
lean_dec(v___x_555_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_567_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 2, v_a_556_);
v___x_562_ = v___x_551_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_info_547_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_kind_548_);
lean_ctor_set(v_reuseFailAlloc_566_, 2, v_a_556_);
v___x_562_ = v_reuseFailAlloc_566_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_564_; 
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_562_);
v___x_564_ = v___x_559_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_a_557_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v_a_568_; lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_del_object(v___x_551_);
lean_dec(v_kind_548_);
lean_dec(v_info_547_);
v_a_568_ = lean_ctor_get(v___x_555_, 0);
v_a_569_ = lean_ctor_get(v___x_555_, 1);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_555_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_inc(v_a_568_);
lean_dec(v___x_555_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_568_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
else
{
lean_object* v___x_578_; 
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v_stx_470_);
lean_ctor_set(v___x_578_, 1, v_a_472_);
return v___x_578_;
}
}
else
{
lean_object* v_e_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_e_579_ = l_Lean_Syntax_getArg(v_stx_470_, v___x_543_);
v___x_580_ = l_Lean_TSyntax_getHygieneInfo(v_h_544_);
lean_dec(v_h_544_);
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_inc(v_e_579_);
v___x_582_ = l_Lean_Elab_Term_expandCDot_x3f(v_e_579_, v___x_581_, v_a_471_, v_a_472_);
lean_dec_ref_known(v___x_581_, 1);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v_a_584_; lean_object* v___y_586_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
v_a_584_ = lean_ctor_get(v___x_582_, 1);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_582_, 2);
if (lean_obj_tag(v_a_583_) == 0)
{
v___y_586_ = v_e_579_;
goto v___jp_585_;
}
else
{
lean_object* v_val_598_; 
lean_dec(v_e_579_);
v_val_598_ = lean_ctor_get(v_a_583_, 0);
lean_inc(v_val_598_);
lean_dec_ref_known(v_a_583_, 1);
v___y_586_ = v_val_598_;
goto v___jp_585_;
}
v___jp_585_:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Elab_Command_removeParentheses(v___y_586_, v_a_471_, v_a_584_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_597_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_a_589_ = lean_ctor_get(v___x_587_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_597_ == 0)
{
v___x_591_ = v___x_587_;
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; lean_object* v___x_595_; 
v___x_593_ = l_Lean_Elab_Command_removeParenthesesAux(v_stx_470_, v_a_588_);
lean_dec(v_stx_470_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v___x_593_);
v___x_595_ = v___x_591_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_593_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_a_589_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
else
{
lean_dec(v_stx_470_);
return v___x_587_;
}
}
}
else
{
lean_object* v_a_599_; lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
lean_dec(v_e_579_);
lean_dec(v_stx_470_);
v_a_599_ = lean_ctor_get(v___x_582_, 0);
v_a_600_ = lean_ctor_get(v___x_582_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_582_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_inc(v_a_599_);
lean_dec(v___x_582_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_599_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(size_t v_sz_608_, size_t v_i_609_, lean_object* v_bs_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
uint8_t v___x_613_; 
v___x_613_ = lean_usize_dec_lt(v_i_609_, v_sz_608_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; 
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v_bs_610_);
lean_ctor_set(v___x_614_, 1, v___y_612_);
return v___x_614_;
}
else
{
lean_object* v_v_615_; lean_object* v___x_616_; 
v_v_615_ = lean_array_uget_borrowed(v_bs_610_, v_i_609_);
lean_inc(v_v_615_);
v___x_616_ = l_Lean_Elab_Command_removeParentheses(v_v_615_, v___y_611_, v___y_612_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; lean_object* v_a_618_; lean_object* v___x_619_; lean_object* v_bs_x27_620_; size_t v___x_621_; size_t v___x_622_; lean_object* v___x_623_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
v_a_618_ = lean_ctor_get(v___x_616_, 1);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_616_, 2);
v___x_619_ = lean_unsigned_to_nat(0u);
v_bs_x27_620_ = lean_array_uset(v_bs_610_, v_i_609_, v___x_619_);
v___x_621_ = ((size_t)1ULL);
v___x_622_ = lean_usize_add(v_i_609_, v___x_621_);
v___x_623_ = lean_array_uset(v_bs_x27_620_, v_i_609_, v_a_617_);
v_i_609_ = v___x_622_;
v_bs_610_ = v___x_623_;
v___y_612_ = v_a_618_;
goto _start;
}
else
{
lean_object* v_a_625_; lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec_ref(v_bs_610_);
v_a_625_ = lean_ctor_get(v___x_616_, 0);
v_a_626_ = lean_ctor_get(v___x_616_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_616_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_inc(v_a_625_);
lean_dec(v___x_616_);
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
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_625_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_a_626_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0___boxed(lean_object* v_sz_634_, lean_object* v_i_635_, lean_object* v_bs_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
size_t v_sz_boxed_639_; size_t v_i_boxed_640_; lean_object* v_res_641_; 
v_sz_boxed_639_ = lean_unbox_usize(v_sz_634_);
lean_dec(v_sz_634_);
v_i_boxed_640_ = lean_unbox_usize(v_i_635_);
lean_dec(v_i_635_);
v_res_641_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_boxed_639_, v_i_boxed_640_, v_bs_636_, v___y_637_, v___y_638_);
lean_dec_ref(v___y_637_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_removeParentheses___boxed(lean_object* v_stx_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_Elab_Command_removeParentheses(v_stx_642_, v_a_643_, v_a_644_);
lean_dec_ref(v_a_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(lean_object* v___x_649_, uint8_t v_firstChoiceOnly_650_, lean_object* v_stx_651_, lean_object* v_b_652_){
_start:
{
lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v_snd_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_701_; 
v_snd_665_ = lean_ctor_get(v_b_652_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_b_652_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; 
v_unused_702_ = lean_ctor_get(v_b_652_, 0);
lean_dec(v_unused_702_);
v___x_667_ = v_b_652_;
v_isShared_668_ = v_isSharedCheck_701_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_snd_665_);
lean_dec(v_b_652_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_701_;
goto v_resetjp_666_;
}
v___jp_653_:
{
lean_object* v___x_656_; lean_object* v___x_657_; size_t v_sz_658_; size_t v___x_659_; lean_object* v___x_660_; lean_object* v_fst_661_; 
v___x_656_ = lean_box(0);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v___y_655_);
v_sz_658_ = lean_array_size(v___y_654_);
v___x_659_ = ((size_t)0ULL);
v___x_660_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(v___x_649_, v_firstChoiceOnly_650_, v___y_654_, v_sz_658_, v___x_659_, v___x_657_);
v_fst_661_ = lean_ctor_get(v___x_660_, 0);
if (lean_obj_tag(v_fst_661_) == 0)
{
lean_object* v_snd_662_; lean_object* v___x_663_; 
v_snd_662_ = lean_ctor_get(v___x_660_, 1);
lean_inc(v_snd_662_);
lean_dec_ref(v___x_660_);
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v_snd_662_);
return v___x_663_;
}
else
{
lean_object* v_val_664_; 
lean_inc_ref(v_fst_661_);
lean_dec_ref(v___x_660_);
v_val_664_ = lean_ctor_get(v_fst_661_, 0);
lean_inc(v_val_664_);
lean_dec_ref_known(v_fst_661_, 1);
return v_val_664_;
}
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___y_672_; lean_object* v_a_673_; uint8_t v___x_682_; 
v___x_669_ = lean_box(0);
v___x_670_ = lean_box(0);
v___x_682_ = l_Lean_Syntax_isAntiquot(v_stx_651_);
if (v___x_682_ == 0)
{
lean_object* v___x_684_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_669_);
v___x_684_ = v___x_667_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_snd_665_);
v___x_684_ = v_reuseFailAlloc_686_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; 
lean_inc_ref(v___x_684_);
v___x_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
v___y_672_ = v___x_685_;
v_a_673_ = v___x_684_;
goto v___jp_671_;
}
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_687_ = l_Lean_Syntax_getAntiquotTerm(v_stx_651_);
v___x_688_ = l_Lean_Syntax_getId(v___x_687_);
lean_dec(v___x_687_);
v___x_689_ = l_Lean_NameSet_contains(v_snd_665_, v___x_688_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = l_Lean_NameSet_insert(v_snd_665_, v___x_688_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 1, v___x_690_);
lean_ctor_set(v___x_667_, 0, v___x_669_);
v___x_692_ = v___x_667_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_690_);
v___x_692_ = v_reuseFailAlloc_694_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_693_; 
lean_inc_ref(v___x_692_);
v___x_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
v___y_672_ = v___x_693_;
v_a_673_ = v___x_692_;
goto v___jp_671_;
}
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
lean_dec(v___x_688_);
v___x_695_ = lean_box(v___x_689_);
v___x_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_696_);
v___x_698_ = v___x_667_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_696_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_snd_665_);
v___x_698_ = v_reuseFailAlloc_700_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
lean_object* v___x_699_; 
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
v___jp_671_:
{
if (lean_obj_tag(v_stx_651_) == 1)
{
lean_dec_ref(v___y_672_);
if (v_firstChoiceOnly_650_ == 0)
{
lean_object* v_args_674_; 
v_args_674_ = lean_ctor_get(v_stx_651_, 2);
v___y_654_ = v_args_674_;
v___y_655_ = v_a_673_;
goto v___jp_653_;
}
else
{
lean_object* v_kind_675_; lean_object* v_args_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v_kind_675_ = lean_ctor_get(v_stx_651_, 1);
v_args_676_ = lean_ctor_get(v_stx_651_, 2);
v___x_677_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___closed__1));
v___x_678_ = lean_name_eq(v_kind_675_, v___x_677_);
if (v___x_678_ == 0)
{
v___y_654_ = v_args_676_;
v___y_655_ = v_a_673_;
goto v___jp_653_;
}
else
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_unsigned_to_nat(0u);
v___x_680_ = lean_array_get_borrowed(v___x_670_, v_args_676_, v___x_679_);
v_stx_651_ = v___x_680_;
v_b_652_ = v_a_673_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_a_673_);
return v___y_672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(lean_object* v___x_703_, uint8_t v_firstChoiceOnly_704_, lean_object* v_as_705_, size_t v_sz_706_, size_t v_i_707_, lean_object* v_b_708_){
_start:
{
uint8_t v___x_709_; 
v___x_709_ = lean_usize_dec_lt(v_i_707_, v_sz_706_);
if (v___x_709_ == 0)
{
return v_b_708_;
}
else
{
lean_object* v_snd_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_728_; 
v_snd_710_ = lean_ctor_get(v_b_708_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v_b_708_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; 
v_unused_729_ = lean_ctor_get(v_b_708_, 0);
lean_dec(v_unused_729_);
v___x_712_ = v_b_708_;
v_isShared_713_ = v_isSharedCheck_728_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_snd_710_);
lean_dec(v_b_708_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_728_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v_a_714_; lean_object* v___x_715_; 
v_a_714_ = lean_array_uget_borrowed(v_as_705_, v_i_707_);
lean_inc(v_snd_710_);
v___x_715_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_703_, v_firstChoiceOnly_704_, v_a_714_, v_snd_710_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_716_);
v___x_718_ = v___x_712_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_snd_710_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_721_; lean_object* v___x_723_; 
lean_dec(v_snd_710_);
v_a_720_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_715_, 1);
v___x_721_ = lean_box(0);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 1, v_a_720_);
lean_ctor_set(v___x_712_, 0, v___x_721_);
v___x_723_ = v___x_712_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_721_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_a_720_);
v___x_723_ = v_reuseFailAlloc_727_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
size_t v___x_724_; size_t v___x_725_; 
v___x_724_ = ((size_t)1ULL);
v___x_725_ = lean_usize_add(v_i_707_, v___x_724_);
v_i_707_ = v___x_725_;
v_b_708_ = v___x_723_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0___boxed(lean_object* v___x_730_, lean_object* v_firstChoiceOnly_731_, lean_object* v_as_732_, lean_object* v_sz_733_, lean_object* v_i_734_, lean_object* v_b_735_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_736_; size_t v_sz_boxed_737_; size_t v_i_boxed_738_; lean_object* v_res_739_; 
v_firstChoiceOnly_boxed_736_ = lean_unbox(v_firstChoiceOnly_731_);
v_sz_boxed_737_ = lean_unbox_usize(v_sz_733_);
lean_dec(v_sz_733_);
v_i_boxed_738_ = lean_unbox_usize(v_i_734_);
lean_dec(v_i_734_);
v_res_739_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0_spec__0(v___x_730_, v_firstChoiceOnly_boxed_736_, v_as_732_, v_sz_boxed_737_, v_i_boxed_738_, v_b_735_);
lean_dec_ref(v_as_732_);
lean_dec_ref(v___x_730_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0___boxed(lean_object* v___x_740_, lean_object* v_firstChoiceOnly_741_, lean_object* v_stx_742_, lean_object* v_b_743_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_744_; lean_object* v_res_745_; 
v_firstChoiceOnly_boxed_744_ = lean_unbox(v_firstChoiceOnly_741_);
v_res_745_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_740_, v_firstChoiceOnly_boxed_744_, v_stx_742_, v_b_743_);
lean_dec(v_stx_742_);
lean_dec_ref(v___x_740_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(lean_object* v_as_746_, size_t v_sz_747_, size_t v_i_748_, lean_object* v_b_749_){
_start:
{
uint8_t v___x_750_; 
v___x_750_ = lean_usize_dec_lt(v_i_748_, v_sz_747_);
if (v___x_750_ == 0)
{
return v_b_749_;
}
else
{
lean_object* v_snd_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_789_; 
v_snd_751_ = lean_ctor_get(v_b_749_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_b_749_);
if (v_isSharedCheck_789_ == 0)
{
lean_object* v_unused_790_; 
v_unused_790_ = lean_ctor_get(v_b_749_, 0);
lean_dec(v_unused_790_);
v___x_753_ = v_b_749_;
v_isShared_754_ = v_isSharedCheck_789_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_snd_751_);
lean_dec(v_b_749_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_789_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_a_755_; lean_object* v___x_756_; uint8_t v_firstChoiceOnly_757_; lean_object* v_stx_758_; lean_object* v___x_759_; lean_object* v___y_761_; lean_object* v___x_785_; 
v_a_755_ = lean_array_uget_borrowed(v_as_746_, v_i_748_);
lean_inc(v_a_755_);
v___x_756_ = l_Lean_Syntax_topDown(v_a_755_, v___x_750_);
v_firstChoiceOnly_757_ = lean_ctor_get_uint8(v___x_756_, sizeof(void*)*1);
v_stx_758_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_stx_758_);
lean_dec_ref(v___x_756_);
v___x_759_ = lean_box(0);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 0, v___x_759_);
v___x_785_ = v___x_753_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_snd_751_);
v___x_785_ = v_reuseFailAlloc_788_;
goto v_reusejp_784_;
}
v___jp_760_:
{
lean_object* v_fst_762_; 
v_fst_762_ = lean_ctor_get(v___y_761_, 0);
if (lean_obj_tag(v_fst_762_) == 0)
{
lean_object* v_snd_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_773_; 
v_snd_763_ = lean_ctor_get(v___y_761_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v___y_761_);
if (v_isSharedCheck_773_ == 0)
{
lean_object* v_unused_774_; 
v_unused_774_ = lean_ctor_get(v___y_761_, 0);
lean_dec(v_unused_774_);
v___x_765_ = v___y_761_;
v_isShared_766_ = v_isSharedCheck_773_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_snd_763_);
lean_dec(v___y_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_773_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_759_);
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_759_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_snd_763_);
v___x_768_ = v_reuseFailAlloc_772_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
size_t v___x_769_; size_t v___x_770_; 
v___x_769_ = ((size_t)1ULL);
v___x_770_ = lean_usize_add(v_i_748_, v___x_769_);
v_i_748_ = v___x_770_;
v_b_749_ = v___x_768_;
goto _start;
}
}
}
else
{
lean_object* v_snd_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_inc_ref(v_fst_762_);
v_snd_775_ = lean_ctor_get(v___y_761_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v___y_761_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; 
v_unused_783_ = lean_ctor_get(v___y_761_, 0);
lean_dec(v_unused_783_);
v___x_777_ = v___y_761_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_snd_775_);
lean_dec(v___y_761_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_fst_762_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_snd_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
v_reusejp_784_:
{
lean_object* v___x_786_; lean_object* v_a_787_; 
lean_inc_ref(v___x_785_);
v___x_786_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__0(v___x_785_, v_firstChoiceOnly_757_, v_stx_758_, v___x_785_);
lean_dec(v_stx_758_);
lean_dec_ref(v___x_785_);
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
lean_dec_ref(v___x_786_);
v___y_761_ = v_a_787_;
goto v___jp_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1___boxed(lean_object* v_as_791_, lean_object* v_sz_792_, lean_object* v_i_793_, lean_object* v_b_794_){
_start:
{
size_t v_sz_boxed_795_; size_t v_i_boxed_796_; lean_object* v_res_797_; 
v_sz_boxed_795_ = lean_unbox_usize(v_sz_792_);
lean_dec(v_sz_792_);
v_i_boxed_796_ = lean_unbox_usize(v_i_793_);
lean_dec(v_i_793_);
v_res_797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(v_as_791_, v_sz_boxed_795_, v_i_boxed_796_, v_b_794_);
lean_dec_ref(v_as_791_);
return v_res_797_;
}
}
static lean_object* _init_l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0(void){
_start:
{
lean_object* v_seen_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_seen_798_ = l_Lean_NameSet_empty;
v___x_799_ = lean_box(0);
v___x_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
lean_ctor_set(v___x_800_, 1, v_seen_798_);
return v___x_800_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Command_hasDuplicateAntiquot(lean_object* v_stxs_801_){
_start:
{
lean_object* v___x_802_; size_t v_sz_803_; size_t v___x_804_; lean_object* v___x_805_; lean_object* v_fst_806_; 
v___x_802_ = lean_obj_once(&l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0, &l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0_once, _init_l_Lean_Elab_Command_hasDuplicateAntiquot___closed__0);
v_sz_803_ = lean_array_size(v_stxs_801_);
v___x_804_ = ((size_t)0ULL);
v___x_805_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_hasDuplicateAntiquot_spec__1(v_stxs_801_, v_sz_803_, v___x_804_, v___x_802_);
v_fst_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_fst_806_);
lean_dec_ref(v___x_805_);
if (lean_obj_tag(v_fst_806_) == 0)
{
uint8_t v___x_807_; 
v___x_807_ = 0;
return v___x_807_;
}
else
{
lean_object* v_val_808_; uint8_t v___x_809_; 
v_val_808_ = lean_ctor_get(v_fst_806_, 0);
lean_inc(v_val_808_);
lean_dec_ref_known(v_fst_806_, 1);
v___x_809_ = lean_unbox(v_val_808_);
lean_dec(v_val_808_);
return v___x_809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_hasDuplicateAntiquot___boxed(lean_object* v_stxs_810_){
_start:
{
uint8_t v_res_811_; lean_object* v_r_812_; 
v_res_811_ = l_Lean_Elab_Command_hasDuplicateAntiquot(v_stxs_810_);
lean_dec_ref(v_stxs_810_);
v_r_812_ = lean_box(v_res_811_);
return v_r_812_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__4(void){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__3));
v___x_820_ = l_String_toRawSubstring_x27(v___x_819_);
return v___x_820_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__15(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__14));
v___x_842_ = l_String_toRawSubstring_x27(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__19(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__18));
v___x_848_ = l_String_toRawSubstring_x27(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__22(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__21));
v___x_853_ = l_String_toRawSubstring_x27(v___x_852_);
return v___x_853_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__40(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__39));
v___x_891_ = l_String_toRawSubstring_x27(v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__47(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__46));
v___x_906_ = l_String_toRawSubstring_x27(v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_l_Lean_Elab_Command_mkUnexpander___closed__55(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_922_ = l_String_toRawSubstring_x27(v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander(lean_object* v_attrKind_960_, lean_object* v_pat_961_, lean_object* v_qrhs_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
lean_object* v___y_966_; lean_object* v_fst_970_; lean_object* v_snd_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
lean_inc(v_qrhs_962_);
v___x_1167_ = l_Lean_Syntax_isOfKind(v_qrhs_962_, v___x_1166_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1168_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_qrhs_962_);
v___x_1169_ = l_Lean_Syntax_isOfKind(v_qrhs_962_, v___x_1168_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_dec(v_qrhs_962_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v___x_1170_ = lean_box(0);
v___x_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set(v___x_1171_, 1, v_a_964_);
return v___x_1171_;
}
else
{
lean_object* v___x_1172_; 
v___x_1172_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__68));
v_fst_970_ = v_qrhs_962_;
v_snd_971_ = v___x_1172_;
v___y_972_ = v_a_963_;
v___y_973_ = v_a_964_;
goto v___jp_969_;
}
}
else
{
lean_object* v___x_1173_; lean_object* v_c_1174_; lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1173_ = lean_unsigned_to_nat(0u);
v_c_1174_ = l_Lean_Syntax_getArg(v_qrhs_962_, v___x_1173_);
v___x_1175_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__1));
lean_inc(v_c_1174_);
v___x_1176_ = l_Lean_Syntax_isOfKind(v_c_1174_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_dec(v_c_1174_);
lean_dec(v_qrhs_962_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v___x_1177_ = lean_box(0);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v_a_964_);
return v___x_1178_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_args_1181_; 
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = l_Lean_Syntax_getArg(v_qrhs_962_, v___x_1179_);
lean_dec(v_qrhs_962_);
v_args_1181_ = l_Lean_Syntax_getArgs(v___x_1180_);
lean_dec(v___x_1180_);
v_fst_970_ = v_c_1174_;
v_snd_971_ = v_args_1181_;
v___y_972_ = v_a_963_;
v___y_973_ = v_a_964_;
goto v___jp_969_;
}
}
v___jp_965_:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = lean_box(0);
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
lean_ctor_set(v___x_968_, 1, v___y_966_);
return v___x_968_;
}
v___jp_969_:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = l_Lean_TSyntax_getId(v_fst_970_);
lean_dec(v_fst_970_);
v___x_975_ = l_Lean_Macro_resolveGlobalName(v___x_974_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
if (lean_obj_tag(v_a_976_) == 1)
{
lean_object* v_head_977_; lean_object* v_snd_978_; 
v_head_977_ = lean_ctor_get(v_a_976_, 0);
lean_inc(v_head_977_);
v_snd_978_ = lean_ctor_get(v_head_977_, 1);
lean_inc(v_snd_978_);
if (lean_obj_tag(v_snd_978_) == 0)
{
lean_object* v_tail_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_1153_; 
v_tail_979_ = lean_ctor_get(v_a_976_, 1);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_a_976_);
if (v_isSharedCheck_1153_ == 0)
{
lean_object* v_unused_1154_; 
v_unused_1154_ = lean_ctor_get(v_a_976_, 0);
lean_dec(v_unused_1154_);
v___x_981_ = v_a_976_;
v_isShared_982_ = v_isSharedCheck_1153_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_tail_979_);
lean_dec(v_a_976_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_1153_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
if (lean_obj_tag(v_tail_979_) == 0)
{
lean_object* v_a_983_; lean_object* v_fst_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_1150_; 
v_a_983_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_975_, 2);
v_fst_984_ = lean_ctor_get(v_head_977_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_head_977_);
if (v_isSharedCheck_1150_ == 0)
{
lean_object* v_unused_1151_; 
v_unused_1151_ = lean_ctor_get(v_head_977_, 1);
lean_dec(v_unused_1151_);
v___x_986_ = v_head_977_;
v_isShared_987_ = v_isSharedCheck_1150_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_fst_984_);
lean_dec(v_head_977_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_1150_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
size_t v_sz_988_; size_t v___x_989_; lean_object* v___x_990_; 
v_sz_988_ = lean_array_size(v_snd_971_);
v___x_989_ = ((size_t)0ULL);
v___x_990_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_removeParentheses_spec__0(v_sz_988_, v___x_989_, v_snd_971_, v___y_972_, v_a_983_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1140_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_a_992_ = lean_ctor_get(v___x_990_, 1);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_994_ = v___x_990_;
v_isShared_995_ = v_isSharedCheck_1140_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1140_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
uint8_t v___x_996_; 
v___x_996_ = l_Lean_Elab_Command_hasDuplicateAntiquot(v_a_991_);
if (v___x_996_ == 0)
{
lean_object* v_quotContext_997_; lean_object* v_currMacroScope_998_; lean_object* v_ref_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1005_; 
v_quotContext_997_ = lean_ctor_get(v___y_972_, 1);
v_currMacroScope_998_ = lean_ctor_get(v___y_972_, 2);
v_ref_999_ = lean_ctor_get(v___y_972_, 5);
v___x_1000_ = l_Lean_SourceInfo_fromRef(v_ref_999_, v___x_996_);
v___x_1001_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__0));
v___x_1002_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__1));
v___x_1003_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__2));
lean_inc(v___x_1000_);
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 2);
lean_ctor_set(v___x_986_, 1, v___x_1003_);
lean_ctor_set(v___x_986_, 0, v___x_1000_);
v___x_1005_ = v___x_986_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1053_; 
v___x_1006_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_1007_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
lean_inc_n(v___x_1000_, 18);
v___x_1008_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1000_);
lean_ctor_set(v___x_1008_, 1, v___x_1006_);
lean_ctor_set(v___x_1008_, 2, v___x_1007_);
v___x_1009_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__4, &l_Lean_Elab_Command_mkUnexpander___closed__4_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__4);
v___x_1010_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__5));
lean_inc_n(v_currMacroScope_998_, 4);
lean_inc_n(v_quotContext_997_, 4);
v___x_1011_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1010_, v_currMacroScope_998_);
v___x_1012_ = lean_box(0);
v___x_1013_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1000_);
lean_ctor_set(v___x_1013_, 1, v___x_1009_);
lean_ctor_set(v___x_1013_, 2, v___x_1011_);
lean_ctor_set(v___x_1013_, 3, v___x_1012_);
v___x_1014_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__7));
v___x_1015_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
v___x_1016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1000_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1000_);
lean_ctor_set(v___x_1017_, 1, v___x_1001_);
lean_inc_ref(v___x_1016_);
v___x_1018_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1014_, v___x_1016_, v___x_1017_);
lean_inc_ref(v___x_1013_);
lean_inc_ref(v___x_1008_);
v___x_1019_ = l_Lean_Syntax_node4(v___x_1000_, v___x_1002_, v___x_1005_, v___x_1008_, v___x_1013_, v___x_1018_);
v___x_1020_ = l_Lean_Syntax_mkApp(v___x_1019_, v_a_991_);
lean_inc(v_attrKind_960_);
v___x_1021_ = l_Lean_Parser_Command_visibility_ofAttrKind(v_attrKind_960_);
v___x_1022_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__9));
v___x_1023_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__10));
v___x_1024_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__12));
v___x_1025_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__13));
v___x_1026_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1000_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__4));
v___x_1028_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__9));
v___x_1029_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__15, &l_Lean_Elab_Command_mkUnexpander___closed__15_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__15);
v___x_1030_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__16));
v___x_1031_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1030_, v_currMacroScope_998_);
v___x_1032_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1000_);
lean_ctor_set(v___x_1032_, 1, v___x_1029_);
lean_ctor_set(v___x_1032_, 2, v___x_1031_);
lean_ctor_set(v___x_1032_, 3, v___x_1012_);
v___x_1033_ = l_Lean_mkIdent(v_fst_984_);
lean_inc(v___x_1033_);
v___x_1034_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1033_);
v___x_1035_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1028_, v___x_1032_, v___x_1034_);
v___x_1036_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1027_, v_attrKind_960_, v___x_1035_);
v___x_1037_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1036_);
v___x_1038_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__17));
v___x_1039_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1000_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1024_, v___x_1026_, v___x_1037_, v___x_1039_);
v___x_1041_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1000_);
lean_ctor_set(v___x_1042_, 1, v___x_1022_);
v___x_1043_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__19, &l_Lean_Elab_Command_mkUnexpander___closed__19_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__19);
v___x_1044_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__20));
v___x_1045_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1044_, v_currMacroScope_998_);
v___x_1046_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1000_);
lean_ctor_set(v___x_1046_, 1, v___x_1043_);
lean_ctor_set(v___x_1046_, 2, v___x_1045_);
lean_ctor_set(v___x_1046_, 3, v___x_1012_);
v___x_1047_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1006_, v___x_1046_, v___x_1033_);
v___x_1048_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__22, &l_Lean_Elab_Command_mkUnexpander___closed__22_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__22);
v___x_1049_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__25));
v___x_1050_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1049_, v_currMacroScope_998_);
v___x_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set(v___x_1051_, 1, v_snd_978_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 1, v___x_1012_);
lean_ctor_set(v___x_981_, 0, v___x_1051_);
v___x_1053_ = v___x_981_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1051_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v___x_1012_);
v___x_1053_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1132_; 
lean_inc_n(v___x_1000_, 31);
v___x_1054_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1000_);
lean_ctor_set(v___x_1054_, 1, v___x_1048_);
lean_ctor_set(v___x_1054_, 2, v___x_1050_);
lean_ctor_set(v___x_1054_, 3, v___x_1053_);
v___x_1055_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_1056_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1000_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__27));
v___x_1058_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__28));
v___x_1059_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1000_);
lean_ctor_set(v___x_1059_, 1, v___x_1057_);
v___x_1060_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__30));
v___x_1061_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__32));
v___x_1062_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__33));
v___x_1063_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1000_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__35));
v___x_1065_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__36));
v___x_1066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1000_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_1068_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1000_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
lean_inc_ref_n(v___x_1068_, 2);
lean_inc_ref(v___x_1066_);
v___x_1069_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1064_, v___x_1066_, v___x_1020_, v___x_1068_);
v___x_1070_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1069_);
v___x_1071_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1070_);
v___x_1072_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__38));
v___x_1073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1000_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lean_Elab_Command_addInheritDocDefault___closed__1));
v___x_1075_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__40, &l_Lean_Elab_Command_mkUnexpander___closed__40_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__40);
v___x_1076_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__41));
lean_inc_n(v_currMacroScope_998_, 3);
lean_inc_n(v_quotContext_997_, 3);
v___x_1077_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1076_, v_currMacroScope_998_);
v___x_1078_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__42));
v___x_1079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
lean_ctor_set(v___x_1079_, 1, v_snd_978_);
v___x_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set(v___x_1080_, 1, v___x_1012_);
v___x_1081_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1000_);
lean_ctor_set(v___x_1081_, 1, v___x_1075_);
lean_ctor_set(v___x_1081_, 2, v___x_1077_);
lean_ctor_set(v___x_1081_, 3, v___x_1080_);
v___x_1082_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1064_, v___x_1066_, v_pat_961_, v___x_1068_);
v___x_1083_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1006_, v___x_1013_, v___x_1082_);
v___x_1084_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1074_, v___x_1081_, v___x_1083_);
lean_inc_ref(v___x_1073_);
lean_inc_ref(v___x_1063_);
v___x_1085_ = l_Lean_Syntax_node4(v___x_1000_, v___x_1061_, v___x_1063_, v___x_1071_, v___x_1073_, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__44));
v___x_1087_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__45));
v___x_1088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1000_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1086_, v___x_1088_);
v___x_1090_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1089_);
v___x_1091_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1090_);
v___x_1092_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__47, &l_Lean_Elab_Command_mkUnexpander___closed__47_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__47);
v___x_1093_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__48));
v___x_1094_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1093_, v_currMacroScope_998_);
v___x_1095_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__50));
v___x_1096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
lean_ctor_set(v___x_1096_, 1, v_snd_978_);
v___x_1097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1012_);
v___x_1098_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1000_);
lean_ctor_set(v___x_1098_, 1, v___x_1092_);
lean_ctor_set(v___x_1098_, 2, v___x_1094_);
lean_ctor_set(v___x_1098_, 3, v___x_1097_);
v___x_1099_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__52));
v___x_1100_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__3));
v___x_1101_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
v___x_1102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1000_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Lean_Elab_Command_removeParentheses___closed__5));
v___x_1104_ = lean_obj_once(&l_Lean_Elab_Command_mkUnexpander___closed__55, &l_Lean_Elab_Command_mkUnexpander___closed__55_once, _init_l_Lean_Elab_Command_mkUnexpander___closed__55);
v___x_1105_ = lean_box(0);
v___x_1106_ = l_Lean_addMacroScope(v_quotContext_997_, v___x_1105_, v_currMacroScope_998_);
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__67));
v___x_1108_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1000_);
lean_ctor_set(v___x_1108_, 1, v___x_1104_);
lean_ctor_set(v___x_1108_, 2, v___x_1106_);
lean_ctor_set(v___x_1108_, 3, v___x_1107_);
v___x_1109_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1103_, v___x_1108_);
v___x_1110_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1100_, v___x_1102_, v___x_1109_);
lean_inc_ref(v___x_1008_);
v___x_1111_ = l_Lean_Syntax_node3(v___x_1000_, v___x_1099_, v___x_1110_, v___x_1008_, v___x_1068_);
v___x_1112_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1006_, v___x_1111_);
v___x_1113_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1074_, v___x_1098_, v___x_1112_);
v___x_1114_ = l_Lean_Syntax_node4(v___x_1000_, v___x_1061_, v___x_1063_, v___x_1091_, v___x_1073_, v___x_1113_);
v___x_1115_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1006_, v___x_1085_, v___x_1114_);
v___x_1116_ = l_Lean_Syntax_node1(v___x_1000_, v___x_1060_, v___x_1115_);
v___x_1117_ = l_Lean_Syntax_node2(v___x_1000_, v___x_1058_, v___x_1059_, v___x_1116_);
v___x_1118_ = lean_unsigned_to_nat(9u);
v___x_1119_ = lean_mk_empty_array_with_capacity(v___x_1118_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1008_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1041_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1021_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1042_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1047_);
v___x_1125_ = lean_array_push(v___x_1124_, v___x_1016_);
v___x_1126_ = lean_array_push(v___x_1125_, v___x_1054_);
v___x_1127_ = lean_array_push(v___x_1126_, v___x_1056_);
v___x_1128_ = lean_array_push(v___x_1127_, v___x_1117_);
v___x_1129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1000_);
lean_ctor_set(v___x_1129_, 1, v___x_1023_);
lean_ctor_set(v___x_1129_, 2, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_1130_);
v___x_1132_ = v___x_994_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_a_992_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
lean_dec(v_a_991_);
lean_del_object(v___x_986_);
lean_dec(v_fst_984_);
lean_del_object(v___x_981_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v___x_1136_ = lean_box(0);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_1136_);
v___x_1138_ = v___x_994_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_a_992_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
else
{
lean_object* v_a_1141_; lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_del_object(v___x_986_);
lean_dec(v_fst_984_);
lean_del_object(v___x_981_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1141_ = lean_ctor_get(v___x_990_, 0);
v_a_1142_ = lean_ctor_get(v___x_990_, 1);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_990_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_inc(v_a_1141_);
lean_dec(v___x_990_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1141_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
else
{
lean_object* v_a_1152_; 
lean_del_object(v___x_981_);
lean_dec(v_tail_979_);
lean_dec(v_head_977_);
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1152_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_975_, 2);
v___y_966_ = v_a_1152_;
goto v___jp_965_;
}
}
}
else
{
lean_object* v_a_1155_; 
lean_dec(v_snd_978_);
lean_dec_ref_known(v_a_976_, 2);
lean_dec(v_head_977_);
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1155_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_975_, 2);
v___y_966_ = v_a_1155_;
goto v___jp_965_;
}
}
else
{
lean_object* v_a_1156_; 
lean_dec(v_a_976_);
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1156_ = lean_ctor_get(v___x_975_, 1);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_975_, 2);
v___y_966_ = v_a_1156_;
goto v___jp_965_;
}
}
else
{
lean_object* v_a_1157_; lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_dec_ref(v_snd_971_);
lean_dec(v_pat_961_);
lean_dec(v_attrKind_960_);
v_a_1157_ = lean_ctor_get(v___x_975_, 0);
v_a_1158_ = lean_ctor_get(v___x_975_, 1);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_975_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_inc(v_a_1157_);
lean_dec(v___x_975_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1157_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_mkUnexpander___boxed(lean_object* v_attrKind_1182_, lean_object* v_pat_1183_, lean_object* v_qrhs_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Elab_Command_mkUnexpander(v_attrKind_1182_, v_pat_1183_, v_qrhs_1184_, v_a_1185_, v_a_1186_);
lean_dec_ref(v_a_1185_);
return v_res_1187_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1188_ = lean_box(0);
v___x_1189_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
lean_ctor_set(v___x_1190_, 1, v___x_1188_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg(){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___closed__0);
v___x_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg___boxed(lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(lean_object* v_00_u03b1_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___boxed(lean_object* v_00_u03b1_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0(v_00_u03b1_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; lean_object* v_env_1209_; lean_object* v___x_1210_; lean_object* v_mainModule_1211_; lean_object* v___x_1212_; 
v___x_1208_ = lean_st_ref_get(v___y_1206_);
v_env_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc_ref(v_env_1209_);
lean_dec(v___x_1208_);
v___x_1210_ = l_Lean_Environment_header(v_env_1209_);
lean_dec_ref(v_env_1209_);
v_mainModule_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_mainModule_1211_);
lean_dec_ref(v___x_1210_);
v___x_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1212_, 0, v_mainModule_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg___boxed(lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_1213_);
lean_dec(v___y_1213_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_1217_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___boxed(lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7(v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___lam__0(lean_object* v___x_1224_, lean_object* v_sc_1225_){
_start:
{
lean_object* v_header_1226_; lean_object* v_currNamespace_1227_; lean_object* v_openDecls_1228_; lean_object* v_levelNames_1229_; lean_object* v_varDecls_1230_; lean_object* v_varUIds_1231_; lean_object* v_includedVars_1232_; lean_object* v_omittedVars_1233_; uint8_t v_isNoncomputable_1234_; uint8_t v_isPublic_1235_; uint8_t v_isMeta_1236_; lean_object* v_attrs_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
v_header_1226_ = lean_ctor_get(v_sc_1225_, 0);
v_currNamespace_1227_ = lean_ctor_get(v_sc_1225_, 2);
v_openDecls_1228_ = lean_ctor_get(v_sc_1225_, 3);
v_levelNames_1229_ = lean_ctor_get(v_sc_1225_, 4);
v_varDecls_1230_ = lean_ctor_get(v_sc_1225_, 5);
v_varUIds_1231_ = lean_ctor_get(v_sc_1225_, 6);
v_includedVars_1232_ = lean_ctor_get(v_sc_1225_, 7);
v_omittedVars_1233_ = lean_ctor_get(v_sc_1225_, 8);
v_isNoncomputable_1234_ = lean_ctor_get_uint8(v_sc_1225_, sizeof(void*)*10);
v_isPublic_1235_ = lean_ctor_get_uint8(v_sc_1225_, sizeof(void*)*10 + 1);
v_isMeta_1236_ = lean_ctor_get_uint8(v_sc_1225_, sizeof(void*)*10 + 2);
v_attrs_1237_ = lean_ctor_get(v_sc_1225_, 9);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_sc_1225_);
if (v_isSharedCheck_1244_ == 0)
{
lean_object* v_unused_1245_; 
v_unused_1245_ = lean_ctor_get(v_sc_1225_, 1);
lean_dec(v_unused_1245_);
v___x_1239_ = v_sc_1225_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_attrs_1237_);
lean_inc(v_omittedVars_1233_);
lean_inc(v_includedVars_1232_);
lean_inc(v_varUIds_1231_);
lean_inc(v_varDecls_1230_);
lean_inc(v_levelNames_1229_);
lean_inc(v_openDecls_1228_);
lean_inc(v_currNamespace_1227_);
lean_inc(v_header_1226_);
lean_dec(v_sc_1225_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 1, v___x_1224_);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_header_1226_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1243_, 2, v_currNamespace_1227_);
lean_ctor_set(v_reuseFailAlloc_1243_, 3, v_openDecls_1228_);
lean_ctor_set(v_reuseFailAlloc_1243_, 4, v_levelNames_1229_);
lean_ctor_set(v_reuseFailAlloc_1243_, 5, v_varDecls_1230_);
lean_ctor_set(v_reuseFailAlloc_1243_, 6, v_varUIds_1231_);
lean_ctor_set(v_reuseFailAlloc_1243_, 7, v_includedVars_1232_);
lean_ctor_set(v_reuseFailAlloc_1243_, 8, v_omittedVars_1233_);
lean_ctor_set(v_reuseFailAlloc_1243_, 9, v_attrs_1237_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*10, v_isNoncomputable_1234_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*10 + 1, v_isPublic_1235_);
lean_ctor_set_uint8(v_reuseFailAlloc_1243_, sizeof(void*)*10 + 2, v_isMeta_1236_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(size_t v_sz_1246_, size_t v_i_1247_, lean_object* v_bs_1248_){
_start:
{
uint8_t v___x_1249_; 
v___x_1249_ = lean_usize_dec_lt(v_i_1247_, v_sz_1246_);
if (v___x_1249_ == 0)
{
return v_bs_1248_;
}
else
{
lean_object* v_v_1250_; lean_object* v___x_1251_; lean_object* v_bs_x27_1252_; size_t v___x_1253_; size_t v___x_1254_; lean_object* v___x_1255_; 
v_v_1250_ = lean_array_uget(v_bs_1248_, v_i_1247_);
v___x_1251_ = lean_unsigned_to_nat(0u);
v_bs_x27_1252_ = lean_array_uset(v_bs_1248_, v_i_1247_, v___x_1251_);
v___x_1253_ = ((size_t)1ULL);
v___x_1254_ = lean_usize_add(v_i_1247_, v___x_1253_);
v___x_1255_ = lean_array_uset(v_bs_x27_1252_, v_i_1247_, v_v_1250_);
v_i_1247_ = v___x_1254_;
v_bs_1248_ = v___x_1255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3___boxed(lean_object* v_sz_1257_, lean_object* v_i_1258_, lean_object* v_bs_1259_){
_start:
{
size_t v_sz_boxed_1260_; size_t v_i_boxed_1261_; lean_object* v_res_1262_; 
v_sz_boxed_1260_ = lean_unbox_usize(v_sz_1257_);
lean_dec(v_sz_1257_);
v_i_boxed_1261_ = lean_unbox_usize(v_i_1258_);
lean_dec(v_i_1258_);
v_res_1262_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(v_sz_boxed_1260_, v_i_boxed_1261_, v_bs_1259_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(lean_object* v_o_1266_, lean_object* v_k_1267_, uint8_t v_v_1268_){
_start:
{
lean_object* v_map_1269_; uint8_t v_hasTrace_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1284_; 
v_map_1269_ = lean_ctor_get(v_o_1266_, 0);
v_hasTrace_1270_ = lean_ctor_get_uint8(v_o_1266_, sizeof(void*)*1);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_o_1266_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1272_ = v_o_1266_;
v_isShared_1273_ = v_isSharedCheck_1284_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_map_1269_);
lean_dec(v_o_1266_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1284_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1274_, 0, v_v_1268_);
lean_inc(v_k_1267_);
v___x_1275_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1267_, v___x_1274_, v_map_1269_);
if (v_hasTrace_1270_ == 0)
{
lean_object* v___x_1276_; uint8_t v___x_1277_; lean_object* v___x_1279_; 
v___x_1276_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
v___x_1277_ = l_Lean_Name_isPrefixOf(v___x_1276_, v_k_1267_);
lean_dec(v_k_1267_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1275_);
v___x_1279_ = v___x_1272_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1275_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_ctor_set_uint8(v___x_1279_, sizeof(void*)*1, v___x_1277_);
return v___x_1279_;
}
}
else
{
lean_object* v___x_1282_; 
lean_dec(v_k_1267_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1275_);
v___x_1282_ = v___x_1272_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1275_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*1, v_hasTrace_1270_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___boxed(lean_object* v_o_1285_, lean_object* v_k_1286_, lean_object* v_v_1287_){
_start:
{
uint8_t v_v_boxed_1288_; lean_object* v_res_1289_; 
v_v_boxed_1288_ = lean_unbox(v_v_1287_);
v_res_1289_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(v_o_1285_, v_k_1286_, v_v_boxed_1288_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(lean_object* v_opts_1290_, lean_object* v_opt_1291_, uint8_t v_val_1292_){
_start:
{
lean_object* v_name_1293_; lean_object* v___x_1294_; 
v_name_1293_ = lean_ctor_get(v_opt_1291_, 0);
lean_inc(v_name_1293_);
lean_dec_ref(v_opt_1291_);
v___x_1294_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13(v_opts_1290_, v_name_1293_, v_val_1292_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6___boxed(lean_object* v_opts_1295_, lean_object* v_opt_1296_, lean_object* v_val_1297_){
_start:
{
uint8_t v_val_boxed_1298_; lean_object* v_res_1299_; 
v_val_boxed_1298_ = lean_unbox(v_val_1297_);
v_res_1299_ = l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(v_opts_1295_, v_opt_1296_, v_val_boxed_1298_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(size_t v_sz_1300_, size_t v_i_1301_, lean_object* v_bs_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_usize_dec_lt(v_i_1301_, v_sz_1300_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v_bs_1302_);
lean_ctor_set(v___x_1306_, 1, v___y_1304_);
return v___x_1306_;
}
else
{
lean_object* v_v_1307_; lean_object* v___x_1308_; 
v_v_1307_ = lean_array_uget_borrowed(v_bs_1302_, v_i_1301_);
lean_inc(v_v_1307_);
v___x_1308_ = l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem(v_v_1307_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v_a_1310_; lean_object* v___x_1311_; lean_object* v_bs_x27_1312_; size_t v___x_1313_; size_t v___x_1314_; lean_object* v___x_1315_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
v_a_1310_ = lean_ctor_get(v___x_1308_, 1);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1308_, 2);
v___x_1311_ = lean_unsigned_to_nat(0u);
v_bs_x27_1312_ = lean_array_uset(v_bs_1302_, v_i_1301_, v___x_1311_);
v___x_1313_ = ((size_t)1ULL);
v___x_1314_ = lean_usize_add(v_i_1301_, v___x_1313_);
v___x_1315_ = lean_array_uset(v_bs_x27_1312_, v_i_1301_, v_a_1309_);
v_i_1301_ = v___x_1314_;
v_bs_1302_ = v___x_1315_;
v___y_1304_ = v_a_1310_;
goto _start;
}
else
{
lean_object* v_a_1317_; lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v_bs_1302_);
v_a_1317_ = lean_ctor_get(v___x_1308_, 0);
v_a_1318_ = lean_ctor_get(v___x_1308_, 1);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1308_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_inc(v_a_1317_);
lean_dec(v___x_1308_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1317_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed(lean_object* v_sz_1326_, lean_object* v_i_1327_, lean_object* v_bs_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
size_t v_sz_boxed_1331_; size_t v_i_boxed_1332_; lean_object* v_res_1333_; 
v_sz_boxed_1331_ = lean_unbox_usize(v_sz_1326_);
lean_dec(v_sz_1326_);
v_i_boxed_1332_ = lean_unbox_usize(v_i_1327_);
lean_dec(v_i_1327_);
v_res_1333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2(v_sz_boxed_1331_, v_i_boxed_1332_, v_bs_1328_, v___y_1329_, v___y_1330_);
lean_dec_ref(v___y_1329_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(size_t v_sz_1334_, size_t v_i_1335_, lean_object* v_bs_1336_, lean_object* v___y_1337_){
_start:
{
uint8_t v___x_1338_; 
v___x_1338_ = lean_usize_dec_lt(v_i_1335_, v_sz_1334_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1339_, 0, v_bs_1336_);
lean_ctor_set(v___x_1339_, 1, v___y_1337_);
return v___x_1339_;
}
else
{
lean_object* v_v_1340_; lean_object* v___x_1341_; 
v_v_1340_ = lean_array_uget_borrowed(v_bs_1336_, v_i_1335_);
lean_inc(v_v_1340_);
v___x_1341_ = l_Lean_Elab_Command_expandNotationItemIntoPattern___redArg(v_v_1340_, v___y_1337_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v_a_1343_; lean_object* v___x_1344_; lean_object* v_bs_x27_1345_; size_t v___x_1346_; size_t v___x_1347_; lean_object* v___x_1348_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
v_a_1343_ = lean_ctor_get(v___x_1341_, 1);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1341_, 2);
v___x_1344_ = lean_unsigned_to_nat(0u);
v_bs_x27_1345_ = lean_array_uset(v_bs_1336_, v_i_1335_, v___x_1344_);
v___x_1346_ = ((size_t)1ULL);
v___x_1347_ = lean_usize_add(v_i_1335_, v___x_1346_);
v___x_1348_ = lean_array_uset(v_bs_x27_1345_, v_i_1335_, v_a_1342_);
v_i_1335_ = v___x_1347_;
v_bs_1336_ = v___x_1348_;
v___y_1337_ = v_a_1343_;
goto _start;
}
else
{
lean_object* v_a_1350_; lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec_ref(v_bs_1336_);
v_a_1350_ = lean_ctor_get(v___x_1341_, 0);
v_a_1351_ = lean_ctor_get(v___x_1341_, 1);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1341_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_inc(v_a_1350_);
lean_dec(v___x_1341_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1350_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg___boxed(lean_object* v_sz_1359_, lean_object* v_i_1360_, lean_object* v_bs_1361_, lean_object* v___y_1362_){
_start:
{
size_t v_sz_boxed_1363_; size_t v_i_boxed_1364_; lean_object* v_res_1365_; 
v_sz_boxed_1363_ = lean_unbox_usize(v_sz_1359_);
lean_dec(v_sz_1359_);
v_i_boxed_1364_ = lean_unbox_usize(v_i_1360_);
lean_dec(v_i_1360_);
v_res_1365_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(v_sz_boxed_1363_, v_i_boxed_1364_, v_bs_1361_, v___y_1362_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(size_t v_sz_1366_, size_t v_i_1367_, lean_object* v_bs_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___redArg(v_sz_1366_, v_i_1367_, v_bs_1368_, v___y_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed(lean_object* v_sz_1372_, lean_object* v_i_1373_, lean_object* v_bs_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
size_t v_sz_boxed_1377_; size_t v_i_boxed_1378_; lean_object* v_res_1379_; 
v_sz_boxed_1377_ = lean_unbox_usize(v_sz_1372_);
lean_dec(v_sz_1372_);
v_i_boxed_1378_ = lean_unbox_usize(v_i_1373_);
lean_dec(v_i_1373_);
v_res_1379_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5(v_sz_boxed_1377_, v_i_boxed_1378_, v_bs_1374_, v___y_1375_, v___y_1376_);
lean_dec_ref(v___y_1375_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(size_t v_sz_1380_, size_t v_i_1381_, lean_object* v_bs_1382_){
_start:
{
uint8_t v___x_1383_; 
v___x_1383_ = lean_usize_dec_lt(v_i_1381_, v_sz_1380_);
if (v___x_1383_ == 0)
{
return v_bs_1382_;
}
else
{
lean_object* v___x_1384_; lean_object* v_v_1385_; lean_object* v_bs_x27_1386_; lean_object* v___x_1387_; size_t v___x_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
v___x_1384_ = lean_unsigned_to_nat(0u);
v_v_1385_ = lean_array_uget(v_bs_1382_, v_i_1381_);
v_bs_x27_1386_ = lean_array_uset(v_bs_1382_, v_i_1381_, v___x_1384_);
v___x_1387_ = l_Lean_Syntax_getArg(v_v_1385_, v___x_1384_);
lean_dec(v_v_1385_);
v___x_1388_ = ((size_t)1ULL);
v___x_1389_ = lean_usize_add(v_i_1381_, v___x_1388_);
v___x_1390_ = lean_array_uset(v_bs_x27_1386_, v_i_1381_, v___x_1387_);
v_i_1381_ = v___x_1389_;
v_bs_1382_ = v___x_1390_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4___boxed(lean_object* v_sz_1392_, lean_object* v_i_1393_, lean_object* v_bs_1394_){
_start:
{
size_t v_sz_boxed_1395_; size_t v_i_boxed_1396_; lean_object* v_res_1397_; 
v_sz_boxed_1395_ = lean_unbox_usize(v_sz_1392_);
lean_dec(v_sz_1392_);
v_i_boxed_1396_ = lean_unbox_usize(v_i_1393_);
lean_dec(v_i_1393_);
v_res_1397_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(v_sz_boxed_1395_, v_i_boxed_1396_, v_bs_1394_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(lean_object* v_env_1398_, lean_object* v_currNamespace_1399_, lean_object* v_openDecls_1400_, lean_object* v_n_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = l_Lean_ResolveName_resolveNamespace(v_env_1398_, v_currNamespace_1399_, v_openDecls_1400_, v_n_1401_);
v___x_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
lean_ctor_set(v___x_1405_, 1, v___y_1403_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed(lean_object* v_env_1406_, lean_object* v_currNamespace_1407_, lean_object* v_openDecls_1408_, lean_object* v_n_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3(v_env_1406_, v_currNamespace_1407_, v_openDecls_1408_, v_n_1409_, v___y_1410_, v___y_1411_);
lean_dec_ref(v___y_1410_);
return v_res_1412_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1413_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
return v___x_1415_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1416_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_1417_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_1418_ = lean_unsigned_to_nat(0u);
v___x_1419_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
lean_ctor_set(v___x_1419_, 2, v___x_1418_);
lean_ctor_set(v___x_1419_, 3, v___x_1418_);
lean_ctor_set(v___x_1419_, 4, v___x_1417_);
lean_ctor_set(v___x_1419_, 5, v___x_1417_);
lean_ctor_set(v___x_1419_, 6, v___x_1417_);
lean_ctor_set(v___x_1419_, 7, v___x_1417_);
lean_ctor_set(v___x_1419_, 8, v___x_1417_);
lean_ctor_set(v___x_1419_, 9, v___x_1417_);
lean_ctor_set(v___x_1419_, 10, v___x_1417_);
lean_ctor_set(v___x_1419_, 11, v___x_1416_);
return v___x_1419_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = lean_unsigned_to_nat(32u);
v___x_1421_ = lean_mk_empty_array_with_capacity(v___x_1420_);
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
return v___x_1422_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4(void){
_start:
{
size_t v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1423_ = ((size_t)5ULL);
v___x_1424_ = lean_unsigned_to_nat(0u);
v___x_1425_ = lean_unsigned_to_nat(32u);
v___x_1426_ = lean_mk_empty_array_with_capacity(v___x_1425_);
v___x_1427_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__3);
v___x_1428_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
lean_ctor_set(v___x_1428_, 1, v___x_1426_);
lean_ctor_set(v___x_1428_, 2, v___x_1424_);
lean_ctor_set(v___x_1428_, 3, v___x_1424_);
lean_ctor_set_usize(v___x_1428_, 4, v___x_1423_);
return v___x_1428_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1429_ = lean_box(1);
v___x_1430_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__4);
v___x_1431_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_1432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
lean_ctor_set(v___x_1432_, 1, v___x_1430_);
lean_ctor_set(v___x_1432_, 2, v___x_1429_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v___x_1436_; lean_object* v_env_1437_; uint8_t v___x_1438_; lean_object* v_env_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v_scopes_1442_; lean_object* v___x_1443_; lean_object* v_opts_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1436_ = lean_st_ref_get(v___y_1434_);
v_env_1437_ = lean_ctor_get(v___x_1436_, 0);
lean_inc_ref(v_env_1437_);
lean_dec(v___x_1436_);
v___x_1438_ = 0;
v_env_1439_ = l_Lean_Environment_setRecordingDeps(v_env_1437_, v___x_1438_);
v___x_1440_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1441_ = lean_st_ref_get(v___y_1434_);
v_scopes_1442_ = lean_ctor_get(v___x_1441_, 2);
lean_inc(v_scopes_1442_);
lean_dec(v___x_1441_);
v___x_1443_ = l_List_head_x21___redArg(v___x_1440_, v_scopes_1442_);
lean_dec(v_scopes_1442_);
v_opts_1444_ = lean_ctor_get(v___x_1443_, 1);
lean_inc_ref(v_opts_1444_);
lean_dec(v___x_1443_);
v___x_1445_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_1446_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___closed__5);
v___x_1447_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1447_, 0, v_env_1439_);
lean_ctor_set(v___x_1447_, 1, v___x_1445_);
lean_ctor_set(v___x_1447_, 2, v___x_1446_);
lean_ctor_set(v___x_1447_, 3, v_opts_1444_);
v___x_1448_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1447_);
lean_ctor_set(v___x_1448_, 1, v_msgData_1433_);
v___x_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msgData_1450_, v___y_1451_);
lean_dec(v___y_1451_);
return v_res_1453_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1454_; double v___x_1455_; 
v___x_1454_ = lean_unsigned_to_nat(0u);
v___x_1455_ = lean_float_of_nat(v___x_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(lean_object* v_cls_1458_, lean_object* v_msg_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lean_Elab_Command_getRef___redArg(v___y_1460_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v___x_1465_; lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1514_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v___x_1465_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msg_1459_, v___y_1461_);
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1468_ = v___x_1465_;
v_isShared_1469_ = v_isSharedCheck_1514_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1514_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v_traceState_1471_; lean_object* v_env_1472_; lean_object* v_messages_1473_; lean_object* v_scopes_1474_; lean_object* v_usedQuotCtxts_1475_; lean_object* v_nextMacroScope_1476_; lean_object* v_maxRecDepth_1477_; lean_object* v_ngen_1478_; lean_object* v_auxDeclNGen_1479_; lean_object* v_infoState_1480_; lean_object* v_snapshotTasks_1481_; lean_object* v_prevLinterStates_1482_; lean_object* v_codeQualityEntryTasks_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1513_; 
v___x_1470_ = lean_st_ref_take(v___y_1461_);
v_traceState_1471_ = lean_ctor_get(v___x_1470_, 9);
v_env_1472_ = lean_ctor_get(v___x_1470_, 0);
v_messages_1473_ = lean_ctor_get(v___x_1470_, 1);
v_scopes_1474_ = lean_ctor_get(v___x_1470_, 2);
v_usedQuotCtxts_1475_ = lean_ctor_get(v___x_1470_, 3);
v_nextMacroScope_1476_ = lean_ctor_get(v___x_1470_, 4);
v_maxRecDepth_1477_ = lean_ctor_get(v___x_1470_, 5);
v_ngen_1478_ = lean_ctor_get(v___x_1470_, 6);
v_auxDeclNGen_1479_ = lean_ctor_get(v___x_1470_, 7);
v_infoState_1480_ = lean_ctor_get(v___x_1470_, 8);
v_snapshotTasks_1481_ = lean_ctor_get(v___x_1470_, 10);
v_prevLinterStates_1482_ = lean_ctor_get(v___x_1470_, 11);
v_codeQualityEntryTasks_1483_ = lean_ctor_get(v___x_1470_, 12);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1485_ = v___x_1470_;
v_isShared_1486_ = v_isSharedCheck_1513_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1483_);
lean_inc(v_prevLinterStates_1482_);
lean_inc(v_snapshotTasks_1481_);
lean_inc(v_traceState_1471_);
lean_inc(v_infoState_1480_);
lean_inc(v_auxDeclNGen_1479_);
lean_inc(v_ngen_1478_);
lean_inc(v_maxRecDepth_1477_);
lean_inc(v_nextMacroScope_1476_);
lean_inc(v_usedQuotCtxts_1475_);
lean_inc(v_scopes_1474_);
lean_inc(v_messages_1473_);
lean_inc(v_env_1472_);
lean_dec(v___x_1470_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1513_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
uint64_t v_tid_1487_; lean_object* v_traces_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1512_; 
v_tid_1487_ = lean_ctor_get_uint64(v_traceState_1471_, sizeof(void*)*1);
v_traces_1488_ = lean_ctor_get(v_traceState_1471_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_traceState_1471_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1490_ = v_traceState_1471_;
v_isShared_1491_ = v_isSharedCheck_1512_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_traces_1488_);
lean_dec(v_traceState_1471_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1512_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; double v___x_1494_; uint8_t v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1503_; 
v___x_1492_ = lean_box(0);
v___x_1493_ = lean_box(0);
v___x_1494_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__0);
v___x_1495_ = 0;
v___x_1496_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_1497_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1497_, 0, v_cls_1458_);
lean_ctor_set(v___x_1497_, 1, v___x_1493_);
lean_ctor_set(v___x_1497_, 2, v___x_1496_);
lean_ctor_set_float(v___x_1497_, sizeof(void*)*3, v___x_1494_);
lean_ctor_set_float(v___x_1497_, sizeof(void*)*3 + 8, v___x_1494_);
lean_ctor_set_uint8(v___x_1497_, sizeof(void*)*3 + 16, v___x_1495_);
v___x_1498_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___closed__1));
v___x_1499_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1497_);
lean_ctor_set(v___x_1499_, 1, v_a_1466_);
lean_ctor_set(v___x_1499_, 2, v___x_1498_);
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v_a_1464_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
v___x_1501_ = l_Lean_PersistentArray_push___redArg(v_traces_1488_, v___x_1500_);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 0, v___x_1501_);
v___x_1503_ = v___x_1490_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1501_);
lean_ctor_set_uint64(v_reuseFailAlloc_1511_, sizeof(void*)*1, v_tid_1487_);
v___x_1503_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
lean_object* v___x_1505_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 9, v___x_1503_);
v___x_1505_ = v___x_1485_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_env_1472_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v_messages_1473_);
lean_ctor_set(v_reuseFailAlloc_1510_, 2, v_scopes_1474_);
lean_ctor_set(v_reuseFailAlloc_1510_, 3, v_usedQuotCtxts_1475_);
lean_ctor_set(v_reuseFailAlloc_1510_, 4, v_nextMacroScope_1476_);
lean_ctor_set(v_reuseFailAlloc_1510_, 5, v_maxRecDepth_1477_);
lean_ctor_set(v_reuseFailAlloc_1510_, 6, v_ngen_1478_);
lean_ctor_set(v_reuseFailAlloc_1510_, 7, v_auxDeclNGen_1479_);
lean_ctor_set(v_reuseFailAlloc_1510_, 8, v_infoState_1480_);
lean_ctor_set(v_reuseFailAlloc_1510_, 9, v___x_1503_);
lean_ctor_set(v_reuseFailAlloc_1510_, 10, v_snapshotTasks_1481_);
lean_ctor_set(v_reuseFailAlloc_1510_, 11, v_prevLinterStates_1482_);
lean_ctor_set(v_reuseFailAlloc_1510_, 12, v_codeQualityEntryTasks_1483_);
v___x_1505_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
lean_object* v___x_1506_; lean_object* v___x_1508_; 
v___x_1506_ = lean_st_ref_put(v___y_1461_, v___x_1505_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 0, v___x_1492_);
v___x_1508_ = v___x_1468_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1492_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec_ref(v_msg_1459_);
lean_dec(v_cls_1458_);
v_a_1515_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1463_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1463_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1___boxed(lean_object* v_cls_1523_, lean_object* v_msg_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_cls_1523_, v_msg_1524_, v___y_1525_, v___y_1526_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(lean_object* v_as_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
if (lean_obj_tag(v_as_1529_) == 0)
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_box(0);
v___x_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
return v___x_1534_;
}
else
{
lean_object* v_head_1535_; lean_object* v_tail_1536_; lean_object* v_fst_1537_; lean_object* v_snd_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v_scopes_1543_; lean_object* v___x_1544_; lean_object* v_opts_1545_; uint8_t v_hasTrace_1546_; 
v_head_1535_ = lean_ctor_get(v_as_1529_, 0);
lean_inc(v_head_1535_);
v_tail_1536_ = lean_ctor_get(v_as_1529_, 1);
lean_inc(v_tail_1536_);
lean_dec_ref_known(v_as_1529_, 2);
v_fst_1537_ = lean_ctor_get(v_head_1535_, 0);
lean_inc(v_fst_1537_);
v_snd_1538_ = lean_ctor_get(v_head_1535_, 1);
lean_inc(v_snd_1538_);
lean_dec(v_head_1535_);
v___x_1539_ = l_Lean_inheritedTraceOptions;
v___x_1540_ = lean_st_ref_get(v___x_1539_);
v___x_1541_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1542_ = lean_st_ref_get(v___y_1531_);
v_scopes_1543_ = lean_ctor_get(v___x_1542_, 2);
lean_inc(v_scopes_1543_);
lean_dec(v___x_1542_);
v___x_1544_ = l_List_head_x21___redArg(v___x_1541_, v_scopes_1543_);
lean_dec(v_scopes_1543_);
v_opts_1545_ = lean_ctor_get(v___x_1544_, 1);
lean_inc_ref(v_opts_1545_);
lean_dec(v___x_1544_);
v_hasTrace_1546_ = lean_ctor_get_uint8(v_opts_1545_, sizeof(void*)*1);
if (v_hasTrace_1546_ == 0)
{
lean_dec_ref(v_opts_1545_);
lean_dec(v___x_1540_);
lean_dec(v_snd_1538_);
lean_dec(v_fst_1537_);
v_as_1529_ = v_tail_1536_;
goto _start;
}
else
{
lean_object* v___x_1548_; lean_object* v___x_1549_; uint8_t v___x_1550_; 
v___x_1548_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
lean_inc(v_fst_1537_);
v___x_1549_ = l_Lean_Name_append(v___x_1548_, v_fst_1537_);
v___x_1550_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1540_, v_opts_1545_, v___x_1549_);
lean_dec(v___x_1549_);
lean_dec_ref(v_opts_1545_);
lean_dec(v___x_1540_);
if (v___x_1550_ == 0)
{
lean_dec(v_snd_1538_);
lean_dec(v_fst_1537_);
v_as_1529_ = v_tail_1536_;
goto _start;
}
else
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1552_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1552_, 0, v_snd_1538_);
v___x_1553_ = l_Lean_MessageData_ofFormat(v___x_1552_);
v___x_1554_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_fst_1537_, v___x_1553_, v___y_1530_, v___y_1531_);
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_dec_ref_known(v___x_1554_, 1);
v_as_1529_ = v_tail_1536_;
goto _start;
}
else
{
lean_dec(v_tail_1536_);
return v___x_1554_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5___boxed(lean_object* v_as_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(v_as_1556_, v___y_1557_, v___y_1558_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(lean_object* v_currNamespace_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1564_, 0, v_currNamespace_1561_);
lean_ctor_set(v___x_1564_, 1, v___y_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed(lean_object* v_currNamespace_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2(v_currNamespace_1565_, v___y_1566_, v___y_1567_);
lean_dec_ref(v___y_1566_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(lean_object* v_env_1569_, lean_object* v_opts_1570_, lean_object* v_currNamespace_1571_, lean_object* v_openDecls_1572_, lean_object* v_n_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = l_Lean_ResolveName_resolveGlobalName(v_env_1569_, v_opts_1570_, v_currNamespace_1571_, v_openDecls_1572_, v_n_1573_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
lean_ctor_set(v___x_1577_, 1, v___y_1575_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed(lean_object* v_env_1578_, lean_object* v_opts_1579_, lean_object* v_currNamespace_1580_, lean_object* v_openDecls_1581_, lean_object* v_n_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4(v_env_1578_, v_opts_1579_, v_currNamespace_1580_, v_openDecls_1581_, v_n_1582_, v___y_1583_, v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec_ref(v_opts_1579_);
return v_res_1585_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__28(lean_object* v_opts_1586_, lean_object* v_opt_1587_){
_start:
{
lean_object* v_name_1588_; lean_object* v_defValue_1589_; lean_object* v_map_1590_; lean_object* v___x_1591_; 
v_name_1588_ = lean_ctor_get(v_opt_1587_, 0);
v_defValue_1589_ = lean_ctor_get(v_opt_1587_, 1);
v_map_1590_ = lean_ctor_get(v_opts_1586_, 0);
v___x_1591_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1590_, v_name_1588_);
if (lean_obj_tag(v___x_1591_) == 0)
{
uint8_t v___x_1592_; 
v___x_1592_ = lean_unbox(v_defValue_1589_);
return v___x_1592_;
}
else
{
lean_object* v_val_1593_; 
v_val_1593_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_val_1593_);
lean_dec_ref_known(v___x_1591_, 1);
if (lean_obj_tag(v_val_1593_) == 1)
{
uint8_t v_v_1594_; 
v_v_1594_ = lean_ctor_get_uint8(v_val_1593_, 0);
lean_dec_ref_known(v_val_1593_, 0);
return v_v_1594_;
}
else
{
uint8_t v___x_1595_; 
lean_dec(v_val_1593_);
v___x_1595_ = lean_unbox(v_defValue_1589_);
return v___x_1595_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__28___boxed(lean_object* v_opts_1596_, lean_object* v_opt_1597_){
_start:
{
uint8_t v_res_1598_; lean_object* v_r_1599_; 
v_res_1598_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__28(v_opts_1596_, v_opt_1597_);
lean_dec_ref(v_opt_1597_);
lean_dec_ref(v_opts_1596_);
v_r_1599_ = lean_box(v_res_1598_);
return v_r_1599_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0(void){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1600_ = lean_box(1);
v___x_1601_ = l_Lean_MessageData_ofFormat(v___x_1600_);
return v___x_1601_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__3(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__2));
v___x_1606_ = l_Lean_MessageData_ofFormat(v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29(lean_object* v_x_1607_, lean_object* v_x_1608_){
_start:
{
if (lean_obj_tag(v_x_1608_) == 0)
{
return v_x_1607_;
}
else
{
lean_object* v_head_1609_; lean_object* v_tail_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1632_; 
v_head_1609_ = lean_ctor_get(v_x_1608_, 0);
v_tail_1610_ = lean_ctor_get(v_x_1608_, 1);
v_isSharedCheck_1632_ = !lean_is_exclusive(v_x_1608_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1612_ = v_x_1608_;
v_isShared_1613_ = v_isSharedCheck_1632_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_tail_1610_);
lean_inc(v_head_1609_);
lean_dec(v_x_1608_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1632_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v_before_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1630_; 
v_before_1614_ = lean_ctor_get(v_head_1609_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_head_1609_);
if (v_isSharedCheck_1630_ == 0)
{
lean_object* v_unused_1631_; 
v_unused_1631_ = lean_ctor_get(v_head_1609_, 1);
lean_dec(v_unused_1631_);
v___x_1616_ = v_head_1609_;
v_isShared_1617_ = v_isSharedCheck_1630_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_before_1614_);
lean_dec(v_head_1609_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1630_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1618_; lean_object* v___x_1620_; 
v___x_1618_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0);
if (v_isShared_1617_ == 0)
{
lean_ctor_set_tag(v___x_1616_, 7);
lean_ctor_set(v___x_1616_, 1, v___x_1618_);
lean_ctor_set(v___x_1616_, 0, v_x_1607_);
v___x_1620_ = v___x_1616_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_x_1607_);
lean_ctor_set(v_reuseFailAlloc_1629_, 1, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
lean_object* v___x_1621_; lean_object* v___x_1623_; 
v___x_1621_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__3);
if (v_isShared_1613_ == 0)
{
lean_ctor_set_tag(v___x_1612_, 7);
lean_ctor_set(v___x_1612_, 1, v___x_1621_);
lean_ctor_set(v___x_1612_, 0, v___x_1620_);
v___x_1623_ = v___x_1612_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1628_, 1, v___x_1621_);
v___x_1623_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1624_ = l_Lean_MessageData_ofSyntax(v_before_1614_);
v___x_1625_ = l_Lean_indentD(v___x_1624_);
v___x_1626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1623_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v_x_1607_ = v___x_1626_;
v_x_1608_ = v_tail_1610_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__2(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__1));
v___x_1637_ = l_Lean_MessageData_ofFormat(v___x_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg(lean_object* v_msgData_1638_, lean_object* v_macroStack_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v_scopes_1644_; lean_object* v___x_1645_; lean_object* v_opts_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; 
v___x_1642_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1643_ = lean_st_ref_get(v___y_1640_);
v_scopes_1644_ = lean_ctor_get(v___x_1643_, 2);
lean_inc(v_scopes_1644_);
lean_dec(v___x_1643_);
v___x_1645_ = l_List_head_x21___redArg(v___x_1642_, v_scopes_1644_);
lean_dec(v_scopes_1644_);
v_opts_1646_ = lean_ctor_get(v___x_1645_, 1);
lean_inc_ref(v_opts_1646_);
lean_dec(v___x_1645_);
v___x_1647_ = l_Lean_Elab_pp_macroStack;
v___x_1648_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__28(v_opts_1646_, v___x_1647_);
lean_dec_ref(v_opts_1646_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; 
lean_dec(v_macroStack_1639_);
v___x_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1649_, 0, v_msgData_1638_);
return v___x_1649_;
}
else
{
if (lean_obj_tag(v_macroStack_1639_) == 0)
{
lean_object* v___x_1650_; 
v___x_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1650_, 0, v_msgData_1638_);
return v___x_1650_;
}
else
{
lean_object* v_head_1651_; lean_object* v_after_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1667_; 
v_head_1651_ = lean_ctor_get(v_macroStack_1639_, 0);
lean_inc(v_head_1651_);
v_after_1652_ = lean_ctor_get(v_head_1651_, 1);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_head_1651_);
if (v_isSharedCheck_1667_ == 0)
{
lean_object* v_unused_1668_; 
v_unused_1668_ = lean_ctor_get(v_head_1651_, 0);
lean_dec(v_unused_1668_);
v___x_1654_ = v_head_1651_;
v_isShared_1655_ = v_isSharedCheck_1667_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_after_1652_);
lean_dec(v_head_1651_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1667_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1656_; lean_object* v___x_1658_; 
v___x_1656_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29___closed__0);
if (v_isShared_1655_ == 0)
{
lean_ctor_set_tag(v___x_1654_, 7);
lean_ctor_set(v___x_1654_, 1, v___x_1656_);
lean_ctor_set(v___x_1654_, 0, v_msgData_1638_);
v___x_1658_ = v___x_1654_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_msgData_1638_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v_msgData_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1659_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___closed__2);
v___x_1660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = l_Lean_MessageData_ofSyntax(v_after_1652_);
v___x_1662_ = l_Lean_indentD(v___x_1661_);
v_msgData_1663_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1663_, 0, v___x_1660_);
lean_ctor_set(v_msgData_1663_, 1, v___x_1662_);
v___x_1664_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24_spec__29(v_msgData_1663_, v_macroStack_1639_);
v___x_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
return v___x_1665_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg___boxed(lean_object* v_msgData_1669_, lean_object* v_macroStack_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg(v_msgData_1669_, v_macroStack_1670_, v___y_1671_);
lean_dec(v___y_1671_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(lean_object* v_msg_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_Elab_Command_getRef___redArg(v___y_1675_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v_macroStack_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v_a_1683_; lean_object* v___x_1684_; lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1693_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v___x_1678_, 1);
v_macroStack_1680_ = lean_ctor_get(v___y_1675_, 4);
v___x_1681_ = l_Lean_Elab_getBetterRef(v_a_1679_, v_macroStack_1680_);
lean_dec(v_a_1679_);
v___x_1682_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msg_1674_, v___y_1676_);
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_a_1683_);
lean_dec_ref(v___x_1682_);
lean_inc(v_macroStack_1680_);
v___x_1684_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg(v_a_1683_, v_macroStack_1680_, v___y_1676_);
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1693_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1693_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1689_; lean_object* v___x_1691_; 
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1681_);
lean_ctor_set(v___x_1689_, 1, v_a_1685_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set_tag(v___x_1687_, 1);
lean_ctor_set(v___x_1687_, 0, v___x_1689_);
v___x_1691_ = v___x_1687_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1689_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
else
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
lean_dec_ref(v_msg_1674_);
v_a_1694_ = lean_ctor_get(v___x_1678_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1678_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1678_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg___boxed(lean_object* v_msg_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_1702_, v___y_1703_, v___y_1704_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(lean_object* v_ref_1707_, lean_object* v_msg_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lean_Elab_Command_getRef___redArg(v___y_1709_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v_fileName_1714_; lean_object* v_fileMap_1715_; lean_object* v_currRecDepth_1716_; lean_object* v_cmdPos_1717_; lean_object* v_macroStack_1718_; lean_object* v_quotContext_x3f_1719_; lean_object* v_currMacroScope_1720_; lean_object* v_snap_x3f_1721_; lean_object* v_cancelTk_x3f_1722_; uint8_t v_suppressElabErrors_1723_; lean_object* v_ref_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___x_1712_, 1);
v_fileName_1714_ = lean_ctor_get(v___y_1709_, 0);
v_fileMap_1715_ = lean_ctor_get(v___y_1709_, 1);
v_currRecDepth_1716_ = lean_ctor_get(v___y_1709_, 2);
v_cmdPos_1717_ = lean_ctor_get(v___y_1709_, 3);
v_macroStack_1718_ = lean_ctor_get(v___y_1709_, 4);
v_quotContext_x3f_1719_ = lean_ctor_get(v___y_1709_, 5);
v_currMacroScope_1720_ = lean_ctor_get(v___y_1709_, 6);
v_snap_x3f_1721_ = lean_ctor_get(v___y_1709_, 8);
v_cancelTk_x3f_1722_ = lean_ctor_get(v___y_1709_, 9);
v_suppressElabErrors_1723_ = lean_ctor_get_uint8(v___y_1709_, sizeof(void*)*10);
v_ref_1724_ = l_Lean_replaceRef(v_ref_1707_, v_a_1713_);
lean_dec(v_a_1713_);
lean_inc(v_cancelTk_x3f_1722_);
lean_inc(v_snap_x3f_1721_);
lean_inc(v_currMacroScope_1720_);
lean_inc(v_quotContext_x3f_1719_);
lean_inc(v_macroStack_1718_);
lean_inc(v_cmdPos_1717_);
lean_inc(v_currRecDepth_1716_);
lean_inc_ref(v_fileMap_1715_);
lean_inc_ref(v_fileName_1714_);
v___x_1725_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_1725_, 0, v_fileName_1714_);
lean_ctor_set(v___x_1725_, 1, v_fileMap_1715_);
lean_ctor_set(v___x_1725_, 2, v_currRecDepth_1716_);
lean_ctor_set(v___x_1725_, 3, v_cmdPos_1717_);
lean_ctor_set(v___x_1725_, 4, v_macroStack_1718_);
lean_ctor_set(v___x_1725_, 5, v_quotContext_x3f_1719_);
lean_ctor_set(v___x_1725_, 6, v_currMacroScope_1720_);
lean_ctor_set(v___x_1725_, 7, v_ref_1724_);
lean_ctor_set(v___x_1725_, 8, v_snap_x3f_1721_);
lean_ctor_set(v___x_1725_, 9, v_cancelTk_x3f_1722_);
lean_ctor_set_uint8(v___x_1725_, sizeof(void*)*10, v_suppressElabErrors_1723_);
v___x_1726_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_1708_, v___x_1725_, v___y_1710_);
lean_dec_ref_known(v___x_1725_, 10);
return v___x_1726_;
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1734_; 
lean_dec_ref(v_msg_1708_);
v_a_1727_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1729_ = v___x_1712_;
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1712_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_a_1727_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg___boxed(lean_object* v_ref_1735_, lean_object* v_msg_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_ref_1735_, v_msg_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v_ref_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(lean_object* v_env_1741_, lean_object* v_declName_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
uint8_t v___x_1745_; lean_object* v_env_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; uint8_t v___x_1749_; 
v___x_1745_ = 0;
v_env_1746_ = l_Lean_Environment_setExporting(v_env_1741_, v___x_1745_);
lean_inc(v_declName_1742_);
v___x_1747_ = l_Lean_mkPrivateName(v_env_1746_, v_declName_1742_);
v___x_1748_ = 1;
lean_inc_ref(v_env_1746_);
v___x_1749_ = l_Lean_Environment_contains(v_env_1746_, v___x_1747_, v___x_1748_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1750_ = l_Lean_privateToUserName(v_declName_1742_);
v___x_1751_ = l_Lean_Environment_contains(v_env_1746_, v___x_1750_, v___x_1748_);
v___x_1752_ = lean_box(v___x_1751_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
lean_ctor_set(v___x_1753_, 1, v___y_1744_);
return v___x_1753_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_dec_ref(v_env_1746_);
lean_dec(v_declName_1742_);
v___x_1754_ = lean_box(v___x_1749_);
v___x_1755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
lean_ctor_set(v___x_1755_, 1, v___y_1744_);
return v___x_1755_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed(lean_object* v_env_1756_, lean_object* v_declName_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0(v_env_1756_, v_declName_1757_, v___y_1758_, v___y_1759_);
lean_dec_ref(v___y_1758_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(lean_object* v_x_1761_, lean_object* v___y_1762_){
_start:
{
if (lean_obj_tag(v_x_1761_) == 0)
{
lean_object* v_a_1763_; lean_object* v___x_1764_; 
v_a_1763_ = lean_ctor_get(v_x_1761_, 0);
lean_inc(v_a_1763_);
v___x_1764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1764_, 0, v_a_1763_);
lean_ctor_set(v___x_1764_, 1, v___y_1762_);
return v___x_1764_;
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1766_; 
v_a_1765_ = lean_ctor_get(v_x_1761_, 0);
lean_inc(v_a_1765_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v_a_1765_);
lean_ctor_set(v___x_1766_, 1, v___y_1762_);
return v___x_1766_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg___boxed(lean_object* v_x_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v_x_1767_, v___y_1768_);
lean_dec_ref(v_x_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(lean_object* v_env_1770_, lean_object* v_stx_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1770_, v_stx_1771_, v___y_1772_, v___y_1773_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_a_1775_);
if (lean_obj_tag(v_a_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1784_; 
v_a_1776_ = lean_ctor_get(v___x_1774_, 1);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1784_ == 0)
{
lean_object* v_unused_1785_; 
v_unused_1785_ = lean_ctor_get(v___x_1774_, 0);
lean_dec(v_unused_1785_);
v___x_1778_ = v___x_1774_;
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1774_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1780_; lean_object* v___x_1782_; 
v___x_1780_ = lean_box(0);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1780_);
v___x_1782_ = v___x_1778_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
lean_ctor_set(v_reuseFailAlloc_1783_, 1, v_a_1776_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
else
{
lean_object* v_val_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1814_; 
v_val_1786_ = lean_ctor_get(v_a_1775_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_a_1775_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1788_ = v_a_1775_;
v_isShared_1789_ = v_isSharedCheck_1814_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_val_1786_);
lean_dec(v_a_1775_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1814_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v_snd_1790_; 
v_snd_1790_ = lean_ctor_get(v_val_1786_, 1);
lean_inc(v_snd_1790_);
lean_dec(v_val_1786_);
if (lean_obj_tag(v_snd_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1800_; 
lean_del_object(v___x_1788_);
v_a_1791_ = lean_ctor_get(v___x_1774_, 1);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1774_, 2);
v_a_1792_ = lean_ctor_get(v_snd_1790_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_snd_1790_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1794_ = v_snd_1790_;
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v_snd_1790_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; 
v___x_1798_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v___x_1797_, v_a_1791_);
lean_dec_ref(v___x_1797_);
return v___x_1798_;
}
}
}
else
{
lean_object* v_a_1801_; lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1813_; 
v_a_1801_ = lean_ctor_get(v___x_1774_, 1);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1774_, 2);
v_a_1802_ = lean_ctor_get(v_snd_1790_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v_snd_1790_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1804_ = v_snd_1790_;
v_isShared_1805_ = v_isSharedCheck_1813_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v_snd_1790_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1813_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v_a_1802_);
v___x_1807_ = v___x_1788_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1809_; 
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v___x_1807_);
v___x_1809_ = v___x_1804_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; 
v___x_1810_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v___x_1809_, v_a_1801_);
lean_dec_ref(v___x_1809_);
return v___x_1810_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
v_a_1815_ = lean_ctor_get(v___x_1774_, 0);
v_a_1816_ = lean_ctor_get(v___x_1774_, 1);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1774_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_inc(v_a_1815_);
lean_dec(v___x_1774_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1815_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed(lean_object* v_env_1824_, lean_object* v_stx_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1(v_env_1824_, v_stx_1825_, v___y_1826_, v___y_1827_);
lean_dec_ref(v___y_1826_);
return v_res_1828_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = l_Lean_maxRecDepthErrorMessage;
v___x_1835_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
return v___x_1835_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__3);
v___x_1837_ = l_Lean_MessageData_ofFormat(v___x_1836_);
return v___x_1837_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1838_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__4);
v___x_1839_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__2));
v___x_1840_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
lean_ctor_set(v___x_1840_, 1, v___x_1838_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(lean_object* v_ref_1841_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1843_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___closed__5);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v_ref_1841_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg___boxed(lean_object* v_ref_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_ref_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___lam__0(lean_object* v___x_1849_, lean_object* v_entry_1850_, lean_object* v_s_1851_){
_start:
{
lean_object* v_addEntryFn_1852_; lean_object* v_importedEntries_1853_; lean_object* v_state_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1862_; 
v_addEntryFn_1852_ = lean_ctor_get(v___x_1849_, 3);
lean_inc(v_addEntryFn_1852_);
lean_dec_ref(v___x_1849_);
v_importedEntries_1853_ = lean_ctor_get(v_s_1851_, 0);
v_state_1854_ = lean_ctor_get(v_s_1851_, 1);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_s_1851_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1856_ = v_s_1851_;
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_state_1854_);
lean_inc(v_importedEntries_1853_);
lean_dec(v_s_1851_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1862_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v_state_1858_; lean_object* v___x_1860_; 
v_state_1858_ = lean_apply_2(v_addEntryFn_1852_, v_state_1854_, v_entry_1850_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 1, v_state_1858_);
v___x_1860_ = v___x_1856_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_importedEntries_1853_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v_state_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27_spec__31___redArg(lean_object* v_x_1863_, lean_object* v_x_1864_){
_start:
{
if (lean_obj_tag(v_x_1864_) == 0)
{
return v_x_1863_;
}
else
{
lean_object* v_key_1865_; lean_object* v_value_1866_; lean_object* v_tail_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1890_; 
v_key_1865_ = lean_ctor_get(v_x_1864_, 0);
v_value_1866_ = lean_ctor_get(v_x_1864_, 1);
v_tail_1867_ = lean_ctor_get(v_x_1864_, 2);
v_isSharedCheck_1890_ = !lean_is_exclusive(v_x_1864_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1869_ = v_x_1864_;
v_isShared_1870_ = v_isSharedCheck_1890_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_tail_1867_);
lean_inc(v_value_1866_);
lean_inc(v_key_1865_);
lean_dec(v_x_1864_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1890_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1871_; uint64_t v___x_1872_; uint64_t v___x_1873_; uint64_t v___x_1874_; uint64_t v_fold_1875_; uint64_t v___x_1876_; uint64_t v___x_1877_; uint64_t v___x_1878_; size_t v___x_1879_; size_t v___x_1880_; size_t v___x_1881_; size_t v___x_1882_; size_t v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1886_; 
v___x_1871_ = lean_array_get_size(v_x_1863_);
v___x_1872_ = l_Lean_instHashableExtraModUse_hash(v_key_1865_);
v___x_1873_ = 32ULL;
v___x_1874_ = lean_uint64_shift_right(v___x_1872_, v___x_1873_);
v_fold_1875_ = lean_uint64_xor(v___x_1872_, v___x_1874_);
v___x_1876_ = 16ULL;
v___x_1877_ = lean_uint64_shift_right(v_fold_1875_, v___x_1876_);
v___x_1878_ = lean_uint64_xor(v_fold_1875_, v___x_1877_);
v___x_1879_ = lean_uint64_to_usize(v___x_1878_);
v___x_1880_ = lean_usize_of_nat(v___x_1871_);
v___x_1881_ = ((size_t)1ULL);
v___x_1882_ = lean_usize_sub(v___x_1880_, v___x_1881_);
v___x_1883_ = lean_usize_land(v___x_1879_, v___x_1882_);
v___x_1884_ = lean_array_uget_borrowed(v_x_1863_, v___x_1883_);
lean_inc(v___x_1884_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 2, v___x_1884_);
v___x_1886_ = v___x_1869_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_key_1865_);
lean_ctor_set(v_reuseFailAlloc_1889_, 1, v_value_1866_);
lean_ctor_set(v_reuseFailAlloc_1889_, 2, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
lean_object* v___x_1887_; 
v___x_1887_ = lean_array_uset(v_x_1863_, v___x_1883_, v___x_1886_);
v_x_1863_ = v___x_1887_;
v_x_1864_ = v_tail_1867_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27___redArg(lean_object* v_i_1891_, lean_object* v_source_1892_, lean_object* v_target_1893_){
_start:
{
lean_object* v___x_1894_; uint8_t v___x_1895_; 
v___x_1894_ = lean_array_get_size(v_source_1892_);
v___x_1895_ = lean_nat_dec_lt(v_i_1891_, v___x_1894_);
if (v___x_1895_ == 0)
{
lean_dec_ref(v_source_1892_);
lean_dec(v_i_1891_);
return v_target_1893_;
}
else
{
lean_object* v_es_1896_; lean_object* v___x_1897_; lean_object* v_source_1898_; lean_object* v_target_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v_es_1896_ = lean_array_fget(v_source_1892_, v_i_1891_);
v___x_1897_ = lean_box(0);
v_source_1898_ = lean_array_fset(v_source_1892_, v_i_1891_, v___x_1897_);
v_target_1899_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27_spec__31___redArg(v_target_1893_, v_es_1896_);
v___x_1900_ = lean_unsigned_to_nat(1u);
v___x_1901_ = lean_nat_add(v_i_1891_, v___x_1900_);
lean_dec(v_i_1891_);
v_i_1891_ = v___x_1901_;
v_source_1892_ = v_source_1898_;
v_target_1893_ = v_target_1899_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22___redArg(lean_object* v_data_1903_){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v_nbuckets_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1904_ = lean_array_get_size(v_data_1903_);
v___x_1905_ = lean_unsigned_to_nat(2u);
v_nbuckets_1906_ = lean_nat_mul(v___x_1904_, v___x_1905_);
v___x_1907_ = lean_unsigned_to_nat(0u);
v___x_1908_ = lean_box(0);
v___x_1909_ = lean_mk_array(v_nbuckets_1906_, v___x_1908_);
v___x_1910_ = lean_array_propagate_mark(v_data_1903_, v___x_1909_);
v___x_1911_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27___redArg(v___x_1907_, v_data_1903_, v___x_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___redArg(lean_object* v_a_1912_, lean_object* v_x_1913_){
_start:
{
if (lean_obj_tag(v_x_1913_) == 0)
{
uint8_t v___x_1914_; 
v___x_1914_ = 0;
return v___x_1914_;
}
else
{
lean_object* v_key_1915_; lean_object* v_tail_1916_; uint8_t v___x_1917_; 
v_key_1915_ = lean_ctor_get(v_x_1913_, 0);
v_tail_1916_ = lean_ctor_get(v_x_1913_, 2);
v___x_1917_ = l_Lean_instBEqExtraModUse_beq(v_key_1915_, v_a_1912_);
if (v___x_1917_ == 0)
{
v_x_1913_ = v_tail_1916_;
goto _start;
}
else
{
return v___x_1917_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___redArg___boxed(lean_object* v_a_1919_, lean_object* v_x_1920_){
_start:
{
uint8_t v_res_1921_; lean_object* v_r_1922_; 
v_res_1921_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___redArg(v_a_1919_, v_x_1920_);
lean_dec(v_x_1920_);
lean_dec_ref(v_a_1919_);
v_r_1922_ = lean_box(v_res_1921_);
return v_r_1922_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16___redArg(lean_object* v_m_1923_, lean_object* v_a_1924_, lean_object* v_b_1925_){
_start:
{
lean_object* v_size_1926_; lean_object* v_buckets_1927_; lean_object* v___x_1928_; uint64_t v___x_1929_; uint64_t v___x_1930_; uint64_t v___x_1931_; uint64_t v_fold_1932_; uint64_t v___x_1933_; uint64_t v___x_1934_; uint64_t v___x_1935_; size_t v___x_1936_; size_t v___x_1937_; size_t v___x_1938_; size_t v___x_1939_; size_t v___x_1940_; lean_object* v_bkt_1941_; uint8_t v___x_1942_; 
v_size_1926_ = lean_ctor_get(v_m_1923_, 0);
v_buckets_1927_ = lean_ctor_get(v_m_1923_, 1);
v___x_1928_ = lean_array_get_size(v_buckets_1927_);
v___x_1929_ = l_Lean_instHashableExtraModUse_hash(v_a_1924_);
v___x_1930_ = 32ULL;
v___x_1931_ = lean_uint64_shift_right(v___x_1929_, v___x_1930_);
v_fold_1932_ = lean_uint64_xor(v___x_1929_, v___x_1931_);
v___x_1933_ = 16ULL;
v___x_1934_ = lean_uint64_shift_right(v_fold_1932_, v___x_1933_);
v___x_1935_ = lean_uint64_xor(v_fold_1932_, v___x_1934_);
v___x_1936_ = lean_uint64_to_usize(v___x_1935_);
v___x_1937_ = lean_usize_of_nat(v___x_1928_);
v___x_1938_ = ((size_t)1ULL);
v___x_1939_ = lean_usize_sub(v___x_1937_, v___x_1938_);
v___x_1940_ = lean_usize_land(v___x_1936_, v___x_1939_);
v_bkt_1941_ = lean_array_uget_borrowed(v_buckets_1927_, v___x_1940_);
v___x_1942_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___redArg(v_a_1924_, v_bkt_1941_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1963_; 
lean_inc_ref(v_buckets_1927_);
lean_inc(v_size_1926_);
v_isSharedCheck_1963_ = !lean_is_exclusive(v_m_1923_);
if (v_isSharedCheck_1963_ == 0)
{
lean_object* v_unused_1964_; lean_object* v_unused_1965_; 
v_unused_1964_ = lean_ctor_get(v_m_1923_, 1);
lean_dec(v_unused_1964_);
v_unused_1965_ = lean_ctor_get(v_m_1923_, 0);
lean_dec(v_unused_1965_);
v___x_1944_ = v_m_1923_;
v_isShared_1945_ = v_isSharedCheck_1963_;
goto v_resetjp_1943_;
}
else
{
lean_dec(v_m_1923_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1963_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1946_; lean_object* v_size_x27_1947_; lean_object* v___x_1948_; lean_object* v_buckets_x27_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; uint8_t v___x_1955_; 
v___x_1946_ = lean_unsigned_to_nat(1u);
v_size_x27_1947_ = lean_nat_add(v_size_1926_, v___x_1946_);
lean_dec(v_size_1926_);
lean_inc(v_bkt_1941_);
v___x_1948_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1948_, 0, v_a_1924_);
lean_ctor_set(v___x_1948_, 1, v_b_1925_);
lean_ctor_set(v___x_1948_, 2, v_bkt_1941_);
v_buckets_x27_1949_ = lean_array_uset(v_buckets_1927_, v___x_1940_, v___x_1948_);
v___x_1950_ = lean_unsigned_to_nat(4u);
v___x_1951_ = lean_nat_mul(v_size_x27_1947_, v___x_1950_);
v___x_1952_ = lean_unsigned_to_nat(3u);
v___x_1953_ = lean_nat_div(v___x_1951_, v___x_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_array_get_size(v_buckets_x27_1949_);
v___x_1955_ = lean_nat_dec_le(v___x_1953_, v___x_1954_);
lean_dec(v___x_1953_);
if (v___x_1955_ == 0)
{
lean_object* v_val_1956_; lean_object* v___x_1958_; 
v_val_1956_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22___redArg(v_buckets_x27_1949_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 1, v_val_1956_);
lean_ctor_set(v___x_1944_, 0, v_size_x27_1947_);
v___x_1958_ = v___x_1944_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_size_x27_1947_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v_val_1956_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
else
{
lean_object* v___x_1961_; 
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 1, v_buckets_x27_1949_);
lean_ctor_set(v___x_1944_, 0, v_size_x27_1947_);
v___x_1961_ = v___x_1944_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_size_x27_1947_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v_buckets_x27_1949_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
}
else
{
lean_dec(v_b_1925_);
lean_dec_ref(v_a_1924_);
return v_m_1923_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(lean_object* v_keys_1966_, lean_object* v_i_1967_, lean_object* v_k_1968_){
_start:
{
lean_object* v___x_1969_; uint8_t v___x_1970_; 
v___x_1969_ = lean_array_get_size(v_keys_1966_);
v___x_1970_ = lean_nat_dec_lt(v_i_1967_, v___x_1969_);
if (v___x_1970_ == 0)
{
lean_dec(v_i_1967_);
return v___x_1970_;
}
else
{
lean_object* v_k_x27_1971_; uint8_t v___x_1972_; 
v_k_x27_1971_ = lean_array_fget_borrowed(v_keys_1966_, v_i_1967_);
v___x_1972_ = l_Lean_instBEqExtraModUse_beq(v_k_1968_, v_k_x27_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1973_ = lean_unsigned_to_nat(1u);
v___x_1974_ = lean_nat_add(v_i_1967_, v___x_1973_);
lean_dec(v_i_1967_);
v_i_1967_ = v___x_1974_;
goto _start;
}
else
{
lean_dec(v_i_1967_);
return v___x_1970_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg___boxed(lean_object* v_keys_1976_, lean_object* v_i_1977_, lean_object* v_k_1978_){
_start:
{
uint8_t v_res_1979_; lean_object* v_r_1980_; 
v_res_1979_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_keys_1976_, v_i_1977_, v_k_1978_);
lean_dec_ref(v_k_1978_);
lean_dec_ref(v_keys_1976_);
v_r_1980_ = lean_box(v_res_1979_);
return v_r_1980_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(lean_object* v_x_1981_, size_t v_x_1982_, lean_object* v_x_1983_){
_start:
{
if (lean_obj_tag(v_x_1981_) == 0)
{
lean_object* v_es_1984_; lean_object* v___x_1985_; size_t v___x_1986_; size_t v___x_1987_; lean_object* v_j_1988_; lean_object* v___x_1989_; 
v_es_1984_ = lean_ctor_get(v_x_1981_, 0);
v___x_1985_ = lean_box(2);
v___x_1986_ = ((size_t)31ULL);
v___x_1987_ = lean_usize_land(v_x_1982_, v___x_1986_);
v_j_1988_ = lean_usize_to_nat(v___x_1987_);
v___x_1989_ = lean_array_get_borrowed(v___x_1985_, v_es_1984_, v_j_1988_);
lean_dec(v_j_1988_);
switch(lean_obj_tag(v___x_1989_))
{
case 0:
{
lean_object* v_key_1990_; uint8_t v___x_1991_; 
v_key_1990_ = lean_ctor_get(v___x_1989_, 0);
v___x_1991_ = l_Lean_instBEqExtraModUse_beq(v_x_1983_, v_key_1990_);
return v___x_1991_;
}
case 1:
{
lean_object* v_node_1992_; size_t v___x_1993_; size_t v___x_1994_; 
v_node_1992_ = lean_ctor_get(v___x_1989_, 0);
v___x_1993_ = ((size_t)5ULL);
v___x_1994_ = lean_usize_shift_right(v_x_1982_, v___x_1993_);
v_x_1981_ = v_node_1992_;
v_x_1982_ = v___x_1994_;
goto _start;
}
default: 
{
uint8_t v___x_1996_; 
v___x_1996_ = 0;
return v___x_1996_;
}
}
}
else
{
lean_object* v_ks_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; 
v_ks_1997_ = lean_ctor_get(v_x_1981_, 0);
v___x_1998_ = lean_unsigned_to_nat(0u);
v___x_1999_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_ks_1997_, v___x_1998_, v_x_1983_);
return v___x_1999_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg___boxed(lean_object* v_x_2000_, lean_object* v_x_2001_, lean_object* v_x_2002_){
_start:
{
size_t v_x_22036__boxed_2003_; uint8_t v_res_2004_; lean_object* v_r_2005_; 
v_x_22036__boxed_2003_ = lean_unbox_usize(v_x_2001_);
lean_dec(v_x_2001_);
v_res_2004_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_2000_, v_x_22036__boxed_2003_, v_x_2002_);
lean_dec_ref(v_x_2002_);
lean_dec_ref(v_x_2000_);
v_r_2005_ = lean_box(v_res_2004_);
return v_r_2005_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(lean_object* v_x_2006_, lean_object* v_x_2007_){
_start:
{
uint64_t v___x_2008_; size_t v___x_2009_; uint8_t v___x_2010_; 
v___x_2008_ = l_Lean_instHashableExtraModUse_hash(v_x_2007_);
v___x_2009_ = lean_uint64_to_usize(v___x_2008_);
v___x_2010_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_2006_, v___x_2009_, v_x_2007_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg___boxed(lean_object* v_x_2011_, lean_object* v_x_2012_){
_start:
{
uint8_t v_res_2013_; lean_object* v_r_2014_; 
v_res_2013_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v_x_2011_, v_x_2012_);
lean_dec_ref(v_x_2012_);
lean_dec_ref(v_x_2011_);
v_r_2014_ = lean_box(v_res_2013_);
return v_r_2014_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2015_; 
v___x_2015_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2015_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4(void){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2020_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__3));
v___x_2021_ = l_Lean_stringToMessageData(v___x_2020_);
return v___x_2021_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6(void){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__5));
v___x_2024_ = l_Lean_stringToMessageData(v___x_2023_);
return v___x_2024_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7(void){
_start:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__54));
v___x_2026_ = l_Lean_stringToMessageData(v___x_2025_);
return v___x_2026_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8(void){
_start:
{
lean_object* v_cls_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v_cls_2027_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2));
v___x_2028_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6_spec__13___closed__1));
v___x_2029_ = l_Lean_Name_append(v___x_2028_, v_cls_2027_);
return v___x_2029_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10(void){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__9));
v___x_2032_ = l_Lean_stringToMessageData(v___x_2031_);
return v___x_2032_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12(void){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2034_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__11));
v___x_2035_ = l_Lean_stringToMessageData(v___x_2034_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(lean_object* v_mod_2040_, uint8_t v_isMeta_2041_, lean_object* v_hint_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2052_; lean_object* v___y_2053_; lean_object* v___y_2054_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v_env_2067_; uint8_t v_isExporting_2068_; lean_object* v_entry_2069_; lean_object* v___x_2070_; lean_object* v_env_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; uint8_t v___x_2076_; 
v___x_2065_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__0);
v___x_2066_ = lean_st_ref_get(v___y_2044_);
v_env_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc_ref(v_env_2067_);
lean_dec(v___x_2066_);
v_isExporting_2068_ = lean_ctor_get_uint8(v_env_2067_, sizeof(void*)*13);
lean_dec_ref(v_env_2067_);
lean_inc(v_mod_2040_);
v_entry_2069_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2069_, 0, v_mod_2040_);
lean_ctor_set_uint8(v_entry_2069_, sizeof(void*)*1, v_isExporting_2068_);
lean_ctor_set_uint8(v_entry_2069_, sizeof(void*)*1 + 1, v_isMeta_2041_);
v___x_2070_ = lean_st_ref_get(v___y_2044_);
v_env_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc_ref(v_env_2071_);
lean_dec(v___x_2070_);
v___x_2072_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2073_ = lean_box(1);
v___x_2074_ = lean_box(0);
v___x_2075_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2065_, v___x_2072_, v_env_2071_, v___x_2073_, v___x_2074_);
v___x_2076_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v___x_2075_, v_entry_2069_);
lean_dec(v___x_2075_);
if (v___x_2076_ == 0)
{
lean_object* v___f_2077_; uint8_t v___x_2078_; lean_object* v___y_2080_; lean_object* v___y_2103_; lean_object* v_cls_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___y_2116_; lean_object* v___y_2117_; lean_object* v___y_2121_; lean_object* v___y_2122_; lean_object* v_scopes_2134_; lean_object* v___x_2135_; lean_object* v_opts_2136_; uint8_t v_hasTrace_2137_; 
lean_inc_ref(v_entry_2069_);
v___f_2077_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___lam__0), 3, 2);
lean_closure_set(v___f_2077_, 0, v___x_2072_);
lean_closure_set(v___f_2077_, 1, v_entry_2069_);
v___x_2078_ = 1;
v_cls_2110_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__2));
v___x_2111_ = l_Lean_inheritedTraceOptions;
v___x_2112_ = lean_st_ref_get(v___x_2111_);
v___x_2113_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2114_ = lean_st_ref_get(v___y_2044_);
v_scopes_2134_ = lean_ctor_get(v___x_2114_, 2);
lean_inc(v_scopes_2134_);
lean_dec(v___x_2114_);
v___x_2135_ = l_List_head_x21___redArg(v___x_2113_, v_scopes_2134_);
lean_dec(v_scopes_2134_);
v_opts_2136_ = lean_ctor_get(v___x_2135_, 1);
lean_inc_ref(v_opts_2136_);
lean_dec(v___x_2135_);
v_hasTrace_2137_ = lean_ctor_get_uint8(v_opts_2136_, sizeof(void*)*1);
if (v_hasTrace_2137_ == 0)
{
lean_dec_ref(v_opts_2136_);
lean_dec(v___x_2112_);
lean_dec(v_hint_2042_);
lean_dec(v_mod_2040_);
v___y_2103_ = v___y_2044_;
goto v___jp_2102_;
}
else
{
lean_object* v___x_2138_; uint8_t v___x_2139_; 
v___x_2138_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__8);
v___x_2139_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_2112_, v_opts_2136_, v___x_2138_);
lean_dec_ref(v_opts_2136_);
lean_dec(v___x_2112_);
if (v___x_2139_ == 0)
{
lean_dec(v_hint_2042_);
lean_dec(v_mod_2040_);
v___y_2103_ = v___y_2044_;
goto v___jp_2102_;
}
else
{
lean_object* v___x_2140_; lean_object* v___y_2142_; 
v___x_2140_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__10);
if (v_isExporting_2068_ == 0)
{
lean_object* v___x_2149_; 
v___x_2149_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__15));
v___y_2142_ = v___x_2149_;
goto v___jp_2141_;
}
else
{
lean_object* v___x_2150_; 
v___x_2150_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__16));
v___y_2142_ = v___x_2150_;
goto v___jp_2141_;
}
v___jp_2141_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
lean_inc_ref(v___y_2142_);
v___x_2143_ = l_Lean_stringToMessageData(v___y_2142_);
v___x_2144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2140_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__12);
v___x_2146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2144_);
lean_ctor_set(v___x_2146_, 1, v___x_2145_);
if (v_isMeta_2041_ == 0)
{
lean_object* v___x_2147_; 
v___x_2147_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__13));
v___y_2121_ = v___x_2146_;
v___y_2122_ = v___x_2147_;
goto v___jp_2120_;
}
else
{
lean_object* v___x_2148_; 
v___x_2148_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__14));
v___y_2121_ = v___x_2146_;
v___y_2122_ = v___x_2148_;
goto v___jp_2120_;
}
}
}
}
v___jp_2079_:
{
lean_object* v___x_2081_; lean_object* v_toEnvExtension_2082_; lean_object* v_env_2083_; lean_object* v_messages_2084_; lean_object* v_scopes_2085_; lean_object* v_usedQuotCtxts_2086_; lean_object* v_nextMacroScope_2087_; lean_object* v_maxRecDepth_2088_; lean_object* v_ngen_2089_; lean_object* v_auxDeclNGen_2090_; lean_object* v_infoState_2091_; lean_object* v_traceState_2092_; lean_object* v_snapshotTasks_2093_; lean_object* v_prevLinterStates_2094_; lean_object* v_codeQualityEntryTasks_2095_; lean_object* v_asyncMode_2096_; uint8_t v_logWrites_2097_; lean_object* v___x_2098_; 
v___x_2081_ = lean_st_ref_take(v___y_2080_);
v_toEnvExtension_2082_ = lean_ctor_get(v___x_2072_, 0);
v_env_2083_ = lean_ctor_get(v___x_2081_, 0);
lean_inc_ref(v_env_2083_);
v_messages_2084_ = lean_ctor_get(v___x_2081_, 1);
lean_inc_ref(v_messages_2084_);
v_scopes_2085_ = lean_ctor_get(v___x_2081_, 2);
lean_inc(v_scopes_2085_);
v_usedQuotCtxts_2086_ = lean_ctor_get(v___x_2081_, 3);
lean_inc(v_usedQuotCtxts_2086_);
v_nextMacroScope_2087_ = lean_ctor_get(v___x_2081_, 4);
lean_inc(v_nextMacroScope_2087_);
v_maxRecDepth_2088_ = lean_ctor_get(v___x_2081_, 5);
lean_inc(v_maxRecDepth_2088_);
v_ngen_2089_ = lean_ctor_get(v___x_2081_, 6);
lean_inc_ref(v_ngen_2089_);
v_auxDeclNGen_2090_ = lean_ctor_get(v___x_2081_, 7);
lean_inc_ref(v_auxDeclNGen_2090_);
v_infoState_2091_ = lean_ctor_get(v___x_2081_, 8);
lean_inc_ref(v_infoState_2091_);
v_traceState_2092_ = lean_ctor_get(v___x_2081_, 9);
lean_inc_ref(v_traceState_2092_);
v_snapshotTasks_2093_ = lean_ctor_get(v___x_2081_, 10);
lean_inc_ref(v_snapshotTasks_2093_);
v_prevLinterStates_2094_ = lean_ctor_get(v___x_2081_, 11);
lean_inc(v_prevLinterStates_2094_);
v_codeQualityEntryTasks_2095_ = lean_ctor_get(v___x_2081_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2095_);
lean_dec(v___x_2081_);
v_asyncMode_2096_ = lean_ctor_get(v_toEnvExtension_2082_, 2);
v_logWrites_2097_ = lean_ctor_get_uint8(v_toEnvExtension_2082_, sizeof(void*)*6);
v___x_2098_ = lean_box(0);
if (v_logWrites_2097_ == 0)
{
lean_object* v___x_2099_; 
lean_inc_ref(v_toEnvExtension_2082_);
v___x_2099_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2082_, v_env_2083_, v___f_2077_, v_asyncMode_2096_, v___x_2074_, v___x_2078_);
v___y_2047_ = v_snapshotTasks_2093_;
v___y_2048_ = v___x_2098_;
v___y_2049_ = v_prevLinterStates_2094_;
v___y_2050_ = v_traceState_2092_;
v___y_2051_ = v_messages_2084_;
v___y_2052_ = v_maxRecDepth_2088_;
v___y_2053_ = v_nextMacroScope_2087_;
v___y_2054_ = v___y_2080_;
v___y_2055_ = v_ngen_2089_;
v___y_2056_ = v_infoState_2091_;
v___y_2057_ = v_scopes_2085_;
v___y_2058_ = v_usedQuotCtxts_2086_;
v___y_2059_ = v_auxDeclNGen_2090_;
v___y_2060_ = v_codeQualityEntryTasks_2095_;
v___y_2061_ = v___x_2099_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
lean_inc_ref_n(v_toEnvExtension_2082_, 2);
v___x_2100_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2082_, v_env_2083_);
lean_dec_ref(v_env_2083_);
v___x_2101_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2082_, v___x_2100_, v___f_2077_, v_asyncMode_2096_, v___x_2074_, v___x_2078_);
v___y_2047_ = v_snapshotTasks_2093_;
v___y_2048_ = v___x_2098_;
v___y_2049_ = v_prevLinterStates_2094_;
v___y_2050_ = v_traceState_2092_;
v___y_2051_ = v_messages_2084_;
v___y_2052_ = v_maxRecDepth_2088_;
v___y_2053_ = v_nextMacroScope_2087_;
v___y_2054_ = v___y_2080_;
v___y_2055_ = v_ngen_2089_;
v___y_2056_ = v_infoState_2091_;
v___y_2057_ = v_scopes_2085_;
v___y_2058_ = v_usedQuotCtxts_2086_;
v___y_2059_ = v_auxDeclNGen_2090_;
v___y_2060_ = v_codeQualityEntryTasks_2095_;
v___y_2061_ = v___x_2101_;
goto v___jp_2046_;
}
}
v___jp_2102_:
{
uint8_t v___x_2104_; 
v___x_2104_ = l_Lean_usageRecordingEnabled();
if (v___x_2104_ == 0)
{
lean_dec_ref_known(v_entry_2069_, 1);
v___y_2080_ = v___y_2103_;
goto v___jp_2079_;
}
else
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2105_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_2106_ = lean_st_ref_take(v___x_2105_);
v___x_2107_ = lean_box(0);
v___x_2108_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16___redArg(v___x_2106_, v_entry_2069_, v___x_2107_);
v___x_2109_ = lean_st_ref_put(v___x_2105_, v___x_2108_);
v___y_2080_ = v___y_2103_;
goto v___jp_2079_;
}
}
v___jp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___y_2116_);
lean_ctor_set(v___x_2118_, 1, v___y_2117_);
v___x_2119_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1(v_cls_2110_, v___x_2118_, v___y_2043_, v___y_2044_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_dec_ref_known(v___x_2119_, 1);
v___y_2103_ = v___y_2044_;
goto v___jp_2102_;
}
else
{
lean_dec_ref(v___f_2077_);
lean_dec_ref_known(v_entry_2069_, 1);
return v___x_2119_;
}
}
v___jp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
lean_inc_ref(v___y_2122_);
v___x_2123_ = l_Lean_stringToMessageData(v___y_2122_);
v___x_2124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___y_2121_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__4);
v___x_2126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2124_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
v___x_2127_ = l_Lean_MessageData_ofName(v_mod_2040_);
v___x_2128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2126_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = l_Lean_Name_isAnonymous(v_hint_2042_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2130_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__6);
v___x_2131_ = l_Lean_MessageData_ofName(v_hint_2042_);
v___x_2132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2130_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___y_2116_ = v___x_2128_;
v___y_2117_ = v___x_2132_;
goto v___jp_2115_;
}
else
{
lean_object* v___x_2133_; 
lean_dec(v_hint_2042_);
v___x_2133_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___closed__7);
v___y_2116_ = v___x_2128_;
v___y_2117_ = v___x_2133_;
goto v___jp_2115_;
}
}
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2152_; 
lean_dec_ref_known(v_entry_2069_, 1);
lean_dec(v_hint_2042_);
lean_dec(v_mod_2040_);
v___x_2151_ = lean_box(0);
v___x_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2151_);
return v___x_2152_;
}
v___jp_2046_:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2062_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2062_, 0, v___y_2061_);
lean_ctor_set(v___x_2062_, 1, v___y_2051_);
lean_ctor_set(v___x_2062_, 2, v___y_2057_);
lean_ctor_set(v___x_2062_, 3, v___y_2058_);
lean_ctor_set(v___x_2062_, 4, v___y_2053_);
lean_ctor_set(v___x_2062_, 5, v___y_2052_);
lean_ctor_set(v___x_2062_, 6, v___y_2055_);
lean_ctor_set(v___x_2062_, 7, v___y_2059_);
lean_ctor_set(v___x_2062_, 8, v___y_2056_);
lean_ctor_set(v___x_2062_, 9, v___y_2050_);
lean_ctor_set(v___x_2062_, 10, v___y_2047_);
lean_ctor_set(v___x_2062_, 11, v___y_2049_);
lean_ctor_set(v___x_2062_, 12, v___y_2060_);
v___x_2063_ = lean_st_ref_put(v___y_2054_, v___x_2062_);
v___x_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___y_2048_);
return v___x_2064_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6___boxed(lean_object* v_mod_2153_, lean_object* v_isMeta_2154_, lean_object* v_hint_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
uint8_t v_isMeta_boxed_2159_; lean_object* v_res_2160_; 
v_isMeta_boxed_2159_ = lean_unbox(v_isMeta_2154_);
v_res_2160_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_mod_2153_, v_isMeta_boxed_2159_, v_hint_2155_, v___y_2156_, v___y_2157_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(lean_object* v___x_2161_, lean_object* v_declName_2162_, lean_object* v_as_2163_, size_t v_sz_2164_, size_t v_i_2165_, lean_object* v_b_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
uint8_t v___x_2170_; 
v___x_2170_ = lean_usize_dec_lt(v_i_2165_, v_sz_2164_);
if (v___x_2170_ == 0)
{
lean_object* v___x_2171_; 
lean_dec(v_declName_2162_);
v___x_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2171_, 0, v_b_2166_);
return v___x_2171_;
}
else
{
lean_object* v___x_2172_; lean_object* v_modules_2173_; lean_object* v___x_2174_; lean_object* v_a_2175_; lean_object* v___x_2176_; lean_object* v_toImport_2177_; lean_object* v_module_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; 
v___x_2172_ = l_Lean_Environment_header(v___x_2161_);
v_modules_2173_ = lean_ctor_get(v___x_2172_, 3);
lean_inc_ref(v_modules_2173_);
lean_dec_ref(v___x_2172_);
v___x_2174_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2175_ = lean_array_uget_borrowed(v_as_2163_, v_i_2165_);
v___x_2176_ = lean_array_get(v___x_2174_, v_modules_2173_, v_a_2175_);
lean_dec_ref(v_modules_2173_);
v_toImport_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc_ref(v_toImport_2177_);
lean_dec(v___x_2176_);
v_module_2178_ = lean_ctor_get(v_toImport_2177_, 0);
lean_inc(v_module_2178_);
lean_dec_ref(v_toImport_2177_);
v___x_2179_ = lean_box(0);
v___x_2180_ = 0;
lean_inc(v_declName_2162_);
v___x_2181_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_module_2178_, v___x_2180_, v_declName_2162_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2181_) == 0)
{
size_t v___x_2182_; size_t v___x_2183_; 
lean_dec_ref_known(v___x_2181_, 1);
v___x_2182_ = ((size_t)1ULL);
v___x_2183_ = lean_usize_add(v_i_2165_, v___x_2182_);
v_i_2165_ = v___x_2183_;
v_b_2166_ = v___x_2179_;
goto _start;
}
else
{
lean_dec(v_declName_2162_);
return v___x_2181_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7___boxed(lean_object* v___x_2185_, lean_object* v_declName_2186_, lean_object* v_as_2187_, lean_object* v_sz_2188_, lean_object* v_i_2189_, lean_object* v_b_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
size_t v_sz_boxed_2194_; size_t v_i_boxed_2195_; lean_object* v_res_2196_; 
v_sz_boxed_2194_ = lean_unbox_usize(v_sz_2188_);
lean_dec(v_sz_2188_);
v_i_boxed_2195_ = lean_unbox_usize(v_i_2189_);
lean_dec(v_i_2189_);
v_res_2196_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(v___x_2185_, v_declName_2186_, v_as_2187_, v_sz_boxed_2194_, v_i_boxed_2195_, v_b_2190_, v___y_2191_, v___y_2192_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec_ref(v_as_2187_);
lean_dec_ref(v___x_2185_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___redArg(lean_object* v_a_2197_, lean_object* v_x_2198_){
_start:
{
if (lean_obj_tag(v_x_2198_) == 0)
{
lean_object* v___x_2199_; 
v___x_2199_ = lean_box(0);
return v___x_2199_;
}
else
{
lean_object* v_key_2200_; lean_object* v_value_2201_; lean_object* v_tail_2202_; uint8_t v___x_2203_; 
v_key_2200_ = lean_ctor_get(v_x_2198_, 0);
v_value_2201_ = lean_ctor_get(v_x_2198_, 1);
v_tail_2202_ = lean_ctor_get(v_x_2198_, 2);
v___x_2203_ = lean_name_eq(v_key_2200_, v_a_2197_);
if (v___x_2203_ == 0)
{
v_x_2198_ = v_tail_2202_;
goto _start;
}
else
{
lean_object* v___x_2205_; 
lean_inc(v_value_2201_);
v___x_2205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2205_, 0, v_value_2201_);
return v___x_2205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___redArg___boxed(lean_object* v_a_2206_, lean_object* v_x_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___redArg(v_a_2206_, v_x_2207_);
lean_dec(v_x_2207_);
lean_dec(v_a_2206_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(lean_object* v_m_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_buckets_2211_; lean_object* v___x_2212_; uint64_t v___y_2214_; 
v_buckets_2211_ = lean_ctor_get(v_m_2209_, 1);
v___x_2212_ = lean_array_get_size(v_buckets_2211_);
if (lean_obj_tag(v_a_2210_) == 0)
{
uint64_t v___x_2228_; 
v___x_2228_ = 1723ULL;
v___y_2214_ = v___x_2228_;
goto v___jp_2213_;
}
else
{
uint64_t v_hash_2229_; 
v_hash_2229_ = lean_ctor_get_uint64(v_a_2210_, sizeof(void*)*2);
v___y_2214_ = v_hash_2229_;
goto v___jp_2213_;
}
v___jp_2213_:
{
uint64_t v___x_2215_; uint64_t v___x_2216_; uint64_t v_fold_2217_; uint64_t v___x_2218_; uint64_t v___x_2219_; uint64_t v___x_2220_; size_t v___x_2221_; size_t v___x_2222_; size_t v___x_2223_; size_t v___x_2224_; size_t v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2215_ = 32ULL;
v___x_2216_ = lean_uint64_shift_right(v___y_2214_, v___x_2215_);
v_fold_2217_ = lean_uint64_xor(v___y_2214_, v___x_2216_);
v___x_2218_ = 16ULL;
v___x_2219_ = lean_uint64_shift_right(v_fold_2217_, v___x_2218_);
v___x_2220_ = lean_uint64_xor(v_fold_2217_, v___x_2219_);
v___x_2221_ = lean_uint64_to_usize(v___x_2220_);
v___x_2222_ = lean_usize_of_nat(v___x_2212_);
v___x_2223_ = ((size_t)1ULL);
v___x_2224_ = lean_usize_sub(v___x_2222_, v___x_2223_);
v___x_2225_ = lean_usize_land(v___x_2221_, v___x_2224_);
v___x_2226_ = lean_array_uget_borrowed(v_buckets_2211_, v___x_2225_);
v___x_2227_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___redArg(v_a_2210_, v___x_2226_);
return v___x_2227_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_m_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v_m_2230_, v_a_2231_);
lean_dec(v_a_2231_);
lean_dec_ref(v_m_2230_);
return v_res_2232_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(lean_object* v_declName_2236_, uint8_t v_isMeta_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v_env_2246_; lean_object* v___y_2248_; lean_object* v___x_2261_; 
v___x_2241_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__0);
v___x_2242_ = lean_st_ref_get(v___y_2239_);
v_env_2246_ = lean_ctor_get(v___x_2242_, 0);
lean_inc_ref(v_env_2246_);
lean_dec(v___x_2242_);
v___x_2261_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2246_, v_declName_2236_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_dec_ref(v_env_2246_);
lean_dec(v_declName_2236_);
goto v___jp_2243_;
}
else
{
lean_object* v_val_2262_; lean_object* v___x_2263_; lean_object* v_modules_2264_; lean_object* v___x_2265_; uint8_t v___x_2266_; 
v_val_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_val_2262_);
lean_dec_ref_known(v___x_2261_, 1);
v___x_2263_ = l_Lean_Environment_header(v_env_2246_);
v_modules_2264_ = lean_ctor_get(v___x_2263_, 3);
lean_inc_ref(v_modules_2264_);
lean_dec_ref(v___x_2263_);
v___x_2265_ = lean_array_get_size(v_modules_2264_);
v___x_2266_ = lean_nat_dec_lt(v_val_2262_, v___x_2265_);
if (v___x_2266_ == 0)
{
lean_dec_ref(v_modules_2264_);
lean_dec(v_val_2262_);
lean_dec_ref(v_env_2246_);
lean_dec(v_declName_2236_);
goto v___jp_2243_;
}
else
{
lean_object* v___x_2267_; lean_object* v___x_2268_; uint8_t v___y_2270_; 
v___x_2267_ = lean_array_fget(v_modules_2264_, v_val_2262_);
lean_dec(v_val_2262_);
lean_dec_ref(v_modules_2264_);
v___x_2268_ = lean_st_ref_get(v___y_2239_);
if (v_isMeta_2237_ == 0)
{
lean_dec(v___x_2268_);
v___y_2270_ = v_isMeta_2237_;
goto v___jp_2269_;
}
else
{
lean_object* v_env_2281_; uint8_t v___x_2282_; 
v_env_2281_ = lean_ctor_get(v___x_2268_, 0);
lean_inc_ref(v_env_2281_);
lean_dec(v___x_2268_);
lean_inc(v_declName_2236_);
v___x_2282_ = l_Lean_isMarkedMeta(v_env_2281_, v_declName_2236_);
if (v___x_2282_ == 0)
{
v___y_2270_ = v_isMeta_2237_;
goto v___jp_2269_;
}
else
{
uint8_t v___x_2283_; 
v___x_2283_ = 0;
v___y_2270_ = v___x_2283_;
goto v___jp_2269_;
}
}
v___jp_2269_:
{
lean_object* v_toImport_2271_; lean_object* v_module_2272_; lean_object* v___x_2273_; 
v_toImport_2271_ = lean_ctor_get(v___x_2267_, 0);
lean_inc_ref(v_toImport_2271_);
lean_dec(v___x_2267_);
v_module_2272_ = lean_ctor_get(v_toImport_2271_, 0);
lean_inc(v_module_2272_);
lean_dec_ref(v_toImport_2271_);
lean_inc(v_declName_2236_);
v___x_2273_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6(v_module_2272_, v___y_2270_, v_declName_2236_, v___y_2238_, v___y_2239_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
lean_dec_ref_known(v___x_2273_, 1);
v___x_2274_ = l_Lean_indirectModUseExt;
v___x_2275_ = lean_box(1);
v___x_2276_ = lean_box(0);
lean_inc_ref(v_env_2246_);
v___x_2277_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2241_, v___x_2274_, v_env_2246_, v___x_2275_, v___x_2276_);
v___x_2278_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v___x_2277_, v_declName_2236_);
lean_dec(v___x_2277_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v___x_2279_; 
v___x_2279_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___closed__1));
v___y_2248_ = v___x_2279_;
goto v___jp_2247_;
}
else
{
lean_object* v_val_2280_; 
v_val_2280_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_val_2280_);
lean_dec_ref_known(v___x_2278_, 1);
v___y_2248_ = v_val_2280_;
goto v___jp_2247_;
}
}
else
{
lean_dec_ref(v_env_2246_);
lean_dec(v_declName_2236_);
return v___x_2273_;
}
}
}
}
v___jp_2243_:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2244_ = lean_box(0);
v___x_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
return v___x_2245_;
}
v___jp_2247_:
{
lean_object* v___x_2249_; size_t v_sz_2250_; size_t v___x_2251_; lean_object* v___x_2252_; 
v___x_2249_ = lean_box(0);
v_sz_2250_ = lean_array_size(v___y_2248_);
v___x_2251_ = ((size_t)0ULL);
v___x_2252_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__7(v_env_2246_, v_declName_2236_, v___y_2248_, v_sz_2250_, v___x_2251_, v___x_2249_, v___y_2238_, v___y_2239_);
lean_dec_ref(v___y_2248_);
lean_dec_ref(v_env_2246_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2259_; 
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2259_ == 0)
{
lean_object* v_unused_2260_; 
v_unused_2260_ = lean_ctor_get(v___x_2252_, 0);
lean_dec(v_unused_2260_);
v___x_2254_ = v___x_2252_;
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
else
{
lean_dec(v___x_2252_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2257_; 
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 0, v___x_2249_);
v___x_2257_ = v___x_2254_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2249_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
else
{
return v___x_2252_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3___boxed(lean_object* v_declName_2284_, lean_object* v_isMeta_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
uint8_t v_isMeta_boxed_2289_; lean_object* v_res_2290_; 
v_isMeta_boxed_2289_ = lean_unbox(v_isMeta_2285_);
v_res_2290_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(v_declName_2284_, v_isMeta_boxed_2289_, v___y_2286_, v___y_2287_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(lean_object* v_as_x27_2291_, lean_object* v_b_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
if (lean_obj_tag(v_as_x27_2291_) == 0)
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2296_, 0, v_b_2292_);
return v___x_2296_;
}
else
{
lean_object* v_head_2297_; lean_object* v_tail_2298_; lean_object* v___x_2299_; uint8_t v___x_2300_; lean_object* v___x_2301_; 
v_head_2297_ = lean_ctor_get(v_as_x27_2291_, 0);
v_tail_2298_ = lean_ctor_get(v_as_x27_2291_, 1);
v___x_2299_ = lean_box(0);
v___x_2300_ = 1;
lean_inc(v_head_2297_);
v___x_2301_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3(v_head_2297_, v___x_2300_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_dec_ref_known(v___x_2301_, 1);
v_as_x27_2291_ = v_tail_2298_;
v_b_2292_ = v___x_2299_;
goto _start;
}
else
{
return v___x_2301_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg___boxed(lean_object* v_as_x27_2303_, lean_object* v_b_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_as_x27_2303_, v_b_2304_, v___y_2305_, v___y_2306_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
lean_dec(v_as_x27_2303_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(lean_object* v_x_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_){
_start:
{
lean_object* v___x_2314_; lean_object* v_env_2315_; lean_object* v___f_2316_; lean_object* v___f_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v_scopes_2320_; lean_object* v___x_2321_; lean_object* v_opts_2322_; lean_object* v___x_2323_; 
v___x_2314_ = lean_st_ref_get(v___y_2312_);
v_env_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc_ref_n(v_env_2315_, 3);
lean_dec(v___x_2314_);
v___f_2316_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2316_, 0, v_env_2315_);
v___f_2317_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2317_, 0, v_env_2315_);
v___x_2318_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2319_ = lean_st_ref_get(v___y_2312_);
v_scopes_2320_ = lean_ctor_get(v___x_2319_, 2);
lean_inc(v_scopes_2320_);
lean_dec(v___x_2319_);
v___x_2321_ = l_List_head_x21___redArg(v___x_2318_, v_scopes_2320_);
lean_dec(v_scopes_2320_);
v_opts_2322_ = lean_ctor_get(v___x_2321_, 1);
lean_inc_ref(v_opts_2322_);
lean_dec(v___x_2321_);
v___x_2323_ = l_Lean_Elab_Command_getScope___redArg(v___y_2312_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v_currNamespace_2325_; lean_object* v___f_2326_; lean_object* v___x_2327_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2323_, 1);
v_currNamespace_2325_ = lean_ctor_get(v_a_2324_, 2);
lean_inc_n(v_currNamespace_2325_, 2);
lean_dec(v_a_2324_);
v___f_2326_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2326_, 0, v_currNamespace_2325_);
v___x_2327_ = l_Lean_Elab_Command_getScope___redArg(v___y_2312_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v_openDecls_2329_; lean_object* v___f_2330_; lean_object* v___f_2331_; lean_object* v_methods_2332_; lean_object* v___x_2333_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref_known(v___x_2327_, 1);
v_openDecls_2329_ = lean_ctor_get(v_a_2328_, 3);
lean_inc_n(v_openDecls_2329_, 2);
lean_dec(v_a_2328_);
lean_inc(v_currNamespace_2325_);
lean_inc_ref(v_env_2315_);
v___f_2330_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_2330_, 0, v_env_2315_);
lean_closure_set(v___f_2330_, 1, v_currNamespace_2325_);
lean_closure_set(v___f_2330_, 2, v_openDecls_2329_);
v___f_2331_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_2331_, 0, v_env_2315_);
lean_closure_set(v___f_2331_, 1, v_opts_2322_);
lean_closure_set(v___f_2331_, 2, v_currNamespace_2325_);
lean_closure_set(v___f_2331_, 3, v_openDecls_2329_);
v_methods_2332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_2332_, 0, v___f_2317_);
lean_ctor_set(v_methods_2332_, 1, v___f_2326_);
lean_ctor_set(v_methods_2332_, 2, v___f_2316_);
lean_ctor_set(v_methods_2332_, 3, v___f_2330_);
lean_ctor_set(v_methods_2332_, 4, v___f_2331_);
v___x_2333_ = l_Lean_Elab_Command_getRef___redArg(v___y_2311_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v___x_2335_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2333_, 1);
v___x_2335_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2311_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; lean_object* v_currRecDepth_2337_; lean_object* v_quotContext_x3f_2338_; lean_object* v_a_2340_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref_known(v___x_2335_, 1);
v_currRecDepth_2337_ = lean_ctor_get(v___y_2311_, 2);
v_quotContext_x3f_2338_ = lean_ctor_get(v___y_2311_, 5);
if (lean_obj_tag(v_quotContext_x3f_2338_) == 0)
{
lean_object* v___x_2414_; lean_object* v_a_2415_; 
v___x_2414_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2312_);
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref(v___x_2414_);
v_a_2340_ = v_a_2415_;
goto v___jp_2339_;
}
else
{
lean_object* v_val_2416_; 
v_val_2416_ = lean_ctor_get(v_quotContext_x3f_2338_, 0);
lean_inc(v_val_2416_);
v_a_2340_ = v_val_2416_;
goto v___jp_2339_;
}
v___jp_2339_:
{
lean_object* v___x_2341_; lean_object* v_maxRecDepth_2342_; lean_object* v___x_2343_; lean_object* v_nextMacroScope_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2341_ = lean_st_ref_get(v___y_2312_);
v_maxRecDepth_2342_ = lean_ctor_get(v___x_2341_, 5);
lean_inc(v_maxRecDepth_2342_);
lean_dec(v___x_2341_);
v___x_2343_ = lean_st_ref_get(v___y_2312_);
v_nextMacroScope_2344_ = lean_ctor_get(v___x_2343_, 4);
lean_inc(v_nextMacroScope_2344_);
lean_dec(v___x_2343_);
lean_inc(v_currRecDepth_2337_);
v___x_2345_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2345_, 0, v_methods_2332_);
lean_ctor_set(v___x_2345_, 1, v_a_2340_);
lean_ctor_set(v___x_2345_, 2, v_a_2336_);
lean_ctor_set(v___x_2345_, 3, v_currRecDepth_2337_);
lean_ctor_set(v___x_2345_, 4, v_maxRecDepth_2342_);
lean_ctor_set(v___x_2345_, 5, v_a_2334_);
v___x_2346_ = lean_box(0);
v___x_2347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2347_, 0, v_nextMacroScope_2344_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
lean_ctor_set(v___x_2347_, 2, v___x_2346_);
v___x_2348_ = lean_apply_2(v_x_2310_, v___x_2345_, v___x_2347_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v_a_2350_; lean_object* v_macroScope_2351_; lean_object* v_traceMsgs_2352_; lean_object* v_expandedMacroDecls_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 1);
lean_inc(v_a_2349_);
v_a_2350_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2350_);
lean_dec_ref_known(v___x_2348_, 2);
v_macroScope_2351_ = lean_ctor_get(v_a_2349_, 0);
lean_inc(v_macroScope_2351_);
v_traceMsgs_2352_ = lean_ctor_get(v_a_2349_, 1);
lean_inc(v_traceMsgs_2352_);
v_expandedMacroDecls_2353_ = lean_ctor_get(v_a_2349_, 2);
lean_inc(v_expandedMacroDecls_2353_);
lean_dec(v_a_2349_);
v___x_2354_ = lean_box(0);
v___x_2355_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_expandedMacroDecls_2353_, v___x_2354_, v___y_2311_, v___y_2312_);
lean_dec(v_expandedMacroDecls_2353_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v___x_2356_; lean_object* v_env_2357_; lean_object* v_messages_2358_; lean_object* v_scopes_2359_; lean_object* v_usedQuotCtxts_2360_; lean_object* v_maxRecDepth_2361_; lean_object* v_ngen_2362_; lean_object* v_auxDeclNGen_2363_; lean_object* v_infoState_2364_; lean_object* v_traceState_2365_; lean_object* v_snapshotTasks_2366_; lean_object* v_prevLinterStates_2367_; lean_object* v_codeQualityEntryTasks_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2394_; 
lean_dec_ref_known(v___x_2355_, 1);
v___x_2356_ = lean_st_ref_take(v___y_2312_);
v_env_2357_ = lean_ctor_get(v___x_2356_, 0);
v_messages_2358_ = lean_ctor_get(v___x_2356_, 1);
v_scopes_2359_ = lean_ctor_get(v___x_2356_, 2);
v_usedQuotCtxts_2360_ = lean_ctor_get(v___x_2356_, 3);
v_maxRecDepth_2361_ = lean_ctor_get(v___x_2356_, 5);
v_ngen_2362_ = lean_ctor_get(v___x_2356_, 6);
v_auxDeclNGen_2363_ = lean_ctor_get(v___x_2356_, 7);
v_infoState_2364_ = lean_ctor_get(v___x_2356_, 8);
v_traceState_2365_ = lean_ctor_get(v___x_2356_, 9);
v_snapshotTasks_2366_ = lean_ctor_get(v___x_2356_, 10);
v_prevLinterStates_2367_ = lean_ctor_get(v___x_2356_, 11);
v_codeQualityEntryTasks_2368_ = lean_ctor_get(v___x_2356_, 12);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2394_ == 0)
{
lean_object* v_unused_2395_; 
v_unused_2395_ = lean_ctor_get(v___x_2356_, 4);
lean_dec(v_unused_2395_);
v___x_2370_ = v___x_2356_;
v_isShared_2371_ = v_isSharedCheck_2394_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2368_);
lean_inc(v_prevLinterStates_2367_);
lean_inc(v_snapshotTasks_2366_);
lean_inc(v_traceState_2365_);
lean_inc(v_infoState_2364_);
lean_inc(v_auxDeclNGen_2363_);
lean_inc(v_ngen_2362_);
lean_inc(v_maxRecDepth_2361_);
lean_inc(v_usedQuotCtxts_2360_);
lean_inc(v_scopes_2359_);
lean_inc(v_messages_2358_);
lean_inc(v_env_2357_);
lean_dec(v___x_2356_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2394_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 4, v_macroScope_2351_);
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_env_2357_);
lean_ctor_set(v_reuseFailAlloc_2393_, 1, v_messages_2358_);
lean_ctor_set(v_reuseFailAlloc_2393_, 2, v_scopes_2359_);
lean_ctor_set(v_reuseFailAlloc_2393_, 3, v_usedQuotCtxts_2360_);
lean_ctor_set(v_reuseFailAlloc_2393_, 4, v_macroScope_2351_);
lean_ctor_set(v_reuseFailAlloc_2393_, 5, v_maxRecDepth_2361_);
lean_ctor_set(v_reuseFailAlloc_2393_, 6, v_ngen_2362_);
lean_ctor_set(v_reuseFailAlloc_2393_, 7, v_auxDeclNGen_2363_);
lean_ctor_set(v_reuseFailAlloc_2393_, 8, v_infoState_2364_);
lean_ctor_set(v_reuseFailAlloc_2393_, 9, v_traceState_2365_);
lean_ctor_set(v_reuseFailAlloc_2393_, 10, v_snapshotTasks_2366_);
lean_ctor_set(v_reuseFailAlloc_2393_, 11, v_prevLinterStates_2367_);
lean_ctor_set(v_reuseFailAlloc_2393_, 12, v_codeQualityEntryTasks_2368_);
v___x_2373_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2374_ = lean_st_ref_put(v___y_2312_, v___x_2373_);
v___x_2375_ = l_List_reverse___redArg(v_traceMsgs_2352_);
v___x_2376_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__5(v___x_2375_, v___y_2311_, v___y_2312_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2383_ == 0)
{
lean_object* v_unused_2384_; 
v_unused_2384_ = lean_ctor_get(v___x_2376_, 0);
lean_dec(v_unused_2384_);
v___x_2378_ = v___x_2376_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_dec(v___x_2376_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v_a_2350_);
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2350_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec(v_a_2350_);
v_a_2385_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2376_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2376_);
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
}
}
else
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
lean_dec(v_traceMsgs_2352_);
lean_dec(v_macroScope_2351_);
lean_dec(v_a_2350_);
v_a_2396_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2398_ = v___x_2355_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___x_2355_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_a_2396_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
else
{
lean_object* v_a_2404_; 
v_a_2404_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2404_);
lean_dec_ref_known(v___x_2348_, 2);
if (lean_obj_tag(v_a_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v_a_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; 
v_a_2405_ = lean_ctor_get(v_a_2404_, 0);
lean_inc(v_a_2405_);
v_a_2406_ = lean_ctor_get(v_a_2404_, 1);
lean_inc_ref(v_a_2406_);
lean_dec_ref_known(v_a_2404_, 2);
v___x_2407_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___closed__0));
v___x_2408_ = lean_string_dec_eq(v_a_2406_, v___x_2407_);
if (v___x_2408_ == 0)
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v___x_2409_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2409_, 0, v_a_2406_);
v___x_2410_ = l_Lean_MessageData_ofFormat(v___x_2409_);
v___x_2411_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_a_2405_, v___x_2410_, v___y_2311_, v___y_2312_);
lean_dec(v_a_2405_);
return v___x_2411_;
}
else
{
lean_object* v___x_2412_; 
lean_dec_ref(v_a_2406_);
v___x_2412_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_a_2405_);
return v___x_2412_;
}
}
else
{
lean_object* v___x_2413_; 
v___x_2413_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2413_;
}
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec(v_a_2334_);
lean_dec_ref_known(v_methods_2332_, 5);
lean_dec_ref(v_x_2310_);
v_a_2417_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2335_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2335_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
else
{
lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
lean_dec_ref_known(v_methods_2332_, 5);
lean_dec_ref(v_x_2310_);
v_a_2425_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2333_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2333_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
v___x_2430_ = v___x_2427_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_a_2425_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
}
else
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2440_; 
lean_dec_ref(v___f_2326_);
lean_dec(v_currNamespace_2325_);
lean_dec_ref(v_opts_2322_);
lean_dec_ref(v___f_2317_);
lean_dec_ref(v___f_2316_);
lean_dec_ref(v_env_2315_);
lean_dec_ref(v_x_2310_);
v_a_2433_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2435_ = v___x_2327_;
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2327_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
lean_dec_ref(v_opts_2322_);
lean_dec_ref(v___f_2317_);
lean_dec_ref(v___f_2316_);
lean_dec_ref(v_env_2315_);
lean_dec_ref(v_x_2310_);
v_a_2441_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2323_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2323_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg___boxed(lean_object* v_x_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v_x_2449_, v___y_2450_, v___y_2451_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(lean_object* v_as_2454_, size_t v_i_2455_, size_t v_stop_2456_, lean_object* v_b_2457_){
_start:
{
lean_object* v___y_2459_; uint8_t v___x_2463_; 
v___x_2463_ = lean_usize_dec_eq(v_i_2455_, v_stop_2456_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; uint8_t v___x_2467_; 
v___x_2464_ = lean_array_uget_borrowed(v_as_2454_, v_i_2455_);
lean_inc(v___x_2464_);
v___x_2465_ = l_Lean_Syntax_getKind(v___x_2464_);
v___x_2466_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__10));
v___x_2467_ = lean_name_eq(v___x_2465_, v___x_2466_);
lean_dec(v___x_2465_);
if (v___x_2467_ == 0)
{
v___y_2459_ = v_b_2457_;
goto v___jp_2458_;
}
else
{
lean_object* v___x_2468_; 
lean_inc(v___x_2464_);
v___x_2468_ = lean_array_push(v_b_2457_, v___x_2464_);
v___y_2459_ = v___x_2468_;
goto v___jp_2458_;
}
}
else
{
return v_b_2457_;
}
v___jp_2458_:
{
size_t v___x_2460_; size_t v___x_2461_; 
v___x_2460_ = ((size_t)1ULL);
v___x_2461_ = lean_usize_add(v_i_2455_, v___x_2460_);
v_i_2455_ = v___x_2461_;
v_b_2457_ = v___y_2459_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8___boxed(lean_object* v_as_2469_, lean_object* v_i_2470_, lean_object* v_stop_2471_, lean_object* v_b_2472_){
_start:
{
size_t v_i_boxed_2473_; size_t v_stop_boxed_2474_; lean_object* v_res_2475_; 
v_i_boxed_2473_ = lean_unbox_usize(v_i_2470_);
lean_dec(v_i_2470_);
v_stop_boxed_2474_ = lean_unbox_usize(v_stop_2471_);
lean_dec(v_stop_2471_);
v_res_2475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(v_as_2469_, v_i_boxed_2473_, v_stop_boxed_2474_, v_b_2472_);
lean_dec_ref(v_as_2469_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation(lean_object* v_x_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; uint8_t v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; size_t v___y_2616_; lean_object* v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2619_; lean_object* v___y_2620_; 
v___x_2549_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__0));
v___x_2550_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__1));
v___x_2551_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__1));
lean_inc(v_x_2518_);
v___x_2552_ = l_Lean_Syntax_isOfKind(v_x_2518_, v___x_2551_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2661_; 
lean_dec(v_x_2518_);
v___x_2661_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2661_;
}
else
{
lean_object* v___x_2662_; uint8_t v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; size_t v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v___y_2683_; uint8_t v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2744_; size_t v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; uint8_t v___y_2771_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v___y_2779_; size_t v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; uint8_t v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v___y_2807_; lean_object* v___y_2808_; lean_object* v___y_2809_; lean_object* v___y_2810_; size_t v___y_2811_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; uint8_t v___y_2837_; lean_object* v___y_2838_; lean_object* v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; size_t v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; lean_object* v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v_prio_x3f_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v_name_x3f_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; lean_object* v___y_2955_; lean_object* v___y_2956_; lean_object* v_prec_x3f_2957_; lean_object* v___y_2958_; lean_object* v___y_2959_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v_attrs_x3f_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v_doc_x3f_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___x_3014_; uint8_t v___x_3015_; 
v___x_2662_ = lean_unsigned_to_nat(0u);
v___x_3014_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_2662_);
v___x_3015_ = l_Lean_Syntax_isNone(v___x_3014_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; uint8_t v___x_3017_; 
v___x_3016_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_3014_);
v___x_3017_ = l_Lean_Syntax_matchesNull(v___x_3014_, v___x_3016_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; 
lean_dec(v___x_3014_);
lean_dec(v_x_2518_);
v___x_3018_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_3018_;
}
else
{
lean_object* v_doc_x3f_3019_; lean_object* v___x_3020_; uint8_t v___x_3021_; 
v_doc_x3f_3019_ = l_Lean_Syntax_getArg(v___x_3014_, v___x_2662_);
lean_dec(v___x_3014_);
v___x_3020_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__15));
lean_inc(v_doc_x3f_3019_);
v___x_3021_ = l_Lean_Syntax_isOfKind(v_doc_x3f_3019_, v___x_3020_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; 
lean_dec(v_doc_x3f_3019_);
lean_dec(v_x_2518_);
v___x_3022_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_3022_;
}
else
{
lean_object* v___x_3023_; 
v___x_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3023_, 0, v_doc_x3f_3019_);
v_doc_x3f_2998_ = v___x_3023_;
v___y_2999_ = v_a_2519_;
v___y_3000_ = v_a_2520_;
goto v___jp_2997_;
}
}
}
else
{
lean_object* v___x_3024_; 
lean_dec(v___x_3014_);
v___x_3024_ = lean_box(0);
v_doc_x3f_2998_ = v___x_3024_;
v___y_2999_ = v_a_2519_;
v___y_3000_ = v_a_2520_;
goto v___jp_2997_;
}
v___jp_2663_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; size_t v_sz_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
lean_inc_ref_n(v___y_2671_, 2);
v___x_2684_ = l_Array_append___redArg(v___y_2671_, v___y_2683_);
lean_dec_ref(v___y_2683_);
lean_inc_n(v___y_2665_, 3);
lean_inc_n(v___y_2676_, 9);
v___x_2685_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2685_, 0, v___y_2676_);
lean_ctor_set(v___x_2685_, 1, v___y_2665_);
lean_ctor_set(v___x_2685_, 2, v___x_2684_);
v___x_2686_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__7));
v___x_2687_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
v___x_2688_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___y_2676_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__8));
v___x_2690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___y_2676_);
lean_ctor_set(v___x_2690_, 1, v___x_2689_);
v___x_2691_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_2692_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___y_2676_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___x_2693_ = l_Nat_reprFast(v___y_2674_);
v___x_2694_ = lean_box(2);
v___x_2695_ = l_Lean_Syntax_mkNumLit(v___x_2693_, v___x_2694_);
v___x_2696_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_2697_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___y_2676_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = l_Lean_Syntax_node5(v___y_2676_, v___x_2686_, v___x_2688_, v___x_2690_, v___x_2692_, v___x_2695_, v___x_2697_);
v___x_2699_ = l_Lean_Syntax_node1(v___y_2676_, v___y_2665_, v___x_2698_);
v_sz_2700_ = lean_array_size(v___y_2679_);
v___x_2701_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__3(v_sz_2700_, v___y_2675_, v___y_2679_);
v___x_2702_ = l_Array_append___redArg(v___y_2671_, v___x_2701_);
lean_dec_ref(v___x_2701_);
v___x_2703_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2703_, 0, v___y_2676_);
lean_ctor_set(v___x_2703_, 1, v___y_2665_);
lean_ctor_set(v___x_2703_, 2, v___x_2702_);
v___x_2704_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
v___x_2705_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2705_, 0, v___y_2676_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = lean_unsigned_to_nat(10u);
v___x_2707_ = lean_mk_empty_array_with_capacity(v___x_2706_);
v___x_2708_ = lean_array_push(v___x_2707_, v___y_2681_);
v___x_2709_ = lean_array_push(v___x_2708_, v___y_2669_);
lean_inc(v___y_2677_);
v___x_2710_ = lean_array_push(v___x_2709_, v___y_2677_);
v___x_2711_ = lean_array_push(v___x_2710_, v___y_2673_);
v___x_2712_ = lean_array_push(v___x_2711_, v___y_2666_);
v___x_2713_ = lean_array_push(v___x_2712_, v___x_2685_);
v___x_2714_ = lean_array_push(v___x_2713_, v___x_2699_);
v___x_2715_ = lean_array_push(v___x_2714_, v___x_2703_);
v___x_2716_ = lean_array_push(v___x_2715_, v___x_2705_);
v___x_2717_ = lean_array_push(v___x_2716_, v___y_2682_);
lean_inc(v___y_2680_);
v___x_2718_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2718_, 0, v___y_2676_);
lean_ctor_set(v___x_2718_, 1, v___y_2680_);
lean_ctor_set(v___x_2718_, 2, v___x_2717_);
v___x_2719_ = l_Lean_Elab_Command_elabSyntax(v___x_2718_, v___y_2670_, v___y_2678_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; uint8_t v___x_2723_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_a_2720_);
lean_dec_ref_known(v___x_2719_, 1);
v___x_2721_ = lean_array_get_size(v___y_2667_);
v___x_2722_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__68));
v___x_2723_ = lean_nat_dec_lt(v___x_2662_, v___x_2721_);
if (v___x_2723_ == 0)
{
v___y_2607_ = v___y_2664_;
v___y_2608_ = v___y_2665_;
v___y_2609_ = v___x_2696_;
v___y_2610_ = v___y_2668_;
v___y_2611_ = v___y_2667_;
v___y_2612_ = v___x_2694_;
v___y_2613_ = v___y_2670_;
v___y_2614_ = v___y_2671_;
v___y_2615_ = v___y_2672_;
v___y_2616_ = v___y_2675_;
v___y_2617_ = v_a_2720_;
v___y_2618_ = v___y_2677_;
v___y_2619_ = v___y_2678_;
v___y_2620_ = v___x_2722_;
goto v___jp_2606_;
}
else
{
size_t v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = lean_usize_of_nat(v___x_2721_);
v___x_2725_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabNotation_spec__8(v___y_2667_, v___y_2675_, v___x_2724_, v___x_2722_);
v___y_2607_ = v___y_2664_;
v___y_2608_ = v___y_2665_;
v___y_2609_ = v___x_2696_;
v___y_2610_ = v___y_2668_;
v___y_2611_ = v___y_2667_;
v___y_2612_ = v___x_2694_;
v___y_2613_ = v___y_2670_;
v___y_2614_ = v___y_2671_;
v___y_2615_ = v___y_2672_;
v___y_2616_ = v___y_2675_;
v___y_2617_ = v_a_2720_;
v___y_2618_ = v___y_2677_;
v___y_2619_ = v___y_2678_;
v___y_2620_ = v___x_2725_;
goto v___jp_2606_;
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v___y_2677_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
v_a_2726_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2719_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2719_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
v___jp_2734_:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; 
lean_inc_ref(v___y_2741_);
v___x_2755_ = l_Array_append___redArg(v___y_2741_, v___y_2754_);
lean_dec_ref(v___y_2754_);
lean_inc(v___y_2736_);
lean_inc(v___y_2747_);
v___x_2756_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2756_, 0, v___y_2747_);
lean_ctor_set(v___x_2756_, 1, v___y_2736_);
lean_ctor_set(v___x_2756_, 2, v___x_2755_);
if (lean_obj_tag(v___y_2750_) == 1)
{
lean_object* v_val_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
v_val_2757_ = lean_ctor_get(v___y_2750_, 0);
lean_inc(v_val_2757_);
lean_dec_ref_known(v___y_2750_, 1);
v___x_2758_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__10));
v___x_2759_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__53));
lean_inc_n(v___y_2747_, 5);
v___x_2760_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___y_2747_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
v___x_2761_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__11));
v___x_2762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___y_2747_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__26));
v___x_2764_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___y_2747_);
lean_ctor_set(v___x_2764_, 1, v___x_2763_);
v___x_2765_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__37));
v___x_2766_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2766_, 0, v___y_2747_);
lean_ctor_set(v___x_2766_, 1, v___x_2765_);
v___x_2767_ = l_Lean_Syntax_node5(v___y_2747_, v___x_2758_, v___x_2760_, v___x_2762_, v___x_2764_, v_val_2757_, v___x_2766_);
v___x_2768_ = l_Array_mkArray1___redArg(v___x_2767_);
v___y_2664_ = v___y_2735_;
v___y_2665_ = v___y_2736_;
v___y_2666_ = v___x_2756_;
v___y_2667_ = v___y_2737_;
v___y_2668_ = v___y_2738_;
v___y_2669_ = v___y_2739_;
v___y_2670_ = v___y_2740_;
v___y_2671_ = v___y_2741_;
v___y_2672_ = v___y_2742_;
v___y_2673_ = v___y_2743_;
v___y_2674_ = v___y_2744_;
v___y_2675_ = v___y_2745_;
v___y_2676_ = v___y_2747_;
v___y_2677_ = v___y_2746_;
v___y_2678_ = v___y_2748_;
v___y_2679_ = v___y_2749_;
v___y_2680_ = v___y_2751_;
v___y_2681_ = v___y_2752_;
v___y_2682_ = v___y_2753_;
v___y_2683_ = v___x_2768_;
goto v___jp_2663_;
}
else
{
lean_object* v___x_2769_; 
lean_dec(v___y_2750_);
v___x_2769_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2664_ = v___y_2735_;
v___y_2665_ = v___y_2736_;
v___y_2666_ = v___x_2756_;
v___y_2667_ = v___y_2737_;
v___y_2668_ = v___y_2738_;
v___y_2669_ = v___y_2739_;
v___y_2670_ = v___y_2740_;
v___y_2671_ = v___y_2741_;
v___y_2672_ = v___y_2742_;
v___y_2673_ = v___y_2743_;
v___y_2674_ = v___y_2744_;
v___y_2675_ = v___y_2745_;
v___y_2676_ = v___y_2747_;
v___y_2677_ = v___y_2746_;
v___y_2678_ = v___y_2748_;
v___y_2679_ = v___y_2749_;
v___y_2680_ = v___y_2751_;
v___y_2681_ = v___y_2752_;
v___y_2682_ = v___y_2753_;
v___y_2683_ = v___x_2769_;
goto v___jp_2663_;
}
}
v___jp_2770_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
lean_inc_ref(v___y_2777_);
v___x_2791_ = l_Array_append___redArg(v___y_2777_, v___y_2790_);
lean_dec_ref(v___y_2790_);
lean_inc(v___y_2772_);
lean_inc_n(v___y_2781_, 2);
v___x_2792_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2792_, 0, v___y_2781_);
lean_ctor_set(v___x_2792_, 1, v___y_2772_);
lean_ctor_set(v___x_2792_, 2, v___x_2791_);
lean_inc_ref(v___y_2773_);
v___x_2793_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___y_2781_);
lean_ctor_set(v___x_2793_, 1, v___y_2773_);
if (lean_obj_tag(v___y_2788_) == 1)
{
lean_object* v_val_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_val_2794_ = lean_ctor_get(v___y_2788_, 0);
lean_inc(v_val_2794_);
lean_dec_ref_known(v___y_2788_, 1);
v___x_2795_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
v___x_2796_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__6));
lean_inc_n(v___y_2781_, 2);
v___x_2797_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___y_2781_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = l_Lean_Syntax_node2(v___y_2781_, v___x_2795_, v___x_2797_, v_val_2794_);
v___x_2799_ = l_Array_mkArray1___redArg(v___x_2798_);
v___y_2735_ = v___y_2771_;
v___y_2736_ = v___y_2772_;
v___y_2737_ = v___y_2774_;
v___y_2738_ = v___y_2775_;
v___y_2739_ = v___x_2792_;
v___y_2740_ = v___y_2776_;
v___y_2741_ = v___y_2777_;
v___y_2742_ = v___y_2778_;
v___y_2743_ = v___x_2793_;
v___y_2744_ = v___y_2779_;
v___y_2745_ = v___y_2780_;
v___y_2746_ = v___y_2782_;
v___y_2747_ = v___y_2781_;
v___y_2748_ = v___y_2783_;
v___y_2749_ = v___y_2784_;
v___y_2750_ = v___y_2785_;
v___y_2751_ = v___y_2786_;
v___y_2752_ = v___y_2787_;
v___y_2753_ = v___y_2789_;
v___y_2754_ = v___x_2799_;
goto v___jp_2734_;
}
else
{
lean_object* v___x_2800_; 
lean_dec(v___y_2788_);
v___x_2800_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2735_ = v___y_2771_;
v___y_2736_ = v___y_2772_;
v___y_2737_ = v___y_2774_;
v___y_2738_ = v___y_2775_;
v___y_2739_ = v___x_2792_;
v___y_2740_ = v___y_2776_;
v___y_2741_ = v___y_2777_;
v___y_2742_ = v___y_2778_;
v___y_2743_ = v___x_2793_;
v___y_2744_ = v___y_2779_;
v___y_2745_ = v___y_2780_;
v___y_2746_ = v___y_2782_;
v___y_2747_ = v___y_2781_;
v___y_2748_ = v___y_2783_;
v___y_2749_ = v___y_2784_;
v___y_2750_ = v___y_2785_;
v___y_2751_ = v___y_2786_;
v___y_2752_ = v___y_2787_;
v___y_2753_ = v___y_2789_;
v___y_2754_ = v___x_2800_;
goto v___jp_2734_;
}
}
v___jp_2801_:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
lean_inc_ref(v___y_2808_);
v___x_2822_ = l_Array_append___redArg(v___y_2808_, v___y_2821_);
lean_dec_ref(v___y_2821_);
lean_inc(v___y_2803_);
lean_inc(v___y_2812_);
v___x_2823_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2823_, 0, v___y_2812_);
lean_ctor_set(v___x_2823_, 1, v___y_2803_);
lean_ctor_set(v___x_2823_, 2, v___x_2822_);
if (lean_obj_tag(v___y_2816_) == 1)
{
lean_object* v_val_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v_val_2824_ = lean_ctor_get(v___y_2816_, 0);
lean_inc(v_val_2824_);
lean_dec_ref_known(v___y_2816_, 1);
v___x_2825_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__11));
lean_inc_ref(v___y_2809_);
v___x_2826_ = l_Lean_Name_mkStr4(v___x_2549_, v___x_2550_, v___y_2809_, v___x_2825_);
v___x_2827_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__13));
lean_inc_n(v___y_2812_, 4);
v___x_2828_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___y_2812_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
lean_inc_ref(v___y_2808_);
v___x_2829_ = l_Array_append___redArg(v___y_2808_, v_val_2824_);
lean_dec(v_val_2824_);
lean_inc(v___y_2803_);
v___x_2830_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2830_, 0, v___y_2812_);
lean_ctor_set(v___x_2830_, 1, v___y_2803_);
lean_ctor_set(v___x_2830_, 2, v___x_2829_);
v___x_2831_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__17));
v___x_2832_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___y_2812_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = l_Lean_Syntax_node3(v___y_2812_, v___x_2826_, v___x_2828_, v___x_2830_, v___x_2832_);
v___x_2834_ = l_Array_mkArray1___redArg(v___x_2833_);
v___y_2771_ = v___y_2802_;
v___y_2772_ = v___y_2803_;
v___y_2773_ = v___y_2804_;
v___y_2774_ = v___y_2805_;
v___y_2775_ = v___y_2806_;
v___y_2776_ = v___y_2807_;
v___y_2777_ = v___y_2808_;
v___y_2778_ = v___y_2809_;
v___y_2779_ = v___y_2810_;
v___y_2780_ = v___y_2811_;
v___y_2781_ = v___y_2812_;
v___y_2782_ = v___y_2813_;
v___y_2783_ = v___y_2814_;
v___y_2784_ = v___y_2815_;
v___y_2785_ = v___y_2817_;
v___y_2786_ = v___y_2818_;
v___y_2787_ = v___x_2823_;
v___y_2788_ = v___y_2820_;
v___y_2789_ = v___y_2819_;
v___y_2790_ = v___x_2834_;
goto v___jp_2770_;
}
else
{
lean_object* v___x_2835_; 
lean_dec(v___y_2816_);
v___x_2835_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2771_ = v___y_2802_;
v___y_2772_ = v___y_2803_;
v___y_2773_ = v___y_2804_;
v___y_2774_ = v___y_2805_;
v___y_2775_ = v___y_2806_;
v___y_2776_ = v___y_2807_;
v___y_2777_ = v___y_2808_;
v___y_2778_ = v___y_2809_;
v___y_2779_ = v___y_2810_;
v___y_2780_ = v___y_2811_;
v___y_2781_ = v___y_2812_;
v___y_2782_ = v___y_2813_;
v___y_2783_ = v___y_2814_;
v___y_2784_ = v___y_2815_;
v___y_2785_ = v___y_2817_;
v___y_2786_ = v___y_2818_;
v___y_2787_ = v___x_2823_;
v___y_2788_ = v___y_2820_;
v___y_2789_ = v___y_2819_;
v___y_2790_ = v___x_2835_;
goto v___jp_2770_;
}
}
v___jp_2836_:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2853_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__12));
v___x_2854_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__13));
v___x_2855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__13));
v___x_2856_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__14);
if (lean_obj_tag(v___y_2840_) == 1)
{
lean_object* v_val_2857_; lean_object* v___x_2858_; 
v_val_2857_ = lean_ctor_get(v___y_2840_, 0);
lean_inc(v_val_2857_);
lean_dec_ref_known(v___y_2840_, 1);
v___x_2858_ = l_Array_mkArray1___redArg(v_val_2857_);
v___y_2802_ = v___y_2837_;
v___y_2803_ = v___x_2855_;
v___y_2804_ = v___x_2853_;
v___y_2805_ = v___y_2838_;
v___y_2806_ = v___y_2839_;
v___y_2807_ = v___y_2841_;
v___y_2808_ = v___x_2856_;
v___y_2809_ = v___y_2842_;
v___y_2810_ = v___y_2843_;
v___y_2811_ = v___y_2844_;
v___y_2812_ = v___y_2845_;
v___y_2813_ = v___y_2846_;
v___y_2814_ = v___y_2847_;
v___y_2815_ = v___y_2848_;
v___y_2816_ = v___y_2849_;
v___y_2817_ = v___y_2850_;
v___y_2818_ = v___x_2854_;
v___y_2819_ = v___y_2852_;
v___y_2820_ = v___y_2851_;
v___y_2821_ = v___x_2858_;
goto v___jp_2801_;
}
else
{
lean_object* v___x_2859_; 
lean_dec(v___y_2840_);
v___x_2859_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__7));
v___y_2802_ = v___y_2837_;
v___y_2803_ = v___x_2855_;
v___y_2804_ = v___x_2853_;
v___y_2805_ = v___y_2838_;
v___y_2806_ = v___y_2839_;
v___y_2807_ = v___y_2841_;
v___y_2808_ = v___x_2856_;
v___y_2809_ = v___y_2842_;
v___y_2810_ = v___y_2843_;
v___y_2811_ = v___y_2844_;
v___y_2812_ = v___y_2845_;
v___y_2813_ = v___y_2846_;
v___y_2814_ = v___y_2847_;
v___y_2815_ = v___y_2848_;
v___y_2816_ = v___y_2849_;
v___y_2817_ = v___y_2850_;
v___y_2818_ = v___x_2854_;
v___y_2819_ = v___y_2852_;
v___y_2820_ = v___y_2851_;
v___y_2821_ = v___x_2859_;
goto v___jp_2801_;
}
}
v___jp_2860_:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v_rhs_2873_; lean_object* v___x_2874_; lean_object* v_items_2875_; lean_object* v_attrs_x3f_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2870_ = lean_unsigned_to_nat(7u);
v___x_2871_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_2870_);
v___x_2872_ = lean_unsigned_to_nat(9u);
v_rhs_2873_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_2872_);
v___x_2874_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote___closed__3));
v_items_2875_ = l_Lean_Syntax_getArgs(v___x_2871_);
lean_dec(v___x_2871_);
lean_inc(v_rhs_2873_);
v_attrs_x3f_2876_ = l_Lean_Elab_Command_addInheritDocDefault(v_rhs_2873_, v___y_2862_);
v___x_2877_ = lean_alloc_closure((void*)(l_Lean_evalOptPrio___boxed), 3, 1);
lean_closure_set(v___x_2877_, 0, v_prio_x3f_2867_);
v___x_2878_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2877_, v___y_2868_, v___y_2869_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; size_t v_sz_2880_; size_t v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
lean_inc(v_a_2879_);
lean_dec_ref_known(v___x_2878_, 1);
v_sz_2880_ = lean_array_size(v_items_2875_);
v___x_2881_ = ((size_t)0ULL);
v___x_2882_ = lean_box_usize(v_sz_2880_);
v___x_2883_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___boxed__const__1));
lean_inc_ref(v_items_2875_);
v___x_2884_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__2___boxed), 5, 3);
lean_closure_set(v___x_2884_, 0, v___x_2882_);
lean_closure_set(v___x_2884_, 1, v___x_2883_);
lean_closure_set(v___x_2884_, 2, v_items_2875_);
v___x_2885_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2884_, v___y_2868_, v___y_2869_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; uint8_t v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2885_, 1);
v___x_2887_ = 0;
v___x_2888_ = l_Lean_mkIdentFrom(v_x_2518_, v___x_2874_, v___x_2887_);
lean_dec(v_x_2518_);
v___x_2889_ = l_Lean_Elab_Command_getRef___redArg(v___y_2868_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v_a_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_a_2890_);
lean_dec_ref_known(v___x_2889_, 1);
v___x_2891_ = l_Lean_SourceInfo_fromRef(v_a_2890_, v___x_2887_);
lean_dec(v_a_2890_);
v___x_2892_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2868_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v_quotContext_x3f_2893_; 
lean_dec_ref_known(v___x_2892_, 1);
v_quotContext_x3f_2893_ = lean_ctor_get(v___y_2868_, 5);
if (lean_obj_tag(v_quotContext_x3f_2893_) == 0)
{
lean_object* v___x_2894_; 
v___x_2894_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2869_);
lean_dec_ref(v___x_2894_);
v___y_2837_ = v___x_2887_;
v___y_2838_ = v_items_2875_;
v___y_2839_ = v_rhs_2873_;
v___y_2840_ = v___y_2864_;
v___y_2841_ = v___y_2868_;
v___y_2842_ = v___y_2866_;
v___y_2843_ = v_a_2879_;
v___y_2844_ = v___x_2881_;
v___y_2845_ = v___x_2891_;
v___y_2846_ = v___y_2861_;
v___y_2847_ = v___y_2869_;
v___y_2848_ = v_a_2886_;
v___y_2849_ = v_attrs_x3f_2876_;
v___y_2850_ = v___y_2863_;
v___y_2851_ = v___y_2865_;
v___y_2852_ = v___x_2888_;
goto v___jp_2836_;
}
else
{
v___y_2837_ = v___x_2887_;
v___y_2838_ = v_items_2875_;
v___y_2839_ = v_rhs_2873_;
v___y_2840_ = v___y_2864_;
v___y_2841_ = v___y_2868_;
v___y_2842_ = v___y_2866_;
v___y_2843_ = v_a_2879_;
v___y_2844_ = v___x_2881_;
v___y_2845_ = v___x_2891_;
v___y_2846_ = v___y_2861_;
v___y_2847_ = v___y_2869_;
v___y_2848_ = v_a_2886_;
v___y_2849_ = v_attrs_x3f_2876_;
v___y_2850_ = v___y_2863_;
v___y_2851_ = v___y_2865_;
v___y_2852_ = v___x_2888_;
goto v___jp_2836_;
}
}
else
{
lean_object* v_a_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2902_; 
lean_dec(v___x_2891_);
lean_dec(v___x_2888_);
lean_dec(v_a_2886_);
lean_dec(v_a_2879_);
lean_dec(v_attrs_x3f_2876_);
lean_dec_ref(v_items_2875_);
lean_dec(v_rhs_2873_);
lean_dec(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec(v___y_2861_);
v_a_2895_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2897_ = v___x_2892_;
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_a_2895_);
lean_dec(v___x_2892_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2900_; 
if (v_isShared_2898_ == 0)
{
v___x_2900_ = v___x_2897_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_a_2895_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2910_; 
lean_dec(v___x_2888_);
lean_dec(v_a_2886_);
lean_dec(v_a_2879_);
lean_dec(v_attrs_x3f_2876_);
lean_dec_ref(v_items_2875_);
lean_dec(v_rhs_2873_);
lean_dec(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec(v___y_2861_);
v_a_2903_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2905_ = v___x_2889_;
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_dec(v___x_2889_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2910_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2908_; 
if (v_isShared_2906_ == 0)
{
v___x_2908_ = v___x_2905_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2903_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
lean_dec(v_a_2879_);
lean_dec(v_attrs_x3f_2876_);
lean_dec_ref(v_items_2875_);
lean_dec(v_rhs_2873_);
lean_dec(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec(v___y_2861_);
lean_dec(v_x_2518_);
v_a_2911_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v___x_2885_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v___x_2885_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec(v_attrs_x3f_2876_);
lean_dec_ref(v_items_2875_);
lean_dec(v_rhs_2873_);
lean_dec(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec(v___y_2861_);
lean_dec(v_x_2518_);
v_a_2919_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2878_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2878_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
v___jp_2927_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v___x_2938_ = lean_unsigned_to_nat(6u);
v___x_2939_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_2938_);
v___x_2940_ = l_Lean_Syntax_isNone(v___x_2939_);
if (v___x_2940_ == 0)
{
uint8_t v___x_2941_; 
lean_inc(v___x_2939_);
v___x_2941_ = l_Lean_Syntax_matchesNull(v___x_2939_, v___y_2932_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; 
lean_dec(v___x_2939_);
lean_dec(v_name_x3f_2935_);
lean_dec(v___y_2934_);
lean_dec(v___y_2930_);
lean_dec(v___y_2929_);
lean_dec(v___y_2928_);
lean_dec(v_x_2518_);
v___x_2942_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2942_;
}
else
{
lean_object* v___x_2943_; lean_object* v___x_2944_; uint8_t v___x_2945_; 
v___x_2943_ = l_Lean_Syntax_getArg(v___x_2939_, v___x_2662_);
lean_dec(v___x_2939_);
v___x_2944_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__7));
lean_inc(v___x_2943_);
v___x_2945_ = l_Lean_Syntax_isOfKind(v___x_2943_, v___x_2944_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; 
lean_dec(v___x_2943_);
lean_dec(v_name_x3f_2935_);
lean_dec(v___y_2934_);
lean_dec(v___y_2930_);
lean_dec(v___y_2929_);
lean_dec(v___y_2928_);
lean_dec(v_x_2518_);
v___x_2946_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2946_;
}
else
{
lean_object* v_prio_x3f_2947_; lean_object* v___x_2948_; 
v_prio_x3f_2947_ = l_Lean_Syntax_getArg(v___x_2943_, v___y_2931_);
lean_dec(v___x_2943_);
v___x_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2948_, 0, v_prio_x3f_2947_);
v___y_2861_ = v___y_2928_;
v___y_2862_ = v___y_2929_;
v___y_2863_ = v_name_x3f_2935_;
v___y_2864_ = v___y_2930_;
v___y_2865_ = v___y_2934_;
v___y_2866_ = v___y_2933_;
v_prio_x3f_2867_ = v___x_2948_;
v___y_2868_ = v___y_2936_;
v___y_2869_ = v___y_2937_;
goto v___jp_2860_;
}
}
}
else
{
lean_object* v___x_2949_; 
lean_dec(v___x_2939_);
v___x_2949_ = lean_box(0);
v___y_2861_ = v___y_2928_;
v___y_2862_ = v___y_2929_;
v___y_2863_ = v_name_x3f_2935_;
v___y_2864_ = v___y_2930_;
v___y_2865_ = v___y_2934_;
v___y_2866_ = v___y_2933_;
v_prio_x3f_2867_ = v___x_2949_;
v___y_2868_ = v___y_2936_;
v___y_2869_ = v___y_2937_;
goto v___jp_2860_;
}
}
v___jp_2950_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; uint8_t v___x_2962_; 
v___x_2960_ = lean_unsigned_to_nat(5u);
v___x_2961_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_2960_);
v___x_2962_ = l_Lean_Syntax_isNone(v___x_2961_);
if (v___x_2962_ == 0)
{
uint8_t v___x_2963_; 
lean_inc(v___x_2961_);
v___x_2963_ = l_Lean_Syntax_matchesNull(v___x_2961_, v___y_2955_);
if (v___x_2963_ == 0)
{
lean_object* v___x_2964_; 
lean_dec(v___x_2961_);
lean_dec(v_prec_x3f_2957_);
lean_dec(v___y_2953_);
lean_dec(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec(v_x_2518_);
v___x_2964_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2964_;
}
else
{
lean_object* v___x_2965_; lean_object* v___x_2966_; uint8_t v___x_2967_; 
v___x_2965_ = l_Lean_Syntax_getArg(v___x_2961_, v___x_2662_);
lean_dec(v___x_2961_);
v___x_2966_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__10));
lean_inc(v___x_2965_);
v___x_2967_ = l_Lean_Syntax_isOfKind(v___x_2965_, v___x_2966_);
if (v___x_2967_ == 0)
{
lean_object* v___x_2968_; 
lean_dec(v___x_2965_);
lean_dec(v_prec_x3f_2957_);
lean_dec(v___y_2953_);
lean_dec(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec(v_x_2518_);
v___x_2968_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2968_;
}
else
{
lean_object* v_name_x3f_2969_; lean_object* v___x_2970_; 
v_name_x3f_2969_ = l_Lean_Syntax_getArg(v___x_2965_, v___y_2954_);
lean_dec(v___x_2965_);
v___x_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2970_, 0, v_name_x3f_2969_);
v___y_2928_ = v___y_2951_;
v___y_2929_ = v___y_2952_;
v___y_2930_ = v___y_2953_;
v___y_2931_ = v___y_2954_;
v___y_2932_ = v___y_2955_;
v___y_2933_ = v___y_2956_;
v___y_2934_ = v_prec_x3f_2957_;
v_name_x3f_2935_ = v___x_2970_;
v___y_2936_ = v___y_2958_;
v___y_2937_ = v___y_2959_;
goto v___jp_2927_;
}
}
}
else
{
lean_object* v___x_2971_; 
lean_dec(v___x_2961_);
v___x_2971_ = lean_box(0);
v___y_2928_ = v___y_2951_;
v___y_2929_ = v___y_2952_;
v___y_2930_ = v___y_2953_;
v___y_2931_ = v___y_2954_;
v___y_2932_ = v___y_2955_;
v___y_2933_ = v___y_2956_;
v___y_2934_ = v_prec_x3f_2957_;
v_name_x3f_2935_ = v___x_2971_;
v___y_2936_ = v___y_2958_;
v___y_2937_ = v___y_2959_;
goto v___jp_2927_;
}
}
v___jp_2972_:
{
lean_object* v___x_2978_; lean_object* v_attrKind_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; uint8_t v___x_2982_; 
v___x_2978_ = lean_unsigned_to_nat(2u);
v_attrKind_2979_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_2978_);
v___x_2980_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__2));
v___x_2981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_addInheritDocDefault_spec__0___closed__6));
lean_inc(v_attrKind_2979_);
v___x_2982_ = l_Lean_Syntax_isOfKind(v_attrKind_2979_, v___x_2981_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; 
lean_dec(v_attrKind_2979_);
lean_dec(v_attrs_x3f_2975_);
lean_dec(v___y_2973_);
lean_dec(v_x_2518_);
v___x_2983_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2983_;
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; 
v___x_2984_ = lean_unsigned_to_nat(3u);
v___x_2985_ = lean_unsigned_to_nat(4u);
v___x_2986_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_2985_);
v___x_2987_ = l_Lean_Syntax_isNone(v___x_2986_);
if (v___x_2987_ == 0)
{
uint8_t v___x_2988_; 
lean_inc(v___x_2986_);
v___x_2988_ = l_Lean_Syntax_matchesNull(v___x_2986_, v___y_2974_);
if (v___x_2988_ == 0)
{
lean_object* v___x_2989_; 
lean_dec(v___x_2986_);
lean_dec(v_attrKind_2979_);
lean_dec(v_attrs_x3f_2975_);
lean_dec(v___y_2973_);
lean_dec(v_x_2518_);
v___x_2989_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2989_;
}
else
{
lean_object* v___x_2990_; lean_object* v___x_2991_; uint8_t v___x_2992_; 
v___x_2990_ = l_Lean_Syntax_getArg(v___x_2986_, v___x_2662_);
lean_dec(v___x_2986_);
v___x_2991_ = ((lean_object*)(l_Lean_Elab_Command_expandNotationItemIntoSyntaxItem___closed__5));
lean_inc(v___x_2990_);
v___x_2992_ = l_Lean_Syntax_isOfKind(v___x_2990_, v___x_2991_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2993_; 
lean_dec(v___x_2990_);
lean_dec(v_attrKind_2979_);
lean_dec(v_attrs_x3f_2975_);
lean_dec(v___y_2973_);
lean_dec(v_x_2518_);
v___x_2993_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_2993_;
}
else
{
lean_object* v_prec_x3f_2994_; lean_object* v___x_2995_; 
v_prec_x3f_2994_ = l_Lean_Syntax_getArg(v___x_2990_, v___y_2974_);
lean_dec(v___x_2990_);
v___x_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2995_, 0, v_prec_x3f_2994_);
v___y_2951_ = v_attrKind_2979_;
v___y_2952_ = v_attrs_x3f_2975_;
v___y_2953_ = v___y_2973_;
v___y_2954_ = v___x_2984_;
v___y_2955_ = v___y_2974_;
v___y_2956_ = v___x_2980_;
v_prec_x3f_2957_ = v___x_2995_;
v___y_2958_ = v___y_2976_;
v___y_2959_ = v___y_2977_;
goto v___jp_2950_;
}
}
}
else
{
lean_object* v___x_2996_; 
lean_dec(v___x_2986_);
v___x_2996_ = lean_box(0);
v___y_2951_ = v_attrKind_2979_;
v___y_2952_ = v_attrs_x3f_2975_;
v___y_2953_ = v___y_2973_;
v___y_2954_ = v___x_2984_;
v___y_2955_ = v___y_2974_;
v___y_2956_ = v___x_2980_;
v_prec_x3f_2957_ = v___x_2996_;
v___y_2958_ = v___y_2976_;
v___y_2959_ = v___y_2977_;
goto v___jp_2950_;
}
}
}
v___jp_2997_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3001_ = lean_unsigned_to_nat(1u);
v___x_3002_ = l_Lean_Syntax_getArg(v_x_2518_, v___x_3001_);
v___x_3003_ = l_Lean_Syntax_isNone(v___x_3002_);
if (v___x_3003_ == 0)
{
uint8_t v___x_3004_; 
lean_inc(v___x_3002_);
v___x_3004_ = l_Lean_Syntax_matchesNull(v___x_3002_, v___x_3001_);
if (v___x_3004_ == 0)
{
lean_object* v___x_3005_; 
lean_dec(v___x_3002_);
lean_dec(v_doc_x3f_2998_);
lean_dec(v_x_2518_);
v___x_3005_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_3005_;
}
else
{
lean_object* v___x_3006_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v___x_3006_ = l_Lean_Syntax_getArg(v___x_3002_, v___x_2662_);
lean_dec(v___x_3002_);
v___x_3007_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__12));
lean_inc(v___x_3006_);
v___x_3008_ = l_Lean_Syntax_isOfKind(v___x_3006_, v___x_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; 
lean_dec(v___x_3006_);
lean_dec(v_doc_x3f_2998_);
lean_dec(v_x_2518_);
v___x_3009_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabNotation_spec__0___redArg();
return v___x_3009_;
}
else
{
lean_object* v___x_3010_; lean_object* v_attrs_x3f_3011_; lean_object* v___x_3012_; 
v___x_3010_ = l_Lean_Syntax_getArg(v___x_3006_, v___x_3001_);
lean_dec(v___x_3006_);
v_attrs_x3f_3011_ = l_Lean_Syntax_getArgs(v___x_3010_);
lean_dec(v___x_3010_);
v___x_3012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3012_, 0, v_attrs_x3f_3011_);
v___y_2973_ = v_doc_x3f_2998_;
v___y_2974_ = v___x_3001_;
v_attrs_x3f_2975_ = v___x_3012_;
v___y_2976_ = v___y_2999_;
v___y_2977_ = v___y_3000_;
goto v___jp_2972_;
}
}
}
else
{
lean_object* v___x_3013_; 
lean_dec(v___x_3002_);
v___x_3013_ = lean_box(0);
v___y_2973_ = v_doc_x3f_2998_;
v___y_2974_ = v___x_3001_;
v_attrs_x3f_2975_ = v___x_3013_;
v___y_2976_ = v___y_2999_;
v___y_2977_ = v___y_3000_;
goto v___jp_2972_;
}
}
}
v___jp_2522_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2528_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_mkUnexpander___boxed), 5, 3);
lean_closure_set(v___x_2528_, 0, v___y_2523_);
lean_closure_set(v___x_2528_, 1, v___y_2525_);
lean_closure_set(v___x_2528_, 2, v___y_2524_);
v___x_2529_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2528_, v___y_2526_, v___y_2527_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2540_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2532_ = v___x_2529_;
v_isShared_2533_ = v_isSharedCheck_2540_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2529_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2540_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
if (lean_obj_tag(v_a_2530_) == 1)
{
lean_object* v_val_2534_; lean_object* v___x_2535_; 
lean_del_object(v___x_2532_);
v_val_2534_ = lean_ctor_get(v_a_2530_, 0);
lean_inc(v_val_2534_);
lean_dec_ref_known(v_a_2530_, 1);
v___x_2535_ = l_Lean_Elab_Command_elabCommand(v_val_2534_, v___y_2526_, v___y_2527_);
return v___x_2535_;
}
else
{
lean_object* v___x_2536_; lean_object* v___x_2538_; 
lean_dec(v_a_2530_);
v___x_2536_ = lean_box(0);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 0, v___x_2536_);
v___x_2538_ = v___x_2532_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
v_a_2541_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2529_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2529_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
v___jp_2553_:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; 
v___x_2564_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__2));
v___x_2565_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__3));
lean_inc_ref(v___y_2562_);
lean_inc_n(v___y_2557_, 4);
lean_inc_n(v___y_2554_, 15);
v___x_2566_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2566_, 0, v___y_2554_);
lean_ctor_set(v___x_2566_, 1, v___y_2557_);
lean_ctor_set(v___x_2566_, 2, v___y_2562_);
v___x_2567_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___y_2554_);
lean_ctor_set(v___x_2567_, 1, v___x_2564_);
v___x_2568_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__29));
lean_inc_ref_n(v___y_2563_, 4);
v___x_2569_ = l_Lean_Name_mkStr4(v___x_2549_, v___x_2550_, v___y_2563_, v___x_2568_);
v___x_2570_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__31));
v___x_2571_ = l_Lean_Name_mkStr4(v___x_2549_, v___x_2550_, v___y_2563_, v___x_2570_);
v___x_2572_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__33));
v___x_2573_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2573_, 0, v___y_2554_);
lean_ctor_set(v___x_2573_, 1, v___x_2572_);
v___x_2574_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__34));
v___x_2575_ = l_Lean_Name_mkStr4(v___x_2549_, v___x_2550_, v___y_2563_, v___x_2574_);
v___x_2576_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__36));
v___x_2577_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___y_2554_);
lean_ctor_set(v___x_2577_, 1, v___x_2576_);
lean_inc_ref(v___y_2558_);
v___x_2578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___y_2554_);
lean_ctor_set(v___x_2578_, 1, v___y_2558_);
lean_inc_ref(v___x_2578_);
lean_inc(v___y_2561_);
lean_inc_ref(v___x_2577_);
lean_inc(v___x_2575_);
v___x_2579_ = l_Lean_Syntax_node3(v___y_2554_, v___x_2575_, v___x_2577_, v___y_2561_, v___x_2578_);
v___x_2580_ = l_Lean_Syntax_node1(v___y_2554_, v___y_2557_, v___x_2579_);
v___x_2581_ = l_Lean_Syntax_node1(v___y_2554_, v___y_2557_, v___x_2580_);
v___x_2582_ = ((lean_object*)(l_Lean_Elab_Command_mkUnexpander___closed__38));
v___x_2583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___y_2554_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__4));
v___x_2585_ = l_Lean_Name_mkStr4(v___x_2549_, v___x_2550_, v___y_2563_, v___x_2584_);
v___x_2586_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__5));
v___x_2587_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___y_2554_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
lean_inc(v___y_2559_);
v___x_2588_ = l_Lean_Syntax_node3(v___y_2554_, v___x_2575_, v___x_2577_, v___y_2559_, v___x_2578_);
v___x_2589_ = l_Lean_Syntax_node2(v___y_2554_, v___x_2585_, v___x_2587_, v___x_2588_);
v___x_2590_ = l_Lean_Syntax_node4(v___y_2554_, v___x_2571_, v___x_2573_, v___x_2581_, v___x_2583_, v___x_2589_);
v___x_2591_ = l_Lean_Syntax_node1(v___y_2554_, v___y_2557_, v___x_2590_);
v___x_2592_ = l_Lean_Syntax_node1(v___y_2554_, v___x_2569_, v___x_2591_);
lean_inc_n(v___y_2555_, 2);
lean_inc_ref_n(v___x_2566_, 2);
v___x_2593_ = l_Lean_Syntax_node6(v___y_2554_, v___x_2565_, v___x_2566_, v___x_2566_, v___y_2555_, v___x_2567_, v___x_2566_, v___x_2592_);
v___x_2594_ = l_Lean_Elab_Command_isLocalAttrKind(v___y_2555_);
if (v___x_2594_ == 0)
{
lean_object* v___x_2595_; 
v___x_2595_ = l_Lean_Elab_Command_elabCommand(v___x_2593_, v___y_2560_, v___y_2556_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_dec_ref_known(v___x_2595_, 1);
v___y_2523_ = v___y_2555_;
v___y_2524_ = v___y_2559_;
v___y_2525_ = v___y_2561_;
v___y_2526_ = v___y_2560_;
v___y_2527_ = v___y_2556_;
goto v___jp_2522_;
}
else
{
lean_dec(v___y_2561_);
lean_dec(v___y_2559_);
lean_dec(v___y_2555_);
return v___x_2595_;
}
}
else
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v_scopes_2598_; lean_object* v___x_2599_; lean_object* v_opts_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___f_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2596_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2597_ = lean_st_ref_get(v___y_2556_);
v_scopes_2598_ = lean_ctor_get(v___x_2597_, 2);
lean_inc(v_scopes_2598_);
lean_dec(v___x_2597_);
v___x_2599_ = l_List_head_x21___redArg(v___x_2596_, v_scopes_2598_);
lean_dec(v_scopes_2598_);
v_opts_2600_ = lean_ctor_get(v___x_2599_, 1);
lean_inc_ref(v_opts_2600_);
lean_dec(v___x_2599_);
v___x_2601_ = l_Lean_Elab_Term_Quotation_quotPrecheck_allowSectionVars;
v___x_2602_ = l_Lean_Option_set___at___00Lean_Elab_Command_elabNotation_spec__6(v_opts_2600_, v___x_2601_, v___x_2552_);
v___f_2603_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNotation___lam__0), 2, 1);
lean_closure_set(v___f_2603_, 0, v___x_2602_);
v___x_2604_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand___boxed), 4, 1);
lean_closure_set(v___x_2604_, 0, v___x_2593_);
v___x_2605_ = l_Lean_Elab_Command_withScope___redArg(v___f_2603_, v___x_2604_, v___y_2560_, v___y_2556_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_dec_ref_known(v___x_2605_, 1);
v___y_2523_ = v___y_2555_;
v___y_2524_ = v___y_2559_;
v___y_2525_ = v___y_2561_;
v___y_2526_ = v___y_2560_;
v___y_2527_ = v___y_2556_;
goto v___jp_2522_;
}
else
{
lean_dec(v___y_2561_);
lean_dec(v___y_2559_);
lean_dec(v___y_2555_);
return v___x_2605_;
}
}
}
v___jp_2606_:
{
size_t v_sz_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; size_t v_sz_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v_sz_2621_ = lean_array_size(v___y_2620_);
v___x_2622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__4(v_sz_2621_, v___y_2616_, v___y_2620_);
v___x_2623_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_antiquote(v___x_2622_, v___y_2610_);
lean_dec_ref(v___x_2622_);
v_sz_2624_ = lean_array_size(v___y_2611_);
v___x_2625_ = lean_box_usize(v_sz_2624_);
v___x_2626_ = lean_box_usize(v___y_2616_);
v___x_2627_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNotation_spec__5___boxed), 5, 3);
lean_closure_set(v___x_2627_, 0, v___x_2625_);
lean_closure_set(v___x_2627_, 1, v___x_2626_);
lean_closure_set(v___x_2627_, 2, v___y_2611_);
v___x_2628_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v___x_2627_, v___y_2613_, v___y_2619_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2630_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2630_, 0, v___y_2612_);
lean_ctor_set(v___x_2630_, 1, v___y_2617_);
lean_ctor_set(v___x_2630_, 2, v_a_2629_);
v___x_2631_ = l_Lean_Elab_Command_getRef___redArg(v___y_2613_);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2631_, 1);
v___x_2633_ = l_Lean_SourceInfo_fromRef(v_a_2632_, v___y_2607_);
lean_dec(v_a_2632_);
v___x_2634_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_2613_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_quotContext_x3f_2635_; 
lean_dec_ref_known(v___x_2634_, 1);
v_quotContext_x3f_2635_ = lean_ctor_get(v___y_2613_, 5);
if (lean_obj_tag(v_quotContext_x3f_2635_) == 0)
{
lean_object* v___x_2636_; 
v___x_2636_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNotation_spec__7___redArg(v___y_2619_);
lean_dec_ref(v___x_2636_);
v___y_2554_ = v___x_2633_;
v___y_2555_ = v___y_2618_;
v___y_2556_ = v___y_2619_;
v___y_2557_ = v___y_2608_;
v___y_2558_ = v___y_2609_;
v___y_2559_ = v___x_2623_;
v___y_2560_ = v___y_2613_;
v___y_2561_ = v___x_2630_;
v___y_2562_ = v___y_2614_;
v___y_2563_ = v___y_2615_;
goto v___jp_2553_;
}
else
{
v___y_2554_ = v___x_2633_;
v___y_2555_ = v___y_2618_;
v___y_2556_ = v___y_2619_;
v___y_2557_ = v___y_2608_;
v___y_2558_ = v___y_2609_;
v___y_2559_ = v___x_2623_;
v___y_2560_ = v___y_2613_;
v___y_2561_ = v___x_2630_;
v___y_2562_ = v___y_2614_;
v___y_2563_ = v___y_2615_;
goto v___jp_2553_;
}
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
lean_dec(v___x_2633_);
lean_dec_ref_known(v___x_2630_, 3);
lean_dec(v___x_2623_);
lean_dec(v___y_2618_);
v_a_2637_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2634_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2634_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_dec_ref_known(v___x_2630_, 3);
lean_dec(v___x_2623_);
lean_dec(v___y_2618_);
v_a_2645_ = lean_ctor_get(v___x_2631_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2631_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2631_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
lean_dec(v___x_2623_);
lean_dec(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec(v___y_2612_);
v_a_2653_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2628_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2628_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNotation___boxed(lean_object* v_x_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = l_Lean_Elab_Command_elabNotation(v_x_3025_, v_a_3026_, v_a_3027_);
lean_dec(v_a_3027_);
lean_dec_ref(v_a_3026_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(lean_object* v_00_u03b1_3030_, lean_object* v_x_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_){
_start:
{
lean_object* v___x_3034_; 
v___x_3034_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___redArg(v_x_3031_, v___y_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3035_, lean_object* v_x_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__2(v_00_u03b1_3035_, v_x_3036_, v___y_3037_, v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec_ref(v_x_3036_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(lean_object* v_00_u03b1_3040_, lean_object* v_ref_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_){
_start:
{
lean_object* v___x_3045_; 
v___x_3045_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___redArg(v_ref_3041_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7___boxed(lean_object* v_00_u03b1_3046_, lean_object* v_ref_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__7(v_00_u03b1_3046_, v_ref_3047_, v___y_3048_, v___y_3049_);
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(lean_object* v_00_u03b1_3052_, lean_object* v_x_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_){
_start:
{
lean_object* v___x_3057_; 
v___x_3057_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___redArg(v_x_3053_, v___y_3054_, v___y_3055_);
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1___boxed(lean_object* v_00_u03b1_3058_, lean_object* v_x_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1(v_00_u03b1_3058_, v_x_3059_, v___y_3060_, v___y_3061_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(lean_object* v_msgData_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_){
_start:
{
lean_object* v___x_3068_; 
v___x_3068_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___redArg(v_msgData_3064_, v___y_3066_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__1_spec__3(v_msgData_3069_, v___y_3070_, v___y_3071_);
lean_dec(v___y_3071_);
lean_dec_ref(v___y_3070_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(lean_object* v_as_3074_, lean_object* v_as_x27_3075_, lean_object* v_b_3076_, lean_object* v_a_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v___x_3081_; 
v___x_3081_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___redArg(v_as_x27_3075_, v_b_3076_, v___y_3078_, v___y_3079_);
return v___x_3081_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4___boxed(lean_object* v_as_3082_, lean_object* v_as_x27_3083_, lean_object* v_b_3084_, lean_object* v_a_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__4(v_as_3082_, v_as_x27_3083_, v_b_3084_, v_a_3085_, v___y_3086_, v___y_3087_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v_as_x27_3083_);
lean_dec(v_as_3082_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(lean_object* v_00_u03b1_3090_, lean_object* v_ref_3091_, lean_object* v_msg_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v___x_3096_; 
v___x_3096_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___redArg(v_ref_3091_, v_msg_3092_, v___y_3093_, v___y_3094_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6___boxed(lean_object* v_00_u03b1_3097_, lean_object* v_ref_3098_, lean_object* v_msg_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6(v_00_u03b1_3097_, v_ref_3098_, v_msg_3099_, v___y_3100_, v___y_3101_);
lean_dec(v___y_3101_);
lean_dec_ref(v___y_3100_);
lean_dec(v_ref_3098_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_3104_, lean_object* v_m_3105_, lean_object* v_a_3106_){
_start:
{
lean_object* v___x_3107_; 
v___x_3107_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___redArg(v_m_3105_, v_a_3106_);
return v___x_3107_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8___boxed(lean_object* v_00_u03b2_3108_, lean_object* v_m_3109_, lean_object* v_a_3110_){
_start:
{
lean_object* v_res_3111_; 
v_res_3111_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8(v_00_u03b2_3108_, v_m_3109_, v_a_3110_);
lean_dec(v_a_3110_);
lean_dec_ref(v_m_3109_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(lean_object* v_00_u03b1_3112_, lean_object* v_msg_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_){
_start:
{
lean_object* v___x_3117_; 
v___x_3117_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___redArg(v_msg_3113_, v___y_3114_, v___y_3115_);
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12___boxed(lean_object* v_00_u03b1_3118_, lean_object* v_msg_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12(v_00_u03b1_3118_, v_msg_3119_, v___y_3120_, v___y_3121_);
lean_dec(v___y_3121_);
lean_dec_ref(v___y_3120_);
return v_res_3123_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(lean_object* v_00_u03b2_3124_, lean_object* v_x_3125_, lean_object* v_x_3126_){
_start:
{
uint8_t v___x_3127_; 
v___x_3127_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___redArg(v_x_3125_, v_x_3126_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15___boxed(lean_object* v_00_u03b2_3128_, lean_object* v_x_3129_, lean_object* v_x_3130_){
_start:
{
uint8_t v_res_3131_; lean_object* v_r_3132_; 
v_res_3131_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15(v_00_u03b2_3128_, v_x_3129_, v_x_3130_);
lean_dec_ref(v_x_3130_);
lean_dec_ref(v_x_3129_);
v_r_3132_ = lean_box(v_res_3131_);
return v_r_3132_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16(lean_object* v_00_u03b2_3133_, lean_object* v_m_3134_, lean_object* v_a_3135_, lean_object* v_b_3136_){
_start:
{
lean_object* v___x_3137_; 
v___x_3137_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16___redArg(v_m_3134_, v_a_3135_, v_b_3136_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19(lean_object* v_00_u03b2_3138_, lean_object* v_a_3139_, lean_object* v_x_3140_){
_start:
{
lean_object* v___x_3141_; 
v___x_3141_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___redArg(v_a_3139_, v_x_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19___boxed(lean_object* v_00_u03b2_3142_, lean_object* v_a_3143_, lean_object* v_x_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__8_spec__19(v_00_u03b2_3142_, v_a_3143_, v_x_3144_);
lean_dec(v_x_3144_);
lean_dec(v_a_3143_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24(lean_object* v_msgData_3146_, lean_object* v_macroStack_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v___x_3151_; 
v___x_3151_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___redArg(v_msgData_3146_, v_macroStack_3147_, v___y_3149_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24___boxed(lean_object* v_msgData_3152_, lean_object* v_macroStack_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__6_spec__12_spec__24(v_msgData_3152_, v_macroStack_3153_, v___y_3154_, v___y_3155_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
return v_res_3157_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(lean_object* v_00_u03b2_3158_, lean_object* v_x_3159_, size_t v_x_3160_, lean_object* v_x_3161_){
_start:
{
uint8_t v___x_3162_; 
v___x_3162_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___redArg(v_x_3159_, v_x_3160_, v_x_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19___boxed(lean_object* v_00_u03b2_3163_, lean_object* v_x_3164_, lean_object* v_x_3165_, lean_object* v_x_3166_){
_start:
{
size_t v_x_24109__boxed_3167_; uint8_t v_res_3168_; lean_object* v_r_3169_; 
v_x_24109__boxed_3167_ = lean_unbox_usize(v_x_3165_);
lean_dec(v_x_3165_);
v_res_3168_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19(v_00_u03b2_3163_, v_x_3164_, v_x_24109__boxed_3167_, v_x_3166_);
lean_dec_ref(v_x_3166_);
lean_dec_ref(v_x_3164_);
v_r_3169_ = lean_box(v_res_3168_);
return v_r_3169_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21(lean_object* v_00_u03b2_3170_, lean_object* v_a_3171_, lean_object* v_x_3172_){
_start:
{
uint8_t v___x_3173_; 
v___x_3173_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___redArg(v_a_3171_, v_x_3172_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21___boxed(lean_object* v_00_u03b2_3174_, lean_object* v_a_3175_, lean_object* v_x_3176_){
_start:
{
uint8_t v_res_3177_; lean_object* v_r_3178_; 
v_res_3177_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__21(v_00_u03b2_3174_, v_a_3175_, v_x_3176_);
lean_dec(v_x_3176_);
lean_dec_ref(v_a_3175_);
v_r_3178_ = lean_box(v_res_3177_);
return v_r_3178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22(lean_object* v_00_u03b2_3179_, lean_object* v_data_3180_){
_start:
{
lean_object* v___x_3181_; 
v___x_3181_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22___redArg(v_data_3180_);
return v___x_3181_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(lean_object* v_00_u03b2_3182_, lean_object* v_keys_3183_, lean_object* v_vals_3184_, lean_object* v_heq_3185_, lean_object* v_i_3186_, lean_object* v_k_3187_){
_start:
{
uint8_t v___x_3188_; 
v___x_3188_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___redArg(v_keys_3183_, v_i_3186_, v_k_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23___boxed(lean_object* v_00_u03b2_3189_, lean_object* v_keys_3190_, lean_object* v_vals_3191_, lean_object* v_heq_3192_, lean_object* v_i_3193_, lean_object* v_k_3194_){
_start:
{
uint8_t v_res_3195_; lean_object* v_r_3196_; 
v_res_3195_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__15_spec__19_spec__23(v_00_u03b2_3189_, v_keys_3190_, v_vals_3191_, v_heq_3192_, v_i_3193_, v_k_3194_);
lean_dec_ref(v_k_3194_);
lean_dec_ref(v_vals_3191_);
lean_dec_ref(v_keys_3190_);
v_r_3196_ = lean_box(v_res_3195_);
return v_r_3196_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27(lean_object* v_00_u03b2_3197_, lean_object* v_i_3198_, lean_object* v_source_3199_, lean_object* v_target_3200_){
_start:
{
lean_object* v___x_3201_; 
v___x_3201_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27___redArg(v_i_3198_, v_source_3199_, v_target_3200_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27_spec__31(lean_object* v_00_u03b2_3202_, lean_object* v_x_3203_, lean_object* v_x_3204_){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Command_elabNotation_spec__1_spec__3_spec__6_spec__16_spec__22_spec__27_spec__31___redArg(v_x_3203_, v_x_3204_);
return v___x_3205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1(){
_start:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3213_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3214_ = ((lean_object*)(l_Lean_Elab_Command_elabNotation___closed__1));
v___x_3215_ = ((lean_object*)(l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___closed__1));
v___x_3216_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNotation___boxed), 4, 0);
v___x_3217_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3213_, v___x_3214_, v___x_3215_, v___x_3216_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1___boxed(lean_object* v_a_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
return v_res_3219_;
}
}
lean_object* runtime_initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Notation_0__Lean_Elab_Command_elabNotation___regBuiltin_Lean_Elab_Command_elabNotation__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinNotation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinNotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Notation(builtin);
}
#ifdef __cplusplus
}
#endif
