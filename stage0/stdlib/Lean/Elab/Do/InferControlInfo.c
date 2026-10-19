// Lean compiler output
// Module: Lean.Elab.Do.InferControlInfo
// Imports: public import Lean.Elab.Term public import Lean.Elab.Do.ForwardSyntax meta import Lean.Parser.Do import Lean.Elab.Do.PatternVar
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Parser_Term_getDoElems(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_getLetPatDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLetIdDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_Forward_matchApp_x3f(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_pure;
static lean_once_cell_t l_Lean_Elab_Do_ControlInfo_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlInfo_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_empty;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", reassigns: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = ", numRegularExits: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ",\n    noFallthrough: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ",\n    returnsEarly: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "breaks: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", continues: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value)} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "builtin_doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 75, 74, 17, 172, 74, 138, 206)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 182, 102, 169, 76, 87, 55, 254)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElem"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 65, 144, 138, 55, 55, 217, 220)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ControlInfoHandler"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 126, 127, 228, 104, 205, 61, 148)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "control info inference"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "controlInfoElemAttribute"};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 110, 218, 82, 47, 2, 10, 58)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 238, .m_capacity = 238, .m_length = 235, .m_data = "Registers a `ControlInfo` inference handler for the given `doElem` syntax node kind.\n\nA handler should have type `ControlInfoHandler` (i.e. `DoElem → TermElabM ControlInfo`).\nFor pure handlers, use `fun stx => return ControlInfo.pure`."};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(119) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(127) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(126) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(126) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value;
static const lean_ctor_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40_spec__42___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 165, 255, 22, 123, 199, 70, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doForDecl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 147, 251, 147, 43, 72, 7, 132)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "No `ControlInfo` inference handler found for `"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "` in syntax "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "\nRegister a handler with `@[doElem_control_info "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]`."};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doBreak"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value),LEAN_SCALAR_PTR_LITERAL(100, 48, 134, 252, 224, 171, 60, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doContinue"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value),LEAN_SCALAR_PTR_LITERAL(99, 212, 187, 103, 216, 35, 231, 189)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Not a let or reassignment declaration: "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doUnless"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value),LEAN_SCALAR_PTR_LITERAL(231, 120, 137, 73, 40, 67, 249, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doFor"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value),LEAN_SCALAR_PTR_LITERAL(164, 12, 178, 2, 144, 97, 71, 235)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doRepeat"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value),LEAN_SCALAR_PTR_LITERAL(27, 14, 140, 183, 155, 194, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doTry"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value),LEAN_SCALAR_PTR_LITERAL(183, 105, 89, 167, 131, 32, 5, 203)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doDbgTrace"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value),LEAN_SCALAR_PTR_LITERAL(34, 125, 157, 23, 122, 81, 121, 195)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value),LEAN_SCALAR_PTR_LITERAL(171, 15, 212, 125, 46, 208, 251, 33)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doDebugAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value),LEAN_SCALAR_PTR_LITERAL(219, 254, 62, 12, 192, 208, 196, 20)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doAssertion"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value),LEAN_SCALAR_PTR_LITERAL(144, 179, 243, 245, 156, 230, 227, 142)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doMatchExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value),LEAN_SCALAR_PTR_LITERAL(72, 0, 49, 218, 206, 236, 229, 165)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value),LEAN_SCALAR_PTR_LITERAL(68, 239, 85, 151, 235, 111, 29, 229)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doLetMetaExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value),LEAN_SCALAR_PTR_LITERAL(231, 210, 172, 145, 91, 221, 30, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "matchExprAlts"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value),LEAN_SCALAR_PTR_LITERAL(88, 158, 245, 158, 91, 207, 89, 187)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchExprElseAlt"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value),LEAN_SCALAR_PTR_LITERAL(249, 132, 98, 23, 98, 205, 167, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doCatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 196, 191, 146, 79, 230, 20, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "doCatchMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 106, 10, 98, 177, 11, 181, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Not a catch or catch match: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doFinally"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value),LEAN_SCALAR_PTR_LITERAL(94, 201, 209, 4, 148, 58, 33, 223)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doLoopDecreasing"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value),LEAN_SCALAR_PTR_LITERAL(0, 112, 64, 8, 91, 183, 41, 148)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doLoopInvariant"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value),LEAN_SCALAR_PTR_LITERAL(207, 155, 107, 150, 202, 64, 185, 181)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizingParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value),LEAN_SCALAR_PTR_LITERAL(147, 206, 52, 232, 193, 222, 34, 109)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "dependentParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value),LEAN_SCALAR_PTR_LITERAL(78, 215, 202, 78, 135, 250, 138, 86)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doErasedArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value),LEAN_SCALAR_PTR_LITERAL(176, 216, 203, 158, 108, 103, 134, 112)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doErased"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value),LEAN_SCALAR_PTR_LITERAL(69, 69, 120, 16, 133, 86, 56, 26)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40_spec__42(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; uint8_t v___x_3_; lean_object* v___x_4_; 
v___x_1_ = l_Lean_NameSet_empty;
v___x_2_ = lean_unsigned_to_nat(1u);
v___x_3_ = 0;
v___x_4_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4_, 0, v___x_2_);
lean_ctor_set(v___x_4_, 1, v___x_1_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 1, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 3, v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Elab_Do_instInhabitedControlInfo_default;
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_pure(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0(void){
_start:
{
lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; lean_object* v___x_12_; 
v___x_8_ = l_Lean_NameSet_empty;
v___x_9_ = 1;
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = 0;
v___x_12_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_12_, 0, v___x_10_);
lean_ctor_set(v___x_12_, 1, v___x_8_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 1, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 3, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Elab_Do_ControlInfo_empty___closed__0, &l_Lean_Elab_Do_ControlInfo_empty___closed__0_once, _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object* v_a_14_, lean_object* v_b_15_){
_start:
{
uint8_t v_breaks_16_; uint8_t v_continues_17_; uint8_t v_returnsEarly_18_; uint8_t v_noFallthrough_19_; lean_object* v_reassigns_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_52_; 
v_breaks_16_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2);
v_continues_17_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 1);
v_returnsEarly_18_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 2);
v_noFallthrough_19_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 3);
v_reassigns_20_ = lean_ctor_get(v_a_14_, 1);
v_isSharedCheck_52_ = !lean_is_exclusive(v_a_14_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v_a_14_, 0);
lean_dec(v_unused_53_);
v___x_22_ = v_a_14_;
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_reassigns_20_);
lean_dec(v_a_14_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
uint8_t v___y_25_; uint8_t v___y_26_; uint8_t v___y_27_; lean_object* v___y_28_; lean_object* v___y_29_; uint8_t v___y_30_; uint8_t v___y_36_; uint8_t v___y_37_; uint8_t v___y_38_; uint8_t v___y_45_; uint8_t v___y_46_; uint8_t v___y_49_; 
if (v_breaks_16_ == 0)
{
uint8_t v_breaks_51_; 
v_breaks_51_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2);
v___y_49_ = v_breaks_51_;
goto v___jp_48_;
}
else
{
v___y_49_ = v_breaks_16_;
goto v___jp_48_;
}
v___jp_24_:
{
lean_object* v___x_31_; lean_object* v___x_33_; 
v___x_31_ = l_Lean_NameSet_append(v_reassigns_20_, v___y_28_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_31_);
lean_ctor_set(v___x_22_, 0, v___y_29_);
v___x_33_ = v___x_22_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___y_29_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v___x_31_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2, v___y_27_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 1, v___y_26_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 2, v___y_25_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 3, v___y_30_);
return v___x_33_;
}
}
v___jp_35_:
{
if (v_noFallthrough_19_ == 0)
{
lean_object* v_numRegularExits_39_; uint8_t v_noFallthrough_40_; lean_object* v_reassigns_41_; 
v_numRegularExits_39_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_39_);
v_noFallthrough_40_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 3);
v_reassigns_41_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_41_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_38_;
v___y_26_ = v___y_36_;
v___y_27_ = v___y_37_;
v___y_28_ = v_reassigns_41_;
v___y_29_ = v_numRegularExits_39_;
v___y_30_ = v_noFallthrough_40_;
goto v___jp_24_;
}
else
{
lean_object* v_numRegularExits_42_; lean_object* v_reassigns_43_; 
v_numRegularExits_42_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_42_);
v_reassigns_43_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_43_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_38_;
v___y_26_ = v___y_36_;
v___y_27_ = v___y_37_;
v___y_28_ = v_reassigns_43_;
v___y_29_ = v_numRegularExits_42_;
v___y_30_ = v_noFallthrough_19_;
goto v___jp_24_;
}
}
v___jp_44_:
{
if (v_returnsEarly_18_ == 0)
{
uint8_t v_returnsEarly_47_; 
v_returnsEarly_47_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 2);
v___y_36_ = v___y_46_;
v___y_37_ = v___y_45_;
v___y_38_ = v_returnsEarly_47_;
goto v___jp_35_;
}
else
{
v___y_36_ = v___y_46_;
v___y_37_ = v___y_45_;
v___y_38_ = v_returnsEarly_18_;
goto v___jp_35_;
}
}
v___jp_48_:
{
if (v_continues_17_ == 0)
{
uint8_t v_continues_50_; 
v_continues_50_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 1);
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_50_;
goto v___jp_44_;
}
else
{
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_17_;
goto v___jp_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object* v_a_54_, lean_object* v_b_55_){
_start:
{
uint8_t v___y_57_; lean_object* v___y_58_; uint8_t v___y_59_; lean_object* v___y_60_; lean_object* v___y_61_; uint8_t v___y_62_; uint8_t v___y_63_; uint8_t v_breaks_66_; uint8_t v_continues_67_; uint8_t v_returnsEarly_68_; lean_object* v_numRegularExits_69_; uint8_t v_noFallthrough_70_; lean_object* v_reassigns_71_; uint8_t v___y_73_; uint8_t v___y_74_; uint8_t v___y_75_; uint8_t v___y_81_; uint8_t v___y_82_; uint8_t v___y_85_; 
v_breaks_66_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2);
v_continues_67_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 1);
v_returnsEarly_68_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 2);
v_numRegularExits_69_ = lean_ctor_get(v_a_54_, 0);
lean_inc(v_numRegularExits_69_);
v_noFallthrough_70_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 3);
v_reassigns_71_ = lean_ctor_get(v_a_54_, 1);
lean_inc(v_reassigns_71_);
lean_dec_ref(v_a_54_);
if (v_breaks_66_ == 0)
{
uint8_t v_breaks_87_; 
v_breaks_87_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2);
v___y_85_ = v_breaks_87_;
goto v___jp_84_;
}
else
{
v___y_85_ = v_breaks_66_;
goto v___jp_84_;
}
v___jp_56_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = l_Lean_NameSet_append(v___y_58_, v___y_61_);
v___x_65_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_65_, 0, v___y_60_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2, v___y_59_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 1, v___y_57_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 2, v___y_62_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 3, v___y_63_);
return v___x_65_;
}
v___jp_72_:
{
lean_object* v_numRegularExits_76_; uint8_t v_noFallthrough_77_; lean_object* v_reassigns_78_; lean_object* v___x_79_; 
v_numRegularExits_76_ = lean_ctor_get(v_b_55_, 0);
lean_inc(v_numRegularExits_76_);
v_noFallthrough_77_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 3);
v_reassigns_78_ = lean_ctor_get(v_b_55_, 1);
lean_inc(v_reassigns_78_);
lean_dec_ref(v_b_55_);
v___x_79_ = lean_nat_add(v_numRegularExits_69_, v_numRegularExits_76_);
lean_dec(v_numRegularExits_76_);
lean_dec(v_numRegularExits_69_);
if (v_noFallthrough_70_ == 0)
{
v___y_57_ = v___y_73_;
v___y_58_ = v_reassigns_71_;
v___y_59_ = v___y_74_;
v___y_60_ = v___x_79_;
v___y_61_ = v_reassigns_78_;
v___y_62_ = v___y_75_;
v___y_63_ = v_noFallthrough_70_;
goto v___jp_56_;
}
else
{
v___y_57_ = v___y_73_;
v___y_58_ = v_reassigns_71_;
v___y_59_ = v___y_74_;
v___y_60_ = v___x_79_;
v___y_61_ = v_reassigns_78_;
v___y_62_ = v___y_75_;
v___y_63_ = v_noFallthrough_77_;
goto v___jp_56_;
}
}
v___jp_80_:
{
if (v_returnsEarly_68_ == 0)
{
uint8_t v_returnsEarly_83_; 
v_returnsEarly_83_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 2);
v___y_73_ = v___y_82_;
v___y_74_ = v___y_81_;
v___y_75_ = v_returnsEarly_83_;
goto v___jp_72_;
}
else
{
v___y_73_ = v___y_82_;
v___y_74_ = v___y_81_;
v___y_75_ = v_returnsEarly_68_;
goto v___jp_72_;
}
}
v___jp_84_:
{
if (v_continues_67_ == 0)
{
uint8_t v_continues_86_; 
v_continues_86_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 1);
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_86_;
goto v___jp_80_;
}
else
{
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_67_;
goto v___jp_80_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object* v_x1_88_, lean_object* v_x2_89_, lean_object* v_x3_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v_x1_88_);
lean_ctor_set(v___x_91_, 1, v_x3_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0));
v___x_94_ = l_Lean_stringToMessageData(v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13));
v___x_117_ = l_Lean_stringToMessageData(v___x_116_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15));
v___x_120_ = l_Lean_stringToMessageData(v___x_119_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19));
v___x_125_ = l_Lean_stringToMessageData(v___x_124_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21));
v___x_128_ = l_Lean_stringToMessageData(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23));
v___x_131_ = l_Lean_stringToMessageData(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object* v___f_132_, lean_object* v_info_133_){
_start:
{
lean_object* v___y_135_; lean_object* v___y_136_; lean_object* v___y_137_; uint8_t v_breaks_150_; uint8_t v_continues_151_; uint8_t v_returnsEarly_152_; lean_object* v_numRegularExits_153_; uint8_t v_noFallthrough_154_; lean_object* v_reassigns_155_; lean_object* v___y_157_; lean_object* v___y_158_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___x_182_; lean_object* v___y_184_; 
v_breaks_150_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2);
v_continues_151_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2 + 1);
v_returnsEarly_152_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2 + 2);
v_numRegularExits_153_ = lean_ctor_get(v_info_133_, 0);
lean_inc(v_numRegularExits_153_);
v_noFallthrough_154_ = lean_ctor_get_uint8(v_info_133_, sizeof(void*)*2 + 3);
v_reassigns_155_ = lean_ctor_get(v_info_133_, 1);
lean_inc(v_reassigns_155_);
lean_dec_ref(v_info_133_);
v___x_182_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22);
if (v_breaks_150_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_184_ = v___x_192_;
goto v___jp_183_;
}
else
{
lean_object* v___x_193_; 
v___x_193_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_184_ = v___x_193_;
goto v___jp_183_;
}
v___jp_134_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_inc_ref(v___y_137_);
v___x_138_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_138_, 0, v___y_137_);
v___x_139_ = l_Lean_MessageData_ofFormat(v___x_138_);
v___x_140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_140_, 0, v___y_136_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1);
v___x_142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_box(0);
v___x_144_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11));
v___x_145_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_144_, v___f_132_, v___x_143_, v___y_135_);
v___x_146_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12));
v___x_147_ = l_List_mapTR_loop___redArg(v___x_146_, v___x_145_, v___x_143_);
v___x_148_ = l_Lean_MessageData_ofList(v___x_147_);
v___x_149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_142_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
return v___x_149_;
}
v___jp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
lean_inc_ref(v___y_158_);
v___x_159_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_159_, 0, v___y_158_);
v___x_160_ = l_Lean_MessageData_ofFormat(v___x_159_);
v___x_161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_161_, 0, v___y_157_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v___x_162_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14);
v___x_163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = l_Nat_reprFast(v_numRegularExits_153_);
v___x_165_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
v___x_166_ = l_Lean_MessageData_ofFormat(v___x_165_);
v___x_167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_163_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16);
v___x_169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
if (v_noFallthrough_154_ == 0)
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_135_ = v_reassigns_155_;
v___y_136_ = v___x_169_;
v___y_137_ = v___x_170_;
goto v___jp_134_;
}
else
{
lean_object* v___x_171_; 
v___x_171_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_135_ = v_reassigns_155_;
v___y_136_ = v___x_169_;
v___y_137_ = v___x_171_;
goto v___jp_134_;
}
}
v___jp_172_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
lean_inc_ref(v___y_174_);
v___x_175_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_175_, 0, v___y_174_);
v___x_176_ = l_Lean_MessageData_ofFormat(v___x_175_);
v___x_177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_177_, 0, v___y_173_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20);
v___x_179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
if (v_returnsEarly_152_ == 0)
{
lean_object* v___x_180_; 
v___x_180_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_157_ = v___x_179_;
v___y_158_ = v___x_180_;
goto v___jp_156_;
}
else
{
lean_object* v___x_181_; 
v___x_181_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_157_ = v___x_179_;
v___y_158_ = v___x_181_;
goto v___jp_156_;
}
}
v___jp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
lean_inc_ref(v___y_184_);
v___x_185_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_185_, 0, v___y_184_);
v___x_186_ = l_Lean_MessageData_ofFormat(v___x_185_);
v___x_187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_182_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24);
v___x_189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
if (v_continues_151_ == 0)
{
lean_object* v___x_190_; 
v___x_190_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_173_ = v___x_189_;
v___y_174_ = v___x_190_;
goto v___jp_172_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_173_ = v___x_189_;
v___y_174_ = v___x_191_;
goto v___jp_172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object* v_ref_222_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_224_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1));
v___x_225_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3));
v___x_226_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8));
v___x_227_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12));
v___x_228_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13));
v___x_229_ = l_Lean_Elab_mkElabAttribute___redArg(v___x_224_, v___x_225_, v___x_226_, v___x_227_, v___x_228_, v_ref_222_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object* v_ref_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v_ref_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_241_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1(){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0));
v___x_248_ = l_Lean_addBuiltinDocString(v___x_246_, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3(){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_278_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6));
v___x_279_ = l_Lean_addBuiltinDeclarationRanges(v___x_277_, v___x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object* v_msgData_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v___x_288_; lean_object* v_env_289_; uint8_t v___x_290_; lean_object* v_env_291_; lean_object* v___x_292_; lean_object* v_toCold_293_; lean_object* v_mctx_294_; lean_object* v_lctx_295_; lean_object* v_options_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_288_ = lean_st_ref_get(v___y_286_);
v_env_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc_ref(v_env_289_);
lean_dec(v___x_288_);
v___x_290_ = 0;
v_env_291_ = l_Lean_Environment_setRecordingDeps(v_env_289_, v___x_290_);
v___x_292_ = lean_st_ref_get(v___y_284_);
v_toCold_293_ = lean_ctor_get(v___y_285_, 0);
v_mctx_294_ = lean_ctor_get(v___x_292_, 0);
lean_inc_ref(v_mctx_294_);
lean_dec(v___x_292_);
v_lctx_295_ = lean_ctor_get(v___y_283_, 2);
v_options_296_ = lean_ctor_get(v_toCold_293_, 2);
lean_inc_ref(v_options_296_);
lean_inc_ref(v_lctx_295_);
v___x_297_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_297_, 0, v_env_291_);
lean_ctor_set(v___x_297_, 1, v_mctx_294_);
lean_ctor_set(v___x_297_, 2, v_lctx_295_);
lean_ctor_set(v___x_297_, 3, v_options_296_);
v___x_298_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v_msgData_282_);
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object* v_msgData_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msgData_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
return v_res_306_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_box(1);
v___x_308_ = l_Lean_MessageData_ofFormat(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2));
v___x_313_ = l_Lean_MessageData_ofFormat(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
if (lean_obj_tag(v_x_315_) == 0)
{
return v_x_314_;
}
else
{
lean_object* v_head_316_; lean_object* v_tail_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_339_; 
v_head_316_ = lean_ctor_get(v_x_315_, 0);
v_tail_317_ = lean_ctor_get(v_x_315_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v_x_315_);
if (v_isSharedCheck_339_ == 0)
{
v___x_319_ = v_x_315_;
v_isShared_320_ = v_isSharedCheck_339_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_tail_317_);
lean_inc(v_head_316_);
lean_dec(v_x_315_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_339_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v_before_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_337_; 
v_before_321_ = lean_ctor_get(v_head_316_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_head_316_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v_head_316_, 1);
lean_dec(v_unused_338_);
v___x_323_ = v_head_316_;
v_isShared_324_ = v_isSharedCheck_337_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_before_321_);
lean_dec(v_head_316_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_337_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_325_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 7);
lean_ctor_set(v___x_323_, 1, v___x_325_);
lean_ctor_set(v___x_323_, 0, v_x_314_);
v___x_327_ = v___x_323_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_x_314_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v___x_325_);
v___x_327_ = v_reuseFailAlloc_336_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_328_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3);
if (v_isShared_320_ == 0)
{
lean_ctor_set_tag(v___x_319_, 7);
lean_ctor_set(v___x_319_, 1, v___x_328_);
lean_ctor_set(v___x_319_, 0, v___x_327_);
v___x_330_ = v___x_319_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_327_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v___x_328_);
v___x_330_ = v_reuseFailAlloc_335_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = l_Lean_MessageData_ofSyntax(v_before_321_);
v___x_332_ = l_Lean_indentD(v___x_331_);
v___x_333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_330_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v_x_314_ = v___x_333_;
v_x_315_ = v_tail_317_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object* v_opts_340_, lean_object* v_opt_341_){
_start:
{
lean_object* v_name_342_; lean_object* v_defValue_343_; lean_object* v_map_344_; lean_object* v___x_345_; 
v_name_342_ = lean_ctor_get(v_opt_341_, 0);
v_defValue_343_ = lean_ctor_get(v_opt_341_, 1);
v_map_344_ = lean_ctor_get(v_opts_340_, 0);
v___x_345_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_344_, v_name_342_);
if (lean_obj_tag(v___x_345_) == 0)
{
uint8_t v___x_346_; 
v___x_346_ = lean_unbox(v_defValue_343_);
return v___x_346_;
}
else
{
lean_object* v_val_347_; 
v_val_347_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_val_347_);
lean_dec_ref_known(v___x_345_, 1);
if (lean_obj_tag(v_val_347_) == 1)
{
uint8_t v_v_348_; 
v_v_348_ = lean_ctor_get_uint8(v_val_347_, 0);
lean_dec_ref_known(v_val_347_, 0);
return v_v_348_;
}
else
{
uint8_t v___x_349_; 
lean_dec(v_val_347_);
v___x_349_ = lean_unbox(v_defValue_343_);
return v___x_349_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object* v_opts_350_, lean_object* v_opt_351_){
_start:
{
uint8_t v_res_352_; lean_object* v_r_353_; 
v_res_352_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v_opts_350_, v_opt_351_);
lean_dec_ref(v_opt_351_);
lean_dec_ref(v_opts_350_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1));
v___x_358_ = l_Lean_MessageData_ofFormat(v___x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object* v_msgData_359_, lean_object* v_macroStack_360_, lean_object* v___y_361_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_361_);
v___x_364_ = l_Lean_Elab_pp_macroStack;
v___x_365_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v___x_363_, v___x_364_);
lean_dec_ref(v___x_363_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; 
lean_dec(v_macroStack_360_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v_msgData_359_);
return v___x_366_;
}
else
{
if (lean_obj_tag(v_macroStack_360_) == 0)
{
lean_object* v___x_367_; 
v___x_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_367_, 0, v_msgData_359_);
return v___x_367_;
}
else
{
lean_object* v_head_368_; lean_object* v_after_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_384_; 
v_head_368_ = lean_ctor_get(v_macroStack_360_, 0);
lean_inc(v_head_368_);
v_after_369_ = lean_ctor_get(v_head_368_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_head_368_);
if (v_isSharedCheck_384_ == 0)
{
lean_object* v_unused_385_; 
v_unused_385_ = lean_ctor_get(v_head_368_, 0);
lean_dec(v_unused_385_);
v___x_371_ = v_head_368_;
v_isShared_372_ = v_isSharedCheck_384_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_after_369_);
lean_dec(v_head_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_384_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_373_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 7);
lean_ctor_set(v___x_371_, 1, v___x_373_);
lean_ctor_set(v___x_371_, 0, v_msgData_359_);
v___x_375_ = v___x_371_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_msgData_359_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v___x_373_);
v___x_375_ = v_reuseFailAlloc_383_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_msgData_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_376_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2);
v___x_377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = l_Lean_MessageData_ofSyntax(v_after_369_);
v___x_379_ = l_Lean_indentD(v___x_378_);
v_msgData_380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_380_, 0, v___x_377_);
lean_ctor_set(v_msgData_380_, 1, v___x_379_);
v___x_381_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(v_msgData_380_, v_macroStack_360_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object* v_msgData_386_, lean_object* v_macroStack_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_386_, v_macroStack_387_, v___y_388_);
lean_dec_ref(v___y_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object* v_msg_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_ref_399_; lean_object* v_macroStack_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_413_; 
v_ref_399_ = lean_ctor_get(v___y_396_, 2);
v_macroStack_400_ = lean_ctor_get(v___y_392_, 1);
v___x_401_ = l_Lean_Elab_getBetterRef(v_ref_399_, v_macroStack_400_);
v___x_402_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_391_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref(v___x_402_);
lean_inc(v_macroStack_400_);
v___x_404_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_a_403_, v_macroStack_400_, v___y_396_);
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_413_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_401_);
lean_ctor_set(v___x_409_, 1, v_a_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 1);
lean_ctor_set(v___x_407_, 0, v___x_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object* v_msg_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object* v_as_423_, size_t v_i_424_, size_t v_stop_425_, lean_object* v_b_426_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = lean_usize_dec_eq(v_i_424_, v_stop_425_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; size_t v___x_430_; size_t v___x_431_; 
v___x_428_ = lean_array_uget_borrowed(v_as_423_, v_i_424_);
lean_inc(v___x_428_);
v___x_429_ = l_Lean_NameSet_insert(v_b_426_, v___x_428_);
v___x_430_ = ((size_t)1ULL);
v___x_431_ = lean_usize_add(v_i_424_, v___x_430_);
v_i_424_ = v___x_431_;
v_b_426_ = v___x_429_;
goto _start;
}
else
{
return v_b_426_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object* v_as_433_, lean_object* v_i_434_, lean_object* v_stop_435_, lean_object* v_b_436_){
_start:
{
size_t v_i_boxed_437_; size_t v_stop_boxed_438_; lean_object* v_res_439_; 
v_i_boxed_437_ = lean_unbox_usize(v_i_434_);
lean_dec(v_i_434_);
v_stop_boxed_438_ = lean_unbox_usize(v_stop_435_);
lean_dec(v_stop_435_);
v_res_439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v_as_433_, v_i_boxed_437_, v_stop_boxed_438_, v_b_436_);
lean_dec_ref(v_as_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t v_sz_440_, size_t v_i_441_, lean_object* v_bs_442_){
_start:
{
uint8_t v___x_443_; 
v___x_443_ = lean_usize_dec_lt(v_i_441_, v_sz_440_);
if (v___x_443_ == 0)
{
return v_bs_442_;
}
else
{
lean_object* v_v_444_; lean_object* v___x_445_; lean_object* v_bs_x27_446_; lean_object* v___x_447_; size_t v___x_448_; size_t v___x_449_; lean_object* v___x_450_; 
v_v_444_ = lean_array_uget(v_bs_442_, v_i_441_);
v___x_445_ = lean_unsigned_to_nat(0u);
v_bs_x27_446_ = lean_array_uset(v_bs_442_, v_i_441_, v___x_445_);
v___x_447_ = l_Lean_TSyntax_getId(v_v_444_);
lean_dec(v_v_444_);
v___x_448_ = ((size_t)1ULL);
v___x_449_ = lean_usize_add(v_i_441_, v___x_448_);
v___x_450_ = lean_array_uset(v_bs_x27_446_, v_i_441_, v___x_447_);
v_i_441_ = v___x_449_;
v_bs_442_ = v___x_450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object* v_sz_452_, lean_object* v_i_453_, lean_object* v_bs_454_){
_start:
{
size_t v_sz_boxed_455_; size_t v_i_boxed_456_; lean_object* v_res_457_; 
v_sz_boxed_455_ = lean_unbox_usize(v_sz_452_);
lean_dec(v_sz_452_);
v_i_boxed_456_ = lean_unbox_usize(v_i_453_);
lean_dec(v_i_453_);
v_res_457_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_boxed_455_, v_i_boxed_456_, v_bs_454_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_458_ = lean_box(0);
v___x_459_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set(v___x_460_, 1, v___x_458_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg(){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0);
v___x_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t v_sz_466_, size_t v_i_467_, lean_object* v_bs_468_){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = lean_usize_dec_lt(v_i_467_, v_sz_466_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; 
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v_bs_468_);
return v___x_470_;
}
else
{
lean_object* v___x_471_; lean_object* v_bs_x27_472_; lean_object* v___x_473_; size_t v___x_474_; size_t v___x_475_; lean_object* v___x_476_; 
v___x_471_ = lean_unsigned_to_nat(0u);
v_bs_x27_472_ = lean_array_uset(v_bs_468_, v_i_467_, v___x_471_);
v___x_473_ = lean_box(0);
v___x_474_ = ((size_t)1ULL);
v___x_475_ = lean_usize_add(v_i_467_, v___x_474_);
v___x_476_ = lean_array_uset(v_bs_x27_472_, v_i_467_, v___x_473_);
v_i_467_ = v___x_475_;
v_bs_468_ = v___x_476_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object* v_sz_478_, lean_object* v_i_479_, lean_object* v_bs_480_){
_start:
{
size_t v_sz_boxed_481_; size_t v_i_boxed_482_; lean_object* v_res_483_; 
v_sz_boxed_481_ = lean_unbox_usize(v_sz_478_);
lean_dec(v_sz_478_);
v_i_boxed_482_ = lean_unbox_usize(v_i_479_);
lean_dec(v_i_479_);
v_res_483_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_boxed_481_, v_i_boxed_482_, v_bs_480_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t v___x_484_, uint8_t v___x_485_, lean_object* v_as_486_, size_t v_i_487_, size_t v_stop_488_, lean_object* v_b_489_){
_start:
{
lean_object* v___y_491_; uint8_t v___x_495_; 
v___x_495_ = lean_usize_dec_eq(v_i_487_, v_stop_488_);
if (v___x_495_ == 0)
{
lean_object* v_fst_496_; uint8_t v___x_497_; 
v_fst_496_ = lean_ctor_get(v_b_489_, 0);
v___x_497_ = lean_unbox(v_fst_496_);
if (v___x_497_ == 0)
{
lean_object* v_snd_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
v_snd_498_ = lean_ctor_get(v_b_489_, 1);
v_isSharedCheck_506_ = !lean_is_exclusive(v_b_489_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; 
v_unused_507_ = lean_ctor_get(v_b_489_, 0);
lean_dec(v_unused_507_);
v___x_500_ = v_b_489_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_snd_498_);
lean_dec(v_b_489_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = lean_box(v___x_484_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_502_);
v___x_504_ = v___x_500_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_snd_498_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
v___y_491_ = v___x_504_;
goto v___jp_490_;
}
}
}
else
{
lean_object* v_snd_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_518_; 
v_snd_508_ = lean_ctor_get(v_b_489_, 1);
v_isSharedCheck_518_ = !lean_is_exclusive(v_b_489_);
if (v_isSharedCheck_518_ == 0)
{
lean_object* v_unused_519_; 
v_unused_519_ = lean_ctor_get(v_b_489_, 0);
lean_dec(v_unused_519_);
v___x_510_ = v_b_489_;
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_snd_508_);
lean_dec(v_b_489_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_512_ = lean_array_uget_borrowed(v_as_486_, v_i_487_);
lean_inc(v___x_512_);
v___x_513_ = lean_array_push(v_snd_508_, v___x_512_);
v___x_514_ = lean_box(v___x_485_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 1, v___x_513_);
lean_ctor_set(v___x_510_, 0, v___x_514_);
v___x_516_ = v___x_510_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v___x_513_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
v___y_491_ = v___x_516_;
goto v___jp_490_;
}
}
}
}
else
{
return v_b_489_;
}
v___jp_490_:
{
size_t v___x_492_; size_t v___x_493_; 
v___x_492_ = ((size_t)1ULL);
v___x_493_ = lean_usize_add(v_i_487_, v___x_492_);
v_i_487_ = v___x_493_;
v_b_489_ = v___y_491_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object* v___x_520_, lean_object* v___x_521_, lean_object* v_as_522_, lean_object* v_i_523_, lean_object* v_stop_524_, lean_object* v_b_525_){
_start:
{
uint8_t v___x_174256__boxed_526_; uint8_t v___x_174257__boxed_527_; size_t v_i_boxed_528_; size_t v_stop_boxed_529_; lean_object* v_res_530_; 
v___x_174256__boxed_526_ = lean_unbox(v___x_520_);
v___x_174257__boxed_527_ = lean_unbox(v___x_521_);
v_i_boxed_528_ = lean_unbox_usize(v_i_523_);
lean_dec(v_i_523_);
v_stop_boxed_529_ = lean_unbox_usize(v_stop_524_);
lean_dec(v_stop_524_);
v_res_530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_174256__boxed_526_, v___x_174257__boxed_527_, v_as_522_, v_i_boxed_528_, v_stop_boxed_529_, v_b_525_);
lean_dec_ref(v_as_522_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object* v_x_531_, lean_object* v___y_532_){
_start:
{
if (lean_obj_tag(v_x_531_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_534_; 
v_a_533_ = lean_ctor_get(v_x_531_, 0);
lean_inc(v_a_533_);
v___x_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_534_, 0, v_a_533_);
lean_ctor_set(v___x_534_, 1, v___y_532_);
return v___x_534_;
}
else
{
lean_object* v_a_535_; lean_object* v___x_536_; 
v_a_535_ = lean_ctor_get(v_x_531_, 0);
lean_inc(v_a_535_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_a_535_);
lean_ctor_set(v___x_536_, 1, v___y_532_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object* v_x_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_537_, v___y_538_);
lean_dec_ref(v_x_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object* v_env_540_, lean_object* v_stx_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_540_, v_stx_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
if (lean_obj_tag(v_a_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_554_; 
v_a_546_ = lean_ctor_get(v___x_544_, 1);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_554_ == 0)
{
lean_object* v_unused_555_; 
v_unused_555_ = lean_ctor_get(v___x_544_, 0);
lean_dec(v_unused_555_);
v___x_548_ = v___x_544_;
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_544_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_550_; lean_object* v___x_552_; 
v___x_550_ = lean_box(0);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_550_);
v___x_552_ = v___x_548_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_a_546_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
else
{
lean_object* v_val_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_584_; 
v_val_556_ = lean_ctor_get(v_a_545_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v_a_545_);
if (v_isSharedCheck_584_ == 0)
{
v___x_558_ = v_a_545_;
v_isShared_559_ = v_isSharedCheck_584_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_val_556_);
lean_dec(v_a_545_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_584_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_snd_560_; 
v_snd_560_ = lean_ctor_get(v_val_556_, 1);
lean_inc(v_snd_560_);
lean_dec(v_val_556_);
if (lean_obj_tag(v_snd_560_) == 0)
{
lean_object* v_a_561_; lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_570_; 
lean_del_object(v___x_558_);
v_a_561_ = lean_ctor_get(v___x_544_, 1);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_544_, 2);
v_a_562_ = lean_ctor_get(v_snd_560_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v_snd_560_);
if (v_isSharedCheck_570_ == 0)
{
v___x_564_ = v_snd_560_;
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v_snd_560_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_570_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_569_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; 
v___x_568_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_567_, v_a_561_);
lean_dec_ref(v___x_567_);
return v___x_568_;
}
}
}
else
{
lean_object* v_a_571_; lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_583_; 
v_a_571_ = lean_ctor_get(v___x_544_, 1);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_544_, 2);
v_a_572_ = lean_ctor_get(v_snd_560_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v_snd_560_);
if (v_isSharedCheck_583_ == 0)
{
v___x_574_ = v_snd_560_;
v_isShared_575_ = v_isSharedCheck_583_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v_snd_560_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_583_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 0, v_a_572_);
v___x_577_ = v___x_558_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_582_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
lean_object* v___x_579_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_577_);
v___x_579_ = v___x_574_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_577_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_579_, v_a_571_);
lean_dec_ref(v___x_579_);
return v___x_580_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_585_; lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
v_a_585_ = lean_ctor_get(v___x_544_, 0);
v_a_586_ = lean_ctor_get(v___x_544_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_544_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_inc(v_a_585_);
lean_dec(v___x_544_);
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
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_585_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_a_586_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object* v_env_594_, lean_object* v_stx_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(v_env_594_, v_stx_595_, v___y_596_, v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_598_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = l_Lean_maxRecDepthErrorMessage;
v___x_605_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
return v___x_605_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3);
v___x_607_ = l_Lean_MessageData_ofFormat(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4);
v___x_609_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2));
v___x_610_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object* v_ref_611_){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5);
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v_ref_611_);
lean_ctor_set(v___x_614_, 1, v___x_613_);
v___x_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object* v_ref_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object* v_env_619_, lean_object* v_declName_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
uint8_t v___x_623_; lean_object* v_env_624_; lean_object* v___x_625_; uint8_t v___x_626_; uint8_t v___x_627_; 
v___x_623_ = 0;
v_env_624_ = l_Lean_Environment_setExporting(v_env_619_, v___x_623_);
lean_inc(v_declName_620_);
v___x_625_ = l_Lean_mkPrivateName(v_env_624_, v_declName_620_);
v___x_626_ = 1;
lean_inc_ref(v_env_624_);
v___x_627_ = l_Lean_Environment_contains(v_env_624_, v___x_625_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_628_ = l_Lean_privateToUserName(v_declName_620_);
v___x_629_ = l_Lean_Environment_contains(v_env_624_, v___x_628_, v___x_626_);
v___x_630_ = lean_box(v___x_629_);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
lean_ctor_set(v___x_631_, 1, v___y_622_);
return v___x_631_;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec_ref(v_env_624_);
lean_dec(v_declName_620_);
v___x_632_ = lean_box(v___x_627_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set(v___x_633_, 1, v___y_622_);
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object* v_env_634_, lean_object* v_declName_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(v_env_634_, v_declName_635_, v___y_636_, v___y_637_);
lean_dec_ref(v___y_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object* v_ref_639_, lean_object* v_msg_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_toCold_648_; lean_object* v_currRecDepth_649_; lean_object* v_ref_650_; uint16_t v_optionFlags_651_; uint8_t v_suppressElabErrors_652_; uint8_t v_isRecordingDeps_653_; lean_object* v_ref_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_toCold_648_ = lean_ctor_get(v___y_645_, 0);
v_currRecDepth_649_ = lean_ctor_get(v___y_645_, 1);
v_ref_650_ = lean_ctor_get(v___y_645_, 2);
v_optionFlags_651_ = lean_ctor_get_uint16(v___y_645_, sizeof(void*)*3);
v_suppressElabErrors_652_ = lean_ctor_get_uint8(v___y_645_, sizeof(void*)*3 + 2);
v_isRecordingDeps_653_ = lean_ctor_get_uint8(v___y_645_, sizeof(void*)*3 + 3);
v_ref_654_ = l_Lean_replaceRef(v_ref_639_, v_ref_650_);
lean_inc(v_currRecDepth_649_);
lean_inc_ref(v_toCold_648_);
v___x_655_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_655_, 0, v_toCold_648_);
lean_ctor_set(v___x_655_, 1, v_currRecDepth_649_);
lean_ctor_set(v___x_655_, 2, v_ref_654_);
lean_ctor_set_uint16(v___x_655_, sizeof(void*)*3, v_optionFlags_651_);
lean_ctor_set_uint8(v___x_655_, sizeof(void*)*3 + 2, v_suppressElabErrors_652_);
lean_ctor_set_uint8(v___x_655_, sizeof(void*)*3 + 3, v_isRecordingDeps_653_);
v___x_656_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___x_655_, v___y_646_);
lean_dec_ref_known(v___x_655_, 3);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object* v_ref_657_, lean_object* v_msg_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_657_, v_msg_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v_ref_657_);
return v_res_666_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_667_; double v___x_668_; 
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_float_of_nat(v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object* v_cls_672_, lean_object* v_msg_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_ref_679_; lean_object* v___x_680_; lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_726_; 
v_ref_679_ = lean_ctor_get(v___y_676_, 2);
v___x_680_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
v_a_681_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_726_ == 0)
{
v___x_683_ = v___x_680_;
v_isShared_684_ = v_isSharedCheck_726_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_680_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_726_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; lean_object* v_traceState_686_; lean_object* v_env_687_; lean_object* v_nextMacroScope_688_; lean_object* v_ngen_689_; lean_object* v_auxDeclNGen_690_; lean_object* v_cache_691_; lean_object* v_recordedDeps_692_; lean_object* v_messages_693_; lean_object* v_infoState_694_; lean_object* v_snapshotTasks_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_725_; 
v___x_685_ = lean_st_ref_take(v___y_677_);
v_traceState_686_ = lean_ctor_get(v___x_685_, 4);
v_env_687_ = lean_ctor_get(v___x_685_, 0);
v_nextMacroScope_688_ = lean_ctor_get(v___x_685_, 1);
v_ngen_689_ = lean_ctor_get(v___x_685_, 2);
v_auxDeclNGen_690_ = lean_ctor_get(v___x_685_, 3);
v_cache_691_ = lean_ctor_get(v___x_685_, 5);
v_recordedDeps_692_ = lean_ctor_get(v___x_685_, 6);
v_messages_693_ = lean_ctor_get(v___x_685_, 7);
v_infoState_694_ = lean_ctor_get(v___x_685_, 8);
v_snapshotTasks_695_ = lean_ctor_get(v___x_685_, 9);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_725_ == 0)
{
v___x_697_ = v___x_685_;
v_isShared_698_ = v_isSharedCheck_725_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_snapshotTasks_695_);
lean_inc(v_infoState_694_);
lean_inc(v_messages_693_);
lean_inc(v_recordedDeps_692_);
lean_inc(v_cache_691_);
lean_inc(v_traceState_686_);
lean_inc(v_auxDeclNGen_690_);
lean_inc(v_ngen_689_);
lean_inc(v_nextMacroScope_688_);
lean_inc(v_env_687_);
lean_dec(v___x_685_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_725_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
uint64_t v_tid_699_; lean_object* v_traces_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_724_; 
v_tid_699_ = lean_ctor_get_uint64(v_traceState_686_, sizeof(void*)*1);
v_traces_700_ = lean_ctor_get(v_traceState_686_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_traceState_686_);
if (v_isSharedCheck_724_ == 0)
{
v___x_702_ = v_traceState_686_;
v_isShared_703_ = v_isSharedCheck_724_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_traces_700_);
lean_dec(v_traceState_686_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_724_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; lean_object* v___x_705_; double v___x_706_; uint8_t v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_704_ = lean_box(0);
v___x_705_ = lean_box(0);
v___x_706_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0);
v___x_707_ = 0;
v___x_708_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_709_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_709_, 0, v_cls_672_);
lean_ctor_set(v___x_709_, 1, v___x_705_);
lean_ctor_set(v___x_709_, 2, v___x_708_);
lean_ctor_set_float(v___x_709_, sizeof(void*)*3, v___x_706_);
lean_ctor_set_float(v___x_709_, sizeof(void*)*3 + 8, v___x_706_);
lean_ctor_set_uint8(v___x_709_, sizeof(void*)*3 + 16, v___x_707_);
v___x_710_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2));
v___x_711_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_711_, 0, v___x_709_);
lean_ctor_set(v___x_711_, 1, v_a_681_);
lean_ctor_set(v___x_711_, 2, v___x_710_);
lean_inc(v_ref_679_);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v_ref_679_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = l_Lean_PersistentArray_push___redArg(v_traces_700_, v___x_712_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_713_);
v___x_715_ = v___x_702_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_713_);
lean_ctor_set_uint64(v_reuseFailAlloc_723_, sizeof(void*)*1, v_tid_699_);
v___x_715_ = v_reuseFailAlloc_723_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_717_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 4, v___x_715_);
v___x_717_ = v___x_697_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_env_687_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v_nextMacroScope_688_);
lean_ctor_set(v_reuseFailAlloc_722_, 2, v_ngen_689_);
lean_ctor_set(v_reuseFailAlloc_722_, 3, v_auxDeclNGen_690_);
lean_ctor_set(v_reuseFailAlloc_722_, 4, v___x_715_);
lean_ctor_set(v_reuseFailAlloc_722_, 5, v_cache_691_);
lean_ctor_set(v_reuseFailAlloc_722_, 6, v_recordedDeps_692_);
lean_ctor_set(v_reuseFailAlloc_722_, 7, v_messages_693_);
lean_ctor_set(v_reuseFailAlloc_722_, 8, v_infoState_694_);
lean_ctor_set(v_reuseFailAlloc_722_, 9, v_snapshotTasks_695_);
v___x_717_ = v_reuseFailAlloc_722_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_718_ = lean_st_ref_put(v___y_677_, v___x_717_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 0, v___x_704_);
v___x_720_ = v___x_683_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_704_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object* v_cls_727_, lean_object* v_msg_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_727_, v_msg_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object* v_as_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
if (lean_obj_tag(v_as_738_) == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_box(0);
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
return v___x_747_;
}
else
{
lean_object* v_toCold_748_; lean_object* v_options_749_; uint8_t v_hasTrace_750_; 
v_toCold_748_ = lean_ctor_get(v___y_743_, 0);
v_options_749_ = lean_ctor_get(v_toCold_748_, 2);
v_hasTrace_750_ = lean_ctor_get_uint8(v_options_749_, sizeof(void*)*1);
if (v_hasTrace_750_ == 0)
{
lean_object* v_tail_751_; 
v_tail_751_ = lean_ctor_get(v_as_738_, 1);
lean_inc(v_tail_751_);
lean_dec_ref_known(v_as_738_, 2);
v_as_738_ = v_tail_751_;
goto _start;
}
else
{
lean_object* v_head_753_; lean_object* v_tail_754_; lean_object* v_fst_755_; lean_object* v_snd_756_; lean_object* v_inheritedTraceOptions_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_head_753_ = lean_ctor_get(v_as_738_, 0);
lean_inc(v_head_753_);
v_tail_754_ = lean_ctor_get(v_as_738_, 1);
lean_inc(v_tail_754_);
lean_dec_ref_known(v_as_738_, 2);
v_fst_755_ = lean_ctor_get(v_head_753_, 0);
lean_inc_n(v_fst_755_, 2);
v_snd_756_ = lean_ctor_get(v_head_753_, 1);
lean_inc(v_snd_756_);
lean_dec(v_head_753_);
v_inheritedTraceOptions_757_ = lean_ctor_get(v_toCold_748_, 11);
v___x_758_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_759_ = l_Lean_Name_append(v___x_758_, v_fst_755_);
v___x_760_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_757_, v_options_749_, v___x_759_);
lean_dec(v___x_759_);
if (v___x_760_ == 0)
{
lean_dec(v_snd_756_);
lean_dec(v_fst_755_);
v_as_738_ = v_tail_754_;
goto _start;
}
else
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_762_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_762_, 0, v_snd_756_);
v___x_763_ = l_Lean_MessageData_ofFormat(v___x_762_);
v___x_764_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_fst_755_, v___x_763_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_dec_ref_known(v___x_764_, 1);
v_as_738_ = v_tail_754_;
goto _start;
}
else
{
lean_dec(v_tail_754_);
return v___x_764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object* v_as_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v_as_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(lean_object* v_a_775_, lean_object* v_x_776_){
_start:
{
if (lean_obj_tag(v_x_776_) == 0)
{
lean_object* v___x_777_; 
v___x_777_ = lean_box(0);
return v___x_777_;
}
else
{
lean_object* v_key_778_; lean_object* v_value_779_; lean_object* v_tail_780_; uint8_t v___x_781_; 
v_key_778_ = lean_ctor_get(v_x_776_, 0);
v_value_779_ = lean_ctor_get(v_x_776_, 1);
v_tail_780_ = lean_ctor_get(v_x_776_, 2);
v___x_781_ = lean_name_eq(v_key_778_, v_a_775_);
if (v___x_781_ == 0)
{
v_x_776_ = v_tail_780_;
goto _start;
}
else
{
lean_object* v___x_783_; 
lean_inc(v_value_779_);
v___x_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_783_, 0, v_value_779_);
return v___x_783_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg___boxed(lean_object* v_a_784_, lean_object* v_x_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_784_, v_x_785_);
lean_dec(v_x_785_);
lean_dec(v_a_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object* v_m_787_, lean_object* v_a_788_){
_start:
{
lean_object* v_buckets_789_; lean_object* v___x_790_; uint64_t v___y_792_; 
v_buckets_789_ = lean_ctor_get(v_m_787_, 1);
v___x_790_ = lean_array_get_size(v_buckets_789_);
if (lean_obj_tag(v_a_788_) == 0)
{
uint64_t v___x_806_; 
v___x_806_ = 1723ULL;
v___y_792_ = v___x_806_;
goto v___jp_791_;
}
else
{
uint64_t v_hash_807_; 
v_hash_807_ = lean_ctor_get_uint64(v_a_788_, sizeof(void*)*2);
v___y_792_ = v_hash_807_;
goto v___jp_791_;
}
v___jp_791_:
{
uint64_t v___x_793_; uint64_t v___x_794_; uint64_t v_fold_795_; uint64_t v___x_796_; uint64_t v___x_797_; uint64_t v___x_798_; size_t v___x_799_; size_t v___x_800_; size_t v___x_801_; size_t v___x_802_; size_t v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_793_ = 32ULL;
v___x_794_ = lean_uint64_shift_right(v___y_792_, v___x_793_);
v_fold_795_ = lean_uint64_xor(v___y_792_, v___x_794_);
v___x_796_ = 16ULL;
v___x_797_ = lean_uint64_shift_right(v_fold_795_, v___x_796_);
v___x_798_ = lean_uint64_xor(v_fold_795_, v___x_797_);
v___x_799_ = lean_uint64_to_usize(v___x_798_);
v___x_800_ = lean_usize_of_nat(v___x_790_);
v___x_801_ = ((size_t)1ULL);
v___x_802_ = lean_usize_sub(v___x_800_, v___x_801_);
v___x_803_ = lean_usize_land(v___x_799_, v___x_802_);
v___x_804_ = lean_array_uget_borrowed(v_buckets_789_, v___x_803_);
v___x_805_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_788_, v___x_804_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object* v_m_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_808_, v_a_809_);
lean_dec(v_a_809_);
lean_dec_ref(v_m_808_);
return v_res_810_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(lean_object* v_a_811_, lean_object* v_x_812_){
_start:
{
if (lean_obj_tag(v_x_812_) == 0)
{
uint8_t v___x_813_; 
v___x_813_ = 0;
return v___x_813_;
}
else
{
lean_object* v_key_814_; lean_object* v_tail_815_; uint8_t v___x_816_; 
v_key_814_ = lean_ctor_get(v_x_812_, 0);
v_tail_815_ = lean_ctor_get(v_x_812_, 2);
v___x_816_ = l_Lean_instBEqExtraModUse_beq(v_key_814_, v_a_811_);
if (v___x_816_ == 0)
{
v_x_812_ = v_tail_815_;
goto _start;
}
else
{
return v___x_816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___boxed(lean_object* v_a_818_, lean_object* v_x_819_){
_start:
{
uint8_t v_res_820_; lean_object* v_r_821_; 
v_res_820_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(v_a_818_, v_x_819_);
lean_dec(v_x_819_);
lean_dec_ref(v_a_818_);
v_r_821_ = lean_box(v_res_820_);
return v_r_821_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40_spec__42___redArg(lean_object* v_x_822_, lean_object* v_x_823_){
_start:
{
if (lean_obj_tag(v_x_823_) == 0)
{
return v_x_822_;
}
else
{
lean_object* v_key_824_; lean_object* v_value_825_; lean_object* v_tail_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_849_; 
v_key_824_ = lean_ctor_get(v_x_823_, 0);
v_value_825_ = lean_ctor_get(v_x_823_, 1);
v_tail_826_ = lean_ctor_get(v_x_823_, 2);
v_isSharedCheck_849_ = !lean_is_exclusive(v_x_823_);
if (v_isSharedCheck_849_ == 0)
{
v___x_828_ = v_x_823_;
v_isShared_829_ = v_isSharedCheck_849_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_tail_826_);
lean_inc(v_value_825_);
lean_inc(v_key_824_);
lean_dec(v_x_823_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_849_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; uint64_t v___x_831_; uint64_t v___x_832_; uint64_t v___x_833_; uint64_t v_fold_834_; uint64_t v___x_835_; uint64_t v___x_836_; uint64_t v___x_837_; size_t v___x_838_; size_t v___x_839_; size_t v___x_840_; size_t v___x_841_; size_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_830_ = lean_array_get_size(v_x_822_);
v___x_831_ = l_Lean_instHashableExtraModUse_hash(v_key_824_);
v___x_832_ = 32ULL;
v___x_833_ = lean_uint64_shift_right(v___x_831_, v___x_832_);
v_fold_834_ = lean_uint64_xor(v___x_831_, v___x_833_);
v___x_835_ = 16ULL;
v___x_836_ = lean_uint64_shift_right(v_fold_834_, v___x_835_);
v___x_837_ = lean_uint64_xor(v_fold_834_, v___x_836_);
v___x_838_ = lean_uint64_to_usize(v___x_837_);
v___x_839_ = lean_usize_of_nat(v___x_830_);
v___x_840_ = ((size_t)1ULL);
v___x_841_ = lean_usize_sub(v___x_839_, v___x_840_);
v___x_842_ = lean_usize_land(v___x_838_, v___x_841_);
v___x_843_ = lean_array_uget_borrowed(v_x_822_, v___x_842_);
lean_inc(v___x_843_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 2, v___x_843_);
v___x_845_ = v___x_828_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_key_824_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_value_825_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v___x_843_);
v___x_845_ = v_reuseFailAlloc_848_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_846_; 
v___x_846_ = lean_array_uset(v_x_822_, v___x_842_, v___x_845_);
v_x_822_ = v___x_846_;
v_x_823_ = v_tail_826_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40___redArg(lean_object* v_i_850_, lean_object* v_source_851_, lean_object* v_target_852_){
_start:
{
lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_853_ = lean_array_get_size(v_source_851_);
v___x_854_ = lean_nat_dec_lt(v_i_850_, v___x_853_);
if (v___x_854_ == 0)
{
lean_dec_ref(v_source_851_);
lean_dec(v_i_850_);
return v_target_852_;
}
else
{
lean_object* v_es_855_; lean_object* v___x_856_; lean_object* v_source_857_; lean_object* v_target_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_es_855_ = lean_array_fget(v_source_851_, v_i_850_);
v___x_856_ = lean_box(0);
v_source_857_ = lean_array_fset(v_source_851_, v_i_850_, v___x_856_);
v_target_858_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40_spec__42___redArg(v_target_852_, v_es_855_);
v___x_859_ = lean_unsigned_to_nat(1u);
v___x_860_ = lean_nat_add(v_i_850_, v___x_859_);
lean_dec(v_i_850_);
v_i_850_ = v___x_860_;
v_source_851_ = v_source_857_;
v_target_852_ = v_target_858_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35___redArg(lean_object* v_data_862_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v_nbuckets_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_863_ = lean_array_get_size(v_data_862_);
v___x_864_ = lean_unsigned_to_nat(2u);
v_nbuckets_865_ = lean_nat_mul(v___x_863_, v___x_864_);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = lean_box(0);
v___x_868_ = lean_mk_array(v_nbuckets_865_, v___x_867_);
v___x_869_ = lean_array_propagate_mark(v_data_862_, v___x_868_);
v___x_870_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40___redArg(v___x_866_, v_data_862_, v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(lean_object* v_m_871_, lean_object* v_a_872_, lean_object* v_b_873_){
_start:
{
lean_object* v_size_874_; lean_object* v_buckets_875_; lean_object* v___x_876_; uint64_t v___x_877_; uint64_t v___x_878_; uint64_t v___x_879_; uint64_t v_fold_880_; uint64_t v___x_881_; uint64_t v___x_882_; uint64_t v___x_883_; size_t v___x_884_; size_t v___x_885_; size_t v___x_886_; size_t v___x_887_; size_t v___x_888_; lean_object* v_bkt_889_; uint8_t v___x_890_; 
v_size_874_ = lean_ctor_get(v_m_871_, 0);
v_buckets_875_ = lean_ctor_get(v_m_871_, 1);
v___x_876_ = lean_array_get_size(v_buckets_875_);
v___x_877_ = l_Lean_instHashableExtraModUse_hash(v_a_872_);
v___x_878_ = 32ULL;
v___x_879_ = lean_uint64_shift_right(v___x_877_, v___x_878_);
v_fold_880_ = lean_uint64_xor(v___x_877_, v___x_879_);
v___x_881_ = 16ULL;
v___x_882_ = lean_uint64_shift_right(v_fold_880_, v___x_881_);
v___x_883_ = lean_uint64_xor(v_fold_880_, v___x_882_);
v___x_884_ = lean_uint64_to_usize(v___x_883_);
v___x_885_ = lean_usize_of_nat(v___x_876_);
v___x_886_ = ((size_t)1ULL);
v___x_887_ = lean_usize_sub(v___x_885_, v___x_886_);
v___x_888_ = lean_usize_land(v___x_884_, v___x_887_);
v_bkt_889_ = lean_array_uget_borrowed(v_buckets_875_, v___x_888_);
v___x_890_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(v_a_872_, v_bkt_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_911_; 
lean_inc_ref(v_buckets_875_);
lean_inc(v_size_874_);
v_isSharedCheck_911_ = !lean_is_exclusive(v_m_871_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; lean_object* v_unused_913_; 
v_unused_912_ = lean_ctor_get(v_m_871_, 1);
lean_dec(v_unused_912_);
v_unused_913_ = lean_ctor_get(v_m_871_, 0);
lean_dec(v_unused_913_);
v___x_892_ = v_m_871_;
v_isShared_893_ = v_isSharedCheck_911_;
goto v_resetjp_891_;
}
else
{
lean_dec(v_m_871_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_911_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; lean_object* v_size_x27_895_; lean_object* v___x_896_; lean_object* v_buckets_x27_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; uint8_t v___x_903_; 
v___x_894_ = lean_unsigned_to_nat(1u);
v_size_x27_895_ = lean_nat_add(v_size_874_, v___x_894_);
lean_dec(v_size_874_);
lean_inc(v_bkt_889_);
v___x_896_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_896_, 0, v_a_872_);
lean_ctor_set(v___x_896_, 1, v_b_873_);
lean_ctor_set(v___x_896_, 2, v_bkt_889_);
v_buckets_x27_897_ = lean_array_uset(v_buckets_875_, v___x_888_, v___x_896_);
v___x_898_ = lean_unsigned_to_nat(4u);
v___x_899_ = lean_nat_mul(v_size_x27_895_, v___x_898_);
v___x_900_ = lean_unsigned_to_nat(3u);
v___x_901_ = lean_nat_div(v___x_899_, v___x_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_array_get_size(v_buckets_x27_897_);
v___x_903_ = lean_nat_dec_le(v___x_901_, v___x_902_);
lean_dec(v___x_901_);
if (v___x_903_ == 0)
{
lean_object* v_val_904_; lean_object* v___x_906_; 
v_val_904_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35___redArg(v_buckets_x27_897_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 1, v_val_904_);
lean_ctor_set(v___x_892_, 0, v_size_x27_895_);
v___x_906_ = v___x_892_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_size_x27_895_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_val_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
else
{
lean_object* v___x_909_; 
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 1, v_buckets_x27_897_);
lean_ctor_set(v___x_892_, 0, v_size_x27_895_);
v___x_909_ = v___x_892_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_size_x27_895_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_buckets_x27_897_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
else
{
lean_dec(v_b_873_);
lean_dec_ref(v_a_872_);
return v_m_871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0(lean_object* v___x_914_, lean_object* v_entry_915_, lean_object* v_s_916_){
_start:
{
lean_object* v_addEntryFn_917_; lean_object* v_importedEntries_918_; lean_object* v_state_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_927_; 
v_addEntryFn_917_ = lean_ctor_get(v___x_914_, 3);
lean_inc(v_addEntryFn_917_);
lean_dec_ref(v___x_914_);
v_importedEntries_918_ = lean_ctor_get(v_s_916_, 0);
v_state_919_ = lean_ctor_get(v_s_916_, 1);
v_isSharedCheck_927_ = !lean_is_exclusive(v_s_916_);
if (v_isSharedCheck_927_ == 0)
{
v___x_921_ = v_s_916_;
v_isShared_922_ = v_isSharedCheck_927_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_state_919_);
lean_inc(v_importedEntries_918_);
lean_dec(v_s_916_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_927_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v_state_923_; lean_object* v___x_925_; 
v_state_923_ = lean_apply_2(v_addEntryFn_917_, v_state_919_, v_entry_915_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 1, v_state_923_);
v___x_925_ = v___x_921_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_importedEntries_918_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_state_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(lean_object* v_keys_928_, lean_object* v_i_929_, lean_object* v_k_930_){
_start:
{
lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_931_ = lean_array_get_size(v_keys_928_);
v___x_932_ = lean_nat_dec_lt(v_i_929_, v___x_931_);
if (v___x_932_ == 0)
{
lean_dec(v_i_929_);
return v___x_932_;
}
else
{
lean_object* v_k_x27_933_; uint8_t v___x_934_; 
v_k_x27_933_ = lean_array_fget_borrowed(v_keys_928_, v_i_929_);
v___x_934_ = l_Lean_instBEqExtraModUse_beq(v_k_930_, v_k_x27_933_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = lean_unsigned_to_nat(1u);
v___x_936_ = lean_nat_add(v_i_929_, v___x_935_);
lean_dec(v_i_929_);
v_i_929_ = v___x_936_;
goto _start;
}
else
{
lean_dec(v_i_929_);
return v___x_932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg___boxed(lean_object* v_keys_938_, lean_object* v_i_939_, lean_object* v_k_940_){
_start:
{
uint8_t v_res_941_; lean_object* v_r_942_; 
v_res_941_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_keys_938_, v_i_939_, v_k_940_);
lean_dec_ref(v_k_940_);
lean_dec_ref(v_keys_938_);
v_r_942_ = lean_box(v_res_941_);
return v_r_942_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(lean_object* v_x_943_, size_t v_x_944_, lean_object* v_x_945_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
lean_object* v_es_946_; lean_object* v___x_947_; size_t v___x_948_; size_t v___x_949_; lean_object* v_j_950_; lean_object* v___x_951_; 
v_es_946_ = lean_ctor_get(v_x_943_, 0);
v___x_947_ = lean_box(2);
v___x_948_ = ((size_t)31ULL);
v___x_949_ = lean_usize_land(v_x_944_, v___x_948_);
v_j_950_ = lean_usize_to_nat(v___x_949_);
v___x_951_ = lean_array_get_borrowed(v___x_947_, v_es_946_, v_j_950_);
lean_dec(v_j_950_);
switch(lean_obj_tag(v___x_951_))
{
case 0:
{
lean_object* v_key_952_; uint8_t v___x_953_; 
v_key_952_ = lean_ctor_get(v___x_951_, 0);
v___x_953_ = l_Lean_instBEqExtraModUse_beq(v_x_945_, v_key_952_);
return v___x_953_;
}
case 1:
{
lean_object* v_node_954_; size_t v___x_955_; size_t v___x_956_; 
v_node_954_ = lean_ctor_get(v___x_951_, 0);
v___x_955_ = ((size_t)5ULL);
v___x_956_ = lean_usize_shift_right(v_x_944_, v___x_955_);
v_x_943_ = v_node_954_;
v_x_944_ = v___x_956_;
goto _start;
}
default: 
{
uint8_t v___x_958_; 
v___x_958_ = 0;
return v___x_958_;
}
}
}
else
{
lean_object* v_ks_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_ks_959_ = lean_ctor_get(v_x_943_, 0);
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_ks_959_, v___x_960_, v_x_945_);
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object* v_x_962_, lean_object* v_x_963_, lean_object* v_x_964_){
_start:
{
size_t v_x_174950__boxed_965_; uint8_t v_res_966_; lean_object* v_r_967_; 
v_x_174950__boxed_965_ = lean_unbox_usize(v_x_963_);
lean_dec(v_x_963_);
v_res_966_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_962_, v_x_174950__boxed_965_, v_x_964_);
lean_dec_ref(v_x_964_);
lean_dec_ref(v_x_962_);
v_r_967_ = lean_box(v_res_966_);
return v_r_967_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(lean_object* v_x_968_, lean_object* v_x_969_){
_start:
{
uint64_t v___x_970_; size_t v___x_971_; uint8_t v___x_972_; 
v___x_970_ = l_Lean_instHashableExtraModUse_hash(v_x_969_);
v___x_971_ = lean_uint64_to_usize(v___x_970_);
v___x_972_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_968_, v___x_971_, v_x_969_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object* v_x_973_, lean_object* v_x_974_){
_start:
{
uint8_t v_res_975_; lean_object* v_r_976_; 
v_res_975_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v_x_973_, v_x_974_);
lean_dec_ref(v_x_974_);
lean_dec_ref(v_x_973_);
v_r_976_ = lean_box(v_res_975_);
return v_r_976_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0(void){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_977_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
return v___x_979_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
return v___x_981_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3(void){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1);
v___x_983_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
lean_ctor_set(v___x_983_, 2, v___x_982_);
lean_ctor_set(v___x_983_, 3, v___x_982_);
lean_ctor_set(v___x_983_, 4, v___x_982_);
lean_ctor_set(v___x_983_, 5, v___x_982_);
return v___x_983_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4(void){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_984_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7));
v___x_990_ = l_Lean_stringToMessageData(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9));
v___x_993_ = l_Lean_stringToMessageData(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_995_ = l_Lean_stringToMessageData(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12(void){
_start:
{
lean_object* v_cls_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v_cls_996_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6));
v___x_997_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_998_ = l_Lean_Name_append(v___x_997_, v_cls_996_);
return v___x_998_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13));
v___x_1001_ = l_Lean_stringToMessageData(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15));
v___x_1004_ = l_Lean_stringToMessageData(v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object* v_mod_1009_, uint8_t v_isMeta_1010_, lean_object* v_hint_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v_env_1053_; uint8_t v_isExporting_1054_; lean_object* v_entry_1055_; lean_object* v___x_1056_; lean_object* v_env_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1051_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4);
v___x_1052_ = lean_st_ref_get(v___y_1017_);
v_env_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc_ref(v_env_1053_);
lean_dec(v___x_1052_);
v_isExporting_1054_ = lean_ctor_get_uint8(v_env_1053_, sizeof(void*)*13);
lean_dec_ref(v_env_1053_);
lean_inc(v_mod_1009_);
v_entry_1055_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1055_, 0, v_mod_1009_);
lean_ctor_set_uint8(v_entry_1055_, sizeof(void*)*1, v_isExporting_1054_);
lean_ctor_set_uint8(v_entry_1055_, sizeof(void*)*1 + 1, v_isMeta_1010_);
v___x_1056_ = lean_st_ref_get(v___y_1017_);
v_env_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc_ref(v_env_1057_);
lean_dec(v___x_1056_);
v___x_1058_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1059_ = lean_box(1);
v___x_1060_ = lean_box(0);
v___x_1061_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1051_, v___x_1058_, v_env_1057_, v___x_1059_, v___x_1060_);
v___x_1062_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v___x_1061_, v_entry_1055_);
lean_dec(v___x_1061_);
if (v___x_1062_ == 0)
{
lean_object* v_toCold_1063_; lean_object* v_options_1064_; lean_object* v_inheritedTraceOptions_1065_; uint8_t v_hasTrace_1066_; lean_object* v___f_1067_; uint8_t v___x_1068_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1099_; lean_object* v___y_1100_; 
v_toCold_1063_ = lean_ctor_get(v___y_1016_, 0);
v_options_1064_ = lean_ctor_get(v_toCold_1063_, 2);
v_inheritedTraceOptions_1065_ = lean_ctor_get(v_toCold_1063_, 11);
v_hasTrace_1066_ = lean_ctor_get_uint8(v_options_1064_, sizeof(void*)*1);
lean_inc_ref(v_entry_1055_);
v___f_1067_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0), 3, 2);
lean_closure_set(v___f_1067_, 0, v___x_1058_);
lean_closure_set(v___f_1067_, 1, v_entry_1055_);
v___x_1068_ = 1;
if (v_hasTrace_1066_ == 0)
{
lean_dec(v_hint_1011_);
lean_dec(v_mod_1009_);
v___y_1099_ = v___y_1015_;
v___y_1100_ = v___y_1017_;
goto v___jp_1098_;
}
else
{
lean_object* v_cls_1107_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v_cls_1107_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6));
v___x_1127_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12);
v___x_1128_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1065_, v_options_1064_, v___x_1127_);
if (v___x_1128_ == 0)
{
lean_dec(v_hint_1011_);
lean_dec(v_mod_1009_);
v___y_1099_ = v___y_1015_;
v___y_1100_ = v___y_1017_;
goto v___jp_1098_;
}
else
{
lean_object* v___x_1129_; lean_object* v___y_1131_; 
v___x_1129_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14);
if (v_isExporting_1054_ == 0)
{
lean_object* v___x_1138_; 
v___x_1138_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19));
v___y_1131_ = v___x_1138_;
goto v___jp_1130_;
}
else
{
lean_object* v___x_1139_; 
v___x_1139_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20));
v___y_1131_ = v___x_1139_;
goto v___jp_1130_;
}
v___jp_1130_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_inc_ref(v___y_1131_);
v___x_1132_ = l_Lean_stringToMessageData(v___y_1131_);
v___x_1133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1129_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16);
v___x_1135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1133_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
if (v_isMeta_1010_ == 0)
{
lean_object* v___x_1136_; 
v___x_1136_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17));
v___y_1114_ = v___x_1135_;
v___y_1115_ = v___x_1136_;
goto v___jp_1113_;
}
else
{
lean_object* v___x_1137_; 
v___x_1137_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18));
v___y_1114_ = v___x_1135_;
v___y_1115_ = v___x_1137_;
goto v___jp_1113_;
}
}
}
v___jp_1108_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___y_1109_);
lean_ctor_set(v___x_1111_, 1, v___y_1110_);
v___x_1112_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_1107_, v___x_1111_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_dec_ref_known(v___x_1112_, 1);
v___y_1099_ = v___y_1015_;
v___y_1100_ = v___y_1017_;
goto v___jp_1098_;
}
else
{
lean_dec_ref(v___f_1067_);
lean_dec_ref_known(v_entry_1055_, 1);
return v___x_1112_;
}
}
v___jp_1113_:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
lean_inc_ref(v___y_1115_);
v___x_1116_ = l_Lean_stringToMessageData(v___y_1115_);
v___x_1117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___y_1114_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
v___x_1118_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = l_Lean_MessageData_ofName(v_mod_1009_);
v___x_1121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = l_Lean_Name_isAnonymous(v_hint_1011_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1123_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10);
v___x_1124_ = l_Lean_MessageData_ofName(v_hint_1011_);
v___x_1125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1123_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___y_1109_ = v___x_1121_;
v___y_1110_ = v___x_1125_;
goto v___jp_1108_;
}
else
{
lean_object* v___x_1126_; 
lean_dec(v_hint_1011_);
v___x_1126_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11);
v___y_1109_ = v___x_1121_;
v___y_1110_ = v___x_1126_;
goto v___jp_1108_;
}
}
}
v___jp_1069_:
{
lean_object* v___x_1072_; lean_object* v_toEnvExtension_1073_; uint8_t v_logWrites_1074_; 
v___x_1072_ = lean_st_ref_take(v___y_1071_);
v_toEnvExtension_1073_ = lean_ctor_get(v___x_1058_, 0);
v_logWrites_1074_ = lean_ctor_get_uint8(v_toEnvExtension_1073_, sizeof(void*)*6);
if (v_logWrites_1074_ == 0)
{
lean_object* v_env_1075_; lean_object* v_nextMacroScope_1076_; lean_object* v_ngen_1077_; lean_object* v_auxDeclNGen_1078_; lean_object* v_traceState_1079_; lean_object* v_recordedDeps_1080_; lean_object* v_messages_1081_; lean_object* v_infoState_1082_; lean_object* v_snapshotTasks_1083_; lean_object* v_asyncMode_1084_; lean_object* v___x_1085_; 
v_env_1075_ = lean_ctor_get(v___x_1072_, 0);
lean_inc_ref(v_env_1075_);
v_nextMacroScope_1076_ = lean_ctor_get(v___x_1072_, 1);
lean_inc(v_nextMacroScope_1076_);
v_ngen_1077_ = lean_ctor_get(v___x_1072_, 2);
lean_inc_ref(v_ngen_1077_);
v_auxDeclNGen_1078_ = lean_ctor_get(v___x_1072_, 3);
lean_inc_ref(v_auxDeclNGen_1078_);
v_traceState_1079_ = lean_ctor_get(v___x_1072_, 4);
lean_inc_ref(v_traceState_1079_);
v_recordedDeps_1080_ = lean_ctor_get(v___x_1072_, 6);
lean_inc_ref(v_recordedDeps_1080_);
v_messages_1081_ = lean_ctor_get(v___x_1072_, 7);
lean_inc_ref(v_messages_1081_);
v_infoState_1082_ = lean_ctor_get(v___x_1072_, 8);
lean_inc_ref(v_infoState_1082_);
v_snapshotTasks_1083_ = lean_ctor_get(v___x_1072_, 9);
lean_inc_ref(v_snapshotTasks_1083_);
lean_dec(v___x_1072_);
v_asyncMode_1084_ = lean_ctor_get(v_toEnvExtension_1073_, 2);
lean_inc_ref(v_toEnvExtension_1073_);
v___x_1085_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1073_, v_env_1075_, v___f_1067_, v_asyncMode_1084_, v___x_1060_, v___x_1068_);
v___y_1020_ = v_nextMacroScope_1076_;
v___y_1021_ = v___y_1070_;
v___y_1022_ = v_infoState_1082_;
v___y_1023_ = v_recordedDeps_1080_;
v___y_1024_ = v_auxDeclNGen_1078_;
v___y_1025_ = v___y_1071_;
v___y_1026_ = v_ngen_1077_;
v___y_1027_ = v_snapshotTasks_1083_;
v___y_1028_ = v_messages_1081_;
v___y_1029_ = v_traceState_1079_;
v___y_1030_ = v___x_1085_;
goto v___jp_1019_;
}
else
{
lean_object* v_env_1086_; lean_object* v_nextMacroScope_1087_; lean_object* v_ngen_1088_; lean_object* v_auxDeclNGen_1089_; lean_object* v_traceState_1090_; lean_object* v_recordedDeps_1091_; lean_object* v_messages_1092_; lean_object* v_infoState_1093_; lean_object* v_snapshotTasks_1094_; lean_object* v_asyncMode_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v_env_1086_ = lean_ctor_get(v___x_1072_, 0);
lean_inc_ref(v_env_1086_);
v_nextMacroScope_1087_ = lean_ctor_get(v___x_1072_, 1);
lean_inc(v_nextMacroScope_1087_);
v_ngen_1088_ = lean_ctor_get(v___x_1072_, 2);
lean_inc_ref(v_ngen_1088_);
v_auxDeclNGen_1089_ = lean_ctor_get(v___x_1072_, 3);
lean_inc_ref(v_auxDeclNGen_1089_);
v_traceState_1090_ = lean_ctor_get(v___x_1072_, 4);
lean_inc_ref(v_traceState_1090_);
v_recordedDeps_1091_ = lean_ctor_get(v___x_1072_, 6);
lean_inc_ref(v_recordedDeps_1091_);
v_messages_1092_ = lean_ctor_get(v___x_1072_, 7);
lean_inc_ref(v_messages_1092_);
v_infoState_1093_ = lean_ctor_get(v___x_1072_, 8);
lean_inc_ref(v_infoState_1093_);
v_snapshotTasks_1094_ = lean_ctor_get(v___x_1072_, 9);
lean_inc_ref(v_snapshotTasks_1094_);
lean_dec(v___x_1072_);
v_asyncMode_1095_ = lean_ctor_get(v_toEnvExtension_1073_, 2);
lean_inc_ref_n(v_toEnvExtension_1073_, 2);
v___x_1096_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1073_, v_env_1086_);
lean_dec_ref(v_env_1086_);
v___x_1097_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1073_, v___x_1096_, v___f_1067_, v_asyncMode_1095_, v___x_1060_, v___x_1068_);
v___y_1020_ = v_nextMacroScope_1087_;
v___y_1021_ = v___y_1070_;
v___y_1022_ = v_infoState_1093_;
v___y_1023_ = v_recordedDeps_1091_;
v___y_1024_ = v_auxDeclNGen_1089_;
v___y_1025_ = v___y_1071_;
v___y_1026_ = v_ngen_1088_;
v___y_1027_ = v_snapshotTasks_1094_;
v___y_1028_ = v_messages_1092_;
v___y_1029_ = v_traceState_1090_;
v___y_1030_ = v___x_1097_;
goto v___jp_1019_;
}
}
v___jp_1098_:
{
uint8_t v___x_1101_; 
v___x_1101_ = l_Lean_usageRecordingEnabled();
if (v___x_1101_ == 0)
{
lean_dec_ref_known(v_entry_1055_, 1);
v___y_1070_ = v___y_1099_;
v___y_1071_ = v___y_1100_;
goto v___jp_1069_;
}
else
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1102_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_1103_ = lean_st_ref_take(v___x_1102_);
v___x_1104_ = lean_box(0);
v___x_1105_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(v___x_1103_, v_entry_1055_, v___x_1104_);
v___x_1106_ = lean_st_ref_put(v___x_1102_, v___x_1105_);
v___y_1070_ = v___y_1099_;
v___y_1071_ = v___y_1100_;
goto v___jp_1069_;
}
}
}
else
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
lean_dec_ref_known(v_entry_1055_, 1);
lean_dec(v_hint_1011_);
lean_dec(v_mod_1009_);
v___x_1140_ = lean_box(0);
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
v___jp_1019_:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_mctx_1035_; lean_object* v_zetaDeltaFVarIds_1036_; lean_object* v_postponed_1037_; lean_object* v_diag_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1049_; 
v___x_1031_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
v___x_1032_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1032_, 0, v___y_1030_);
lean_ctor_set(v___x_1032_, 1, v___y_1020_);
lean_ctor_set(v___x_1032_, 2, v___y_1026_);
lean_ctor_set(v___x_1032_, 3, v___y_1024_);
lean_ctor_set(v___x_1032_, 4, v___y_1029_);
lean_ctor_set(v___x_1032_, 5, v___x_1031_);
lean_ctor_set(v___x_1032_, 6, v___y_1023_);
lean_ctor_set(v___x_1032_, 7, v___y_1028_);
lean_ctor_set(v___x_1032_, 8, v___y_1022_);
lean_ctor_set(v___x_1032_, 9, v___y_1027_);
v___x_1033_ = lean_st_ref_put(v___y_1025_, v___x_1032_);
v___x_1034_ = lean_st_ref_take(v___y_1021_);
v_mctx_1035_ = lean_ctor_get(v___x_1034_, 0);
v_zetaDeltaFVarIds_1036_ = lean_ctor_get(v___x_1034_, 2);
v_postponed_1037_ = lean_ctor_get(v___x_1034_, 3);
v_diag_1038_ = lean_ctor_get(v___x_1034_, 4);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1049_ == 0)
{
lean_object* v_unused_1050_; 
v_unused_1050_ = lean_ctor_get(v___x_1034_, 1);
lean_dec(v_unused_1050_);
v___x_1040_ = v___x_1034_;
v_isShared_1041_ = v_isSharedCheck_1049_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_diag_1038_);
lean_inc(v_postponed_1037_);
lean_inc(v_zetaDeltaFVarIds_1036_);
lean_inc(v_mctx_1035_);
lean_dec(v___x_1034_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1049_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1042_ = lean_box(0);
v___x_1043_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3);
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 1, v___x_1043_);
v___x_1045_ = v___x_1040_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_mctx_1035_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1048_, 2, v_zetaDeltaFVarIds_1036_);
lean_ctor_set(v_reuseFailAlloc_1048_, 3, v_postponed_1037_);
lean_ctor_set(v_reuseFailAlloc_1048_, 4, v_diag_1038_);
v___x_1045_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_st_ref_put(v___y_1021_, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1042_);
return v___x_1047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object* v_mod_1142_, lean_object* v_isMeta_1143_, lean_object* v_hint_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
uint8_t v_isMeta_boxed_1152_; lean_object* v_res_1153_; 
v_isMeta_boxed_1152_ = lean_unbox(v_isMeta_1143_);
v_res_1153_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_mod_1142_, v_isMeta_boxed_1152_, v_hint_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object* v___x_1154_, lean_object* v_declName_1155_, lean_object* v_as_1156_, size_t v_sz_1157_, size_t v_i_1158_, lean_object* v_b_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
uint8_t v___x_1167_; 
v___x_1167_ = lean_usize_dec_lt(v_i_1158_, v_sz_1157_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; 
lean_dec(v_declName_1155_);
v___x_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1168_, 0, v_b_1159_);
return v___x_1168_;
}
else
{
lean_object* v___x_1169_; lean_object* v_modules_1170_; lean_object* v___x_1171_; lean_object* v_a_1172_; lean_object* v___x_1173_; lean_object* v_toImport_1174_; lean_object* v_module_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; 
v___x_1169_ = l_Lean_Environment_header(v___x_1154_);
v_modules_1170_ = lean_ctor_get(v___x_1169_, 3);
lean_inc_ref(v_modules_1170_);
lean_dec_ref(v___x_1169_);
v___x_1171_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1172_ = lean_array_uget_borrowed(v_as_1156_, v_i_1158_);
v___x_1173_ = lean_array_get(v___x_1171_, v_modules_1170_, v_a_1172_);
lean_dec_ref(v_modules_1170_);
v_toImport_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc_ref(v_toImport_1174_);
lean_dec(v___x_1173_);
v_module_1175_ = lean_ctor_get(v_toImport_1174_, 0);
lean_inc(v_module_1175_);
lean_dec_ref(v_toImport_1174_);
v___x_1176_ = lean_box(0);
v___x_1177_ = 0;
lean_inc(v_declName_1155_);
v___x_1178_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_1175_, v___x_1177_, v_declName_1155_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_);
if (lean_obj_tag(v___x_1178_) == 0)
{
size_t v___x_1179_; size_t v___x_1180_; 
lean_dec_ref_known(v___x_1178_, 1);
v___x_1179_ = ((size_t)1ULL);
v___x_1180_ = lean_usize_add(v_i_1158_, v___x_1179_);
v_i_1158_ = v___x_1180_;
v_b_1159_ = v___x_1176_;
goto _start;
}
else
{
lean_dec(v_declName_1155_);
return v___x_1178_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object* v___x_1182_, lean_object* v_declName_1183_, lean_object* v_as_1184_, lean_object* v_sz_1185_, lean_object* v_i_1186_, lean_object* v_b_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
size_t v_sz_boxed_1195_; size_t v_i_boxed_1196_; lean_object* v_res_1197_; 
v_sz_boxed_1195_ = lean_unbox_usize(v_sz_1185_);
lean_dec(v_sz_1185_);
v_i_boxed_1196_ = lean_unbox_usize(v_i_1186_);
lean_dec(v_i_1186_);
v_res_1197_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v___x_1182_, v_declName_1183_, v_as_1184_, v_sz_boxed_1195_, v_i_boxed_1196_, v_b_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec_ref(v_as_1184_);
lean_dec_ref(v___x_1182_);
return v_res_1197_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object* v_declName_1201_, uint8_t v_isMeta_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v_env_1215_; lean_object* v___y_1217_; lean_object* v___x_1230_; 
v___x_1210_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0);
v___x_1211_ = lean_st_ref_get(v___y_1208_);
v_env_1215_ = lean_ctor_get(v___x_1211_, 0);
lean_inc_ref(v_env_1215_);
lean_dec(v___x_1211_);
v___x_1230_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1215_, v_declName_1201_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_dec_ref(v_env_1215_);
lean_dec(v_declName_1201_);
goto v___jp_1212_;
}
else
{
lean_object* v_val_1231_; lean_object* v___x_1232_; lean_object* v_modules_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v_val_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_val_1231_);
lean_dec_ref_known(v___x_1230_, 1);
v___x_1232_ = l_Lean_Environment_header(v_env_1215_);
v_modules_1233_ = lean_ctor_get(v___x_1232_, 3);
lean_inc_ref(v_modules_1233_);
lean_dec_ref(v___x_1232_);
v___x_1234_ = lean_array_get_size(v_modules_1233_);
v___x_1235_ = lean_nat_dec_lt(v_val_1231_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_dec_ref(v_modules_1233_);
lean_dec(v_val_1231_);
lean_dec_ref(v_env_1215_);
lean_dec(v_declName_1201_);
goto v___jp_1212_;
}
else
{
lean_object* v___x_1236_; lean_object* v___x_1237_; uint8_t v___y_1239_; 
v___x_1236_ = lean_array_fget(v_modules_1233_, v_val_1231_);
lean_dec(v_val_1231_);
lean_dec_ref(v_modules_1233_);
v___x_1237_ = lean_st_ref_get(v___y_1208_);
if (v_isMeta_1202_ == 0)
{
lean_dec(v___x_1237_);
v___y_1239_ = v_isMeta_1202_;
goto v___jp_1238_;
}
else
{
lean_object* v_env_1250_; uint8_t v___x_1251_; 
v_env_1250_ = lean_ctor_get(v___x_1237_, 0);
lean_inc_ref(v_env_1250_);
lean_dec(v___x_1237_);
lean_inc(v_declName_1201_);
v___x_1251_ = l_Lean_isMarkedMeta(v_env_1250_, v_declName_1201_);
if (v___x_1251_ == 0)
{
v___y_1239_ = v_isMeta_1202_;
goto v___jp_1238_;
}
else
{
uint8_t v___x_1252_; 
v___x_1252_ = 0;
v___y_1239_ = v___x_1252_;
goto v___jp_1238_;
}
}
v___jp_1238_:
{
lean_object* v_toImport_1240_; lean_object* v_module_1241_; lean_object* v___x_1242_; 
v_toImport_1240_ = lean_ctor_get(v___x_1236_, 0);
lean_inc_ref(v_toImport_1240_);
lean_dec(v___x_1236_);
v_module_1241_ = lean_ctor_get(v_toImport_1240_, 0);
lean_inc(v_module_1241_);
lean_dec_ref(v_toImport_1240_);
lean_inc(v_declName_1201_);
v___x_1242_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_1241_, v___y_1239_, v_declName_1201_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
lean_dec_ref_known(v___x_1242_, 1);
v___x_1243_ = l_Lean_indirectModUseExt;
v___x_1244_ = lean_box(1);
v___x_1245_ = lean_box(0);
lean_inc_ref(v_env_1215_);
v___x_1246_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1210_, v___x_1243_, v_env_1215_, v___x_1244_, v___x_1245_);
v___x_1247_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v___x_1246_, v_declName_1201_);
lean_dec(v___x_1246_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1));
v___y_1217_ = v___x_1248_;
goto v___jp_1216_;
}
else
{
lean_object* v_val_1249_; 
v_val_1249_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_val_1249_);
lean_dec_ref_known(v___x_1247_, 1);
v___y_1217_ = v_val_1249_;
goto v___jp_1216_;
}
}
else
{
lean_dec_ref(v_env_1215_);
lean_dec(v_declName_1201_);
return v___x_1242_;
}
}
}
}
v___jp_1212_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = lean_box(0);
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
v___jp_1216_:
{
lean_object* v___x_1218_; size_t v_sz_1219_; size_t v___x_1220_; lean_object* v___x_1221_; 
v___x_1218_ = lean_box(0);
v_sz_1219_ = lean_array_size(v___y_1217_);
v___x_1220_ = ((size_t)0ULL);
v___x_1221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v_env_1215_, v_declName_1201_, v___y_1217_, v_sz_1219_, v___x_1220_, v___x_1218_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
lean_dec_ref(v___y_1217_);
lean_dec_ref(v_env_1215_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v___x_1221_, 0);
lean_dec(v_unused_1229_);
v___x_1223_ = v___x_1221_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_dec(v___x_1221_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v___x_1218_);
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1218_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
return v___x_1221_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object* v_declName_1253_, lean_object* v_isMeta_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v_isMeta_boxed_1262_; lean_object* v_res_1263_; 
v_isMeta_boxed_1262_ = lean_unbox(v_isMeta_1254_);
v_res_1263_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_declName_1253_, v_isMeta_boxed_1262_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object* v_as_x27_1264_, lean_object* v_b_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
if (lean_obj_tag(v_as_x27_1264_) == 0)
{
lean_object* v___x_1273_; 
v___x_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1273_, 0, v_b_1265_);
return v___x_1273_;
}
else
{
lean_object* v_head_1274_; lean_object* v_tail_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; lean_object* v___x_1278_; 
v_head_1274_ = lean_ctor_get(v_as_x27_1264_, 0);
v_tail_1275_ = lean_ctor_get(v_as_x27_1264_, 1);
v___x_1276_ = lean_box(0);
v___x_1277_ = 1;
lean_inc(v_head_1274_);
v___x_1278_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_head_1274_, v___x_1277_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_dec_ref_known(v___x_1278_, 1);
v_as_x27_1264_ = v_tail_1275_;
v_b_1265_ = v___x_1276_;
goto _start;
}
else
{
return v___x_1278_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object* v_as_x27_1280_, lean_object* v_b_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_1280_, v_b_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v_as_x27_1280_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object* v_currNamespace_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1293_, 0, v_currNamespace_1290_);
lean_ctor_set(v___x_1293_, 1, v___y_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object* v_currNamespace_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(v_currNamespace_1294_, v___y_1295_, v___y_1296_);
lean_dec_ref(v___y_1295_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object* v_env_1298_, lean_object* v___x_1299_, lean_object* v_currNamespace_1300_, lean_object* v_openDecls_1301_, lean_object* v_n_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = l_Lean_ResolveName_resolveGlobalName(v_env_1298_, v___x_1299_, v_currNamespace_1300_, v_openDecls_1301_, v_n_1302_);
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
lean_ctor_set(v___x_1306_, 1, v___y_1304_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object* v_env_1307_, lean_object* v___x_1308_, lean_object* v_currNamespace_1309_, lean_object* v_openDecls_1310_, lean_object* v_n_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(v_env_1307_, v___x_1308_, v_currNamespace_1309_, v_openDecls_1310_, v_n_1311_, v___y_1312_, v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec_ref(v___x_1308_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object* v_env_1315_, lean_object* v_currNamespace_1316_, lean_object* v_openDecls_1317_, lean_object* v_n_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = l_Lean_ResolveName_resolveNamespace(v_env_1315_, v_currNamespace_1316_, v_openDecls_1317_, v_n_1318_);
v___x_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
lean_ctor_set(v___x_1322_, 1, v___y_1320_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object* v_env_1323_, lean_object* v_currNamespace_1324_, lean_object* v_openDecls_1325_, lean_object* v_n_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(v_env_1323_, v_currNamespace_1324_, v_openDecls_1325_, v_n_1326_, v___y_1327_, v___y_1328_);
lean_dec_ref(v___y_1327_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object* v_x_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v___x_1339_; lean_object* v_toCold_1340_; lean_object* v_env_1341_; lean_object* v_currRecDepth_1342_; lean_object* v_ref_1343_; lean_object* v_maxRecDepth_1344_; lean_object* v_currNamespace_1345_; lean_object* v_openDecls_1346_; lean_object* v_quotContext_1347_; lean_object* v_currMacroScope_1348_; lean_object* v___f_1349_; lean_object* v___f_1350_; lean_object* v___x_1351_; lean_object* v___f_1352_; lean_object* v___f_1353_; lean_object* v___f_1354_; lean_object* v_methods_1355_; lean_object* v___x_1356_; lean_object* v_nextMacroScope_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1339_ = lean_st_ref_get(v___y_1337_);
v_toCold_1340_ = lean_ctor_get(v___y_1336_, 0);
v_env_1341_ = lean_ctor_get(v___x_1339_, 0);
lean_inc_ref_n(v_env_1341_, 4);
lean_dec(v___x_1339_);
v_currRecDepth_1342_ = lean_ctor_get(v___y_1336_, 1);
v_ref_1343_ = lean_ctor_get(v___y_1336_, 2);
v_maxRecDepth_1344_ = lean_ctor_get(v_toCold_1340_, 3);
v_currNamespace_1345_ = lean_ctor_get(v_toCold_1340_, 4);
v_openDecls_1346_ = lean_ctor_get(v_toCold_1340_, 5);
v_quotContext_1347_ = lean_ctor_get(v_toCold_1340_, 8);
v_currMacroScope_1348_ = lean_ctor_get(v_toCold_1340_, 9);
v___f_1349_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1349_, 0, v_env_1341_);
v___f_1350_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1350_, 0, v_env_1341_);
v___x_1351_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1336_);
lean_inc_n(v_currNamespace_1345_, 3);
v___f_1352_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1352_, 0, v_currNamespace_1345_);
lean_inc_n(v_openDecls_1346_, 2);
v___f_1353_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed), 7, 4);
lean_closure_set(v___f_1353_, 0, v_env_1341_);
lean_closure_set(v___f_1353_, 1, v___x_1351_);
lean_closure_set(v___f_1353_, 2, v_currNamespace_1345_);
lean_closure_set(v___f_1353_, 3, v_openDecls_1346_);
v___f_1354_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_1354_, 0, v_env_1341_);
lean_closure_set(v___f_1354_, 1, v_currNamespace_1345_);
lean_closure_set(v___f_1354_, 2, v_openDecls_1346_);
v_methods_1355_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1355_, 0, v___f_1350_);
lean_ctor_set(v_methods_1355_, 1, v___f_1352_);
lean_ctor_set(v_methods_1355_, 2, v___f_1349_);
lean_ctor_set(v_methods_1355_, 3, v___f_1354_);
lean_ctor_set(v_methods_1355_, 4, v___f_1353_);
v___x_1356_ = lean_st_ref_get(v___y_1337_);
v_nextMacroScope_1357_ = lean_ctor_get(v___x_1356_, 1);
lean_inc(v_nextMacroScope_1357_);
lean_dec(v___x_1356_);
lean_inc(v_ref_1343_);
lean_inc(v_maxRecDepth_1344_);
lean_inc(v_currRecDepth_1342_);
lean_inc(v_currMacroScope_1348_);
lean_inc(v_quotContext_1347_);
v___x_1358_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1358_, 0, v_methods_1355_);
lean_ctor_set(v___x_1358_, 1, v_quotContext_1347_);
lean_ctor_set(v___x_1358_, 2, v_currMacroScope_1348_);
lean_ctor_set(v___x_1358_, 3, v_currRecDepth_1342_);
lean_ctor_set(v___x_1358_, 4, v_maxRecDepth_1344_);
lean_ctor_set(v___x_1358_, 5, v_ref_1343_);
v___x_1359_ = lean_box(0);
v___x_1360_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1360_, 0, v_nextMacroScope_1357_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
lean_ctor_set(v___x_1360_, 2, v___x_1359_);
v___x_1361_ = lean_apply_2(v_x_1331_, v___x_1358_, v___x_1360_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v_a_1363_; lean_object* v_macroScope_1364_; lean_object* v_traceMsgs_1365_; lean_object* v_expandedMacroDecls_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 1);
lean_inc(v_a_1362_);
v_a_1363_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1361_, 2);
v_macroScope_1364_ = lean_ctor_get(v_a_1362_, 0);
lean_inc(v_macroScope_1364_);
v_traceMsgs_1365_ = lean_ctor_get(v_a_1362_, 1);
lean_inc(v_traceMsgs_1365_);
v_expandedMacroDecls_1366_ = lean_ctor_get(v_a_1362_, 2);
lean_inc(v_expandedMacroDecls_1366_);
lean_dec(v_a_1362_);
v___x_1367_ = lean_box(0);
v___x_1368_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_expandedMacroDecls_1366_, v___x_1367_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v_expandedMacroDecls_1366_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v___x_1369_; lean_object* v_env_1370_; lean_object* v_ngen_1371_; lean_object* v_auxDeclNGen_1372_; lean_object* v_traceState_1373_; lean_object* v_cache_1374_; lean_object* v_recordedDeps_1375_; lean_object* v_messages_1376_; lean_object* v_infoState_1377_; lean_object* v_snapshotTasks_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1404_; 
lean_dec_ref_known(v___x_1368_, 1);
v___x_1369_ = lean_st_ref_take(v___y_1337_);
v_env_1370_ = lean_ctor_get(v___x_1369_, 0);
v_ngen_1371_ = lean_ctor_get(v___x_1369_, 2);
v_auxDeclNGen_1372_ = lean_ctor_get(v___x_1369_, 3);
v_traceState_1373_ = lean_ctor_get(v___x_1369_, 4);
v_cache_1374_ = lean_ctor_get(v___x_1369_, 5);
v_recordedDeps_1375_ = lean_ctor_get(v___x_1369_, 6);
v_messages_1376_ = lean_ctor_get(v___x_1369_, 7);
v_infoState_1377_ = lean_ctor_get(v___x_1369_, 8);
v_snapshotTasks_1378_ = lean_ctor_get(v___x_1369_, 9);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1404_ == 0)
{
lean_object* v_unused_1405_; 
v_unused_1405_ = lean_ctor_get(v___x_1369_, 1);
lean_dec(v_unused_1405_);
v___x_1380_ = v___x_1369_;
v_isShared_1381_ = v_isSharedCheck_1404_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_snapshotTasks_1378_);
lean_inc(v_infoState_1377_);
lean_inc(v_messages_1376_);
lean_inc(v_recordedDeps_1375_);
lean_inc(v_cache_1374_);
lean_inc(v_traceState_1373_);
lean_inc(v_auxDeclNGen_1372_);
lean_inc(v_ngen_1371_);
lean_inc(v_env_1370_);
lean_dec(v___x_1369_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1404_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 1, v_macroScope_1364_);
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_env_1370_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v_macroScope_1364_);
lean_ctor_set(v_reuseFailAlloc_1403_, 2, v_ngen_1371_);
lean_ctor_set(v_reuseFailAlloc_1403_, 3, v_auxDeclNGen_1372_);
lean_ctor_set(v_reuseFailAlloc_1403_, 4, v_traceState_1373_);
lean_ctor_set(v_reuseFailAlloc_1403_, 5, v_cache_1374_);
lean_ctor_set(v_reuseFailAlloc_1403_, 6, v_recordedDeps_1375_);
lean_ctor_set(v_reuseFailAlloc_1403_, 7, v_messages_1376_);
lean_ctor_set(v_reuseFailAlloc_1403_, 8, v_infoState_1377_);
lean_ctor_set(v_reuseFailAlloc_1403_, 9, v_snapshotTasks_1378_);
v___x_1383_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1384_ = lean_st_ref_put(v___y_1337_, v___x_1383_);
v___x_1385_ = l_List_reverse___redArg(v_traceMsgs_1365_);
v___x_1386_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v___x_1385_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; 
v_unused_1394_ = lean_ctor_get(v___x_1386_, 0);
lean_dec(v_unused_1394_);
v___x_1388_ = v___x_1386_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_dec(v___x_1386_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v_a_1363_);
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1363_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
else
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1402_; 
lean_dec(v_a_1363_);
v_a_1395_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1397_ = v___x_1386_;
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1386_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_a_1395_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_traceMsgs_1365_);
lean_dec(v_macroScope_1364_);
lean_dec(v_a_1363_);
v_a_1406_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1368_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1368_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_a_1414_; 
v_a_1414_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1414_);
lean_dec_ref_known(v___x_1361_, 2);
if (lean_obj_tag(v_a_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v_a_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; 
v_a_1415_ = lean_ctor_get(v_a_1414_, 0);
lean_inc(v_a_1415_);
v_a_1416_ = lean_ctor_get(v_a_1414_, 1);
lean_inc_ref(v_a_1416_);
lean_dec_ref_known(v_a_1414_, 2);
v___x_1417_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0));
v___x_1418_ = lean_string_dec_eq(v_a_1416_, v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1419_, 0, v_a_1416_);
v___x_1420_ = l_Lean_MessageData_ofFormat(v___x_1419_);
v___x_1421_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_a_1415_, v___x_1420_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v_a_1415_);
return v___x_1421_;
}
else
{
lean_object* v___x_1422_; 
lean_dec_ref(v_a_1416_);
v___x_1422_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_a_1415_);
return v___x_1422_;
}
}
else
{
lean_object* v___x_1423_; 
v___x_1423_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_1423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object* v_x_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t v_sz_1436_, size_t v_i_1437_, lean_object* v_bs_1438_){
_start:
{
uint8_t v___x_1439_; 
v___x_1439_ = lean_usize_dec_lt(v_i_1437_, v_sz_1436_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1440_, 0, v_bs_1438_);
return v___x_1440_;
}
else
{
lean_object* v_v_1441_; lean_object* v___x_1442_; uint8_t v___x_1443_; 
v_v_1441_ = lean_array_uget(v_bs_1438_, v_i_1437_);
v___x_1442_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
lean_inc(v_v_1441_);
v___x_1443_ = l_Lean_Syntax_isOfKind(v_v_1441_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; 
lean_dec(v_v_1441_);
lean_dec_ref(v_bs_1438_);
v___x_1444_ = lean_box(0);
return v___x_1444_;
}
else
{
lean_object* v___x_1445_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1445_ = lean_unsigned_to_nat(0u);
v___x_1446_ = l_Lean_Syntax_getArg(v_v_1441_, v___x_1445_);
v___x_1447_ = l_Lean_Syntax_isOfKind(v___x_1446_, v___x_1442_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; 
lean_dec(v_v_1441_);
lean_dec_ref(v_bs_1438_);
v___x_1448_ = lean_box(0);
return v___x_1448_;
}
else
{
lean_object* v___x_1449_; lean_object* v_bs_x27_1450_; lean_object* v___x_1451_; size_t v___x_1452_; size_t v___x_1453_; lean_object* v___x_1454_; 
v___x_1449_ = lean_unsigned_to_nat(3u);
v_bs_x27_1450_ = lean_array_uset(v_bs_1438_, v_i_1437_, v___x_1445_);
v___x_1451_ = l_Lean_Syntax_getArg(v_v_1441_, v___x_1449_);
lean_dec(v_v_1441_);
v___x_1452_ = ((size_t)1ULL);
v___x_1453_ = lean_usize_add(v_i_1437_, v___x_1452_);
v___x_1454_ = lean_array_uset(v_bs_x27_1450_, v_i_1437_, v___x_1451_);
v_i_1437_ = v___x_1453_;
v_bs_1438_ = v___x_1454_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object* v_sz_1456_, lean_object* v_i_1457_, lean_object* v_bs_1458_){
_start:
{
size_t v_sz_boxed_1459_; size_t v_i_boxed_1460_; lean_object* v_res_1461_; 
v_sz_boxed_1459_ = lean_unbox_usize(v_sz_1456_);
lean_dec(v_sz_1456_);
v_i_boxed_1460_ = lean_unbox_usize(v_i_1457_);
lean_dec(v_i_1457_);
v_res_1461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_boxed_1459_, v_i_boxed_1460_, v_bs_1458_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(size_t v_sz_1474_, size_t v_i_1475_, lean_object* v_bs_1476_){
_start:
{
uint8_t v___x_1477_; 
v___x_1477_ = lean_usize_dec_lt(v_i_1475_, v_sz_1474_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_bs_1476_);
return v___x_1478_;
}
else
{
lean_object* v_v_1479_; lean_object* v___x_1480_; uint8_t v___x_1481_; 
v_v_1479_ = lean_array_uget(v_bs_1476_, v_i_1475_);
v___x_1480_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1));
lean_inc(v_v_1479_);
v___x_1481_ = l_Lean_Syntax_isOfKind(v_v_1479_, v___x_1480_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; 
lean_dec(v_v_1479_);
lean_dec_ref(v_bs_1476_);
v___x_1482_ = lean_box(0);
return v___x_1482_;
}
else
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; uint8_t v___x_1486_; 
v___x_1483_ = lean_unsigned_to_nat(1u);
v___x_1484_ = l_Lean_Syntax_getArg(v_v_1479_, v___x_1483_);
v___x_1485_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3));
v___x_1486_ = l_Lean_Syntax_isOfKind(v___x_1484_, v___x_1485_);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; 
lean_dec(v_v_1479_);
lean_dec_ref(v_bs_1476_);
v___x_1487_ = lean_box(0);
return v___x_1487_;
}
else
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v_bs_x27_1490_; lean_object* v___x_1491_; size_t v___x_1492_; size_t v___x_1493_; lean_object* v___x_1494_; 
v___x_1488_ = lean_unsigned_to_nat(3u);
v___x_1489_ = lean_unsigned_to_nat(0u);
v_bs_x27_1490_ = lean_array_uset(v_bs_1476_, v_i_1475_, v___x_1489_);
v___x_1491_ = l_Lean_Syntax_getArg(v_v_1479_, v___x_1488_);
lean_dec(v_v_1479_);
v___x_1492_ = ((size_t)1ULL);
v___x_1493_ = lean_usize_add(v_i_1475_, v___x_1492_);
v___x_1494_ = lean_array_uset(v_bs_x27_1490_, v_i_1475_, v___x_1491_);
v_i_1475_ = v___x_1493_;
v_bs_1476_ = v___x_1494_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object* v_sz_1496_, lean_object* v_i_1497_, lean_object* v_bs_1498_){
_start:
{
size_t v_sz_boxed_1499_; size_t v_i_boxed_1500_; lean_object* v_res_1501_; 
v_sz_boxed_1499_ = lean_unbox_usize(v_sz_1496_);
lean_dec(v_sz_1496_);
v_i_boxed_1500_ = lean_unbox_usize(v_i_1497_);
lean_dec(v_i_1497_);
v_res_1501_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v_sz_boxed_1499_, v_i_boxed_1500_, v_bs_1498_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t v_sz_1508_, size_t v_i_1509_, lean_object* v_bs_1510_){
_start:
{
uint8_t v___x_1511_; 
v___x_1511_ = lean_usize_dec_lt(v_i_1509_, v_sz_1508_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_bs_1510_);
return v___x_1512_;
}
else
{
lean_object* v_v_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
v_v_1513_ = lean_array_uget(v_bs_1510_, v_i_1509_);
v___x_1514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1));
lean_inc(v_v_1513_);
v___x_1515_ = l_Lean_Syntax_isOfKind(v_v_1513_, v___x_1514_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; 
lean_dec(v_v_1513_);
lean_dec_ref(v_bs_1510_);
v___x_1516_ = lean_box(0);
return v___x_1516_;
}
else
{
lean_object* v___x_1517_; lean_object* v_bs_x27_1518_; lean_object* v___x_1525_; uint8_t v___x_1526_; 
v___x_1517_ = lean_unsigned_to_nat(0u);
v_bs_x27_1518_ = lean_array_uset(v_bs_1510_, v_i_1509_, v___x_1517_);
v___x_1525_ = l_Lean_Syntax_getArg(v_v_1513_, v___x_1517_);
lean_dec(v_v_1513_);
v___x_1526_ = l_Lean_Syntax_isNone(v___x_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1527_ = lean_unsigned_to_nat(2u);
v___x_1528_ = l_Lean_Syntax_matchesNull(v___x_1525_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; 
lean_dec_ref(v_bs_x27_1518_);
v___x_1529_ = lean_box(0);
return v___x_1529_;
}
else
{
goto v___jp_1519_;
}
}
else
{
lean_dec(v___x_1525_);
goto v___jp_1519_;
}
v___jp_1519_:
{
lean_object* v___x_1520_; size_t v___x_1521_; size_t v___x_1522_; lean_object* v___x_1523_; 
v___x_1520_ = lean_box(0);
v___x_1521_ = ((size_t)1ULL);
v___x_1522_ = lean_usize_add(v_i_1509_, v___x_1521_);
v___x_1523_ = lean_array_uset(v_bs_x27_1518_, v_i_1509_, v___x_1520_);
v_i_1509_ = v___x_1522_;
v_bs_1510_ = v___x_1523_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object* v_sz_1530_, lean_object* v_i_1531_, lean_object* v_bs_1532_){
_start:
{
size_t v_sz_boxed_1533_; size_t v_i_boxed_1534_; lean_object* v_res_1535_; 
v_sz_boxed_1533_ = lean_unbox_usize(v_sz_1530_);
lean_dec(v_sz_1530_);
v_i_boxed_1534_ = lean_unbox_usize(v_i_1531_);
lean_dec(v_i_1531_);
v_res_1535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_boxed_1533_, v_i_boxed_1534_, v_bs_1532_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t v_sz_1536_, size_t v_i_1537_, lean_object* v_bs_1538_){
_start:
{
uint8_t v___x_1539_; 
v___x_1539_ = lean_usize_dec_lt(v_i_1537_, v_sz_1536_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1540_, 0, v_bs_1538_);
return v___x_1540_;
}
else
{
lean_object* v_v_1541_; lean_object* v___x_1542_; lean_object* v_bs_x27_1543_; size_t v___x_1544_; size_t v___x_1545_; lean_object* v___x_1546_; 
v_v_1541_ = lean_array_uget(v_bs_1538_, v_i_1537_);
v___x_1542_ = lean_unsigned_to_nat(0u);
v_bs_x27_1543_ = lean_array_uset(v_bs_1538_, v_i_1537_, v___x_1542_);
v___x_1544_ = ((size_t)1ULL);
v___x_1545_ = lean_usize_add(v_i_1537_, v___x_1544_);
v___x_1546_ = lean_array_uset(v_bs_x27_1543_, v_i_1537_, v_v_1541_);
v_i_1537_ = v___x_1545_;
v_bs_1538_ = v___x_1546_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object* v_sz_1548_, lean_object* v_i_1549_, lean_object* v_bs_1550_){
_start:
{
size_t v_sz_boxed_1551_; size_t v_i_boxed_1552_; lean_object* v_res_1553_; 
v_sz_boxed_1551_ = lean_unbox_usize(v_sz_1548_);
lean_dec(v_sz_1548_);
v_i_boxed_1552_ = lean_unbox_usize(v_i_1549_);
lean_dec(v_i_1549_);
v_res_1553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_boxed_1551_, v_i_boxed_1552_, v_bs_1550_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object* v_00_u03b1_1554_, lean_object* v_x_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_1555_, v___y_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object* v_00_u03b1_1559_, lean_object* v_x_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(v_00_u03b1_1559_, v_x_1560_, v___y_1561_, v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec_ref(v_x_1560_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object* v_stx_1567_, lean_object* v_as_x27_1568_, lean_object* v_b_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
if (lean_obj_tag(v_as_x27_1568_) == 0)
{
lean_object* v___x_1577_; 
lean_dec(v_stx_1567_);
v___x_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1577_, 0, v_b_1569_);
return v___x_1577_;
}
else
{
lean_object* v_head_1578_; lean_object* v_tail_1579_; lean_object* v_value_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
lean_dec_ref(v_b_1569_);
v_head_1578_ = lean_ctor_get(v_as_x27_1568_, 0);
v_tail_1579_ = lean_ctor_get(v_as_x27_1568_, 1);
v_value_1580_ = lean_ctor_get(v_head_1578_, 1);
v___x_1581_ = lean_box(0);
v___x_1582_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_1583_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_value_1580_);
lean_inc(v___y_1575_);
lean_inc_ref(v___y_1574_);
lean_inc(v___y_1573_);
lean_inc_ref(v___y_1572_);
lean_inc(v___y_1571_);
lean_inc_ref(v___y_1570_);
lean_inc(v_stx_1567_);
v___x_1584_ = lean_apply_8(v_value_1580_, v_stx_1567_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, lean_box(0));
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1594_; 
lean_dec(v_stx_1567_);
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1587_ = v___x_1584_;
v_isShared_1588_ = v_isSharedCheck_1594_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1584_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1594_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1592_; 
v___x_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_a_1585_);
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
lean_ctor_set(v___x_1590_, 1, v___x_1581_);
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 0, v___x_1590_);
v___x_1592_ = v___x_1587_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v___x_1590_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1616_; 
v_a_1595_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1597_ = v___x_1584_;
v_isShared_1598_ = v_isSharedCheck_1616_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1584_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1616_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
uint8_t v___x_1599_; 
v___x_1599_ = l_Lean_Exception_isInterrupt(v_a_1595_);
if (v___x_1599_ == 0)
{
uint8_t v___x_1600_; 
lean_inc(v_a_1595_);
v___x_1600_ = l_Lean_Exception_isRuntime(v_a_1595_);
if (v___x_1600_ == 0)
{
if (lean_obj_tag(v_a_1595_) == 0)
{
lean_object* v___x_1602_; 
lean_dec(v_stx_1567_);
if (v_isShared_1598_ == 0)
{
v___x_1602_ = v___x_1597_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_a_1595_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
else
{
lean_object* v_id_1604_; uint8_t v___x_1605_; 
v_id_1604_ = lean_ctor_get(v_a_1595_, 0);
v___x_1605_ = l_Lean_instBEqInternalExceptionId_beq(v___x_1583_, v_id_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1607_; 
lean_dec(v_stx_1567_);
if (v_isShared_1598_ == 0)
{
v___x_1607_ = v___x_1597_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1595_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
else
{
lean_dec_ref_known(v_a_1595_, 2);
lean_del_object(v___x_1597_);
v_as_x27_1568_ = v_tail_1579_;
v_b_1569_ = v___x_1582_;
goto _start;
}
}
}
else
{
lean_object* v___x_1611_; 
lean_dec(v_stx_1567_);
if (v_isShared_1598_ == 0)
{
v___x_1611_ = v___x_1597_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1595_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
else
{
lean_object* v___x_1614_; 
lean_dec(v_stx_1567_);
if (v_isShared_1598_ == 0)
{
v___x_1614_ = v___x_1597_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1595_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object* v_stx_1617_, lean_object* v_as_x27_1618_, lean_object* v_b_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_1617_, v_as_x27_1618_, v_b_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v_as_x27_1618_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object* v_reassigned_1630_, lean_object* v_rhs_x3f_1631_, lean_object* v_otherwise_x3f_1632_, lean_object* v_body_x3f_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_){
_start:
{
uint8_t v___y_1642_; uint8_t v___y_1643_; uint8_t v___y_1644_; uint8_t v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v_body_1653_; lean_object* v___y_1671_; lean_object* v_otherwise_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1677_; lean_object* v___y_1678_; lean_object* v_rhs_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; 
if (lean_obj_tag(v_rhs_x3f_1631_) == 0)
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v_rhs_1684_ = v___x_1695_;
v___y_1685_ = v_a_1634_;
v___y_1686_ = v_a_1635_;
v___y_1687_ = v_a_1636_;
v___y_1688_ = v_a_1637_;
v___y_1689_ = v_a_1638_;
v___y_1690_ = v_a_1639_;
goto v___jp_1683_;
}
else
{
lean_object* v_val_1696_; lean_object* v___x_1697_; 
v_val_1696_ = lean_ctor_get(v_rhs_x3f_1631_, 0);
lean_inc(v_val_1696_);
lean_dec_ref_known(v_rhs_x3f_1631_, 1);
v___x_1697_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_val_1696_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 1);
v_rhs_1684_ = v_a_1698_;
v___y_1685_ = v_a_1634_;
v___y_1686_ = v_a_1635_;
v___y_1687_ = v_a_1636_;
v___y_1688_ = v_a_1637_;
v___y_1689_ = v_a_1638_;
v___y_1690_ = v_a_1639_;
goto v___jp_1683_;
}
else
{
lean_dec(v_body_x3f_1633_);
lean_dec(v_otherwise_x3f_1632_);
lean_dec_ref(v_reassigned_1630_);
return v___x_1697_;
}
}
v___jp_1641_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_1648_, 0, v___y_1646_);
lean_ctor_set(v___x_1648_, 1, v___y_1647_);
lean_ctor_set_uint8(v___x_1648_, sizeof(void*)*2, v___y_1645_);
lean_ctor_set_uint8(v___x_1648_, sizeof(void*)*2 + 1, v___y_1644_);
lean_ctor_set_uint8(v___x_1648_, sizeof(void*)*2 + 2, v___y_1643_);
lean_ctor_set_uint8(v___x_1648_, sizeof(void*)*2 + 3, v___y_1642_);
v___x_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
return v___x_1649_;
}
v___jp_1650_:
{
lean_object* v___x_1654_; lean_object* v_info_1655_; uint8_t v_breaks_1656_; uint8_t v_continues_1657_; uint8_t v_returnsEarly_1658_; lean_object* v_numRegularExits_1659_; uint8_t v_noFallthrough_1660_; lean_object* v_reassigns_1661_; size_t v_sz_1662_; size_t v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; 
v___x_1654_ = l_Lean_Elab_Do_ControlInfo_alternative(v_body_1653_, v___y_1652_);
v_info_1655_ = l_Lean_Elab_Do_ControlInfo_sequence(v___y_1651_, v___x_1654_);
v_breaks_1656_ = lean_ctor_get_uint8(v_info_1655_, sizeof(void*)*2);
v_continues_1657_ = lean_ctor_get_uint8(v_info_1655_, sizeof(void*)*2 + 1);
v_returnsEarly_1658_ = lean_ctor_get_uint8(v_info_1655_, sizeof(void*)*2 + 2);
v_numRegularExits_1659_ = lean_ctor_get(v_info_1655_, 0);
lean_inc(v_numRegularExits_1659_);
v_noFallthrough_1660_ = lean_ctor_get_uint8(v_info_1655_, sizeof(void*)*2 + 3);
v_reassigns_1661_ = lean_ctor_get(v_info_1655_, 1);
lean_inc(v_reassigns_1661_);
lean_dec_ref(v_info_1655_);
v_sz_1662_ = lean_array_size(v_reassigned_1630_);
v___x_1663_ = ((size_t)0ULL);
v___x_1664_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_1662_, v___x_1663_, v_reassigned_1630_);
v___x_1665_ = lean_unsigned_to_nat(0u);
v___x_1666_ = lean_array_get_size(v___x_1664_);
v___x_1667_ = lean_nat_dec_lt(v___x_1665_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_dec_ref(v___x_1664_);
v___y_1642_ = v_noFallthrough_1660_;
v___y_1643_ = v_returnsEarly_1658_;
v___y_1644_ = v_continues_1657_;
v___y_1645_ = v_breaks_1656_;
v___y_1646_ = v_numRegularExits_1659_;
v___y_1647_ = v_reassigns_1661_;
goto v___jp_1641_;
}
else
{
size_t v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = lean_usize_of_nat(v___x_1666_);
v___x_1669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v___x_1664_, v___x_1663_, v___x_1668_, v_reassigns_1661_);
lean_dec_ref(v___x_1664_);
v___y_1642_ = v_noFallthrough_1660_;
v___y_1643_ = v_returnsEarly_1658_;
v___y_1644_ = v_continues_1657_;
v___y_1645_ = v_breaks_1656_;
v___y_1646_ = v_numRegularExits_1659_;
v___y_1647_ = v___x_1669_;
goto v___jp_1641_;
}
}
v___jp_1670_:
{
if (lean_obj_tag(v_body_x3f_1633_) == 0)
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1651_ = v___y_1671_;
v___y_1652_ = v_otherwise_1672_;
v_body_1653_ = v___x_1679_;
goto v___jp_1650_;
}
else
{
lean_object* v_val_1680_; lean_object* v___x_1681_; 
v_val_1680_ = lean_ctor_get(v_body_x3f_1633_, 0);
lean_inc(v_val_1680_);
lean_dec_ref_known(v_body_x3f_1633_, 1);
v___x_1681_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1680_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1682_);
lean_dec_ref_known(v___x_1681_, 1);
v___y_1651_ = v___y_1671_;
v___y_1652_ = v_otherwise_1672_;
v_body_1653_ = v_a_1682_;
goto v___jp_1650_;
}
else
{
lean_dec_ref(v_otherwise_1672_);
lean_dec_ref(v___y_1671_);
lean_dec_ref(v_reassigned_1630_);
return v___x_1681_;
}
}
}
v___jp_1683_:
{
if (lean_obj_tag(v_otherwise_x3f_1632_) == 0)
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1671_ = v_rhs_1684_;
v_otherwise_1672_ = v___x_1691_;
v___y_1673_ = v___y_1685_;
v___y_1674_ = v___y_1686_;
v___y_1675_ = v___y_1687_;
v___y_1676_ = v___y_1688_;
v___y_1677_ = v___y_1689_;
v___y_1678_ = v___y_1690_;
goto v___jp_1670_;
}
else
{
lean_object* v_val_1692_; lean_object* v___x_1693_; 
v_val_1692_ = lean_ctor_get(v_otherwise_x3f_1632_, 0);
lean_inc(v_val_1692_);
lean_dec_ref_known(v_otherwise_x3f_1632_, 1);
v___x_1693_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1692_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref_known(v___x_1693_, 1);
v___y_1671_ = v_rhs_1684_;
v_otherwise_1672_ = v_a_1694_;
v___y_1673_ = v___y_1685_;
v___y_1674_ = v___y_1686_;
v___y_1675_ = v___y_1687_;
v___y_1676_ = v___y_1688_;
v___y_1677_ = v___y_1689_;
v___y_1678_ = v___y_1690_;
goto v___jp_1670_;
}
else
{
lean_dec_ref(v_rhs_1684_);
lean_dec(v_body_x3f_1633_);
lean_dec_ref(v_reassigned_1630_);
return v___x_1693_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3(void){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2));
v___x_1707_ = l_Lean_stringToMessageData(v___x_1706_);
return v___x_1707_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5(void){
_start:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4));
v___x_1710_ = l_Lean_stringToMessageData(v___x_1709_);
return v___x_1710_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7(void){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1712_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6));
v___x_1713_ = l_Lean_stringToMessageData(v___x_1712_);
return v___x_1713_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8));
v___x_1716_ = l_Lean_stringToMessageData(v___x_1715_);
return v___x_1716_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5(void){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4));
v___x_1791_ = l_Lean_stringToMessageData(v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t v_reassignment_1801_, lean_object* v_decl_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v___y_1811_; lean_object* v___y_1812_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v_reassigns_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v___y_1829_; lean_object* v___y_1830_; lean_object* v___y_1831_; lean_object* v___y_1832_; lean_object* v___x_1838_; uint8_t v___x_1839_; 
v___x_1838_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v_decl_1802_);
v___x_1839_ = l_Lean_Syntax_isOfKind(v_decl_1802_, v___x_1838_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; uint8_t v___x_1841_; 
v___x_1840_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v_decl_1802_);
v___x_1841_ = l_Lean_Syntax_isOfKind(v_decl_1802_, v___x_1840_);
if (v___x_1841_ == 0)
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1842_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1843_ = lean_box(0);
v___x_1844_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1843_, v___x_1841_);
v___x_1845_ = l_Std_Format_defWidth;
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = l_Std_Format_pretty(v___x_1844_, v___x_1845_, v___x_1846_, v___x_1846_);
v___x_1848_ = l_Lean_stringToMessageData(v___x_1847_);
v___x_1849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1842_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1849_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
return v___x_1850_;
}
else
{
lean_object* v___x_1851_; lean_object* v_pattern_1852_; lean_object* v___y_1854_; lean_object* v_otherwise_x3f_1855_; lean_object* v_body_x3f_x3f_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v_body_x3f_x3f_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___x_1886_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___x_1925_; uint8_t v___x_1926_; 
v___x_1851_ = lean_unsigned_to_nat(0u);
v_pattern_1852_ = l_Lean_Syntax_getArg(v_decl_1802_, v___x_1851_);
v___x_1886_ = lean_unsigned_to_nat(1u);
v___x_1925_ = l_Lean_Syntax_getArg(v_decl_1802_, v___x_1886_);
v___x_1926_ = l_Lean_Syntax_isNone(v___x_1925_);
if (v___x_1926_ == 0)
{
uint8_t v___x_1927_; 
lean_inc(v___x_1925_);
v___x_1927_ = l_Lean_Syntax_matchesNull(v___x_1925_, v___x_1886_);
if (v___x_1927_ == 0)
{
lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
lean_dec(v___x_1925_);
lean_dec(v_pattern_1852_);
v___x_1928_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1929_ = lean_box(0);
v___x_1930_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1929_, v___x_1927_);
v___x_1931_ = l_Std_Format_defWidth;
v___x_1932_ = l_Std_Format_pretty(v___x_1930_, v___x_1931_, v___x_1851_, v___x_1851_);
v___x_1933_ = l_Lean_stringToMessageData(v___x_1932_);
v___x_1934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1928_);
lean_ctor_set(v___x_1934_, 1, v___x_1933_);
v___x_1935_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1934_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
return v___x_1935_;
}
else
{
lean_object* v___x_1936_; lean_object* v___x_1937_; uint8_t v___x_1938_; 
v___x_1936_ = l_Lean_Syntax_getArg(v___x_1925_, v___x_1851_);
lean_dec(v___x_1925_);
v___x_1937_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1938_ = l_Lean_Syntax_isOfKind(v___x_1936_, v___x_1937_);
if (v___x_1938_ == 0)
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
lean_dec(v_pattern_1852_);
v___x_1939_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1940_ = lean_box(0);
v___x_1941_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1940_, v___x_1938_);
v___x_1942_ = l_Std_Format_defWidth;
v___x_1943_ = l_Std_Format_pretty(v___x_1941_, v___x_1942_, v___x_1851_, v___x_1851_);
v___x_1944_ = l_Lean_stringToMessageData(v___x_1943_);
v___x_1945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1939_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1945_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
return v___x_1946_;
}
else
{
v___y_1888_ = v_a_1803_;
v___y_1889_ = v_a_1804_;
v___y_1890_ = v_a_1805_;
v___y_1891_ = v_a_1806_;
v___y_1892_ = v_a_1807_;
v___y_1893_ = v_a_1808_;
goto v___jp_1887_;
}
}
}
else
{
lean_dec(v___x_1925_);
v___y_1888_ = v_a_1803_;
v___y_1889_ = v_a_1804_;
v___y_1890_ = v_a_1805_;
v___y_1891_ = v_a_1806_;
v___y_1892_ = v_a_1807_;
v___y_1893_ = v_a_1808_;
goto v___jp_1887_;
}
v___jp_1853_:
{
if (v_reassignment_1801_ == 0)
{
lean_object* v___x_1863_; 
lean_dec(v_pattern_1852_);
v___x_1863_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1823_ = v_body_x3f_x3f_1856_;
v___y_1824_ = v___y_1854_;
v___y_1825_ = v_otherwise_x3f_1855_;
v_reassigns_1826_ = v___x_1863_;
v___y_1827_ = v___y_1857_;
v___y_1828_ = v___y_1858_;
v___y_1829_ = v___y_1859_;
v___y_1830_ = v___y_1860_;
v___y_1831_ = v___y_1861_;
v___y_1832_ = v___y_1862_;
goto v___jp_1822_;
}
else
{
lean_object* v___x_1864_; 
v___x_1864_ = l_Lean_Elab_Do_getPatternVarsEx(v_pattern_1852_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref_known(v___x_1864_, 1);
v___y_1823_ = v_body_x3f_x3f_1856_;
v___y_1824_ = v___y_1854_;
v___y_1825_ = v_otherwise_x3f_1855_;
v_reassigns_1826_ = v_a_1865_;
v___y_1827_ = v___y_1857_;
v___y_1828_ = v___y_1858_;
v___y_1829_ = v___y_1859_;
v___y_1830_ = v___y_1860_;
v___y_1831_ = v___y_1861_;
v___y_1832_ = v___y_1862_;
goto v___jp_1822_;
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_dec(v_body_x3f_x3f_1856_);
lean_dec(v_otherwise_x3f_1855_);
lean_dec(v___y_1854_);
v_a_1866_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1864_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1864_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
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
v___jp_1874_:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1884_, 0, v___y_1875_);
v___x_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1885_, 0, v_body_x3f_x3f_1877_);
v___y_1854_ = v___y_1876_;
v_otherwise_x3f_1855_ = v___x_1884_;
v_body_x3f_x3f_1856_ = v___x_1885_;
v___y_1857_ = v___y_1878_;
v___y_1858_ = v___y_1879_;
v___y_1859_ = v___y_1880_;
v___y_1860_ = v___y_1881_;
v___y_1861_ = v___y_1882_;
v___y_1862_ = v___y_1883_;
goto v___jp_1853_;
}
v___jp_1887_:
{
lean_object* v___x_1894_; lean_object* v_rhs_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; uint8_t v___x_1898_; 
v___x_1894_ = lean_unsigned_to_nat(3u);
v_rhs_1895_ = l_Lean_Syntax_getArg(v_decl_1802_, v___x_1894_);
v___x_1896_ = lean_unsigned_to_nat(4u);
v___x_1897_ = l_Lean_Syntax_getArg(v_decl_1802_, v___x_1896_);
v___x_1898_ = l_Lean_Syntax_isNone(v___x_1897_);
if (v___x_1898_ == 0)
{
uint8_t v___x_1899_; 
lean_inc(v___x_1897_);
v___x_1899_ = l_Lean_Syntax_matchesNull(v___x_1897_, v___x_1894_);
if (v___x_1899_ == 0)
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
lean_dec(v___x_1897_);
lean_dec(v_rhs_1895_);
lean_dec(v_pattern_1852_);
v___x_1900_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1901_ = lean_box(0);
v___x_1902_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1901_, v___x_1899_);
v___x_1903_ = l_Std_Format_defWidth;
v___x_1904_ = l_Std_Format_pretty(v___x_1902_, v___x_1903_, v___x_1851_, v___x_1851_);
v___x_1905_ = l_Lean_stringToMessageData(v___x_1904_);
v___x_1906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1900_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
v___x_1907_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1906_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
return v___x_1907_;
}
else
{
lean_object* v___x_1908_; lean_object* v_otherwise_x3f_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; 
v___x_1908_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_1909_ = l_Lean_Syntax_getArg(v___x_1897_, v___x_1886_);
v___x_1910_ = l_Lean_Syntax_getArg(v___x_1897_, v___x_1908_);
lean_dec(v___x_1897_);
v___x_1911_ = l_Lean_Syntax_isNone(v___x_1910_);
if (v___x_1911_ == 0)
{
uint8_t v___x_1912_; 
lean_inc(v___x_1910_);
v___x_1912_ = l_Lean_Syntax_matchesNull(v___x_1910_, v___x_1886_);
if (v___x_1912_ == 0)
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
lean_dec(v___x_1910_);
lean_dec(v_otherwise_x3f_1909_);
lean_dec(v_rhs_1895_);
lean_dec(v_pattern_1852_);
v___x_1913_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1914_ = lean_box(0);
v___x_1915_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1914_, v___x_1912_);
v___x_1916_ = l_Std_Format_defWidth;
v___x_1917_ = l_Std_Format_pretty(v___x_1915_, v___x_1916_, v___x_1851_, v___x_1851_);
v___x_1918_ = l_Lean_stringToMessageData(v___x_1917_);
v___x_1919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1913_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
v___x_1920_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1919_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
return v___x_1920_;
}
else
{
lean_object* v_body_x3f_x3f_1921_; lean_object* v___x_1922_; 
lean_dec(v_decl_1802_);
v_body_x3f_x3f_1921_ = l_Lean_Syntax_getArg(v___x_1910_, v___x_1851_);
lean_dec(v___x_1910_);
v___x_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1922_, 0, v_body_x3f_x3f_1921_);
v___y_1875_ = v_otherwise_x3f_1909_;
v___y_1876_ = v_rhs_1895_;
v_body_x3f_x3f_1877_ = v___x_1922_;
v___y_1878_ = v___y_1888_;
v___y_1879_ = v___y_1889_;
v___y_1880_ = v___y_1890_;
v___y_1881_ = v___y_1891_;
v___y_1882_ = v___y_1892_;
v___y_1883_ = v___y_1893_;
goto v___jp_1874_;
}
}
else
{
lean_object* v___x_1923_; 
lean_dec(v___x_1910_);
lean_dec(v_decl_1802_);
v___x_1923_ = lean_box(0);
v___y_1875_ = v_otherwise_x3f_1909_;
v___y_1876_ = v_rhs_1895_;
v_body_x3f_x3f_1877_ = v___x_1923_;
v___y_1878_ = v___y_1888_;
v___y_1879_ = v___y_1889_;
v___y_1880_ = v___y_1890_;
v___y_1881_ = v___y_1891_;
v___y_1882_ = v___y_1892_;
v___y_1883_ = v___y_1893_;
goto v___jp_1874_;
}
}
}
else
{
lean_object* v___x_1924_; 
lean_dec(v___x_1897_);
lean_dec(v_decl_1802_);
v___x_1924_ = lean_box(0);
v___y_1854_ = v_rhs_1895_;
v_otherwise_x3f_1855_ = v___x_1924_;
v_body_x3f_x3f_1856_ = v___x_1924_;
v___y_1857_ = v___y_1888_;
v___y_1858_ = v___y_1889_;
v___y_1859_ = v___y_1890_;
v___y_1860_ = v___y_1891_;
v___y_1861_ = v___y_1892_;
v___y_1862_ = v___y_1893_;
goto v___jp_1853_;
}
}
}
}
else
{
lean_object* v___x_1947_; lean_object* v_x_1948_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1947_ = lean_unsigned_to_nat(0u);
v_x_1948_ = l_Lean_Syntax_getArg(v_decl_1802_, v___x_1947_);
v___x_1962_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10));
lean_inc(v_x_1948_);
v___x_1963_ = l_Lean_Syntax_isOfKind(v_x_1948_, v___x_1962_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
lean_dec(v_x_1948_);
v___x_1964_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1965_ = lean_box(0);
v___x_1966_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1965_, v___x_1963_);
v___x_1967_ = l_Std_Format_defWidth;
v___x_1968_ = l_Std_Format_pretty(v___x_1966_, v___x_1967_, v___x_1947_, v___x_1947_);
v___x_1969_ = l_Lean_stringToMessageData(v___x_1968_);
v___x_1970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1964_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
v___x_1971_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1970_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
return v___x_1971_;
}
else
{
lean_object* v___x_1972_; lean_object* v___x_1973_; uint8_t v___x_1974_; 
v___x_1972_ = lean_unsigned_to_nat(1u);
v___x_1973_ = l_Lean_Syntax_getArg(v_decl_1802_, v___x_1972_);
v___x_1974_ = l_Lean_Syntax_isNone(v___x_1973_);
if (v___x_1974_ == 0)
{
uint8_t v___x_1975_; 
lean_inc(v___x_1973_);
v___x_1975_ = l_Lean_Syntax_matchesNull(v___x_1973_, v___x_1972_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
lean_dec(v___x_1973_);
lean_dec(v_x_1948_);
v___x_1976_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1977_ = lean_box(0);
v___x_1978_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1977_, v___x_1975_);
v___x_1979_ = l_Std_Format_defWidth;
v___x_1980_ = l_Std_Format_pretty(v___x_1978_, v___x_1979_, v___x_1947_, v___x_1947_);
v___x_1981_ = l_Lean_stringToMessageData(v___x_1980_);
v___x_1982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1976_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1982_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
return v___x_1983_;
}
else
{
lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; 
v___x_1984_ = l_Lean_Syntax_getArg(v___x_1973_, v___x_1947_);
lean_dec(v___x_1973_);
v___x_1985_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1986_ = l_Lean_Syntax_isOfKind(v___x_1984_, v___x_1985_);
if (v___x_1986_ == 0)
{
lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
lean_dec(v_x_1948_);
v___x_1987_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1988_ = lean_box(0);
v___x_1989_ = l_Lean_Syntax_formatStx(v_decl_1802_, v___x_1988_, v___x_1986_);
v___x_1990_ = l_Std_Format_defWidth;
v___x_1991_ = l_Std_Format_pretty(v___x_1989_, v___x_1990_, v___x_1947_, v___x_1947_);
v___x_1992_ = l_Lean_stringToMessageData(v___x_1991_);
v___x_1993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1987_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
v___x_1994_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1993_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_);
return v___x_1994_;
}
else
{
v___y_1950_ = v_a_1803_;
v___y_1951_ = v_a_1804_;
v___y_1952_ = v_a_1805_;
v___y_1953_ = v_a_1806_;
v___y_1954_ = v_a_1807_;
v___y_1955_ = v_a_1808_;
goto v___jp_1949_;
}
}
}
else
{
lean_dec(v___x_1973_);
v___y_1950_ = v_a_1803_;
v___y_1951_ = v_a_1804_;
v___y_1952_ = v_a_1805_;
v___y_1953_ = v_a_1806_;
v___y_1954_ = v_a_1807_;
v___y_1955_ = v_a_1808_;
goto v___jp_1949_;
}
}
v___jp_1949_:
{
lean_object* v___x_1956_; lean_object* v_rhs_1957_; 
v___x_1956_ = lean_unsigned_to_nat(3u);
v_rhs_1957_ = l_Lean_Syntax_getArg(v_decl_1802_, v___x_1956_);
lean_dec(v_decl_1802_);
if (v_reassignment_1801_ == 0)
{
lean_object* v___x_1958_; 
lean_dec(v_x_1948_);
v___x_1958_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1811_ = v___y_1952_;
v___y_1812_ = v_rhs_1957_;
v___y_1813_ = v___y_1950_;
v___y_1814_ = v___y_1951_;
v___y_1815_ = v___y_1954_;
v___y_1816_ = v___y_1953_;
v___y_1817_ = v___y_1955_;
v___y_1818_ = v___x_1958_;
goto v___jp_1810_;
}
else
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1959_ = lean_unsigned_to_nat(1u);
v___x_1960_ = lean_mk_empty_array_with_capacity(v___x_1959_);
v___x_1961_ = lean_array_push(v___x_1960_, v_x_1948_);
v___y_1811_ = v___y_1952_;
v___y_1812_ = v_rhs_1957_;
v___y_1813_ = v___y_1950_;
v___y_1814_ = v___y_1951_;
v___y_1815_ = v___y_1954_;
v___y_1816_ = v___y_1953_;
v___y_1817_ = v___y_1955_;
v___y_1818_ = v___x_1961_;
goto v___jp_1810_;
}
}
}
v___jp_1810_:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1819_, 0, v___y_1812_);
v___x_1820_ = lean_box(0);
v___x_1821_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___y_1818_, v___x_1819_, v___x_1820_, v___x_1820_, v___y_1813_, v___y_1814_, v___y_1811_, v___y_1816_, v___y_1815_, v___y_1817_);
return v___x_1821_;
}
v___jp_1822_:
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___y_1824_);
if (lean_obj_tag(v___y_1823_) == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lean_box(0);
v___x_1835_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1826_, v___x_1833_, v___y_1825_, v___x_1834_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
return v___x_1835_;
}
else
{
lean_object* v_val_1836_; lean_object* v___x_1837_; 
v_val_1836_ = lean_ctor_get(v___y_1823_, 0);
lean_inc(v_val_1836_);
lean_dec_ref_known(v___y_1823_, 1);
v___x_1837_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1826_, v___x_1833_, v___y_1825_, v_val_1836_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
return v___x_1837_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object* v_as_2120_, size_t v_sz_2121_, size_t v_i_2122_, lean_object* v_b_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
uint8_t v___x_2131_; 
v___x_2131_ = lean_usize_dec_lt(v_i_2122_, v_sz_2121_);
if (v___x_2131_ == 0)
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2132_, 0, v_b_2123_);
return v___x_2132_;
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2134_; 
v_a_2133_ = lean_array_uget_borrowed(v_as_2120_, v_i_2122_);
lean_inc(v_a_2133_);
v___x_2134_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_a_2133_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2136_; size_t v___x_2137_; size_t v___x_2138_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v___x_2136_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2135_, v_b_2123_);
v___x_2137_ = ((size_t)1ULL);
v___x_2138_ = lean_usize_add(v_i_2122_, v___x_2137_);
v_i_2122_ = v___x_2138_;
v_b_2123_ = v___x_2136_;
goto _start;
}
else
{
lean_dec_ref(v_b_2123_);
return v___x_2134_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5(void){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4));
v___x_2154_ = l_Lean_stringToMessageData(v___x_2153_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t v___x_2169_, lean_object* v_as_2170_, size_t v_sz_2171_, size_t v_i_2172_, lean_object* v_b_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_a_2182_; uint8_t v___x_2186_; 
v___x_2186_ = lean_usize_dec_lt(v_i_2172_, v_sz_2171_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; 
v___x_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2187_, 0, v_b_2173_);
return v___x_2187_;
}
else
{
lean_object* v___x_2188_; lean_object* v_a_2189_; uint8_t v___x_2190_; 
v___x_2188_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2189_ = lean_array_uget_borrowed(v_as_2170_, v_i_2172_);
lean_inc(v_a_2189_);
v___x_2190_ = l_Lean_Syntax_isOfKind(v_a_2189_, v___x_2188_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; 
v___x_2191_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_dec_ref_known(v___x_2191_, 1);
v_a_2182_ = v_b_2173_;
goto v___jp_2181_;
}
else
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2199_; 
lean_dec_ref(v_b_2173_);
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2197_; 
if (v_isShared_2195_ == 0)
{
v___x_2197_ = v___x_2194_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_a_2192_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
else
{
lean_object* v___x_2200_; lean_object* v___y_2202_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; uint8_t v___x_2225_; 
v___x_2200_ = lean_unsigned_to_nat(3u);
v___x_2219_ = lean_unsigned_to_nat(1u);
v___x_2220_ = l_Lean_Syntax_getArg(v_a_2189_, v___x_2219_);
v___x_2221_ = l_Lean_Syntax_getArgs(v___x_2220_);
lean_dec(v___x_2220_);
v___x_2222_ = lean_unsigned_to_nat(0u);
v___x_2223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2224_ = lean_array_get_size(v___x_2221_);
v___x_2225_ = lean_nat_dec_lt(v___x_2222_, v___x_2224_);
if (v___x_2225_ == 0)
{
lean_dec_ref(v___x_2221_);
v___y_2202_ = v___x_2223_;
goto v___jp_2201_;
}
else
{
lean_object* v___x_2226_; lean_object* v___x_2227_; size_t v___x_2228_; size_t v___x_2229_; lean_object* v___x_2230_; lean_object* v_snd_2231_; 
v___x_2226_ = lean_box(v___x_2225_);
v___x_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
lean_ctor_set(v___x_2227_, 1, v___x_2223_);
v___x_2228_ = ((size_t)0ULL);
v___x_2229_ = lean_usize_of_nat(v___x_2224_);
v___x_2230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2190_, v___x_2169_, v___x_2221_, v___x_2228_, v___x_2229_, v___x_2227_);
lean_dec_ref(v___x_2221_);
v_snd_2231_ = lean_ctor_get(v___x_2230_, 1);
lean_inc(v_snd_2231_);
lean_dec_ref(v___x_2230_);
v___y_2202_ = v_snd_2231_;
goto v___jp_2201_;
}
v___jp_2201_:
{
size_t v_sz_2203_; size_t v___x_2204_; lean_object* v___x_2205_; 
v_sz_2203_ = lean_array_size(v___y_2202_);
v___x_2204_ = ((size_t)0ULL);
v___x_2205_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_2203_, v___x_2204_, v___y_2202_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v___x_2206_; 
v___x_2206_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2206_) == 0)
{
lean_dec_ref_known(v___x_2206_, 1);
v_a_2182_ = v_b_2173_;
goto v___jp_2181_;
}
else
{
lean_object* v_a_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2214_; 
lean_dec_ref(v_b_2173_);
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2209_ = v___x_2206_;
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_a_2207_);
lean_dec(v___x_2206_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2212_; 
if (v_isShared_2210_ == 0)
{
v___x_2212_ = v___x_2209_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_a_2207_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
}
else
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec_ref_known(v___x_2205_, 1);
v___x_2215_ = l_Lean_Syntax_getArg(v_a_2189_, v___x_2200_);
v___x_2216_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2215_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2218_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref_known(v___x_2216_, 1);
v___x_2218_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2173_, v_a_2217_);
v_a_2182_ = v___x_2218_;
goto v___jp_2181_;
}
else
{
lean_dec_ref(v_b_2173_);
return v___x_2216_;
}
}
}
}
}
v___jp_2181_:
{
size_t v___x_2183_; size_t v___x_2184_; 
v___x_2183_ = ((size_t)1ULL);
v___x_2184_ = lean_usize_add(v_i_2172_, v___x_2183_);
v_i_2172_ = v___x_2184_;
v_b_2173_ = v_a_2182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object* v_as_2232_, size_t v_sz_2233_, size_t v_i_2234_, lean_object* v_b_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v_a_2244_; uint8_t v___x_2248_; 
v___x_2248_ = lean_usize_dec_lt(v_i_2234_, v_sz_2233_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; 
v___x_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2249_, 0, v_b_2235_);
return v___x_2249_;
}
else
{
lean_object* v___x_2250_; lean_object* v_a_2251_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v___y_2255_; lean_object* v___y_2256_; lean_object* v___y_2257_; lean_object* v___y_2258_; lean_object* v___x_2264_; uint8_t v___x_2265_; 
v___x_2250_ = lean_unsigned_to_nat(0u);
v_a_2251_ = lean_array_uget_borrowed(v_as_2232_, v_i_2234_);
v___x_2264_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1));
lean_inc(v_a_2251_);
v___x_2265_ = l_Lean_Syntax_isOfKind(v_a_2251_, v___x_2264_);
if (v___x_2265_ == 0)
{
lean_object* v___x_2266_; uint8_t v___x_2267_; 
v___x_2266_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3));
lean_inc(v_a_2251_);
v___x_2267_ = l_Lean_Syntax_isOfKind(v_a_2251_, v___x_2266_);
if (v___x_2267_ == 0)
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2268_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2269_ = lean_box(0);
lean_inc(v_a_2251_);
v___x_2270_ = l_Lean_Syntax_formatStx(v_a_2251_, v___x_2269_, v___x_2267_);
v___x_2271_ = l_Std_Format_defWidth;
v___x_2272_ = l_Std_Format_pretty(v___x_2270_, v___x_2271_, v___x_2250_, v___x_2250_);
v___x_2273_ = l_Lean_stringToMessageData(v___x_2272_);
v___x_2274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2268_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
v___x_2275_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2274_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_dec_ref_known(v___x_2275_, 1);
v_a_2244_ = v_b_2235_;
goto v___jp_2243_;
}
else
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
lean_dec_ref(v_b_2235_);
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2275_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v___x_2275_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2275_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_a_2276_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
}
else
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; 
v___x_2284_ = lean_unsigned_to_nat(1u);
v___x_2285_ = l_Lean_Syntax_getArg(v_a_2251_, v___x_2284_);
v___x_2286_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_2285_);
v___x_2287_ = l_Lean_Syntax_isOfKind(v___x_2285_, v___x_2286_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
lean_dec(v___x_2285_);
v___x_2288_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2289_ = lean_box(0);
lean_inc(v_a_2251_);
v___x_2290_ = l_Lean_Syntax_formatStx(v_a_2251_, v___x_2289_, v___x_2287_);
v___x_2291_ = l_Std_Format_defWidth;
v___x_2292_ = l_Std_Format_pretty(v___x_2290_, v___x_2291_, v___x_2250_, v___x_2250_);
v___x_2293_ = l_Lean_stringToMessageData(v___x_2292_);
v___x_2294_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2288_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2294_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_dec_ref_known(v___x_2295_, 1);
v_a_2244_ = v_b_2235_;
goto v___jp_2243_;
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
lean_dec_ref(v_b_2235_);
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2295_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2295_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
}
else
{
lean_object* v___x_2304_; lean_object* v___x_2305_; size_t v_sz_2306_; size_t v___x_2307_; lean_object* v___x_2308_; 
v___x_2304_ = l_Lean_Syntax_getArg(v___x_2285_, v___x_2250_);
lean_dec(v___x_2285_);
v___x_2305_ = l_Lean_Syntax_getArgs(v___x_2304_);
lean_dec(v___x_2304_);
v_sz_2306_ = lean_array_size(v___x_2305_);
v___x_2307_ = ((size_t)0ULL);
v___x_2308_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2265_, v___x_2305_, v_sz_2306_, v___x_2307_, v_b_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
lean_dec_ref(v___x_2305_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v_a_2244_ = v_a_2309_;
goto v___jp_2243_;
}
else
{
return v___x_2308_;
}
}
}
}
else
{
lean_object* v___x_2310_; lean_object* v___x_2311_; uint8_t v___x_2312_; 
v___x_2310_ = lean_unsigned_to_nat(2u);
v___x_2311_ = l_Lean_Syntax_getArg(v_a_2251_, v___x_2310_);
v___x_2312_ = l_Lean_Syntax_isNone(v___x_2311_);
if (v___x_2312_ == 0)
{
uint8_t v___x_2313_; 
v___x_2313_ = l_Lean_Syntax_matchesNull(v___x_2311_, v___x_2310_);
if (v___x_2313_ == 0)
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2314_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2315_ = lean_box(0);
lean_inc(v_a_2251_);
v___x_2316_ = l_Lean_Syntax_formatStx(v_a_2251_, v___x_2315_, v___x_2313_);
v___x_2317_ = l_Std_Format_defWidth;
v___x_2318_ = l_Std_Format_pretty(v___x_2316_, v___x_2317_, v___x_2250_, v___x_2250_);
v___x_2319_ = l_Lean_stringToMessageData(v___x_2318_);
v___x_2320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2314_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2320_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_dec_ref_known(v___x_2321_, 1);
v_a_2244_ = v_b_2235_;
goto v___jp_2243_;
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec_ref(v_b_2235_);
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2321_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2321_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
else
{
v___y_2253_ = v___y_2236_;
v___y_2254_ = v___y_2237_;
v___y_2255_ = v___y_2238_;
v___y_2256_ = v___y_2239_;
v___y_2257_ = v___y_2240_;
v___y_2258_ = v___y_2241_;
goto v___jp_2252_;
}
}
else
{
lean_dec(v___x_2311_);
v___y_2253_ = v___y_2236_;
v___y_2254_ = v___y_2237_;
v___y_2255_ = v___y_2238_;
v___y_2256_ = v___y_2239_;
v___y_2257_ = v___y_2240_;
v___y_2258_ = v___y_2241_;
goto v___jp_2252_;
}
}
v___jp_2252_:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2259_ = lean_unsigned_to_nat(4u);
v___x_2260_ = l_Lean_Syntax_getArg(v_a_2251_, v___x_2259_);
v___x_2261_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2260_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v___x_2263_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2262_);
lean_dec_ref_known(v___x_2261_, 1);
v___x_2263_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2262_, v_b_2235_);
v_a_2244_ = v___x_2263_;
goto v___jp_2243_;
}
else
{
lean_dec_ref(v_b_2235_);
return v___x_2261_;
}
}
}
v___jp_2243_:
{
size_t v___x_2245_; size_t v___x_2246_; 
v___x_2245_ = ((size_t)1ULL);
v___x_2246_ = lean_usize_add(v_i_2234_, v___x_2245_);
v_i_2234_ = v___x_2246_;
v_b_2235_ = v_a_2244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object* v_stx_x3f_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_){
_start:
{
if (lean_obj_tag(v_stx_x3f_2330_) == 0)
{
lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2338_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_2339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2338_);
return v___x_2339_;
}
else
{
lean_object* v_val_2340_; lean_object* v___x_2341_; 
v_val_2340_ = lean_ctor_get(v_stx_x3f_2330_, 0);
lean_inc(v_val_2340_);
lean_dec_ref_known(v_stx_x3f_2330_, 1);
v___x_2341_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2340_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_);
return v___x_2341_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t v___x_2360_, lean_object* v_as_2361_, size_t v_sz_2362_, size_t v_i_2363_, lean_object* v_b_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_a_2373_; uint8_t v___x_2377_; 
v___x_2377_ = lean_usize_dec_lt(v_i_2363_, v_sz_2362_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; 
v___x_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2378_, 0, v_b_2364_);
return v___x_2378_;
}
else
{
lean_object* v___x_2379_; lean_object* v_a_2380_; uint8_t v___x_2381_; 
v___x_2379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2380_ = lean_array_uget_borrowed(v_as_2361_, v_i_2363_);
lean_inc(v_a_2380_);
v___x_2381_ = l_Lean_Syntax_isOfKind(v_a_2380_, v___x_2379_);
if (v___x_2381_ == 0)
{
lean_object* v___x_2382_; 
v___x_2382_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_dec_ref_known(v___x_2382_, 1);
v_a_2373_ = v_b_2364_;
goto v___jp_2372_;
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
lean_dec_ref(v_b_2364_);
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2382_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2382_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
else
{
lean_object* v___x_2391_; lean_object* v___y_2393_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; uint8_t v___x_2416_; 
v___x_2391_ = lean_unsigned_to_nat(3u);
v___x_2410_ = lean_unsigned_to_nat(1u);
v___x_2411_ = l_Lean_Syntax_getArg(v_a_2380_, v___x_2410_);
v___x_2412_ = l_Lean_Syntax_getArgs(v___x_2411_);
lean_dec(v___x_2411_);
v___x_2413_ = lean_unsigned_to_nat(0u);
v___x_2414_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2415_ = lean_array_get_size(v___x_2412_);
v___x_2416_ = lean_nat_dec_lt(v___x_2413_, v___x_2415_);
if (v___x_2416_ == 0)
{
lean_dec_ref(v___x_2412_);
v___y_2393_ = v___x_2414_;
goto v___jp_2392_;
}
else
{
lean_object* v___x_2417_; lean_object* v___x_2418_; size_t v___x_2419_; size_t v___x_2420_; lean_object* v___x_2421_; lean_object* v_snd_2422_; 
v___x_2417_ = lean_box(v___x_2416_);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
lean_ctor_set(v___x_2418_, 1, v___x_2414_);
v___x_2419_ = ((size_t)0ULL);
v___x_2420_ = lean_usize_of_nat(v___x_2415_);
v___x_2421_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2381_, v___x_2360_, v___x_2412_, v___x_2419_, v___x_2420_, v___x_2418_);
lean_dec_ref(v___x_2412_);
v_snd_2422_ = lean_ctor_get(v___x_2421_, 1);
lean_inc(v_snd_2422_);
lean_dec_ref(v___x_2421_);
v___y_2393_ = v_snd_2422_;
goto v___jp_2392_;
}
v___jp_2392_:
{
size_t v_sz_2394_; size_t v___x_2395_; lean_object* v___x_2396_; 
v_sz_2394_ = lean_array_size(v___y_2393_);
v___x_2395_ = ((size_t)0ULL);
v___x_2396_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_2394_, v___x_2395_, v___y_2393_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v___x_2397_; 
v___x_2397_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_dec_ref_known(v___x_2397_, 1);
v_a_2373_ = v_b_2364_;
goto v___jp_2372_;
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2405_; 
lean_dec_ref(v_b_2364_);
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
else
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
lean_dec_ref_known(v___x_2396_, 1);
v___x_2406_ = l_Lean_Syntax_getArg(v_a_2380_, v___x_2391_);
v___x_2407_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2406_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2409_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v___x_2409_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2364_, v_a_2408_);
v_a_2373_ = v___x_2409_;
goto v___jp_2372_;
}
else
{
lean_dec_ref(v_b_2364_);
return v___x_2407_;
}
}
}
}
}
v___jp_2372_:
{
size_t v___x_2374_; size_t v___x_2375_; 
v___x_2374_ = ((size_t)1ULL);
v___x_2375_ = lean_usize_add(v_i_2363_, v___x_2374_);
v_i_2363_ = v___x_2375_;
v_b_2364_ = v_a_2373_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95(void){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; uint8_t v___x_2473_; uint8_t v___x_2474_; lean_object* v___x_2475_; 
v___x_2471_ = l_Lean_NameSet_empty;
v___x_2472_ = lean_unsigned_to_nat(0u);
v___x_2473_ = 0;
v___x_2474_ = 1;
v___x_2475_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2475_, 0, v___x_2472_);
lean_ctor_set(v___x_2475_, 1, v___x_2471_);
lean_ctor_set_uint8(v___x_2475_, sizeof(void*)*2, v___x_2474_);
lean_ctor_set_uint8(v___x_2475_, sizeof(void*)*2 + 1, v___x_2473_);
lean_ctor_set_uint8(v___x_2475_, sizeof(void*)*2 + 2, v___x_2473_);
lean_ctor_set_uint8(v___x_2475_, sizeof(void*)*2 + 3, v___x_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object* v_stx_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_){
_start:
{
lean_object* v___y_2485_; lean_object* v_bodyInfo_2486_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2506_; lean_object* v_bodyInfo_2507_; lean_object* v___x_2510_; lean_object* v_env_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2510_ = lean_st_ref_get(v_a_2482_);
v_env_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc_ref(v_env_2511_);
lean_dec(v___x_2510_);
lean_inc(v_stx_2476_);
v___x_2512_ = lean_alloc_closure((void*)(l_Lean_Elab_expandMacroImpl_x3f___boxed), 4, 2);
lean_closure_set(v___x_2512_, 0, v_env_2511_);
lean_closure_set(v___x_2512_, 1, v_stx_2476_);
v___x_2513_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2512_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_5219_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_5219_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_5219_ == 0)
{
v___x_2516_ = v___x_2513_;
v_isShared_2517_ = v_isSharedCheck_5219_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2513_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_5219_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
if (lean_obj_tag(v_a_2514_) == 1)
{
lean_object* v_val_2518_; lean_object* v_snd_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
lean_del_object(v___x_2516_);
lean_dec(v_stx_2476_);
v_val_2518_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_val_2518_);
lean_dec_ref_known(v_a_2514_, 1);
v_snd_2519_ = lean_ctor_get(v_val_2518_, 1);
lean_inc(v_snd_2519_);
lean_dec(v_val_2518_);
v___x_2520_ = lean_alloc_closure((void*)(l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed), 4, 2);
lean_closure_set(v___x_2520_, 0, lean_box(0));
lean_closure_set(v___x_2520_, 1, v_snd_2519_);
v___x_2521_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2520_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2521_, 1);
v_stx_2476_ = v_a_2522_;
goto _start;
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
v_a_2524_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2521_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2521_);
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
else
{
lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2538_; lean_object* v___y_2604_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___x_2714_; uint8_t v___x_2715_; uint8_t v___x_2716_; 
lean_dec(v_a_2514_);
v___x_2714_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13));
lean_inc(v_stx_2476_);
v___x_2715_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2714_);
v___x_2716_ = 1;
if (v___x_2715_ == 0)
{
lean_object* v___x_2717_; uint8_t v___x_2718_; 
v___x_2717_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15));
lean_inc(v_stx_2476_);
v___x_2718_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2717_);
if (v___x_2718_ == 0)
{
lean_object* v___x_2719_; uint8_t v___x_2720_; 
v___x_2719_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17));
lean_inc(v_stx_2476_);
v___x_2720_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2719_);
if (v___x_2720_ == 0)
{
lean_object* v___x_2721_; uint8_t v___x_2722_; 
v___x_2721_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19));
lean_inc(v_stx_2476_);
v___x_2722_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2721_);
if (v___x_2722_ == 0)
{
lean_object* v___x_2723_; uint8_t v___x_2724_; 
v___x_2723_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
lean_inc(v_stx_2476_);
v___x_2724_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2723_);
if (v___x_2724_ == 0)
{
lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2725_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23));
lean_inc(v_stx_2476_);
v___x_2726_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; uint8_t v___x_2728_; 
lean_del_object(v___x_2516_);
v___x_2727_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25));
lean_inc(v_stx_2476_);
v___x_2728_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2727_);
if (v___x_2728_ == 0)
{
lean_object* v___x_2729_; uint8_t v___x_2730_; 
v___x_2729_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27));
lean_inc(v_stx_2476_);
v___x_2730_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2729_);
if (v___x_2730_ == 0)
{
lean_object* v___x_2731_; uint8_t v___x_2732_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; 
v___x_2731_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29));
lean_inc(v_stx_2476_);
v___x_2732_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2731_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2793_; uint8_t v___x_2794_; 
v___x_2793_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31));
lean_inc(v_stx_2476_);
v___x_2794_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2793_);
if (v___x_2794_ == 0)
{
lean_object* v___x_2795_; uint8_t v___x_2796_; 
v___x_2795_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33));
lean_inc(v_stx_2476_);
v___x_2796_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2795_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2797_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35));
lean_inc(v_stx_2476_);
v___x_2798_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2797_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; uint8_t v___x_2800_; 
v___x_2799_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37));
lean_inc(v_stx_2476_);
v___x_2800_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2799_);
if (v___x_2800_ == 0)
{
lean_object* v___x_2801_; uint8_t v___x_2802_; 
v___x_2801_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39));
lean_inc(v_stx_2476_);
v___x_2802_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2801_);
if (v___x_2802_ == 0)
{
lean_object* v___x_2803_; uint8_t v___x_2804_; 
v___x_2803_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41));
lean_inc(v_stx_2476_);
v___x_2804_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2803_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2805_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43));
lean_inc(v_stx_2476_);
v___x_2806_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; uint8_t v___x_2808_; lean_object* v___y_2810_; uint8_t v___y_2811_; lean_object* v___y_2812_; uint8_t v___y_2813_; 
v___x_2807_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45));
lean_inc(v_stx_2476_);
v___x_2808_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2816_; uint8_t v___x_2817_; 
v___x_2816_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47));
lean_inc(v_stx_2476_);
v___x_2817_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2816_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; uint8_t v___x_2819_; 
v___x_2818_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49));
lean_inc(v_stx_2476_);
v___x_2819_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2818_);
if (v___x_2819_ == 0)
{
lean_object* v___x_2820_; uint8_t v___x_2821_; 
v___x_2820_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52));
lean_inc(v_stx_2476_);
v___x_2821_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2820_);
if (v___x_2821_ == 0)
{
lean_object* v___x_2822_; uint8_t v___x_2823_; 
v___x_2822_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54));
lean_inc(v_stx_2476_);
v___x_2823_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2822_);
if (v___x_2823_ == 0)
{
lean_object* v___x_2824_; uint8_t v___x_2825_; 
v___x_2824_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56));
lean_inc(v_stx_2476_);
v___x_2825_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2824_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2826_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58));
lean_inc(v_stx_2476_);
v___x_2827_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2826_);
if (v___x_2827_ == 0)
{
lean_object* v___x_2828_; uint8_t v___x_2829_; 
v___x_2828_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60));
lean_inc(v_stx_2476_);
v___x_2829_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2828_);
if (v___x_2829_ == 0)
{
lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2830_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62));
lean_inc(v_stx_2476_);
v___x_2831_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2830_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; uint8_t v___x_2833_; 
v___x_2832_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64));
lean_inc(v_stx_2476_);
v___x_2833_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2832_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; uint8_t v___x_2835_; 
v___x_2834_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66));
lean_inc(v_stx_2476_);
v___x_2835_ = l_Lean_Syntax_isOfKind(v_stx_2476_, v___x_2834_);
if (v___x_2835_ == 0)
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v_env_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
lean_inc_n(v_stx_2476_, 2);
v___x_2836_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_2837_ = lean_st_ref_get(v_a_2482_);
v_env_2838_ = lean_ctor_get(v___x_2837_, 0);
lean_inc_ref(v_env_2838_);
lean_dec(v___x_2837_);
v___x_2839_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2840_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2839_, v_env_2838_, v___x_2836_);
v___x_2841_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2842_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_2840_, v___x_2841_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_2840_);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2873_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2845_ = v___x_2842_;
v_isShared_2846_ = v_isSharedCheck_2873_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2842_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2873_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v_fst_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2871_; 
v_fst_2847_ = lean_ctor_get(v_a_2843_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_a_2843_);
if (v_isSharedCheck_2871_ == 0)
{
lean_object* v_unused_2872_; 
v_unused_2872_ = lean_ctor_get(v_a_2843_, 1);
lean_dec(v_unused_2872_);
v___x_2849_ = v_a_2843_;
v_isShared_2850_ = v_isSharedCheck_2871_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_fst_2847_);
lean_dec(v_a_2843_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2871_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
if (lean_obj_tag(v_fst_2847_) == 0)
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
lean_del_object(v___x_2845_);
v___x_2851_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2852_ = l_Lean_MessageData_ofName(v___x_2836_);
lean_inc_ref(v___x_2852_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set_tag(v___x_2849_, 7);
lean_ctor_set(v___x_2849_, 1, v___x_2852_);
lean_ctor_set(v___x_2849_, 0, v___x_2851_);
v___x_2854_ = v___x_2849_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2866_, 1, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2855_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2854_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_2858_ = l_Lean_indentD(v___x_2857_);
v___x_2859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2856_);
lean_ctor_set(v___x_2859_, 1, v___x_2858_);
v___x_2860_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2859_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
lean_ctor_set(v___x_2862_, 1, v___x_2852_);
v___x_2863_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2862_);
lean_ctor_set(v___x_2864_, 1, v___x_2863_);
v___x_2865_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2864_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_2865_;
}
}
else
{
lean_object* v_val_2867_; lean_object* v___x_2869_; 
lean_del_object(v___x_2849_);
lean_dec(v___x_2836_);
lean_dec(v_stx_2476_);
v_val_2867_ = lean_ctor_get(v_fst_2847_, 0);
lean_inc(v_val_2867_);
lean_dec_ref_known(v_fst_2847_, 1);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v_val_2867_);
v___x_2869_ = v___x_2845_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_val_2867_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
lean_dec(v___x_2836_);
lean_dec(v_stx_2476_);
v_a_2874_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2842_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2842_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___y_2886_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2882_ = lean_unsigned_to_nat(1u);
v___x_2883_ = lean_unsigned_to_nat(5u);
v___x_2884_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2883_);
v___x_2895_ = lean_unsigned_to_nat(6u);
v___x_2896_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2895_);
lean_dec(v_stx_2476_);
v___x_2897_ = l_Lean_Syntax_getOptional_x3f(v___x_2896_);
lean_dec(v___x_2896_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v___x_2898_; 
v___x_2898_ = lean_box(0);
v___y_2886_ = v___x_2898_;
goto v___jp_2885_;
}
else
{
lean_object* v_val_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2906_; 
v_val_2899_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2901_ = v___x_2897_;
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_val_2899_);
lean_dec(v___x_2897_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2904_; 
if (v_isShared_2902_ == 0)
{
v___x_2904_ = v___x_2901_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_val_2899_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
v___y_2886_ = v___x_2904_;
goto v___jp_2885_;
}
}
}
v___jp_2885_:
{
lean_object* v___x_2887_; 
v___x_2887_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2884_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2887_) == 0)
{
if (lean_obj_tag(v___y_2886_) == 0)
{
lean_object* v_a_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2888_);
lean_dec_ref_known(v___x_2887_, 1);
v___x_2889_ = l_Lean_NameSet_empty;
v___x_2890_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2890_, 0, v___x_2882_);
lean_ctor_set(v___x_2890_, 1, v___x_2889_);
lean_ctor_set_uint8(v___x_2890_, sizeof(void*)*2, v___x_2833_);
lean_ctor_set_uint8(v___x_2890_, sizeof(void*)*2 + 1, v___x_2833_);
lean_ctor_set_uint8(v___x_2890_, sizeof(void*)*2 + 2, v___x_2833_);
lean_ctor_set_uint8(v___x_2890_, sizeof(void*)*2 + 3, v___x_2833_);
v___y_2485_ = v_a_2888_;
v_bodyInfo_2486_ = v___x_2890_;
goto v___jp_2484_;
}
else
{
lean_object* v_a_2891_; lean_object* v_val_2892_; lean_object* v___x_2893_; 
v_a_2891_ = lean_ctor_get(v___x_2887_, 0);
lean_inc(v_a_2891_);
lean_dec_ref_known(v___x_2887_, 1);
v_val_2892_ = lean_ctor_get(v___y_2886_, 0);
lean_inc(v_val_2892_);
lean_dec_ref_known(v___y_2886_, 1);
v___x_2893_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2892_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2894_);
lean_dec_ref_known(v___x_2893_, 1);
v___y_2485_ = v_a_2891_;
v_bodyInfo_2486_ = v_a_2894_;
goto v___jp_2484_;
}
else
{
lean_dec(v_a_2891_);
return v___x_2893_;
}
}
}
else
{
lean_dec(v___y_2886_);
return v___x_2887_;
}
}
}
}
else
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___y_2911_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2907_ = lean_unsigned_to_nat(1u);
v___x_2908_ = lean_unsigned_to_nat(5u);
v___x_2909_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2908_);
v___x_2920_ = lean_unsigned_to_nat(6u);
v___x_2921_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2920_);
lean_dec(v_stx_2476_);
v___x_2922_ = l_Lean_Syntax_getOptional_x3f(v___x_2921_);
lean_dec(v___x_2921_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v___x_2923_; 
v___x_2923_ = lean_box(0);
v___y_2911_ = v___x_2923_;
goto v___jp_2910_;
}
else
{
lean_object* v_val_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2931_; 
v_val_2924_ = lean_ctor_get(v___x_2922_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2926_ = v___x_2922_;
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_val_2924_);
lean_dec(v___x_2922_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2929_; 
if (v_isShared_2927_ == 0)
{
v___x_2929_ = v___x_2926_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_val_2924_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
v___y_2911_ = v___x_2929_;
goto v___jp_2910_;
}
}
}
v___jp_2910_:
{
lean_object* v___x_2912_; 
v___x_2912_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2909_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2912_) == 0)
{
if (lean_obj_tag(v___y_2911_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v___x_2912_, 1);
v___x_2914_ = l_Lean_NameSet_empty;
v___x_2915_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2915_, 0, v___x_2907_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
lean_ctor_set_uint8(v___x_2915_, sizeof(void*)*2, v___x_2831_);
lean_ctor_set_uint8(v___x_2915_, sizeof(void*)*2 + 1, v___x_2831_);
lean_ctor_set_uint8(v___x_2915_, sizeof(void*)*2 + 2, v___x_2831_);
lean_ctor_set_uint8(v___x_2915_, sizeof(void*)*2 + 3, v___x_2831_);
v___y_2506_ = v_a_2913_;
v_bodyInfo_2507_ = v___x_2915_;
goto v___jp_2505_;
}
else
{
lean_object* v_a_2916_; lean_object* v_val_2917_; lean_object* v___x_2918_; 
v_a_2916_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v___x_2912_, 1);
v_val_2917_ = lean_ctor_get(v___y_2911_, 0);
lean_inc(v_val_2917_);
lean_dec_ref_known(v___y_2911_, 1);
v___x_2918_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2917_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2918_, 1);
v___y_2506_ = v_a_2916_;
v_bodyInfo_2507_ = v_a_2919_;
goto v___jp_2505_;
}
else
{
lean_dec(v_a_2916_);
return v___x_2918_;
}
}
}
else
{
lean_dec(v___y_2911_);
return v___x_2912_;
}
}
}
}
else
{
lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___x_3147_; uint8_t v___x_3148_; 
v___x_2932_ = lean_unsigned_to_nat(0u);
v___x_2933_ = lean_unsigned_to_nat(1u);
v___x_3147_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2933_);
v___x_3148_ = l_Lean_Syntax_isNone(v___x_3147_);
if (v___x_3148_ == 0)
{
lean_object* v___x_3149_; uint8_t v___x_3150_; 
v___x_3149_ = lean_unsigned_to_nat(5u);
v___x_3150_ = l_Lean_Syntax_matchesNull(v___x_3147_, v___x_3149_);
if (v___x_3150_ == 0)
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v_env_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3151_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3152_ = lean_st_ref_get(v_a_2482_);
v_env_3153_ = lean_ctor_get(v___x_3152_, 0);
lean_inc_ref(v_env_3153_);
lean_dec(v___x_3152_);
v___x_3154_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3155_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3154_, v_env_3153_, v___x_3151_);
v___x_3156_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3157_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3155_, v___x_3156_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3155_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3188_; 
v_a_3158_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3160_ = v___x_3157_;
v_isShared_3161_ = v_isSharedCheck_3188_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3157_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3188_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v_fst_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3186_; 
v_fst_3162_ = lean_ctor_get(v_a_3158_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v_a_3158_);
if (v_isSharedCheck_3186_ == 0)
{
lean_object* v_unused_3187_; 
v_unused_3187_ = lean_ctor_get(v_a_3158_, 1);
lean_dec(v_unused_3187_);
v___x_3164_ = v_a_3158_;
v_isShared_3165_ = v_isSharedCheck_3186_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_fst_3162_);
lean_dec(v_a_3158_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3186_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
if (lean_obj_tag(v_fst_3162_) == 0)
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3169_; 
lean_del_object(v___x_3160_);
v___x_3166_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3167_ = l_Lean_MessageData_ofName(v___x_3151_);
lean_inc_ref(v___x_3167_);
if (v_isShared_3165_ == 0)
{
lean_ctor_set_tag(v___x_3164_, 7);
lean_ctor_set(v___x_3164_, 1, v___x_3167_);
lean_ctor_set(v___x_3164_, 0, v___x_3166_);
v___x_3169_ = v___x_3164_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3166_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v___x_3167_);
v___x_3169_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
v___x_3170_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3169_);
lean_ctor_set(v___x_3171_, 1, v___x_3170_);
v___x_3172_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3173_ = l_Lean_indentD(v___x_3172_);
v___x_3174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3171_);
lean_ctor_set(v___x_3174_, 1, v___x_3173_);
v___x_3175_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3174_);
lean_ctor_set(v___x_3176_, 1, v___x_3175_);
v___x_3177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3176_);
lean_ctor_set(v___x_3177_, 1, v___x_3167_);
v___x_3178_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3177_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
v___x_3180_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3179_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3180_;
}
}
else
{
lean_object* v_val_3182_; lean_object* v___x_3184_; 
lean_del_object(v___x_3164_);
lean_dec(v___x_3151_);
lean_dec(v_stx_2476_);
v_val_3182_ = lean_ctor_get(v_fst_3162_, 0);
lean_inc(v_val_3182_);
lean_dec_ref_known(v_fst_3162_, 1);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 0, v_val_3182_);
v___x_3184_ = v___x_3160_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_val_3182_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
return v___x_3184_;
}
}
}
}
}
else
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3196_; 
lean_dec(v___x_3151_);
lean_dec(v_stx_2476_);
v_a_3189_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3191_ = v___x_3157_;
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3157_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
if (v_isShared_3192_ == 0)
{
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3189_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
}
else
{
v___y_2935_ = v_a_2477_;
v___y_2936_ = v_a_2478_;
v___y_2937_ = v_a_2479_;
v___y_2938_ = v_a_2480_;
v___y_2939_ = v_a_2481_;
v___y_2940_ = v_a_2482_;
goto v___jp_2934_;
}
}
else
{
lean_dec(v___x_3147_);
v___y_2935_ = v_a_2477_;
v___y_2936_ = v_a_2478_;
v___y_2937_ = v_a_2479_;
v___y_2938_ = v_a_2480_;
v___y_2939_ = v_a_2481_;
v___y_2940_ = v_a_2482_;
goto v___jp_2934_;
}
v___jp_2934_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; 
v___x_2941_ = lean_unsigned_to_nat(4u);
v___x_2942_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2941_);
v___x_2943_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68));
lean_inc(v___x_2942_);
v___x_2944_ = l_Lean_Syntax_isOfKind(v___x_2942_, v___x_2943_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v_env_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_dec(v___x_2942_);
lean_inc_n(v_stx_2476_, 2);
v___x_2945_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_2946_ = lean_st_ref_get(v___y_2940_);
v_env_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc_ref(v_env_2947_);
lean_dec(v___x_2946_);
v___x_2948_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2949_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2948_, v_env_2947_, v___x_2945_);
v___x_2950_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2951_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_2949_, v___x_2950_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___x_2949_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2982_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2954_ = v___x_2951_;
v_isShared_2955_ = v_isSharedCheck_2982_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2951_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2982_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v_fst_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2980_; 
v_fst_2956_ = lean_ctor_get(v_a_2952_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v_a_2952_);
if (v_isSharedCheck_2980_ == 0)
{
lean_object* v_unused_2981_; 
v_unused_2981_ = lean_ctor_get(v_a_2952_, 1);
lean_dec(v_unused_2981_);
v___x_2958_ = v_a_2952_;
v_isShared_2959_ = v_isSharedCheck_2980_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_fst_2956_);
lean_dec(v_a_2952_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2980_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
if (lean_obj_tag(v_fst_2956_) == 0)
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2963_; 
lean_del_object(v___x_2954_);
v___x_2960_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2961_ = l_Lean_MessageData_ofName(v___x_2945_);
lean_inc_ref(v___x_2961_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set_tag(v___x_2958_, 7);
lean_ctor_set(v___x_2958_, 1, v___x_2961_);
lean_ctor_set(v___x_2958_, 0, v___x_2960_);
v___x_2963_ = v___x_2958_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v___x_2960_);
lean_ctor_set(v_reuseFailAlloc_2975_, 1, v___x_2961_);
v___x_2963_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2964_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2963_);
lean_ctor_set(v___x_2965_, 1, v___x_2964_);
v___x_2966_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_2967_ = l_Lean_indentD(v___x_2966_);
v___x_2968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2965_);
lean_ctor_set(v___x_2968_, 1, v___x_2967_);
v___x_2969_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2968_);
lean_ctor_set(v___x_2970_, 1, v___x_2969_);
v___x_2971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
lean_ctor_set(v___x_2971_, 1, v___x_2961_);
v___x_2972_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2971_);
lean_ctor_set(v___x_2973_, 1, v___x_2972_);
v___x_2974_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2973_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
return v___x_2974_;
}
}
else
{
lean_object* v_val_2976_; lean_object* v___x_2978_; 
lean_del_object(v___x_2958_);
lean_dec(v___x_2945_);
lean_dec(v_stx_2476_);
v_val_2976_ = lean_ctor_get(v_fst_2956_, 0);
lean_inc(v_val_2976_);
lean_dec_ref_known(v_fst_2956_, 1);
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 0, v_val_2976_);
v___x_2978_ = v___x_2954_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_val_2976_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec(v___x_2945_);
lean_dec(v_stx_2476_);
v_a_2983_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2951_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2951_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
}
else
{
lean_object* v___x_2991_; lean_object* v___x_2992_; size_t v_sz_2993_; size_t v___x_2994_; lean_object* v___x_2995_; 
v___x_2991_ = l_Lean_Syntax_getArg(v___x_2942_, v___x_2932_);
v___x_2992_ = l_Lean_Syntax_getArgs(v___x_2991_);
lean_dec(v___x_2991_);
v_sz_2993_ = lean_array_size(v___x_2992_);
v___x_2994_ = ((size_t)0ULL);
v___x_2995_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v_sz_2993_, v___x_2994_, v___x_2992_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v_env_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
lean_dec(v___x_2942_);
lean_inc_n(v_stx_2476_, 2);
v___x_2996_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_2997_ = lean_st_ref_get(v___y_2940_);
v_env_2998_ = lean_ctor_get(v___x_2997_, 0);
lean_inc_ref(v_env_2998_);
lean_dec(v___x_2997_);
v___x_2999_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3000_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2999_, v_env_2998_, v___x_2996_);
v___x_3001_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3002_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3000_, v___x_3001_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___x_3000_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3033_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3005_ = v___x_3002_;
v_isShared_3006_ = v_isSharedCheck_3033_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_3002_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3033_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v_fst_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3031_; 
v_fst_3007_ = lean_ctor_get(v_a_3003_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v_a_3003_);
if (v_isSharedCheck_3031_ == 0)
{
lean_object* v_unused_3032_; 
v_unused_3032_ = lean_ctor_get(v_a_3003_, 1);
lean_dec(v_unused_3032_);
v___x_3009_ = v_a_3003_;
v_isShared_3010_ = v_isSharedCheck_3031_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_fst_3007_);
lean_dec(v_a_3003_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3031_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
if (lean_obj_tag(v_fst_3007_) == 0)
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
lean_del_object(v___x_3005_);
v___x_3011_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3012_ = l_Lean_MessageData_ofName(v___x_2996_);
lean_inc_ref(v___x_3012_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set_tag(v___x_3009_, 7);
lean_ctor_set(v___x_3009_, 1, v___x_3012_);
lean_ctor_set(v___x_3009_, 0, v___x_3011_);
v___x_3014_ = v___x_3009_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v___x_3011_);
lean_ctor_set(v_reuseFailAlloc_3026_, 1, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3015_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3014_);
lean_ctor_set(v___x_3016_, 1, v___x_3015_);
v___x_3017_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3018_ = l_Lean_indentD(v___x_3017_);
v___x_3019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3016_);
lean_ctor_set(v___x_3019_, 1, v___x_3018_);
v___x_3020_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3019_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v___x_3022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
lean_ctor_set(v___x_3022_, 1, v___x_3012_);
v___x_3023_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3022_);
lean_ctor_set(v___x_3024_, 1, v___x_3023_);
v___x_3025_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3024_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
return v___x_3025_;
}
}
else
{
lean_object* v_val_3027_; lean_object* v___x_3029_; 
lean_del_object(v___x_3009_);
lean_dec(v___x_2996_);
lean_dec(v_stx_2476_);
v_val_3027_ = lean_ctor_get(v_fst_3007_, 0);
lean_inc(v_val_3027_);
lean_dec_ref_known(v_fst_3007_, 1);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 0, v_val_3027_);
v___x_3029_ = v___x_3005_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_val_3027_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3041_; 
lean_dec(v___x_2996_);
lean_dec(v_stx_2476_);
v_a_3034_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3036_ = v___x_3002_;
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3002_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
}
else
{
lean_object* v_val_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; uint8_t v___x_3045_; 
v_val_3042_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_val_3042_);
lean_dec_ref_known(v___x_2995_, 1);
v___x_3043_ = l_Lean_Syntax_getArg(v___x_2942_, v___x_2933_);
lean_dec(v___x_2942_);
v___x_3044_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70));
lean_inc(v___x_3043_);
v___x_3045_ = l_Lean_Syntax_isOfKind(v___x_3043_, v___x_3044_);
if (v___x_3045_ == 0)
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v_env_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
lean_dec(v___x_3043_);
lean_dec(v_val_3042_);
lean_inc_n(v_stx_2476_, 2);
v___x_3046_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3047_ = lean_st_ref_get(v___y_2940_);
v_env_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc_ref(v_env_3048_);
lean_dec(v___x_3047_);
v___x_3049_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3050_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3049_, v_env_3048_, v___x_3046_);
v___x_3051_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3052_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3050_, v___x_3051_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___x_3050_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3083_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3055_ = v___x_3052_;
v_isShared_3056_ = v_isSharedCheck_3083_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3052_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3083_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v_fst_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3081_; 
v_fst_3057_ = lean_ctor_get(v_a_3053_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v_a_3053_);
if (v_isSharedCheck_3081_ == 0)
{
lean_object* v_unused_3082_; 
v_unused_3082_ = lean_ctor_get(v_a_3053_, 1);
lean_dec(v_unused_3082_);
v___x_3059_ = v_a_3053_;
v_isShared_3060_ = v_isSharedCheck_3081_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_fst_3057_);
lean_dec(v_a_3053_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3081_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
if (lean_obj_tag(v_fst_3057_) == 0)
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
lean_del_object(v___x_3055_);
v___x_3061_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3062_ = l_Lean_MessageData_ofName(v___x_3046_);
lean_inc_ref(v___x_3062_);
if (v_isShared_3060_ == 0)
{
lean_ctor_set_tag(v___x_3059_, 7);
lean_ctor_set(v___x_3059_, 1, v___x_3062_);
lean_ctor_set(v___x_3059_, 0, v___x_3061_);
v___x_3064_ = v___x_3059_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v___x_3061_);
lean_ctor_set(v_reuseFailAlloc_3076_, 1, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3065_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3064_);
lean_ctor_set(v___x_3066_, 1, v___x_3065_);
v___x_3067_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3068_ = l_Lean_indentD(v___x_3067_);
v___x_3069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3066_);
lean_ctor_set(v___x_3069_, 1, v___x_3068_);
v___x_3070_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3069_);
lean_ctor_set(v___x_3071_, 1, v___x_3070_);
v___x_3072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
lean_ctor_set(v___x_3072_, 1, v___x_3062_);
v___x_3073_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3072_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
v___x_3075_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3074_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
return v___x_3075_;
}
}
else
{
lean_object* v_val_3077_; lean_object* v___x_3079_; 
lean_del_object(v___x_3059_);
lean_dec(v___x_3046_);
lean_dec(v_stx_2476_);
v_val_3077_ = lean_ctor_get(v_fst_3057_, 0);
lean_inc(v_val_3077_);
lean_dec_ref_known(v_fst_3057_, 1);
if (v_isShared_3056_ == 0)
{
lean_ctor_set(v___x_3055_, 0, v_val_3077_);
v___x_3079_ = v___x_3055_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_val_3077_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec(v___x_3046_);
lean_dec(v_stx_2476_);
v_a_3084_ = lean_ctor_get(v___x_3052_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3052_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3052_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
else
{
lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v___x_3092_ = l_Lean_Syntax_getArg(v___x_3043_, v___x_2933_);
v___x_3093_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
v___x_3094_ = l_Lean_Syntax_isOfKind(v___x_3092_, v___x_3093_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v_env_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
lean_dec(v___x_3043_);
lean_dec(v_val_3042_);
lean_inc_n(v_stx_2476_, 2);
v___x_3095_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3096_ = lean_st_ref_get(v___y_2940_);
v_env_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc_ref(v_env_3097_);
lean_dec(v___x_3096_);
v___x_3098_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3099_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3098_, v_env_3097_, v___x_3095_);
v___x_3100_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3101_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3099_, v___x_3100_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___x_3099_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3132_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3104_ = v___x_3101_;
v_isShared_3105_ = v_isSharedCheck_3132_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3101_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3132_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v_fst_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3130_; 
v_fst_3106_ = lean_ctor_get(v_a_3102_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v_a_3102_);
if (v_isSharedCheck_3130_ == 0)
{
lean_object* v_unused_3131_; 
v_unused_3131_ = lean_ctor_get(v_a_3102_, 1);
lean_dec(v_unused_3131_);
v___x_3108_ = v_a_3102_;
v_isShared_3109_ = v_isSharedCheck_3130_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_fst_3106_);
lean_dec(v_a_3102_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3130_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
if (lean_obj_tag(v_fst_3106_) == 0)
{
lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3113_; 
lean_del_object(v___x_3104_);
v___x_3110_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3111_ = l_Lean_MessageData_ofName(v___x_3095_);
lean_inc_ref(v___x_3111_);
if (v_isShared_3109_ == 0)
{
lean_ctor_set_tag(v___x_3108_, 7);
lean_ctor_set(v___x_3108_, 1, v___x_3111_);
lean_ctor_set(v___x_3108_, 0, v___x_3110_);
v___x_3113_ = v___x_3108_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3110_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v___x_3111_);
v___x_3113_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3114_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3113_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
v___x_3116_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3117_ = l_Lean_indentD(v___x_3116_);
v___x_3118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3115_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3118_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
v___x_3121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
lean_ctor_set(v___x_3121_, 1, v___x_3111_);
v___x_3122_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3121_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
v___x_3124_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3123_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
return v___x_3124_;
}
}
else
{
lean_object* v_val_3126_; lean_object* v___x_3128_; 
lean_del_object(v___x_3108_);
lean_dec(v___x_3095_);
lean_dec(v_stx_2476_);
v_val_3126_ = lean_ctor_get(v_fst_3106_, 0);
lean_inc(v_val_3126_);
lean_dec_ref_known(v_fst_3106_, 1);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 0, v_val_3126_);
v___x_3128_ = v___x_3104_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v_val_3126_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
lean_dec(v___x_3095_);
lean_dec(v_stx_2476_);
v_a_3133_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3101_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3101_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
else
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
lean_dec(v_stx_2476_);
v___x_3141_ = lean_unsigned_to_nat(3u);
v___x_3142_ = l_Lean_Syntax_getArg(v___x_3043_, v___x_3141_);
lean_dec(v___x_3043_);
v___x_3143_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3142_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; size_t v_sz_3145_; lean_object* v___x_3146_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
v_sz_3145_ = lean_array_size(v_val_3042_);
v___x_3146_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_val_3042_, v_sz_3145_, v___x_2994_, v_a_3144_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v_val_3042_);
return v___x_3146_;
}
else
{
lean_dec(v_val_3042_);
return v___x_3143_;
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
lean_object* v___x_3197_; lean_object* v___x_3198_; 
lean_dec(v_stx_2476_);
v___x_3197_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3197_);
return v___x_3198_;
}
}
else
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
lean_dec(v_stx_2476_);
v___x_3199_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3199_);
return v___x_3200_;
}
}
else
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
lean_dec(v_stx_2476_);
v___x_3201_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
return v___x_3202_;
}
}
else
{
lean_object* v___x_3203_; lean_object* v___x_3204_; 
lean_dec(v_stx_2476_);
v___x_3203_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3203_);
return v___x_3204_;
}
}
else
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
lean_dec(v_stx_2476_);
v___x_3205_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
return v___x_3206_;
}
}
else
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; size_t v_sz_3210_; size_t v___x_3211_; lean_object* v___x_3212_; 
v___x_3207_ = lean_unsigned_to_nat(2u);
v___x_3208_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3207_);
v___x_3209_ = l_Lean_Syntax_getArgs(v___x_3208_);
lean_dec(v___x_3208_);
v_sz_3210_ = lean_array_size(v___x_3209_);
v___x_3211_ = ((size_t)0ULL);
v___x_3212_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_3210_, v___x_3211_, v___x_3209_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v_env_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3213_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3214_ = lean_st_ref_get(v_a_2482_);
v_env_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc_ref(v_env_3215_);
lean_dec(v___x_3214_);
v___x_3216_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3217_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3216_, v_env_3215_, v___x_3213_);
v___x_3218_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3219_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3217_, v___x_3218_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3217_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3250_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3222_ = v___x_3219_;
v_isShared_3223_ = v_isSharedCheck_3250_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3250_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v_fst_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3248_; 
v_fst_3224_ = lean_ctor_get(v_a_3220_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v_a_3220_);
if (v_isSharedCheck_3248_ == 0)
{
lean_object* v_unused_3249_; 
v_unused_3249_ = lean_ctor_get(v_a_3220_, 1);
lean_dec(v_unused_3249_);
v___x_3226_ = v_a_3220_;
v_isShared_3227_ = v_isSharedCheck_3248_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_fst_3224_);
lean_dec(v_a_3220_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3248_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
if (lean_obj_tag(v_fst_3224_) == 0)
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3231_; 
lean_del_object(v___x_3222_);
v___x_3228_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3229_ = l_Lean_MessageData_ofName(v___x_3213_);
lean_inc_ref(v___x_3229_);
if (v_isShared_3227_ == 0)
{
lean_ctor_set_tag(v___x_3226_, 7);
lean_ctor_set(v___x_3226_, 1, v___x_3229_);
lean_ctor_set(v___x_3226_, 0, v___x_3228_);
v___x_3231_ = v___x_3226_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___x_3228_);
lean_ctor_set(v_reuseFailAlloc_3243_, 1, v___x_3229_);
v___x_3231_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3232_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3231_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3235_ = l_Lean_indentD(v___x_3234_);
v___x_3236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3233_);
lean_ctor_set(v___x_3236_, 1, v___x_3235_);
v___x_3237_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3236_);
lean_ctor_set(v___x_3238_, 1, v___x_3237_);
v___x_3239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3238_);
lean_ctor_set(v___x_3239_, 1, v___x_3229_);
v___x_3240_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3239_);
lean_ctor_set(v___x_3241_, 1, v___x_3240_);
v___x_3242_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3241_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3242_;
}
}
else
{
lean_object* v_val_3244_; lean_object* v___x_3246_; 
lean_del_object(v___x_3226_);
lean_dec(v___x_3213_);
lean_dec(v_stx_2476_);
v_val_3244_ = lean_ctor_get(v_fst_3224_, 0);
lean_inc(v_val_3244_);
lean_dec_ref_known(v_fst_3224_, 1);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 0, v_val_3244_);
v___x_3246_ = v___x_3222_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_val_3244_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
lean_dec(v___x_3213_);
lean_dec(v_stx_2476_);
v_a_3251_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3219_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3219_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
else
{
lean_object* v_val_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3393_; 
v_val_3259_ = lean_ctor_get(v___x_3212_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3261_ = v___x_3212_;
v_isShared_3262_ = v_isSharedCheck_3393_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_val_3259_);
lean_dec(v___x_3212_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3393_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v_finSeq_x3f_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___x_3288_; lean_object* v___x_3289_; uint8_t v___x_3290_; 
v___x_3263_ = lean_unsigned_to_nat(1u);
v___x_3264_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3263_);
v___x_3288_ = lean_unsigned_to_nat(3u);
v___x_3289_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3288_);
v___x_3290_ = l_Lean_Syntax_isNone(v___x_3289_);
if (v___x_3290_ == 0)
{
uint8_t v___x_3291_; 
lean_inc(v___x_3289_);
v___x_3291_ = l_Lean_Syntax_matchesNull(v___x_3289_, v___x_3263_);
if (v___x_3291_ == 0)
{
lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v_env_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
lean_dec(v___x_3289_);
lean_dec(v___x_3264_);
lean_del_object(v___x_3261_);
lean_dec(v_val_3259_);
lean_inc_n(v_stx_2476_, 2);
v___x_3292_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3293_ = lean_st_ref_get(v_a_2482_);
v_env_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc_ref(v_env_3294_);
lean_dec(v___x_3293_);
v___x_3295_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3296_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3295_, v_env_3294_, v___x_3292_);
v___x_3297_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3298_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3296_, v___x_3297_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3296_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3329_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3301_ = v___x_3298_;
v_isShared_3302_ = v_isSharedCheck_3329_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3298_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3329_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v_fst_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3327_; 
v_fst_3303_ = lean_ctor_get(v_a_3299_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v_a_3299_);
if (v_isSharedCheck_3327_ == 0)
{
lean_object* v_unused_3328_; 
v_unused_3328_ = lean_ctor_get(v_a_3299_, 1);
lean_dec(v_unused_3328_);
v___x_3305_ = v_a_3299_;
v_isShared_3306_ = v_isSharedCheck_3327_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_fst_3303_);
lean_dec(v_a_3299_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3327_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
if (lean_obj_tag(v_fst_3303_) == 0)
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3310_; 
lean_del_object(v___x_3301_);
v___x_3307_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3308_ = l_Lean_MessageData_ofName(v___x_3292_);
lean_inc_ref(v___x_3308_);
if (v_isShared_3306_ == 0)
{
lean_ctor_set_tag(v___x_3305_, 7);
lean_ctor_set(v___x_3305_, 1, v___x_3308_);
lean_ctor_set(v___x_3305_, 0, v___x_3307_);
v___x_3310_ = v___x_3305_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v___x_3307_);
lean_ctor_set(v_reuseFailAlloc_3322_, 1, v___x_3308_);
v___x_3310_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3311_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3310_);
lean_ctor_set(v___x_3312_, 1, v___x_3311_);
v___x_3313_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3314_ = l_Lean_indentD(v___x_3313_);
v___x_3315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3312_);
lean_ctor_set(v___x_3315_, 1, v___x_3314_);
v___x_3316_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3315_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
lean_ctor_set(v___x_3318_, 1, v___x_3308_);
v___x_3319_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3318_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3320_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3321_;
}
}
else
{
lean_object* v_val_3323_; lean_object* v___x_3325_; 
lean_del_object(v___x_3305_);
lean_dec(v___x_3292_);
lean_dec(v_stx_2476_);
v_val_3323_ = lean_ctor_get(v_fst_3303_, 0);
lean_inc(v_val_3323_);
lean_dec_ref_known(v_fst_3303_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v_val_3323_);
v___x_3325_ = v___x_3301_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_val_3323_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
}
else
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3337_; 
lean_dec(v___x_3292_);
lean_dec(v_stx_2476_);
v_a_3330_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3332_ = v___x_3298_;
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3298_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3333_ == 0)
{
v___x_3335_ = v___x_3332_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v_a_3330_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
}
}
else
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; uint8_t v___x_3341_; 
v___x_3338_ = lean_unsigned_to_nat(0u);
v___x_3339_ = l_Lean_Syntax_getArg(v___x_3289_, v___x_3338_);
lean_dec(v___x_3289_);
v___x_3340_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74));
lean_inc(v___x_3339_);
v___x_3341_ = l_Lean_Syntax_isOfKind(v___x_3339_, v___x_3340_);
if (v___x_3341_ == 0)
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v_env_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
lean_dec(v___x_3339_);
lean_dec(v___x_3264_);
lean_del_object(v___x_3261_);
lean_dec(v_val_3259_);
lean_inc_n(v_stx_2476_, 2);
v___x_3342_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3343_ = lean_st_ref_get(v_a_2482_);
v_env_3344_ = lean_ctor_get(v___x_3343_, 0);
lean_inc_ref(v_env_3344_);
lean_dec(v___x_3343_);
v___x_3345_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3346_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3345_, v_env_3344_, v___x_3342_);
v___x_3347_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3348_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3346_, v___x_3347_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3346_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_a_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3379_; 
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3351_ = v___x_3348_;
v_isShared_3352_ = v_isSharedCheck_3379_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_a_3349_);
lean_dec(v___x_3348_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3379_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v_fst_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3377_; 
v_fst_3353_ = lean_ctor_get(v_a_3349_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v_a_3349_);
if (v_isSharedCheck_3377_ == 0)
{
lean_object* v_unused_3378_; 
v_unused_3378_ = lean_ctor_get(v_a_3349_, 1);
lean_dec(v_unused_3378_);
v___x_3355_ = v_a_3349_;
v_isShared_3356_ = v_isSharedCheck_3377_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_fst_3353_);
lean_dec(v_a_3349_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3377_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
if (lean_obj_tag(v_fst_3353_) == 0)
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3360_; 
lean_del_object(v___x_3351_);
v___x_3357_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3358_ = l_Lean_MessageData_ofName(v___x_3342_);
lean_inc_ref(v___x_3358_);
if (v_isShared_3356_ == 0)
{
lean_ctor_set_tag(v___x_3355_, 7);
lean_ctor_set(v___x_3355_, 1, v___x_3358_);
lean_ctor_set(v___x_3355_, 0, v___x_3357_);
v___x_3360_ = v___x_3355_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v___x_3357_);
lean_ctor_set(v_reuseFailAlloc_3372_, 1, v___x_3358_);
v___x_3360_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3361_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3360_);
lean_ctor_set(v___x_3362_, 1, v___x_3361_);
v___x_3363_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3364_ = l_Lean_indentD(v___x_3363_);
v___x_3365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3362_);
lean_ctor_set(v___x_3365_, 1, v___x_3364_);
v___x_3366_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3365_);
lean_ctor_set(v___x_3367_, 1, v___x_3366_);
v___x_3368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
lean_ctor_set(v___x_3368_, 1, v___x_3358_);
v___x_3369_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3368_);
lean_ctor_set(v___x_3370_, 1, v___x_3369_);
v___x_3371_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3370_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3371_;
}
}
else
{
lean_object* v_val_3373_; lean_object* v___x_3375_; 
lean_del_object(v___x_3355_);
lean_dec(v___x_3342_);
lean_dec(v_stx_2476_);
v_val_3373_ = lean_ctor_get(v_fst_3353_, 0);
lean_inc(v_val_3373_);
lean_dec_ref_known(v_fst_3353_, 1);
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 0, v_val_3373_);
v___x_3375_ = v___x_3351_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_val_3373_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
}
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_dec(v___x_3342_);
lean_dec(v_stx_2476_);
v_a_3380_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3348_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3348_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
else
{
lean_object* v___x_3388_; lean_object* v___x_3390_; 
lean_dec(v_stx_2476_);
v___x_3388_ = l_Lean_Syntax_getArg(v___x_3339_, v___x_3263_);
lean_dec(v___x_3339_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 0, v___x_3388_);
v___x_3390_ = v___x_3261_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v___x_3388_);
v___x_3390_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
v_finSeq_x3f_3266_ = v___x_3390_;
v___y_3267_ = v_a_2477_;
v___y_3268_ = v_a_2478_;
v___y_3269_ = v_a_2479_;
v___y_3270_ = v_a_2480_;
v___y_3271_ = v_a_2481_;
v___y_3272_ = v_a_2482_;
goto v___jp_3265_;
}
}
}
}
else
{
lean_object* v___x_3392_; 
lean_dec(v___x_3289_);
lean_del_object(v___x_3261_);
lean_dec(v_stx_2476_);
v___x_3392_ = lean_box(0);
v_finSeq_x3f_3266_ = v___x_3392_;
v___y_3267_ = v_a_2477_;
v___y_3268_ = v_a_2478_;
v___y_3269_ = v_a_2479_;
v___y_3270_ = v_a_2480_;
v___y_3271_ = v_a_2481_;
v___y_3272_ = v_a_2482_;
goto v___jp_3265_;
}
v___jp_3265_:
{
lean_object* v___x_3273_; 
v___x_3273_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3264_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v_a_3274_; size_t v_sz_3275_; lean_object* v___x_3276_; 
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_a_3274_);
lean_dec_ref_known(v___x_3273_, 1);
v_sz_3275_ = lean_array_size(v_val_3259_);
v___x_3276_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_val_3259_, v_sz_3275_, v___x_3211_, v_a_3274_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
lean_dec(v_val_3259_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
v___x_3278_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_finSeq_x3f_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3287_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3281_ = v___x_3278_;
v_isShared_3282_ = v_isSharedCheck_3287_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3278_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3287_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3283_; lean_object* v___x_3285_; 
v___x_3283_ = l_Lean_Elab_Do_ControlInfo_sequence(v_a_3277_, v_a_3279_);
if (v_isShared_3282_ == 0)
{
lean_ctor_set(v___x_3281_, 0, v___x_3283_);
v___x_3285_ = v___x_3281_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
else
{
lean_dec(v_a_3277_);
return v___x_3278_;
}
}
else
{
lean_dec(v_finSeq_x3f_3266_);
return v___x_3276_;
}
}
else
{
lean_dec(v_finSeq_x3f_3266_);
lean_dec(v_val_3259_);
return v___x_3273_;
}
}
}
}
}
}
else
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v___y_3399_; lean_object* v___y_3400_; lean_object* v___y_3401_; lean_object* v___y_3402_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___y_3416_; lean_object* v___y_3417_; lean_object* v___y_3418_; lean_object* v___x_3518_; uint8_t v___x_3519_; 
v___x_3394_ = lean_unsigned_to_nat(0u);
v___x_3395_ = lean_unsigned_to_nat(1u);
v___x_3518_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3395_);
v___x_3519_ = l_Lean_Syntax_isNone(v___x_3518_);
if (v___x_3519_ == 0)
{
uint8_t v___x_3520_; 
lean_inc(v___x_3518_);
v___x_3520_ = l_Lean_Syntax_matchesNull(v___x_3518_, v___x_3395_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v_env_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
lean_dec(v___x_3518_);
lean_inc_n(v_stx_2476_, 2);
v___x_3521_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3522_ = lean_st_ref_get(v_a_2482_);
v_env_3523_ = lean_ctor_get(v___x_3522_, 0);
lean_inc_ref(v_env_3523_);
lean_dec(v___x_3522_);
v___x_3524_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3525_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3524_, v_env_3523_, v___x_3521_);
v___x_3526_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3527_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3525_, v___x_3526_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3525_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3558_; 
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3530_ = v___x_3527_;
v_isShared_3531_ = v_isSharedCheck_3558_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3527_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3558_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v_fst_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3556_; 
v_fst_3532_ = lean_ctor_get(v_a_3528_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v_a_3528_);
if (v_isSharedCheck_3556_ == 0)
{
lean_object* v_unused_3557_; 
v_unused_3557_ = lean_ctor_get(v_a_3528_, 1);
lean_dec(v_unused_3557_);
v___x_3534_ = v_a_3528_;
v_isShared_3535_ = v_isSharedCheck_3556_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_fst_3532_);
lean_dec(v_a_3528_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3556_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
if (lean_obj_tag(v_fst_3532_) == 0)
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3539_; 
lean_del_object(v___x_3530_);
v___x_3536_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3537_ = l_Lean_MessageData_ofName(v___x_3521_);
lean_inc_ref(v___x_3537_);
if (v_isShared_3535_ == 0)
{
lean_ctor_set_tag(v___x_3534_, 7);
lean_ctor_set(v___x_3534_, 1, v___x_3537_);
lean_ctor_set(v___x_3534_, 0, v___x_3536_);
v___x_3539_ = v___x_3534_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3536_);
lean_ctor_set(v_reuseFailAlloc_3551_, 1, v___x_3537_);
v___x_3539_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3540_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3539_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3543_ = l_Lean_indentD(v___x_3542_);
v___x_3544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3541_);
lean_ctor_set(v___x_3544_, 1, v___x_3543_);
v___x_3545_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3544_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
v___x_3547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
lean_ctor_set(v___x_3547_, 1, v___x_3537_);
v___x_3548_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3547_);
lean_ctor_set(v___x_3549_, 1, v___x_3548_);
v___x_3550_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3549_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3550_;
}
}
else
{
lean_object* v_val_3552_; lean_object* v___x_3554_; 
lean_del_object(v___x_3534_);
lean_dec(v___x_3521_);
lean_dec(v_stx_2476_);
v_val_3552_ = lean_ctor_get(v_fst_3532_, 0);
lean_inc(v_val_3552_);
lean_dec_ref_known(v_fst_3532_, 1);
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v_val_3552_);
v___x_3554_ = v___x_3530_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_val_3552_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
}
}
else
{
lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3566_; 
lean_dec(v___x_3521_);
lean_dec(v_stx_2476_);
v_a_3559_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3561_ = v___x_3527_;
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3527_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3564_; 
if (v_isShared_3562_ == 0)
{
v___x_3564_ = v___x_3561_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_a_3559_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
}
else
{
lean_object* v___x_3567_; lean_object* v___x_3568_; uint8_t v___x_3569_; 
v___x_3567_ = l_Lean_Syntax_getArg(v___x_3518_, v___x_3394_);
lean_dec(v___x_3518_);
v___x_3568_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3569_ = l_Lean_Syntax_isOfKind(v___x_3567_, v___x_3568_);
if (v___x_3569_ == 0)
{
lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v_env_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3570_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3571_ = lean_st_ref_get(v_a_2482_);
v_env_3572_ = lean_ctor_get(v___x_3571_, 0);
lean_inc_ref(v_env_3572_);
lean_dec(v___x_3571_);
v___x_3573_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3574_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3573_, v_env_3572_, v___x_3570_);
v___x_3575_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3576_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3574_, v___x_3575_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3574_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3607_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3579_ = v___x_3576_;
v_isShared_3580_ = v_isSharedCheck_3607_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3576_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3607_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v_fst_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3605_; 
v_fst_3581_ = lean_ctor_get(v_a_3577_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v_a_3577_);
if (v_isSharedCheck_3605_ == 0)
{
lean_object* v_unused_3606_; 
v_unused_3606_ = lean_ctor_get(v_a_3577_, 1);
lean_dec(v_unused_3606_);
v___x_3583_ = v_a_3577_;
v_isShared_3584_ = v_isSharedCheck_3605_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_fst_3581_);
lean_dec(v_a_3577_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3605_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
if (lean_obj_tag(v_fst_3581_) == 0)
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3588_; 
lean_del_object(v___x_3579_);
v___x_3585_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3586_ = l_Lean_MessageData_ofName(v___x_3570_);
lean_inc_ref(v___x_3586_);
if (v_isShared_3584_ == 0)
{
lean_ctor_set_tag(v___x_3583_, 7);
lean_ctor_set(v___x_3583_, 1, v___x_3586_);
lean_ctor_set(v___x_3583_, 0, v___x_3585_);
v___x_3588_ = v___x_3583_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v___x_3585_);
lean_ctor_set(v_reuseFailAlloc_3600_, 1, v___x_3586_);
v___x_3588_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; 
v___x_3589_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3588_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v___x_3591_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3592_ = l_Lean_indentD(v___x_3591_);
v___x_3593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3590_);
lean_ctor_set(v___x_3593_, 1, v___x_3592_);
v___x_3594_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3593_);
lean_ctor_set(v___x_3595_, 1, v___x_3594_);
v___x_3596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3595_);
lean_ctor_set(v___x_3596_, 1, v___x_3586_);
v___x_3597_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3596_);
lean_ctor_set(v___x_3598_, 1, v___x_3597_);
v___x_3599_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3598_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3599_;
}
}
else
{
lean_object* v_val_3601_; lean_object* v___x_3603_; 
lean_del_object(v___x_3583_);
lean_dec(v___x_3570_);
lean_dec(v_stx_2476_);
v_val_3601_ = lean_ctor_get(v_fst_3581_, 0);
lean_inc(v_val_3601_);
lean_dec_ref_known(v_fst_3581_, 1);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 0, v_val_3601_);
v___x_3603_ = v___x_3579_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_val_3601_);
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
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3615_; 
lean_dec(v___x_3570_);
lean_dec(v_stx_2476_);
v_a_3608_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3610_ = v___x_3576_;
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3576_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3613_; 
if (v_isShared_3611_ == 0)
{
v___x_3613_ = v___x_3610_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_a_3608_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
else
{
v___y_3413_ = v_a_2477_;
v___y_3414_ = v_a_2478_;
v___y_3415_ = v_a_2479_;
v___y_3416_ = v_a_2480_;
v___y_3417_ = v_a_2481_;
v___y_3418_ = v_a_2482_;
goto v___jp_3412_;
}
}
}
else
{
lean_dec(v___x_3518_);
v___y_3413_ = v_a_2477_;
v___y_3414_ = v_a_2478_;
v___y_3415_ = v_a_2479_;
v___y_3416_ = v_a_2480_;
v___y_3417_ = v_a_2481_;
v___y_3418_ = v_a_2482_;
goto v___jp_3412_;
}
v___jp_3396_:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3403_ = lean_unsigned_to_nat(3u);
v___x_3404_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3403_);
lean_dec(v_stx_2476_);
v___x_3405_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3404_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; uint8_t v_breaks_3407_; 
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
lean_inc(v_a_3406_);
lean_dec_ref_known(v___x_3405_, 1);
v_breaks_3407_ = lean_ctor_get_uint8(v_a_3406_, sizeof(void*)*2);
if (v_breaks_3407_ == 0)
{
uint8_t v_returnsEarly_3408_; lean_object* v_reassigns_3409_; 
v_returnsEarly_3408_ = lean_ctor_get_uint8(v_a_3406_, sizeof(void*)*2 + 2);
v_reassigns_3409_ = lean_ctor_get(v_a_3406_, 1);
lean_inc(v_reassigns_3409_);
lean_dec(v_a_3406_);
v___y_2810_ = v_reassigns_3409_;
v___y_2811_ = v_returnsEarly_3408_;
v___y_2812_ = v___x_3394_;
v___y_2813_ = v___x_2817_;
goto v___jp_2809_;
}
else
{
uint8_t v_returnsEarly_3410_; lean_object* v_reassigns_3411_; 
v_returnsEarly_3410_ = lean_ctor_get_uint8(v_a_3406_, sizeof(void*)*2 + 2);
v_reassigns_3411_ = lean_ctor_get(v_a_3406_, 1);
lean_inc(v_reassigns_3411_);
lean_dec(v_a_3406_);
v___y_2810_ = v_reassigns_3411_;
v___y_2811_ = v_returnsEarly_3410_;
v___y_2812_ = v___x_3395_;
v___y_2813_ = v___x_2808_;
goto v___jp_2809_;
}
}
else
{
return v___x_3405_;
}
}
v___jp_3412_:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; uint8_t v___x_3421_; 
v___x_3419_ = lean_unsigned_to_nat(2u);
v___x_3420_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3419_);
v___x_3421_ = l_Lean_Syntax_isNone(v___x_3420_);
if (v___x_3421_ == 0)
{
uint8_t v___x_3422_; 
lean_inc(v___x_3420_);
v___x_3422_ = l_Lean_Syntax_matchesNull(v___x_3420_, v___x_3395_);
if (v___x_3422_ == 0)
{
lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v_env_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
lean_dec(v___x_3420_);
lean_inc_n(v_stx_2476_, 2);
v___x_3423_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3424_ = lean_st_ref_get(v___y_3418_);
v_env_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc_ref(v_env_3425_);
lean_dec(v___x_3424_);
v___x_3426_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3427_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3426_, v_env_3425_, v___x_3423_);
v___x_3428_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3429_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3427_, v___x_3428_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
lean_dec(v___x_3427_);
if (lean_obj_tag(v___x_3429_) == 0)
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3460_; 
v_a_3430_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3432_ = v___x_3429_;
v_isShared_3433_ = v_isSharedCheck_3460_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3429_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3460_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v_fst_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3458_; 
v_fst_3434_ = lean_ctor_get(v_a_3430_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v_a_3430_);
if (v_isSharedCheck_3458_ == 0)
{
lean_object* v_unused_3459_; 
v_unused_3459_ = lean_ctor_get(v_a_3430_, 1);
lean_dec(v_unused_3459_);
v___x_3436_ = v_a_3430_;
v_isShared_3437_ = v_isSharedCheck_3458_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_fst_3434_);
lean_dec(v_a_3430_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3458_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
if (lean_obj_tag(v_fst_3434_) == 0)
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3441_; 
lean_del_object(v___x_3432_);
v___x_3438_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3439_ = l_Lean_MessageData_ofName(v___x_3423_);
lean_inc_ref(v___x_3439_);
if (v_isShared_3437_ == 0)
{
lean_ctor_set_tag(v___x_3436_, 7);
lean_ctor_set(v___x_3436_, 1, v___x_3439_);
lean_ctor_set(v___x_3436_, 0, v___x_3438_);
v___x_3441_ = v___x_3436_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3438_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3442_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3441_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
v___x_3444_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3445_ = l_Lean_indentD(v___x_3444_);
v___x_3446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3443_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3446_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3448_);
lean_ctor_set(v___x_3449_, 1, v___x_3439_);
v___x_3450_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3451_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
return v___x_3452_;
}
}
else
{
lean_object* v_val_3454_; lean_object* v___x_3456_; 
lean_del_object(v___x_3436_);
lean_dec(v___x_3423_);
lean_dec(v_stx_2476_);
v_val_3454_ = lean_ctor_get(v_fst_3434_, 0);
lean_inc(v_val_3454_);
lean_dec_ref_known(v_fst_3434_, 1);
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v_val_3454_);
v___x_3456_ = v___x_3432_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_val_3454_);
v___x_3456_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
return v___x_3456_;
}
}
}
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3468_; 
lean_dec(v___x_3423_);
lean_dec(v_stx_2476_);
v_a_3461_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3463_ = v___x_3429_;
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3429_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
if (v_isShared_3464_ == 0)
{
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_a_3461_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
else
{
lean_object* v___x_3469_; lean_object* v___x_3470_; uint8_t v___x_3471_; 
v___x_3469_ = l_Lean_Syntax_getArg(v___x_3420_, v___x_3394_);
lean_dec(v___x_3420_);
v___x_3470_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3471_ = l_Lean_Syntax_isOfKind(v___x_3469_, v___x_3470_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v_env_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3472_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3473_ = lean_st_ref_get(v___y_3418_);
v_env_3474_ = lean_ctor_get(v___x_3473_, 0);
lean_inc_ref(v_env_3474_);
lean_dec(v___x_3473_);
v___x_3475_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3476_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3475_, v_env_3474_, v___x_3472_);
v___x_3477_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3478_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3476_, v___x_3477_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
lean_dec(v___x_3476_);
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3509_; 
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3478_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3481_ = v___x_3478_;
v_isShared_3482_ = v_isSharedCheck_3509_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3478_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3509_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v_fst_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3507_; 
v_fst_3483_ = lean_ctor_get(v_a_3479_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v_a_3479_);
if (v_isSharedCheck_3507_ == 0)
{
lean_object* v_unused_3508_; 
v_unused_3508_ = lean_ctor_get(v_a_3479_, 1);
lean_dec(v_unused_3508_);
v___x_3485_ = v_a_3479_;
v_isShared_3486_ = v_isSharedCheck_3507_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_fst_3483_);
lean_dec(v_a_3479_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3507_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
if (lean_obj_tag(v_fst_3483_) == 0)
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3490_; 
lean_del_object(v___x_3481_);
v___x_3487_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3488_ = l_Lean_MessageData_ofName(v___x_3472_);
lean_inc_ref(v___x_3488_);
if (v_isShared_3486_ == 0)
{
lean_ctor_set_tag(v___x_3485_, 7);
lean_ctor_set(v___x_3485_, 1, v___x_3488_);
lean_ctor_set(v___x_3485_, 0, v___x_3487_);
v___x_3490_ = v___x_3485_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___x_3487_);
lean_ctor_set(v_reuseFailAlloc_3502_, 1, v___x_3488_);
v___x_3490_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3491_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3490_);
lean_ctor_set(v___x_3492_, 1, v___x_3491_);
v___x_3493_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3494_ = l_Lean_indentD(v___x_3493_);
v___x_3495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3492_);
lean_ctor_set(v___x_3495_, 1, v___x_3494_);
v___x_3496_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3495_);
lean_ctor_set(v___x_3497_, 1, v___x_3496_);
v___x_3498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
lean_ctor_set(v___x_3498_, 1, v___x_3488_);
v___x_3499_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3498_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3500_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
return v___x_3501_;
}
}
else
{
lean_object* v_val_3503_; lean_object* v___x_3505_; 
lean_del_object(v___x_3485_);
lean_dec(v___x_3472_);
lean_dec(v_stx_2476_);
v_val_3503_ = lean_ctor_get(v_fst_3483_, 0);
lean_inc(v_val_3503_);
lean_dec_ref_known(v_fst_3483_, 1);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 0, v_val_3503_);
v___x_3505_ = v___x_3481_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_val_3503_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
}
else
{
lean_object* v_a_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3517_; 
lean_dec(v___x_3472_);
lean_dec(v_stx_2476_);
v_a_3510_ = lean_ctor_get(v___x_3478_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3478_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3512_ = v___x_3478_;
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_a_3510_);
lean_dec(v___x_3478_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3515_; 
if (v_isShared_3513_ == 0)
{
v___x_3515_ = v___x_3512_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_a_3510_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
else
{
v___y_3397_ = v___y_3413_;
v___y_3398_ = v___y_3414_;
v___y_3399_ = v___y_3415_;
v___y_3400_ = v___y_3416_;
v___y_3401_ = v___y_3417_;
v___y_3402_ = v___y_3418_;
goto v___jp_3396_;
}
}
}
else
{
lean_dec(v___x_3420_);
v___y_3397_ = v___y_3413_;
v___y_3398_ = v___y_3414_;
v___y_3399_ = v___y_3415_;
v___y_3400_ = v___y_3416_;
v___y_3401_ = v___y_3417_;
v___y_3402_ = v___y_3418_;
goto v___jp_3396_;
}
}
}
}
else
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v___y_3647_; lean_object* v___y_3648_; lean_object* v___y_3649_; lean_object* v___y_3650_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3753_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; uint8_t v___x_3906_; 
v___x_3616_ = lean_unsigned_to_nat(0u);
v___x_3617_ = lean_unsigned_to_nat(1u);
v___x_3902_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3617_);
v___x_3903_ = l_Lean_Syntax_getArgs(v___x_3902_);
lean_dec(v___x_3902_);
v___x_3904_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_3905_ = lean_array_get_size(v___x_3903_);
v___x_3906_ = lean_nat_dec_lt(v___x_3616_, v___x_3905_);
if (v___x_3906_ == 0)
{
lean_dec_ref(v___x_3903_);
v___y_3753_ = v___x_3904_;
goto v___jp_3752_;
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3908_; size_t v___x_3909_; size_t v___x_3910_; lean_object* v___x_3911_; lean_object* v_snd_3912_; 
v___x_3907_ = lean_box(v___x_3906_);
v___x_3908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3907_);
lean_ctor_set(v___x_3908_, 1, v___x_3904_);
v___x_3909_ = ((size_t)0ULL);
v___x_3910_ = lean_usize_of_nat(v___x_3905_);
v___x_3911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2808_, v___x_2806_, v___x_3903_, v___x_3909_, v___x_3910_, v___x_3908_);
lean_dec_ref(v___x_3903_);
v_snd_3912_ = lean_ctor_get(v___x_3911_, 1);
lean_inc(v_snd_3912_);
lean_dec_ref(v___x_3911_);
v___y_3753_ = v_snd_3912_;
goto v___jp_3752_;
}
v___jp_3618_:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v___x_3625_ = lean_unsigned_to_nat(5u);
v___x_3626_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3625_);
lean_dec(v_stx_2476_);
v___x_3627_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3626_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_, v___y_3624_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3645_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3630_ = v___x_3627_;
v_isShared_3631_ = v_isSharedCheck_3645_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_a_3628_);
lean_dec(v___x_3627_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3645_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
uint8_t v_returnsEarly_3632_; lean_object* v_reassigns_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3643_; 
v_returnsEarly_3632_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*2 + 2);
v_reassigns_3633_ = lean_ctor_get(v_a_3628_, 1);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_a_3628_);
if (v_isSharedCheck_3643_ == 0)
{
lean_object* v_unused_3644_; 
v_unused_3644_ = lean_ctor_get(v_a_3628_, 0);
lean_dec(v_unused_3644_);
v___x_3635_ = v_a_3628_;
v_isShared_3636_ = v_isSharedCheck_3643_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_reassigns_3633_);
lean_dec(v_a_3628_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3643_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
lean_ctor_set(v___x_3635_, 0, v___x_3617_);
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3617_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v_reassigns_3633_);
lean_ctor_set_uint8(v_reuseFailAlloc_3642_, sizeof(void*)*2 + 2, v_returnsEarly_3632_);
v___x_3638_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
lean_object* v___x_3640_; 
lean_ctor_set_uint8(v___x_3638_, sizeof(void*)*2, v___x_2806_);
lean_ctor_set_uint8(v___x_3638_, sizeof(void*)*2 + 1, v___x_2806_);
lean_ctor_set_uint8(v___x_3638_, sizeof(void*)*2 + 3, v___x_2806_);
if (v_isShared_3631_ == 0)
{
lean_ctor_set(v___x_3630_, 0, v___x_3638_);
v___x_3640_ = v___x_3630_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v___x_3638_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
}
else
{
return v___x_3627_;
}
}
v___jp_3646_:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; uint8_t v___x_3655_; 
v___x_3653_ = lean_unsigned_to_nat(3u);
v___x_3654_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3653_);
v___x_3655_ = l_Lean_Syntax_isNone(v___x_3654_);
if (v___x_3655_ == 0)
{
uint8_t v___x_3656_; 
lean_inc(v___x_3654_);
v___x_3656_ = l_Lean_Syntax_matchesNull(v___x_3654_, v___x_3617_);
if (v___x_3656_ == 0)
{
lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v_env_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
lean_dec(v___x_3654_);
lean_inc_n(v_stx_2476_, 2);
v___x_3657_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3658_ = lean_st_ref_get(v___y_3652_);
v_env_3659_ = lean_ctor_get(v___x_3658_, 0);
lean_inc_ref(v_env_3659_);
lean_dec(v___x_3658_);
v___x_3660_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3661_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3660_, v_env_3659_, v___x_3657_);
v___x_3662_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3663_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3661_, v___x_3662_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
lean_dec(v___x_3661_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3694_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3666_ = v___x_3663_;
v_isShared_3667_ = v_isSharedCheck_3694_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3663_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3694_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v_fst_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3692_; 
v_fst_3668_ = lean_ctor_get(v_a_3664_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v_a_3664_);
if (v_isSharedCheck_3692_ == 0)
{
lean_object* v_unused_3693_; 
v_unused_3693_ = lean_ctor_get(v_a_3664_, 1);
lean_dec(v_unused_3693_);
v___x_3670_ = v_a_3664_;
v_isShared_3671_ = v_isSharedCheck_3692_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_fst_3668_);
lean_dec(v_a_3664_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3692_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
if (lean_obj_tag(v_fst_3668_) == 0)
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3675_; 
lean_del_object(v___x_3666_);
v___x_3672_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3673_ = l_Lean_MessageData_ofName(v___x_3657_);
lean_inc_ref(v___x_3673_);
if (v_isShared_3671_ == 0)
{
lean_ctor_set_tag(v___x_3670_, 7);
lean_ctor_set(v___x_3670_, 1, v___x_3673_);
lean_ctor_set(v___x_3670_, 0, v___x_3672_);
v___x_3675_ = v___x_3670_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3672_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v___x_3673_);
v___x_3675_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3676_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3675_);
lean_ctor_set(v___x_3677_, 1, v___x_3676_);
v___x_3678_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3679_ = l_Lean_indentD(v___x_3678_);
v___x_3680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3677_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
v___x_3681_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3680_);
lean_ctor_set(v___x_3682_, 1, v___x_3681_);
v___x_3683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3682_);
lean_ctor_set(v___x_3683_, 1, v___x_3673_);
v___x_3684_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3683_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
v___x_3686_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3685_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
return v___x_3686_;
}
}
else
{
lean_object* v_val_3688_; lean_object* v___x_3690_; 
lean_del_object(v___x_3670_);
lean_dec(v___x_3657_);
lean_dec(v_stx_2476_);
v_val_3688_ = lean_ctor_get(v_fst_3668_, 0);
lean_inc(v_val_3688_);
lean_dec_ref_known(v_fst_3668_, 1);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 0, v_val_3688_);
v___x_3690_ = v___x_3666_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_val_3688_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
}
else
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3702_; 
lean_dec(v___x_3657_);
lean_dec(v_stx_2476_);
v_a_3695_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3702_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3697_ = v___x_3663_;
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v___x_3663_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3700_; 
if (v_isShared_3698_ == 0)
{
v___x_3700_ = v___x_3697_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v_a_3695_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
}
}
else
{
lean_object* v___x_3703_; lean_object* v___x_3704_; uint8_t v___x_3705_; 
v___x_3703_ = l_Lean_Syntax_getArg(v___x_3654_, v___x_3616_);
lean_dec(v___x_3654_);
v___x_3704_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3705_ = l_Lean_Syntax_isOfKind(v___x_3703_, v___x_3704_);
if (v___x_3705_ == 0)
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v_env_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3706_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3707_ = lean_st_ref_get(v___y_3652_);
v_env_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc_ref(v_env_3708_);
lean_dec(v___x_3707_);
v___x_3709_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3710_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3709_, v_env_3708_, v___x_3706_);
v___x_3711_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3712_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3710_, v___x_3711_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
lean_dec(v___x_3710_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3743_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3715_ = v___x_3712_;
v_isShared_3716_ = v_isSharedCheck_3743_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3712_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3743_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v_fst_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3741_; 
v_fst_3717_ = lean_ctor_get(v_a_3713_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v_a_3713_);
if (v_isSharedCheck_3741_ == 0)
{
lean_object* v_unused_3742_; 
v_unused_3742_ = lean_ctor_get(v_a_3713_, 1);
lean_dec(v_unused_3742_);
v___x_3719_ = v_a_3713_;
v_isShared_3720_ = v_isSharedCheck_3741_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_fst_3717_);
lean_dec(v_a_3713_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3741_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
if (lean_obj_tag(v_fst_3717_) == 0)
{
lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3724_; 
lean_del_object(v___x_3715_);
v___x_3721_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3722_ = l_Lean_MessageData_ofName(v___x_3706_);
lean_inc_ref(v___x_3722_);
if (v_isShared_3720_ == 0)
{
lean_ctor_set_tag(v___x_3719_, 7);
lean_ctor_set(v___x_3719_, 1, v___x_3722_);
lean_ctor_set(v___x_3719_, 0, v___x_3721_);
v___x_3724_ = v___x_3719_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v___x_3721_);
lean_ctor_set(v_reuseFailAlloc_3736_, 1, v___x_3722_);
v___x_3724_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; 
v___x_3725_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3724_);
lean_ctor_set(v___x_3726_, 1, v___x_3725_);
v___x_3727_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3728_ = l_Lean_indentD(v___x_3727_);
v___x_3729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3726_);
lean_ctor_set(v___x_3729_, 1, v___x_3728_);
v___x_3730_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
lean_ctor_set(v___x_3732_, 1, v___x_3722_);
v___x_3733_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3732_);
lean_ctor_set(v___x_3734_, 1, v___x_3733_);
v___x_3735_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3734_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
return v___x_3735_;
}
}
else
{
lean_object* v_val_3737_; lean_object* v___x_3739_; 
lean_del_object(v___x_3719_);
lean_dec(v___x_3706_);
lean_dec(v_stx_2476_);
v_val_3737_ = lean_ctor_get(v_fst_3717_, 0);
lean_inc(v_val_3737_);
lean_dec_ref_known(v_fst_3717_, 1);
if (v_isShared_3716_ == 0)
{
lean_ctor_set(v___x_3715_, 0, v_val_3737_);
v___x_3739_ = v___x_3715_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_val_3737_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
}
else
{
lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3751_; 
lean_dec(v___x_3706_);
lean_dec(v_stx_2476_);
v_a_3744_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3746_ = v___x_3712_;
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_dec(v___x_3712_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3749_; 
if (v_isShared_3747_ == 0)
{
v___x_3749_ = v___x_3746_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_a_3744_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
}
}
else
{
v___y_3619_ = v___y_3647_;
v___y_3620_ = v___y_3648_;
v___y_3621_ = v___y_3649_;
v___y_3622_ = v___y_3650_;
v___y_3623_ = v___y_3651_;
v___y_3624_ = v___y_3652_;
goto v___jp_3618_;
}
}
}
else
{
lean_dec(v___x_3654_);
v___y_3619_ = v___y_3647_;
v___y_3620_ = v___y_3648_;
v___y_3621_ = v___y_3649_;
v___y_3622_ = v___y_3650_;
v___y_3623_ = v___y_3651_;
v___y_3624_ = v___y_3652_;
goto v___jp_3618_;
}
}
v___jp_3752_:
{
size_t v_sz_3754_; size_t v___x_3755_; lean_object* v___x_3756_; 
v_sz_3754_ = lean_array_size(v___y_3753_);
v___x_3755_ = ((size_t)0ULL);
v___x_3756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_3754_, v___x_3755_, v___y_3753_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v_env_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3757_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3758_ = lean_st_ref_get(v_a_2482_);
v_env_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc_ref(v_env_3759_);
lean_dec(v___x_3758_);
v___x_3760_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3761_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3760_, v_env_3759_, v___x_3757_);
v___x_3762_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3763_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3761_, v___x_3762_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3761_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3794_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3766_ = v___x_3763_;
v_isShared_3767_ = v_isSharedCheck_3794_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3763_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3794_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v_fst_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3792_; 
v_fst_3768_ = lean_ctor_get(v_a_3764_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v_a_3764_);
if (v_isSharedCheck_3792_ == 0)
{
lean_object* v_unused_3793_; 
v_unused_3793_ = lean_ctor_get(v_a_3764_, 1);
lean_dec(v_unused_3793_);
v___x_3770_ = v_a_3764_;
v_isShared_3771_ = v_isSharedCheck_3792_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_fst_3768_);
lean_dec(v_a_3764_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3792_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
if (lean_obj_tag(v_fst_3768_) == 0)
{
lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3775_; 
lean_del_object(v___x_3766_);
v___x_3772_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3773_ = l_Lean_MessageData_ofName(v___x_3757_);
lean_inc_ref(v___x_3773_);
if (v_isShared_3771_ == 0)
{
lean_ctor_set_tag(v___x_3770_, 7);
lean_ctor_set(v___x_3770_, 1, v___x_3773_);
lean_ctor_set(v___x_3770_, 0, v___x_3772_);
v___x_3775_ = v___x_3770_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3772_);
lean_ctor_set(v_reuseFailAlloc_3787_, 1, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3776_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3775_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
v___x_3778_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3779_ = l_Lean_indentD(v___x_3778_);
v___x_3780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3777_);
lean_ctor_set(v___x_3780_, 1, v___x_3779_);
v___x_3781_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3780_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v___x_3783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3782_);
lean_ctor_set(v___x_3783_, 1, v___x_3773_);
v___x_3784_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3783_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3785_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3786_;
}
}
else
{
lean_object* v_val_3788_; lean_object* v___x_3790_; 
lean_del_object(v___x_3770_);
lean_dec(v___x_3757_);
lean_dec(v_stx_2476_);
v_val_3788_ = lean_ctor_get(v_fst_3768_, 0);
lean_inc(v_val_3788_);
lean_dec_ref_known(v_fst_3768_, 1);
if (v_isShared_3767_ == 0)
{
lean_ctor_set(v___x_3766_, 0, v_val_3788_);
v___x_3790_ = v___x_3766_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_val_3788_);
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
}
else
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
lean_dec(v___x_3757_);
lean_dec(v_stx_2476_);
v_a_3795_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___x_3763_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3763_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3800_; 
if (v_isShared_3798_ == 0)
{
v___x_3800_ = v___x_3797_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3795_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
}
else
{
lean_object* v___x_3803_; lean_object* v___x_3804_; uint8_t v___x_3805_; 
lean_dec_ref_known(v___x_3756_, 1);
v___x_3803_ = lean_unsigned_to_nat(2u);
v___x_3804_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3803_);
v___x_3805_ = l_Lean_Syntax_isNone(v___x_3804_);
if (v___x_3805_ == 0)
{
uint8_t v___x_3806_; 
lean_inc(v___x_3804_);
v___x_3806_ = l_Lean_Syntax_matchesNull(v___x_3804_, v___x_3617_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v_env_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; 
lean_dec(v___x_3804_);
lean_inc_n(v_stx_2476_, 2);
v___x_3807_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3808_ = lean_st_ref_get(v_a_2482_);
v_env_3809_ = lean_ctor_get(v___x_3808_, 0);
lean_inc_ref(v_env_3809_);
lean_dec(v___x_3808_);
v___x_3810_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3811_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3810_, v_env_3809_, v___x_3807_);
v___x_3812_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3813_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3811_, v___x_3812_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3811_);
if (lean_obj_tag(v___x_3813_) == 0)
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3844_; 
v_a_3814_ = lean_ctor_get(v___x_3813_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3816_ = v___x_3813_;
v_isShared_3817_ = v_isSharedCheck_3844_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3813_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3844_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v_fst_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3842_; 
v_fst_3818_ = lean_ctor_get(v_a_3814_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v_a_3814_);
if (v_isSharedCheck_3842_ == 0)
{
lean_object* v_unused_3843_; 
v_unused_3843_ = lean_ctor_get(v_a_3814_, 1);
lean_dec(v_unused_3843_);
v___x_3820_ = v_a_3814_;
v_isShared_3821_ = v_isSharedCheck_3842_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_fst_3818_);
lean_dec(v_a_3814_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3842_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
if (lean_obj_tag(v_fst_3818_) == 0)
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3825_; 
lean_del_object(v___x_3816_);
v___x_3822_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3823_ = l_Lean_MessageData_ofName(v___x_3807_);
lean_inc_ref(v___x_3823_);
if (v_isShared_3821_ == 0)
{
lean_ctor_set_tag(v___x_3820_, 7);
lean_ctor_set(v___x_3820_, 1, v___x_3823_);
lean_ctor_set(v___x_3820_, 0, v___x_3822_);
v___x_3825_ = v___x_3820_;
goto v_reusejp_3824_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v___x_3822_);
lean_ctor_set(v_reuseFailAlloc_3837_, 1, v___x_3823_);
v___x_3825_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3824_;
}
v_reusejp_3824_:
{
lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3826_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3827_, 0, v___x_3825_);
lean_ctor_set(v___x_3827_, 1, v___x_3826_);
v___x_3828_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3829_ = l_Lean_indentD(v___x_3828_);
v___x_3830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3827_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
v___x_3831_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3830_);
lean_ctor_set(v___x_3832_, 1, v___x_3831_);
v___x_3833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
lean_ctor_set(v___x_3833_, 1, v___x_3823_);
v___x_3834_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3833_);
lean_ctor_set(v___x_3835_, 1, v___x_3834_);
v___x_3836_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3835_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3836_;
}
}
else
{
lean_object* v_val_3838_; lean_object* v___x_3840_; 
lean_del_object(v___x_3820_);
lean_dec(v___x_3807_);
lean_dec(v_stx_2476_);
v_val_3838_ = lean_ctor_get(v_fst_3818_, 0);
lean_inc(v_val_3838_);
lean_dec_ref_known(v_fst_3818_, 1);
if (v_isShared_3817_ == 0)
{
lean_ctor_set(v___x_3816_, 0, v_val_3838_);
v___x_3840_ = v___x_3816_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_val_3838_);
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
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
lean_dec(v___x_3807_);
lean_dec(v_stx_2476_);
v_a_3845_ = lean_ctor_get(v___x_3813_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3813_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3813_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
else
{
lean_object* v___x_3853_; lean_object* v___x_3854_; uint8_t v___x_3855_; 
v___x_3853_ = l_Lean_Syntax_getArg(v___x_3804_, v___x_3616_);
lean_dec(v___x_3804_);
v___x_3854_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3855_ = l_Lean_Syntax_isOfKind(v___x_3853_, v___x_3854_);
if (v___x_3855_ == 0)
{
lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v_env_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3856_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3857_ = lean_st_ref_get(v_a_2482_);
v_env_3858_ = lean_ctor_get(v___x_3857_, 0);
lean_inc_ref(v_env_3858_);
lean_dec(v___x_3857_);
v___x_3859_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3860_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3859_, v_env_3858_, v___x_3856_);
v___x_3861_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3862_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3860_, v___x_3861_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3860_);
if (lean_obj_tag(v___x_3862_) == 0)
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3893_; 
v_a_3863_ = lean_ctor_get(v___x_3862_, 0);
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3865_ = v___x_3862_;
v_isShared_3866_ = v_isSharedCheck_3893_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3862_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3893_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v_fst_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3891_; 
v_fst_3867_ = lean_ctor_get(v_a_3863_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v_a_3863_);
if (v_isSharedCheck_3891_ == 0)
{
lean_object* v_unused_3892_; 
v_unused_3892_ = lean_ctor_get(v_a_3863_, 1);
lean_dec(v_unused_3892_);
v___x_3869_ = v_a_3863_;
v_isShared_3870_ = v_isSharedCheck_3891_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_fst_3867_);
lean_dec(v_a_3863_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3891_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
if (lean_obj_tag(v_fst_3867_) == 0)
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3874_; 
lean_del_object(v___x_3865_);
v___x_3871_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3872_ = l_Lean_MessageData_ofName(v___x_3856_);
lean_inc_ref(v___x_3872_);
if (v_isShared_3870_ == 0)
{
lean_ctor_set_tag(v___x_3869_, 7);
lean_ctor_set(v___x_3869_, 1, v___x_3872_);
lean_ctor_set(v___x_3869_, 0, v___x_3871_);
v___x_3874_ = v___x_3869_;
goto v_reusejp_3873_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v___x_3871_);
lean_ctor_set(v_reuseFailAlloc_3886_, 1, v___x_3872_);
v___x_3874_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3873_;
}
v_reusejp_3873_:
{
lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3875_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3874_);
lean_ctor_set(v___x_3876_, 1, v___x_3875_);
v___x_3877_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3878_ = l_Lean_indentD(v___x_3877_);
v___x_3879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3876_);
lean_ctor_set(v___x_3879_, 1, v___x_3878_);
v___x_3880_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3879_);
lean_ctor_set(v___x_3881_, 1, v___x_3880_);
v___x_3882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
lean_ctor_set(v___x_3882_, 1, v___x_3872_);
v___x_3883_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3882_);
lean_ctor_set(v___x_3884_, 1, v___x_3883_);
v___x_3885_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3884_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3885_;
}
}
else
{
lean_object* v_val_3887_; lean_object* v___x_3889_; 
lean_del_object(v___x_3869_);
lean_dec(v___x_3856_);
lean_dec(v_stx_2476_);
v_val_3887_ = lean_ctor_get(v_fst_3867_, 0);
lean_inc(v_val_3887_);
lean_dec_ref_known(v_fst_3867_, 1);
if (v_isShared_3866_ == 0)
{
lean_ctor_set(v___x_3865_, 0, v_val_3887_);
v___x_3889_ = v___x_3865_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v_val_3887_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
}
}
else
{
lean_object* v_a_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3901_; 
lean_dec(v___x_3856_);
lean_dec(v_stx_2476_);
v_a_3894_ = lean_ctor_get(v___x_3862_, 0);
v_isSharedCheck_3901_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3896_ = v___x_3862_;
v_isShared_3897_ = v_isSharedCheck_3901_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_a_3894_);
lean_dec(v___x_3862_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3901_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3899_; 
if (v_isShared_3897_ == 0)
{
v___x_3899_ = v___x_3896_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_a_3894_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
}
}
else
{
v___y_3647_ = v_a_2477_;
v___y_3648_ = v_a_2478_;
v___y_3649_ = v_a_2479_;
v___y_3650_ = v_a_2480_;
v___y_3651_ = v_a_2481_;
v___y_3652_ = v_a_2482_;
goto v___jp_3646_;
}
}
}
else
{
lean_dec(v___x_3804_);
v___y_3647_ = v_a_2477_;
v___y_3648_ = v_a_2478_;
v___y_3649_ = v_a_2479_;
v___y_3650_ = v_a_2480_;
v___y_3651_ = v_a_2481_;
v___y_3652_ = v_a_2482_;
goto v___jp_3646_;
}
}
}
}
v___jp_2809_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2814_, 0, v___y_2812_);
lean_ctor_set(v___x_2814_, 1, v___y_2810_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*2, v___x_2808_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*2 + 1, v___x_2808_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*2 + 2, v___y_2811_);
lean_ctor_set_uint8(v___x_2814_, sizeof(void*)*2 + 3, v___y_2813_);
v___x_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2815_, 0, v___x_2814_);
return v___x_2815_;
}
}
else
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v___x_3913_ = lean_unsigned_to_nat(1u);
v___x_3914_ = lean_unsigned_to_nat(3u);
v___x_3915_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3914_);
lean_dec(v_stx_2476_);
v___x_3916_ = l_Lean_NameSet_empty;
v___x_3917_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_3917_, 0, v___x_3913_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
lean_ctor_set_uint8(v___x_3917_, sizeof(void*)*2, v___x_2804_);
lean_ctor_set_uint8(v___x_3917_, sizeof(void*)*2 + 1, v___x_2804_);
lean_ctor_set_uint8(v___x_3917_, sizeof(void*)*2 + 2, v___x_2804_);
lean_ctor_set_uint8(v___x_3917_, sizeof(void*)*2 + 3, v___x_2804_);
v___x_3918_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3915_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3927_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3921_ = v___x_3918_;
v_isShared_3922_ = v_isSharedCheck_3927_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3918_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3927_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3923_; lean_object* v___x_3925_; 
v___x_3923_ = l_Lean_Elab_Do_ControlInfo_alternative(v___x_3917_, v_a_3919_);
if (v_isShared_3922_ == 0)
{
lean_ctor_set(v___x_3921_, 0, v___x_3923_);
v___x_3925_ = v___x_3921_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v___x_3923_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
}
else
{
lean_dec_ref_known(v___x_3917_, 2);
return v___x_3918_;
}
}
}
else
{
lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; size_t v_sz_3931_; size_t v___x_3932_; lean_object* v___x_3933_; 
v___x_3928_ = lean_unsigned_to_nat(4u);
v___x_3929_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3928_);
v___x_3930_ = l_Lean_Syntax_getArgs(v___x_3929_);
lean_dec(v___x_3929_);
v_sz_3931_ = lean_array_size(v___x_3930_);
v___x_3932_ = ((size_t)0ULL);
v___x_3933_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_3931_, v___x_3932_, v___x_3930_);
if (lean_obj_tag(v___x_3933_) == 0)
{
lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v_env_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; 
lean_inc_n(v_stx_2476_, 2);
v___x_3934_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_3935_ = lean_st_ref_get(v_a_2482_);
v_env_3936_ = lean_ctor_get(v___x_3935_, 0);
lean_inc_ref(v_env_3936_);
lean_dec(v___x_3935_);
v___x_3937_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3938_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3937_, v_env_3936_, v___x_3934_);
v___x_3939_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3940_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_3938_, v___x_3939_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_3938_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3971_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3943_ = v___x_3940_;
v_isShared_3944_ = v_isSharedCheck_3971_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___x_3940_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3971_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v_fst_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3969_; 
v_fst_3945_ = lean_ctor_get(v_a_3941_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v_a_3941_);
if (v_isSharedCheck_3969_ == 0)
{
lean_object* v_unused_3970_; 
v_unused_3970_ = lean_ctor_get(v_a_3941_, 1);
lean_dec(v_unused_3970_);
v___x_3947_ = v_a_3941_;
v_isShared_3948_ = v_isSharedCheck_3969_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_fst_3945_);
lean_dec(v_a_3941_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3969_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
if (lean_obj_tag(v_fst_3945_) == 0)
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3952_; 
lean_del_object(v___x_3943_);
v___x_3949_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_3950_ = l_Lean_MessageData_ofName(v___x_3934_);
lean_inc_ref(v___x_3950_);
if (v_isShared_3948_ == 0)
{
lean_ctor_set_tag(v___x_3947_, 7);
lean_ctor_set(v___x_3947_, 1, v___x_3950_);
lean_ctor_set(v___x_3947_, 0, v___x_3949_);
v___x_3952_ = v___x_3947_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v___x_3949_);
lean_ctor_set(v_reuseFailAlloc_3964_, 1, v___x_3950_);
v___x_3952_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3953_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3952_);
lean_ctor_set(v___x_3954_, 1, v___x_3953_);
v___x_3955_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_3956_ = l_Lean_indentD(v___x_3955_);
v___x_3957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3954_);
lean_ctor_set(v___x_3957_, 1, v___x_3956_);
v___x_3958_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3957_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
v___x_3960_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
lean_ctor_set(v___x_3960_, 1, v___x_3950_);
v___x_3961_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3960_);
lean_ctor_set(v___x_3962_, 1, v___x_3961_);
v___x_3963_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3962_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_3963_;
}
}
else
{
lean_object* v_val_3965_; lean_object* v___x_3967_; 
lean_del_object(v___x_3947_);
lean_dec(v___x_3934_);
lean_dec(v_stx_2476_);
v_val_3965_ = lean_ctor_get(v_fst_3945_, 0);
lean_inc(v_val_3965_);
lean_dec_ref_known(v_fst_3945_, 1);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v_val_3965_);
v___x_3967_ = v___x_3943_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_val_3965_);
v___x_3967_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
return v___x_3967_;
}
}
}
}
}
else
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3979_; 
lean_dec(v___x_3934_);
lean_dec(v_stx_2476_);
v_a_3972_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3974_ = v___x_3940_;
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v___x_3940_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3977_; 
if (v_isShared_3975_ == 0)
{
v___x_3977_ = v___x_3974_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_a_3972_);
v___x_3977_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
return v___x_3977_;
}
}
}
}
else
{
lean_object* v_val_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_4067_; 
v_val_3980_ = lean_ctor_get(v___x_3933_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_3933_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_3982_ = v___x_3933_;
v_isShared_3983_ = v_isSharedCheck_4067_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_val_3980_);
lean_dec(v___x_3933_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_4067_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v_elseSeq_x3f_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; lean_object* v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_3993_; lean_object* v___x_4010_; lean_object* v___x_4011_; uint8_t v___x_4012_; 
v___x_3984_ = lean_unsigned_to_nat(3u);
v___x_3985_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_3984_);
v___x_4010_ = lean_unsigned_to_nat(5u);
v___x_4011_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4010_);
v___x_4012_ = l_Lean_Syntax_isNone(v___x_4011_);
if (v___x_4012_ == 0)
{
lean_object* v___x_4013_; uint8_t v___x_4014_; 
v___x_4013_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_4011_);
v___x_4014_ = l_Lean_Syntax_matchesNull(v___x_4011_, v___x_4013_);
if (v___x_4014_ == 0)
{
lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v_env_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
lean_dec(v___x_4011_);
lean_dec(v___x_3985_);
lean_del_object(v___x_3982_);
lean_dec(v_val_3980_);
lean_inc_n(v_stx_2476_, 2);
v___x_4015_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4016_ = lean_st_ref_get(v_a_2482_);
v_env_4017_ = lean_ctor_get(v___x_4016_, 0);
lean_inc_ref(v_env_4017_);
lean_dec(v___x_4016_);
v___x_4018_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4019_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4018_, v_env_4017_, v___x_4015_);
v___x_4020_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4021_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4019_, v___x_4020_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4019_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4052_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4024_ = v___x_4021_;
v_isShared_4025_ = v_isSharedCheck_4052_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_a_4022_);
lean_dec(v___x_4021_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4052_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v_fst_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4050_; 
v_fst_4026_ = lean_ctor_get(v_a_4022_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v_a_4022_);
if (v_isSharedCheck_4050_ == 0)
{
lean_object* v_unused_4051_; 
v_unused_4051_ = lean_ctor_get(v_a_4022_, 1);
lean_dec(v_unused_4051_);
v___x_4028_ = v_a_4022_;
v_isShared_4029_ = v_isSharedCheck_4050_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_fst_4026_);
lean_dec(v_a_4022_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4050_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
if (lean_obj_tag(v_fst_4026_) == 0)
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4033_; 
lean_del_object(v___x_4024_);
v___x_4030_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4031_ = l_Lean_MessageData_ofName(v___x_4015_);
lean_inc_ref(v___x_4031_);
if (v_isShared_4029_ == 0)
{
lean_ctor_set_tag(v___x_4028_, 7);
lean_ctor_set(v___x_4028_, 1, v___x_4031_);
lean_ctor_set(v___x_4028_, 0, v___x_4030_);
v___x_4033_ = v___x_4028_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4030_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v___x_4031_);
v___x_4033_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v___x_4034_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4033_);
lean_ctor_set(v___x_4035_, 1, v___x_4034_);
v___x_4036_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4037_ = l_Lean_indentD(v___x_4036_);
v___x_4038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4035_);
lean_ctor_set(v___x_4038_, 1, v___x_4037_);
v___x_4039_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4038_);
lean_ctor_set(v___x_4040_, 1, v___x_4039_);
v___x_4041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4041_, 0, v___x_4040_);
lean_ctor_set(v___x_4041_, 1, v___x_4031_);
v___x_4042_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4041_);
lean_ctor_set(v___x_4043_, 1, v___x_4042_);
v___x_4044_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4043_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4044_;
}
}
else
{
lean_object* v_val_4046_; lean_object* v___x_4048_; 
lean_del_object(v___x_4028_);
lean_dec(v___x_4015_);
lean_dec(v_stx_2476_);
v_val_4046_ = lean_ctor_get(v_fst_4026_, 0);
lean_inc(v_val_4046_);
lean_dec_ref_known(v_fst_4026_, 1);
if (v_isShared_4025_ == 0)
{
lean_ctor_set(v___x_4024_, 0, v_val_4046_);
v___x_4048_ = v___x_4024_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_val_4046_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
lean_dec(v___x_4015_);
lean_dec(v_stx_2476_);
v_a_4053_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4021_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4021_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
else
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4064_; 
lean_dec(v_stx_2476_);
v___x_4061_ = lean_unsigned_to_nat(1u);
v___x_4062_ = l_Lean_Syntax_getArg(v___x_4011_, v___x_4061_);
lean_dec(v___x_4011_);
if (v_isShared_3983_ == 0)
{
lean_ctor_set(v___x_3982_, 0, v___x_4062_);
v___x_4064_ = v___x_3982_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v___x_4062_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
v_elseSeq_x3f_3987_ = v___x_4064_;
v___y_3988_ = v_a_2477_;
v___y_3989_ = v_a_2478_;
v___y_3990_ = v_a_2479_;
v___y_3991_ = v_a_2480_;
v___y_3992_ = v_a_2481_;
v___y_3993_ = v_a_2482_;
goto v___jp_3986_;
}
}
}
else
{
lean_object* v___x_4066_; 
lean_dec(v___x_4011_);
lean_del_object(v___x_3982_);
lean_dec(v_stx_2476_);
v___x_4066_ = lean_box(0);
v_elseSeq_x3f_3987_ = v___x_4066_;
v___y_3988_ = v_a_2477_;
v___y_3989_ = v_a_2478_;
v___y_3990_ = v_a_2479_;
v___y_3991_ = v_a_2480_;
v___y_3992_ = v_a_2481_;
v___y_3993_ = v_a_2482_;
goto v___jp_3986_;
}
v___jp_3986_:
{
lean_object* v___x_3994_; 
v___x_3994_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_elseSeq_x3f_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_);
if (lean_obj_tag(v___x_3994_) == 0)
{
lean_object* v_a_3995_; lean_object* v___x_3996_; size_t v_sz_3997_; lean_object* v___x_3998_; 
v_a_3995_ = lean_ctor_get(v___x_3994_, 0);
lean_inc(v_a_3995_);
lean_dec_ref_known(v___x_3994_, 1);
v___x_3996_ = l_Array_reverse___redArg(v_val_3980_);
v_sz_3997_ = lean_array_size(v___x_3996_);
v___x_3998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v___x_3996_, v_sz_3997_, v___x_3932_, v_a_3995_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_);
lean_dec_ref(v___x_3996_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v_a_3999_; lean_object* v___x_4000_; 
v_a_3999_ = lean_ctor_get(v___x_3998_, 0);
lean_inc(v_a_3999_);
lean_dec_ref_known(v___x_3998_, 1);
v___x_4000_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3985_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4009_; 
v_a_4001_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4003_ = v___x_4000_;
v_isShared_4004_ = v_isSharedCheck_4009_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v___x_4000_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4009_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4005_; lean_object* v___x_4007_; 
v___x_4005_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_4001_, v_a_3999_);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 0, v___x_4005_);
v___x_4007_ = v___x_4003_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_4005_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
else
{
lean_dec(v_a_3999_);
return v___x_4000_;
}
}
else
{
lean_dec(v___x_3985_);
return v___x_3998_;
}
}
else
{
lean_dec(v___x_3985_);
lean_dec(v_val_3980_);
return v___x_3994_;
}
}
}
}
}
}
else
{
lean_object* v___x_4068_; lean_object* v___y_4070_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v___y_4073_; lean_object* v___y_4074_; lean_object* v___y_4075_; lean_object* v___x_4132_; lean_object* v___y_4134_; lean_object* v___y_4135_; lean_object* v___y_4136_; lean_object* v___y_4137_; lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v___x_4239_; uint8_t v___x_4240_; 
v___x_4068_ = lean_unsigned_to_nat(0u);
v___x_4132_ = lean_unsigned_to_nat(1u);
v___x_4239_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4132_);
v___x_4240_ = l_Lean_Syntax_isNone(v___x_4239_);
if (v___x_4240_ == 0)
{
uint8_t v___x_4241_; 
lean_inc(v___x_4239_);
v___x_4241_ = l_Lean_Syntax_matchesNull(v___x_4239_, v___x_4132_);
if (v___x_4241_ == 0)
{
lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v_env_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
lean_dec(v___x_4239_);
lean_inc_n(v_stx_2476_, 2);
v___x_4242_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4243_ = lean_st_ref_get(v_a_2482_);
v_env_4244_ = lean_ctor_get(v___x_4243_, 0);
lean_inc_ref(v_env_4244_);
lean_dec(v___x_4243_);
v___x_4245_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4246_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4245_, v_env_4244_, v___x_4242_);
v___x_4247_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4248_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4246_, v___x_4247_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4246_);
if (lean_obj_tag(v___x_4248_) == 0)
{
lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4279_; 
v_a_4249_ = lean_ctor_get(v___x_4248_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4251_ = v___x_4248_;
v_isShared_4252_ = v_isSharedCheck_4279_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v___x_4248_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4279_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
lean_object* v_fst_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4277_; 
v_fst_4253_ = lean_ctor_get(v_a_4249_, 0);
v_isSharedCheck_4277_ = !lean_is_exclusive(v_a_4249_);
if (v_isSharedCheck_4277_ == 0)
{
lean_object* v_unused_4278_; 
v_unused_4278_ = lean_ctor_get(v_a_4249_, 1);
lean_dec(v_unused_4278_);
v___x_4255_ = v_a_4249_;
v_isShared_4256_ = v_isSharedCheck_4277_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_fst_4253_);
lean_dec(v_a_4249_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4277_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
if (lean_obj_tag(v_fst_4253_) == 0)
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4260_; 
lean_del_object(v___x_4251_);
v___x_4257_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4258_ = l_Lean_MessageData_ofName(v___x_4242_);
lean_inc_ref(v___x_4258_);
if (v_isShared_4256_ == 0)
{
lean_ctor_set_tag(v___x_4255_, 7);
lean_ctor_set(v___x_4255_, 1, v___x_4258_);
lean_ctor_set(v___x_4255_, 0, v___x_4257_);
v___x_4260_ = v___x_4255_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v___x_4257_);
lean_ctor_set(v_reuseFailAlloc_4272_, 1, v___x_4258_);
v___x_4260_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; 
v___x_4261_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4260_);
lean_ctor_set(v___x_4262_, 1, v___x_4261_);
v___x_4263_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4264_ = l_Lean_indentD(v___x_4263_);
v___x_4265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4262_);
lean_ctor_set(v___x_4265_, 1, v___x_4264_);
v___x_4266_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4265_);
lean_ctor_set(v___x_4267_, 1, v___x_4266_);
v___x_4268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4267_);
lean_ctor_set(v___x_4268_, 1, v___x_4258_);
v___x_4269_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4268_);
lean_ctor_set(v___x_4270_, 1, v___x_4269_);
v___x_4271_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4270_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4271_;
}
}
else
{
lean_object* v_val_4273_; lean_object* v___x_4275_; 
lean_del_object(v___x_4255_);
lean_dec(v___x_4242_);
lean_dec(v_stx_2476_);
v_val_4273_ = lean_ctor_get(v_fst_4253_, 0);
lean_inc(v_val_4273_);
lean_dec_ref_known(v_fst_4253_, 1);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 0, v_val_4273_);
v___x_4275_ = v___x_4251_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v_val_4273_);
v___x_4275_ = v_reuseFailAlloc_4276_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
return v___x_4275_;
}
}
}
}
}
else
{
lean_object* v_a_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4287_; 
lean_dec(v___x_4242_);
lean_dec(v_stx_2476_);
v_a_4280_ = lean_ctor_get(v___x_4248_, 0);
v_isSharedCheck_4287_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4287_ == 0)
{
v___x_4282_ = v___x_4248_;
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_a_4280_);
lean_dec(v___x_4248_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4285_; 
if (v_isShared_4283_ == 0)
{
v___x_4285_ = v___x_4282_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4286_; 
v_reuseFailAlloc_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4286_, 0, v_a_4280_);
v___x_4285_ = v_reuseFailAlloc_4286_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
return v___x_4285_;
}
}
}
}
else
{
lean_object* v___x_4288_; lean_object* v___x_4289_; uint8_t v___x_4290_; 
v___x_4288_ = l_Lean_Syntax_getArg(v___x_4239_, v___x_4068_);
lean_dec(v___x_4239_);
v___x_4289_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82));
v___x_4290_ = l_Lean_Syntax_isOfKind(v___x_4288_, v___x_4289_);
if (v___x_4290_ == 0)
{
lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v_env_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4291_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4292_ = lean_st_ref_get(v_a_2482_);
v_env_4293_ = lean_ctor_get(v___x_4292_, 0);
lean_inc_ref(v_env_4293_);
lean_dec(v___x_4292_);
v___x_4294_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4295_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4294_, v_env_4293_, v___x_4291_);
v___x_4296_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4297_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4295_, v___x_4296_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4295_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4328_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4328_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4328_ == 0)
{
v___x_4300_ = v___x_4297_;
v_isShared_4301_ = v_isSharedCheck_4328_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_a_4298_);
lean_dec(v___x_4297_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4328_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v_fst_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4326_; 
v_fst_4302_ = lean_ctor_get(v_a_4298_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v_a_4298_);
if (v_isSharedCheck_4326_ == 0)
{
lean_object* v_unused_4327_; 
v_unused_4327_ = lean_ctor_get(v_a_4298_, 1);
lean_dec(v_unused_4327_);
v___x_4304_ = v_a_4298_;
v_isShared_4305_ = v_isSharedCheck_4326_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_fst_4302_);
lean_dec(v_a_4298_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4326_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
if (lean_obj_tag(v_fst_4302_) == 0)
{
lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4309_; 
lean_del_object(v___x_4300_);
v___x_4306_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4307_ = l_Lean_MessageData_ofName(v___x_4291_);
lean_inc_ref(v___x_4307_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set_tag(v___x_4304_, 7);
lean_ctor_set(v___x_4304_, 1, v___x_4307_);
lean_ctor_set(v___x_4304_, 0, v___x_4306_);
v___x_4309_ = v___x_4304_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v___x_4306_);
lean_ctor_set(v_reuseFailAlloc_4321_, 1, v___x_4307_);
v___x_4309_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; 
v___x_4310_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4311_, 0, v___x_4309_);
lean_ctor_set(v___x_4311_, 1, v___x_4310_);
v___x_4312_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4313_ = l_Lean_indentD(v___x_4312_);
v___x_4314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4311_);
lean_ctor_set(v___x_4314_, 1, v___x_4313_);
v___x_4315_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4314_);
lean_ctor_set(v___x_4316_, 1, v___x_4315_);
v___x_4317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4317_, 0, v___x_4316_);
lean_ctor_set(v___x_4317_, 1, v___x_4307_);
v___x_4318_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4319_, 0, v___x_4317_);
lean_ctor_set(v___x_4319_, 1, v___x_4318_);
v___x_4320_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4319_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4320_;
}
}
else
{
lean_object* v_val_4322_; lean_object* v___x_4324_; 
lean_del_object(v___x_4304_);
lean_dec(v___x_4291_);
lean_dec(v_stx_2476_);
v_val_4322_ = lean_ctor_get(v_fst_4302_, 0);
lean_inc(v_val_4322_);
lean_dec_ref_known(v_fst_4302_, 1);
if (v_isShared_4301_ == 0)
{
lean_ctor_set(v___x_4300_, 0, v_val_4322_);
v___x_4324_ = v___x_4300_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_val_4322_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
}
}
else
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4336_; 
lean_dec(v___x_4291_);
lean_dec(v_stx_2476_);
v_a_4329_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4331_ = v___x_4297_;
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4297_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4334_; 
if (v_isShared_4332_ == 0)
{
v___x_4334_ = v___x_4331_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v_a_4329_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
return v___x_4334_;
}
}
}
}
else
{
v___y_4134_ = v_a_2477_;
v___y_4135_ = v_a_2478_;
v___y_4136_ = v_a_2479_;
v___y_4137_ = v_a_2480_;
v___y_4138_ = v_a_2481_;
v___y_4139_ = v_a_2482_;
goto v___jp_4133_;
}
}
}
else
{
lean_dec(v___x_4239_);
v___y_4134_ = v_a_2477_;
v___y_4135_ = v_a_2478_;
v___y_4136_ = v_a_2479_;
v___y_4137_ = v_a_2480_;
v___y_4138_ = v_a_2481_;
v___y_4139_ = v_a_2482_;
goto v___jp_4133_;
}
v___jp_4069_:
{
lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; uint8_t v___x_4079_; 
v___x_4076_ = lean_unsigned_to_nat(6u);
v___x_4077_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4076_);
v___x_4078_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_4077_);
v___x_4079_ = l_Lean_Syntax_isOfKind(v___x_4077_, v___x_4078_);
if (v___x_4079_ == 0)
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v_env_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
lean_dec(v___x_4077_);
lean_inc_n(v_stx_2476_, 2);
v___x_4080_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4081_ = lean_st_ref_get(v___y_4075_);
v_env_4082_ = lean_ctor_get(v___x_4081_, 0);
lean_inc_ref(v_env_4082_);
lean_dec(v___x_4081_);
v___x_4083_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4084_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4083_, v_env_4082_, v___x_4080_);
v___x_4085_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4086_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4084_, v___x_4085_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_);
lean_dec(v___x_4084_);
if (lean_obj_tag(v___x_4086_) == 0)
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4117_; 
v_a_4087_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4089_ = v___x_4086_;
v_isShared_4090_ = v_isSharedCheck_4117_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4086_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4117_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v_fst_4091_; lean_object* v___x_4093_; uint8_t v_isShared_4094_; uint8_t v_isSharedCheck_4115_; 
v_fst_4091_ = lean_ctor_get(v_a_4087_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v_a_4087_);
if (v_isSharedCheck_4115_ == 0)
{
lean_object* v_unused_4116_; 
v_unused_4116_ = lean_ctor_get(v_a_4087_, 1);
lean_dec(v_unused_4116_);
v___x_4093_ = v_a_4087_;
v_isShared_4094_ = v_isSharedCheck_4115_;
goto v_resetjp_4092_;
}
else
{
lean_inc(v_fst_4091_);
lean_dec(v_a_4087_);
v___x_4093_ = lean_box(0);
v_isShared_4094_ = v_isSharedCheck_4115_;
goto v_resetjp_4092_;
}
v_resetjp_4092_:
{
if (lean_obj_tag(v_fst_4091_) == 0)
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4098_; 
lean_del_object(v___x_4089_);
v___x_4095_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4096_ = l_Lean_MessageData_ofName(v___x_4080_);
lean_inc_ref(v___x_4096_);
if (v_isShared_4094_ == 0)
{
lean_ctor_set_tag(v___x_4093_, 7);
lean_ctor_set(v___x_4093_, 1, v___x_4096_);
lean_ctor_set(v___x_4093_, 0, v___x_4095_);
v___x_4098_ = v___x_4093_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4110_; 
v_reuseFailAlloc_4110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4110_, 0, v___x_4095_);
lean_ctor_set(v_reuseFailAlloc_4110_, 1, v___x_4096_);
v___x_4098_ = v_reuseFailAlloc_4110_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4099_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4098_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
v___x_4101_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4102_ = l_Lean_indentD(v___x_4101_);
v___x_4103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4100_);
lean_ctor_set(v___x_4103_, 1, v___x_4102_);
v___x_4104_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4103_);
lean_ctor_set(v___x_4105_, 1, v___x_4104_);
v___x_4106_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
lean_ctor_set(v___x_4106_, 1, v___x_4096_);
v___x_4107_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4108_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4106_);
lean_ctor_set(v___x_4108_, 1, v___x_4107_);
v___x_4109_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4108_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_);
return v___x_4109_;
}
}
else
{
lean_object* v_val_4111_; lean_object* v___x_4113_; 
lean_del_object(v___x_4093_);
lean_dec(v___x_4080_);
lean_dec(v_stx_2476_);
v_val_4111_ = lean_ctor_get(v_fst_4091_, 0);
lean_inc(v_val_4111_);
lean_dec_ref_known(v_fst_4091_, 1);
if (v_isShared_4090_ == 0)
{
lean_ctor_set(v___x_4089_, 0, v_val_4111_);
v___x_4113_ = v___x_4089_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_val_4111_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
return v___x_4113_;
}
}
}
}
}
else
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4125_; 
lean_dec(v___x_4080_);
lean_dec(v_stx_2476_);
v_a_4118_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4120_ = v___x_4086_;
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_4086_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4123_; 
if (v_isShared_4121_ == 0)
{
v___x_4123_ = v___x_4120_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_a_4118_);
v___x_4123_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
return v___x_4123_;
}
}
}
}
else
{
lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; size_t v_sz_4129_; size_t v___x_4130_; lean_object* v___x_4131_; 
lean_dec(v_stx_2476_);
v___x_4126_ = l_Lean_Syntax_getArg(v___x_4077_, v___x_4068_);
lean_dec(v___x_4077_);
v___x_4127_ = l_Lean_Syntax_getArgs(v___x_4126_);
lean_dec(v___x_4126_);
v___x_4128_ = l_Lean_Elab_Do_ControlInfo_empty;
v_sz_4129_ = lean_array_size(v___x_4127_);
v___x_4130_ = ((size_t)0ULL);
v___x_4131_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_2800_, v___x_4127_, v_sz_4129_, v___x_4130_, v___x_4128_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_);
lean_dec_ref(v___x_4127_);
return v___x_4131_;
}
}
v___jp_4133_:
{
lean_object* v___x_4140_; lean_object* v___x_4141_; uint8_t v___x_4142_; 
v___x_4140_ = lean_unsigned_to_nat(2u);
v___x_4141_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4140_);
v___x_4142_ = l_Lean_Syntax_isNone(v___x_4141_);
if (v___x_4142_ == 0)
{
uint8_t v___x_4143_; 
lean_inc(v___x_4141_);
v___x_4143_ = l_Lean_Syntax_matchesNull(v___x_4141_, v___x_4132_);
if (v___x_4143_ == 0)
{
lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v_env_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; 
lean_dec(v___x_4141_);
lean_inc_n(v_stx_2476_, 2);
v___x_4144_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4145_ = lean_st_ref_get(v___y_4139_);
v_env_4146_ = lean_ctor_get(v___x_4145_, 0);
lean_inc_ref(v_env_4146_);
lean_dec(v___x_4145_);
v___x_4147_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4148_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4147_, v_env_4146_, v___x_4144_);
v___x_4149_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4150_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4148_, v___x_4149_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
lean_dec(v___x_4148_);
if (lean_obj_tag(v___x_4150_) == 0)
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4181_; 
v_a_4151_ = lean_ctor_get(v___x_4150_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4150_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4153_ = v___x_4150_;
v_isShared_4154_ = v_isSharedCheck_4181_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4150_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4181_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v_fst_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4179_; 
v_fst_4155_ = lean_ctor_get(v_a_4151_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_a_4151_);
if (v_isSharedCheck_4179_ == 0)
{
lean_object* v_unused_4180_; 
v_unused_4180_ = lean_ctor_get(v_a_4151_, 1);
lean_dec(v_unused_4180_);
v___x_4157_ = v_a_4151_;
v_isShared_4158_ = v_isSharedCheck_4179_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_fst_4155_);
lean_dec(v_a_4151_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4179_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
if (lean_obj_tag(v_fst_4155_) == 0)
{
lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4162_; 
lean_del_object(v___x_4153_);
v___x_4159_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4160_ = l_Lean_MessageData_ofName(v___x_4144_);
lean_inc_ref(v___x_4160_);
if (v_isShared_4158_ == 0)
{
lean_ctor_set_tag(v___x_4157_, 7);
lean_ctor_set(v___x_4157_, 1, v___x_4160_);
lean_ctor_set(v___x_4157_, 0, v___x_4159_);
v___x_4162_ = v___x_4157_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v___x_4159_);
lean_ctor_set(v_reuseFailAlloc_4174_, 1, v___x_4160_);
v___x_4162_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4163_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4164_, 0, v___x_4162_);
lean_ctor_set(v___x_4164_, 1, v___x_4163_);
v___x_4165_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4166_ = l_Lean_indentD(v___x_4165_);
v___x_4167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4167_, 0, v___x_4164_);
lean_ctor_set(v___x_4167_, 1, v___x_4166_);
v___x_4168_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4167_);
lean_ctor_set(v___x_4169_, 1, v___x_4168_);
v___x_4170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
lean_ctor_set(v___x_4170_, 1, v___x_4160_);
v___x_4171_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4170_);
lean_ctor_set(v___x_4172_, 1, v___x_4171_);
v___x_4173_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4172_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
return v___x_4173_;
}
}
else
{
lean_object* v_val_4175_; lean_object* v___x_4177_; 
lean_del_object(v___x_4157_);
lean_dec(v___x_4144_);
lean_dec(v_stx_2476_);
v_val_4175_ = lean_ctor_get(v_fst_4155_, 0);
lean_inc(v_val_4175_);
lean_dec_ref_known(v_fst_4155_, 1);
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v_val_4175_);
v___x_4177_ = v___x_4153_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_val_4175_);
v___x_4177_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
return v___x_4177_;
}
}
}
}
}
else
{
lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4189_; 
lean_dec(v___x_4144_);
lean_dec(v_stx_2476_);
v_a_4182_ = lean_ctor_get(v___x_4150_, 0);
v_isSharedCheck_4189_ = !lean_is_exclusive(v___x_4150_);
if (v_isSharedCheck_4189_ == 0)
{
v___x_4184_ = v___x_4150_;
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v___x_4150_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4187_; 
if (v_isShared_4185_ == 0)
{
v___x_4187_ = v___x_4184_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_a_4182_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
return v___x_4187_;
}
}
}
}
else
{
lean_object* v___x_4190_; lean_object* v___x_4191_; uint8_t v___x_4192_; 
v___x_4190_ = l_Lean_Syntax_getArg(v___x_4141_, v___x_4068_);
lean_dec(v___x_4141_);
v___x_4191_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80));
v___x_4192_ = l_Lean_Syntax_isOfKind(v___x_4190_, v___x_4191_);
if (v___x_4192_ == 0)
{
lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v_env_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4193_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4194_ = lean_st_ref_get(v___y_4139_);
v_env_4195_ = lean_ctor_get(v___x_4194_, 0);
lean_inc_ref(v_env_4195_);
lean_dec(v___x_4194_);
v___x_4196_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4197_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4196_, v_env_4195_, v___x_4193_);
v___x_4198_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4199_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4197_, v___x_4198_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
lean_dec(v___x_4197_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4230_; 
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4202_ = v___x_4199_;
v_isShared_4203_ = v_isSharedCheck_4230_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v___x_4199_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4230_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v_fst_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4228_; 
v_fst_4204_ = lean_ctor_get(v_a_4200_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v_a_4200_);
if (v_isSharedCheck_4228_ == 0)
{
lean_object* v_unused_4229_; 
v_unused_4229_ = lean_ctor_get(v_a_4200_, 1);
lean_dec(v_unused_4229_);
v___x_4206_ = v_a_4200_;
v_isShared_4207_ = v_isSharedCheck_4228_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_fst_4204_);
lean_dec(v_a_4200_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4228_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
if (lean_obj_tag(v_fst_4204_) == 0)
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4211_; 
lean_del_object(v___x_4202_);
v___x_4208_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4209_ = l_Lean_MessageData_ofName(v___x_4193_);
lean_inc_ref(v___x_4209_);
if (v_isShared_4207_ == 0)
{
lean_ctor_set_tag(v___x_4206_, 7);
lean_ctor_set(v___x_4206_, 1, v___x_4209_);
lean_ctor_set(v___x_4206_, 0, v___x_4208_);
v___x_4211_ = v___x_4206_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v___x_4208_);
lean_ctor_set(v_reuseFailAlloc_4223_, 1, v___x_4209_);
v___x_4211_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; 
v___x_4212_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4213_, 0, v___x_4211_);
lean_ctor_set(v___x_4213_, 1, v___x_4212_);
v___x_4214_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4215_ = l_Lean_indentD(v___x_4214_);
v___x_4216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4213_);
lean_ctor_set(v___x_4216_, 1, v___x_4215_);
v___x_4217_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4216_);
lean_ctor_set(v___x_4218_, 1, v___x_4217_);
v___x_4219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4218_);
lean_ctor_set(v___x_4219_, 1, v___x_4209_);
v___x_4220_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4221_, 0, v___x_4219_);
lean_ctor_set(v___x_4221_, 1, v___x_4220_);
v___x_4222_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4221_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
return v___x_4222_;
}
}
else
{
lean_object* v_val_4224_; lean_object* v___x_4226_; 
lean_del_object(v___x_4206_);
lean_dec(v___x_4193_);
lean_dec(v_stx_2476_);
v_val_4224_ = lean_ctor_get(v_fst_4204_, 0);
lean_inc(v_val_4224_);
lean_dec_ref_known(v_fst_4204_, 1);
if (v_isShared_4203_ == 0)
{
lean_ctor_set(v___x_4202_, 0, v_val_4224_);
v___x_4226_ = v___x_4202_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_val_4224_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
}
}
else
{
lean_object* v_a_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4238_; 
lean_dec(v___x_4193_);
lean_dec(v_stx_2476_);
v_a_4231_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4233_ = v___x_4199_;
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_a_4231_);
lean_dec(v___x_4199_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
lean_object* v___x_4236_; 
if (v_isShared_4234_ == 0)
{
v___x_4236_ = v___x_4233_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_a_4231_);
v___x_4236_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
return v___x_4236_;
}
}
}
}
else
{
v___y_4070_ = v___y_4134_;
v___y_4071_ = v___y_4135_;
v___y_4072_ = v___y_4136_;
v___y_4073_ = v___y_4137_;
v___y_4074_ = v___y_4138_;
v___y_4075_ = v___y_4139_;
goto v___jp_4069_;
}
}
}
else
{
lean_dec(v___x_4141_);
v___y_4070_ = v___y_4134_;
v___y_4071_ = v___y_4135_;
v___y_4072_ = v___y_4136_;
v___y_4073_ = v___y_4137_;
v___y_4074_ = v___y_4138_;
v___y_4075_ = v___y_4139_;
goto v___jp_4069_;
}
}
}
}
else
{
lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; uint8_t v___x_4340_; 
v___x_4337_ = lean_unsigned_to_nat(0u);
v___x_4338_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4337_);
v___x_4339_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v___x_4338_);
v___x_4340_ = l_Lean_Syntax_isOfKind(v___x_4338_, v___x_4339_);
if (v___x_4340_ == 0)
{
lean_object* v___x_4341_; uint8_t v___x_4342_; 
v___x_4341_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v___x_4338_);
v___x_4342_ = l_Lean_Syntax_isOfKind(v___x_4338_, v___x_4341_);
if (v___x_4342_ == 0)
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v_env_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
lean_dec(v___x_4338_);
lean_inc_n(v_stx_2476_, 2);
v___x_4343_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4344_ = lean_st_ref_get(v_a_2482_);
v_env_4345_ = lean_ctor_get(v___x_4344_, 0);
lean_inc_ref(v_env_4345_);
lean_dec(v___x_4344_);
v___x_4346_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4347_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4346_, v_env_4345_, v___x_4343_);
v___x_4348_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4349_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4347_, v___x_4348_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4347_);
if (lean_obj_tag(v___x_4349_) == 0)
{
lean_object* v_a_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4380_; 
v_a_4350_ = lean_ctor_get(v___x_4349_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v___x_4349_);
if (v_isSharedCheck_4380_ == 0)
{
v___x_4352_ = v___x_4349_;
v_isShared_4353_ = v_isSharedCheck_4380_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_a_4350_);
lean_dec(v___x_4349_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4380_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v_fst_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4378_; 
v_fst_4354_ = lean_ctor_get(v_a_4350_, 0);
v_isSharedCheck_4378_ = !lean_is_exclusive(v_a_4350_);
if (v_isSharedCheck_4378_ == 0)
{
lean_object* v_unused_4379_; 
v_unused_4379_ = lean_ctor_get(v_a_4350_, 1);
lean_dec(v_unused_4379_);
v___x_4356_ = v_a_4350_;
v_isShared_4357_ = v_isSharedCheck_4378_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_fst_4354_);
lean_dec(v_a_4350_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4378_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
if (lean_obj_tag(v_fst_4354_) == 0)
{
lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4361_; 
lean_del_object(v___x_4352_);
v___x_4358_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4359_ = l_Lean_MessageData_ofName(v___x_4343_);
lean_inc_ref(v___x_4359_);
if (v_isShared_4357_ == 0)
{
lean_ctor_set_tag(v___x_4356_, 7);
lean_ctor_set(v___x_4356_, 1, v___x_4359_);
lean_ctor_set(v___x_4356_, 0, v___x_4358_);
v___x_4361_ = v___x_4356_;
goto v_reusejp_4360_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v___x_4358_);
lean_ctor_set(v_reuseFailAlloc_4373_, 1, v___x_4359_);
v___x_4361_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4360_;
}
v_reusejp_4360_:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4362_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4361_);
lean_ctor_set(v___x_4363_, 1, v___x_4362_);
v___x_4364_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4365_ = l_Lean_indentD(v___x_4364_);
v___x_4366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4366_, 0, v___x_4363_);
lean_ctor_set(v___x_4366_, 1, v___x_4365_);
v___x_4367_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4366_);
lean_ctor_set(v___x_4368_, 1, v___x_4367_);
v___x_4369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4369_, 0, v___x_4368_);
lean_ctor_set(v___x_4369_, 1, v___x_4359_);
v___x_4370_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4371_, 0, v___x_4369_);
lean_ctor_set(v___x_4371_, 1, v___x_4370_);
v___x_4372_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4371_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4372_;
}
}
else
{
lean_object* v_val_4374_; lean_object* v___x_4376_; 
lean_del_object(v___x_4356_);
lean_dec(v___x_4343_);
lean_dec(v_stx_2476_);
v_val_4374_ = lean_ctor_get(v_fst_4354_, 0);
lean_inc(v_val_4374_);
lean_dec_ref_known(v_fst_4354_, 1);
if (v_isShared_4353_ == 0)
{
lean_ctor_set(v___x_4352_, 0, v_val_4374_);
v___x_4376_ = v___x_4352_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4377_; 
v_reuseFailAlloc_4377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4377_, 0, v_val_4374_);
v___x_4376_ = v_reuseFailAlloc_4377_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
return v___x_4376_;
}
}
}
}
}
else
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4388_; 
lean_dec(v___x_4343_);
lean_dec(v_stx_2476_);
v_a_4381_ = lean_ctor_get(v___x_4349_, 0);
v_isSharedCheck_4388_ = !lean_is_exclusive(v___x_4349_);
if (v_isSharedCheck_4388_ == 0)
{
v___x_4383_ = v___x_4349_;
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4349_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4386_; 
if (v_isShared_4384_ == 0)
{
v___x_4386_ = v___x_4383_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4387_; 
v_reuseFailAlloc_4387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4387_, 0, v_a_4381_);
v___x_4386_ = v_reuseFailAlloc_4387_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
return v___x_4386_;
}
}
}
}
else
{
lean_object* v___x_4389_; 
lean_dec(v_stx_2476_);
v___x_4389_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2716_, v___x_4338_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4389_;
}
}
else
{
lean_object* v___x_4390_; 
lean_dec(v_stx_2476_);
v___x_4390_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2716_, v___x_4338_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4390_;
}
}
}
else
{
lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; uint8_t v___x_4394_; 
v___x_4391_ = lean_unsigned_to_nat(0u);
v___x_4392_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4391_);
v___x_4393_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84));
lean_inc(v___x_4392_);
v___x_4394_ = l_Lean_Syntax_isOfKind(v___x_4392_, v___x_4393_);
if (v___x_4394_ == 0)
{
lean_object* v___x_4395_; uint8_t v___x_4396_; 
v___x_4395_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86));
lean_inc(v___x_4392_);
v___x_4396_ = l_Lean_Syntax_isOfKind(v___x_4392_, v___x_4395_);
if (v___x_4396_ == 0)
{
lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v_env_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; 
lean_dec(v___x_4392_);
lean_inc_n(v_stx_2476_, 2);
v___x_4397_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4398_ = lean_st_ref_get(v_a_2482_);
v_env_4399_ = lean_ctor_get(v___x_4398_, 0);
lean_inc_ref(v_env_4399_);
lean_dec(v___x_4398_);
v___x_4400_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4401_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4400_, v_env_4399_, v___x_4397_);
v___x_4402_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4403_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4401_, v___x_4402_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4401_);
if (lean_obj_tag(v___x_4403_) == 0)
{
lean_object* v_a_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4434_; 
v_a_4404_ = lean_ctor_get(v___x_4403_, 0);
v_isSharedCheck_4434_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4434_ == 0)
{
v___x_4406_ = v___x_4403_;
v_isShared_4407_ = v_isSharedCheck_4434_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_a_4404_);
lean_dec(v___x_4403_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4434_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v_fst_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4432_; 
v_fst_4408_ = lean_ctor_get(v_a_4404_, 0);
v_isSharedCheck_4432_ = !lean_is_exclusive(v_a_4404_);
if (v_isSharedCheck_4432_ == 0)
{
lean_object* v_unused_4433_; 
v_unused_4433_ = lean_ctor_get(v_a_4404_, 1);
lean_dec(v_unused_4433_);
v___x_4410_ = v_a_4404_;
v_isShared_4411_ = v_isSharedCheck_4432_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_fst_4408_);
lean_dec(v_a_4404_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4432_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
if (lean_obj_tag(v_fst_4408_) == 0)
{
lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4415_; 
lean_del_object(v___x_4406_);
v___x_4412_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4413_ = l_Lean_MessageData_ofName(v___x_4397_);
lean_inc_ref(v___x_4413_);
if (v_isShared_4411_ == 0)
{
lean_ctor_set_tag(v___x_4410_, 7);
lean_ctor_set(v___x_4410_, 1, v___x_4413_);
lean_ctor_set(v___x_4410_, 0, v___x_4412_);
v___x_4415_ = v___x_4410_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4427_; 
v_reuseFailAlloc_4427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4427_, 0, v___x_4412_);
lean_ctor_set(v_reuseFailAlloc_4427_, 1, v___x_4413_);
v___x_4415_ = v_reuseFailAlloc_4427_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; 
v___x_4416_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4415_);
lean_ctor_set(v___x_4417_, 1, v___x_4416_);
v___x_4418_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4419_ = l_Lean_indentD(v___x_4418_);
v___x_4420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4420_, 0, v___x_4417_);
lean_ctor_set(v___x_4420_, 1, v___x_4419_);
v___x_4421_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4422_, 0, v___x_4420_);
lean_ctor_set(v___x_4422_, 1, v___x_4421_);
v___x_4423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4422_);
lean_ctor_set(v___x_4423_, 1, v___x_4413_);
v___x_4424_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4423_);
lean_ctor_set(v___x_4425_, 1, v___x_4424_);
v___x_4426_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4425_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4426_;
}
}
else
{
lean_object* v_val_4428_; lean_object* v___x_4430_; 
lean_del_object(v___x_4410_);
lean_dec(v___x_4397_);
lean_dec(v_stx_2476_);
v_val_4428_ = lean_ctor_get(v_fst_4408_, 0);
lean_inc(v_val_4428_);
lean_dec_ref_known(v_fst_4408_, 1);
if (v_isShared_4407_ == 0)
{
lean_ctor_set(v___x_4406_, 0, v_val_4428_);
v___x_4430_ = v___x_4406_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v_val_4428_);
v___x_4430_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
return v___x_4430_;
}
}
}
}
}
else
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4442_; 
lean_dec(v___x_4397_);
lean_dec(v_stx_2476_);
v_a_4435_ = lean_ctor_get(v___x_4403_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4437_ = v___x_4403_;
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4403_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4435_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
}
else
{
lean_object* v___x_4443_; 
lean_dec(v_stx_2476_);
v___x_4443_ = l_Lean_Elab_Do_getLetPatDeclVars(v___x_4392_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4392_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v_a_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v_a_4444_ = lean_ctor_get(v___x_4443_, 0);
lean_inc(v_a_4444_);
lean_dec_ref_known(v___x_4443_, 1);
v___x_4445_ = lean_box(0);
v___x_4446_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4444_, v___x_4445_, v___x_4445_, v___x_4445_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4446_;
}
else
{
lean_object* v_a_4447_; lean_object* v___x_4449_; uint8_t v_isShared_4450_; uint8_t v_isSharedCheck_4454_; 
v_a_4447_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4454_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4454_ == 0)
{
v___x_4449_ = v___x_4443_;
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
else
{
lean_inc(v_a_4447_);
lean_dec(v___x_4443_);
v___x_4449_ = lean_box(0);
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
v_resetjp_4448_:
{
lean_object* v___x_4452_; 
if (v_isShared_4450_ == 0)
{
v___x_4452_ = v___x_4449_;
goto v_reusejp_4451_;
}
else
{
lean_object* v_reuseFailAlloc_4453_; 
v_reuseFailAlloc_4453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4453_, 0, v_a_4447_);
v___x_4452_ = v_reuseFailAlloc_4453_;
goto v_reusejp_4451_;
}
v_reusejp_4451_:
{
return v___x_4452_;
}
}
}
}
}
else
{
lean_object* v___x_4455_; 
lean_dec(v_stx_2476_);
v___x_4455_ = l_Lean_Elab_Do_getLetIdDeclVars(v___x_4392_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4392_);
if (lean_obj_tag(v___x_4455_) == 0)
{
lean_object* v_a_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v_a_4456_ = lean_ctor_get(v___x_4455_, 0);
lean_inc(v_a_4456_);
lean_dec_ref_known(v___x_4455_, 1);
v___x_4457_ = lean_box(0);
v___x_4458_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4456_, v___x_4457_, v___x_4457_, v___x_4457_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4458_;
}
else
{
lean_object* v_a_4459_; lean_object* v___x_4461_; uint8_t v_isShared_4462_; uint8_t v_isSharedCheck_4466_; 
v_a_4459_ = lean_ctor_get(v___x_4455_, 0);
v_isSharedCheck_4466_ = !lean_is_exclusive(v___x_4455_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4461_ = v___x_4455_;
v_isShared_4462_ = v_isSharedCheck_4466_;
goto v_resetjp_4460_;
}
else
{
lean_inc(v_a_4459_);
lean_dec(v___x_4455_);
v___x_4461_ = lean_box(0);
v_isShared_4462_ = v_isSharedCheck_4466_;
goto v_resetjp_4460_;
}
v_resetjp_4460_:
{
lean_object* v___x_4464_; 
if (v_isShared_4462_ == 0)
{
v___x_4464_ = v___x_4461_;
goto v_reusejp_4463_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v_a_4459_);
v___x_4464_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4463_;
}
v_reusejp_4463_:
{
return v___x_4464_;
}
}
}
}
}
}
else
{
lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; uint8_t v___x_4470_; 
v___x_4467_ = lean_unsigned_to_nat(0u);
v___x_4468_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4467_);
v___x_4469_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88));
lean_inc(v___x_4468_);
v___x_4470_ = l_Lean_Syntax_isOfKind(v___x_4468_, v___x_4469_);
if (v___x_4470_ == 0)
{
lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v_env_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; 
lean_dec(v___x_4468_);
lean_inc_n(v_stx_2476_, 2);
v___x_4471_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4472_ = lean_st_ref_get(v_a_2482_);
v_env_4473_ = lean_ctor_get(v___x_4472_, 0);
lean_inc_ref(v_env_4473_);
lean_dec(v___x_4472_);
v___x_4474_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4475_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4474_, v_env_4473_, v___x_4471_);
v___x_4476_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4477_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4475_, v___x_4476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4475_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4508_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4480_ = v___x_4477_;
v_isShared_4481_ = v_isSharedCheck_4508_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4477_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4508_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v_fst_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4506_; 
v_fst_4482_ = lean_ctor_get(v_a_4478_, 0);
v_isSharedCheck_4506_ = !lean_is_exclusive(v_a_4478_);
if (v_isSharedCheck_4506_ == 0)
{
lean_object* v_unused_4507_; 
v_unused_4507_ = lean_ctor_get(v_a_4478_, 1);
lean_dec(v_unused_4507_);
v___x_4484_ = v_a_4478_;
v_isShared_4485_ = v_isSharedCheck_4506_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_fst_4482_);
lean_dec(v_a_4478_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4506_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
if (lean_obj_tag(v_fst_4482_) == 0)
{
lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4489_; 
lean_del_object(v___x_4480_);
v___x_4486_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4487_ = l_Lean_MessageData_ofName(v___x_4471_);
lean_inc_ref(v___x_4487_);
if (v_isShared_4485_ == 0)
{
lean_ctor_set_tag(v___x_4484_, 7);
lean_ctor_set(v___x_4484_, 1, v___x_4487_);
lean_ctor_set(v___x_4484_, 0, v___x_4486_);
v___x_4489_ = v___x_4484_;
goto v_reusejp_4488_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v___x_4486_);
lean_ctor_set(v_reuseFailAlloc_4501_, 1, v___x_4487_);
v___x_4489_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4488_;
}
v_reusejp_4488_:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v___x_4490_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4491_, 0, v___x_4489_);
lean_ctor_set(v___x_4491_, 1, v___x_4490_);
v___x_4492_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4493_ = l_Lean_indentD(v___x_4492_);
v___x_4494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4491_);
lean_ctor_set(v___x_4494_, 1, v___x_4493_);
v___x_4495_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4496_, 0, v___x_4494_);
lean_ctor_set(v___x_4496_, 1, v___x_4495_);
v___x_4497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4497_, 0, v___x_4496_);
lean_ctor_set(v___x_4497_, 1, v___x_4487_);
v___x_4498_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4497_);
lean_ctor_set(v___x_4499_, 1, v___x_4498_);
v___x_4500_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4499_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4500_;
}
}
else
{
lean_object* v_val_4502_; lean_object* v___x_4504_; 
lean_del_object(v___x_4484_);
lean_dec(v___x_4471_);
lean_dec(v_stx_2476_);
v_val_4502_ = lean_ctor_get(v_fst_4482_, 0);
lean_inc(v_val_4502_);
lean_dec_ref_known(v_fst_4482_, 1);
if (v_isShared_4481_ == 0)
{
lean_ctor_set(v___x_4480_, 0, v_val_4502_);
v___x_4504_ = v___x_4480_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_val_4502_);
v___x_4504_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
return v___x_4504_;
}
}
}
}
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4516_; 
lean_dec(v___x_4471_);
lean_dec(v_stx_2476_);
v_a_4509_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4511_ = v___x_4477_;
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___x_4477_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v_a_4509_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
}
else
{
lean_object* v___x_4517_; lean_object* v___y_4519_; lean_object* v___y_4520_; lean_object* v___y_4521_; lean_object* v___y_4522_; lean_object* v___y_4523_; lean_object* v___y_4524_; lean_object* v___x_4623_; uint8_t v___x_4624_; 
v___x_4517_ = lean_unsigned_to_nat(1u);
v___x_4623_ = l_Lean_Syntax_getArg(v___x_4468_, v___x_4517_);
lean_dec(v___x_4468_);
v___x_4624_ = l_Lean_Syntax_isNone(v___x_4623_);
if (v___x_4624_ == 0)
{
uint8_t v___x_4625_; 
v___x_4625_ = l_Lean_Syntax_matchesNull(v___x_4623_, v___x_4517_);
if (v___x_4625_ == 0)
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v_env_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4626_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4627_ = lean_st_ref_get(v_a_2482_);
v_env_4628_ = lean_ctor_get(v___x_4627_, 0);
lean_inc_ref(v_env_4628_);
lean_dec(v___x_4627_);
v___x_4629_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4630_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4629_, v_env_4628_, v___x_4626_);
v___x_4631_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4632_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4630_, v___x_4631_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4630_);
if (lean_obj_tag(v___x_4632_) == 0)
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4663_; 
v_a_4633_ = lean_ctor_get(v___x_4632_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4632_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4635_ = v___x_4632_;
v_isShared_4636_ = v_isSharedCheck_4663_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4632_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4663_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v_fst_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4661_; 
v_fst_4637_ = lean_ctor_get(v_a_4633_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v_a_4633_);
if (v_isSharedCheck_4661_ == 0)
{
lean_object* v_unused_4662_; 
v_unused_4662_ = lean_ctor_get(v_a_4633_, 1);
lean_dec(v_unused_4662_);
v___x_4639_ = v_a_4633_;
v_isShared_4640_ = v_isSharedCheck_4661_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_fst_4637_);
lean_dec(v_a_4633_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4661_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
if (lean_obj_tag(v_fst_4637_) == 0)
{
lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4644_; 
lean_del_object(v___x_4635_);
v___x_4641_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4642_ = l_Lean_MessageData_ofName(v___x_4626_);
lean_inc_ref(v___x_4642_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set_tag(v___x_4639_, 7);
lean_ctor_set(v___x_4639_, 1, v___x_4642_);
lean_ctor_set(v___x_4639_, 0, v___x_4641_);
v___x_4644_ = v___x_4639_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v___x_4641_);
lean_ctor_set(v_reuseFailAlloc_4656_, 1, v___x_4642_);
v___x_4644_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4645_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4646_, 0, v___x_4644_);
lean_ctor_set(v___x_4646_, 1, v___x_4645_);
v___x_4647_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4648_ = l_Lean_indentD(v___x_4647_);
v___x_4649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4646_);
lean_ctor_set(v___x_4649_, 1, v___x_4648_);
v___x_4650_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4651_, 0, v___x_4649_);
lean_ctor_set(v___x_4651_, 1, v___x_4650_);
v___x_4652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4652_, 0, v___x_4651_);
lean_ctor_set(v___x_4652_, 1, v___x_4642_);
v___x_4653_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4654_, 0, v___x_4652_);
lean_ctor_set(v___x_4654_, 1, v___x_4653_);
v___x_4655_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4654_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4655_;
}
}
else
{
lean_object* v_val_4657_; lean_object* v___x_4659_; 
lean_del_object(v___x_4639_);
lean_dec(v___x_4626_);
lean_dec(v_stx_2476_);
v_val_4657_ = lean_ctor_get(v_fst_4637_, 0);
lean_inc(v_val_4657_);
lean_dec_ref_known(v_fst_4637_, 1);
if (v_isShared_4636_ == 0)
{
lean_ctor_set(v___x_4635_, 0, v_val_4657_);
v___x_4659_ = v___x_4635_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v_val_4657_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
}
}
}
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
lean_dec(v___x_4626_);
lean_dec(v_stx_2476_);
v_a_4664_ = lean_ctor_get(v___x_4632_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4632_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4666_ = v___x_4632_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4632_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4664_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
}
else
{
v___y_4519_ = v_a_2477_;
v___y_4520_ = v_a_2478_;
v___y_4521_ = v_a_2479_;
v___y_4522_ = v_a_2480_;
v___y_4523_ = v_a_2481_;
v___y_4524_ = v_a_2482_;
goto v___jp_4518_;
}
}
else
{
lean_dec(v___x_4623_);
v___y_4519_ = v_a_2477_;
v___y_4520_ = v_a_2478_;
v___y_4521_ = v_a_2479_;
v___y_4522_ = v_a_2480_;
v___y_4523_ = v_a_2481_;
v___y_4524_ = v_a_2482_;
goto v___jp_4518_;
}
v___jp_4518_:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; uint8_t v___x_4527_; 
v___x_4525_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4517_);
v___x_4526_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90));
lean_inc(v___x_4525_);
v___x_4527_ = l_Lean_Syntax_isOfKind(v___x_4525_, v___x_4526_);
if (v___x_4527_ == 0)
{
lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v_env_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
lean_dec(v___x_4525_);
lean_inc_n(v_stx_2476_, 2);
v___x_4528_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4529_ = lean_st_ref_get(v___y_4524_);
v_env_4530_ = lean_ctor_get(v___x_4529_, 0);
lean_inc_ref(v_env_4530_);
lean_dec(v___x_4529_);
v___x_4531_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4532_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4531_, v_env_4530_, v___x_4528_);
v___x_4533_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4534_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4532_, v___x_4533_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_);
lean_dec(v___x_4532_);
if (lean_obj_tag(v___x_4534_) == 0)
{
lean_object* v_a_4535_; lean_object* v___x_4537_; uint8_t v_isShared_4538_; uint8_t v_isSharedCheck_4565_; 
v_a_4535_ = lean_ctor_get(v___x_4534_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4537_ = v___x_4534_;
v_isShared_4538_ = v_isSharedCheck_4565_;
goto v_resetjp_4536_;
}
else
{
lean_inc(v_a_4535_);
lean_dec(v___x_4534_);
v___x_4537_ = lean_box(0);
v_isShared_4538_ = v_isSharedCheck_4565_;
goto v_resetjp_4536_;
}
v_resetjp_4536_:
{
lean_object* v_fst_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4563_; 
v_fst_4539_ = lean_ctor_get(v_a_4535_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v_a_4535_);
if (v_isSharedCheck_4563_ == 0)
{
lean_object* v_unused_4564_; 
v_unused_4564_ = lean_ctor_get(v_a_4535_, 1);
lean_dec(v_unused_4564_);
v___x_4541_ = v_a_4535_;
v_isShared_4542_ = v_isSharedCheck_4563_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_fst_4539_);
lean_dec(v_a_4535_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4563_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
if (lean_obj_tag(v_fst_4539_) == 0)
{
lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4546_; 
lean_del_object(v___x_4537_);
v___x_4543_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4544_ = l_Lean_MessageData_ofName(v___x_4528_);
lean_inc_ref(v___x_4544_);
if (v_isShared_4542_ == 0)
{
lean_ctor_set_tag(v___x_4541_, 7);
lean_ctor_set(v___x_4541_, 1, v___x_4544_);
lean_ctor_set(v___x_4541_, 0, v___x_4543_);
v___x_4546_ = v___x_4541_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v___x_4543_);
lean_ctor_set(v_reuseFailAlloc_4558_, 1, v___x_4544_);
v___x_4546_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; 
v___x_4547_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4546_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4550_ = l_Lean_indentD(v___x_4549_);
v___x_4551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4551_, 0, v___x_4548_);
lean_ctor_set(v___x_4551_, 1, v___x_4550_);
v___x_4552_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4551_);
lean_ctor_set(v___x_4553_, 1, v___x_4552_);
v___x_4554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4554_, 0, v___x_4553_);
lean_ctor_set(v___x_4554_, 1, v___x_4544_);
v___x_4555_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4556_, 0, v___x_4554_);
lean_ctor_set(v___x_4556_, 1, v___x_4555_);
v___x_4557_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4556_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_);
return v___x_4557_;
}
}
else
{
lean_object* v_val_4559_; lean_object* v___x_4561_; 
lean_del_object(v___x_4541_);
lean_dec(v___x_4528_);
lean_dec(v_stx_2476_);
v_val_4559_ = lean_ctor_get(v_fst_4539_, 0);
lean_inc(v_val_4559_);
lean_dec_ref_known(v_fst_4539_, 1);
if (v_isShared_4538_ == 0)
{
lean_ctor_set(v___x_4537_, 0, v_val_4559_);
v___x_4561_ = v___x_4537_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_val_4559_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
}
}
}
else
{
lean_object* v_a_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4573_; 
lean_dec(v___x_4528_);
lean_dec(v_stx_2476_);
v_a_4566_ = lean_ctor_get(v___x_4534_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4568_ = v___x_4534_;
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_a_4566_);
lean_dec(v___x_4534_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4571_; 
if (v_isShared_4569_ == 0)
{
v___x_4571_ = v___x_4568_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v_a_4566_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
return v___x_4571_;
}
}
}
}
else
{
lean_object* v___x_4574_; uint8_t v___x_4575_; 
v___x_4574_ = l_Lean_Syntax_getArg(v___x_4525_, v___x_4517_);
lean_dec(v___x_4525_);
v___x_4575_ = l_Lean_Syntax_isNone(v___x_4574_);
if (v___x_4575_ == 0)
{
uint8_t v___x_4576_; 
v___x_4576_ = l_Lean_Syntax_matchesNull(v___x_4574_, v___x_4517_);
if (v___x_4576_ == 0)
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v_env_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4577_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4578_ = lean_st_ref_get(v___y_4524_);
v_env_4579_ = lean_ctor_get(v___x_4578_, 0);
lean_inc_ref(v_env_4579_);
lean_dec(v___x_4578_);
v___x_4580_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4581_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4580_, v_env_4579_, v___x_4577_);
v___x_4582_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4583_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4581_, v___x_4582_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_);
lean_dec(v___x_4581_);
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4614_; 
v_a_4584_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4586_ = v___x_4583_;
v_isShared_4587_ = v_isSharedCheck_4614_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_a_4584_);
lean_dec(v___x_4583_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4614_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v_fst_4588_; lean_object* v___x_4590_; uint8_t v_isShared_4591_; uint8_t v_isSharedCheck_4612_; 
v_fst_4588_ = lean_ctor_get(v_a_4584_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v_a_4584_);
if (v_isSharedCheck_4612_ == 0)
{
lean_object* v_unused_4613_; 
v_unused_4613_ = lean_ctor_get(v_a_4584_, 1);
lean_dec(v_unused_4613_);
v___x_4590_ = v_a_4584_;
v_isShared_4591_ = v_isSharedCheck_4612_;
goto v_resetjp_4589_;
}
else
{
lean_inc(v_fst_4588_);
lean_dec(v_a_4584_);
v___x_4590_ = lean_box(0);
v_isShared_4591_ = v_isSharedCheck_4612_;
goto v_resetjp_4589_;
}
v_resetjp_4589_:
{
if (lean_obj_tag(v_fst_4588_) == 0)
{
lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4595_; 
lean_del_object(v___x_4586_);
v___x_4592_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4593_ = l_Lean_MessageData_ofName(v___x_4577_);
lean_inc_ref(v___x_4593_);
if (v_isShared_4591_ == 0)
{
lean_ctor_set_tag(v___x_4590_, 7);
lean_ctor_set(v___x_4590_, 1, v___x_4593_);
lean_ctor_set(v___x_4590_, 0, v___x_4592_);
v___x_4595_ = v___x_4590_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4607_; 
v_reuseFailAlloc_4607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4607_, 0, v___x_4592_);
lean_ctor_set(v_reuseFailAlloc_4607_, 1, v___x_4593_);
v___x_4595_ = v_reuseFailAlloc_4607_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4596_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4597_, 0, v___x_4595_);
lean_ctor_set(v___x_4597_, 1, v___x_4596_);
v___x_4598_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4599_ = l_Lean_indentD(v___x_4598_);
v___x_4600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4597_);
lean_ctor_set(v___x_4600_, 1, v___x_4599_);
v___x_4601_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4600_);
lean_ctor_set(v___x_4602_, 1, v___x_4601_);
v___x_4603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4603_, 0, v___x_4602_);
lean_ctor_set(v___x_4603_, 1, v___x_4593_);
v___x_4604_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4605_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4605_, 0, v___x_4603_);
lean_ctor_set(v___x_4605_, 1, v___x_4604_);
v___x_4606_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4605_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_);
return v___x_4606_;
}
}
else
{
lean_object* v_val_4608_; lean_object* v___x_4610_; 
lean_del_object(v___x_4590_);
lean_dec(v___x_4577_);
lean_dec(v_stx_2476_);
v_val_4608_ = lean_ctor_get(v_fst_4588_, 0);
lean_inc(v_val_4608_);
lean_dec_ref_known(v_fst_4588_, 1);
if (v_isShared_4587_ == 0)
{
lean_ctor_set(v___x_4586_, 0, v_val_4608_);
v___x_4610_ = v___x_4586_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_val_4608_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
}
}
else
{
lean_object* v_a_4615_; lean_object* v___x_4617_; uint8_t v_isShared_4618_; uint8_t v_isSharedCheck_4622_; 
lean_dec(v___x_4577_);
lean_dec(v_stx_2476_);
v_a_4615_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4622_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4622_ == 0)
{
v___x_4617_ = v___x_4583_;
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
else
{
lean_inc(v_a_4615_);
lean_dec(v___x_4583_);
v___x_4617_ = lean_box(0);
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
v_resetjp_4616_:
{
lean_object* v___x_4620_; 
if (v_isShared_4618_ == 0)
{
v___x_4620_ = v___x_4617_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v_a_4615_);
v___x_4620_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
return v___x_4620_;
}
}
}
}
else
{
lean_dec(v_stx_2476_);
goto v___jp_2502_;
}
}
else
{
lean_dec(v___x_4574_);
lean_dec(v_stx_2476_);
goto v___jp_2502_;
}
}
}
}
}
}
else
{
lean_object* v___x_4672_; lean_object* v___x_4673_; uint8_t v___x_4674_; 
v___x_4672_ = lean_unsigned_to_nat(1u);
v___x_4673_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4672_);
v___x_4674_ = l_Lean_Syntax_isNone(v___x_4673_);
if (v___x_4674_ == 0)
{
uint8_t v___x_4675_; 
v___x_4675_ = l_Lean_Syntax_matchesNull(v___x_4673_, v___x_4672_);
if (v___x_4675_ == 0)
{
lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v_env_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4676_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4677_ = lean_st_ref_get(v_a_2482_);
v_env_4678_ = lean_ctor_get(v___x_4677_, 0);
lean_inc_ref(v_env_4678_);
lean_dec(v___x_4677_);
v___x_4679_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4680_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4679_, v_env_4678_, v___x_4676_);
v___x_4681_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4682_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4680_, v___x_4681_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4680_);
if (lean_obj_tag(v___x_4682_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4713_; 
v_a_4683_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4685_ = v___x_4682_;
v_isShared_4686_ = v_isSharedCheck_4713_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_a_4683_);
lean_dec(v___x_4682_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4713_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v_fst_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4711_; 
v_fst_4687_ = lean_ctor_get(v_a_4683_, 0);
v_isSharedCheck_4711_ = !lean_is_exclusive(v_a_4683_);
if (v_isSharedCheck_4711_ == 0)
{
lean_object* v_unused_4712_; 
v_unused_4712_ = lean_ctor_get(v_a_4683_, 1);
lean_dec(v_unused_4712_);
v___x_4689_ = v_a_4683_;
v_isShared_4690_ = v_isSharedCheck_4711_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_fst_4687_);
lean_dec(v_a_4683_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4711_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
if (lean_obj_tag(v_fst_4687_) == 0)
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4694_; 
lean_del_object(v___x_4685_);
v___x_4691_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4692_ = l_Lean_MessageData_ofName(v___x_4676_);
lean_inc_ref(v___x_4692_);
if (v_isShared_4690_ == 0)
{
lean_ctor_set_tag(v___x_4689_, 7);
lean_ctor_set(v___x_4689_, 1, v___x_4692_);
lean_ctor_set(v___x_4689_, 0, v___x_4691_);
v___x_4694_ = v___x_4689_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v___x_4691_);
lean_ctor_set(v_reuseFailAlloc_4706_, 1, v___x_4692_);
v___x_4694_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4695_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4696_, 0, v___x_4694_);
lean_ctor_set(v___x_4696_, 1, v___x_4695_);
v___x_4697_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4698_ = l_Lean_indentD(v___x_4697_);
v___x_4699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4696_);
lean_ctor_set(v___x_4699_, 1, v___x_4698_);
v___x_4700_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4701_, 0, v___x_4699_);
lean_ctor_set(v___x_4701_, 1, v___x_4700_);
v___x_4702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
lean_ctor_set(v___x_4702_, 1, v___x_4692_);
v___x_4703_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4704_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4702_);
lean_ctor_set(v___x_4704_, 1, v___x_4703_);
v___x_4705_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4704_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4705_;
}
}
else
{
lean_object* v_val_4707_; lean_object* v___x_4709_; 
lean_del_object(v___x_4689_);
lean_dec(v___x_4676_);
lean_dec(v_stx_2476_);
v_val_4707_ = lean_ctor_get(v_fst_4687_, 0);
lean_inc(v_val_4707_);
lean_dec_ref_known(v_fst_4687_, 1);
if (v_isShared_4686_ == 0)
{
lean_ctor_set(v___x_4685_, 0, v_val_4707_);
v___x_4709_ = v___x_4685_;
goto v_reusejp_4708_;
}
else
{
lean_object* v_reuseFailAlloc_4710_; 
v_reuseFailAlloc_4710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4710_, 0, v_val_4707_);
v___x_4709_ = v_reuseFailAlloc_4710_;
goto v_reusejp_4708_;
}
v_reusejp_4708_:
{
return v___x_4709_;
}
}
}
}
}
else
{
lean_object* v_a_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4721_; 
lean_dec(v___x_4676_);
lean_dec(v_stx_2476_);
v_a_4714_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4721_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4721_ == 0)
{
v___x_4716_ = v___x_4682_;
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_a_4714_);
lean_dec(v___x_4682_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v___x_4719_; 
if (v_isShared_4717_ == 0)
{
v___x_4719_ = v___x_4716_;
goto v_reusejp_4718_;
}
else
{
lean_object* v_reuseFailAlloc_4720_; 
v_reuseFailAlloc_4720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4720_, 0, v_a_4714_);
v___x_4719_ = v_reuseFailAlloc_4720_;
goto v_reusejp_4718_;
}
v_reusejp_4718_:
{
return v___x_4719_;
}
}
}
}
else
{
v___y_2734_ = v_a_2477_;
v___y_2735_ = v_a_2478_;
v___y_2736_ = v_a_2479_;
v___y_2737_ = v_a_2480_;
v___y_2738_ = v_a_2481_;
v___y_2739_ = v_a_2482_;
goto v___jp_2733_;
}
}
else
{
lean_dec(v___x_4673_);
v___y_2734_ = v_a_2477_;
v___y_2735_ = v_a_2478_;
v___y_2736_ = v_a_2479_;
v___y_2737_ = v_a_2480_;
v___y_2738_ = v_a_2481_;
v___y_2739_ = v_a_2482_;
goto v___jp_2733_;
}
}
}
else
{
lean_object* v___x_4722_; lean_object* v___x_4723_; uint8_t v___x_4724_; 
v___x_4722_ = lean_unsigned_to_nat(1u);
v___x_4723_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4722_);
v___x_4724_ = l_Lean_Syntax_isNone(v___x_4723_);
if (v___x_4724_ == 0)
{
uint8_t v___x_4725_; 
v___x_4725_ = l_Lean_Syntax_matchesNull(v___x_4723_, v___x_4722_);
if (v___x_4725_ == 0)
{
lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v_env_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4726_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4727_ = lean_st_ref_get(v_a_2482_);
v_env_4728_ = lean_ctor_get(v___x_4727_, 0);
lean_inc_ref(v_env_4728_);
lean_dec(v___x_4727_);
v___x_4729_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4730_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4729_, v_env_4728_, v___x_4726_);
v___x_4731_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4732_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4730_, v___x_4731_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4730_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4763_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4735_ = v___x_4732_;
v_isShared_4736_ = v_isSharedCheck_4763_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v___x_4732_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4763_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v_fst_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4761_; 
v_fst_4737_ = lean_ctor_get(v_a_4733_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v_a_4733_);
if (v_isSharedCheck_4761_ == 0)
{
lean_object* v_unused_4762_; 
v_unused_4762_ = lean_ctor_get(v_a_4733_, 1);
lean_dec(v_unused_4762_);
v___x_4739_ = v_a_4733_;
v_isShared_4740_ = v_isSharedCheck_4761_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_fst_4737_);
lean_dec(v_a_4733_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4761_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
if (lean_obj_tag(v_fst_4737_) == 0)
{
lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4744_; 
lean_del_object(v___x_4735_);
v___x_4741_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4742_ = l_Lean_MessageData_ofName(v___x_4726_);
lean_inc_ref(v___x_4742_);
if (v_isShared_4740_ == 0)
{
lean_ctor_set_tag(v___x_4739_, 7);
lean_ctor_set(v___x_4739_, 1, v___x_4742_);
lean_ctor_set(v___x_4739_, 0, v___x_4741_);
v___x_4744_ = v___x_4739_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v___x_4741_);
lean_ctor_set(v_reuseFailAlloc_4756_, 1, v___x_4742_);
v___x_4744_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4745_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4746_, 0, v___x_4744_);
lean_ctor_set(v___x_4746_, 1, v___x_4745_);
v___x_4747_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4748_ = l_Lean_indentD(v___x_4747_);
v___x_4749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4749_, 0, v___x_4746_);
lean_ctor_set(v___x_4749_, 1, v___x_4748_);
v___x_4750_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4749_);
lean_ctor_set(v___x_4751_, 1, v___x_4750_);
v___x_4752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4752_, 0, v___x_4751_);
lean_ctor_set(v___x_4752_, 1, v___x_4742_);
v___x_4753_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4754_, 0, v___x_4752_);
lean_ctor_set(v___x_4754_, 1, v___x_4753_);
v___x_4755_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4754_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4755_;
}
}
else
{
lean_object* v_val_4757_; lean_object* v___x_4759_; 
lean_del_object(v___x_4739_);
lean_dec(v___x_4726_);
lean_dec(v_stx_2476_);
v_val_4757_ = lean_ctor_get(v_fst_4737_, 0);
lean_inc(v_val_4757_);
lean_dec_ref_known(v_fst_4737_, 1);
if (v_isShared_4736_ == 0)
{
lean_ctor_set(v___x_4735_, 0, v_val_4757_);
v___x_4759_ = v___x_4735_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_val_4757_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
}
else
{
lean_object* v_a_4764_; lean_object* v___x_4766_; uint8_t v_isShared_4767_; uint8_t v_isSharedCheck_4771_; 
lean_dec(v___x_4726_);
lean_dec(v_stx_2476_);
v_a_4764_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4766_ = v___x_4732_;
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
else
{
lean_inc(v_a_4764_);
lean_dec(v___x_4732_);
v___x_4766_ = lean_box(0);
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
v_resetjp_4765_:
{
lean_object* v___x_4769_; 
if (v_isShared_4767_ == 0)
{
v___x_4769_ = v___x_4766_;
goto v_reusejp_4768_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_a_4764_);
v___x_4769_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4768_;
}
v_reusejp_4768_:
{
return v___x_4769_;
}
}
}
}
else
{
v___y_2533_ = v_a_2477_;
v___y_2534_ = v_a_2478_;
v___y_2535_ = v_a_2479_;
v___y_2536_ = v_a_2480_;
v___y_2537_ = v_a_2481_;
v___y_2538_ = v_a_2482_;
goto v___jp_2532_;
}
}
else
{
lean_dec(v___x_4723_);
v___y_2533_ = v_a_2477_;
v___y_2534_ = v_a_2478_;
v___y_2535_ = v_a_2479_;
v___y_2536_ = v_a_2480_;
v___y_2537_ = v_a_2481_;
v___y_2538_ = v_a_2482_;
goto v___jp_2532_;
}
}
v___jp_2733_:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2740_ = lean_unsigned_to_nat(2u);
v___x_2741_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2740_);
v___x_2742_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2743_ = l_Lean_Syntax_isOfKind(v___x_2741_, v___x_2742_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v_env_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
lean_inc_n(v_stx_2476_, 2);
v___x_2744_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_2745_ = lean_st_ref_get(v___y_2739_);
v_env_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc_ref(v_env_2746_);
lean_dec(v___x_2745_);
v___x_2747_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2748_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2747_, v_env_2746_, v___x_2744_);
v___x_2749_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2750_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_2748_, v___x_2749_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
lean_dec(v___x_2748_);
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2781_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2753_ = v___x_2750_;
v_isShared_2754_ = v_isSharedCheck_2781_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2750_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2781_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v_fst_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2779_; 
v_fst_2755_ = lean_ctor_get(v_a_2751_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v_a_2751_);
if (v_isSharedCheck_2779_ == 0)
{
lean_object* v_unused_2780_; 
v_unused_2780_ = lean_ctor_get(v_a_2751_, 1);
lean_dec(v_unused_2780_);
v___x_2757_ = v_a_2751_;
v_isShared_2758_ = v_isSharedCheck_2779_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_fst_2755_);
lean_dec(v_a_2751_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2779_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
if (lean_obj_tag(v_fst_2755_) == 0)
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2762_; 
lean_del_object(v___x_2753_);
v___x_2759_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2760_ = l_Lean_MessageData_ofName(v___x_2744_);
lean_inc_ref(v___x_2760_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 7);
lean_ctor_set(v___x_2757_, 1, v___x_2760_);
lean_ctor_set(v___x_2757_, 0, v___x_2759_);
v___x_2762_ = v___x_2757_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v___x_2759_);
lean_ctor_set(v_reuseFailAlloc_2774_, 1, v___x_2760_);
v___x_2762_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2763_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2762_);
lean_ctor_set(v___x_2764_, 1, v___x_2763_);
v___x_2765_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_2766_ = l_Lean_indentD(v___x_2765_);
v___x_2767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2764_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2769_);
lean_ctor_set(v___x_2770_, 1, v___x_2760_);
v___x_2771_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2770_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2772_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
return v___x_2773_;
}
}
else
{
lean_object* v_val_2775_; lean_object* v___x_2777_; 
lean_del_object(v___x_2757_);
lean_dec(v___x_2744_);
lean_dec(v_stx_2476_);
v_val_2775_ = lean_ctor_get(v_fst_2755_, 0);
lean_inc(v_val_2775_);
lean_dec_ref_known(v_fst_2755_, 1);
if (v_isShared_2754_ == 0)
{
lean_ctor_set(v___x_2753_, 0, v_val_2775_);
v___x_2777_ = v___x_2753_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_val_2775_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v___x_2744_);
lean_dec(v_stx_2476_);
v_a_2782_ = lean_ctor_get(v___x_2750_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2750_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2750_);
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
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2790_ = lean_unsigned_to_nat(3u);
v___x_2791_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2790_);
lean_dec(v_stx_2476_);
v___x_2792_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2732_, v___x_2791_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
return v___x_2792_;
}
}
}
else
{
lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; uint8_t v___x_4775_; 
v___x_4772_ = lean_unsigned_to_nat(0u);
v___x_4773_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4772_);
v___x_4774_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
v___x_4775_ = l_Lean_Syntax_isOfKind(v___x_4773_, v___x_4774_);
if (v___x_4775_ == 0)
{
lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v_env_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4776_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4777_ = lean_st_ref_get(v_a_2482_);
v_env_4778_ = lean_ctor_get(v___x_4777_, 0);
lean_inc_ref(v_env_4778_);
lean_dec(v___x_4777_);
v___x_4779_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4780_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4779_, v_env_4778_, v___x_4776_);
v___x_4781_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4782_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4780_, v___x_4781_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4780_);
if (lean_obj_tag(v___x_4782_) == 0)
{
lean_object* v_a_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4813_; 
v_a_4783_ = lean_ctor_get(v___x_4782_, 0);
v_isSharedCheck_4813_ = !lean_is_exclusive(v___x_4782_);
if (v_isSharedCheck_4813_ == 0)
{
v___x_4785_ = v___x_4782_;
v_isShared_4786_ = v_isSharedCheck_4813_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_a_4783_);
lean_dec(v___x_4782_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4813_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v_fst_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4811_; 
v_fst_4787_ = lean_ctor_get(v_a_4783_, 0);
v_isSharedCheck_4811_ = !lean_is_exclusive(v_a_4783_);
if (v_isSharedCheck_4811_ == 0)
{
lean_object* v_unused_4812_; 
v_unused_4812_ = lean_ctor_get(v_a_4783_, 1);
lean_dec(v_unused_4812_);
v___x_4789_ = v_a_4783_;
v_isShared_4790_ = v_isSharedCheck_4811_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_fst_4787_);
lean_dec(v_a_4783_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4811_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
if (lean_obj_tag(v_fst_4787_) == 0)
{
lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4794_; 
lean_del_object(v___x_4785_);
v___x_4791_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4792_ = l_Lean_MessageData_ofName(v___x_4776_);
lean_inc_ref(v___x_4792_);
if (v_isShared_4790_ == 0)
{
lean_ctor_set_tag(v___x_4789_, 7);
lean_ctor_set(v___x_4789_, 1, v___x_4792_);
lean_ctor_set(v___x_4789_, 0, v___x_4791_);
v___x_4794_ = v___x_4789_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4806_; 
v_reuseFailAlloc_4806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4806_, 0, v___x_4791_);
lean_ctor_set(v_reuseFailAlloc_4806_, 1, v___x_4792_);
v___x_4794_ = v_reuseFailAlloc_4806_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4795_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4796_, 0, v___x_4794_);
lean_ctor_set(v___x_4796_, 1, v___x_4795_);
v___x_4797_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4798_ = l_Lean_indentD(v___x_4797_);
v___x_4799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4796_);
lean_ctor_set(v___x_4799_, 1, v___x_4798_);
v___x_4800_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4801_, 0, v___x_4799_);
lean_ctor_set(v___x_4801_, 1, v___x_4800_);
v___x_4802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4801_);
lean_ctor_set(v___x_4802_, 1, v___x_4792_);
v___x_4803_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4802_);
lean_ctor_set(v___x_4804_, 1, v___x_4803_);
v___x_4805_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4804_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4805_;
}
}
else
{
lean_object* v_val_4807_; lean_object* v___x_4809_; 
lean_del_object(v___x_4789_);
lean_dec(v___x_4776_);
lean_dec(v_stx_2476_);
v_val_4807_ = lean_ctor_get(v_fst_4787_, 0);
lean_inc(v_val_4807_);
lean_dec_ref_known(v_fst_4787_, 1);
if (v_isShared_4786_ == 0)
{
lean_ctor_set(v___x_4785_, 0, v_val_4807_);
v___x_4809_ = v___x_4785_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v_val_4807_);
v___x_4809_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
return v___x_4809_;
}
}
}
}
}
else
{
lean_object* v_a_4814_; lean_object* v___x_4816_; uint8_t v_isShared_4817_; uint8_t v_isSharedCheck_4821_; 
lean_dec(v___x_4776_);
lean_dec(v_stx_2476_);
v_a_4814_ = lean_ctor_get(v___x_4782_, 0);
v_isSharedCheck_4821_ = !lean_is_exclusive(v___x_4782_);
if (v_isSharedCheck_4821_ == 0)
{
v___x_4816_ = v___x_4782_;
v_isShared_4817_ = v_isSharedCheck_4821_;
goto v_resetjp_4815_;
}
else
{
lean_inc(v_a_4814_);
lean_dec(v___x_4782_);
v___x_4816_ = lean_box(0);
v_isShared_4817_ = v_isSharedCheck_4821_;
goto v_resetjp_4815_;
}
v_resetjp_4815_:
{
lean_object* v___x_4819_; 
if (v_isShared_4817_ == 0)
{
v___x_4819_ = v___x_4816_;
goto v_reusejp_4818_;
}
else
{
lean_object* v_reuseFailAlloc_4820_; 
v_reuseFailAlloc_4820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4820_, 0, v_a_4814_);
v___x_4819_ = v_reuseFailAlloc_4820_;
goto v_reusejp_4818_;
}
v_reusejp_4818_:
{
return v___x_4819_;
}
}
}
}
else
{
lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; uint8_t v___x_4825_; 
v___x_4822_ = lean_unsigned_to_nat(1u);
v___x_4823_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4822_);
v___x_4824_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92));
lean_inc(v___x_4823_);
v___x_4825_ = l_Lean_Syntax_isOfKind(v___x_4823_, v___x_4824_);
if (v___x_4825_ == 0)
{
lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v_env_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; 
lean_dec(v___x_4823_);
lean_inc_n(v_stx_2476_, 2);
v___x_4826_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4827_ = lean_st_ref_get(v_a_2482_);
v_env_4828_ = lean_ctor_get(v___x_4827_, 0);
lean_inc_ref(v_env_4828_);
lean_dec(v___x_4827_);
v___x_4829_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4830_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4829_, v_env_4828_, v___x_4826_);
v___x_4831_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4832_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4830_, v___x_4831_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4830_);
if (lean_obj_tag(v___x_4832_) == 0)
{
lean_object* v_a_4833_; lean_object* v___x_4835_; uint8_t v_isShared_4836_; uint8_t v_isSharedCheck_4863_; 
v_a_4833_ = lean_ctor_get(v___x_4832_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4832_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4835_ = v___x_4832_;
v_isShared_4836_ = v_isSharedCheck_4863_;
goto v_resetjp_4834_;
}
else
{
lean_inc(v_a_4833_);
lean_dec(v___x_4832_);
v___x_4835_ = lean_box(0);
v_isShared_4836_ = v_isSharedCheck_4863_;
goto v_resetjp_4834_;
}
v_resetjp_4834_:
{
lean_object* v_fst_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4861_; 
v_fst_4837_ = lean_ctor_get(v_a_4833_, 0);
v_isSharedCheck_4861_ = !lean_is_exclusive(v_a_4833_);
if (v_isSharedCheck_4861_ == 0)
{
lean_object* v_unused_4862_; 
v_unused_4862_ = lean_ctor_get(v_a_4833_, 1);
lean_dec(v_unused_4862_);
v___x_4839_ = v_a_4833_;
v_isShared_4840_ = v_isSharedCheck_4861_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_fst_4837_);
lean_dec(v_a_4833_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4861_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
if (lean_obj_tag(v_fst_4837_) == 0)
{
lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4844_; 
lean_del_object(v___x_4835_);
v___x_4841_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4842_ = l_Lean_MessageData_ofName(v___x_4826_);
lean_inc_ref(v___x_4842_);
if (v_isShared_4840_ == 0)
{
lean_ctor_set_tag(v___x_4839_, 7);
lean_ctor_set(v___x_4839_, 1, v___x_4842_);
lean_ctor_set(v___x_4839_, 0, v___x_4841_);
v___x_4844_ = v___x_4839_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4856_; 
v_reuseFailAlloc_4856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4856_, 0, v___x_4841_);
lean_ctor_set(v_reuseFailAlloc_4856_, 1, v___x_4842_);
v___x_4844_ = v_reuseFailAlloc_4856_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
v___x_4845_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4846_, 0, v___x_4844_);
lean_ctor_set(v___x_4846_, 1, v___x_4845_);
v___x_4847_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4848_ = l_Lean_indentD(v___x_4847_);
v___x_4849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4849_, 0, v___x_4846_);
lean_ctor_set(v___x_4849_, 1, v___x_4848_);
v___x_4850_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4851_, 0, v___x_4849_);
lean_ctor_set(v___x_4851_, 1, v___x_4850_);
v___x_4852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4852_, 0, v___x_4851_);
lean_ctor_set(v___x_4852_, 1, v___x_4842_);
v___x_4853_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4854_, 0, v___x_4852_);
lean_ctor_set(v___x_4854_, 1, v___x_4853_);
v___x_4855_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4854_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4855_;
}
}
else
{
lean_object* v_val_4857_; lean_object* v___x_4859_; 
lean_del_object(v___x_4839_);
lean_dec(v___x_4826_);
lean_dec(v_stx_2476_);
v_val_4857_ = lean_ctor_get(v_fst_4837_, 0);
lean_inc(v_val_4857_);
lean_dec_ref_known(v_fst_4837_, 1);
if (v_isShared_4836_ == 0)
{
lean_ctor_set(v___x_4835_, 0, v_val_4857_);
v___x_4859_ = v___x_4835_;
goto v_reusejp_4858_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v_val_4857_);
v___x_4859_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4858_;
}
v_reusejp_4858_:
{
return v___x_4859_;
}
}
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
lean_dec(v___x_4826_);
lean_dec(v_stx_2476_);
v_a_4864_ = lean_ctor_get(v___x_4832_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4832_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4832_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4832_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
else
{
lean_object* v___x_4872_; uint8_t v___x_4873_; 
v___x_4872_ = l_Lean_Syntax_getArg(v___x_4823_, v___x_4772_);
lean_dec(v___x_4823_);
lean_inc(v___x_4872_);
v___x_4873_ = l_Lean_Syntax_matchesNull(v___x_4872_, v___x_4822_);
if (v___x_4873_ == 0)
{
lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v_env_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; 
lean_dec(v___x_4872_);
lean_inc_n(v_stx_2476_, 2);
v___x_4874_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4875_ = lean_st_ref_get(v_a_2482_);
v_env_4876_ = lean_ctor_get(v___x_4875_, 0);
lean_inc_ref(v_env_4876_);
lean_dec(v___x_4875_);
v___x_4877_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4878_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4877_, v_env_4876_, v___x_4874_);
v___x_4879_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4880_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4878_, v___x_4879_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4878_);
if (lean_obj_tag(v___x_4880_) == 0)
{
lean_object* v_a_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4911_; 
v_a_4881_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4911_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4911_ == 0)
{
v___x_4883_ = v___x_4880_;
v_isShared_4884_ = v_isSharedCheck_4911_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_a_4881_);
lean_dec(v___x_4880_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4911_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v_fst_4885_; lean_object* v___x_4887_; uint8_t v_isShared_4888_; uint8_t v_isSharedCheck_4909_; 
v_fst_4885_ = lean_ctor_get(v_a_4881_, 0);
v_isSharedCheck_4909_ = !lean_is_exclusive(v_a_4881_);
if (v_isSharedCheck_4909_ == 0)
{
lean_object* v_unused_4910_; 
v_unused_4910_ = lean_ctor_get(v_a_4881_, 1);
lean_dec(v_unused_4910_);
v___x_4887_ = v_a_4881_;
v_isShared_4888_ = v_isSharedCheck_4909_;
goto v_resetjp_4886_;
}
else
{
lean_inc(v_fst_4885_);
lean_dec(v_a_4881_);
v___x_4887_ = lean_box(0);
v_isShared_4888_ = v_isSharedCheck_4909_;
goto v_resetjp_4886_;
}
v_resetjp_4886_:
{
if (lean_obj_tag(v_fst_4885_) == 0)
{
lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4892_; 
lean_del_object(v___x_4883_);
v___x_4889_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4890_ = l_Lean_MessageData_ofName(v___x_4874_);
lean_inc_ref(v___x_4890_);
if (v_isShared_4888_ == 0)
{
lean_ctor_set_tag(v___x_4887_, 7);
lean_ctor_set(v___x_4887_, 1, v___x_4890_);
lean_ctor_set(v___x_4887_, 0, v___x_4889_);
v___x_4892_ = v___x_4887_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v___x_4889_);
lean_ctor_set(v_reuseFailAlloc_4904_, 1, v___x_4890_);
v___x_4892_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4893_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4894_, 0, v___x_4892_);
lean_ctor_set(v___x_4894_, 1, v___x_4893_);
v___x_4895_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4896_ = l_Lean_indentD(v___x_4895_);
v___x_4897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4897_, 0, v___x_4894_);
lean_ctor_set(v___x_4897_, 1, v___x_4896_);
v___x_4898_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4897_);
lean_ctor_set(v___x_4899_, 1, v___x_4898_);
v___x_4900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4899_);
lean_ctor_set(v___x_4900_, 1, v___x_4890_);
v___x_4901_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4902_, 0, v___x_4900_);
lean_ctor_set(v___x_4902_, 1, v___x_4901_);
v___x_4903_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4902_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4903_;
}
}
else
{
lean_object* v_val_4905_; lean_object* v___x_4907_; 
lean_del_object(v___x_4887_);
lean_dec(v___x_4874_);
lean_dec(v_stx_2476_);
v_val_4905_ = lean_ctor_get(v_fst_4885_, 0);
lean_inc(v_val_4905_);
lean_dec_ref_known(v_fst_4885_, 1);
if (v_isShared_4884_ == 0)
{
lean_ctor_set(v___x_4883_, 0, v_val_4905_);
v___x_4907_ = v___x_4883_;
goto v_reusejp_4906_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v_val_4905_);
v___x_4907_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4906_;
}
v_reusejp_4906_:
{
return v___x_4907_;
}
}
}
}
}
else
{
lean_object* v_a_4912_; lean_object* v___x_4914_; uint8_t v_isShared_4915_; uint8_t v_isSharedCheck_4919_; 
lean_dec(v___x_4874_);
lean_dec(v_stx_2476_);
v_a_4912_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4919_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4919_ == 0)
{
v___x_4914_ = v___x_4880_;
v_isShared_4915_ = v_isSharedCheck_4919_;
goto v_resetjp_4913_;
}
else
{
lean_inc(v_a_4912_);
lean_dec(v___x_4880_);
v___x_4914_ = lean_box(0);
v_isShared_4915_ = v_isSharedCheck_4919_;
goto v_resetjp_4913_;
}
v_resetjp_4913_:
{
lean_object* v___x_4917_; 
if (v_isShared_4915_ == 0)
{
v___x_4917_ = v___x_4914_;
goto v_reusejp_4916_;
}
else
{
lean_object* v_reuseFailAlloc_4918_; 
v_reuseFailAlloc_4918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4918_, 0, v_a_4912_);
v___x_4917_ = v_reuseFailAlloc_4918_;
goto v_reusejp_4916_;
}
v_reusejp_4916_:
{
return v___x_4917_;
}
}
}
}
else
{
lean_object* v___x_4920_; lean_object* v___x_4921_; uint8_t v___x_4922_; 
v___x_4920_ = l_Lean_Syntax_getArg(v___x_4872_, v___x_4772_);
lean_dec(v___x_4872_);
v___x_4921_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94));
v___x_4922_ = l_Lean_Syntax_isOfKind(v___x_4920_, v___x_4921_);
if (v___x_4922_ == 0)
{
lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v_env_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4923_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4924_ = lean_st_ref_get(v_a_2482_);
v_env_4925_ = lean_ctor_get(v___x_4924_, 0);
lean_inc_ref(v_env_4925_);
lean_dec(v___x_4924_);
v___x_4926_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4927_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4926_, v_env_4925_, v___x_4923_);
v___x_4928_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4929_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4927_, v___x_4928_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4927_);
if (lean_obj_tag(v___x_4929_) == 0)
{
lean_object* v_a_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4960_; 
v_a_4930_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_4960_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_4960_ == 0)
{
v___x_4932_ = v___x_4929_;
v_isShared_4933_ = v_isSharedCheck_4960_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_a_4930_);
lean_dec(v___x_4929_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4960_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v_fst_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4958_; 
v_fst_4934_ = lean_ctor_get(v_a_4930_, 0);
v_isSharedCheck_4958_ = !lean_is_exclusive(v_a_4930_);
if (v_isSharedCheck_4958_ == 0)
{
lean_object* v_unused_4959_; 
v_unused_4959_ = lean_ctor_get(v_a_4930_, 1);
lean_dec(v_unused_4959_);
v___x_4936_ = v_a_4930_;
v_isShared_4937_ = v_isSharedCheck_4958_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_fst_4934_);
lean_dec(v_a_4930_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4958_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
if (lean_obj_tag(v_fst_4934_) == 0)
{
lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4941_; 
lean_del_object(v___x_4932_);
v___x_4938_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4939_ = l_Lean_MessageData_ofName(v___x_4923_);
lean_inc_ref(v___x_4939_);
if (v_isShared_4937_ == 0)
{
lean_ctor_set_tag(v___x_4936_, 7);
lean_ctor_set(v___x_4936_, 1, v___x_4939_);
lean_ctor_set(v___x_4936_, 0, v___x_4938_);
v___x_4941_ = v___x_4936_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v___x_4938_);
lean_ctor_set(v_reuseFailAlloc_4953_, 1, v___x_4939_);
v___x_4941_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; 
v___x_4942_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4943_, 0, v___x_4941_);
lean_ctor_set(v___x_4943_, 1, v___x_4942_);
v___x_4944_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4945_ = l_Lean_indentD(v___x_4944_);
v___x_4946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4946_, 0, v___x_4943_);
lean_ctor_set(v___x_4946_, 1, v___x_4945_);
v___x_4947_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4948_, 0, v___x_4946_);
lean_ctor_set(v___x_4948_, 1, v___x_4947_);
v___x_4949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4948_);
lean_ctor_set(v___x_4949_, 1, v___x_4939_);
v___x_4950_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4949_);
lean_ctor_set(v___x_4951_, 1, v___x_4950_);
v___x_4952_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4951_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_4952_;
}
}
else
{
lean_object* v_val_4954_; lean_object* v___x_4956_; 
lean_del_object(v___x_4936_);
lean_dec(v___x_4923_);
lean_dec(v_stx_2476_);
v_val_4954_ = lean_ctor_get(v_fst_4934_, 0);
lean_inc(v_val_4954_);
lean_dec_ref_known(v_fst_4934_, 1);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 0, v_val_4954_);
v___x_4956_ = v___x_4932_;
goto v_reusejp_4955_;
}
else
{
lean_object* v_reuseFailAlloc_4957_; 
v_reuseFailAlloc_4957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4957_, 0, v_val_4954_);
v___x_4956_ = v_reuseFailAlloc_4957_;
goto v_reusejp_4955_;
}
v_reusejp_4955_:
{
return v___x_4956_;
}
}
}
}
}
else
{
lean_object* v_a_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4968_; 
lean_dec(v___x_4923_);
lean_dec(v_stx_2476_);
v_a_4961_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_4968_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4963_ = v___x_4929_;
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_a_4961_);
lean_dec(v___x_4929_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
lean_object* v___x_4966_; 
if (v_isShared_4964_ == 0)
{
v___x_4966_ = v___x_4963_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v_a_4961_);
v___x_4966_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
return v___x_4966_;
}
}
}
}
else
{
lean_object* v___x_4969_; lean_object* v___x_4970_; 
lean_dec(v_stx_2476_);
v___x_4969_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_4970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4970_, 0, v___x_4969_);
return v___x_4970_;
}
}
}
}
}
}
else
{
lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; uint8_t v___x_4974_; 
v___x_4971_ = lean_unsigned_to_nat(1u);
v___x_4972_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_4971_);
v___x_4973_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_4974_ = l_Lean_Syntax_isOfKind(v___x_4972_, v___x_4973_);
if (v___x_4974_ == 0)
{
lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v_env_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; 
lean_inc_n(v_stx_2476_, 2);
v___x_4975_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_4976_ = lean_st_ref_get(v_a_2482_);
v_env_4977_ = lean_ctor_get(v___x_4976_, 0);
lean_inc_ref(v_env_4977_);
lean_dec(v___x_4976_);
v___x_4978_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4979_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4978_, v_env_4977_, v___x_4975_);
v___x_4980_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4981_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_4979_, v___x_4980_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_4979_);
if (lean_obj_tag(v___x_4981_) == 0)
{
lean_object* v_a_4982_; lean_object* v___x_4984_; uint8_t v_isShared_4985_; uint8_t v_isSharedCheck_5012_; 
v_a_4982_ = lean_ctor_get(v___x_4981_, 0);
v_isSharedCheck_5012_ = !lean_is_exclusive(v___x_4981_);
if (v_isSharedCheck_5012_ == 0)
{
v___x_4984_ = v___x_4981_;
v_isShared_4985_ = v_isSharedCheck_5012_;
goto v_resetjp_4983_;
}
else
{
lean_inc(v_a_4982_);
lean_dec(v___x_4981_);
v___x_4984_ = lean_box(0);
v_isShared_4985_ = v_isSharedCheck_5012_;
goto v_resetjp_4983_;
}
v_resetjp_4983_:
{
lean_object* v_fst_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_5010_; 
v_fst_4986_ = lean_ctor_get(v_a_4982_, 0);
v_isSharedCheck_5010_ = !lean_is_exclusive(v_a_4982_);
if (v_isSharedCheck_5010_ == 0)
{
lean_object* v_unused_5011_; 
v_unused_5011_ = lean_ctor_get(v_a_4982_, 1);
lean_dec(v_unused_5011_);
v___x_4988_ = v_a_4982_;
v_isShared_4989_ = v_isSharedCheck_5010_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_fst_4986_);
lean_dec(v_a_4982_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_5010_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
if (lean_obj_tag(v_fst_4986_) == 0)
{
lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4993_; 
lean_del_object(v___x_4984_);
v___x_4990_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_4991_ = l_Lean_MessageData_ofName(v___x_4975_);
lean_inc_ref(v___x_4991_);
if (v_isShared_4989_ == 0)
{
lean_ctor_set_tag(v___x_4988_, 7);
lean_ctor_set(v___x_4988_, 1, v___x_4991_);
lean_ctor_set(v___x_4988_, 0, v___x_4990_);
v___x_4993_ = v___x_4988_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v___x_4990_);
lean_ctor_set(v_reuseFailAlloc_5005_, 1, v___x_4991_);
v___x_4993_ = v_reuseFailAlloc_5005_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
v___x_4994_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4995_, 0, v___x_4993_);
lean_ctor_set(v___x_4995_, 1, v___x_4994_);
v___x_4996_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_4997_ = l_Lean_indentD(v___x_4996_);
v___x_4998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4998_, 0, v___x_4995_);
lean_ctor_set(v___x_4998_, 1, v___x_4997_);
v___x_4999_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5000_, 0, v___x_4998_);
lean_ctor_set(v___x_5000_, 1, v___x_4999_);
v___x_5001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5001_, 0, v___x_5000_);
lean_ctor_set(v___x_5001_, 1, v___x_4991_);
v___x_5002_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5003_, 0, v___x_5001_);
lean_ctor_set(v___x_5003_, 1, v___x_5002_);
v___x_5004_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5003_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_5004_;
}
}
else
{
lean_object* v_val_5006_; lean_object* v___x_5008_; 
lean_del_object(v___x_4988_);
lean_dec(v___x_4975_);
lean_dec(v_stx_2476_);
v_val_5006_ = lean_ctor_get(v_fst_4986_, 0);
lean_inc(v_val_5006_);
lean_dec_ref_known(v_fst_4986_, 1);
if (v_isShared_4985_ == 0)
{
lean_ctor_set(v___x_4984_, 0, v_val_5006_);
v___x_5008_ = v___x_4984_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v_val_5006_);
v___x_5008_ = v_reuseFailAlloc_5009_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
return v___x_5008_;
}
}
}
}
}
else
{
lean_object* v_a_5013_; lean_object* v___x_5015_; uint8_t v_isShared_5016_; uint8_t v_isSharedCheck_5020_; 
lean_dec(v___x_4975_);
lean_dec(v_stx_2476_);
v_a_5013_ = lean_ctor_get(v___x_4981_, 0);
v_isSharedCheck_5020_ = !lean_is_exclusive(v___x_4981_);
if (v_isSharedCheck_5020_ == 0)
{
v___x_5015_ = v___x_4981_;
v_isShared_5016_ = v_isSharedCheck_5020_;
goto v_resetjp_5014_;
}
else
{
lean_inc(v_a_5013_);
lean_dec(v___x_4981_);
v___x_5015_ = lean_box(0);
v_isShared_5016_ = v_isSharedCheck_5020_;
goto v_resetjp_5014_;
}
v_resetjp_5014_:
{
lean_object* v___x_5018_; 
if (v_isShared_5016_ == 0)
{
v___x_5018_ = v___x_5015_;
goto v_reusejp_5017_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v_a_5013_);
v___x_5018_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5017_;
}
v_reusejp_5017_:
{
return v___x_5018_;
}
}
}
}
else
{
lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; uint8_t v___x_5024_; 
v___x_5021_ = lean_unsigned_to_nat(2u);
v___x_5022_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_5021_);
v___x_5023_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_5024_ = l_Lean_Syntax_isOfKind(v___x_5022_, v___x_5023_);
if (v___x_5024_ == 0)
{
lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v_env_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; 
lean_inc_n(v_stx_2476_, 2);
v___x_5025_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_5026_ = lean_st_ref_get(v_a_2482_);
v_env_5027_ = lean_ctor_get(v___x_5026_, 0);
lean_inc_ref(v_env_5027_);
lean_dec(v___x_5026_);
v___x_5028_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5029_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5028_, v_env_5027_, v___x_5025_);
v___x_5030_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5031_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_5029_, v___x_5030_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_5029_);
if (lean_obj_tag(v___x_5031_) == 0)
{
lean_object* v_a_5032_; lean_object* v___x_5034_; uint8_t v_isShared_5035_; uint8_t v_isSharedCheck_5062_; 
v_a_5032_ = lean_ctor_get(v___x_5031_, 0);
v_isSharedCheck_5062_ = !lean_is_exclusive(v___x_5031_);
if (v_isSharedCheck_5062_ == 0)
{
v___x_5034_ = v___x_5031_;
v_isShared_5035_ = v_isSharedCheck_5062_;
goto v_resetjp_5033_;
}
else
{
lean_inc(v_a_5032_);
lean_dec(v___x_5031_);
v___x_5034_ = lean_box(0);
v_isShared_5035_ = v_isSharedCheck_5062_;
goto v_resetjp_5033_;
}
v_resetjp_5033_:
{
lean_object* v_fst_5036_; lean_object* v___x_5038_; uint8_t v_isShared_5039_; uint8_t v_isSharedCheck_5060_; 
v_fst_5036_ = lean_ctor_get(v_a_5032_, 0);
v_isSharedCheck_5060_ = !lean_is_exclusive(v_a_5032_);
if (v_isSharedCheck_5060_ == 0)
{
lean_object* v_unused_5061_; 
v_unused_5061_ = lean_ctor_get(v_a_5032_, 1);
lean_dec(v_unused_5061_);
v___x_5038_ = v_a_5032_;
v_isShared_5039_ = v_isSharedCheck_5060_;
goto v_resetjp_5037_;
}
else
{
lean_inc(v_fst_5036_);
lean_dec(v_a_5032_);
v___x_5038_ = lean_box(0);
v_isShared_5039_ = v_isSharedCheck_5060_;
goto v_resetjp_5037_;
}
v_resetjp_5037_:
{
if (lean_obj_tag(v_fst_5036_) == 0)
{
lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5043_; 
lean_del_object(v___x_5034_);
v___x_5040_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5041_ = l_Lean_MessageData_ofName(v___x_5025_);
lean_inc_ref(v___x_5041_);
if (v_isShared_5039_ == 0)
{
lean_ctor_set_tag(v___x_5038_, 7);
lean_ctor_set(v___x_5038_, 1, v___x_5041_);
lean_ctor_set(v___x_5038_, 0, v___x_5040_);
v___x_5043_ = v___x_5038_;
goto v_reusejp_5042_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v___x_5040_);
lean_ctor_set(v_reuseFailAlloc_5055_, 1, v___x_5041_);
v___x_5043_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5042_;
}
v_reusejp_5042_:
{
lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; 
v___x_5044_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5045_, 0, v___x_5043_);
lean_ctor_set(v___x_5045_, 1, v___x_5044_);
v___x_5046_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_5047_ = l_Lean_indentD(v___x_5046_);
v___x_5048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5045_);
lean_ctor_set(v___x_5048_, 1, v___x_5047_);
v___x_5049_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5050_, 0, v___x_5048_);
lean_ctor_set(v___x_5050_, 1, v___x_5049_);
v___x_5051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5051_, 0, v___x_5050_);
lean_ctor_set(v___x_5051_, 1, v___x_5041_);
v___x_5052_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5053_, 0, v___x_5051_);
lean_ctor_set(v___x_5053_, 1, v___x_5052_);
v___x_5054_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5053_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_5054_;
}
}
else
{
lean_object* v_val_5056_; lean_object* v___x_5058_; 
lean_del_object(v___x_5038_);
lean_dec(v___x_5025_);
lean_dec(v_stx_2476_);
v_val_5056_ = lean_ctor_get(v_fst_5036_, 0);
lean_inc(v_val_5056_);
lean_dec_ref_known(v_fst_5036_, 1);
if (v_isShared_5035_ == 0)
{
lean_ctor_set(v___x_5034_, 0, v_val_5056_);
v___x_5058_ = v___x_5034_;
goto v_reusejp_5057_;
}
else
{
lean_object* v_reuseFailAlloc_5059_; 
v_reuseFailAlloc_5059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5059_, 0, v_val_5056_);
v___x_5058_ = v_reuseFailAlloc_5059_;
goto v_reusejp_5057_;
}
v_reusejp_5057_:
{
return v___x_5058_;
}
}
}
}
}
else
{
lean_object* v_a_5063_; lean_object* v___x_5065_; uint8_t v_isShared_5066_; uint8_t v_isSharedCheck_5070_; 
lean_dec(v___x_5025_);
lean_dec(v_stx_2476_);
v_a_5063_ = lean_ctor_get(v___x_5031_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v___x_5031_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5065_ = v___x_5031_;
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
else
{
lean_inc(v_a_5063_);
lean_dec(v___x_5031_);
v___x_5065_ = lean_box(0);
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
v_resetjp_5064_:
{
lean_object* v___x_5068_; 
if (v_isShared_5066_ == 0)
{
v___x_5068_ = v___x_5065_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_a_5063_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
return v___x_5068_;
}
}
}
}
else
{
lean_object* v___x_5071_; lean_object* v___x_5072_; 
lean_dec(v_stx_2476_);
v___x_5071_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_5072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5072_, 0, v___x_5071_);
return v___x_5072_;
}
}
}
}
else
{
lean_object* v___x_5073_; lean_object* v___x_5074_; uint8_t v___x_5075_; 
v___x_5073_ = lean_unsigned_to_nat(1u);
v___x_5074_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_5073_);
v___x_5075_ = l_Lean_Syntax_isNone(v___x_5074_);
if (v___x_5075_ == 0)
{
uint8_t v___x_5076_; 
v___x_5076_ = l_Lean_Syntax_matchesNull(v___x_5074_, v___x_5073_);
if (v___x_5076_ == 0)
{
lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v_env_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; 
lean_del_object(v___x_2516_);
lean_inc_n(v_stx_2476_, 2);
v___x_5077_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_5078_ = lean_st_ref_get(v_a_2482_);
v_env_5079_ = lean_ctor_get(v___x_5078_, 0);
lean_inc_ref(v_env_5079_);
lean_dec(v___x_5078_);
v___x_5080_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5081_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5080_, v_env_5079_, v___x_5077_);
v___x_5082_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5083_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_5081_, v___x_5082_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_5081_);
if (lean_obj_tag(v___x_5083_) == 0)
{
lean_object* v_a_5084_; lean_object* v___x_5086_; uint8_t v_isShared_5087_; uint8_t v_isSharedCheck_5114_; 
v_a_5084_ = lean_ctor_get(v___x_5083_, 0);
v_isSharedCheck_5114_ = !lean_is_exclusive(v___x_5083_);
if (v_isSharedCheck_5114_ == 0)
{
v___x_5086_ = v___x_5083_;
v_isShared_5087_ = v_isSharedCheck_5114_;
goto v_resetjp_5085_;
}
else
{
lean_inc(v_a_5084_);
lean_dec(v___x_5083_);
v___x_5086_ = lean_box(0);
v_isShared_5087_ = v_isSharedCheck_5114_;
goto v_resetjp_5085_;
}
v_resetjp_5085_:
{
lean_object* v_fst_5088_; lean_object* v___x_5090_; uint8_t v_isShared_5091_; uint8_t v_isSharedCheck_5112_; 
v_fst_5088_ = lean_ctor_get(v_a_5084_, 0);
v_isSharedCheck_5112_ = !lean_is_exclusive(v_a_5084_);
if (v_isSharedCheck_5112_ == 0)
{
lean_object* v_unused_5113_; 
v_unused_5113_ = lean_ctor_get(v_a_5084_, 1);
lean_dec(v_unused_5113_);
v___x_5090_ = v_a_5084_;
v_isShared_5091_ = v_isSharedCheck_5112_;
goto v_resetjp_5089_;
}
else
{
lean_inc(v_fst_5088_);
lean_dec(v_a_5084_);
v___x_5090_ = lean_box(0);
v_isShared_5091_ = v_isSharedCheck_5112_;
goto v_resetjp_5089_;
}
v_resetjp_5089_:
{
if (lean_obj_tag(v_fst_5088_) == 0)
{
lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5095_; 
lean_del_object(v___x_5086_);
v___x_5092_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5093_ = l_Lean_MessageData_ofName(v___x_5077_);
lean_inc_ref(v___x_5093_);
if (v_isShared_5091_ == 0)
{
lean_ctor_set_tag(v___x_5090_, 7);
lean_ctor_set(v___x_5090_, 1, v___x_5093_);
lean_ctor_set(v___x_5090_, 0, v___x_5092_);
v___x_5095_ = v___x_5090_;
goto v_reusejp_5094_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v___x_5092_);
lean_ctor_set(v_reuseFailAlloc_5107_, 1, v___x_5093_);
v___x_5095_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5094_;
}
v_reusejp_5094_:
{
lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; 
v___x_5096_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5097_, 0, v___x_5095_);
lean_ctor_set(v___x_5097_, 1, v___x_5096_);
v___x_5098_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_5099_ = l_Lean_indentD(v___x_5098_);
v___x_5100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5097_);
lean_ctor_set(v___x_5100_, 1, v___x_5099_);
v___x_5101_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5100_);
lean_ctor_set(v___x_5102_, 1, v___x_5101_);
v___x_5103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5103_, 0, v___x_5102_);
lean_ctor_set(v___x_5103_, 1, v___x_5093_);
v___x_5104_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5105_, 0, v___x_5103_);
lean_ctor_set(v___x_5105_, 1, v___x_5104_);
v___x_5106_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5105_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_5106_;
}
}
else
{
lean_object* v_val_5108_; lean_object* v___x_5110_; 
lean_del_object(v___x_5090_);
lean_dec(v___x_5077_);
lean_dec(v_stx_2476_);
v_val_5108_ = lean_ctor_get(v_fst_5088_, 0);
lean_inc(v_val_5108_);
lean_dec_ref_known(v_fst_5088_, 1);
if (v_isShared_5087_ == 0)
{
lean_ctor_set(v___x_5086_, 0, v_val_5108_);
v___x_5110_ = v___x_5086_;
goto v_reusejp_5109_;
}
else
{
lean_object* v_reuseFailAlloc_5111_; 
v_reuseFailAlloc_5111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5111_, 0, v_val_5108_);
v___x_5110_ = v_reuseFailAlloc_5111_;
goto v_reusejp_5109_;
}
v_reusejp_5109_:
{
return v___x_5110_;
}
}
}
}
}
else
{
lean_object* v_a_5115_; lean_object* v___x_5117_; uint8_t v_isShared_5118_; uint8_t v_isSharedCheck_5122_; 
lean_dec(v___x_5077_);
lean_dec(v_stx_2476_);
v_a_5115_ = lean_ctor_get(v___x_5083_, 0);
v_isSharedCheck_5122_ = !lean_is_exclusive(v___x_5083_);
if (v_isSharedCheck_5122_ == 0)
{
v___x_5117_ = v___x_5083_;
v_isShared_5118_ = v_isSharedCheck_5122_;
goto v_resetjp_5116_;
}
else
{
lean_inc(v_a_5115_);
lean_dec(v___x_5083_);
v___x_5117_ = lean_box(0);
v_isShared_5118_ = v_isSharedCheck_5122_;
goto v_resetjp_5116_;
}
v_resetjp_5116_:
{
lean_object* v___x_5120_; 
if (v_isShared_5118_ == 0)
{
v___x_5120_ = v___x_5117_;
goto v_reusejp_5119_;
}
else
{
lean_object* v_reuseFailAlloc_5121_; 
v_reuseFailAlloc_5121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5121_, 0, v_a_5115_);
v___x_5120_ = v_reuseFailAlloc_5121_;
goto v_reusejp_5119_;
}
v_reusejp_5119_:
{
return v___x_5120_;
}
}
}
}
else
{
v___y_2604_ = v_a_2477_;
v___y_2605_ = v_a_2478_;
v___y_2606_ = v_a_2479_;
v___y_2607_ = v_a_2480_;
v___y_2608_ = v_a_2481_;
v___y_2609_ = v_a_2482_;
goto v___jp_2603_;
}
}
else
{
lean_dec(v___x_5074_);
v___y_2604_ = v_a_2477_;
v___y_2605_ = v_a_2478_;
v___y_2606_ = v_a_2479_;
v___y_2607_ = v_a_2480_;
v___y_2608_ = v_a_2481_;
v___y_2609_ = v_a_2482_;
goto v___jp_2603_;
}
}
}
else
{
lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; 
lean_del_object(v___x_2516_);
v___x_5123_ = lean_unsigned_to_nat(1u);
v___x_5124_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_5123_);
lean_dec(v_stx_2476_);
v___x_5125_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5124_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_5125_;
}
}
else
{
lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; 
lean_del_object(v___x_2516_);
v___x_5126_ = lean_unsigned_to_nat(0u);
v___x_5127_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_5126_);
lean_dec(v_stx_2476_);
v___x_5128_ = l_Lean_Elab_Do_Forward_matchApp_x3f(v___x_5127_);
if (lean_obj_tag(v___x_5128_) == 1)
{
lean_object* v_val_5129_; lean_object* v_snd_5130_; lean_object* v_body_5131_; lean_object* v___x_5132_; 
v_val_5129_ = lean_ctor_get(v___x_5128_, 0);
lean_inc(v_val_5129_);
lean_dec_ref_known(v___x_5128_, 1);
v_snd_5130_ = lean_ctor_get(v_val_5129_, 1);
lean_inc(v_snd_5130_);
lean_dec(v_val_5129_);
v_body_5131_ = lean_ctor_get(v_snd_5130_, 1);
lean_inc(v_body_5131_);
lean_dec(v_snd_5130_);
v___x_5132_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_body_5131_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_5132_) == 0)
{
lean_object* v_a_5133_; lean_object* v___x_5135_; uint8_t v_isShared_5136_; uint8_t v_isSharedCheck_5153_; 
v_a_5133_ = lean_ctor_get(v___x_5132_, 0);
v_isSharedCheck_5153_ = !lean_is_exclusive(v___x_5132_);
if (v_isSharedCheck_5153_ == 0)
{
v___x_5135_ = v___x_5132_;
v_isShared_5136_ = v_isSharedCheck_5153_;
goto v_resetjp_5134_;
}
else
{
lean_inc(v_a_5133_);
lean_dec(v___x_5132_);
v___x_5135_ = lean_box(0);
v_isShared_5136_ = v_isSharedCheck_5153_;
goto v_resetjp_5134_;
}
v_resetjp_5134_:
{
uint8_t v_breaks_5137_; uint8_t v_continues_5138_; uint8_t v_returnsEarly_5139_; lean_object* v_reassigns_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5151_; 
v_breaks_5137_ = lean_ctor_get_uint8(v_a_5133_, sizeof(void*)*2);
v_continues_5138_ = lean_ctor_get_uint8(v_a_5133_, sizeof(void*)*2 + 1);
v_returnsEarly_5139_ = lean_ctor_get_uint8(v_a_5133_, sizeof(void*)*2 + 2);
v_reassigns_5140_ = lean_ctor_get(v_a_5133_, 1);
v_isSharedCheck_5151_ = !lean_is_exclusive(v_a_5133_);
if (v_isSharedCheck_5151_ == 0)
{
lean_object* v_unused_5152_; 
v_unused_5152_ = lean_ctor_get(v_a_5133_, 0);
lean_dec(v_unused_5152_);
v___x_5142_ = v_a_5133_;
v_isShared_5143_ = v_isSharedCheck_5151_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_reassigns_5140_);
lean_dec(v_a_5133_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5151_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5144_; lean_object* v___x_5146_; 
v___x_5144_ = lean_unsigned_to_nat(1u);
if (v_isShared_5143_ == 0)
{
lean_ctor_set(v___x_5142_, 0, v___x_5144_);
v___x_5146_ = v___x_5142_;
goto v_reusejp_5145_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v___x_5144_);
lean_ctor_set(v_reuseFailAlloc_5150_, 1, v_reassigns_5140_);
lean_ctor_set_uint8(v_reuseFailAlloc_5150_, sizeof(void*)*2, v_breaks_5137_);
lean_ctor_set_uint8(v_reuseFailAlloc_5150_, sizeof(void*)*2 + 1, v_continues_5138_);
lean_ctor_set_uint8(v_reuseFailAlloc_5150_, sizeof(void*)*2 + 2, v_returnsEarly_5139_);
v___x_5146_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5145_;
}
v_reusejp_5145_:
{
lean_object* v___x_5148_; 
lean_ctor_set_uint8(v___x_5146_, sizeof(void*)*2 + 3, v___x_2720_);
if (v_isShared_5136_ == 0)
{
lean_ctor_set(v___x_5135_, 0, v___x_5146_);
v___x_5148_ = v___x_5135_;
goto v_reusejp_5147_;
}
else
{
lean_object* v_reuseFailAlloc_5149_; 
v_reuseFailAlloc_5149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5149_, 0, v___x_5146_);
v___x_5148_ = v_reuseFailAlloc_5149_;
goto v_reusejp_5147_;
}
v_reusejp_5147_:
{
return v___x_5148_;
}
}
}
}
}
else
{
return v___x_5132_;
}
}
else
{
lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; 
lean_dec(v___x_5128_);
v___x_5154_ = lean_unsigned_to_nat(1u);
v___x_5155_ = l_Lean_NameSet_empty;
v___x_5156_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5156_, 0, v___x_5154_);
lean_ctor_set(v___x_5156_, 1, v___x_5155_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*2, v___x_2720_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*2 + 1, v___x_2720_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*2 + 2, v___x_2720_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*2 + 3, v___x_2720_);
v___x_5157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5157_, 0, v___x_5156_);
return v___x_5157_;
}
}
}
else
{
lean_object* v___x_5158_; lean_object* v___x_5163_; lean_object* v___x_5164_; uint8_t v___x_5165_; 
lean_del_object(v___x_2516_);
v___x_5158_ = lean_unsigned_to_nat(0u);
v___x_5163_ = lean_unsigned_to_nat(1u);
v___x_5164_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_5163_);
v___x_5165_ = l_Lean_Syntax_isNone(v___x_5164_);
if (v___x_5165_ == 0)
{
uint8_t v___x_5166_; 
v___x_5166_ = l_Lean_Syntax_matchesNull(v___x_5164_, v___x_5163_);
if (v___x_5166_ == 0)
{
lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v_env_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; 
lean_inc_n(v_stx_2476_, 2);
v___x_5167_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_5168_ = lean_st_ref_get(v_a_2482_);
v_env_5169_ = lean_ctor_get(v___x_5168_, 0);
lean_inc_ref(v_env_5169_);
lean_dec(v___x_5168_);
v___x_5170_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5171_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5170_, v_env_5169_, v___x_5167_);
v___x_5172_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5173_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_5171_, v___x_5172_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
lean_dec(v___x_5171_);
if (lean_obj_tag(v___x_5173_) == 0)
{
lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5204_; 
v_a_5174_ = lean_ctor_get(v___x_5173_, 0);
v_isSharedCheck_5204_ = !lean_is_exclusive(v___x_5173_);
if (v_isSharedCheck_5204_ == 0)
{
v___x_5176_ = v___x_5173_;
v_isShared_5177_ = v_isSharedCheck_5204_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v___x_5173_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5204_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v_fst_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5202_; 
v_fst_5178_ = lean_ctor_get(v_a_5174_, 0);
v_isSharedCheck_5202_ = !lean_is_exclusive(v_a_5174_);
if (v_isSharedCheck_5202_ == 0)
{
lean_object* v_unused_5203_; 
v_unused_5203_ = lean_ctor_get(v_a_5174_, 1);
lean_dec(v_unused_5203_);
v___x_5180_ = v_a_5174_;
v_isShared_5181_ = v_isSharedCheck_5202_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_fst_5178_);
lean_dec(v_a_5174_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5202_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
if (lean_obj_tag(v_fst_5178_) == 0)
{
lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5185_; 
lean_del_object(v___x_5176_);
v___x_5182_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_5183_ = l_Lean_MessageData_ofName(v___x_5167_);
lean_inc_ref(v___x_5183_);
if (v_isShared_5181_ == 0)
{
lean_ctor_set_tag(v___x_5180_, 7);
lean_ctor_set(v___x_5180_, 1, v___x_5183_);
lean_ctor_set(v___x_5180_, 0, v___x_5182_);
v___x_5185_ = v___x_5180_;
goto v_reusejp_5184_;
}
else
{
lean_object* v_reuseFailAlloc_5197_; 
v_reuseFailAlloc_5197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5197_, 0, v___x_5182_);
lean_ctor_set(v_reuseFailAlloc_5197_, 1, v___x_5183_);
v___x_5185_ = v_reuseFailAlloc_5197_;
goto v_reusejp_5184_;
}
v_reusejp_5184_:
{
lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; 
v___x_5186_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5187_, 0, v___x_5185_);
lean_ctor_set(v___x_5187_, 1, v___x_5186_);
v___x_5188_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_5189_ = l_Lean_indentD(v___x_5188_);
v___x_5190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5190_, 0, v___x_5187_);
lean_ctor_set(v___x_5190_, 1, v___x_5189_);
v___x_5191_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5192_, 0, v___x_5190_);
lean_ctor_set(v___x_5192_, 1, v___x_5191_);
v___x_5193_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5193_, 0, v___x_5192_);
lean_ctor_set(v___x_5193_, 1, v___x_5183_);
v___x_5194_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5195_, 0, v___x_5193_);
lean_ctor_set(v___x_5195_, 1, v___x_5194_);
v___x_5196_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5195_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_5196_;
}
}
else
{
lean_object* v_val_5198_; lean_object* v___x_5200_; 
lean_del_object(v___x_5180_);
lean_dec(v___x_5167_);
lean_dec(v_stx_2476_);
v_val_5198_ = lean_ctor_get(v_fst_5178_, 0);
lean_inc(v_val_5198_);
lean_dec_ref_known(v_fst_5178_, 1);
if (v_isShared_5177_ == 0)
{
lean_ctor_set(v___x_5176_, 0, v_val_5198_);
v___x_5200_ = v___x_5176_;
goto v_reusejp_5199_;
}
else
{
lean_object* v_reuseFailAlloc_5201_; 
v_reuseFailAlloc_5201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5201_, 0, v_val_5198_);
v___x_5200_ = v_reuseFailAlloc_5201_;
goto v_reusejp_5199_;
}
v_reusejp_5199_:
{
return v___x_5200_;
}
}
}
}
}
else
{
lean_object* v_a_5205_; lean_object* v___x_5207_; uint8_t v_isShared_5208_; uint8_t v_isSharedCheck_5212_; 
lean_dec(v___x_5167_);
lean_dec(v_stx_2476_);
v_a_5205_ = lean_ctor_get(v___x_5173_, 0);
v_isSharedCheck_5212_ = !lean_is_exclusive(v___x_5173_);
if (v_isSharedCheck_5212_ == 0)
{
v___x_5207_ = v___x_5173_;
v_isShared_5208_ = v_isSharedCheck_5212_;
goto v_resetjp_5206_;
}
else
{
lean_inc(v_a_5205_);
lean_dec(v___x_5173_);
v___x_5207_ = lean_box(0);
v_isShared_5208_ = v_isSharedCheck_5212_;
goto v_resetjp_5206_;
}
v_resetjp_5206_:
{
lean_object* v___x_5210_; 
if (v_isShared_5208_ == 0)
{
v___x_5210_ = v___x_5207_;
goto v_reusejp_5209_;
}
else
{
lean_object* v_reuseFailAlloc_5211_; 
v_reuseFailAlloc_5211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5211_, 0, v_a_5205_);
v___x_5210_ = v_reuseFailAlloc_5211_;
goto v_reusejp_5209_;
}
v_reusejp_5209_:
{
return v___x_5210_;
}
}
}
}
else
{
lean_dec(v_stx_2476_);
goto v___jp_5159_;
}
}
else
{
lean_dec(v___x_5164_);
lean_dec(v_stx_2476_);
goto v___jp_5159_;
}
v___jp_5159_:
{
lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; 
v___x_5160_ = l_Lean_NameSet_empty;
v___x_5161_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5161_, 0, v___x_5158_);
lean_ctor_set(v___x_5161_, 1, v___x_5160_);
lean_ctor_set_uint8(v___x_5161_, sizeof(void*)*2, v___x_2718_);
lean_ctor_set_uint8(v___x_5161_, sizeof(void*)*2 + 1, v___x_2718_);
lean_ctor_set_uint8(v___x_5161_, sizeof(void*)*2 + 2, v___x_2716_);
lean_ctor_set_uint8(v___x_5161_, sizeof(void*)*2 + 3, v___x_2716_);
v___x_5162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5162_, 0, v___x_5161_);
return v___x_5162_;
}
}
}
else
{
lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; 
lean_del_object(v___x_2516_);
lean_dec(v_stx_2476_);
v___x_5213_ = lean_unsigned_to_nat(0u);
v___x_5214_ = l_Lean_NameSet_empty;
v___x_5215_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5215_, 0, v___x_5213_);
lean_ctor_set(v___x_5215_, 1, v___x_5214_);
lean_ctor_set_uint8(v___x_5215_, sizeof(void*)*2, v___x_2715_);
lean_ctor_set_uint8(v___x_5215_, sizeof(void*)*2 + 1, v___x_2716_);
lean_ctor_set_uint8(v___x_5215_, sizeof(void*)*2 + 2, v___x_2715_);
lean_ctor_set_uint8(v___x_5215_, sizeof(void*)*2 + 3, v___x_2716_);
v___x_5216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5216_, 0, v___x_5215_);
return v___x_5216_;
}
}
else
{
lean_object* v___x_5217_; lean_object* v___x_5218_; 
lean_del_object(v___x_2516_);
lean_dec(v_stx_2476_);
v___x_5217_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95);
v___x_5218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5218_, 0, v___x_5217_);
return v___x_5218_;
}
v___jp_2532_:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; 
v___x_2539_ = lean_unsigned_to_nat(2u);
v___x_2540_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2539_);
v___x_2541_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2542_ = l_Lean_Syntax_isOfKind(v___x_2540_, v___x_2541_);
if (v___x_2542_ == 0)
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v_env_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
lean_inc_n(v_stx_2476_, 2);
v___x_2543_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_2544_ = lean_st_ref_get(v___y_2538_);
v_env_2545_ = lean_ctor_get(v___x_2544_, 0);
lean_inc_ref(v_env_2545_);
lean_dec(v___x_2544_);
v___x_2546_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2547_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2546_, v_env_2545_, v___x_2543_);
v___x_2548_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2549_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_2547_, v___x_2548_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
lean_dec(v___x_2547_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2580_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2552_ = v___x_2549_;
v_isShared_2553_ = v_isSharedCheck_2580_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2549_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2580_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v_fst_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2578_; 
v_fst_2554_ = lean_ctor_get(v_a_2550_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v_a_2550_);
if (v_isSharedCheck_2578_ == 0)
{
lean_object* v_unused_2579_; 
v_unused_2579_ = lean_ctor_get(v_a_2550_, 1);
lean_dec(v_unused_2579_);
v___x_2556_ = v_a_2550_;
v_isShared_2557_ = v_isSharedCheck_2578_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_fst_2554_);
lean_dec(v_a_2550_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2578_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
if (lean_obj_tag(v_fst_2554_) == 0)
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2561_; 
lean_del_object(v___x_2552_);
v___x_2558_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2559_ = l_Lean_MessageData_ofName(v___x_2543_);
lean_inc_ref(v___x_2559_);
if (v_isShared_2557_ == 0)
{
lean_ctor_set_tag(v___x_2556_, 7);
lean_ctor_set(v___x_2556_, 1, v___x_2559_);
lean_ctor_set(v___x_2556_, 0, v___x_2558_);
v___x_2561_ = v___x_2556_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2558_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v___x_2559_);
v___x_2561_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2562_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2561_);
lean_ctor_set(v___x_2563_, 1, v___x_2562_);
v___x_2564_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_2565_ = l_Lean_indentD(v___x_2564_);
v___x_2566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2563_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2566_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
v___x_2569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
lean_ctor_set(v___x_2569_, 1, v___x_2559_);
v___x_2570_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2569_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2571_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
return v___x_2572_;
}
}
else
{
lean_object* v_val_2574_; lean_object* v___x_2576_; 
lean_del_object(v___x_2556_);
lean_dec(v___x_2543_);
lean_dec(v_stx_2476_);
v_val_2574_ = lean_ctor_get(v_fst_2554_, 0);
lean_inc(v_val_2574_);
lean_dec_ref_known(v_fst_2554_, 1);
if (v_isShared_2553_ == 0)
{
lean_ctor_set(v___x_2552_, 0, v_val_2574_);
v___x_2576_ = v___x_2552_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_val_2574_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_dec(v___x_2543_);
lean_dec(v_stx_2476_);
v_a_2581_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2549_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2549_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
else
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2589_ = lean_unsigned_to_nat(7u);
v___x_2590_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2589_);
v___x_2591_ = lean_unsigned_to_nat(8u);
v___x_2592_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2591_);
lean_dec(v_stx_2476_);
v___x_2593_ = l_Lean_Syntax_getOptional_x3f(v___x_2592_);
lean_dec(v___x_2592_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v___x_2594_; 
v___x_2594_ = lean_box(0);
v___y_2490_ = v___y_2536_;
v___y_2491_ = v___y_2537_;
v___y_2492_ = v___y_2533_;
v___y_2493_ = v___x_2590_;
v___y_2494_ = v___y_2538_;
v___y_2495_ = v___y_2535_;
v___y_2496_ = v___y_2534_;
v___y_2497_ = v___x_2594_;
goto v___jp_2489_;
}
else
{
lean_object* v_val_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2602_; 
v_val_2595_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2597_ = v___x_2593_;
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_val_2595_);
lean_dec(v___x_2593_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
if (v_isShared_2598_ == 0)
{
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_val_2595_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
v___y_2490_ = v___y_2536_;
v___y_2491_ = v___y_2537_;
v___y_2492_ = v___y_2533_;
v___y_2493_ = v___x_2590_;
v___y_2494_ = v___y_2538_;
v___y_2495_ = v___y_2535_;
v___y_2496_ = v___y_2534_;
v___y_2497_ = v___x_2600_;
goto v___jp_2489_;
}
}
}
}
}
v___jp_2603_:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; 
v___x_2610_ = lean_unsigned_to_nat(2u);
v___x_2611_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2610_);
v___x_2612_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2613_ = l_Lean_Syntax_isOfKind(v___x_2611_, v___x_2612_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v_env_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
lean_del_object(v___x_2516_);
lean_inc_n(v_stx_2476_, 2);
v___x_2614_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_2615_ = lean_st_ref_get(v___y_2609_);
v_env_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc_ref(v_env_2616_);
lean_dec(v___x_2615_);
v___x_2617_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2618_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2617_, v_env_2616_, v___x_2614_);
v___x_2619_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2620_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_2618_, v___x_2619_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
lean_dec(v___x_2618_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2651_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2623_ = v___x_2620_;
v_isShared_2624_ = v_isSharedCheck_2651_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2620_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2651_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v_fst_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2649_; 
v_fst_2625_ = lean_ctor_get(v_a_2621_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v_a_2621_);
if (v_isSharedCheck_2649_ == 0)
{
lean_object* v_unused_2650_; 
v_unused_2650_ = lean_ctor_get(v_a_2621_, 1);
lean_dec(v_unused_2650_);
v___x_2627_ = v_a_2621_;
v_isShared_2628_ = v_isSharedCheck_2649_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_fst_2625_);
lean_dec(v_a_2621_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2649_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
if (lean_obj_tag(v_fst_2625_) == 0)
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2632_; 
lean_del_object(v___x_2623_);
v___x_2629_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2630_ = l_Lean_MessageData_ofName(v___x_2614_);
lean_inc_ref(v___x_2630_);
if (v_isShared_2628_ == 0)
{
lean_ctor_set_tag(v___x_2627_, 7);
lean_ctor_set(v___x_2627_, 1, v___x_2630_);
lean_ctor_set(v___x_2627_, 0, v___x_2629_);
v___x_2632_ = v___x_2627_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v___x_2629_);
lean_ctor_set(v_reuseFailAlloc_2644_, 1, v___x_2630_);
v___x_2632_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2633_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2632_);
lean_ctor_set(v___x_2634_, 1, v___x_2633_);
v___x_2635_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_2636_ = l_Lean_indentD(v___x_2635_);
v___x_2637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2634_);
lean_ctor_set(v___x_2637_, 1, v___x_2636_);
v___x_2638_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2637_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
lean_ctor_set(v___x_2640_, 1, v___x_2630_);
v___x_2641_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2642_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
return v___x_2643_;
}
}
else
{
lean_object* v_val_2645_; lean_object* v___x_2647_; 
lean_del_object(v___x_2627_);
lean_dec(v___x_2614_);
lean_dec(v_stx_2476_);
v_val_2645_ = lean_ctor_get(v_fst_2625_, 0);
lean_inc(v_val_2645_);
lean_dec_ref_known(v_fst_2625_, 1);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 0, v_val_2645_);
v___x_2647_ = v___x_2623_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_val_2645_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
lean_dec(v___x_2614_);
lean_dec(v_stx_2476_);
v_a_2652_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___x_2620_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2620_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
}
else
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v___x_2660_ = lean_unsigned_to_nat(3u);
v___x_2661_ = l_Lean_Syntax_getArg(v_stx_2476_, v___x_2660_);
v___x_2662_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11));
v___x_2663_ = l_Lean_Syntax_isOfKind(v___x_2661_, v___x_2662_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v_env_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
lean_del_object(v___x_2516_);
lean_inc_n(v_stx_2476_, 2);
v___x_2664_ = l_Lean_Syntax_getKind(v_stx_2476_);
v___x_2665_ = lean_st_ref_get(v___y_2609_);
v_env_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc_ref(v_env_2666_);
lean_dec(v___x_2665_);
v___x_2667_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2668_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2667_, v_env_2666_, v___x_2664_);
v___x_2669_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2670_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2476_, v___x_2668_, v___x_2669_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
lean_dec(v___x_2668_);
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2701_; 
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2673_ = v___x_2670_;
v_isShared_2674_ = v_isSharedCheck_2701_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2670_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2701_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v_fst_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2699_; 
v_fst_2675_ = lean_ctor_get(v_a_2671_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v_a_2671_);
if (v_isSharedCheck_2699_ == 0)
{
lean_object* v_unused_2700_; 
v_unused_2700_ = lean_ctor_get(v_a_2671_, 1);
lean_dec(v_unused_2700_);
v___x_2677_ = v_a_2671_;
v_isShared_2678_ = v_isSharedCheck_2699_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_fst_2675_);
lean_dec(v_a_2671_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2699_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
if (lean_obj_tag(v_fst_2675_) == 0)
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2682_; 
lean_del_object(v___x_2673_);
v___x_2679_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3);
v___x_2680_ = l_Lean_MessageData_ofName(v___x_2664_);
lean_inc_ref(v___x_2680_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set_tag(v___x_2677_, 7);
lean_ctor_set(v___x_2677_, 1, v___x_2680_);
lean_ctor_set(v___x_2677_, 0, v___x_2679_);
v___x_2682_ = v___x_2677_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v___x_2679_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v___x_2680_);
v___x_2682_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2683_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2682_);
lean_ctor_set(v___x_2684_, 1, v___x_2683_);
v___x_2685_ = l_Lean_MessageData_ofSyntax(v_stx_2476_);
v___x_2686_ = l_Lean_indentD(v___x_2685_);
v___x_2687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2684_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2687_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
lean_ctor_set(v___x_2690_, 1, v___x_2680_);
v___x_2691_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2690_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___x_2693_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2692_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
return v___x_2693_;
}
}
else
{
lean_object* v_val_2695_; lean_object* v___x_2697_; 
lean_del_object(v___x_2677_);
lean_dec(v___x_2664_);
lean_dec(v_stx_2476_);
v_val_2695_ = lean_ctor_get(v_fst_2675_, 0);
lean_inc(v_val_2695_);
lean_dec_ref_known(v_fst_2675_, 1);
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 0, v_val_2695_);
v___x_2697_ = v___x_2673_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_val_2695_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
lean_dec(v___x_2664_);
lean_dec(v_stx_2476_);
v_a_2702_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2670_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2670_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
else
{
lean_object* v___x_2710_; lean_object* v___x_2712_; 
lean_dec(v_stx_2476_);
v___x_2710_ = l_Lean_Elab_Do_ControlInfo_pure;
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 0, v___x_2710_);
v___x_2712_ = v___x_2516_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2710_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5220_; lean_object* v___x_5222_; uint8_t v_isShared_5223_; uint8_t v_isSharedCheck_5227_; 
lean_dec(v_stx_2476_);
v_a_5220_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_5227_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5222_ = v___x_2513_;
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
else
{
lean_inc(v_a_5220_);
lean_dec(v___x_2513_);
v___x_5222_ = lean_box(0);
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
v_resetjp_5221_:
{
lean_object* v___x_5225_; 
if (v_isShared_5223_ == 0)
{
v___x_5225_ = v___x_5222_;
goto v_reusejp_5224_;
}
else
{
lean_object* v_reuseFailAlloc_5226_; 
v_reuseFailAlloc_5226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5226_, 0, v_a_5220_);
v___x_5225_ = v_reuseFailAlloc_5226_;
goto v_reusejp_5224_;
}
v_reusejp_5224_:
{
return v___x_5225_;
}
}
}
v___jp_2484_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2485_, v_bodyInfo_2486_);
v___x_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2487_);
return v___x_2488_;
}
v___jp_2489_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2498_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___x_2499_ = lean_box(0);
v___x_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2500_, 0, v___y_2493_);
v___x_2501_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___x_2498_, v___x_2499_, v___x_2500_, v___y_2497_, v___y_2492_, v___y_2496_, v___y_2495_, v___y_2490_, v___y_2491_, v___y_2494_);
return v___x_2501_;
}
v___jp_2502_:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
return v___x_2504_;
}
v___jp_2505_:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2506_, v_bodyInfo_2507_);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
return v___x_2509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object* v_as_5228_, size_t v_sz_5229_, size_t v_i_5230_, lean_object* v_b_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_){
_start:
{
uint8_t v___x_5239_; 
v___x_5239_ = lean_usize_dec_lt(v_i_5230_, v_sz_5229_);
if (v___x_5239_ == 0)
{
lean_object* v___x_5240_; 
v___x_5240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5240_, 0, v_b_5231_);
return v___x_5240_;
}
else
{
lean_object* v_a_5241_; lean_object* v___x_5242_; 
v_a_5241_ = lean_array_uget_borrowed(v_as_5228_, v_i_5230_);
lean_inc(v_a_5241_);
v___x_5242_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_a_5241_, v___y_5232_, v___y_5233_, v___y_5234_, v___y_5235_, v___y_5236_, v___y_5237_);
if (lean_obj_tag(v___x_5242_) == 0)
{
lean_object* v_a_5243_; lean_object* v___x_5244_; size_t v___x_5245_; size_t v___x_5246_; 
v_a_5243_ = lean_ctor_get(v___x_5242_, 0);
lean_inc(v_a_5243_);
lean_dec_ref_known(v___x_5242_, 1);
v___x_5244_ = l_Lean_Elab_Do_ControlInfo_sequence(v_b_5231_, v_a_5243_);
v___x_5245_ = ((size_t)1ULL);
v___x_5246_ = lean_usize_add(v_i_5230_, v___x_5245_);
v_i_5230_ = v___x_5246_;
v_b_5231_ = v___x_5244_;
goto _start;
}
else
{
lean_dec_ref(v_b_5231_);
return v___x_5242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object* v_stx_5248_, lean_object* v_a_5249_, lean_object* v_a_5250_, lean_object* v_a_5251_, lean_object* v_a_5252_, lean_object* v_a_5253_, lean_object* v_a_5254_){
_start:
{
lean_object* v_info_5256_; lean_object* v___x_5257_; size_t v_sz_5258_; size_t v___x_5259_; lean_object* v___x_5260_; 
v_info_5256_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_5257_ = l_Lean_Parser_Term_getDoElems(v_stx_5248_);
v_sz_5258_ = lean_array_size(v___x_5257_);
v___x_5259_ = ((size_t)0ULL);
v___x_5260_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v___x_5257_, v_sz_5258_, v___x_5259_, v_info_5256_, v_a_5249_, v_a_5250_, v_a_5251_, v_a_5252_, v_a_5253_, v_a_5254_);
lean_dec_ref(v___x_5257_);
return v___x_5260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object* v_stx_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_, lean_object* v_a_5267_, lean_object* v_a_5268_){
_start:
{
lean_object* v_res_5269_; 
v_res_5269_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_stx_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_);
lean_dec(v_a_5267_);
lean_dec_ref(v_a_5266_);
lean_dec(v_a_5265_);
lean_dec_ref(v_a_5264_);
lean_dec(v_a_5263_);
lean_dec_ref(v_a_5262_);
return v_res_5269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object* v_stx_x3f_5270_, lean_object* v_a_5271_, lean_object* v_a_5272_, lean_object* v_a_5273_, lean_object* v_a_5274_, lean_object* v_a_5275_, lean_object* v_a_5276_, lean_object* v_a_5277_){
_start:
{
lean_object* v_res_5278_; 
v_res_5278_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_stx_x3f_5270_, v_a_5271_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_);
lean_dec(v_a_5276_);
lean_dec_ref(v_a_5275_);
lean_dec(v_a_5274_);
lean_dec_ref(v_a_5273_);
lean_dec(v_a_5272_);
lean_dec_ref(v_a_5271_);
return v_res_5278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object* v_as_5279_, lean_object* v_sz_5280_, lean_object* v_i_5281_, lean_object* v_b_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_){
_start:
{
size_t v_sz_boxed_5290_; size_t v_i_boxed_5291_; lean_object* v_res_5292_; 
v_sz_boxed_5290_ = lean_unbox_usize(v_sz_5280_);
lean_dec(v_sz_5280_);
v_i_boxed_5291_ = lean_unbox_usize(v_i_5281_);
lean_dec(v_i_5281_);
v_res_5292_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_as_5279_, v_sz_boxed_5290_, v_i_boxed_5291_, v_b_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_);
lean_dec(v___y_5288_);
lean_dec_ref(v___y_5287_);
lean_dec(v___y_5286_);
lean_dec_ref(v___y_5285_);
lean_dec(v___y_5284_);
lean_dec_ref(v___y_5283_);
lean_dec_ref(v_as_5279_);
return v_res_5292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object* v_as_5293_, lean_object* v_sz_5294_, lean_object* v_i_5295_, lean_object* v_b_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_){
_start:
{
size_t v_sz_boxed_5304_; size_t v_i_boxed_5305_; lean_object* v_res_5306_; 
v_sz_boxed_5304_ = lean_unbox_usize(v_sz_5294_);
lean_dec(v_sz_5294_);
v_i_boxed_5305_ = lean_unbox_usize(v_i_5295_);
lean_dec(v_i_5295_);
v_res_5306_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v_as_5293_, v_sz_boxed_5304_, v_i_boxed_5305_, v_b_5296_, v___y_5297_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_);
lean_dec(v___y_5302_);
lean_dec_ref(v___y_5301_);
lean_dec(v___y_5300_);
lean_dec_ref(v___y_5299_);
lean_dec(v___y_5298_);
lean_dec_ref(v___y_5297_);
lean_dec_ref(v_as_5293_);
return v_res_5306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object* v_reassigned_5307_, lean_object* v_rhs_x3f_5308_, lean_object* v_otherwise_x3f_5309_, lean_object* v_body_x3f_5310_, lean_object* v_a_5311_, lean_object* v_a_5312_, lean_object* v_a_5313_, lean_object* v_a_5314_, lean_object* v_a_5315_, lean_object* v_a_5316_, lean_object* v_a_5317_){
_start:
{
lean_object* v_res_5318_; 
v_res_5318_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigned_5307_, v_rhs_x3f_5308_, v_otherwise_x3f_5309_, v_body_x3f_5310_, v_a_5311_, v_a_5312_, v_a_5313_, v_a_5314_, v_a_5315_, v_a_5316_);
lean_dec(v_a_5316_);
lean_dec_ref(v_a_5315_);
lean_dec(v_a_5314_);
lean_dec_ref(v_a_5313_);
lean_dec(v_a_5312_);
lean_dec_ref(v_a_5311_);
return v_res_5318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object* v___x_5319_, lean_object* v_as_5320_, lean_object* v_sz_5321_, lean_object* v_i_5322_, lean_object* v_b_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_){
_start:
{
uint8_t v___x_177254__boxed_5331_; size_t v_sz_boxed_5332_; size_t v_i_boxed_5333_; lean_object* v_res_5334_; 
v___x_177254__boxed_5331_ = lean_unbox(v___x_5319_);
v_sz_boxed_5332_ = lean_unbox_usize(v_sz_5321_);
lean_dec(v_sz_5321_);
v_i_boxed_5333_ = lean_unbox_usize(v_i_5322_);
lean_dec(v_i_5322_);
v_res_5334_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_177254__boxed_5331_, v_as_5320_, v_sz_boxed_5332_, v_i_boxed_5333_, v_b_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec_ref(v_as_5320_);
return v_res_5334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object* v___x_5335_, lean_object* v_as_5336_, lean_object* v_sz_5337_, lean_object* v_i_5338_, lean_object* v_b_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_){
_start:
{
uint8_t v___x_177301__boxed_5347_; size_t v_sz_boxed_5348_; size_t v_i_boxed_5349_; lean_object* v_res_5350_; 
v___x_177301__boxed_5347_ = lean_unbox(v___x_5335_);
v_sz_boxed_5348_ = lean_unbox_usize(v_sz_5337_);
lean_dec(v_sz_5337_);
v_i_boxed_5349_ = lean_unbox_usize(v_i_5338_);
lean_dec(v_i_5338_);
v_res_5350_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_177301__boxed_5347_, v_as_5336_, v_sz_boxed_5348_, v_i_boxed_5349_, v_b_5339_, v___y_5340_, v___y_5341_, v___y_5342_, v___y_5343_, v___y_5344_, v___y_5345_);
lean_dec(v___y_5345_);
lean_dec_ref(v___y_5344_);
lean_dec(v___y_5343_);
lean_dec_ref(v___y_5342_);
lean_dec(v___y_5341_);
lean_dec_ref(v___y_5340_);
lean_dec_ref(v_as_5336_);
return v_res_5350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object* v_as_5351_, lean_object* v_sz_5352_, lean_object* v_i_5353_, lean_object* v_b_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_){
_start:
{
size_t v_sz_boxed_5362_; size_t v_i_boxed_5363_; lean_object* v_res_5364_; 
v_sz_boxed_5362_ = lean_unbox_usize(v_sz_5352_);
lean_dec(v_sz_5352_);
v_i_boxed_5363_ = lean_unbox_usize(v_i_5353_);
lean_dec(v_i_5353_);
v_res_5364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_as_5351_, v_sz_boxed_5362_, v_i_boxed_5363_, v_b_5354_, v___y_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v___y_5359_, v___y_5360_);
lean_dec(v___y_5360_);
lean_dec_ref(v___y_5359_);
lean_dec(v___y_5358_);
lean_dec_ref(v___y_5357_);
lean_dec(v___y_5356_);
lean_dec_ref(v___y_5355_);
lean_dec_ref(v_as_5351_);
return v_res_5364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object* v_reassignment_5365_, lean_object* v_decl_5366_, lean_object* v_a_5367_, lean_object* v_a_5368_, lean_object* v_a_5369_, lean_object* v_a_5370_, lean_object* v_a_5371_, lean_object* v_a_5372_, lean_object* v_a_5373_){
_start:
{
uint8_t v_reassignment_boxed_5374_; lean_object* v_res_5375_; 
v_reassignment_boxed_5374_ = lean_unbox(v_reassignment_5365_);
v_res_5375_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v_reassignment_boxed_5374_, v_decl_5366_, v_a_5367_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_);
lean_dec(v_a_5372_);
lean_dec_ref(v_a_5371_);
lean_dec(v_a_5370_);
lean_dec_ref(v_a_5369_);
lean_dec(v_a_5368_);
lean_dec_ref(v_a_5367_);
return v_res_5375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object* v_stx_5376_, lean_object* v_a_5377_, lean_object* v_a_5378_, lean_object* v_a_5379_, lean_object* v_a_5380_, lean_object* v_a_5381_, lean_object* v_a_5382_, lean_object* v_a_5383_){
_start:
{
lean_object* v_res_5384_; 
v_res_5384_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_stx_5376_, v_a_5377_, v_a_5378_, v_a_5379_, v_a_5380_, v_a_5381_, v_a_5382_);
lean_dec(v_a_5382_);
lean_dec_ref(v_a_5381_);
lean_dec(v_a_5380_);
lean_dec_ref(v_a_5379_);
lean_dec(v_a_5378_);
lean_dec_ref(v_a_5377_);
return v_res_5384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object* v_00_u03b1_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_){
_start:
{
lean_object* v___x_5393_; 
v___x_5393_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_5393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object* v_00_u03b1_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_, lean_object* v___y_5401_){
_start:
{
lean_object* v_res_5402_; 
v_res_5402_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(v_00_u03b1_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_, v___y_5399_, v___y_5400_);
lean_dec(v___y_5400_);
lean_dec_ref(v___y_5399_);
lean_dec(v___y_5398_);
lean_dec_ref(v___y_5397_);
lean_dec(v___y_5396_);
lean_dec_ref(v___y_5395_);
return v_res_5402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object* v_00_u03b1_5403_, lean_object* v_ref_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_){
_start:
{
lean_object* v___x_5412_; 
v___x_5412_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_5404_);
return v___x_5412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object* v_00_u03b1_5413_, lean_object* v_ref_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_){
_start:
{
lean_object* v_res_5422_; 
v_res_5422_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(v_00_u03b1_5413_, v_ref_5414_, v___y_5415_, v___y_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_);
lean_dec(v___y_5420_);
lean_dec_ref(v___y_5419_);
lean_dec(v___y_5418_);
lean_dec_ref(v___y_5417_);
lean_dec(v___y_5416_);
lean_dec_ref(v___y_5415_);
return v_res_5422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object* v_00_u03b1_5423_, lean_object* v_x_5424_, lean_object* v___y_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_){
_start:
{
lean_object* v___x_5432_; 
v___x_5432_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_);
return v___x_5432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object* v_00_u03b1_5433_, lean_object* v_x_5434_, lean_object* v___y_5435_, lean_object* v___y_5436_, lean_object* v___y_5437_, lean_object* v___y_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_){
_start:
{
lean_object* v_res_5442_; 
v_res_5442_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(v_00_u03b1_5433_, v_x_5434_, v___y_5435_, v___y_5436_, v___y_5437_, v___y_5438_, v___y_5439_, v___y_5440_);
lean_dec(v___y_5440_);
lean_dec_ref(v___y_5439_);
lean_dec(v___y_5438_);
lean_dec_ref(v___y_5437_);
lean_dec(v___y_5436_);
lean_dec_ref(v___y_5435_);
return v_res_5442_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object* v_stx_5443_, lean_object* v_as_5444_, lean_object* v_as_x27_5445_, lean_object* v_b_5446_, lean_object* v_a_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_){
_start:
{
lean_object* v___x_5455_; 
v___x_5455_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_5443_, v_as_x27_5445_, v_b_5446_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_);
return v___x_5455_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object* v_stx_5456_, lean_object* v_as_5457_, lean_object* v_as_x27_5458_, lean_object* v_b_5459_, lean_object* v_a_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_){
_start:
{
lean_object* v_res_5468_; 
v_res_5468_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(v_stx_5456_, v_as_5457_, v_as_x27_5458_, v_b_5459_, v_a_5460_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_);
lean_dec(v___y_5466_);
lean_dec_ref(v___y_5465_);
lean_dec(v___y_5464_);
lean_dec_ref(v___y_5463_);
lean_dec(v___y_5462_);
lean_dec_ref(v___y_5461_);
lean_dec(v_as_x27_5458_);
lean_dec(v_as_5457_);
return v_res_5468_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object* v_00_u03b1_5469_, lean_object* v_msg_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_){
_start:
{
lean_object* v___x_5478_; 
v___x_5478_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_5470_, v___y_5471_, v___y_5472_, v___y_5473_, v___y_5474_, v___y_5475_, v___y_5476_);
return v___x_5478_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object* v_00_u03b1_5479_, lean_object* v_msg_5480_, lean_object* v___y_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_, lean_object* v___y_5487_){
_start:
{
lean_object* v_res_5488_; 
v_res_5488_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(v_00_u03b1_5479_, v_msg_5480_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_, v___y_5485_, v___y_5486_);
lean_dec(v___y_5486_);
lean_dec_ref(v___y_5485_);
lean_dec(v___y_5484_);
lean_dec_ref(v___y_5483_);
lean_dec(v___y_5482_);
lean_dec_ref(v___y_5481_);
return v_res_5488_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object* v_cls_5489_, lean_object* v_msg_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_, lean_object* v___y_5496_){
_start:
{
lean_object* v___x_5498_; 
v___x_5498_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_5489_, v_msg_5490_, v___y_5493_, v___y_5494_, v___y_5495_, v___y_5496_);
return v___x_5498_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object* v_cls_5499_, lean_object* v_msg_5500_, lean_object* v___y_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_, lean_object* v___y_5507_){
_start:
{
lean_object* v_res_5508_; 
v_res_5508_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(v_cls_5499_, v_msg_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_, v___y_5506_);
lean_dec(v___y_5506_);
lean_dec_ref(v___y_5505_);
lean_dec(v___y_5504_);
lean_dec_ref(v___y_5503_);
lean_dec(v___y_5502_);
lean_dec_ref(v___y_5501_);
return v_res_5508_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object* v_as_5509_, lean_object* v_as_x27_5510_, lean_object* v_b_5511_, lean_object* v_a_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_, lean_object* v___y_5517_, lean_object* v___y_5518_){
_start:
{
lean_object* v___x_5520_; 
v___x_5520_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_5510_, v_b_5511_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_, v___y_5517_, v___y_5518_);
return v___x_5520_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object* v_as_5521_, lean_object* v_as_x27_5522_, lean_object* v_b_5523_, lean_object* v_a_5524_, lean_object* v___y_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_){
_start:
{
lean_object* v_res_5532_; 
v_res_5532_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(v_as_5521_, v_as_x27_5522_, v_b_5523_, v_a_5524_, v___y_5525_, v___y_5526_, v___y_5527_, v___y_5528_, v___y_5529_, v___y_5530_);
lean_dec(v___y_5530_);
lean_dec_ref(v___y_5529_);
lean_dec(v___y_5528_);
lean_dec_ref(v___y_5527_);
lean_dec(v___y_5526_);
lean_dec_ref(v___y_5525_);
lean_dec(v_as_x27_5522_);
lean_dec(v_as_5521_);
return v_res_5532_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object* v_00_u03b1_5533_, lean_object* v_ref_5534_, lean_object* v_msg_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_){
_start:
{
lean_object* v___x_5543_; 
v___x_5543_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_5534_, v_msg_5535_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_, v___y_5540_, v___y_5541_);
return v___x_5543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5544_, lean_object* v_ref_5545_, lean_object* v_msg_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_){
_start:
{
lean_object* v_res_5554_; 
v_res_5554_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(v_00_u03b1_5544_, v_ref_5545_, v_msg_5546_, v___y_5547_, v___y_5548_, v___y_5549_, v___y_5550_, v___y_5551_, v___y_5552_);
lean_dec(v___y_5552_);
lean_dec_ref(v___y_5551_);
lean_dec(v___y_5550_);
lean_dec_ref(v___y_5549_);
lean_dec(v___y_5548_);
lean_dec_ref(v___y_5547_);
lean_dec(v_ref_5545_);
return v_res_5554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object* v_msgData_5555_, lean_object* v_macroStack_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_){
_start:
{
lean_object* v___x_5564_; 
v___x_5564_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_5555_, v_macroStack_5556_, v___y_5561_);
return v___x_5564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object* v_msgData_5565_, lean_object* v_macroStack_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_, lean_object* v___y_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_, lean_object* v___y_5572_, lean_object* v___y_5573_){
_start:
{
lean_object* v_res_5574_; 
v_res_5574_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(v_msgData_5565_, v_macroStack_5566_, v___y_5567_, v___y_5568_, v___y_5569_, v___y_5570_, v___y_5571_, v___y_5572_);
lean_dec(v___y_5572_);
lean_dec_ref(v___y_5571_);
lean_dec(v___y_5570_);
lean_dec_ref(v___y_5569_);
lean_dec(v___y_5568_);
lean_dec_ref(v___y_5567_);
return v_res_5574_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object* v_00_u03b2_5575_, lean_object* v_m_5576_, lean_object* v_a_5577_){
_start:
{
lean_object* v___x_5578_; 
v___x_5578_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_5576_, v_a_5577_);
return v___x_5578_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object* v_00_u03b2_5579_, lean_object* v_m_5580_, lean_object* v_a_5581_){
_start:
{
lean_object* v_res_5582_; 
v_res_5582_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(v_00_u03b2_5579_, v_m_5580_, v_a_5581_);
lean_dec(v_a_5581_);
lean_dec_ref(v_m_5580_);
return v_res_5582_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object* v_00_u03b2_5583_, lean_object* v_x_5584_, lean_object* v_x_5585_){
_start:
{
uint8_t v___x_5586_; 
v___x_5586_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v_x_5584_, v_x_5585_);
return v___x_5586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___boxed(lean_object* v_00_u03b2_5587_, lean_object* v_x_5588_, lean_object* v_x_5589_){
_start:
{
uint8_t v_res_5590_; lean_object* v_r_5591_; 
v_res_5590_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(v_00_u03b2_5587_, v_x_5588_, v_x_5589_);
lean_dec_ref(v_x_5589_);
lean_dec_ref(v_x_5588_);
v_r_5591_ = lean_box(v_res_5590_);
return v_r_5591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27(lean_object* v_00_u03b2_5592_, lean_object* v_m_5593_, lean_object* v_a_5594_, lean_object* v_b_5595_){
_start:
{
lean_object* v___x_5596_; 
v___x_5596_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(v_m_5593_, v_a_5594_, v_b_5595_);
return v___x_5596_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(lean_object* v_00_u03b2_5597_, lean_object* v_a_5598_, lean_object* v_x_5599_){
_start:
{
lean_object* v___x_5600_; 
v___x_5600_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_5598_, v_x_5599_);
return v___x_5600_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___boxed(lean_object* v_00_u03b2_5601_, lean_object* v_a_5602_, lean_object* v_x_5603_){
_start:
{
lean_object* v_res_5604_; 
v_res_5604_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(v_00_u03b2_5601_, v_a_5602_, v_x_5603_);
lean_dec(v_x_5603_);
lean_dec(v_a_5602_);
return v_res_5604_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object* v_00_u03b2_5605_, lean_object* v_x_5606_, size_t v_x_5607_, lean_object* v_x_5608_){
_start:
{
uint8_t v___x_5609_; 
v___x_5609_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_5606_, v_x_5607_, v_x_5608_);
return v___x_5609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___boxed(lean_object* v_00_u03b2_5610_, lean_object* v_x_5611_, lean_object* v_x_5612_, lean_object* v_x_5613_){
_start:
{
size_t v_x_184318__boxed_5614_; uint8_t v_res_5615_; lean_object* v_r_5616_; 
v_x_184318__boxed_5614_ = lean_unbox_usize(v_x_5612_);
lean_dec(v_x_5612_);
v_res_5615_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(v_00_u03b2_5610_, v_x_5611_, v_x_184318__boxed_5614_, v_x_5613_);
lean_dec_ref(v_x_5613_);
lean_dec_ref(v_x_5611_);
v_r_5616_ = lean_box(v_res_5615_);
return v_r_5616_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(lean_object* v_00_u03b2_5617_, lean_object* v_a_5618_, lean_object* v_x_5619_){
_start:
{
uint8_t v___x_5620_; 
v___x_5620_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(v_a_5618_, v_x_5619_);
return v___x_5620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___boxed(lean_object* v_00_u03b2_5621_, lean_object* v_a_5622_, lean_object* v_x_5623_){
_start:
{
uint8_t v_res_5624_; lean_object* v_r_5625_; 
v_res_5624_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(v_00_u03b2_5621_, v_a_5622_, v_x_5623_);
lean_dec(v_x_5623_);
lean_dec_ref(v_a_5622_);
v_r_5625_ = lean_box(v_res_5624_);
return v_r_5625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35(lean_object* v_00_u03b2_5626_, lean_object* v_data_5627_){
_start:
{
lean_object* v___x_5628_; 
v___x_5628_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35___redArg(v_data_5627_);
return v___x_5628_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(lean_object* v_00_u03b2_5629_, lean_object* v_keys_5630_, lean_object* v_vals_5631_, lean_object* v_heq_5632_, lean_object* v_i_5633_, lean_object* v_k_5634_){
_start:
{
uint8_t v___x_5635_; 
v___x_5635_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_keys_5630_, v_i_5633_, v_k_5634_);
return v___x_5635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___boxed(lean_object* v_00_u03b2_5636_, lean_object* v_keys_5637_, lean_object* v_vals_5638_, lean_object* v_heq_5639_, lean_object* v_i_5640_, lean_object* v_k_5641_){
_start:
{
uint8_t v_res_5642_; lean_object* v_r_5643_; 
v_res_5642_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(v_00_u03b2_5636_, v_keys_5637_, v_vals_5638_, v_heq_5639_, v_i_5640_, v_k_5641_);
lean_dec_ref(v_k_5641_);
lean_dec_ref(v_vals_5638_);
lean_dec_ref(v_keys_5637_);
v_r_5643_ = lean_box(v_res_5642_);
return v_r_5643_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40(lean_object* v_00_u03b2_5644_, lean_object* v_i_5645_, lean_object* v_source_5646_, lean_object* v_target_5647_){
_start:
{
lean_object* v___x_5648_; 
v___x_5648_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40___redArg(v_i_5645_, v_source_5646_, v_target_5647_);
return v___x_5648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40_spec__42(lean_object* v_00_u03b2_5649_, lean_object* v_x_5650_, lean_object* v_x_5651_){
_start:
{
lean_object* v___x_5652_; 
v___x_5652_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__35_spec__40_spec__42___redArg(v_x_5650_, v_x_5651_);
return v___x_5652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object* v_doSeq_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_, lean_object* v_a_5657_, lean_object* v_a_5658_, lean_object* v_a_5659_){
_start:
{
lean_object* v___x_5661_; 
v___x_5661_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_doSeq_5653_, v_a_5654_, v_a_5655_, v_a_5656_, v_a_5657_, v_a_5658_, v_a_5659_);
return v___x_5661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object* v_doSeq_5662_, lean_object* v_a_5663_, lean_object* v_a_5664_, lean_object* v_a_5665_, lean_object* v_a_5666_, lean_object* v_a_5667_, lean_object* v_a_5668_, lean_object* v_a_5669_){
_start:
{
lean_object* v_res_5670_; 
v_res_5670_ = l_Lean_Elab_Do_inferControlInfoSeq(v_doSeq_5662_, v_a_5663_, v_a_5664_, v_a_5665_, v_a_5666_, v_a_5667_, v_a_5668_);
lean_dec(v_a_5668_);
lean_dec_ref(v_a_5667_);
lean_dec(v_a_5666_);
lean_dec_ref(v_a_5665_);
lean_dec(v_a_5664_);
lean_dec_ref(v_a_5663_);
return v_res_5670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object* v_doElem_5671_, lean_object* v_a_5672_, lean_object* v_a_5673_, lean_object* v_a_5674_, lean_object* v_a_5675_, lean_object* v_a_5676_, lean_object* v_a_5677_){
_start:
{
lean_object* v___x_5679_; 
v___x_5679_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_doElem_5671_, v_a_5672_, v_a_5673_, v_a_5674_, v_a_5675_, v_a_5676_, v_a_5677_);
return v___x_5679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object* v_doElem_5680_, lean_object* v_a_5681_, lean_object* v_a_5682_, lean_object* v_a_5683_, lean_object* v_a_5684_, lean_object* v_a_5685_, lean_object* v_a_5686_, lean_object* v_a_5687_){
_start:
{
lean_object* v_res_5688_; 
v_res_5688_ = l_Lean_Elab_Do_inferControlInfoElem(v_doElem_5680_, v_a_5681_, v_a_5682_, v_a_5683_, v_a_5684_, v_a_5685_, v_a_5686_);
lean_dec(v_a_5686_);
lean_dec_ref(v_a_5685_);
lean_dec(v_a_5684_);
lean_dec_ref(v_a_5683_);
lean_dec(v_a_5682_);
lean_dec_ref(v_a_5681_);
return v_res_5688_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Do_instInhabitedControlInfo_default = _init_l_Lean_Elab_Do_instInhabitedControlInfo_default();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo_default);
l_Lean_Elab_Do_instInhabitedControlInfo = _init_l_Lean_Elab_Do_instInhabitedControlInfo();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo);
l_Lean_Elab_Do_ControlInfo_pure = _init_l_Lean_Elab_Do_ControlInfo_pure();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_pure);
l_Lean_Elab_Do_ControlInfo_empty = _init_l_Lean_Elab_Do_ControlInfo_empty();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_empty);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Do_controlInfoElemAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Do_controlInfoElemAttribute);
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_InferControlInfo(builtin);
}
#ifdef __cplusplus
}
#endif
