// Lean compiler output
// Module: Lean.Elab.ConfigEval.Instances
// Imports: public import Lean.Elab.ConfigEval.Basic
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
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
lean_object* l_Lean_Expr_rawNatLit_x3f(lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Expr_int_x3f(lean_object*);
lean_object* lean_int_neg_succ_of_nat(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_unzip___redArg(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_name_x3f(lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(235, 97, 249, 134, 197, 220, 12, 91)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 214, 196, 140, 104, 187, 164, 111)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_ConfigEval_EvalTerm_evalIntStx_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term-_"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(77, 127, 37, 42, 155, 196, 209, 131)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doubleQuotedName"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 30, 105, 8, 60, 178, 241)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6;
static const lean_array_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__5(lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__4, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__5, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DataValue"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofBool"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6_value),LEAN_SCALAR_PTR_LITERAL(251, 23, 12, 160, 15, 148, 79, 170)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value),LEAN_SCALAR_PTR_LITERAL(231, 117, 125, 112, 51, 55, 57, 204)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofInt"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10_value),LEAN_SCALAR_PTR_LITERAL(213, 162, 111, 148, 162, 163, 105, 18)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ofString"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(218, 187, 198, 144, 107, 222, 189, 173)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofName"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(99, 144, 20, 164, 82, 146, 48, 233)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instBool;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instNat;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instInt;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instString;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instName;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue;
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0 = (const lean_object*)&l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "negSucc"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 236, 205, 0, 179, 53, 99, 201)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value),LEAN_SCALAR_PTR_LITERAL(192, 66, 133, 102, 95, 170, 134, 92)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(125, 112, 129, 141, 33, 112, 200, 209)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instBool;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instNat;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instInt;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instString;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instName;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instDataValue = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1_value;
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___boxed(lean_object* v_00_u03b1_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0(v_00_u03b1_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
return v_res_26_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_box(0);
v___x_31_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1));
v___x_32_ = l_Lean_mkConst(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2);
v___x_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_box(0);
v___x_40_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5));
v___x_41_ = l_Lean_mkConst(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_box(0);
v___x_47_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8));
v___x_48_ = l_Lean_mkConst(v___x_47_, v___x_46_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___x_70_; uint8_t v___y_72_; lean_object* v___y_73_; uint8_t v_a_101_; uint8_t v_a_106_; lean_object* v___y_109_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v_id_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_70_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3);
lean_inc(v_a_62_);
v___x_118_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_62_);
v___x_119_ = l_Lean_Syntax_getId(v___x_118_);
v_id_120_ = l_Lean_Name_eraseMacroScopes(v___x_119_);
lean_dec(v___x_119_);
v___x_121_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10));
v___x_122_ = lean_name_eq(v_id_120_, v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_123_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5));
v___x_124_ = lean_name_eq(v_id_120_, v___x_123_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11));
v___x_126_ = lean_name_eq(v_id_120_, v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8));
v___x_128_ = lean_name_eq(v_id_120_, v___x_127_);
lean_dec(v_id_120_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16));
lean_inc(v___x_118_);
v___x_130_ = l_Lean_Syntax_isOfKind(v___x_118_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
lean_dec(v___x_118_);
lean_dec(v_a_62_);
v___x_131_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_109_ = v___x_131_;
goto v___jp_108_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_132_ = lean_unsigned_to_nat(1u);
v___x_133_ = l_Lean_Syntax_getArg(v___x_118_, v___x_132_);
lean_dec(v___x_118_);
v___x_134_ = l_Lean_Syntax_matchesIdent(v___x_133_, v___x_121_);
if (v___x_134_ == 0)
{
uint8_t v___x_135_; 
v___x_135_ = l_Lean_Syntax_matchesIdent(v___x_133_, v___x_125_);
lean_dec(v___x_133_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
lean_dec(v_a_62_);
v___x_136_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_109_ = v___x_136_;
goto v___jp_108_;
}
else
{
v_a_106_ = v___x_134_;
goto v___jp_105_;
}
}
else
{
lean_dec(v___x_133_);
v_a_101_ = v___x_134_;
goto v___jp_100_;
}
}
}
else
{
lean_dec(v___x_118_);
v_a_106_ = v___x_124_;
goto v___jp_105_;
}
}
else
{
lean_dec(v_id_120_);
lean_dec(v___x_118_);
v_a_106_ = v___x_124_;
goto v___jp_105_;
}
}
else
{
lean_dec(v_id_120_);
lean_dec(v___x_118_);
goto v___jp_103_;
}
}
else
{
lean_dec(v_id_120_);
lean_dec(v___x_118_);
goto v___jp_103_;
}
v___jp_71_:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v_infoState_77_; uint8_t v_enabled_78_; 
v___x_74_ = lean_box(v___y_72_);
lean_inc_ref(v___y_73_);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___y_73_);
v___x_76_ = lean_st_ref_get(v_a_68_);
v_infoState_77_ = lean_ctor_get(v___x_76_, 8);
lean_inc_ref(v_infoState_77_);
lean_dec(v___x_76_);
v_enabled_78_ = lean_ctor_get_uint8(v_infoState_77_, sizeof(void*)*3);
lean_dec_ref(v_infoState_77_);
if (v_enabled_78_ == 0)
{
lean_object* v___x_79_; 
lean_dec(v_a_62_);
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_75_);
return v___x_79_;
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; 
v___x_80_ = lean_box(0);
v___x_81_ = lean_box(0);
v___x_82_ = 0;
lean_inc_ref(v___y_73_);
v___x_83_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_62_, v___y_73_, v___x_70_, v___x_80_, v___x_81_, v___x_82_, v___x_82_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_90_; 
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_90_ == 0)
{
lean_object* v_unused_91_; 
v_unused_91_ = lean_ctor_get(v___x_83_, 0);
lean_dec(v_unused_91_);
v___x_85_ = v___x_83_;
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
else
{
lean_dec(v___x_83_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_75_);
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_75_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec_ref_known(v___x_75_, 2);
v_a_92_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_83_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_83_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
v___jp_100_:
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6);
v___y_72_ = v_a_101_;
v___y_73_ = v___x_102_;
goto v___jp_71_;
}
v___jp_103_:
{
uint8_t v___x_104_; 
v___x_104_ = 1;
v_a_101_ = v___x_104_;
goto v___jp_100_;
}
v___jp_105_:
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9);
v___y_72_ = v_a_106_;
v___y_73_ = v___x_107_;
goto v___jp_71_;
}
v___jp_108_:
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_117_; 
v_a_110_ = lean_ctor_get(v___y_109_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___y_109_);
if (v_isSharedCheck_117_ == 0)
{
v___x_112_ = v___y_109_;
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___y_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___boxed(lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
return v_res_145_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_box(0);
v___x_150_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1));
v___x_151_ = l_Lean_mkConst(v___x_150_, v___x_149_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2);
v___x_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v___x_165_; lean_object* v_a_167_; lean_object* v_n_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_165_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3);
lean_inc(v_a_157_);
v_n_194_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_157_);
v___x_195_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5));
lean_inc(v_n_194_);
v___x_196_ = l_Lean_Syntax_isOfKind(v_n_194_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
lean_dec(v_n_194_);
lean_dec(v_a_157_);
v___x_197_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v_a_198_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_197_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_197_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
else
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_TSyntax_getNat(v_n_194_);
lean_dec(v_n_194_);
v_a_167_ = v___x_206_;
goto v___jp_166_;
}
v___jp_166_:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v_infoState_171_; uint8_t v_enabled_172_; 
lean_inc(v_a_167_);
v___x_168_ = l_Lean_mkNatLit(v_a_167_);
lean_inc_ref(v___x_168_);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v_a_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = lean_st_ref_get(v_a_163_);
v_infoState_171_ = lean_ctor_get(v___x_170_, 8);
lean_inc_ref(v_infoState_171_);
lean_dec(v___x_170_);
v_enabled_172_ = lean_ctor_get_uint8(v_infoState_171_, sizeof(void*)*3);
lean_dec_ref(v_infoState_171_);
if (v_enabled_172_ == 0)
{
lean_object* v___x_173_; 
lean_dec_ref(v___x_168_);
lean_dec(v_a_157_);
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_169_);
return v___x_173_;
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; lean_object* v___x_177_; 
v___x_174_ = lean_box(0);
v___x_175_ = lean_box(0);
v___x_176_ = 0;
v___x_177_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_157_, v___x_168_, v___x_165_, v___x_174_, v___x_175_, v___x_176_, v___x_176_, v_a_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_, v_a_163_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_184_ == 0)
{
lean_object* v_unused_185_; 
v_unused_185_ = lean_ctor_get(v___x_177_, 0);
lean_dec(v_unused_185_);
v___x_179_ = v___x_177_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_dec(v___x_177_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_169_);
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_169_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
lean_dec_ref_known(v___x_169_, 2);
v_a_186_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_177_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_177_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed(lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(v_a_207_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
lean_dec(v_a_213_);
lean_dec_ref(v_a_212_);
lean_dec(v_a_211_);
lean_dec_ref(v_a_210_);
lean_dec(v_a_209_);
lean_dec_ref(v_a_208_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_ConfigEval_EvalTerm_evalIntStx_spec__0(lean_object* v_a_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = lean_nat_to_int(v_a_216_);
return v___x_217_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_box(0);
v___x_222_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1));
v___x_223_ = l_Lean_Expr_const___override(v___x_222_, v___x_221_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(0u);
v___x_227_ = lean_nat_to_int(v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = lean_unsigned_to_nat(0u);
v___x_234_ = l_Lean_Level_ofNat(v___x_233_);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = lean_box(0);
v___x_236_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8);
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___x_235_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_239_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7));
v___x_240_ = l_Lean_Expr_const___override(v___x_239_, v___x_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = lean_box(0);
v___x_246_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12));
v___x_247_ = l_Lean_Expr_const___override(v___x_246_, v___x_245_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v_a_290_; lean_object* v___y_302_; lean_object* v_n_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_259_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2);
v___x_260_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3);
lean_inc(v_a_251_);
v_n_311_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_251_);
v___x_312_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5));
lean_inc(v_n_311_);
v___x_313_ = l_Lean_Syntax_isOfKind(v_n_311_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15));
lean_inc(v_n_311_);
v___x_315_ = l_Lean_Syntax_isOfKind(v_n_311_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; 
lean_dec(v_n_311_);
lean_dec(v_a_251_);
v___x_316_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_302_ = v___x_316_;
goto v___jp_301_;
}
else
{
lean_object* v___x_317_; lean_object* v_n_318_; uint8_t v___x_319_; 
v___x_317_ = lean_unsigned_to_nat(1u);
v_n_318_ = l_Lean_Syntax_getArg(v_n_311_, v___x_317_);
lean_dec(v_n_311_);
lean_inc(v_n_318_);
v___x_319_ = l_Lean_Syntax_isOfKind(v_n_318_, v___x_312_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec(v_n_318_);
lean_dec(v_a_251_);
v___x_320_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_302_ = v___x_320_;
goto v___jp_301_;
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = l_Lean_TSyntax_getNat(v_n_318_);
lean_dec(v_n_318_);
v___x_322_ = lean_nat_to_int(v___x_321_);
v___x_323_ = lean_int_neg(v___x_322_);
lean_dec(v___x_322_);
v_a_290_ = v___x_323_;
goto v___jp_289_;
}
}
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = l_Lean_TSyntax_getNat(v_n_311_);
lean_dec(v_n_311_);
v___x_325_ = lean_nat_to_int(v___x_324_);
v_a_290_ = v___x_325_;
goto v___jp_289_;
}
v___jp_261_:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v_infoState_266_; uint8_t v_enabled_267_; 
lean_inc_ref(v___y_263_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v___y_262_);
lean_ctor_set(v___x_264_, 1, v___y_263_);
v___x_265_ = lean_st_ref_get(v_a_257_);
v_infoState_266_ = lean_ctor_get(v___x_265_, 8);
lean_inc_ref(v_infoState_266_);
lean_dec(v___x_265_);
v_enabled_267_ = lean_ctor_get_uint8(v_infoState_266_, sizeof(void*)*3);
lean_dec_ref(v_infoState_266_);
if (v_enabled_267_ == 0)
{
lean_object* v___x_268_; 
lean_dec_ref(v___y_263_);
lean_dec(v_a_251_);
v___x_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_268_, 0, v___x_264_);
return v___x_268_;
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; lean_object* v___x_272_; 
v___x_269_ = lean_box(0);
v___x_270_ = lean_box(0);
v___x_271_ = 0;
v___x_272_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_251_, v___y_263_, v___x_260_, v___x_269_, v___x_270_, v___x_271_, v___x_271_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_279_ == 0)
{
lean_object* v_unused_280_; 
v_unused_280_ = lean_ctor_get(v___x_272_, 0);
lean_dec(v_unused_280_);
v___x_274_ = v___x_272_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_dec(v___x_272_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_264_);
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_264_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec_ref_known(v___x_264_, 2);
v_a_281_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_272_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_272_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
v___jp_289_:
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4);
v___x_292_ = lean_int_dec_le(v___x_291_, v_a_290_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_293_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10);
v___x_294_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13);
v___x_295_ = lean_int_neg(v_a_290_);
v___x_296_ = l_Int_toNat(v___x_295_);
lean_dec(v___x_295_);
v___x_297_ = l_Lean_instToExprInt_mkNat(v___x_296_);
v___x_298_ = l_Lean_mkApp3(v___x_293_, v___x_259_, v___x_294_, v___x_297_);
v___y_262_ = v_a_290_;
v___y_263_ = v___x_298_;
goto v___jp_261_;
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = l_Int_toNat(v_a_290_);
v___x_300_ = l_Lean_instToExprInt_mkNat(v___x_299_);
v___y_262_ = v_a_290_;
v___y_263_ = v___x_300_;
goto v___jp_261_;
}
}
v___jp_301_:
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
v_a_303_ = lean_ctor_get(v___y_302_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___y_302_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___y_302_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___y_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___boxed(lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
return v_res_334_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_box(0);
v___x_339_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1));
v___x_340_ = l_Lean_mkConst(v___x_339_, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
lean_object* v___x_354_; lean_object* v_a_356_; lean_object* v_s_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_354_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3);
lean_inc(v_a_346_);
v_s_383_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_346_);
v___x_384_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5));
lean_inc(v_s_383_);
v___x_385_ = l_Lean_Syntax_isOfKind(v_s_383_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_394_; 
lean_dec(v_s_383_);
lean_dec(v_a_346_);
v___x_386_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v_a_387_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_394_ == 0)
{
v___x_389_ = v___x_386_;
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_386_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_a_387_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
else
{
lean_object* v___x_395_; 
v___x_395_ = l_Lean_TSyntax_getString(v_s_383_);
lean_dec(v_s_383_);
v_a_356_ = v___x_395_;
goto v___jp_355_;
}
v___jp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_infoState_360_; uint8_t v_enabled_361_; 
lean_inc_ref(v_a_356_);
v___x_357_ = l_Lean_mkStrLit(v_a_356_);
lean_inc_ref(v___x_357_);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v_a_356_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = lean_st_ref_get(v_a_352_);
v_infoState_360_ = lean_ctor_get(v___x_359_, 8);
lean_inc_ref(v_infoState_360_);
lean_dec(v___x_359_);
v_enabled_361_ = lean_ctor_get_uint8(v_infoState_360_, sizeof(void*)*3);
lean_dec_ref(v_infoState_360_);
if (v_enabled_361_ == 0)
{
lean_object* v___x_362_; 
lean_dec_ref(v___x_357_);
lean_dec(v_a_346_);
v___x_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_358_);
return v___x_362_;
}
else
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; lean_object* v___x_366_; 
v___x_363_ = lean_box(0);
v___x_364_ = lean_box(0);
v___x_365_ = 0;
v___x_366_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_346_, v___x_357_, v___x_354_, v___x_363_, v___x_364_, v___x_365_, v___x_365_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_373_; 
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_373_ == 0)
{
lean_object* v_unused_374_; 
v_unused_374_ = lean_ctor_get(v___x_366_, 0);
lean_dec(v_unused_374_);
v___x_368_ = v___x_366_;
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
else
{
lean_dec(v___x_366_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_371_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_358_);
v___x_371_ = v___x_368_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_358_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
lean_dec_ref_known(v___x_358_, 2);
v_a_375_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_366_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_366_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___boxed(lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
lean_dec(v_a_400_);
lean_dec_ref(v_a_399_);
lean_dec(v_a_398_);
lean_dec_ref(v_a_397_);
return v_res_404_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(lean_object* v_keys_405_, lean_object* v_i_406_, lean_object* v_k_407_){
_start:
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = lean_array_get_size(v_keys_405_);
v___x_409_ = lean_nat_dec_lt(v_i_406_, v___x_408_);
if (v___x_409_ == 0)
{
lean_dec(v_i_406_);
return v___x_409_;
}
else
{
lean_object* v_k_x27_410_; uint8_t v___x_411_; 
v_k_x27_410_ = lean_array_fget_borrowed(v_keys_405_, v_i_406_);
v___x_411_ = l_Lean_instBEqExtraModUse_beq(v_k_407_, v_k_x27_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_unsigned_to_nat(1u);
v___x_413_ = lean_nat_add(v_i_406_, v___x_412_);
lean_dec(v_i_406_);
v_i_406_ = v___x_413_;
goto _start;
}
else
{
lean_dec(v_i_406_);
return v___x_409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_keys_415_, lean_object* v_i_416_, lean_object* v_k_417_){
_start:
{
uint8_t v_res_418_; lean_object* v_r_419_; 
v_res_418_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_keys_415_, v_i_416_, v_k_417_);
lean_dec_ref(v_k_417_);
lean_dec_ref(v_keys_415_);
v_r_419_ = lean_box(v_res_418_);
return v_r_419_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_x_420_, size_t v_x_421_, lean_object* v_x_422_){
_start:
{
if (lean_obj_tag(v_x_420_) == 0)
{
lean_object* v_es_423_; lean_object* v___x_424_; size_t v___x_425_; size_t v___x_426_; lean_object* v_j_427_; lean_object* v___x_428_; 
v_es_423_ = lean_ctor_get(v_x_420_, 0);
v___x_424_ = lean_box(2);
v___x_425_ = ((size_t)31ULL);
v___x_426_ = lean_usize_land(v_x_421_, v___x_425_);
v_j_427_ = lean_usize_to_nat(v___x_426_);
v___x_428_ = lean_array_get_borrowed(v___x_424_, v_es_423_, v_j_427_);
lean_dec(v_j_427_);
switch(lean_obj_tag(v___x_428_))
{
case 0:
{
lean_object* v_key_429_; uint8_t v___x_430_; 
v_key_429_ = lean_ctor_get(v___x_428_, 0);
v___x_430_ = l_Lean_instBEqExtraModUse_beq(v_x_422_, v_key_429_);
return v___x_430_;
}
case 1:
{
lean_object* v_node_431_; size_t v___x_432_; size_t v___x_433_; 
v_node_431_ = lean_ctor_get(v___x_428_, 0);
v___x_432_ = ((size_t)5ULL);
v___x_433_ = lean_usize_shift_right(v_x_421_, v___x_432_);
v_x_420_ = v_node_431_;
v_x_421_ = v___x_433_;
goto _start;
}
default: 
{
uint8_t v___x_435_; 
v___x_435_ = 0;
return v___x_435_;
}
}
}
else
{
lean_object* v_ks_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v_ks_436_ = lean_ctor_get(v_x_420_, 0);
v___x_437_ = lean_unsigned_to_nat(0u);
v___x_438_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_ks_436_, v___x_437_, v_x_422_);
return v___x_438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
size_t v_x_11259__boxed_442_; uint8_t v_res_443_; lean_object* v_r_444_; 
v_x_11259__boxed_442_ = lean_unbox_usize(v_x_440_);
lean_dec(v_x_440_);
v_res_443_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___redArg(v_x_439_, v_x_11259__boxed_442_, v_x_441_);
lean_dec_ref(v_x_441_);
lean_dec_ref(v_x_439_);
v_r_444_ = lean_box(v_res_443_);
return v_r_444_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg(lean_object* v_x_445_, lean_object* v_x_446_){
_start:
{
uint64_t v___x_447_; size_t v___x_448_; uint8_t v___x_449_; 
v___x_447_ = l_Lean_instHashableExtraModUse_hash(v_x_446_);
v___x_448_ = lean_uint64_to_usize(v___x_447_);
v___x_449_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___redArg(v_x_445_, v___x_448_, v_x_446_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
uint8_t v_res_452_; lean_object* v_r_453_; 
v_res_452_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg(v_x_450_, v_x_451_);
lean_dec_ref(v_x_451_);
lean_dec_ref(v_x_450_);
v_r_453_ = lean_box(v_res_452_);
return v_r_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__9(lean_object* v_msgData_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v___x_460_; lean_object* v_env_461_; uint8_t v___x_462_; lean_object* v_env_463_; lean_object* v___x_464_; lean_object* v_toCold_465_; lean_object* v_mctx_466_; lean_object* v_lctx_467_; lean_object* v_options_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_460_ = lean_st_ref_get(v___y_458_);
v_env_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc_ref(v_env_461_);
lean_dec(v___x_460_);
v___x_462_ = 0;
v_env_463_ = l_Lean_Environment_setRecordingDeps(v_env_461_, v___x_462_);
v___x_464_ = lean_st_ref_get(v___y_456_);
v_toCold_465_ = lean_ctor_get(v___y_457_, 0);
v_mctx_466_ = lean_ctor_get(v___x_464_, 0);
lean_inc_ref(v_mctx_466_);
lean_dec(v___x_464_);
v_lctx_467_ = lean_ctor_get(v___y_455_, 2);
v_options_468_ = lean_ctor_get(v_toCold_465_, 2);
lean_inc_ref(v_options_468_);
lean_inc_ref(v_lctx_467_);
v___x_469_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_469_, 0, v_env_463_);
lean_ctor_set(v___x_469_, 1, v_mctx_466_);
lean_ctor_set(v___x_469_, 2, v_lctx_467_);
lean_ctor_set(v___x_469_, 3, v_options_468_);
v___x_470_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v_msgData_454_);
v___x_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__9___boxed(lean_object* v_msgData_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__9(v_msgData_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
return v_res_478_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_479_; double v___x_480_; 
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = lean_float_of_nat(v___x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(lean_object* v_cls_484_, lean_object* v_msg_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_ref_491_; lean_object* v___x_492_; lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_538_; 
v_ref_491_ = lean_ctor_get(v___y_488_, 2);
v___x_492_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__9(v_msg_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
v_a_493_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_538_ == 0)
{
v___x_495_ = v___x_492_;
v_isShared_496_ = v_isSharedCheck_538_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_492_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_538_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v_traceState_498_; lean_object* v_env_499_; lean_object* v_nextMacroScope_500_; lean_object* v_ngen_501_; lean_object* v_auxDeclNGen_502_; lean_object* v_cache_503_; lean_object* v_recordedDeps_504_; lean_object* v_messages_505_; lean_object* v_infoState_506_; lean_object* v_snapshotTasks_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_537_; 
v___x_497_ = lean_st_ref_take(v___y_489_);
v_traceState_498_ = lean_ctor_get(v___x_497_, 4);
v_env_499_ = lean_ctor_get(v___x_497_, 0);
v_nextMacroScope_500_ = lean_ctor_get(v___x_497_, 1);
v_ngen_501_ = lean_ctor_get(v___x_497_, 2);
v_auxDeclNGen_502_ = lean_ctor_get(v___x_497_, 3);
v_cache_503_ = lean_ctor_get(v___x_497_, 5);
v_recordedDeps_504_ = lean_ctor_get(v___x_497_, 6);
v_messages_505_ = lean_ctor_get(v___x_497_, 7);
v_infoState_506_ = lean_ctor_get(v___x_497_, 8);
v_snapshotTasks_507_ = lean_ctor_get(v___x_497_, 9);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_537_ == 0)
{
v___x_509_ = v___x_497_;
v_isShared_510_ = v_isSharedCheck_537_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_snapshotTasks_507_);
lean_inc(v_infoState_506_);
lean_inc(v_messages_505_);
lean_inc(v_recordedDeps_504_);
lean_inc(v_cache_503_);
lean_inc(v_traceState_498_);
lean_inc(v_auxDeclNGen_502_);
lean_inc(v_ngen_501_);
lean_inc(v_nextMacroScope_500_);
lean_inc(v_env_499_);
lean_dec(v___x_497_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_537_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
uint64_t v_tid_511_; lean_object* v_traces_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_536_; 
v_tid_511_ = lean_ctor_get_uint64(v_traceState_498_, sizeof(void*)*1);
v_traces_512_ = lean_ctor_get(v_traceState_498_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v_traceState_498_);
if (v_isSharedCheck_536_ == 0)
{
v___x_514_ = v_traceState_498_;
v_isShared_515_ = v_isSharedCheck_536_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_traces_512_);
lean_dec(v_traceState_498_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_536_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___x_517_; double v___x_518_; uint8_t v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_516_ = lean_box(0);
v___x_517_ = lean_box(0);
v___x_518_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_519_ = 0;
v___x_520_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1));
v___x_521_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_521_, 0, v_cls_484_);
lean_ctor_set(v___x_521_, 1, v___x_517_);
lean_ctor_set(v___x_521_, 2, v___x_520_);
lean_ctor_set_float(v___x_521_, sizeof(void*)*3, v___x_518_);
lean_ctor_set_float(v___x_521_, sizeof(void*)*3 + 8, v___x_518_);
lean_ctor_set_uint8(v___x_521_, sizeof(void*)*3 + 16, v___x_519_);
v___x_522_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2));
v___x_523_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v_a_493_);
lean_ctor_set(v___x_523_, 2, v___x_522_);
lean_inc(v_ref_491_);
v___x_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_524_, 0, v_ref_491_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
v___x_525_ = l_Lean_PersistentArray_push___redArg(v_traces_512_, v___x_524_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_525_);
v___x_527_ = v___x_514_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_525_);
lean_ctor_set_uint64(v_reuseFailAlloc_535_, sizeof(void*)*1, v_tid_511_);
v___x_527_ = v_reuseFailAlloc_535_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_529_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 4, v___x_527_);
v___x_529_ = v___x_509_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_env_499_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_nextMacroScope_500_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v_ngen_501_);
lean_ctor_set(v_reuseFailAlloc_534_, 3, v_auxDeclNGen_502_);
lean_ctor_set(v_reuseFailAlloc_534_, 4, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_534_, 5, v_cache_503_);
lean_ctor_set(v_reuseFailAlloc_534_, 6, v_recordedDeps_504_);
lean_ctor_set(v_reuseFailAlloc_534_, 7, v_messages_505_);
lean_ctor_set(v_reuseFailAlloc_534_, 8, v_infoState_506_);
lean_ctor_set(v_reuseFailAlloc_534_, 9, v_snapshotTasks_507_);
v___x_529_ = v_reuseFailAlloc_534_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_530_ = lean_st_ref_put(v___y_489_, v___x_529_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_516_);
v___x_532_ = v___x_495_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_516_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_cls_539_, lean_object* v_msg_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(v_cls_539_, v_msg_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
return v_res_546_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_a_547_, lean_object* v_x_548_){
_start:
{
if (lean_obj_tag(v_x_548_) == 0)
{
uint8_t v___x_549_; 
v___x_549_ = 0;
return v___x_549_;
}
else
{
lean_object* v_key_550_; lean_object* v_tail_551_; uint8_t v___x_552_; 
v_key_550_ = lean_ctor_get(v_x_548_, 0);
v_tail_551_ = lean_ctor_get(v_x_548_, 2);
v___x_552_ = l_Lean_instBEqExtraModUse_beq(v_key_550_, v_a_547_);
if (v___x_552_ == 0)
{
v_x_548_ = v_tail_551_;
goto _start;
}
else
{
return v___x_552_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_a_554_, lean_object* v_x_555_){
_start:
{
uint8_t v_res_556_; lean_object* v_r_557_; 
v_res_556_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___redArg(v_a_554_, v_x_555_);
lean_dec(v_x_555_);
lean_dec_ref(v_a_554_);
v_r_557_ = lean_box(v_res_556_);
return v_r_557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11_spec__15___redArg(lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
if (lean_obj_tag(v_x_559_) == 0)
{
return v_x_558_;
}
else
{
lean_object* v_key_560_; lean_object* v_value_561_; lean_object* v_tail_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_585_; 
v_key_560_ = lean_ctor_get(v_x_559_, 0);
v_value_561_ = lean_ctor_get(v_x_559_, 1);
v_tail_562_ = lean_ctor_get(v_x_559_, 2);
v_isSharedCheck_585_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_585_ == 0)
{
v___x_564_ = v_x_559_;
v_isShared_565_ = v_isSharedCheck_585_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_tail_562_);
lean_inc(v_value_561_);
lean_inc(v_key_560_);
lean_dec(v_x_559_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_585_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; uint64_t v___x_567_; uint64_t v___x_568_; uint64_t v___x_569_; uint64_t v_fold_570_; uint64_t v___x_571_; uint64_t v___x_572_; uint64_t v___x_573_; size_t v___x_574_; size_t v___x_575_; size_t v___x_576_; size_t v___x_577_; size_t v___x_578_; lean_object* v___x_579_; lean_object* v___x_581_; 
v___x_566_ = lean_array_get_size(v_x_558_);
v___x_567_ = l_Lean_instHashableExtraModUse_hash(v_key_560_);
v___x_568_ = 32ULL;
v___x_569_ = lean_uint64_shift_right(v___x_567_, v___x_568_);
v_fold_570_ = lean_uint64_xor(v___x_567_, v___x_569_);
v___x_571_ = 16ULL;
v___x_572_ = lean_uint64_shift_right(v_fold_570_, v___x_571_);
v___x_573_ = lean_uint64_xor(v_fold_570_, v___x_572_);
v___x_574_ = lean_uint64_to_usize(v___x_573_);
v___x_575_ = lean_usize_of_nat(v___x_566_);
v___x_576_ = ((size_t)1ULL);
v___x_577_ = lean_usize_sub(v___x_575_, v___x_576_);
v___x_578_ = lean_usize_land(v___x_574_, v___x_577_);
v___x_579_ = lean_array_uget_borrowed(v_x_558_, v___x_578_);
lean_inc(v___x_579_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 2, v___x_579_);
v___x_581_ = v___x_564_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_key_560_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_value_561_);
lean_ctor_set(v_reuseFailAlloc_584_, 2, v___x_579_);
v___x_581_ = v_reuseFailAlloc_584_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
lean_object* v___x_582_; 
v___x_582_ = lean_array_uset(v_x_558_, v___x_578_, v___x_581_);
v_x_558_ = v___x_582_;
v_x_559_ = v_tail_562_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11___redArg(lean_object* v_i_586_, lean_object* v_source_587_, lean_object* v_target_588_){
_start:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_array_get_size(v_source_587_);
v___x_590_ = lean_nat_dec_lt(v_i_586_, v___x_589_);
if (v___x_590_ == 0)
{
lean_dec_ref(v_source_587_);
lean_dec(v_i_586_);
return v_target_588_;
}
else
{
lean_object* v_es_591_; lean_object* v___x_592_; lean_object* v_source_593_; lean_object* v_target_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_es_591_ = lean_array_fget(v_source_587_, v_i_586_);
v___x_592_ = lean_box(0);
v_source_593_ = lean_array_fset(v_source_587_, v_i_586_, v___x_592_);
v_target_594_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11_spec__15___redArg(v_target_588_, v_es_591_);
v___x_595_ = lean_unsigned_to_nat(1u);
v___x_596_ = lean_nat_add(v_i_586_, v___x_595_);
lean_dec(v_i_586_);
v_i_586_ = v___x_596_;
v_source_587_ = v_source_593_;
v_target_588_ = v_target_594_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7___redArg(lean_object* v_data_598_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v_nbuckets_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_599_ = lean_array_get_size(v_data_598_);
v___x_600_ = lean_unsigned_to_nat(2u);
v_nbuckets_601_ = lean_nat_mul(v___x_599_, v___x_600_);
v___x_602_ = lean_unsigned_to_nat(0u);
v___x_603_ = lean_box(0);
v___x_604_ = lean_mk_array(v_nbuckets_601_, v___x_603_);
v___x_605_ = lean_array_propagate_mark(v_data_598_, v___x_604_);
v___x_606_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11___redArg(v___x_602_, v_data_598_, v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(lean_object* v_m_607_, lean_object* v_a_608_, lean_object* v_b_609_){
_start:
{
lean_object* v_size_610_; lean_object* v_buckets_611_; lean_object* v___x_612_; uint64_t v___x_613_; uint64_t v___x_614_; uint64_t v___x_615_; uint64_t v_fold_616_; uint64_t v___x_617_; uint64_t v___x_618_; uint64_t v___x_619_; size_t v___x_620_; size_t v___x_621_; size_t v___x_622_; size_t v___x_623_; size_t v___x_624_; lean_object* v_bkt_625_; uint8_t v___x_626_; 
v_size_610_ = lean_ctor_get(v_m_607_, 0);
v_buckets_611_ = lean_ctor_get(v_m_607_, 1);
v___x_612_ = lean_array_get_size(v_buckets_611_);
v___x_613_ = l_Lean_instHashableExtraModUse_hash(v_a_608_);
v___x_614_ = 32ULL;
v___x_615_ = lean_uint64_shift_right(v___x_613_, v___x_614_);
v_fold_616_ = lean_uint64_xor(v___x_613_, v___x_615_);
v___x_617_ = 16ULL;
v___x_618_ = lean_uint64_shift_right(v_fold_616_, v___x_617_);
v___x_619_ = lean_uint64_xor(v_fold_616_, v___x_618_);
v___x_620_ = lean_uint64_to_usize(v___x_619_);
v___x_621_ = lean_usize_of_nat(v___x_612_);
v___x_622_ = ((size_t)1ULL);
v___x_623_ = lean_usize_sub(v___x_621_, v___x_622_);
v___x_624_ = lean_usize_land(v___x_620_, v___x_623_);
v_bkt_625_ = lean_array_uget_borrowed(v_buckets_611_, v___x_624_);
v___x_626_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___redArg(v_a_608_, v_bkt_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_647_; 
lean_inc_ref(v_buckets_611_);
lean_inc(v_size_610_);
v_isSharedCheck_647_ = !lean_is_exclusive(v_m_607_);
if (v_isSharedCheck_647_ == 0)
{
lean_object* v_unused_648_; lean_object* v_unused_649_; 
v_unused_648_ = lean_ctor_get(v_m_607_, 1);
lean_dec(v_unused_648_);
v_unused_649_ = lean_ctor_get(v_m_607_, 0);
lean_dec(v_unused_649_);
v___x_628_ = v_m_607_;
v_isShared_629_ = v_isSharedCheck_647_;
goto v_resetjp_627_;
}
else
{
lean_dec(v_m_607_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_647_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v_size_x27_631_; lean_object* v___x_632_; lean_object* v_buckets_x27_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_630_ = lean_unsigned_to_nat(1u);
v_size_x27_631_ = lean_nat_add(v_size_610_, v___x_630_);
lean_dec(v_size_610_);
lean_inc(v_bkt_625_);
v___x_632_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_632_, 0, v_a_608_);
lean_ctor_set(v___x_632_, 1, v_b_609_);
lean_ctor_set(v___x_632_, 2, v_bkt_625_);
v_buckets_x27_633_ = lean_array_uset(v_buckets_611_, v___x_624_, v___x_632_);
v___x_634_ = lean_unsigned_to_nat(4u);
v___x_635_ = lean_nat_mul(v_size_x27_631_, v___x_634_);
v___x_636_ = lean_unsigned_to_nat(3u);
v___x_637_ = lean_nat_div(v___x_635_, v___x_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_array_get_size(v_buckets_x27_633_);
v___x_639_ = lean_nat_dec_le(v___x_637_, v___x_638_);
lean_dec(v___x_637_);
if (v___x_639_ == 0)
{
lean_object* v_val_640_; lean_object* v___x_642_; 
v_val_640_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7___redArg(v_buckets_x27_633_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v_val_640_);
lean_ctor_set(v___x_628_, 0, v_size_x27_631_);
v___x_642_ = v___x_628_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_size_x27_631_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_val_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
else
{
lean_object* v___x_645_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v_buckets_x27_633_);
lean_ctor_set(v___x_628_, 0, v_size_x27_631_);
v___x_645_ = v___x_628_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_size_x27_631_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_buckets_x27_633_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
else
{
lean_dec(v_b_609_);
lean_dec_ref(v_a_608_);
return v_m_607_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___lam__0(lean_object* v___x_650_, lean_object* v_entry_651_, lean_object* v_s_652_){
_start:
{
lean_object* v_addEntryFn_653_; lean_object* v_importedEntries_654_; lean_object* v_state_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_663_; 
v_addEntryFn_653_ = lean_ctor_get(v___x_650_, 3);
lean_inc(v_addEntryFn_653_);
lean_dec_ref(v___x_650_);
v_importedEntries_654_ = lean_ctor_get(v_s_652_, 0);
v_state_655_ = lean_ctor_get(v_s_652_, 1);
v_isSharedCheck_663_ = !lean_is_exclusive(v_s_652_);
if (v_isSharedCheck_663_ == 0)
{
v___x_657_ = v_s_652_;
v_isShared_658_ = v_isSharedCheck_663_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_state_655_);
lean_inc(v_importedEntries_654_);
lean_dec(v_s_652_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_663_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v_state_659_; lean_object* v___x_661_; 
v_state_659_ = lean_apply_2(v_addEntryFn_653_, v_state_655_, v_entry_651_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v_state_659_);
v___x_661_ = v___x_657_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_importedEntries_654_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_state_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_664_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
return v___x_668_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1);
v___x_670_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
lean_ctor_set(v___x_670_, 2, v___x_669_);
lean_ctor_set(v___x_670_, 3, v___x_669_);
lean_ctor_set(v___x_670_, 4, v___x_669_);
lean_ctor_set(v___x_670_, 5, v___x_669_);
return v___x_670_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_671_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7));
v___x_677_ = l_Lean_stringToMessageData(v___x_676_);
return v___x_677_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9));
v___x_680_ = l_Lean_stringToMessageData(v___x_679_);
return v___x_680_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1));
v___x_682_ = l_Lean_stringToMessageData(v___x_681_);
return v___x_682_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v_cls_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v_cls_686_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6));
v___x_687_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13));
v___x_688_ = l_Lean_Name_append(v___x_687_, v_cls_686_);
return v___x_688_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15));
v___x_691_ = l_Lean_stringToMessageData(v___x_690_);
return v___x_691_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17));
v___x_694_ = l_Lean_stringToMessageData(v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(lean_object* v_mod_699_, uint8_t v_isMeta_700_, lean_object* v_hint_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v_env_743_; uint8_t v_isExporting_744_; lean_object* v_entry_745_; lean_object* v___x_746_; lean_object* v_env_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_741_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4);
v___x_742_ = lean_st_ref_get(v___y_707_);
v_env_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc_ref(v_env_743_);
lean_dec(v___x_742_);
v_isExporting_744_ = lean_ctor_get_uint8(v_env_743_, sizeof(void*)*13);
lean_dec_ref(v_env_743_);
lean_inc(v_mod_699_);
v_entry_745_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_745_, 0, v_mod_699_);
lean_ctor_set_uint8(v_entry_745_, sizeof(void*)*1, v_isExporting_744_);
lean_ctor_set_uint8(v_entry_745_, sizeof(void*)*1 + 1, v_isMeta_700_);
v___x_746_ = lean_st_ref_get(v___y_707_);
v_env_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc_ref(v_env_747_);
lean_dec(v___x_746_);
v___x_748_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_749_ = lean_box(1);
v___x_750_ = lean_box(0);
v___x_751_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_741_, v___x_748_, v_env_747_, v___x_749_, v___x_750_);
v___x_752_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg(v___x_751_, v_entry_745_);
lean_dec(v___x_751_);
if (v___x_752_ == 0)
{
lean_object* v_toCold_753_; lean_object* v_options_754_; lean_object* v_inheritedTraceOptions_755_; uint8_t v_hasTrace_756_; lean_object* v___f_757_; uint8_t v___x_758_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_789_; lean_object* v___y_790_; 
v_toCold_753_ = lean_ctor_get(v___y_706_, 0);
v_options_754_ = lean_ctor_get(v_toCold_753_, 2);
v_inheritedTraceOptions_755_ = lean_ctor_get(v_toCold_753_, 11);
v_hasTrace_756_ = lean_ctor_get_uint8(v_options_754_, sizeof(void*)*1);
lean_inc_ref(v_entry_745_);
v___f_757_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_757_, 0, v___x_748_);
lean_closure_set(v___f_757_, 1, v_entry_745_);
v___x_758_ = 1;
if (v_hasTrace_756_ == 0)
{
lean_dec(v_hint_701_);
lean_dec(v_mod_699_);
v___y_789_ = v___y_705_;
v___y_790_ = v___y_707_;
goto v___jp_788_;
}
else
{
lean_object* v_cls_797_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___x_817_; uint8_t v___x_818_; 
v_cls_797_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6));
v___x_817_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14);
v___x_818_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_755_, v_options_754_, v___x_817_);
if (v___x_818_ == 0)
{
lean_dec(v_hint_701_);
lean_dec(v_mod_699_);
v___y_789_ = v___y_705_;
v___y_790_ = v___y_707_;
goto v___jp_788_;
}
else
{
lean_object* v___x_819_; lean_object* v___y_821_; 
v___x_819_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16);
if (v_isExporting_744_ == 0)
{
lean_object* v___x_828_; 
v___x_828_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21));
v___y_821_ = v___x_828_;
goto v___jp_820_;
}
else
{
lean_object* v___x_829_; 
v___x_829_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22));
v___y_821_ = v___x_829_;
goto v___jp_820_;
}
v___jp_820_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
lean_inc_ref(v___y_821_);
v___x_822_ = l_Lean_stringToMessageData(v___y_821_);
v___x_823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_819_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
v___x_824_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18);
v___x_825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_823_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
if (v_isMeta_700_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19));
v___y_804_ = v___x_825_;
v___y_805_ = v___x_826_;
goto v___jp_803_;
}
else
{
lean_object* v___x_827_; 
v___x_827_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20));
v___y_804_ = v___x_825_;
v___y_805_ = v___x_827_;
goto v___jp_803_;
}
}
}
v___jp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_801_, 0, v___y_799_);
lean_ctor_set(v___x_801_, 1, v___y_800_);
v___x_802_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(v_cls_797_, v___x_801_, v___y_704_, v___y_705_, v___y_706_, v___y_707_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_dec_ref_known(v___x_802_, 1);
v___y_789_ = v___y_705_;
v___y_790_ = v___y_707_;
goto v___jp_788_;
}
else
{
lean_dec_ref(v___f_757_);
lean_dec_ref_known(v_entry_745_, 1);
return v___x_802_;
}
}
v___jp_803_:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
lean_inc_ref(v___y_805_);
v___x_806_ = l_Lean_stringToMessageData(v___y_805_);
v___x_807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_807_, 0, v___y_804_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8);
v___x_809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_807_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = l_Lean_MessageData_ofName(v_mod_699_);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = l_Lean_Name_isAnonymous(v_hint_701_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10);
v___x_814_ = l_Lean_MessageData_ofName(v_hint_701_);
v___x_815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_813_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___y_799_ = v___x_811_;
v___y_800_ = v___x_815_;
goto v___jp_798_;
}
else
{
lean_object* v___x_816_; 
lean_dec(v_hint_701_);
v___x_816_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11);
v___y_799_ = v___x_811_;
v___y_800_ = v___x_816_;
goto v___jp_798_;
}
}
}
v___jp_759_:
{
lean_object* v___x_762_; lean_object* v_toEnvExtension_763_; uint8_t v_logWrites_764_; 
v___x_762_ = lean_st_ref_take(v___y_761_);
v_toEnvExtension_763_ = lean_ctor_get(v___x_748_, 0);
v_logWrites_764_ = lean_ctor_get_uint8(v_toEnvExtension_763_, sizeof(void*)*6);
if (v_logWrites_764_ == 0)
{
lean_object* v_env_765_; lean_object* v_nextMacroScope_766_; lean_object* v_ngen_767_; lean_object* v_auxDeclNGen_768_; lean_object* v_traceState_769_; lean_object* v_recordedDeps_770_; lean_object* v_messages_771_; lean_object* v_infoState_772_; lean_object* v_snapshotTasks_773_; lean_object* v_asyncMode_774_; lean_object* v___x_775_; 
v_env_765_ = lean_ctor_get(v___x_762_, 0);
lean_inc_ref(v_env_765_);
v_nextMacroScope_766_ = lean_ctor_get(v___x_762_, 1);
lean_inc(v_nextMacroScope_766_);
v_ngen_767_ = lean_ctor_get(v___x_762_, 2);
lean_inc_ref(v_ngen_767_);
v_auxDeclNGen_768_ = lean_ctor_get(v___x_762_, 3);
lean_inc_ref(v_auxDeclNGen_768_);
v_traceState_769_ = lean_ctor_get(v___x_762_, 4);
lean_inc_ref(v_traceState_769_);
v_recordedDeps_770_ = lean_ctor_get(v___x_762_, 6);
lean_inc_ref(v_recordedDeps_770_);
v_messages_771_ = lean_ctor_get(v___x_762_, 7);
lean_inc_ref(v_messages_771_);
v_infoState_772_ = lean_ctor_get(v___x_762_, 8);
lean_inc_ref(v_infoState_772_);
v_snapshotTasks_773_ = lean_ctor_get(v___x_762_, 9);
lean_inc_ref(v_snapshotTasks_773_);
lean_dec(v___x_762_);
v_asyncMode_774_ = lean_ctor_get(v_toEnvExtension_763_, 2);
lean_inc_ref(v_toEnvExtension_763_);
v___x_775_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_763_, v_env_765_, v___f_757_, v_asyncMode_774_, v___x_750_, v___x_758_);
v___y_710_ = v_snapshotTasks_773_;
v___y_711_ = v___y_761_;
v___y_712_ = v_auxDeclNGen_768_;
v___y_713_ = v_nextMacroScope_766_;
v___y_714_ = v_infoState_772_;
v___y_715_ = v___y_760_;
v___y_716_ = v_traceState_769_;
v___y_717_ = v_recordedDeps_770_;
v___y_718_ = v_messages_771_;
v___y_719_ = v_ngen_767_;
v___y_720_ = v___x_775_;
goto v___jp_709_;
}
else
{
lean_object* v_env_776_; lean_object* v_nextMacroScope_777_; lean_object* v_ngen_778_; lean_object* v_auxDeclNGen_779_; lean_object* v_traceState_780_; lean_object* v_recordedDeps_781_; lean_object* v_messages_782_; lean_object* v_infoState_783_; lean_object* v_snapshotTasks_784_; lean_object* v_asyncMode_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v_env_776_ = lean_ctor_get(v___x_762_, 0);
lean_inc_ref(v_env_776_);
v_nextMacroScope_777_ = lean_ctor_get(v___x_762_, 1);
lean_inc(v_nextMacroScope_777_);
v_ngen_778_ = lean_ctor_get(v___x_762_, 2);
lean_inc_ref(v_ngen_778_);
v_auxDeclNGen_779_ = lean_ctor_get(v___x_762_, 3);
lean_inc_ref(v_auxDeclNGen_779_);
v_traceState_780_ = lean_ctor_get(v___x_762_, 4);
lean_inc_ref(v_traceState_780_);
v_recordedDeps_781_ = lean_ctor_get(v___x_762_, 6);
lean_inc_ref(v_recordedDeps_781_);
v_messages_782_ = lean_ctor_get(v___x_762_, 7);
lean_inc_ref(v_messages_782_);
v_infoState_783_ = lean_ctor_get(v___x_762_, 8);
lean_inc_ref(v_infoState_783_);
v_snapshotTasks_784_ = lean_ctor_get(v___x_762_, 9);
lean_inc_ref(v_snapshotTasks_784_);
lean_dec(v___x_762_);
v_asyncMode_785_ = lean_ctor_get(v_toEnvExtension_763_, 2);
lean_inc_ref_n(v_toEnvExtension_763_, 2);
v___x_786_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_763_, v_env_776_);
lean_dec_ref(v_env_776_);
v___x_787_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_763_, v___x_786_, v___f_757_, v_asyncMode_785_, v___x_750_, v___x_758_);
v___y_710_ = v_snapshotTasks_784_;
v___y_711_ = v___y_761_;
v___y_712_ = v_auxDeclNGen_779_;
v___y_713_ = v_nextMacroScope_777_;
v___y_714_ = v_infoState_783_;
v___y_715_ = v___y_760_;
v___y_716_ = v_traceState_780_;
v___y_717_ = v_recordedDeps_781_;
v___y_718_ = v_messages_782_;
v___y_719_ = v_ngen_778_;
v___y_720_ = v___x_787_;
goto v___jp_709_;
}
}
v___jp_788_:
{
uint8_t v___x_791_; 
v___x_791_ = l_Lean_usageRecordingEnabled();
if (v___x_791_ == 0)
{
lean_dec_ref_known(v_entry_745_, 1);
v___y_760_ = v___y_789_;
v___y_761_ = v___y_790_;
goto v___jp_759_;
}
else
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_792_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_793_ = lean_st_ref_take(v___x_792_);
v___x_794_ = lean_box(0);
v___x_795_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(v___x_793_, v_entry_745_, v___x_794_);
v___x_796_ = lean_st_ref_put(v___x_792_, v___x_795_);
v___y_760_ = v___y_789_;
v___y_761_ = v___y_790_;
goto v___jp_759_;
}
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec_ref_known(v_entry_745_, 1);
lean_dec(v_hint_701_);
lean_dec(v_mod_699_);
v___x_830_ = lean_box(0);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
return v___x_831_;
}
v___jp_709_:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v_mctx_725_; lean_object* v_zetaDeltaFVarIds_726_; lean_object* v_postponed_727_; lean_object* v_diag_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_739_; 
v___x_721_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2);
v___x_722_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_722_, 0, v___y_720_);
lean_ctor_set(v___x_722_, 1, v___y_713_);
lean_ctor_set(v___x_722_, 2, v___y_719_);
lean_ctor_set(v___x_722_, 3, v___y_712_);
lean_ctor_set(v___x_722_, 4, v___y_716_);
lean_ctor_set(v___x_722_, 5, v___x_721_);
lean_ctor_set(v___x_722_, 6, v___y_717_);
lean_ctor_set(v___x_722_, 7, v___y_718_);
lean_ctor_set(v___x_722_, 8, v___y_714_);
lean_ctor_set(v___x_722_, 9, v___y_710_);
v___x_723_ = lean_st_ref_put(v___y_711_, v___x_722_);
v___x_724_ = lean_st_ref_take(v___y_715_);
v_mctx_725_ = lean_ctor_get(v___x_724_, 0);
v_zetaDeltaFVarIds_726_ = lean_ctor_get(v___x_724_, 2);
v_postponed_727_ = lean_ctor_get(v___x_724_, 3);
v_diag_728_ = lean_ctor_get(v___x_724_, 4);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_739_ == 0)
{
lean_object* v_unused_740_; 
v_unused_740_ = lean_ctor_get(v___x_724_, 1);
lean_dec(v_unused_740_);
v___x_730_ = v___x_724_;
v_isShared_731_ = v_isSharedCheck_739_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_diag_728_);
lean_inc(v_postponed_727_);
lean_inc(v_zetaDeltaFVarIds_726_);
lean_inc(v_mctx_725_);
lean_dec(v___x_724_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_739_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_732_ = lean_box(0);
v___x_733_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 1, v___x_733_);
v___x_735_ = v___x_730_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_mctx_725_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_738_, 2, v_zetaDeltaFVarIds_726_);
lean_ctor_set(v_reuseFailAlloc_738_, 3, v_postponed_727_);
lean_ctor_set(v_reuseFailAlloc_738_, 4, v_diag_728_);
v___x_735_ = v_reuseFailAlloc_738_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_st_ref_put(v___y_715_, v___x_735_);
v___x_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_732_);
return v___x_737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___boxed(lean_object* v_mod_832_, lean_object* v_isMeta_833_, lean_object* v_hint_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
uint8_t v_isMeta_boxed_842_; lean_object* v_res_843_; 
v_isMeta_boxed_842_ = lean_unbox(v_isMeta_833_);
v_res_843_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(v_mod_832_, v_isMeta_boxed_842_, v_hint_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(lean_object* v___x_844_, lean_object* v_declName_845_, lean_object* v_as_846_, size_t v_sz_847_, size_t v_i_848_, lean_object* v_b_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
uint8_t v___x_857_; 
v___x_857_ = lean_usize_dec_lt(v_i_848_, v_sz_847_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; 
lean_dec(v_declName_845_);
v___x_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_858_, 0, v_b_849_);
return v___x_858_;
}
else
{
lean_object* v___x_859_; lean_object* v_modules_860_; lean_object* v___x_861_; lean_object* v_a_862_; lean_object* v___x_863_; lean_object* v_toImport_864_; lean_object* v_module_865_; lean_object* v___x_866_; uint8_t v___x_867_; lean_object* v___x_868_; 
v___x_859_ = l_Lean_Environment_header(v___x_844_);
v_modules_860_ = lean_ctor_get(v___x_859_, 3);
lean_inc_ref(v_modules_860_);
lean_dec_ref(v___x_859_);
v___x_861_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_862_ = lean_array_uget_borrowed(v_as_846_, v_i_848_);
v___x_863_ = lean_array_get(v___x_861_, v_modules_860_, v_a_862_);
lean_dec_ref(v_modules_860_);
v_toImport_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc_ref(v_toImport_864_);
lean_dec(v___x_863_);
v_module_865_ = lean_ctor_get(v_toImport_864_, 0);
lean_inc(v_module_865_);
lean_dec_ref(v_toImport_864_);
v___x_866_ = lean_box(0);
v___x_867_ = 0;
lean_inc(v_declName_845_);
v___x_868_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(v_module_865_, v___x_867_, v_declName_845_, v___y_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_);
if (lean_obj_tag(v___x_868_) == 0)
{
size_t v___x_869_; size_t v___x_870_; 
lean_dec_ref_known(v___x_868_, 1);
v___x_869_ = ((size_t)1ULL);
v___x_870_ = lean_usize_add(v_i_848_, v___x_869_);
v_i_848_ = v___x_870_;
v_b_849_ = v___x_866_;
goto _start;
}
else
{
lean_dec(v_declName_845_);
return v___x_868_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1___boxed(lean_object* v___x_872_, lean_object* v_declName_873_, lean_object* v_as_874_, lean_object* v_sz_875_, lean_object* v_i_876_, lean_object* v_b_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
size_t v_sz_boxed_885_; size_t v_i_boxed_886_; lean_object* v_res_887_; 
v_sz_boxed_885_ = lean_unbox_usize(v_sz_875_);
lean_dec(v_sz_875_);
v_i_boxed_886_ = lean_unbox_usize(v_i_876_);
lean_dec(v_i_876_);
v_res_887_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(v___x_872_, v_declName_873_, v_as_874_, v_sz_boxed_885_, v_i_boxed_886_, v_b_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec_ref(v_as_874_);
lean_dec_ref(v___x_872_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(lean_object* v_a_888_, lean_object* v_x_889_){
_start:
{
if (lean_obj_tag(v_x_889_) == 0)
{
lean_object* v___x_890_; 
v___x_890_ = lean_box(0);
return v___x_890_;
}
else
{
lean_object* v_key_891_; lean_object* v_value_892_; lean_object* v_tail_893_; uint8_t v___x_894_; 
v_key_891_ = lean_ctor_get(v_x_889_, 0);
v_value_892_ = lean_ctor_get(v_x_889_, 1);
v_tail_893_ = lean_ctor_get(v_x_889_, 2);
v___x_894_ = lean_name_eq(v_key_891_, v_a_888_);
if (v___x_894_ == 0)
{
v_x_889_ = v_tail_893_;
goto _start;
}
else
{
lean_object* v___x_896_; 
lean_inc(v_value_892_);
v___x_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_896_, 0, v_value_892_);
return v___x_896_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_a_897_, lean_object* v_x_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(v_a_897_, v_x_898_);
lean_dec(v_x_898_);
lean_dec(v_a_897_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(lean_object* v_m_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_buckets_902_; lean_object* v___x_903_; uint64_t v___y_905_; 
v_buckets_902_ = lean_ctor_get(v_m_900_, 1);
v___x_903_ = lean_array_get_size(v_buckets_902_);
if (lean_obj_tag(v_a_901_) == 0)
{
uint64_t v___x_919_; 
v___x_919_ = 1723ULL;
v___y_905_ = v___x_919_;
goto v___jp_904_;
}
else
{
uint64_t v_hash_920_; 
v_hash_920_ = lean_ctor_get_uint64(v_a_901_, sizeof(void*)*2);
v___y_905_ = v_hash_920_;
goto v___jp_904_;
}
v___jp_904_:
{
uint64_t v___x_906_; uint64_t v___x_907_; uint64_t v_fold_908_; uint64_t v___x_909_; uint64_t v___x_910_; uint64_t v___x_911_; size_t v___x_912_; size_t v___x_913_; size_t v___x_914_; size_t v___x_915_; size_t v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_906_ = 32ULL;
v___x_907_ = lean_uint64_shift_right(v___y_905_, v___x_906_);
v_fold_908_ = lean_uint64_xor(v___y_905_, v___x_907_);
v___x_909_ = 16ULL;
v___x_910_ = lean_uint64_shift_right(v_fold_908_, v___x_909_);
v___x_911_ = lean_uint64_xor(v_fold_908_, v___x_910_);
v___x_912_ = lean_uint64_to_usize(v___x_911_);
v___x_913_ = lean_usize_of_nat(v___x_903_);
v___x_914_ = ((size_t)1ULL);
v___x_915_ = lean_usize_sub(v___x_913_, v___x_914_);
v___x_916_ = lean_usize_land(v___x_912_, v___x_915_);
v___x_917_ = lean_array_uget_borrowed(v_buckets_902_, v___x_916_);
v___x_918_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(v_a_901_, v___x_917_);
return v___x_918_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg___boxed(lean_object* v_m_921_, lean_object* v_a_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(v_m_921_, v_a_922_);
lean_dec(v_a_922_);
lean_dec_ref(v_m_921_);
return v_res_923_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0(void){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Std_HashMap_instInhabited___redArg();
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(lean_object* v_declName_927_, uint8_t v_isMeta_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v_env_941_; lean_object* v___y_943_; lean_object* v___x_956_; 
v___x_936_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0);
v___x_937_ = lean_st_ref_get(v___y_934_);
v_env_941_ = lean_ctor_get(v___x_937_, 0);
lean_inc_ref(v_env_941_);
lean_dec(v___x_937_);
v___x_956_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_941_, v_declName_927_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_dec_ref(v_env_941_);
lean_dec(v_declName_927_);
goto v___jp_938_;
}
else
{
lean_object* v_val_957_; lean_object* v___x_958_; lean_object* v_modules_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_val_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_val_957_);
lean_dec_ref_known(v___x_956_, 1);
v___x_958_ = l_Lean_Environment_header(v_env_941_);
v_modules_959_ = lean_ctor_get(v___x_958_, 3);
lean_inc_ref(v_modules_959_);
lean_dec_ref(v___x_958_);
v___x_960_ = lean_array_get_size(v_modules_959_);
v___x_961_ = lean_nat_dec_lt(v_val_957_, v___x_960_);
if (v___x_961_ == 0)
{
lean_dec_ref(v_modules_959_);
lean_dec(v_val_957_);
lean_dec_ref(v_env_941_);
lean_dec(v_declName_927_);
goto v___jp_938_;
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___y_965_; 
v___x_962_ = lean_array_fget(v_modules_959_, v_val_957_);
lean_dec(v_val_957_);
lean_dec_ref(v_modules_959_);
v___x_963_ = lean_st_ref_get(v___y_934_);
if (v_isMeta_928_ == 0)
{
lean_dec(v___x_963_);
v___y_965_ = v_isMeta_928_;
goto v___jp_964_;
}
else
{
lean_object* v_env_976_; uint8_t v___x_977_; 
v_env_976_ = lean_ctor_get(v___x_963_, 0);
lean_inc_ref(v_env_976_);
lean_dec(v___x_963_);
lean_inc(v_declName_927_);
v___x_977_ = l_Lean_isMarkedMeta(v_env_976_, v_declName_927_);
if (v___x_977_ == 0)
{
v___y_965_ = v_isMeta_928_;
goto v___jp_964_;
}
else
{
uint8_t v___x_978_; 
v___x_978_ = 0;
v___y_965_ = v___x_978_;
goto v___jp_964_;
}
}
v___jp_964_:
{
lean_object* v_toImport_966_; lean_object* v_module_967_; lean_object* v___x_968_; 
v_toImport_966_ = lean_ctor_get(v___x_962_, 0);
lean_inc_ref(v_toImport_966_);
lean_dec(v___x_962_);
v_module_967_ = lean_ctor_get(v_toImport_966_, 0);
lean_inc(v_module_967_);
lean_dec_ref(v_toImport_966_);
lean_inc(v_declName_927_);
v___x_968_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(v_module_967_, v___y_965_, v_declName_927_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
lean_dec_ref_known(v___x_968_, 1);
v___x_969_ = l_Lean_indirectModUseExt;
v___x_970_ = lean_box(1);
v___x_971_ = lean_box(0);
lean_inc_ref(v_env_941_);
v___x_972_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_936_, v___x_969_, v_env_941_, v___x_970_, v___x_971_);
v___x_973_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(v___x_972_, v_declName_927_);
lean_dec(v___x_972_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v___x_974_; 
v___x_974_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1));
v___y_943_ = v___x_974_;
goto v___jp_942_;
}
else
{
lean_object* v_val_975_; 
v_val_975_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_val_975_);
lean_dec_ref_known(v___x_973_, 1);
v___y_943_ = v_val_975_;
goto v___jp_942_;
}
}
else
{
lean_dec_ref(v_env_941_);
lean_dec(v_declName_927_);
return v___x_968_;
}
}
}
}
v___jp_938_:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_box(0);
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
v___jp_942_:
{
lean_object* v___x_944_; size_t v_sz_945_; size_t v___x_946_; lean_object* v___x_947_; 
v___x_944_ = lean_box(0);
v_sz_945_ = lean_array_size(v___y_943_);
v___x_946_ = ((size_t)0ULL);
v___x_947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(v_env_941_, v_declName_927_, v___y_943_, v_sz_945_, v___x_946_, v___x_944_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
lean_dec_ref(v___y_943_);
lean_dec_ref(v_env_941_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_954_ == 0)
{
lean_object* v_unused_955_; 
v_unused_955_ = lean_ctor_get(v___x_947_, 0);
lean_dec(v_unused_955_);
v___x_949_ = v___x_947_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_dec(v___x_947_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_944_);
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_944_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
else
{
return v___x_947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___boxed(lean_object* v_declName_979_, lean_object* v_isMeta_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
uint8_t v_isMeta_boxed_988_; lean_object* v_res_989_; 
v_isMeta_boxed_988_ = lean_unbox(v_isMeta_980_);
v_res_989_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(v_declName_979_, v_isMeta_boxed_988_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0(lean_object* v___x_990_, lean_object* v___x_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_990_, v___x_991_, v___y_996_, v___y_997_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; uint8_t v___x_1001_; lean_object* v___x_1002_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc_n(v_a_1000_, 2);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = 0;
v___x_1002_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(v_a_1000_, v___x_1001_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1009_ == 0)
{
lean_object* v_unused_1010_; 
v_unused_1010_ = lean_ctor_get(v___x_1002_, 0);
lean_dec(v_unused_1010_);
v___x_1004_ = v___x_1002_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_dec(v___x_1002_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v_a_1000_);
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1000_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec(v_a_1000_);
v_a_1011_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_1002_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1002_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
else
{
return v___x_999_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0___boxed(lean_object* v___x_1019_, lean_object* v___x_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0(v___x_1019_, v___x_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(lean_object* v___y_1029_, uint8_t v_isExporting_1030_, lean_object* v___x_1031_, lean_object* v___y_1032_, lean_object* v___x_1033_, lean_object* v_a_x3f_1034_){
_start:
{
lean_object* v___x_1036_; lean_object* v_env_1037_; lean_object* v_nextMacroScope_1038_; lean_object* v_ngen_1039_; lean_object* v_auxDeclNGen_1040_; lean_object* v_traceState_1041_; lean_object* v_recordedDeps_1042_; lean_object* v_messages_1043_; lean_object* v_infoState_1044_; lean_object* v_snapshotTasks_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1070_; 
v___x_1036_ = lean_st_ref_take(v___y_1029_);
v_env_1037_ = lean_ctor_get(v___x_1036_, 0);
v_nextMacroScope_1038_ = lean_ctor_get(v___x_1036_, 1);
v_ngen_1039_ = lean_ctor_get(v___x_1036_, 2);
v_auxDeclNGen_1040_ = lean_ctor_get(v___x_1036_, 3);
v_traceState_1041_ = lean_ctor_get(v___x_1036_, 4);
v_recordedDeps_1042_ = lean_ctor_get(v___x_1036_, 6);
v_messages_1043_ = lean_ctor_get(v___x_1036_, 7);
v_infoState_1044_ = lean_ctor_get(v___x_1036_, 8);
v_snapshotTasks_1045_ = lean_ctor_get(v___x_1036_, 9);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v___x_1036_, 5);
lean_dec(v_unused_1071_);
v___x_1047_ = v___x_1036_;
v_isShared_1048_ = v_isSharedCheck_1070_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_snapshotTasks_1045_);
lean_inc(v_infoState_1044_);
lean_inc(v_messages_1043_);
lean_inc(v_recordedDeps_1042_);
lean_inc(v_traceState_1041_);
lean_inc(v_auxDeclNGen_1040_);
lean_inc(v_ngen_1039_);
lean_inc(v_nextMacroScope_1038_);
lean_inc(v_env_1037_);
lean_dec(v___x_1036_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1070_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1049_; lean_object* v___x_1051_; 
v___x_1049_ = l_Lean_Environment_setExporting(v_env_1037_, v_isExporting_1030_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 5, v___x_1031_);
lean_ctor_set(v___x_1047_, 0, v___x_1049_);
v___x_1051_ = v___x_1047_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_nextMacroScope_1038_);
lean_ctor_set(v_reuseFailAlloc_1069_, 2, v_ngen_1039_);
lean_ctor_set(v_reuseFailAlloc_1069_, 3, v_auxDeclNGen_1040_);
lean_ctor_set(v_reuseFailAlloc_1069_, 4, v_traceState_1041_);
lean_ctor_set(v_reuseFailAlloc_1069_, 5, v___x_1031_);
lean_ctor_set(v_reuseFailAlloc_1069_, 6, v_recordedDeps_1042_);
lean_ctor_set(v_reuseFailAlloc_1069_, 7, v_messages_1043_);
lean_ctor_set(v_reuseFailAlloc_1069_, 8, v_infoState_1044_);
lean_ctor_set(v_reuseFailAlloc_1069_, 9, v_snapshotTasks_1045_);
v___x_1051_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v_mctx_1054_; lean_object* v_zetaDeltaFVarIds_1055_; lean_object* v_postponed_1056_; lean_object* v_diag_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1067_; 
v___x_1052_ = lean_st_ref_put(v___y_1029_, v___x_1051_);
v___x_1053_ = lean_st_ref_take(v___y_1032_);
v_mctx_1054_ = lean_ctor_get(v___x_1053_, 0);
v_zetaDeltaFVarIds_1055_ = lean_ctor_get(v___x_1053_, 2);
v_postponed_1056_ = lean_ctor_get(v___x_1053_, 3);
v_diag_1057_ = lean_ctor_get(v___x_1053_, 4);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; 
v_unused_1068_ = lean_ctor_get(v___x_1053_, 1);
lean_dec(v_unused_1068_);
v___x_1059_ = v___x_1053_;
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_diag_1057_);
lean_inc(v_postponed_1056_);
lean_inc(v_zetaDeltaFVarIds_1055_);
lean_inc(v_mctx_1054_);
lean_dec(v___x_1053_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1061_ = lean_box(0);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 1, v___x_1033_);
v___x_1063_ = v___x_1059_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_mctx_1054_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v___x_1033_);
lean_ctor_set(v_reuseFailAlloc_1066_, 2, v_zetaDeltaFVarIds_1055_);
lean_ctor_set(v_reuseFailAlloc_1066_, 3, v_postponed_1056_);
lean_ctor_set(v_reuseFailAlloc_1066_, 4, v_diag_1057_);
v___x_1063_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = lean_st_ref_put(v___y_1032_, v___x_1063_);
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1061_);
return v___x_1065_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v___y_1072_, lean_object* v_isExporting_1073_, lean_object* v___x_1074_, lean_object* v___y_1075_, lean_object* v___x_1076_, lean_object* v_a_x3f_1077_, lean_object* v___y_1078_){
_start:
{
uint8_t v_isExporting_boxed_1079_; lean_object* v_res_1080_; 
v_isExporting_boxed_1079_ = lean_unbox(v_isExporting_1073_);
v_res_1080_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(v___y_1072_, v_isExporting_boxed_1079_, v___x_1074_, v___y_1075_, v___x_1076_, v_a_x3f_1077_);
lean_dec(v_a_x3f_1077_);
lean_dec(v___y_1075_);
lean_dec(v___y_1072_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(lean_object* v_x_1081_, uint8_t v_isExporting_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; lean_object* v_env_1091_; lean_object* v___x_1092_; uint8_t v_isModule_1093_; 
v___x_1090_ = lean_st_ref_get(v___y_1088_);
v_env_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc_ref(v_env_1091_);
lean_dec(v___x_1090_);
v___x_1092_ = l_Lean_Environment_header(v_env_1091_);
v_isModule_1093_ = lean_ctor_get_uint8(v___x_1092_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1092_);
if (v_isModule_1093_ == 0)
{
lean_object* v___x_1094_; 
lean_dec_ref(v_env_1091_);
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc(v___y_1084_);
lean_inc_ref(v___y_1083_);
v___x_1094_ = lean_apply_7(v_x_1081_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, lean_box(0));
return v___x_1094_;
}
else
{
uint8_t v_isExporting_1095_; 
v_isExporting_1095_ = lean_ctor_get_uint8(v_env_1091_, sizeof(void*)*13);
lean_dec_ref(v_env_1091_);
if (v_isExporting_1082_ == 0)
{
if (v_isExporting_1095_ == 0)
{
lean_object* v___x_1162_; 
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc(v___y_1084_);
lean_inc_ref(v___y_1083_);
v___x_1162_ = lean_apply_7(v_x_1081_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, lean_box(0));
return v___x_1162_;
}
else
{
goto v___jp_1096_;
}
}
else
{
if (v_isExporting_1095_ == 0)
{
goto v___jp_1096_;
}
else
{
lean_object* v___x_1163_; 
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc(v___y_1084_);
lean_inc_ref(v___y_1083_);
v___x_1163_ = lean_apply_7(v_x_1081_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, lean_box(0));
return v___x_1163_;
}
}
v___jp_1096_:
{
lean_object* v___x_1097_; lean_object* v_env_1098_; lean_object* v_nextMacroScope_1099_; lean_object* v_ngen_1100_; lean_object* v_auxDeclNGen_1101_; lean_object* v_traceState_1102_; lean_object* v_recordedDeps_1103_; lean_object* v_messages_1104_; lean_object* v_infoState_1105_; lean_object* v_snapshotTasks_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1160_; 
v___x_1097_ = lean_st_ref_take(v___y_1088_);
v_env_1098_ = lean_ctor_get(v___x_1097_, 0);
v_nextMacroScope_1099_ = lean_ctor_get(v___x_1097_, 1);
v_ngen_1100_ = lean_ctor_get(v___x_1097_, 2);
v_auxDeclNGen_1101_ = lean_ctor_get(v___x_1097_, 3);
v_traceState_1102_ = lean_ctor_get(v___x_1097_, 4);
v_recordedDeps_1103_ = lean_ctor_get(v___x_1097_, 6);
v_messages_1104_ = lean_ctor_get(v___x_1097_, 7);
v_infoState_1105_ = lean_ctor_get(v___x_1097_, 8);
v_snapshotTasks_1106_ = lean_ctor_get(v___x_1097_, 9);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1160_ == 0)
{
lean_object* v_unused_1161_; 
v_unused_1161_ = lean_ctor_get(v___x_1097_, 5);
lean_dec(v_unused_1161_);
v___x_1108_ = v___x_1097_;
v_isShared_1109_ = v_isSharedCheck_1160_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_snapshotTasks_1106_);
lean_inc(v_infoState_1105_);
lean_inc(v_messages_1104_);
lean_inc(v_recordedDeps_1103_);
lean_inc(v_traceState_1102_);
lean_inc(v_auxDeclNGen_1101_);
lean_inc(v_ngen_1100_);
lean_inc(v_nextMacroScope_1099_);
lean_inc(v_env_1098_);
lean_dec(v___x_1097_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1160_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1110_ = l_Lean_Environment_setExporting(v_env_1098_, v_isExporting_1082_);
v___x_1111_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 5, v___x_1111_);
lean_ctor_set(v___x_1108_, 0, v___x_1110_);
v___x_1113_ = v___x_1108_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_nextMacroScope_1099_);
lean_ctor_set(v_reuseFailAlloc_1159_, 2, v_ngen_1100_);
lean_ctor_set(v_reuseFailAlloc_1159_, 3, v_auxDeclNGen_1101_);
lean_ctor_set(v_reuseFailAlloc_1159_, 4, v_traceState_1102_);
lean_ctor_set(v_reuseFailAlloc_1159_, 5, v___x_1111_);
lean_ctor_set(v_reuseFailAlloc_1159_, 6, v_recordedDeps_1103_);
lean_ctor_set(v_reuseFailAlloc_1159_, 7, v_messages_1104_);
lean_ctor_set(v_reuseFailAlloc_1159_, 8, v_infoState_1105_);
lean_ctor_set(v_reuseFailAlloc_1159_, 9, v_snapshotTasks_1106_);
v___x_1113_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v_mctx_1116_; lean_object* v_zetaDeltaFVarIds_1117_; lean_object* v_postponed_1118_; lean_object* v_diag_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1157_; 
v___x_1114_ = lean_st_ref_put(v___y_1088_, v___x_1113_);
v___x_1115_ = lean_st_ref_take(v___y_1086_);
v_mctx_1116_ = lean_ctor_get(v___x_1115_, 0);
v_zetaDeltaFVarIds_1117_ = lean_ctor_get(v___x_1115_, 2);
v_postponed_1118_ = lean_ctor_get(v___x_1115_, 3);
v_diag_1119_ = lean_ctor_get(v___x_1115_, 4);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1157_ == 0)
{
lean_object* v_unused_1158_; 
v_unused_1158_ = lean_ctor_get(v___x_1115_, 1);
lean_dec(v_unused_1158_);
v___x_1121_ = v___x_1115_;
v_isShared_1122_ = v_isSharedCheck_1157_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_diag_1119_);
lean_inc(v_postponed_1118_);
lean_inc(v_zetaDeltaFVarIds_1117_);
lean_inc(v_mctx_1116_);
lean_dec(v___x_1115_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1157_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1123_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3);
if (v_isShared_1122_ == 0)
{
lean_ctor_set(v___x_1121_, 1, v___x_1123_);
v___x_1125_ = v___x_1121_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_mctx_1116_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v___x_1123_);
lean_ctor_set(v_reuseFailAlloc_1156_, 2, v_zetaDeltaFVarIds_1117_);
lean_ctor_set(v_reuseFailAlloc_1156_, 3, v_postponed_1118_);
lean_ctor_set(v_reuseFailAlloc_1156_, 4, v_diag_1119_);
v___x_1125_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
lean_object* v___x_1126_; lean_object* v_r_1127_; 
v___x_1126_ = lean_st_ref_put(v___y_1086_, v___x_1125_);
lean_inc(v___y_1088_);
lean_inc_ref(v___y_1087_);
lean_inc(v___y_1086_);
lean_inc_ref(v___y_1085_);
lean_inc(v___y_1084_);
lean_inc_ref(v___y_1083_);
v_r_1127_ = lean_apply_7(v_x_1081_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, lean_box(0));
if (lean_obj_tag(v_r_1127_) == 0)
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1144_; 
v_a_1128_ = lean_ctor_get(v_r_1127_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_r_1127_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1130_ = v_r_1127_;
v_isShared_1131_ = v_isSharedCheck_1144_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v_r_1127_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1144_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
lean_inc(v_a_1128_);
if (v_isShared_1131_ == 0)
{
lean_ctor_set_tag(v___x_1130_, 1);
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
v___x_1134_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(v___y_1088_, v_isExporting_1095_, v___x_1111_, v___y_1086_, v___x_1123_, v___x_1133_);
lean_dec_ref(v___x_1133_);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1141_ == 0)
{
lean_object* v_unused_1142_; 
v_unused_1142_ = lean_ctor_get(v___x_1134_, 0);
lean_dec(v_unused_1142_);
v___x_1136_ = v___x_1134_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_dec(v___x_1134_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 0, v_a_1128_);
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1128_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
v_a_1145_ = lean_ctor_get(v_r_1127_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v_r_1127_, 1);
v___x_1146_ = lean_box(0);
v___x_1147_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(v___y_1088_, v_isExporting_1095_, v___x_1111_, v___y_1086_, v___x_1123_, v___x_1146_);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1154_ == 0)
{
lean_object* v_unused_1155_; 
v_unused_1155_ = lean_ctor_get(v___x_1147_, 0);
lean_dec(v_unused_1155_);
v___x_1149_ = v___x_1147_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_dec(v___x_1147_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
lean_ctor_set_tag(v___x_1149_, 1);
lean_ctor_set(v___x_1149_, 0, v_a_1145_);
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1145_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___boxed(lean_object* v_x_1164_, lean_object* v_isExporting_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v_isExporting_boxed_1173_; lean_object* v_res_1174_; 
v_isExporting_boxed_1173_ = lean_unbox(v_isExporting_1165_);
v_res_1174_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(v_x_1164_, v_isExporting_boxed_1173_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(lean_object* v_x_1175_, uint8_t v_when_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
if (v_when_1176_ == 0)
{
lean_object* v___x_1184_; 
lean_inc(v___y_1182_);
lean_inc_ref(v___y_1181_);
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
lean_inc(v___y_1178_);
lean_inc_ref(v___y_1177_);
v___x_1184_ = lean_apply_7(v_x_1175_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, lean_box(0));
return v___x_1184_;
}
else
{
uint8_t v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = 0;
v___x_1186_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(v_x_1175_, v___x_1185_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_);
return v___x_1186_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg___boxed(lean_object* v_x_1187_, lean_object* v_when_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
uint8_t v_when_boxed_1196_; lean_object* v_res_1197_; 
v_when_boxed_1196_ = lean_unbox(v_when_1188_);
v_res_1197_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(v_x_1187_, v_when_boxed_1196_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(lean_object* v___x_1199_, lean_object* v___x_1200_, lean_object* v_____r_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1209_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13));
v___x_1210_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14));
v___x_1211_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0));
v___x_1212_ = l_Lean_Name_mkStr4(v___x_1199_, v___x_1209_, v___x_1210_, v___x_1211_);
lean_inc(v___x_1200_);
v___x_1213_ = l_Lean_Syntax_isOfKind(v___x_1200_, v___x_1212_);
lean_dec(v___x_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1214_; 
lean_dec(v___x_1200_);
v___x_1214_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v___x_1214_;
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___f_1218_; lean_object* v___x_1219_; 
v___x_1215_ = lean_unsigned_to_nat(2u);
v___x_1216_ = l_Lean_Syntax_getArg(v___x_1200_, v___x_1215_);
lean_dec(v___x_1200_);
v___x_1217_ = lean_box(0);
v___f_1218_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1218_, 0, v___x_1216_);
lean_closure_set(v___f_1218_, 1, v___x_1217_);
v___x_1219_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(v___f_1218_, v___x_1213_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
return v___x_1219_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___boxed(lean_object* v___x_1220_, lean_object* v___x_1221_, lean_object* v_____r_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(v___x_1220_, v___x_1221_, v_____r_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
return v_res_1230_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1235_ = lean_box(0);
v___x_1236_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1));
v___x_1237_ = l_Lean_mkConst(v___x_1236_, v___x_1235_);
return v___x_1237_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2);
v___x_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v_toCold_1254_; lean_object* v_currRecDepth_1255_; lean_object* v_ref_1256_; uint16_t v_optionFlags_1257_; uint8_t v_suppressElabErrors_1258_; uint8_t v_isRecordingDeps_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v_a_1263_; lean_object* v___y_1291_; lean_object* v___x_1301_; lean_object* v_ref_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v_toCold_1254_ = lean_ctor_get(v_a_1251_, 0);
v_currRecDepth_1255_ = lean_ctor_get(v_a_1251_, 1);
v_ref_1256_ = lean_ctor_get(v_a_1251_, 2);
v_optionFlags_1257_ = lean_ctor_get_uint16(v_a_1251_, sizeof(void*)*3);
v_suppressElabErrors_1258_ = lean_ctor_get_uint8(v_a_1251_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1259_ = lean_ctor_get_uint8(v_a_1251_, sizeof(void*)*3 + 3);
v___x_1260_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12));
v___x_1261_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3);
lean_inc(v_a_1246_);
v___x_1301_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_1246_);
v_ref_1302_ = l_Lean_replaceRef(v_a_1246_, v_ref_1256_);
lean_inc(v_currRecDepth_1255_);
lean_inc_ref(v_toCold_1254_);
v___x_1303_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1303_, 0, v_toCold_1254_);
lean_ctor_set(v___x_1303_, 1, v_currRecDepth_1255_);
lean_ctor_set(v___x_1303_, 2, v_ref_1302_);
lean_ctor_set_uint16(v___x_1303_, sizeof(void*)*3, v_optionFlags_1257_);
lean_ctor_set_uint8(v___x_1303_, sizeof(void*)*3 + 2, v_suppressElabErrors_1258_);
lean_ctor_set_uint8(v___x_1303_, sizeof(void*)*3 + 3, v_isRecordingDeps_1259_);
v___x_1304_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5));
lean_inc(v___x_1301_);
v___x_1305_ = l_Lean_Syntax_isOfKind(v___x_1301_, v___x_1304_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_box(0);
v___x_1307_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(v___x_1260_, v___x_1301_, v___x_1306_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v___x_1303_, v_a_1252_);
lean_dec_ref_known(v___x_1303_, 3);
v___y_1291_ = v___x_1307_;
goto v___jp_1290_;
}
else
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1308_ = lean_unsigned_to_nat(0u);
v___x_1309_ = l_Lean_Syntax_getArg(v___x_1301_, v___x_1308_);
v___x_1310_ = l_Lean_Syntax_isNameLit_x3f(v___x_1309_);
lean_dec(v___x_1309_);
if (lean_obj_tag(v___x_1310_) == 1)
{
lean_object* v_val_1311_; 
lean_dec_ref_known(v___x_1303_, 3);
lean_dec(v___x_1301_);
v_val_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_val_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v_a_1263_ = v_val_1311_;
goto v___jp_1262_;
}
else
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
lean_dec(v___x_1310_);
v___x_1312_ = lean_box(0);
v___x_1313_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(v___x_1260_, v___x_1301_, v___x_1312_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v___x_1303_, v_a_1252_);
lean_dec_ref_known(v___x_1303_, 3);
v___y_1291_ = v___x_1313_;
goto v___jp_1290_;
}
}
v___jp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v_infoState_1267_; uint8_t v_enabled_1268_; 
lean_inc(v_a_1263_);
v___x_1264_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_a_1263_);
lean_inc_ref(v___x_1264_);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v_a_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = lean_st_ref_get(v_a_1252_);
v_infoState_1267_ = lean_ctor_get(v___x_1266_, 8);
lean_inc_ref(v_infoState_1267_);
lean_dec(v___x_1266_);
v_enabled_1268_ = lean_ctor_get_uint8(v_infoState_1267_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1267_);
if (v_enabled_1268_ == 0)
{
lean_object* v___x_1269_; 
lean_dec_ref(v___x_1264_);
lean_dec(v_a_1246_);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1265_);
return v___x_1269_;
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; uint8_t v___x_1272_; lean_object* v___x_1273_; 
v___x_1270_ = lean_box(0);
v___x_1271_ = lean_box(0);
v___x_1272_ = 0;
v___x_1273_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_1246_, v___x_1264_, v___x_1261_, v___x_1270_, v___x_1271_, v___x_1272_, v___x_1272_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1280_ == 0)
{
lean_object* v_unused_1281_; 
v_unused_1281_ = lean_ctor_get(v___x_1273_, 0);
lean_dec(v_unused_1281_);
v___x_1275_ = v___x_1273_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_dec(v___x_1273_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1265_);
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1265_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_dec_ref_known(v___x_1265_, 2);
v_a_1282_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1273_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1273_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
v___jp_1290_:
{
if (lean_obj_tag(v___y_1291_) == 0)
{
lean_object* v_a_1292_; 
v_a_1292_ = lean_ctor_get(v___y_1291_, 0);
lean_inc(v_a_1292_);
lean_dec_ref_known(v___y_1291_, 1);
v_a_1263_ = v_a_1292_;
goto v___jp_1262_;
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v_a_1246_);
v_a_1293_ = lean_ctor_get(v___y_1291_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___y_1291_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___y_1291_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___y_1291_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___boxed(lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_);
lean_dec(v_a_1320_);
lean_dec_ref(v_a_1319_);
lean_dec(v_a_1318_);
lean_dec_ref(v_a_1317_);
lean_dec(v_a_1316_);
lean_dec_ref(v_a_1315_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4(lean_object* v_00_u03b1_1323_, lean_object* v_x_1324_, uint8_t v_isExporting_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(v_x_1324_, v_isExporting_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1334_, lean_object* v_x_1335_, lean_object* v_isExporting_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
uint8_t v_isExporting_boxed_1344_; lean_object* v_res_1345_; 
v_isExporting_boxed_1344_ = lean_unbox(v_isExporting_1336_);
v_res_1345_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4(v_00_u03b1_1334_, v_x_1335_, v_isExporting_boxed_1344_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1(lean_object* v_00_u03b1_1346_, lean_object* v_x_1347_, uint8_t v_when_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(v_x_1347_, v_when_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___boxed(lean_object* v_00_u03b1_1357_, lean_object* v_x_1358_, lean_object* v_when_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
uint8_t v_when_boxed_1367_; lean_object* v_res_1368_; 
v_when_boxed_1367_ = lean_unbox(v_when_1359_);
v_res_1368_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1(v_00_u03b1_1357_, v_x_1358_, v_when_boxed_1367_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2(lean_object* v_00_u03b2_1369_, lean_object* v_m_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(v_m_1370_, v_a_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1373_, lean_object* v_m_1374_, lean_object* v_a_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2(v_00_u03b2_1373_, v_m_1374_, v_a_1375_);
lean_dec(v_a_1375_);
lean_dec_ref(v_m_1374_);
return v_res_1376_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1377_, lean_object* v_x_1378_, lean_object* v_x_1379_){
_start:
{
uint8_t v___x_1380_; 
v___x_1380_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg(v_x_1378_, v_x_1379_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1381_, lean_object* v_x_1382_, lean_object* v_x_1383_){
_start:
{
uint8_t v_res_1384_; lean_object* v_r_1385_; 
v_res_1384_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1(v_00_u03b2_1381_, v_x_1382_, v_x_1383_);
lean_dec_ref(v_x_1383_);
lean_dec_ref(v_x_1382_);
v_r_1385_ = lean_box(v_res_1384_);
return v_r_1385_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1386_, lean_object* v_m_1387_, lean_object* v_a_1388_, lean_object* v_b_1389_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(v_m_1387_, v_a_1388_, v_b_1389_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3(lean_object* v_cls_1391_, lean_object* v_msg_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v___x_1400_; 
v___x_1400_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(v_cls_1391_, v_msg_1392_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___boxed(lean_object* v_cls_1401_, lean_object* v_msg_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3(v_cls_1401_, v_msg_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1411_, lean_object* v_a_1412_, lean_object* v_x_1413_){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(v_a_1412_, v_x_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1415_, lean_object* v_a_1416_, lean_object* v_x_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6(v_00_u03b2_1415_, v_a_1416_, v_x_1417_);
lean_dec(v_x_1417_);
lean_dec(v_a_1416_);
return v_res_1418_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_1419_, lean_object* v_x_1420_, size_t v_x_1421_, lean_object* v_x_1422_){
_start:
{
uint8_t v___x_1423_; 
v___x_1423_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___redArg(v_x_1420_, v_x_1421_, v_x_1422_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_1424_, lean_object* v_x_1425_, lean_object* v_x_1426_, lean_object* v_x_1427_){
_start:
{
size_t v_x_12760__boxed_1428_; uint8_t v_res_1429_; lean_object* v_r_1430_; 
v_x_12760__boxed_1428_ = lean_unbox_usize(v_x_1426_);
lean_dec(v_x_1426_);
v_res_1429_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_1424_, v_x_1425_, v_x_12760__boxed_1428_, v_x_1427_);
lean_dec_ref(v_x_1427_);
lean_dec_ref(v_x_1425_);
v_r_1430_ = lean_box(v_res_1429_);
return v_r_1430_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1431_, lean_object* v_a_1432_, lean_object* v_x_1433_){
_start:
{
uint8_t v___x_1434_; 
v___x_1434_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___redArg(v_a_1432_, v_x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1435_, lean_object* v_a_1436_, lean_object* v_x_1437_){
_start:
{
uint8_t v_res_1438_; lean_object* v_r_1439_; 
v_res_1438_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__6(v_00_u03b2_1435_, v_a_1436_, v_x_1437_);
lean_dec(v_x_1437_);
lean_dec_ref(v_a_1436_);
v_r_1439_ = lean_box(v_res_1438_);
return v_r_1439_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7(lean_object* v_00_u03b2_1440_, lean_object* v_data_1441_){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7___redArg(v_data_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_1443_, lean_object* v_keys_1444_, lean_object* v_vals_1445_, lean_object* v_heq_1446_, lean_object* v_i_1447_, lean_object* v_k_1448_){
_start:
{
uint8_t v___x_1449_; 
v___x_1449_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_keys_1444_, v_i_1447_, v_k_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1450_, lean_object* v_keys_1451_, lean_object* v_vals_1452_, lean_object* v_heq_1453_, lean_object* v_i_1454_, lean_object* v_k_1455_){
_start:
{
uint8_t v_res_1456_; lean_object* v_r_1457_; 
v_res_1456_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__4_spec__7(v_00_u03b2_1450_, v_keys_1451_, v_vals_1452_, v_heq_1453_, v_i_1454_, v_k_1455_);
lean_dec_ref(v_k_1455_);
lean_dec_ref(v_vals_1452_);
lean_dec_ref(v_keys_1451_);
v_r_1457_ = lean_box(v_res_1456_);
return v_r_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11(lean_object* v_00_u03b2_1458_, lean_object* v_i_1459_, lean_object* v_source_1460_, lean_object* v_target_1461_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11___redArg(v_i_1459_, v_source_1460_, v_target_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11_spec__15(lean_object* v_00_u03b2_1463_, lean_object* v_x_1464_, lean_object* v_x_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__7_spec__11_spec__15___redArg(v_x_1464_, v_x_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(lean_object* v_ev_1468_, lean_object* v___x_1469_, lean_object* v___x_1470_, lean_object* v_typeExpr_1471_, lean_object* v_stx_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___x_1480_; 
lean_inc(v___y_1478_);
lean_inc_ref(v___y_1477_);
lean_inc(v___y_1476_);
lean_inc_ref(v___y_1475_);
lean_inc(v___y_1474_);
lean_inc_ref(v___y_1473_);
v___x_1480_ = lean_apply_8(v_ev_1468_, v_stx_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, lean_box(0));
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1502_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1483_ = v___x_1480_;
v_isShared_1484_ = v_isSharedCheck_1502_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1480_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1502_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v_fst_1485_; lean_object* v_snd_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1501_; 
v_fst_1485_ = lean_ctor_get(v_a_1481_, 0);
v_snd_1486_ = lean_ctor_get(v_a_1481_, 1);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_a_1481_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1488_ = v_a_1481_;
v_isShared_1489_ = v_isSharedCheck_1501_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_snd_1486_);
lean_inc(v_fst_1485_);
lean_dec(v_a_1481_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1501_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1490_, 0, v_fst_1485_);
v___x_1491_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0));
v___x_1492_ = l_Lean_Name_mkStr2(v___x_1469_, v___x_1491_);
v___x_1493_ = l_Lean_Expr_const___override(v___x_1492_, v___x_1470_);
v___x_1494_ = l_Lean_mkAppB(v___x_1493_, v_typeExpr_1471_, v_snd_1486_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1494_);
lean_ctor_set(v___x_1488_, 0, v___x_1490_);
v___x_1496_ = v___x_1488_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1490_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
lean_object* v___x_1498_; 
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v___x_1496_);
v___x_1498_ = v___x_1483_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1496_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec_ref(v_typeExpr_1471_);
lean_dec(v___x_1470_);
lean_dec_ref(v___x_1469_);
v_a_1503_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1480_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1480_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___boxed(lean_object* v_ev_1511_, lean_object* v___x_1512_, lean_object* v___x_1513_, lean_object* v_typeExpr_1514_, lean_object* v_stx_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1511_, v___x_1512_, v___x_1513_, v_typeExpr_1514_, v_stx_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
return v_res_1523_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1527_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1528_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1));
v___x_1529_ = l_Lean_Expr_const___override(v___x_1528_, v___x_1527_);
return v___x_1529_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1544_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1545_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__8));
v___x_1546_ = l_Lean_Expr_const___override(v___x_1545_, v___x_1544_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(lean_object* v_typeExpr_1547_, lean_object* v_ev_1548_, lean_object* v_stx_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v_a_1564_; lean_object* v_snd_1565_; lean_object* v___y_1591_; lean_object* v___x_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; 
v___x_1557_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0));
v___x_1558_ = lean_unsigned_to_nat(0u);
v___x_1559_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1560_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2);
lean_inc_ref(v_typeExpr_1547_);
v___x_1561_ = l_Lean_Expr_app___override(v___x_1560_, v_typeExpr_1547_);
v___x_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
lean_inc(v_stx_1549_);
v___x_1594_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_1549_);
v___x_1595_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4));
v___x_1596_ = l_Lean_Syntax_matchesIdent(v___x_1594_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_object* v_toCold_1597_; lean_object* v_currRecDepth_1598_; lean_object* v_ref_1599_; uint16_t v_optionFlags_1600_; uint8_t v_suppressElabErrors_1601_; uint8_t v_isRecordingDeps_1602_; lean_object* v_ref_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; uint8_t v___x_1606_; 
v_toCold_1597_ = lean_ctor_get(v_a_1554_, 0);
v_currRecDepth_1598_ = lean_ctor_get(v_a_1554_, 1);
v_ref_1599_ = lean_ctor_get(v_a_1554_, 2);
v_optionFlags_1600_ = lean_ctor_get_uint16(v_a_1554_, sizeof(void*)*3);
v_suppressElabErrors_1601_ = lean_ctor_get_uint8(v_a_1554_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1602_ = lean_ctor_get_uint8(v_a_1554_, sizeof(void*)*3 + 3);
v_ref_1603_ = l_Lean_replaceRef(v_stx_1549_, v_ref_1599_);
lean_inc(v_currRecDepth_1598_);
lean_inc_ref(v_toCold_1597_);
v___x_1604_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1604_, 0, v_toCold_1597_);
lean_ctor_set(v___x_1604_, 1, v_currRecDepth_1598_);
lean_ctor_set(v___x_1604_, 2, v_ref_1603_);
lean_ctor_set_uint16(v___x_1604_, sizeof(void*)*3, v_optionFlags_1600_);
lean_ctor_set_uint8(v___x_1604_, sizeof(void*)*3 + 2, v_suppressElabErrors_1601_);
lean_ctor_set_uint8(v___x_1604_, sizeof(void*)*3 + 3, v_isRecordingDeps_1602_);
v___x_1605_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16));
lean_inc(v___x_1594_);
v___x_1606_ = l_Lean_Syntax_isOfKind(v___x_1594_, v___x_1605_);
if (v___x_1606_ == 0)
{
lean_object* v___x_1607_; uint8_t v___x_1608_; 
v___x_1607_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6));
lean_inc(v___x_1594_);
v___x_1608_ = l_Lean_Syntax_isOfKind(v___x_1594_, v___x_1607_);
if (v___x_1608_ == 0)
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v___x_1594_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1609_;
goto v___jp_1590_;
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; uint8_t v___x_1612_; 
v___x_1610_ = l_Lean_Syntax_getArg(v___x_1594_, v___x_1558_);
v___x_1611_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__7));
v___x_1612_ = l_Lean_Syntax_matchesIdent(v___x_1610_, v___x_1611_);
if (v___x_1612_ == 0)
{
uint8_t v___x_1613_; 
lean_inc(v___x_1610_);
v___x_1613_ = l_Lean_Syntax_isOfKind(v___x_1610_, v___x_1605_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; 
lean_dec(v___x_1610_);
v___x_1614_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v___x_1594_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1614_;
goto v___jp_1590_;
}
else
{
lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1615_ = lean_unsigned_to_nat(1u);
v___x_1616_ = l_Lean_Syntax_getArg(v___x_1610_, v___x_1615_);
lean_dec(v___x_1610_);
v___x_1617_ = l_Lean_Syntax_matchesIdent(v___x_1616_, v___x_1611_);
lean_dec(v___x_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v___x_1594_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1618_;
goto v___jp_1590_;
}
else
{
lean_object* v___x_1619_; uint8_t v___x_1620_; 
v___x_1619_ = l_Lean_Syntax_getArg(v___x_1594_, v___x_1615_);
lean_inc(v___x_1619_);
v___x_1620_ = l_Lean_Syntax_matchesNull(v___x_1619_, v___x_1615_);
if (v___x_1620_ == 0)
{
lean_object* v___x_1621_; 
lean_dec(v___x_1619_);
v___x_1621_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v___x_1594_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1621_;
goto v___jp_1590_;
}
else
{
lean_object* v_stx_1622_; lean_object* v___x_1623_; 
lean_dec(v___x_1594_);
v_stx_1622_ = l_Lean_Syntax_getArg(v___x_1619_, v___x_1558_);
lean_dec(v___x_1619_);
v___x_1623_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v_stx_1622_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1623_;
goto v___jp_1590_;
}
}
}
}
else
{
lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; 
lean_dec(v___x_1610_);
v___x_1624_ = lean_unsigned_to_nat(1u);
v___x_1625_ = l_Lean_Syntax_getArg(v___x_1594_, v___x_1624_);
lean_inc(v___x_1625_);
v___x_1626_ = l_Lean_Syntax_matchesNull(v___x_1625_, v___x_1624_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; 
lean_dec(v___x_1625_);
v___x_1627_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v___x_1594_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1627_;
goto v___jp_1590_;
}
else
{
lean_object* v_stx_1628_; lean_object* v___x_1629_; 
lean_dec(v___x_1594_);
v_stx_1628_ = l_Lean_Syntax_getArg(v___x_1625_, v___x_1558_);
lean_dec(v___x_1625_);
v___x_1629_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v_stx_1628_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1629_;
goto v___jp_1590_;
}
}
}
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v___x_1630_ = lean_unsigned_to_nat(1u);
v___x_1631_ = l_Lean_Syntax_getArg(v___x_1594_, v___x_1630_);
v___x_1632_ = l_Lean_Syntax_matchesIdent(v___x_1631_, v___x_1595_);
lean_dec(v___x_1631_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v_ev_1548_, v___x_1557_, v___x_1559_, v_typeExpr_1547_, v___x_1594_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v___x_1604_, v_a_1555_);
lean_dec_ref_known(v___x_1604_, 3);
v___y_1591_ = v___x_1633_;
goto v___jp_1590_;
}
else
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
lean_dec_ref_known(v___x_1604_, 3);
lean_dec(v___x_1594_);
lean_dec_ref(v_ev_1548_);
v___x_1634_ = lean_box(0);
v___x_1635_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9);
v___x_1636_ = l_Lean_Expr_app___override(v___x_1635_, v_typeExpr_1547_);
lean_inc_ref(v___x_1636_);
v___x_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1634_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v_a_1564_ = v___x_1637_;
v_snd_1565_ = v___x_1636_;
goto v___jp_1563_;
}
}
}
else
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
lean_dec(v___x_1594_);
lean_dec_ref(v_ev_1548_);
v___x_1638_ = lean_box(0);
v___x_1639_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__9);
v___x_1640_ = l_Lean_Expr_app___override(v___x_1639_, v_typeExpr_1547_);
lean_inc_ref(v___x_1640_);
v___x_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1638_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v_a_1564_ = v___x_1641_;
v_snd_1565_ = v___x_1640_;
goto v___jp_1563_;
}
v___jp_1563_:
{
lean_object* v___x_1566_; lean_object* v_infoState_1567_; uint8_t v_enabled_1568_; 
v___x_1566_ = lean_st_ref_get(v_a_1555_);
v_infoState_1567_ = lean_ctor_get(v___x_1566_, 8);
lean_inc_ref(v_infoState_1567_);
lean_dec(v___x_1566_);
v_enabled_1568_ = lean_ctor_get_uint8(v_infoState_1567_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1567_);
if (v_enabled_1568_ == 0)
{
lean_object* v___x_1569_; 
lean_dec_ref(v_snd_1565_);
lean_dec_ref_known(v___x_1562_, 1);
lean_dec(v_stx_1549_);
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v_a_1564_);
return v___x_1569_;
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; lean_object* v___x_1573_; 
v___x_1570_ = lean_box(0);
v___x_1571_ = lean_box(0);
v___x_1572_ = 0;
v___x_1573_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_1549_, v_snd_1565_, v___x_1562_, v___x_1570_, v___x_1571_, v___x_1572_, v___x_1572_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1580_ == 0)
{
lean_object* v_unused_1581_; 
v_unused_1581_ = lean_ctor_get(v___x_1573_, 0);
lean_dec(v_unused_1581_);
v___x_1575_ = v___x_1573_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_dec(v___x_1573_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
lean_ctor_set(v___x_1575_, 0, v_a_1564_);
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1564_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v_a_1564_);
v_a_1582_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1573_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1573_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
v___jp_1590_:
{
if (lean_obj_tag(v___y_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v_snd_1593_; 
v_a_1592_ = lean_ctor_get(v___y_1591_, 0);
lean_inc(v_a_1592_);
lean_dec_ref_known(v___y_1591_, 1);
v_snd_1593_ = lean_ctor_get(v_a_1592_, 1);
lean_inc(v_snd_1593_);
v_a_1564_ = v_a_1592_;
v_snd_1565_ = v_snd_1593_;
goto v___jp_1563_;
}
else
{
lean_dec_ref_known(v___x_1562_, 1);
lean_dec(v_stx_1549_);
return v___y_1591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___boxed(lean_object* v_typeExpr_1642_, lean_object* v_ev_1643_, lean_object* v_stx_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(v_typeExpr_1642_, v_ev_1643_, v_stx_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
lean_dec(v_a_1646_);
lean_dec_ref(v_a_1645_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx(lean_object* v_00_u03b1_1653_, lean_object* v_typeExpr_1654_, lean_object* v_ev_1655_, lean_object* v_stx_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(v_typeExpr_1654_, v_ev_1655_, v_stx_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_, v_a_1661_, v_a_1662_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___boxed(lean_object* v_00_u03b1_1665_, lean_object* v_typeExpr_1666_, lean_object* v_ev_1667_, lean_object* v_stx_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx(v_00_u03b1_1665_, v_typeExpr_1666_, v_ev_1667_, v_stx_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_);
lean_dec(v_a_1674_);
lean_dec_ref(v_a_1673_);
lean_dec(v_a_1672_);
lean_dec_ref(v_a_1671_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(uint8_t v___x_1677_, lean_object* v_as_1678_, size_t v_i_1679_, size_t v_stop_1680_, lean_object* v_b_1681_){
_start:
{
lean_object* v___y_1683_; uint8_t v___x_1687_; 
v___x_1687_ = lean_usize_dec_eq(v_i_1679_, v_stop_1680_);
if (v___x_1687_ == 0)
{
lean_object* v_fst_1688_; uint8_t v___x_1689_; 
v_fst_1688_ = lean_ctor_get(v_b_1681_, 0);
v___x_1689_ = lean_unbox(v_fst_1688_);
if (v___x_1689_ == 0)
{
lean_object* v_snd_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1698_; 
v_snd_1690_ = lean_ctor_get(v_b_1681_, 1);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_b_1681_);
if (v_isSharedCheck_1698_ == 0)
{
lean_object* v_unused_1699_; 
v_unused_1699_ = lean_ctor_get(v_b_1681_, 0);
lean_dec(v_unused_1699_);
v___x_1692_ = v_b_1681_;
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_snd_1690_);
lean_dec(v_b_1681_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1694_; lean_object* v___x_1696_; 
v___x_1694_ = lean_box(v___x_1677_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 0, v___x_1694_);
v___x_1696_ = v___x_1692_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1694_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_snd_1690_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
v___y_1683_ = v___x_1696_;
goto v___jp_1682_;
}
}
}
else
{
lean_object* v_snd_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1710_; 
v_snd_1700_ = lean_ctor_get(v_b_1681_, 1);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_b_1681_);
if (v_isSharedCheck_1710_ == 0)
{
lean_object* v_unused_1711_; 
v_unused_1711_ = lean_ctor_get(v_b_1681_, 0);
lean_dec(v_unused_1711_);
v___x_1702_ = v_b_1681_;
v_isShared_1703_ = v_isSharedCheck_1710_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_snd_1700_);
lean_dec(v_b_1681_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1710_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1704_ = lean_array_uget_borrowed(v_as_1678_, v_i_1679_);
lean_inc(v___x_1704_);
v___x_1705_ = lean_array_push(v_snd_1700_, v___x_1704_);
v___x_1706_ = lean_box(v___x_1687_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v___x_1705_);
lean_ctor_set(v___x_1702_, 0, v___x_1706_);
v___x_1708_ = v___x_1702_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1709_, 1, v___x_1705_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
v___y_1683_ = v___x_1708_;
goto v___jp_1682_;
}
}
}
}
else
{
return v_b_1681_;
}
v___jp_1682_:
{
size_t v___x_1684_; size_t v___x_1685_; 
v___x_1684_ = ((size_t)1ULL);
v___x_1685_ = lean_usize_add(v_i_1679_, v___x_1684_);
v_i_1679_ = v___x_1685_;
v_b_1681_ = v___y_1683_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3___boxed(lean_object* v___x_1712_, lean_object* v_as_1713_, lean_object* v_i_1714_, lean_object* v_stop_1715_, lean_object* v_b_1716_){
_start:
{
uint8_t v___x_1353__boxed_1717_; size_t v_i_boxed_1718_; size_t v_stop_boxed_1719_; lean_object* v_res_1720_; 
v___x_1353__boxed_1717_ = lean_unbox(v___x_1712_);
v_i_boxed_1718_ = lean_unbox_usize(v_i_1714_);
lean_dec(v_i_1714_);
v_stop_boxed_1719_ = lean_unbox_usize(v_stop_1715_);
lean_dec(v_stop_1715_);
v_res_1720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(v___x_1353__boxed_1717_, v_as_1713_, v_i_boxed_1718_, v_stop_boxed_1719_, v_b_1716_);
lean_dec_ref(v_as_1713_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(lean_object* v_ev_1721_, size_t v_sz_1722_, size_t v_i_1723_, lean_object* v_bs_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
uint8_t v___x_1732_; 
v___x_1732_ = lean_usize_dec_lt(v_i_1723_, v_sz_1722_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; 
lean_dec_ref(v_ev_1721_);
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_bs_1724_);
return v___x_1733_;
}
else
{
lean_object* v_v_1734_; lean_object* v___x_1735_; lean_object* v_bs_x27_1736_; lean_object* v___x_1737_; 
v_v_1734_ = lean_array_uget(v_bs_1724_, v_i_1723_);
v___x_1735_ = lean_unsigned_to_nat(0u);
v_bs_x27_1736_ = lean_array_uset(v_bs_1724_, v_i_1723_, v___x_1735_);
lean_inc_ref(v_ev_1721_);
lean_inc(v___y_1730_);
lean_inc_ref(v___y_1729_);
lean_inc(v___y_1728_);
lean_inc_ref(v___y_1727_);
lean_inc(v___y_1726_);
lean_inc_ref(v___y_1725_);
v___x_1737_ = lean_apply_8(v_ev_1721_, v_v_1734_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, lean_box(0));
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; size_t v___x_1739_; size_t v___x_1740_; lean_object* v___x_1741_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = ((size_t)1ULL);
v___x_1740_ = lean_usize_add(v_i_1723_, v___x_1739_);
v___x_1741_ = lean_array_uset(v_bs_x27_1736_, v_i_1723_, v_a_1738_);
v_i_1723_ = v___x_1740_;
v_bs_1724_ = v___x_1741_;
goto _start;
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
lean_dec_ref(v_bs_x27_1736_);
lean_dec_ref(v_ev_1721_);
v_a_1743_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1737_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1737_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg___boxed(lean_object* v_ev_1751_, lean_object* v_sz_1752_, lean_object* v_i_1753_, lean_object* v_bs_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
size_t v_sz_boxed_1762_; size_t v_i_boxed_1763_; lean_object* v_res_1764_; 
v_sz_boxed_1762_ = lean_unbox_usize(v_sz_1752_);
lean_dec(v_sz_1752_);
v_i_boxed_1763_ = lean_unbox_usize(v_i_1753_);
lean_dec(v_i_1753_);
v_res_1764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_1751_, v_sz_boxed_1762_, v_i_boxed_1763_, v_bs_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
return v_res_1764_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1770_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1771_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2));
v___x_1772_ = l_Lean_Expr_const___override(v___x_1771_, v___x_1770_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(lean_object* v_typeExpr_1773_, lean_object* v_as_1774_, size_t v_i_1775_, size_t v_stop_1776_, lean_object* v_b_1777_){
_start:
{
uint8_t v___x_1778_; 
v___x_1778_ = lean_usize_dec_eq(v_i_1775_, v_stop_1776_);
if (v___x_1778_ == 0)
{
size_t v___x_1779_; size_t v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1779_ = ((size_t)1ULL);
v___x_1780_ = lean_usize_sub(v_i_1775_, v___x_1779_);
v___x_1781_ = lean_array_uget_borrowed(v_as_1774_, v___x_1780_);
v___x_1782_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3);
lean_inc(v___x_1781_);
lean_inc_ref(v_typeExpr_1773_);
v___x_1783_ = l_Lean_mkApp3(v___x_1782_, v_typeExpr_1773_, v___x_1781_, v_b_1777_);
v_i_1775_ = v___x_1780_;
v_b_1777_ = v___x_1783_;
goto _start;
}
else
{
lean_dec_ref(v_typeExpr_1773_);
return v_b_1777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___boxed(lean_object* v_typeExpr_1785_, lean_object* v_as_1786_, lean_object* v_i_1787_, lean_object* v_stop_1788_, lean_object* v_b_1789_){
_start:
{
size_t v_i_boxed_1790_; size_t v_stop_boxed_1791_; lean_object* v_res_1792_; 
v_i_boxed_1790_ = lean_unbox_usize(v_i_1787_);
lean_dec(v_i_1787_);
v_stop_boxed_1791_ = lean_unbox_usize(v_stop_1788_);
lean_dec(v_stop_1788_);
v_res_1792_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(v_typeExpr_1785_, v_as_1786_, v_i_boxed_1790_, v_stop_boxed_1791_, v_b_1789_);
lean_dec_ref(v_as_1786_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(size_t v_sz_1793_, size_t v_i_1794_, lean_object* v_bs_1795_){
_start:
{
uint8_t v___x_1796_; 
v___x_1796_ = lean_usize_dec_lt(v_i_1794_, v_sz_1793_);
if (v___x_1796_ == 0)
{
lean_object* v___x_1797_; 
v___x_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1797_, 0, v_bs_1795_);
return v___x_1797_;
}
else
{
lean_object* v_v_1798_; lean_object* v___x_1799_; lean_object* v_bs_x27_1800_; size_t v___x_1801_; size_t v___x_1802_; lean_object* v___x_1803_; 
v_v_1798_ = lean_array_uget(v_bs_1795_, v_i_1794_);
v___x_1799_ = lean_unsigned_to_nat(0u);
v_bs_x27_1800_ = lean_array_uset(v_bs_1795_, v_i_1794_, v___x_1799_);
v___x_1801_ = ((size_t)1ULL);
v___x_1802_ = lean_usize_add(v_i_1794_, v___x_1801_);
v___x_1803_ = lean_array_uset(v_bs_x27_1800_, v_i_1794_, v_v_1798_);
v_i_1794_ = v___x_1802_;
v_bs_1795_ = v___x_1803_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0___boxed(lean_object* v_sz_1805_, lean_object* v_i_1806_, lean_object* v_bs_1807_){
_start:
{
size_t v_sz_boxed_1808_; size_t v_i_boxed_1809_; lean_object* v_res_1810_; 
v_sz_boxed_1808_ = lean_unbox_usize(v_sz_1805_);
lean_dec(v_sz_1805_);
v_i_boxed_1809_ = lean_unbox_usize(v_i_1806_);
lean_dec(v_i_1806_);
v_res_1810_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(v_sz_boxed_1808_, v_i_boxed_1809_, v_bs_1807_);
return v_res_1810_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1814_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0));
v___x_1815_ = l_Lean_Expr_const___override(v___x_1814_, v___x_1813_);
return v___x_1815_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6(void){
_start:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1823_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1824_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5));
v___x_1825_ = l_Lean_Expr_const___override(v___x_1824_, v___x_1823_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(lean_object* v_typeExpr_1828_, lean_object* v_ev_1829_, lean_object* v_stx_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_toCold_1838_; lean_object* v_currRecDepth_1839_; lean_object* v_ref_1840_; uint16_t v_optionFlags_1841_; uint8_t v_suppressElabErrors_1842_; uint8_t v_isRecordingDeps_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v_a_1849_; lean_object* v_snd_1850_; lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
v_toCold_1838_ = lean_ctor_get(v_a_1835_, 0);
v_currRecDepth_1839_ = lean_ctor_get(v_a_1835_, 1);
v_ref_1840_ = lean_ctor_get(v_a_1835_, 2);
v_optionFlags_1841_ = lean_ctor_get_uint16(v_a_1835_, sizeof(void*)*3);
v_suppressElabErrors_1842_ = lean_ctor_get_uint8(v_a_1835_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1843_ = lean_ctor_get_uint8(v_a_1835_, sizeof(void*)*3 + 3);
v___x_1844_ = lean_unsigned_to_nat(0u);
v___x_1845_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1);
lean_inc_ref(v_typeExpr_1828_);
v___x_1846_ = l_Lean_Expr_app___override(v___x_1845_, v_typeExpr_1828_);
v___x_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
lean_inc(v_stx_1830_);
v___x_1882_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_1830_);
v___x_1883_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3));
lean_inc(v___x_1882_);
v___x_1884_ = l_Lean_Syntax_isOfKind(v___x_1882_, v___x_1883_);
if (v___x_1884_ == 0)
{
lean_object* v___x_1885_; 
lean_dec(v___x_1882_);
lean_dec_ref_known(v___x_1847_, 1);
lean_dec(v_stx_1830_);
lean_dec_ref(v_ev_1829_);
lean_dec_ref(v_typeExpr_1828_);
v___x_1885_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_1881_ = v___x_1885_;
goto v___jp_1880_;
}
else
{
lean_object* v_ref_1886_; lean_object* v___x_1887_; lean_object* v___y_1889_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; uint8_t v___x_1920_; 
v_ref_1886_ = l_Lean_replaceRef(v_stx_1830_, v_ref_1840_);
lean_inc(v_currRecDepth_1839_);
lean_inc_ref(v_toCold_1838_);
v___x_1887_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1887_, 0, v_toCold_1838_);
lean_ctor_set(v___x_1887_, 1, v_currRecDepth_1839_);
lean_ctor_set(v___x_1887_, 2, v_ref_1886_);
lean_ctor_set_uint16(v___x_1887_, sizeof(void*)*3, v_optionFlags_1841_);
lean_ctor_set_uint8(v___x_1887_, sizeof(void*)*3 + 2, v_suppressElabErrors_1842_);
lean_ctor_set_uint8(v___x_1887_, sizeof(void*)*3 + 3, v_isRecordingDeps_1843_);
v___x_1915_ = lean_unsigned_to_nat(1u);
v___x_1916_ = l_Lean_Syntax_getArg(v___x_1882_, v___x_1915_);
lean_dec(v___x_1882_);
v___x_1917_ = l_Lean_Syntax_getArgs(v___x_1916_);
lean_dec(v___x_1916_);
v___x_1918_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7));
v___x_1919_ = lean_array_get_size(v___x_1917_);
v___x_1920_ = lean_nat_dec_lt(v___x_1844_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_dec_ref(v___x_1917_);
v___y_1889_ = v___x_1918_;
goto v___jp_1888_;
}
else
{
lean_object* v___x_1921_; lean_object* v___x_1922_; size_t v___x_1923_; size_t v___x_1924_; lean_object* v___x_1925_; lean_object* v_snd_1926_; 
v___x_1921_ = lean_box(v___x_1920_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
lean_ctor_set(v___x_1922_, 1, v___x_1918_);
v___x_1923_ = ((size_t)0ULL);
v___x_1924_ = lean_usize_of_nat(v___x_1919_);
v___x_1925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(v___x_1884_, v___x_1917_, v___x_1923_, v___x_1924_, v___x_1922_);
lean_dec_ref(v___x_1917_);
v_snd_1926_ = lean_ctor_get(v___x_1925_, 1);
lean_inc(v_snd_1926_);
lean_dec_ref(v___x_1925_);
v___y_1889_ = v_snd_1926_;
goto v___jp_1888_;
}
v___jp_1888_:
{
size_t v_sz_1890_; size_t v___x_1891_; lean_object* v___x_1892_; 
v_sz_1890_ = lean_array_size(v___y_1889_);
v___x_1891_ = ((size_t)0ULL);
v___x_1892_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(v_sz_1890_, v___x_1891_, v___y_1889_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v___x_1893_; 
lean_dec_ref_known(v___x_1887_, 3);
lean_dec_ref_known(v___x_1847_, 1);
lean_dec(v_stx_1830_);
lean_dec_ref(v_ev_1829_);
lean_dec_ref(v_typeExpr_1828_);
v___x_1893_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_1881_ = v___x_1893_;
goto v___jp_1880_;
}
else
{
lean_object* v_val_1894_; size_t v_sz_1895_; lean_object* v___x_1896_; 
v_val_1894_ = lean_ctor_get(v___x_1892_, 0);
lean_inc(v_val_1894_);
lean_dec_ref_known(v___x_1892_, 1);
v_sz_1895_ = lean_array_size(v_val_1894_);
v___x_1896_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_1829_, v_sz_1895_, v___x_1891_, v_val_1894_, v_a_1831_, v_a_1832_, v_a_1833_, v_a_1834_, v___x_1887_, v_a_1836_);
lean_dec_ref_known(v___x_1887_, 3);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1898_; lean_object* v_fst_1899_; lean_object* v_snd_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; uint8_t v___x_1904_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = l_Array_unzip___redArg(v_a_1897_);
lean_dec(v_a_1897_);
v_fst_1899_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_fst_1899_);
v_snd_1900_ = lean_ctor_get(v___x_1898_, 1);
lean_inc(v_snd_1900_);
lean_dec_ref(v___x_1898_);
v___x_1901_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6);
lean_inc_ref(v_typeExpr_1828_);
v___x_1902_ = l_Lean_Expr_app___override(v___x_1901_, v_typeExpr_1828_);
v___x_1903_ = lean_array_get_size(v_snd_1900_);
v___x_1904_ = lean_nat_dec_lt(v___x_1844_, v___x_1903_);
if (v___x_1904_ == 0)
{
lean_dec(v_snd_1900_);
lean_dec_ref(v_typeExpr_1828_);
v___y_1876_ = v_fst_1899_;
v___y_1877_ = v___x_1902_;
goto v___jp_1875_;
}
else
{
size_t v___x_1905_; lean_object* v___x_1906_; 
v___x_1905_ = lean_usize_of_nat(v___x_1903_);
v___x_1906_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(v_typeExpr_1828_, v_snd_1900_, v___x_1905_, v___x_1891_, v___x_1902_);
lean_dec(v_snd_1900_);
v___y_1876_ = v_fst_1899_;
v___y_1877_ = v___x_1906_;
goto v___jp_1875_;
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec_ref_known(v___x_1847_, 1);
lean_dec(v_stx_1830_);
lean_dec_ref(v_typeExpr_1828_);
v_a_1907_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1896_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1896_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
}
v___jp_1848_:
{
lean_object* v___x_1851_; lean_object* v_infoState_1852_; uint8_t v_enabled_1853_; 
v___x_1851_ = lean_st_ref_get(v_a_1836_);
v_infoState_1852_ = lean_ctor_get(v___x_1851_, 8);
lean_inc_ref(v_infoState_1852_);
lean_dec(v___x_1851_);
v_enabled_1853_ = lean_ctor_get_uint8(v_infoState_1852_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1852_);
if (v_enabled_1853_ == 0)
{
lean_object* v___x_1854_; 
lean_dec_ref(v_snd_1850_);
lean_dec_ref_known(v___x_1847_, 1);
lean_dec(v_stx_1830_);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v_a_1849_);
return v___x_1854_;
}
else
{
lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; lean_object* v___x_1858_; 
v___x_1855_ = lean_box(0);
v___x_1856_ = lean_box(0);
v___x_1857_ = 0;
v___x_1858_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_1830_, v_snd_1850_, v___x_1847_, v___x_1855_, v___x_1856_, v___x_1857_, v___x_1857_, v_a_1831_, v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_, v_a_1836_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1865_ == 0)
{
lean_object* v_unused_1866_; 
v_unused_1866_ = lean_ctor_get(v___x_1858_, 0);
lean_dec(v_unused_1866_);
v___x_1860_ = v___x_1858_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_dec(v___x_1858_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 0, v_a_1849_);
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1849_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec_ref(v_a_1849_);
v_a_1867_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1858_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1858_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
}
v___jp_1875_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1878_ = lean_array_to_list(v___y_1876_);
lean_inc_ref(v___y_1877_);
v___x_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1878_);
lean_ctor_set(v___x_1879_, 1, v___y_1877_);
v_a_1849_ = v___x_1879_;
v_snd_1850_ = v___y_1877_;
goto v___jp_1848_;
}
v___jp_1880_:
{
return v___y_1881_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___boxed(lean_object* v_typeExpr_1927_, lean_object* v_ev_1928_, lean_object* v_stx_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(v_typeExpr_1927_, v_ev_1928_, v_stx_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
lean_dec(v_a_1935_);
lean_dec_ref(v_a_1934_);
lean_dec(v_a_1933_);
lean_dec_ref(v_a_1932_);
lean_dec(v_a_1931_);
lean_dec_ref(v_a_1930_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx(lean_object* v_00_u03b1_1938_, lean_object* v_typeExpr_1939_, lean_object* v_ev_1940_, lean_object* v_stx_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(v_typeExpr_1939_, v_ev_1940_, v_stx_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___boxed(lean_object* v_00_u03b1_1950_, lean_object* v_typeExpr_1951_, lean_object* v_ev_1952_, lean_object* v_stx_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Lean_Elab_ConfigEval_EvalTerm_evalListStx(v_00_u03b1_1950_, v_typeExpr_1951_, v_ev_1952_, v_stx_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_);
lean_dec(v_a_1959_);
lean_dec_ref(v_a_1958_);
lean_dec(v_a_1957_);
lean_dec_ref(v_a_1956_);
lean_dec(v_a_1955_);
lean_dec_ref(v_a_1954_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1(lean_object* v_00_u03b1_1962_, lean_object* v_ev_1963_, size_t v_sz_1964_, size_t v_i_1965_, lean_object* v_bs_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v___x_1974_; 
v___x_1974_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_1963_, v_sz_1964_, v_i_1965_, v_bs_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___boxed(lean_object* v_00_u03b1_1975_, lean_object* v_ev_1976_, lean_object* v_sz_1977_, lean_object* v_i_1978_, lean_object* v_bs_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
size_t v_sz_boxed_1987_; size_t v_i_boxed_1988_; lean_object* v_res_1989_; 
v_sz_boxed_1987_ = lean_unbox_usize(v_sz_1977_);
lean_dec(v_sz_1977_);
v_i_boxed_1988_ = lean_unbox_usize(v_i_1978_);
lean_dec(v_i_1978_);
v_res_1989_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1(v_00_u03b1_1975_, v_ev_1976_, v_sz_boxed_1987_, v_i_boxed_1988_, v_bs_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_);
lean_dec(v___y_1985_);
lean_dec_ref(v___y_1984_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(lean_object* v_typeExpr_1990_, lean_object* v_as_1991_, size_t v_i_1992_, size_t v_stop_1993_, lean_object* v_b_1994_){
_start:
{
uint8_t v___x_1995_; 
v___x_1995_ = lean_usize_dec_eq(v_i_1992_, v_stop_1993_);
if (v___x_1995_ == 0)
{
size_t v___x_1996_; size_t v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1996_ = ((size_t)1ULL);
v___x_1997_ = lean_usize_sub(v_i_1992_, v___x_1996_);
v___x_1998_ = lean_array_uget_borrowed(v_as_1991_, v___x_1997_);
v___x_1999_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3);
lean_inc(v___x_1998_);
lean_inc_ref(v_typeExpr_1990_);
v___x_2000_ = l_Lean_mkApp3(v___x_1999_, v_typeExpr_1990_, v___x_1998_, v_b_1994_);
v_i_1992_ = v___x_1997_;
v_b_1994_ = v___x_2000_;
goto _start;
}
else
{
lean_dec_ref(v_typeExpr_1990_);
return v_b_1994_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0___boxed(lean_object* v_typeExpr_2002_, lean_object* v_as_2003_, lean_object* v_i_2004_, lean_object* v_stop_2005_, lean_object* v_b_2006_){
_start:
{
size_t v_i_boxed_2007_; size_t v_stop_boxed_2008_; lean_object* v_res_2009_; 
v_i_boxed_2007_ = lean_unbox_usize(v_i_2004_);
lean_dec(v_i_2004_);
v_stop_boxed_2008_ = lean_unbox_usize(v_stop_2005_);
lean_dec(v_stop_2005_);
v_res_2009_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(v_typeExpr_2002_, v_as_2003_, v_i_boxed_2007_, v_stop_boxed_2008_, v_b_2006_);
lean_dec_ref(v_as_2003_);
return v_res_2009_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2(void){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2013_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_2014_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1));
v___x_2015_ = l_Lean_Expr_const___override(v___x_2014_, v___x_2013_);
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(lean_object* v_typeExpr_2020_, lean_object* v_ev_2021_, lean_object* v_stx_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_){
_start:
{
lean_object* v_toCold_2030_; lean_object* v_currRecDepth_2031_; lean_object* v_ref_2032_; uint16_t v_optionFlags_2033_; uint8_t v_suppressElabErrors_2034_; uint8_t v_isRecordingDeps_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v_a_2042_; lean_object* v_snd_2043_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; 
v_toCold_2030_ = lean_ctor_get(v_a_2027_, 0);
v_currRecDepth_2031_ = lean_ctor_get(v_a_2027_, 1);
v_ref_2032_ = lean_ctor_get(v_a_2027_, 2);
v_optionFlags_2033_ = lean_ctor_get_uint16(v_a_2027_, sizeof(void*)*3);
v_suppressElabErrors_2034_ = lean_ctor_get_uint8(v_a_2027_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2035_ = lean_ctor_get_uint8(v_a_2027_, sizeof(void*)*3 + 3);
v___x_2036_ = lean_unsigned_to_nat(0u);
v___x_2037_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_2038_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2);
lean_inc_ref(v_typeExpr_2020_);
v___x_2039_ = l_Lean_Expr_app___override(v___x_2038_, v_typeExpr_2020_);
v___x_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
lean_inc(v_stx_2022_);
v___x_2079_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_2022_);
v___x_2080_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5));
lean_inc(v___x_2079_);
v___x_2081_ = l_Lean_Syntax_isOfKind(v___x_2079_, v___x_2080_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; 
lean_dec(v___x_2079_);
lean_dec_ref_known(v___x_2040_, 1);
lean_dec(v_stx_2022_);
lean_dec_ref(v_ev_2021_);
lean_dec_ref(v_typeExpr_2020_);
v___x_2082_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2078_ = v___x_2082_;
goto v___jp_2077_;
}
else
{
lean_object* v_ref_2083_; lean_object* v___x_2084_; lean_object* v___y_2086_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; 
v_ref_2083_ = l_Lean_replaceRef(v_stx_2022_, v_ref_2032_);
lean_inc(v_currRecDepth_2031_);
lean_inc_ref(v_toCold_2030_);
v___x_2084_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_2084_, 0, v_toCold_2030_);
lean_ctor_set(v___x_2084_, 1, v_currRecDepth_2031_);
lean_ctor_set(v___x_2084_, 2, v_ref_2083_);
lean_ctor_set_uint16(v___x_2084_, sizeof(void*)*3, v_optionFlags_2033_);
lean_ctor_set_uint8(v___x_2084_, sizeof(void*)*3 + 2, v_suppressElabErrors_2034_);
lean_ctor_set_uint8(v___x_2084_, sizeof(void*)*3 + 3, v_isRecordingDeps_2035_);
v___x_2113_ = lean_unsigned_to_nat(1u);
v___x_2114_ = l_Lean_Syntax_getArg(v___x_2079_, v___x_2113_);
lean_dec(v___x_2079_);
v___x_2115_ = l_Lean_Syntax_getArgs(v___x_2114_);
lean_dec(v___x_2114_);
v___x_2116_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7));
v___x_2117_ = lean_array_get_size(v___x_2115_);
v___x_2118_ = lean_nat_dec_lt(v___x_2036_, v___x_2117_);
if (v___x_2118_ == 0)
{
lean_dec_ref(v___x_2115_);
v___y_2086_ = v___x_2116_;
goto v___jp_2085_;
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; size_t v___x_2121_; size_t v___x_2122_; lean_object* v___x_2123_; lean_object* v_snd_2124_; 
v___x_2119_ = lean_box(v___x_2118_);
v___x_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
lean_ctor_set(v___x_2120_, 1, v___x_2116_);
v___x_2121_ = ((size_t)0ULL);
v___x_2122_ = lean_usize_of_nat(v___x_2117_);
v___x_2123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(v___x_2081_, v___x_2115_, v___x_2121_, v___x_2122_, v___x_2120_);
lean_dec_ref(v___x_2115_);
v_snd_2124_ = lean_ctor_get(v___x_2123_, 1);
lean_inc(v_snd_2124_);
lean_dec_ref(v___x_2123_);
v___y_2086_ = v_snd_2124_;
goto v___jp_2085_;
}
v___jp_2085_:
{
size_t v_sz_2087_; size_t v___x_2088_; lean_object* v___x_2089_; 
v_sz_2087_ = lean_array_size(v___y_2086_);
v___x_2088_ = ((size_t)0ULL);
v___x_2089_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(v_sz_2087_, v___x_2088_, v___y_2086_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v___x_2090_; 
lean_dec_ref_known(v___x_2084_, 3);
lean_dec_ref_known(v___x_2040_, 1);
lean_dec(v_stx_2022_);
lean_dec_ref(v_ev_2021_);
lean_dec_ref(v_typeExpr_2020_);
v___x_2090_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2078_ = v___x_2090_;
goto v___jp_2077_;
}
else
{
lean_object* v_val_2091_; size_t v_sz_2092_; lean_object* v___x_2093_; 
v_val_2091_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_val_2091_);
lean_dec_ref_known(v___x_2089_, 1);
v_sz_2092_ = lean_array_size(v_val_2091_);
v___x_2093_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_2021_, v_sz_2092_, v___x_2088_, v_val_2091_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v___x_2084_, v_a_2028_);
lean_dec_ref_known(v___x_2084_, 3);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2095_; lean_object* v_fst_2096_; lean_object* v_snd_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; uint8_t v___x_2102_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2093_, 1);
v___x_2095_ = l_Array_unzip___redArg(v_a_2094_);
lean_dec(v_a_2094_);
v_fst_2096_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_fst_2096_);
v_snd_2097_ = lean_ctor_get(v___x_2095_, 1);
lean_inc(v_snd_2097_);
lean_dec_ref(v___x_2095_);
v___x_2098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0));
v___x_2099_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6);
lean_inc_ref(v_typeExpr_2020_);
v___x_2100_ = l_Lean_Expr_app___override(v___x_2099_, v_typeExpr_2020_);
v___x_2101_ = lean_array_get_size(v_snd_2097_);
v___x_2102_ = lean_nat_dec_lt(v___x_2036_, v___x_2101_);
if (v___x_2102_ == 0)
{
lean_dec(v_snd_2097_);
v___y_2069_ = v_fst_2096_;
v___y_2070_ = v___x_2098_;
v___y_2071_ = v___x_2100_;
goto v___jp_2068_;
}
else
{
size_t v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_usize_of_nat(v___x_2101_);
lean_inc_ref(v_typeExpr_2020_);
v___x_2104_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(v_typeExpr_2020_, v_snd_2097_, v___x_2103_, v___x_2088_, v___x_2100_);
lean_dec(v_snd_2097_);
v___y_2069_ = v_fst_2096_;
v___y_2070_ = v___x_2098_;
v___y_2071_ = v___x_2104_;
goto v___jp_2068_;
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref_known(v___x_2040_, 1);
lean_dec(v_stx_2022_);
lean_dec_ref(v_typeExpr_2020_);
v_a_2105_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2093_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2093_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
}
}
v___jp_2041_:
{
lean_object* v___x_2044_; lean_object* v_infoState_2045_; uint8_t v_enabled_2046_; 
v___x_2044_ = lean_st_ref_get(v_a_2028_);
v_infoState_2045_ = lean_ctor_get(v___x_2044_, 8);
lean_inc_ref(v_infoState_2045_);
lean_dec(v___x_2044_);
v_enabled_2046_ = lean_ctor_get_uint8(v_infoState_2045_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2045_);
if (v_enabled_2046_ == 0)
{
lean_object* v___x_2047_; 
lean_dec_ref(v_snd_2043_);
lean_dec_ref_known(v___x_2040_, 1);
lean_dec(v_stx_2022_);
v___x_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2047_, 0, v_a_2042_);
return v___x_2047_;
}
else
{
lean_object* v___x_2048_; lean_object* v___x_2049_; uint8_t v___x_2050_; lean_object* v___x_2051_; 
v___x_2048_ = lean_box(0);
v___x_2049_ = lean_box(0);
v___x_2050_ = 0;
v___x_2051_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_2022_, v_snd_2043_, v___x_2040_, v___x_2048_, v___x_2049_, v___x_2050_, v___x_2050_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2058_ == 0)
{
lean_object* v_unused_2059_; 
v_unused_2059_ = lean_ctor_get(v___x_2051_, 0);
lean_dec(v_unused_2059_);
v___x_2053_ = v___x_2051_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_dec(v___x_2051_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v_a_2042_);
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2042_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_dec_ref(v_a_2042_);
v_a_2060_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2051_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2051_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
v___jp_2068_:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2072_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3));
lean_inc_ref(v___y_2070_);
v___x_2073_ = l_Lean_Name_mkStr2(v___y_2070_, v___x_2072_);
v___x_2074_ = l_Lean_Expr_const___override(v___x_2073_, v___x_2037_);
v___x_2075_ = l_Lean_mkAppB(v___x_2074_, v_typeExpr_2020_, v___y_2071_);
lean_inc_ref(v___x_2075_);
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___y_2069_);
lean_ctor_set(v___x_2076_, 1, v___x_2075_);
v_a_2042_ = v___x_2076_;
v_snd_2043_ = v___x_2075_;
goto v___jp_2041_;
}
v___jp_2077_:
{
return v___y_2078_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___boxed(lean_object* v_typeExpr_2125_, lean_object* v_ev_2126_, lean_object* v_stx_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(v_typeExpr_2125_, v_ev_2126_, v_stx_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
lean_dec(v_a_2131_);
lean_dec_ref(v_a_2130_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx(lean_object* v_00_u03b1_2136_, lean_object* v_typeExpr_2137_, lean_object* v_ev_2138_, lean_object* v_stx_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_){
_start:
{
lean_object* v___x_2147_; 
v___x_2147_ = l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(v_typeExpr_2137_, v_ev_2138_, v_stx_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___boxed(lean_object* v_00_u03b1_2148_, lean_object* v_typeExpr_2149_, lean_object* v_ev_2150_, lean_object* v_stx_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx(v_00_u03b1_2148_, v_typeExpr_2149_, v_ev_2150_, v_stx_2151_, v_a_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_);
lean_dec(v_a_2157_);
lean_dec_ref(v_a_2156_);
lean_dec(v_a_2155_);
lean_dec_ref(v_a_2154_);
lean_dec(v_a_2153_);
lean_dec_ref(v_a_2152_);
return v_res_2159_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2(void){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2163_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_2164_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8);
v___x_2165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
lean_ctor_set(v___x_2165_, 1, v___x_2163_);
return v___x_2165_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3(void){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2);
v___x_2167_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1));
v___x_2168_ = l_Lean_Expr_const___override(v___x_2167_, v___x_2166_);
return v___x_2168_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12(void){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2188_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2);
v___x_2189_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11));
v___x_2190_ = l_Lean_Expr_const___override(v___x_2189_, v___x_2188_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(lean_object* v_typeExpr_2191_, lean_object* v_typeExpr_x27_2192_, lean_object* v_ev_2193_, lean_object* v_ev_x27_2194_, lean_object* v_stx_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_){
_start:
{
lean_object* v_toCold_2203_; lean_object* v_currRecDepth_2204_; lean_object* v_ref_2205_; uint16_t v_optionFlags_2206_; uint8_t v_suppressElabErrors_2207_; uint8_t v_isRecordingDeps_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v_a_2214_; lean_object* v_snd_2215_; lean_object* v___y_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; uint8_t v___x_2244_; 
v_toCold_2203_ = lean_ctor_get(v_a_2200_, 0);
v_currRecDepth_2204_ = lean_ctor_get(v_a_2200_, 1);
v_ref_2205_ = lean_ctor_get(v_a_2200_, 2);
v_optionFlags_2206_ = lean_ctor_get_uint16(v_a_2200_, sizeof(void*)*3);
v_suppressElabErrors_2207_ = lean_ctor_get_uint8(v_a_2200_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2208_ = lean_ctor_get_uint8(v_a_2200_, sizeof(void*)*3 + 3);
v___x_2209_ = lean_unsigned_to_nat(0u);
v___x_2210_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3);
lean_inc_ref(v_typeExpr_x27_2192_);
lean_inc_ref(v_typeExpr_2191_);
v___x_2211_ = l_Lean_mkAppB(v___x_2210_, v_typeExpr_2191_, v_typeExpr_x27_2192_);
v___x_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
lean_inc(v_stx_2195_);
v___x_2242_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_2195_);
v___x_2243_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5));
lean_inc(v___x_2242_);
v___x_2244_ = l_Lean_Syntax_isOfKind(v___x_2242_, v___x_2243_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; 
lean_dec(v___x_2242_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_ev_x27_2194_);
lean_dec_ref(v_ev_2193_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v___x_2245_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2241_ = v___x_2245_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2246_; lean_object* v___x_2247_; uint8_t v___x_2248_; 
v___x_2246_ = l_Lean_Syntax_getArg(v___x_2242_, v___x_2209_);
v___x_2247_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7));
lean_inc(v___x_2246_);
v___x_2248_ = l_Lean_Syntax_isOfKind(v___x_2246_, v___x_2247_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; 
lean_dec(v___x_2246_);
lean_dec(v___x_2242_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_ev_x27_2194_);
lean_dec_ref(v_ev_2193_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v___x_2249_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2241_ = v___x_2249_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; uint8_t v___x_2253_; 
v___x_2250_ = lean_unsigned_to_nat(1u);
v___x_2251_ = l_Lean_Syntax_getArg(v___x_2246_, v___x_2250_);
lean_dec(v___x_2246_);
v___x_2252_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9));
lean_inc(v___x_2251_);
v___x_2253_ = l_Lean_Syntax_isOfKind(v___x_2251_, v___x_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; 
lean_dec(v___x_2251_);
lean_dec(v___x_2242_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_ev_x27_2194_);
lean_dec_ref(v_ev_2193_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v___x_2254_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2241_ = v___x_2254_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2255_; lean_object* v___x_2256_; uint8_t v___x_2257_; 
v___x_2255_ = l_Lean_Syntax_getArg(v___x_2251_, v___x_2209_);
lean_dec(v___x_2251_);
v___x_2256_ = lean_box(0);
v___x_2257_ = l_Lean_Syntax_matchesIdent(v___x_2255_, v___x_2256_);
lean_dec(v___x_2255_);
if (v___x_2257_ == 0)
{
lean_object* v___x_2258_; 
lean_dec(v___x_2242_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_ev_x27_2194_);
lean_dec_ref(v_ev_2193_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v___x_2258_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2241_ = v___x_2258_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2259_; lean_object* v___x_2260_; uint8_t v___x_2261_; 
v___x_2259_ = l_Lean_Syntax_getArg(v___x_2242_, v___x_2250_);
lean_dec(v___x_2242_);
v___x_2260_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_2259_);
v___x_2261_ = l_Lean_Syntax_matchesNull(v___x_2259_, v___x_2260_);
if (v___x_2261_ == 0)
{
lean_object* v___x_2262_; 
lean_dec(v___x_2259_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_ev_x27_2194_);
lean_dec_ref(v_ev_2193_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v___x_2262_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2241_ = v___x_2262_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2263_; lean_object* v___x_2264_; uint8_t v___x_2265_; 
v___x_2263_ = lean_unsigned_to_nat(2u);
v___x_2264_ = l_Lean_Syntax_getArg(v___x_2259_, v___x_2263_);
lean_inc(v___x_2264_);
v___x_2265_ = l_Lean_Syntax_matchesNull(v___x_2264_, v___x_2250_);
if (v___x_2265_ == 0)
{
lean_object* v___x_2266_; 
lean_dec(v___x_2264_);
lean_dec(v___x_2259_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_ev_x27_2194_);
lean_dec_ref(v_ev_2193_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v___x_2266_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2241_ = v___x_2266_;
goto v___jp_2240_;
}
else
{
lean_object* v_ref_2267_; lean_object* v___x_2268_; lean_object* v_x_2269_; lean_object* v_x_x27_2270_; lean_object* v___x_2271_; 
v_ref_2267_ = l_Lean_replaceRef(v_stx_2195_, v_ref_2205_);
lean_inc(v_currRecDepth_2204_);
lean_inc_ref(v_toCold_2203_);
v___x_2268_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_2268_, 0, v_toCold_2203_);
lean_ctor_set(v___x_2268_, 1, v_currRecDepth_2204_);
lean_ctor_set(v___x_2268_, 2, v_ref_2267_);
lean_ctor_set_uint16(v___x_2268_, sizeof(void*)*3, v_optionFlags_2206_);
lean_ctor_set_uint8(v___x_2268_, sizeof(void*)*3 + 2, v_suppressElabErrors_2207_);
lean_ctor_set_uint8(v___x_2268_, sizeof(void*)*3 + 3, v_isRecordingDeps_2208_);
v_x_2269_ = l_Lean_Syntax_getArg(v___x_2259_, v___x_2209_);
lean_dec(v___x_2259_);
v_x_x27_2270_ = l_Lean_Syntax_getArg(v___x_2264_, v___x_2209_);
lean_dec(v___x_2264_);
lean_inc(v_a_2201_);
lean_inc_ref(v___x_2268_);
lean_inc(v_a_2199_);
lean_inc_ref(v_a_2198_);
lean_inc(v_a_2197_);
lean_inc_ref(v_a_2196_);
v___x_2271_ = lean_apply_8(v_ev_2193_, v_x_2269_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v___x_2268_, v_a_2201_, lean_box(0));
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v_fst_2273_; lean_object* v_snd_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2302_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v_fst_2273_ = lean_ctor_get(v_a_2272_, 0);
v_snd_2274_ = lean_ctor_get(v_a_2272_, 1);
v_isSharedCheck_2302_ = !lean_is_exclusive(v_a_2272_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2276_ = v_a_2272_;
v_isShared_2277_ = v_isSharedCheck_2302_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_snd_2274_);
lean_inc(v_fst_2273_);
lean_dec(v_a_2272_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2302_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; 
lean_inc(v_a_2201_);
lean_inc(v_a_2199_);
lean_inc_ref(v_a_2198_);
lean_inc(v_a_2197_);
lean_inc_ref(v_a_2196_);
v___x_2278_ = lean_apply_8(v_ev_x27_2194_, v_x_x27_2270_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v___x_2268_, v_a_2201_, lean_box(0));
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v_fst_2280_; lean_object* v_snd_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2293_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2278_, 1);
v_fst_2280_ = lean_ctor_get(v_a_2279_, 0);
v_snd_2281_ = lean_ctor_get(v_a_2279_, 1);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_a_2279_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2283_ = v_a_2279_;
v_isShared_2284_ = v_isSharedCheck_2293_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_snd_2281_);
lean_inc(v_fst_2280_);
lean_dec(v_a_2279_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2293_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 1, v_fst_2280_);
lean_ctor_set(v___x_2283_, 0, v_fst_2273_);
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_fst_2273_);
lean_ctor_set(v_reuseFailAlloc_2292_, 1, v_fst_2280_);
v___x_2286_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2290_; 
v___x_2287_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12);
v___x_2288_ = l_Lean_mkApp4(v___x_2287_, v_typeExpr_2191_, v_typeExpr_x27_2192_, v_snd_2274_, v_snd_2281_);
lean_inc_ref(v___x_2288_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 1, v___x_2288_);
lean_ctor_set(v___x_2276_, 0, v___x_2286_);
v___x_2290_ = v___x_2276_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2286_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
v_a_2214_ = v___x_2290_;
v_snd_2215_ = v___x_2288_;
goto v___jp_2213_;
}
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_del_object(v___x_2276_);
lean_dec(v_snd_2274_);
lean_dec(v_fst_2273_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v_a_2294_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2278_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2278_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
lean_dec(v_x_x27_2270_);
lean_dec_ref_known(v___x_2268_, 3);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
lean_dec_ref(v_ev_x27_2194_);
lean_dec_ref(v_typeExpr_x27_2192_);
lean_dec_ref(v_typeExpr_2191_);
v_a_2303_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2271_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2271_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
}
}
}
}
}
v___jp_2213_:
{
lean_object* v___x_2216_; lean_object* v_infoState_2217_; uint8_t v_enabled_2218_; 
v___x_2216_ = lean_st_ref_get(v_a_2201_);
v_infoState_2217_ = lean_ctor_get(v___x_2216_, 8);
lean_inc_ref(v_infoState_2217_);
lean_dec(v___x_2216_);
v_enabled_2218_ = lean_ctor_get_uint8(v_infoState_2217_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2217_);
if (v_enabled_2218_ == 0)
{
lean_object* v___x_2219_; 
lean_dec_ref(v_snd_2215_);
lean_dec_ref_known(v___x_2212_, 1);
lean_dec(v_stx_2195_);
v___x_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2219_, 0, v_a_2214_);
return v___x_2219_;
}
else
{
lean_object* v___x_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; lean_object* v___x_2223_; 
v___x_2220_ = lean_box(0);
v___x_2221_ = lean_box(0);
v___x_2222_ = 0;
v___x_2223_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_2195_, v_snd_2215_, v___x_2212_, v___x_2220_, v___x_2221_, v___x_2222_, v___x_2222_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_);
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2230_ == 0)
{
lean_object* v_unused_2231_; 
v_unused_2231_ = lean_ctor_get(v___x_2223_, 0);
lean_dec(v_unused_2231_);
v___x_2225_ = v___x_2223_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_dec(v___x_2223_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
lean_ctor_set(v___x_2225_, 0, v_a_2214_);
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2214_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2239_; 
lean_dec_ref(v_a_2214_);
v_a_2232_ = lean_ctor_get(v___x_2223_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2234_ = v___x_2223_;
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2223_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2237_; 
if (v_isShared_2235_ == 0)
{
v___x_2237_ = v___x_2234_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_a_2232_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
}
}
v___jp_2240_:
{
return v___y_2241_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___boxed(lean_object* v_typeExpr_2311_, lean_object* v_typeExpr_x27_2312_, lean_object* v_ev_2313_, lean_object* v_ev_x27_2314_, lean_object* v_stx_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(v_typeExpr_2311_, v_typeExpr_x27_2312_, v_ev_2313_, v_ev_x27_2314_, v_stx_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx(lean_object* v_00_u03b1_2324_, lean_object* v_00_u03b1_x27_2325_, lean_object* v_typeExpr_2326_, lean_object* v_typeExpr_x27_2327_, lean_object* v_ev_2328_, lean_object* v_ev_x27_2329_, lean_object* v_stx_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(v_typeExpr_2326_, v_typeExpr_x27_2327_, v_ev_2328_, v_ev_x27_2329_, v_stx_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___boxed(lean_object* v_00_u03b1_2339_, lean_object* v_00_u03b1_x27_2340_, lean_object* v_typeExpr_2341_, lean_object* v_typeExpr_x27_2342_, lean_object* v_ev_2343_, lean_object* v_ev_x27_2344_, lean_object* v_stx_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx(v_00_u03b1_2339_, v_00_u03b1_x27_2340_, v_typeExpr_2341_, v_typeExpr_x27_2342_, v_ev_2343_, v_ev_x27_2344_, v_stx_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_);
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
lean_dec(v_a_2347_);
lean_dec_ref(v_a_2346_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_object* v_00_u03b1_2354_, lean_object* v_c_2355_, lean_object* v_f_2356_, lean_object* v_x_2357_){
_start:
{
lean_object* v_fst_2358_; lean_object* v_snd_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2370_; 
v_fst_2358_ = lean_ctor_get(v_x_2357_, 0);
v_snd_2359_ = lean_ctor_get(v_x_2357_, 1);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_x_2357_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2361_ = v_x_2357_;
v_isShared_2362_ = v_isSharedCheck_2370_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_snd_2359_);
lean_inc(v_fst_2358_);
lean_dec(v_x_2357_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2370_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2368_; 
v___x_2363_ = lean_apply_1(v_f_2356_, v_fst_2358_);
v___x_2364_ = lean_box(0);
v___x_2365_ = l_Lean_Expr_const___override(v_c_2355_, v___x_2364_);
v___x_2366_ = l_Lean_Expr_app___override(v___x_2365_, v_snd_2359_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 1, v___x_2366_);
lean_ctor_set(v___x_2361_, 0, v___x_2363_);
v___x_2368_ = v___x_2361_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2363_);
lean_ctor_set(v_reuseFailAlloc_2369_, 1, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1(uint8_t v_v_2371_){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2372_, 0, v_v_2371_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1___boxed(lean_object* v_v_2373_){
_start:
{
uint8_t v_v_boxed_2374_; lean_object* v_res_2375_; 
v_v_boxed_2374_ = lean_unbox(v_v_2373_);
v_res_2375_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1(v_v_boxed_2374_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__2(lean_object* v_v_2376_){
_start:
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2377_, 0, v_v_2376_);
return v___x_2377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__3(lean_object* v_v_2378_){
_start:
{
lean_object* v___x_2379_; 
v___x_2379_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2379_, 0, v_v_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__4(lean_object* v_v_2380_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v_v_2380_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__5(lean_object* v_v_2382_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2383_, 0, v_v_2382_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx(lean_object* v_stx_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_){
_start:
{
lean_object* v___f_2423_; lean_object* v___f_2424_; lean_object* v___f_2425_; lean_object* v___f_2426_; lean_object* v___f_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___f_2423_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0));
v___f_2424_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1));
v___f_2425_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2));
v___f_2426_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3));
v___f_2427_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4));
v___x_2428_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7));
v___x_2429_ = l_Lean_Meta_saveState___redArg(v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2429_) == 0)
{
lean_object* v_a_2430_; lean_object* v___x_2431_; 
v_a_2430_ = lean_ctor_get(v___x_2429_, 0);
lean_inc(v_a_2430_);
lean_dec_ref_known(v___x_2429_, 1);
lean_inc(v_stx_2415_);
v___x_2431_ = l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(v_stx_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2440_; 
lean_dec(v_a_2430_);
lean_dec(v_stx_2415_);
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2434_ = v___x_2431_;
v_isShared_2435_ = v_isSharedCheck_2440_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2431_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2440_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2436_; lean_object* v___x_2438_; 
v___x_2436_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2428_, v___f_2423_, v_a_2432_);
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 0, v___x_2436_);
v___x_2438_ = v___x_2434_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2436_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2620_; 
v_a_2441_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2443_ = v___x_2431_;
v_isShared_2444_ = v_isSharedCheck_2620_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2431_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2620_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
lean_inc(v_a_2441_);
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
uint8_t v___x_2447_; 
v___x_2447_ = l_Lean_Exception_isInterrupt(v_a_2441_);
if (v___x_2447_ == 0)
{
uint8_t v___x_2448_; 
v___x_2448_ = l_Lean_Exception_isRuntime(v_a_2441_);
if (v___x_2448_ == 0)
{
lean_object* v___x_2449_; 
lean_dec_ref(v___x_2446_);
v___x_2449_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2430_, v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
lean_dec_ref_known(v___x_2449_, 1);
v___x_2450_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9));
v___x_2451_ = l_Lean_Meta_saveState___redArg(v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2453_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2451_, 1);
lean_inc(v_stx_2415_);
v___x_2453_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(v_stx_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v_a_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2462_; 
lean_dec(v_a_2452_);
lean_dec(v_stx_2415_);
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2456_ = v___x_2453_;
v_isShared_2457_ = v_isSharedCheck_2462_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_a_2454_);
lean_dec(v___x_2453_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2462_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2458_; lean_object* v___x_2460_; 
v___x_2458_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2450_, v___f_2424_, v_a_2454_);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 0, v___x_2458_);
v___x_2460_ = v___x_2456_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2458_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
else
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2602_; 
v_a_2463_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2465_ = v___x_2453_;
v_isShared_2466_ = v_isSharedCheck_2602_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2453_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2602_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2468_; 
lean_inc(v_a_2463_);
if (v_isShared_2466_ == 0)
{
v___x_2468_ = v___x_2465_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2463_);
v___x_2468_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
uint8_t v___x_2469_; 
v___x_2469_ = l_Lean_Exception_isInterrupt(v_a_2463_);
if (v___x_2469_ == 0)
{
uint8_t v___x_2470_; 
v___x_2470_ = l_Lean_Exception_isRuntime(v_a_2463_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; 
lean_dec_ref(v___x_2468_);
v___x_2471_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2452_, v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
lean_dec_ref_known(v___x_2471_, 1);
v___x_2472_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11));
v___x_2473_ = l_Lean_Meta_saveState___redArg(v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_object* v_a_2474_; lean_object* v___x_2475_; 
v_a_2474_ = lean_ctor_get(v___x_2473_, 0);
lean_inc(v_a_2474_);
lean_dec_ref_known(v___x_2473_, 1);
lean_inc(v_stx_2415_);
v___x_2475_ = l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(v_stx_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2484_; 
lean_dec(v_a_2474_);
lean_dec(v_stx_2415_);
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2478_ = v___x_2475_;
v_isShared_2479_ = v_isSharedCheck_2484_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2475_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2484_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2480_; lean_object* v___x_2482_; 
v___x_2480_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2472_, v___f_2425_, v_a_2476_);
if (v_isShared_2479_ == 0)
{
lean_ctor_set(v___x_2478_, 0, v___x_2480_);
v___x_2482_ = v___x_2478_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2480_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2584_; 
v_a_2485_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2487_ = v___x_2475_;
v_isShared_2488_ = v_isSharedCheck_2584_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2475_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2584_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
lean_inc(v_a_2485_);
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
uint8_t v___x_2491_; 
v___x_2491_ = l_Lean_Exception_isInterrupt(v_a_2485_);
if (v___x_2491_ == 0)
{
uint8_t v___x_2492_; 
v___x_2492_ = l_Lean_Exception_isRuntime(v_a_2485_);
if (v___x_2492_ == 0)
{
lean_object* v___x_2493_; 
lean_dec_ref(v___x_2490_);
v___x_2493_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2474_, v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2493_) == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_dec_ref_known(v___x_2493_, 1);
v___x_2494_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13));
v___x_2495_ = l_Lean_Meta_saveState___redArg(v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v___x_2497_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
lean_inc(v_stx_2415_);
v___x_2497_ = l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(v_stx_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2506_; 
lean_dec(v_a_2496_);
lean_dec(v_stx_2415_);
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2497_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2500_ = v___x_2497_;
v_isShared_2501_ = v_isSharedCheck_2506_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2497_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2506_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2502_; lean_object* v___x_2504_; 
v___x_2502_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2494_, v___f_2426_, v_a_2498_);
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 0, v___x_2502_);
v___x_2504_ = v___x_2500_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2502_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2566_; 
v_a_2507_ = lean_ctor_get(v___x_2497_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2497_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2509_ = v___x_2497_;
v_isShared_2510_ = v_isSharedCheck_2566_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2497_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2566_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
lean_inc(v_a_2507_);
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
uint8_t v___x_2513_; 
v___x_2513_ = l_Lean_Exception_isInterrupt(v_a_2507_);
if (v___x_2513_ == 0)
{
uint8_t v___x_2514_; 
v___x_2514_ = l_Lean_Exception_isRuntime(v_a_2507_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; 
lean_dec_ref(v___x_2512_);
v___x_2515_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2496_, v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
lean_dec_ref_known(v___x_2515_, 1);
v___x_2516_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15));
v___x_2517_ = l_Lean_Meta_saveState___redArg(v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2519_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_a_2518_);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2519_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(v_stx_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2528_; 
lean_dec(v_a_2518_);
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2522_ = v___x_2519_;
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2519_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v___x_2526_; 
v___x_2524_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2516_, v___f_2427_, v_a_2520_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v___x_2524_);
v___x_2526_ = v___x_2522_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v___x_2524_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
return v___x_2526_;
}
}
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2548_; 
v_a_2529_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2531_ = v___x_2519_;
v_isShared_2532_ = v_isSharedCheck_2548_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_a_2529_);
lean_dec(v___x_2519_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2548_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2534_; 
lean_inc(v_a_2529_);
if (v_isShared_2532_ == 0)
{
v___x_2534_ = v___x_2531_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2529_);
v___x_2534_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
uint8_t v___x_2535_; 
v___x_2535_ = l_Lean_Exception_isInterrupt(v_a_2529_);
if (v___x_2535_ == 0)
{
uint8_t v___x_2536_; 
v___x_2536_ = l_Lean_Exception_isRuntime(v_a_2529_);
if (v___x_2536_ == 0)
{
lean_object* v___x_2537_; 
lean_dec_ref(v___x_2534_);
v___x_2537_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2518_, v_a_2419_, v_a_2421_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v___x_2538_; 
lean_dec_ref_known(v___x_2537_, 1);
v___x_2538_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v___x_2538_;
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
v_a_2539_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v___x_2537_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2537_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
else
{
lean_dec(v_a_2518_);
return v___x_2534_;
}
}
else
{
lean_dec(v_a_2529_);
lean_dec(v_a_2518_);
return v___x_2534_;
}
}
}
}
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
lean_dec(v_stx_2415_);
v_a_2549_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2517_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2517_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
}
else
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2564_; 
lean_dec(v_stx_2415_);
v_a_2557_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2559_ = v___x_2515_;
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2515_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2562_; 
if (v_isShared_2560_ == 0)
{
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_a_2557_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
}
else
{
lean_dec(v_a_2496_);
lean_dec(v_stx_2415_);
return v___x_2512_;
}
}
else
{
lean_dec(v_a_2507_);
lean_dec(v_a_2496_);
lean_dec(v_stx_2415_);
return v___x_2512_;
}
}
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v_stx_2415_);
v_a_2567_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2495_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2495_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec(v_stx_2415_);
v_a_2575_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2493_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2493_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
else
{
lean_dec(v_a_2474_);
lean_dec(v_stx_2415_);
return v___x_2490_;
}
}
else
{
lean_dec(v_a_2485_);
lean_dec(v_a_2474_);
lean_dec(v_stx_2415_);
return v___x_2490_;
}
}
}
}
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
lean_dec(v_stx_2415_);
v_a_2585_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2587_ = v___x_2473_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v___x_2473_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2585_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec(v_stx_2415_);
v_a_2593_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2471_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2471_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_dec(v_a_2452_);
lean_dec(v_stx_2415_);
return v___x_2468_;
}
}
else
{
lean_dec(v_a_2463_);
lean_dec(v_a_2452_);
lean_dec(v_stx_2415_);
return v___x_2468_;
}
}
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec(v_stx_2415_);
v_a_2603_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2451_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2451_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v_stx_2415_);
v_a_2611_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2449_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2449_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_dec(v_a_2430_);
lean_dec(v_stx_2415_);
return v___x_2446_;
}
}
else
{
lean_dec(v_a_2441_);
lean_dec(v_a_2430_);
lean_dec(v_stx_2415_);
return v___x_2446_;
}
}
}
}
}
else
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
lean_dec(v_stx_2415_);
v_a_2621_ = lean_ctor_get(v___x_2429_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___x_2429_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2429_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
v___x_2626_ = v___x_2623_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___boxed(lean_object* v_stx_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx(v_stx_2629_, v_a_2630_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_);
lean_dec(v_a_2635_);
lean_dec_ref(v_a_2634_);
lean_dec(v_a_2633_);
lean_dec_ref(v_a_2632_);
lean_dec(v_a_2631_);
lean_dec_ref(v_a_2630_);
return v_res_2637_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1(void){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2639_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2);
v___x_2640_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0));
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
lean_ctor_set(v___x_2641_, 1, v___x_2639_);
return v___x_2641_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool(void){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1(void){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2644_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2);
v___x_2645_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0));
v___x_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2645_);
lean_ctor_set(v___x_2646_, 1, v___x_2644_);
return v___x_2646_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat(void){
_start:
{
lean_object* v___x_2647_; 
v___x_2647_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1);
return v___x_2647_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2649_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2);
v___x_2650_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0));
v___x_2651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
lean_ctor_set(v___x_2651_, 1, v___x_2649_);
return v___x_2651_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt(void){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1);
return v___x_2652_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1(void){
_start:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2654_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2);
v___x_2655_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0));
v___x_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
lean_ctor_set(v___x_2656_, 1, v___x_2654_);
return v___x_2656_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instString(void){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1);
return v___x_2657_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1(void){
_start:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2659_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2);
v___x_2660_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0));
v___x_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
lean_ctor_set(v___x_2661_, 1, v___x_2659_);
return v___x_2661_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instName(void){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption___redArg(lean_object* v_inst_2663_){
_start:
{
lean_object* v_evalTerm_2664_; lean_object* v_typeExpr_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2675_; 
v_evalTerm_2664_ = lean_ctor_get(v_inst_2663_, 0);
v_typeExpr_2665_ = lean_ctor_get(v_inst_2663_, 1);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_inst_2663_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2667_ = v_inst_2663_;
v_isShared_2668_ = v_isSharedCheck_2675_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_typeExpr_2665_);
lean_inc(v_evalTerm_2664_);
lean_dec(v_inst_2663_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2675_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2673_; 
lean_inc_ref(v_typeExpr_2665_);
v___x_2669_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___boxed), 11, 3);
lean_closure_set(v___x_2669_, 0, lean_box(0));
lean_closure_set(v___x_2669_, 1, v_typeExpr_2665_);
lean_closure_set(v___x_2669_, 2, v_evalTerm_2664_);
v___x_2670_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2);
v___x_2671_ = l_Lean_Expr_app___override(v___x_2670_, v_typeExpr_2665_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 1, v___x_2671_);
lean_ctor_set(v___x_2667_, 0, v___x_2669_);
v___x_2673_ = v___x_2667_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2674_, 1, v___x_2671_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption(lean_object* v_00_u03b1_2676_, lean_object* v_inst_2677_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = l_Lean_Elab_ConfigEval_EvalTerm_instOption___redArg(v_inst_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList___redArg(lean_object* v_inst_2679_){
_start:
{
lean_object* v_evalTerm_2680_; lean_object* v_typeExpr_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2691_; 
v_evalTerm_2680_ = lean_ctor_get(v_inst_2679_, 0);
v_typeExpr_2681_ = lean_ctor_get(v_inst_2679_, 1);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_inst_2679_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2683_ = v_inst_2679_;
v_isShared_2684_ = v_isSharedCheck_2691_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_typeExpr_2681_);
lean_inc(v_evalTerm_2680_);
lean_dec(v_inst_2679_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2691_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2689_; 
lean_inc_ref(v_typeExpr_2681_);
v___x_2685_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___boxed), 11, 3);
lean_closure_set(v___x_2685_, 0, lean_box(0));
lean_closure_set(v___x_2685_, 1, v_typeExpr_2681_);
lean_closure_set(v___x_2685_, 2, v_evalTerm_2680_);
v___x_2686_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1);
v___x_2687_ = l_Lean_Expr_app___override(v___x_2686_, v_typeExpr_2681_);
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 1, v___x_2687_);
lean_ctor_set(v___x_2683_, 0, v___x_2685_);
v___x_2689_ = v___x_2683_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2690_, 1, v___x_2687_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList(lean_object* v_00_u03b1_2692_, lean_object* v_inst_2693_){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = l_Lean_Elab_ConfigEval_EvalTerm_instList___redArg(v_inst_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray___redArg(lean_object* v_inst_2695_){
_start:
{
lean_object* v_evalTerm_2696_; lean_object* v_typeExpr_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2707_; 
v_evalTerm_2696_ = lean_ctor_get(v_inst_2695_, 0);
v_typeExpr_2697_ = lean_ctor_get(v_inst_2695_, 1);
v_isSharedCheck_2707_ = !lean_is_exclusive(v_inst_2695_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2699_ = v_inst_2695_;
v_isShared_2700_ = v_isSharedCheck_2707_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_typeExpr_2697_);
lean_inc(v_evalTerm_2696_);
lean_dec(v_inst_2695_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2707_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2705_; 
lean_inc_ref(v_typeExpr_2697_);
v___x_2701_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___boxed), 11, 3);
lean_closure_set(v___x_2701_, 0, lean_box(0));
lean_closure_set(v___x_2701_, 1, v_typeExpr_2697_);
lean_closure_set(v___x_2701_, 2, v_evalTerm_2696_);
v___x_2702_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2);
v___x_2703_ = l_Lean_Expr_app___override(v___x_2702_, v_typeExpr_2697_);
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 1, v___x_2703_);
lean_ctor_set(v___x_2699_, 0, v___x_2701_);
v___x_2705_ = v___x_2699_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2701_);
lean_ctor_set(v_reuseFailAlloc_2706_, 1, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray(lean_object* v_00_u03b1_2708_, lean_object* v_inst_2709_){
_start:
{
lean_object* v___x_2710_; 
v___x_2710_ = l_Lean_Elab_ConfigEval_EvalTerm_instArray___redArg(v_inst_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd___redArg(lean_object* v_inst_2711_, lean_object* v_inst_2712_){
_start:
{
lean_object* v_evalTerm_2713_; lean_object* v_typeExpr_2714_; lean_object* v_evalTerm_2715_; lean_object* v_typeExpr_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2726_; 
v_evalTerm_2713_ = lean_ctor_get(v_inst_2711_, 0);
lean_inc_ref(v_evalTerm_2713_);
v_typeExpr_2714_ = lean_ctor_get(v_inst_2711_, 1);
lean_inc_ref(v_typeExpr_2714_);
lean_dec_ref(v_inst_2711_);
v_evalTerm_2715_ = lean_ctor_get(v_inst_2712_, 0);
v_typeExpr_2716_ = lean_ctor_get(v_inst_2712_, 1);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_inst_2712_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2718_ = v_inst_2712_;
v_isShared_2719_ = v_isSharedCheck_2726_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_typeExpr_2716_);
lean_inc(v_evalTerm_2715_);
lean_dec(v_inst_2712_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2726_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2724_; 
lean_inc_ref(v_typeExpr_2716_);
lean_inc_ref(v_typeExpr_2714_);
v___x_2720_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___boxed), 14, 6);
lean_closure_set(v___x_2720_, 0, lean_box(0));
lean_closure_set(v___x_2720_, 1, lean_box(0));
lean_closure_set(v___x_2720_, 2, v_typeExpr_2714_);
lean_closure_set(v___x_2720_, 3, v_typeExpr_2716_);
lean_closure_set(v___x_2720_, 4, v_evalTerm_2713_);
lean_closure_set(v___x_2720_, 5, v_evalTerm_2715_);
v___x_2721_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3);
v___x_2722_ = l_Lean_mkAppB(v___x_2721_, v_typeExpr_2714_, v_typeExpr_2716_);
if (v_isShared_2719_ == 0)
{
lean_ctor_set(v___x_2718_, 1, v___x_2722_);
lean_ctor_set(v___x_2718_, 0, v___x_2720_);
v___x_2724_ = v___x_2718_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2720_);
lean_ctor_set(v_reuseFailAlloc_2725_, 1, v___x_2722_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd(lean_object* v_00_u03b1_2727_, lean_object* v_00_u03b1_x27_2728_, lean_object* v_inst_2729_, lean_object* v_inst_2730_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l_Lean_Elab_ConfigEval_EvalTerm_instProd___redArg(v_inst_2729_, v_inst_2730_);
return v___x_2731_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2(void){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2736_ = lean_box(0);
v___x_2737_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1));
v___x_2738_ = l_Lean_Expr_const___override(v___x_2737_, v___x_2736_);
return v___x_2738_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3(void){
_start:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2739_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2);
v___x_2740_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0));
v___x_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2740_);
lean_ctor_set(v___x_2741_, 1, v___x_2739_);
return v___x_2741_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue(void){
_start:
{
lean_object* v___x_2742_; 
v___x_2742_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3);
return v___x_2742_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2743_ = lean_box(0);
v___x_2744_ = l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
v___x_2745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2744_);
lean_ctor_set(v___x_2745_, 1, v___x_2743_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg(){
_start:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0);
v___x_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___boxed(lean_object* v___y_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0(lean_object* v_00_u03b1_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v___x_2757_; 
v___x_2757_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___boxed(lean_object* v_00_u03b1_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0(v_00_u03b1_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
lean_dec(v___y_2762_);
lean_dec_ref(v___y_2761_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(lean_object* v_e_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; uint8_t v___x_2773_; 
v___x_2771_ = l_Lean_Expr_cleanupAnnotations(v_e_2765_);
v___x_2772_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8));
v___x_2773_ = l_Lean_Expr_isConstOf(v___x_2771_, v___x_2772_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2774_; uint8_t v___x_2775_; 
v___x_2774_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5));
v___x_2775_ = l_Lean_Expr_isConstOf(v___x_2771_, v___x_2774_);
lean_dec_ref(v___x_2771_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; 
v___x_2776_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2776_;
}
else
{
lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2777_ = lean_box(v___x_2775_);
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
return v___x_2778_;
}
}
else
{
uint8_t v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
lean_dec_ref(v___x_2771_);
v___x_2779_ = 0;
v___x_2780_ = lean_box(v___x_2779_);
v___x_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2780_);
return v___x_2781_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore___boxed(lean_object* v_e_2782_, lean_object* v_a_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_, lean_object* v_a_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(v_e_2782_, v_a_2783_, v_a_2784_, v_a_2785_, v_a_2786_);
lean_dec(v_a_2786_);
lean_dec_ref(v_a_2785_);
lean_dec(v_a_2784_);
lean_dec_ref(v_a_2783_);
return v_res_2788_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2(void){
_start:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2791_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1));
v___x_2792_ = l_Lean_stringToMessageData(v___x_2791_);
return v___x_2792_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3(void){
_start:
{
uint8_t v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2793_ = 0;
v___x_2794_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1));
v___x_2795_ = l_Lean_MessageData_ofConstName(v___x_2794_, v___x_2793_);
return v___x_2795_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4(void){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2796_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3);
v___x_2797_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_2798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
lean_ctor_set(v___x_2798_, 1, v___x_2796_);
return v___x_2798_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6(void){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5));
v___x_2801_ = l_Lean_stringToMessageData(v___x_2800_);
return v___x_2801_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2802_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_2803_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4);
v___x_2804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2803_);
lean_ctor_set(v___x_2804_, 1, v___x_2802_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object* v_e_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_){
_start:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2811_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0));
v___x_2812_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7);
v___x_2813_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_2811_, v_e_2805_, v___x_2812_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___boxed(lean_object* v_e_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v_e_2814_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_);
lean_dec(v_a_2818_);
lean_dec_ref(v_a_2817_);
lean_dec(v_a_2816_);
lean_dec_ref(v_a_2815_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(lean_object* v_e_2821_){
_start:
{
lean_object* v___x_2823_; 
lean_inc_ref(v_e_2821_);
v___x_2823_ = l_Lean_Expr_nat_x3f(v_e_2821_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v___x_2824_; 
v___x_2824_ = l_Lean_Expr_rawNatLit_x3f(v_e_2821_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v___x_2825_; 
v___x_2825_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2825_;
}
else
{
lean_object* v_val_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
v_val_2826_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2824_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_val_2826_);
lean_dec(v___x_2824_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
lean_ctor_set_tag(v___x_2828_, 0);
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_val_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
else
{
lean_object* v_val_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec_ref(v_e_2821_);
v_val_2834_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2823_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_val_2834_);
lean_dec(v___x_2823_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
lean_ctor_set_tag(v___x_2836_, 0);
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_val_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg___boxed(lean_object* v_e_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_2842_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore(lean_object* v_e_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_){
_start:
{
lean_object* v___x_2851_; 
v___x_2851_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_2845_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___boxed(lean_object* v_e_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_){
_start:
{
lean_object* v_res_2858_; 
v_res_2858_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore(v_e_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_);
lean_dec(v_a_2856_);
lean_dec_ref(v_a_2855_);
lean_dec(v_a_2854_);
lean_dec_ref(v_a_2853_);
return v_res_2858_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1(void){
_start:
{
uint8_t v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2860_ = 0;
v___x_2861_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1));
v___x_2862_ = l_Lean_MessageData_ofConstName(v___x_2861_, v___x_2860_);
return v___x_2862_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2(void){
_start:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2863_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1);
v___x_2864_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_2865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2865_, 0, v___x_2864_);
lean_ctor_set(v___x_2865_, 1, v___x_2863_);
return v___x_2865_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3(void){
_start:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2866_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_2867_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2);
v___x_2868_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
lean_ctor_set(v___x_2868_, 1, v___x_2866_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(lean_object* v_e_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2875_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0));
v___x_2876_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3);
v___x_2877_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_2875_, v_e_2869_, v___x_2876_, v_a_2870_, v_a_2871_, v_a_2872_, v_a_2873_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___boxed(lean_object* v_e_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_e_2878_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
lean_dec(v_a_2882_);
lean_dec_ref(v_a_2881_);
lean_dec(v_a_2880_);
lean_dec_ref(v_a_2879_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(lean_object* v_msg_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v_ref_2891_; lean_object* v___x_2892_; lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2901_; 
v_ref_2891_ = lean_ctor_get(v___y_2888_, 2);
v___x_2892_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__9(v_msg_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_);
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2895_ = v___x_2892_;
v_isShared_2896_ = v_isSharedCheck_2901_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2892_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2901_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2897_; lean_object* v___x_2899_; 
lean_inc(v_ref_2891_);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v_ref_2891_);
lean_ctor_set(v___x_2897_, 1, v_a_2893_);
if (v_isShared_2896_ == 0)
{
lean_ctor_set_tag(v___x_2895_, 1);
lean_ctor_set(v___x_2895_, 0, v___x_2897_);
v___x_2899_ = v___x_2895_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v___x_2897_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg___boxed(lean_object* v_msg_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v_msg_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
return v_res_2908_;
}
}
static lean_object* _init_l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = ((lean_object*)(l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0));
v___x_2911_ = l_Lean_stringToMessageData(v___x_2910_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(lean_object* v_x_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
if (lean_obj_tag(v_x_2912_) == 0)
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2918_ = lean_obj_once(&l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1, &l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1_once, _init_l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1);
v___x_2919_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v___x_2918_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
return v___x_2919_;
}
else
{
lean_object* v_val_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
v_val_2920_ = lean_ctor_get(v_x_2912_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v_x_2912_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v_x_2912_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_val_2920_);
lean_dec(v_x_2912_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
lean_ctor_set_tag(v___x_2922_, 0);
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_val_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___boxed(lean_object* v_x_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(v_x_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(lean_object* v_e_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
lean_inc_ref(v_e_2942_);
v___x_2948_ = l_Lean_Expr_int_x3f(v_e_2942_);
v___x_2949_ = l_Lean_Meta_saveState___redArg(v_a_2944_, v_a_2946_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; lean_object* v___x_2951_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
lean_inc(v_a_2950_);
lean_dec_ref_known(v___x_2949_, 1);
v___x_2951_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(v___x_2948_, v_a_2943_, v_a_2944_, v_a_2945_, v_a_2946_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_dec(v_a_2950_);
lean_dec_ref(v_e_2942_);
return v___x_2951_;
}
else
{
lean_object* v_a_2952_; uint8_t v___x_2953_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
v___x_2953_ = l_Lean_Exception_isInterrupt(v_a_2952_);
if (v___x_2953_ == 0)
{
uint8_t v___x_2954_; 
lean_inc(v_a_2952_);
v___x_2954_ = l_Lean_Exception_isRuntime(v_a_2952_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; 
lean_dec_ref_known(v___x_2951_, 1);
v___x_2955_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2950_, v_a_2944_, v_a_2946_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v___x_2956_; 
lean_dec_ref_known(v___x_2955_, 1);
v___x_2956_ = l_Lean_Meta_saveState___redArg(v_a_2944_, v_a_2946_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2958_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
lean_inc(v_a_2957_);
lean_dec_ref_known(v___x_2956_, 1);
lean_inc_ref(v_e_2942_);
v___x_2958_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_2942_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2967_; 
lean_dec(v_a_2957_);
lean_dec_ref(v_e_2942_);
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2961_ = v___x_2958_;
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2958_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2963_; lean_object* v___x_2965_; 
v___x_2963_ = lean_nat_to_int(v_a_2959_);
if (v_isShared_2962_ == 0)
{
lean_ctor_set(v___x_2961_, 0, v___x_2963_);
v___x_2965_ = v___x_2961_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2963_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_3032_; 
v_a_2968_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_2970_ = v___x_2958_;
v_isShared_2971_ = v_isSharedCheck_3032_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2958_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_3032_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
lean_inc(v_a_2968_);
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_3031_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
uint8_t v___x_2974_; 
v___x_2974_ = l_Lean_Exception_isInterrupt(v_a_2968_);
if (v___x_2974_ == 0)
{
uint8_t v___x_2975_; 
v___x_2975_ = l_Lean_Exception_isRuntime(v_a_2968_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; 
lean_dec_ref(v___x_2973_);
v___x_2976_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2957_, v_a_2944_, v_a_2946_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v___x_2977_; uint8_t v___x_2978_; 
lean_dec_ref_known(v___x_2976_, 1);
v___x_2977_ = l_Lean_Expr_cleanupAnnotations(v_e_2942_);
v___x_2978_ = l_Lean_Expr_isApp(v___x_2977_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2979_; 
lean_dec_ref(v___x_2977_);
v___x_2979_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2979_;
}
else
{
lean_object* v_arg_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; uint8_t v___x_2983_; 
v_arg_2980_ = lean_ctor_get(v___x_2977_, 1);
lean_inc_ref(v_arg_2980_);
v___x_2981_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2977_);
v___x_2982_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1));
v___x_2983_ = l_Lean_Expr_isConstOf(v___x_2981_, v___x_2982_);
if (v___x_2983_ == 0)
{
lean_object* v___x_2984_; uint8_t v___x_2985_; 
v___x_2984_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2));
v___x_2985_ = l_Lean_Expr_isConstOf(v___x_2981_, v___x_2984_);
lean_dec_ref(v___x_2981_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; 
lean_dec_ref(v_arg_2980_);
v___x_2986_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2986_;
}
else
{
lean_object* v___x_2987_; 
v___x_2987_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_arg_2980_, v_a_2943_, v_a_2944_, v_a_2945_, v_a_2946_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2996_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2990_ = v___x_2987_;
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2987_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2992_; lean_object* v___x_2994_; 
v___x_2992_ = lean_nat_to_int(v_a_2988_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 0, v___x_2992_);
v___x_2994_ = v___x_2990_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2992_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
else
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
v_a_2997_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2987_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2987_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
return v___x_3002_;
}
}
}
}
}
else
{
lean_object* v___x_3005_; 
lean_dec_ref(v___x_2981_);
v___x_3005_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_arg_2980_, v_a_2943_, v_a_2944_, v_a_2945_, v_a_2946_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3014_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3010_ = lean_int_neg_succ_of_nat(v_a_3006_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 0, v___x_3010_);
v___x_3012_ = v___x_3008_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
v_a_3015_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_3005_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_3005_);
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
}
}
else
{
lean_object* v_a_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3030_; 
lean_dec_ref(v_e_2942_);
v_a_3023_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3025_ = v___x_2976_;
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_a_3023_);
lean_dec(v___x_2976_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3028_; 
if (v_isShared_3026_ == 0)
{
v___x_3028_ = v___x_3025_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3023_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
else
{
lean_dec(v_a_2957_);
lean_dec_ref(v_e_2942_);
return v___x_2973_;
}
}
else
{
lean_dec(v_a_2968_);
lean_dec(v_a_2957_);
lean_dec_ref(v_e_2942_);
return v___x_2973_;
}
}
}
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec_ref(v_e_2942_);
v_a_3033_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_2956_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_2956_);
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
else
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3048_; 
lean_dec_ref(v_e_2942_);
v_a_3041_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3043_ = v___x_2955_;
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_2955_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3046_; 
if (v_isShared_3044_ == 0)
{
v___x_3046_ = v___x_3043_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_a_3041_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
}
else
{
lean_dec(v_a_2950_);
lean_dec_ref(v_e_2942_);
return v___x_2951_;
}
}
else
{
lean_dec(v_a_2950_);
lean_dec_ref(v_e_2942_);
return v___x_2951_;
}
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_dec(v___x_2948_);
lean_dec_ref(v_e_2942_);
v_a_3049_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_2949_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_2949_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___boxed(lean_object* v_e_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(v_e_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_);
lean_dec(v_a_3061_);
lean_dec_ref(v_a_3060_);
lean_dec(v_a_3059_);
lean_dec_ref(v_a_3058_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0(lean_object* v_00_u03b1_3064_, lean_object* v_x_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
lean_object* v___x_3071_; 
v___x_3071_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(v_x_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___boxed(lean_object* v_00_u03b1_3072_, lean_object* v_x_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0(v_00_u03b1_3072_, v_x_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_);
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0(lean_object* v_00_u03b1_3080_, lean_object* v_msg_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v___x_3087_; 
v___x_3087_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v_msg_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_);
return v___x_3087_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3088_, lean_object* v_msg_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0(v_00_u03b1_3088_, v_msg_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
lean_dec(v___y_3093_);
lean_dec_ref(v___y_3092_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
return v_res_3095_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1(void){
_start:
{
uint8_t v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3097_ = 0;
v___x_3098_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1));
v___x_3099_ = l_Lean_MessageData_ofConstName(v___x_3098_, v___x_3097_);
return v___x_3099_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2(void){
_start:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1);
v___x_3101_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
lean_ctor_set(v___x_3102_, 1, v___x_3100_);
return v___x_3102_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3103_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3104_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2);
v___x_3105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3104_);
lean_ctor_set(v___x_3105_, 1, v___x_3103_);
return v___x_3105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(lean_object* v_e_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3112_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0));
v___x_3113_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3);
v___x_3114_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3112_, v_e_3106_, v___x_3113_, v_a_3107_, v_a_3108_, v_a_3109_, v_a_3110_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___boxed(lean_object* v_e_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(v_e_3115_, v_a_3116_, v_a_3117_, v_a_3118_, v_a_3119_);
lean_dec(v_a_3119_);
lean_dec_ref(v_a_3118_);
lean_dec(v_a_3117_);
lean_dec_ref(v_a_3116_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(lean_object* v_x_3122_){
_start:
{
if (lean_obj_tag(v_x_3122_) == 9)
{
lean_object* v_a_3124_; 
v_a_3124_ = lean_ctor_get(v_x_3122_, 0);
lean_inc_ref(v_a_3124_);
lean_dec_ref_known(v_x_3122_, 1);
if (lean_obj_tag(v_a_3124_) == 1)
{
lean_object* v_val_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
v_val_3125_ = lean_ctor_get(v_a_3124_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v_a_3124_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v_a_3124_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_val_3125_);
lean_dec(v_a_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
lean_ctor_set_tag(v___x_3127_, 0);
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_val_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
else
{
lean_object* v___x_3133_; 
lean_dec_ref(v_a_3124_);
v___x_3133_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3133_;
}
}
else
{
lean_object* v___x_3134_; 
lean_dec_ref(v_x_3122_);
v___x_3134_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3134_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg___boxed(lean_object* v_x_3135_, lean_object* v_a_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(v_x_3135_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore(lean_object* v_x_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_){
_start:
{
lean_object* v___x_3144_; 
v___x_3144_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(v_x_3138_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___boxed(lean_object* v_x_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore(v_x_3145_, v_a_3146_, v_a_3147_, v_a_3148_, v_a_3149_);
lean_dec(v_a_3149_);
lean_dec_ref(v_a_3148_);
lean_dec(v_a_3147_);
lean_dec_ref(v_a_3146_);
return v_res_3151_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1(void){
_start:
{
uint8_t v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3153_ = 0;
v___x_3154_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1));
v___x_3155_ = l_Lean_MessageData_ofConstName(v___x_3154_, v___x_3153_);
return v___x_3155_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2(void){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3156_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1);
v___x_3157_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
lean_ctor_set(v___x_3158_, 1, v___x_3156_);
return v___x_3158_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3(void){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3159_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3160_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2);
v___x_3161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3160_);
lean_ctor_set(v___x_3161_, 1, v___x_3159_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(lean_object* v_e_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_){
_start:
{
lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3168_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0));
v___x_3169_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3);
v___x_3170_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3168_, v_e_3162_, v___x_3169_, v_a_3163_, v_a_3164_, v_a_3165_, v_a_3166_);
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___boxed(lean_object* v_e_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_){
_start:
{
lean_object* v_res_3177_; 
v_res_3177_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(v_e_3171_, v_a_3172_, v_a_3173_, v_a_3174_, v_a_3175_);
lean_dec(v_a_3175_);
lean_dec_ref(v_a_3174_);
lean_dec(v_a_3173_);
lean_dec_ref(v_a_3172_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(lean_object* v_e_3178_){
_start:
{
lean_object* v___x_3180_; 
v___x_3180_ = l_Lean_Expr_name_x3f(v_e_3178_);
if (lean_obj_tag(v___x_3180_) == 0)
{
lean_object* v___x_3181_; 
v___x_3181_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3181_;
}
else
{
lean_object* v_val_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
v_val_3182_ = lean_ctor_get(v___x_3180_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3180_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3184_ = v___x_3180_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_val_3182_);
lean_dec(v___x_3180_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
lean_ctor_set_tag(v___x_3184_, 0);
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_val_3182_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg___boxed(lean_object* v_e_3190_, lean_object* v_a_3191_){
_start:
{
lean_object* v_res_3192_; 
v_res_3192_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(v_e_3190_);
return v_res_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore(lean_object* v_e_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_){
_start:
{
lean_object* v___x_3199_; 
v___x_3199_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(v_e_3193_);
return v___x_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___boxed(lean_object* v_e_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_){
_start:
{
lean_object* v_res_3206_; 
v_res_3206_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore(v_e_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_);
lean_dec(v_a_3204_);
lean_dec_ref(v_a_3203_);
lean_dec(v_a_3202_);
lean_dec_ref(v_a_3201_);
return v_res_3206_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1(void){
_start:
{
uint8_t v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3208_ = 0;
v___x_3209_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1));
v___x_3210_ = l_Lean_MessageData_ofConstName(v___x_3209_, v___x_3208_);
return v___x_3210_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2(void){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3211_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1);
v___x_3212_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3212_);
lean_ctor_set(v___x_3213_, 1, v___x_3211_);
return v___x_3213_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3(void){
_start:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3214_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3215_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2);
v___x_3216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3215_);
lean_ctor_set(v___x_3216_, 1, v___x_3214_);
return v___x_3216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(lean_object* v_e_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3223_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0));
v___x_3224_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3);
v___x_3225_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3223_, v_e_3217_, v___x_3224_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___boxed(lean_object* v_e_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(v_e_3226_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_);
lean_dec(v_a_3230_);
lean_dec_ref(v_a_3229_);
lean_dec(v_a_3228_);
lean_dec_ref(v_a_3227_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(lean_object* v_ev_3236_, lean_object* v_e_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_){
_start:
{
lean_object* v___x_3243_; uint8_t v___x_3244_; 
v___x_3243_ = l_Lean_Expr_cleanupAnnotations(v_e_3237_);
v___x_3244_ = l_Lean_Expr_isApp(v___x_3243_);
if (v___x_3244_ == 0)
{
lean_object* v___x_3245_; 
lean_dec_ref(v___x_3243_);
lean_dec_ref(v_ev_3236_);
v___x_3245_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3245_;
}
else
{
lean_object* v_arg_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; uint8_t v___x_3249_; 
v_arg_3246_ = lean_ctor_get(v___x_3243_, 1);
lean_inc_ref(v_arg_3246_);
v___x_3247_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3243_);
v___x_3248_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__8));
v___x_3249_ = l_Lean_Expr_isConstOf(v___x_3247_, v___x_3248_);
if (v___x_3249_ == 0)
{
uint8_t v___x_3250_; 
v___x_3250_ = l_Lean_Expr_isApp(v___x_3247_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; 
lean_dec_ref(v___x_3247_);
lean_dec_ref(v_arg_3246_);
lean_dec_ref(v_ev_3236_);
v___x_3251_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3251_;
}
else
{
lean_object* v___x_3252_; lean_object* v___x_3253_; uint8_t v___x_3254_; 
v___x_3252_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3247_);
v___x_3253_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0));
v___x_3254_ = l_Lean_Expr_isConstOf(v___x_3252_, v___x_3253_);
lean_dec_ref(v___x_3252_);
if (v___x_3254_ == 0)
{
lean_object* v___x_3255_; 
lean_dec_ref(v_arg_3246_);
lean_dec_ref(v_ev_3236_);
v___x_3255_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3255_;
}
else
{
lean_object* v___x_3256_; 
lean_inc(v_a_3241_);
lean_inc_ref(v_a_3240_);
lean_inc(v_a_3239_);
lean_inc_ref(v_a_3238_);
v___x_3256_ = lean_apply_6(v_ev_3236_, v_arg_3246_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, lean_box(0));
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3265_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3259_ = v___x_3256_;
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v___x_3256_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3261_; lean_object* v___x_3263_; 
v___x_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3261_, 0, v_a_3257_);
if (v_isShared_3260_ == 0)
{
lean_ctor_set(v___x_3259_, 0, v___x_3261_);
v___x_3263_ = v___x_3259_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v___x_3261_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
v_a_3266_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3256_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3256_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
}
}
else
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_dec_ref(v___x_3247_);
lean_dec_ref(v_arg_3246_);
lean_dec_ref(v_ev_3236_);
v___x_3274_ = lean_box(0);
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
return v___x_3275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___boxed(lean_object* v_ev_3276_, lean_object* v_e_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(v_ev_3276_, v_e_3277_, v_a_3278_, v_a_3279_, v_a_3280_, v_a_3281_);
lean_dec(v_a_3281_);
lean_dec_ref(v_a_3280_);
lean_dec(v_a_3279_);
lean_dec_ref(v_a_3278_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore(lean_object* v_00_u03b1_3284_, lean_object* v_ev_3285_, lean_object* v_e_3286_, lean_object* v_a_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(v_ev_3285_, v_e_3286_, v_a_3287_, v_a_3288_, v_a_3289_, v_a_3290_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___boxed(lean_object* v_00_u03b1_3293_, lean_object* v_ev_3294_, lean_object* v_e_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore(v_00_u03b1_3293_, v_ev_3294_, v_e_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_);
lean_dec(v_a_3299_);
lean_dec_ref(v_a_3298_);
lean_dec(v_a_3297_);
lean_dec_ref(v_a_3296_);
return v_res_3301_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0(void){
_start:
{
uint8_t v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3302_ = 0;
v___x_3303_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1));
v___x_3304_ = l_Lean_MessageData_ofConstName(v___x_3303_, v___x_3302_);
return v___x_3304_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v___x_3305_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0, &l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0);
v___x_3306_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3306_);
lean_ctor_set(v___x_3307_, 1, v___x_3305_);
return v___x_3307_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2(void){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3308_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3309_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1);
v___x_3310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
lean_ctor_set(v___x_3310_, 1, v___x_3308_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(lean_object* v_ev_3311_, lean_object* v_e_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_){
_start:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
lean_inc_ref(v_ev_3311_);
v___x_3318_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___boxed), 8, 2);
lean_closure_set(v___x_3318_, 0, lean_box(0));
lean_closure_set(v___x_3318_, 1, v_ev_3311_);
v___x_3319_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2);
v___x_3320_ = l_Lean_Meta_saveState___redArg(v_a_3314_, v_a_3316_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3322_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
lean_inc_ref(v_e_3312_);
v___x_3322_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3318_, v_e_3312_, v___x_3319_, v_a_3313_, v_a_3314_, v_a_3315_, v_a_3316_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_dec(v_a_3321_);
lean_dec_ref(v_e_3312_);
lean_dec_ref(v_ev_3311_);
return v___x_3322_;
}
else
{
lean_object* v_a_3323_; uint8_t v___x_3324_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
v___x_3324_ = l_Lean_Exception_isInterrupt(v_a_3323_);
if (v___x_3324_ == 0)
{
uint8_t v___x_3325_; 
lean_inc(v_a_3323_);
v___x_3325_ = l_Lean_Exception_isRuntime(v_a_3323_);
if (v___x_3325_ == 0)
{
lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3358_; 
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3358_ == 0)
{
lean_object* v_unused_3359_; 
v_unused_3359_ = lean_ctor_get(v___x_3322_, 0);
lean_dec(v_unused_3359_);
v___x_3327_ = v___x_3322_;
v_isShared_3328_ = v_isSharedCheck_3358_;
goto v_resetjp_3326_;
}
else
{
lean_dec(v___x_3322_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3358_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3329_; 
v___x_3329_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3321_, v_a_3314_, v_a_3316_);
if (lean_obj_tag(v___x_3329_) == 0)
{
lean_object* v___x_3330_; 
lean_dec_ref_known(v___x_3329_, 1);
lean_inc(v_a_3316_);
lean_inc_ref(v_a_3315_);
lean_inc(v_a_3314_);
lean_inc_ref(v_a_3313_);
v___x_3330_ = lean_apply_6(v_ev_3311_, v_e_3312_, v_a_3313_, v_a_3314_, v_a_3315_, v_a_3316_, lean_box(0));
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3341_; 
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3333_ = v___x_3330_;
v_isShared_3334_ = v_isSharedCheck_3341_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3330_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3341_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3328_ == 0)
{
lean_ctor_set(v___x_3327_, 0, v_a_3331_);
v___x_3336_ = v___x_3327_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
lean_object* v___x_3338_; 
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 0, v___x_3336_);
v___x_3338_ = v___x_3333_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v___x_3336_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
lean_del_object(v___x_3327_);
v_a_3342_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3344_ = v___x_3330_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3330_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3342_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
lean_del_object(v___x_3327_);
lean_dec_ref(v_e_3312_);
lean_dec_ref(v_ev_3311_);
v_a_3350_ = lean_ctor_get(v___x_3329_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3329_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3329_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3329_);
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
lean_dec(v_a_3321_);
lean_dec_ref(v_e_3312_);
lean_dec_ref(v_ev_3311_);
return v___x_3322_;
}
}
else
{
lean_dec(v_a_3321_);
lean_dec_ref(v_e_3312_);
lean_dec_ref(v_ev_3311_);
return v___x_3322_;
}
}
}
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_dec_ref(v___x_3318_);
lean_dec_ref(v_e_3312_);
lean_dec_ref(v_ev_3311_);
v_a_3360_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3320_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3320_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___boxed(lean_object* v_ev_3368_, lean_object* v_e_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(v_ev_3368_, v_e_3369_, v_a_3370_, v_a_3371_, v_a_3372_, v_a_3373_);
lean_dec(v_a_3373_);
lean_dec_ref(v_a_3372_);
lean_dec(v_a_3371_);
lean_dec_ref(v_a_3370_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr(lean_object* v_00_u03b1_3376_, lean_object* v_ev_3377_, lean_object* v_e_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_){
_start:
{
lean_object* v___x_3384_; 
v___x_3384_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(v_ev_3377_, v_e_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___boxed(lean_object* v_00_u03b1_3385_, lean_object* v_ev_3386_, lean_object* v_e_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v_res_3393_; 
v_res_3393_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr(v_00_u03b1_3385_, v_ev_3386_, v_e_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_);
lean_dec(v_a_3391_);
lean_dec_ref(v_a_3390_);
lean_dec(v_a_3389_);
lean_dec_ref(v_a_3388_);
return v_res_3393_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0));
v___x_3396_ = l_Lean_stringToMessageData(v___x_3395_);
return v___x_3396_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2(void){
_start:
{
uint8_t v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3397_ = 0;
v___x_3398_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0));
v___x_3399_ = l_Lean_MessageData_ofConstName(v___x_3398_, v___x_3397_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(lean_object* v_ev_3400_, lean_object* v_e_3401_, uint8_t v_didWHNF_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_){
_start:
{
lean_object* v___y_3409_; lean_object* v___y_3410_; lean_object* v___y_3411_; lean_object* v___y_3412_; lean_object* v___x_3435_; uint8_t v___x_3436_; 
lean_inc_ref(v_e_3401_);
v___x_3435_ = l_Lean_Expr_cleanupAnnotations(v_e_3401_);
v___x_3436_ = l_Lean_Expr_isApp(v___x_3435_);
if (v___x_3436_ == 0)
{
lean_dec_ref(v___x_3435_);
v___y_3409_ = v_a_3403_;
v___y_3410_ = v_a_3404_;
v___y_3411_ = v_a_3405_;
v___y_3412_ = v_a_3406_;
goto v___jp_3408_;
}
else
{
lean_object* v_arg_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; uint8_t v___x_3440_; 
v_arg_3437_ = lean_ctor_get(v___x_3435_, 1);
lean_inc_ref(v_arg_3437_);
v___x_3438_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3435_);
v___x_3439_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5));
v___x_3440_ = l_Lean_Expr_isConstOf(v___x_3438_, v___x_3439_);
if (v___x_3440_ == 0)
{
uint8_t v___x_3441_; 
v___x_3441_ = l_Lean_Expr_isApp(v___x_3438_);
if (v___x_3441_ == 0)
{
lean_dec_ref(v___x_3438_);
lean_dec_ref(v_arg_3437_);
v___y_3409_ = v_a_3403_;
v___y_3410_ = v_a_3404_;
v___y_3411_ = v_a_3405_;
v___y_3412_ = v_a_3406_;
goto v___jp_3408_;
}
else
{
lean_object* v_arg_3442_; lean_object* v___x_3443_; uint8_t v___x_3444_; 
v_arg_3442_ = lean_ctor_get(v___x_3438_, 1);
lean_inc_ref(v_arg_3442_);
v___x_3443_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3438_);
v___x_3444_ = l_Lean_Expr_isApp(v___x_3443_);
if (v___x_3444_ == 0)
{
lean_dec_ref(v___x_3443_);
lean_dec_ref(v_arg_3442_);
lean_dec_ref(v_arg_3437_);
v___y_3409_ = v_a_3403_;
v___y_3410_ = v_a_3404_;
v___y_3411_ = v_a_3405_;
v___y_3412_ = v_a_3406_;
goto v___jp_3408_;
}
else
{
lean_object* v___x_3445_; lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3445_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3443_);
v___x_3446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2));
v___x_3447_ = l_Lean_Expr_isConstOf(v___x_3445_, v___x_3446_);
lean_dec_ref(v___x_3445_);
if (v___x_3447_ == 0)
{
lean_dec_ref(v_arg_3442_);
lean_dec_ref(v_arg_3437_);
v___y_3409_ = v_a_3403_;
v___y_3410_ = v_a_3404_;
v___y_3411_ = v_a_3405_;
v___y_3412_ = v_a_3406_;
goto v___jp_3408_;
}
else
{
lean_object* v___x_3448_; 
lean_dec_ref(v_e_3401_);
lean_inc_ref(v_ev_3400_);
lean_inc(v_a_3406_);
lean_inc_ref(v_a_3405_);
lean_inc(v_a_3404_);
lean_inc_ref(v_a_3403_);
v___x_3448_ = lean_apply_6(v_ev_3400_, v_arg_3442_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_, lean_box(0));
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v___x_3450_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3449_);
lean_dec_ref_known(v___x_3448_, 1);
v___x_3450_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3400_, v_arg_3437_, v___x_3440_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3459_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3453_ = v___x_3450_;
v_isShared_3454_ = v_isSharedCheck_3459_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3450_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3459_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3455_; lean_object* v___x_3457_; 
v___x_3455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3455_, 0, v_a_3449_);
lean_ctor_set(v___x_3455_, 1, v_a_3451_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 0, v___x_3455_);
v___x_3457_ = v___x_3453_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v___x_3455_);
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
lean_dec(v_a_3449_);
return v___x_3450_;
}
}
else
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3467_; 
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_ev_3400_);
v_a_3460_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3462_ = v___x_3448_;
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3448_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3465_; 
if (v_isShared_3463_ == 0)
{
v___x_3465_ = v___x_3462_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_a_3460_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3468_; lean_object* v___x_3469_; 
lean_dec_ref(v___x_3438_);
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_e_3401_);
lean_dec_ref(v_ev_3400_);
v___x_3468_ = lean_box(0);
v___x_3469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3468_);
return v___x_3469_;
}
}
v___jp_3408_:
{
if (v_didWHNF_3402_ == 0)
{
uint8_t v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = 1;
lean_inc(v___y_3412_);
lean_inc_ref(v___y_3411_);
lean_inc(v___y_3410_);
lean_inc_ref(v___y_3409_);
v___x_3414_ = lean_whnf(v_e_3401_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref_known(v___x_3414_, 1);
v_e_3401_ = v_a_3415_;
v_didWHNF_3402_ = v___x_3413_;
v_a_3403_ = v___y_3409_;
v_a_3404_ = v___y_3410_;
v_a_3405_ = v___y_3411_;
v_a_3406_ = v___y_3412_;
goto _start;
}
else
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3424_; 
lean_dec_ref(v_ev_3400_);
v_a_3417_ = lean_ctor_get(v___x_3414_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3414_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3419_ = v___x_3414_;
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3414_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3422_; 
if (v_isShared_3420_ == 0)
{
v___x_3422_ = v___x_3419_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_a_3417_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
return v___x_3422_;
}
}
}
}
else
{
lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; 
lean_dec_ref(v_ev_3400_);
v___x_3425_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1);
v___x_3426_ = l_Lean_indentExpr(v_e_3401_);
v___x_3427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3425_);
lean_ctor_set(v___x_3427_, 1, v___x_3426_);
v___x_3428_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3429_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3427_);
lean_ctor_set(v___x_3429_, 1, v___x_3428_);
v___x_3430_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2);
v___x_3431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3429_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3431_);
lean_ctor_set(v___x_3433_, 1, v___x_3432_);
v___x_3434_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v___x_3433_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_);
return v___x_3434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___boxed(lean_object* v_ev_3470_, lean_object* v_e_3471_, lean_object* v_didWHNF_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_){
_start:
{
uint8_t v_didWHNF_boxed_3478_; lean_object* v_res_3479_; 
v_didWHNF_boxed_3478_ = lean_unbox(v_didWHNF_3472_);
v_res_3479_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3470_, v_e_3471_, v_didWHNF_boxed_3478_, v_a_3473_, v_a_3474_, v_a_3475_, v_a_3476_);
lean_dec(v_a_3476_);
lean_dec_ref(v_a_3475_);
lean_dec(v_a_3474_);
lean_dec_ref(v_a_3473_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr(lean_object* v_00_u03b1_3480_, lean_object* v_ev_3481_, lean_object* v_e_3482_, uint8_t v_didWHNF_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3481_, v_e_3482_, v_didWHNF_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___boxed(lean_object* v_00_u03b1_3490_, lean_object* v_ev_3491_, lean_object* v_e_3492_, lean_object* v_didWHNF_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_){
_start:
{
uint8_t v_didWHNF_boxed_3499_; lean_object* v_res_3500_; 
v_didWHNF_boxed_3499_ = lean_unbox(v_didWHNF_3493_);
v_res_3500_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr(v_00_u03b1_3490_, v_ev_3491_, v_e_3492_, v_didWHNF_boxed_3499_, v_a_3494_, v_a_3495_, v_a_3496_, v_a_3497_);
lean_dec(v_a_3497_);
lean_dec_ref(v_a_3496_);
lean_dec(v_a_3495_);
lean_dec_ref(v_a_3494_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0(lean_object* v_ev_3507_, lean_object* v_e_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_){
_start:
{
lean_object* v_e_x27_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___x_3539_; uint8_t v___x_3540_; 
v___x_3539_ = l_Lean_Expr_cleanupAnnotations(v_e_3508_);
v___x_3540_ = l_Lean_Expr_isApp(v___x_3539_);
if (v___x_3540_ == 0)
{
lean_object* v___x_3541_; 
lean_dec_ref(v___x_3539_);
lean_dec_ref(v_ev_3507_);
v___x_3541_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3541_;
}
else
{
lean_object* v_arg_3542_; lean_object* v___x_3543_; uint8_t v___x_3544_; 
v_arg_3542_ = lean_ctor_get(v___x_3539_, 1);
lean_inc_ref(v_arg_3542_);
v___x_3543_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3539_);
v___x_3544_ = l_Lean_Expr_isApp(v___x_3543_);
if (v___x_3544_ == 0)
{
lean_object* v___x_3545_; 
lean_dec_ref(v___x_3543_);
lean_dec_ref(v_arg_3542_);
lean_dec_ref(v_ev_3507_);
v___x_3545_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3545_;
}
else
{
lean_object* v___x_3546_; lean_object* v___x_3547_; uint8_t v___x_3548_; 
v___x_3546_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3543_);
v___x_3547_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0));
v___x_3548_ = l_Lean_Expr_isConstOf(v___x_3546_, v___x_3547_);
if (v___x_3548_ == 0)
{
lean_object* v___x_3549_; uint8_t v___x_3550_; 
v___x_3549_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1));
v___x_3550_ = l_Lean_Expr_isConstOf(v___x_3546_, v___x_3549_);
lean_dec_ref(v___x_3546_);
if (v___x_3550_ == 0)
{
lean_object* v___x_3551_; 
lean_dec_ref(v_arg_3542_);
lean_dec_ref(v_ev_3507_);
v___x_3551_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3551_;
}
else
{
v_e_x27_3515_ = v_arg_3542_;
v___y_3516_ = v___y_3509_;
v___y_3517_ = v___y_3510_;
v___y_3518_ = v___y_3511_;
v___y_3519_ = v___y_3512_;
goto v___jp_3514_;
}
}
else
{
lean_dec_ref(v___x_3546_);
v_e_x27_3515_ = v_arg_3542_;
v___y_3516_ = v___y_3509_;
v___y_3517_ = v___y_3510_;
v___y_3518_ = v___y_3511_;
v___y_3519_ = v___y_3512_;
goto v___jp_3514_;
}
}
}
v___jp_3514_:
{
uint8_t v___x_3520_; lean_object* v___x_3521_; 
v___x_3520_ = 0;
v___x_3521_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3507_, v_e_x27_3515_, v___x_3520_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3530_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3524_ = v___x_3521_;
v_isShared_3525_ = v_isSharedCheck_3530_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3521_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3530_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3526_; lean_object* v___x_3528_; 
v___x_3526_ = lean_array_mk(v_a_3522_);
if (v_isShared_3525_ == 0)
{
lean_ctor_set(v___x_3524_, 0, v___x_3526_);
v___x_3528_ = v___x_3524_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v___x_3526_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
else
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3538_; 
v_a_3531_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3533_ = v___x_3521_;
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3521_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3536_; 
if (v_isShared_3534_ == 0)
{
v___x_3536_ = v___x_3533_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_a_3531_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___boxed(lean_object* v_ev_3552_, lean_object* v_e_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0(v_ev_3552_, v_e_3553_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_);
lean_dec(v___y_3557_);
lean_dec_ref(v___y_3556_);
lean_dec(v___y_3555_);
lean_dec_ref(v___y_3554_);
return v_res_3559_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0(void){
_start:
{
uint8_t v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3560_ = 0;
v___x_3561_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1));
v___x_3562_ = l_Lean_MessageData_ofConstName(v___x_3561_, v___x_3560_);
return v___x_3562_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
v___x_3563_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0, &l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0);
v___x_3564_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3564_);
lean_ctor_set(v___x_3565_, 1, v___x_3563_);
return v___x_3565_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2(void){
_start:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3566_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3567_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1);
v___x_3568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3567_);
lean_ctor_set(v___x_3568_, 1, v___x_3566_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(lean_object* v_ev_3569_, lean_object* v_e_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_){
_start:
{
lean_object* v___f_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v___f_3576_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3576_, 0, v_ev_3569_);
v___x_3577_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2);
v___x_3578_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___f_3576_, v_e_3570_, v___x_3577_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_);
return v___x_3578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___boxed(lean_object* v_ev_3579_, lean_object* v_e_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_, lean_object* v_a_3584_, lean_object* v_a_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(v_ev_3579_, v_e_3580_, v_a_3581_, v_a_3582_, v_a_3583_, v_a_3584_);
lean_dec(v_a_3584_);
lean_dec_ref(v_a_3583_);
lean_dec(v_a_3582_);
lean_dec_ref(v_a_3581_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr(lean_object* v_00_u03b1_3587_, lean_object* v_ev_3588_, lean_object* v_e_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_){
_start:
{
lean_object* v___x_3595_; 
v___x_3595_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(v_ev_3588_, v_e_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_);
return v___x_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___boxed(lean_object* v_00_u03b1_3596_, lean_object* v_ev_3597_, lean_object* v_e_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_){
_start:
{
lean_object* v_res_3604_; 
v_res_3604_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr(v_00_u03b1_3596_, v_ev_3597_, v_e_3598_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
lean_dec(v_a_3600_);
lean_dec_ref(v_a_3599_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore(lean_object* v_e_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3614_; lean_object* v___y_3615_; lean_object* v___x_3813_; uint8_t v___x_3814_; 
lean_inc_ref(v_e_3605_);
v___x_3813_ = l_Lean_Expr_cleanupAnnotations(v_e_3605_);
v___x_3814_ = l_Lean_Expr_isApp(v___x_3813_);
if (v___x_3814_ == 0)
{
lean_dec_ref(v___x_3813_);
v___y_3612_ = v_a_3606_;
v___y_3613_ = v_a_3607_;
v___y_3614_ = v_a_3608_;
v___y_3615_ = v_a_3609_;
goto v___jp_3611_;
}
else
{
lean_object* v_arg_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; uint8_t v___x_3818_; 
v_arg_3815_ = lean_ctor_get(v___x_3813_, 1);
lean_inc_ref(v_arg_3815_);
v___x_3816_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3813_);
v___x_3817_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15));
v___x_3818_ = l_Lean_Expr_isConstOf(v___x_3816_, v___x_3817_);
if (v___x_3818_ == 0)
{
lean_object* v___x_3819_; uint8_t v___x_3820_; 
v___x_3819_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13));
v___x_3820_ = l_Lean_Expr_isConstOf(v___x_3816_, v___x_3819_);
if (v___x_3820_ == 0)
{
lean_object* v___x_3821_; uint8_t v___x_3822_; 
v___x_3821_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11));
v___x_3822_ = l_Lean_Expr_isConstOf(v___x_3816_, v___x_3821_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; uint8_t v___x_3824_; 
v___x_3823_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9));
v___x_3824_ = l_Lean_Expr_isConstOf(v___x_3816_, v___x_3823_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; uint8_t v___x_3826_; 
v___x_3825_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7));
v___x_3826_ = l_Lean_Expr_isConstOf(v___x_3816_, v___x_3825_);
lean_dec_ref(v___x_3816_);
if (v___x_3826_ == 0)
{
lean_dec_ref(v_arg_3815_);
v___y_3612_ = v_a_3606_;
v___y_3613_ = v_a_3607_;
v___y_3614_ = v_a_3608_;
v___y_3615_ = v_a_3609_;
goto v___jp_3611_;
}
else
{
lean_object* v___x_3827_; 
lean_dec_ref(v_e_3605_);
v___x_3827_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v_arg_3815_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v_a_3828_; lean_object* v___x_3830_; uint8_t v_isShared_3831_; uint8_t v_isSharedCheck_3837_; 
v_a_3828_ = lean_ctor_get(v___x_3827_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3830_ = v___x_3827_;
v_isShared_3831_ = v_isSharedCheck_3837_;
goto v_resetjp_3829_;
}
else
{
lean_inc(v_a_3828_);
lean_dec(v___x_3827_);
v___x_3830_ = lean_box(0);
v_isShared_3831_ = v_isSharedCheck_3837_;
goto v_resetjp_3829_;
}
v_resetjp_3829_:
{
lean_object* v___x_3832_; uint8_t v___x_3833_; lean_object* v___x_3835_; 
v___x_3832_ = lean_alloc_ctor(1, 0, 1);
v___x_3833_ = lean_unbox(v_a_3828_);
lean_dec(v_a_3828_);
lean_ctor_set_uint8(v___x_3832_, 0, v___x_3833_);
if (v_isShared_3831_ == 0)
{
lean_ctor_set(v___x_3830_, 0, v___x_3832_);
v___x_3835_ = v___x_3830_;
goto v_reusejp_3834_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v___x_3832_);
v___x_3835_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3834_;
}
v_reusejp_3834_:
{
return v___x_3835_;
}
}
}
else
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
v_a_3838_ = lean_ctor_get(v___x_3827_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3840_ = v___x_3827_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3827_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3838_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
}
else
{
lean_object* v___x_3846_; 
lean_dec_ref(v___x_3816_);
lean_dec_ref(v_e_3605_);
v___x_3846_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_arg_3815_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
if (lean_obj_tag(v___x_3846_) == 0)
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3855_; 
v_a_3847_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3849_ = v___x_3846_;
v_isShared_3850_ = v_isSharedCheck_3855_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3846_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3855_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3851_; lean_object* v___x_3853_; 
v___x_3851_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3851_, 0, v_a_3847_);
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v___x_3851_);
v___x_3853_ = v___x_3849_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3851_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
else
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3863_; 
v_a_3856_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3858_ = v___x_3846_;
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v___x_3846_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3861_; 
if (v_isShared_3859_ == 0)
{
v___x_3861_ = v___x_3858_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3856_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
}
else
{
lean_object* v___x_3864_; 
lean_dec_ref(v___x_3816_);
lean_dec_ref(v_e_3605_);
v___x_3864_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(v_arg_3815_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3873_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3867_ = v___x_3864_;
v_isShared_3868_ = v_isSharedCheck_3873_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_a_3865_);
lean_dec(v___x_3864_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3873_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3869_; lean_object* v___x_3871_; 
v___x_3869_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3869_, 0, v_a_3865_);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 0, v___x_3869_);
v___x_3871_ = v___x_3867_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v___x_3869_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
v_a_3874_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3864_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3864_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
}
else
{
lean_object* v___x_3882_; 
lean_dec_ref(v___x_3816_);
lean_dec_ref(v_e_3605_);
v___x_3882_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(v_arg_3815_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
if (lean_obj_tag(v___x_3882_) == 0)
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3891_; 
v_a_3883_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3885_ = v___x_3882_;
v_isShared_3886_ = v_isSharedCheck_3891_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3882_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3891_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3887_; lean_object* v___x_3889_; 
v___x_3887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3887_, 0, v_a_3883_);
if (v_isShared_3886_ == 0)
{
lean_ctor_set(v___x_3885_, 0, v___x_3887_);
v___x_3889_ = v___x_3885_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v___x_3887_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
else
{
lean_object* v_a_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3899_; 
v_a_3892_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3894_ = v___x_3882_;
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_a_3892_);
lean_dec(v___x_3882_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3897_; 
if (v_isShared_3895_ == 0)
{
v___x_3897_ = v___x_3894_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_a_3892_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
}
}
}
else
{
lean_object* v___x_3900_; 
lean_dec_ref(v___x_3816_);
lean_dec_ref(v_e_3605_);
v___x_3900_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(v_arg_3815_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v_a_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3909_; 
v_a_3901_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3903_ = v___x_3900_;
v_isShared_3904_ = v_isSharedCheck_3909_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_a_3901_);
lean_dec(v___x_3900_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3909_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3905_; lean_object* v___x_3907_; 
v___x_3905_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3905_, 0, v_a_3901_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3905_);
v___x_3907_ = v___x_3903_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v___x_3905_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
return v___x_3907_;
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3917_; 
v_a_3910_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3912_ = v___x_3900_;
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3900_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3915_; 
if (v_isShared_3913_ == 0)
{
v___x_3915_ = v___x_3912_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_a_3910_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
}
}
}
v___jp_3611_:
{
lean_object* v___x_3616_; 
v___x_3616_ = l_Lean_Meta_saveState___redArg(v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; lean_object* v___x_3618_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3616_, 1);
lean_inc_ref(v_e_3605_);
v___x_3618_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(v_e_3605_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3628_; 
lean_dec(v_a_3617_);
lean_dec_ref(v_e_3605_);
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3621_ = v___x_3618_;
v_isShared_3622_ = v_isSharedCheck_3628_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3618_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3628_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3623_; uint8_t v___x_3624_; lean_object* v___x_3626_; 
v___x_3623_ = lean_alloc_ctor(1, 0, 1);
v___x_3624_ = lean_unbox(v_a_3619_);
lean_dec(v_a_3619_);
lean_ctor_set_uint8(v___x_3623_, 0, v___x_3624_);
if (v_isShared_3622_ == 0)
{
lean_ctor_set(v___x_3621_, 0, v___x_3623_);
v___x_3626_ = v___x_3621_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3623_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3804_; 
v_a_3629_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3631_ = v___x_3618_;
v_isShared_3632_ = v_isSharedCheck_3804_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3618_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3804_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
lean_inc(v_a_3629_);
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
uint8_t v___x_3635_; 
v___x_3635_ = l_Lean_Exception_isInterrupt(v_a_3629_);
if (v___x_3635_ == 0)
{
uint8_t v___x_3636_; 
v___x_3636_ = l_Lean_Exception_isRuntime(v_a_3629_);
if (v___x_3636_ == 0)
{
lean_object* v___x_3637_; 
lean_dec_ref(v___x_3634_);
v___x_3637_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3617_, v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v___x_3638_; 
lean_dec_ref_known(v___x_3637_, 1);
v___x_3638_ = l_Lean_Meta_saveState___redArg(v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3640_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc(v_a_3639_);
lean_dec_ref_known(v___x_3638_, 1);
lean_inc_ref(v_e_3605_);
v___x_3640_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_3605_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3649_; 
lean_dec(v_a_3639_);
lean_dec_ref(v_e_3605_);
v_a_3641_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3643_ = v___x_3640_;
v_isShared_3644_ = v_isSharedCheck_3649_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3640_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3649_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3645_; lean_object* v___x_3647_; 
v___x_3645_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3645_, 0, v_a_3641_);
if (v_isShared_3644_ == 0)
{
lean_ctor_set(v___x_3643_, 0, v___x_3645_);
v___x_3647_ = v___x_3643_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3645_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
else
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3786_; 
v_a_3650_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3652_ = v___x_3640_;
v_isShared_3653_ = v_isSharedCheck_3786_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3640_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3786_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
lean_inc(v_a_3650_);
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
uint8_t v___x_3656_; 
v___x_3656_ = l_Lean_Exception_isInterrupt(v_a_3650_);
if (v___x_3656_ == 0)
{
uint8_t v___x_3657_; 
v___x_3657_ = l_Lean_Exception_isRuntime(v_a_3650_);
if (v___x_3657_ == 0)
{
lean_object* v___x_3658_; 
lean_dec_ref(v___x_3655_);
v___x_3658_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3639_, v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v___x_3659_; 
lean_dec_ref_known(v___x_3658_, 1);
v___x_3659_ = l_Lean_Meta_saveState___redArg(v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3661_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___x_3659_, 1);
lean_inc_ref(v_e_3605_);
v___x_3661_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(v_e_3605_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3670_; 
lean_dec(v_a_3660_);
lean_dec_ref(v_e_3605_);
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
v___x_3666_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3666_, 0, v_a_3662_);
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
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3768_; 
v_a_3671_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3673_ = v___x_3661_;
v_isShared_3674_ = v_isSharedCheck_3768_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3661_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3768_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
lean_inc(v_a_3671_);
if (v_isShared_3674_ == 0)
{
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
uint8_t v___x_3677_; 
v___x_3677_ = l_Lean_Exception_isInterrupt(v_a_3671_);
if (v___x_3677_ == 0)
{
uint8_t v___x_3678_; 
v___x_3678_ = l_Lean_Exception_isRuntime(v_a_3671_);
if (v___x_3678_ == 0)
{
lean_object* v___x_3679_; 
lean_dec_ref(v___x_3676_);
v___x_3679_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3660_, v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v___x_3680_; 
lean_dec_ref_known(v___x_3679_, 1);
v___x_3680_ = l_Lean_Meta_saveState___redArg(v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v_a_3681_; lean_object* v___x_3682_; 
v_a_3681_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_a_3681_);
lean_dec_ref_known(v___x_3680_, 1);
lean_inc_ref(v_e_3605_);
v___x_3682_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(v_e_3605_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3691_; 
lean_dec(v_a_3681_);
lean_dec_ref(v_e_3605_);
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3691_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3691_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3687_; lean_object* v___x_3689_; 
v___x_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3687_, 0, v_a_3683_);
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v___x_3687_);
v___x_3689_ = v___x_3685_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v___x_3687_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
return v___x_3689_;
}
}
}
else
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3750_; 
v_a_3692_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3694_ = v___x_3682_;
v_isShared_3695_ = v_isSharedCheck_3750_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3682_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3750_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3697_; 
lean_inc(v_a_3692_);
if (v_isShared_3695_ == 0)
{
v___x_3697_ = v___x_3694_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3692_);
v___x_3697_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
uint8_t v___x_3698_; 
v___x_3698_ = l_Lean_Exception_isInterrupt(v_a_3692_);
if (v___x_3698_ == 0)
{
uint8_t v___x_3699_; 
v___x_3699_ = l_Lean_Exception_isRuntime(v_a_3692_);
if (v___x_3699_ == 0)
{
lean_object* v___x_3700_; 
lean_dec_ref(v___x_3697_);
v___x_3700_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3681_, v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3700_) == 0)
{
lean_object* v___x_3701_; 
lean_dec_ref_known(v___x_3700_, 1);
v___x_3701_ = l_Lean_Meta_saveState___redArg(v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3701_) == 0)
{
lean_object* v_a_3702_; lean_object* v___x_3703_; 
v_a_3702_ = lean_ctor_get(v___x_3701_, 0);
lean_inc(v_a_3702_);
lean_dec_ref_known(v___x_3701_, 1);
v___x_3703_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(v_e_3605_);
if (lean_obj_tag(v___x_3703_) == 0)
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3712_; 
lean_dec(v_a_3702_);
v_a_3704_ = lean_ctor_get(v___x_3703_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3703_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3706_ = v___x_3703_;
v_isShared_3707_ = v_isSharedCheck_3712_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3703_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3712_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3708_; lean_object* v___x_3710_; 
v___x_3708_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3708_, 0, v_a_3704_);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 0, v___x_3708_);
v___x_3710_ = v___x_3706_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3708_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
else
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3732_; 
v_a_3713_ = lean_ctor_get(v___x_3703_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v___x_3703_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3715_ = v___x_3703_;
v_isShared_3716_ = v_isSharedCheck_3732_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3703_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3732_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
lean_inc(v_a_3713_);
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
uint8_t v___x_3719_; 
v___x_3719_ = l_Lean_Exception_isInterrupt(v_a_3713_);
if (v___x_3719_ == 0)
{
uint8_t v___x_3720_; 
v___x_3720_ = l_Lean_Exception_isRuntime(v_a_3713_);
if (v___x_3720_ == 0)
{
lean_object* v___x_3721_; 
lean_dec_ref(v___x_3718_);
v___x_3721_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3702_, v___y_3613_, v___y_3615_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v___x_3722_; 
lean_dec_ref_known(v___x_3721_, 1);
v___x_3722_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3722_;
}
else
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
v_a_3723_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3721_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3721_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
else
{
lean_dec(v_a_3702_);
return v___x_3718_;
}
}
else
{
lean_dec(v_a_3713_);
lean_dec(v_a_3702_);
return v___x_3718_;
}
}
}
}
}
else
{
lean_object* v_a_3733_; lean_object* v___x_3735_; uint8_t v_isShared_3736_; uint8_t v_isSharedCheck_3740_; 
lean_dec_ref(v_e_3605_);
v_a_3733_ = lean_ctor_get(v___x_3701_, 0);
v_isSharedCheck_3740_ = !lean_is_exclusive(v___x_3701_);
if (v_isSharedCheck_3740_ == 0)
{
v___x_3735_ = v___x_3701_;
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
else
{
lean_inc(v_a_3733_);
lean_dec(v___x_3701_);
v___x_3735_ = lean_box(0);
v_isShared_3736_ = v_isSharedCheck_3740_;
goto v_resetjp_3734_;
}
v_resetjp_3734_:
{
lean_object* v___x_3738_; 
if (v_isShared_3736_ == 0)
{
v___x_3738_ = v___x_3735_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v_a_3733_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
}
}
else
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3748_; 
lean_dec_ref(v_e_3605_);
v_a_3741_ = lean_ctor_get(v___x_3700_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3700_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3743_ = v___x_3700_;
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v___x_3700_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_a_3741_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
}
}
else
{
lean_dec(v_a_3681_);
lean_dec_ref(v_e_3605_);
return v___x_3697_;
}
}
else
{
lean_dec(v_a_3692_);
lean_dec(v_a_3681_);
lean_dec_ref(v_e_3605_);
return v___x_3697_;
}
}
}
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3758_; 
lean_dec_ref(v_e_3605_);
v_a_3751_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___x_3680_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3680_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3756_; 
if (v_isShared_3754_ == 0)
{
v___x_3756_ = v___x_3753_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3751_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
lean_dec_ref(v_e_3605_);
v_a_3759_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___x_3679_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3679_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3764_; 
if (v_isShared_3762_ == 0)
{
v___x_3764_ = v___x_3761_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v_a_3759_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
}
else
{
lean_dec(v_a_3660_);
lean_dec_ref(v_e_3605_);
return v___x_3676_;
}
}
else
{
lean_dec(v_a_3671_);
lean_dec(v_a_3660_);
lean_dec_ref(v_e_3605_);
return v___x_3676_;
}
}
}
}
}
else
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3776_; 
lean_dec_ref(v_e_3605_);
v_a_3769_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3771_ = v___x_3659_;
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v___x_3659_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3774_; 
if (v_isShared_3772_ == 0)
{
v___x_3774_ = v___x_3771_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v_a_3769_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
}
else
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
lean_dec_ref(v_e_3605_);
v_a_3777_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3658_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3658_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
}
else
{
lean_dec(v_a_3639_);
lean_dec_ref(v_e_3605_);
return v___x_3655_;
}
}
else
{
lean_dec(v_a_3650_);
lean_dec(v_a_3639_);
lean_dec_ref(v_e_3605_);
return v___x_3655_;
}
}
}
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3794_; 
lean_dec_ref(v_e_3605_);
v_a_3787_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3789_ = v___x_3638_;
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v___x_3638_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3792_; 
if (v_isShared_3790_ == 0)
{
v___x_3792_ = v___x_3789_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_a_3787_);
v___x_3792_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
return v___x_3792_;
}
}
}
}
else
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
lean_dec_ref(v_e_3605_);
v_a_3795_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___x_3637_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3637_);
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
lean_dec(v_a_3617_);
lean_dec_ref(v_e_3605_);
return v___x_3634_;
}
}
else
{
lean_dec(v_a_3629_);
lean_dec(v_a_3617_);
lean_dec_ref(v_e_3605_);
return v___x_3634_;
}
}
}
}
}
else
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3812_; 
lean_dec_ref(v_e_3605_);
v_a_3805_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3812_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3812_ == 0)
{
v___x_3807_ = v___x_3616_;
v_isShared_3808_ = v_isSharedCheck_3812_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3616_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore___boxed(lean_object* v_e_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore(v_e_3918_, v_a_3919_, v_a_3920_, v_a_3921_, v_a_3922_);
lean_dec(v_a_3922_);
lean_dec_ref(v_a_3921_);
lean_dec(v_a_3920_);
lean_dec_ref(v_a_3919_);
return v_res_3924_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1(void){
_start:
{
uint8_t v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; 
v___x_3926_ = 0;
v___x_3927_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1));
v___x_3928_ = l_Lean_MessageData_ofConstName(v___x_3927_, v___x_3926_);
return v___x_3928_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2(void){
_start:
{
lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; 
v___x_3929_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1);
v___x_3930_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
lean_ctor_set(v___x_3931_, 1, v___x_3929_);
return v___x_3931_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3(void){
_start:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3932_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3933_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2);
v___x_3934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
lean_ctor_set(v___x_3934_, 1, v___x_3932_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr(lean_object* v_e_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_){
_start:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3941_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0));
v___x_3942_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3);
v___x_3943_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3941_, v_e_3935_, v___x_3942_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_);
return v___x_3943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___boxed(lean_object* v_e_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr(v_e_3944_, v_a_3945_, v_a_3946_, v_a_3947_, v_a_3948_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
lean_dec(v_a_3946_);
lean_dec_ref(v_a_3945_);
return v_res_3950_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1(void){
_start:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3952_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3);
v___x_3953_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0));
v___x_3954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
lean_ctor_set(v___x_3954_, 1, v___x_3952_);
return v___x_3954_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool(void){
_start:
{
lean_object* v___x_3955_; 
v___x_3955_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1);
return v___x_3955_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1(void){
_start:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3957_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3);
v___x_3958_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0));
v___x_3959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
lean_ctor_set(v___x_3959_, 1, v___x_3957_);
return v___x_3959_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat(void){
_start:
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1);
return v___x_3960_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1(void){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3962_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3);
v___x_3963_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0));
v___x_3964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
lean_ctor_set(v___x_3964_, 1, v___x_3962_);
return v___x_3964_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt(void){
_start:
{
lean_object* v___x_3965_; 
v___x_3965_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1);
return v___x_3965_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1(void){
_start:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3967_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3);
v___x_3968_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0));
v___x_3969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
lean_ctor_set(v___x_3969_, 1, v___x_3967_);
return v___x_3969_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instString(void){
_start:
{
lean_object* v___x_3970_; 
v___x_3970_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1);
return v___x_3970_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1(void){
_start:
{
lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3972_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3);
v___x_3973_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0));
v___x_3974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
lean_ctor_set(v___x_3974_, 1, v___x_3972_);
return v___x_3974_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instName(void){
_start:
{
lean_object* v___x_3975_; 
v___x_3975_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(lean_object* v_inst_3976_){
_start:
{
lean_object* v_evalExpr_3977_; lean_object* v_expectedType_x3f_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3999_; 
v_evalExpr_3977_ = lean_ctor_get(v_inst_3976_, 0);
v_expectedType_x3f_3978_ = lean_ctor_get(v_inst_3976_, 1);
v_isSharedCheck_3999_ = !lean_is_exclusive(v_inst_3976_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3980_ = v_inst_3976_;
v_isShared_3981_ = v_isSharedCheck_3999_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_expectedType_x3f_3978_);
lean_inc(v_evalExpr_3977_);
lean_dec(v_inst_3976_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3999_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3982_; 
v___x_3982_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___boxed), 8, 2);
lean_closure_set(v___x_3982_, 0, lean_box(0));
lean_closure_set(v___x_3982_, 1, v_evalExpr_3977_);
if (lean_obj_tag(v_expectedType_x3f_3978_) == 0)
{
lean_object* v___x_3984_; 
if (v_isShared_3981_ == 0)
{
lean_ctor_set(v___x_3980_, 0, v___x_3982_);
v___x_3984_ = v___x_3980_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v___x_3982_);
lean_ctor_set(v_reuseFailAlloc_3985_, 1, v_expectedType_x3f_3978_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
else
{
lean_object* v_val_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3998_; 
v_val_3986_ = lean_ctor_get(v_expectedType_x3f_3978_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_expectedType_x3f_3978_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3988_ = v_expectedType_x3f_3978_;
v_isShared_3989_ = v_isSharedCheck_3998_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_val_3986_);
lean_dec(v_expectedType_x3f_3978_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3998_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3993_; 
v___x_3990_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2);
v___x_3991_ = l_Lean_Expr_app___override(v___x_3990_, v_val_3986_);
if (v_isShared_3989_ == 0)
{
lean_ctor_set(v___x_3988_, 0, v___x_3991_);
v___x_3993_ = v___x_3988_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3991_);
v___x_3993_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
lean_object* v___x_3995_; 
if (v_isShared_3981_ == 0)
{
lean_ctor_set(v___x_3980_, 1, v___x_3993_);
lean_ctor_set(v___x_3980_, 0, v___x_3982_);
v___x_3995_ = v___x_3980_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v___x_3982_);
lean_ctor_set(v_reuseFailAlloc_3996_, 1, v___x_3993_);
v___x_3995_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
return v___x_3995_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption(lean_object* v_00_u03b1_4000_, lean_object* v_inst_4001_){
_start:
{
lean_object* v___x_4002_; 
v___x_4002_ = l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(v_inst_4001_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0(lean_object* v_evalExpr_4003_, lean_object* v_e_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_){
_start:
{
uint8_t v___x_4010_; lean_object* v___x_4011_; 
v___x_4010_ = 0;
v___x_4011_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_evalExpr_4003_, v_e_4004_, v___x_4010_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_);
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0___boxed(lean_object* v_evalExpr_4012_, lean_object* v_e_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0(v_evalExpr_4012_, v_e_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_);
lean_dec(v___y_4017_);
lean_dec_ref(v___y_4016_);
lean_dec(v___y_4015_);
lean_dec_ref(v___y_4014_);
return v_res_4019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg(lean_object* v_inst_4020_){
_start:
{
lean_object* v_evalExpr_4021_; lean_object* v_expectedType_x3f_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4043_; 
v_evalExpr_4021_ = lean_ctor_get(v_inst_4020_, 0);
v_expectedType_x3f_4022_ = lean_ctor_get(v_inst_4020_, 1);
v_isSharedCheck_4043_ = !lean_is_exclusive(v_inst_4020_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4024_ = v_inst_4020_;
v_isShared_4025_ = v_isSharedCheck_4043_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_expectedType_x3f_4022_);
lean_inc(v_evalExpr_4021_);
lean_dec(v_inst_4020_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4043_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___f_4026_; 
v___f_4026_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4026_, 0, v_evalExpr_4021_);
if (lean_obj_tag(v_expectedType_x3f_4022_) == 0)
{
lean_object* v___x_4028_; 
if (v_isShared_4025_ == 0)
{
lean_ctor_set(v___x_4024_, 0, v___f_4026_);
v___x_4028_ = v___x_4024_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v___f_4026_);
lean_ctor_set(v_reuseFailAlloc_4029_, 1, v_expectedType_x3f_4022_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
else
{
lean_object* v_val_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4042_; 
v_val_4030_ = lean_ctor_get(v_expectedType_x3f_4022_, 0);
v_isSharedCheck_4042_ = !lean_is_exclusive(v_expectedType_x3f_4022_);
if (v_isSharedCheck_4042_ == 0)
{
v___x_4032_ = v_expectedType_x3f_4022_;
v_isShared_4033_ = v_isSharedCheck_4042_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_val_4030_);
lean_dec(v_expectedType_x3f_4022_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4042_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4037_; 
v___x_4034_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1);
v___x_4035_ = l_Lean_Expr_app___override(v___x_4034_, v_val_4030_);
if (v_isShared_4033_ == 0)
{
lean_ctor_set(v___x_4032_, 0, v___x_4035_);
v___x_4037_ = v___x_4032_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v___x_4035_);
v___x_4037_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
lean_object* v___x_4039_; 
if (v_isShared_4025_ == 0)
{
lean_ctor_set(v___x_4024_, 1, v___x_4037_);
lean_ctor_set(v___x_4024_, 0, v___f_4026_);
v___x_4039_ = v___x_4024_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v___f_4026_);
lean_ctor_set(v_reuseFailAlloc_4040_, 1, v___x_4037_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList(lean_object* v_00_u03b1_4044_, lean_object* v_inst_4045_){
_start:
{
lean_object* v___x_4046_; 
v___x_4046_ = l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg(v_inst_4045_);
return v___x_4046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray___redArg(lean_object* v_inst_4047_){
_start:
{
lean_object* v_evalExpr_4048_; lean_object* v_expectedType_x3f_4049_; lean_object* v___x_4051_; uint8_t v_isShared_4052_; uint8_t v_isSharedCheck_4070_; 
v_evalExpr_4048_ = lean_ctor_get(v_inst_4047_, 0);
v_expectedType_x3f_4049_ = lean_ctor_get(v_inst_4047_, 1);
v_isSharedCheck_4070_ = !lean_is_exclusive(v_inst_4047_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4051_ = v_inst_4047_;
v_isShared_4052_ = v_isSharedCheck_4070_;
goto v_resetjp_4050_;
}
else
{
lean_inc(v_expectedType_x3f_4049_);
lean_inc(v_evalExpr_4048_);
lean_dec(v_inst_4047_);
v___x_4051_ = lean_box(0);
v_isShared_4052_ = v_isSharedCheck_4070_;
goto v_resetjp_4050_;
}
v_resetjp_4050_:
{
lean_object* v___x_4053_; 
v___x_4053_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___boxed), 8, 2);
lean_closure_set(v___x_4053_, 0, lean_box(0));
lean_closure_set(v___x_4053_, 1, v_evalExpr_4048_);
if (lean_obj_tag(v_expectedType_x3f_4049_) == 0)
{
lean_object* v___x_4055_; 
if (v_isShared_4052_ == 0)
{
lean_ctor_set(v___x_4051_, 0, v___x_4053_);
v___x_4055_ = v___x_4051_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v___x_4053_);
lean_ctor_set(v_reuseFailAlloc_4056_, 1, v_expectedType_x3f_4049_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
else
{
lean_object* v_val_4057_; lean_object* v___x_4059_; uint8_t v_isShared_4060_; uint8_t v_isSharedCheck_4069_; 
v_val_4057_ = lean_ctor_get(v_expectedType_x3f_4049_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v_expectedType_x3f_4049_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4059_ = v_expectedType_x3f_4049_;
v_isShared_4060_ = v_isSharedCheck_4069_;
goto v_resetjp_4058_;
}
else
{
lean_inc(v_val_4057_);
lean_dec(v_expectedType_x3f_4049_);
v___x_4059_ = lean_box(0);
v_isShared_4060_ = v_isSharedCheck_4069_;
goto v_resetjp_4058_;
}
v_resetjp_4058_:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4064_; 
v___x_4061_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2);
v___x_4062_ = l_Lean_Expr_app___override(v___x_4061_, v_val_4057_);
if (v_isShared_4060_ == 0)
{
lean_ctor_set(v___x_4059_, 0, v___x_4062_);
v___x_4064_ = v___x_4059_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v___x_4062_);
v___x_4064_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
lean_object* v___x_4066_; 
if (v_isShared_4052_ == 0)
{
lean_ctor_set(v___x_4051_, 1, v___x_4064_);
lean_ctor_set(v___x_4051_, 0, v___x_4053_);
v___x_4066_ = v___x_4051_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v___x_4053_);
lean_ctor_set(v_reuseFailAlloc_4067_, 1, v___x_4064_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray(lean_object* v_00_u03b1_4071_, lean_object* v_inst_4072_){
_start:
{
lean_object* v___x_4073_; 
v___x_4073_ = l_Lean_Elab_ConfigEval_EvalExpr_instArray___redArg(v_inst_4072_);
return v___x_4073_;
}
}
lean_object* runtime_initialize_Lean_Elab_ConfigEval_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ConfigEval_Instances(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_ConfigEval_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_ConfigEval_EvalTerm_instBool = _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instBool);
l_Lean_Elab_ConfigEval_EvalTerm_instNat = _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instNat);
l_Lean_Elab_ConfigEval_EvalTerm_instInt = _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instInt);
l_Lean_Elab_ConfigEval_EvalTerm_instString = _init_l_Lean_Elab_ConfigEval_EvalTerm_instString();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instString);
l_Lean_Elab_ConfigEval_EvalTerm_instName = _init_l_Lean_Elab_ConfigEval_EvalTerm_instName();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instName);
l_Lean_Elab_ConfigEval_EvalTerm_instDataValue = _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue);
l_Lean_Elab_ConfigEval_EvalExpr_instBool = _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instBool);
l_Lean_Elab_ConfigEval_EvalExpr_instNat = _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instNat);
l_Lean_Elab_ConfigEval_EvalExpr_instInt = _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instInt);
l_Lean_Elab_ConfigEval_EvalExpr_instString = _init_l_Lean_Elab_ConfigEval_EvalExpr_instString();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instString);
l_Lean_Elab_ConfigEval_EvalExpr_instName = _init_l_Lean_Elab_ConfigEval_EvalExpr_instName();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instName);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ConfigEval_Instances(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_ConfigEval_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ConfigEval_Instances(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_ConfigEval_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ConfigEval_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ConfigEval_Instances(builtin);
}
#ifdef __cplusplus
}
#endif
