// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Let
// Imports: meta import Init.Data.Erased public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.BuiltinDo.Basic import Lean.Elab.Do.PatternVar
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
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_withErasedProj(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Do_registerMutVarAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_findMutVar_x3f___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Do_declareMutVars_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Elab_Do_getLetDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_throwUnlessMutVarsDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBindersEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkLetConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Elab_Do_getLetRecDeclsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoIdDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_Do_declareMutVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_throwUnlessMutVarDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Do_LetOrReassign_isErasedDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_isErasedDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "an erased variable takes a plain reassignment, as in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " := e`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Impossible case in elabDoLetOrReassign. This is an elaborator bug.\n"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "`+generalize` is not supported in `do` blocks"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "`+postponeValue` is not supported in `do` blocks"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Erased.mk"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Erased"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(186, 40, 6, 0, 4, 37, 246, 41)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(74, 35, 74, 233, 12, 85, 169, 163)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(186, 40, 6, 0, 4, 37, 246, 41)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__11_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__13_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__15_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_value),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__16_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "failed to infer `"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` declaration type"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "failed to infer universe levels in `"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letMVar"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "let_mvar%"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "waitIfTypeMVar"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "wait_if_type_mvar%"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "motive"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∀"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object**);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30_spec__32___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__12_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value;
static const lean_closure_object l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "let body of "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "decl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(221, 9, 221, 202, 9, 173, 58, 127)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_value),LEAN_SCALAR_PTR_LITERAL(132, 25, 49, 206, 109, 94, 77, 137)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__4;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__6;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__8;
static const lean_string_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letEqnsDecl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_value),LEAN_SCALAR_PTR_LITERAL(82, 210, 72, 51, 179, 245, 26, 94)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30_spec__32(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "configuration options are not allowed with `let mut`"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Do_elabDoLet___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLet___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabDoLet"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 0, 15, 120, 200, 84, 91, 220)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoErased___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doErased"};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 69, 120, 16, 133, 86, 56, 26)}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__1_value;
static const lean_array_object l_Lean_Elab_Do_elabDoErased___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_elabDoErased___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoErased___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__3_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_elabDoErased___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoErased___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoErased"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 19, 50, 139, 19, 74, 58, 104)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__3_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__5 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__5_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doErasedArrow"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(176, 216, 203, 158, 108, 103, 134, 112)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "erased"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mut"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__11 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__11_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "__x"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__12 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__12_value),LEAN_SCALAR_PTR_LITERAL(238, 215, 60, 46, 39, 217, 189, 106)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__13 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__14 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__14_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__15 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__16 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__16_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_expandDoErasedArrow___closed__17 = (const lean_object*)&l_Lean_Elab_Do_expandDoErasedArrow___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expandDoErasedArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 145, 84, 137, 209, 6, 18, 127)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_elabDoHave___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_elabDoHave___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoHave___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabDoHave"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 115, 123, 116, 44, 216, 133, 101)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "letrec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetRec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetRec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "let rec body of group "};
static const lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetRec___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoLetRec"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 245, 136, 148, 64, 2, 202, 185)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoReassign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_elabDoReassign___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassign___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__0_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_elabDoReassign___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassign___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoReassign"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 53, 237, 208, 54, 227, 67, 171)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__8_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__11;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value),LEAN_SCALAR_PTR_LITERAL(182, 237, 62, 79, 212, 57, 236, 253)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__13_value),LEAN_SCALAR_PTR_LITERAL(121, 135, 27, 238, 232, 181, 75, 85)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__10_value),LEAN_SCALAR_PTR_LITERAL(204, 106, 105, 165, 210, 13, 14, 1)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__16_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "PUnit.unit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__17 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__18;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__19 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_elabDoLetElse___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__20 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__19_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__20_value),LEAN_SCALAR_PTR_LITERAL(146, 91, 82, 196, 249, 72, 203, 194)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__21 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__22 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__21_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__23 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__23_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__24 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetElse___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__22_value),((lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__24_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__25 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetElse___closed__25_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabDoLetElse"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 42, 180, 235, 57, 50, 131, 26)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Do_elabDoLetArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "configuration options are not supported with `←`"};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetArrow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__1;
static const lean_string_object l_Lean_Elab_Do_elabDoLetArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoLetArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoLetArrow___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoLetArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 6, 18, 178, 201, 235, 246, 214)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "reassignment with `|` (i.e., \"else clause\") is not supported"};
static const lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoReassignArrow___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassignArrow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "elabDoReassignArrow"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 247, 22, 101, 121, 153, 219, 18)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Elab_Do_LetOrReassign_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_mutTk_x3f_7_; uint8_t v_erased_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_mutTk_x3f_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_mutTk_x3f_7_);
v_erased_8_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*1);
lean_dec_ref_known(v_t_5_, 1);
v___x_9_ = lean_box(v_erased_8_);
v___x_10_ = lean_apply_2(v_k_6_, v_mutTk_x3f_7_, v___x_9_);
return v___x_10_;
}
else
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Elab_Do_LetOrReassign_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object* v_t_23_, lean_object* v_let_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_23_, v_let_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_let_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_27_, v_let_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object* v_t_31_, lean_object* v_have_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_31_, v_have_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_have_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_35_, v_have_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object* v_t_39_, lean_object* v_reassign_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_39_, v_reassign_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_reassign_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_43_, v_reassign_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object* v_letOrReassign_47_){
_start:
{
if (lean_obj_tag(v_letOrReassign_47_) == 0)
{
lean_object* v_mutTk_x3f_48_; 
v_mutTk_x3f_48_ = lean_ctor_get(v_letOrReassign_47_, 0);
lean_inc(v_mutTk_x3f_48_);
return v_mutTk_x3f_48_;
}
else
{
lean_object* v___x_49_; 
v___x_49_ = lean_box(0);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object* v_letOrReassign_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_50_);
lean_dec(v_letOrReassign_50_);
return v_res_51_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Do_LetOrReassign_isErasedDecl(lean_object* v_letOrReassign_52_){
_start:
{
if (lean_obj_tag(v_letOrReassign_52_) == 0)
{
uint8_t v_erased_53_; 
v_erased_53_ = lean_ctor_get_uint8(v_letOrReassign_52_, sizeof(void*)*1);
return v_erased_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_isErasedDecl___boxed(lean_object* v_letOrReassign_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l_Lean_Elab_Do_LetOrReassign_isErasedDecl(v_letOrReassign_55_);
lean_dec(v_letOrReassign_55_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg(lean_object* v_letOrReassign_58_, lean_object* v_vars_59_, lean_object* v_a_60_){
_start:
{
switch(lean_obj_tag(v_letOrReassign_58_))
{
case 0:
{
uint8_t v_erased_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_erased_62_ = lean_ctor_get_uint8(v_letOrReassign_58_, sizeof(void*)*1);
v___x_63_ = lean_box(v_erased_62_);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
case 2:
{
lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = lean_array_get_size(v_vars_59_);
v___x_67_ = lean_nat_dec_lt(v___x_65_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_box(v___x_67_);
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_array_fget_borrowed(v_vars_59_, v___x_65_);
v___x_71_ = l_Lean_TSyntax_getId(v___x_70_);
v___x_72_ = l_Lean_Elab_Do_findMutVar_x3f___redArg(v___x_71_, v_a_60_);
lean_dec(v___x_71_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_88_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_88_ == 0)
{
v___x_75_ = v___x_72_;
v_isShared_76_ = v_isSharedCheck_88_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_a_73_);
lean_dec(v___x_72_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_88_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
if (lean_obj_tag(v_a_73_) == 1)
{
lean_object* v_val_77_; uint8_t v_erased_78_; lean_object* v___x_79_; lean_object* v___x_81_; 
v_val_77_ = lean_ctor_get(v_a_73_, 0);
lean_inc(v_val_77_);
lean_dec_ref_known(v_a_73_, 1);
v_erased_78_ = lean_ctor_get_uint8(v_val_77_, sizeof(void*)*2);
lean_dec(v_val_77_);
v___x_79_ = lean_box(v_erased_78_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_79_);
v___x_81_ = v___x_75_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_79_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
else
{
uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_86_; 
lean_dec(v_a_73_);
v___x_83_ = 0;
v___x_84_ = lean_box(v___x_83_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v___x_84_);
v___x_86_ = v___x_75_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_84_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
else
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
v_a_89_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_72_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_72_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
}
default: 
{
uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = 0;
v___x_98_ = lean_box(v___x_97_);
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___redArg___boxed(lean_object* v_letOrReassign_100_, lean_object* v_vars_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_100_, v_vars_101_, v_a_102_);
lean_dec_ref(v_a_102_);
lean_dec_ref(v_vars_101_);
lean_dec(v_letOrReassign_100_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased(lean_object* v_letOrReassign_105_, lean_object* v_vars_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_105_, v_vars_106_, v_a_107_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_isErased___boxed(lean_object* v_letOrReassign_116_, lean_object* v_vars_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_Elab_Do_isErased(v_letOrReassign_116_, v_vars_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec_ref(v_a_118_);
lean_dec_ref(v_vars_117_);
lean_dec(v_letOrReassign_116_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(lean_object* v_msgData_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___x_133_; lean_object* v_env_134_; uint8_t v___x_135_; lean_object* v_env_136_; lean_object* v___x_137_; lean_object* v_toCold_138_; lean_object* v_mctx_139_; lean_object* v_lctx_140_; lean_object* v_options_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_133_ = lean_st_ref_get(v___y_131_);
v_env_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc_ref(v_env_134_);
lean_dec(v___x_133_);
v___x_135_ = 0;
v_env_136_ = l_Lean_Environment_setRecordingDeps(v_env_134_, v___x_135_);
v___x_137_ = lean_st_ref_get(v___y_129_);
v_toCold_138_ = lean_ctor_get(v___y_130_, 0);
v_mctx_139_ = lean_ctor_get(v___x_137_, 0);
lean_inc_ref(v_mctx_139_);
lean_dec(v___x_137_);
v_lctx_140_ = lean_ctor_get(v___y_128_, 2);
v_options_141_ = lean_ctor_get(v_toCold_138_, 2);
lean_inc_ref(v_options_141_);
lean_inc_ref(v_lctx_140_);
v___x_142_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_142_, 0, v_env_136_);
lean_ctor_set(v___x_142_, 1, v_mctx_139_);
lean_ctor_set(v___x_142_, 2, v_lctx_140_);
lean_ctor_set(v___x_142_, 3, v_options_141_);
v___x_143_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v_msgData_127_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msgData_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(lean_object* v_msg_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v_ref_158_; lean_object* v___x_159_; lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_168_; 
v_ref_158_ = lean_ctor_get(v___y_155_, 2);
v___x_159_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
v_a_160_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_168_ == 0)
{
v___x_162_ = v___x_159_;
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
lean_inc(v_ref_158_);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v_ref_158_);
lean_ctor_set(v___x_164_, 1, v_a_160_);
if (v_isShared_163_ == 0)
{
lean_ctor_set_tag(v___x_162_, 1);
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg___boxed(lean_object* v_msg_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(lean_object* v_ref_176_, lean_object* v_msg_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_toCold_186_; lean_object* v_currRecDepth_187_; lean_object* v_ref_188_; uint16_t v_optionFlags_189_; uint8_t v_suppressElabErrors_190_; uint8_t v_isRecordingDeps_191_; lean_object* v_ref_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_toCold_186_ = lean_ctor_get(v___y_183_, 0);
v_currRecDepth_187_ = lean_ctor_get(v___y_183_, 1);
v_ref_188_ = lean_ctor_get(v___y_183_, 2);
v_optionFlags_189_ = lean_ctor_get_uint16(v___y_183_, sizeof(void*)*3);
v_suppressElabErrors_190_ = lean_ctor_get_uint8(v___y_183_, sizeof(void*)*3 + 2);
v_isRecordingDeps_191_ = lean_ctor_get_uint8(v___y_183_, sizeof(void*)*3 + 3);
v_ref_192_ = l_Lean_replaceRef(v_ref_176_, v_ref_188_);
lean_inc(v_currRecDepth_187_);
lean_inc_ref(v_toCold_186_);
v___x_193_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_193_, 0, v_toCold_186_);
lean_ctor_set(v___x_193_, 1, v_currRecDepth_187_);
lean_ctor_set(v___x_193_, 2, v_ref_192_);
lean_ctor_set_uint16(v___x_193_, sizeof(void*)*3, v_optionFlags_189_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*3 + 2, v_suppressElabErrors_190_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*3 + 3, v_isRecordingDeps_191_);
v___x_194_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_177_, v___y_181_, v___y_182_, v___x_193_, v___y_184_);
lean_dec_ref_known(v___x_193_, 3);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg___boxed(lean_object* v_ref_195_, lean_object* v_msg_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_ref_195_, v_msg_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v_ref_195_);
return v_res_205_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__0));
v___x_208_ = l_Lean_stringToMessageData(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__2));
v___x_211_ = l_Lean_stringToMessageData(v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(lean_object* v_as_212_, size_t v_sz_213_, size_t v_i_214_, lean_object* v_b_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_a_225_; uint8_t v___x_229_; 
v___x_229_ = lean_usize_dec_lt(v_i_214_, v_sz_213_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_b_215_);
return v___x_230_;
}
else
{
lean_object* v___x_231_; lean_object* v_a_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_231_ = lean_box(0);
v_a_232_ = lean_array_uget_borrowed(v_as_212_, v_i_214_);
v___x_233_ = l_Lean_TSyntax_getId(v_a_232_);
v___x_234_ = l_Lean_Elab_Do_findMutVar_x3f___redArg(v___x_233_, v___y_216_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v___x_234_, 1);
if (lean_obj_tag(v_a_235_) == 0)
{
lean_dec(v___x_233_);
v_a_225_ = v___x_231_;
goto v___jp_224_;
}
else
{
lean_object* v_val_236_; uint8_t v_erased_237_; 
v_val_236_ = lean_ctor_get(v_a_235_, 0);
lean_inc(v_val_236_);
lean_dec_ref_known(v_a_235_, 1);
v_erased_237_ = lean_ctor_get_uint8(v_val_236_, sizeof(void*)*2);
lean_dec(v_val_236_);
if (v_erased_237_ == 0)
{
lean_dec(v___x_233_);
v_a_225_ = v___x_231_;
goto v___jp_224_;
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_238_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__1);
v___x_239_ = l_Lean_MessageData_ofName(v___x_233_);
v___x_240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___closed__3);
v___x_242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_a_232_, v___x_242_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_dec_ref_known(v___x_243_, 1);
v_a_225_ = v___x_231_;
goto v___jp_224_;
}
else
{
return v___x_243_;
}
}
}
}
else
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
lean_dec(v___x_233_);
v_a_244_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_234_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_234_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
v___jp_224_:
{
size_t v___x_226_; size_t v___x_227_; 
v___x_226_ = ((size_t)1ULL);
v___x_227_ = lean_usize_add(v_i_214_, v___x_226_);
v_i_214_ = v___x_227_;
v_b_215_ = v_a_225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1___boxed(lean_object* v_as_252_, lean_object* v_sz_253_, lean_object* v_i_254_, lean_object* v_b_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
size_t v_sz_boxed_264_; size_t v_i_boxed_265_; lean_object* v_res_266_; 
v_sz_boxed_264_ = lean_unbox_usize(v_sz_253_);
lean_dec(v_sz_253_);
v_i_boxed_265_ = lean_unbox_usize(v_i_254_);
lean_dec(v_i_254_);
v_res_266_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(v_as_252_, v_sz_boxed_264_, v_i_boxed_265_, v_b_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec_ref(v_as_252_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object* v_letOrReassign_267_, lean_object* v_vars_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
if (lean_obj_tag(v_letOrReassign_267_) == 2)
{
lean_object* v___x_277_; 
v___x_277_ = l_Lean_Elab_Do_throwUnlessMutVarsDeclared(v_vars_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_300_; 
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; 
v_unused_301_ = lean_ctor_get(v___x_277_, 0);
lean_dec(v_unused_301_);
v___x_279_ = v___x_277_;
v_isShared_280_ = v_isSharedCheck_300_;
goto v_resetjp_278_;
}
else
{
lean_dec(v___x_277_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_300_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_281_ = lean_array_get_size(v_vars_268_);
v___x_282_ = lean_unsigned_to_nat(1u);
v___x_283_ = lean_nat_dec_eq(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; size_t v_sz_285_; size_t v___x_286_; lean_object* v___x_287_; 
lean_del_object(v___x_279_);
v___x_284_ = lean_box(0);
v_sz_285_ = lean_array_size(v_vars_268_);
v___x_286_ = ((size_t)0ULL);
v___x_287_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__1(v_vars_268_, v_sz_285_, v___x_286_, v___x_284_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; 
v_unused_295_ = lean_ctor_get(v___x_287_, 0);
lean_dec(v_unused_295_);
v___x_289_ = v___x_287_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_dec(v___x_287_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_284_);
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_284_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
else
{
return v___x_287_;
}
}
else
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = lean_box(0);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_296_);
v___x_298_ = v___x_279_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
else
{
return v___x_277_;
}
}
else
{
lean_object* v___x_302_; 
v___x_302_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v_vars_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object* v_letOrReassign_303_, lean_object* v_vars_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_303_, v_vars_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec_ref(v_vars_304_);
lean_dec(v_letOrReassign_303_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(lean_object* v_00_u03b1_314_, lean_object* v_ref_315_, lean_object* v_msg_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_ref_315_, v_msg_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___boxed(lean_object* v_00_u03b1_326_, lean_object* v_ref_327_, lean_object* v_msg_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0(v_00_u03b1_326_, v_ref_327_, v_msg_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec_ref(v___y_329_);
lean_dec(v_ref_327_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(lean_object* v_00_u03b1_338_, lean_object* v_msg_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v_msg_339_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___boxed(lean_object* v_00_u03b1_349_, lean_object* v_msg_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0(v_00_u03b1_349_, v_msg_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object* v_as_360_, size_t v_sz_361_, size_t v_i_362_, lean_object* v_b_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
uint8_t v___x_372_; 
v___x_372_ = lean_usize_dec_lt(v_i_362_, v_sz_361_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v_b_363_);
return v___x_373_;
}
else
{
lean_object* v___x_374_; lean_object* v_a_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = lean_box(0);
v_a_375_ = lean_array_uget_borrowed(v_as_360_, v_i_362_);
v___x_376_ = l_Lean_TSyntax_getId(v_a_375_);
v___x_377_ = l_Lean_Elab_Do_registerMutVarAlias(v___x_376_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
if (lean_obj_tag(v___x_377_) == 0)
{
size_t v___x_378_; size_t v___x_379_; 
lean_dec_ref_known(v___x_377_, 1);
v___x_378_ = ((size_t)1ULL);
v___x_379_ = lean_usize_add(v_i_362_, v___x_378_);
v_i_362_ = v___x_379_;
v_b_363_ = v___x_374_;
goto _start;
}
else
{
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object* v_as_381_, lean_object* v_sz_382_, lean_object* v_i_383_, lean_object* v_b_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
size_t v_sz_boxed_393_; size_t v_i_boxed_394_; lean_object* v_res_395_; 
v_sz_boxed_393_ = lean_unbox_usize(v_sz_382_);
lean_dec(v_sz_382_);
v_i_boxed_394_ = lean_unbox_usize(v_i_383_);
lean_dec(v_i_383_);
v_res_395_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(v_as_381_, v_sz_boxed_393_, v_i_boxed_394_, v_b_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec_ref(v_as_381_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object* v_letOrReassign_396_, lean_object* v_vars_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
if (lean_obj_tag(v_letOrReassign_396_) == 2)
{
lean_object* v___x_406_; size_t v_sz_407_; size_t v___x_408_; lean_object* v___x_409_; 
v___x_406_ = lean_box(0);
v_sz_407_ = lean_array_size(v_vars_397_);
v___x_408_ = ((size_t)0ULL);
v___x_409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(v_vars_397_, v_sz_407_, v___x_408_, v___x_406_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_416_ == 0)
{
lean_object* v_unused_417_; 
v_unused_417_ = lean_ctor_get(v___x_409_, 0);
lean_dec(v_unused_417_);
v___x_411_ = v___x_409_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_dec(v___x_409_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_406_);
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_406_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
return v___x_409_;
}
}
else
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_box(0);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object* v_letOrReassign_420_, lean_object* v_vars_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_420_, v_vars_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec_ref(v_vars_421_);
lean_dec(v_letOrReassign_420_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(lean_object* v___x_431_, lean_object* v_b_432_, uint8_t v_a_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_Elab_Do_withErasedProj(v___x_431_, v_b_432_, v_a_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed(lean_object* v___x_443_, lean_object* v_b_444_, lean_object* v_a_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
uint8_t v_a_720__boxed_454_; lean_object* v_res_455_; 
v_a_720__boxed_454_ = lean_unbox(v_a_445_);
v_res_455_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0(v___x_443_, v_b_444_, v_a_720__boxed_454_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec_ref(v___y_446_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(uint8_t v_a_456_, lean_object* v_as_457_, size_t v_i_458_, size_t v_stop_459_, lean_object* v_b_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = lean_usize_dec_eq(v_i_458_, v_stop_459_);
if (v___x_469_ == 0)
{
size_t v___x_470_; size_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___f_474_; 
v___x_470_ = ((size_t)1ULL);
v___x_471_ = lean_usize_sub(v_i_458_, v___x_470_);
v___x_472_ = lean_array_uget_borrowed(v_as_457_, v___x_471_);
v___x_473_ = lean_box(v_a_456_);
lean_inc(v___x_472_);
v___f_474_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___lam__0___boxed), 11, 3);
lean_closure_set(v___f_474_, 0, v___x_472_);
lean_closure_set(v___f_474_, 1, v_b_460_);
lean_closure_set(v___f_474_, 2, v___x_473_);
v_i_458_ = v___x_471_;
v_b_460_ = v___f_474_;
goto _start;
}
else
{
lean_object* v___x_476_; 
lean_inc(v___y_467_);
lean_inc_ref(v___y_466_);
lean_inc(v___y_465_);
lean_inc_ref(v___y_464_);
lean_inc(v___y_463_);
lean_inc_ref(v___y_462_);
lean_inc_ref(v___y_461_);
v___x_476_ = lean_apply_8(v_b_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, lean_box(0));
return v___x_476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0___boxed(lean_object* v_a_477_, lean_object* v_as_478_, lean_object* v_i_479_, lean_object* v_stop_480_, lean_object* v_b_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
uint8_t v_a_751__boxed_490_; size_t v_i_boxed_491_; size_t v_stop_boxed_492_; lean_object* v_res_493_; 
v_a_751__boxed_490_ = lean_unbox(v_a_477_);
v_i_boxed_491_ = lean_unbox_usize(v_i_479_);
lean_dec(v_i_479_);
v_stop_boxed_492_ = lean_unbox_usize(v_stop_480_);
lean_dec(v_stop_480_);
v_res_493_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(v_a_751__boxed_490_, v_as_478_, v_i_boxed_491_, v_stop_boxed_492_, v_b_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec_ref(v_as_478_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0(lean_object* v_letOrReassign_494_, lean_object* v_vars_495_, lean_object* v_k_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_494_, v_vars_495_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v___x_506_; 
lean_dec_ref_known(v___x_505_, 1);
v___x_506_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_494_, v_vars_495_, v___y_497_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; uint8_t v___x_508_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v___x_506_, 1);
v___x_508_ = lean_unbox(v_a_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; 
lean_dec(v_a_507_);
lean_inc(v___y_503_);
lean_inc_ref(v___y_502_);
lean_inc(v___y_501_);
lean_inc_ref(v___y_500_);
lean_inc(v___y_499_);
lean_inc_ref(v___y_498_);
lean_inc_ref(v___y_497_);
v___x_509_ = lean_apply_8(v_k_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, lean_box(0));
return v___x_509_;
}
else
{
lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_510_ = lean_array_get_size(v_vars_495_);
v___x_511_ = lean_unsigned_to_nat(0u);
v___x_512_ = lean_nat_dec_lt(v___x_511_, v___x_510_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; 
lean_dec(v_a_507_);
lean_inc(v___y_503_);
lean_inc_ref(v___y_502_);
lean_inc(v___y_501_);
lean_inc_ref(v___y_500_);
lean_inc(v___y_499_);
lean_inc_ref(v___y_498_);
lean_inc_ref(v___y_497_);
v___x_513_ = lean_apply_8(v_k_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, lean_box(0));
return v___x_513_;
}
else
{
size_t v___x_514_; size_t v___x_515_; uint8_t v___x_516_; lean_object* v___x_517_; 
v___x_514_ = lean_usize_of_nat(v___x_510_);
v___x_515_ = ((size_t)0ULL);
v___x_516_ = lean_unbox(v_a_507_);
lean_dec(v_a_507_);
v___x_517_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Do_elabWithReassignments_spec__0(v___x_516_, v_vars_495_, v___x_514_, v___x_515_, v_k_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
return v___x_517_;
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_dec_ref(v_k_496_);
v_a_518_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_506_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_506_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec_ref(v_k_496_);
v_a_526_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_505_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_505_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed(lean_object* v_letOrReassign_534_, lean_object* v_vars_535_, lean_object* v_k_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lean_Elab_Do_elabWithReassignments___lam__0(v_letOrReassign_534_, v_vars_535_, v_k_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v_vars_535_);
lean_dec(v_letOrReassign_534_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object* v_letOrReassign_546_, lean_object* v_vars_547_, lean_object* v_k_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___f_557_; lean_object* v___x_558_; uint8_t v___x_559_; lean_object* v___x_560_; 
lean_inc_ref(v_vars_547_);
lean_inc(v_letOrReassign_546_);
v___f_557_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabWithReassignments___lam__0___boxed), 11, 3);
lean_closure_set(v___f_557_, 0, v_letOrReassign_546_);
lean_closure_set(v___f_557_, 1, v_vars_547_);
lean_closure_set(v___f_557_, 2, v_k_548_);
v___x_558_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_546_);
v___x_559_ = l_Lean_Elab_Do_LetOrReassign_isErasedDecl(v_letOrReassign_546_);
lean_dec(v_letOrReassign_546_);
v___x_560_ = l_Lean_Elab_Do_declareMutVars_x3f___redArg(v___x_558_, v_vars_547_, v___x_559_, v___f_557_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
lean_dec(v___x_558_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object* v_letOrReassign_561_, lean_object* v_vars_562_, lean_object* v_k_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_561_, v_vars_562_, v_k_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
lean_dec(v_a_570_);
lean_dec_ref(v_a_569_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec_ref(v_a_564_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object* v_a_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object* v_a_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(v_a_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object* v_00_u03b1_591_, lean_object* v_a_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object* v_00_u03b1_601_, lean_object* v_a_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(v_00_u03b1_601_, v_a_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
return v_res_610_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_box(1);
v___x_612_ = l_Lean_MessageData_ofFormat(v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__2));
v___x_617_ = l_Lean_MessageData_ofFormat(v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(lean_object* v_x_618_, lean_object* v_x_619_){
_start:
{
if (lean_obj_tag(v_x_619_) == 0)
{
return v_x_618_;
}
else
{
lean_object* v_head_620_; lean_object* v_tail_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_643_; 
v_head_620_ = lean_ctor_get(v_x_619_, 0);
v_tail_621_ = lean_ctor_get(v_x_619_, 1);
v_isSharedCheck_643_ = !lean_is_exclusive(v_x_619_);
if (v_isSharedCheck_643_ == 0)
{
v___x_623_ = v_x_619_;
v_isShared_624_ = v_isSharedCheck_643_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_tail_621_);
lean_inc(v_head_620_);
lean_dec(v_x_619_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_643_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v_before_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_641_; 
v_before_625_ = lean_ctor_get(v_head_620_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v_head_620_);
if (v_isSharedCheck_641_ == 0)
{
lean_object* v_unused_642_; 
v_unused_642_ = lean_ctor_get(v_head_620_, 1);
lean_dec(v_unused_642_);
v___x_627_ = v_head_620_;
v_isShared_628_ = v_isSharedCheck_641_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_before_625_);
lean_dec(v_head_620_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_641_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_629_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0);
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 7);
lean_ctor_set(v___x_627_, 1, v___x_629_);
lean_ctor_set(v___x_627_, 0, v_x_618_);
v___x_631_ = v___x_627_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_x_618_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v___x_629_);
v___x_631_ = v_reuseFailAlloc_640_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_632_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__3);
if (v_isShared_624_ == 0)
{
lean_ctor_set_tag(v___x_623_, 7);
lean_ctor_set(v___x_623_, 1, v___x_632_);
lean_ctor_set(v___x_623_, 0, v___x_631_);
v___x_634_ = v___x_623_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v___x_632_);
v___x_634_ = v_reuseFailAlloc_639_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_635_ = l_Lean_MessageData_ofSyntax(v_before_625_);
v___x_636_ = l_Lean_indentD(v___x_635_);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_634_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v_x_618_ = v___x_637_;
v_x_619_ = v_tail_621_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(lean_object* v_opts_644_, lean_object* v_opt_645_){
_start:
{
lean_object* v_name_646_; lean_object* v_defValue_647_; lean_object* v_map_648_; lean_object* v___x_649_; 
v_name_646_ = lean_ctor_get(v_opt_645_, 0);
v_defValue_647_ = lean_ctor_get(v_opt_645_, 1);
v_map_648_ = lean_ctor_get(v_opts_644_, 0);
v___x_649_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_648_, v_name_646_);
if (lean_obj_tag(v___x_649_) == 0)
{
uint8_t v___x_650_; 
v___x_650_ = lean_unbox(v_defValue_647_);
return v___x_650_;
}
else
{
lean_object* v_val_651_; 
v_val_651_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_val_651_);
lean_dec_ref_known(v___x_649_, 1);
if (lean_obj_tag(v_val_651_) == 1)
{
uint8_t v_v_652_; 
v_v_652_ = lean_ctor_get_uint8(v_val_651_, 0);
lean_dec_ref_known(v_val_651_, 0);
return v_v_652_;
}
else
{
uint8_t v___x_653_; 
lean_dec(v_val_651_);
v___x_653_ = lean_unbox(v_defValue_647_);
return v___x_653_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2___boxed(lean_object* v_opts_654_, lean_object* v_opt_655_){
_start:
{
uint8_t v_res_656_; lean_object* v_r_657_; 
v_res_656_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(v_opts_654_, v_opt_655_);
lean_dec_ref(v_opt_655_);
lean_dec_ref(v_opts_654_);
v_r_657_ = lean_box(v_res_656_);
return v_r_657_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_661_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__1));
v___x_662_ = l_Lean_MessageData_ofFormat(v___x_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(lean_object* v_msgData_663_, lean_object* v_macroStack_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_667_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_665_);
v___x_668_ = l_Lean_Elab_pp_macroStack;
v___x_669_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__2(v___x_667_, v___x_668_);
lean_dec_ref(v___x_667_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec(v_macroStack_664_);
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v_msgData_663_);
return v___x_670_;
}
else
{
if (lean_obj_tag(v_macroStack_664_) == 0)
{
lean_object* v___x_671_; 
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v_msgData_663_);
return v___x_671_;
}
else
{
lean_object* v_head_672_; lean_object* v_after_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_688_; 
v_head_672_ = lean_ctor_get(v_macroStack_664_, 0);
lean_inc(v_head_672_);
v_after_673_ = lean_ctor_get(v_head_672_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_head_672_);
if (v_isSharedCheck_688_ == 0)
{
lean_object* v_unused_689_; 
v_unused_689_ = lean_ctor_get(v_head_672_, 0);
lean_dec(v_unused_689_);
v___x_675_ = v_head_672_;
v_isShared_676_ = v_isSharedCheck_688_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_after_673_);
lean_dec(v_head_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_688_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3___closed__0);
if (v_isShared_676_ == 0)
{
lean_ctor_set_tag(v___x_675_, 7);
lean_ctor_set(v___x_675_, 1, v___x_677_);
lean_ctor_set(v___x_675_, 0, v_msgData_663_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_msgData_663_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v___x_677_);
v___x_679_ = v_reuseFailAlloc_687_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v_msgData_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_680_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___closed__2);
v___x_681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_MessageData_ofSyntax(v_after_673_);
v___x_683_ = l_Lean_indentD(v___x_682_);
v_msgData_684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_684_, 0, v___x_681_);
lean_ctor_set(v_msgData_684_, 1, v___x_683_);
v___x_685_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0_spec__3(v_msgData_684_, v_macroStack_664_);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_690_, lean_object* v_macroStack_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_msgData_690_, v_macroStack_691_, v___y_692_);
lean_dec_ref(v___y_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object* v_msg_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_ref_703_; lean_object* v_macroStack_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v_a_707_; lean_object* v___x_708_; lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_717_; 
v_ref_703_ = lean_ctor_get(v___y_700_, 2);
v_macroStack_704_ = lean_ctor_get(v___y_696_, 1);
v___x_705_ = l_Lean_Elab_getBetterRef(v_ref_703_, v_macroStack_704_);
v___x_706_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_695_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref(v___x_706_);
lean_inc(v_macroStack_704_);
v___x_708_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_a_707_, v_macroStack_704_, v___y_700_);
v_a_709_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_717_ == 0)
{
v___x_711_ = v___x_708_;
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_708_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_705_);
lean_ctor_set(v___x_713_, 1, v_a_709_);
if (v_isShared_712_ == 0)
{
lean_ctor_set_tag(v___x_711_, 1);
lean_ctor_set(v___x_711_, 0, v___x_713_);
v___x_715_ = v___x_711_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object* v_msg_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
return v_res_726_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_737_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5));
v___x_738_ = l_Lean_stringToMessageData(v___x_737_);
return v___x_738_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13(void){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Array_mkArray0___redArg();
return v___x_754_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_774_ = l_String_toRawSubstring_x27(v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object* v_letOrReassign_821_, lean_object* v_decl_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_){
_start:
{
if (lean_obj_tag(v_letOrReassign_821_) == 2)
{
lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_830_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_822_);
v___x_831_ = l_Lean_Syntax_isOfKind(v_decl_822_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_832_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_833_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_832_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_834_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_835_;
}
else
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_836_ = lean_unsigned_to_nat(0u);
v___x_837_ = l_Lean_Syntax_getArg(v_decl_822_, v___x_836_);
v___x_838_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_837_);
v___x_839_ = l_Lean_Syntax_isOfKind(v___x_837_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___y_842_; lean_object* v_pattern_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; uint8_t v___x_913_; 
v___x_840_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_837_);
v___x_913_ = l_Lean_Syntax_isOfKind(v___x_837_, v___x_840_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
lean_dec(v___x_837_);
v___x_914_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_915_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_916_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_917_;
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_918_ = lean_unsigned_to_nat(1u);
v___x_919_ = l_Lean_Syntax_getArg(v___x_837_, v___x_918_);
v___x_920_ = l_Lean_Syntax_matchesNull(v___x_919_, v___x_836_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec(v___x_837_);
v___x_921_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_922_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_923_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_924_;
}
else
{
lean_object* v_pattern_925_; lean_object* v_xType_x3f_927_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___x_961_; lean_object* v___x_962_; uint8_t v___x_963_; 
v_pattern_925_ = l_Lean_Syntax_getArg(v___x_837_, v___x_836_);
v___x_961_ = lean_unsigned_to_nat(2u);
v___x_962_ = l_Lean_Syntax_getArg(v___x_837_, v___x_961_);
v___x_963_ = l_Lean_Syntax_isNone(v___x_962_);
if (v___x_963_ == 0)
{
uint8_t v___x_964_; 
lean_inc(v___x_962_);
v___x_964_ = l_Lean_Syntax_matchesNull(v___x_962_, v___x_918_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v___x_962_);
lean_dec(v_pattern_925_);
lean_dec(v___x_837_);
v___x_965_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_966_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_965_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_967_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_968_;
}
else
{
lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_969_ = l_Lean_Syntax_getArg(v___x_962_, v___x_836_);
lean_dec(v___x_962_);
v___x_970_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_969_);
v___x_971_ = l_Lean_Syntax_isOfKind(v___x_969_, v___x_970_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
lean_dec(v___x_969_);
lean_dec(v_pattern_925_);
lean_dec(v___x_837_);
v___x_972_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_973_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_974_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_975_;
}
else
{
lean_object* v_xType_x3f_976_; lean_object* v___x_977_; 
lean_dec(v_decl_822_);
v_xType_x3f_976_ = l_Lean_Syntax_getArg(v___x_969_, v___x_918_);
lean_dec(v___x_969_);
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v_xType_x3f_976_);
v_xType_x3f_927_ = v___x_977_;
v___y_928_ = v_a_823_;
v___y_929_ = v_a_824_;
v___y_930_ = v_a_825_;
v___y_931_ = v_a_826_;
v___y_932_ = v_a_827_;
v___y_933_ = v_a_828_;
goto v___jp_926_;
}
}
}
else
{
lean_object* v___x_978_; 
lean_dec(v___x_962_);
lean_dec(v_decl_822_);
v___x_978_ = lean_box(0);
v_xType_x3f_927_ = v___x_978_;
v___y_928_ = v_a_823_;
v___y_929_ = v_a_824_;
v___y_930_ = v_a_825_;
v___y_931_ = v_a_826_;
v___y_932_ = v_a_827_;
v___y_933_ = v_a_828_;
goto v___jp_926_;
}
v___jp_926_:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_unsigned_to_nat(4u);
v___x_935_ = l_Lean_Syntax_getArg(v___x_837_, v___x_934_);
lean_dec(v___x_837_);
if (lean_obj_tag(v_xType_x3f_927_) == 0)
{
v___y_842_ = v___x_935_;
v_pattern_843_ = v_pattern_925_;
v___y_844_ = v___y_928_;
v___y_845_ = v___y_929_;
v___y_846_ = v___y_930_;
v___y_847_ = v___y_931_;
v___y_848_ = v___y_932_;
v___y_849_ = v___y_933_;
goto v___jp_841_;
}
else
{
lean_object* v_toCold_936_; lean_object* v_val_937_; lean_object* v_ref_938_; lean_object* v_quotContext_939_; lean_object* v_currMacroScope_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v_toCold_936_ = lean_ctor_get(v___y_932_, 0);
v_val_937_ = lean_ctor_get(v_xType_x3f_927_, 0);
lean_inc(v_val_937_);
lean_dec_ref_known(v_xType_x3f_927_, 1);
v_ref_938_ = lean_ctor_get(v___y_932_, 2);
v_quotContext_939_ = lean_ctor_get(v_toCold_936_, 8);
v_currMacroScope_940_ = lean_ctor_get(v_toCold_936_, 9);
v___x_941_ = l_Lean_SourceInfo_fromRef(v_ref_938_, v___x_839_);
v___x_942_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_943_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_944_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
lean_inc_n(v___x_941_, 7);
v___x_945_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_941_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_947_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_948_ = lean_box(0);
lean_inc(v_currMacroScope_940_);
lean_inc(v_quotContext_939_);
v___x_949_ = l_Lean_addMacroScope(v_quotContext_939_, v___x_948_, v_currMacroScope_940_);
v___x_950_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35));
v___x_951_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_951_, 0, v___x_941_);
lean_ctor_set(v___x_951_, 1, v___x_947_);
lean_ctor_set(v___x_951_, 2, v___x_949_);
lean_ctor_set(v___x_951_, 3, v___x_950_);
v___x_952_ = l_Lean_Syntax_node1(v___x_941_, v___x_946_, v___x_951_);
v___x_953_ = l_Lean_Syntax_node2(v___x_941_, v___x_943_, v___x_945_, v___x_952_);
v___x_954_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_955_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_941_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_957_ = l_Lean_Syntax_node1(v___x_941_, v___x_956_, v_val_937_);
v___x_958_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_959_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_941_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = l_Lean_Syntax_node5(v___x_941_, v___x_942_, v___x_953_, v_pattern_925_, v___x_955_, v___x_957_, v___x_959_);
v___y_842_ = v___x_935_;
v_pattern_843_ = v___x_960_;
v___y_844_ = v___y_928_;
v___y_845_ = v___y_929_;
v___y_846_ = v___y_930_;
v___y_847_ = v___y_931_;
v___y_848_ = v___y_932_;
v___y_849_ = v___y_933_;
goto v___jp_841_;
}
}
}
}
v___jp_841_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_850_ = lean_box(0);
v___x_851_ = lean_box(v___x_831_);
v___x_852_ = lean_box(v___x_831_);
lean_inc(v_pattern_843_);
v___x_853_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_853_, 0, v_pattern_843_);
lean_closure_set(v___x_853_, 1, v___x_850_);
lean_closure_set(v___x_853_, 2, v___x_851_);
lean_closure_set(v___x_853_, 3, v___x_852_);
v___x_854_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_853_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_856_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_855_);
lean_dec_ref_known(v___x_854_, 1);
lean_inc(v___y_849_);
lean_inc_ref(v___y_848_);
lean_inc(v___y_847_);
lean_inc_ref(v___y_846_);
v___x_856_ = lean_infer_type(v_a_855_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 1);
v___x_858_ = l_Lean_Elab_Term_exprToSyntax(v_a_857_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_toCold_859_; lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_896_; 
v_toCold_859_ = lean_ctor_get(v___y_848_, 0);
v_a_860_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_896_ == 0)
{
v___x_862_ = v___x_858_;
v_isShared_863_ = v_isSharedCheck_896_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_858_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_896_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v_ref_864_; lean_object* v_quotContext_865_; lean_object* v_currMacroScope_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v_ref_864_ = lean_ctor_get(v___y_848_, 2);
v_quotContext_865_ = lean_ctor_get(v_toCold_859_, 8);
v_currMacroScope_866_ = lean_ctor_get(v_toCold_859_, 9);
v___x_867_ = l_Lean_SourceInfo_fromRef(v_ref_864_, v___x_839_);
v___x_868_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_869_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_867_, 11);
v___x_870_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_870_, 0, v___x_867_);
lean_ctor_set(v___x_870_, 1, v___x_868_);
lean_ctor_set(v___x_870_, 2, v___x_869_);
v___x_871_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_872_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_872_, 0, v___x_867_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_874_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_875_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_876_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_867_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_878_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_879_ = lean_box(0);
lean_inc(v_currMacroScope_866_);
lean_inc(v_quotContext_865_);
v___x_880_ = l_Lean_addMacroScope(v_quotContext_865_, v___x_879_, v_currMacroScope_866_);
v___x_881_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35));
v___x_882_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_882_, 0, v___x_867_);
lean_ctor_set(v___x_882_, 1, v___x_878_);
lean_ctor_set(v___x_882_, 2, v___x_880_);
lean_ctor_set(v___x_882_, 3, v___x_881_);
v___x_883_ = l_Lean_Syntax_node1(v___x_867_, v___x_877_, v___x_882_);
v___x_884_ = l_Lean_Syntax_node2(v___x_867_, v___x_874_, v___x_876_, v___x_883_);
v___x_885_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_886_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_867_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = l_Lean_Syntax_node1(v___x_867_, v___x_868_, v_a_860_);
v___x_888_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_867_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
v___x_890_ = l_Lean_Syntax_node5(v___x_867_, v___x_873_, v___x_884_, v___y_842_, v___x_886_, v___x_887_, v___x_889_);
lean_inc_ref(v___x_870_);
v___x_891_ = l_Lean_Syntax_node5(v___x_867_, v___x_840_, v_pattern_843_, v___x_870_, v___x_870_, v___x_872_, v___x_890_);
v___x_892_ = l_Lean_Syntax_node1(v___x_867_, v___x_830_, v___x_891_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_892_);
v___x_894_ = v___x_862_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_dec(v_pattern_843_);
lean_dec(v___y_842_);
return v___x_858_;
}
}
else
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec(v_pattern_843_);
lean_dec(v___y_842_);
v_a_897_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_856_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_856_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_dec(v_pattern_843_);
lean_dec(v___y_842_);
v_a_905_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_854_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_854_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_979_ = l_Lean_Syntax_getArg(v___x_837_, v___x_836_);
v___x_980_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_979_);
v___x_981_ = l_Lean_Syntax_isOfKind(v___x_979_, v___x_980_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
lean_dec(v___x_979_);
lean_dec(v___x_837_);
v___x_982_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_983_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_984_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_985_;
}
else
{
lean_object* v_x_986_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v_a_995_; lean_object* v_xType_x3f_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_x_986_ = l_Lean_Syntax_getArg(v___x_979_, v___x_836_);
lean_dec(v___x_979_);
v___x_1072_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v_x_986_);
v___x_1073_ = l_Lean_Syntax_isOfKind(v_x_986_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
lean_dec(v_x_986_);
lean_dec(v___x_837_);
v___x_1074_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1075_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_1076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1076_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_1077_;
}
else
{
lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1078_ = lean_unsigned_to_nat(1u);
v___x_1079_ = l_Lean_Syntax_getArg(v___x_837_, v___x_1078_);
v___x_1080_ = l_Lean_Syntax_matchesNull(v___x_1079_, v___x_836_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec(v_x_986_);
lean_dec(v___x_837_);
v___x_1081_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1082_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_1083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1081_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
v___x_1084_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1083_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_1084_;
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1085_ = lean_unsigned_to_nat(2u);
v___x_1086_ = l_Lean_Syntax_getArg(v___x_837_, v___x_1085_);
v___x_1087_ = l_Lean_Syntax_isNone(v___x_1086_);
if (v___x_1087_ == 0)
{
uint8_t v___x_1088_; 
lean_inc(v___x_1086_);
v___x_1088_ = l_Lean_Syntax_matchesNull(v___x_1086_, v___x_1078_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
lean_dec(v___x_1086_);
lean_dec(v_x_986_);
lean_dec(v___x_837_);
v___x_1089_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1090_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_1091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1091_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_1092_;
}
else
{
lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; 
v___x_1093_ = l_Lean_Syntax_getArg(v___x_1086_, v___x_836_);
lean_dec(v___x_1086_);
v___x_1094_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_1093_);
v___x_1095_ = l_Lean_Syntax_isOfKind(v___x_1093_, v___x_1094_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_dec(v___x_1093_);
lean_dec(v_x_986_);
lean_dec(v___x_837_);
v___x_1096_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_1097_ = l_Lean_MessageData_ofSyntax(v_decl_822_);
v___x_1098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v___x_1099_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_1098_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
return v___x_1099_;
}
else
{
lean_object* v_xType_x3f_1100_; lean_object* v___x_1101_; 
lean_dec(v_decl_822_);
v_xType_x3f_1100_ = l_Lean_Syntax_getArg(v___x_1093_, v___x_1078_);
lean_dec(v___x_1093_);
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_xType_x3f_1100_);
v_xType_x3f_1044_ = v___x_1101_;
v___y_1045_ = v_a_823_;
v___y_1046_ = v_a_824_;
v___y_1047_ = v_a_825_;
v___y_1048_ = v_a_826_;
v___y_1049_ = v_a_827_;
v___y_1050_ = v_a_828_;
goto v___jp_1043_;
}
}
}
else
{
lean_object* v___x_1102_; 
lean_dec(v___x_1086_);
lean_dec(v_decl_822_);
v___x_1102_ = lean_box(0);
v_xType_x3f_1044_ = v___x_1102_;
v___y_1045_ = v_a_823_;
v___y_1046_ = v_a_824_;
v___y_1047_ = v_a_825_;
v___y_1048_ = v_a_826_;
v___y_1049_ = v_a_827_;
v___y_1050_ = v_a_828_;
goto v___jp_1043_;
}
}
}
v___jp_987_:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = lean_box(0);
lean_inc(v_x_986_);
v___x_997_ = l_Lean_Elab_Term_elabTermEnsuringType(v_x_986_, v_a_995_, v___x_831_, v___x_831_, v___x_996_, v___y_994_, v___y_991_, v___y_988_, v___y_992_, v___y_993_, v___y_990_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v___x_998_; lean_object* v___x_999_; 
lean_dec_ref_known(v___x_997_, 1);
v___x_998_ = l_Lean_TSyntax_getId(v_x_986_);
v___x_999_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_998_, v___y_988_, v___y_992_, v___y_993_, v___y_990_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = l_Lean_LocalDecl_type(v_a_1000_);
lean_dec(v_a_1000_);
v___x_1002_ = l_Lean_Elab_Term_exprToSyntax(v___x_1001_, v___y_994_, v___y_991_, v___y_988_, v___y_992_, v___y_993_, v___y_990_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1026_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1026_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1026_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v_ref_1007_; uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1024_; 
v_ref_1007_ = lean_ctor_get(v___y_993_, 2);
v___x_1008_ = 0;
v___x_1009_ = l_Lean_SourceInfo_fromRef(v_ref_1007_, v___x_1008_);
lean_inc_n(v___x_1009_, 7);
v___x_1010_ = l_Lean_Syntax_node1(v___x_1009_, v___x_980_, v_x_986_);
v___x_1011_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1012_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1013_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1009_);
lean_ctor_set(v___x_1013_, 1, v___x_1011_);
lean_ctor_set(v___x_1013_, 2, v___x_1012_);
v___x_1014_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_1015_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_1016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1009_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = l_Lean_Syntax_node2(v___x_1009_, v___x_1014_, v___x_1016_, v_a_1003_);
v___x_1018_ = l_Lean_Syntax_node1(v___x_1009_, v___x_1011_, v___x_1017_);
v___x_1019_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1020_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1009_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = l_Lean_Syntax_node5(v___x_1009_, v___x_838_, v___x_1010_, v___x_1013_, v___x_1018_, v___x_1020_, v___y_989_);
v___x_1022_ = l_Lean_Syntax_node1(v___x_1009_, v___x_830_, v___x_1021_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1022_);
v___x_1024_ = v___x_1005_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1022_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
else
{
lean_dec(v___y_989_);
lean_dec(v_x_986_);
return v___x_1002_;
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec(v___y_989_);
lean_dec(v_x_986_);
v_a_1027_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_999_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_999_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v___y_989_);
lean_dec(v_x_986_);
v_a_1035_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_997_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_997_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
v___jp_1043_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = lean_unsigned_to_nat(4u);
v___x_1052_ = l_Lean_Syntax_getArg(v___x_837_, v___x_1051_);
lean_dec(v___x_837_);
if (lean_obj_tag(v_xType_x3f_1044_) == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_box(0);
v___y_988_ = v___y_1047_;
v___y_989_ = v___x_1052_;
v___y_990_ = v___y_1050_;
v___y_991_ = v___y_1046_;
v___y_992_ = v___y_1048_;
v___y_993_ = v___y_1049_;
v___y_994_ = v___y_1045_;
v_a_995_ = v___x_1053_;
goto v___jp_987_;
}
else
{
lean_object* v_val_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1071_; 
v_val_1054_ = lean_ctor_get(v_xType_x3f_1044_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v_xType_x3f_1044_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1056_ = v_xType_x3f_1044_;
v_isShared_1057_ = v_isSharedCheck_1071_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_val_1054_);
lean_dec(v_xType_x3f_1044_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1071_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lean_Elab_Term_elabType(v_val_1054_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1061_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1058_, 1);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v_a_1059_);
v___x_1061_ = v___x_1056_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
v___y_988_ = v___y_1047_;
v___y_989_ = v___x_1052_;
v___y_990_ = v___y_1050_;
v___y_991_ = v___y_1046_;
v___y_992_ = v___y_1048_;
v___y_993_ = v___y_1049_;
v___y_994_ = v___y_1045_;
v_a_995_ = v___x_1061_;
goto v___jp_987_;
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_del_object(v___x_1056_);
lean_dec(v___x_1052_);
lean_dec(v_x_986_);
v_a_1063_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1058_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1058_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
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
else
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1103_, 0, v_decl_822_);
return v___x_1103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object* v_letOrReassign_1104_, lean_object* v_decl_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_1104_, v_decl_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
lean_dec(v_a_1107_);
lean_dec_ref(v_a_1106_);
lean_dec(v_letOrReassign_1104_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object* v_00_u03b1_1114_, lean_object* v_msg_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object* v_00_u03b1_1124_, lean_object* v_msg_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(v_00_u03b1_1124_, v_msg_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object* v_msgData_1134_, lean_object* v_macroStack_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___redArg(v_msgData_1134_, v_macroStack_1135_, v___y_1140_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object* v_msgData_1144_, lean_object* v_macroStack_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(v_msgData_1144_, v_macroStack_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
return v_res_1153_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1(void){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__0));
v___x_1156_ = l_Lean_stringToMessageData(v___x_1155_);
return v___x_1156_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__2));
v___x_1159_ = l_Lean_stringToMessageData(v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(lean_object* v_config_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_){
_start:
{
uint8_t v_postponeValue_1166_; uint8_t v_generalize_1167_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; 
v_postponeValue_1166_ = lean_ctor_get_uint8(v_config_1160_, sizeof(void*)*1 + 3);
v_generalize_1167_ = lean_ctor_get_uint8(v_config_1160_, sizeof(void*)*1 + 4);
if (v_postponeValue_1166_ == 0)
{
v___y_1169_ = v_a_1161_;
v___y_1170_ = v_a_1162_;
v___y_1171_ = v_a_1163_;
v___y_1172_ = v_a_1164_;
goto v___jp_1168_;
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__3);
v___x_1178_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_1177_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_);
return v___x_1178_;
}
v___jp_1168_:
{
if (v_generalize_1167_ == 0)
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_box(0);
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
else
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___closed__1);
v___x_1176_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_1175_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
return v___x_1176_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg___boxed(lean_object* v_config_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
lean_dec_ref(v_config_1179_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object* v_config_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_1186_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object* v_config_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(v_config_1196_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec(v_a_1201_);
lean_dec_ref(v_a_1200_);
lean_dec(v_a_1199_);
lean_dec_ref(v_a_1198_);
lean_dec_ref(v_a_1197_);
lean_dec_ref(v_config_1196_);
return v_res_1205_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1206_ = lean_box(0);
v___x_1207_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
lean_ctor_set(v___x_1208_, 1, v___x_1206_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg(){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___closed__0);
v___x_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg___boxed(lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(lean_object* v_00_u03b1_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___boxed(lean_object* v_00_u03b1_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0(v_00_u03b1_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v___y_1225_);
return v_res_1233_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__2));
v___x_1242_ = l_String_toRawSubstring_x27(v___x_1241_);
return v___x_1242_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__4));
v___x_1255_ = l_String_toRawSubstring_x27(v___x_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(lean_object* v_decl_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_1278_);
v___x_1288_ = l_Lean_Syntax_isOfKind(v_decl_1278_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; 
lean_dec(v_decl_1278_);
v___x_1289_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1289_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1290_ = lean_unsigned_to_nat(0u);
v___x_1291_ = l_Lean_Syntax_getArg(v_decl_1278_, v___x_1290_);
lean_dec(v_decl_1278_);
v___x_1292_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_1291_);
v___x_1293_ = l_Lean_Syntax_isOfKind(v___x_1291_, v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; 
lean_dec(v___x_1291_);
v___x_1294_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1294_;
}
else
{
lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1295_ = l_Lean_Syntax_getArg(v___x_1291_, v___x_1290_);
v___x_1296_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_1295_);
v___x_1297_ = l_Lean_Syntax_isOfKind(v___x_1295_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; 
lean_dec(v___x_1295_);
lean_dec(v___x_1291_);
v___x_1298_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1298_;
}
else
{
lean_object* v___x_1299_; lean_object* v_t_x3f_1301_; lean_object* v___y_1302_; lean_object* v___x_1385_; uint8_t v___x_1386_; 
v___x_1299_ = l_Lean_Syntax_getArg(v___x_1295_, v___x_1290_);
lean_dec(v___x_1295_);
v___x_1385_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_1299_);
v___x_1386_ = l_Lean_Syntax_isOfKind(v___x_1299_, v___x_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; 
lean_dec(v___x_1299_);
lean_dec(v___x_1291_);
v___x_1387_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1387_;
}
else
{
lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1388_ = lean_unsigned_to_nat(1u);
v___x_1389_ = l_Lean_Syntax_getArg(v___x_1291_, v___x_1388_);
v___x_1390_ = l_Lean_Syntax_matchesNull(v___x_1389_, v___x_1290_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
lean_dec(v___x_1299_);
lean_dec(v___x_1291_);
v___x_1391_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1391_;
}
else
{
lean_object* v___x_1392_; lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1392_ = lean_unsigned_to_nat(2u);
v___x_1393_ = l_Lean_Syntax_getArg(v___x_1291_, v___x_1392_);
v___x_1394_ = l_Lean_Syntax_isNone(v___x_1393_);
if (v___x_1394_ == 0)
{
uint8_t v___x_1395_; 
lean_inc(v___x_1393_);
v___x_1395_ = l_Lean_Syntax_matchesNull(v___x_1393_, v___x_1388_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; 
lean_dec(v___x_1393_);
lean_dec(v___x_1299_);
lean_dec(v___x_1291_);
v___x_1396_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1396_;
}
else
{
lean_object* v___x_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1397_ = l_Lean_Syntax_getArg(v___x_1393_, v___x_1290_);
lean_dec(v___x_1393_);
v___x_1398_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_1397_);
v___x_1399_ = l_Lean_Syntax_isOfKind(v___x_1397_, v___x_1398_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
lean_dec(v___x_1397_);
lean_dec(v___x_1299_);
lean_dec(v___x_1291_);
v___x_1400_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_1400_;
}
else
{
lean_object* v_t_x3f_1401_; lean_object* v___x_1402_; 
v_t_x3f_1401_ = l_Lean_Syntax_getArg(v___x_1397_, v___x_1388_);
lean_dec(v___x_1397_);
v___x_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1402_, 0, v_t_x3f_1401_);
v_t_x3f_1301_ = v___x_1402_;
v___y_1302_ = v_a_1284_;
goto v___jp_1300_;
}
}
}
else
{
lean_object* v___x_1403_; 
lean_dec(v___x_1393_);
v___x_1403_ = lean_box(0);
v_t_x3f_1301_ = v___x_1403_;
v___y_1302_ = v_a_1284_;
goto v___jp_1300_;
}
}
}
v___jp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = lean_unsigned_to_nat(4u);
v___x_1304_ = l_Lean_Syntax_getArg(v___x_1291_, v___x_1303_);
lean_dec(v___x_1291_);
if (lean_obj_tag(v_t_x3f_1301_) == 0)
{
lean_object* v_toCold_1305_; lean_object* v_ref_1306_; lean_object* v_quotContext_1307_; lean_object* v_currMacroScope_1308_; uint8_t v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v_toCold_1305_ = lean_ctor_get(v___y_1302_, 0);
v_ref_1306_ = lean_ctor_get(v___y_1302_, 2);
v_quotContext_1307_ = lean_ctor_get(v_toCold_1305_, 8);
v_currMacroScope_1308_ = lean_ctor_get(v_toCold_1305_, 9);
v___x_1309_ = 0;
v___x_1310_ = l_Lean_SourceInfo_fromRef(v_ref_1306_, v___x_1309_);
lean_inc_n(v___x_1310_, 7);
v___x_1311_ = l_Lean_Syntax_node1(v___x_1310_, v___x_1296_, v___x_1299_);
v___x_1312_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1313_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1314_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1310_);
lean_ctor_set(v___x_1314_, 1, v___x_1312_);
lean_ctor_set(v___x_1314_, 2, v___x_1313_);
v___x_1315_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1316_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1310_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_1318_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3);
v___x_1319_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6));
lean_inc(v_currMacroScope_1308_);
lean_inc(v_quotContext_1307_);
v___x_1320_ = l_Lean_addMacroScope(v_quotContext_1307_, v___x_1319_, v_currMacroScope_1308_);
v___x_1321_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8));
v___x_1322_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1310_);
lean_ctor_set(v___x_1322_, 1, v___x_1318_);
lean_ctor_set(v___x_1322_, 2, v___x_1320_);
lean_ctor_set(v___x_1322_, 3, v___x_1321_);
v___x_1323_ = l_Lean_Syntax_node1(v___x_1310_, v___x_1312_, v___x_1304_);
v___x_1324_ = l_Lean_Syntax_node2(v___x_1310_, v___x_1317_, v___x_1322_, v___x_1323_);
lean_inc_ref(v___x_1314_);
v___x_1325_ = l_Lean_Syntax_node5(v___x_1310_, v___x_1292_, v___x_1311_, v___x_1314_, v___x_1314_, v___x_1316_, v___x_1324_);
v___x_1326_ = l_Lean_Syntax_node1(v___x_1310_, v___x_1287_, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
return v___x_1327_;
}
else
{
lean_object* v_toCold_1328_; lean_object* v_val_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1384_; 
v_toCold_1328_ = lean_ctor_get(v___y_1302_, 0);
v_val_1329_ = lean_ctor_get(v_t_x3f_1301_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v_t_x3f_1301_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1331_ = v_t_x3f_1301_;
v_isShared_1332_ = v_isSharedCheck_1384_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_val_1329_);
lean_dec(v_t_x3f_1301_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1384_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v_ref_1333_; lean_object* v_quotContext_1334_; lean_object* v_currMacroScope_1335_; uint8_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1382_; 
v_ref_1333_ = lean_ctor_get(v___y_1302_, 2);
v_quotContext_1334_ = lean_ctor_get(v_toCold_1328_, 8);
v_currMacroScope_1335_ = lean_ctor_get(v_toCold_1328_, 9);
v___x_1336_ = 0;
v___x_1337_ = l_Lean_SourceInfo_fromRef(v_ref_1333_, v___x_1336_);
lean_inc_n(v___x_1337_, 19);
v___x_1338_ = l_Lean_Syntax_node1(v___x_1337_, v___x_1296_, v___x_1299_);
v___x_1339_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_1340_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_1341_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1337_);
lean_ctor_set(v___x_1341_, 1, v___x_1339_);
lean_ctor_set(v___x_1341_, 2, v___x_1340_);
v___x_1342_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_1343_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_1344_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1337_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_1346_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__9);
v___x_1347_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__10));
lean_inc_n(v_currMacroScope_1335_, 3);
lean_inc_n(v_quotContext_1334_, 3);
v___x_1348_ = l_Lean_addMacroScope(v_quotContext_1334_, v___x_1347_, v_currMacroScope_1335_);
v___x_1349_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__14));
v___x_1350_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1337_);
lean_ctor_set(v___x_1350_, 1, v___x_1346_);
lean_ctor_set(v___x_1350_, 2, v___x_1348_);
lean_ctor_set(v___x_1350_, 3, v___x_1349_);
v___x_1351_ = l_Lean_Syntax_node1(v___x_1337_, v___x_1339_, v_val_1329_);
lean_inc(v___x_1351_);
v___x_1352_ = l_Lean_Syntax_node2(v___x_1337_, v___x_1345_, v___x_1350_, v___x_1351_);
lean_inc_ref(v___x_1344_);
v___x_1353_ = l_Lean_Syntax_node2(v___x_1337_, v___x_1342_, v___x_1344_, v___x_1352_);
v___x_1354_ = l_Lean_Syntax_node1(v___x_1337_, v___x_1339_, v___x_1353_);
v___x_1355_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_1356_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1337_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__3);
v___x_1358_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__6));
v___x_1359_ = l_Lean_addMacroScope(v_quotContext_1334_, v___x_1358_, v_currMacroScope_1335_);
v___x_1360_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__8));
v___x_1361_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1337_);
lean_ctor_set(v___x_1361_, 1, v___x_1357_);
lean_ctor_set(v___x_1361_, 2, v___x_1359_);
lean_ctor_set(v___x_1361_, 3, v___x_1360_);
v___x_1362_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16));
v___x_1363_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18));
v___x_1364_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_1365_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1337_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v___x_1366_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_1367_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_1368_ = lean_box(0);
v___x_1369_ = l_Lean_addMacroScope(v_quotContext_1334_, v___x_1368_, v_currMacroScope_1335_);
v___x_1370_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__17));
v___x_1371_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1337_);
lean_ctor_set(v___x_1371_, 1, v___x_1367_);
lean_ctor_set(v___x_1371_, 2, v___x_1369_);
lean_ctor_set(v___x_1371_, 3, v___x_1370_);
v___x_1372_ = l_Lean_Syntax_node1(v___x_1337_, v___x_1366_, v___x_1371_);
v___x_1373_ = l_Lean_Syntax_node2(v___x_1337_, v___x_1363_, v___x_1365_, v___x_1372_);
v___x_1374_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_1375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1337_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___x_1376_ = l_Lean_Syntax_node5(v___x_1337_, v___x_1362_, v___x_1373_, v___x_1304_, v___x_1344_, v___x_1351_, v___x_1375_);
v___x_1377_ = l_Lean_Syntax_node1(v___x_1337_, v___x_1339_, v___x_1376_);
v___x_1378_ = l_Lean_Syntax_node2(v___x_1337_, v___x_1345_, v___x_1361_, v___x_1377_);
v___x_1379_ = l_Lean_Syntax_node5(v___x_1337_, v___x_1292_, v___x_1338_, v___x_1341_, v___x_1354_, v___x_1356_, v___x_1378_);
v___x_1380_ = l_Lean_Syntax_node1(v___x_1337_, v___x_1287_, v___x_1379_);
if (v_isShared_1332_ == 0)
{
lean_ctor_set_tag(v___x_1331_, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1380_);
v___x_1382_ = v___x_1331_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1380_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___boxed(lean_object* v_decl_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(v_decl_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_);
lean_dec(v_a_1411_);
lean_dec_ref(v_a_1410_);
lean_dec(v_a_1409_);
lean_dec_ref(v_a_1408_);
lean_dec(v_a_1407_);
lean_dec_ref(v_a_1406_);
lean_dec_ref(v_a_1405_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(lean_object* v_lctx_1414_, lean_object* v_x_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_keyedConfig_1423_; uint8_t v_trackZetaDelta_1424_; lean_object* v_zetaDeltaSet_1425_; lean_object* v_localInstances_1426_; lean_object* v_defEqCtx_x3f_1427_; lean_object* v_synthPendingDepth_1428_; lean_object* v_customCanUnfoldPredicate_x3f_1429_; uint8_t v_univApprox_1430_; uint8_t v_inTypeClassResolution_1431_; uint8_t v_cacheInferType_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v_keyedConfig_1423_ = lean_ctor_get(v___y_1418_, 0);
v_trackZetaDelta_1424_ = lean_ctor_get_uint8(v___y_1418_, sizeof(void*)*7);
v_zetaDeltaSet_1425_ = lean_ctor_get(v___y_1418_, 1);
v_localInstances_1426_ = lean_ctor_get(v___y_1418_, 3);
v_defEqCtx_x3f_1427_ = lean_ctor_get(v___y_1418_, 4);
v_synthPendingDepth_1428_ = lean_ctor_get(v___y_1418_, 5);
v_customCanUnfoldPredicate_x3f_1429_ = lean_ctor_get(v___y_1418_, 6);
v_univApprox_1430_ = lean_ctor_get_uint8(v___y_1418_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1431_ = lean_ctor_get_uint8(v___y_1418_, sizeof(void*)*7 + 2);
v_cacheInferType_1432_ = lean_ctor_get_uint8(v___y_1418_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_1429_);
lean_inc(v_synthPendingDepth_1428_);
lean_inc(v_defEqCtx_x3f_1427_);
lean_inc_ref(v_localInstances_1426_);
lean_inc(v_zetaDeltaSet_1425_);
lean_inc_ref(v_keyedConfig_1423_);
v___x_1433_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1433_, 0, v_keyedConfig_1423_);
lean_ctor_set(v___x_1433_, 1, v_zetaDeltaSet_1425_);
lean_ctor_set(v___x_1433_, 2, v_lctx_1414_);
lean_ctor_set(v___x_1433_, 3, v_localInstances_1426_);
lean_ctor_set(v___x_1433_, 4, v_defEqCtx_x3f_1427_);
lean_ctor_set(v___x_1433_, 5, v_synthPendingDepth_1428_);
lean_ctor_set(v___x_1433_, 6, v_customCanUnfoldPredicate_x3f_1429_);
lean_ctor_set_uint8(v___x_1433_, sizeof(void*)*7, v_trackZetaDelta_1424_);
lean_ctor_set_uint8(v___x_1433_, sizeof(void*)*7 + 1, v_univApprox_1430_);
lean_ctor_set_uint8(v___x_1433_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1431_);
lean_ctor_set_uint8(v___x_1433_, sizeof(void*)*7 + 3, v_cacheInferType_1432_);
lean_inc(v___y_1421_);
lean_inc_ref(v___y_1420_);
lean_inc(v___y_1419_);
lean_inc(v___y_1417_);
lean_inc_ref(v___y_1416_);
v___x_1434_ = lean_apply_7(v_x_1415_, v___y_1416_, v___y_1417_, v___x_1433_, v___y_1419_, v___y_1420_, v___y_1421_, lean_box(0));
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
else
{
return v___x_1434_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg___boxed(lean_object* v_lctx_1443_, lean_object* v_x_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v_lctx_1443_, v_x_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(lean_object* v_00_u03b1_1453_, lean_object* v_lctx_1454_, lean_object* v_x_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v_lctx_1454_, v_x_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object* v_00_u03b1_1464_, lean_object* v_lctx_1465_, lean_object* v_x_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(v_00_u03b1_1464_, v_lctx_1465_, v_x_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(lean_object* v_k_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v_b_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v___x_1485_; 
lean_inc(v___y_1483_);
lean_inc_ref(v___y_1482_);
lean_inc(v___y_1481_);
lean_inc_ref(v___y_1480_);
lean_inc(v___y_1478_);
lean_inc_ref(v___y_1477_);
lean_inc_ref(v___y_1476_);
v___x_1485_ = lean_apply_9(v_k_1475_, v_b_1479_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, lean_box(0));
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed(lean_object* v_k_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v_b_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0(v_k_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v_b_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
lean_dec_ref(v___y_1487_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(lean_object* v_name_1497_, lean_object* v_type_1498_, lean_object* v_val_1499_, lean_object* v_k_1500_, uint8_t v_nondep_1501_, uint8_t v_kind_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v___f_1511_; lean_object* v___x_1512_; 
lean_inc(v___y_1505_);
lean_inc_ref(v___y_1504_);
lean_inc_ref(v___y_1503_);
v___f_1511_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1511_, 0, v_k_1500_);
lean_closure_set(v___f_1511_, 1, v___y_1503_);
lean_closure_set(v___f_1511_, 2, v___y_1504_);
lean_closure_set(v___f_1511_, 3, v___y_1505_);
v___x_1512_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1497_, v_type_1498_, v_val_1499_, v___f_1511_, v_nondep_1501_, v_kind_1502_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
if (lean_obj_tag(v___x_1512_) == 0)
{
return v___x_1512_;
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
v_a_1513_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1512_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg___boxed(lean_object* v_name_1521_, lean_object* v_type_1522_, lean_object* v_val_1523_, lean_object* v_k_1524_, lean_object* v_nondep_1525_, lean_object* v_kind_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
uint8_t v_nondep_boxed_1535_; uint8_t v_kind_boxed_1536_; lean_object* v_res_1537_; 
v_nondep_boxed_1535_ = lean_unbox(v_nondep_1525_);
v_kind_boxed_1536_ = lean_unbox(v_kind_1526_);
v_res_1537_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v_name_1521_, v_type_1522_, v_val_1523_, v_k_1524_, v_nondep_boxed_1535_, v_kind_boxed_1536_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec_ref(v___y_1527_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object* v_00_u03b1_1538_, lean_object* v_name_1539_, lean_object* v_type_1540_, lean_object* v_val_1541_, lean_object* v_k_1542_, uint8_t v_nondep_1543_, uint8_t v_kind_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v_name_1539_, v_type_1540_, v_val_1541_, v_k_1542_, v_nondep_1543_, v_kind_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object* v_00_u03b1_1554_, lean_object* v_name_1555_, lean_object* v_type_1556_, lean_object* v_val_1557_, lean_object* v_k_1558_, lean_object* v_nondep_1559_, lean_object* v_kind_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
uint8_t v_nondep_boxed_1569_; uint8_t v_kind_boxed_1570_; lean_object* v_res_1571_; 
v_nondep_boxed_1569_ = lean_unbox(v_nondep_1559_);
v_kind_boxed_1570_ = lean_unbox(v_kind_1560_);
v_res_1571_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(v_00_u03b1_1554_, v_name_1555_, v_type_1556_, v_val_1557_, v_k_1558_, v_nondep_boxed_1569_, v_kind_boxed_1570_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec_ref(v___y_1561_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object* v_value_1572_, lean_object* v___x_1573_, uint8_t v___x_1574_, lean_object* v___x_1575_, lean_object* v___x_1576_, uint8_t v___x_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_Lean_Elab_Term_elabTermEnsuringType(v_value_1572_, v___x_1573_, v___x_1574_, v___x_1574_, v___x_1575_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; uint8_t v___x_1587_; lean_object* v___x_1588_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1587_ = 1;
v___x_1588_ = l_Lean_Meta_mkLambdaFVars(v___x_1576_, v_a_1586_, v___x_1577_, v___x_1577_, v___x_1577_, v___x_1574_, v___x_1587_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_);
return v___x_1588_;
}
else
{
return v___x_1585_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object* v_value_1589_, lean_object* v___x_1590_, lean_object* v___x_1591_, lean_object* v___x_1592_, lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
uint8_t v___x_89937__boxed_1602_; uint8_t v___x_89940__boxed_1603_; lean_object* v_res_1604_; 
v___x_89937__boxed_1602_ = lean_unbox(v___x_1591_);
v___x_89940__boxed_1603_ = lean_unbox(v___x_1594_);
v_res_1604_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(v_value_1589_, v___x_1590_, v___x_89937__boxed_1602_, v___x_1592_, v___x_1593_, v___x_89940__boxed_1603_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec_ref(v___x_1593_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(size_t v_sz_1605_, size_t v_i_1606_, lean_object* v_bs_1607_){
_start:
{
uint8_t v___x_1608_; 
v___x_1608_ = lean_usize_dec_lt(v_i_1606_, v_sz_1605_);
if (v___x_1608_ == 0)
{
return v_bs_1607_;
}
else
{
lean_object* v_v_1609_; lean_object* v_snd_1610_; lean_object* v___x_1611_; lean_object* v_bs_x27_1612_; size_t v___x_1613_; size_t v___x_1614_; lean_object* v___x_1615_; 
v_v_1609_ = lean_array_uget_borrowed(v_bs_1607_, v_i_1606_);
v_snd_1610_ = lean_ctor_get(v_v_1609_, 1);
lean_inc(v_snd_1610_);
v___x_1611_ = lean_unsigned_to_nat(0u);
v_bs_x27_1612_ = lean_array_uset(v_bs_1607_, v_i_1606_, v___x_1611_);
v___x_1613_ = ((size_t)1ULL);
v___x_1614_ = lean_usize_add(v_i_1606_, v___x_1613_);
v___x_1615_ = lean_array_uset(v_bs_x27_1612_, v_i_1606_, v_snd_1610_);
v_i_1606_ = v___x_1614_;
v_bs_1607_ = v___x_1615_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object* v_sz_1617_, lean_object* v_i_1618_, lean_object* v_bs_1619_){
_start:
{
size_t v_sz_boxed_1620_; size_t v_i_boxed_1621_; lean_object* v_res_1622_; 
v_sz_boxed_1620_ = lean_unbox_usize(v_sz_1617_);
lean_dec(v_sz_1617_);
v_i_boxed_1621_ = lean_unbox_usize(v_i_1618_);
lean_dec(v_i_1618_);
v_res_1622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(v_sz_boxed_1620_, v_i_boxed_1621_, v_bs_1619_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(lean_object* v_x_1623_, lean_object* v_x_1624_, lean_object* v_x_1625_, lean_object* v_x_1626_){
_start:
{
lean_object* v_ks_1627_; lean_object* v_vs_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1652_; 
v_ks_1627_ = lean_ctor_get(v_x_1623_, 0);
v_vs_1628_ = lean_ctor_get(v_x_1623_, 1);
v_isSharedCheck_1652_ = !lean_is_exclusive(v_x_1623_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1630_ = v_x_1623_;
v_isShared_1631_ = v_isSharedCheck_1652_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_vs_1628_);
lean_inc(v_ks_1627_);
lean_dec(v_x_1623_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1652_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; uint8_t v___x_1633_; 
v___x_1632_ = lean_array_get_size(v_ks_1627_);
v___x_1633_ = lean_nat_dec_lt(v_x_1624_, v___x_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1637_; 
lean_dec(v_x_1624_);
v___x_1634_ = lean_array_push(v_ks_1627_, v_x_1625_);
v___x_1635_ = lean_array_push(v_vs_1628_, v_x_1626_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 1, v___x_1635_);
lean_ctor_set(v___x_1630_, 0, v___x_1634_);
v___x_1637_ = v___x_1630_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1634_);
lean_ctor_set(v_reuseFailAlloc_1638_, 1, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
else
{
lean_object* v_k_x27_1639_; uint8_t v___x_1640_; 
v_k_x27_1639_ = lean_array_fget_borrowed(v_ks_1627_, v_x_1624_);
v___x_1640_ = l_Lean_instBEqFVarId_beq(v_x_1625_, v_k_x27_1639_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1642_; 
if (v_isShared_1631_ == 0)
{
v___x_1642_ = v___x_1630_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_ks_1627_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_vs_1628_);
v___x_1642_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = lean_nat_add(v_x_1624_, v___x_1643_);
lean_dec(v_x_1624_);
v_x_1623_ = v___x_1642_;
v_x_1624_ = v___x_1644_;
goto _start;
}
}
else
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1650_; 
v___x_1647_ = lean_array_fset(v_ks_1627_, v_x_1624_, v_x_1625_);
v___x_1648_ = lean_array_fset(v_vs_1628_, v_x_1624_, v_x_1626_);
lean_dec(v_x_1624_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 1, v___x_1648_);
lean_ctor_set(v___x_1630_, 0, v___x_1647_);
v___x_1650_ = v___x_1630_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1647_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(lean_object* v_n_1653_, lean_object* v_k_1654_, lean_object* v_v_1655_){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = lean_unsigned_to_nat(0u);
v___x_1657_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(v_n_1653_, v___x_1656_, v_k_1654_, v_v_1655_);
return v___x_1657_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object* v_x_1659_, size_t v_x_1660_, size_t v_x_1661_, lean_object* v_x_1662_, lean_object* v_x_1663_){
_start:
{
if (lean_obj_tag(v_x_1659_) == 0)
{
lean_object* v_es_1664_; size_t v___x_1665_; size_t v___x_1666_; lean_object* v_j_1667_; lean_object* v___x_1668_; uint8_t v___x_1669_; 
v_es_1664_ = lean_ctor_get(v_x_1659_, 0);
v___x_1665_ = ((size_t)31ULL);
v___x_1666_ = lean_usize_land(v_x_1660_, v___x_1665_);
v_j_1667_ = lean_usize_to_nat(v___x_1666_);
v___x_1668_ = lean_array_get_size(v_es_1664_);
v___x_1669_ = lean_nat_dec_lt(v_j_1667_, v___x_1668_);
if (v___x_1669_ == 0)
{
lean_dec(v_j_1667_);
lean_dec(v_x_1663_);
lean_dec(v_x_1662_);
return v_x_1659_;
}
else
{
lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1708_; 
lean_inc_ref(v_es_1664_);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_x_1659_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; 
v_unused_1709_ = lean_ctor_get(v_x_1659_, 0);
lean_dec(v_unused_1709_);
v___x_1671_ = v_x_1659_;
v_isShared_1672_ = v_isSharedCheck_1708_;
goto v_resetjp_1670_;
}
else
{
lean_dec(v_x_1659_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1708_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v_v_1673_; lean_object* v___x_1674_; lean_object* v_xs_x27_1675_; lean_object* v___y_1677_; 
v_v_1673_ = lean_array_fget(v_es_1664_, v_j_1667_);
v___x_1674_ = lean_box(0);
v_xs_x27_1675_ = lean_array_fset(v_es_1664_, v_j_1667_, v___x_1674_);
switch(lean_obj_tag(v_v_1673_))
{
case 0:
{
lean_object* v_key_1682_; lean_object* v_val_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1693_; 
v_key_1682_ = lean_ctor_get(v_v_1673_, 0);
v_val_1683_ = lean_ctor_get(v_v_1673_, 1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_v_1673_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1685_ = v_v_1673_;
v_isShared_1686_ = v_isSharedCheck_1693_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_val_1683_);
lean_inc(v_key_1682_);
lean_dec(v_v_1673_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1693_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
uint8_t v___x_1687_; 
v___x_1687_ = l_Lean_instBEqFVarId_beq(v_x_1662_, v_key_1682_);
if (v___x_1687_ == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_del_object(v___x_1685_);
v___x_1688_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1682_, v_val_1683_, v_x_1662_, v_x_1663_);
v___x_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
v___y_1677_ = v___x_1689_;
goto v___jp_1676_;
}
else
{
lean_object* v___x_1691_; 
lean_dec(v_val_1683_);
lean_dec(v_key_1682_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 1, v_x_1663_);
lean_ctor_set(v___x_1685_, 0, v_x_1662_);
v___x_1691_ = v___x_1685_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_x_1662_);
lean_ctor_set(v_reuseFailAlloc_1692_, 1, v_x_1663_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
v___y_1677_ = v___x_1691_;
goto v___jp_1676_;
}
}
}
}
case 1:
{
lean_object* v_node_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1706_; 
v_node_1694_ = lean_ctor_get(v_v_1673_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_v_1673_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1696_ = v_v_1673_;
v_isShared_1697_ = v_isSharedCheck_1706_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_node_1694_);
lean_dec(v_v_1673_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1706_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
size_t v___x_1698_; size_t v___x_1699_; size_t v___x_1700_; size_t v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1704_; 
v___x_1698_ = ((size_t)5ULL);
v___x_1699_ = lean_usize_shift_right(v_x_1660_, v___x_1698_);
v___x_1700_ = ((size_t)1ULL);
v___x_1701_ = lean_usize_add(v_x_1661_, v___x_1700_);
v___x_1702_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_node_1694_, v___x_1699_, v___x_1701_, v_x_1662_, v_x_1663_);
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 0, v___x_1702_);
v___x_1704_ = v___x_1696_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1702_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
v___y_1677_ = v___x_1704_;
goto v___jp_1676_;
}
}
}
default: 
{
lean_object* v___x_1707_; 
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v_x_1662_);
lean_ctor_set(v___x_1707_, 1, v_x_1663_);
v___y_1677_ = v___x_1707_;
goto v___jp_1676_;
}
}
v___jp_1676_:
{
lean_object* v___x_1678_; lean_object* v___x_1680_; 
v___x_1678_ = lean_array_fset(v_xs_x27_1675_, v_j_1667_, v___y_1677_);
lean_dec(v_j_1667_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 0, v___x_1678_);
v___x_1680_ = v___x_1671_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v___x_1678_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
else
{
lean_object* v_ks_1710_; lean_object* v_vs_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1729_; 
v_ks_1710_ = lean_ctor_get(v_x_1659_, 0);
v_vs_1711_ = lean_ctor_get(v_x_1659_, 1);
v_isSharedCheck_1729_ = !lean_is_exclusive(v_x_1659_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1713_ = v_x_1659_;
v_isShared_1714_ = v_isSharedCheck_1729_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_vs_1711_);
lean_inc(v_ks_1710_);
lean_dec(v_x_1659_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1729_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_ks_1710_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v_vs_1711_);
v___x_1716_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v_newNode_1717_; size_t v___x_1718_; uint8_t v___x_1719_; 
v_newNode_1717_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(v___x_1716_, v_x_1662_, v_x_1663_);
v___x_1718_ = ((size_t)7ULL);
v___x_1719_ = lean_usize_dec_le(v___x_1718_, v_x_1661_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; lean_object* v___x_1721_; uint8_t v___x_1722_; 
v___x_1720_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1717_);
v___x_1721_ = lean_unsigned_to_nat(4u);
v___x_1722_ = lean_nat_dec_lt(v___x_1720_, v___x_1721_);
lean_dec(v___x_1720_);
if (v___x_1722_ == 0)
{
lean_object* v_ks_1723_; lean_object* v_vs_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_ks_1723_ = lean_ctor_get(v_newNode_1717_, 0);
lean_inc_ref(v_ks_1723_);
v_vs_1724_ = lean_ctor_get(v_newNode_1717_, 1);
lean_inc_ref(v_vs_1724_);
lean_dec_ref(v_newNode_1717_);
v___x_1725_ = lean_unsigned_to_nat(0u);
v___x_1726_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0);
v___x_1727_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_x_1661_, v_ks_1723_, v_vs_1724_, v___x_1725_, v___x_1726_);
lean_dec_ref(v_vs_1724_);
lean_dec_ref(v_ks_1723_);
return v___x_1727_;
}
else
{
return v_newNode_1717_;
}
}
else
{
return v_newNode_1717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(size_t v_depth_1730_, lean_object* v_keys_1731_, lean_object* v_vals_1732_, lean_object* v_i_1733_, lean_object* v_entries_1734_){
_start:
{
lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1735_ = lean_array_get_size(v_keys_1731_);
v___x_1736_ = lean_nat_dec_lt(v_i_1733_, v___x_1735_);
if (v___x_1736_ == 0)
{
lean_dec(v_i_1733_);
return v_entries_1734_;
}
else
{
lean_object* v_k_1737_; lean_object* v_v_1738_; uint64_t v___x_1739_; size_t v_h_1740_; size_t v___x_1741_; lean_object* v___x_1742_; size_t v___x_1743_; size_t v___x_1744_; size_t v___x_1745_; size_t v_h_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_k_1737_ = lean_array_fget_borrowed(v_keys_1731_, v_i_1733_);
v_v_1738_ = lean_array_fget_borrowed(v_vals_1732_, v_i_1733_);
v___x_1739_ = l_Lean_instHashableFVarId_hash(v_k_1737_);
v_h_1740_ = lean_uint64_to_usize(v___x_1739_);
v___x_1741_ = ((size_t)5ULL);
v___x_1742_ = lean_unsigned_to_nat(1u);
v___x_1743_ = ((size_t)1ULL);
v___x_1744_ = lean_usize_sub(v_depth_1730_, v___x_1743_);
v___x_1745_ = lean_usize_mul(v___x_1741_, v___x_1744_);
v_h_1746_ = lean_usize_shift_right(v_h_1740_, v___x_1745_);
v___x_1747_ = lean_nat_add(v_i_1733_, v___x_1742_);
lean_dec(v_i_1733_);
lean_inc(v_v_1738_);
lean_inc(v_k_1737_);
v___x_1748_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_entries_1734_, v_h_1746_, v_depth_1730_, v_k_1737_, v_v_1738_);
v_i_1733_ = v___x_1747_;
v_entries_1734_ = v___x_1748_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_depth_1750_, lean_object* v_keys_1751_, lean_object* v_vals_1752_, lean_object* v_i_1753_, lean_object* v_entries_1754_){
_start:
{
size_t v_depth_boxed_1755_; lean_object* v_res_1756_; 
v_depth_boxed_1755_ = lean_unbox_usize(v_depth_1750_);
lean_dec(v_depth_1750_);
v_res_1756_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_depth_boxed_1755_, v_keys_1751_, v_vals_1752_, v_i_1753_, v_entries_1754_);
lean_dec_ref(v_vals_1752_);
lean_dec_ref(v_keys_1751_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object* v_x_1757_, lean_object* v_x_1758_, lean_object* v_x_1759_, lean_object* v_x_1760_, lean_object* v_x_1761_){
_start:
{
size_t v_x_90072__boxed_1762_; size_t v_x_90073__boxed_1763_; lean_object* v_res_1764_; 
v_x_90072__boxed_1762_ = lean_unbox_usize(v_x_1758_);
lean_dec(v_x_1758_);
v_x_90073__boxed_1763_ = lean_unbox_usize(v_x_1759_);
lean_dec(v_x_1759_);
v_res_1764_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1757_, v_x_90072__boxed_1762_, v_x_90073__boxed_1763_, v_x_1760_, v_x_1761_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object* v_x_1765_, lean_object* v_x_1766_, lean_object* v_x_1767_){
_start:
{
uint64_t v___x_1768_; size_t v___x_1769_; size_t v___x_1770_; lean_object* v___x_1771_; 
v___x_1768_ = l_Lean_instHashableFVarId_hash(v_x_1766_);
v___x_1769_ = lean_uint64_to_usize(v___x_1768_);
v___x_1770_ = ((size_t)1ULL);
v___x_1771_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1765_, v___x_1769_, v___x_1770_, v_x_1766_, v_x_1767_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object* v_as_1772_, size_t v_i_1773_, size_t v_stop_1774_, lean_object* v_b_1775_){
_start:
{
lean_object* v___y_1777_; uint8_t v___x_1781_; 
v___x_1781_ = lean_usize_dec_eq(v_i_1773_, v_stop_1774_);
if (v___x_1781_ == 0)
{
lean_object* v_fvarIdToDecl_1782_; lean_object* v_decls_1783_; lean_object* v_auxDeclToFullName_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v_fvarIdToDecl_1782_ = lean_ctor_get(v_b_1775_, 0);
v_decls_1783_ = lean_ctor_get(v_b_1775_, 1);
v_auxDeclToFullName_1784_ = lean_ctor_get(v_b_1775_, 2);
v___x_1785_ = lean_array_uget_borrowed(v_as_1772_, v_i_1773_);
v___x_1786_ = l_Lean_Expr_fvarId_x21(v___x_1785_);
lean_inc_ref(v_b_1775_);
v___x_1787_ = lean_local_ctx_find(v_b_1775_, v___x_1786_);
if (lean_obj_tag(v___x_1787_) == 0)
{
v___y_1777_ = v_b_1775_;
goto v___jp_1776_;
}
else
{
lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1814_; 
lean_inc(v_auxDeclToFullName_1784_);
lean_inc_ref(v_decls_1783_);
lean_inc_ref(v_fvarIdToDecl_1782_);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_b_1775_);
if (v_isSharedCheck_1814_ == 0)
{
lean_object* v_unused_1815_; lean_object* v_unused_1816_; lean_object* v_unused_1817_; 
v_unused_1815_ = lean_ctor_get(v_b_1775_, 2);
lean_dec(v_unused_1815_);
v_unused_1816_ = lean_ctor_get(v_b_1775_, 1);
lean_dec(v_unused_1816_);
v_unused_1817_ = lean_ctor_get(v_b_1775_, 0);
lean_dec(v_unused_1817_);
v___x_1789_ = v_b_1775_;
v_isShared_1790_ = v_isSharedCheck_1814_;
goto v_resetjp_1788_;
}
else
{
lean_dec(v_b_1775_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1814_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v_val_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1813_; 
v_val_1791_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1793_ = v___x_1787_;
v_isShared_1794_ = v_isSharedCheck_1813_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_val_1791_);
lean_dec(v___x_1787_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1813_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1809_; lean_object* v_fvarId_1812_; 
v___x_1795_ = l_Lean_LocalDecl_type(v_val_1791_);
v___x_1796_ = l_Lean_Expr_cleanupAnnotations(v___x_1795_);
v___x_1797_ = l_Lean_LocalDecl_setType(v_val_1791_, v___x_1796_);
v_fvarId_1812_ = lean_ctor_get(v___x_1797_, 1);
lean_inc(v_fvarId_1812_);
v___y_1809_ = v_fvarId_1812_;
goto v___jp_1808_;
v___jp_1798_:
{
lean_object* v___x_1802_; 
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 0, v___x_1797_);
v___x_1802_ = v___x_1793_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v___x_1797_);
v___x_1802_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
lean_object* v___x_1803_; lean_object* v___x_1805_; 
v___x_1803_ = l_Lean_PersistentArray_set___redArg(v_decls_1783_, v___y_1800_, v___x_1802_);
lean_dec(v___y_1800_);
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 1, v___x_1803_);
lean_ctor_set(v___x_1789_, 0, v___y_1799_);
v___x_1805_ = v___x_1789_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v___y_1799_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1806_, 2, v_auxDeclToFullName_1784_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
v___y_1777_ = v___x_1805_;
goto v___jp_1776_;
}
}
}
v___jp_1808_:
{
lean_object* v___x_1810_; lean_object* v_index_1811_; 
lean_inc_ref(v___x_1797_);
v___x_1810_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_fvarIdToDecl_1782_, v___y_1809_, v___x_1797_);
v_index_1811_ = lean_ctor_get(v___x_1797_, 0);
lean_inc(v_index_1811_);
v___y_1799_ = v___x_1810_;
v___y_1800_ = v_index_1811_;
goto v___jp_1798_;
}
}
}
}
}
else
{
return v_b_1775_;
}
v___jp_1776_:
{
size_t v___x_1778_; size_t v___x_1779_; 
v___x_1778_ = ((size_t)1ULL);
v___x_1779_ = lean_usize_add(v_i_1773_, v___x_1778_);
v_i_1773_ = v___x_1779_;
v_b_1775_ = v___y_1777_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object* v_as_1818_, lean_object* v_i_1819_, lean_object* v_stop_1820_, lean_object* v_b_1821_){
_start:
{
size_t v_i_boxed_1822_; size_t v_stop_boxed_1823_; lean_object* v_res_1824_; 
v_i_boxed_1822_ = lean_unbox_usize(v_i_1819_);
lean_dec(v_i_1819_);
v_stop_boxed_1823_ = lean_unbox_usize(v_stop_1820_);
lean_dec(v_stop_1820_);
v_res_1824_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v_as_1818_, v_i_boxed_1822_, v_stop_boxed_1823_, v_b_1821_);
lean_dec_ref(v_as_1818_);
return v_res_1824_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1826_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0));
v___x_1827_ = l_Lean_stringToMessageData(v___x_1826_);
return v___x_1827_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1829_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2));
v___x_1830_ = l_Lean_stringToMessageData(v___x_1829_);
return v___x_1830_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1832_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4));
v___x_1833_ = l_Lean_stringToMessageData(v___x_1832_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object* v_type_1836_, lean_object* v_value_1837_, uint8_t v___x_1838_, uint8_t v___x_1839_, lean_object* v___x_1840_, uint8_t v___y_1841_, lean_object* v_xs_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
size_t v_sz_1850_; size_t v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; lean_object* v___x_1855_; 
v_sz_1850_ = lean_array_size(v_xs_1842_);
v___x_1851_ = ((size_t)0ULL);
v___x_1852_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(v_sz_1850_, v___x_1851_, v_xs_1842_);
lean_inc(v_type_1836_);
v___x_1853_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabType___boxed), 8, 1);
lean_closure_set(v___x_1853_, 0, v_type_1836_);
v___x_1854_ = 2;
v___x_1855_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1853_, v___x_1854_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___y_1858_; lean_object* v___y_1894_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v___x_1855_, 1);
if (v___y_1841_ == 0)
{
lean_object* v___x_1927_; 
v___x_1927_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
v___y_1894_ = v___x_1927_;
goto v___jp_1893_;
}
else
{
lean_object* v___x_1928_; 
v___x_1928_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7));
v___y_1894_ = v___x_1928_;
goto v___jp_1893_;
}
v___jp_1857_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___f_1863_; lean_object* v___x_1864_; 
lean_inc(v_a_1856_);
v___x_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1859_, 0, v_a_1856_);
v___x_1860_ = lean_box(0);
v___x_1861_ = lean_box(v___x_1838_);
v___x_1862_ = lean_box(v___x_1839_);
lean_inc_ref(v___x_1852_);
v___f_1863_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed), 13, 6);
lean_closure_set(v___f_1863_, 0, v_value_1837_);
lean_closure_set(v___f_1863_, 1, v___x_1859_);
lean_closure_set(v___f_1863_, 2, v___x_1861_);
lean_closure_set(v___f_1863_, 3, v___x_1860_);
lean_closure_set(v___f_1863_, 4, v___x_1852_);
lean_closure_set(v___f_1863_, 5, v___x_1862_);
v___x_1864_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___redArg(v___y_1858_, v___f_1863_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; uint8_t v___x_1866_; lean_object* v___x_1867_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref_known(v___x_1864_, 1);
v___x_1866_ = 1;
v___x_1867_ = l_Lean_Meta_mkForallFVars(v___x_1852_, v_a_1856_, v___x_1839_, v___x_1838_, v___x_1838_, v___x_1866_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
lean_dec_ref(v___x_1852_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1876_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; lean_object* v___x_1874_; 
v___x_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1872_, 0, v_a_1868_);
lean_ctor_set(v___x_1872_, 1, v_a_1865_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v___x_1872_);
v___x_1874_ = v___x_1870_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_dec(v_a_1865_);
v_a_1877_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1867_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1867_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec(v_a_1856_);
lean_dec_ref(v___x_1852_);
v_a_1885_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1864_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1864_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
v___jp_1893_:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1895_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1);
lean_inc_ref(v___y_1894_);
v___x_1896_ = l_Lean_stringToMessageData(v___y_1894_);
lean_inc_ref(v___x_1896_);
v___x_1897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1895_);
lean_ctor_set(v___x_1897_, 1, v___x_1896_);
v___x_1898_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3);
v___x_1899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
lean_inc(v_type_1836_);
v___x_1900_ = l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(v_a_1856_, v_type_1836_, v___x_1899_, v___y_1844_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
lean_dec_ref_known(v___x_1900_, 1);
v___x_1901_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5);
v___x_1902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
lean_ctor_set(v___x_1902_, 1, v___x_1896_);
v___x_1903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
lean_ctor_set(v___x_1903_, 1, v___x_1898_);
v___x_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1904_, 0, v___x_1903_);
lean_inc(v_a_1856_);
v___x_1905_ = l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(v_a_1856_, v_type_1836_, v___x_1904_, v___y_1844_, v___y_1845_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_lctx_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; 
lean_dec_ref_known(v___x_1905_, 1);
v_lctx_1906_ = lean_ctor_get(v___y_1845_, 2);
v___x_1907_ = lean_array_get_size(v___x_1852_);
v___x_1908_ = lean_nat_dec_lt(v___x_1840_, v___x_1907_);
if (v___x_1908_ == 0)
{
lean_inc_ref(v_lctx_1906_);
v___y_1858_ = v_lctx_1906_;
goto v___jp_1857_;
}
else
{
size_t v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_usize_of_nat(v___x_1907_);
lean_inc_ref(v_lctx_1906_);
v___x_1910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v___x_1852_, v___x_1851_, v___x_1909_, v_lctx_1906_);
v___y_1858_ = v___x_1910_;
goto v___jp_1857_;
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec(v_a_1856_);
lean_dec_ref(v___x_1852_);
lean_dec(v_value_1837_);
v_a_1911_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1905_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1905_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec_ref(v___x_1896_);
lean_dec(v_a_1856_);
lean_dec_ref(v___x_1852_);
lean_dec(v_value_1837_);
lean_dec(v_type_1836_);
v_a_1919_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1900_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1900_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_dec_ref(v___x_1852_);
lean_dec(v_value_1837_);
lean_dec(v_type_1836_);
v_a_1929_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1855_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1855_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object* v_type_1937_, lean_object* v_value_1938_, lean_object* v___x_1939_, lean_object* v___x_1940_, lean_object* v___x_1941_, lean_object* v___y_1942_, lean_object* v_xs_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_){
_start:
{
uint8_t v___x_90369__boxed_1951_; uint8_t v___x_90370__boxed_1952_; uint8_t v___y_90372__boxed_1953_; lean_object* v_res_1954_; 
v___x_90369__boxed_1951_ = lean_unbox(v___x_1939_);
v___x_90370__boxed_1952_ = lean_unbox(v___x_1940_);
v___y_90372__boxed_1953_ = lean_unbox(v___y_1942_);
v_res_1954_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(v_type_1937_, v_value_1938_, v___x_90369__boxed_1951_, v___x_90370__boxed_1952_, v___x_1941_, v___y_90372__boxed_1953_, v_xs_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v___x_1941_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object* v_val_1955_, lean_object* v_a_1956_, lean_object* v_letOrReassign_1957_, lean_object* v_a_1958_, uint8_t v_zeta_1959_, uint8_t v___y_1960_, lean_object* v_x_1961_, uint8_t v_usedOnly_1962_, uint8_t v___x_1963_, lean_object* v_snd_1964_, lean_object* v_h_x27_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v___x_1974_; 
lean_inc_ref(v_h_x27_1965_);
v___x_1974_ = l_Lean_Elab_Term_addLocalVarInfo(v_val_1955_, v_h_x27_1965_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
lean_dec_ref_known(v___x_1974_, 1);
v___x_1975_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_1975_, 0, v_a_1956_);
v___x_1976_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_1957_, v_a_1958_, v___x_1975_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1976_) == 0)
{
if (v_zeta_1959_ == 0)
{
if (v___y_1960_ == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; uint8_t v___x_1982_; lean_object* v___x_1983_; 
lean_dec_ref(v_snd_1964_);
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1978_ = lean_unsigned_to_nat(2u);
v___x_1979_ = lean_mk_empty_array_with_capacity(v___x_1978_);
v___x_1980_ = lean_array_push(v___x_1979_, v_x_1961_);
v___x_1981_ = lean_array_push(v___x_1980_, v_h_x27_1965_);
v___x_1982_ = 1;
v___x_1983_ = l_Lean_Meta_mkLetFVars(v___x_1981_, v_a_1977_, v_usedOnly_1962_, v___y_1960_, v___x_1982_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec_ref(v___x_1981_);
return v___x_1983_;
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; 
v_a_1984_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1985_ = lean_unsigned_to_nat(2u);
v___x_1986_ = lean_mk_empty_array_with_capacity(v___x_1985_);
v___x_1987_ = lean_array_push(v___x_1986_, v_x_1961_);
v___x_1988_ = lean_array_push(v___x_1987_, v_h_x27_1965_);
v___x_1989_ = 1;
v___x_1990_ = l_Lean_Meta_mkLambdaFVars(v___x_1988_, v_a_1984_, v_zeta_1959_, v___x_1963_, v_zeta_1959_, v___x_1963_, v___x_1989_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec_ref(v___x_1988_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v_a_1991_; lean_object* v___x_1992_; 
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
lean_inc(v_a_1991_);
lean_dec_ref_known(v___x_1990_, 1);
lean_inc_ref(v_snd_1964_);
v___x_1992_ = l_Lean_Meta_mkEqRefl(v_snd_1964_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2001_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1995_ = v___x_1992_;
v_isShared_1996_ = v_isSharedCheck_2001_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1992_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2001_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1999_; 
v___x_1997_ = l_Lean_mkAppB(v_a_1991_, v_snd_1964_, v_a_1993_);
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 0, v___x_1997_);
v___x_1999_ = v___x_1995_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
else
{
lean_dec(v_a_1991_);
lean_dec_ref(v_snd_1964_);
return v___x_1992_;
}
}
else
{
lean_dec_ref(v_snd_1964_);
return v___x_1990_;
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v_a_2002_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_2003_ = lean_unsigned_to_nat(2u);
v___x_2004_ = lean_mk_empty_array_with_capacity(v___x_2003_);
lean_inc_ref(v___x_2004_);
v___x_2005_ = lean_array_push(v___x_2004_, v_x_1961_);
v___x_2006_ = lean_array_push(v___x_2005_, v_h_x27_1965_);
v___x_2007_ = l_Lean_Expr_abstractM(v_a_2002_, v___x_2006_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec_ref(v___x_2006_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; lean_object* v___x_2009_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v___x_2007_, 1);
lean_inc_ref(v_snd_1964_);
v___x_2009_ = l_Lean_Meta_mkEqRefl(v_snd_1964_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2020_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2012_ = v___x_2009_;
v_isShared_2013_ = v_isSharedCheck_2020_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_2009_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2020_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2018_; 
v___x_2014_ = lean_array_push(v___x_2004_, v_snd_1964_);
v___x_2015_ = lean_array_push(v___x_2014_, v_a_2010_);
v___x_2016_ = lean_expr_instantiate_rev(v_a_2008_, v___x_2015_);
lean_dec_ref(v___x_2015_);
lean_dec(v_a_2008_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 0, v___x_2016_);
v___x_2018_ = v___x_2012_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2016_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
else
{
lean_dec(v_a_2008_);
lean_dec_ref(v___x_2004_);
lean_dec_ref(v_snd_1964_);
return v___x_2009_;
}
}
else
{
lean_dec_ref(v___x_2004_);
lean_dec_ref(v_snd_1964_);
return v___x_2007_;
}
}
}
else
{
lean_dec_ref(v_h_x27_1965_);
lean_dec_ref(v_snd_1964_);
lean_dec_ref(v_x_1961_);
return v___x_1976_;
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v_h_x27_1965_);
lean_dec_ref(v_snd_1964_);
lean_dec_ref(v_x_1961_);
lean_dec_ref(v_a_1958_);
lean_dec(v_letOrReassign_1957_);
lean_dec_ref(v_a_1956_);
v_a_2021_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_1974_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_1974_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object** _args){
lean_object* v_val_2029_ = _args[0];
lean_object* v_a_2030_ = _args[1];
lean_object* v_letOrReassign_2031_ = _args[2];
lean_object* v_a_2032_ = _args[3];
lean_object* v_zeta_2033_ = _args[4];
lean_object* v___y_2034_ = _args[5];
lean_object* v_x_2035_ = _args[6];
lean_object* v_usedOnly_2036_ = _args[7];
lean_object* v___x_2037_ = _args[8];
lean_object* v_snd_2038_ = _args[9];
lean_object* v_h_x27_2039_ = _args[10];
lean_object* v___y_2040_ = _args[11];
lean_object* v___y_2041_ = _args[12];
lean_object* v___y_2042_ = _args[13];
lean_object* v___y_2043_ = _args[14];
lean_object* v___y_2044_ = _args[15];
lean_object* v___y_2045_ = _args[16];
lean_object* v___y_2046_ = _args[17];
lean_object* v___y_2047_ = _args[18];
_start:
{
uint8_t v_zeta_boxed_2048_; uint8_t v___y_90591__boxed_2049_; uint8_t v_usedOnly_boxed_2050_; uint8_t v___x_90592__boxed_2051_; lean_object* v_res_2052_; 
v_zeta_boxed_2048_ = lean_unbox(v_zeta_2033_);
v___y_90591__boxed_2049_ = lean_unbox(v___y_2034_);
v_usedOnly_boxed_2050_ = lean_unbox(v_usedOnly_2036_);
v___x_90592__boxed_2051_ = lean_unbox(v___x_2037_);
v_res_2052_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(v_val_2029_, v_a_2030_, v_letOrReassign_2031_, v_a_2032_, v_zeta_boxed_2048_, v___y_90591__boxed_2049_, v_x_2035_, v_usedOnly_boxed_2050_, v___x_90592__boxed_2051_, v_snd_2038_, v_h_x27_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec_ref(v___y_2040_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object* v_id_2053_, lean_object* v_eq_x3f_2054_, lean_object* v_a_2055_, lean_object* v_letOrReassign_2056_, lean_object* v_a_2057_, uint8_t v_zeta_2058_, uint8_t v_usedOnly_2059_, lean_object* v_snd_2060_, uint8_t v___y_2061_, uint8_t v___x_2062_, lean_object* v_x_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v___x_2072_; 
lean_inc_ref(v_x_2063_);
v___x_2072_ = l_Lean_Elab_Term_addLocalVarInfo(v_id_2053_, v_x_2063_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_dec_ref_known(v___x_2072_, 1);
if (lean_obj_tag(v_eq_x3f_2054_) == 0)
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_2073_, 0, v_a_2055_);
v___x_2074_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_2056_, v_a_2057_, v___x_2073_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2074_) == 0)
{
if (v_zeta_2058_ == 0)
{
lean_object* v_a_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; lean_object* v___x_2080_; 
lean_dec_ref(v_snd_2060_);
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v___x_2076_ = lean_unsigned_to_nat(1u);
v___x_2077_ = lean_mk_empty_array_with_capacity(v___x_2076_);
v___x_2078_ = lean_array_push(v___x_2077_, v_x_2063_);
v___x_2079_ = 1;
v___x_2080_ = l_Lean_Meta_mkLetFVars(v___x_2078_, v_a_2075_, v_usedOnly_2059_, v_zeta_2058_, v___x_2079_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
lean_dec_ref(v___x_2078_);
return v___x_2080_;
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v_a_2081_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2081_);
lean_dec_ref_known(v___x_2074_, 1);
v___x_2082_ = lean_unsigned_to_nat(1u);
v___x_2083_ = lean_mk_empty_array_with_capacity(v___x_2082_);
v___x_2084_ = lean_array_push(v___x_2083_, v_x_2063_);
v___x_2085_ = l_Lean_Expr_abstractM(v_a_2081_, v___x_2084_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
lean_dec_ref(v___x_2084_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2094_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2088_ = v___x_2085_;
v_isShared_2089_ = v_isSharedCheck_2094_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2085_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2094_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2090_ = lean_expr_instantiate1(v_a_2086_, v_snd_2060_);
lean_dec_ref(v_snd_2060_);
lean_dec(v_a_2086_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2090_);
v___x_2092_ = v___x_2088_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2090_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
else
{
lean_dec_ref(v_snd_2060_);
return v___x_2085_;
}
}
}
else
{
lean_dec_ref(v_x_2063_);
lean_dec_ref(v_snd_2060_);
return v___x_2074_;
}
}
else
{
lean_object* v_val_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___f_2100_; lean_object* v___x_2101_; 
v_val_2095_ = lean_ctor_get(v_eq_x3f_2054_, 0);
lean_inc_n(v_val_2095_, 2);
lean_dec_ref_known(v_eq_x3f_2054_, 1);
v___x_2096_ = lean_box(v_zeta_2058_);
v___x_2097_ = lean_box(v___y_2061_);
v___x_2098_ = lean_box(v_usedOnly_2059_);
v___x_2099_ = lean_box(v___x_2062_);
lean_inc_ref(v_snd_2060_);
lean_inc_ref_n(v_x_2063_, 2);
v___f_2100_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed), 19, 10);
lean_closure_set(v___f_2100_, 0, v_val_2095_);
lean_closure_set(v___f_2100_, 1, v_a_2055_);
lean_closure_set(v___f_2100_, 2, v_letOrReassign_2056_);
lean_closure_set(v___f_2100_, 3, v_a_2057_);
lean_closure_set(v___f_2100_, 4, v___x_2096_);
lean_closure_set(v___f_2100_, 5, v___x_2097_);
lean_closure_set(v___f_2100_, 6, v_x_2063_);
lean_closure_set(v___f_2100_, 7, v___x_2098_);
lean_closure_set(v___f_2100_, 8, v___x_2099_);
lean_closure_set(v___f_2100_, 9, v_snd_2060_);
v___x_2101_ = l_Lean_Meta_mkEq(v_x_2063_, v_snd_2060_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2103_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref_known(v___x_2101_, 1);
v___x_2103_ = l_Lean_Meta_mkEqRefl(v_x_2063_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2105_; uint8_t v___x_2106_; lean_object* v___x_2107_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2103_, 1);
v___x_2105_ = l_Lean_TSyntax_getId(v_val_2095_);
lean_dec(v_val_2095_);
v___x_2106_ = 0;
v___x_2107_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_2105_, v_a_2102_, v_a_2104_, v___f_2100_, v___x_2062_, v___x_2106_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
return v___x_2107_;
}
else
{
lean_dec(v_a_2102_);
lean_dec_ref(v___f_2100_);
lean_dec(v_val_2095_);
return v___x_2103_;
}
}
else
{
lean_dec_ref(v___f_2100_);
lean_dec(v_val_2095_);
lean_dec_ref(v_x_2063_);
return v___x_2101_;
}
}
}
else
{
lean_object* v_a_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2115_; 
lean_dec_ref(v_x_2063_);
lean_dec_ref(v_snd_2060_);
lean_dec_ref(v_a_2057_);
lean_dec(v_letOrReassign_2056_);
lean_dec_ref(v_a_2055_);
lean_dec(v_eq_x3f_2054_);
v_a_2108_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2110_ = v___x_2072_;
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_a_2108_);
lean_dec(v___x_2072_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_a_2108_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object** _args){
lean_object* v_id_2116_ = _args[0];
lean_object* v_eq_x3f_2117_ = _args[1];
lean_object* v_a_2118_ = _args[2];
lean_object* v_letOrReassign_2119_ = _args[3];
lean_object* v_a_2120_ = _args[4];
lean_object* v_zeta_2121_ = _args[5];
lean_object* v_usedOnly_2122_ = _args[6];
lean_object* v_snd_2123_ = _args[7];
lean_object* v___y_2124_ = _args[8];
lean_object* v___x_2125_ = _args[9];
lean_object* v_x_2126_ = _args[10];
lean_object* v___y_2127_ = _args[11];
lean_object* v___y_2128_ = _args[12];
lean_object* v___y_2129_ = _args[13];
lean_object* v___y_2130_ = _args[14];
lean_object* v___y_2131_ = _args[15];
lean_object* v___y_2132_ = _args[16];
lean_object* v___y_2133_ = _args[17];
lean_object* v___y_2134_ = _args[18];
_start:
{
uint8_t v_zeta_boxed_2135_; uint8_t v_usedOnly_boxed_2136_; uint8_t v___y_90749__boxed_2137_; uint8_t v___x_90750__boxed_2138_; lean_object* v_res_2139_; 
v_zeta_boxed_2135_ = lean_unbox(v_zeta_2121_);
v_usedOnly_boxed_2136_ = lean_unbox(v_usedOnly_2122_);
v___y_90749__boxed_2137_ = lean_unbox(v___y_2124_);
v___x_90750__boxed_2138_ = lean_unbox(v___x_2125_);
v_res_2139_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(v_id_2116_, v_eq_x3f_2117_, v_a_2118_, v_letOrReassign_2119_, v_a_2120_, v_zeta_boxed_2135_, v_usedOnly_boxed_2136_, v_snd_2123_, v___y_90749__boxed_2137_, v___x_90750__boxed_2138_, v_x_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec_ref(v___y_2127_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(uint8_t v___x_2140_, lean_object* v_____do__lift_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = l_Lean_SourceInfo_fromRef(v_____do__lift_2141_, v___x_2140_);
v___x_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2150_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object* v___x_2152_, lean_object* v_____do__lift_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
uint8_t v___x_90877__boxed_2162_; lean_object* v_res_2163_; 
v___x_90877__boxed_2162_ = lean_unbox(v___x_2152_);
v_res_2163_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(v___x_90877__boxed_2162_, v_____do__lift_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
lean_dec(v___y_2160_);
lean_dec_ref(v___y_2159_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v_____do__lift_2153_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(lean_object* v_term_2164_, lean_object* v___x_2165_, uint8_t v___x_2166_, lean_object* v___x_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_){
_start:
{
lean_object* v___x_2176_; 
v___x_2176_ = l_Lean_Elab_Term_elabTermEnsuringType(v_term_2164_, v___x_2165_, v___x_2166_, v___x_2166_, v___x_2167_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object* v_term_2177_, lean_object* v___x_2178_, lean_object* v___x_2179_, lean_object* v___x_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
uint8_t v___x_90912__boxed_2189_; lean_object* v_res_2190_; 
v___x_90912__boxed_2189_ = lean_unbox(v___x_2179_);
v_res_2190_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(v_term_2177_, v___x_2178_, v___x_90912__boxed_2189_, v___x_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec_ref(v___y_2181_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0(lean_object* v_stx_2191_, lean_object* v_output_2192_, lean_object* v_trees_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v_lctx_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_lctx_2201_ = lean_ctor_get(v___y_2196_, 2);
lean_inc_ref(v_lctx_2201_);
v___x_2202_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2202_, 0, v_lctx_2201_);
lean_ctor_set(v___x_2202_, 1, v_stx_2191_);
lean_ctor_set(v___x_2202_, 2, v_output_2192_);
v___x_2203_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
v___x_2204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
lean_ctor_set(v___x_2204_, 1, v_trees_2193_);
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v_stx_2206_, lean_object* v_output_2207_, lean_object* v_trees_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0(v_stx_2206_, v_output_2207_, v_trees_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
return v_res_2216_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2217_ = lean_unsigned_to_nat(32u);
v___x_2218_ = lean_mk_empty_array_with_capacity(v___x_2217_);
v___x_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2218_);
return v___x_2219_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1(void){
_start:
{
size_t v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2220_ = ((size_t)5ULL);
v___x_2221_ = lean_unsigned_to_nat(0u);
v___x_2222_ = lean_unsigned_to_nat(32u);
v___x_2223_ = lean_mk_empty_array_with_capacity(v___x_2222_);
v___x_2224_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__0);
v___x_2225_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
lean_ctor_set(v___x_2225_, 1, v___x_2223_);
lean_ctor_set(v___x_2225_, 2, v___x_2221_);
lean_ctor_set(v___x_2225_, 3, v___x_2221_);
lean_ctor_set_usize(v___x_2225_, 4, v___x_2220_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(lean_object* v___y_2226_){
_start:
{
lean_object* v___x_2228_; lean_object* v_infoState_2229_; lean_object* v_trees_2230_; lean_object* v___x_2231_; lean_object* v_infoState_2232_; lean_object* v_env_2233_; lean_object* v_nextMacroScope_2234_; lean_object* v_ngen_2235_; lean_object* v_auxDeclNGen_2236_; lean_object* v_traceState_2237_; lean_object* v_cache_2238_; lean_object* v_recordedDeps_2239_; lean_object* v_messages_2240_; lean_object* v_snapshotTasks_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2262_; 
v___x_2228_ = lean_st_ref_get(v___y_2226_);
v_infoState_2229_ = lean_ctor_get(v___x_2228_, 8);
lean_inc_ref(v_infoState_2229_);
lean_dec(v___x_2228_);
v_trees_2230_ = lean_ctor_get(v_infoState_2229_, 2);
lean_inc_ref(v_trees_2230_);
lean_dec_ref(v_infoState_2229_);
v___x_2231_ = lean_st_ref_take(v___y_2226_);
v_infoState_2232_ = lean_ctor_get(v___x_2231_, 8);
v_env_2233_ = lean_ctor_get(v___x_2231_, 0);
v_nextMacroScope_2234_ = lean_ctor_get(v___x_2231_, 1);
v_ngen_2235_ = lean_ctor_get(v___x_2231_, 2);
v_auxDeclNGen_2236_ = lean_ctor_get(v___x_2231_, 3);
v_traceState_2237_ = lean_ctor_get(v___x_2231_, 4);
v_cache_2238_ = lean_ctor_get(v___x_2231_, 5);
v_recordedDeps_2239_ = lean_ctor_get(v___x_2231_, 6);
v_messages_2240_ = lean_ctor_get(v___x_2231_, 7);
v_snapshotTasks_2241_ = lean_ctor_get(v___x_2231_, 9);
v_isSharedCheck_2262_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2243_ = v___x_2231_;
v_isShared_2244_ = v_isSharedCheck_2262_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_snapshotTasks_2241_);
lean_inc(v_infoState_2232_);
lean_inc(v_messages_2240_);
lean_inc(v_recordedDeps_2239_);
lean_inc(v_cache_2238_);
lean_inc(v_traceState_2237_);
lean_inc(v_auxDeclNGen_2236_);
lean_inc(v_ngen_2235_);
lean_inc(v_nextMacroScope_2234_);
lean_inc(v_env_2233_);
lean_dec(v___x_2231_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2262_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
uint8_t v_enabled_2245_; lean_object* v_assignment_2246_; lean_object* v_lazyAssignment_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2260_; 
v_enabled_2245_ = lean_ctor_get_uint8(v_infoState_2232_, sizeof(void*)*3);
v_assignment_2246_ = lean_ctor_get(v_infoState_2232_, 0);
v_lazyAssignment_2247_ = lean_ctor_get(v_infoState_2232_, 1);
v_isSharedCheck_2260_ = !lean_is_exclusive(v_infoState_2232_);
if (v_isSharedCheck_2260_ == 0)
{
lean_object* v_unused_2261_; 
v_unused_2261_ = lean_ctor_get(v_infoState_2232_, 2);
lean_dec(v_unused_2261_);
v___x_2249_ = v_infoState_2232_;
v_isShared_2250_ = v_isSharedCheck_2260_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_lazyAssignment_2247_);
lean_inc(v_assignment_2246_);
lean_dec(v_infoState_2232_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2260_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; lean_object* v___x_2253_; 
v___x_2251_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___closed__1);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 2, v___x_2251_);
v___x_2253_ = v___x_2249_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v_assignment_2246_);
lean_ctor_set(v_reuseFailAlloc_2259_, 1, v_lazyAssignment_2247_);
lean_ctor_set(v_reuseFailAlloc_2259_, 2, v___x_2251_);
lean_ctor_set_uint8(v_reuseFailAlloc_2259_, sizeof(void*)*3, v_enabled_2245_);
v___x_2253_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2255_; 
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 8, v___x_2253_);
v___x_2255_ = v___x_2243_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_env_2233_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v_nextMacroScope_2234_);
lean_ctor_set(v_reuseFailAlloc_2258_, 2, v_ngen_2235_);
lean_ctor_set(v_reuseFailAlloc_2258_, 3, v_auxDeclNGen_2236_);
lean_ctor_set(v_reuseFailAlloc_2258_, 4, v_traceState_2237_);
lean_ctor_set(v_reuseFailAlloc_2258_, 5, v_cache_2238_);
lean_ctor_set(v_reuseFailAlloc_2258_, 6, v_recordedDeps_2239_);
lean_ctor_set(v_reuseFailAlloc_2258_, 7, v_messages_2240_);
lean_ctor_set(v_reuseFailAlloc_2258_, 8, v___x_2253_);
lean_ctor_set(v_reuseFailAlloc_2258_, 9, v_snapshotTasks_2241_);
v___x_2255_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2256_ = lean_st_ref_put(v___y_2226_, v___x_2255_);
v___x_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2257_, 0, v_trees_2230_);
return v___x_2257_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg___boxed(lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(v___y_2263_);
lean_dec(v___y_2263_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(lean_object* v___y_2266_, lean_object* v_mkInfoTree_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v_a_2273_, lean_object* v_a_x3f_2274_){
_start:
{
lean_object* v___x_2276_; lean_object* v_infoState_2277_; lean_object* v_trees_2278_; lean_object* v___x_2279_; 
v___x_2276_ = lean_st_ref_get(v___y_2266_);
v_infoState_2277_ = lean_ctor_get(v___x_2276_, 8);
lean_inc_ref(v_infoState_2277_);
lean_dec(v___x_2276_);
v_trees_2278_ = lean_ctor_get(v_infoState_2277_, 2);
lean_inc_ref(v_trees_2278_);
lean_dec_ref(v_infoState_2277_);
lean_inc(v___y_2266_);
lean_inc_ref(v___y_2272_);
lean_inc(v___y_2271_);
lean_inc_ref(v___y_2270_);
lean_inc(v___y_2269_);
lean_inc_ref(v___y_2268_);
v___x_2279_ = lean_apply_8(v_mkInfoTree_2267_, v_trees_2278_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2266_, lean_box(0));
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2319_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2319_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2319_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2284_; lean_object* v_infoState_2285_; lean_object* v_env_2286_; lean_object* v_nextMacroScope_2287_; lean_object* v_ngen_2288_; lean_object* v_auxDeclNGen_2289_; lean_object* v_traceState_2290_; lean_object* v_cache_2291_; lean_object* v_recordedDeps_2292_; lean_object* v_messages_2293_; lean_object* v_snapshotTasks_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2318_; 
v___x_2284_ = lean_st_ref_take(v___y_2266_);
v_infoState_2285_ = lean_ctor_get(v___x_2284_, 8);
v_env_2286_ = lean_ctor_get(v___x_2284_, 0);
v_nextMacroScope_2287_ = lean_ctor_get(v___x_2284_, 1);
v_ngen_2288_ = lean_ctor_get(v___x_2284_, 2);
v_auxDeclNGen_2289_ = lean_ctor_get(v___x_2284_, 3);
v_traceState_2290_ = lean_ctor_get(v___x_2284_, 4);
v_cache_2291_ = lean_ctor_get(v___x_2284_, 5);
v_recordedDeps_2292_ = lean_ctor_get(v___x_2284_, 6);
v_messages_2293_ = lean_ctor_get(v___x_2284_, 7);
v_snapshotTasks_2294_ = lean_ctor_get(v___x_2284_, 9);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2296_ = v___x_2284_;
v_isShared_2297_ = v_isSharedCheck_2318_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_snapshotTasks_2294_);
lean_inc(v_infoState_2285_);
lean_inc(v_messages_2293_);
lean_inc(v_recordedDeps_2292_);
lean_inc(v_cache_2291_);
lean_inc(v_traceState_2290_);
lean_inc(v_auxDeclNGen_2289_);
lean_inc(v_ngen_2288_);
lean_inc(v_nextMacroScope_2287_);
lean_inc(v_env_2286_);
lean_dec(v___x_2284_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2318_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
uint8_t v_enabled_2298_; lean_object* v_assignment_2299_; lean_object* v_lazyAssignment_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2316_; 
v_enabled_2298_ = lean_ctor_get_uint8(v_infoState_2285_, sizeof(void*)*3);
v_assignment_2299_ = lean_ctor_get(v_infoState_2285_, 0);
v_lazyAssignment_2300_ = lean_ctor_get(v_infoState_2285_, 1);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_infoState_2285_);
if (v_isSharedCheck_2316_ == 0)
{
lean_object* v_unused_2317_; 
v_unused_2317_ = lean_ctor_get(v_infoState_2285_, 2);
lean_dec(v_unused_2317_);
v___x_2302_ = v_infoState_2285_;
v_isShared_2303_ = v_isSharedCheck_2316_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_lazyAssignment_2300_);
lean_inc(v_assignment_2299_);
lean_dec(v_infoState_2285_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2316_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2304_ = lean_box(0);
v___x_2305_ = l_Lean_PersistentArray_push___redArg(v_a_2273_, v_a_2280_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 2, v___x_2305_);
v___x_2307_ = v___x_2302_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_assignment_2299_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_lazyAssignment_2300_);
lean_ctor_set(v_reuseFailAlloc_2315_, 2, v___x_2305_);
lean_ctor_set_uint8(v_reuseFailAlloc_2315_, sizeof(void*)*3, v_enabled_2298_);
v___x_2307_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2309_; 
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 8, v___x_2307_);
v___x_2309_ = v___x_2296_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_env_2286_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_nextMacroScope_2287_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_ngen_2288_);
lean_ctor_set(v_reuseFailAlloc_2314_, 3, v_auxDeclNGen_2289_);
lean_ctor_set(v_reuseFailAlloc_2314_, 4, v_traceState_2290_);
lean_ctor_set(v_reuseFailAlloc_2314_, 5, v_cache_2291_);
lean_ctor_set(v_reuseFailAlloc_2314_, 6, v_recordedDeps_2292_);
lean_ctor_set(v_reuseFailAlloc_2314_, 7, v_messages_2293_);
lean_ctor_set(v_reuseFailAlloc_2314_, 8, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2314_, 9, v_snapshotTasks_2294_);
v___x_2309_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2310_ = lean_st_ref_put(v___y_2266_, v___x_2309_);
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v___x_2304_);
v___x_2312_ = v___x_2282_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2304_);
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
}
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec_ref(v_a_2273_);
v_a_2320_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2279_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2279_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0___boxed(lean_object* v___y_2328_, lean_object* v_mkInfoTree_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v_a_2335_, lean_object* v_a_x3f_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(v___y_2328_, v_mkInfoTree_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v_a_2335_, v_a_x3f_2336_);
lean_dec(v_a_x3f_2336_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2328_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(lean_object* v_x_2339_, lean_object* v_mkInfoTree_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_){
_start:
{
lean_object* v___x_2348_; lean_object* v_infoState_2349_; uint8_t v_enabled_2350_; 
v___x_2348_ = lean_st_ref_get(v___y_2346_);
v_infoState_2349_ = lean_ctor_get(v___x_2348_, 8);
lean_inc_ref(v_infoState_2349_);
lean_dec(v___x_2348_);
v_enabled_2350_ = lean_ctor_get_uint8(v_infoState_2349_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2349_);
if (v_enabled_2350_ == 0)
{
lean_object* v___x_2351_; 
lean_dec_ref(v_mkInfoTree_2340_);
lean_inc(v___y_2346_);
lean_inc_ref(v___y_2345_);
lean_inc(v___y_2344_);
lean_inc_ref(v___y_2343_);
lean_inc(v___y_2342_);
lean_inc_ref(v___y_2341_);
v___x_2351_ = lean_apply_7(v_x_2339_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v___y_2346_, lean_box(0));
return v___x_2351_;
}
else
{
lean_object* v___x_2352_; lean_object* v_a_2353_; lean_object* v_r_2354_; 
v___x_2352_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(v___y_2346_);
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref(v___x_2352_);
lean_inc(v___y_2346_);
lean_inc_ref(v___y_2345_);
lean_inc(v___y_2344_);
lean_inc_ref(v___y_2343_);
lean_inc(v___y_2342_);
lean_inc_ref(v___y_2341_);
v_r_2354_ = lean_apply_7(v_x_2339_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v___y_2346_, lean_box(0));
if (lean_obj_tag(v_r_2354_) == 0)
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2379_; 
v_a_2355_ = lean_ctor_get(v_r_2354_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v_r_2354_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2357_ = v_r_2354_;
v_isShared_2358_ = v_isSharedCheck_2379_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v_r_2354_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2379_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
lean_inc(v_a_2355_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set_tag(v___x_2357_, 1);
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2355_);
v___x_2360_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(v___y_2346_, v_mkInfoTree_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v_a_2353_, v___x_2360_);
lean_dec_ref(v___x_2360_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2368_ == 0)
{
lean_object* v_unused_2369_; 
v_unused_2369_ = lean_ctor_get(v___x_2361_, 0);
lean_dec(v_unused_2369_);
v___x_2363_ = v___x_2361_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_dec(v___x_2361_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 0, v_a_2355_);
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2355_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_dec(v_a_2355_);
v_a_2370_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2361_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2361_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_a_2380_ = lean_ctor_get(v_r_2354_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v_r_2354_, 1);
v___x_2381_ = lean_box(0);
v___x_2382_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___lam__0(v___y_2346_, v_mkInfoTree_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v_a_2353_, v___x_2381_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2389_ == 0)
{
lean_object* v_unused_2390_; 
v_unused_2390_ = lean_ctor_get(v___x_2382_, 0);
lean_dec(v_unused_2390_);
v___x_2384_ = v___x_2382_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_dec(v___x_2382_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set_tag(v___x_2384_, 1);
lean_ctor_set(v___x_2384_, 0, v_a_2380_);
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2380_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
else
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2398_; 
lean_dec(v_a_2380_);
v_a_2391_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2393_ = v___x_2382_;
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2382_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2396_; 
if (v_isShared_2394_ == 0)
{
v___x_2396_ = v___x_2393_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2391_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg___boxed(lean_object* v_x_2399_, lean_object* v_mkInfoTree_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(v_x_2399_, v_mkInfoTree_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(lean_object* v_stx_2409_, lean_object* v_output_2410_, lean_object* v_x_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
lean_object* v___f_2419_; lean_object* v___x_2420_; 
v___f_2419_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2419_, 0, v_stx_2409_);
lean_closure_set(v___f_2419_, 1, v_output_2410_);
v___x_2420_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(v_x_2411_, v___f_2419_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg___boxed(lean_object* v_stx_2421_, lean_object* v_output_2422_, lean_object* v_x_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_stx_2421_, v_output_2422_, v_x_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(lean_object* v_x_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v___x_2441_; 
lean_inc_ref(v___y_2433_);
v___x_2441_ = lean_apply_8(v_x_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, lean_box(0));
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed(lean_object* v_x_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0(v_x_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
lean_dec_ref(v___y_2443_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(lean_object* v_beforeStx_2452_, lean_object* v_afterStx_2453_, lean_object* v_x_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v___f_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_inc_ref(v___y_2455_);
v___f_2463_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2463_, 0, v_x_2454_);
lean_closure_set(v___f_2463_, 1, v___y_2455_);
lean_inc(v_afterStx_2453_);
lean_inc(v_beforeStx_2452_);
v___x_2464_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withPushMacroExpansionStack___boxed), 11, 4);
lean_closure_set(v___x_2464_, 0, lean_box(0));
lean_closure_set(v___x_2464_, 1, v_beforeStx_2452_);
lean_closure_set(v___x_2464_, 2, v_afterStx_2453_);
lean_closure_set(v___x_2464_, 3, v___f_2463_);
v___x_2465_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_beforeStx_2452_, v_afterStx_2453_, v___x_2464_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
if (lean_obj_tag(v___x_2465_) == 0)
{
return v___x_2465_;
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2465_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2465_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg___boxed(lean_object* v_beforeStx_2474_, lean_object* v_afterStx_2475_, lean_object* v_x_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_beforeStx_2474_, v_afterStx_2475_, v_x_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec_ref(v___y_2477_);
return v_res_2485_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__1));
v___x_2489_ = l_String_toRawSubstring_x27(v___x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object* v_rhs_2511_, uint8_t v___x_2512_, lean_object* v_config_2513_, lean_object* v_a_2514_, uint8_t v___x_2515_, lean_object* v___x_2516_, lean_object* v___x_2517_, lean_object* v___x_2518_, lean_object* v___f_2519_, lean_object* v___x_2520_, lean_object* v_body_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v_term_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v_ref_2538_; lean_object* v___y_2539_; lean_object* v_toCold_2545_; lean_object* v_ref_2546_; lean_object* v_quotContext_2547_; lean_object* v_currMacroScope_2548_; lean_object* v_ref_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v_eq_x3f_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v_toCold_2545_ = lean_ctor_get(v___y_2527_, 0);
v_ref_2546_ = lean_ctor_get(v___y_2527_, 2);
v_quotContext_2547_ = lean_ctor_get(v_toCold_2545_, 8);
v_currMacroScope_2548_ = lean_ctor_get(v_toCold_2545_, 9);
v_ref_2549_ = l_Lean_replaceRef(v_rhs_2511_, v_ref_2546_);
v___x_2550_ = l_Lean_SourceInfo_fromRef(v_ref_2549_, v___x_2512_);
lean_dec(v_ref_2549_);
v___x_2551_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__0));
lean_inc_n(v___x_2550_, 2);
v___x_2552_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2550_);
lean_ctor_set(v___x_2552_, 1, v___x_2551_);
v___x_2553_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__2);
v_eq_x3f_2554_ = lean_ctor_get(v_config_2513_, 0);
lean_inc(v_eq_x3f_2554_);
lean_dec_ref(v_config_2513_);
v___x_2555_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__3));
lean_inc(v_currMacroScope_2548_);
lean_inc(v_quotContext_2547_);
v___x_2556_ = l_Lean_addMacroScope(v_quotContext_2547_, v___x_2555_, v_currMacroScope_2548_);
v___x_2557_ = lean_box(0);
lean_inc(v___x_2556_);
v___x_2558_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2550_);
lean_ctor_set(v___x_2558_, 1, v___x_2553_);
lean_ctor_set(v___x_2558_, 2, v___x_2556_);
lean_ctor_set(v___x_2558_, 3, v___x_2557_);
v___x_2559_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__4));
lean_inc_ref(v___x_2518_);
lean_inc_ref(v___x_2517_);
lean_inc_ref(v___x_2516_);
v___x_2560_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2559_);
v___x_2561_ = l_Lean_Syntax_node2(v___x_2550_, v___x_2560_, v___x_2552_, v___x_2558_);
if (lean_obj_tag(v_eq_x3f_2554_) == 1)
{
lean_object* v_val_2562_; lean_object* v___x_2563_; 
v_val_2562_ = lean_ctor_get(v_eq_x3f_2554_, 0);
lean_inc(v_val_2562_);
lean_dec_ref_known(v_eq_x3f_2554_, 1);
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2525_);
lean_inc(v___y_2524_);
lean_inc_ref(v___y_2523_);
lean_inc_ref(v___y_2522_);
lean_inc(v_ref_2546_);
v___x_2563_ = lean_apply_9(v___f_2519_, v_ref_2546_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, lean_box(0));
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc_n(v_a_2564_, 23);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5));
lean_inc_ref_n(v___x_2518_, 5);
lean_inc_ref_n(v___x_2517_, 5);
lean_inc_ref_n(v___x_2516_, 5);
v___x_2566_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2565_);
v___x_2567_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6));
v___x_2568_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2568_, 0, v_a_2564_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
v___x_2569_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2569_, 0, v_a_2564_);
lean_ctor_set(v___x_2569_, 1, v___x_2551_);
v___x_2570_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2570_, 0, v_a_2564_);
lean_ctor_set(v___x_2570_, 1, v___x_2553_);
lean_ctor_set(v___x_2570_, 2, v___x_2556_);
lean_ctor_set(v___x_2570_, 3, v___x_2557_);
v___x_2571_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_2572_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2572_, 0, v_a_2564_);
lean_ctor_set(v___x_2572_, 1, v___x_2571_);
v___x_2573_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_2574_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2574_, 0, v_a_2564_);
lean_ctor_set(v___x_2574_, 1, v___x_2573_);
v___x_2575_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8));
v___x_2576_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2575_);
v___x_2577_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9));
v___x_2578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2578_, 0, v_a_2564_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_2580_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2579_);
v___x_2581_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2581_, 0, v_a_2564_);
lean_ctor_set(v___x_2581_, 1, v___x_2579_);
v___x_2582_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_2583_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2584_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2584_, 0, v_a_2564_);
lean_ctor_set(v___x_2584_, 1, v___x_2582_);
lean_ctor_set(v___x_2584_, 2, v___x_2583_);
v___x_2585_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11));
v___x_2586_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2585_);
v___x_2587_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_2588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2588_, 0, v_a_2564_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = l_Lean_Syntax_node2(v_a_2564_, v___x_2582_, v_val_2562_, v___x_2588_);
v___x_2590_ = l_Lean_Syntax_node2(v_a_2564_, v___x_2586_, v___x_2589_, v___x_2561_);
v___x_2591_ = l_Lean_Syntax_node1(v_a_2564_, v___x_2582_, v___x_2590_);
v___x_2592_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_2593_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2593_, 0, v_a_2564_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
v___x_2594_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13));
v___x_2595_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2594_);
v___x_2596_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14));
v___x_2597_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2596_);
v___x_2598_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_2599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2599_, 0, v_a_2564_);
lean_ctor_set(v___x_2599_, 1, v___x_2598_);
v___x_2600_ = l_Lean_Syntax_node1(v_a_2564_, v___x_2582_, v___x_2520_);
v___x_2601_ = l_Lean_Syntax_node1(v_a_2564_, v___x_2582_, v___x_2600_);
v___x_2602_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_2603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2603_, 0, v_a_2564_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
v___x_2604_ = l_Lean_Syntax_node4(v_a_2564_, v___x_2597_, v___x_2599_, v___x_2601_, v___x_2603_, v_body_2521_);
v___x_2605_ = l_Lean_Syntax_node1(v_a_2564_, v___x_2582_, v___x_2604_);
v___x_2606_ = l_Lean_Syntax_node1(v_a_2564_, v___x_2595_, v___x_2605_);
lean_inc_ref(v___x_2584_);
v___x_2607_ = l_Lean_Syntax_node6(v_a_2564_, v___x_2580_, v___x_2581_, v___x_2584_, v___x_2584_, v___x_2591_, v___x_2593_, v___x_2606_);
lean_inc_ref(v___x_2574_);
lean_inc_ref(v___x_2570_);
lean_inc_ref(v___x_2569_);
v___x_2608_ = l_Lean_Syntax_node5(v_a_2564_, v___x_2576_, v___x_2578_, v___x_2569_, v___x_2570_, v___x_2574_, v___x_2607_);
v___x_2609_ = l_Lean_Syntax_node7(v_a_2564_, v___x_2566_, v___x_2568_, v___x_2569_, v___x_2570_, v___x_2572_, v_rhs_2511_, v___x_2574_, v___x_2608_);
lean_inc(v_ref_2546_);
v_term_2531_ = v___x_2609_;
v___y_2532_ = v___y_2522_;
v___y_2533_ = v___y_2523_;
v___y_2534_ = v___y_2524_;
v___y_2535_ = v___y_2525_;
v___y_2536_ = v___y_2526_;
v___y_2537_ = v___y_2527_;
v_ref_2538_ = v_ref_2546_;
v___y_2539_ = v___y_2528_;
goto v___jp_2530_;
}
else
{
lean_object* v_a_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2617_; 
lean_dec(v_val_2562_);
lean_dec(v___x_2561_);
lean_dec(v___x_2556_);
lean_dec(v_body_2521_);
lean_dec(v___x_2520_);
lean_dec_ref(v___x_2518_);
lean_dec_ref(v___x_2517_);
lean_dec_ref(v___x_2516_);
lean_dec_ref(v_a_2514_);
lean_dec(v_rhs_2511_);
v_a_2610_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2612_ = v___x_2563_;
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_a_2610_);
lean_dec(v___x_2563_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2615_; 
if (v_isShared_2613_ == 0)
{
v___x_2615_ = v___x_2612_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_a_2610_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
}
else
{
lean_object* v___x_2618_; 
lean_dec(v_eq_x3f_2554_);
lean_inc_ref(v_a_2514_);
v___x_2618_ = l_Lean_Elab_Term_exprToSyntax(v_a_2514_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; lean_object* v___x_2620_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2525_);
lean_inc(v___y_2524_);
lean_inc_ref(v___y_2523_);
lean_inc_ref(v___y_2522_);
lean_inc(v_ref_2546_);
v___x_2620_ = lean_apply_9(v___f_2519_, v_ref_2546_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, lean_box(0));
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc_n(v_a_2621_, 32);
lean_dec_ref_known(v___x_2620_, 1);
v___x_2622_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__5));
lean_inc_ref_n(v___x_2518_, 8);
lean_inc_ref_n(v___x_2517_, 8);
lean_inc_ref_n(v___x_2516_, 8);
v___x_2623_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2622_);
v___x_2624_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__6));
v___x_2625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2625_, 0, v_a_2621_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2626_, 0, v_a_2621_);
lean_ctor_set(v___x_2626_, 1, v___x_2551_);
v___x_2627_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2627_, 0, v_a_2621_);
lean_ctor_set(v___x_2627_, 1, v___x_2553_);
lean_ctor_set(v___x_2627_, 2, v___x_2556_);
lean_ctor_set(v___x_2627_, 3, v___x_2557_);
v___x_2628_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_2629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2629_, 0, v_a_2621_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
v___x_2630_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_2631_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2631_, 0, v_a_2621_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
v___x_2632_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__8));
v___x_2633_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2632_);
v___x_2634_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__9));
v___x_2635_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2635_, 0, v_a_2621_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_2637_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2636_);
v___x_2638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2638_, 0, v_a_2621_);
lean_ctor_set(v___x_2638_, 1, v___x_2636_);
v___x_2639_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_2640_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2641_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2641_, 0, v_a_2621_);
lean_ctor_set(v___x_2641_, 1, v___x_2639_);
lean_ctor_set(v___x_2641_, 2, v___x_2640_);
v___x_2642_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__17));
v___x_2643_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2642_);
v___x_2644_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
v___x_2645_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2645_, 0, v_a_2621_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2646_, 0, v_a_2621_);
lean_ctor_set(v___x_2646_, 1, v___x_2642_);
v___x_2647_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__18));
v___x_2648_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2647_);
v___x_2649_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__19));
v___x_2650_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2650_, 0, v_a_2621_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__20));
v___x_2652_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2651_);
v___x_2653_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_2654_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2654_, 0, v_a_2621_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2652_, v___x_2654_);
v___x_2656_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2639_, v___x_2655_);
v___x_2657_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__22));
v___x_2658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2658_, 0, v_a_2621_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
lean_inc_ref_n(v___x_2641_, 2);
v___x_2659_ = l_Lean_Syntax_node5(v_a_2621_, v___x_2648_, v___x_2650_, v___x_2656_, v___x_2641_, v___x_2658_, v_a_2619_);
v___x_2660_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_2661_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2661_, 0, v_a_2621_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
lean_inc_ref(v___x_2629_);
v___x_2662_ = l_Lean_Syntax_node5(v_a_2621_, v___x_2643_, v___x_2645_, v___x_2646_, v___x_2629_, v___x_2659_, v___x_2661_);
v___x_2663_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2639_, v___x_2662_);
v___x_2664_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__11));
v___x_2665_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2664_);
v___x_2666_ = l_Lean_Syntax_node2(v_a_2621_, v___x_2665_, v___x_2641_, v___x_2561_);
v___x_2667_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2639_, v___x_2666_);
v___x_2668_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_2669_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2669_, 0, v_a_2621_);
lean_ctor_set(v___x_2669_, 1, v___x_2668_);
v___x_2670_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__13));
v___x_2671_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2670_);
v___x_2672_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__14));
v___x_2673_ = l_Lean_Name_mkStr4(v___x_2516_, v___x_2517_, v___x_2518_, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_2675_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2675_, 0, v_a_2621_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2639_, v___x_2520_);
v___x_2677_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2639_, v___x_2676_);
v___x_2678_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_2679_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2679_, 0, v_a_2621_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = l_Lean_Syntax_node4(v_a_2621_, v___x_2673_, v___x_2675_, v___x_2677_, v___x_2679_, v_body_2521_);
v___x_2681_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2639_, v___x_2680_);
v___x_2682_ = l_Lean_Syntax_node1(v_a_2621_, v___x_2671_, v___x_2681_);
v___x_2683_ = l_Lean_Syntax_node6(v_a_2621_, v___x_2637_, v___x_2638_, v___x_2641_, v___x_2663_, v___x_2667_, v___x_2669_, v___x_2682_);
lean_inc_ref(v___x_2631_);
lean_inc_ref(v___x_2627_);
lean_inc_ref(v___x_2626_);
v___x_2684_ = l_Lean_Syntax_node5(v_a_2621_, v___x_2633_, v___x_2635_, v___x_2626_, v___x_2627_, v___x_2631_, v___x_2683_);
v___x_2685_ = l_Lean_Syntax_node7(v_a_2621_, v___x_2623_, v___x_2625_, v___x_2626_, v___x_2627_, v___x_2629_, v_rhs_2511_, v___x_2631_, v___x_2684_);
lean_inc(v_ref_2546_);
v_term_2531_ = v___x_2685_;
v___y_2532_ = v___y_2522_;
v___y_2533_ = v___y_2523_;
v___y_2534_ = v___y_2524_;
v___y_2535_ = v___y_2525_;
v___y_2536_ = v___y_2526_;
v___y_2537_ = v___y_2527_;
v_ref_2538_ = v_ref_2546_;
v___y_2539_ = v___y_2528_;
goto v___jp_2530_;
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
lean_dec(v_a_2619_);
lean_dec(v___x_2561_);
lean_dec(v___x_2556_);
lean_dec(v_body_2521_);
lean_dec(v___x_2520_);
lean_dec_ref(v___x_2518_);
lean_dec_ref(v___x_2517_);
lean_dec_ref(v___x_2516_);
lean_dec_ref(v_a_2514_);
lean_dec(v_rhs_2511_);
v_a_2686_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2620_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2620_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
lean_dec(v___x_2561_);
lean_dec(v___x_2556_);
lean_dec(v_body_2521_);
lean_dec(v___x_2520_);
lean_dec_ref(v___f_2519_);
lean_dec_ref(v___x_2518_);
lean_dec_ref(v___x_2517_);
lean_dec_ref(v___x_2516_);
lean_dec_ref(v_a_2514_);
lean_dec(v_rhs_2511_);
v_a_2694_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2618_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2618_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
v___jp_2530_:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___f_2543_; lean_object* v___x_2544_; 
v___x_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2540_, 0, v_a_2514_);
v___x_2541_ = lean_box(0);
v___x_2542_ = lean_box(v___x_2515_);
lean_inc(v_term_2531_);
v___f_2543_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed), 12, 4);
lean_closure_set(v___f_2543_, 0, v_term_2531_);
lean_closure_set(v___f_2543_, 1, v___x_2540_);
lean_closure_set(v___f_2543_, 2, v___x_2542_);
lean_closure_set(v___f_2543_, 3, v___x_2541_);
v___x_2544_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_ref_2538_, v_term_2531_, v___f_2543_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2539_);
return v___x_2544_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object** _args){
lean_object* v_rhs_2702_ = _args[0];
lean_object* v___x_2703_ = _args[1];
lean_object* v_config_2704_ = _args[2];
lean_object* v_a_2705_ = _args[3];
lean_object* v___x_2706_ = _args[4];
lean_object* v___x_2707_ = _args[5];
lean_object* v___x_2708_ = _args[6];
lean_object* v___x_2709_ = _args[7];
lean_object* v___f_2710_ = _args[8];
lean_object* v___x_2711_ = _args[9];
lean_object* v_body_2712_ = _args[10];
lean_object* v___y_2713_ = _args[11];
lean_object* v___y_2714_ = _args[12];
lean_object* v___y_2715_ = _args[13];
lean_object* v___y_2716_ = _args[14];
lean_object* v___y_2717_ = _args[15];
lean_object* v___y_2718_ = _args[16];
lean_object* v___y_2719_ = _args[17];
lean_object* v___y_2720_ = _args[18];
_start:
{
uint8_t v___x_91441__boxed_2721_; uint8_t v___x_91443__boxed_2722_; lean_object* v_res_2723_; 
v___x_91441__boxed_2721_ = lean_unbox(v___x_2703_);
v___x_91443__boxed_2722_ = lean_unbox(v___x_2706_);
v_res_2723_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(v_rhs_2702_, v___x_91441__boxed_2721_, v_config_2704_, v_a_2705_, v___x_91443__boxed_2722_, v___x_2707_, v___x_2708_, v___x_2709_, v___f_2710_, v___x_2711_, v_body_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec_ref(v___y_2713_);
return v_res_2723_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2724_; double v___x_2725_; 
v___x_2724_ = lean_unsigned_to_nat(0u);
v___x_2725_ = lean_float_of_nat(v___x_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object* v_cls_2728_, lean_object* v_msg_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v_ref_2735_; lean_object* v___x_2736_; lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2782_; 
v_ref_2735_ = lean_ctor_get(v___y_2732_, 2);
v___x_2736_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0_spec__1(v_msg_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_);
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2739_ = v___x_2736_;
v_isShared_2740_ = v_isSharedCheck_2782_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2736_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2782_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2741_; lean_object* v_traceState_2742_; lean_object* v_env_2743_; lean_object* v_nextMacroScope_2744_; lean_object* v_ngen_2745_; lean_object* v_auxDeclNGen_2746_; lean_object* v_cache_2747_; lean_object* v_recordedDeps_2748_; lean_object* v_messages_2749_; lean_object* v_infoState_2750_; lean_object* v_snapshotTasks_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2781_; 
v___x_2741_ = lean_st_ref_take(v___y_2733_);
v_traceState_2742_ = lean_ctor_get(v___x_2741_, 4);
v_env_2743_ = lean_ctor_get(v___x_2741_, 0);
v_nextMacroScope_2744_ = lean_ctor_get(v___x_2741_, 1);
v_ngen_2745_ = lean_ctor_get(v___x_2741_, 2);
v_auxDeclNGen_2746_ = lean_ctor_get(v___x_2741_, 3);
v_cache_2747_ = lean_ctor_get(v___x_2741_, 5);
v_recordedDeps_2748_ = lean_ctor_get(v___x_2741_, 6);
v_messages_2749_ = lean_ctor_get(v___x_2741_, 7);
v_infoState_2750_ = lean_ctor_get(v___x_2741_, 8);
v_snapshotTasks_2751_ = lean_ctor_get(v___x_2741_, 9);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2753_ = v___x_2741_;
v_isShared_2754_ = v_isSharedCheck_2781_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_snapshotTasks_2751_);
lean_inc(v_infoState_2750_);
lean_inc(v_messages_2749_);
lean_inc(v_recordedDeps_2748_);
lean_inc(v_cache_2747_);
lean_inc(v_traceState_2742_);
lean_inc(v_auxDeclNGen_2746_);
lean_inc(v_ngen_2745_);
lean_inc(v_nextMacroScope_2744_);
lean_inc(v_env_2743_);
lean_dec(v___x_2741_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2781_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
uint64_t v_tid_2755_; lean_object* v_traces_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2780_; 
v_tid_2755_ = lean_ctor_get_uint64(v_traceState_2742_, sizeof(void*)*1);
v_traces_2756_ = lean_ctor_get(v_traceState_2742_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_traceState_2742_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2758_ = v_traceState_2742_;
v_isShared_2759_ = v_isSharedCheck_2780_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_traces_2756_);
lean_dec(v_traceState_2742_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2780_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; double v___x_2762_; uint8_t v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2771_; 
v___x_2760_ = lean_box(0);
v___x_2761_ = lean_box(0);
v___x_2762_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__0);
v___x_2763_ = 0;
v___x_2764_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_2765_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2765_, 0, v_cls_2728_);
lean_ctor_set(v___x_2765_, 1, v___x_2761_);
lean_ctor_set(v___x_2765_, 2, v___x_2764_);
lean_ctor_set_float(v___x_2765_, sizeof(void*)*3, v___x_2762_);
lean_ctor_set_float(v___x_2765_, sizeof(void*)*3 + 8, v___x_2762_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*3 + 16, v___x_2763_);
v___x_2766_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___closed__1));
v___x_2767_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v_a_2737_);
lean_ctor_set(v___x_2767_, 2, v___x_2766_);
lean_inc(v_ref_2735_);
v___x_2768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2768_, 0, v_ref_2735_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
v___x_2769_ = l_Lean_PersistentArray_push___redArg(v_traces_2756_, v___x_2768_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v___x_2769_);
v___x_2771_ = v___x_2758_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2769_);
lean_ctor_set_uint64(v_reuseFailAlloc_2779_, sizeof(void*)*1, v_tid_2755_);
v___x_2771_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
lean_object* v___x_2773_; 
if (v_isShared_2754_ == 0)
{
lean_ctor_set(v___x_2753_, 4, v___x_2771_);
v___x_2773_ = v___x_2753_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_env_2743_);
lean_ctor_set(v_reuseFailAlloc_2778_, 1, v_nextMacroScope_2744_);
lean_ctor_set(v_reuseFailAlloc_2778_, 2, v_ngen_2745_);
lean_ctor_set(v_reuseFailAlloc_2778_, 3, v_auxDeclNGen_2746_);
lean_ctor_set(v_reuseFailAlloc_2778_, 4, v___x_2771_);
lean_ctor_set(v_reuseFailAlloc_2778_, 5, v_cache_2747_);
lean_ctor_set(v_reuseFailAlloc_2778_, 6, v_recordedDeps_2748_);
lean_ctor_set(v_reuseFailAlloc_2778_, 7, v_messages_2749_);
lean_ctor_set(v_reuseFailAlloc_2778_, 8, v_infoState_2750_);
lean_ctor_set(v_reuseFailAlloc_2778_, 9, v_snapshotTasks_2751_);
v___x_2773_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
lean_object* v___x_2774_; lean_object* v___x_2776_; 
v___x_2774_ = lean_st_ref_put(v___y_2733_, v___x_2773_);
if (v_isShared_2740_ == 0)
{
lean_ctor_set(v___x_2739_, 0, v___x_2760_);
v___x_2776_ = v___x_2739_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v___x_2760_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object* v_cls_2783_, lean_object* v_msg_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_2783_, v_msg_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(lean_object* v_env_2791_, lean_object* v_currNamespace_2792_, lean_object* v_openDecls_2793_, lean_object* v_n_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2797_ = l_Lean_ResolveName_resolveNamespace(v_env_2791_, v_currNamespace_2792_, v_openDecls_2793_, v_n_2794_);
v___x_2798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
lean_ctor_set(v___x_2798_, 1, v___y_2796_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed(lean_object* v_env_2799_, lean_object* v_currNamespace_2800_, lean_object* v_openDecls_2801_, lean_object* v_n_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4(v_env_2799_, v_currNamespace_2800_, v_openDecls_2801_, v_n_2802_, v___y_2803_, v___y_2804_);
lean_dec_ref(v___y_2803_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(lean_object* v_currNamespace_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v___x_2809_; 
v___x_2809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2809_, 0, v_currNamespace_2806_);
lean_ctor_set(v___x_2809_, 1, v___y_2808_);
return v___x_2809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed(lean_object* v_currNamespace_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2(v_currNamespace_2810_, v___y_2811_, v___y_2812_);
lean_dec_ref(v___y_2811_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object* v_env_2814_, lean_object* v_declName_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_){
_start:
{
uint8_t v___x_2818_; lean_object* v_env_2819_; lean_object* v___x_2820_; uint8_t v___x_2821_; uint8_t v___x_2822_; 
v___x_2818_ = 0;
v_env_2819_ = l_Lean_Environment_setExporting(v_env_2814_, v___x_2818_);
lean_inc(v_declName_2815_);
v___x_2820_ = l_Lean_mkPrivateName(v_env_2819_, v_declName_2815_);
v___x_2821_ = 1;
lean_inc_ref(v_env_2819_);
v___x_2822_ = l_Lean_Environment_contains(v_env_2819_, v___x_2820_, v___x_2821_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; uint8_t v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2823_ = l_Lean_privateToUserName(v_declName_2815_);
v___x_2824_ = l_Lean_Environment_contains(v_env_2819_, v___x_2823_, v___x_2821_);
v___x_2825_ = lean_box(v___x_2824_);
v___x_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2825_);
lean_ctor_set(v___x_2826_, 1, v___y_2817_);
return v___x_2826_;
}
else
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
lean_dec_ref(v_env_2819_);
lean_dec(v_declName_2815_);
v___x_2827_ = lean_box(v___x_2822_);
v___x_2828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
lean_ctor_set(v___x_2828_, 1, v___y_2817_);
return v___x_2828_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object* v_env_2829_, lean_object* v_declName_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
lean_object* v_res_2833_; 
v_res_2833_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(v_env_2829_, v_declName_2830_, v___y_2831_, v___y_2832_);
lean_dec_ref(v___y_2831_);
return v_res_2833_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; 
v___x_2839_ = l_Lean_maxRecDepthErrorMessage;
v___x_2840_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2839_);
return v___x_2840_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4(void){
_start:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2841_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__3);
v___x_2842_ = l_Lean_MessageData_ofFormat(v___x_2841_);
return v___x_2842_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5(void){
_start:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2843_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__4);
v___x_2844_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__2));
v___x_2845_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
lean_ctor_set(v___x_2845_, 1, v___x_2843_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(lean_object* v_ref_2846_){
_start:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; 
v___x_2848_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___closed__5);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v_ref_2846_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
v___x_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2849_);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg___boxed(lean_object* v_ref_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(v_ref_2851_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30_spec__32___redArg(lean_object* v_x_2854_, lean_object* v_x_2855_){
_start:
{
if (lean_obj_tag(v_x_2855_) == 0)
{
return v_x_2854_;
}
else
{
lean_object* v_key_2856_; lean_object* v_value_2857_; lean_object* v_tail_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2881_; 
v_key_2856_ = lean_ctor_get(v_x_2855_, 0);
v_value_2857_ = lean_ctor_get(v_x_2855_, 1);
v_tail_2858_ = lean_ctor_get(v_x_2855_, 2);
v_isSharedCheck_2881_ = !lean_is_exclusive(v_x_2855_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2860_ = v_x_2855_;
v_isShared_2861_ = v_isSharedCheck_2881_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_tail_2858_);
lean_inc(v_value_2857_);
lean_inc(v_key_2856_);
lean_dec(v_x_2855_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2881_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2862_; uint64_t v___x_2863_; uint64_t v___x_2864_; uint64_t v___x_2865_; uint64_t v_fold_2866_; uint64_t v___x_2867_; uint64_t v___x_2868_; uint64_t v___x_2869_; size_t v___x_2870_; size_t v___x_2871_; size_t v___x_2872_; size_t v___x_2873_; size_t v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2877_; 
v___x_2862_ = lean_array_get_size(v_x_2854_);
v___x_2863_ = l_Lean_instHashableExtraModUse_hash(v_key_2856_);
v___x_2864_ = 32ULL;
v___x_2865_ = lean_uint64_shift_right(v___x_2863_, v___x_2864_);
v_fold_2866_ = lean_uint64_xor(v___x_2863_, v___x_2865_);
v___x_2867_ = 16ULL;
v___x_2868_ = lean_uint64_shift_right(v_fold_2866_, v___x_2867_);
v___x_2869_ = lean_uint64_xor(v_fold_2866_, v___x_2868_);
v___x_2870_ = lean_uint64_to_usize(v___x_2869_);
v___x_2871_ = lean_usize_of_nat(v___x_2862_);
v___x_2872_ = ((size_t)1ULL);
v___x_2873_ = lean_usize_sub(v___x_2871_, v___x_2872_);
v___x_2874_ = lean_usize_land(v___x_2870_, v___x_2873_);
v___x_2875_ = lean_array_uget_borrowed(v_x_2854_, v___x_2874_);
lean_inc(v___x_2875_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 2, v___x_2875_);
v___x_2877_ = v___x_2860_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_key_2856_);
lean_ctor_set(v_reuseFailAlloc_2880_, 1, v_value_2857_);
lean_ctor_set(v_reuseFailAlloc_2880_, 2, v___x_2875_);
v___x_2877_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
lean_object* v___x_2878_; 
v___x_2878_ = lean_array_uset(v_x_2854_, v___x_2874_, v___x_2877_);
v_x_2854_ = v___x_2878_;
v_x_2855_ = v_tail_2858_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30___redArg(lean_object* v_i_2882_, lean_object* v_source_2883_, lean_object* v_target_2884_){
_start:
{
lean_object* v___x_2885_; uint8_t v___x_2886_; 
v___x_2885_ = lean_array_get_size(v_source_2883_);
v___x_2886_ = lean_nat_dec_lt(v_i_2882_, v___x_2885_);
if (v___x_2886_ == 0)
{
lean_dec_ref(v_source_2883_);
lean_dec(v_i_2882_);
return v_target_2884_;
}
else
{
lean_object* v_es_2887_; lean_object* v___x_2888_; lean_object* v_source_2889_; lean_object* v_target_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v_es_2887_ = lean_array_fget(v_source_2883_, v_i_2882_);
v___x_2888_ = lean_box(0);
v_source_2889_ = lean_array_fset(v_source_2883_, v_i_2882_, v___x_2888_);
v_target_2890_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30_spec__32___redArg(v_target_2884_, v_es_2887_);
v___x_2891_ = lean_unsigned_to_nat(1u);
v___x_2892_ = lean_nat_add(v_i_2882_, v___x_2891_);
lean_dec(v_i_2882_);
v_i_2882_ = v___x_2892_;
v_source_2883_ = v_source_2889_;
v_target_2884_ = v_target_2890_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26___redArg(lean_object* v_data_2894_){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v_nbuckets_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2895_ = lean_array_get_size(v_data_2894_);
v___x_2896_ = lean_unsigned_to_nat(2u);
v_nbuckets_2897_ = lean_nat_mul(v___x_2895_, v___x_2896_);
v___x_2898_ = lean_unsigned_to_nat(0u);
v___x_2899_ = lean_box(0);
v___x_2900_ = lean_mk_array(v_nbuckets_2897_, v___x_2899_);
v___x_2901_ = lean_array_propagate_mark(v_data_2894_, v___x_2900_);
v___x_2902_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30___redArg(v___x_2898_, v_data_2894_, v___x_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___redArg(lean_object* v_a_2903_, lean_object* v_x_2904_){
_start:
{
if (lean_obj_tag(v_x_2904_) == 0)
{
uint8_t v___x_2905_; 
v___x_2905_ = 0;
return v___x_2905_;
}
else
{
lean_object* v_key_2906_; lean_object* v_tail_2907_; uint8_t v___x_2908_; 
v_key_2906_ = lean_ctor_get(v_x_2904_, 0);
v_tail_2907_ = lean_ctor_get(v_x_2904_, 2);
v___x_2908_ = l_Lean_instBEqExtraModUse_beq(v_key_2906_, v_a_2903_);
if (v___x_2908_ == 0)
{
v_x_2904_ = v_tail_2907_;
goto _start;
}
else
{
return v___x_2908_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___redArg___boxed(lean_object* v_a_2910_, lean_object* v_x_2911_){
_start:
{
uint8_t v_res_2912_; lean_object* v_r_2913_; 
v_res_2912_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___redArg(v_a_2910_, v_x_2911_);
lean_dec(v_x_2911_);
lean_dec_ref(v_a_2910_);
v_r_2913_ = lean_box(v_res_2912_);
return v_r_2913_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21___redArg(lean_object* v_m_2914_, lean_object* v_a_2915_, lean_object* v_b_2916_){
_start:
{
lean_object* v_size_2917_; lean_object* v_buckets_2918_; lean_object* v___x_2919_; uint64_t v___x_2920_; uint64_t v___x_2921_; uint64_t v___x_2922_; uint64_t v_fold_2923_; uint64_t v___x_2924_; uint64_t v___x_2925_; uint64_t v___x_2926_; size_t v___x_2927_; size_t v___x_2928_; size_t v___x_2929_; size_t v___x_2930_; size_t v___x_2931_; lean_object* v_bkt_2932_; uint8_t v___x_2933_; 
v_size_2917_ = lean_ctor_get(v_m_2914_, 0);
v_buckets_2918_ = lean_ctor_get(v_m_2914_, 1);
v___x_2919_ = lean_array_get_size(v_buckets_2918_);
v___x_2920_ = l_Lean_instHashableExtraModUse_hash(v_a_2915_);
v___x_2921_ = 32ULL;
v___x_2922_ = lean_uint64_shift_right(v___x_2920_, v___x_2921_);
v_fold_2923_ = lean_uint64_xor(v___x_2920_, v___x_2922_);
v___x_2924_ = 16ULL;
v___x_2925_ = lean_uint64_shift_right(v_fold_2923_, v___x_2924_);
v___x_2926_ = lean_uint64_xor(v_fold_2923_, v___x_2925_);
v___x_2927_ = lean_uint64_to_usize(v___x_2926_);
v___x_2928_ = lean_usize_of_nat(v___x_2919_);
v___x_2929_ = ((size_t)1ULL);
v___x_2930_ = lean_usize_sub(v___x_2928_, v___x_2929_);
v___x_2931_ = lean_usize_land(v___x_2927_, v___x_2930_);
v_bkt_2932_ = lean_array_uget_borrowed(v_buckets_2918_, v___x_2931_);
v___x_2933_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___redArg(v_a_2915_, v_bkt_2932_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2954_; 
lean_inc_ref(v_buckets_2918_);
lean_inc(v_size_2917_);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_m_2914_);
if (v_isSharedCheck_2954_ == 0)
{
lean_object* v_unused_2955_; lean_object* v_unused_2956_; 
v_unused_2955_ = lean_ctor_get(v_m_2914_, 1);
lean_dec(v_unused_2955_);
v_unused_2956_ = lean_ctor_get(v_m_2914_, 0);
lean_dec(v_unused_2956_);
v___x_2935_ = v_m_2914_;
v_isShared_2936_ = v_isSharedCheck_2954_;
goto v_resetjp_2934_;
}
else
{
lean_dec(v_m_2914_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2954_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2937_; lean_object* v_size_x27_2938_; lean_object* v___x_2939_; lean_object* v_buckets_x27_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; uint8_t v___x_2946_; 
v___x_2937_ = lean_unsigned_to_nat(1u);
v_size_x27_2938_ = lean_nat_add(v_size_2917_, v___x_2937_);
lean_dec(v_size_2917_);
lean_inc(v_bkt_2932_);
v___x_2939_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2939_, 0, v_a_2915_);
lean_ctor_set(v___x_2939_, 1, v_b_2916_);
lean_ctor_set(v___x_2939_, 2, v_bkt_2932_);
v_buckets_x27_2940_ = lean_array_uset(v_buckets_2918_, v___x_2931_, v___x_2939_);
v___x_2941_ = lean_unsigned_to_nat(4u);
v___x_2942_ = lean_nat_mul(v_size_x27_2938_, v___x_2941_);
v___x_2943_ = lean_unsigned_to_nat(3u);
v___x_2944_ = lean_nat_div(v___x_2942_, v___x_2943_);
lean_dec(v___x_2942_);
v___x_2945_ = lean_array_get_size(v_buckets_x27_2940_);
v___x_2946_ = lean_nat_dec_le(v___x_2944_, v___x_2945_);
lean_dec(v___x_2944_);
if (v___x_2946_ == 0)
{
lean_object* v_val_2947_; lean_object* v___x_2949_; 
v_val_2947_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26___redArg(v_buckets_x27_2940_);
if (v_isShared_2936_ == 0)
{
lean_ctor_set(v___x_2935_, 1, v_val_2947_);
lean_ctor_set(v___x_2935_, 0, v_size_x27_2938_);
v___x_2949_ = v___x_2935_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_size_x27_2938_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v_val_2947_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
else
{
lean_object* v___x_2952_; 
if (v_isShared_2936_ == 0)
{
lean_ctor_set(v___x_2935_, 1, v_buckets_x27_2940_);
lean_ctor_set(v___x_2935_, 0, v_size_x27_2938_);
v___x_2952_ = v___x_2935_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_size_x27_2938_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v_buckets_x27_2940_);
v___x_2952_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
return v___x_2952_;
}
}
}
}
else
{
lean_dec(v_b_2916_);
lean_dec_ref(v_a_2915_);
return v_m_2914_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(lean_object* v_keys_2957_, lean_object* v_i_2958_, lean_object* v_k_2959_){
_start:
{
lean_object* v___x_2960_; uint8_t v___x_2961_; 
v___x_2960_ = lean_array_get_size(v_keys_2957_);
v___x_2961_ = lean_nat_dec_lt(v_i_2958_, v___x_2960_);
if (v___x_2961_ == 0)
{
lean_dec(v_i_2958_);
return v___x_2961_;
}
else
{
lean_object* v_k_x27_2962_; uint8_t v___x_2963_; 
v_k_x27_2962_ = lean_array_fget_borrowed(v_keys_2957_, v_i_2958_);
v___x_2963_ = l_Lean_instBEqExtraModUse_beq(v_k_2959_, v_k_x27_2962_);
if (v___x_2963_ == 0)
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = lean_unsigned_to_nat(1u);
v___x_2965_ = lean_nat_add(v_i_2958_, v___x_2964_);
lean_dec(v_i_2958_);
v_i_2958_ = v___x_2965_;
goto _start;
}
else
{
lean_dec(v_i_2958_);
return v___x_2961_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg___boxed(lean_object* v_keys_2967_, lean_object* v_i_2968_, lean_object* v_k_2969_){
_start:
{
uint8_t v_res_2970_; lean_object* v_r_2971_; 
v_res_2970_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(v_keys_2967_, v_i_2968_, v_k_2969_);
lean_dec_ref(v_k_2969_);
lean_dec_ref(v_keys_2967_);
v_r_2971_ = lean_box(v_res_2970_);
return v_r_2971_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(lean_object* v_x_2972_, size_t v_x_2973_, lean_object* v_x_2974_){
_start:
{
if (lean_obj_tag(v_x_2972_) == 0)
{
lean_object* v_es_2975_; lean_object* v___x_2976_; size_t v___x_2977_; size_t v___x_2978_; lean_object* v_j_2979_; lean_object* v___x_2980_; 
v_es_2975_ = lean_ctor_get(v_x_2972_, 0);
v___x_2976_ = lean_box(2);
v___x_2977_ = ((size_t)31ULL);
v___x_2978_ = lean_usize_land(v_x_2973_, v___x_2977_);
v_j_2979_ = lean_usize_to_nat(v___x_2978_);
v___x_2980_ = lean_array_get_borrowed(v___x_2976_, v_es_2975_, v_j_2979_);
lean_dec(v_j_2979_);
switch(lean_obj_tag(v___x_2980_))
{
case 0:
{
lean_object* v_key_2981_; uint8_t v___x_2982_; 
v_key_2981_ = lean_ctor_get(v___x_2980_, 0);
v___x_2982_ = l_Lean_instBEqExtraModUse_beq(v_x_2974_, v_key_2981_);
return v___x_2982_;
}
case 1:
{
lean_object* v_node_2983_; size_t v___x_2984_; size_t v___x_2985_; 
v_node_2983_ = lean_ctor_get(v___x_2980_, 0);
v___x_2984_ = ((size_t)5ULL);
v___x_2985_ = lean_usize_shift_right(v_x_2973_, v___x_2984_);
v_x_2972_ = v_node_2983_;
v_x_2973_ = v___x_2985_;
goto _start;
}
default: 
{
uint8_t v___x_2987_; 
v___x_2987_ = 0;
return v___x_2987_;
}
}
}
else
{
lean_object* v_ks_2988_; lean_object* v___x_2989_; uint8_t v___x_2990_; 
v_ks_2988_ = lean_ctor_get(v_x_2972_, 0);
v___x_2989_ = lean_unsigned_to_nat(0u);
v___x_2990_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(v_ks_2988_, v___x_2989_, v_x_2974_);
return v___x_2990_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg___boxed(lean_object* v_x_2991_, lean_object* v_x_2992_, lean_object* v_x_2993_){
_start:
{
size_t v_x_92209__boxed_2994_; uint8_t v_res_2995_; lean_object* v_r_2996_; 
v_x_92209__boxed_2994_ = lean_unbox_usize(v_x_2992_);
lean_dec(v_x_2992_);
v_res_2995_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(v_x_2991_, v_x_92209__boxed_2994_, v_x_2993_);
lean_dec_ref(v_x_2993_);
lean_dec_ref(v_x_2991_);
v_r_2996_ = lean_box(v_res_2995_);
return v_r_2996_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(lean_object* v_x_2997_, lean_object* v_x_2998_){
_start:
{
uint64_t v___x_2999_; size_t v___x_3000_; uint8_t v___x_3001_; 
v___x_2999_ = l_Lean_instHashableExtraModUse_hash(v_x_2998_);
v___x_3000_ = lean_uint64_to_usize(v___x_2999_);
v___x_3001_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(v_x_2997_, v___x_3000_, v_x_2998_);
return v___x_3001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg___boxed(lean_object* v_x_3002_, lean_object* v_x_3003_){
_start:
{
uint8_t v_res_3004_; lean_object* v_r_3005_; 
v_res_3004_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(v_x_3002_, v_x_3003_);
lean_dec_ref(v_x_3003_);
lean_dec_ref(v_x_3002_);
v_r_3005_ = lean_box(v_res_3004_);
return v_r_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___lam__0(lean_object* v___x_3006_, lean_object* v_entry_3007_, lean_object* v_s_3008_){
_start:
{
lean_object* v_addEntryFn_3009_; lean_object* v_importedEntries_3010_; lean_object* v_state_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3019_; 
v_addEntryFn_3009_ = lean_ctor_get(v___x_3006_, 3);
lean_inc(v_addEntryFn_3009_);
lean_dec_ref(v___x_3006_);
v_importedEntries_3010_ = lean_ctor_get(v_s_3008_, 0);
v_state_3011_ = lean_ctor_get(v_s_3008_, 1);
v_isSharedCheck_3019_ = !lean_is_exclusive(v_s_3008_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3013_ = v_s_3008_;
v_isShared_3014_ = v_isSharedCheck_3019_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_state_3011_);
lean_inc(v_importedEntries_3010_);
lean_dec(v_s_3008_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3019_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v_state_3015_; lean_object* v___x_3017_; 
v_state_3015_ = lean_apply_2(v_addEntryFn_3009_, v_state_3011_, v_entry_3007_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 1, v_state_3015_);
v___x_3017_ = v___x_3013_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_importedEntries_3010_);
lean_ctor_set(v_reuseFailAlloc_3018_, 1, v_state_3015_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0(void){
_start:
{
lean_object* v___x_3020_; 
v___x_3020_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3020_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1(void){
_start:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3021_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__0);
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
return v___x_3022_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2(void){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1);
v___x_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3023_);
lean_ctor_set(v___x_3024_, 1, v___x_3023_);
return v___x_3024_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3(void){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__1);
v___x_3026_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3025_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
lean_ctor_set(v___x_3026_, 2, v___x_3025_);
lean_ctor_set(v___x_3026_, 3, v___x_3025_);
lean_ctor_set(v___x_3026_, 4, v___x_3025_);
lean_ctor_set(v___x_3026_, 5, v___x_3025_);
return v___x_3026_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4(void){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3027_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3032_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__7));
v___x_3033_ = l_Lean_stringToMessageData(v___x_3032_);
return v___x_3033_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10(void){
_start:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__9));
v___x_3036_ = l_Lean_stringToMessageData(v___x_3035_);
return v___x_3036_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11(void){
_start:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22));
v___x_3038_ = l_Lean_stringToMessageData(v___x_3037_);
return v___x_3038_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14(void){
_start:
{
lean_object* v_cls_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v_cls_3042_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6));
v___x_3043_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13));
v___x_3044_ = l_Lean_Name_append(v___x_3043_, v_cls_3042_);
return v___x_3044_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16(void){
_start:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__15));
v___x_3047_ = l_Lean_stringToMessageData(v___x_3046_);
return v___x_3047_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18(void){
_start:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3049_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__17));
v___x_3050_ = l_Lean_stringToMessageData(v___x_3049_);
return v___x_3050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(lean_object* v_mod_3055_, uint8_t v_isMeta_3056_, lean_object* v_hint_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_){
_start:
{
lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v___y_3069_; lean_object* v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v_env_3100_; uint8_t v_isExporting_3101_; lean_object* v_entry_3102_; lean_object* v___x_3103_; lean_object* v_env_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; uint8_t v___x_3109_; 
v___x_3098_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__4);
v___x_3099_ = lean_st_ref_get(v___y_3064_);
v_env_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc_ref(v_env_3100_);
lean_dec(v___x_3099_);
v_isExporting_3101_ = lean_ctor_get_uint8(v_env_3100_, sizeof(void*)*13);
lean_dec_ref(v_env_3100_);
lean_inc(v_mod_3055_);
v_entry_3102_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3102_, 0, v_mod_3055_);
lean_ctor_set_uint8(v_entry_3102_, sizeof(void*)*1, v_isExporting_3101_);
lean_ctor_set_uint8(v_entry_3102_, sizeof(void*)*1 + 1, v_isMeta_3056_);
v___x_3103_ = lean_st_ref_get(v___y_3064_);
v_env_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc_ref(v_env_3104_);
lean_dec(v___x_3103_);
v___x_3105_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3106_ = lean_box(1);
v___x_3107_ = lean_box(0);
v___x_3108_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3098_, v___x_3105_, v_env_3104_, v___x_3106_, v___x_3107_);
v___x_3109_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(v___x_3108_, v_entry_3102_);
lean_dec(v___x_3108_);
if (v___x_3109_ == 0)
{
lean_object* v_toCold_3110_; lean_object* v_options_3111_; lean_object* v_inheritedTraceOptions_3112_; uint8_t v_hasTrace_3113_; lean_object* v___f_3114_; uint8_t v___x_3115_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3146_; lean_object* v___y_3147_; 
v_toCold_3110_ = lean_ctor_get(v___y_3063_, 0);
v_options_3111_ = lean_ctor_get(v_toCold_3110_, 2);
v_inheritedTraceOptions_3112_ = lean_ctor_get(v_toCold_3110_, 11);
v_hasTrace_3113_ = lean_ctor_get_uint8(v_options_3111_, sizeof(void*)*1);
lean_inc_ref(v_entry_3102_);
v___f_3114_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___lam__0), 3, 2);
lean_closure_set(v___f_3114_, 0, v___x_3105_);
lean_closure_set(v___f_3114_, 1, v_entry_3102_);
v___x_3115_ = 1;
if (v_hasTrace_3113_ == 0)
{
lean_dec(v_hint_3057_);
lean_dec(v_mod_3055_);
v___y_3146_ = v___y_3062_;
v___y_3147_ = v___y_3064_;
goto v___jp_3145_;
}
else
{
lean_object* v_cls_3154_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___x_3174_; uint8_t v___x_3175_; 
v_cls_3154_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__6));
v___x_3174_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__14);
v___x_3175_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3112_, v_options_3111_, v___x_3174_);
if (v___x_3175_ == 0)
{
lean_dec(v_hint_3057_);
lean_dec(v_mod_3055_);
v___y_3146_ = v___y_3062_;
v___y_3147_ = v___y_3064_;
goto v___jp_3145_;
}
else
{
lean_object* v___x_3176_; lean_object* v___y_3178_; 
v___x_3176_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__16);
if (v_isExporting_3101_ == 0)
{
lean_object* v___x_3185_; 
v___x_3185_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__21));
v___y_3178_ = v___x_3185_;
goto v___jp_3177_;
}
else
{
lean_object* v___x_3186_; 
v___x_3186_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__22));
v___y_3178_ = v___x_3186_;
goto v___jp_3177_;
}
v___jp_3177_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
lean_inc_ref(v___y_3178_);
v___x_3179_ = l_Lean_stringToMessageData(v___y_3178_);
v___x_3180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3176_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
v___x_3181_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__18);
v___x_3182_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3180_);
lean_ctor_set(v___x_3182_, 1, v___x_3181_);
if (v_isMeta_3056_ == 0)
{
lean_object* v___x_3183_; 
v___x_3183_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__19));
v___y_3161_ = v___x_3182_;
v___y_3162_ = v___x_3183_;
goto v___jp_3160_;
}
else
{
lean_object* v___x_3184_; 
v___x_3184_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__20));
v___y_3161_ = v___x_3182_;
v___y_3162_ = v___x_3184_;
goto v___jp_3160_;
}
}
}
v___jp_3155_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___y_3156_);
lean_ctor_set(v___x_3158_, 1, v___y_3157_);
v___x_3159_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_3154_, v___x_3158_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_dec_ref_known(v___x_3159_, 1);
v___y_3146_ = v___y_3062_;
v___y_3147_ = v___y_3064_;
goto v___jp_3145_;
}
else
{
lean_dec_ref(v___f_3114_);
lean_dec_ref_known(v_entry_3102_, 1);
return v___x_3159_;
}
}
v___jp_3160_:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; uint8_t v___x_3169_; 
lean_inc_ref(v___y_3162_);
v___x_3163_ = l_Lean_stringToMessageData(v___y_3162_);
v___x_3164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___y_3161_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__8);
v___x_3166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3164_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
v___x_3167_ = l_Lean_MessageData_ofName(v_mod_3055_);
v___x_3168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3166_);
lean_ctor_set(v___x_3168_, 1, v___x_3167_);
v___x_3169_ = l_Lean_Name_isAnonymous(v_hint_3057_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__10);
v___x_3171_ = l_Lean_MessageData_ofName(v_hint_3057_);
v___x_3172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3170_);
lean_ctor_set(v___x_3172_, 1, v___x_3171_);
v___y_3156_ = v___x_3168_;
v___y_3157_ = v___x_3172_;
goto v___jp_3155_;
}
else
{
lean_object* v___x_3173_; 
lean_dec(v_hint_3057_);
v___x_3173_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__11);
v___y_3156_ = v___x_3168_;
v___y_3157_ = v___x_3173_;
goto v___jp_3155_;
}
}
}
v___jp_3116_:
{
lean_object* v___x_3119_; lean_object* v_toEnvExtension_3120_; uint8_t v_logWrites_3121_; 
v___x_3119_ = lean_st_ref_take(v___y_3118_);
v_toEnvExtension_3120_ = lean_ctor_get(v___x_3105_, 0);
v_logWrites_3121_ = lean_ctor_get_uint8(v_toEnvExtension_3120_, sizeof(void*)*6);
if (v_logWrites_3121_ == 0)
{
lean_object* v_env_3122_; lean_object* v_nextMacroScope_3123_; lean_object* v_ngen_3124_; lean_object* v_auxDeclNGen_3125_; lean_object* v_traceState_3126_; lean_object* v_recordedDeps_3127_; lean_object* v_messages_3128_; lean_object* v_infoState_3129_; lean_object* v_snapshotTasks_3130_; lean_object* v_asyncMode_3131_; lean_object* v___x_3132_; 
v_env_3122_ = lean_ctor_get(v___x_3119_, 0);
lean_inc_ref(v_env_3122_);
v_nextMacroScope_3123_ = lean_ctor_get(v___x_3119_, 1);
lean_inc(v_nextMacroScope_3123_);
v_ngen_3124_ = lean_ctor_get(v___x_3119_, 2);
lean_inc_ref(v_ngen_3124_);
v_auxDeclNGen_3125_ = lean_ctor_get(v___x_3119_, 3);
lean_inc_ref(v_auxDeclNGen_3125_);
v_traceState_3126_ = lean_ctor_get(v___x_3119_, 4);
lean_inc_ref(v_traceState_3126_);
v_recordedDeps_3127_ = lean_ctor_get(v___x_3119_, 6);
lean_inc_ref(v_recordedDeps_3127_);
v_messages_3128_ = lean_ctor_get(v___x_3119_, 7);
lean_inc_ref(v_messages_3128_);
v_infoState_3129_ = lean_ctor_get(v___x_3119_, 8);
lean_inc_ref(v_infoState_3129_);
v_snapshotTasks_3130_ = lean_ctor_get(v___x_3119_, 9);
lean_inc_ref(v_snapshotTasks_3130_);
lean_dec(v___x_3119_);
v_asyncMode_3131_ = lean_ctor_get(v_toEnvExtension_3120_, 2);
lean_inc_ref(v_toEnvExtension_3120_);
v___x_3132_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3120_, v_env_3122_, v___f_3114_, v_asyncMode_3131_, v___x_3107_, v___x_3115_);
v___y_3067_ = v_snapshotTasks_3130_;
v___y_3068_ = v_infoState_3129_;
v___y_3069_ = v_messages_3128_;
v___y_3070_ = v___y_3117_;
v___y_3071_ = v_traceState_3126_;
v___y_3072_ = v_nextMacroScope_3123_;
v___y_3073_ = v___y_3118_;
v___y_3074_ = v_recordedDeps_3127_;
v___y_3075_ = v_auxDeclNGen_3125_;
v___y_3076_ = v_ngen_3124_;
v___y_3077_ = v___x_3132_;
goto v___jp_3066_;
}
else
{
lean_object* v_env_3133_; lean_object* v_nextMacroScope_3134_; lean_object* v_ngen_3135_; lean_object* v_auxDeclNGen_3136_; lean_object* v_traceState_3137_; lean_object* v_recordedDeps_3138_; lean_object* v_messages_3139_; lean_object* v_infoState_3140_; lean_object* v_snapshotTasks_3141_; lean_object* v_asyncMode_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v_env_3133_ = lean_ctor_get(v___x_3119_, 0);
lean_inc_ref(v_env_3133_);
v_nextMacroScope_3134_ = lean_ctor_get(v___x_3119_, 1);
lean_inc(v_nextMacroScope_3134_);
v_ngen_3135_ = lean_ctor_get(v___x_3119_, 2);
lean_inc_ref(v_ngen_3135_);
v_auxDeclNGen_3136_ = lean_ctor_get(v___x_3119_, 3);
lean_inc_ref(v_auxDeclNGen_3136_);
v_traceState_3137_ = lean_ctor_get(v___x_3119_, 4);
lean_inc_ref(v_traceState_3137_);
v_recordedDeps_3138_ = lean_ctor_get(v___x_3119_, 6);
lean_inc_ref(v_recordedDeps_3138_);
v_messages_3139_ = lean_ctor_get(v___x_3119_, 7);
lean_inc_ref(v_messages_3139_);
v_infoState_3140_ = lean_ctor_get(v___x_3119_, 8);
lean_inc_ref(v_infoState_3140_);
v_snapshotTasks_3141_ = lean_ctor_get(v___x_3119_, 9);
lean_inc_ref(v_snapshotTasks_3141_);
lean_dec(v___x_3119_);
v_asyncMode_3142_ = lean_ctor_get(v_toEnvExtension_3120_, 2);
lean_inc_ref_n(v_toEnvExtension_3120_, 2);
v___x_3143_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3120_, v_env_3133_);
lean_dec_ref(v_env_3133_);
v___x_3144_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3120_, v___x_3143_, v___f_3114_, v_asyncMode_3142_, v___x_3107_, v___x_3115_);
v___y_3067_ = v_snapshotTasks_3141_;
v___y_3068_ = v_infoState_3140_;
v___y_3069_ = v_messages_3139_;
v___y_3070_ = v___y_3117_;
v___y_3071_ = v_traceState_3137_;
v___y_3072_ = v_nextMacroScope_3134_;
v___y_3073_ = v___y_3118_;
v___y_3074_ = v_recordedDeps_3138_;
v___y_3075_ = v_auxDeclNGen_3136_;
v___y_3076_ = v_ngen_3135_;
v___y_3077_ = v___x_3144_;
goto v___jp_3066_;
}
}
v___jp_3145_:
{
uint8_t v___x_3148_; 
v___x_3148_ = l_Lean_usageRecordingEnabled();
if (v___x_3148_ == 0)
{
lean_dec_ref_known(v_entry_3102_, 1);
v___y_3117_ = v___y_3146_;
v___y_3118_ = v___y_3147_;
goto v___jp_3116_;
}
else
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3149_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_3150_ = lean_st_ref_take(v___x_3149_);
v___x_3151_ = lean_box(0);
v___x_3152_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21___redArg(v___x_3150_, v_entry_3102_, v___x_3151_);
v___x_3153_ = lean_st_ref_put(v___x_3149_, v___x_3152_);
v___y_3117_ = v___y_3146_;
v___y_3118_ = v___y_3147_;
goto v___jp_3116_;
}
}
}
else
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
lean_dec_ref_known(v_entry_3102_, 1);
lean_dec(v_hint_3057_);
lean_dec(v_mod_3055_);
v___x_3187_ = lean_box(0);
v___x_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3187_);
return v___x_3188_;
}
v___jp_3066_:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v_mctx_3082_; lean_object* v_zetaDeltaFVarIds_3083_; lean_object* v_postponed_3084_; lean_object* v_diag_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3096_; 
v___x_3078_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__2);
v___x_3079_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3079_, 0, v___y_3077_);
lean_ctor_set(v___x_3079_, 1, v___y_3072_);
lean_ctor_set(v___x_3079_, 2, v___y_3076_);
lean_ctor_set(v___x_3079_, 3, v___y_3075_);
lean_ctor_set(v___x_3079_, 4, v___y_3071_);
lean_ctor_set(v___x_3079_, 5, v___x_3078_);
lean_ctor_set(v___x_3079_, 6, v___y_3074_);
lean_ctor_set(v___x_3079_, 7, v___y_3069_);
lean_ctor_set(v___x_3079_, 8, v___y_3068_);
lean_ctor_set(v___x_3079_, 9, v___y_3067_);
v___x_3080_ = lean_st_ref_put(v___y_3073_, v___x_3079_);
v___x_3081_ = lean_st_ref_take(v___y_3070_);
v_mctx_3082_ = lean_ctor_get(v___x_3081_, 0);
v_zetaDeltaFVarIds_3083_ = lean_ctor_get(v___x_3081_, 2);
v_postponed_3084_ = lean_ctor_get(v___x_3081_, 3);
v_diag_3085_ = lean_ctor_get(v___x_3081_, 4);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3081_);
if (v_isSharedCheck_3096_ == 0)
{
lean_object* v_unused_3097_; 
v_unused_3097_ = lean_ctor_get(v___x_3081_, 1);
lean_dec(v_unused_3097_);
v___x_3087_ = v___x_3081_;
v_isShared_3088_ = v_isSharedCheck_3096_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_diag_3085_);
lean_inc(v_postponed_3084_);
lean_inc(v_zetaDeltaFVarIds_3083_);
lean_inc(v_mctx_3082_);
lean_dec(v___x_3081_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3096_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3092_; 
v___x_3089_ = lean_box(0);
v___x_3090_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__3);
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 1, v___x_3090_);
v___x_3092_ = v___x_3087_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_mctx_3082_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v___x_3090_);
lean_ctor_set(v_reuseFailAlloc_3095_, 2, v_zetaDeltaFVarIds_3083_);
lean_ctor_set(v_reuseFailAlloc_3095_, 3, v_postponed_3084_);
lean_ctor_set(v_reuseFailAlloc_3095_, 4, v_diag_3085_);
v___x_3092_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3093_ = lean_st_ref_put(v___y_3070_, v___x_3092_);
v___x_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3089_);
return v___x_3094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___boxed(lean_object* v_mod_3189_, lean_object* v_isMeta_3190_, lean_object* v_hint_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_){
_start:
{
uint8_t v_isMeta_boxed_3200_; lean_object* v_res_3201_; 
v_isMeta_boxed_3200_ = lean_unbox(v_isMeta_3190_);
v_res_3201_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(v_mod_3189_, v_isMeta_boxed_3200_, v_hint_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
lean_dec(v___y_3196_);
lean_dec_ref(v___y_3195_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec_ref(v___y_3192_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(lean_object* v___x_3202_, lean_object* v_declName_3203_, lean_object* v_as_3204_, size_t v_sz_3205_, size_t v_i_3206_, lean_object* v_b_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_){
_start:
{
uint8_t v___x_3216_; 
v___x_3216_ = lean_usize_dec_lt(v_i_3206_, v_sz_3205_);
if (v___x_3216_ == 0)
{
lean_object* v___x_3217_; 
lean_dec(v_declName_3203_);
v___x_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3217_, 0, v_b_3207_);
return v___x_3217_;
}
else
{
lean_object* v___x_3218_; lean_object* v_modules_3219_; lean_object* v___x_3220_; lean_object* v_a_3221_; lean_object* v___x_3222_; lean_object* v_toImport_3223_; lean_object* v_module_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; lean_object* v___x_3227_; 
v___x_3218_ = l_Lean_Environment_header(v___x_3202_);
v_modules_3219_ = lean_ctor_get(v___x_3218_, 3);
lean_inc_ref(v_modules_3219_);
lean_dec_ref(v___x_3218_);
v___x_3220_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3221_ = lean_array_uget_borrowed(v_as_3204_, v_i_3206_);
v___x_3222_ = lean_array_get(v___x_3220_, v_modules_3219_, v_a_3221_);
lean_dec_ref(v_modules_3219_);
v_toImport_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc_ref(v_toImport_3223_);
lean_dec(v___x_3222_);
v_module_3224_ = lean_ctor_get(v_toImport_3223_, 0);
lean_inc(v_module_3224_);
lean_dec_ref(v_toImport_3223_);
v___x_3225_ = lean_box(0);
v___x_3226_ = 0;
lean_inc(v_declName_3203_);
v___x_3227_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(v_module_3224_, v___x_3226_, v_declName_3203_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_);
if (lean_obj_tag(v___x_3227_) == 0)
{
size_t v___x_3228_; size_t v___x_3229_; 
lean_dec_ref_known(v___x_3227_, 1);
v___x_3228_ = ((size_t)1ULL);
v___x_3229_ = lean_usize_add(v_i_3206_, v___x_3228_);
v_i_3206_ = v___x_3229_;
v_b_3207_ = v___x_3225_;
goto _start;
}
else
{
lean_dec(v_declName_3203_);
return v___x_3227_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17___boxed(lean_object* v___x_3231_, lean_object* v_declName_3232_, lean_object* v_as_3233_, lean_object* v_sz_3234_, lean_object* v_i_3235_, lean_object* v_b_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
size_t v_sz_boxed_3245_; size_t v_i_boxed_3246_; lean_object* v_res_3247_; 
v_sz_boxed_3245_ = lean_unbox_usize(v_sz_3234_);
lean_dec(v_sz_3234_);
v_i_boxed_3246_ = lean_unbox_usize(v_i_3235_);
lean_dec(v_i_3235_);
v_res_3247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(v___x_3231_, v_declName_3232_, v_as_3233_, v_sz_boxed_3245_, v_i_boxed_3246_, v_b_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
lean_dec(v___y_3243_);
lean_dec_ref(v___y_3242_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec_ref(v_as_3233_);
lean_dec_ref(v___x_3231_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___redArg(lean_object* v_a_3248_, lean_object* v_x_3249_){
_start:
{
if (lean_obj_tag(v_x_3249_) == 0)
{
lean_object* v___x_3250_; 
v___x_3250_ = lean_box(0);
return v___x_3250_;
}
else
{
lean_object* v_key_3251_; lean_object* v_value_3252_; lean_object* v_tail_3253_; uint8_t v___x_3254_; 
v_key_3251_ = lean_ctor_get(v_x_3249_, 0);
v_value_3252_ = lean_ctor_get(v_x_3249_, 1);
v_tail_3253_ = lean_ctor_get(v_x_3249_, 2);
v___x_3254_ = lean_name_eq(v_key_3251_, v_a_3248_);
if (v___x_3254_ == 0)
{
v_x_3249_ = v_tail_3253_;
goto _start;
}
else
{
lean_object* v___x_3256_; 
lean_inc(v_value_3252_);
v___x_3256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3256_, 0, v_value_3252_);
return v___x_3256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___redArg___boxed(lean_object* v_a_3257_, lean_object* v_x_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___redArg(v_a_3257_, v_x_3258_);
lean_dec(v_x_3258_);
lean_dec(v_a_3257_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(lean_object* v_m_3260_, lean_object* v_a_3261_){
_start:
{
lean_object* v_buckets_3262_; lean_object* v___x_3263_; uint64_t v___y_3265_; 
v_buckets_3262_ = lean_ctor_get(v_m_3260_, 1);
v___x_3263_ = lean_array_get_size(v_buckets_3262_);
if (lean_obj_tag(v_a_3261_) == 0)
{
uint64_t v___x_3279_; 
v___x_3279_ = 1723ULL;
v___y_3265_ = v___x_3279_;
goto v___jp_3264_;
}
else
{
uint64_t v_hash_3280_; 
v_hash_3280_ = lean_ctor_get_uint64(v_a_3261_, sizeof(void*)*2);
v___y_3265_ = v_hash_3280_;
goto v___jp_3264_;
}
v___jp_3264_:
{
uint64_t v___x_3266_; uint64_t v___x_3267_; uint64_t v_fold_3268_; uint64_t v___x_3269_; uint64_t v___x_3270_; uint64_t v___x_3271_; size_t v___x_3272_; size_t v___x_3273_; size_t v___x_3274_; size_t v___x_3275_; size_t v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v___x_3266_ = 32ULL;
v___x_3267_ = lean_uint64_shift_right(v___y_3265_, v___x_3266_);
v_fold_3268_ = lean_uint64_xor(v___y_3265_, v___x_3267_);
v___x_3269_ = 16ULL;
v___x_3270_ = lean_uint64_shift_right(v_fold_3268_, v___x_3269_);
v___x_3271_ = lean_uint64_xor(v_fold_3268_, v___x_3270_);
v___x_3272_ = lean_uint64_to_usize(v___x_3271_);
v___x_3273_ = lean_usize_of_nat(v___x_3263_);
v___x_3274_ = ((size_t)1ULL);
v___x_3275_ = lean_usize_sub(v___x_3273_, v___x_3274_);
v___x_3276_ = lean_usize_land(v___x_3272_, v___x_3275_);
v___x_3277_ = lean_array_uget_borrowed(v_buckets_3262_, v___x_3276_);
v___x_3278_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___redArg(v_a_3261_, v___x_3277_);
return v___x_3278_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg___boxed(lean_object* v_m_3281_, lean_object* v_a_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(v_m_3281_, v_a_3282_);
lean_dec(v_a_3282_);
lean_dec_ref(v_m_3281_);
return v_res_3283_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0(void){
_start:
{
lean_object* v___x_3284_; 
v___x_3284_ = l_Std_HashMap_instInhabited___redArg();
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(lean_object* v_declName_3287_, uint8_t v_isMeta_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_){
_start:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v_env_3302_; lean_object* v___y_3304_; lean_object* v___x_3317_; 
v___x_3297_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__0);
v___x_3298_ = lean_st_ref_get(v___y_3295_);
v_env_3302_ = lean_ctor_get(v___x_3298_, 0);
lean_inc_ref(v_env_3302_);
lean_dec(v___x_3298_);
v___x_3317_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3302_, v_declName_3287_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_dec_ref(v_env_3302_);
lean_dec(v_declName_3287_);
goto v___jp_3299_;
}
else
{
lean_object* v_val_3318_; lean_object* v___x_3319_; lean_object* v_modules_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v_val_3318_ = lean_ctor_get(v___x_3317_, 0);
lean_inc(v_val_3318_);
lean_dec_ref_known(v___x_3317_, 1);
v___x_3319_ = l_Lean_Environment_header(v_env_3302_);
v_modules_3320_ = lean_ctor_get(v___x_3319_, 3);
lean_inc_ref(v_modules_3320_);
lean_dec_ref(v___x_3319_);
v___x_3321_ = lean_array_get_size(v_modules_3320_);
v___x_3322_ = lean_nat_dec_lt(v_val_3318_, v___x_3321_);
if (v___x_3322_ == 0)
{
lean_dec_ref(v_modules_3320_);
lean_dec(v_val_3318_);
lean_dec_ref(v_env_3302_);
lean_dec(v_declName_3287_);
goto v___jp_3299_;
}
else
{
lean_object* v___x_3323_; lean_object* v___x_3324_; uint8_t v___y_3326_; 
v___x_3323_ = lean_array_fget(v_modules_3320_, v_val_3318_);
lean_dec(v_val_3318_);
lean_dec_ref(v_modules_3320_);
v___x_3324_ = lean_st_ref_get(v___y_3295_);
if (v_isMeta_3288_ == 0)
{
lean_dec(v___x_3324_);
v___y_3326_ = v_isMeta_3288_;
goto v___jp_3325_;
}
else
{
lean_object* v_env_3337_; uint8_t v___x_3338_; 
v_env_3337_ = lean_ctor_get(v___x_3324_, 0);
lean_inc_ref(v_env_3337_);
lean_dec(v___x_3324_);
lean_inc(v_declName_3287_);
v___x_3338_ = l_Lean_isMarkedMeta(v_env_3337_, v_declName_3287_);
if (v___x_3338_ == 0)
{
v___y_3326_ = v_isMeta_3288_;
goto v___jp_3325_;
}
else
{
uint8_t v___x_3339_; 
v___x_3339_ = 0;
v___y_3326_ = v___x_3339_;
goto v___jp_3325_;
}
}
v___jp_3325_:
{
lean_object* v_toImport_3327_; lean_object* v_module_3328_; lean_object* v___x_3329_; 
v_toImport_3327_ = lean_ctor_get(v___x_3323_, 0);
lean_inc_ref(v_toImport_3327_);
lean_dec(v___x_3323_);
v_module_3328_ = lean_ctor_get(v_toImport_3327_, 0);
lean_inc(v_module_3328_);
lean_dec_ref(v_toImport_3327_);
lean_inc(v_declName_3287_);
v___x_3329_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16(v_module_3328_, v___y_3326_, v_declName_3287_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
if (lean_obj_tag(v___x_3329_) == 0)
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
lean_dec_ref_known(v___x_3329_, 1);
v___x_3330_ = l_Lean_indirectModUseExt;
v___x_3331_ = lean_box(1);
v___x_3332_ = lean_box(0);
lean_inc_ref(v_env_3302_);
v___x_3333_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3297_, v___x_3330_, v_env_3302_, v___x_3331_, v___x_3332_);
v___x_3334_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(v___x_3333_, v_declName_3287_);
lean_dec(v___x_3333_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v___x_3335_; 
v___x_3335_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___closed__1));
v___y_3304_ = v___x_3335_;
goto v___jp_3303_;
}
else
{
lean_object* v_val_3336_; 
v_val_3336_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_val_3336_);
lean_dec_ref_known(v___x_3334_, 1);
v___y_3304_ = v_val_3336_;
goto v___jp_3303_;
}
}
else
{
lean_dec_ref(v_env_3302_);
lean_dec(v_declName_3287_);
return v___x_3329_;
}
}
}
}
v___jp_3299_:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3300_ = lean_box(0);
v___x_3301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3300_);
return v___x_3301_;
}
v___jp_3303_:
{
lean_object* v___x_3305_; size_t v_sz_3306_; size_t v___x_3307_; lean_object* v___x_3308_; 
v___x_3305_ = lean_box(0);
v_sz_3306_ = lean_array_size(v___y_3304_);
v___x_3307_ = ((size_t)0ULL);
v___x_3308_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__17(v_env_3302_, v_declName_3287_, v___y_3304_, v_sz_3306_, v___x_3307_, v___x_3305_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
lean_dec_ref(v___y_3304_);
lean_dec_ref(v_env_3302_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3315_; 
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3315_ == 0)
{
lean_object* v_unused_3316_; 
v_unused_3316_ = lean_ctor_get(v___x_3308_, 0);
lean_dec(v_unused_3316_);
v___x_3310_ = v___x_3308_;
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
else
{
lean_dec(v___x_3308_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3313_; 
if (v_isShared_3311_ == 0)
{
lean_ctor_set(v___x_3310_, 0, v___x_3305_);
v___x_3313_ = v___x_3310_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v___x_3305_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
}
else
{
return v___x_3308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12___boxed(lean_object* v_declName_3340_, lean_object* v_isMeta_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_){
_start:
{
uint8_t v_isMeta_boxed_3350_; lean_object* v_res_3351_; 
v_isMeta_boxed_3350_ = lean_unbox(v_isMeta_3341_);
v_res_3351_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(v_declName_3340_, v_isMeta_boxed_3350_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3348_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec_ref(v___y_3342_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(lean_object* v_as_x27_3352_, lean_object* v_b_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_){
_start:
{
if (lean_obj_tag(v_as_x27_3352_) == 0)
{
lean_object* v___x_3362_; 
v___x_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3362_, 0, v_b_3353_);
return v___x_3362_;
}
else
{
lean_object* v_head_3363_; lean_object* v_tail_3364_; lean_object* v___x_3365_; uint8_t v___x_3366_; lean_object* v___x_3367_; 
v_head_3363_ = lean_ctor_get(v_as_x27_3352_, 0);
v_tail_3364_ = lean_ctor_get(v_as_x27_3352_, 1);
v___x_3365_ = lean_box(0);
v___x_3366_ = 1;
lean_inc(v_head_3363_);
v___x_3367_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12(v_head_3363_, v___x_3366_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_dec_ref_known(v___x_3367_, 1);
v_as_x27_3352_ = v_tail_3364_;
v_b_3353_ = v___x_3365_;
goto _start;
}
else
{
return v___x_3367_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg___boxed(lean_object* v_as_x27_3369_, lean_object* v_b_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(v_as_x27_3369_, v_b_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v___y_3375_);
lean_dec_ref(v___y_3374_);
lean_dec(v___y_3373_);
lean_dec_ref(v___y_3372_);
lean_dec_ref(v___y_3371_);
lean_dec(v_as_x27_3369_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(lean_object* v_env_3380_, lean_object* v___x_3381_, lean_object* v_currNamespace_3382_, lean_object* v_openDecls_3383_, lean_object* v_n_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = l_Lean_ResolveName_resolveGlobalName(v_env_3380_, v___x_3381_, v_currNamespace_3382_, v_openDecls_3383_, v_n_3384_);
v___x_3388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
lean_ctor_set(v___x_3388_, 1, v___y_3386_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed(lean_object* v_env_3389_, lean_object* v___x_3390_, lean_object* v_currNamespace_3391_, lean_object* v_openDecls_3392_, lean_object* v_n_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v_res_3396_; 
v_res_3396_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3(v_env_3389_, v___x_3390_, v_currNamespace_3391_, v_openDecls_3392_, v_n_3393_, v___y_3394_, v___y_3395_);
lean_dec_ref(v___y_3394_);
lean_dec_ref(v___x_3390_);
return v_res_3396_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(lean_object* v_as_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_){
_start:
{
if (lean_obj_tag(v_as_3397_) == 0)
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3406_ = lean_box(0);
v___x_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
return v___x_3407_;
}
else
{
lean_object* v_toCold_3408_; lean_object* v_options_3409_; uint8_t v_hasTrace_3410_; 
v_toCold_3408_ = lean_ctor_get(v___y_3403_, 0);
v_options_3409_ = lean_ctor_get(v_toCold_3408_, 2);
v_hasTrace_3410_ = lean_ctor_get_uint8(v_options_3409_, sizeof(void*)*1);
if (v_hasTrace_3410_ == 0)
{
lean_object* v_tail_3411_; 
v_tail_3411_ = lean_ctor_get(v_as_3397_, 1);
lean_inc(v_tail_3411_);
lean_dec_ref_known(v_as_3397_, 2);
v_as_3397_ = v_tail_3411_;
goto _start;
}
else
{
lean_object* v_head_3413_; lean_object* v_tail_3414_; lean_object* v_fst_3415_; lean_object* v_snd_3416_; lean_object* v_inheritedTraceOptions_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; uint8_t v___x_3420_; 
v_head_3413_ = lean_ctor_get(v_as_3397_, 0);
lean_inc(v_head_3413_);
v_tail_3414_ = lean_ctor_get(v_as_3397_, 1);
lean_inc(v_tail_3414_);
lean_dec_ref_known(v_as_3397_, 2);
v_fst_3415_ = lean_ctor_get(v_head_3413_, 0);
lean_inc_n(v_fst_3415_, 2);
v_snd_3416_ = lean_ctor_get(v_head_3413_, 1);
lean_inc(v_snd_3416_);
lean_dec(v_head_3413_);
v_inheritedTraceOptions_3417_ = lean_ctor_get(v_toCold_3408_, 11);
v___x_3418_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13));
v___x_3419_ = l_Lean_Name_append(v___x_3418_, v_fst_3415_);
v___x_3420_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3417_, v_options_3409_, v___x_3419_);
lean_dec(v___x_3419_);
if (v___x_3420_ == 0)
{
lean_dec(v_snd_3416_);
lean_dec(v_fst_3415_);
v_as_3397_ = v_tail_3414_;
goto _start;
}
else
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3422_, 0, v_snd_3416_);
v___x_3423_ = l_Lean_MessageData_ofFormat(v___x_3422_);
v___x_3424_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_fst_3415_, v___x_3423_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_dec_ref_known(v___x_3424_, 1);
v_as_3397_ = v_tail_3414_;
goto _start;
}
else
{
lean_dec(v_tail_3414_);
return v___x_3424_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14___boxed(lean_object* v_as_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_){
_start:
{
lean_object* v_res_3435_; 
v_res_3435_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(v_as_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3428_);
lean_dec_ref(v___y_3427_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(lean_object* v_x_3436_, lean_object* v___y_3437_){
_start:
{
if (lean_obj_tag(v_x_3436_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3439_; 
v_a_3438_ = lean_ctor_get(v_x_3436_, 0);
lean_inc(v_a_3438_);
v___x_3439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3439_, 0, v_a_3438_);
lean_ctor_set(v___x_3439_, 1, v___y_3437_);
return v___x_3439_;
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3441_; 
v_a_3440_ = lean_ctor_get(v_x_3436_, 0);
lean_inc(v_a_3440_);
v___x_3441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3441_, 0, v_a_3440_);
lean_ctor_set(v___x_3441_, 1, v___y_3437_);
return v___x_3441_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg___boxed(lean_object* v_x_3442_, lean_object* v___y_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v_x_3442_, v___y_3443_);
lean_dec_ref(v_x_3442_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(lean_object* v_env_3445_, lean_object* v_stx_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v___x_3449_; 
v___x_3449_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_3445_, v_stx_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc(v_a_3450_);
if (lean_obj_tag(v_a_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3459_; 
v_a_3451_ = lean_ctor_get(v___x_3449_, 1);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3459_ == 0)
{
lean_object* v_unused_3460_; 
v_unused_3460_ = lean_ctor_get(v___x_3449_, 0);
lean_dec(v_unused_3460_);
v___x_3453_ = v___x_3449_;
v_isShared_3454_ = v_isSharedCheck_3459_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3449_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3459_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3455_; lean_object* v___x_3457_; 
v___x_3455_ = lean_box(0);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 0, v___x_3455_);
v___x_3457_ = v___x_3453_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v___x_3455_);
lean_ctor_set(v_reuseFailAlloc_3458_, 1, v_a_3451_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
else
{
lean_object* v_val_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3489_; 
v_val_3461_ = lean_ctor_get(v_a_3450_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v_a_3450_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3463_ = v_a_3450_;
v_isShared_3464_ = v_isSharedCheck_3489_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_val_3461_);
lean_dec(v_a_3450_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3489_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v_snd_3465_; 
v_snd_3465_ = lean_ctor_get(v_val_3461_, 1);
lean_inc(v_snd_3465_);
lean_dec(v_val_3461_);
if (lean_obj_tag(v_snd_3465_) == 0)
{
lean_object* v_a_3466_; lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3475_; 
lean_del_object(v___x_3463_);
v_a_3466_ = lean_ctor_get(v___x_3449_, 1);
lean_inc(v_a_3466_);
lean_dec_ref_known(v___x_3449_, 2);
v_a_3467_ = lean_ctor_get(v_snd_3465_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v_snd_3465_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3469_ = v_snd_3465_;
v_isShared_3470_ = v_isSharedCheck_3475_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v_snd_3465_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3475_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3473_; 
v___x_3473_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v___x_3472_, v_a_3466_);
lean_dec_ref(v___x_3472_);
return v___x_3473_;
}
}
}
else
{
lean_object* v_a_3476_; lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3488_; 
v_a_3476_ = lean_ctor_get(v___x_3449_, 1);
lean_inc(v_a_3476_);
lean_dec_ref_known(v___x_3449_, 2);
v_a_3477_ = lean_ctor_get(v_snd_3465_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v_snd_3465_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3479_ = v_snd_3465_;
v_isShared_3480_ = v_isSharedCheck_3488_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v_snd_3465_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3488_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v_a_3477_);
v___x_3482_ = v___x_3463_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
lean_object* v___x_3484_; 
if (v_isShared_3480_ == 0)
{
lean_ctor_set(v___x_3479_, 0, v___x_3482_);
v___x_3484_ = v___x_3479_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v___x_3482_);
v___x_3484_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3485_; 
v___x_3485_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v___x_3484_, v_a_3476_);
lean_dec_ref(v___x_3484_);
return v___x_3485_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
v_a_3490_ = lean_ctor_get(v___x_3449_, 0);
v_a_3491_ = lean_ctor_get(v___x_3449_, 1);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v___x_3449_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_inc(v_a_3490_);
lean_dec(v___x_3449_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3490_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v_a_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed(lean_object* v_env_3499_, lean_object* v_stx_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_){
_start:
{
lean_object* v_res_3503_; 
v_res_3503_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1(v_env_3499_, v_stx_3500_, v___y_3501_, v___y_3502_);
lean_dec_ref(v___y_3501_);
return v_res_3503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object* v_x_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_){
_start:
{
lean_object* v___x_3514_; lean_object* v_toCold_3515_; lean_object* v_env_3516_; lean_object* v_currRecDepth_3517_; lean_object* v_ref_3518_; lean_object* v_maxRecDepth_3519_; lean_object* v_currNamespace_3520_; lean_object* v_openDecls_3521_; lean_object* v_quotContext_3522_; lean_object* v_currMacroScope_3523_; lean_object* v___f_3524_; lean_object* v___f_3525_; lean_object* v___x_3526_; lean_object* v___f_3527_; lean_object* v___f_3528_; lean_object* v___f_3529_; lean_object* v_methods_3530_; lean_object* v___x_3531_; lean_object* v_nextMacroScope_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3514_ = lean_st_ref_get(v___y_3512_);
v_toCold_3515_ = lean_ctor_get(v___y_3511_, 0);
v_env_3516_ = lean_ctor_get(v___x_3514_, 0);
lean_inc_ref_n(v_env_3516_, 4);
lean_dec(v___x_3514_);
v_currRecDepth_3517_ = lean_ctor_get(v___y_3511_, 1);
v_ref_3518_ = lean_ctor_get(v___y_3511_, 2);
v_maxRecDepth_3519_ = lean_ctor_get(v_toCold_3515_, 3);
v_currNamespace_3520_ = lean_ctor_get(v_toCold_3515_, 4);
v_openDecls_3521_ = lean_ctor_get(v_toCold_3515_, 5);
v_quotContext_3522_ = lean_ctor_get(v_toCold_3515_, 8);
v_currMacroScope_3523_ = lean_ctor_get(v_toCold_3515_, 9);
v___f_3524_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3524_, 0, v_env_3516_);
v___f_3525_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_3525_, 0, v_env_3516_);
v___x_3526_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3511_);
lean_inc_n(v_currNamespace_3520_, 3);
v___f_3527_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3527_, 0, v_currNamespace_3520_);
lean_inc_n(v_openDecls_3521_, 2);
v___f_3528_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__3___boxed), 7, 4);
lean_closure_set(v___f_3528_, 0, v_env_3516_);
lean_closure_set(v___f_3528_, 1, v___x_3526_);
lean_closure_set(v___f_3528_, 2, v_currNamespace_3520_);
lean_closure_set(v___f_3528_, 3, v_openDecls_3521_);
v___f_3529_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_3529_, 0, v_env_3516_);
lean_closure_set(v___f_3529_, 1, v_currNamespace_3520_);
lean_closure_set(v___f_3529_, 2, v_openDecls_3521_);
v_methods_3530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_3530_, 0, v___f_3525_);
lean_ctor_set(v_methods_3530_, 1, v___f_3527_);
lean_ctor_set(v_methods_3530_, 2, v___f_3524_);
lean_ctor_set(v_methods_3530_, 3, v___f_3529_);
lean_ctor_set(v_methods_3530_, 4, v___f_3528_);
v___x_3531_ = lean_st_ref_get(v___y_3512_);
v_nextMacroScope_3532_ = lean_ctor_get(v___x_3531_, 1);
lean_inc(v_nextMacroScope_3532_);
lean_dec(v___x_3531_);
lean_inc(v_ref_3518_);
lean_inc(v_maxRecDepth_3519_);
lean_inc(v_currRecDepth_3517_);
lean_inc(v_currMacroScope_3523_);
lean_inc(v_quotContext_3522_);
v___x_3533_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3533_, 0, v_methods_3530_);
lean_ctor_set(v___x_3533_, 1, v_quotContext_3522_);
lean_ctor_set(v___x_3533_, 2, v_currMacroScope_3523_);
lean_ctor_set(v___x_3533_, 3, v_currRecDepth_3517_);
lean_ctor_set(v___x_3533_, 4, v_maxRecDepth_3519_);
lean_ctor_set(v___x_3533_, 5, v_ref_3518_);
v___x_3534_ = lean_box(0);
v___x_3535_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3535_, 0, v_nextMacroScope_3532_);
lean_ctor_set(v___x_3535_, 1, v___x_3534_);
lean_ctor_set(v___x_3535_, 2, v___x_3534_);
v___x_3536_ = lean_apply_2(v_x_3505_, v___x_3533_, v___x_3535_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v_a_3537_; lean_object* v_a_3538_; lean_object* v_macroScope_3539_; lean_object* v_traceMsgs_3540_; lean_object* v_expandedMacroDecls_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v_a_3537_ = lean_ctor_get(v___x_3536_, 1);
lean_inc(v_a_3537_);
v_a_3538_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3536_, 2);
v_macroScope_3539_ = lean_ctor_get(v_a_3537_, 0);
lean_inc(v_macroScope_3539_);
v_traceMsgs_3540_ = lean_ctor_get(v_a_3537_, 1);
lean_inc(v_traceMsgs_3540_);
v_expandedMacroDecls_3541_ = lean_ctor_get(v_a_3537_, 2);
lean_inc(v_expandedMacroDecls_3541_);
lean_dec(v_a_3537_);
v___x_3542_ = lean_box(0);
v___x_3543_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(v_expandedMacroDecls_3541_, v___x_3542_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_);
lean_dec(v_expandedMacroDecls_3541_);
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v___x_3544_; lean_object* v_env_3545_; lean_object* v_ngen_3546_; lean_object* v_auxDeclNGen_3547_; lean_object* v_traceState_3548_; lean_object* v_cache_3549_; lean_object* v_recordedDeps_3550_; lean_object* v_messages_3551_; lean_object* v_infoState_3552_; lean_object* v_snapshotTasks_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3579_; 
lean_dec_ref_known(v___x_3543_, 1);
v___x_3544_ = lean_st_ref_take(v___y_3512_);
v_env_3545_ = lean_ctor_get(v___x_3544_, 0);
v_ngen_3546_ = lean_ctor_get(v___x_3544_, 2);
v_auxDeclNGen_3547_ = lean_ctor_get(v___x_3544_, 3);
v_traceState_3548_ = lean_ctor_get(v___x_3544_, 4);
v_cache_3549_ = lean_ctor_get(v___x_3544_, 5);
v_recordedDeps_3550_ = lean_ctor_get(v___x_3544_, 6);
v_messages_3551_ = lean_ctor_get(v___x_3544_, 7);
v_infoState_3552_ = lean_ctor_get(v___x_3544_, 8);
v_snapshotTasks_3553_ = lean_ctor_get(v___x_3544_, 9);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3579_ == 0)
{
lean_object* v_unused_3580_; 
v_unused_3580_ = lean_ctor_get(v___x_3544_, 1);
lean_dec(v_unused_3580_);
v___x_3555_ = v___x_3544_;
v_isShared_3556_ = v_isSharedCheck_3579_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_snapshotTasks_3553_);
lean_inc(v_infoState_3552_);
lean_inc(v_messages_3551_);
lean_inc(v_recordedDeps_3550_);
lean_inc(v_cache_3549_);
lean_inc(v_traceState_3548_);
lean_inc(v_auxDeclNGen_3547_);
lean_inc(v_ngen_3546_);
lean_inc(v_env_3545_);
lean_dec(v___x_3544_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3579_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 1, v_macroScope_3539_);
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_env_3545_);
lean_ctor_set(v_reuseFailAlloc_3578_, 1, v_macroScope_3539_);
lean_ctor_set(v_reuseFailAlloc_3578_, 2, v_ngen_3546_);
lean_ctor_set(v_reuseFailAlloc_3578_, 3, v_auxDeclNGen_3547_);
lean_ctor_set(v_reuseFailAlloc_3578_, 4, v_traceState_3548_);
lean_ctor_set(v_reuseFailAlloc_3578_, 5, v_cache_3549_);
lean_ctor_set(v_reuseFailAlloc_3578_, 6, v_recordedDeps_3550_);
lean_ctor_set(v_reuseFailAlloc_3578_, 7, v_messages_3551_);
lean_ctor_set(v_reuseFailAlloc_3578_, 8, v_infoState_3552_);
lean_ctor_set(v_reuseFailAlloc_3578_, 9, v_snapshotTasks_3553_);
v___x_3558_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3559_ = lean_st_ref_put(v___y_3512_, v___x_3558_);
v___x_3560_ = l_List_reverse___redArg(v_traceMsgs_3540_);
v___x_3561_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__14(v___x_3560_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3568_; 
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3568_ == 0)
{
lean_object* v_unused_3569_; 
v_unused_3569_ = lean_ctor_get(v___x_3561_, 0);
lean_dec(v_unused_3569_);
v___x_3563_ = v___x_3561_;
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
else
{
lean_dec(v___x_3561_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v_a_3538_);
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3538_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
else
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3577_; 
lean_dec(v_a_3538_);
v_a_3570_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3572_ = v___x_3561_;
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3561_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3577_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3575_; 
if (v_isShared_3573_ == 0)
{
v___x_3575_ = v___x_3572_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v_a_3570_);
v___x_3575_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
return v___x_3575_;
}
}
}
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec(v_traceMsgs_3540_);
lean_dec(v_macroScope_3539_);
lean_dec(v_a_3538_);
v_a_3581_ = lean_ctor_get(v___x_3543_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3543_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3543_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3543_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v_a_3589_; 
v_a_3589_ = lean_ctor_get(v___x_3536_, 0);
lean_inc(v_a_3589_);
lean_dec_ref_known(v___x_3536_, 2);
if (lean_obj_tag(v_a_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v_a_3591_; lean_object* v___x_3592_; uint8_t v___x_3593_; 
v_a_3590_ = lean_ctor_get(v_a_3589_, 0);
lean_inc(v_a_3590_);
v_a_3591_ = lean_ctor_get(v_a_3589_, 1);
lean_inc_ref(v_a_3591_);
lean_dec_ref_known(v_a_3589_, 2);
v___x_3592_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___closed__0));
v___x_3593_ = lean_string_dec_eq(v_a_3591_, v___x_3592_);
if (v___x_3593_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3594_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3594_, 0, v_a_3591_);
v___x_3595_ = l_Lean_MessageData_ofFormat(v___x_3594_);
v___x_3596_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_a_3590_, v___x_3595_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_);
lean_dec(v_a_3590_);
return v___x_3596_;
}
else
{
lean_object* v___x_3597_; 
lean_dec_ref(v_a_3591_);
v___x_3597_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(v_a_3590_);
return v___x_3597_;
}
}
else
{
lean_object* v___x_3598_; 
v___x_3598_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3598_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object* v_x_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
lean_object* v_res_3608_; 
v_res_3608_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_x_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(lean_object* v___x_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v_toCold_3613_; lean_object* v_quotContext_3614_; lean_object* v_currMacroScope_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; 
v_toCold_3613_ = lean_ctor_get(v___y_3610_, 0);
lean_inc_ref(v_toCold_3613_);
lean_dec_ref(v___y_3610_);
v_quotContext_3614_ = lean_ctor_get(v_toCold_3613_, 8);
lean_inc(v_quotContext_3614_);
v_currMacroScope_3615_ = lean_ctor_get(v_toCold_3613_, 9);
lean_inc(v_currMacroScope_3615_);
lean_dec_ref(v_toCold_3613_);
v___x_3616_ = l_Lean_addMacroScope(v_quotContext_3614_, v___x_3609_, v_currMacroScope_3615_);
v___x_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
return v___x_3617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0___boxed(lean_object* v___x_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___lam__0(v___x_3618_, v___y_3619_, v___y_3620_);
lean_dec(v___y_3620_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v___f_3631_; lean_object* v___x_3632_; 
v___f_3631_ = ((lean_object*)(l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___closed__2));
v___x_3632_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_3631_, v___y_3628_, v___y_3629_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg___boxed(lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v_res_3636_; 
v_res_3636_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_3633_, v___y_3634_);
lean_dec(v___y_3634_);
lean_dec_ref(v___y_3633_);
return v_res_3636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object* v_ref_3637_, uint8_t v_canonical_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_3644_, v___y_3645_);
if (lean_obj_tag(v___x_3647_) == 0)
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3656_; 
v_a_3648_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3656_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3656_ == 0)
{
v___x_3650_ = v___x_3647_;
v_isShared_3651_ = v_isSharedCheck_3656_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3647_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3656_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3652_; lean_object* v___x_3654_; 
v___x_3652_ = l_Lean_mkIdentFrom(v_ref_3637_, v_a_3648_, v_canonical_3638_);
if (v_isShared_3651_ == 0)
{
lean_ctor_set(v___x_3650_, 0, v___x_3652_);
v___x_3654_ = v___x_3650_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3652_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
}
else
{
lean_object* v_a_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3664_; 
v_a_3657_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3659_ = v___x_3647_;
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_a_3657_);
lean_dec(v___x_3647_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3662_; 
if (v_isShared_3660_ == 0)
{
v___x_3662_ = v___x_3659_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_a_3657_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object* v_ref_3665_, lean_object* v_canonical_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
uint8_t v_canonical_boxed_3675_; lean_object* v_res_3676_; 
v_canonical_boxed_3675_ = lean_unbox(v_canonical_3666_);
v_res_3676_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(v_ref_3665_, v_canonical_boxed_3675_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec_ref(v___y_3667_);
lean_dec(v_ref_3665_);
return v_res_3676_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1(void){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3678_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__0));
v___x_3679_ = l_Lean_stringToMessageData(v___x_3678_);
return v___x_3679_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4(void){
_start:
{
lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; 
v___x_3685_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__3));
v___x_3686_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16___closed__13));
v___x_3687_ = l_Lean_Name_append(v___x_3686_, v___x_3685_);
return v___x_3687_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6(void){
_start:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3689_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__5));
v___x_3690_ = l_Lean_stringToMessageData(v___x_3689_);
return v___x_3690_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8(void){
_start:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3692_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__7));
v___x_3693_ = l_Lean_stringToMessageData(v___x_3692_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object* v_config_3700_, lean_object* v_letOrReassign_3701_, lean_object* v_decl_3702_, lean_object* v_tk_3703_, lean_object* v_dec_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_config_3700_, v_letOrReassign_3701_, v_decl_3702_, v_tk_3703_, v_dec_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_, v_a_3709_, v_a_3710_, v_a_3711_);
lean_dec(v_a_3711_);
lean_dec_ref(v_a_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_a_3708_);
lean_dec(v_a_3707_);
lean_dec_ref(v_a_3706_);
lean_dec_ref(v_a_3705_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object* v_config_3714_, lean_object* v_letOrReassign_3715_, lean_object* v_decl_3716_, lean_object* v_tk_3717_, lean_object* v_dec_3718_, lean_object* v_a_3719_, lean_object* v_a_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_, lean_object* v_a_3725_){
_start:
{
lean_object* v___x_3727_; 
v___x_3727_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_config_3714_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v___x_3728_; 
lean_dec_ref_known(v___x_3727_, 1);
lean_inc(v_decl_3716_);
v___x_3728_ = l_Lean_Elab_Do_getLetDeclVars(v_decl_3716_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; lean_object* v___x_3730_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref_known(v___x_3728_, 1);
v___x_3730_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_3715_, v_a_3729_, v_a_3719_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v___x_3731_; 
lean_dec_ref_known(v___x_3730_, 1);
v___x_3731_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_3718_, v_tk_3717_, v_a_3719_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v___y_3734_; lean_object* v___y_3735_; uint8_t v___y_3736_; lean_object* v___y_3737_; uint8_t v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3741_; lean_object* v___y_3742_; lean_object* v_rhs_3743_; lean_object* v___y_3744_; lean_object* v___y_3745_; lean_object* v___y_3746_; lean_object* v___y_3747_; lean_object* v___y_3748_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3762_; lean_object* v___y_3763_; uint8_t v___y_3764_; uint8_t v___y_3765_; lean_object* v___y_3766_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3769_; lean_object* v___y_3770_; uint8_t v___y_3771_; lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v_xType_x3f_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3782_; uint8_t v___y_3831_; lean_object* v___y_3832_; uint8_t v___y_3833_; uint8_t v___y_3834_; uint8_t v___y_3835_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; lean_object* v___y_3845_; lean_object* v___y_3846_; lean_object* v___y_3847_; lean_object* v___y_3848_; uint8_t v___y_3849_; lean_object* v___y_3908_; uint8_t v___y_3909_; lean_object* v___y_3910_; uint8_t v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3913_; uint8_t v___y_3914_; uint8_t v___y_3915_; lean_object* v_id_3916_; lean_object* v___y_3917_; lean_object* v___y_3918_; lean_object* v___y_3919_; lean_object* v___y_3920_; lean_object* v___y_3921_; lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v_decl_3935_; lean_object* v___y_3936_; lean_object* v___y_3937_; lean_object* v___y_3938_; lean_object* v___y_3939_; lean_object* v___y_3940_; lean_object* v___y_3941_; lean_object* v___y_3942_; lean_object* v___x_4020_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
lean_dec_ref_known(v___x_3731_, 1);
v___x_4020_ = l_Lean_Elab_Do_isErased___redArg(v_letOrReassign_3715_, v_a_3729_, v_a_3719_);
if (lean_obj_tag(v___x_4020_) == 0)
{
lean_object* v_a_4021_; lean_object* v___x_4022_; 
v_a_4021_ = lean_ctor_get(v___x_4020_, 0);
lean_inc(v_a_4021_);
lean_dec_ref_known(v___x_4020_, 1);
v___x_4022_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_3715_, v_decl_3716_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_);
if (lean_obj_tag(v___x_4022_) == 0)
{
uint8_t v___x_4023_; 
v___x_4023_ = lean_unbox(v_a_4021_);
lean_dec(v_a_4021_);
if (v___x_4023_ == 0)
{
lean_object* v_a_4024_; 
v_a_4024_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4024_);
lean_dec_ref_known(v___x_4022_, 1);
v_decl_3935_ = v_a_4024_;
v___y_3936_ = v_a_3719_;
v___y_3937_ = v_a_3720_;
v___y_3938_ = v_a_3721_;
v___y_3939_ = v_a_3722_;
v___y_3940_ = v_a_3723_;
v___y_3941_ = v_a_3724_;
v___y_3942_ = v_a_3725_;
goto v___jp_3934_;
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4026_; 
v_a_4025_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4025_);
lean_dec_ref_known(v___x_4022_, 1);
v___x_4026_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl(v_a_4025_, v_a_3719_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v_a_4027_; 
v_a_4027_ = lean_ctor_get(v___x_4026_, 0);
lean_inc(v_a_4027_);
lean_dec_ref_known(v___x_4026_, 1);
v_decl_3935_ = v_a_4027_;
v___y_3936_ = v_a_3719_;
v___y_3937_ = v_a_3720_;
v___y_3938_ = v_a_3721_;
v___y_3939_ = v_a_3722_;
v___y_3940_ = v_a_3723_;
v___y_3941_ = v_a_3724_;
v___y_3942_ = v_a_3725_;
goto v___jp_3934_;
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_tk_3717_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4028_ = lean_ctor_get(v___x_4026_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_4026_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v___x_4026_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
}
else
{
lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4043_; 
lean_dec(v_a_4021_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_tk_3717_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4036_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4038_ = v___x_4022_;
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_4022_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4041_; 
if (v_isShared_4039_ == 0)
{
v___x_4041_ = v___x_4038_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4036_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
else
{
lean_object* v_a_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4051_; 
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_tk_3717_);
lean_dec(v_decl_3716_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4044_ = lean_ctor_get(v___x_4020_, 0);
v_isSharedCheck_4051_ = !lean_is_exclusive(v___x_4020_);
if (v_isSharedCheck_4051_ == 0)
{
v___x_4046_ = v___x_4020_;
v_isShared_4047_ = v_isSharedCheck_4051_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_a_4044_);
lean_dec(v___x_4020_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4051_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
lean_object* v___x_4049_; 
if (v_isShared_4047_ == 0)
{
v___x_4049_ = v___x_4046_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_a_4044_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
return v___x_4049_;
}
}
}
v___jp_3733_:
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___f_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3751_ = lean_box(v___y_3736_);
v___x_3752_ = lean_box(v___y_3738_);
lean_inc_ref(v___y_3739_);
lean_inc_ref(v___y_3737_);
lean_inc_ref(v___y_3734_);
v___f_3753_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed), 19, 10);
lean_closure_set(v___f_3753_, 0, v_rhs_3743_);
lean_closure_set(v___f_3753_, 1, v___x_3751_);
lean_closure_set(v___f_3753_, 2, v_config_3714_);
lean_closure_set(v___f_3753_, 3, v___y_3740_);
lean_closure_set(v___f_3753_, 4, v___x_3752_);
lean_closure_set(v___f_3753_, 5, v___y_3734_);
lean_closure_set(v___f_3753_, 6, v___y_3737_);
lean_closure_set(v___f_3753_, 7, v___y_3739_);
lean_closure_set(v___f_3753_, 8, v___y_3735_);
lean_closure_set(v___f_3753_, 9, v___y_3741_);
v___x_3754_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_3754_, 0, v_a_3732_);
v___x_3755_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabWithReassignments___boxed), 11, 3);
lean_closure_set(v___x_3755_, 0, v_letOrReassign_3715_);
lean_closure_set(v___x_3755_, 1, v_a_3729_);
lean_closure_set(v___x_3755_, 2, v___x_3754_);
v___x_3756_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1);
v___x_3757_ = l_Lean_MessageData_ofSyntax(v___y_3742_);
v___x_3758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = lean_box(0);
v___x_3760_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_3758_, v___x_3755_, v___f_3753_, v___x_3759_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_);
return v___x_3760_;
}
v___jp_3761_:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3783_ = lean_unsigned_to_nat(4u);
v___x_3784_ = l_Lean_Syntax_getArg(v___y_3773_, v___x_3783_);
lean_dec(v___y_3773_);
if (lean_obj_tag(v_xType_x3f_3775_) == 0)
{
lean_inc(v___y_3769_);
v___y_3734_ = v___y_3762_;
v___y_3735_ = v___y_3763_;
v___y_3736_ = v___y_3764_;
v___y_3737_ = v___y_3766_;
v___y_3738_ = v___y_3765_;
v___y_3739_ = v___y_3767_;
v___y_3740_ = v___y_3768_;
v___y_3741_ = v___y_3769_;
v___y_3742_ = v___y_3769_;
v_rhs_3743_ = v___x_3784_;
v___y_3744_ = v___y_3776_;
v___y_3745_ = v___y_3777_;
v___y_3746_ = v___y_3778_;
v___y_3747_ = v___y_3779_;
v___y_3748_ = v___y_3780_;
v___y_3749_ = v___y_3781_;
v___y_3750_ = v___y_3782_;
goto v___jp_3733_;
}
else
{
lean_object* v_toCold_3785_; lean_object* v_val_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3829_; 
v_toCold_3785_ = lean_ctor_get(v___y_3781_, 0);
v_val_3786_ = lean_ctor_get(v_xType_x3f_3775_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v_xType_x3f_3775_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3788_ = v_xType_x3f_3775_;
v_isShared_3789_ = v_isSharedCheck_3829_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_val_3786_);
lean_dec(v_xType_x3f_3775_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3829_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v_ref_3790_; lean_object* v_quotContext_3791_; lean_object* v_currMacroScope_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3808_; 
v_ref_3790_ = lean_ctor_get(v___y_3781_, 2);
v_quotContext_3791_ = lean_ctor_get(v_toCold_3785_, 8);
v_currMacroScope_3792_ = lean_ctor_get(v_toCold_3785_, 9);
v___x_3793_ = l_Lean_SourceInfo_fromRef(v_ref_3790_, v___y_3771_);
v___x_3794_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15));
lean_inc_ref_n(v___y_3774_, 2);
lean_inc_ref_n(v___y_3772_, 2);
lean_inc_ref_n(v___y_3770_, 3);
v___x_3795_ = l_Lean_Name_mkStr4(v___y_3770_, v___y_3772_, v___y_3774_, v___x_3794_);
v___x_3796_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17));
v___x_3797_ = l_Lean_Name_mkStr4(v___y_3770_, v___y_3772_, v___y_3774_, v___x_3796_);
v___x_3798_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19));
lean_inc(v___x_3793_);
v___x_3799_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3793_);
lean_ctor_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21));
v___x_3801_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_3802_ = lean_box(0);
lean_inc(v_currMacroScope_3792_);
lean_inc(v_quotContext_3791_);
v___x_3803_ = l_Lean_addMacroScope(v_quotContext_3791_, v___x_3802_, v_currMacroScope_3792_);
v___x_3804_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24));
v___x_3805_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25));
v___x_3806_ = l_Lean_Name_mkStr3(v___y_3770_, v___x_3804_, v___x_3805_);
if (v_isShared_3789_ == 0)
{
lean_ctor_set_tag(v___x_3788_, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3806_);
v___x_3808_ = v___x_3788_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3806_);
v___x_3808_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; 
v___x_3809_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28));
lean_inc_ref_n(v___y_3770_, 2);
v___x_3810_ = l_Lean_Name_mkStr2(v___y_3770_, v___x_3809_);
v___x_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
lean_inc_ref(v___y_3774_);
lean_inc_ref(v___y_3772_);
v___x_3812_ = l_Lean_Name_mkStr3(v___y_3770_, v___y_3772_, v___y_3774_);
v___x_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3812_);
v___x_3814_ = lean_box(0);
v___x_3815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3813_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
v___x_3816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3811_);
lean_ctor_set(v___x_3816_, 1, v___x_3815_);
v___x_3817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3808_);
lean_ctor_set(v___x_3817_, 1, v___x_3816_);
lean_inc_n(v___x_3793_, 6);
v___x_3818_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3793_);
lean_ctor_set(v___x_3818_, 1, v___x_3801_);
lean_ctor_set(v___x_3818_, 2, v___x_3803_);
lean_ctor_set(v___x_3818_, 3, v___x_3817_);
v___x_3819_ = l_Lean_Syntax_node1(v___x_3793_, v___x_3800_, v___x_3818_);
v___x_3820_ = l_Lean_Syntax_node2(v___x_3793_, v___x_3797_, v___x_3799_, v___x_3819_);
v___x_3821_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_3822_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3793_);
lean_ctor_set(v___x_3822_, 1, v___x_3821_);
v___x_3823_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_3824_ = l_Lean_Syntax_node1(v___x_3793_, v___x_3823_, v_val_3786_);
v___x_3825_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37));
v___x_3826_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3793_);
lean_ctor_set(v___x_3826_, 1, v___x_3825_);
v___x_3827_ = l_Lean_Syntax_node5(v___x_3793_, v___x_3795_, v___x_3820_, v___x_3784_, v___x_3822_, v___x_3824_, v___x_3826_);
lean_inc(v___y_3769_);
v___y_3734_ = v___y_3762_;
v___y_3735_ = v___y_3763_;
v___y_3736_ = v___y_3764_;
v___y_3737_ = v___y_3766_;
v___y_3738_ = v___y_3765_;
v___y_3739_ = v___y_3767_;
v___y_3740_ = v___y_3768_;
v___y_3741_ = v___y_3769_;
v___y_3742_ = v___y_3769_;
v_rhs_3743_ = v___x_3827_;
v___y_3744_ = v___y_3776_;
v___y_3745_ = v___y_3777_;
v___y_3746_ = v___y_3778_;
v___y_3747_ = v___y_3779_;
v___y_3748_ = v___y_3780_;
v___y_3749_ = v___y_3781_;
v___y_3750_ = v___y_3782_;
goto v___jp_3733_;
}
}
}
}
v___jp_3830_:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___f_3853_; lean_object* v___x_3854_; 
v___x_3850_ = lean_box(v___y_3835_);
v___x_3851_ = lean_box(v___y_3834_);
v___x_3852_ = lean_box(v___y_3849_);
v___f_3853_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3853_, 0, v___y_3837_);
lean_closure_set(v___f_3853_, 1, v___y_3836_);
lean_closure_set(v___f_3853_, 2, v___x_3850_);
lean_closure_set(v___f_3853_, 3, v___x_3851_);
lean_closure_set(v___f_3853_, 4, v___y_3839_);
lean_closure_set(v___f_3853_, 5, v___x_3852_);
v___x_3854_ = l_Lean_Elab_Term_elabBindersEx___redArg(v___y_3845_, v___f_3853_, v___y_3848_, v___y_3846_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3841_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; lean_object* v_toCold_3856_; lean_object* v_options_3857_; lean_object* v_fst_3858_; lean_object* v_snd_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3898_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_a_3855_);
lean_dec_ref_known(v___x_3854_, 1);
v_toCold_3856_ = lean_ctor_get(v___y_3844_, 0);
v_options_3857_ = lean_ctor_get(v_toCold_3856_, 2);
v_fst_3858_ = lean_ctor_get(v_a_3855_, 0);
v_snd_3859_ = lean_ctor_get(v_a_3855_, 1);
v_isSharedCheck_3898_ = !lean_is_exclusive(v_a_3855_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3861_ = v_a_3855_;
v_isShared_3862_ = v_isSharedCheck_3898_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_snd_3859_);
lean_inc(v_fst_3858_);
lean_dec(v_a_3855_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3898_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v_inheritedTraceOptions_3863_; uint8_t v_hasTrace_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___f_3869_; lean_object* v___x_3870_; uint8_t v___x_3871_; 
v_inheritedTraceOptions_3863_ = lean_ctor_get(v_toCold_3856_, 11);
v_hasTrace_3864_ = lean_ctor_get_uint8(v_options_3857_, sizeof(void*)*1);
v___x_3865_ = lean_box(v___y_3831_);
v___x_3866_ = lean_box(v___y_3833_);
v___x_3867_ = lean_box(v___y_3849_);
v___x_3868_ = lean_box(v___y_3835_);
lean_inc(v_snd_3859_);
v___f_3869_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed), 19, 10);
lean_closure_set(v___f_3869_, 0, v___y_3838_);
lean_closure_set(v___f_3869_, 1, v___y_3832_);
lean_closure_set(v___f_3869_, 2, v_a_3732_);
lean_closure_set(v___f_3869_, 3, v_letOrReassign_3715_);
lean_closure_set(v___f_3869_, 4, v_a_3729_);
lean_closure_set(v___f_3869_, 5, v___x_3865_);
lean_closure_set(v___f_3869_, 6, v___x_3866_);
lean_closure_set(v___f_3869_, 7, v_snd_3859_);
lean_closure_set(v___f_3869_, 8, v___x_3867_);
lean_closure_set(v___f_3869_, 9, v___x_3868_);
v___x_3870_ = l_Lean_Syntax_getId(v___y_3847_);
lean_dec(v___y_3847_);
v___x_3871_ = l_Lean_LocalDeclKind_ofBinderName(v___x_3870_);
if (v_hasTrace_3864_ == 0)
{
lean_object* v___x_3872_; 
lean_del_object(v___x_3861_);
v___x_3872_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3870_, v_fst_3858_, v_snd_3859_, v___f_3869_, v___y_3849_, v___x_3871_, v___y_3840_, v___y_3848_, v___y_3846_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3841_);
return v___x_3872_;
}
else
{
lean_object* v___x_3873_; lean_object* v___x_3874_; uint8_t v___x_3875_; 
v___x_3873_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__3));
v___x_3874_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__4, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4);
v___x_3875_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3863_, v_options_3857_, v___x_3874_);
if (v___x_3875_ == 0)
{
lean_object* v___x_3876_; 
lean_del_object(v___x_3861_);
v___x_3876_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3870_, v_fst_3858_, v_snd_3859_, v___f_3869_, v___y_3849_, v___x_3871_, v___y_3840_, v___y_3848_, v___y_3846_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3841_);
return v___x_3876_;
}
else
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3880_; 
lean_inc(v___x_3870_);
v___x_3877_ = l_Lean_MessageData_ofName(v___x_3870_);
v___x_3878_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6);
if (v_isShared_3862_ == 0)
{
lean_ctor_set_tag(v___x_3861_, 7);
lean_ctor_set(v___x_3861_, 1, v___x_3878_);
lean_ctor_set(v___x_3861_, 0, v___x_3877_);
v___x_3880_ = v___x_3861_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v___x_3877_);
lean_ctor_set(v_reuseFailAlloc_3897_, 1, v___x_3878_);
v___x_3880_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
lean_inc(v_fst_3858_);
v___x_3881_ = l_Lean_MessageData_ofExpr(v_fst_3858_);
v___x_3882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3880_);
lean_ctor_set(v___x_3882_, 1, v___x_3881_);
v___x_3883_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__8, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8);
v___x_3884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3882_);
lean_ctor_set(v___x_3884_, 1, v___x_3883_);
lean_inc(v_snd_3859_);
v___x_3885_ = l_Lean_MessageData_ofExpr(v_snd_3859_);
v___x_3886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3884_);
lean_ctor_set(v___x_3886_, 1, v___x_3885_);
v___x_3887_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v___x_3873_, v___x_3886_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3841_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v___x_3888_; 
lean_dec_ref_known(v___x_3887_, 1);
v___x_3888_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___redArg(v___x_3870_, v_fst_3858_, v_snd_3859_, v___f_3869_, v___y_3849_, v___x_3871_, v___y_3840_, v___y_3848_, v___y_3846_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3841_);
return v___x_3888_;
}
else
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3896_; 
lean_dec(v___x_3870_);
lean_dec_ref(v___f_3869_);
lean_dec(v_snd_3859_);
lean_dec(v_fst_3858_);
v_a_3889_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3891_ = v___x_3887_;
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3887_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3892_ == 0)
{
v___x_3894_ = v___x_3891_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
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
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
lean_dec(v___y_3847_);
lean_dec(v___y_3838_);
lean_dec(v___y_3832_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_letOrReassign_3715_);
v_a_3899_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3854_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3854_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
v___jp_3907_:
{
uint8_t v_nondep_3924_; 
v_nondep_3924_ = lean_ctor_get_uint8(v_config_3714_, sizeof(void*)*1);
if (v_nondep_3924_ == 0)
{
if (lean_obj_tag(v_letOrReassign_3715_) == 1)
{
uint8_t v_usedOnly_3925_; uint8_t v_zeta_3926_; lean_object* v_eq_x3f_3927_; 
v_usedOnly_3925_ = lean_ctor_get_uint8(v_config_3714_, sizeof(void*)*1 + 1);
v_zeta_3926_ = lean_ctor_get_uint8(v_config_3714_, sizeof(void*)*1 + 2);
v_eq_x3f_3927_ = lean_ctor_get(v_config_3714_, 0);
lean_inc(v_eq_x3f_3927_);
lean_dec_ref(v_config_3714_);
lean_inc(v_id_3916_);
v___y_3831_ = v_zeta_3926_;
v___y_3832_ = v_eq_x3f_3927_;
v___y_3833_ = v_usedOnly_3925_;
v___y_3834_ = v___y_3909_;
v___y_3835_ = v___y_3911_;
v___y_3836_ = v___y_3910_;
v___y_3837_ = v___y_3912_;
v___y_3838_ = v_id_3916_;
v___y_3839_ = v___y_3913_;
v___y_3840_ = v___y_3917_;
v___y_3841_ = v___y_3923_;
v___y_3842_ = v___y_3920_;
v___y_3843_ = v___y_3921_;
v___y_3844_ = v___y_3922_;
v___y_3845_ = v___y_3908_;
v___y_3846_ = v___y_3919_;
v___y_3847_ = v_id_3916_;
v___y_3848_ = v___y_3918_;
v___y_3849_ = v___y_3915_;
goto v___jp_3830_;
}
else
{
uint8_t v_usedOnly_3928_; uint8_t v_zeta_3929_; lean_object* v_eq_x3f_3930_; 
v_usedOnly_3928_ = lean_ctor_get_uint8(v_config_3714_, sizeof(void*)*1 + 1);
v_zeta_3929_ = lean_ctor_get_uint8(v_config_3714_, sizeof(void*)*1 + 2);
v_eq_x3f_3930_ = lean_ctor_get(v_config_3714_, 0);
lean_inc(v_eq_x3f_3930_);
lean_dec_ref(v_config_3714_);
lean_inc(v_id_3916_);
v___y_3831_ = v_zeta_3929_;
v___y_3832_ = v_eq_x3f_3930_;
v___y_3833_ = v_usedOnly_3928_;
v___y_3834_ = v___y_3909_;
v___y_3835_ = v___y_3911_;
v___y_3836_ = v___y_3910_;
v___y_3837_ = v___y_3912_;
v___y_3838_ = v_id_3916_;
v___y_3839_ = v___y_3913_;
v___y_3840_ = v___y_3917_;
v___y_3841_ = v___y_3923_;
v___y_3842_ = v___y_3920_;
v___y_3843_ = v___y_3921_;
v___y_3844_ = v___y_3922_;
v___y_3845_ = v___y_3908_;
v___y_3846_ = v___y_3919_;
v___y_3847_ = v_id_3916_;
v___y_3848_ = v___y_3918_;
v___y_3849_ = v___y_3914_;
goto v___jp_3830_;
}
}
else
{
uint8_t v_usedOnly_3931_; uint8_t v_zeta_3932_; lean_object* v_eq_x3f_3933_; 
v_usedOnly_3931_ = lean_ctor_get_uint8(v_config_3714_, sizeof(void*)*1 + 1);
v_zeta_3932_ = lean_ctor_get_uint8(v_config_3714_, sizeof(void*)*1 + 2);
v_eq_x3f_3933_ = lean_ctor_get(v_config_3714_, 0);
lean_inc(v_eq_x3f_3933_);
lean_dec_ref(v_config_3714_);
lean_inc(v_id_3916_);
v___y_3831_ = v_zeta_3932_;
v___y_3832_ = v_eq_x3f_3933_;
v___y_3833_ = v_usedOnly_3931_;
v___y_3834_ = v___y_3909_;
v___y_3835_ = v___y_3911_;
v___y_3836_ = v___y_3910_;
v___y_3837_ = v___y_3912_;
v___y_3838_ = v_id_3916_;
v___y_3839_ = v___y_3913_;
v___y_3840_ = v___y_3917_;
v___y_3841_ = v___y_3923_;
v___y_3842_ = v___y_3920_;
v___y_3843_ = v___y_3921_;
v___y_3844_ = v___y_3922_;
v___y_3845_ = v___y_3908_;
v___y_3846_ = v___y_3919_;
v___y_3847_ = v_id_3916_;
v___y_3848_ = v___y_3918_;
v___y_3849_ = v___y_3915_;
goto v___jp_3830_;
}
}
v___jp_3934_:
{
lean_object* v_doBlockResultType_3943_; lean_object* v___x_3944_; 
v_doBlockResultType_3943_ = lean_ctor_get(v___y_3936_, 3);
lean_inc_ref(v_doBlockResultType_3943_);
v___x_3944_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_3943_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
if (lean_obj_tag(v___x_3944_) == 0)
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_4019_; 
v_a_3945_ = lean_ctor_get(v___x_3944_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_3944_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_3947_ = v___x_3944_;
v_isShared_3948_ = v_isSharedCheck_4019_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3944_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_4019_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; uint8_t v___x_3953_; 
v___x_3949_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_3950_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_3951_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_3952_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_3935_);
v___x_3953_ = l_Lean_Syntax_isOfKind(v_decl_3935_, v___x_3952_);
if (v___x_3953_ == 0)
{
lean_object* v___x_3954_; 
lean_del_object(v___x_3947_);
lean_dec(v_a_3945_);
lean_dec(v_decl_3935_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_tk_3717_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v___x_3954_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3954_;
}
else
{
lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; uint8_t v___x_3958_; 
v___x_3955_ = lean_unsigned_to_nat(0u);
v___x_3956_ = l_Lean_Syntax_getArg(v_decl_3935_, v___x_3955_);
lean_dec(v_decl_3935_);
v___x_3957_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___closed__10));
lean_inc(v___x_3956_);
v___x_3958_ = l_Lean_Syntax_isOfKind(v___x_3956_, v___x_3957_);
if (v___x_3958_ == 0)
{
lean_object* v___x_3959_; uint8_t v___x_3960_; 
lean_dec(v_tk_3717_);
v___x_3959_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_3956_);
v___x_3960_ = l_Lean_Syntax_isOfKind(v___x_3956_, v___x_3959_);
if (v___x_3960_ == 0)
{
lean_object* v___x_3961_; uint8_t v___x_3962_; 
lean_del_object(v___x_3947_);
lean_dec(v_a_3945_);
v___x_3961_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___x_3956_);
v___x_3962_ = l_Lean_Syntax_isOfKind(v___x_3956_, v___x_3961_);
if (v___x_3962_ == 0)
{
lean_object* v___x_3963_; 
lean_dec(v___x_3956_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v___x_3963_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3963_;
}
else
{
lean_object* v___x_3964_; lean_object* v_id_3965_; lean_object* v_binders_3966_; lean_object* v_type_3967_; lean_object* v_value_3968_; uint8_t v___x_3969_; 
v___x_3964_ = l_Lean_Elab_Term_mkLetIdDeclView(v___x_3956_);
lean_dec(v___x_3956_);
v_id_3965_ = lean_ctor_get(v___x_3964_, 0);
lean_inc(v_id_3965_);
v_binders_3966_ = lean_ctor_get(v___x_3964_, 1);
lean_inc_ref(v_binders_3966_);
v_type_3967_ = lean_ctor_get(v___x_3964_, 2);
lean_inc(v_type_3967_);
v_value_3968_ = lean_ctor_get(v___x_3964_, 3);
lean_inc(v_value_3968_);
lean_dec_ref(v___x_3964_);
v___x_3969_ = l_Lean_Syntax_isIdent(v_id_3965_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3970_; 
v___x_3970_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(v_id_3965_, v___x_3953_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
lean_dec(v_id_3965_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
lean_inc(v_a_3971_);
lean_dec_ref_known(v___x_3970_, 1);
v___y_3908_ = v_binders_3966_;
v___y_3909_ = v___x_3960_;
v___y_3910_ = v_value_3968_;
v___y_3911_ = v___x_3953_;
v___y_3912_ = v_type_3967_;
v___y_3913_ = v___x_3955_;
v___y_3914_ = v___x_3960_;
v___y_3915_ = v___x_3953_;
v_id_3916_ = v_a_3971_;
v___y_3917_ = v___y_3936_;
v___y_3918_ = v___y_3937_;
v___y_3919_ = v___y_3938_;
v___y_3920_ = v___y_3939_;
v___y_3921_ = v___y_3940_;
v___y_3922_ = v___y_3941_;
v___y_3923_ = v___y_3942_;
goto v___jp_3907_;
}
else
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3979_; 
lean_dec(v_value_3968_);
lean_dec(v_type_3967_);
lean_dec_ref(v_binders_3966_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_3972_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3974_ = v___x_3970_;
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v___x_3970_);
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
v___y_3908_ = v_binders_3966_;
v___y_3909_ = v___x_3960_;
v___y_3910_ = v_value_3968_;
v___y_3911_ = v___x_3953_;
v___y_3912_ = v_type_3967_;
v___y_3913_ = v___x_3955_;
v___y_3914_ = v___x_3960_;
v___y_3915_ = v___x_3953_;
v_id_3916_ = v_id_3965_;
v___y_3917_ = v___y_3936_;
v___y_3918_ = v___y_3937_;
v___y_3919_ = v___y_3938_;
v___y_3920_ = v___y_3939_;
v___y_3921_ = v___y_3940_;
v___y_3922_ = v___y_3941_;
v___y_3923_ = v___y_3942_;
goto v___jp_3907_;
}
}
}
else
{
lean_object* v___x_3980_; lean_object* v___x_3981_; uint8_t v___x_3982_; 
v___x_3980_ = lean_unsigned_to_nat(1u);
v___x_3981_ = l_Lean_Syntax_getArg(v___x_3956_, v___x_3980_);
v___x_3982_ = l_Lean_Syntax_matchesNull(v___x_3981_, v___x_3955_);
if (v___x_3982_ == 0)
{
lean_object* v___x_3983_; 
lean_dec(v___x_3956_);
lean_del_object(v___x_3947_);
lean_dec(v_a_3945_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v___x_3983_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3983_;
}
else
{
lean_object* v___x_3984_; lean_object* v___f_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; uint8_t v___x_3989_; 
v___x_3984_ = lean_box(v___x_3958_);
v___f_3985_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed), 10, 1);
lean_closure_set(v___f_3985_, 0, v___x_3984_);
v___x_3986_ = l_Lean_Syntax_getArg(v___x_3956_, v___x_3955_);
v___x_3987_ = lean_unsigned_to_nat(2u);
v___x_3988_ = l_Lean_Syntax_getArg(v___x_3956_, v___x_3987_);
v___x_3989_ = l_Lean_Syntax_isNone(v___x_3988_);
if (v___x_3989_ == 0)
{
uint8_t v___x_3990_; 
lean_inc(v___x_3988_);
v___x_3990_ = l_Lean_Syntax_matchesNull(v___x_3988_, v___x_3980_);
if (v___x_3990_ == 0)
{
lean_object* v___x_3991_; 
lean_dec(v___x_3988_);
lean_dec(v___x_3986_);
lean_dec_ref(v___f_3985_);
lean_dec(v___x_3956_);
lean_del_object(v___x_3947_);
lean_dec(v_a_3945_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v___x_3991_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3991_;
}
else
{
lean_object* v___x_3992_; lean_object* v___x_3993_; uint8_t v___x_3994_; 
v___x_3992_ = l_Lean_Syntax_getArg(v___x_3988_, v___x_3955_);
lean_dec(v___x_3988_);
v___x_3993_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_3992_);
v___x_3994_ = l_Lean_Syntax_isOfKind(v___x_3992_, v___x_3993_);
if (v___x_3994_ == 0)
{
lean_object* v___x_3995_; 
lean_dec(v___x_3992_);
lean_dec(v___x_3986_);
lean_dec_ref(v___f_3985_);
lean_dec(v___x_3956_);
lean_del_object(v___x_3947_);
lean_dec(v_a_3945_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v___x_3995_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_3995_;
}
else
{
lean_object* v___x_3996_; lean_object* v___x_3998_; 
v___x_3996_ = l_Lean_Syntax_getArg(v___x_3992_, v___x_3980_);
lean_dec(v___x_3992_);
if (v_isShared_3948_ == 0)
{
lean_ctor_set_tag(v___x_3947_, 1);
lean_ctor_set(v___x_3947_, 0, v___x_3996_);
v___x_3998_ = v___x_3947_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v___x_3996_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
v___y_3762_ = v___x_3949_;
v___y_3763_ = v___f_3985_;
v___y_3764_ = v___x_3958_;
v___y_3765_ = v___x_3953_;
v___y_3766_ = v___x_3950_;
v___y_3767_ = v___x_3951_;
v___y_3768_ = v_a_3945_;
v___y_3769_ = v___x_3986_;
v___y_3770_ = v___x_3949_;
v___y_3771_ = v___x_3958_;
v___y_3772_ = v___x_3950_;
v___y_3773_ = v___x_3956_;
v___y_3774_ = v___x_3951_;
v_xType_x3f_3775_ = v___x_3998_;
v___y_3776_ = v___y_3936_;
v___y_3777_ = v___y_3937_;
v___y_3778_ = v___y_3938_;
v___y_3779_ = v___y_3939_;
v___y_3780_ = v___y_3940_;
v___y_3781_ = v___y_3941_;
v___y_3782_ = v___y_3942_;
goto v___jp_3761_;
}
}
}
}
else
{
lean_object* v___x_4000_; 
lean_dec(v___x_3988_);
lean_del_object(v___x_3947_);
v___x_4000_ = lean_box(0);
v___y_3762_ = v___x_3949_;
v___y_3763_ = v___f_3985_;
v___y_3764_ = v___x_3958_;
v___y_3765_ = v___x_3953_;
v___y_3766_ = v___x_3950_;
v___y_3767_ = v___x_3951_;
v___y_3768_ = v_a_3945_;
v___y_3769_ = v___x_3986_;
v___y_3770_ = v___x_3949_;
v___y_3771_ = v___x_3958_;
v___y_3772_ = v___x_3950_;
v___y_3773_ = v___x_3956_;
v___y_3774_ = v___x_3951_;
v_xType_x3f_3775_ = v___x_4000_;
v___y_3776_ = v___y_3936_;
v___y_3777_ = v___y_3937_;
v___y_3778_ = v___y_3938_;
v___y_3779_ = v___y_3939_;
v___y_3780_ = v___y_3940_;
v___y_3781_ = v___y_3941_;
v___y_3782_ = v___y_3942_;
goto v___jp_3761_;
}
}
}
}
else
{
lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
lean_del_object(v___x_3947_);
lean_dec(v_a_3945_);
lean_dec(v_a_3729_);
v___x_4001_ = lean_box(v___x_3953_);
lean_inc(v___x_3956_);
v___x_4002_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLetEqnsDecl___boxed), 4, 2);
lean_closure_set(v___x_4002_, 0, v___x_3956_);
lean_closure_set(v___x_4002_, 1, v___x_4001_);
v___x_4003_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v___x_4002_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
if (lean_obj_tag(v___x_4003_) == 0)
{
lean_object* v_a_4004_; lean_object* v_ref_4005_; uint8_t v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v_a_4004_ = lean_ctor_get(v___x_4003_, 0);
lean_inc(v_a_4004_);
lean_dec_ref_known(v___x_4003_, 1);
v_ref_4005_ = lean_ctor_get(v___y_3941_, 2);
v___x_4006_ = 0;
v___x_4007_ = l_Lean_SourceInfo_fromRef(v_ref_4005_, v___x_4006_);
v___x_4008_ = l_Lean_Syntax_node1(v___x_4007_, v___x_3952_, v_a_4004_);
lean_inc(v___x_4008_);
v___x_4009_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___boxed), 13, 5);
lean_closure_set(v___x_4009_, 0, v_config_3714_);
lean_closure_set(v___x_4009_, 1, v_letOrReassign_3715_);
lean_closure_set(v___x_4009_, 2, v___x_4008_);
lean_closure_set(v___x_4009_, 3, v_tk_3717_);
lean_closure_set(v___x_4009_, 4, v_a_3732_);
v___x_4010_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v___x_3956_, v___x_4008_, v___x_4009_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
return v___x_4010_;
}
else
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4018_; 
lean_dec(v___x_3956_);
lean_dec(v_a_3732_);
lean_dec(v_tk_3717_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4011_ = lean_ctor_get(v___x_4003_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___x_4003_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4013_ = v___x_4003_;
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v___x_4003_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
}
}
}
}
else
{
lean_dec(v_decl_3935_);
lean_dec(v_a_3732_);
lean_dec(v_a_3729_);
lean_dec(v_tk_3717_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
return v___x_3944_;
}
}
}
else
{
lean_object* v_a_4052_; lean_object* v___x_4054_; uint8_t v_isShared_4055_; uint8_t v_isSharedCheck_4059_; 
lean_dec(v_a_3729_);
lean_dec(v_tk_3717_);
lean_dec(v_decl_3716_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4052_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_4059_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_4059_ == 0)
{
v___x_4054_ = v___x_3731_;
v_isShared_4055_ = v_isSharedCheck_4059_;
goto v_resetjp_4053_;
}
else
{
lean_inc(v_a_4052_);
lean_dec(v___x_3731_);
v___x_4054_ = lean_box(0);
v_isShared_4055_ = v_isSharedCheck_4059_;
goto v_resetjp_4053_;
}
v_resetjp_4053_:
{
lean_object* v___x_4057_; 
if (v_isShared_4055_ == 0)
{
v___x_4057_ = v___x_4054_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4058_; 
v_reuseFailAlloc_4058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4058_, 0, v_a_4052_);
v___x_4057_ = v_reuseFailAlloc_4058_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
return v___x_4057_;
}
}
}
}
else
{
lean_object* v_a_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4067_; 
lean_dec(v_a_3729_);
lean_dec_ref(v_dec_3718_);
lean_dec(v_tk_3717_);
lean_dec(v_decl_3716_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4060_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4062_ = v___x_3730_;
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_a_4060_);
lean_dec(v___x_3730_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4065_; 
if (v_isShared_4063_ == 0)
{
v___x_4065_ = v___x_4062_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_a_4060_);
v___x_4065_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
return v___x_4065_;
}
}
}
}
else
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4075_; 
lean_dec_ref(v_dec_3718_);
lean_dec(v_tk_3717_);
lean_dec(v_decl_3716_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4068_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4070_ = v___x_3728_;
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v___x_3728_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4073_; 
if (v_isShared_4071_ == 0)
{
v___x_4073_ = v___x_4070_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_a_4068_);
v___x_4073_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
return v___x_4073_;
}
}
}
}
else
{
lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4083_; 
lean_dec_ref(v_dec_3718_);
lean_dec(v_tk_3717_);
lean_dec(v_decl_3716_);
lean_dec(v_letOrReassign_3715_);
lean_dec_ref(v_config_3714_);
v_a_4076_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_4078_ = v___x_3727_;
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_3727_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v___x_4081_; 
if (v_isShared_4079_ == 0)
{
v___x_4081_ = v___x_4078_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v_a_4076_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object* v_00_u03b2_4084_, lean_object* v_x_4085_, lean_object* v_x_4086_, lean_object* v_x_4087_){
_start:
{
lean_object* v___x_4088_; 
v___x_4088_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_x_4085_, v_x_4086_, v_x_4087_);
return v___x_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object* v_cls_4089_, lean_object* v_msg_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_){
_start:
{
lean_object* v___x_4099_; 
v___x_4099_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_cls_4089_, v_msg_4090_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_);
return v___x_4099_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object* v_cls_4100_, lean_object* v_msg_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(v_cls_4100_, v_msg_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec(v___y_4106_);
lean_dec_ref(v___y_4105_);
lean_dec(v___y_4104_);
lean_dec_ref(v___y_4103_);
lean_dec_ref(v___y_4102_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_){
_start:
{
lean_object* v___x_4119_; 
v___x_4119_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___redArg(v___y_4116_, v___y_4117_);
return v___x_4119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7___boxed(lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_){
_start:
{
lean_object* v_res_4128_; 
v_res_4128_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6_spec__7(v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
lean_dec(v___y_4126_);
lean_dec_ref(v___y_4125_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec_ref(v___y_4120_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object* v_00_u03b1_4129_, lean_object* v_beforeStx_4130_, lean_object* v_afterStx_4131_, lean_object* v_x_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_){
_start:
{
lean_object* v___x_4141_; 
v___x_4141_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___redArg(v_beforeStx_4130_, v_afterStx_4131_, v_x_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object* v_00_u03b1_4142_, lean_object* v_beforeStx_4143_, lean_object* v_afterStx_4144_, lean_object* v_x_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(v_00_u03b1_4142_, v_beforeStx_4143_, v_afterStx_4144_, v_x_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_);
lean_dec(v___y_4152_);
lean_dec_ref(v___y_4151_);
lean_dec(v___y_4150_);
lean_dec_ref(v___y_4149_);
lean_dec(v___y_4148_);
lean_dec_ref(v___y_4147_);
lean_dec_ref(v___y_4146_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11(lean_object* v_00_u03b1_4155_, lean_object* v_x_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v___x_4159_; 
v___x_4159_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___redArg(v_x_4156_, v___y_4158_);
return v___x_4159_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11___boxed(lean_object* v_00_u03b1_4160_, lean_object* v_x_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__11(v_00_u03b1_4160_, v_x_4161_, v___y_4162_, v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec_ref(v_x_4161_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(lean_object* v_00_u03b1_4165_, lean_object* v_ref_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
lean_object* v___x_4175_; 
v___x_4175_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___redArg(v_ref_4166_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15___boxed(lean_object* v_00_u03b1_4176_, lean_object* v_ref_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_){
_start:
{
lean_object* v_res_4186_; 
v_res_4186_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__15(v_00_u03b1_4176_, v_ref_4177_, v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_);
lean_dec(v___y_4184_);
lean_dec_ref(v___y_4183_);
lean_dec(v___y_4182_);
lean_dec_ref(v___y_4181_);
lean_dec(v___y_4180_);
lean_dec_ref(v___y_4179_);
lean_dec_ref(v___y_4178_);
return v_res_4186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object* v_00_u03b1_4187_, lean_object* v_x_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v___x_4197_; 
v___x_4197_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_x_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_);
return v___x_4197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object* v_00_u03b1_4198_, lean_object* v_x_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_){
_start:
{
lean_object* v_res_4208_; 
v_res_4208_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(v_00_u03b1_4198_, v_x_4199_, v___y_4200_, v___y_4201_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_);
lean_dec(v___y_4206_);
lean_dec_ref(v___y_4205_);
lean_dec(v___y_4204_);
lean_dec_ref(v___y_4203_);
lean_dec(v___y_4202_);
lean_dec_ref(v___y_4201_);
lean_dec_ref(v___y_4200_);
return v_res_4208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object* v_00_u03b2_4209_, lean_object* v_x_4210_, size_t v_x_4211_, size_t v_x_4212_, lean_object* v_x_4213_, lean_object* v_x_4214_){
_start:
{
lean_object* v___x_4215_; 
v___x_4215_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_4210_, v_x_4211_, v_x_4212_, v_x_4213_, v_x_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4216_, lean_object* v_x_4217_, lean_object* v_x_4218_, lean_object* v_x_4219_, lean_object* v_x_4220_, lean_object* v_x_4221_){
_start:
{
size_t v_x_94277__boxed_4222_; size_t v_x_94278__boxed_4223_; lean_object* v_res_4224_; 
v_x_94277__boxed_4222_ = lean_unbox_usize(v_x_4218_);
lean_dec(v_x_4218_);
v_x_94278__boxed_4223_ = lean_unbox_usize(v_x_4219_);
lean_dec(v_x_4219_);
v_res_4224_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(v_00_u03b2_4216_, v_x_4217_, v_x_94277__boxed_4222_, v_x_94278__boxed_4223_, v_x_4220_, v_x_4221_);
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(lean_object* v_00_u03b1_4225_, lean_object* v_stx_4226_, lean_object* v_output_4227_, lean_object* v_x_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v___x_4236_; 
v___x_4236_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___redArg(v_stx_4226_, v_output_4227_, v_x_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4237_, lean_object* v_stx_4238_, lean_object* v_output_4239_, lean_object* v_x_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9(v_00_u03b1_4237_, v_stx_4238_, v_output_4239_, v_x_4240_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
lean_dec(v___y_4246_);
lean_dec_ref(v___y_4245_);
lean_dec(v___y_4244_);
lean_dec_ref(v___y_4243_);
lean_dec(v___y_4242_);
lean_dec_ref(v___y_4241_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(lean_object* v_as_4249_, lean_object* v_as_x27_4250_, lean_object* v_b_4251_, lean_object* v_a_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_){
_start:
{
lean_object* v___x_4261_; 
v___x_4261_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___redArg(v_as_x27_4250_, v_b_4251_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_, v___y_4258_, v___y_4259_);
return v___x_4261_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13___boxed(lean_object* v_as_4262_, lean_object* v_as_x27_4263_, lean_object* v_b_4264_, lean_object* v_a_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_){
_start:
{
lean_object* v_res_4274_; 
v_res_4274_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__13(v_as_4262_, v_as_x27_4263_, v_b_4264_, v_a_4265_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
lean_dec(v___y_4272_);
lean_dec_ref(v___y_4271_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec(v_as_x27_4263_);
lean_dec(v_as_4262_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_4275_, lean_object* v_n_4276_, lean_object* v_k_4277_, lean_object* v_v_4278_){
_start:
{
lean_object* v___x_4279_; 
v___x_4279_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3___redArg(v_n_4276_, v_k_4277_, v_v_4278_);
return v___x_4279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_4280_, size_t v_depth_4281_, lean_object* v_keys_4282_, lean_object* v_vals_4283_, lean_object* v_heq_4284_, lean_object* v_i_4285_, lean_object* v_entries_4286_){
_start:
{
lean_object* v___x_4287_; 
v___x_4287_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_depth_4281_, v_keys_4282_, v_vals_4283_, v_i_4285_, v_entries_4286_);
return v___x_4287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_4288_, lean_object* v_depth_4289_, lean_object* v_keys_4290_, lean_object* v_vals_4291_, lean_object* v_heq_4292_, lean_object* v_i_4293_, lean_object* v_entries_4294_){
_start:
{
size_t v_depth_boxed_4295_; lean_object* v_res_4296_; 
v_depth_boxed_4295_ = lean_unbox_usize(v_depth_4289_);
lean_dec(v_depth_4289_);
v_res_4296_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(v_00_u03b2_4288_, v_depth_boxed_4295_, v_keys_4290_, v_vals_4291_, v_heq_4292_, v_i_4293_, v_entries_4294_);
lean_dec_ref(v_vals_4291_);
lean_dec_ref(v_keys_4290_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17(lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_){
_start:
{
lean_object* v___x_4304_; 
v___x_4304_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___redArg(v___y_4302_);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17___boxed(lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12_spec__17(v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
lean_dec(v___y_4308_);
lean_dec_ref(v___y_4307_);
lean_dec(v___y_4306_);
lean_dec_ref(v___y_4305_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12(lean_object* v_00_u03b1_4313_, lean_object* v_x_4314_, lean_object* v_mkInfoTree_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_){
_start:
{
lean_object* v___x_4323_; 
v___x_4323_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___redArg(v_x_4314_, v_mkInfoTree_4315_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_);
return v___x_4323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4324_, lean_object* v_x_4325_, lean_object* v_mkInfoTree_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_){
_start:
{
lean_object* v_res_4334_; 
v_res_4334_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__9_spec__12(v_00_u03b1_4324_, v_x_4325_, v_mkInfoTree_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec(v___y_4330_);
lean_dec_ref(v___y_4329_);
lean_dec(v___y_4328_);
lean_dec_ref(v___y_4327_);
return v_res_4334_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18(lean_object* v_00_u03b2_4335_, lean_object* v_m_4336_, lean_object* v_a_4337_){
_start:
{
lean_object* v___x_4338_; 
v___x_4338_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___redArg(v_m_4336_, v_a_4337_);
return v___x_4338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18___boxed(lean_object* v_00_u03b2_4339_, lean_object* v_m_4340_, lean_object* v_a_4341_){
_start:
{
lean_object* v_res_4342_; 
v_res_4342_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18(v_00_u03b2_4339_, v_m_4340_, v_a_4341_);
lean_dec(v_a_4341_);
lean_dec_ref(v_m_4340_);
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13(lean_object* v_00_u03b2_4343_, lean_object* v_x_4344_, lean_object* v_x_4345_, lean_object* v_x_4346_, lean_object* v_x_4347_){
_start:
{
lean_object* v___x_4348_; 
v___x_4348_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__3_spec__13___redArg(v_x_4344_, v_x_4345_, v_x_4346_, v_x_4347_);
return v___x_4348_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20(lean_object* v_00_u03b2_4349_, lean_object* v_x_4350_, lean_object* v_x_4351_){
_start:
{
uint8_t v___x_4352_; 
v___x_4352_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___redArg(v_x_4350_, v_x_4351_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20___boxed(lean_object* v_00_u03b2_4353_, lean_object* v_x_4354_, lean_object* v_x_4355_){
_start:
{
uint8_t v_res_4356_; lean_object* v_r_4357_; 
v_res_4356_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20(v_00_u03b2_4353_, v_x_4354_, v_x_4355_);
lean_dec_ref(v_x_4355_);
lean_dec_ref(v_x_4354_);
v_r_4357_ = lean_box(v_res_4356_);
return v_r_4357_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21(lean_object* v_00_u03b2_4358_, lean_object* v_m_4359_, lean_object* v_a_4360_, lean_object* v_b_4361_){
_start:
{
lean_object* v___x_4362_; 
v___x_4362_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21___redArg(v_m_4359_, v_a_4360_, v_b_4361_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24(lean_object* v_00_u03b2_4363_, lean_object* v_a_4364_, lean_object* v_x_4365_){
_start:
{
lean_object* v___x_4366_; 
v___x_4366_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___redArg(v_a_4364_, v_x_4365_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24___boxed(lean_object* v_00_u03b2_4367_, lean_object* v_a_4368_, lean_object* v_x_4369_){
_start:
{
lean_object* v_res_4370_; 
v_res_4370_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__18_spec__24(v_00_u03b2_4367_, v_a_4368_, v_x_4369_);
lean_dec(v_x_4369_);
lean_dec(v_a_4368_);
return v_res_4370_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23(lean_object* v_00_u03b2_4371_, lean_object* v_x_4372_, size_t v_x_4373_, lean_object* v_x_4374_){
_start:
{
uint8_t v___x_4375_; 
v___x_4375_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___redArg(v_x_4372_, v_x_4373_, v_x_4374_);
return v___x_4375_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23___boxed(lean_object* v_00_u03b2_4376_, lean_object* v_x_4377_, lean_object* v_x_4378_, lean_object* v_x_4379_){
_start:
{
size_t v_x_94423__boxed_4380_; uint8_t v_res_4381_; lean_object* v_r_4382_; 
v_x_94423__boxed_4380_ = lean_unbox_usize(v_x_4378_);
lean_dec(v_x_4378_);
v_res_4381_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23(v_00_u03b2_4376_, v_x_4377_, v_x_94423__boxed_4380_, v_x_4379_);
lean_dec_ref(v_x_4379_);
lean_dec_ref(v_x_4377_);
v_r_4382_ = lean_box(v_res_4381_);
return v_r_4382_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25(lean_object* v_00_u03b2_4383_, lean_object* v_a_4384_, lean_object* v_x_4385_){
_start:
{
uint8_t v___x_4386_; 
v___x_4386_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___redArg(v_a_4384_, v_x_4385_);
return v___x_4386_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25___boxed(lean_object* v_00_u03b2_4387_, lean_object* v_a_4388_, lean_object* v_x_4389_){
_start:
{
uint8_t v_res_4390_; lean_object* v_r_4391_; 
v_res_4390_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__25(v_00_u03b2_4387_, v_a_4388_, v_x_4389_);
lean_dec(v_x_4389_);
lean_dec_ref(v_a_4388_);
v_r_4391_ = lean_box(v_res_4390_);
return v_r_4391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26(lean_object* v_00_u03b2_4392_, lean_object* v_data_4393_){
_start:
{
lean_object* v___x_4394_; 
v___x_4394_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26___redArg(v_data_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26(lean_object* v_00_u03b2_4395_, lean_object* v_keys_4396_, lean_object* v_vals_4397_, lean_object* v_heq_4398_, lean_object* v_i_4399_, lean_object* v_k_4400_){
_start:
{
uint8_t v___x_4401_; 
v___x_4401_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___redArg(v_keys_4396_, v_i_4399_, v_k_4400_);
return v___x_4401_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26___boxed(lean_object* v_00_u03b2_4402_, lean_object* v_keys_4403_, lean_object* v_vals_4404_, lean_object* v_heq_4405_, lean_object* v_i_4406_, lean_object* v_k_4407_){
_start:
{
uint8_t v_res_4408_; lean_object* v_r_4409_; 
v_res_4408_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__20_spec__23_spec__26(v_00_u03b2_4402_, v_keys_4403_, v_vals_4404_, v_heq_4405_, v_i_4406_, v_k_4407_);
lean_dec_ref(v_k_4407_);
lean_dec_ref(v_vals_4404_);
lean_dec_ref(v_keys_4403_);
v_r_4409_ = lean_box(v_res_4408_);
return v_r_4409_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30(lean_object* v_00_u03b2_4410_, lean_object* v_i_4411_, lean_object* v_source_4412_, lean_object* v_target_4413_){
_start:
{
lean_object* v___x_4414_; 
v___x_4414_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30___redArg(v_i_4411_, v_source_4412_, v_target_4413_);
return v___x_4414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30_spec__32(lean_object* v_00_u03b2_4415_, lean_object* v_x_4416_, lean_object* v_x_4417_){
_start:
{
lean_object* v___x_4418_; 
v___x_4418_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__12_spec__16_spec__21_spec__26_spec__30_spec__32___redArg(v_x_4416_, v_x_4417_);
return v___x_4418_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1(void){
_start:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; 
v___x_4420_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__0));
v___x_4421_ = l_Lean_stringToMessageData(v___x_4420_);
return v___x_4421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object* v_letConfigStx_4422_, lean_object* v_mutTk_x3f_4423_, lean_object* v_initConfig_4424_, lean_object* v_a_4425_, lean_object* v_a_4426_, lean_object* v_a_4427_, lean_object* v_a_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_){
_start:
{
if (lean_obj_tag(v_mutTk_x3f_4423_) == 0)
{
lean_object* v___x_4433_; 
v___x_4433_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4422_, v_initConfig_4424_, v_a_4426_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_);
return v___x_4433_;
}
else
{
lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; uint8_t v___x_4438_; 
v___x_4434_ = lean_unsigned_to_nat(0u);
v___x_4435_ = l_Lean_Syntax_getArg(v_letConfigStx_4422_, v___x_4434_);
v___x_4436_ = l_Lean_Syntax_getArgs(v___x_4435_);
lean_dec(v___x_4435_);
v___x_4437_ = lean_array_get_size(v___x_4436_);
lean_dec_ref(v___x_4436_);
v___x_4438_ = lean_nat_dec_eq(v___x_4437_, v___x_4434_);
if (v___x_4438_ == 0)
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4448_; 
lean_dec_ref(v_initConfig_4424_);
v___x_4439_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___closed__1);
v___x_4440_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v_letConfigStx_4422_, v___x_4439_, v_a_4425_, v_a_4426_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_);
lean_dec(v_letConfigStx_4422_);
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4448_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4443_ = v___x_4440_;
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v___x_4440_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4446_; 
if (v_isShared_4444_ == 0)
{
v___x_4446_ = v___x_4443_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v_a_4441_);
v___x_4446_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
return v___x_4446_;
}
}
}
else
{
lean_object* v___x_4449_; 
v___x_4449_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4422_, v_initConfig_4424_, v_a_4426_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_);
return v___x_4449_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object* v_letConfigStx_4450_, lean_object* v_mutTk_x3f_4451_, lean_object* v_initConfig_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_, lean_object* v_a_4456_, lean_object* v_a_4457_, lean_object* v_a_4458_, lean_object* v_a_4459_, lean_object* v_a_4460_){
_start:
{
lean_object* v_res_4461_; 
v_res_4461_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_letConfigStx_4450_, v_mutTk_x3f_4451_, v_initConfig_4452_, v_a_4453_, v_a_4454_, v_a_4455_, v_a_4456_, v_a_4457_, v_a_4458_, v_a_4459_);
lean_dec(v_a_4459_);
lean_dec_ref(v_a_4458_);
lean_dec(v_a_4457_);
lean_dec_ref(v_a_4456_);
lean_dec(v_a_4455_);
lean_dec_ref(v_a_4454_);
lean_dec_ref(v_a_4453_);
lean_dec(v_mutTk_x3f_4451_);
return v_res_4461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object* v_stx_4477_, lean_object* v_dec_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_){
_start:
{
lean_object* v___x_4487_; uint8_t v___x_4488_; 
v___x_4487_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
lean_inc(v_stx_4477_);
v___x_4488_ = l_Lean_Syntax_isOfKind(v_stx_4477_, v___x_4487_);
if (v___x_4488_ == 0)
{
lean_object* v___x_4489_; 
lean_dec_ref(v_dec_4478_);
lean_dec(v_stx_4477_);
v___x_4489_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4489_;
}
else
{
lean_object* v___x_4490_; lean_object* v_tk_4491_; lean_object* v_mutTk_x3f_4493_; lean_object* v___y_4494_; lean_object* v___y_4495_; lean_object* v___y_4496_; lean_object* v___y_4497_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___y_4500_; lean_object* v___x_4525_; lean_object* v___x_4526_; uint8_t v___x_4527_; 
v___x_4490_ = lean_unsigned_to_nat(0u);
v_tk_4491_ = l_Lean_Syntax_getArg(v_stx_4477_, v___x_4490_);
v___x_4525_ = lean_unsigned_to_nat(1u);
v___x_4526_ = l_Lean_Syntax_getArg(v_stx_4477_, v___x_4525_);
v___x_4527_ = l_Lean_Syntax_isNone(v___x_4526_);
if (v___x_4527_ == 0)
{
uint8_t v___x_4528_; 
lean_inc(v___x_4526_);
v___x_4528_ = l_Lean_Syntax_matchesNull(v___x_4526_, v___x_4525_);
if (v___x_4528_ == 0)
{
lean_object* v___x_4529_; 
lean_dec(v___x_4526_);
lean_dec(v_tk_4491_);
lean_dec_ref(v_dec_4478_);
lean_dec(v_stx_4477_);
v___x_4529_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4529_;
}
else
{
lean_object* v_mutTk_x3f_4530_; lean_object* v___x_4531_; 
v_mutTk_x3f_4530_ = l_Lean_Syntax_getArg(v___x_4526_, v___x_4490_);
lean_dec(v___x_4526_);
v___x_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4531_, 0, v_mutTk_x3f_4530_);
v_mutTk_x3f_4493_ = v___x_4531_;
v___y_4494_ = v_a_4479_;
v___y_4495_ = v_a_4480_;
v___y_4496_ = v_a_4481_;
v___y_4497_ = v_a_4482_;
v___y_4498_ = v_a_4483_;
v___y_4499_ = v_a_4484_;
v___y_4500_ = v_a_4485_;
goto v___jp_4492_;
}
}
else
{
lean_object* v___x_4532_; 
lean_dec(v___x_4526_);
v___x_4532_ = lean_box(0);
v_mutTk_x3f_4493_ = v___x_4532_;
v___y_4494_ = v_a_4479_;
v___y_4495_ = v_a_4480_;
v___y_4496_ = v_a_4481_;
v___y_4497_ = v_a_4482_;
v___y_4498_ = v_a_4483_;
v___y_4499_ = v_a_4484_;
v___y_4500_ = v_a_4485_;
goto v___jp_4492_;
}
v___jp_4492_:
{
lean_object* v___x_4501_; lean_object* v_config_4502_; lean_object* v___x_4503_; uint8_t v___x_4504_; 
v___x_4501_ = lean_unsigned_to_nat(2u);
v_config_4502_ = l_Lean_Syntax_getArg(v_stx_4477_, v___x_4501_);
v___x_4503_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_config_4502_);
v___x_4504_ = l_Lean_Syntax_isOfKind(v_config_4502_, v___x_4503_);
if (v___x_4504_ == 0)
{
lean_object* v___x_4505_; 
lean_dec(v_config_4502_);
lean_dec(v_mutTk_x3f_4493_);
lean_dec(v_tk_4491_);
lean_dec_ref(v_dec_4478_);
lean_dec(v_stx_4477_);
v___x_4505_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4505_;
}
else
{
lean_object* v___x_4506_; lean_object* v_decl_4507_; lean_object* v___x_4508_; uint8_t v___x_4509_; 
v___x_4506_ = lean_unsigned_to_nat(3u);
v_decl_4507_ = l_Lean_Syntax_getArg(v_stx_4477_, v___x_4506_);
lean_dec(v_stx_4477_);
v___x_4508_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_4507_);
v___x_4509_ = l_Lean_Syntax_isOfKind(v_decl_4507_, v___x_4508_);
if (v___x_4509_ == 0)
{
lean_object* v___x_4510_; 
lean_dec(v_decl_4507_);
lean_dec(v_config_4502_);
lean_dec(v_mutTk_x3f_4493_);
lean_dec(v_tk_4491_);
lean_dec_ref(v_dec_4478_);
v___x_4510_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4510_;
}
else
{
uint8_t v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4511_ = 0;
v___x_4512_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
v___x_4513_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_config_4502_, v_mutTk_x3f_4493_, v___x_4512_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_);
if (lean_obj_tag(v___x_4513_) == 0)
{
lean_object* v_a_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v_a_4514_ = lean_ctor_get(v___x_4513_, 0);
lean_inc(v_a_4514_);
lean_dec_ref_known(v___x_4513_, 1);
v___x_4515_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4515_, 0, v_mutTk_x3f_4493_);
lean_ctor_set_uint8(v___x_4515_, sizeof(void*)*1, v___x_4511_);
v___x_4516_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4514_, v___x_4515_, v_decl_4507_, v_tk_4491_, v_dec_4478_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_);
return v___x_4516_;
}
else
{
lean_object* v_a_4517_; lean_object* v___x_4519_; uint8_t v_isShared_4520_; uint8_t v_isSharedCheck_4524_; 
lean_dec(v_decl_4507_);
lean_dec(v_mutTk_x3f_4493_);
lean_dec(v_tk_4491_);
lean_dec_ref(v_dec_4478_);
v_a_4517_ = lean_ctor_get(v___x_4513_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4513_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4519_ = v___x_4513_;
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
else
{
lean_inc(v_a_4517_);
lean_dec(v___x_4513_);
v___x_4519_ = lean_box(0);
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
v_resetjp_4518_:
{
lean_object* v___x_4522_; 
if (v_isShared_4520_ == 0)
{
v___x_4522_ = v___x_4519_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4517_);
v___x_4522_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
return v___x_4522_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object* v_stx_4533_, lean_object* v_dec_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_, lean_object* v_a_4538_, lean_object* v_a_4539_, lean_object* v_a_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_){
_start:
{
lean_object* v_res_4543_; 
v_res_4543_ = l_Lean_Elab_Do_elabDoLet(v_stx_4533_, v_dec_4534_, v_a_4535_, v_a_4536_, v_a_4537_, v_a_4538_, v_a_4539_, v_a_4540_, v_a_4541_);
lean_dec(v_a_4541_);
lean_dec_ref(v_a_4540_);
lean_dec(v_a_4539_);
lean_dec_ref(v_a_4538_);
lean_dec(v_a_4537_);
lean_dec_ref(v_a_4536_);
lean_dec_ref(v_a_4535_);
return v_res_4543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1(){
_start:
{
lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4551_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4552_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_4553_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1));
v___x_4554_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLet___boxed), 10, 0);
v___x_4555_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4551_, v___x_4552_, v___x_4553_, v___x_4554_);
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object* v_a_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
return v_res_4557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased(lean_object* v_stx_4572_, lean_object* v_dec_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_){
_start:
{
lean_object* v___x_4582_; uint8_t v___x_4583_; 
v___x_4582_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
lean_inc(v_stx_4572_);
v___x_4583_ = l_Lean_Syntax_isOfKind(v_stx_4572_, v___x_4582_);
if (v___x_4583_ == 0)
{
lean_object* v___x_4584_; 
lean_dec_ref(v_dec_4573_);
lean_dec(v_stx_4572_);
v___x_4584_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4584_;
}
else
{
lean_object* v___x_4585_; lean_object* v_tk_4586_; lean_object* v___y_4588_; lean_object* v___y_4589_; uint8_t v___y_4590_; lean_object* v___y_4591_; lean_object* v___y_4592_; lean_object* v___y_4593_; lean_object* v___y_4594_; lean_object* v___y_4595_; lean_object* v___y_4596_; lean_object* v___y_4597_; lean_object* v___y_4598_; lean_object* v___y_4599_; lean_object* v___y_4600_; lean_object* v___y_4601_; lean_object* v___y_4602_; lean_object* v___y_4603_; lean_object* v___y_4604_; lean_object* v___y_4605_; lean_object* v___y_4617_; lean_object* v___y_4618_; lean_object* v___y_4619_; lean_object* v___y_4620_; lean_object* v_t_x3f_4621_; lean_object* v___y_4622_; lean_object* v___y_4623_; lean_object* v___y_4624_; lean_object* v___y_4625_; lean_object* v___y_4626_; lean_object* v___y_4627_; lean_object* v___y_4628_; lean_object* v___x_4647_; lean_object* v_mutTk_x3f_4649_; lean_object* v___y_4650_; lean_object* v___y_4651_; lean_object* v___y_4652_; lean_object* v___y_4653_; lean_object* v___y_4654_; lean_object* v___y_4655_; lean_object* v___y_4656_; lean_object* v___x_4684_; uint8_t v___x_4685_; 
v___x_4585_ = lean_unsigned_to_nat(0u);
v_tk_4586_ = l_Lean_Syntax_getArg(v_stx_4572_, v___x_4585_);
v___x_4647_ = lean_unsigned_to_nat(1u);
v___x_4684_ = l_Lean_Syntax_getArg(v_stx_4572_, v___x_4647_);
v___x_4685_ = l_Lean_Syntax_isNone(v___x_4684_);
if (v___x_4685_ == 0)
{
uint8_t v___x_4686_; 
lean_inc(v___x_4684_);
v___x_4686_ = l_Lean_Syntax_matchesNull(v___x_4684_, v___x_4647_);
if (v___x_4686_ == 0)
{
lean_object* v___x_4687_; 
lean_dec(v___x_4684_);
lean_dec(v_tk_4586_);
lean_dec_ref(v_dec_4573_);
lean_dec(v_stx_4572_);
v___x_4687_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4687_;
}
else
{
lean_object* v_mutTk_x3f_4688_; lean_object* v___x_4689_; 
v_mutTk_x3f_4688_ = l_Lean_Syntax_getArg(v___x_4684_, v___x_4585_);
lean_dec(v___x_4684_);
v___x_4689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4689_, 0, v_mutTk_x3f_4688_);
v_mutTk_x3f_4649_ = v___x_4689_;
v___y_4650_ = v_a_4574_;
v___y_4651_ = v_a_4575_;
v___y_4652_ = v_a_4576_;
v___y_4653_ = v_a_4577_;
v___y_4654_ = v_a_4578_;
v___y_4655_ = v_a_4579_;
v___y_4656_ = v_a_4580_;
goto v___jp_4648_;
}
}
else
{
lean_object* v___x_4690_; 
lean_dec(v___x_4684_);
v___x_4690_ = lean_box(0);
v_mutTk_x3f_4649_ = v___x_4690_;
v___y_4650_ = v_a_4574_;
v___y_4651_ = v_a_4575_;
v___y_4652_ = v_a_4576_;
v___y_4653_ = v_a_4577_;
v___y_4654_ = v_a_4578_;
v___y_4655_ = v_a_4579_;
v___y_4656_ = v_a_4580_;
goto v___jp_4648_;
}
v___jp_4587_:
{
lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; 
lean_inc_ref(v___y_4599_);
v___x_4606_ = l_Array_append___redArg(v___y_4599_, v___y_4605_);
lean_dec_ref(v___y_4605_);
lean_inc(v___y_4602_);
lean_inc_n(v___y_4603_, 3);
v___x_4607_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4607_, 0, v___y_4603_);
lean_ctor_set(v___x_4607_, 1, v___y_4602_);
lean_ctor_set(v___x_4607_, 2, v___x_4606_);
v___x_4608_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_4609_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4609_, 0, v___y_4603_);
lean_ctor_set(v___x_4609_, 1, v___x_4608_);
lean_inc(v___y_4601_);
v___x_4610_ = l_Lean_Syntax_node5(v___y_4603_, v___y_4601_, v___y_4600_, v___y_4595_, v___x_4607_, v___x_4609_, v___y_4598_);
lean_inc(v___y_4588_);
v___x_4611_ = l_Lean_Syntax_node1(v___y_4603_, v___y_4588_, v___x_4610_);
v___x_4612_ = lean_box(0);
v___x_4613_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4613_, 0, v___x_4612_);
lean_ctor_set_uint8(v___x_4613_, sizeof(void*)*1, v___y_4590_);
lean_ctor_set_uint8(v___x_4613_, sizeof(void*)*1 + 1, v___y_4590_);
lean_ctor_set_uint8(v___x_4613_, sizeof(void*)*1 + 2, v___y_4590_);
lean_ctor_set_uint8(v___x_4613_, sizeof(void*)*1 + 3, v___y_4590_);
lean_ctor_set_uint8(v___x_4613_, sizeof(void*)*1 + 4, v___y_4590_);
v___x_4614_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4614_, 0, v___y_4592_);
lean_ctor_set_uint8(v___x_4614_, sizeof(void*)*1, v___x_4583_);
v___x_4615_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_4613_, v___x_4614_, v___x_4611_, v_tk_4586_, v_dec_4573_, v___y_4597_, v___y_4589_, v___y_4596_, v___y_4593_, v___y_4591_, v___y_4604_, v___y_4594_);
return v___x_4615_;
}
v___jp_4616_:
{
lean_object* v_ref_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; uint8_t v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v_ref_4629_ = lean_ctor_get(v___y_4627_, 2);
v___x_4630_ = lean_unsigned_to_nat(4u);
v___x_4631_ = l_Lean_Syntax_getArg(v___y_4619_, v___x_4630_);
lean_dec(v___y_4619_);
v___x_4632_ = 0;
v___x_4633_ = l_Lean_SourceInfo_fromRef(v_ref_4629_, v___x_4632_);
v___x_4634_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_4635_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc(v___y_4617_);
lean_inc_n(v___x_4633_, 2);
v___x_4636_ = l_Lean_Syntax_node1(v___x_4633_, v___y_4617_, v___y_4618_);
v___x_4637_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_4638_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_4639_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4639_, 0, v___x_4633_);
lean_ctor_set(v___x_4639_, 1, v___x_4637_);
lean_ctor_set(v___x_4639_, 2, v___x_4638_);
if (lean_obj_tag(v_t_x3f_4621_) == 1)
{
lean_object* v_val_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v_val_4640_ = lean_ctor_get(v_t_x3f_4621_, 0);
lean_inc(v_val_4640_);
lean_dec_ref_known(v_t_x3f_4621_, 1);
v___x_4641_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_4642_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
lean_inc_n(v___x_4633_, 2);
v___x_4643_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4643_, 0, v___x_4633_);
lean_ctor_set(v___x_4643_, 1, v___x_4642_);
v___x_4644_ = l_Lean_Syntax_node2(v___x_4633_, v___x_4641_, v___x_4643_, v_val_4640_);
v___x_4645_ = l_Array_mkArray1___redArg(v___x_4644_);
v___y_4588_ = v___x_4634_;
v___y_4589_ = v___y_4623_;
v___y_4590_ = v___x_4632_;
v___y_4591_ = v___y_4626_;
v___y_4592_ = v___y_4620_;
v___y_4593_ = v___y_4625_;
v___y_4594_ = v___y_4628_;
v___y_4595_ = v___x_4639_;
v___y_4596_ = v___y_4624_;
v___y_4597_ = v___y_4622_;
v___y_4598_ = v___x_4631_;
v___y_4599_ = v___x_4638_;
v___y_4600_ = v___x_4636_;
v___y_4601_ = v___x_4635_;
v___y_4602_ = v___x_4637_;
v___y_4603_ = v___x_4633_;
v___y_4604_ = v___y_4627_;
v___y_4605_ = v___x_4645_;
goto v___jp_4587_;
}
else
{
lean_object* v___x_4646_; 
lean_dec(v_t_x3f_4621_);
v___x_4646_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4588_ = v___x_4634_;
v___y_4589_ = v___y_4623_;
v___y_4590_ = v___x_4632_;
v___y_4591_ = v___y_4626_;
v___y_4592_ = v___y_4620_;
v___y_4593_ = v___y_4625_;
v___y_4594_ = v___y_4628_;
v___y_4595_ = v___x_4639_;
v___y_4596_ = v___y_4624_;
v___y_4597_ = v___y_4622_;
v___y_4598_ = v___x_4631_;
v___y_4599_ = v___x_4638_;
v___y_4600_ = v___x_4636_;
v___y_4601_ = v___x_4635_;
v___y_4602_ = v___x_4637_;
v___y_4603_ = v___x_4633_;
v___y_4604_ = v___y_4627_;
v___y_4605_ = v___x_4646_;
goto v___jp_4587_;
}
}
v___jp_4648_:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; uint8_t v___x_4660_; 
v___x_4657_ = lean_unsigned_to_nat(2u);
v___x_4658_ = l_Lean_Syntax_getArg(v_stx_4572_, v___x_4657_);
lean_dec(v_stx_4572_);
v___x_4659_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
lean_inc(v___x_4658_);
v___x_4660_ = l_Lean_Syntax_isOfKind(v___x_4658_, v___x_4659_);
if (v___x_4660_ == 0)
{
lean_object* v___x_4661_; 
lean_dec(v___x_4658_);
lean_dec(v_mutTk_x3f_4649_);
lean_dec(v_tk_4586_);
lean_dec_ref(v_dec_4573_);
v___x_4661_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4661_;
}
else
{
lean_object* v___x_4662_; lean_object* v___x_4663_; uint8_t v___x_4664_; 
v___x_4662_ = l_Lean_Syntax_getArg(v___x_4658_, v___x_4585_);
v___x_4663_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_4662_);
v___x_4664_ = l_Lean_Syntax_isOfKind(v___x_4662_, v___x_4663_);
if (v___x_4664_ == 0)
{
lean_object* v___x_4665_; 
lean_dec(v___x_4662_);
lean_dec(v___x_4658_);
lean_dec(v_mutTk_x3f_4649_);
lean_dec(v_tk_4586_);
lean_dec_ref(v_dec_4573_);
v___x_4665_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4665_;
}
else
{
lean_object* v___x_4666_; lean_object* v___x_4667_; uint8_t v___x_4668_; 
v___x_4666_ = l_Lean_Syntax_getArg(v___x_4662_, v___x_4585_);
lean_dec(v___x_4662_);
v___x_4667_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_4666_);
v___x_4668_ = l_Lean_Syntax_isOfKind(v___x_4666_, v___x_4667_);
if (v___x_4668_ == 0)
{
lean_object* v___x_4669_; 
lean_dec(v___x_4666_);
lean_dec(v___x_4658_);
lean_dec(v_mutTk_x3f_4649_);
lean_dec(v_tk_4586_);
lean_dec_ref(v_dec_4573_);
v___x_4669_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4669_;
}
else
{
lean_object* v___x_4670_; uint8_t v___x_4671_; 
v___x_4670_ = l_Lean_Syntax_getArg(v___x_4658_, v___x_4647_);
v___x_4671_ = l_Lean_Syntax_matchesNull(v___x_4670_, v___x_4585_);
if (v___x_4671_ == 0)
{
lean_object* v___x_4672_; 
lean_dec(v___x_4666_);
lean_dec(v___x_4658_);
lean_dec(v_mutTk_x3f_4649_);
lean_dec(v_tk_4586_);
lean_dec_ref(v_dec_4573_);
v___x_4672_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4672_;
}
else
{
lean_object* v___x_4673_; uint8_t v___x_4674_; 
v___x_4673_ = l_Lean_Syntax_getArg(v___x_4658_, v___x_4657_);
v___x_4674_ = l_Lean_Syntax_isNone(v___x_4673_);
if (v___x_4674_ == 0)
{
uint8_t v___x_4675_; 
lean_inc(v___x_4673_);
v___x_4675_ = l_Lean_Syntax_matchesNull(v___x_4673_, v___x_4647_);
if (v___x_4675_ == 0)
{
lean_object* v___x_4676_; 
lean_dec(v___x_4673_);
lean_dec(v___x_4666_);
lean_dec(v___x_4658_);
lean_dec(v_mutTk_x3f_4649_);
lean_dec(v_tk_4586_);
lean_dec_ref(v_dec_4573_);
v___x_4676_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4676_;
}
else
{
lean_object* v___x_4677_; lean_object* v___x_4678_; uint8_t v___x_4679_; 
v___x_4677_ = l_Lean_Syntax_getArg(v___x_4673_, v___x_4585_);
lean_dec(v___x_4673_);
v___x_4678_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_4677_);
v___x_4679_ = l_Lean_Syntax_isOfKind(v___x_4677_, v___x_4678_);
if (v___x_4679_ == 0)
{
lean_object* v___x_4680_; 
lean_dec(v___x_4677_);
lean_dec(v___x_4666_);
lean_dec(v___x_4658_);
lean_dec(v_mutTk_x3f_4649_);
lean_dec(v_tk_4586_);
lean_dec_ref(v_dec_4573_);
v___x_4680_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4680_;
}
else
{
lean_object* v_t_x3f_4681_; lean_object* v___x_4682_; 
v_t_x3f_4681_ = l_Lean_Syntax_getArg(v___x_4677_, v___x_4647_);
lean_dec(v___x_4677_);
v___x_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4682_, 0, v_t_x3f_4681_);
v___y_4617_ = v___x_4663_;
v___y_4618_ = v___x_4666_;
v___y_4619_ = v___x_4658_;
v___y_4620_ = v_mutTk_x3f_4649_;
v_t_x3f_4621_ = v___x_4682_;
v___y_4622_ = v___y_4650_;
v___y_4623_ = v___y_4651_;
v___y_4624_ = v___y_4652_;
v___y_4625_ = v___y_4653_;
v___y_4626_ = v___y_4654_;
v___y_4627_ = v___y_4655_;
v___y_4628_ = v___y_4656_;
goto v___jp_4616_;
}
}
}
else
{
lean_object* v___x_4683_; 
lean_dec(v___x_4673_);
v___x_4683_ = lean_box(0);
v___y_4617_ = v___x_4663_;
v___y_4618_ = v___x_4666_;
v___y_4619_ = v___x_4658_;
v___y_4620_ = v_mutTk_x3f_4649_;
v_t_x3f_4621_ = v___x_4683_;
v___y_4622_ = v___y_4650_;
v___y_4623_ = v___y_4651_;
v___y_4624_ = v___y_4652_;
v___y_4625_ = v___y_4653_;
v___y_4626_ = v___y_4654_;
v___y_4627_ = v___y_4655_;
v___y_4628_ = v___y_4656_;
goto v___jp_4616_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoErased___boxed(lean_object* v_stx_4691_, lean_object* v_dec_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_a_4696_, lean_object* v_a_4697_, lean_object* v_a_4698_, lean_object* v_a_4699_, lean_object* v_a_4700_){
_start:
{
lean_object* v_res_4701_; 
v_res_4701_ = l_Lean_Elab_Do_elabDoErased(v_stx_4691_, v_dec_4692_, v_a_4693_, v_a_4694_, v_a_4695_, v_a_4696_, v_a_4697_, v_a_4698_, v_a_4699_);
lean_dec(v_a_4699_);
lean_dec_ref(v_a_4698_);
lean_dec(v_a_4697_);
lean_dec_ref(v_a_4696_);
lean_dec(v_a_4695_);
lean_dec_ref(v_a_4694_);
lean_dec_ref(v_a_4693_);
return v_res_4701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1(){
_start:
{
lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; 
v___x_4709_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4710_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
v___x_4711_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___closed__1));
v___x_4712_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoErased___boxed), 10, 0);
v___x_4713_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4709_, v___x_4710_, v___x_4711_, v___x_4712_);
return v___x_4713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1___boxed(lean_object* v_a_4714_){
_start:
{
lean_object* v_res_4715_; 
v_res_4715_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
return v_res_4715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0(lean_object* v_____do__lift_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_){
_start:
{
uint8_t v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4719_ = 0;
v___x_4720_ = l_Lean_SourceInfo_fromRef(v_____do__lift_4716_, v___x_4719_);
v___x_4721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4721_, 0, v___x_4720_);
lean_ctor_set(v___x_4721_, 1, v___y_4718_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___lam__0___boxed(lean_object* v_____do__lift_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v_____do__lift_4722_, v___y_4723_, v___y_4724_);
lean_dec_ref(v___y_4723_);
lean_dec(v_____do__lift_4722_);
return v_res_4725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow(lean_object* v_stx_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_){
_start:
{
lean_object* v___y_4773_; uint8_t v___y_4774_; lean_object* v___y_4775_; lean_object* v___y_4776_; lean_object* v___y_4777_; lean_object* v___y_4778_; lean_object* v___y_4779_; lean_object* v___y_4780_; lean_object* v___y_4781_; lean_object* v___y_4782_; lean_object* v___y_4783_; lean_object* v___y_4784_; lean_object* v___x_4811_; uint8_t v___x_4812_; 
v___x_4811_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__8));
lean_inc(v_stx_4769_);
v___x_4812_ = l_Lean_Syntax_isOfKind(v_stx_4769_, v___x_4811_);
if (v___x_4812_ == 0)
{
lean_object* v___x_4813_; 
lean_dec(v_stx_4769_);
v___x_4813_ = l_Lean_Macro_throwUnsupported___redArg(v_a_4771_);
return v___x_4813_;
}
else
{
lean_object* v___x_4814_; lean_object* v_tk_4815_; uint8_t v___y_4817_; lean_object* v___y_4818_; lean_object* v___y_4819_; lean_object* v___y_4820_; lean_object* v___y_4821_; lean_object* v___y_4822_; lean_object* v___y_4823_; lean_object* v___y_4824_; lean_object* v___y_4825_; lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v___y_4829_; lean_object* v___y_4830_; lean_object* v___y_4831_; lean_object* v___y_4832_; lean_object* v___y_4833_; lean_object* v___y_4860_; lean_object* v___y_4861_; lean_object* v___y_4862_; lean_object* v___y_4863_; lean_object* v_t_x3f_4864_; lean_object* v___y_4865_; lean_object* v___y_4866_; lean_object* v___x_4900_; lean_object* v_mutTk_x3f_4902_; lean_object* v___y_4903_; lean_object* v___y_4904_; lean_object* v___x_4925_; uint8_t v___x_4926_; 
v___x_4814_ = lean_unsigned_to_nat(0u);
v_tk_4815_ = l_Lean_Syntax_getArg(v_stx_4769_, v___x_4814_);
v___x_4900_ = lean_unsigned_to_nat(1u);
v___x_4925_ = l_Lean_Syntax_getArg(v_stx_4769_, v___x_4900_);
v___x_4926_ = l_Lean_Syntax_isNone(v___x_4925_);
if (v___x_4926_ == 0)
{
uint8_t v___x_4927_; 
lean_inc(v___x_4925_);
v___x_4927_ = l_Lean_Syntax_matchesNull(v___x_4925_, v___x_4900_);
if (v___x_4927_ == 0)
{
lean_object* v___x_4928_; 
lean_dec(v___x_4925_);
lean_dec(v_tk_4815_);
lean_dec(v_stx_4769_);
v___x_4928_ = l_Lean_Macro_throwUnsupported___redArg(v_a_4771_);
return v___x_4928_;
}
else
{
lean_object* v_mutTk_x3f_4929_; lean_object* v___x_4930_; 
v_mutTk_x3f_4929_ = l_Lean_Syntax_getArg(v___x_4925_, v___x_4814_);
lean_dec(v___x_4925_);
v___x_4930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4930_, 0, v_mutTk_x3f_4929_);
v_mutTk_x3f_4902_ = v___x_4930_;
v___y_4903_ = v_a_4770_;
v___y_4904_ = v_a_4771_;
goto v___jp_4901_;
}
}
else
{
lean_object* v___x_4931_; 
lean_dec(v___x_4925_);
v___x_4931_ = lean_box(0);
v_mutTk_x3f_4902_ = v___x_4931_;
v___y_4903_ = v_a_4770_;
v___y_4904_ = v_a_4771_;
goto v___jp_4901_;
}
v___jp_4816_:
{
lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v_a_4837_; lean_object* v_a_4838_; lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4858_; 
lean_inc_ref(v___y_4832_);
v___x_4834_ = l_Array_append___redArg(v___y_4832_, v___y_4833_);
lean_dec_ref(v___y_4833_);
lean_inc(v___y_4824_);
lean_inc(v___y_4822_);
v___x_4835_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4835_, 0, v___y_4822_);
lean_ctor_set(v___x_4835_, 1, v___y_4824_);
lean_ctor_set(v___x_4835_, 2, v___x_4834_);
v___x_4836_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v___y_4825_, v___y_4827_, v___y_4828_);
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
v_a_4838_ = lean_ctor_get(v___x_4836_, 1);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4840_ = v___x_4836_;
v_isShared_4841_ = v_isSharedCheck_4858_;
goto v_resetjp_4839_;
}
else
{
lean_inc(v_a_4838_);
lean_inc(v_a_4837_);
lean_dec(v___x_4836_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4858_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
lean_object* v___x_4842_; lean_object* v___x_4844_; 
v___x_4842_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__9));
lean_inc(v___y_4822_);
if (v_isShared_4841_ == 0)
{
lean_ctor_set_tag(v___x_4840_, 2);
lean_ctor_set(v___x_4840_, 1, v___x_4842_);
lean_ctor_set(v___x_4840_, 0, v___y_4822_);
v___x_4844_ = v___x_4840_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v___y_4822_);
lean_ctor_set(v_reuseFailAlloc_4857_, 1, v___x_4842_);
v___x_4844_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
lean_inc(v___y_4821_);
lean_inc(v___y_4818_);
lean_inc(v___y_4822_);
v___x_4845_ = l_Lean_Syntax_node4(v___y_4822_, v___y_4818_, v___y_4821_, v___x_4835_, v___x_4844_, v___y_4823_);
lean_inc(v___y_4829_);
v___x_4846_ = l_Lean_Syntax_node4(v___y_4822_, v___y_4829_, v___y_4830_, v___y_4819_, v___y_4820_, v___x_4845_);
v___x_4847_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__1));
v___x_4848_ = l_Lean_SourceInfo_fromRef(v_tk_4815_, v___x_4812_);
lean_dec(v_tk_4815_);
v___x_4849_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__10));
v___x_4850_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4850_, 0, v___x_4848_);
lean_ctor_set(v___x_4850_, 1, v___x_4849_);
if (lean_obj_tag(v___y_4826_) == 1)
{
lean_object* v_val_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
v_val_4851_ = lean_ctor_get(v___y_4826_, 0);
lean_inc(v_val_4851_);
lean_dec_ref_known(v___y_4826_, 1);
v___x_4852_ = l_Lean_SourceInfo_fromRef(v_val_4851_, v___x_4812_);
lean_dec(v_val_4851_);
v___x_4853_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_4854_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4854_, 0, v___x_4852_);
lean_ctor_set(v___x_4854_, 1, v___x_4853_);
v___x_4855_ = l_Array_mkArray1___redArg(v___x_4854_);
v___y_4773_ = v_a_4838_;
v___y_4774_ = v___y_4817_;
v___y_4775_ = v___x_4847_;
v___y_4776_ = v___x_4846_;
v___y_4777_ = v___y_4824_;
v___y_4778_ = v_a_4837_;
v___y_4779_ = v___y_4825_;
v___y_4780_ = v___x_4850_;
v___y_4781_ = v___y_4821_;
v___y_4782_ = v___y_4831_;
v___y_4783_ = v___y_4832_;
v___y_4784_ = v___x_4855_;
goto v___jp_4772_;
}
else
{
lean_object* v___x_4856_; 
lean_dec(v___y_4826_);
v___x_4856_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4773_ = v_a_4838_;
v___y_4774_ = v___y_4817_;
v___y_4775_ = v___x_4847_;
v___y_4776_ = v___x_4846_;
v___y_4777_ = v___y_4824_;
v___y_4778_ = v_a_4837_;
v___y_4779_ = v___y_4825_;
v___y_4780_ = v___x_4850_;
v___y_4781_ = v___y_4821_;
v___y_4782_ = v___y_4831_;
v___y_4783_ = v___y_4832_;
v___y_4784_ = v___x_4856_;
goto v___jp_4772_;
}
}
}
}
v___jp_4859_:
{
lean_object* v_quotContext_4867_; lean_object* v_currMacroScope_4868_; lean_object* v_ref_4869_; lean_object* v___x_4870_; lean_object* v_a_4871_; lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4899_; 
v_quotContext_4867_ = lean_ctor_get(v___y_4865_, 1);
v_currMacroScope_4868_ = lean_ctor_get(v___y_4865_, 2);
v_ref_4869_ = lean_ctor_get(v___y_4865_, 5);
v___x_4870_ = l_Lean_Elab_Do_expandDoErasedArrow___lam__0(v_ref_4869_, v___y_4865_, v___y_4866_);
v_a_4871_ = lean_ctor_get(v___x_4870_, 0);
v_a_4872_ = lean_ctor_get(v___x_4870_, 1);
v_isSharedCheck_4899_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4899_ == 0)
{
v___x_4874_ = v___x_4870_;
v_isShared_4875_ = v_isSharedCheck_4899_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_inc(v_a_4871_);
lean_dec(v___x_4870_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4899_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; uint8_t v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4885_; 
v___x_4876_ = lean_unsigned_to_nat(3u);
v___x_4877_ = l_Lean_Syntax_getArg(v___y_4860_, v___x_4876_);
lean_dec(v___y_4860_);
v___x_4878_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
lean_inc(v_currMacroScope_4868_);
lean_inc(v_quotContext_4867_);
v___x_4879_ = l_Lean_addMacroScope(v_quotContext_4867_, v___x_4878_, v_currMacroScope_4868_);
v___x_4880_ = 0;
v___x_4881_ = l_Lean_mkIdentFrom(v___y_4863_, v___x_4879_, v___x_4880_);
v___x_4882_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
v___x_4883_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v_a_4871_);
if (v_isShared_4875_ == 0)
{
lean_ctor_set_tag(v___x_4874_, 2);
lean_ctor_set(v___x_4874_, 1, v___x_4883_);
v___x_4885_ = v___x_4874_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v_a_4871_);
lean_ctor_set(v_reuseFailAlloc_4898_, 1, v___x_4883_);
v___x_4885_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; 
v___x_4886_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_4887_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v_a_4871_, 2);
v___x_4888_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4888_, 0, v_a_4871_);
lean_ctor_set(v___x_4888_, 1, v___x_4886_);
lean_ctor_set(v___x_4888_, 2, v___x_4887_);
v___x_4889_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc_ref(v___x_4888_);
v___x_4890_ = l_Lean_Syntax_node1(v_a_4871_, v___x_4889_, v___x_4888_);
if (lean_obj_tag(v_t_x3f_4864_) == 1)
{
lean_object* v_val_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; 
v_val_4891_ = lean_ctor_get(v_t_x3f_4864_, 0);
lean_inc(v_val_4891_);
lean_dec_ref_known(v_t_x3f_4864_, 1);
v___x_4892_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_4893_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
lean_inc_n(v_a_4871_, 2);
v___x_4894_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4894_, 0, v_a_4871_);
lean_ctor_set(v___x_4894_, 1, v___x_4893_);
v___x_4895_ = l_Lean_Syntax_node2(v_a_4871_, v___x_4892_, v___x_4894_, v_val_4891_);
v___x_4896_ = l_Array_mkArray1___redArg(v___x_4895_);
v___y_4817_ = v___x_4880_;
v___y_4818_ = v___y_4861_;
v___y_4819_ = v___x_4888_;
v___y_4820_ = v___x_4890_;
v___y_4821_ = v___x_4881_;
v___y_4822_ = v_a_4871_;
v___y_4823_ = v___x_4877_;
v___y_4824_ = v___x_4886_;
v___y_4825_ = v_ref_4869_;
v___y_4826_ = v___y_4862_;
v___y_4827_ = v___y_4865_;
v___y_4828_ = v_a_4872_;
v___y_4829_ = v___x_4882_;
v___y_4830_ = v___x_4885_;
v___y_4831_ = v___y_4863_;
v___y_4832_ = v___x_4887_;
v___y_4833_ = v___x_4896_;
goto v___jp_4816_;
}
else
{
lean_object* v___x_4897_; 
lean_dec(v_t_x3f_4864_);
v___x_4897_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_4817_ = v___x_4880_;
v___y_4818_ = v___y_4861_;
v___y_4819_ = v___x_4888_;
v___y_4820_ = v___x_4890_;
v___y_4821_ = v___x_4881_;
v___y_4822_ = v_a_4871_;
v___y_4823_ = v___x_4877_;
v___y_4824_ = v___x_4886_;
v___y_4825_ = v_ref_4869_;
v___y_4826_ = v___y_4862_;
v___y_4827_ = v___y_4865_;
v___y_4828_ = v_a_4872_;
v___y_4829_ = v___x_4882_;
v___y_4830_ = v___x_4885_;
v___y_4831_ = v___y_4863_;
v___y_4832_ = v___x_4887_;
v___y_4833_ = v___x_4897_;
goto v___jp_4816_;
}
}
}
}
v___jp_4901_:
{
lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; uint8_t v___x_4908_; 
v___x_4905_ = lean_unsigned_to_nat(2u);
v___x_4906_ = l_Lean_Syntax_getArg(v_stx_4769_, v___x_4905_);
lean_dec(v_stx_4769_);
v___x_4907_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
lean_inc(v___x_4906_);
v___x_4908_ = l_Lean_Syntax_isOfKind(v___x_4906_, v___x_4907_);
if (v___x_4908_ == 0)
{
lean_object* v___x_4909_; 
lean_dec(v___x_4906_);
lean_dec(v_mutTk_x3f_4902_);
lean_dec(v_tk_4815_);
v___x_4909_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4904_);
return v___x_4909_;
}
else
{
lean_object* v___x_4910_; lean_object* v___x_4911_; uint8_t v___x_4912_; 
v___x_4910_ = l_Lean_Syntax_getArg(v___x_4906_, v___x_4814_);
v___x_4911_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_4910_);
v___x_4912_ = l_Lean_Syntax_isOfKind(v___x_4910_, v___x_4911_);
if (v___x_4912_ == 0)
{
lean_object* v___x_4913_; 
lean_dec(v___x_4910_);
lean_dec(v___x_4906_);
lean_dec(v_mutTk_x3f_4902_);
lean_dec(v_tk_4815_);
v___x_4913_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4904_);
return v___x_4913_;
}
else
{
lean_object* v___x_4914_; uint8_t v___x_4915_; 
v___x_4914_ = l_Lean_Syntax_getArg(v___x_4906_, v___x_4900_);
v___x_4915_ = l_Lean_Syntax_isNone(v___x_4914_);
if (v___x_4915_ == 0)
{
uint8_t v___x_4916_; 
lean_inc(v___x_4914_);
v___x_4916_ = l_Lean_Syntax_matchesNull(v___x_4914_, v___x_4900_);
if (v___x_4916_ == 0)
{
lean_object* v___x_4917_; 
lean_dec(v___x_4914_);
lean_dec(v___x_4910_);
lean_dec(v___x_4906_);
lean_dec(v_mutTk_x3f_4902_);
lean_dec(v_tk_4815_);
v___x_4917_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4904_);
return v___x_4917_;
}
else
{
lean_object* v___x_4918_; lean_object* v___x_4919_; uint8_t v___x_4920_; 
v___x_4918_ = l_Lean_Syntax_getArg(v___x_4914_, v___x_4814_);
lean_dec(v___x_4914_);
v___x_4919_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_4918_);
v___x_4920_ = l_Lean_Syntax_isOfKind(v___x_4918_, v___x_4919_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4921_; 
lean_dec(v___x_4918_);
lean_dec(v___x_4910_);
lean_dec(v___x_4906_);
lean_dec(v_mutTk_x3f_4902_);
lean_dec(v_tk_4815_);
v___x_4921_ = l_Lean_Macro_throwUnsupported___redArg(v___y_4904_);
return v___x_4921_;
}
else
{
lean_object* v_t_x3f_4922_; lean_object* v___x_4923_; 
v_t_x3f_4922_ = l_Lean_Syntax_getArg(v___x_4918_, v___x_4900_);
lean_dec(v___x_4918_);
v___x_4923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4923_, 0, v_t_x3f_4922_);
v___y_4860_ = v___x_4906_;
v___y_4861_ = v___x_4907_;
v___y_4862_ = v_mutTk_x3f_4902_;
v___y_4863_ = v___x_4910_;
v_t_x3f_4864_ = v___x_4923_;
v___y_4865_ = v___y_4903_;
v___y_4866_ = v___y_4904_;
goto v___jp_4859_;
}
}
}
else
{
lean_object* v___x_4924_; 
lean_dec(v___x_4914_);
v___x_4924_ = lean_box(0);
v___y_4860_ = v___x_4906_;
v___y_4861_ = v___x_4907_;
v___y_4862_ = v_mutTk_x3f_4902_;
v___y_4863_ = v___x_4910_;
v_t_x3f_4864_ = v___x_4924_;
v___y_4865_ = v___y_4903_;
v___y_4866_ = v___y_4904_;
goto v___jp_4859_;
}
}
}
}
}
v___jp_4772_:
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
lean_inc_ref_n(v___y_4783_, 3);
v___x_4785_ = l_Array_append___redArg(v___y_4783_, v___y_4784_);
lean_dec_ref(v___y_4784_);
lean_inc_n(v___y_4777_, 5);
lean_inc_n(v___y_4778_, 5);
v___x_4786_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4786_, 0, v___y_4778_);
lean_ctor_set(v___x_4786_, 1, v___y_4777_);
lean_ctor_set(v___x_4786_, 2, v___x_4785_);
v___x_4787_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
v___x_4788_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
v___x_4789_ = l_Lean_Syntax_node1(v___y_4778_, v___x_4788_, v___y_4782_);
v___x_4790_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4790_, 0, v___y_4778_);
lean_ctor_set(v___x_4790_, 1, v___y_4777_);
lean_ctor_set(v___x_4790_, 2, v___y_4783_);
v___x_4791_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_4792_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4792_, 0, v___y_4778_);
lean_ctor_set(v___x_4792_, 1, v___x_4791_);
lean_inc_ref(v___x_4790_);
v___x_4793_ = l_Lean_Syntax_node5(v___y_4778_, v___x_4787_, v___x_4789_, v___x_4790_, v___x_4790_, v___x_4792_, v___y_4781_);
lean_inc(v___y_4775_);
v___x_4794_ = l_Lean_Syntax_node3(v___y_4778_, v___y_4775_, v___y_4780_, v___x_4786_, v___x_4793_);
v___x_4795_ = l_Lean_SourceInfo_fromRef(v___y_4779_, v___y_4774_);
v___x_4796_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_4797_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
lean_inc_n(v___x_4795_, 8);
v___x_4798_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4795_);
lean_ctor_set(v___x_4798_, 1, v___x_4797_);
v___x_4799_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v___x_4800_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_4801_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_4802_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4795_);
lean_ctor_set(v___x_4802_, 1, v___x_4801_);
v___x_4803_ = l_Lean_Syntax_node1(v___x_4795_, v___y_4777_, v___x_4802_);
v___x_4804_ = l_Lean_Syntax_node2(v___x_4795_, v___x_4800_, v___y_4776_, v___x_4803_);
v___x_4805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4805_, 0, v___x_4795_);
lean_ctor_set(v___x_4805_, 1, v___y_4777_);
lean_ctor_set(v___x_4805_, 2, v___y_4783_);
v___x_4806_ = l_Lean_Syntax_node2(v___x_4795_, v___x_4800_, v___x_4794_, v___x_4805_);
v___x_4807_ = l_Lean_Syntax_node2(v___x_4795_, v___y_4777_, v___x_4804_, v___x_4806_);
v___x_4808_ = l_Lean_Syntax_node1(v___x_4795_, v___x_4799_, v___x_4807_);
v___x_4809_ = l_Lean_Syntax_node2(v___x_4795_, v___x_4796_, v___x_4798_, v___x_4808_);
v___x_4810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4809_);
lean_ctor_set(v___x_4810_, 1, v___y_4773_);
return v___x_4810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoErasedArrow___boxed(lean_object* v_stx_4932_, lean_object* v_a_4933_, lean_object* v_a_4934_){
_start:
{
lean_object* v_res_4935_; 
v_res_4935_ = l_Lean_Elab_Do_expandDoErasedArrow(v_stx_4932_, v_a_4933_, v_a_4934_);
lean_dec_ref(v_a_4933_);
return v_res_4935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1(){
_start:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; 
v___x_4943_ = l_Lean_Elab_macroAttribute;
v___x_4944_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__8));
v___x_4945_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___closed__1));
v___x_4946_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_expandDoErasedArrow___boxed), 3, 0);
v___x_4947_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4943_, v___x_4944_, v___x_4945_, v___x_4946_);
return v___x_4947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1___boxed(lean_object* v_a_4948_){
_start:
{
lean_object* v_res_4949_; 
v_res_4949_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
return v_res_4949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object* v_stx_4956_, lean_object* v_dec_4957_, lean_object* v_a_4958_, lean_object* v_a_4959_, lean_object* v_a_4960_, lean_object* v_a_4961_, lean_object* v_a_4962_, lean_object* v_a_4963_, lean_object* v_a_4964_){
_start:
{
lean_object* v___x_4966_; uint8_t v___x_4967_; 
v___x_4966_ = ((lean_object*)(l_Lean_Elab_Do_elabDoHave___closed__1));
lean_inc(v_stx_4956_);
v___x_4967_ = l_Lean_Syntax_isOfKind(v_stx_4956_, v___x_4966_);
if (v___x_4967_ == 0)
{
lean_object* v___x_4968_; 
lean_dec_ref(v_dec_4957_);
lean_dec(v_stx_4956_);
v___x_4968_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4968_;
}
else
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; uint8_t v___x_4972_; 
v___x_4969_ = lean_unsigned_to_nat(1u);
v___x_4970_ = l_Lean_Syntax_getArg(v_stx_4956_, v___x_4969_);
v___x_4971_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v___x_4970_);
v___x_4972_ = l_Lean_Syntax_isOfKind(v___x_4970_, v___x_4971_);
if (v___x_4972_ == 0)
{
lean_object* v___x_4973_; 
lean_dec(v___x_4970_);
lean_dec_ref(v_dec_4957_);
lean_dec(v_stx_4956_);
v___x_4973_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4973_;
}
else
{
lean_object* v___x_4974_; lean_object* v_decl_4975_; lean_object* v___x_4976_; uint8_t v___x_4977_; 
v___x_4974_ = lean_unsigned_to_nat(2u);
v_decl_4975_ = l_Lean_Syntax_getArg(v_stx_4956_, v___x_4974_);
v___x_4976_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
lean_inc(v_decl_4975_);
v___x_4977_ = l_Lean_Syntax_isOfKind(v_decl_4975_, v___x_4976_);
if (v___x_4977_ == 0)
{
lean_object* v___x_4978_; 
lean_dec(v_decl_4975_);
lean_dec(v___x_4970_);
lean_dec_ref(v_dec_4957_);
lean_dec(v_stx_4956_);
v___x_4978_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_4978_;
}
else
{
lean_object* v___x_4979_; lean_object* v_tk_4980_; uint8_t v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; 
v___x_4979_ = lean_unsigned_to_nat(0u);
v_tk_4980_ = l_Lean_Syntax_getArg(v_stx_4956_, v___x_4979_);
lean_dec(v_stx_4956_);
v___x_4981_ = 0;
v___x_4982_ = lean_box(0);
v___x_4983_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4983_, 0, v___x_4982_);
lean_ctor_set_uint8(v___x_4983_, sizeof(void*)*1, v___x_4977_);
lean_ctor_set_uint8(v___x_4983_, sizeof(void*)*1 + 1, v___x_4981_);
lean_ctor_set_uint8(v___x_4983_, sizeof(void*)*1 + 2, v___x_4981_);
lean_ctor_set_uint8(v___x_4983_, sizeof(void*)*1 + 3, v___x_4981_);
lean_ctor_set_uint8(v___x_4983_, sizeof(void*)*1 + 4, v___x_4981_);
v___x_4984_ = l_Lean_Elab_Term_mkLetConfig(v___x_4970_, v___x_4983_, v_a_4959_, v_a_4960_, v_a_4961_, v_a_4962_, v_a_4963_, v_a_4964_);
if (lean_obj_tag(v___x_4984_) == 0)
{
lean_object* v_a_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; 
v_a_4985_ = lean_ctor_get(v___x_4984_, 0);
lean_inc(v_a_4985_);
lean_dec_ref_known(v___x_4984_, 1);
v___x_4986_ = lean_box(1);
v___x_4987_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4985_, v___x_4986_, v_decl_4975_, v_tk_4980_, v_dec_4957_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_, v_a_4962_, v_a_4963_, v_a_4964_);
return v___x_4987_;
}
else
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4995_; 
lean_dec(v_tk_4980_);
lean_dec(v_decl_4975_);
lean_dec_ref(v_dec_4957_);
v_a_4988_ = lean_ctor_get(v___x_4984_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4984_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4990_ = v___x_4984_;
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4984_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
lean_object* v___x_4993_; 
if (v_isShared_4991_ == 0)
{
v___x_4993_ = v___x_4990_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v_a_4988_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
return v___x_4993_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object* v_stx_4996_, lean_object* v_dec_4997_, lean_object* v_a_4998_, lean_object* v_a_4999_, lean_object* v_a_5000_, lean_object* v_a_5001_, lean_object* v_a_5002_, lean_object* v_a_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_){
_start:
{
lean_object* v_res_5006_; 
v_res_5006_ = l_Lean_Elab_Do_elabDoHave(v_stx_4996_, v_dec_4997_, v_a_4998_, v_a_4999_, v_a_5000_, v_a_5001_, v_a_5002_, v_a_5003_, v_a_5004_);
lean_dec(v_a_5004_);
lean_dec_ref(v_a_5003_);
lean_dec(v_a_5002_);
lean_dec_ref(v_a_5001_);
lean_dec(v_a_5000_);
lean_dec_ref(v_a_4999_);
lean_dec_ref(v_a_4998_);
return v_res_5006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1(){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; 
v___x_5014_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5015_ = ((lean_object*)(l_Lean_Elab_Do_elabDoHave___closed__1));
v___x_5016_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1));
v___x_5017_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoHave___boxed), 10, 0);
v___x_5018_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5014_, v___x_5015_, v___x_5016_, v___x_5017_);
return v___x_5018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object* v_a_5019_){
_start:
{
lean_object* v_res_5020_; 
v_res_5020_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
return v_res_5020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object* v___x_5023_, lean_object* v___x_5024_, lean_object* v___x_5025_, lean_object* v___x_5026_, lean_object* v_decls_5027_, lean_object* v_a_5028_, uint8_t v___x_5029_, lean_object* v_body_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_){
_start:
{
lean_object* v_ref_5039_; uint8_t v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; 
v_ref_5039_ = lean_ctor_get(v___y_5036_, 2);
v___x_5040_ = 0;
v___x_5041_ = l_Lean_SourceInfo_fromRef(v_ref_5039_, v___x_5040_);
v___x_5042_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0));
v___x_5043_ = l_Lean_Name_mkStr4(v___x_5023_, v___x_5024_, v___x_5025_, v___x_5042_);
v___x_5044_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_5041_, 4);
v___x_5045_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5045_, 0, v___x_5041_);
lean_ctor_set(v___x_5045_, 1, v___x_5044_);
v___x_5046_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1));
v___x_5047_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5047_, 0, v___x_5041_);
lean_ctor_set(v___x_5047_, 1, v___x_5046_);
v___x_5048_ = l_Lean_Syntax_node2(v___x_5041_, v___x_5026_, v___x_5045_, v___x_5047_);
v___x_5049_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_5050_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5050_, 0, v___x_5041_);
lean_ctor_set(v___x_5050_, 1, v___x_5049_);
v___x_5051_ = l_Lean_Syntax_node4(v___x_5041_, v___x_5043_, v___x_5048_, v_decls_5027_, v___x_5050_, v_body_5030_);
v___x_5052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5052_, 0, v_a_5028_);
v___x_5053_ = l_Lean_Elab_Term_elabTerm(v___x_5051_, v___x_5052_, v___x_5029_, v___x_5029_, v___y_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_);
return v___x_5053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object* v___x_5054_, lean_object* v___x_5055_, lean_object* v___x_5056_, lean_object* v___x_5057_, lean_object* v_decls_5058_, lean_object* v_a_5059_, lean_object* v___x_5060_, lean_object* v_body_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_){
_start:
{
uint8_t v___x_4496__boxed_5070_; lean_object* v_res_5071_; 
v___x_4496__boxed_5070_ = lean_unbox(v___x_5060_);
v_res_5071_ = l_Lean_Elab_Do_elabDoLetRec___lam__0(v___x_5054_, v___x_5055_, v___x_5056_, v___x_5057_, v_decls_5058_, v_a_5059_, v___x_4496__boxed_5070_, v_body_5061_, v___y_5062_, v___y_5063_, v___y_5064_, v___y_5065_, v___y_5066_, v___y_5067_, v___y_5068_);
lean_dec(v___y_5068_);
lean_dec_ref(v___y_5067_);
lean_dec(v___y_5066_);
lean_dec_ref(v___y_5065_);
lean_dec(v___y_5064_);
lean_dec_ref(v___y_5063_);
lean_dec_ref(v___y_5062_);
return v_res_5071_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object* v_a_5072_, lean_object* v_a_5073_){
_start:
{
if (lean_obj_tag(v_a_5072_) == 0)
{
lean_object* v___x_5074_; 
v___x_5074_ = l_List_reverse___redArg(v_a_5073_);
return v___x_5074_;
}
else
{
lean_object* v_head_5075_; lean_object* v_tail_5076_; lean_object* v___x_5078_; uint8_t v_isShared_5079_; uint8_t v_isSharedCheck_5085_; 
v_head_5075_ = lean_ctor_get(v_a_5072_, 0);
v_tail_5076_ = lean_ctor_get(v_a_5072_, 1);
v_isSharedCheck_5085_ = !lean_is_exclusive(v_a_5072_);
if (v_isSharedCheck_5085_ == 0)
{
v___x_5078_ = v_a_5072_;
v_isShared_5079_ = v_isSharedCheck_5085_;
goto v_resetjp_5077_;
}
else
{
lean_inc(v_tail_5076_);
lean_inc(v_head_5075_);
lean_dec(v_a_5072_);
v___x_5078_ = lean_box(0);
v_isShared_5079_ = v_isSharedCheck_5085_;
goto v_resetjp_5077_;
}
v_resetjp_5077_:
{
lean_object* v___x_5080_; lean_object* v___x_5082_; 
v___x_5080_ = l_Lean_MessageData_ofSyntax(v_head_5075_);
if (v_isShared_5079_ == 0)
{
lean_ctor_set(v___x_5078_, 1, v_a_5073_);
lean_ctor_set(v___x_5078_, 0, v___x_5080_);
v___x_5082_ = v___x_5078_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5084_; 
v_reuseFailAlloc_5084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5084_, 0, v___x_5080_);
lean_ctor_set(v_reuseFailAlloc_5084_, 1, v_a_5073_);
v___x_5082_ = v_reuseFailAlloc_5084_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
v_a_5072_ = v_tail_5076_;
v_a_5073_ = v___x_5082_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__7(void){
_start:
{
lean_object* v___x_5102_; lean_object* v___x_5103_; 
v___x_5102_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__6));
v___x_5103_ = l_Lean_stringToMessageData(v___x_5102_);
return v___x_5103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object* v_stx_5104_, lean_object* v_dec_5105_, lean_object* v_a_5106_, lean_object* v_a_5107_, lean_object* v_a_5108_, lean_object* v_a_5109_, lean_object* v_a_5110_, lean_object* v_a_5111_, lean_object* v_a_5112_){
_start:
{
lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; uint8_t v___x_5118_; 
v___x_5114_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_5115_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_5116_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_5117_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__1));
lean_inc(v_stx_5104_);
v___x_5118_ = l_Lean_Syntax_isOfKind(v_stx_5104_, v___x_5117_);
if (v___x_5118_ == 0)
{
lean_object* v___x_5119_; 
lean_dec_ref(v_dec_5105_);
lean_dec(v_stx_5104_);
v___x_5119_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5119_;
}
else
{
lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; uint8_t v___x_5123_; 
v___x_5120_ = lean_unsigned_to_nat(0u);
v___x_5121_ = l_Lean_Syntax_getArg(v_stx_5104_, v___x_5120_);
v___x_5122_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__3));
lean_inc(v___x_5121_);
v___x_5123_ = l_Lean_Syntax_isOfKind(v___x_5121_, v___x_5122_);
if (v___x_5123_ == 0)
{
lean_object* v___x_5124_; 
lean_dec(v___x_5121_);
lean_dec_ref(v_dec_5105_);
lean_dec(v_stx_5104_);
v___x_5124_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5124_;
}
else
{
lean_object* v___x_5125_; lean_object* v_decls_5126_; lean_object* v___x_5127_; uint8_t v___x_5128_; 
v___x_5125_ = lean_unsigned_to_nat(1u);
v_decls_5126_ = l_Lean_Syntax_getArg(v_stx_5104_, v___x_5125_);
lean_dec(v_stx_5104_);
v___x_5127_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__5));
lean_inc(v_decls_5126_);
v___x_5128_ = l_Lean_Syntax_isOfKind(v_decls_5126_, v___x_5127_);
if (v___x_5128_ == 0)
{
lean_object* v___x_5129_; 
lean_dec(v_decls_5126_);
lean_dec(v___x_5121_);
lean_dec_ref(v_dec_5105_);
v___x_5129_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5129_;
}
else
{
lean_object* v_tk_5130_; lean_object* v___x_5131_; 
v_tk_5130_ = l_Lean_Syntax_getArg(v___x_5121_, v___x_5120_);
lean_dec(v___x_5121_);
v___x_5131_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_5105_, v_tk_5130_, v_a_5106_, v_a_5107_, v_a_5108_, v_a_5109_, v_a_5110_, v_a_5111_, v_a_5112_);
lean_dec(v_tk_5130_);
if (lean_obj_tag(v___x_5131_) == 0)
{
lean_object* v_a_5132_; lean_object* v___x_5133_; 
v_a_5132_ = lean_ctor_get(v___x_5131_, 0);
lean_inc(v_a_5132_);
lean_dec_ref_known(v___x_5131_, 1);
lean_inc(v_decls_5126_);
v___x_5133_ = l_Lean_Elab_Do_getLetRecDeclsVars(v_decls_5126_, v_a_5107_, v_a_5108_, v_a_5109_, v_a_5110_, v_a_5111_, v_a_5112_);
if (lean_obj_tag(v___x_5133_) == 0)
{
lean_object* v_a_5134_; lean_object* v_doBlockResultType_5135_; lean_object* v___x_5136_; 
v_a_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5134_);
lean_dec_ref_known(v___x_5133_, 1);
v_doBlockResultType_5135_ = lean_ctor_get(v_a_5106_, 3);
lean_inc_ref(v_doBlockResultType_5135_);
v___x_5136_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_5135_, v_a_5106_, v_a_5107_, v_a_5108_, v_a_5109_, v_a_5110_, v_a_5111_, v_a_5112_);
if (lean_obj_tag(v___x_5136_) == 0)
{
lean_object* v_a_5137_; lean_object* v___x_5138_; lean_object* v___f_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; 
v_a_5137_ = lean_ctor_get(v___x_5136_, 0);
lean_inc(v_a_5137_);
lean_dec_ref_known(v___x_5136_, 1);
v___x_5138_ = lean_box(v___x_5128_);
v___f_5139_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed), 16, 7);
lean_closure_set(v___f_5139_, 0, v___x_5114_);
lean_closure_set(v___f_5139_, 1, v___x_5115_);
lean_closure_set(v___f_5139_, 2, v___x_5116_);
lean_closure_set(v___f_5139_, 3, v___x_5122_);
lean_closure_set(v___f_5139_, 4, v_decls_5126_);
lean_closure_set(v___f_5139_, 5, v_a_5137_);
lean_closure_set(v___f_5139_, 6, v___x_5138_);
v___x_5140_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__7, &l_Lean_Elab_Do_elabDoLetRec___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__7);
v___x_5141_ = lean_array_to_list(v_a_5134_);
v___x_5142_ = lean_box(0);
v___x_5143_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(v___x_5141_, v___x_5142_);
v___x_5144_ = l_Lean_MessageData_ofList(v___x_5143_);
v___x_5145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5140_);
lean_ctor_set(v___x_5145_, 1, v___x_5144_);
v___x_5146_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_5146_, 0, v_a_5132_);
v___x_5147_ = lean_box(0);
v___x_5148_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_5145_, v___x_5146_, v___f_5139_, v___x_5147_, v_a_5106_, v_a_5107_, v_a_5108_, v_a_5109_, v_a_5110_, v_a_5111_, v_a_5112_);
return v___x_5148_;
}
else
{
lean_dec(v_a_5134_);
lean_dec(v_a_5132_);
lean_dec(v_decls_5126_);
return v___x_5136_;
}
}
else
{
lean_object* v_a_5149_; lean_object* v___x_5151_; uint8_t v_isShared_5152_; uint8_t v_isSharedCheck_5156_; 
lean_dec(v_a_5132_);
lean_dec(v_decls_5126_);
v_a_5149_ = lean_ctor_get(v___x_5133_, 0);
v_isSharedCheck_5156_ = !lean_is_exclusive(v___x_5133_);
if (v_isSharedCheck_5156_ == 0)
{
v___x_5151_ = v___x_5133_;
v_isShared_5152_ = v_isSharedCheck_5156_;
goto v_resetjp_5150_;
}
else
{
lean_inc(v_a_5149_);
lean_dec(v___x_5133_);
v___x_5151_ = lean_box(0);
v_isShared_5152_ = v_isSharedCheck_5156_;
goto v_resetjp_5150_;
}
v_resetjp_5150_:
{
lean_object* v___x_5154_; 
if (v_isShared_5152_ == 0)
{
v___x_5154_ = v___x_5151_;
goto v_reusejp_5153_;
}
else
{
lean_object* v_reuseFailAlloc_5155_; 
v_reuseFailAlloc_5155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5155_, 0, v_a_5149_);
v___x_5154_ = v_reuseFailAlloc_5155_;
goto v_reusejp_5153_;
}
v_reusejp_5153_:
{
return v___x_5154_;
}
}
}
}
else
{
lean_object* v_a_5157_; lean_object* v___x_5159_; uint8_t v_isShared_5160_; uint8_t v_isSharedCheck_5164_; 
lean_dec(v_decls_5126_);
v_a_5157_ = lean_ctor_get(v___x_5131_, 0);
v_isSharedCheck_5164_ = !lean_is_exclusive(v___x_5131_);
if (v_isSharedCheck_5164_ == 0)
{
v___x_5159_ = v___x_5131_;
v_isShared_5160_ = v_isSharedCheck_5164_;
goto v_resetjp_5158_;
}
else
{
lean_inc(v_a_5157_);
lean_dec(v___x_5131_);
v___x_5159_ = lean_box(0);
v_isShared_5160_ = v_isSharedCheck_5164_;
goto v_resetjp_5158_;
}
v_resetjp_5158_:
{
lean_object* v___x_5162_; 
if (v_isShared_5160_ == 0)
{
v___x_5162_ = v___x_5159_;
goto v_reusejp_5161_;
}
else
{
lean_object* v_reuseFailAlloc_5163_; 
v_reuseFailAlloc_5163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5163_, 0, v_a_5157_);
v___x_5162_ = v_reuseFailAlloc_5163_;
goto v_reusejp_5161_;
}
v_reusejp_5161_:
{
return v___x_5162_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object* v_stx_5165_, lean_object* v_dec_5166_, lean_object* v_a_5167_, lean_object* v_a_5168_, lean_object* v_a_5169_, lean_object* v_a_5170_, lean_object* v_a_5171_, lean_object* v_a_5172_, lean_object* v_a_5173_, lean_object* v_a_5174_){
_start:
{
lean_object* v_res_5175_; 
v_res_5175_ = l_Lean_Elab_Do_elabDoLetRec(v_stx_5165_, v_dec_5166_, v_a_5167_, v_a_5168_, v_a_5169_, v_a_5170_, v_a_5171_, v_a_5172_, v_a_5173_);
lean_dec(v_a_5173_);
lean_dec_ref(v_a_5172_);
lean_dec(v_a_5171_);
lean_dec_ref(v_a_5170_);
lean_dec(v_a_5169_);
lean_dec_ref(v_a_5168_);
lean_dec_ref(v_a_5167_);
return v_res_5175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1(){
_start:
{
lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; 
v___x_5183_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5184_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetRec___closed__1));
v___x_5185_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1));
v___x_5186_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___boxed), 10, 0);
v___x_5187_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5183_, v___x_5184_, v___x_5185_, v___x_5186_);
return v___x_5187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object* v_a_5188_){
_start:
{
lean_object* v_res_5189_; 
v_res_5189_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
return v_res_5189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object* v_stx_5196_, lean_object* v_dec_5197_, lean_object* v_a_5198_, lean_object* v_a_5199_, lean_object* v_a_5200_, lean_object* v_a_5201_, lean_object* v_a_5202_, lean_object* v_a_5203_, lean_object* v_a_5204_){
_start:
{
lean_object* v___y_5207_; lean_object* v___y_5208_; lean_object* v___y_5209_; lean_object* v___y_5210_; lean_object* v___y_5211_; lean_object* v___y_5212_; lean_object* v___y_5213_; lean_object* v___y_5214_; lean_object* v___y_5215_; uint8_t v___y_5216_; lean_object* v___y_5217_; lean_object* v___y_5218_; lean_object* v___y_5219_; lean_object* v___y_5220_; lean_object* v___y_5221_; lean_object* v___y_5222_; lean_object* v___y_5223_; lean_object* v___x_5239_; uint8_t v___x_5240_; 
v___x_5239_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
lean_inc(v_stx_5196_);
v___x_5240_ = l_Lean_Syntax_isOfKind(v_stx_5196_, v___x_5239_);
if (v___x_5240_ == 0)
{
lean_object* v___x_5241_; 
lean_dec_ref(v_dec_5197_);
lean_dec(v_stx_5196_);
v___x_5241_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5241_;
}
else
{
lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; uint8_t v___x_5245_; 
v___x_5242_ = lean_unsigned_to_nat(0u);
v___x_5243_ = l_Lean_Syntax_getArg(v_stx_5196_, v___x_5242_);
lean_dec(v_stx_5196_);
v___x_5244_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
lean_inc(v___x_5243_);
v___x_5245_ = l_Lean_Syntax_isOfKind(v___x_5243_, v___x_5244_);
if (v___x_5245_ == 0)
{
lean_object* v___x_5246_; uint8_t v___x_5247_; 
v___x_5246_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
lean_inc(v___x_5243_);
v___x_5247_ = l_Lean_Syntax_isOfKind(v___x_5243_, v___x_5246_);
if (v___x_5247_ == 0)
{
lean_object* v___x_5248_; 
lean_dec(v___x_5243_);
lean_dec_ref(v_dec_5197_);
v___x_5248_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5248_;
}
else
{
lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v_decl_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; 
v___x_5249_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5250_ = lean_unsigned_to_nat(1u);
v___x_5251_ = lean_mk_empty_array_with_capacity(v___x_5250_);
v___x_5252_ = lean_array_push(v___x_5251_, v___x_5243_);
v___x_5253_ = lean_box(2);
v_decl_5254_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_decl_5254_, 0, v___x_5253_);
lean_ctor_set(v_decl_5254_, 1, v___x_5249_);
lean_ctor_set(v_decl_5254_, 2, v___x_5252_);
v___x_5255_ = lean_box(0);
v___x_5256_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5256_, 0, v___x_5255_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*1, v___x_5245_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*1 + 1, v___x_5245_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*1 + 2, v___x_5245_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*1 + 3, v___x_5245_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*1 + 4, v___x_5245_);
v___x_5257_ = lean_box(2);
lean_inc_ref(v_decl_5254_);
v___x_5258_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5256_, v___x_5257_, v_decl_5254_, v_decl_5254_, v_dec_5197_, v_a_5198_, v_a_5199_, v_a_5200_, v_a_5201_, v_a_5202_, v_a_5203_, v_a_5204_);
return v___x_5258_;
}
}
else
{
lean_object* v___x_5259_; lean_object* v___x_5260_; uint8_t v___x_5261_; 
v___x_5259_ = l_Lean_Syntax_getArg(v___x_5243_, v___x_5242_);
v___x_5260_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc(v___x_5259_);
v___x_5261_ = l_Lean_Syntax_isOfKind(v___x_5259_, v___x_5260_);
if (v___x_5261_ == 0)
{
lean_object* v___x_5262_; 
lean_dec(v___x_5259_);
lean_dec(v___x_5243_);
lean_dec_ref(v_dec_5197_);
v___x_5262_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5262_;
}
else
{
lean_object* v___x_5263_; lean_object* v_xType_x3f_5265_; lean_object* v___y_5266_; lean_object* v___y_5267_; lean_object* v___y_5268_; lean_object* v___y_5269_; lean_object* v___y_5270_; lean_object* v___y_5271_; lean_object* v___y_5272_; lean_object* v___x_5292_; uint8_t v___x_5293_; 
v___x_5263_ = l_Lean_Syntax_getArg(v___x_5259_, v___x_5242_);
lean_dec(v___x_5259_);
v___x_5292_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_5263_);
v___x_5293_ = l_Lean_Syntax_isOfKind(v___x_5263_, v___x_5292_);
if (v___x_5293_ == 0)
{
lean_object* v___x_5294_; 
lean_dec(v___x_5263_);
lean_dec(v___x_5243_);
lean_dec_ref(v_dec_5197_);
v___x_5294_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5294_;
}
else
{
lean_object* v___x_5295_; lean_object* v___x_5296_; uint8_t v___x_5297_; 
v___x_5295_ = lean_unsigned_to_nat(1u);
v___x_5296_ = l_Lean_Syntax_getArg(v___x_5243_, v___x_5295_);
v___x_5297_ = l_Lean_Syntax_matchesNull(v___x_5296_, v___x_5242_);
if (v___x_5297_ == 0)
{
lean_object* v___x_5298_; 
lean_dec(v___x_5263_);
lean_dec(v___x_5243_);
lean_dec_ref(v_dec_5197_);
v___x_5298_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5298_;
}
else
{
lean_object* v___x_5299_; lean_object* v___x_5300_; uint8_t v___x_5301_; 
v___x_5299_ = lean_unsigned_to_nat(2u);
v___x_5300_ = l_Lean_Syntax_getArg(v___x_5243_, v___x_5299_);
v___x_5301_ = l_Lean_Syntax_isNone(v___x_5300_);
if (v___x_5301_ == 0)
{
uint8_t v___x_5302_; 
lean_inc(v___x_5300_);
v___x_5302_ = l_Lean_Syntax_matchesNull(v___x_5300_, v___x_5295_);
if (v___x_5302_ == 0)
{
lean_object* v___x_5303_; 
lean_dec(v___x_5300_);
lean_dec(v___x_5263_);
lean_dec(v___x_5243_);
lean_dec_ref(v_dec_5197_);
v___x_5303_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5303_;
}
else
{
lean_object* v___x_5304_; lean_object* v___x_5305_; uint8_t v___x_5306_; 
v___x_5304_ = l_Lean_Syntax_getArg(v___x_5300_, v___x_5242_);
lean_dec(v___x_5300_);
v___x_5305_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_5304_);
v___x_5306_ = l_Lean_Syntax_isOfKind(v___x_5304_, v___x_5305_);
if (v___x_5306_ == 0)
{
lean_object* v___x_5307_; 
lean_dec(v___x_5304_);
lean_dec(v___x_5263_);
lean_dec(v___x_5243_);
lean_dec_ref(v_dec_5197_);
v___x_5307_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5307_;
}
else
{
lean_object* v_xType_x3f_5308_; lean_object* v___x_5309_; 
v_xType_x3f_5308_ = l_Lean_Syntax_getArg(v___x_5304_, v___x_5295_);
lean_dec(v___x_5304_);
v___x_5309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5309_, 0, v_xType_x3f_5308_);
v_xType_x3f_5265_ = v___x_5309_;
v___y_5266_ = v_a_5198_;
v___y_5267_ = v_a_5199_;
v___y_5268_ = v_a_5200_;
v___y_5269_ = v_a_5201_;
v___y_5270_ = v_a_5202_;
v___y_5271_ = v_a_5203_;
v___y_5272_ = v_a_5204_;
goto v___jp_5264_;
}
}
}
else
{
lean_object* v___x_5310_; 
lean_dec(v___x_5300_);
v___x_5310_ = lean_box(0);
v_xType_x3f_5265_ = v___x_5310_;
v___y_5266_ = v_a_5198_;
v___y_5267_ = v_a_5199_;
v___y_5268_ = v_a_5200_;
v___y_5269_ = v_a_5201_;
v___y_5270_ = v_a_5202_;
v___y_5271_ = v_a_5203_;
v___y_5272_ = v_a_5204_;
goto v___jp_5264_;
}
}
}
v___jp_5264_:
{
lean_object* v_ref_5273_; lean_object* v___x_5274_; lean_object* v_tk_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; uint8_t v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; 
v_ref_5273_ = lean_ctor_get(v___y_5271_, 2);
v___x_5274_ = lean_unsigned_to_nat(3u);
v_tk_5275_ = l_Lean_Syntax_getArg(v___x_5243_, v___x_5274_);
v___x_5276_ = lean_unsigned_to_nat(4u);
v___x_5277_ = l_Lean_Syntax_getArg(v___x_5243_, v___x_5276_);
lean_dec(v___x_5243_);
v___x_5278_ = 0;
v___x_5279_ = l_Lean_SourceInfo_fromRef(v_ref_5273_, v___x_5278_);
v___x_5280_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
lean_inc_n(v___x_5279_, 2);
v___x_5281_ = l_Lean_Syntax_node1(v___x_5279_, v___x_5260_, v___x_5263_);
v___x_5282_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5283_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5284_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5284_, 0, v___x_5279_);
lean_ctor_set(v___x_5284_, 1, v___x_5282_);
lean_ctor_set(v___x_5284_, 2, v___x_5283_);
if (lean_obj_tag(v_xType_x3f_5265_) == 1)
{
lean_object* v_val_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; 
v_val_5285_ = lean_ctor_get(v_xType_x3f_5265_, 0);
lean_inc(v_val_5285_);
lean_dec_ref_known(v_xType_x3f_5265_, 1);
v___x_5286_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
v___x_5287_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
lean_inc_n(v___x_5279_, 2);
v___x_5288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5288_, 0, v___x_5279_);
lean_ctor_set(v___x_5288_, 1, v___x_5287_);
v___x_5289_ = l_Lean_Syntax_node2(v___x_5279_, v___x_5286_, v___x_5288_, v_val_5285_);
v___x_5290_ = l_Array_mkArray1___redArg(v___x_5289_);
v___y_5207_ = v___x_5280_;
v___y_5208_ = v_tk_5275_;
v___y_5209_ = v___x_5281_;
v___y_5210_ = v___x_5282_;
v___y_5211_ = v___x_5279_;
v___y_5212_ = v___y_5272_;
v___y_5213_ = v___x_5284_;
v___y_5214_ = v___x_5277_;
v___y_5215_ = v___y_5269_;
v___y_5216_ = v___x_5278_;
v___y_5217_ = v___y_5267_;
v___y_5218_ = v___y_5270_;
v___y_5219_ = v___y_5268_;
v___y_5220_ = v___y_5266_;
v___y_5221_ = v___y_5271_;
v___y_5222_ = v___x_5283_;
v___y_5223_ = v___x_5290_;
goto v___jp_5206_;
}
else
{
lean_object* v___x_5291_; 
lean_dec(v_xType_x3f_5265_);
v___x_5291_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__2));
v___y_5207_ = v___x_5280_;
v___y_5208_ = v_tk_5275_;
v___y_5209_ = v___x_5281_;
v___y_5210_ = v___x_5282_;
v___y_5211_ = v___x_5279_;
v___y_5212_ = v___y_5272_;
v___y_5213_ = v___x_5284_;
v___y_5214_ = v___x_5277_;
v___y_5215_ = v___y_5269_;
v___y_5216_ = v___x_5278_;
v___y_5217_ = v___y_5267_;
v___y_5218_ = v___y_5270_;
v___y_5219_ = v___y_5268_;
v___y_5220_ = v___y_5266_;
v___y_5221_ = v___y_5271_;
v___y_5222_ = v___x_5283_;
v___y_5223_ = v___x_5291_;
goto v___jp_5206_;
}
}
}
}
}
v___jp_5206_:
{
lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; 
lean_inc_ref(v___y_5222_);
v___x_5224_ = l_Array_append___redArg(v___y_5222_, v___y_5223_);
lean_dec_ref(v___y_5223_);
lean_inc(v___y_5210_);
lean_inc_n(v___y_5211_, 2);
v___x_5225_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5225_, 0, v___y_5211_);
lean_ctor_set(v___x_5225_, 1, v___y_5210_);
lean_ctor_set(v___x_5225_, 2, v___x_5224_);
v___x_5226_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5227_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5227_, 0, v___y_5211_);
lean_ctor_set(v___x_5227_, 1, v___x_5226_);
lean_inc(v___y_5207_);
v___x_5228_ = l_Lean_Syntax_node5(v___y_5211_, v___y_5207_, v___y_5209_, v___y_5213_, v___x_5225_, v___x_5227_, v___y_5214_);
v___x_5229_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5230_ = lean_unsigned_to_nat(1u);
v___x_5231_ = lean_mk_empty_array_with_capacity(v___x_5230_);
v___x_5232_ = lean_array_push(v___x_5231_, v___x_5228_);
v___x_5233_ = lean_box(2);
v___x_5234_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5234_, 0, v___x_5233_);
lean_ctor_set(v___x_5234_, 1, v___x_5229_);
lean_ctor_set(v___x_5234_, 2, v___x_5232_);
v___x_5235_ = lean_box(0);
v___x_5236_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5236_, 0, v___x_5235_);
lean_ctor_set_uint8(v___x_5236_, sizeof(void*)*1, v___y_5216_);
lean_ctor_set_uint8(v___x_5236_, sizeof(void*)*1 + 1, v___y_5216_);
lean_ctor_set_uint8(v___x_5236_, sizeof(void*)*1 + 2, v___y_5216_);
lean_ctor_set_uint8(v___x_5236_, sizeof(void*)*1 + 3, v___y_5216_);
lean_ctor_set_uint8(v___x_5236_, sizeof(void*)*1 + 4, v___y_5216_);
v___x_5237_ = lean_box(2);
v___x_5238_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5236_, v___x_5237_, v___x_5234_, v___y_5208_, v_dec_5197_, v___y_5220_, v___y_5217_, v___y_5219_, v___y_5215_, v___y_5218_, v___y_5221_, v___y_5212_);
return v___x_5238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object* v_stx_5311_, lean_object* v_dec_5312_, lean_object* v_a_5313_, lean_object* v_a_5314_, lean_object* v_a_5315_, lean_object* v_a_5316_, lean_object* v_a_5317_, lean_object* v_a_5318_, lean_object* v_a_5319_, lean_object* v_a_5320_){
_start:
{
lean_object* v_res_5321_; 
v_res_5321_ = l_Lean_Elab_Do_elabDoReassign(v_stx_5311_, v_dec_5312_, v_a_5313_, v_a_5314_, v_a_5315_, v_a_5316_, v_a_5317_, v_a_5318_, v_a_5319_);
lean_dec(v_a_5319_);
lean_dec_ref(v_a_5318_);
lean_dec(v_a_5317_);
lean_dec_ref(v_a_5316_);
lean_dec(v_a_5315_);
lean_dec_ref(v_a_5314_);
lean_dec_ref(v_a_5313_);
return v_res_5321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1(){
_start:
{
lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; 
v___x_5329_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5330_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_5331_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1));
v___x_5332_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassign___boxed), 10, 0);
v___x_5333_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5329_, v___x_5330_, v___x_5331_, v___x_5332_);
return v___x_5333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object* v_a_5334_){
_start:
{
lean_object* v_res_5335_; 
v_res_5335_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
return v_res_5335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object* v_____do__lift_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_){
_start:
{
uint8_t v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; 
v___x_5345_ = 0;
v___x_5346_ = l_Lean_SourceInfo_fromRef(v_____do__lift_5336_, v___x_5345_);
v___x_5347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5347_, 0, v___x_5346_);
return v___x_5347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object* v_____do__lift_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_){
_start:
{
lean_object* v_res_5357_; 
v_res_5357_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_____do__lift_5348_, v___y_5349_, v___y_5350_, v___y_5351_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_);
lean_dec(v___y_5355_);
lean_dec_ref(v___y_5354_);
lean_dec(v___y_5353_);
lean_dec_ref(v___y_5352_);
lean_dec(v___y_5351_);
lean_dec_ref(v___y_5350_);
lean_dec_ref(v___y_5349_);
lean_dec(v_____do__lift_5348_);
return v_res_5357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object* v_as_5358_, size_t v_sz_5359_, size_t v_i_5360_, lean_object* v_b_5361_, lean_object* v___y_5362_){
_start:
{
uint8_t v___x_5364_; 
v___x_5364_ = lean_usize_dec_lt(v_i_5360_, v_sz_5359_);
if (v___x_5364_ == 0)
{
lean_object* v___x_5365_; 
v___x_5365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5365_, 0, v_b_5361_);
return v___x_5365_;
}
else
{
lean_object* v_ref_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v_a_5369_; uint8_t v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; size_t v___x_5403_; size_t v___x_5404_; 
v_ref_5366_ = lean_ctor_get(v___y_5362_, 2);
v___x_5367_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
v___x_5368_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v_a_5369_ = lean_array_uget_borrowed(v_as_5358_, v_i_5360_);
v___x_5370_ = 0;
v___x_5371_ = l_Lean_SourceInfo_fromRef(v_ref_5366_, v___x_5370_);
v___x_5372_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5373_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5374_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_5375_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_5371_, 17);
v___x_5376_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5376_, 0, v___x_5371_);
lean_ctor_set(v___x_5376_, 1, v___x_5375_);
v___x_5377_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5378_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5378_, 0, v___x_5371_);
lean_ctor_set(v___x_5378_, 1, v___x_5377_);
v___x_5379_ = l_Lean_Syntax_node1(v___x_5371_, v___x_5372_, v___x_5378_);
v___x_5380_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5381_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5381_, 0, v___x_5371_);
lean_ctor_set(v___x_5381_, 1, v___x_5372_);
lean_ctor_set(v___x_5381_, 2, v___x_5380_);
lean_inc_ref_n(v___x_5381_, 3);
v___x_5382_ = l_Lean_Syntax_node1(v___x_5371_, v___x_5367_, v___x_5381_);
v___x_5383_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5384_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
v___x_5385_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc_n(v_a_5369_, 2);
v___x_5386_ = l_Lean_Syntax_node1(v___x_5371_, v___x_5385_, v_a_5369_);
v___x_5387_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5388_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5388_, 0, v___x_5371_);
lean_ctor_set(v___x_5388_, 1, v___x_5387_);
v___x_5389_ = l_Lean_Syntax_node5(v___x_5371_, v___x_5384_, v___x_5386_, v___x_5381_, v___x_5381_, v___x_5388_, v_a_5369_);
v___x_5390_ = l_Lean_Syntax_node1(v___x_5371_, v___x_5383_, v___x_5389_);
v___x_5391_ = l_Lean_Syntax_node4(v___x_5371_, v___x_5374_, v___x_5376_, v___x_5379_, v___x_5382_, v___x_5390_);
v___x_5392_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_5393_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5393_, 0, v___x_5371_);
lean_ctor_set(v___x_5393_, 1, v___x_5392_);
v___x_5394_ = l_Lean_Syntax_node1(v___x_5371_, v___x_5372_, v___x_5393_);
v___x_5395_ = l_Lean_Syntax_node2(v___x_5371_, v___x_5373_, v___x_5391_, v___x_5394_);
v___x_5396_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_5397_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
v___x_5398_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5398_, 0, v___x_5371_);
lean_ctor_set(v___x_5398_, 1, v___x_5397_);
v___x_5399_ = l_Lean_Syntax_node2(v___x_5371_, v___x_5396_, v___x_5398_, v_b_5361_);
v___x_5400_ = l_Lean_Syntax_node2(v___x_5371_, v___x_5373_, v___x_5399_, v___x_5381_);
v___x_5401_ = l_Lean_Syntax_node2(v___x_5371_, v___x_5372_, v___x_5395_, v___x_5400_);
v___x_5402_ = l_Lean_Syntax_node1(v___x_5371_, v___x_5368_, v___x_5401_);
v___x_5403_ = ((size_t)1ULL);
v___x_5404_ = lean_usize_add(v_i_5360_, v___x_5403_);
v_i_5360_ = v___x_5404_;
v_b_5361_ = v___x_5402_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object* v_as_5406_, lean_object* v_sz_5407_, lean_object* v_i_5408_, lean_object* v_b_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_){
_start:
{
size_t v_sz_boxed_5412_; size_t v_i_boxed_5413_; lean_object* v_res_5414_; 
v_sz_boxed_5412_ = lean_unbox_usize(v_sz_5407_);
lean_dec(v_sz_5407_);
v_i_boxed_5413_ = lean_unbox_usize(v_i_5408_);
lean_dec(v_i_5408_);
v_res_5414_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5406_, v_sz_boxed_5412_, v_i_boxed_5413_, v_b_5409_, v___y_5410_);
lean_dec_ref(v___y_5410_);
lean_dec_ref(v_as_5406_);
return v_res_5414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object* v_as_5415_, size_t v_sz_5416_, size_t v_i_5417_, lean_object* v_b_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_){
_start:
{
uint8_t v___x_5427_; 
v___x_5427_ = lean_usize_dec_lt(v_i_5417_, v_sz_5416_);
if (v___x_5427_ == 0)
{
lean_object* v___x_5428_; 
v___x_5428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5428_, 0, v_b_5418_);
return v___x_5428_;
}
else
{
lean_object* v_ref_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v_a_5432_; uint8_t v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; size_t v___x_5466_; size_t v___x_5467_; lean_object* v___x_5468_; 
v_ref_5429_ = lean_ctor_get(v___y_5424_, 2);
v___x_5430_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
v___x_5431_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v_a_5432_ = lean_array_uget_borrowed(v_as_5415_, v_i_5417_);
v___x_5433_ = 0;
v___x_5434_ = l_Lean_SourceInfo_fromRef(v_ref_5429_, v___x_5433_);
v___x_5435_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5436_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5437_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__1));
v___x_5438_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc_n(v___x_5434_, 17);
v___x_5439_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5439_, 0, v___x_5434_);
lean_ctor_set(v___x_5439_, 1, v___x_5438_);
v___x_5440_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5441_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5441_, 0, v___x_5434_);
lean_ctor_set(v___x_5441_, 1, v___x_5440_);
v___x_5442_ = l_Lean_Syntax_node1(v___x_5434_, v___x_5435_, v___x_5441_);
v___x_5443_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5444_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5444_, 0, v___x_5434_);
lean_ctor_set(v___x_5444_, 1, v___x_5435_);
lean_ctor_set(v___x_5444_, 2, v___x_5443_);
lean_inc_ref_n(v___x_5444_, 3);
v___x_5445_ = l_Lean_Syntax_node1(v___x_5434_, v___x_5430_, v___x_5444_);
v___x_5446_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4));
v___x_5447_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8));
v___x_5448_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc_n(v_a_5432_, 2);
v___x_5449_ = l_Lean_Syntax_node1(v___x_5434_, v___x_5448_, v_a_5432_);
v___x_5450_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5451_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5434_);
lean_ctor_set(v___x_5451_, 1, v___x_5450_);
v___x_5452_ = l_Lean_Syntax_node5(v___x_5434_, v___x_5447_, v___x_5449_, v___x_5444_, v___x_5444_, v___x_5451_, v_a_5432_);
v___x_5453_ = l_Lean_Syntax_node1(v___x_5434_, v___x_5446_, v___x_5452_);
v___x_5454_ = l_Lean_Syntax_node4(v___x_5434_, v___x_5437_, v___x_5439_, v___x_5442_, v___x_5445_, v___x_5453_);
v___x_5455_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__7));
v___x_5456_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5456_, 0, v___x_5434_);
lean_ctor_set(v___x_5456_, 1, v___x_5455_);
v___x_5457_ = l_Lean_Syntax_node1(v___x_5434_, v___x_5435_, v___x_5456_);
v___x_5458_ = l_Lean_Syntax_node2(v___x_5434_, v___x_5436_, v___x_5454_, v___x_5457_);
v___x_5459_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__1));
v___x_5460_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__2));
v___x_5461_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5461_, 0, v___x_5434_);
lean_ctor_set(v___x_5461_, 1, v___x_5460_);
v___x_5462_ = l_Lean_Syntax_node2(v___x_5434_, v___x_5459_, v___x_5461_, v_b_5418_);
v___x_5463_ = l_Lean_Syntax_node2(v___x_5434_, v___x_5436_, v___x_5462_, v___x_5444_);
v___x_5464_ = l_Lean_Syntax_node2(v___x_5434_, v___x_5435_, v___x_5458_, v___x_5463_);
v___x_5465_ = l_Lean_Syntax_node1(v___x_5434_, v___x_5431_, v___x_5464_);
v___x_5466_ = ((size_t)1ULL);
v___x_5467_ = lean_usize_add(v_i_5417_, v___x_5466_);
v___x_5468_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5415_, v_sz_5416_, v___x_5467_, v___x_5465_, v___y_5424_);
return v___x_5468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object* v_as_5469_, lean_object* v_sz_5470_, lean_object* v_i_5471_, lean_object* v_b_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_){
_start:
{
size_t v_sz_boxed_5481_; size_t v_i_boxed_5482_; lean_object* v_res_5483_; 
v_sz_boxed_5481_ = lean_unbox_usize(v_sz_5470_);
lean_dec(v_sz_5470_);
v_i_boxed_5482_ = lean_unbox_usize(v_i_5471_);
lean_dec(v_i_5471_);
v_res_5483_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v_as_5469_, v_sz_boxed_5481_, v_i_boxed_5482_, v_b_5472_, v___y_5473_, v___y_5474_, v___y_5475_, v___y_5476_, v___y_5477_, v___y_5478_, v___y_5479_);
lean_dec(v___y_5479_);
lean_dec_ref(v___y_5478_);
lean_dec(v___y_5477_);
lean_dec_ref(v___y_5476_);
lean_dec(v___y_5475_);
lean_dec_ref(v___y_5474_);
lean_dec_ref(v___y_5473_);
lean_dec_ref(v_as_5469_);
return v_res_5483_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__11(void){
_start:
{
lean_object* v___x_5523_; lean_object* v___x_5524_; 
v___x_5523_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__10));
v___x_5524_ = l_String_toRawSubstring_x27(v___x_5523_);
return v___x_5524_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__18(void){
_start:
{
lean_object* v___x_5538_; lean_object* v___x_5539_; 
v___x_5538_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__17));
v___x_5539_ = l_String_toRawSubstring_x27(v___x_5538_);
return v___x_5539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object* v_stx_5556_, lean_object* v_dec_5557_, lean_object* v_a_5558_, lean_object* v_a_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_, lean_object* v_a_5563_, lean_object* v_a_5564_){
_start:
{
lean_object* v___x_5566_; uint8_t v___x_5567_; 
v___x_5566_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__1));
lean_inc(v_stx_5556_);
v___x_5567_ = l_Lean_Syntax_isOfKind(v_stx_5556_, v___x_5566_);
if (v___x_5567_ == 0)
{
lean_object* v___x_5568_; 
lean_dec_ref(v_dec_5557_);
lean_dec(v_stx_5556_);
v___x_5568_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5568_;
}
else
{
lean_object* v___y_5570_; lean_object* v___y_5571_; lean_object* v___y_5572_; uint8_t v___y_5573_; lean_object* v___y_5574_; lean_object* v_body_5575_; lean_object* v___y_5576_; lean_object* v___y_5577_; lean_object* v___y_5578_; lean_object* v___y_5579_; lean_object* v___y_5580_; lean_object* v___y_5581_; lean_object* v___y_5582_; lean_object* v___y_5656_; lean_object* v___y_5657_; lean_object* v___y_5658_; lean_object* v___y_5659_; uint8_t v___y_5660_; lean_object* v___y_5661_; lean_object* v___y_5662_; lean_object* v___y_5663_; lean_object* v___y_5664_; lean_object* v___y_5665_; lean_object* v___y_5666_; lean_object* v___y_5667_; lean_object* v___y_5668_; lean_object* v___y_5669_; lean_object* v_a_5670_; lean_object* v___y_5684_; lean_object* v___y_5685_; lean_object* v___y_5686_; lean_object* v___y_5687_; lean_object* v___y_5688_; lean_object* v___y_5689_; lean_object* v___y_5690_; lean_object* v___y_5691_; lean_object* v___y_5692_; lean_object* v___y_5693_; lean_object* v___y_5694_; lean_object* v___y_5695_; lean_object* v___y_5696_; lean_object* v_mutTk_x3f_5769_; lean_object* v___y_5770_; lean_object* v___y_5771_; lean_object* v___y_5772_; lean_object* v___y_5773_; lean_object* v___y_5774_; lean_object* v___y_5775_; lean_object* v___y_5776_; lean_object* v___x_5800_; lean_object* v___x_5801_; uint8_t v___x_5802_; 
v___x_5800_ = lean_unsigned_to_nat(1u);
v___x_5801_ = l_Lean_Syntax_getArg(v_stx_5556_, v___x_5800_);
v___x_5802_ = l_Lean_Syntax_isNone(v___x_5801_);
if (v___x_5802_ == 0)
{
uint8_t v___x_5803_; 
lean_inc(v___x_5801_);
v___x_5803_ = l_Lean_Syntax_matchesNull(v___x_5801_, v___x_5800_);
if (v___x_5803_ == 0)
{
lean_object* v___x_5804_; 
lean_dec(v___x_5801_);
lean_dec_ref(v_dec_5557_);
lean_dec(v_stx_5556_);
v___x_5804_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5804_;
}
else
{
lean_object* v___x_5805_; lean_object* v_mutTk_x3f_5806_; lean_object* v___x_5807_; 
v___x_5805_ = lean_unsigned_to_nat(0u);
v_mutTk_x3f_5806_ = l_Lean_Syntax_getArg(v___x_5801_, v___x_5805_);
lean_dec(v___x_5801_);
v___x_5807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5807_, 0, v_mutTk_x3f_5806_);
v_mutTk_x3f_5769_ = v___x_5807_;
v___y_5770_ = v_a_5558_;
v___y_5771_ = v_a_5559_;
v___y_5772_ = v_a_5560_;
v___y_5773_ = v_a_5561_;
v___y_5774_ = v_a_5562_;
v___y_5775_ = v_a_5563_;
v___y_5776_ = v_a_5564_;
goto v___jp_5768_;
}
}
else
{
lean_object* v___x_5808_; 
lean_dec(v___x_5801_);
v___x_5808_ = lean_box(0);
v_mutTk_x3f_5769_ = v___x_5808_;
v___y_5770_ = v_a_5558_;
v___y_5771_ = v_a_5559_;
v___y_5772_ = v_a_5560_;
v___y_5773_ = v_a_5561_;
v___y_5774_ = v_a_5562_;
v___y_5775_ = v_a_5563_;
v___y_5776_ = v_a_5564_;
goto v___jp_5768_;
}
v___jp_5569_:
{
lean_object* v_eq_x3f_5583_; 
v_eq_x3f_5583_ = lean_ctor_get(v___y_5571_, 0);
lean_inc(v_eq_x3f_5583_);
lean_dec_ref(v___y_5571_);
if (lean_obj_tag(v_eq_x3f_5583_) == 1)
{
lean_object* v_val_5584_; lean_object* v_ref_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; lean_object* v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; 
v_val_5584_ = lean_ctor_get(v_eq_x3f_5583_, 0);
lean_inc(v_val_5584_);
lean_dec_ref_known(v_eq_x3f_5583_, 1);
v_ref_5585_ = lean_ctor_get(v___y_5581_, 2);
v___x_5586_ = l_Lean_SourceInfo_fromRef(v_ref_5585_, v___y_5573_);
v___x_5587_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__3));
v___x_5588_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
lean_inc_n(v___x_5586_, 19);
v___x_5589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5589_, 0, v___x_5586_);
lean_ctor_set(v___x_5589_, 1, v___x_5588_);
v___x_5590_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5591_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5592_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5592_, 0, v___x_5586_);
lean_ctor_set(v___x_5592_, 1, v___x_5590_);
lean_ctor_set(v___x_5592_, 2, v___x_5591_);
v___x_5593_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__4));
v___x_5594_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36));
v___x_5595_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5595_, 0, v___x_5586_);
lean_ctor_set(v___x_5595_, 1, v___x_5594_);
v___x_5596_ = l_Lean_Syntax_node2(v___x_5586_, v___x_5590_, v_val_5584_, v___x_5595_);
v___x_5597_ = l_Lean_Syntax_node2(v___x_5586_, v___x_5593_, v___x_5596_, v___y_5570_);
v___x_5598_ = l_Lean_Syntax_node1(v___x_5586_, v___x_5590_, v___x_5597_);
v___x_5599_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_5600_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5600_, 0, v___x_5586_);
lean_ctor_set(v___x_5600_, 1, v___x_5599_);
v___x_5601_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__5));
v___x_5602_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__6));
v___x_5603_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5604_, 0, v___x_5586_);
lean_ctor_set(v___x_5604_, 1, v___x_5603_);
v___x_5605_ = l_Lean_Syntax_node1(v___x_5586_, v___x_5590_, v___y_5572_);
v___x_5606_ = l_Lean_Syntax_node1(v___x_5586_, v___x_5590_, v___x_5605_);
v___x_5607_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_5608_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5608_, 0, v___x_5586_);
lean_ctor_set(v___x_5608_, 1, v___x_5607_);
lean_inc_ref(v___x_5608_);
lean_inc_ref(v___x_5604_);
v___x_5609_ = l_Lean_Syntax_node4(v___x_5586_, v___x_5602_, v___x_5604_, v___x_5606_, v___x_5608_, v_body_5575_);
v___x_5610_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
v___x_5611_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_5612_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5612_, 0, v___x_5586_);
lean_ctor_set(v___x_5612_, 1, v___x_5611_);
v___x_5613_ = l_Lean_Syntax_node1(v___x_5586_, v___x_5610_, v___x_5612_);
v___x_5614_ = l_Lean_Syntax_node1(v___x_5586_, v___x_5590_, v___x_5613_);
v___x_5615_ = l_Lean_Syntax_node1(v___x_5586_, v___x_5590_, v___x_5614_);
v___x_5616_ = l_Lean_Syntax_node4(v___x_5586_, v___x_5602_, v___x_5604_, v___x_5615_, v___x_5608_, v___y_5574_);
v___x_5617_ = l_Lean_Syntax_node2(v___x_5586_, v___x_5590_, v___x_5609_, v___x_5616_);
v___x_5618_ = l_Lean_Syntax_node1(v___x_5586_, v___x_5601_, v___x_5617_);
lean_inc_ref_n(v___x_5592_, 2);
v___x_5619_ = l_Lean_Syntax_node7(v___x_5586_, v___x_5587_, v___x_5589_, v___x_5592_, v___x_5592_, v___x_5592_, v___x_5598_, v___x_5600_, v___x_5618_);
v___x_5620_ = l_Lean_Elab_Do_elabDoElem(v___x_5619_, v_dec_5557_, v___x_5567_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_);
return v___x_5620_;
}
else
{
lean_object* v_ref_5621_; lean_object* v___x_5622_; lean_object* v_a_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; 
lean_dec(v_eq_x3f_5583_);
v_ref_5621_ = lean_ctor_get(v___y_5581_, 2);
v___x_5622_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5621_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_);
v_a_5623_ = lean_ctor_get(v___x_5622_, 0);
lean_inc_n(v_a_5623_, 18);
lean_dec_ref(v___x_5622_);
v___x_5624_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__3));
v___x_5625_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__10));
v___x_5626_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5626_, 0, v_a_5623_);
lean_ctor_set(v___x_5626_, 1, v___x_5625_);
v___x_5627_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5628_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5629_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5629_, 0, v_a_5623_);
lean_ctor_set(v___x_5629_, 1, v___x_5627_);
lean_ctor_set(v___x_5629_, 2, v___x_5628_);
v___x_5630_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__4));
lean_inc_ref_n(v___x_5629_, 3);
v___x_5631_ = l_Lean_Syntax_node2(v_a_5623_, v___x_5630_, v___x_5629_, v___y_5570_);
v___x_5632_ = l_Lean_Syntax_node1(v_a_5623_, v___x_5627_, v___x_5631_);
v___x_5633_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__12));
v___x_5634_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5634_, 0, v_a_5623_);
lean_ctor_set(v___x_5634_, 1, v___x_5633_);
v___x_5635_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__5));
v___x_5636_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__6));
v___x_5637_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5638_, 0, v_a_5623_);
lean_ctor_set(v___x_5638_, 1, v___x_5637_);
v___x_5639_ = l_Lean_Syntax_node1(v_a_5623_, v___x_5627_, v___y_5572_);
v___x_5640_ = l_Lean_Syntax_node1(v_a_5623_, v___x_5627_, v___x_5639_);
v___x_5641_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__16));
v___x_5642_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5642_, 0, v_a_5623_);
lean_ctor_set(v___x_5642_, 1, v___x_5641_);
lean_inc_ref(v___x_5642_);
lean_inc_ref(v___x_5638_);
v___x_5643_ = l_Lean_Syntax_node4(v_a_5623_, v___x_5636_, v___x_5638_, v___x_5640_, v___x_5642_, v_body_5575_);
v___x_5644_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
v___x_5645_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__21));
v___x_5646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5646_, 0, v_a_5623_);
lean_ctor_set(v___x_5646_, 1, v___x_5645_);
v___x_5647_ = l_Lean_Syntax_node1(v_a_5623_, v___x_5644_, v___x_5646_);
v___x_5648_ = l_Lean_Syntax_node1(v_a_5623_, v___x_5627_, v___x_5647_);
v___x_5649_ = l_Lean_Syntax_node1(v_a_5623_, v___x_5627_, v___x_5648_);
v___x_5650_ = l_Lean_Syntax_node4(v_a_5623_, v___x_5636_, v___x_5638_, v___x_5649_, v___x_5642_, v___y_5574_);
v___x_5651_ = l_Lean_Syntax_node2(v_a_5623_, v___x_5627_, v___x_5643_, v___x_5650_);
v___x_5652_ = l_Lean_Syntax_node1(v_a_5623_, v___x_5635_, v___x_5651_);
v___x_5653_ = l_Lean_Syntax_node7(v_a_5623_, v___x_5624_, v___x_5626_, v___x_5629_, v___x_5629_, v___x_5629_, v___x_5632_, v___x_5634_, v___x_5652_);
v___x_5654_ = l_Lean_Elab_Do_elabDoElem(v___x_5653_, v_dec_5557_, v___x_5567_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_);
return v___x_5654_;
}
}
v___jp_5655_:
{
if (lean_obj_tag(v___y_5656_) == 0)
{
lean_dec_ref(v___y_5669_);
v___y_5570_ = v___y_5657_;
v___y_5571_ = v___y_5662_;
v___y_5572_ = v___y_5659_;
v___y_5573_ = v___y_5660_;
v___y_5574_ = v___y_5666_;
v_body_5575_ = v_a_5670_;
v___y_5576_ = v___y_5661_;
v___y_5577_ = v___y_5667_;
v___y_5578_ = v___y_5663_;
v___y_5579_ = v___y_5668_;
v___y_5580_ = v___y_5664_;
v___y_5581_ = v___y_5658_;
v___y_5582_ = v___y_5665_;
goto v___jp_5569_;
}
else
{
size_t v_sz_5671_; size_t v___x_5672_; lean_object* v___x_5673_; 
lean_dec_ref_known(v___y_5656_, 1);
v_sz_5671_ = lean_array_size(v___y_5669_);
v___x_5672_ = ((size_t)0ULL);
v___x_5673_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v___y_5669_, v_sz_5671_, v___x_5672_, v_a_5670_, v___y_5661_, v___y_5667_, v___y_5663_, v___y_5668_, v___y_5664_, v___y_5658_, v___y_5665_);
lean_dec_ref(v___y_5669_);
if (lean_obj_tag(v___x_5673_) == 0)
{
lean_object* v_a_5674_; 
v_a_5674_ = lean_ctor_get(v___x_5673_, 0);
lean_inc(v_a_5674_);
lean_dec_ref_known(v___x_5673_, 1);
v___y_5570_ = v___y_5657_;
v___y_5571_ = v___y_5662_;
v___y_5572_ = v___y_5659_;
v___y_5573_ = v___y_5660_;
v___y_5574_ = v___y_5666_;
v_body_5575_ = v_a_5674_;
v___y_5576_ = v___y_5661_;
v___y_5577_ = v___y_5667_;
v___y_5578_ = v___y_5663_;
v___y_5579_ = v___y_5668_;
v___y_5580_ = v___y_5664_;
v___y_5581_ = v___y_5658_;
v___y_5582_ = v___y_5665_;
goto v___jp_5569_;
}
else
{
lean_object* v_a_5675_; lean_object* v___x_5677_; uint8_t v_isShared_5678_; uint8_t v_isSharedCheck_5682_; 
lean_dec(v___y_5666_);
lean_dec_ref(v___y_5662_);
lean_dec(v___y_5659_);
lean_dec(v___y_5657_);
lean_dec_ref(v_dec_5557_);
v_a_5675_ = lean_ctor_get(v___x_5673_, 0);
v_isSharedCheck_5682_ = !lean_is_exclusive(v___x_5673_);
if (v_isSharedCheck_5682_ == 0)
{
v___x_5677_ = v___x_5673_;
v_isShared_5678_ = v_isSharedCheck_5682_;
goto v_resetjp_5676_;
}
else
{
lean_inc(v_a_5675_);
lean_dec(v___x_5673_);
v___x_5677_ = lean_box(0);
v_isShared_5678_ = v_isSharedCheck_5682_;
goto v_resetjp_5676_;
}
v_resetjp_5676_:
{
lean_object* v___x_5680_; 
if (v_isShared_5678_ == 0)
{
v___x_5680_ = v___x_5677_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5681_; 
v_reuseFailAlloc_5681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5681_, 0, v_a_5675_);
v___x_5680_ = v_reuseFailAlloc_5681_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
return v___x_5680_;
}
}
}
}
}
v___jp_5683_:
{
lean_object* v___x_5697_; uint8_t v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; 
v___x_5697_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__4));
v___x_5698_ = 0;
v___x_5699_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
v___x_5700_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v___y_5689_, v___y_5684_, v___x_5699_, v___y_5688_, v___y_5694_, v___y_5690_, v___y_5695_, v___y_5691_, v___y_5686_, v___y_5692_);
if (lean_obj_tag(v___x_5700_) == 0)
{
lean_object* v_a_5701_; lean_object* v___x_5702_; 
v_a_5701_ = lean_ctor_get(v___x_5700_, 0);
lean_inc(v_a_5701_);
lean_dec_ref_known(v___x_5700_, 1);
v___x_5702_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_a_5701_, v___y_5695_, v___y_5691_, v___y_5686_, v___y_5692_);
if (lean_obj_tag(v___x_5702_) == 0)
{
lean_object* v___x_5703_; lean_object* v___x_5704_; 
lean_dec_ref_known(v___x_5702_, 1);
lean_inc(v___y_5684_);
v___x_5703_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5703_, 0, v___y_5684_);
lean_ctor_set_uint8(v___x_5703_, sizeof(void*)*1, v___x_5698_);
lean_inc(v___y_5687_);
v___x_5704_ = l_Lean_Elab_Do_getPatternVarsEx(v___y_5687_, v___y_5694_, v___y_5690_, v___y_5695_, v___y_5691_, v___y_5686_, v___y_5692_);
if (lean_obj_tag(v___x_5704_) == 0)
{
lean_object* v_a_5705_; lean_object* v___x_5706_; 
v_a_5705_ = lean_ctor_get(v___x_5704_, 0);
lean_inc(v_a_5705_);
lean_dec_ref_known(v___x_5704_, 1);
v___x_5706_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v___x_5703_, v_a_5705_, v___y_5688_, v___y_5694_, v___y_5690_, v___y_5695_, v___y_5691_, v___y_5686_, v___y_5692_);
lean_dec_ref_known(v___x_5703_, 1);
if (lean_obj_tag(v___x_5706_) == 0)
{
lean_dec_ref_known(v___x_5706_, 1);
if (lean_obj_tag(v___y_5696_) == 0)
{
lean_object* v_toCold_5707_; lean_object* v_ref_5708_; lean_object* v___x_5709_; lean_object* v_a_5710_; lean_object* v_quotContext_5711_; lean_object* v_currMacroScope_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; 
v_toCold_5707_ = lean_ctor_get(v___y_5686_, 0);
v_ref_5708_ = lean_ctor_get(v___y_5686_, 2);
v___x_5709_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5708_, v___y_5688_, v___y_5694_, v___y_5690_, v___y_5695_, v___y_5691_, v___y_5686_, v___y_5692_);
v_a_5710_ = lean_ctor_get(v___x_5709_, 0);
lean_inc_n(v_a_5710_, 9);
lean_dec_ref(v___x_5709_);
v_quotContext_5711_ = lean_ctor_get(v_toCold_5707_, 8);
v_currMacroScope_5712_ = lean_ctor_get(v_toCold_5707_, 9);
v___x_5713_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5714_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__6));
v___x_5715_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__9));
v___x_5716_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl___closed__1));
v___x_5717_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__11, &l_Lean_Elab_Do_elabDoLetElse___closed__11_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__11);
v___x_5718_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__12));
lean_inc_n(v_currMacroScope_5712_, 2);
lean_inc_n(v_quotContext_5711_, 2);
v___x_5719_ = l_Lean_addMacroScope(v_quotContext_5711_, v___x_5718_, v_currMacroScope_5712_);
v___x_5720_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__16));
v___x_5721_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5721_, 0, v_a_5710_);
lean_ctor_set(v___x_5721_, 1, v___x_5717_);
lean_ctor_set(v___x_5721_, 2, v___x_5719_);
lean_ctor_set(v___x_5721_, 3, v___x_5720_);
v___x_5722_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__18, &l_Lean_Elab_Do_elabDoLetElse___closed__18_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__18);
v___x_5723_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__21));
v___x_5724_ = l_Lean_addMacroScope(v_quotContext_5711_, v___x_5723_, v_currMacroScope_5712_);
v___x_5725_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__25));
v___x_5726_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5726_, 0, v_a_5710_);
lean_ctor_set(v___x_5726_, 1, v___x_5722_);
lean_ctor_set(v___x_5726_, 2, v___x_5724_);
lean_ctor_set(v___x_5726_, 3, v___x_5725_);
v___x_5727_ = l_Lean_Syntax_node1(v_a_5710_, v___x_5713_, v___x_5726_);
v___x_5728_ = l_Lean_Syntax_node2(v_a_5710_, v___x_5716_, v___x_5721_, v___x_5727_);
v___x_5729_ = l_Lean_Syntax_node1(v_a_5710_, v___x_5715_, v___x_5728_);
v___x_5730_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5731_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5731_, 0, v_a_5710_);
lean_ctor_set(v___x_5731_, 1, v___x_5713_);
lean_ctor_set(v___x_5731_, 2, v___x_5730_);
v___x_5732_ = l_Lean_Syntax_node2(v_a_5710_, v___x_5714_, v___x_5729_, v___x_5731_);
v___x_5733_ = l_Lean_Syntax_node1(v_a_5710_, v___x_5713_, v___x_5732_);
v___x_5734_ = l_Lean_Syntax_node1(v_a_5710_, v___x_5697_, v___x_5733_);
v___y_5656_ = v___y_5684_;
v___y_5657_ = v___y_5685_;
v___y_5658_ = v___y_5686_;
v___y_5659_ = v___y_5687_;
v___y_5660_ = v___x_5698_;
v___y_5661_ = v___y_5688_;
v___y_5662_ = v_a_5701_;
v___y_5663_ = v___y_5690_;
v___y_5664_ = v___y_5691_;
v___y_5665_ = v___y_5692_;
v___y_5666_ = v___y_5693_;
v___y_5667_ = v___y_5694_;
v___y_5668_ = v___y_5695_;
v___y_5669_ = v_a_5705_;
v_a_5670_ = v___x_5734_;
goto v___jp_5655_;
}
else
{
lean_object* v_val_5735_; 
v_val_5735_ = lean_ctor_get(v___y_5696_, 0);
lean_inc(v_val_5735_);
lean_dec_ref_known(v___y_5696_, 1);
v___y_5656_ = v___y_5684_;
v___y_5657_ = v___y_5685_;
v___y_5658_ = v___y_5686_;
v___y_5659_ = v___y_5687_;
v___y_5660_ = v___x_5698_;
v___y_5661_ = v___y_5688_;
v___y_5662_ = v_a_5701_;
v___y_5663_ = v___y_5690_;
v___y_5664_ = v___y_5691_;
v___y_5665_ = v___y_5692_;
v___y_5666_ = v___y_5693_;
v___y_5667_ = v___y_5694_;
v___y_5668_ = v___y_5695_;
v___y_5669_ = v_a_5705_;
v_a_5670_ = v_val_5735_;
goto v___jp_5655_;
}
}
else
{
lean_object* v_a_5736_; lean_object* v___x_5738_; uint8_t v_isShared_5739_; uint8_t v_isSharedCheck_5743_; 
lean_dec(v_a_5705_);
lean_dec(v_a_5701_);
lean_dec(v___y_5696_);
lean_dec(v___y_5693_);
lean_dec(v___y_5687_);
lean_dec(v___y_5685_);
lean_dec(v___y_5684_);
lean_dec_ref(v_dec_5557_);
v_a_5736_ = lean_ctor_get(v___x_5706_, 0);
v_isSharedCheck_5743_ = !lean_is_exclusive(v___x_5706_);
if (v_isSharedCheck_5743_ == 0)
{
v___x_5738_ = v___x_5706_;
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
else
{
lean_inc(v_a_5736_);
lean_dec(v___x_5706_);
v___x_5738_ = lean_box(0);
v_isShared_5739_ = v_isSharedCheck_5743_;
goto v_resetjp_5737_;
}
v_resetjp_5737_:
{
lean_object* v___x_5741_; 
if (v_isShared_5739_ == 0)
{
v___x_5741_ = v___x_5738_;
goto v_reusejp_5740_;
}
else
{
lean_object* v_reuseFailAlloc_5742_; 
v_reuseFailAlloc_5742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5742_, 0, v_a_5736_);
v___x_5741_ = v_reuseFailAlloc_5742_;
goto v_reusejp_5740_;
}
v_reusejp_5740_:
{
return v___x_5741_;
}
}
}
}
else
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5751_; 
lean_dec_ref_known(v___x_5703_, 1);
lean_dec(v_a_5701_);
lean_dec(v___y_5696_);
lean_dec(v___y_5693_);
lean_dec(v___y_5687_);
lean_dec(v___y_5685_);
lean_dec(v___y_5684_);
lean_dec_ref(v_dec_5557_);
v_a_5744_ = lean_ctor_get(v___x_5704_, 0);
v_isSharedCheck_5751_ = !lean_is_exclusive(v___x_5704_);
if (v_isSharedCheck_5751_ == 0)
{
v___x_5746_ = v___x_5704_;
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___x_5704_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5749_; 
if (v_isShared_5747_ == 0)
{
v___x_5749_ = v___x_5746_;
goto v_reusejp_5748_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_a_5744_);
v___x_5749_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5748_;
}
v_reusejp_5748_:
{
return v___x_5749_;
}
}
}
}
else
{
lean_object* v_a_5752_; lean_object* v___x_5754_; uint8_t v_isShared_5755_; uint8_t v_isSharedCheck_5759_; 
lean_dec(v_a_5701_);
lean_dec(v___y_5696_);
lean_dec(v___y_5693_);
lean_dec(v___y_5687_);
lean_dec(v___y_5685_);
lean_dec(v___y_5684_);
lean_dec_ref(v_dec_5557_);
v_a_5752_ = lean_ctor_get(v___x_5702_, 0);
v_isSharedCheck_5759_ = !lean_is_exclusive(v___x_5702_);
if (v_isSharedCheck_5759_ == 0)
{
v___x_5754_ = v___x_5702_;
v_isShared_5755_ = v_isSharedCheck_5759_;
goto v_resetjp_5753_;
}
else
{
lean_inc(v_a_5752_);
lean_dec(v___x_5702_);
v___x_5754_ = lean_box(0);
v_isShared_5755_ = v_isSharedCheck_5759_;
goto v_resetjp_5753_;
}
v_resetjp_5753_:
{
lean_object* v___x_5757_; 
if (v_isShared_5755_ == 0)
{
v___x_5757_ = v___x_5754_;
goto v_reusejp_5756_;
}
else
{
lean_object* v_reuseFailAlloc_5758_; 
v_reuseFailAlloc_5758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5758_, 0, v_a_5752_);
v___x_5757_ = v_reuseFailAlloc_5758_;
goto v_reusejp_5756_;
}
v_reusejp_5756_:
{
return v___x_5757_;
}
}
}
}
else
{
lean_object* v_a_5760_; lean_object* v___x_5762_; uint8_t v_isShared_5763_; uint8_t v_isSharedCheck_5767_; 
lean_dec(v___y_5696_);
lean_dec(v___y_5693_);
lean_dec(v___y_5687_);
lean_dec(v___y_5685_);
lean_dec(v___y_5684_);
lean_dec_ref(v_dec_5557_);
v_a_5760_ = lean_ctor_get(v___x_5700_, 0);
v_isSharedCheck_5767_ = !lean_is_exclusive(v___x_5700_);
if (v_isSharedCheck_5767_ == 0)
{
v___x_5762_ = v___x_5700_;
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
else
{
lean_inc(v_a_5760_);
lean_dec(v___x_5700_);
v___x_5762_ = lean_box(0);
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
v_resetjp_5761_:
{
lean_object* v___x_5765_; 
if (v_isShared_5763_ == 0)
{
v___x_5765_ = v___x_5762_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v_a_5760_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
return v___x_5765_;
}
}
}
}
v___jp_5768_:
{
lean_object* v___x_5777_; lean_object* v_cfg_5778_; lean_object* v___x_5779_; uint8_t v___x_5780_; 
v___x_5777_ = lean_unsigned_to_nat(2u);
v_cfg_5778_ = l_Lean_Syntax_getArg(v_stx_5556_, v___x_5777_);
v___x_5779_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_cfg_5778_);
v___x_5780_ = l_Lean_Syntax_isOfKind(v_cfg_5778_, v___x_5779_);
if (v___x_5780_ == 0)
{
lean_object* v___x_5781_; 
lean_dec(v_cfg_5778_);
lean_dec(v_mutTk_x3f_5769_);
lean_dec_ref(v_dec_5557_);
lean_dec(v_stx_5556_);
v___x_5781_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_5781_;
}
else
{
lean_object* v___x_5782_; lean_object* v_pattern_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; 
v___x_5782_ = lean_unsigned_to_nat(3u);
v_pattern_5783_ = l_Lean_Syntax_getArg(v_stx_5556_, v___x_5782_);
v___x_5784_ = lean_unsigned_to_nat(5u);
v___x_5785_ = l_Lean_Syntax_getArg(v_stx_5556_, v___x_5784_);
v___x_5786_ = lean_unsigned_to_nat(7u);
v___x_5787_ = l_Lean_Syntax_getArg(v_stx_5556_, v___x_5786_);
v___x_5788_ = lean_unsigned_to_nat(8u);
v___x_5789_ = l_Lean_Syntax_getArg(v_stx_5556_, v___x_5788_);
lean_dec(v_stx_5556_);
v___x_5790_ = l_Lean_Syntax_getOptional_x3f(v___x_5789_);
lean_dec(v___x_5789_);
if (lean_obj_tag(v___x_5790_) == 0)
{
lean_object* v___x_5791_; 
v___x_5791_ = lean_box(0);
v___y_5684_ = v_mutTk_x3f_5769_;
v___y_5685_ = v___x_5785_;
v___y_5686_ = v___y_5775_;
v___y_5687_ = v_pattern_5783_;
v___y_5688_ = v___y_5770_;
v___y_5689_ = v_cfg_5778_;
v___y_5690_ = v___y_5772_;
v___y_5691_ = v___y_5774_;
v___y_5692_ = v___y_5776_;
v___y_5693_ = v___x_5787_;
v___y_5694_ = v___y_5771_;
v___y_5695_ = v___y_5773_;
v___y_5696_ = v___x_5791_;
goto v___jp_5683_;
}
else
{
lean_object* v_val_5792_; lean_object* v___x_5794_; uint8_t v_isShared_5795_; uint8_t v_isSharedCheck_5799_; 
v_val_5792_ = lean_ctor_get(v___x_5790_, 0);
v_isSharedCheck_5799_ = !lean_is_exclusive(v___x_5790_);
if (v_isSharedCheck_5799_ == 0)
{
v___x_5794_ = v___x_5790_;
v_isShared_5795_ = v_isSharedCheck_5799_;
goto v_resetjp_5793_;
}
else
{
lean_inc(v_val_5792_);
lean_dec(v___x_5790_);
v___x_5794_ = lean_box(0);
v_isShared_5795_ = v_isSharedCheck_5799_;
goto v_resetjp_5793_;
}
v_resetjp_5793_:
{
lean_object* v___x_5797_; 
if (v_isShared_5795_ == 0)
{
v___x_5797_ = v___x_5794_;
goto v_reusejp_5796_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v_val_5792_);
v___x_5797_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5796_;
}
v_reusejp_5796_:
{
v___y_5684_ = v_mutTk_x3f_5769_;
v___y_5685_ = v___x_5785_;
v___y_5686_ = v___y_5775_;
v___y_5687_ = v_pattern_5783_;
v___y_5688_ = v___y_5770_;
v___y_5689_ = v_cfg_5778_;
v___y_5690_ = v___y_5772_;
v___y_5691_ = v___y_5774_;
v___y_5692_ = v___y_5776_;
v___y_5693_ = v___x_5787_;
v___y_5694_ = v___y_5771_;
v___y_5695_ = v___y_5773_;
v___y_5696_ = v___x_5797_;
goto v___jp_5683_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object* v_stx_5809_, lean_object* v_dec_5810_, lean_object* v_a_5811_, lean_object* v_a_5812_, lean_object* v_a_5813_, lean_object* v_a_5814_, lean_object* v_a_5815_, lean_object* v_a_5816_, lean_object* v_a_5817_, lean_object* v_a_5818_){
_start:
{
lean_object* v_res_5819_; 
v_res_5819_ = l_Lean_Elab_Do_elabDoLetElse(v_stx_5809_, v_dec_5810_, v_a_5811_, v_a_5812_, v_a_5813_, v_a_5814_, v_a_5815_, v_a_5816_, v_a_5817_);
lean_dec(v_a_5817_);
lean_dec_ref(v_a_5816_);
lean_dec(v_a_5815_);
lean_dec_ref(v_a_5814_);
lean_dec(v_a_5813_);
lean_dec_ref(v_a_5812_);
lean_dec_ref(v_a_5811_);
return v_res_5819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object* v_as_5820_, size_t v_sz_5821_, size_t v_i_5822_, lean_object* v_b_5823_, lean_object* v___y_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_, lean_object* v___y_5829_, lean_object* v___y_5830_){
_start:
{
lean_object* v___x_5832_; 
v___x_5832_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5820_, v_sz_5821_, v_i_5822_, v_b_5823_, v___y_5829_);
return v___x_5832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object* v_as_5833_, lean_object* v_sz_5834_, lean_object* v_i_5835_, lean_object* v_b_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_, lean_object* v___y_5839_, lean_object* v___y_5840_, lean_object* v___y_5841_, lean_object* v___y_5842_, lean_object* v___y_5843_, lean_object* v___y_5844_){
_start:
{
size_t v_sz_boxed_5845_; size_t v_i_boxed_5846_; lean_object* v_res_5847_; 
v_sz_boxed_5845_ = lean_unbox_usize(v_sz_5834_);
lean_dec(v_sz_5834_);
v_i_boxed_5846_ = lean_unbox_usize(v_i_5835_);
lean_dec(v_i_5835_);
v_res_5847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(v_as_5833_, v_sz_boxed_5845_, v_i_boxed_5846_, v_b_5836_, v___y_5837_, v___y_5838_, v___y_5839_, v___y_5840_, v___y_5841_, v___y_5842_, v___y_5843_);
lean_dec(v___y_5843_);
lean_dec_ref(v___y_5842_);
lean_dec(v___y_5841_);
lean_dec_ref(v___y_5840_);
lean_dec(v___y_5839_);
lean_dec_ref(v___y_5838_);
lean_dec_ref(v___y_5837_);
lean_dec_ref(v_as_5833_);
return v_res_5847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1(){
_start:
{
lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5855_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5856_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__1));
v___x_5857_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1));
v___x_5858_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetElse___boxed), 10, 0);
v___x_5859_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5855_, v___x_5856_, v___x_5857_, v___x_5858_);
return v___x_5859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object* v_a_5860_){
_start:
{
lean_object* v_res_5861_; 
v_res_5861_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
return v_res_5861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0(lean_object* v_otherwise_x3f_5862_, uint8_t v___x_5863_, lean_object* v___x_5864_, lean_object* v___x_5865_, lean_object* v___x_5866_, lean_object* v___x_5867_, lean_object* v___x_5868_, lean_object* v___x_5869_, lean_object* v_dec_5870_, uint8_t v___x_5871_, lean_object* v_mutTk_x3f_5872_, lean_object* v___x_5873_, lean_object* v___y_5874_, lean_object* v___y_5875_, lean_object* v___y_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_, lean_object* v___y_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_){
_start:
{
if (lean_obj_tag(v_otherwise_x3f_5862_) == 0)
{
lean_object* v_ref_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___y_5892_; 
lean_dec(v___y_5874_);
v_ref_5883_ = lean_ctor_get(v___y_5880_, 2);
v___x_5884_ = l_Lean_SourceInfo_fromRef(v_ref_5883_, v___x_5863_);
v___x_5885_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__0));
lean_inc_ref(v___x_5866_);
lean_inc_ref(v___x_5865_);
lean_inc_ref(v___x_5864_);
v___x_5886_ = l_Lean_Name_mkStr4(v___x_5864_, v___x_5865_, v___x_5866_, v___x_5885_);
v___x_5887_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5884_);
v___x_5888_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5888_, 0, v___x_5884_);
lean_ctor_set(v___x_5888_, 1, v___x_5887_);
v___x_5889_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5890_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5872_) == 1)
{
lean_object* v_val_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; 
v_val_5907_ = lean_ctor_get(v_mutTk_x3f_5872_, 0);
v___x_5908_ = l_Lean_SourceInfo_fromRef(v_val_5907_, v___x_5871_);
v___x_5909_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5910_, 0, v___x_5908_);
lean_ctor_set(v___x_5910_, 1, v___x_5909_);
v___x_5911_ = l_Array_mkArray1___redArg(v___x_5910_);
v___y_5892_ = v___x_5911_;
goto v___jp_5891_;
}
else
{
lean_object* v___x_5912_; 
v___x_5912_ = lean_mk_empty_array_with_capacity(v___x_5873_);
v___y_5892_ = v___x_5912_;
goto v___jp_5891_;
}
v___jp_5891_:
{
lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; 
v___x_5893_ = l_Array_append___redArg(v___x_5890_, v___y_5892_);
lean_dec_ref(v___y_5892_);
lean_inc_n(v___x_5884_, 6);
v___x_5894_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5884_);
lean_ctor_set(v___x_5894_, 1, v___x_5889_);
lean_ctor_set(v___x_5894_, 2, v___x_5893_);
v___x_5895_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5895_, 0, v___x_5884_);
lean_ctor_set(v___x_5895_, 1, v___x_5889_);
lean_ctor_set(v___x_5895_, 2, v___x_5890_);
lean_inc_ref_n(v___x_5895_, 2);
v___x_5896_ = l_Lean_Syntax_node1(v___x_5884_, v___x_5867_, v___x_5895_);
v___x_5897_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3));
lean_inc_ref(v___x_5866_);
lean_inc_ref(v___x_5865_);
lean_inc_ref(v___x_5864_);
v___x_5898_ = l_Lean_Name_mkStr4(v___x_5864_, v___x_5865_, v___x_5866_, v___x_5897_);
v___x_5899_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9));
v___x_5900_ = l_Lean_Name_mkStr4(v___x_5864_, v___x_5865_, v___x_5866_, v___x_5899_);
v___x_5901_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5902_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5902_, 0, v___x_5884_);
lean_ctor_set(v___x_5902_, 1, v___x_5901_);
v___x_5903_ = l_Lean_Syntax_node5(v___x_5884_, v___x_5900_, v___x_5868_, v___x_5895_, v___x_5895_, v___x_5902_, v___x_5869_);
v___x_5904_ = l_Lean_Syntax_node1(v___x_5884_, v___x_5898_, v___x_5903_);
v___x_5905_ = l_Lean_Syntax_node4(v___x_5884_, v___x_5886_, v___x_5888_, v___x_5894_, v___x_5896_, v___x_5904_);
v___x_5906_ = l_Lean_Elab_Do_elabDoElem(v___x_5905_, v_dec_5870_, v___x_5871_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_, v___y_5879_, v___y_5880_, v___y_5881_);
return v___x_5906_;
}
}
else
{
lean_object* v_val_5913_; lean_object* v_ref_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___y_5923_; lean_object* v___y_5924_; lean_object* v___y_5925_; lean_object* v___y_5926_; lean_object* v___y_5927_; lean_object* v___y_5944_; 
v_val_5913_ = lean_ctor_get(v_otherwise_x3f_5862_, 0);
lean_inc(v_val_5913_);
lean_dec_ref_known(v_otherwise_x3f_5862_, 1);
v_ref_5914_ = lean_ctor_get(v___y_5880_, 2);
v___x_5915_ = l_Lean_SourceInfo_fromRef(v_ref_5914_, v___x_5863_);
v___x_5916_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__0));
v___x_5917_ = l_Lean_Name_mkStr4(v___x_5864_, v___x_5865_, v___x_5866_, v___x_5916_);
v___x_5918_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_5915_);
v___x_5919_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5919_, 0, v___x_5915_);
lean_ctor_set(v___x_5919_, 1, v___x_5918_);
v___x_5920_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_5921_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5872_) == 1)
{
lean_object* v_val_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; 
v_val_5957_ = lean_ctor_get(v_mutTk_x3f_5872_, 0);
v___x_5958_ = l_Lean_SourceInfo_fromRef(v_val_5957_, v___x_5871_);
v___x_5959_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_5960_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5958_);
lean_ctor_set(v___x_5960_, 1, v___x_5959_);
v___x_5961_ = l_Array_mkArray1___redArg(v___x_5960_);
v___y_5944_ = v___x_5961_;
goto v___jp_5943_;
}
else
{
lean_object* v___x_5962_; 
v___x_5962_ = lean_mk_empty_array_with_capacity(v___x_5873_);
v___y_5944_ = v___x_5962_;
goto v___jp_5943_;
}
v___jp_5922_:
{
lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; 
v___x_5928_ = l_Array_append___redArg(v___x_5921_, v___y_5927_);
lean_dec_ref(v___y_5927_);
lean_inc(v___x_5915_);
v___x_5929_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5929_, 0, v___x_5915_);
lean_ctor_set(v___x_5929_, 1, v___x_5920_);
lean_ctor_set(v___x_5929_, 2, v___x_5928_);
v___x_5930_ = lean_unsigned_to_nat(9u);
v___x_5931_ = lean_mk_empty_array_with_capacity(v___x_5930_);
v___x_5932_ = lean_array_push(v___x_5931_, v___x_5919_);
v___x_5933_ = lean_array_push(v___x_5932_, v___y_5925_);
v___x_5934_ = lean_array_push(v___x_5933_, v___y_5924_);
v___x_5935_ = lean_array_push(v___x_5934_, v___x_5868_);
v___x_5936_ = lean_array_push(v___x_5935_, v___y_5923_);
v___x_5937_ = lean_array_push(v___x_5936_, v___x_5869_);
v___x_5938_ = lean_array_push(v___x_5937_, v___y_5926_);
v___x_5939_ = lean_array_push(v___x_5938_, v_val_5913_);
v___x_5940_ = lean_array_push(v___x_5939_, v___x_5929_);
v___x_5941_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5941_, 0, v___x_5915_);
lean_ctor_set(v___x_5941_, 1, v___x_5917_);
lean_ctor_set(v___x_5941_, 2, v___x_5940_);
v___x_5942_ = l_Lean_Elab_Do_elabDoElem(v___x_5941_, v_dec_5870_, v___x_5871_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_, v___y_5879_, v___y_5880_, v___y_5881_);
return v___x_5942_;
}
v___jp_5943_:
{
lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; 
v___x_5945_ = l_Array_append___redArg(v___x_5921_, v___y_5944_);
lean_dec_ref(v___y_5944_);
lean_inc_n(v___x_5915_, 5);
v___x_5946_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5915_);
lean_ctor_set(v___x_5946_, 1, v___x_5920_);
lean_ctor_set(v___x_5946_, 2, v___x_5945_);
v___x_5947_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5947_, 0, v___x_5915_);
lean_ctor_set(v___x_5947_, 1, v___x_5920_);
lean_ctor_set(v___x_5947_, 2, v___x_5921_);
v___x_5948_ = l_Lean_Syntax_node1(v___x_5915_, v___x_5867_, v___x_5947_);
v___x_5949_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_5950_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5950_, 0, v___x_5915_);
lean_ctor_set(v___x_5950_, 1, v___x_5949_);
v___x_5951_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_5952_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5952_, 0, v___x_5915_);
lean_ctor_set(v___x_5952_, 1, v___x_5951_);
if (lean_obj_tag(v___y_5874_) == 0)
{
lean_object* v___x_5953_; 
v___x_5953_ = lean_mk_empty_array_with_capacity(v___x_5873_);
v___y_5923_ = v___x_5950_;
v___y_5924_ = v___x_5948_;
v___y_5925_ = v___x_5946_;
v___y_5926_ = v___x_5952_;
v___y_5927_ = v___x_5953_;
goto v___jp_5922_;
}
else
{
lean_object* v_val_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; 
v_val_5954_ = lean_ctor_get(v___y_5874_, 0);
lean_inc(v_val_5954_);
lean_dec_ref_known(v___y_5874_, 1);
v___x_5955_ = lean_mk_empty_array_with_capacity(v___x_5873_);
v___x_5956_ = lean_array_push(v___x_5955_, v_val_5954_);
v___y_5923_ = v___x_5950_;
v___y_5924_ = v___x_5948_;
v___y_5925_ = v___x_5946_;
v___y_5926_ = v___x_5952_;
v___y_5927_ = v___x_5956_;
goto v___jp_5922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed(lean_object** _args){
lean_object* v_otherwise_x3f_5963_ = _args[0];
lean_object* v___x_5964_ = _args[1];
lean_object* v___x_5965_ = _args[2];
lean_object* v___x_5966_ = _args[3];
lean_object* v___x_5967_ = _args[4];
lean_object* v___x_5968_ = _args[5];
lean_object* v___x_5969_ = _args[6];
lean_object* v___x_5970_ = _args[7];
lean_object* v_dec_5971_ = _args[8];
lean_object* v___x_5972_ = _args[9];
lean_object* v_mutTk_x3f_5973_ = _args[10];
lean_object* v___x_5974_ = _args[11];
lean_object* v___y_5975_ = _args[12];
lean_object* v___y_5976_ = _args[13];
lean_object* v___y_5977_ = _args[14];
lean_object* v___y_5978_ = _args[15];
lean_object* v___y_5979_ = _args[16];
lean_object* v___y_5980_ = _args[17];
lean_object* v___y_5981_ = _args[18];
lean_object* v___y_5982_ = _args[19];
lean_object* v___y_5983_ = _args[20];
_start:
{
uint8_t v___x_22833__boxed_5984_; uint8_t v___x_22840__boxed_5985_; lean_object* v_res_5986_; 
v___x_22833__boxed_5984_ = lean_unbox(v___x_5964_);
v___x_22840__boxed_5985_ = lean_unbox(v___x_5972_);
v_res_5986_ = l_Lean_Elab_Do_elabDoLetArrow___lam__0(v_otherwise_x3f_5963_, v___x_22833__boxed_5984_, v___x_5965_, v___x_5966_, v___x_5967_, v___x_5968_, v___x_5969_, v___x_5970_, v_dec_5971_, v___x_22840__boxed_5985_, v_mutTk_x3f_5973_, v___x_5974_, v___y_5975_, v___y_5976_, v___y_5977_, v___y_5978_, v___y_5979_, v___y_5980_, v___y_5981_, v___y_5982_);
lean_dec(v___y_5982_);
lean_dec_ref(v___y_5981_);
lean_dec(v___y_5980_);
lean_dec_ref(v___y_5979_);
lean_dec(v___y_5978_);
lean_dec_ref(v___y_5977_);
lean_dec_ref(v___y_5976_);
lean_dec(v___x_5974_);
lean_dec(v_mutTk_x3f_5973_);
return v_res_5986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1(lean_object* v_otherwise_x3f_5987_, uint8_t v___x_5988_, lean_object* v___x_5989_, lean_object* v___x_5990_, lean_object* v___x_5991_, lean_object* v___x_5992_, lean_object* v___x_5993_, lean_object* v___x_5994_, lean_object* v_dec_5995_, uint8_t v___x_5996_, lean_object* v_mutTk_x3f_5997_, lean_object* v___x_5998_, lean_object* v___y_5999_, lean_object* v___y_6000_, lean_object* v___y_6001_, lean_object* v___y_6002_, lean_object* v___y_6003_, lean_object* v___y_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_){
_start:
{
if (lean_obj_tag(v_otherwise_x3f_5987_) == 0)
{
lean_object* v_ref_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___y_6017_; 
lean_dec(v___y_5999_);
v_ref_6008_ = lean_ctor_get(v___y_6005_, 2);
v___x_6009_ = l_Lean_SourceInfo_fromRef(v_ref_6008_, v___x_5988_);
v___x_6010_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__0));
lean_inc_ref(v___x_5991_);
lean_inc_ref(v___x_5990_);
lean_inc_ref(v___x_5989_);
v___x_6011_ = l_Lean_Name_mkStr4(v___x_5989_, v___x_5990_, v___x_5991_, v___x_6010_);
v___x_6012_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_6009_);
v___x_6013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6013_, 0, v___x_6009_);
lean_ctor_set(v___x_6013_, 1, v___x_6012_);
v___x_6014_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6015_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5997_) == 1)
{
lean_object* v_val_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; 
v_val_6032_ = lean_ctor_get(v_mutTk_x3f_5997_, 0);
v___x_6033_ = l_Lean_SourceInfo_fromRef(v_val_6032_, v___x_5996_);
v___x_6034_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_6035_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6035_, 0, v___x_6033_);
lean_ctor_set(v___x_6035_, 1, v___x_6034_);
v___x_6036_ = l_Array_mkArray1___redArg(v___x_6035_);
v___y_6017_ = v___x_6036_;
goto v___jp_6016_;
}
else
{
lean_object* v___x_6037_; 
v___x_6037_ = lean_mk_empty_array_with_capacity(v___x_5998_);
v___y_6017_ = v___x_6037_;
goto v___jp_6016_;
}
v___jp_6016_:
{
lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6018_ = l_Array_append___redArg(v___x_6015_, v___y_6017_);
lean_dec_ref(v___y_6017_);
lean_inc_n(v___x_6009_, 6);
v___x_6019_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6019_, 0, v___x_6009_);
lean_ctor_set(v___x_6019_, 1, v___x_6014_);
lean_ctor_set(v___x_6019_, 2, v___x_6018_);
v___x_6020_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6020_, 0, v___x_6009_);
lean_ctor_set(v___x_6020_, 1, v___x_6014_);
lean_ctor_set(v___x_6020_, 2, v___x_6015_);
lean_inc_ref_n(v___x_6020_, 2);
v___x_6021_ = l_Lean_Syntax_node1(v___x_6009_, v___x_5992_, v___x_6020_);
v___x_6022_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3));
lean_inc_ref(v___x_5991_);
lean_inc_ref(v___x_5990_);
lean_inc_ref(v___x_5989_);
v___x_6023_ = l_Lean_Name_mkStr4(v___x_5989_, v___x_5990_, v___x_5991_, v___x_6022_);
v___x_6024_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9));
v___x_6025_ = l_Lean_Name_mkStr4(v___x_5989_, v___x_5990_, v___x_5991_, v___x_6024_);
v___x_6026_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6027_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6027_, 0, v___x_6009_);
lean_ctor_set(v___x_6027_, 1, v___x_6026_);
v___x_6028_ = l_Lean_Syntax_node5(v___x_6009_, v___x_6025_, v___x_5993_, v___x_6020_, v___x_6020_, v___x_6027_, v___x_5994_);
v___x_6029_ = l_Lean_Syntax_node1(v___x_6009_, v___x_6023_, v___x_6028_);
v___x_6030_ = l_Lean_Syntax_node4(v___x_6009_, v___x_6011_, v___x_6013_, v___x_6019_, v___x_6021_, v___x_6029_);
v___x_6031_ = l_Lean_Elab_Do_elabDoElem(v___x_6030_, v_dec_5995_, v___x_5996_, v___y_6000_, v___y_6001_, v___y_6002_, v___y_6003_, v___y_6004_, v___y_6005_, v___y_6006_);
return v___x_6031_;
}
}
else
{
lean_object* v_val_6038_; lean_object* v_ref_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___y_6048_; lean_object* v___y_6049_; lean_object* v___y_6050_; lean_object* v___y_6051_; lean_object* v___y_6052_; lean_object* v___y_6069_; 
v_val_6038_ = lean_ctor_get(v_otherwise_x3f_5987_, 0);
lean_inc(v_val_6038_);
lean_dec_ref_known(v_otherwise_x3f_5987_, 1);
v_ref_6039_ = lean_ctor_get(v___y_6005_, 2);
v___x_6040_ = l_Lean_SourceInfo_fromRef(v_ref_6039_, v___x_5988_);
v___x_6041_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__0));
v___x_6042_ = l_Lean_Name_mkStr4(v___x_5989_, v___x_5990_, v___x_5991_, v___x_6041_);
v___x_6043_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6));
lean_inc(v___x_6040_);
v___x_6044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6044_, 0, v___x_6040_);
lean_ctor_set(v___x_6044_, 1, v___x_6043_);
v___x_6045_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6046_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_5997_) == 1)
{
lean_object* v_val_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; 
v_val_6082_ = lean_ctor_get(v_mutTk_x3f_5997_, 0);
v___x_6083_ = l_Lean_SourceInfo_fromRef(v_val_6082_, v___x_5996_);
v___x_6084_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__11));
v___x_6085_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6085_, 0, v___x_6083_);
lean_ctor_set(v___x_6085_, 1, v___x_6084_);
v___x_6086_ = l_Array_mkArray1___redArg(v___x_6085_);
v___y_6069_ = v___x_6086_;
goto v___jp_6068_;
}
else
{
lean_object* v___x_6087_; 
v___x_6087_ = lean_mk_empty_array_with_capacity(v___x_5998_);
v___y_6069_ = v___x_6087_;
goto v___jp_6068_;
}
v___jp_6047_:
{
lean_object* v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; 
v___x_6053_ = l_Array_append___redArg(v___x_6046_, v___y_6052_);
lean_dec_ref(v___y_6052_);
lean_inc(v___x_6040_);
v___x_6054_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6054_, 0, v___x_6040_);
lean_ctor_set(v___x_6054_, 1, v___x_6045_);
lean_ctor_set(v___x_6054_, 2, v___x_6053_);
v___x_6055_ = lean_unsigned_to_nat(9u);
v___x_6056_ = lean_mk_empty_array_with_capacity(v___x_6055_);
v___x_6057_ = lean_array_push(v___x_6056_, v___x_6044_);
v___x_6058_ = lean_array_push(v___x_6057_, v___y_6050_);
v___x_6059_ = lean_array_push(v___x_6058_, v___y_6048_);
v___x_6060_ = lean_array_push(v___x_6059_, v___x_5993_);
v___x_6061_ = lean_array_push(v___x_6060_, v___y_6049_);
v___x_6062_ = lean_array_push(v___x_6061_, v___x_5994_);
v___x_6063_ = lean_array_push(v___x_6062_, v___y_6051_);
v___x_6064_ = lean_array_push(v___x_6063_, v_val_6038_);
v___x_6065_ = lean_array_push(v___x_6064_, v___x_6054_);
v___x_6066_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6066_, 0, v___x_6040_);
lean_ctor_set(v___x_6066_, 1, v___x_6042_);
lean_ctor_set(v___x_6066_, 2, v___x_6065_);
v___x_6067_ = l_Lean_Elab_Do_elabDoElem(v___x_6066_, v_dec_5995_, v___x_5996_, v___y_6000_, v___y_6001_, v___y_6002_, v___y_6003_, v___y_6004_, v___y_6005_, v___y_6006_);
return v___x_6067_;
}
v___jp_6068_:
{
lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; 
v___x_6070_ = l_Array_append___redArg(v___x_6046_, v___y_6069_);
lean_dec_ref(v___y_6069_);
lean_inc_n(v___x_6040_, 5);
v___x_6071_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6071_, 0, v___x_6040_);
lean_ctor_set(v___x_6071_, 1, v___x_6045_);
lean_ctor_set(v___x_6071_, 2, v___x_6070_);
v___x_6072_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6072_, 0, v___x_6040_);
lean_ctor_set(v___x_6072_, 1, v___x_6045_);
lean_ctor_set(v___x_6072_, 2, v___x_6046_);
v___x_6073_ = l_Lean_Syntax_node1(v___x_6040_, v___x_5992_, v___x_6072_);
v___x_6074_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6075_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6075_, 0, v___x_6040_);
lean_ctor_set(v___x_6075_, 1, v___x_6074_);
v___x_6076_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___closed__15));
v___x_6077_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6077_, 0, v___x_6040_);
lean_ctor_set(v___x_6077_, 1, v___x_6076_);
if (lean_obj_tag(v___y_5999_) == 0)
{
lean_object* v___x_6078_; 
v___x_6078_ = lean_mk_empty_array_with_capacity(v___x_5998_);
v___y_6048_ = v___x_6073_;
v___y_6049_ = v___x_6075_;
v___y_6050_ = v___x_6071_;
v___y_6051_ = v___x_6077_;
v___y_6052_ = v___x_6078_;
goto v___jp_6047_;
}
else
{
lean_object* v_val_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; 
v_val_6079_ = lean_ctor_get(v___y_5999_, 0);
lean_inc(v_val_6079_);
lean_dec_ref_known(v___y_5999_, 1);
v___x_6080_ = lean_mk_empty_array_with_capacity(v___x_5998_);
v___x_6081_ = lean_array_push(v___x_6080_, v_val_6079_);
v___y_6048_ = v___x_6073_;
v___y_6049_ = v___x_6075_;
v___y_6050_ = v___x_6071_;
v___y_6051_ = v___x_6077_;
v___y_6052_ = v___x_6081_;
goto v___jp_6047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed(lean_object** _args){
lean_object* v_otherwise_x3f_6088_ = _args[0];
lean_object* v___x_6089_ = _args[1];
lean_object* v___x_6090_ = _args[2];
lean_object* v___x_6091_ = _args[3];
lean_object* v___x_6092_ = _args[4];
lean_object* v___x_6093_ = _args[5];
lean_object* v___x_6094_ = _args[6];
lean_object* v___x_6095_ = _args[7];
lean_object* v_dec_6096_ = _args[8];
lean_object* v___x_6097_ = _args[9];
lean_object* v_mutTk_x3f_6098_ = _args[10];
lean_object* v___x_6099_ = _args[11];
lean_object* v___y_6100_ = _args[12];
lean_object* v___y_6101_ = _args[13];
lean_object* v___y_6102_ = _args[14];
lean_object* v___y_6103_ = _args[15];
lean_object* v___y_6104_ = _args[16];
lean_object* v___y_6105_ = _args[17];
lean_object* v___y_6106_ = _args[18];
lean_object* v___y_6107_ = _args[19];
lean_object* v___y_6108_ = _args[20];
_start:
{
uint8_t v___x_23064__boxed_6109_; uint8_t v___x_23071__boxed_6110_; lean_object* v_res_6111_; 
v___x_23064__boxed_6109_ = lean_unbox(v___x_6089_);
v___x_23071__boxed_6110_ = lean_unbox(v___x_6097_);
v_res_6111_ = l_Lean_Elab_Do_elabDoLetArrow___lam__1(v_otherwise_x3f_6088_, v___x_23064__boxed_6109_, v___x_6090_, v___x_6091_, v___x_6092_, v___x_6093_, v___x_6094_, v___x_6095_, v_dec_6096_, v___x_23071__boxed_6110_, v_mutTk_x3f_6098_, v___x_6099_, v___y_6100_, v___y_6101_, v___y_6102_, v___y_6103_, v___y_6104_, v___y_6105_, v___y_6106_, v___y_6107_);
lean_dec(v___y_6107_);
lean_dec_ref(v___y_6106_);
lean_dec(v___y_6105_);
lean_dec_ref(v___y_6104_);
lean_dec(v___y_6103_);
lean_dec_ref(v___y_6102_);
lean_dec_ref(v___y_6101_);
lean_dec(v___x_6099_);
lean_dec(v_mutTk_x3f_6098_);
return v_res_6111_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1(void){
_start:
{
lean_object* v___x_6113_; lean_object* v___x_6114_; 
v___x_6113_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__0));
v___x_6114_ = l_Lean_stringToMessageData(v___x_6113_);
return v___x_6114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object* v_stx_6121_, lean_object* v_dec_6122_, lean_object* v_a_6123_, lean_object* v_a_6124_, lean_object* v_a_6125_, lean_object* v_a_6126_, lean_object* v_a_6127_, lean_object* v_a_6128_, lean_object* v_a_6129_){
_start:
{
lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; uint8_t v___x_6135_; 
v___x_6131_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0));
v___x_6132_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1));
v___x_6133_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2));
v___x_6134_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
lean_inc(v_stx_6121_);
v___x_6135_ = l_Lean_Syntax_isOfKind(v_stx_6121_, v___x_6134_);
if (v___x_6135_ == 0)
{
lean_object* v___x_6136_; 
lean_dec_ref(v_dec_6122_);
lean_dec(v_stx_6121_);
v___x_6136_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6136_;
}
else
{
lean_object* v___x_6137_; lean_object* v___y_6139_; lean_object* v___y_6140_; lean_object* v___y_6141_; lean_object* v___y_6142_; lean_object* v___y_6143_; lean_object* v___y_6144_; lean_object* v___y_6145_; lean_object* v___y_6146_; lean_object* v___y_6147_; uint8_t v___y_6148_; uint8_t v___y_6149_; lean_object* v___y_6150_; lean_object* v___y_6151_; lean_object* v___y_6152_; lean_object* v___y_6153_; lean_object* v___y_6154_; lean_object* v___y_6155_; uint8_t v___y_6174_; lean_object* v___y_6175_; lean_object* v___y_6176_; lean_object* v___y_6177_; lean_object* v___y_6178_; lean_object* v___y_6179_; lean_object* v___y_6180_; lean_object* v___y_6181_; lean_object* v___y_6182_; lean_object* v___y_6183_; lean_object* v___y_6184_; lean_object* v___y_6185_; lean_object* v___y_6186_; lean_object* v___y_6187_; lean_object* v___y_6188_; uint8_t v___y_6189_; lean_object* v___y_6190_; lean_object* v___y_6193_; lean_object* v___y_6194_; lean_object* v___y_6195_; lean_object* v___y_6196_; uint8_t v___y_6197_; lean_object* v___y_6198_; lean_object* v___y_6199_; lean_object* v___y_6200_; uint8_t v___y_6201_; lean_object* v___y_6202_; lean_object* v___y_6203_; lean_object* v___y_6204_; lean_object* v___y_6205_; lean_object* v___y_6206_; lean_object* v___y_6207_; lean_object* v___y_6208_; lean_object* v___y_6209_; lean_object* v___y_6228_; uint8_t v___y_6229_; lean_object* v___y_6230_; lean_object* v___y_6231_; lean_object* v___y_6232_; lean_object* v___y_6233_; lean_object* v___y_6234_; lean_object* v___y_6235_; lean_object* v___y_6236_; lean_object* v___y_6237_; lean_object* v___y_6238_; lean_object* v___y_6239_; uint8_t v___y_6240_; lean_object* v___y_6241_; lean_object* v___y_6242_; lean_object* v___y_6243_; lean_object* v___y_6244_; lean_object* v_tk_6246_; lean_object* v___x_6247_; uint8_t v___y_6249_; lean_object* v___y_6250_; lean_object* v___y_6251_; lean_object* v___y_6252_; lean_object* v___y_6253_; lean_object* v___y_6254_; lean_object* v___y_6255_; uint8_t v___y_6256_; lean_object* v___y_6257_; lean_object* v___y_6258_; lean_object* v___y_6259_; lean_object* v_patType_x3f_6260_; lean_object* v___y_6261_; lean_object* v___y_6262_; lean_object* v___y_6263_; lean_object* v___y_6264_; lean_object* v___y_6265_; lean_object* v___y_6266_; lean_object* v___y_6267_; lean_object* v___y_6312_; uint8_t v___y_6313_; lean_object* v___y_6314_; lean_object* v___y_6315_; lean_object* v___y_6316_; lean_object* v___y_6317_; lean_object* v___y_6318_; uint8_t v___y_6319_; lean_object* v___y_6320_; lean_object* v___y_6321_; lean_object* v_patType_x3f_6322_; lean_object* v___y_6323_; lean_object* v___y_6324_; lean_object* v___y_6325_; lean_object* v___y_6326_; lean_object* v___y_6327_; lean_object* v___y_6328_; lean_object* v___y_6329_; lean_object* v___y_6348_; lean_object* v___y_6349_; lean_object* v___y_6350_; uint8_t v___y_6351_; lean_object* v___y_6352_; lean_object* v_xType_x3f_6353_; lean_object* v___y_6354_; lean_object* v___y_6355_; lean_object* v___y_6356_; lean_object* v___y_6357_; lean_object* v___y_6358_; lean_object* v___y_6359_; lean_object* v___y_6360_; lean_object* v___y_6389_; lean_object* v___y_6390_; lean_object* v___y_6391_; lean_object* v___y_6392_; lean_object* v___y_6393_; lean_object* v___y_6394_; lean_object* v___y_6395_; uint8_t v___y_6396_; lean_object* v___y_6397_; lean_object* v___y_6398_; lean_object* v___y_6399_; lean_object* v___y_6400_; lean_object* v___y_6401_; lean_object* v___y_6402_; lean_object* v___y_6403_; lean_object* v___y_6404_; lean_object* v___y_6405_; lean_object* v___y_6448_; lean_object* v___y_6449_; lean_object* v___y_6450_; lean_object* v___y_6451_; lean_object* v___y_6452_; lean_object* v___y_6453_; lean_object* v___y_6454_; lean_object* v___y_6455_; lean_object* v___y_6456_; lean_object* v___y_6457_; lean_object* v___y_6458_; lean_object* v___y_6459_; lean_object* v___y_6460_; lean_object* v___y_6461_; lean_object* v___y_6462_; uint8_t v___y_6463_; lean_object* v___y_6464_; lean_object* v___y_6465_; lean_object* v_mutTk_x3f_6477_; lean_object* v___y_6478_; lean_object* v___y_6479_; lean_object* v___y_6480_; lean_object* v___y_6481_; lean_object* v___y_6482_; lean_object* v___y_6483_; lean_object* v___y_6484_; lean_object* v___x_6520_; uint8_t v___x_6521_; 
v___x_6137_ = lean_unsigned_to_nat(0u);
v_tk_6246_ = l_Lean_Syntax_getArg(v_stx_6121_, v___x_6137_);
v___x_6247_ = lean_unsigned_to_nat(1u);
v___x_6520_ = l_Lean_Syntax_getArg(v_stx_6121_, v___x_6247_);
v___x_6521_ = l_Lean_Syntax_isNone(v___x_6520_);
if (v___x_6521_ == 0)
{
uint8_t v___x_6522_; 
lean_inc(v___x_6520_);
v___x_6522_ = l_Lean_Syntax_matchesNull(v___x_6520_, v___x_6247_);
if (v___x_6522_ == 0)
{
lean_object* v___x_6523_; 
lean_dec(v___x_6520_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
lean_dec(v_stx_6121_);
v___x_6523_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6523_;
}
else
{
lean_object* v_mutTk_x3f_6524_; lean_object* v___x_6525_; 
v_mutTk_x3f_6524_ = l_Lean_Syntax_getArg(v___x_6520_, v___x_6137_);
lean_dec(v___x_6520_);
v___x_6525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6525_, 0, v_mutTk_x3f_6524_);
v_mutTk_x3f_6477_ = v___x_6525_;
v___y_6478_ = v_a_6123_;
v___y_6479_ = v_a_6124_;
v___y_6480_ = v_a_6125_;
v___y_6481_ = v_a_6126_;
v___y_6482_ = v_a_6127_;
v___y_6483_ = v_a_6128_;
v___y_6484_ = v_a_6129_;
goto v___jp_6476_;
}
}
else
{
lean_object* v___x_6526_; 
lean_dec(v___x_6520_);
v___x_6526_ = lean_box(0);
v_mutTk_x3f_6477_ = v___x_6526_;
v___y_6478_ = v_a_6123_;
v___y_6479_ = v_a_6124_;
v___y_6480_ = v_a_6125_;
v___y_6481_ = v_a_6126_;
v___y_6482_ = v_a_6127_;
v___y_6483_ = v_a_6128_;
v___y_6484_ = v_a_6129_;
goto v___jp_6476_;
}
v___jp_6138_:
{
lean_object* v___x_6156_; lean_object* v___x_6157_; 
v___x_6156_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6157_ = l_Lean_Core_mkFreshUserName(v___x_6156_, v___y_6139_, v___y_6147_);
if (lean_obj_tag(v___x_6157_) == 0)
{
lean_object* v_a_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___y_6162_; uint8_t v___x_6163_; lean_object* v___x_6164_; 
v_a_6158_ = lean_ctor_get(v___x_6157_, 0);
lean_inc(v_a_6158_);
lean_dec_ref_known(v___x_6157_, 1);
v___x_6159_ = l_Lean_mkIdentFrom(v___y_6144_, v_a_6158_, v___y_6149_);
lean_dec(v___y_6144_);
v___x_6160_ = lean_box(v___y_6148_);
v___x_6161_ = lean_box(v___x_6135_);
lean_inc(v___x_6159_);
lean_inc(v___y_6141_);
v___y_6162_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___lam__1___boxed), 21, 13);
lean_closure_set(v___y_6162_, 0, v___y_6151_);
lean_closure_set(v___y_6162_, 1, v___x_6160_);
lean_closure_set(v___y_6162_, 2, v___x_6131_);
lean_closure_set(v___y_6162_, 3, v___x_6132_);
lean_closure_set(v___y_6162_, 4, v___x_6133_);
lean_closure_set(v___y_6162_, 5, v___y_6141_);
lean_closure_set(v___y_6162_, 6, v___y_6145_);
lean_closure_set(v___y_6162_, 7, v___x_6159_);
lean_closure_set(v___y_6162_, 8, v_dec_6122_);
lean_closure_set(v___y_6162_, 9, v___x_6161_);
lean_closure_set(v___y_6162_, 10, v___y_6153_);
lean_closure_set(v___y_6162_, 11, v___x_6137_);
lean_closure_set(v___y_6162_, 12, v___y_6155_);
v___x_6163_ = 0;
v___x_6164_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6159_, v___y_6142_, v___y_6152_, v___y_6162_, v___x_6163_, v___y_6150_, v___y_6143_, v___y_6154_, v___y_6140_, v___y_6146_, v___y_6139_, v___y_6147_);
return v___x_6164_;
}
else
{
lean_object* v_a_6165_; lean_object* v___x_6167_; uint8_t v_isShared_6168_; uint8_t v_isSharedCheck_6172_; 
lean_dec(v___y_6155_);
lean_dec(v___y_6153_);
lean_dec(v___y_6152_);
lean_dec(v___y_6151_);
lean_dec(v___y_6145_);
lean_dec(v___y_6144_);
lean_dec(v___y_6142_);
lean_dec_ref(v_dec_6122_);
v_a_6165_ = lean_ctor_get(v___x_6157_, 0);
v_isSharedCheck_6172_ = !lean_is_exclusive(v___x_6157_);
if (v_isSharedCheck_6172_ == 0)
{
v___x_6167_ = v___x_6157_;
v_isShared_6168_ = v_isSharedCheck_6172_;
goto v_resetjp_6166_;
}
else
{
lean_inc(v_a_6165_);
lean_dec(v___x_6157_);
v___x_6167_ = lean_box(0);
v_isShared_6168_ = v_isSharedCheck_6172_;
goto v_resetjp_6166_;
}
v_resetjp_6166_:
{
lean_object* v___x_6170_; 
if (v_isShared_6168_ == 0)
{
v___x_6170_ = v___x_6167_;
goto v_reusejp_6169_;
}
else
{
lean_object* v_reuseFailAlloc_6171_; 
v_reuseFailAlloc_6171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6171_, 0, v_a_6165_);
v___x_6170_ = v_reuseFailAlloc_6171_;
goto v_reusejp_6169_;
}
v_reusejp_6169_:
{
return v___x_6170_;
}
}
}
}
v___jp_6173_:
{
lean_object* v___x_6191_; 
v___x_6191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6191_, 0, v___y_6184_);
v___y_6139_ = v___y_6179_;
v___y_6140_ = v___y_6178_;
v___y_6141_ = v___y_6175_;
v___y_6142_ = v___y_6186_;
v___y_6143_ = v___y_6180_;
v___y_6144_ = v___y_6183_;
v___y_6145_ = v___y_6177_;
v___y_6146_ = v___y_6188_;
v___y_6147_ = v___y_6181_;
v___y_6148_ = v___y_6174_;
v___y_6149_ = v___y_6189_;
v___y_6150_ = v___y_6185_;
v___y_6151_ = v___x_6191_;
v___y_6152_ = v___y_6187_;
v___y_6153_ = v___y_6176_;
v___y_6154_ = v___y_6182_;
v___y_6155_ = v___y_6190_;
goto v___jp_6138_;
}
v___jp_6192_:
{
lean_object* v___x_6210_; lean_object* v___x_6211_; 
v___x_6210_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6211_ = l_Lean_Core_mkFreshUserName(v___x_6210_, v___y_6205_, v___y_6193_);
if (lean_obj_tag(v___x_6211_) == 0)
{
lean_object* v_a_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___y_6216_; uint8_t v___x_6217_; lean_object* v___x_6218_; 
v_a_6212_ = lean_ctor_get(v___x_6211_, 0);
lean_inc(v_a_6212_);
lean_dec_ref_known(v___x_6211_, 1);
v___x_6213_ = l_Lean_mkIdentFrom(v___y_6196_, v_a_6212_, v___y_6197_);
lean_dec(v___y_6196_);
v___x_6214_ = lean_box(v___y_6201_);
v___x_6215_ = lean_box(v___x_6135_);
lean_inc(v___x_6213_);
lean_inc(v___y_6194_);
v___y_6216_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___lam__0___boxed), 21, 13);
lean_closure_set(v___y_6216_, 0, v___y_6207_);
lean_closure_set(v___y_6216_, 1, v___x_6214_);
lean_closure_set(v___y_6216_, 2, v___x_6131_);
lean_closure_set(v___y_6216_, 3, v___x_6132_);
lean_closure_set(v___y_6216_, 4, v___x_6133_);
lean_closure_set(v___y_6216_, 5, v___y_6194_);
lean_closure_set(v___y_6216_, 6, v___y_6200_);
lean_closure_set(v___y_6216_, 7, v___x_6213_);
lean_closure_set(v___y_6216_, 8, v_dec_6122_);
lean_closure_set(v___y_6216_, 9, v___x_6215_);
lean_closure_set(v___y_6216_, 10, v___y_6208_);
lean_closure_set(v___y_6216_, 11, v___x_6137_);
lean_closure_set(v___y_6216_, 12, v___y_6209_);
v___x_6217_ = 0;
v___x_6218_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6213_, v___y_6202_, v___y_6203_, v___y_6216_, v___x_6217_, v___y_6199_, v___y_6206_, v___y_6198_, v___y_6195_, v___y_6204_, v___y_6205_, v___y_6193_);
return v___x_6218_;
}
else
{
lean_object* v_a_6219_; lean_object* v___x_6221_; uint8_t v_isShared_6222_; uint8_t v_isSharedCheck_6226_; 
lean_dec(v___y_6209_);
lean_dec(v___y_6208_);
lean_dec(v___y_6207_);
lean_dec(v___y_6203_);
lean_dec(v___y_6202_);
lean_dec(v___y_6200_);
lean_dec(v___y_6196_);
lean_dec_ref(v_dec_6122_);
v_a_6219_ = lean_ctor_get(v___x_6211_, 0);
v_isSharedCheck_6226_ = !lean_is_exclusive(v___x_6211_);
if (v_isSharedCheck_6226_ == 0)
{
v___x_6221_ = v___x_6211_;
v_isShared_6222_ = v_isSharedCheck_6226_;
goto v_resetjp_6220_;
}
else
{
lean_inc(v_a_6219_);
lean_dec(v___x_6211_);
v___x_6221_ = lean_box(0);
v_isShared_6222_ = v_isSharedCheck_6226_;
goto v_resetjp_6220_;
}
v_resetjp_6220_:
{
lean_object* v___x_6224_; 
if (v_isShared_6222_ == 0)
{
v___x_6224_ = v___x_6221_;
goto v_reusejp_6223_;
}
else
{
lean_object* v_reuseFailAlloc_6225_; 
v_reuseFailAlloc_6225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6225_, 0, v_a_6219_);
v___x_6224_ = v_reuseFailAlloc_6225_;
goto v_reusejp_6223_;
}
v_reusejp_6223_:
{
return v___x_6224_;
}
}
}
}
v___jp_6227_:
{
lean_object* v___x_6245_; 
v___x_6245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6245_, 0, v___y_6235_);
v___y_6193_ = v___y_6236_;
v___y_6194_ = v___y_6228_;
v___y_6195_ = v___y_6243_;
v___y_6196_ = v___y_6234_;
v___y_6197_ = v___y_6240_;
v___y_6198_ = v___y_6238_;
v___y_6199_ = v___y_6241_;
v___y_6200_ = v___y_6231_;
v___y_6201_ = v___y_6229_;
v___y_6202_ = v___y_6239_;
v___y_6203_ = v___y_6232_;
v___y_6204_ = v___y_6242_;
v___y_6205_ = v___y_6233_;
v___y_6206_ = v___y_6237_;
v___y_6207_ = v___x_6245_;
v___y_6208_ = v___y_6230_;
v___y_6209_ = v___y_6244_;
goto v___jp_6192_;
}
v___jp_6248_:
{
lean_object* v___x_6268_; lean_object* v___x_6269_; lean_object* v___x_6270_; uint8_t v___x_6271_; 
v___x_6268_ = l_Lean_Syntax_getArg(v___y_6253_, v___y_6255_);
v___x_6269_ = lean_unsigned_to_nat(4u);
v___x_6270_ = l_Lean_Syntax_getArg(v___y_6253_, v___x_6269_);
lean_dec(v___y_6253_);
lean_inc(v___x_6270_);
v___x_6271_ = l_Lean_Syntax_matchesNull(v___x_6270_, v___x_6137_);
if (v___x_6271_ == 0)
{
uint8_t v___x_6272_; 
lean_dec(v___y_6258_);
lean_dec(v_tk_6246_);
v___x_6272_ = l_Lean_Syntax_isNone(v___x_6270_);
if (v___x_6272_ == 0)
{
uint8_t v___x_6273_; 
lean_inc(v___x_6270_);
v___x_6273_ = l_Lean_Syntax_matchesNull(v___x_6270_, v___y_6255_);
if (v___x_6273_ == 0)
{
lean_object* v___x_6274_; 
lean_dec(v___x_6270_);
lean_dec(v___x_6268_);
lean_dec(v_patType_x3f_6260_);
lean_dec(v___y_6259_);
lean_dec(v___y_6252_);
lean_dec(v___y_6251_);
lean_dec_ref(v_dec_6122_);
v___x_6274_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6274_;
}
else
{
lean_object* v___x_6275_; lean_object* v___x_6276_; lean_object* v___x_6277_; 
v___x_6275_ = l_Lean_Syntax_getArg(v___x_6270_, v___x_6247_);
v___x_6276_ = l_Lean_Syntax_getArg(v___x_6270_, v___y_6257_);
lean_dec(v___x_6270_);
v___x_6277_ = l_Lean_Syntax_getOptional_x3f(v___x_6276_);
lean_dec(v___x_6276_);
if (lean_obj_tag(v___x_6277_) == 0)
{
lean_inc(v___y_6254_);
v___y_6174_ = v___y_6249_;
v___y_6175_ = v___y_6250_;
v___y_6176_ = v___y_6251_;
v___y_6177_ = v___y_6252_;
v___y_6178_ = v___y_6264_;
v___y_6179_ = v___y_6266_;
v___y_6180_ = v___y_6262_;
v___y_6181_ = v___y_6267_;
v___y_6182_ = v___y_6263_;
v___y_6183_ = v___y_6259_;
v___y_6184_ = v___x_6275_;
v___y_6185_ = v___y_6261_;
v___y_6186_ = v_patType_x3f_6260_;
v___y_6187_ = v___x_6268_;
v___y_6188_ = v___y_6265_;
v___y_6189_ = v___y_6256_;
v___y_6190_ = v___y_6254_;
goto v___jp_6173_;
}
else
{
lean_object* v_val_6278_; lean_object* v___x_6280_; uint8_t v_isShared_6281_; uint8_t v_isSharedCheck_6285_; 
v_val_6278_ = lean_ctor_get(v___x_6277_, 0);
v_isSharedCheck_6285_ = !lean_is_exclusive(v___x_6277_);
if (v_isSharedCheck_6285_ == 0)
{
v___x_6280_ = v___x_6277_;
v_isShared_6281_ = v_isSharedCheck_6285_;
goto v_resetjp_6279_;
}
else
{
lean_inc(v_val_6278_);
lean_dec(v___x_6277_);
v___x_6280_ = lean_box(0);
v_isShared_6281_ = v_isSharedCheck_6285_;
goto v_resetjp_6279_;
}
v_resetjp_6279_:
{
lean_object* v___x_6283_; 
if (v_isShared_6281_ == 0)
{
v___x_6283_ = v___x_6280_;
goto v_reusejp_6282_;
}
else
{
lean_object* v_reuseFailAlloc_6284_; 
v_reuseFailAlloc_6284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6284_, 0, v_val_6278_);
v___x_6283_ = v_reuseFailAlloc_6284_;
goto v_reusejp_6282_;
}
v_reusejp_6282_:
{
v___y_6174_ = v___y_6249_;
v___y_6175_ = v___y_6250_;
v___y_6176_ = v___y_6251_;
v___y_6177_ = v___y_6252_;
v___y_6178_ = v___y_6264_;
v___y_6179_ = v___y_6266_;
v___y_6180_ = v___y_6262_;
v___y_6181_ = v___y_6267_;
v___y_6182_ = v___y_6263_;
v___y_6183_ = v___y_6259_;
v___y_6184_ = v___x_6275_;
v___y_6185_ = v___y_6261_;
v___y_6186_ = v_patType_x3f_6260_;
v___y_6187_ = v___x_6268_;
v___y_6188_ = v___y_6265_;
v___y_6189_ = v___y_6256_;
v___y_6190_ = v___x_6283_;
goto v___jp_6173_;
}
}
}
}
}
else
{
lean_dec(v___x_6270_);
lean_inc_n(v___y_6254_, 2);
v___y_6139_ = v___y_6266_;
v___y_6140_ = v___y_6264_;
v___y_6141_ = v___y_6250_;
v___y_6142_ = v_patType_x3f_6260_;
v___y_6143_ = v___y_6262_;
v___y_6144_ = v___y_6259_;
v___y_6145_ = v___y_6252_;
v___y_6146_ = v___y_6265_;
v___y_6147_ = v___y_6267_;
v___y_6148_ = v___y_6249_;
v___y_6149_ = v___y_6256_;
v___y_6150_ = v___y_6261_;
v___y_6151_ = v___y_6254_;
v___y_6152_ = v___x_6268_;
v___y_6153_ = v___y_6251_;
v___y_6154_ = v___y_6263_;
v___y_6155_ = v___y_6254_;
goto v___jp_6138_;
}
}
else
{
lean_object* v___x_6286_; lean_object* v___x_6287_; 
lean_dec(v___x_6270_);
lean_dec(v___y_6259_);
lean_dec(v___y_6252_);
lean_dec(v___y_6251_);
v___x_6286_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6287_ = l_Lean_Core_mkFreshUserName(v___x_6286_, v___y_6266_, v___y_6267_);
if (lean_obj_tag(v___x_6287_) == 0)
{
lean_object* v_a_6288_; lean_object* v___x_6289_; lean_object* v___x_6290_; 
v_a_6288_ = lean_ctor_get(v___x_6287_, 0);
lean_inc(v_a_6288_);
lean_dec_ref_known(v___x_6287_, 1);
v___x_6289_ = l_Lean_mkIdentFrom(v___y_6258_, v_a_6288_, v___y_6256_);
lean_dec(v___y_6258_);
v___x_6290_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_6122_, v_tk_6246_, v___y_6261_, v___y_6262_, v___y_6263_, v___y_6264_, v___y_6265_, v___y_6266_, v___y_6267_);
lean_dec(v_tk_6246_);
if (lean_obj_tag(v___x_6290_) == 0)
{
lean_object* v_a_6291_; uint8_t v_kind_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; 
v_a_6291_ = lean_ctor_get(v___x_6290_, 0);
lean_inc(v_a_6291_);
lean_dec_ref_known(v___x_6290_, 1);
v_kind_6292_ = lean_ctor_get_uint8(v_a_6291_, sizeof(void*)*3);
v___x_6293_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_6293_, 0, v_a_6291_);
v___x_6294_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6289_, v_patType_x3f_6260_, v___x_6268_, v___x_6293_, v_kind_6292_, v___y_6261_, v___y_6262_, v___y_6263_, v___y_6264_, v___y_6265_, v___y_6266_, v___y_6267_);
return v___x_6294_;
}
else
{
lean_object* v_a_6295_; lean_object* v___x_6297_; uint8_t v_isShared_6298_; uint8_t v_isSharedCheck_6302_; 
lean_dec(v___x_6289_);
lean_dec(v___x_6268_);
lean_dec(v_patType_x3f_6260_);
v_a_6295_ = lean_ctor_get(v___x_6290_, 0);
v_isSharedCheck_6302_ = !lean_is_exclusive(v___x_6290_);
if (v_isSharedCheck_6302_ == 0)
{
v___x_6297_ = v___x_6290_;
v_isShared_6298_ = v_isSharedCheck_6302_;
goto v_resetjp_6296_;
}
else
{
lean_inc(v_a_6295_);
lean_dec(v___x_6290_);
v___x_6297_ = lean_box(0);
v_isShared_6298_ = v_isSharedCheck_6302_;
goto v_resetjp_6296_;
}
v_resetjp_6296_:
{
lean_object* v___x_6300_; 
if (v_isShared_6298_ == 0)
{
v___x_6300_ = v___x_6297_;
goto v_reusejp_6299_;
}
else
{
lean_object* v_reuseFailAlloc_6301_; 
v_reuseFailAlloc_6301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6301_, 0, v_a_6295_);
v___x_6300_ = v_reuseFailAlloc_6301_;
goto v_reusejp_6299_;
}
v_reusejp_6299_:
{
return v___x_6300_;
}
}
}
}
else
{
lean_object* v_a_6303_; lean_object* v___x_6305_; uint8_t v_isShared_6306_; uint8_t v_isSharedCheck_6310_; 
lean_dec(v___x_6268_);
lean_dec(v_patType_x3f_6260_);
lean_dec(v___y_6258_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v_a_6303_ = lean_ctor_get(v___x_6287_, 0);
v_isSharedCheck_6310_ = !lean_is_exclusive(v___x_6287_);
if (v_isSharedCheck_6310_ == 0)
{
v___x_6305_ = v___x_6287_;
v_isShared_6306_ = v_isSharedCheck_6310_;
goto v_resetjp_6304_;
}
else
{
lean_inc(v_a_6303_);
lean_dec(v___x_6287_);
v___x_6305_ = lean_box(0);
v_isShared_6306_ = v_isSharedCheck_6310_;
goto v_resetjp_6304_;
}
v_resetjp_6304_:
{
lean_object* v___x_6308_; 
if (v_isShared_6306_ == 0)
{
v___x_6308_ = v___x_6305_;
goto v_reusejp_6307_;
}
else
{
lean_object* v_reuseFailAlloc_6309_; 
v_reuseFailAlloc_6309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6309_, 0, v_a_6303_);
v___x_6308_ = v_reuseFailAlloc_6309_;
goto v_reusejp_6307_;
}
v_reusejp_6307_:
{
return v___x_6308_;
}
}
}
}
}
v___jp_6311_:
{
lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; uint8_t v___x_6333_; 
v___x_6330_ = l_Lean_Syntax_getArg(v___y_6316_, v___y_6318_);
v___x_6331_ = lean_unsigned_to_nat(4u);
v___x_6332_ = l_Lean_Syntax_getArg(v___y_6316_, v___x_6331_);
lean_dec(v___y_6316_);
v___x_6333_ = l_Lean_Syntax_isNone(v___x_6332_);
if (v___x_6333_ == 0)
{
uint8_t v___x_6334_; 
lean_inc(v___x_6332_);
v___x_6334_ = l_Lean_Syntax_matchesNull(v___x_6332_, v___y_6318_);
if (v___x_6334_ == 0)
{
lean_object* v___x_6335_; 
lean_dec(v___x_6332_);
lean_dec(v___x_6330_);
lean_dec(v_patType_x3f_6322_);
lean_dec(v___y_6321_);
lean_dec(v___y_6315_);
lean_dec(v___y_6314_);
lean_dec_ref(v_dec_6122_);
v___x_6335_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6335_;
}
else
{
lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6338_; 
v___x_6336_ = l_Lean_Syntax_getArg(v___x_6332_, v___x_6247_);
v___x_6337_ = l_Lean_Syntax_getArg(v___x_6332_, v___y_6320_);
lean_dec(v___x_6332_);
v___x_6338_ = l_Lean_Syntax_getOptional_x3f(v___x_6337_);
lean_dec(v___x_6337_);
if (lean_obj_tag(v___x_6338_) == 0)
{
lean_inc(v___y_6317_);
v___y_6228_ = v___y_6312_;
v___y_6229_ = v___y_6313_;
v___y_6230_ = v___y_6314_;
v___y_6231_ = v___y_6315_;
v___y_6232_ = v___x_6330_;
v___y_6233_ = v___y_6328_;
v___y_6234_ = v___y_6321_;
v___y_6235_ = v___x_6336_;
v___y_6236_ = v___y_6329_;
v___y_6237_ = v___y_6324_;
v___y_6238_ = v___y_6325_;
v___y_6239_ = v_patType_x3f_6322_;
v___y_6240_ = v___y_6319_;
v___y_6241_ = v___y_6323_;
v___y_6242_ = v___y_6327_;
v___y_6243_ = v___y_6326_;
v___y_6244_ = v___y_6317_;
goto v___jp_6227_;
}
else
{
lean_object* v_val_6339_; lean_object* v___x_6341_; uint8_t v_isShared_6342_; uint8_t v_isSharedCheck_6346_; 
v_val_6339_ = lean_ctor_get(v___x_6338_, 0);
v_isSharedCheck_6346_ = !lean_is_exclusive(v___x_6338_);
if (v_isSharedCheck_6346_ == 0)
{
v___x_6341_ = v___x_6338_;
v_isShared_6342_ = v_isSharedCheck_6346_;
goto v_resetjp_6340_;
}
else
{
lean_inc(v_val_6339_);
lean_dec(v___x_6338_);
v___x_6341_ = lean_box(0);
v_isShared_6342_ = v_isSharedCheck_6346_;
goto v_resetjp_6340_;
}
v_resetjp_6340_:
{
lean_object* v___x_6344_; 
if (v_isShared_6342_ == 0)
{
v___x_6344_ = v___x_6341_;
goto v_reusejp_6343_;
}
else
{
lean_object* v_reuseFailAlloc_6345_; 
v_reuseFailAlloc_6345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6345_, 0, v_val_6339_);
v___x_6344_ = v_reuseFailAlloc_6345_;
goto v_reusejp_6343_;
}
v_reusejp_6343_:
{
v___y_6228_ = v___y_6312_;
v___y_6229_ = v___y_6313_;
v___y_6230_ = v___y_6314_;
v___y_6231_ = v___y_6315_;
v___y_6232_ = v___x_6330_;
v___y_6233_ = v___y_6328_;
v___y_6234_ = v___y_6321_;
v___y_6235_ = v___x_6336_;
v___y_6236_ = v___y_6329_;
v___y_6237_ = v___y_6324_;
v___y_6238_ = v___y_6325_;
v___y_6239_ = v_patType_x3f_6322_;
v___y_6240_ = v___y_6319_;
v___y_6241_ = v___y_6323_;
v___y_6242_ = v___y_6327_;
v___y_6243_ = v___y_6326_;
v___y_6244_ = v___x_6344_;
goto v___jp_6227_;
}
}
}
}
}
else
{
lean_dec(v___x_6332_);
lean_inc_n(v___y_6317_, 2);
v___y_6193_ = v___y_6329_;
v___y_6194_ = v___y_6312_;
v___y_6195_ = v___y_6326_;
v___y_6196_ = v___y_6321_;
v___y_6197_ = v___y_6319_;
v___y_6198_ = v___y_6325_;
v___y_6199_ = v___y_6323_;
v___y_6200_ = v___y_6315_;
v___y_6201_ = v___y_6313_;
v___y_6202_ = v_patType_x3f_6322_;
v___y_6203_ = v___x_6330_;
v___y_6204_ = v___y_6327_;
v___y_6205_ = v___y_6328_;
v___y_6206_ = v___y_6324_;
v___y_6207_ = v___y_6317_;
v___y_6208_ = v___y_6314_;
v___y_6209_ = v___y_6317_;
goto v___jp_6192_;
}
}
v___jp_6347_:
{
lean_object* v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; lean_object* v___x_6364_; 
v___x_6361_ = l_Lean_Syntax_getArg(v___y_6348_, v___y_6350_);
lean_dec(v___y_6348_);
v___x_6362_ = lean_mk_empty_array_with_capacity(v___x_6247_);
lean_inc(v___y_6349_);
v___x_6363_ = lean_array_push(v___x_6362_, v___y_6349_);
v___x_6364_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v___x_6363_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_, v___y_6358_, v___y_6359_, v___y_6360_);
lean_dec_ref(v___x_6363_);
if (lean_obj_tag(v___x_6364_) == 0)
{
lean_object* v___x_6365_; 
lean_dec_ref_known(v___x_6364_, 1);
v___x_6365_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_6122_, v_tk_6246_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_, v___y_6358_, v___y_6359_, v___y_6360_);
lean_dec(v_tk_6246_);
if (lean_obj_tag(v___x_6365_) == 0)
{
lean_object* v_a_6366_; uint8_t v_kind_6367_; lean_object* v___x_6368_; lean_object* v___x_6369_; lean_object* v___x_6370_; lean_object* v___x_6371_; 
v_a_6366_ = lean_ctor_get(v___x_6365_, 0);
lean_inc(v_a_6366_);
lean_dec_ref_known(v___x_6365_, 1);
v_kind_6367_ = lean_ctor_get_uint8(v_a_6366_, sizeof(void*)*3);
v___x_6368_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_6368_, 0, v_a_6366_);
v___x_6369_ = lean_box(v___y_6351_);
lean_inc(v___y_6349_);
v___x_6370_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_declareMutVar_x3f___boxed), 13, 5);
lean_closure_set(v___x_6370_, 0, lean_box(0));
lean_closure_set(v___x_6370_, 1, v___y_6352_);
lean_closure_set(v___x_6370_, 2, v___y_6349_);
lean_closure_set(v___x_6370_, 3, v___x_6369_);
lean_closure_set(v___x_6370_, 4, v___x_6368_);
v___x_6371_ = l_Lean_Elab_Do_elabDoIdDecl(v___y_6349_, v_xType_x3f_6353_, v___x_6361_, v___x_6370_, v_kind_6367_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_, v___y_6358_, v___y_6359_, v___y_6360_);
return v___x_6371_;
}
else
{
lean_object* v_a_6372_; lean_object* v___x_6374_; uint8_t v_isShared_6375_; uint8_t v_isSharedCheck_6379_; 
lean_dec(v___x_6361_);
lean_dec(v_xType_x3f_6353_);
lean_dec(v___y_6352_);
lean_dec(v___y_6349_);
v_a_6372_ = lean_ctor_get(v___x_6365_, 0);
v_isSharedCheck_6379_ = !lean_is_exclusive(v___x_6365_);
if (v_isSharedCheck_6379_ == 0)
{
v___x_6374_ = v___x_6365_;
v_isShared_6375_ = v_isSharedCheck_6379_;
goto v_resetjp_6373_;
}
else
{
lean_inc(v_a_6372_);
lean_dec(v___x_6365_);
v___x_6374_ = lean_box(0);
v_isShared_6375_ = v_isSharedCheck_6379_;
goto v_resetjp_6373_;
}
v_resetjp_6373_:
{
lean_object* v___x_6377_; 
if (v_isShared_6375_ == 0)
{
v___x_6377_ = v___x_6374_;
goto v_reusejp_6376_;
}
else
{
lean_object* v_reuseFailAlloc_6378_; 
v_reuseFailAlloc_6378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6378_, 0, v_a_6372_);
v___x_6377_ = v_reuseFailAlloc_6378_;
goto v_reusejp_6376_;
}
v_reusejp_6376_:
{
return v___x_6377_;
}
}
}
}
else
{
lean_object* v_a_6380_; lean_object* v___x_6382_; uint8_t v_isShared_6383_; uint8_t v_isSharedCheck_6387_; 
lean_dec(v___x_6361_);
lean_dec(v_xType_x3f_6353_);
lean_dec(v___y_6352_);
lean_dec(v___y_6349_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v_a_6380_ = lean_ctor_get(v___x_6364_, 0);
v_isSharedCheck_6387_ = !lean_is_exclusive(v___x_6364_);
if (v_isSharedCheck_6387_ == 0)
{
v___x_6382_ = v___x_6364_;
v_isShared_6383_ = v_isSharedCheck_6387_;
goto v_resetjp_6381_;
}
else
{
lean_inc(v_a_6380_);
lean_dec(v___x_6364_);
v___x_6382_ = lean_box(0);
v_isShared_6383_ = v_isSharedCheck_6387_;
goto v_resetjp_6381_;
}
v_resetjp_6381_:
{
lean_object* v___x_6385_; 
if (v_isShared_6383_ == 0)
{
v___x_6385_ = v___x_6382_;
goto v_reusejp_6384_;
}
else
{
lean_object* v_reuseFailAlloc_6386_; 
v_reuseFailAlloc_6386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6386_, 0, v_a_6380_);
v___x_6385_ = v_reuseFailAlloc_6386_;
goto v_reusejp_6384_;
}
v_reusejp_6384_:
{
return v___x_6385_;
}
}
}
}
v___jp_6388_:
{
uint8_t v___x_6406_; 
lean_inc(v___y_6392_);
v___x_6406_ = l_Lean_Syntax_isOfKind(v___y_6392_, v___y_6393_);
if (v___x_6406_ == 0)
{
uint8_t v___x_6407_; 
lean_dec(v___y_6398_);
lean_inc(v___y_6392_);
v___x_6407_ = l_Lean_Syntax_isOfKind(v___y_6392_, v___y_6391_);
if (v___x_6407_ == 0)
{
lean_object* v___x_6408_; 
lean_dec(v___y_6392_);
lean_dec(v___y_6390_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v___x_6408_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6408_;
}
else
{
lean_object* v___x_6409_; lean_object* v___x_6410_; uint8_t v___x_6411_; 
v___x_6409_ = l_Lean_Syntax_getArg(v___y_6392_, v___x_6137_);
v___x_6410_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetElse___closed__7));
lean_inc(v___x_6409_);
v___x_6411_ = l_Lean_Syntax_isOfKind(v___x_6409_, v___x_6410_);
if (v___x_6411_ == 0)
{
lean_object* v___x_6412_; uint8_t v___x_6413_; 
lean_dec(v_tk_6246_);
v___x_6412_ = l_Lean_Syntax_getArg(v___y_6392_, v___x_6247_);
v___x_6413_ = l_Lean_Syntax_isNone(v___x_6412_);
if (v___x_6413_ == 0)
{
uint8_t v___x_6414_; 
lean_inc(v___x_6412_);
v___x_6414_ = l_Lean_Syntax_matchesNull(v___x_6412_, v___x_6247_);
if (v___x_6414_ == 0)
{
lean_object* v___x_6415_; 
lean_dec(v___x_6412_);
lean_dec(v___x_6409_);
lean_dec(v___y_6392_);
lean_dec(v___y_6390_);
lean_dec_ref(v_dec_6122_);
v___x_6415_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6415_;
}
else
{
lean_object* v___x_6416_; lean_object* v___x_6417_; uint8_t v___x_6418_; 
v___x_6416_ = l_Lean_Syntax_getArg(v___x_6412_, v___x_6137_);
lean_dec(v___x_6412_);
v___x_6417_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6416_);
v___x_6418_ = l_Lean_Syntax_isOfKind(v___x_6416_, v___x_6417_);
if (v___x_6418_ == 0)
{
lean_object* v___x_6419_; 
lean_dec(v___x_6416_);
lean_dec(v___x_6409_);
lean_dec(v___y_6392_);
lean_dec(v___y_6390_);
lean_dec_ref(v_dec_6122_);
v___x_6419_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6419_;
}
else
{
lean_object* v___x_6420_; lean_object* v___x_6421_; 
v___x_6420_ = l_Lean_Syntax_getArg(v___x_6416_, v___x_6247_);
lean_dec(v___x_6416_);
v___x_6421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6421_, 0, v___x_6420_);
lean_inc(v___x_6409_);
v___y_6312_ = v___y_6389_;
v___y_6313_ = v___x_6411_;
v___y_6314_ = v___y_6390_;
v___y_6315_ = v___x_6409_;
v___y_6316_ = v___y_6392_;
v___y_6317_ = v___y_6395_;
v___y_6318_ = v___y_6394_;
v___y_6319_ = v___y_6396_;
v___y_6320_ = v___y_6397_;
v___y_6321_ = v___x_6409_;
v_patType_x3f_6322_ = v___x_6421_;
v___y_6323_ = v___y_6399_;
v___y_6324_ = v___y_6400_;
v___y_6325_ = v___y_6401_;
v___y_6326_ = v___y_6402_;
v___y_6327_ = v___y_6403_;
v___y_6328_ = v___y_6404_;
v___y_6329_ = v___y_6405_;
goto v___jp_6311_;
}
}
}
else
{
lean_dec(v___x_6412_);
lean_inc(v___y_6395_);
lean_inc(v___x_6409_);
v___y_6312_ = v___y_6389_;
v___y_6313_ = v___x_6411_;
v___y_6314_ = v___y_6390_;
v___y_6315_ = v___x_6409_;
v___y_6316_ = v___y_6392_;
v___y_6317_ = v___y_6395_;
v___y_6318_ = v___y_6394_;
v___y_6319_ = v___y_6396_;
v___y_6320_ = v___y_6397_;
v___y_6321_ = v___x_6409_;
v_patType_x3f_6322_ = v___y_6395_;
v___y_6323_ = v___y_6399_;
v___y_6324_ = v___y_6400_;
v___y_6325_ = v___y_6401_;
v___y_6326_ = v___y_6402_;
v___y_6327_ = v___y_6403_;
v___y_6328_ = v___y_6404_;
v___y_6329_ = v___y_6405_;
goto v___jp_6311_;
}
}
else
{
lean_object* v___x_6422_; lean_object* v___x_6423_; uint8_t v___x_6424_; 
v___x_6422_ = l_Lean_Syntax_getArg(v___x_6409_, v___x_6137_);
v___x_6423_ = l_Lean_Syntax_getArg(v___y_6392_, v___x_6247_);
v___x_6424_ = l_Lean_Syntax_isNone(v___x_6423_);
if (v___x_6424_ == 0)
{
uint8_t v___x_6425_; 
lean_inc(v___x_6423_);
v___x_6425_ = l_Lean_Syntax_matchesNull(v___x_6423_, v___x_6247_);
if (v___x_6425_ == 0)
{
lean_object* v___x_6426_; 
lean_dec(v___x_6423_);
lean_dec(v___x_6422_);
lean_dec(v___x_6409_);
lean_dec(v___y_6392_);
lean_dec(v___y_6390_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v___x_6426_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6426_;
}
else
{
lean_object* v___x_6427_; lean_object* v___x_6428_; uint8_t v___x_6429_; 
v___x_6427_ = l_Lean_Syntax_getArg(v___x_6423_, v___x_6137_);
lean_dec(v___x_6423_);
v___x_6428_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6427_);
v___x_6429_ = l_Lean_Syntax_isOfKind(v___x_6427_, v___x_6428_);
if (v___x_6429_ == 0)
{
lean_object* v___x_6430_; 
lean_dec(v___x_6427_);
lean_dec(v___x_6422_);
lean_dec(v___x_6409_);
lean_dec(v___y_6392_);
lean_dec(v___y_6390_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v___x_6430_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6430_;
}
else
{
lean_object* v___x_6431_; lean_object* v___x_6432_; 
v___x_6431_ = l_Lean_Syntax_getArg(v___x_6427_, v___x_6247_);
lean_dec(v___x_6427_);
v___x_6432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6432_, 0, v___x_6431_);
lean_inc(v___x_6409_);
v___y_6249_ = v___x_6406_;
v___y_6250_ = v___y_6389_;
v___y_6251_ = v___y_6390_;
v___y_6252_ = v___x_6409_;
v___y_6253_ = v___y_6392_;
v___y_6254_ = v___y_6395_;
v___y_6255_ = v___y_6394_;
v___y_6256_ = v___y_6396_;
v___y_6257_ = v___y_6397_;
v___y_6258_ = v___x_6422_;
v___y_6259_ = v___x_6409_;
v_patType_x3f_6260_ = v___x_6432_;
v___y_6261_ = v___y_6399_;
v___y_6262_ = v___y_6400_;
v___y_6263_ = v___y_6401_;
v___y_6264_ = v___y_6402_;
v___y_6265_ = v___y_6403_;
v___y_6266_ = v___y_6404_;
v___y_6267_ = v___y_6405_;
goto v___jp_6248_;
}
}
}
else
{
lean_dec(v___x_6423_);
lean_inc(v___y_6395_);
lean_inc(v___x_6409_);
v___y_6249_ = v___x_6406_;
v___y_6250_ = v___y_6389_;
v___y_6251_ = v___y_6390_;
v___y_6252_ = v___x_6409_;
v___y_6253_ = v___y_6392_;
v___y_6254_ = v___y_6395_;
v___y_6255_ = v___y_6394_;
v___y_6256_ = v___y_6396_;
v___y_6257_ = v___y_6397_;
v___y_6258_ = v___x_6422_;
v___y_6259_ = v___x_6409_;
v_patType_x3f_6260_ = v___y_6395_;
v___y_6261_ = v___y_6399_;
v___y_6262_ = v___y_6400_;
v___y_6263_ = v___y_6401_;
v___y_6264_ = v___y_6402_;
v___y_6265_ = v___y_6403_;
v___y_6266_ = v___y_6404_;
v___y_6267_ = v___y_6405_;
goto v___jp_6248_;
}
}
}
}
else
{
lean_object* v___x_6433_; lean_object* v___x_6434_; uint8_t v___x_6435_; 
lean_dec(v___y_6390_);
v___x_6433_ = l_Lean_Syntax_getArg(v___y_6392_, v___x_6137_);
v___x_6434_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v___x_6433_);
v___x_6435_ = l_Lean_Syntax_isOfKind(v___x_6433_, v___x_6434_);
if (v___x_6435_ == 0)
{
lean_object* v___x_6436_; 
lean_dec(v___x_6433_);
lean_dec(v___y_6398_);
lean_dec(v___y_6392_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v___x_6436_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6436_;
}
else
{
lean_object* v___x_6437_; uint8_t v___x_6438_; 
v___x_6437_ = l_Lean_Syntax_getArg(v___y_6392_, v___x_6247_);
v___x_6438_ = l_Lean_Syntax_isNone(v___x_6437_);
if (v___x_6438_ == 0)
{
uint8_t v___x_6439_; 
lean_inc(v___x_6437_);
v___x_6439_ = l_Lean_Syntax_matchesNull(v___x_6437_, v___x_6247_);
if (v___x_6439_ == 0)
{
lean_object* v___x_6440_; 
lean_dec(v___x_6437_);
lean_dec(v___x_6433_);
lean_dec(v___y_6398_);
lean_dec(v___y_6392_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v___x_6440_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6440_;
}
else
{
lean_object* v___x_6441_; lean_object* v___x_6442_; uint8_t v___x_6443_; 
v___x_6441_ = l_Lean_Syntax_getArg(v___x_6437_, v___x_6137_);
lean_dec(v___x_6437_);
v___x_6442_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6441_);
v___x_6443_ = l_Lean_Syntax_isOfKind(v___x_6441_, v___x_6442_);
if (v___x_6443_ == 0)
{
lean_object* v___x_6444_; 
lean_dec(v___x_6441_);
lean_dec(v___x_6433_);
lean_dec(v___y_6398_);
lean_dec(v___y_6392_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v___x_6444_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6444_;
}
else
{
lean_object* v___x_6445_; lean_object* v___x_6446_; 
v___x_6445_ = l_Lean_Syntax_getArg(v___x_6441_, v___x_6247_);
lean_dec(v___x_6441_);
v___x_6446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6446_, 0, v___x_6445_);
v___y_6348_ = v___y_6392_;
v___y_6349_ = v___x_6433_;
v___y_6350_ = v___y_6394_;
v___y_6351_ = v___y_6396_;
v___y_6352_ = v___y_6398_;
v_xType_x3f_6353_ = v___x_6446_;
v___y_6354_ = v___y_6399_;
v___y_6355_ = v___y_6400_;
v___y_6356_ = v___y_6401_;
v___y_6357_ = v___y_6402_;
v___y_6358_ = v___y_6403_;
v___y_6359_ = v___y_6404_;
v___y_6360_ = v___y_6405_;
goto v___jp_6347_;
}
}
}
else
{
lean_dec(v___x_6437_);
lean_inc(v___y_6395_);
v___y_6348_ = v___y_6392_;
v___y_6349_ = v___x_6433_;
v___y_6350_ = v___y_6394_;
v___y_6351_ = v___y_6396_;
v___y_6352_ = v___y_6398_;
v_xType_x3f_6353_ = v___y_6395_;
v___y_6354_ = v___y_6399_;
v___y_6355_ = v___y_6400_;
v___y_6356_ = v___y_6401_;
v___y_6357_ = v___y_6402_;
v___y_6358_ = v___y_6403_;
v___y_6359_ = v___y_6404_;
v___y_6360_ = v___y_6405_;
goto v___jp_6347_;
}
}
}
}
v___jp_6447_:
{
lean_object* v___x_6466_; lean_object* v___x_6467_; lean_object* v_a_6468_; lean_object* v___x_6470_; uint8_t v_isShared_6471_; uint8_t v_isSharedCheck_6475_; 
lean_dec(v___y_6465_);
lean_dec(v___y_6451_);
lean_dec(v___y_6449_);
v___x_6466_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__1, &l_Lean_Elab_Do_elabDoLetArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1);
v___x_6467_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0___redArg(v___y_6456_, v___x_6466_, v___y_6459_, v___y_6452_, v___y_6458_, v___y_6457_, v___y_6453_, v___y_6455_, v___y_6454_);
lean_dec(v___y_6456_);
v_a_6468_ = lean_ctor_get(v___x_6467_, 0);
v_isSharedCheck_6475_ = !lean_is_exclusive(v___x_6467_);
if (v_isSharedCheck_6475_ == 0)
{
v___x_6470_ = v___x_6467_;
v_isShared_6471_ = v_isSharedCheck_6475_;
goto v_resetjp_6469_;
}
else
{
lean_inc(v_a_6468_);
lean_dec(v___x_6467_);
v___x_6470_ = lean_box(0);
v_isShared_6471_ = v_isSharedCheck_6475_;
goto v_resetjp_6469_;
}
v_resetjp_6469_:
{
lean_object* v___x_6473_; 
if (v_isShared_6471_ == 0)
{
v___x_6473_ = v___x_6470_;
goto v_reusejp_6472_;
}
else
{
lean_object* v_reuseFailAlloc_6474_; 
v_reuseFailAlloc_6474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6474_, 0, v_a_6468_);
v___x_6473_ = v_reuseFailAlloc_6474_;
goto v_reusejp_6472_;
}
v_reusejp_6472_:
{
return v___x_6473_;
}
}
}
v___jp_6476_:
{
lean_object* v___x_6485_; lean_object* v_cfg_6486_; lean_object* v___x_6487_; uint8_t v___x_6488_; 
v___x_6485_ = lean_unsigned_to_nat(2u);
v_cfg_6486_ = l_Lean_Syntax_getArg(v_stx_6121_, v___x_6485_);
v___x_6487_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__3));
lean_inc(v_cfg_6486_);
v___x_6488_ = l_Lean_Syntax_isOfKind(v_cfg_6486_, v___x_6487_);
if (v___x_6488_ == 0)
{
lean_object* v___x_6489_; 
lean_dec(v_cfg_6486_);
lean_dec(v_mutTk_x3f_6477_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
lean_dec(v_stx_6121_);
v___x_6489_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6489_;
}
else
{
lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v___x_6492_; lean_object* v___x_6493_; uint8_t v___x_6494_; lean_object* v___x_6495_; lean_object* v___x_6496_; lean_object* v___x_6497_; 
v___x_6490_ = lean_unsigned_to_nat(3u);
v___x_6491_ = l_Lean_Syntax_getArg(v_stx_6121_, v___x_6490_);
lean_dec(v_stx_6121_);
v___x_6492_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
v___x_6493_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__3));
v___x_6494_ = 0;
v___x_6495_ = lean_box(0);
v___x_6496_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLet___closed__4));
lean_inc(v_cfg_6486_);
v___x_6497_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_cfg_6486_, v_mutTk_x3f_6477_, v___x_6496_, v___y_6478_, v___y_6479_, v___y_6480_, v___y_6481_, v___y_6482_, v___y_6483_, v___y_6484_);
if (lean_obj_tag(v___x_6497_) == 0)
{
lean_object* v_a_6498_; lean_object* v___x_6499_; 
v_a_6498_ = lean_ctor_get(v___x_6497_, 0);
lean_inc(v_a_6498_);
lean_dec_ref_known(v___x_6497_, 1);
v___x_6499_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___redArg(v_a_6498_, v___y_6481_, v___y_6482_, v___y_6483_, v___y_6484_);
if (lean_obj_tag(v___x_6499_) == 0)
{
uint8_t v_nondep_6500_; 
lean_dec_ref_known(v___x_6499_, 1);
v_nondep_6500_ = lean_ctor_get_uint8(v_a_6498_, sizeof(void*)*1);
if (v_nondep_6500_ == 0)
{
uint8_t v_usedOnly_6501_; 
v_usedOnly_6501_ = lean_ctor_get_uint8(v_a_6498_, sizeof(void*)*1 + 1);
if (v_usedOnly_6501_ == 0)
{
uint8_t v_zeta_6502_; 
v_zeta_6502_ = lean_ctor_get_uint8(v_a_6498_, sizeof(void*)*1 + 2);
if (v_zeta_6502_ == 0)
{
lean_object* v_eq_x3f_6503_; 
v_eq_x3f_6503_ = lean_ctor_get(v_a_6498_, 0);
lean_inc(v_eq_x3f_6503_);
lean_dec(v_a_6498_);
if (lean_obj_tag(v_eq_x3f_6503_) == 0)
{
lean_dec(v_cfg_6486_);
lean_inc(v_mutTk_x3f_6477_);
v___y_6389_ = v___x_6487_;
v___y_6390_ = v_mutTk_x3f_6477_;
v___y_6391_ = v___x_6493_;
v___y_6392_ = v___x_6491_;
v___y_6393_ = v___x_6492_;
v___y_6394_ = v___x_6490_;
v___y_6395_ = v___x_6495_;
v___y_6396_ = v___x_6494_;
v___y_6397_ = v___x_6485_;
v___y_6398_ = v_mutTk_x3f_6477_;
v___y_6399_ = v___y_6478_;
v___y_6400_ = v___y_6479_;
v___y_6401_ = v___y_6480_;
v___y_6402_ = v___y_6481_;
v___y_6403_ = v___y_6482_;
v___y_6404_ = v___y_6483_;
v___y_6405_ = v___y_6484_;
goto v___jp_6388_;
}
else
{
lean_dec_ref_known(v_eq_x3f_6503_, 1);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
lean_inc(v_mutTk_x3f_6477_);
v___y_6448_ = v___x_6487_;
v___y_6449_ = v_mutTk_x3f_6477_;
v___y_6450_ = v___x_6493_;
v___y_6451_ = v___x_6491_;
v___y_6452_ = v___y_6479_;
v___y_6453_ = v___y_6482_;
v___y_6454_ = v___y_6484_;
v___y_6455_ = v___y_6483_;
v___y_6456_ = v_cfg_6486_;
v___y_6457_ = v___y_6481_;
v___y_6458_ = v___y_6480_;
v___y_6459_ = v___y_6478_;
v___y_6460_ = v___x_6492_;
v___y_6461_ = v___x_6495_;
v___y_6462_ = v___x_6490_;
v___y_6463_ = v___x_6494_;
v___y_6464_ = v___x_6485_;
v___y_6465_ = v_mutTk_x3f_6477_;
goto v___jp_6447_;
}
}
else
{
lean_dec(v_a_6498_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
lean_inc(v_mutTk_x3f_6477_);
v___y_6448_ = v___x_6487_;
v___y_6449_ = v_mutTk_x3f_6477_;
v___y_6450_ = v___x_6493_;
v___y_6451_ = v___x_6491_;
v___y_6452_ = v___y_6479_;
v___y_6453_ = v___y_6482_;
v___y_6454_ = v___y_6484_;
v___y_6455_ = v___y_6483_;
v___y_6456_ = v_cfg_6486_;
v___y_6457_ = v___y_6481_;
v___y_6458_ = v___y_6480_;
v___y_6459_ = v___y_6478_;
v___y_6460_ = v___x_6492_;
v___y_6461_ = v___x_6495_;
v___y_6462_ = v___x_6490_;
v___y_6463_ = v___x_6494_;
v___y_6464_ = v___x_6485_;
v___y_6465_ = v_mutTk_x3f_6477_;
goto v___jp_6447_;
}
}
else
{
lean_dec(v_a_6498_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
lean_inc(v_mutTk_x3f_6477_);
v___y_6448_ = v___x_6487_;
v___y_6449_ = v_mutTk_x3f_6477_;
v___y_6450_ = v___x_6493_;
v___y_6451_ = v___x_6491_;
v___y_6452_ = v___y_6479_;
v___y_6453_ = v___y_6482_;
v___y_6454_ = v___y_6484_;
v___y_6455_ = v___y_6483_;
v___y_6456_ = v_cfg_6486_;
v___y_6457_ = v___y_6481_;
v___y_6458_ = v___y_6480_;
v___y_6459_ = v___y_6478_;
v___y_6460_ = v___x_6492_;
v___y_6461_ = v___x_6495_;
v___y_6462_ = v___x_6490_;
v___y_6463_ = v___x_6494_;
v___y_6464_ = v___x_6485_;
v___y_6465_ = v_mutTk_x3f_6477_;
goto v___jp_6447_;
}
}
else
{
lean_dec(v_a_6498_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
lean_inc(v_mutTk_x3f_6477_);
v___y_6448_ = v___x_6487_;
v___y_6449_ = v_mutTk_x3f_6477_;
v___y_6450_ = v___x_6493_;
v___y_6451_ = v___x_6491_;
v___y_6452_ = v___y_6479_;
v___y_6453_ = v___y_6482_;
v___y_6454_ = v___y_6484_;
v___y_6455_ = v___y_6483_;
v___y_6456_ = v_cfg_6486_;
v___y_6457_ = v___y_6481_;
v___y_6458_ = v___y_6480_;
v___y_6459_ = v___y_6478_;
v___y_6460_ = v___x_6492_;
v___y_6461_ = v___x_6495_;
v___y_6462_ = v___x_6490_;
v___y_6463_ = v___x_6494_;
v___y_6464_ = v___x_6485_;
v___y_6465_ = v_mutTk_x3f_6477_;
goto v___jp_6447_;
}
}
else
{
lean_object* v_a_6504_; lean_object* v___x_6506_; uint8_t v_isShared_6507_; uint8_t v_isSharedCheck_6511_; 
lean_dec(v_a_6498_);
lean_dec(v___x_6491_);
lean_dec(v_cfg_6486_);
lean_dec(v_mutTk_x3f_6477_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v_a_6504_ = lean_ctor_get(v___x_6499_, 0);
v_isSharedCheck_6511_ = !lean_is_exclusive(v___x_6499_);
if (v_isSharedCheck_6511_ == 0)
{
v___x_6506_ = v___x_6499_;
v_isShared_6507_ = v_isSharedCheck_6511_;
goto v_resetjp_6505_;
}
else
{
lean_inc(v_a_6504_);
lean_dec(v___x_6499_);
v___x_6506_ = lean_box(0);
v_isShared_6507_ = v_isSharedCheck_6511_;
goto v_resetjp_6505_;
}
v_resetjp_6505_:
{
lean_object* v___x_6509_; 
if (v_isShared_6507_ == 0)
{
v___x_6509_ = v___x_6506_;
goto v_reusejp_6508_;
}
else
{
lean_object* v_reuseFailAlloc_6510_; 
v_reuseFailAlloc_6510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6510_, 0, v_a_6504_);
v___x_6509_ = v_reuseFailAlloc_6510_;
goto v_reusejp_6508_;
}
v_reusejp_6508_:
{
return v___x_6509_;
}
}
}
}
else
{
lean_object* v_a_6512_; lean_object* v___x_6514_; uint8_t v_isShared_6515_; uint8_t v_isSharedCheck_6519_; 
lean_dec(v___x_6491_);
lean_dec(v_cfg_6486_);
lean_dec(v_mutTk_x3f_6477_);
lean_dec(v_tk_6246_);
lean_dec_ref(v_dec_6122_);
v_a_6512_ = lean_ctor_get(v___x_6497_, 0);
v_isSharedCheck_6519_ = !lean_is_exclusive(v___x_6497_);
if (v_isSharedCheck_6519_ == 0)
{
v___x_6514_ = v___x_6497_;
v_isShared_6515_ = v_isSharedCheck_6519_;
goto v_resetjp_6513_;
}
else
{
lean_inc(v_a_6512_);
lean_dec(v___x_6497_);
v___x_6514_ = lean_box(0);
v_isShared_6515_ = v_isSharedCheck_6519_;
goto v_resetjp_6513_;
}
v_resetjp_6513_:
{
lean_object* v___x_6517_; 
if (v_isShared_6515_ == 0)
{
v___x_6517_ = v___x_6514_;
goto v_reusejp_6516_;
}
else
{
lean_object* v_reuseFailAlloc_6518_; 
v_reuseFailAlloc_6518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6518_, 0, v_a_6512_);
v___x_6517_ = v_reuseFailAlloc_6518_;
goto v_reusejp_6516_;
}
v_reusejp_6516_:
{
return v___x_6517_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object* v_stx_6527_, lean_object* v_dec_6528_, lean_object* v_a_6529_, lean_object* v_a_6530_, lean_object* v_a_6531_, lean_object* v_a_6532_, lean_object* v_a_6533_, lean_object* v_a_6534_, lean_object* v_a_6535_, lean_object* v_a_6536_){
_start:
{
lean_object* v_res_6537_; 
v_res_6537_ = l_Lean_Elab_Do_elabDoLetArrow(v_stx_6527_, v_dec_6528_, v_a_6529_, v_a_6530_, v_a_6531_, v_a_6532_, v_a_6533_, v_a_6534_, v_a_6535_);
lean_dec(v_a_6535_);
lean_dec_ref(v_a_6534_);
lean_dec(v_a_6533_);
lean_dec_ref(v_a_6532_);
lean_dec(v_a_6531_);
lean_dec_ref(v_a_6530_);
lean_dec_ref(v_a_6529_);
return v_res_6537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1(){
_start:
{
lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; 
v___x_6545_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_6546_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__15));
v___x_6547_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1));
v___x_6548_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___boxed), 10, 0);
v___x_6549_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6545_, v___x_6546_, v___x_6547_, v___x_6548_);
return v___x_6549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object* v_a_6550_){
_start:
{
lean_object* v_res_6551_; 
v_res_6551_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
return v_res_6551_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__3(void){
_start:
{
lean_object* v___x_6559_; lean_object* v___x_6560_; 
v___x_6559_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__2));
v___x_6560_ = l_Lean_stringToMessageData(v___x_6559_);
return v___x_6560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object* v_stx_6561_, lean_object* v_dec_6562_, lean_object* v_a_6563_, lean_object* v_a_6564_, lean_object* v_a_6565_, lean_object* v_a_6566_, lean_object* v_a_6567_, lean_object* v_a_6568_, lean_object* v_a_6569_){
_start:
{
lean_object* v___x_6571_; uint8_t v___x_6572_; 
v___x_6571_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__1));
lean_inc(v_stx_6561_);
v___x_6572_ = l_Lean_Syntax_isOfKind(v_stx_6561_, v___x_6571_);
if (v___x_6572_ == 0)
{
lean_object* v___x_6573_; 
lean_dec_ref(v_dec_6562_);
lean_dec(v_stx_6561_);
v___x_6573_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6573_;
}
else
{
lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; uint8_t v___x_6577_; 
v___x_6574_ = lean_unsigned_to_nat(0u);
v___x_6575_ = l_Lean_Syntax_getArg(v_stx_6561_, v___x_6574_);
lean_dec(v_stx_6561_);
v___x_6576_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__17));
lean_inc(v___x_6575_);
v___x_6577_ = l_Lean_Syntax_isOfKind(v___x_6575_, v___x_6576_);
if (v___x_6577_ == 0)
{
lean_object* v___x_6578_; uint8_t v___x_6579_; 
v___x_6578_ = ((lean_object*)(l_Lean_Elab_Do_elabDoLetArrow___closed__3));
lean_inc(v___x_6575_);
v___x_6579_ = l_Lean_Syntax_isOfKind(v___x_6575_, v___x_6578_);
if (v___x_6579_ == 0)
{
lean_object* v___x_6580_; 
lean_dec(v___x_6575_);
lean_dec_ref(v_dec_6562_);
v___x_6580_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6580_;
}
else
{
lean_object* v___x_6581_; lean_object* v___y_6583_; lean_object* v___y_6584_; lean_object* v___y_6585_; lean_object* v___y_6586_; lean_object* v___y_6587_; lean_object* v___y_6588_; lean_object* v___y_6589_; lean_object* v___y_6590_; lean_object* v___y_6591_; lean_object* v_t_x3f_6620_; lean_object* v___y_6621_; lean_object* v___y_6622_; lean_object* v___y_6623_; lean_object* v___y_6624_; lean_object* v___y_6625_; lean_object* v___y_6626_; lean_object* v___y_6627_; lean_object* v___x_6645_; lean_object* v___x_6646_; uint8_t v___x_6647_; 
v___x_6581_ = l_Lean_Syntax_getArg(v___x_6575_, v___x_6574_);
v___x_6645_ = lean_unsigned_to_nat(1u);
v___x_6646_ = l_Lean_Syntax_getArg(v___x_6575_, v___x_6645_);
v___x_6647_ = l_Lean_Syntax_isNone(v___x_6646_);
if (v___x_6647_ == 0)
{
uint8_t v___x_6648_; 
lean_inc(v___x_6646_);
v___x_6648_ = l_Lean_Syntax_matchesNull(v___x_6646_, v___x_6645_);
if (v___x_6648_ == 0)
{
lean_object* v___x_6649_; 
lean_dec(v___x_6646_);
lean_dec(v___x_6581_);
lean_dec(v___x_6575_);
lean_dec_ref(v_dec_6562_);
v___x_6649_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6649_;
}
else
{
lean_object* v___x_6650_; lean_object* v___x_6651_; uint8_t v___x_6652_; 
v___x_6650_ = l_Lean_Syntax_getArg(v___x_6646_, v___x_6574_);
lean_dec(v___x_6646_);
v___x_6651_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6650_);
v___x_6652_ = l_Lean_Syntax_isOfKind(v___x_6650_, v___x_6651_);
if (v___x_6652_ == 0)
{
lean_object* v___x_6653_; 
lean_dec(v___x_6650_);
lean_dec(v___x_6581_);
lean_dec(v___x_6575_);
lean_dec_ref(v_dec_6562_);
v___x_6653_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6653_;
}
else
{
lean_object* v_t_x3f_6654_; lean_object* v___x_6655_; 
v_t_x3f_6654_ = l_Lean_Syntax_getArg(v___x_6650_, v___x_6645_);
lean_dec(v___x_6650_);
v___x_6655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6655_, 0, v_t_x3f_6654_);
v_t_x3f_6620_ = v___x_6655_;
v___y_6621_ = v_a_6563_;
v___y_6622_ = v_a_6564_;
v___y_6623_ = v_a_6565_;
v___y_6624_ = v_a_6566_;
v___y_6625_ = v_a_6567_;
v___y_6626_ = v_a_6568_;
v___y_6627_ = v_a_6569_;
goto v___jp_6619_;
}
}
}
else
{
lean_object* v___x_6656_; 
lean_dec(v___x_6646_);
v___x_6656_ = lean_box(0);
v_t_x3f_6620_ = v___x_6656_;
v___y_6621_ = v_a_6563_;
v___y_6622_ = v_a_6564_;
v___y_6623_ = v_a_6565_;
v___y_6624_ = v_a_6566_;
v___y_6625_ = v_a_6567_;
v___y_6626_ = v_a_6568_;
v___y_6627_ = v_a_6569_;
goto v___jp_6619_;
}
v___jp_6582_:
{
lean_object* v___x_6592_; lean_object* v___x_6593_; 
v___x_6592_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6593_ = l_Lean_Core_mkFreshUserName(v___x_6592_, v___y_6590_, v___y_6591_);
if (lean_obj_tag(v___x_6593_) == 0)
{
lean_object* v_a_6594_; lean_object* v_ref_6595_; lean_object* v___x_6596_; lean_object* v___x_6597_; lean_object* v___x_6598_; lean_object* v___x_6599_; lean_object* v___x_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; lean_object* v___x_6603_; lean_object* v___x_6604_; lean_object* v___x_6605_; uint8_t v_kind_6606_; lean_object* v___x_6607_; lean_object* v___x_6608_; lean_object* v___x_6609_; lean_object* v___x_6610_; 
v_a_6594_ = lean_ctor_get(v___x_6593_, 0);
lean_inc(v_a_6594_);
lean_dec_ref_known(v___x_6593_, 1);
v_ref_6595_ = lean_ctor_get(v___y_6590_, 2);
v___x_6596_ = l_Lean_mkIdentFrom(v___x_6581_, v_a_6594_, v___x_6577_);
v___x_6597_ = l_Lean_SourceInfo_fromRef(v_ref_6595_, v___x_6577_);
v___x_6598_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_6599_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10));
v___x_6600_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6601_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_6597_, 3);
v___x_6602_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6602_, 0, v___x_6597_);
lean_ctor_set(v___x_6602_, 1, v___x_6600_);
lean_ctor_set(v___x_6602_, 2, v___x_6601_);
v___x_6603_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6604_, 0, v___x_6597_);
lean_ctor_set(v___x_6604_, 1, v___x_6603_);
lean_inc(v___x_6596_);
lean_inc_ref(v___x_6602_);
v___x_6605_ = l_Lean_Syntax_node5(v___x_6597_, v___x_6599_, v___x_6581_, v___x_6602_, v___x_6602_, v___x_6604_, v___x_6596_);
v_kind_6606_ = lean_ctor_get_uint8(v_dec_6562_, sizeof(void*)*3);
v___x_6607_ = l_Lean_Syntax_node1(v___x_6597_, v___x_6598_, v___x_6605_);
v___x_6608_ = lean_box(v___x_6572_);
v___x_6609_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoElem___boxed), 11, 3);
lean_closure_set(v___x_6609_, 0, v___x_6607_);
lean_closure_set(v___x_6609_, 1, v_dec_6562_);
lean_closure_set(v___x_6609_, 2, v___x_6608_);
v___x_6610_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6596_, v___y_6584_, v___y_6583_, v___x_6609_, v_kind_6606_, v___y_6585_, v___y_6586_, v___y_6587_, v___y_6588_, v___y_6589_, v___y_6590_, v___y_6591_);
return v___x_6610_;
}
else
{
lean_object* v_a_6611_; lean_object* v___x_6613_; uint8_t v_isShared_6614_; uint8_t v_isSharedCheck_6618_; 
lean_dec(v___y_6584_);
lean_dec(v___y_6583_);
lean_dec(v___x_6581_);
lean_dec_ref(v_dec_6562_);
v_a_6611_ = lean_ctor_get(v___x_6593_, 0);
v_isSharedCheck_6618_ = !lean_is_exclusive(v___x_6593_);
if (v_isSharedCheck_6618_ == 0)
{
v___x_6613_ = v___x_6593_;
v_isShared_6614_ = v_isSharedCheck_6618_;
goto v_resetjp_6612_;
}
else
{
lean_inc(v_a_6611_);
lean_dec(v___x_6593_);
v___x_6613_ = lean_box(0);
v_isShared_6614_ = v_isSharedCheck_6618_;
goto v_resetjp_6612_;
}
v_resetjp_6612_:
{
lean_object* v___x_6616_; 
if (v_isShared_6614_ == 0)
{
v___x_6616_ = v___x_6613_;
goto v_reusejp_6615_;
}
else
{
lean_object* v_reuseFailAlloc_6617_; 
v_reuseFailAlloc_6617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6617_, 0, v_a_6611_);
v___x_6616_ = v_reuseFailAlloc_6617_;
goto v_reusejp_6615_;
}
v_reusejp_6615_:
{
return v___x_6616_;
}
}
}
}
v___jp_6619_:
{
lean_object* v___x_6628_; lean_object* v_rhs_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; uint8_t v___x_6632_; 
v___x_6628_ = lean_unsigned_to_nat(3u);
v_rhs_6629_ = l_Lean_Syntax_getArg(v___x_6575_, v___x_6628_);
v___x_6630_ = lean_unsigned_to_nat(4u);
v___x_6631_ = l_Lean_Syntax_getArg(v___x_6575_, v___x_6630_);
lean_dec(v___x_6575_);
v___x_6632_ = l_Lean_Syntax_isNone(v___x_6631_);
if (v___x_6632_ == 0)
{
uint8_t v___x_6633_; 
lean_dec(v_rhs_6629_);
lean_dec(v_t_x3f_6620_);
lean_dec(v___x_6581_);
lean_dec_ref(v_dec_6562_);
v___x_6633_ = l_Lean_Syntax_matchesNull(v___x_6631_, v___x_6628_);
if (v___x_6633_ == 0)
{
lean_object* v___x_6634_; 
v___x_6634_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6634_;
}
else
{
lean_object* v___x_6635_; lean_object* v___x_6636_; lean_object* v_a_6637_; lean_object* v___x_6639_; uint8_t v_isShared_6640_; uint8_t v_isSharedCheck_6644_; 
v___x_6635_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassignArrow___closed__3, &l_Lean_Elab_Do_elabDoReassignArrow___closed__3_once, _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__3);
v___x_6636_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_LetOrReassign_checkMutVars_spec__0_spec__0___redArg(v___x_6635_, v___y_6624_, v___y_6625_, v___y_6626_, v___y_6627_);
v_a_6637_ = lean_ctor_get(v___x_6636_, 0);
v_isSharedCheck_6644_ = !lean_is_exclusive(v___x_6636_);
if (v_isSharedCheck_6644_ == 0)
{
v___x_6639_ = v___x_6636_;
v_isShared_6640_ = v_isSharedCheck_6644_;
goto v_resetjp_6638_;
}
else
{
lean_inc(v_a_6637_);
lean_dec(v___x_6636_);
v___x_6639_ = lean_box(0);
v_isShared_6640_ = v_isSharedCheck_6644_;
goto v_resetjp_6638_;
}
v_resetjp_6638_:
{
lean_object* v___x_6642_; 
if (v_isShared_6640_ == 0)
{
v___x_6642_ = v___x_6639_;
goto v_reusejp_6641_;
}
else
{
lean_object* v_reuseFailAlloc_6643_; 
v_reuseFailAlloc_6643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6643_, 0, v_a_6637_);
v___x_6642_ = v_reuseFailAlloc_6643_;
goto v_reusejp_6641_;
}
v_reusejp_6641_:
{
return v___x_6642_;
}
}
}
}
else
{
lean_dec(v___x_6631_);
v___y_6583_ = v_rhs_6629_;
v___y_6584_ = v_t_x3f_6620_;
v___y_6585_ = v___y_6621_;
v___y_6586_ = v___y_6622_;
v___y_6587_ = v___y_6623_;
v___y_6588_ = v___y_6624_;
v___y_6589_ = v___y_6625_;
v___y_6590_ = v___y_6626_;
v___y_6591_ = v___y_6627_;
goto v___jp_6582_;
}
}
}
}
else
{
lean_object* v_x_6657_; lean_object* v___y_6659_; lean_object* v_t_6660_; lean_object* v___y_6661_; lean_object* v___y_6662_; lean_object* v___y_6663_; lean_object* v___y_6664_; lean_object* v___y_6665_; lean_object* v___y_6666_; lean_object* v___y_6667_; lean_object* v_t_x3f_6700_; lean_object* v___y_6701_; lean_object* v___y_6702_; lean_object* v___y_6703_; lean_object* v___y_6704_; lean_object* v___y_6705_; lean_object* v___y_6706_; lean_object* v___y_6707_; lean_object* v___x_6742_; uint8_t v___x_6743_; 
v_x_6657_ = l_Lean_Syntax_getArg(v___x_6575_, v___x_6574_);
v___x_6742_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43));
lean_inc(v_x_6657_);
v___x_6743_ = l_Lean_Syntax_isOfKind(v_x_6657_, v___x_6742_);
if (v___x_6743_ == 0)
{
lean_object* v___x_6744_; 
lean_dec(v_x_6657_);
lean_dec(v___x_6575_);
lean_dec_ref(v_dec_6562_);
v___x_6744_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6744_;
}
else
{
lean_object* v___x_6745_; lean_object* v___x_6746_; uint8_t v___x_6747_; 
v___x_6745_ = lean_unsigned_to_nat(1u);
v___x_6746_ = l_Lean_Syntax_getArg(v___x_6575_, v___x_6745_);
v___x_6747_ = l_Lean_Syntax_isNone(v___x_6746_);
if (v___x_6747_ == 0)
{
uint8_t v___x_6748_; 
lean_inc(v___x_6746_);
v___x_6748_ = l_Lean_Syntax_matchesNull(v___x_6746_, v___x_6745_);
if (v___x_6748_ == 0)
{
lean_object* v___x_6749_; 
lean_dec(v___x_6746_);
lean_dec(v_x_6657_);
lean_dec(v___x_6575_);
lean_dec_ref(v_dec_6562_);
v___x_6749_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6749_;
}
else
{
lean_object* v___x_6750_; lean_object* v___x_6751_; uint8_t v___x_6752_; 
v___x_6750_ = l_Lean_Syntax_getArg(v___x_6746_, v___x_6574_);
lean_dec(v___x_6746_);
v___x_6751_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39));
lean_inc(v___x_6750_);
v___x_6752_ = l_Lean_Syntax_isOfKind(v___x_6750_, v___x_6751_);
if (v___x_6752_ == 0)
{
lean_object* v___x_6753_; 
lean_dec(v___x_6750_);
lean_dec(v_x_6657_);
lean_dec(v___x_6575_);
lean_dec_ref(v_dec_6562_);
v___x_6753_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_wrapErasedDecl_spec__0___redArg();
return v___x_6753_;
}
else
{
lean_object* v_t_x3f_6754_; lean_object* v___x_6755_; 
v_t_x3f_6754_ = l_Lean_Syntax_getArg(v___x_6750_, v___x_6745_);
lean_dec(v___x_6750_);
v___x_6755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6755_, 0, v_t_x3f_6754_);
v_t_x3f_6700_ = v___x_6755_;
v___y_6701_ = v_a_6563_;
v___y_6702_ = v_a_6564_;
v___y_6703_ = v_a_6565_;
v___y_6704_ = v_a_6566_;
v___y_6705_ = v_a_6567_;
v___y_6706_ = v_a_6568_;
v___y_6707_ = v_a_6569_;
goto v___jp_6699_;
}
}
}
else
{
lean_object* v___x_6756_; 
lean_dec(v___x_6746_);
v___x_6756_ = lean_box(0);
v_t_x3f_6700_ = v___x_6756_;
v___y_6701_ = v_a_6563_;
v___y_6702_ = v_a_6564_;
v___y_6703_ = v_a_6565_;
v___y_6704_ = v_a_6566_;
v___y_6705_ = v_a_6567_;
v___y_6706_ = v_a_6568_;
v___y_6707_ = v_a_6569_;
goto v___jp_6699_;
}
}
v___jp_6658_:
{
lean_object* v___x_6668_; lean_object* v___x_6669_; 
v___x_6668_ = ((lean_object*)(l_Lean_Elab_Do_expandDoErasedArrow___closed__13));
v___x_6669_ = l_Lean_Core_mkFreshUserName(v___x_6668_, v___y_6666_, v___y_6667_);
if (lean_obj_tag(v___x_6669_) == 0)
{
lean_object* v_a_6670_; lean_object* v_ref_6671_; uint8_t v___x_6672_; lean_object* v___x_6673_; lean_object* v___x_6674_; lean_object* v___x_6675_; lean_object* v___x_6676_; lean_object* v___x_6677_; lean_object* v___x_6678_; lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v___x_6681_; lean_object* v___x_6682_; lean_object* v___x_6683_; lean_object* v___x_6684_; uint8_t v_kind_6685_; lean_object* v___x_6686_; lean_object* v___x_6687_; lean_object* v___x_6688_; lean_object* v___x_6689_; lean_object* v___x_6690_; 
v_a_6670_ = lean_ctor_get(v___x_6669_, 0);
lean_inc(v_a_6670_);
lean_dec_ref_known(v___x_6669_, 1);
v_ref_6671_ = lean_ctor_get(v___y_6666_, 2);
v___x_6672_ = 0;
v___x_6673_ = l_Lean_mkIdentFrom(v_x_6657_, v_a_6670_, v___x_6672_);
v___x_6674_ = l_Lean_SourceInfo_fromRef(v_ref_6671_, v___x_6672_);
v___x_6675_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassign___closed__1));
v___x_6676_ = ((lean_object*)(l_Lean_Elab_Do_elabDoErased___closed__4));
v___x_6677_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41));
lean_inc_n(v___x_6674_, 4);
v___x_6678_ = l_Lean_Syntax_node1(v___x_6674_, v___x_6677_, v_x_6657_);
v___x_6679_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12));
v___x_6680_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_6681_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6681_, 0, v___x_6674_);
lean_ctor_set(v___x_6681_, 1, v___x_6679_);
lean_ctor_set(v___x_6681_, 2, v___x_6680_);
v___x_6682_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14));
v___x_6683_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6683_, 0, v___x_6674_);
lean_ctor_set(v___x_6683_, 1, v___x_6682_);
lean_inc(v___x_6673_);
lean_inc_ref(v___x_6681_);
v___x_6684_ = l_Lean_Syntax_node5(v___x_6674_, v___x_6676_, v___x_6678_, v___x_6681_, v___x_6681_, v___x_6683_, v___x_6673_);
v_kind_6685_ = lean_ctor_get_uint8(v_dec_6562_, sizeof(void*)*3);
v___x_6686_ = l_Lean_Syntax_node1(v___x_6674_, v___x_6675_, v___x_6684_);
v___x_6687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6687_, 0, v_t_6660_);
v___x_6688_ = lean_box(v___x_6572_);
v___x_6689_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoElem___boxed), 11, 3);
lean_closure_set(v___x_6689_, 0, v___x_6686_);
lean_closure_set(v___x_6689_, 1, v_dec_6562_);
lean_closure_set(v___x_6689_, 2, v___x_6688_);
v___x_6690_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_6673_, v___x_6687_, v___y_6659_, v___x_6689_, v_kind_6685_, v___y_6661_, v___y_6662_, v___y_6663_, v___y_6664_, v___y_6665_, v___y_6666_, v___y_6667_);
return v___x_6690_;
}
else
{
lean_object* v_a_6691_; lean_object* v___x_6693_; uint8_t v_isShared_6694_; uint8_t v_isSharedCheck_6698_; 
lean_dec(v_t_6660_);
lean_dec(v___y_6659_);
lean_dec(v_x_6657_);
lean_dec_ref(v_dec_6562_);
v_a_6691_ = lean_ctor_get(v___x_6669_, 0);
v_isSharedCheck_6698_ = !lean_is_exclusive(v___x_6669_);
if (v_isSharedCheck_6698_ == 0)
{
v___x_6693_ = v___x_6669_;
v_isShared_6694_ = v_isSharedCheck_6698_;
goto v_resetjp_6692_;
}
else
{
lean_inc(v_a_6691_);
lean_dec(v___x_6669_);
v___x_6693_ = lean_box(0);
v_isShared_6694_ = v_isSharedCheck_6698_;
goto v_resetjp_6692_;
}
v_resetjp_6692_:
{
lean_object* v___x_6696_; 
if (v_isShared_6694_ == 0)
{
v___x_6696_ = v___x_6693_;
goto v_reusejp_6695_;
}
else
{
lean_object* v_reuseFailAlloc_6697_; 
v_reuseFailAlloc_6697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6697_, 0, v_a_6691_);
v___x_6696_ = v_reuseFailAlloc_6697_;
goto v_reusejp_6695_;
}
v_reusejp_6695_:
{
return v___x_6696_;
}
}
}
}
v___jp_6699_:
{
lean_object* v___x_6708_; lean_object* v_rhs_6709_; lean_object* v___x_6710_; 
v___x_6708_ = lean_unsigned_to_nat(3u);
v_rhs_6709_ = l_Lean_Syntax_getArg(v___x_6575_, v___x_6708_);
lean_dec(v___x_6575_);
v___x_6710_ = l_Lean_Elab_Do_throwUnlessMutVarDeclared(v_x_6657_, v___y_6701_, v___y_6702_, v___y_6703_, v___y_6704_, v___y_6705_, v___y_6706_, v___y_6707_);
if (lean_obj_tag(v___x_6710_) == 0)
{
lean_dec_ref_known(v___x_6710_, 1);
if (lean_obj_tag(v_t_x3f_6700_) == 0)
{
lean_object* v___x_6711_; lean_object* v___x_6712_; 
v___x_6711_ = l_Lean_TSyntax_getId(v_x_6657_);
v___x_6712_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_6711_, v___y_6704_, v___y_6705_, v___y_6706_, v___y_6707_);
if (lean_obj_tag(v___x_6712_) == 0)
{
lean_object* v_a_6713_; lean_object* v___x_6714_; lean_object* v___x_6715_; 
v_a_6713_ = lean_ctor_get(v___x_6712_, 0);
lean_inc(v_a_6713_);
lean_dec_ref_known(v___x_6712_, 1);
v___x_6714_ = l_Lean_LocalDecl_type(v_a_6713_);
lean_dec(v_a_6713_);
v___x_6715_ = l_Lean_Elab_Term_exprToSyntax(v___x_6714_, v___y_6702_, v___y_6703_, v___y_6704_, v___y_6705_, v___y_6706_, v___y_6707_);
if (lean_obj_tag(v___x_6715_) == 0)
{
lean_object* v_a_6716_; 
v_a_6716_ = lean_ctor_get(v___x_6715_, 0);
lean_inc(v_a_6716_);
lean_dec_ref_known(v___x_6715_, 1);
v___y_6659_ = v_rhs_6709_;
v_t_6660_ = v_a_6716_;
v___y_6661_ = v___y_6701_;
v___y_6662_ = v___y_6702_;
v___y_6663_ = v___y_6703_;
v___y_6664_ = v___y_6704_;
v___y_6665_ = v___y_6705_;
v___y_6666_ = v___y_6706_;
v___y_6667_ = v___y_6707_;
goto v___jp_6658_;
}
else
{
lean_object* v_a_6717_; lean_object* v___x_6719_; uint8_t v_isShared_6720_; uint8_t v_isSharedCheck_6724_; 
lean_dec(v_rhs_6709_);
lean_dec(v_x_6657_);
lean_dec_ref(v_dec_6562_);
v_a_6717_ = lean_ctor_get(v___x_6715_, 0);
v_isSharedCheck_6724_ = !lean_is_exclusive(v___x_6715_);
if (v_isSharedCheck_6724_ == 0)
{
v___x_6719_ = v___x_6715_;
v_isShared_6720_ = v_isSharedCheck_6724_;
goto v_resetjp_6718_;
}
else
{
lean_inc(v_a_6717_);
lean_dec(v___x_6715_);
v___x_6719_ = lean_box(0);
v_isShared_6720_ = v_isSharedCheck_6724_;
goto v_resetjp_6718_;
}
v_resetjp_6718_:
{
lean_object* v___x_6722_; 
if (v_isShared_6720_ == 0)
{
v___x_6722_ = v___x_6719_;
goto v_reusejp_6721_;
}
else
{
lean_object* v_reuseFailAlloc_6723_; 
v_reuseFailAlloc_6723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6723_, 0, v_a_6717_);
v___x_6722_ = v_reuseFailAlloc_6723_;
goto v_reusejp_6721_;
}
v_reusejp_6721_:
{
return v___x_6722_;
}
}
}
}
else
{
lean_object* v_a_6725_; lean_object* v___x_6727_; uint8_t v_isShared_6728_; uint8_t v_isSharedCheck_6732_; 
lean_dec(v_rhs_6709_);
lean_dec(v_x_6657_);
lean_dec_ref(v_dec_6562_);
v_a_6725_ = lean_ctor_get(v___x_6712_, 0);
v_isSharedCheck_6732_ = !lean_is_exclusive(v___x_6712_);
if (v_isSharedCheck_6732_ == 0)
{
v___x_6727_ = v___x_6712_;
v_isShared_6728_ = v_isSharedCheck_6732_;
goto v_resetjp_6726_;
}
else
{
lean_inc(v_a_6725_);
lean_dec(v___x_6712_);
v___x_6727_ = lean_box(0);
v_isShared_6728_ = v_isSharedCheck_6732_;
goto v_resetjp_6726_;
}
v_resetjp_6726_:
{
lean_object* v___x_6730_; 
if (v_isShared_6728_ == 0)
{
v___x_6730_ = v___x_6727_;
goto v_reusejp_6729_;
}
else
{
lean_object* v_reuseFailAlloc_6731_; 
v_reuseFailAlloc_6731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6731_, 0, v_a_6725_);
v___x_6730_ = v_reuseFailAlloc_6731_;
goto v_reusejp_6729_;
}
v_reusejp_6729_:
{
return v___x_6730_;
}
}
}
}
else
{
lean_object* v_val_6733_; 
v_val_6733_ = lean_ctor_get(v_t_x3f_6700_, 0);
lean_inc(v_val_6733_);
lean_dec_ref_known(v_t_x3f_6700_, 1);
v___y_6659_ = v_rhs_6709_;
v_t_6660_ = v_val_6733_;
v___y_6661_ = v___y_6701_;
v___y_6662_ = v___y_6702_;
v___y_6663_ = v___y_6703_;
v___y_6664_ = v___y_6704_;
v___y_6665_ = v___y_6705_;
v___y_6666_ = v___y_6706_;
v___y_6667_ = v___y_6707_;
goto v___jp_6658_;
}
}
else
{
lean_object* v_a_6734_; lean_object* v___x_6736_; uint8_t v_isShared_6737_; uint8_t v_isSharedCheck_6741_; 
lean_dec(v_rhs_6709_);
lean_dec(v_t_x3f_6700_);
lean_dec(v_x_6657_);
lean_dec_ref(v_dec_6562_);
v_a_6734_ = lean_ctor_get(v___x_6710_, 0);
v_isSharedCheck_6741_ = !lean_is_exclusive(v___x_6710_);
if (v_isSharedCheck_6741_ == 0)
{
v___x_6736_ = v___x_6710_;
v_isShared_6737_ = v_isSharedCheck_6741_;
goto v_resetjp_6735_;
}
else
{
lean_inc(v_a_6734_);
lean_dec(v___x_6710_);
v___x_6736_ = lean_box(0);
v_isShared_6737_ = v_isSharedCheck_6741_;
goto v_resetjp_6735_;
}
v_resetjp_6735_:
{
lean_object* v___x_6739_; 
if (v_isShared_6737_ == 0)
{
v___x_6739_ = v___x_6736_;
goto v_reusejp_6738_;
}
else
{
lean_object* v_reuseFailAlloc_6740_; 
v_reuseFailAlloc_6740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6740_, 0, v_a_6734_);
v___x_6739_ = v_reuseFailAlloc_6740_;
goto v_reusejp_6738_;
}
v_reusejp_6738_:
{
return v___x_6739_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object* v_stx_6757_, lean_object* v_dec_6758_, lean_object* v_a_6759_, lean_object* v_a_6760_, lean_object* v_a_6761_, lean_object* v_a_6762_, lean_object* v_a_6763_, lean_object* v_a_6764_, lean_object* v_a_6765_, lean_object* v_a_6766_){
_start:
{
lean_object* v_res_6767_; 
v_res_6767_ = l_Lean_Elab_Do_elabDoReassignArrow(v_stx_6757_, v_dec_6758_, v_a_6759_, v_a_6760_, v_a_6761_, v_a_6762_, v_a_6763_, v_a_6764_, v_a_6765_);
lean_dec(v_a_6765_);
lean_dec_ref(v_a_6764_);
lean_dec(v_a_6763_);
lean_dec_ref(v_a_6762_);
lean_dec(v_a_6761_);
lean_dec_ref(v_a_6760_);
lean_dec_ref(v_a_6759_);
return v_res_6767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1(){
_start:
{
lean_object* v___x_6775_; lean_object* v___x_6776_; lean_object* v___x_6777_; lean_object* v___x_6778_; lean_object* v___x_6779_; 
v___x_6775_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_6776_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReassignArrow___closed__1));
v___x_6777_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1));
v___x_6778_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassignArrow___boxed), 10, 0);
v___x_6779_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_6775_, v___x_6776_, v___x_6777_, v___x_6778_);
return v___x_6779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object* v_a_6780_){
_start:
{
lean_object* v_res_6781_; 
v_res_6781_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
return v_res_6781_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoErased___regBuiltin_Lean_Elab_Do_elabDoErased__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_expandDoErasedArrow___regBuiltin_Lean_Elab_Do_expandDoErasedArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_Erased(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_Erased(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Erased(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Erased(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Let(builtin);
}
#ifdef __cplusplus
}
#endif
