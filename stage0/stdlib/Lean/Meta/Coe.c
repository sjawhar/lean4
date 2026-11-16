// Lean compiler output
// Module: Lean.Meta.Coe
// Imports: public import Lean.Meta.AppBuilder import Lean.ExtraModUses import Lean.Meta.WHNF
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
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
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArgD(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMonad_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "coe_decl"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 217, 140, 88, 250, 134, 204, 64)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "auxiliary definition used to implement coercion (unfolded during elaboration)"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coeDeclAttr"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 20, 115, 115, 128, 118, 26, 153)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coeDeclAttr;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 307, .m_capacity = 307, .m_length = 306, .m_data = "Tags declarations to be unfolded during coercion elaboration.\n\nThis is mostly used to hide coercion implementation details and show the coerced result instead of\nan application of auxiliary definitions (e.g. `CoeT.coe`, `Coe.coe`). This attribute only works on\nreducible functions and instance projections."};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(215, 70, 184, 182, 52, 50, 221, 222)}};
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 161, 101, 251, 53, 131, 233)}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31_spec__33___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__29___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_expandCoe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__0_value;
static const lean_closure_object l_Lean_Meta_expandCoe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31_spec__33(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "autoLift"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(168, 70, 99, 132, 14, 255, 243, 87)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Insert monadic lifts (i.e., `liftM` and coercions) when needed."};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(197, 184, 93, 140, 214, 99, 153, 189)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_autoLift;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CoeT"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 80, 89, 153, 124, 3, 255, 77)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Could not coerce"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "\ncoerced expression has wrong type:"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "CoeFun"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 94, 101, 78, 118, 25, 69, 111)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to coerce"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "\nto a function: After applying `CoeFun.coe`, result is still not a function"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "This is often due to incorrect `CoeFun` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CoeSort"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(249, 65, 70, 162, 243, 253, 64, 246)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "\nto a type: After applying `CoeSort.coe`, result is still not a type"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "This is often due to incorrect `CoeSort` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MonadLiftT"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 247, 249, 204, 219, 215, 23, 105)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "liftM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 61, 106, 101, 51, 7, 16, 91)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__3_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceMonadLift_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "liftCoeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__8 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(59, 34, 101, 209, 97, 81, 138, 47)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__9 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "coeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__10 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(21, 111, 129, 2, 187, 243, 141, 114)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__11 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_x_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(v_x_7_, v___y_8_, v___y_9_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v_x_7_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; lean_object* v___x_32_; 
v___f_25_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_26_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_27_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_28_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_29_ = 0;
v___x_30_ = lean_box(2);
v___x_31_ = 0;
v___x_32_ = l_Lean_registerTagAttribute(v___x_26_, v___x_27_, v___f_25_, v___x_28_, v___x_29_, v___x_30_, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1(){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_38_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0));
v___x_39_ = l_Lean_addBuiltinDocString(v___x_37_, v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object* v_a_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3(){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6));
v___x_70_ = l_Lean_addBuiltinDeclarationRanges(v___x_68_, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
return v_res_72_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object* v_env_73_, lean_object* v_declName_74_){
_start:
{
lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_75_ = l_Lean_Meta_coeDeclAttr;
v___x_76_ = l_Lean_TagAttribute_hasTag(v___x_75_, v_env_73_, v_declName_74_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object* v_env_77_, lean_object* v_declName_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Lean_Meta_isCoeDecl(v_env_77_, v_declName_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object* v_declName_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; lean_object* v_env_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_st_ref_get(v___y_82_);
v_env_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc_ref(v_env_85_);
lean_dec(v___x_84_);
v___x_86_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_85_, v_declName_81_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object* v_declName_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_88_, v___y_89_);
lean_dec(v___y_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object* v_declName_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_92_, v___y_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object* v_declName_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(v_declName_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
return v_res_105_;
}
}
static lean_object* _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_box(0);
v___x_107_ = l_Lean_Expr_sort___override(v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object* v_e_108_, lean_object* v_nm_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
lean_inc(v_nm_109_);
v___x_115_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_nm_109_, v_a_113_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_138_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_138_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_138_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_138_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
if (lean_obj_tag(v_a_116_) == 1)
{
lean_object* v_val_120_; lean_object* v_numParams_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v_val_120_ = lean_ctor_get(v_a_116_, 0);
lean_inc(v_val_120_);
lean_dec_ref_known(v_a_116_, 1);
v_numParams_121_ = lean_ctor_get(v_val_120_, 1);
lean_inc(v_numParams_121_);
lean_dec(v_val_120_);
v___x_122_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v___x_123_ = l_Lean_Expr_getAppNumArgs(v_e_108_);
v___x_124_ = lean_nat_sub(v___x_123_, v_numParams_121_);
lean_dec(v_numParams_121_);
lean_dec(v___x_123_);
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_sub(v___x_124_, v___x_125_);
lean_dec(v___x_124_);
v___x_127_ = l_Lean_Expr_getRevArgD(v_e_108_, v___x_126_, v___x_122_);
lean_dec_ref(v_e_108_);
v___x_128_ = l_Lean_Expr_getAppFn(v___x_127_);
v___x_129_ = l_Lean_Expr_isConst(v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_131_; 
lean_dec_ref(v___x_128_);
lean_dec_ref(v___x_127_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v_nm_109_);
v___x_131_ = v___x_118_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_nm_109_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
else
{
lean_object* v___x_133_; 
lean_del_object(v___x_118_);
lean_dec(v_nm_109_);
v___x_133_ = l_Lean_Expr_constName_x21(v___x_128_);
lean_dec_ref(v___x_128_);
v_e_108_ = v___x_127_;
v_nm_109_ = v___x_133_;
goto _start;
}
}
else
{
lean_object* v___x_136_; 
lean_dec(v_a_116_);
lean_dec_ref(v_e_108_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v_nm_109_);
v___x_136_ = v___x_118_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_nm_109_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_nm_109_);
lean_dec_ref(v_e_108_);
v_a_139_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_115_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_115_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object* v_e_147_, lean_object* v_nm_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_147_, v_nm_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object* v_e_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v_e_155_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___y_156_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object* v_e_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Meta_expandCoe___lam__0(v_e_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_a_173_, lean_object* v_x_174_){
_start:
{
if (lean_obj_tag(v_x_174_) == 0)
{
uint8_t v___x_175_; 
v___x_175_ = 0;
return v___x_175_;
}
else
{
lean_object* v_key_176_; lean_object* v_tail_177_; uint8_t v___x_178_; 
v_key_176_ = lean_ctor_get(v_x_174_, 0);
v_tail_177_ = lean_ctor_get(v_x_174_, 2);
v___x_178_ = l_Lean_instBEqExtraModUse_beq(v_key_176_, v_a_173_);
if (v___x_178_ == 0)
{
v_x_174_ = v_tail_177_;
goto _start;
}
else
{
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_180_, lean_object* v_x_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(v_a_180_, v_x_181_);
lean_dec(v_x_181_);
lean_dec_ref(v_a_180_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11_spec__28___redArg(lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
if (lean_obj_tag(v_x_185_) == 0)
{
return v_x_184_;
}
else
{
lean_object* v_key_186_; lean_object* v_value_187_; lean_object* v_tail_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_211_; 
v_key_186_ = lean_ctor_get(v_x_185_, 0);
v_value_187_ = lean_ctor_get(v_x_185_, 1);
v_tail_188_ = lean_ctor_get(v_x_185_, 2);
v_isSharedCheck_211_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_211_ == 0)
{
v___x_190_ = v_x_185_;
v_isShared_191_ = v_isSharedCheck_211_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_tail_188_);
lean_inc(v_value_187_);
lean_inc(v_key_186_);
lean_dec(v_x_185_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_211_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; uint64_t v___x_193_; uint64_t v___x_194_; uint64_t v___x_195_; uint64_t v_fold_196_; uint64_t v___x_197_; uint64_t v___x_198_; uint64_t v___x_199_; size_t v___x_200_; size_t v___x_201_; size_t v___x_202_; size_t v___x_203_; size_t v___x_204_; lean_object* v___x_205_; lean_object* v___x_207_; 
v___x_192_ = lean_array_get_size(v_x_184_);
v___x_193_ = l_Lean_instHashableExtraModUse_hash(v_key_186_);
v___x_194_ = 32ULL;
v___x_195_ = lean_uint64_shift_right(v___x_193_, v___x_194_);
v_fold_196_ = lean_uint64_xor(v___x_193_, v___x_195_);
v___x_197_ = 16ULL;
v___x_198_ = lean_uint64_shift_right(v_fold_196_, v___x_197_);
v___x_199_ = lean_uint64_xor(v_fold_196_, v___x_198_);
v___x_200_ = lean_uint64_to_usize(v___x_199_);
v___x_201_ = lean_usize_of_nat(v___x_192_);
v___x_202_ = ((size_t)1ULL);
v___x_203_ = lean_usize_sub(v___x_201_, v___x_202_);
v___x_204_ = lean_usize_land(v___x_200_, v___x_203_);
v___x_205_ = lean_array_uget_borrowed(v_x_184_, v___x_204_);
lean_inc(v___x_205_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 2, v___x_205_);
v___x_207_ = v___x_190_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_key_186_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v_value_187_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v___x_205_);
v___x_207_ = v_reuseFailAlloc_210_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; 
v___x_208_ = lean_array_uset(v_x_184_, v___x_204_, v___x_207_);
v_x_184_ = v___x_208_;
v_x_185_ = v_tail_188_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(lean_object* v_i_212_, lean_object* v_source_213_, lean_object* v_target_214_){
_start:
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_array_get_size(v_source_213_);
v___x_216_ = lean_nat_dec_lt(v_i_212_, v___x_215_);
if (v___x_216_ == 0)
{
lean_dec_ref(v_source_213_);
lean_dec(v_i_212_);
return v_target_214_;
}
else
{
lean_object* v_es_217_; lean_object* v___x_218_; lean_object* v_source_219_; lean_object* v_target_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_es_217_ = lean_array_fget(v_source_213_, v_i_212_);
v___x_218_ = lean_box(0);
v_source_219_ = lean_array_fset(v_source_213_, v_i_212_, v___x_218_);
v_target_220_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11_spec__28___redArg(v_target_214_, v_es_217_);
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_add(v_i_212_, v___x_221_);
lean_dec(v_i_212_);
v_i_212_ = v___x_222_;
v_source_213_ = v_source_219_;
v_target_214_ = v_target_220_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_data_224_){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_nbuckets_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_225_ = lean_array_get_size(v_data_224_);
v___x_226_ = lean_unsigned_to_nat(2u);
v_nbuckets_227_ = lean_nat_mul(v___x_225_, v___x_226_);
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = lean_box(0);
v___x_230_ = lean_mk_array(v_nbuckets_227_, v___x_229_);
v___x_231_ = lean_array_propagate_mark(v_data_224_, v___x_230_);
v___x_232_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(v___x_228_, v_data_224_, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(lean_object* v_m_233_, lean_object* v_a_234_, lean_object* v_b_235_){
_start:
{
lean_object* v_size_236_; lean_object* v_buckets_237_; lean_object* v___x_238_; uint64_t v___x_239_; uint64_t v___x_240_; uint64_t v___x_241_; uint64_t v_fold_242_; uint64_t v___x_243_; uint64_t v___x_244_; uint64_t v___x_245_; size_t v___x_246_; size_t v___x_247_; size_t v___x_248_; size_t v___x_249_; size_t v___x_250_; lean_object* v_bkt_251_; uint8_t v___x_252_; 
v_size_236_ = lean_ctor_get(v_m_233_, 0);
v_buckets_237_ = lean_ctor_get(v_m_233_, 1);
v___x_238_ = lean_array_get_size(v_buckets_237_);
v___x_239_ = l_Lean_instHashableExtraModUse_hash(v_a_234_);
v___x_240_ = 32ULL;
v___x_241_ = lean_uint64_shift_right(v___x_239_, v___x_240_);
v_fold_242_ = lean_uint64_xor(v___x_239_, v___x_241_);
v___x_243_ = 16ULL;
v___x_244_ = lean_uint64_shift_right(v_fold_242_, v___x_243_);
v___x_245_ = lean_uint64_xor(v_fold_242_, v___x_244_);
v___x_246_ = lean_uint64_to_usize(v___x_245_);
v___x_247_ = lean_usize_of_nat(v___x_238_);
v___x_248_ = ((size_t)1ULL);
v___x_249_ = lean_usize_sub(v___x_247_, v___x_248_);
v___x_250_ = lean_usize_land(v___x_246_, v___x_249_);
v_bkt_251_ = lean_array_uget_borrowed(v_buckets_237_, v___x_250_);
v___x_252_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(v_a_234_, v_bkt_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_273_; 
lean_inc_ref(v_buckets_237_);
lean_inc(v_size_236_);
v_isSharedCheck_273_ = !lean_is_exclusive(v_m_233_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; lean_object* v_unused_275_; 
v_unused_274_ = lean_ctor_get(v_m_233_, 1);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_m_233_, 0);
lean_dec(v_unused_275_);
v___x_254_ = v_m_233_;
v_isShared_255_ = v_isSharedCheck_273_;
goto v_resetjp_253_;
}
else
{
lean_dec(v_m_233_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_273_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v_size_x27_257_; lean_object* v___x_258_; lean_object* v_buckets_x27_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_256_ = lean_unsigned_to_nat(1u);
v_size_x27_257_ = lean_nat_add(v_size_236_, v___x_256_);
lean_dec(v_size_236_);
lean_inc(v_bkt_251_);
v___x_258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_258_, 0, v_a_234_);
lean_ctor_set(v___x_258_, 1, v_b_235_);
lean_ctor_set(v___x_258_, 2, v_bkt_251_);
v_buckets_x27_259_ = lean_array_uset(v_buckets_237_, v___x_250_, v___x_258_);
v___x_260_ = lean_unsigned_to_nat(4u);
v___x_261_ = lean_nat_mul(v_size_x27_257_, v___x_260_);
v___x_262_ = lean_unsigned_to_nat(3u);
v___x_263_ = lean_nat_div(v___x_261_, v___x_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_array_get_size(v_buckets_x27_259_);
v___x_265_ = lean_nat_dec_le(v___x_263_, v___x_264_);
lean_dec(v___x_263_);
if (v___x_265_ == 0)
{
lean_object* v_val_266_; lean_object* v___x_268_; 
v_val_266_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6___redArg(v_buckets_x27_259_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v_val_266_);
lean_ctor_set(v___x_254_, 0, v_size_x27_257_);
v___x_268_ = v___x_254_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_size_x27_257_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_val_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
else
{
lean_object* v___x_271_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v_buckets_x27_259_);
lean_ctor_set(v___x_254_, 0, v_size_x27_257_);
v___x_271_ = v___x_254_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_size_x27_257_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_buckets_x27_259_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
else
{
lean_dec(v_b_235_);
lean_dec_ref(v_a_234_);
return v_m_233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0(lean_object* v___x_276_, lean_object* v_entry_277_, lean_object* v_s_278_){
_start:
{
lean_object* v_addEntryFn_279_; lean_object* v_importedEntries_280_; lean_object* v_state_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_289_; 
v_addEntryFn_279_ = lean_ctor_get(v___x_276_, 3);
lean_inc(v_addEntryFn_279_);
lean_dec_ref(v___x_276_);
v_importedEntries_280_ = lean_ctor_get(v_s_278_, 0);
v_state_281_ = lean_ctor_get(v_s_278_, 1);
v_isSharedCheck_289_ = !lean_is_exclusive(v_s_278_);
if (v_isSharedCheck_289_ == 0)
{
v___x_283_ = v_s_278_;
v_isShared_284_ = v_isSharedCheck_289_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_state_281_);
lean_inc(v_importedEntries_280_);
lean_dec(v_s_278_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_289_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v_state_285_; lean_object* v___x_287_; 
v_state_285_ = lean_apply_2(v_addEntryFn_279_, v_state_281_, v_entry_277_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v_state_285_);
v___x_287_ = v___x_283_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_importedEntries_280_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_state_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_keys_290_, lean_object* v_i_291_, lean_object* v_k_292_){
_start:
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = lean_array_get_size(v_keys_290_);
v___x_294_ = lean_nat_dec_lt(v_i_291_, v___x_293_);
if (v___x_294_ == 0)
{
lean_dec(v_i_291_);
return v___x_294_;
}
else
{
lean_object* v_k_x27_295_; uint8_t v___x_296_; 
v_k_x27_295_ = lean_array_fget_borrowed(v_keys_290_, v_i_291_);
v___x_296_ = l_Lean_instBEqExtraModUse_beq(v_k_292_, v_k_x27_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_unsigned_to_nat(1u);
v___x_298_ = lean_nat_add(v_i_291_, v___x_297_);
lean_dec(v_i_291_);
v_i_291_ = v___x_298_;
goto _start;
}
else
{
lean_dec(v_i_291_);
return v___x_294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_keys_300_, lean_object* v_i_301_, lean_object* v_k_302_){
_start:
{
uint8_t v_res_303_; lean_object* v_r_304_; 
v_res_303_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_300_, v_i_301_, v_k_302_);
lean_dec_ref(v_k_302_);
lean_dec_ref(v_keys_300_);
v_r_304_ = lean_box(v_res_303_);
return v_r_304_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_305_, size_t v_x_306_, lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
lean_object* v_es_308_; lean_object* v___x_309_; size_t v___x_310_; size_t v___x_311_; lean_object* v_j_312_; lean_object* v___x_313_; 
v_es_308_ = lean_ctor_get(v_x_305_, 0);
v___x_309_ = lean_box(2);
v___x_310_ = ((size_t)31ULL);
v___x_311_ = lean_usize_land(v_x_306_, v___x_310_);
v_j_312_ = lean_usize_to_nat(v___x_311_);
v___x_313_ = lean_array_get_borrowed(v___x_309_, v_es_308_, v_j_312_);
lean_dec(v_j_312_);
switch(lean_obj_tag(v___x_313_))
{
case 0:
{
lean_object* v_key_314_; uint8_t v___x_315_; 
v_key_314_ = lean_ctor_get(v___x_313_, 0);
v___x_315_ = l_Lean_instBEqExtraModUse_beq(v_x_307_, v_key_314_);
return v___x_315_;
}
case 1:
{
lean_object* v_node_316_; size_t v___x_317_; size_t v___x_318_; 
v_node_316_ = lean_ctor_get(v___x_313_, 0);
v___x_317_ = ((size_t)5ULL);
v___x_318_ = lean_usize_shift_right(v_x_306_, v___x_317_);
v_x_305_ = v_node_316_;
v_x_306_ = v___x_318_;
goto _start;
}
default: 
{
uint8_t v___x_320_; 
v___x_320_ = 0;
return v___x_320_;
}
}
}
else
{
lean_object* v_ks_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v_ks_321_ = lean_ctor_get(v_x_305_, 0);
v___x_322_ = lean_unsigned_to_nat(0u);
v___x_323_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_ks_321_, v___x_322_, v_x_307_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_324_, lean_object* v_x_325_, lean_object* v_x_326_){
_start:
{
size_t v_x_37933__boxed_327_; uint8_t v_res_328_; lean_object* v_r_329_; 
v_x_37933__boxed_327_ = lean_unbox_usize(v_x_325_);
lean_dec(v_x_325_);
v_res_328_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_324_, v_x_37933__boxed_327_, v_x_326_);
lean_dec_ref(v_x_326_);
lean_dec_ref(v_x_324_);
v_r_329_ = lean_box(v_res_328_);
return v_r_329_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
uint64_t v___x_332_; size_t v___x_333_; uint8_t v___x_334_; 
v___x_332_ = l_Lean_instHashableExtraModUse_hash(v_x_331_);
v___x_333_ = lean_uint64_to_usize(v___x_332_);
v___x_334_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_330_, v___x_333_, v_x_331_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_335_, lean_object* v_x_336_){
_start:
{
uint8_t v_res_337_; lean_object* v_r_338_; 
v_res_337_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_335_, v_x_336_);
lean_dec_ref(v_x_336_);
lean_dec_ref(v_x_335_);
v_r_338_ = lean_box(v_res_337_);
return v_r_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__8(lean_object* v_msgData_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; lean_object* v_env_346_; uint8_t v___x_347_; lean_object* v_env_348_; lean_object* v___x_349_; lean_object* v_toCold_350_; lean_object* v_mctx_351_; lean_object* v_lctx_352_; lean_object* v_options_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_345_ = lean_st_ref_get(v___y_343_);
v_env_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc_ref(v_env_346_);
lean_dec(v___x_345_);
v___x_347_ = 0;
v_env_348_ = l_Lean_Environment_setRecordingDeps(v_env_346_, v___x_347_);
v___x_349_ = lean_st_ref_get(v___y_341_);
v_toCold_350_ = lean_ctor_get(v___y_342_, 0);
v_mctx_351_ = lean_ctor_get(v___x_349_, 0);
lean_inc_ref(v_mctx_351_);
lean_dec(v___x_349_);
v_lctx_352_ = lean_ctor_get(v___y_340_, 2);
v_options_353_ = lean_ctor_get(v_toCold_350_, 2);
lean_inc_ref(v_options_353_);
lean_inc_ref(v_lctx_352_);
v___x_354_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_354_, 0, v_env_348_);
lean_ctor_set(v___x_354_, 1, v_mctx_351_);
lean_ctor_set(v___x_354_, 2, v_lctx_352_);
lean_ctor_set(v___x_354_, 3, v_options_353_);
v___x_355_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v_msgData_339_);
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__8___boxed(lean_object* v_msgData_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__8(v_msgData_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
return v_res_363_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_364_; double v___x_365_; 
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = lean_float_of_nat(v___x_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(lean_object* v_cls_369_, lean_object* v_msg_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_ref_377_; lean_object* v___x_378_; lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_425_; 
v_ref_377_ = lean_ctor_get(v___y_374_, 2);
v___x_378_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__8(v_msg_370_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
v_a_379_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_425_ == 0)
{
v___x_381_ = v___x_378_;
v_isShared_382_ = v_isSharedCheck_425_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_378_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_425_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; lean_object* v_traceState_384_; lean_object* v_env_385_; lean_object* v_nextMacroScope_386_; lean_object* v_ngen_387_; lean_object* v_auxDeclNGen_388_; lean_object* v_cache_389_; lean_object* v_recordedDeps_390_; lean_object* v_messages_391_; lean_object* v_infoState_392_; lean_object* v_snapshotTasks_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_424_; 
v___x_383_ = lean_st_ref_take(v___y_375_);
v_traceState_384_ = lean_ctor_get(v___x_383_, 4);
v_env_385_ = lean_ctor_get(v___x_383_, 0);
v_nextMacroScope_386_ = lean_ctor_get(v___x_383_, 1);
v_ngen_387_ = lean_ctor_get(v___x_383_, 2);
v_auxDeclNGen_388_ = lean_ctor_get(v___x_383_, 3);
v_cache_389_ = lean_ctor_get(v___x_383_, 5);
v_recordedDeps_390_ = lean_ctor_get(v___x_383_, 6);
v_messages_391_ = lean_ctor_get(v___x_383_, 7);
v_infoState_392_ = lean_ctor_get(v___x_383_, 8);
v_snapshotTasks_393_ = lean_ctor_get(v___x_383_, 9);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_424_ == 0)
{
v___x_395_ = v___x_383_;
v_isShared_396_ = v_isSharedCheck_424_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_snapshotTasks_393_);
lean_inc(v_infoState_392_);
lean_inc(v_messages_391_);
lean_inc(v_recordedDeps_390_);
lean_inc(v_cache_389_);
lean_inc(v_traceState_384_);
lean_inc(v_auxDeclNGen_388_);
lean_inc(v_ngen_387_);
lean_inc(v_nextMacroScope_386_);
lean_inc(v_env_385_);
lean_dec(v___x_383_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_424_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
uint64_t v_tid_397_; lean_object* v_traces_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_423_; 
v_tid_397_ = lean_ctor_get_uint64(v_traceState_384_, sizeof(void*)*1);
v_traces_398_ = lean_ctor_get(v_traceState_384_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v_traceState_384_);
if (v_isSharedCheck_423_ == 0)
{
v___x_400_ = v_traceState_384_;
v_isShared_401_ = v_isSharedCheck_423_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_traces_398_);
lean_dec(v_traceState_384_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_423_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_403_; double v___x_404_; uint8_t v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_402_ = lean_box(0);
v___x_403_ = lean_box(0);
v___x_404_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0);
v___x_405_ = 0;
v___x_406_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1));
v___x_407_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_407_, 0, v_cls_369_);
lean_ctor_set(v___x_407_, 1, v___x_403_);
lean_ctor_set(v___x_407_, 2, v___x_406_);
lean_ctor_set_float(v___x_407_, sizeof(void*)*3, v___x_404_);
lean_ctor_set_float(v___x_407_, sizeof(void*)*3 + 8, v___x_404_);
lean_ctor_set_uint8(v___x_407_, sizeof(void*)*3 + 16, v___x_405_);
v___x_408_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2));
v___x_409_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v_a_379_);
lean_ctor_set(v___x_409_, 2, v___x_408_);
lean_inc(v_ref_377_);
v___x_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_410_, 0, v_ref_377_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
v___x_411_ = l_Lean_PersistentArray_push___redArg(v_traces_398_, v___x_410_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_411_);
v___x_413_ = v___x_400_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_411_);
lean_ctor_set_uint64(v_reuseFailAlloc_422_, sizeof(void*)*1, v_tid_397_);
v___x_413_ = v_reuseFailAlloc_422_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_415_; 
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 4, v___x_413_);
v___x_415_ = v___x_395_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_env_385_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_nextMacroScope_386_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v_ngen_387_);
lean_ctor_set(v_reuseFailAlloc_421_, 3, v_auxDeclNGen_388_);
lean_ctor_set(v_reuseFailAlloc_421_, 4, v___x_413_);
lean_ctor_set(v_reuseFailAlloc_421_, 5, v_cache_389_);
lean_ctor_set(v_reuseFailAlloc_421_, 6, v_recordedDeps_390_);
lean_ctor_set(v_reuseFailAlloc_421_, 7, v_messages_391_);
lean_ctor_set(v_reuseFailAlloc_421_, 8, v_infoState_392_);
lean_ctor_set(v_reuseFailAlloc_421_, 9, v_snapshotTasks_393_);
v___x_415_ = v_reuseFailAlloc_421_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_416_ = lean_st_ref_put(v___y_375_, v___x_415_);
v___x_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_402_);
lean_ctor_set(v___x_417_, 1, v___y_371_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_417_);
v___x_419_ = v___x_381_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___boxed(lean_object* v_cls_426_, lean_object* v_msg_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(v_cls_426_, v_msg_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_434_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_435_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
return v___x_437_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_441_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
lean_ctor_set(v___x_441_, 2, v___x_440_);
lean_ctor_set(v___x_441_, 3, v___x_440_);
lean_ctor_set(v___x_441_, 4, v___x_440_);
lean_ctor_set(v___x_441_, 5, v___x_440_);
return v___x_441_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_442_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7));
v___x_448_ = l_Lean_stringToMessageData(v___x_447_);
return v___x_448_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9));
v___x_451_ = l_Lean_stringToMessageData(v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1));
v___x_453_ = l_Lean_stringToMessageData(v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v_cls_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v_cls_457_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6));
v___x_458_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13));
v___x_459_ = l_Lean_Name_append(v___x_458_, v_cls_457_);
return v___x_459_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15));
v___x_462_ = l_Lean_stringToMessageData(v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17));
v___x_465_ = l_Lean_stringToMessageData(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object* v_mod_470_, uint8_t v_isMeta_471_, lean_object* v_hint_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; lean_object* v___y_485_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v_env_515_; uint8_t v_isExporting_516_; lean_object* v_entry_517_; lean_object* v___x_518_; lean_object* v_env_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_513_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4);
v___x_514_ = lean_st_ref_get(v___y_477_);
v_env_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc_ref(v_env_515_);
lean_dec(v___x_514_);
v_isExporting_516_ = lean_ctor_get_uint8(v_env_515_, sizeof(void*)*13);
lean_dec_ref(v_env_515_);
lean_inc(v_mod_470_);
v_entry_517_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_517_, 0, v_mod_470_);
lean_ctor_set_uint8(v_entry_517_, sizeof(void*)*1, v_isExporting_516_);
lean_ctor_set_uint8(v_entry_517_, sizeof(void*)*1 + 1, v_isMeta_471_);
v___x_518_ = lean_st_ref_get(v___y_477_);
v_env_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc_ref(v_env_519_);
lean_dec(v___x_518_);
v___x_520_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_521_ = lean_box(1);
v___x_522_ = lean_box(0);
v___x_523_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_513_, v___x_520_, v_env_519_, v___x_521_, v___x_522_);
v___x_524_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v___x_523_, v_entry_517_);
lean_dec(v___x_523_);
if (v___x_524_ == 0)
{
lean_object* v_toCold_525_; lean_object* v_options_526_; lean_object* v_inheritedTraceOptions_527_; uint8_t v_hasTrace_528_; lean_object* v___f_529_; uint8_t v___x_530_; lean_object* v___y_532_; lean_object* v___y_533_; lean_object* v___y_534_; lean_object* v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; 
v_toCold_525_ = lean_ctor_get(v___y_476_, 0);
v_options_526_ = lean_ctor_get(v_toCold_525_, 2);
v_inheritedTraceOptions_527_ = lean_ctor_get(v_toCold_525_, 11);
v_hasTrace_528_ = lean_ctor_get_uint8(v_options_526_, sizeof(void*)*1);
lean_inc_ref(v_entry_517_);
v___f_529_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_529_, 0, v___x_520_);
lean_closure_set(v___f_529_, 1, v_entry_517_);
v___x_530_ = 1;
if (v_hasTrace_528_ == 0)
{
lean_dec(v_hint_472_);
lean_dec(v_mod_470_);
v___y_562_ = v___y_473_;
v___y_563_ = v___y_475_;
v___y_564_ = v___y_477_;
goto v___jp_561_;
}
else
{
lean_object* v_cls_571_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___x_593_; uint8_t v___x_594_; 
v_cls_571_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6));
v___x_593_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14);
v___x_594_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_527_, v_options_526_, v___x_593_);
if (v___x_594_ == 0)
{
lean_dec(v_hint_472_);
lean_dec(v_mod_470_);
v___y_562_ = v___y_473_;
v___y_563_ = v___y_475_;
v___y_564_ = v___y_477_;
goto v___jp_561_;
}
else
{
lean_object* v___x_595_; lean_object* v___y_597_; 
v___x_595_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16);
if (v_isExporting_516_ == 0)
{
lean_object* v___x_604_; 
v___x_604_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21));
v___y_597_ = v___x_604_;
goto v___jp_596_;
}
else
{
lean_object* v___x_605_; 
v___x_605_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22));
v___y_597_ = v___x_605_;
goto v___jp_596_;
}
v___jp_596_:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
lean_inc_ref(v___y_597_);
v___x_598_ = l_Lean_stringToMessageData(v___y_597_);
v___x_599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_595_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18);
v___x_601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
if (v_isMeta_471_ == 0)
{
lean_object* v___x_602_; 
v___x_602_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19));
v___y_580_ = v___x_601_;
v___y_581_ = v___x_602_;
goto v___jp_579_;
}
else
{
lean_object* v___x_603_; 
v___x_603_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20));
v___y_580_ = v___x_601_;
v___y_581_ = v___x_603_;
goto v___jp_579_;
}
}
}
v___jp_572_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_575_, 0, v___y_573_);
lean_ctor_set(v___x_575_, 1, v___y_574_);
v___x_576_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(v_cls_571_, v___x_575_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v_snd_578_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_a_577_);
lean_dec_ref_known(v___x_576_, 1);
v_snd_578_ = lean_ctor_get(v_a_577_, 1);
lean_inc(v_snd_578_);
lean_dec(v_a_577_);
v___y_562_ = v_snd_578_;
v___y_563_ = v___y_475_;
v___y_564_ = v___y_477_;
goto v___jp_561_;
}
else
{
lean_dec_ref(v___f_529_);
lean_dec_ref_known(v_entry_517_, 1);
return v___x_576_;
}
}
v___jp_579_:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; uint8_t v___x_588_; 
lean_inc_ref(v___y_581_);
v___x_582_ = l_Lean_stringToMessageData(v___y_581_);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___y_580_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8);
v___x_585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = l_Lean_MessageData_ofName(v_mod_470_);
v___x_587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = l_Lean_Name_isAnonymous(v_hint_472_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_589_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10);
v___x_590_ = l_Lean_MessageData_ofName(v_hint_472_);
v___x_591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_589_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___y_573_ = v___x_587_;
v___y_574_ = v___x_591_;
goto v___jp_572_;
}
else
{
lean_object* v___x_592_; 
lean_dec(v_hint_472_);
v___x_592_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11);
v___y_573_ = v___x_587_;
v___y_574_ = v___x_592_;
goto v___jp_572_;
}
}
}
v___jp_531_:
{
lean_object* v___x_535_; lean_object* v_toEnvExtension_536_; uint8_t v_logWrites_537_; 
v___x_535_ = lean_st_ref_take(v___y_534_);
v_toEnvExtension_536_ = lean_ctor_get(v___x_520_, 0);
v_logWrites_537_ = lean_ctor_get_uint8(v_toEnvExtension_536_, sizeof(void*)*6);
if (v_logWrites_537_ == 0)
{
lean_object* v_env_538_; lean_object* v_nextMacroScope_539_; lean_object* v_ngen_540_; lean_object* v_auxDeclNGen_541_; lean_object* v_traceState_542_; lean_object* v_recordedDeps_543_; lean_object* v_messages_544_; lean_object* v_infoState_545_; lean_object* v_snapshotTasks_546_; lean_object* v_asyncMode_547_; lean_object* v___x_548_; 
v_env_538_ = lean_ctor_get(v___x_535_, 0);
lean_inc_ref(v_env_538_);
v_nextMacroScope_539_ = lean_ctor_get(v___x_535_, 1);
lean_inc(v_nextMacroScope_539_);
v_ngen_540_ = lean_ctor_get(v___x_535_, 2);
lean_inc_ref(v_ngen_540_);
v_auxDeclNGen_541_ = lean_ctor_get(v___x_535_, 3);
lean_inc_ref(v_auxDeclNGen_541_);
v_traceState_542_ = lean_ctor_get(v___x_535_, 4);
lean_inc_ref(v_traceState_542_);
v_recordedDeps_543_ = lean_ctor_get(v___x_535_, 6);
lean_inc_ref(v_recordedDeps_543_);
v_messages_544_ = lean_ctor_get(v___x_535_, 7);
lean_inc_ref(v_messages_544_);
v_infoState_545_ = lean_ctor_get(v___x_535_, 8);
lean_inc_ref(v_infoState_545_);
v_snapshotTasks_546_ = lean_ctor_get(v___x_535_, 9);
lean_inc_ref(v_snapshotTasks_546_);
lean_dec(v___x_535_);
v_asyncMode_547_ = lean_ctor_get(v_toEnvExtension_536_, 2);
lean_inc_ref(v_toEnvExtension_536_);
v___x_548_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_536_, v_env_538_, v___f_529_, v_asyncMode_547_, v___x_522_, v___x_530_);
v___y_480_ = v_infoState_545_;
v___y_481_ = v___y_533_;
v___y_482_ = v_messages_544_;
v___y_483_ = v_traceState_542_;
v___y_484_ = v_recordedDeps_543_;
v___y_485_ = v___y_532_;
v___y_486_ = v_auxDeclNGen_541_;
v___y_487_ = v_snapshotTasks_546_;
v___y_488_ = v___y_534_;
v___y_489_ = v_ngen_540_;
v___y_490_ = v_nextMacroScope_539_;
v___y_491_ = v___x_548_;
goto v___jp_479_;
}
else
{
lean_object* v_env_549_; lean_object* v_nextMacroScope_550_; lean_object* v_ngen_551_; lean_object* v_auxDeclNGen_552_; lean_object* v_traceState_553_; lean_object* v_recordedDeps_554_; lean_object* v_messages_555_; lean_object* v_infoState_556_; lean_object* v_snapshotTasks_557_; lean_object* v_asyncMode_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_env_549_ = lean_ctor_get(v___x_535_, 0);
lean_inc_ref(v_env_549_);
v_nextMacroScope_550_ = lean_ctor_get(v___x_535_, 1);
lean_inc(v_nextMacroScope_550_);
v_ngen_551_ = lean_ctor_get(v___x_535_, 2);
lean_inc_ref(v_ngen_551_);
v_auxDeclNGen_552_ = lean_ctor_get(v___x_535_, 3);
lean_inc_ref(v_auxDeclNGen_552_);
v_traceState_553_ = lean_ctor_get(v___x_535_, 4);
lean_inc_ref(v_traceState_553_);
v_recordedDeps_554_ = lean_ctor_get(v___x_535_, 6);
lean_inc_ref(v_recordedDeps_554_);
v_messages_555_ = lean_ctor_get(v___x_535_, 7);
lean_inc_ref(v_messages_555_);
v_infoState_556_ = lean_ctor_get(v___x_535_, 8);
lean_inc_ref(v_infoState_556_);
v_snapshotTasks_557_ = lean_ctor_get(v___x_535_, 9);
lean_inc_ref(v_snapshotTasks_557_);
lean_dec(v___x_535_);
v_asyncMode_558_ = lean_ctor_get(v_toEnvExtension_536_, 2);
lean_inc_ref_n(v_toEnvExtension_536_, 2);
v___x_559_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_536_, v_env_549_);
lean_dec_ref(v_env_549_);
v___x_560_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_536_, v___x_559_, v___f_529_, v_asyncMode_558_, v___x_522_, v___x_530_);
v___y_480_ = v_infoState_556_;
v___y_481_ = v___y_533_;
v___y_482_ = v_messages_555_;
v___y_483_ = v_traceState_553_;
v___y_484_ = v_recordedDeps_554_;
v___y_485_ = v___y_532_;
v___y_486_ = v_auxDeclNGen_552_;
v___y_487_ = v_snapshotTasks_557_;
v___y_488_ = v___y_534_;
v___y_489_ = v_ngen_551_;
v___y_490_ = v_nextMacroScope_550_;
v___y_491_ = v___x_560_;
goto v___jp_479_;
}
}
v___jp_561_:
{
uint8_t v___x_565_; 
v___x_565_ = l_Lean_usageRecordingEnabled();
if (v___x_565_ == 0)
{
lean_dec_ref_known(v_entry_517_, 1);
v___y_532_ = v___y_562_;
v___y_533_ = v___y_563_;
v___y_534_ = v___y_564_;
goto v___jp_531_;
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_566_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_567_ = lean_st_ref_take(v___x_566_);
v___x_568_ = lean_box(0);
v___x_569_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(v___x_567_, v_entry_517_, v___x_568_);
v___x_570_ = lean_st_ref_put(v___x_566_, v___x_569_);
v___y_532_ = v___y_562_;
v___y_533_ = v___y_563_;
v___y_534_ = v___y_564_;
goto v___jp_531_;
}
}
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
lean_dec_ref_known(v_entry_517_, 1);
lean_dec(v_hint_472_);
lean_dec(v_mod_470_);
v___x_606_ = lean_box(0);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
lean_ctor_set(v___x_607_, 1, v___y_473_);
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
v___jp_479_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v_mctx_496_; lean_object* v_zetaDeltaFVarIds_497_; lean_object* v_postponed_498_; lean_object* v_diag_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_511_; 
v___x_492_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
v___x_493_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_493_, 0, v___y_491_);
lean_ctor_set(v___x_493_, 1, v___y_490_);
lean_ctor_set(v___x_493_, 2, v___y_489_);
lean_ctor_set(v___x_493_, 3, v___y_486_);
lean_ctor_set(v___x_493_, 4, v___y_483_);
lean_ctor_set(v___x_493_, 5, v___x_492_);
lean_ctor_set(v___x_493_, 6, v___y_484_);
lean_ctor_set(v___x_493_, 7, v___y_482_);
lean_ctor_set(v___x_493_, 8, v___y_480_);
lean_ctor_set(v___x_493_, 9, v___y_487_);
v___x_494_ = lean_st_ref_put(v___y_488_, v___x_493_);
v___x_495_ = lean_st_ref_take(v___y_481_);
v_mctx_496_ = lean_ctor_get(v___x_495_, 0);
v_zetaDeltaFVarIds_497_ = lean_ctor_get(v___x_495_, 2);
v_postponed_498_ = lean_ctor_get(v___x_495_, 3);
v_diag_499_ = lean_ctor_get(v___x_495_, 4);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_511_ == 0)
{
lean_object* v_unused_512_; 
v_unused_512_ = lean_ctor_get(v___x_495_, 1);
lean_dec(v_unused_512_);
v___x_501_ = v___x_495_;
v_isShared_502_ = v_isSharedCheck_511_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_diag_499_);
lean_inc(v_postponed_498_);
lean_inc(v_zetaDeltaFVarIds_497_);
lean_inc(v_mctx_496_);
lean_dec(v___x_495_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_511_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_503_ = lean_box(0);
v___x_504_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 1, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_mctx_496_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v_zetaDeltaFVarIds_497_);
lean_ctor_set(v_reuseFailAlloc_510_, 3, v_postponed_498_);
lean_ctor_set(v_reuseFailAlloc_510_, 4, v_diag_499_);
v___x_506_ = v_reuseFailAlloc_510_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_507_ = lean_st_ref_put(v___y_481_, v___x_506_);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_503_);
lean_ctor_set(v___x_508_, 1, v___y_485_);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object* v_mod_609_, lean_object* v_isMeta_610_, lean_object* v_hint_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_){
_start:
{
uint8_t v_isMeta_boxed_618_; lean_object* v_res_619_; 
v_isMeta_boxed_618_ = lean_unbox(v_isMeta_610_);
v_res_619_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_mod_609_, v_isMeta_boxed_618_, v_hint_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(lean_object* v_a_620_, lean_object* v_x_621_){
_start:
{
if (lean_obj_tag(v_x_621_) == 0)
{
lean_object* v___x_622_; 
v___x_622_ = lean_box(0);
return v___x_622_;
}
else
{
lean_object* v_key_623_; lean_object* v_value_624_; lean_object* v_tail_625_; uint8_t v___x_626_; 
v_key_623_ = lean_ctor_get(v_x_621_, 0);
v_value_624_ = lean_ctor_get(v_x_621_, 1);
v_tail_625_ = lean_ctor_get(v_x_621_, 2);
v___x_626_ = lean_name_eq(v_key_623_, v_a_620_);
if (v___x_626_ == 0)
{
v_x_621_ = v_tail_625_;
goto _start;
}
else
{
lean_object* v___x_628_; 
lean_inc(v_value_624_);
v___x_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_628_, 0, v_value_624_);
return v___x_628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_a_629_, lean_object* v_x_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(v_a_629_, v_x_630_);
lean_dec(v_x_630_);
lean_dec(v_a_629_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object* v_m_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_buckets_634_; lean_object* v___x_635_; uint64_t v___y_637_; 
v_buckets_634_ = lean_ctor_get(v_m_632_, 1);
v___x_635_ = lean_array_get_size(v_buckets_634_);
if (lean_obj_tag(v_a_633_) == 0)
{
uint64_t v___x_651_; 
v___x_651_ = 1723ULL;
v___y_637_ = v___x_651_;
goto v___jp_636_;
}
else
{
uint64_t v_hash_652_; 
v_hash_652_ = lean_ctor_get_uint64(v_a_633_, sizeof(void*)*2);
v___y_637_ = v_hash_652_;
goto v___jp_636_;
}
v___jp_636_:
{
uint64_t v___x_638_; uint64_t v___x_639_; uint64_t v_fold_640_; uint64_t v___x_641_; uint64_t v___x_642_; uint64_t v___x_643_; size_t v___x_644_; size_t v___x_645_; size_t v___x_646_; size_t v___x_647_; size_t v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_638_ = 32ULL;
v___x_639_ = lean_uint64_shift_right(v___y_637_, v___x_638_);
v_fold_640_ = lean_uint64_xor(v___y_637_, v___x_639_);
v___x_641_ = 16ULL;
v___x_642_ = lean_uint64_shift_right(v_fold_640_, v___x_641_);
v___x_643_ = lean_uint64_xor(v_fold_640_, v___x_642_);
v___x_644_ = lean_uint64_to_usize(v___x_643_);
v___x_645_ = lean_usize_of_nat(v___x_635_);
v___x_646_ = ((size_t)1ULL);
v___x_647_ = lean_usize_sub(v___x_645_, v___x_646_);
v___x_648_ = lean_usize_land(v___x_644_, v___x_647_);
v___x_649_ = lean_array_uget_borrowed(v_buckets_634_, v___x_648_);
v___x_650_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(v_a_633_, v___x_649_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object* v_m_653_, lean_object* v_a_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_653_, v_a_654_);
lean_dec(v_a_654_);
lean_dec_ref(v_m_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object* v___x_656_, lean_object* v_declName_657_, lean_object* v_as_658_, size_t v_sz_659_, size_t v_i_660_, lean_object* v_b_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
uint8_t v___x_668_; 
v___x_668_ = lean_usize_dec_lt(v_i_660_, v_sz_659_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_670_; 
lean_dec(v_declName_657_);
v___x_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_669_, 0, v_b_661_);
lean_ctor_set(v___x_669_, 1, v___y_662_);
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
return v___x_670_;
}
else
{
lean_object* v___x_671_; lean_object* v_modules_672_; lean_object* v___x_673_; lean_object* v_a_674_; lean_object* v___x_675_; lean_object* v_toImport_676_; lean_object* v_module_677_; lean_object* v___x_678_; uint8_t v___x_679_; lean_object* v___x_680_; 
v___x_671_ = l_Lean_Environment_header(v___x_656_);
v_modules_672_ = lean_ctor_get(v___x_671_, 3);
lean_inc_ref(v_modules_672_);
lean_dec_ref(v___x_671_);
v___x_673_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_674_ = lean_array_uget_borrowed(v_as_658_, v_i_660_);
v___x_675_ = lean_array_get(v___x_673_, v_modules_672_, v_a_674_);
lean_dec_ref(v_modules_672_);
v_toImport_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc_ref(v_toImport_676_);
lean_dec(v___x_675_);
v_module_677_ = lean_ctor_get(v_toImport_676_, 0);
lean_inc(v_module_677_);
lean_dec_ref(v_toImport_676_);
v___x_678_ = lean_box(0);
v___x_679_ = 0;
lean_inc(v_declName_657_);
v___x_680_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_677_, v___x_679_, v_declName_657_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v_snd_682_; size_t v___x_683_; size_t v___x_684_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v_snd_682_ = lean_ctor_get(v_a_681_, 1);
lean_inc(v_snd_682_);
lean_dec(v_a_681_);
v___x_683_ = ((size_t)1ULL);
v___x_684_ = lean_usize_add(v_i_660_, v___x_683_);
v_i_660_ = v___x_684_;
v_b_661_ = v___x_678_;
v___y_662_ = v_snd_682_;
goto _start;
}
else
{
lean_dec(v_declName_657_);
return v___x_680_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object* v___x_686_, lean_object* v_declName_687_, lean_object* v_as_688_, lean_object* v_sz_689_, lean_object* v_i_690_, lean_object* v_b_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
size_t v_sz_boxed_698_; size_t v_i_boxed_699_; lean_object* v_res_700_; 
v_sz_boxed_698_ = lean_unbox_usize(v_sz_689_);
lean_dec(v_sz_689_);
v_i_boxed_699_ = lean_unbox_usize(v_i_690_);
lean_dec(v_i_690_);
v_res_700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v___x_686_, v_declName_687_, v_as_688_, v_sz_boxed_698_, v_i_boxed_699_, v_b_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec_ref(v_as_688_);
lean_dec_ref(v___x_686_);
return v_res_700_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0(void){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Std_HashMap_instInhabited___redArg();
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object* v_declName_704_, uint8_t v_isMeta_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v_env_718_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___x_743_; 
v___x_712_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0);
v___x_713_ = lean_st_ref_get(v___y_710_);
v_env_718_ = lean_ctor_get(v___x_713_, 0);
lean_inc_ref(v_env_718_);
lean_dec(v___x_713_);
v___x_743_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_718_, v_declName_704_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_dec_ref(v_env_718_);
lean_dec(v_declName_704_);
goto v___jp_714_;
}
else
{
lean_object* v_val_744_; lean_object* v___x_745_; lean_object* v_modules_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v_val_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = l_Lean_Environment_header(v_env_718_);
v_modules_746_ = lean_ctor_get(v___x_745_, 3);
lean_inc_ref(v_modules_746_);
lean_dec_ref(v___x_745_);
v___x_747_ = lean_array_get_size(v_modules_746_);
v___x_748_ = lean_nat_dec_lt(v_val_744_, v___x_747_);
if (v___x_748_ == 0)
{
lean_dec_ref(v_modules_746_);
lean_dec(v_val_744_);
lean_dec_ref(v_env_718_);
lean_dec(v_declName_704_);
goto v___jp_714_;
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___y_752_; 
v___x_749_ = lean_array_fget(v_modules_746_, v_val_744_);
lean_dec(v_val_744_);
lean_dec_ref(v_modules_746_);
v___x_750_ = lean_st_ref_get(v___y_710_);
if (v_isMeta_705_ == 0)
{
lean_dec(v___x_750_);
v___y_752_ = v_isMeta_705_;
goto v___jp_751_;
}
else
{
lean_object* v_env_765_; uint8_t v___x_766_; 
v_env_765_ = lean_ctor_get(v___x_750_, 0);
lean_inc_ref(v_env_765_);
lean_dec(v___x_750_);
lean_inc(v_declName_704_);
v___x_766_ = l_Lean_isMarkedMeta(v_env_765_, v_declName_704_);
if (v___x_766_ == 0)
{
v___y_752_ = v_isMeta_705_;
goto v___jp_751_;
}
else
{
uint8_t v___x_767_; 
v___x_767_ = 0;
v___y_752_ = v___x_767_;
goto v___jp_751_;
}
}
v___jp_751_:
{
lean_object* v_toImport_753_; lean_object* v_module_754_; lean_object* v___x_755_; 
v_toImport_753_ = lean_ctor_get(v___x_749_, 0);
lean_inc_ref(v_toImport_753_);
lean_dec(v___x_749_);
v_module_754_ = lean_ctor_get(v_toImport_753_, 0);
lean_inc(v_module_754_);
lean_dec_ref(v_toImport_753_);
lean_inc(v_declName_704_);
v___x_755_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_754_, v___y_752_, v_declName_704_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; lean_object* v_snd_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_755_, 1);
v_snd_757_ = lean_ctor_get(v_a_756_, 1);
lean_inc(v_snd_757_);
lean_dec(v_a_756_);
v___x_758_ = l_Lean_indirectModUseExt;
v___x_759_ = lean_box(1);
v___x_760_ = lean_box(0);
lean_inc_ref(v_env_718_);
v___x_761_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_712_, v___x_758_, v_env_718_, v___x_759_, v___x_760_);
v___x_762_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v___x_761_, v_declName_704_);
lean_dec(v___x_761_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v___x_763_; 
v___x_763_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1));
v___y_720_ = v_snd_757_;
v___y_721_ = v___x_763_;
goto v___jp_719_;
}
else
{
lean_object* v_val_764_; 
v_val_764_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_val_764_);
lean_dec_ref_known(v___x_762_, 1);
v___y_720_ = v_snd_757_;
v___y_721_ = v_val_764_;
goto v___jp_719_;
}
}
else
{
lean_dec_ref(v_env_718_);
lean_dec(v_declName_704_);
return v___x_755_;
}
}
}
}
v___jp_714_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_box(0);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
lean_ctor_set(v___x_716_, 1, v___y_706_);
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
v___jp_719_:
{
lean_object* v___x_722_; size_t v_sz_723_; size_t v___x_724_; lean_object* v___x_725_; 
v___x_722_ = lean_box(0);
v_sz_723_ = lean_array_size(v___y_721_);
v___x_724_ = ((size_t)0ULL);
v___x_725_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v_env_718_, v_declName_704_, v___y_721_, v_sz_723_, v___x_724_, v___x_722_, v___y_720_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec_ref(v___y_721_);
lean_dec_ref(v_env_718_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_742_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_742_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_742_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_742_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v_snd_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_740_; 
v_snd_730_ = lean_ctor_get(v_a_726_, 1);
v_isSharedCheck_740_ = !lean_is_exclusive(v_a_726_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; 
v_unused_741_ = lean_ctor_get(v_a_726_, 0);
lean_dec(v_unused_741_);
v___x_732_ = v_a_726_;
v_isShared_733_ = v_isSharedCheck_740_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_snd_730_);
lean_dec(v_a_726_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_740_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v___x_722_);
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_722_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_snd_730_);
v___x_735_ = v_reuseFailAlloc_739_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_737_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_735_);
v___x_737_ = v___x_728_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_735_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
}
else
{
return v___x_725_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object* v_declName_768_, lean_object* v_isMeta_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
uint8_t v_isMeta_boxed_776_; lean_object* v_res_777_; 
v_isMeta_boxed_776_ = lean_unbox(v_isMeta_769_);
v_res_777_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_declName_768_, v_isMeta_boxed_776_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object* v_e_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___y_793_; lean_object* v_f_797_; uint8_t v___x_798_; 
v_f_797_ = l_Lean_Expr_getAppFn(v_e_785_);
v___x_798_ = l_Lean_Expr_isConst(v_f_797_);
if (v___x_798_ == 0)
{
lean_dec_ref(v_f_797_);
lean_dec_ref(v_e_785_);
v___y_793_ = v___y_786_;
goto v___jp_792_;
}
else
{
lean_object* v_declName_799_; lean_object* v___x_800_; lean_object* v_env_801_; uint8_t v___x_802_; 
v_declName_799_ = l_Lean_Expr_constName_x21(v_f_797_);
lean_dec_ref(v_f_797_);
v___x_800_ = lean_st_ref_get(v___y_790_);
v_env_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc_ref(v_env_801_);
lean_dec(v___x_800_);
lean_inc(v_declName_799_);
v___x_802_ = l_Lean_Meta_isCoeDecl(v_env_801_, v_declName_799_);
if (v___x_802_ == 0)
{
lean_dec(v_declName_799_);
lean_dec_ref(v_e_785_);
v___y_793_ = v___y_786_;
goto v___jp_792_;
}
else
{
lean_object* v___x_803_; 
lean_inc(v_declName_799_);
lean_inc_ref(v_e_785_);
v___x_803_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_785_, v_declName_799_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; uint8_t v___x_805_; lean_object* v___x_806_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v___x_803_, 1);
v___x_805_ = 0;
v___x_806_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_a_804_, v___x_805_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v_snd_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_859_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_807_);
lean_dec_ref_known(v___x_806_, 1);
v_snd_808_ = lean_ctor_get(v_a_807_, 1);
v_isSharedCheck_859_ = !lean_is_exclusive(v_a_807_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; 
v_unused_860_ = lean_ctor_get(v_a_807_, 0);
lean_dec(v_unused_860_);
v___x_810_ = v_a_807_;
v_isShared_811_ = v_isSharedCheck_859_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_snd_808_);
lean_dec(v_a_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_859_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; 
lean_inc_ref(v_e_785_);
v___x_812_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_785_, v___x_805_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_850_; 
v_a_813_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_850_ == 0)
{
v___x_815_ = v___x_812_;
v_isShared_816_ = v_isSharedCheck_850_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_812_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_850_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
if (lean_obj_tag(v_a_813_) == 1)
{
lean_object* v_val_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_849_; 
v_val_817_ = lean_ctor_get(v_a_813_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v_a_813_);
if (v_isSharedCheck_849_ == 0)
{
v___x_819_ = v_a_813_;
v_isShared_820_ = v_isSharedCheck_849_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_val_817_);
lean_dec(v_a_813_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_849_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___y_822_; lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__3));
v___x_834_ = lean_name_eq(v_declName_799_, v___x_833_);
lean_dec(v_declName_799_);
if (v___x_834_ == 0)
{
lean_dec_ref(v_e_785_);
v___y_822_ = v_snd_808_;
goto v___jp_821_;
}
else
{
lean_object* v_dummy_835_; lean_object* v_nargs_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v_dummy_835_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_836_ = l_Lean_Expr_getAppNumArgs(v_e_785_);
lean_inc(v_nargs_836_);
v___x_837_ = lean_mk_array(v_nargs_836_, v_dummy_835_);
v___x_838_ = lean_unsigned_to_nat(1u);
v___x_839_ = lean_nat_sub(v_nargs_836_, v___x_838_);
lean_dec(v_nargs_836_);
v___x_840_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_785_, v___x_837_, v___x_839_);
v___x_841_ = lean_unsigned_to_nat(2u);
v___x_842_ = lean_array_get_size(v___x_840_);
v___x_843_ = lean_nat_dec_lt(v___x_841_, v___x_842_);
if (v___x_843_ == 0)
{
lean_dec_ref(v___x_840_);
v___y_822_ = v_snd_808_;
goto v___jp_821_;
}
else
{
lean_object* v___x_844_; lean_object* v___x_845_; uint8_t v___x_846_; 
v___x_844_ = lean_array_fget(v___x_840_, v___x_841_);
lean_dec_ref(v___x_840_);
v___x_845_ = l_Lean_Expr_getAppFn(v___x_844_);
lean_dec(v___x_844_);
v___x_846_ = l_Lean_Expr_isConst(v___x_845_);
if (v___x_846_ == 0)
{
lean_dec_ref(v___x_845_);
v___y_822_ = v_snd_808_;
goto v___jp_821_;
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = l_Lean_Expr_constName_x21(v___x_845_);
lean_dec_ref(v___x_845_);
v___x_848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v_snd_808_);
v___y_822_ = v___x_848_;
goto v___jp_821_;
}
}
}
v___jp_821_:
{
lean_object* v___x_823_; lean_object* v___x_825_; 
v___x_823_ = l_Lean_Expr_headBeta(v_val_817_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_823_);
v___x_825_ = v___x_819_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_823_);
v___x_825_ = v_reuseFailAlloc_832_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
lean_object* v___x_827_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v___y_822_);
lean_ctor_set(v___x_810_, 0, v___x_825_);
v___x_827_ = v___x_810_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_825_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v___y_822_);
v___x_827_ = v_reuseFailAlloc_831_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_829_; 
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_827_);
v___x_829_ = v___x_815_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_827_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_815_);
lean_dec(v_a_813_);
lean_del_object(v___x_810_);
lean_dec(v_declName_799_);
lean_dec_ref(v_e_785_);
v___y_793_ = v_snd_808_;
goto v___jp_792_;
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
lean_del_object(v___x_810_);
lean_dec(v_snd_808_);
lean_dec(v_declName_799_);
lean_dec_ref(v_e_785_);
v_a_851_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_812_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_812_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
else
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
lean_dec(v_declName_799_);
lean_dec_ref(v_e_785_);
v_a_861_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_806_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_806_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
lean_dec(v_declName_799_);
lean_dec(v___y_786_);
lean_dec_ref(v_e_785_);
v_a_869_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_803_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_803_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
v___jp_792_:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__0));
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
lean_ctor_set(v___x_795_, 1, v___y_793_);
v___x_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object* v_e_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_Meta_expandCoe___lam__1(v_e_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___lam__0(lean_object* v_k_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v_b_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; 
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
lean_inc(v___y_890_);
lean_inc_ref(v___y_889_);
lean_inc(v___y_886_);
v___x_894_ = lean_apply_8(v_k_885_, v_b_888_, v___y_886_, v___y_887_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, lean_box(0));
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___lam__0___boxed(lean_object* v_k_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v_b_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___lam__0(v_k_895_, v___y_896_, v___y_897_, v_b_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_896_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___redArg(lean_object* v_name_905_, lean_object* v_type_906_, lean_object* v_val_907_, lean_object* v_k_908_, uint8_t v_nondep_909_, uint8_t v_kind_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v___f_918_; lean_object* v___x_919_; 
lean_inc(v___y_911_);
v___f_918_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_918_, 0, v_k_908_);
lean_closure_set(v___f_918_, 1, v___y_911_);
lean_closure_set(v___f_918_, 2, v___y_912_);
v___x_919_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_905_, v_type_906_, v_val_907_, v___f_918_, v_nondep_909_, v_kind_910_, v___y_913_, v___y_914_, v___y_915_, v___y_916_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
v_a_920_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_919_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_919_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
v_a_928_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_919_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_919_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___redArg___boxed(lean_object* v_name_936_, lean_object* v_type_937_, lean_object* v_val_938_, lean_object* v_k_939_, lean_object* v_nondep_940_, lean_object* v_kind_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
uint8_t v_nondep_boxed_949_; uint8_t v_kind_boxed_950_; lean_object* v_res_951_; 
v_nondep_boxed_949_ = lean_unbox(v_nondep_940_);
v_kind_boxed_950_ = lean_unbox(v_kind_941_);
v_res_951_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___redArg(v_name_936_, v_type_937_, v_val_938_, v_k_939_, v_nondep_boxed_949_, v_kind_boxed_950_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_942_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg(lean_object* v_name_952_, uint8_t v_bi_953_, lean_object* v_type_954_, lean_object* v_k_955_, uint8_t v_kind_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___f_964_; lean_object* v___x_965_; 
lean_inc(v___y_957_);
v___f_964_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_964_, 0, v_k_955_);
lean_closure_set(v___f_964_, 1, v___y_957_);
lean_closure_set(v___f_964_, 2, v___y_958_);
v___x_965_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_952_, v_bi_953_, v_type_954_, v___f_964_, v_kind_956_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
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
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
v_a_974_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_965_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_965_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg___boxed(lean_object* v_name_982_, lean_object* v_bi_983_, lean_object* v_type_984_, lean_object* v_k_985_, lean_object* v_kind_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
uint8_t v_bi_boxed_994_; uint8_t v_kind_boxed_995_; lean_object* v_res_996_; 
v_bi_boxed_994_ = lean_unbox(v_bi_983_);
v_kind_boxed_995_ = lean_unbox(v_kind_986_);
v_res_996_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg(v_name_982_, v_bi_boxed_994_, v_type_984_, v_k_985_, v_kind_boxed_995_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_987_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2(lean_object* v___x_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_997_);
lean_ctor_set(v___x_1004_, 1, v___y_998_);
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2___boxed(lean_object* v___x_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2(v___x_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31_spec__33___redArg(lean_object* v_x_1014_, lean_object* v_x_1015_){
_start:
{
if (lean_obj_tag(v_x_1015_) == 0)
{
return v_x_1014_;
}
else
{
lean_object* v_key_1016_; lean_object* v_value_1017_; lean_object* v_tail_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1041_; 
v_key_1016_ = lean_ctor_get(v_x_1015_, 0);
v_value_1017_ = lean_ctor_get(v_x_1015_, 1);
v_tail_1018_ = lean_ctor_get(v_x_1015_, 2);
v_isSharedCheck_1041_ = !lean_is_exclusive(v_x_1015_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1020_ = v_x_1015_;
v_isShared_1021_ = v_isSharedCheck_1041_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_tail_1018_);
lean_inc(v_value_1017_);
lean_inc(v_key_1016_);
lean_dec(v_x_1015_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1041_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; uint64_t v___x_1023_; uint64_t v___x_1024_; uint64_t v___x_1025_; uint64_t v_fold_1026_; uint64_t v___x_1027_; uint64_t v___x_1028_; uint64_t v___x_1029_; size_t v___x_1030_; size_t v___x_1031_; size_t v___x_1032_; size_t v___x_1033_; size_t v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1022_ = lean_array_get_size(v_x_1014_);
v___x_1023_ = l_Lean_ExprStructEq_hash(v_key_1016_);
v___x_1024_ = 32ULL;
v___x_1025_ = lean_uint64_shift_right(v___x_1023_, v___x_1024_);
v_fold_1026_ = lean_uint64_xor(v___x_1023_, v___x_1025_);
v___x_1027_ = 16ULL;
v___x_1028_ = lean_uint64_shift_right(v_fold_1026_, v___x_1027_);
v___x_1029_ = lean_uint64_xor(v_fold_1026_, v___x_1028_);
v___x_1030_ = lean_uint64_to_usize(v___x_1029_);
v___x_1031_ = lean_usize_of_nat(v___x_1022_);
v___x_1032_ = ((size_t)1ULL);
v___x_1033_ = lean_usize_sub(v___x_1031_, v___x_1032_);
v___x_1034_ = lean_usize_land(v___x_1030_, v___x_1033_);
v___x_1035_ = lean_array_uget_borrowed(v_x_1014_, v___x_1034_);
lean_inc(v___x_1035_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 2, v___x_1035_);
v___x_1037_ = v___x_1020_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_key_1016_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_value_1017_);
lean_ctor_set(v_reuseFailAlloc_1040_, 2, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1038_; 
v___x_1038_ = lean_array_uset(v_x_1014_, v___x_1034_, v___x_1037_);
v_x_1014_ = v___x_1038_;
v_x_1015_ = v_tail_1018_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31___redArg(lean_object* v_i_1042_, lean_object* v_source_1043_, lean_object* v_target_1044_){
_start:
{
lean_object* v___x_1045_; uint8_t v___x_1046_; 
v___x_1045_ = lean_array_get_size(v_source_1043_);
v___x_1046_ = lean_nat_dec_lt(v_i_1042_, v___x_1045_);
if (v___x_1046_ == 0)
{
lean_dec_ref(v_source_1043_);
lean_dec(v_i_1042_);
return v_target_1044_;
}
else
{
lean_object* v_es_1047_; lean_object* v___x_1048_; lean_object* v_source_1049_; lean_object* v_target_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v_es_1047_ = lean_array_fget(v_source_1043_, v_i_1042_);
v___x_1048_ = lean_box(0);
v_source_1049_ = lean_array_fset(v_source_1043_, v_i_1042_, v___x_1048_);
v_target_1050_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31_spec__33___redArg(v_target_1044_, v_es_1047_);
v___x_1051_ = lean_unsigned_to_nat(1u);
v___x_1052_ = lean_nat_add(v_i_1042_, v___x_1051_);
lean_dec(v_i_1042_);
v_i_1042_ = v___x_1052_;
v_source_1043_ = v_source_1049_;
v_target_1044_ = v_target_1050_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(lean_object* v_data_1054_){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v_nbuckets_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1055_ = lean_array_get_size(v_data_1054_);
v___x_1056_ = lean_unsigned_to_nat(2u);
v_nbuckets_1057_ = lean_nat_mul(v___x_1055_, v___x_1056_);
v___x_1058_ = lean_unsigned_to_nat(0u);
v___x_1059_ = lean_box(0);
v___x_1060_ = lean_mk_array(v_nbuckets_1057_, v___x_1059_);
v___x_1061_ = lean_array_propagate_mark(v_data_1054_, v___x_1060_);
v___x_1062_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31___redArg(v___x_1058_, v_data_1054_, v___x_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(lean_object* v_a_1063_, lean_object* v_x_1064_){
_start:
{
if (lean_obj_tag(v_x_1064_) == 0)
{
uint8_t v___x_1065_; 
v___x_1065_ = 0;
return v___x_1065_;
}
else
{
lean_object* v_key_1066_; lean_object* v_tail_1067_; uint8_t v___x_1068_; 
v_key_1066_ = lean_ctor_get(v_x_1064_, 0);
v_tail_1067_ = lean_ctor_get(v_x_1064_, 2);
v___x_1068_ = l_Lean_ExprStructEq_beq(v_key_1066_, v_a_1063_);
if (v___x_1068_ == 0)
{
v_x_1064_ = v_tail_1067_;
goto _start;
}
else
{
return v___x_1068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg___boxed(lean_object* v_a_1070_, lean_object* v_x_1071_){
_start:
{
uint8_t v_res_1072_; lean_object* v_r_1073_; 
v_res_1072_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(v_a_1070_, v_x_1071_);
lean_dec(v_x_1071_);
lean_dec_ref(v_a_1070_);
v_r_1073_ = lean_box(v_res_1072_);
return v_r_1073_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__29___redArg(lean_object* v_a_1074_, lean_object* v_b_1075_, lean_object* v_x_1076_){
_start:
{
if (lean_obj_tag(v_x_1076_) == 0)
{
lean_dec(v_b_1075_);
lean_dec_ref(v_a_1074_);
return v_x_1076_;
}
else
{
lean_object* v_key_1077_; lean_object* v_value_1078_; lean_object* v_tail_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1091_; 
v_key_1077_ = lean_ctor_get(v_x_1076_, 0);
v_value_1078_ = lean_ctor_get(v_x_1076_, 1);
v_tail_1079_ = lean_ctor_get(v_x_1076_, 2);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_x_1076_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1081_ = v_x_1076_;
v_isShared_1082_ = v_isSharedCheck_1091_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_tail_1079_);
lean_inc(v_value_1078_);
lean_inc(v_key_1077_);
lean_dec(v_x_1076_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1091_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
uint8_t v___x_1083_; 
v___x_1083_ = l_Lean_ExprStructEq_beq(v_key_1077_, v_a_1074_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1084_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__29___redArg(v_a_1074_, v_b_1075_, v_tail_1079_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 2, v___x_1084_);
v___x_1086_ = v___x_1081_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_key_1077_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v_value_1078_);
lean_ctor_set(v_reuseFailAlloc_1087_, 2, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
else
{
lean_object* v___x_1089_; 
lean_dec(v_value_1078_);
lean_dec(v_key_1077_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v_b_1075_);
lean_ctor_set(v___x_1081_, 0, v_a_1074_);
v___x_1089_ = v___x_1081_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1074_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_b_1075_);
lean_ctor_set(v_reuseFailAlloc_1090_, 2, v_tail_1079_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(lean_object* v_m_1092_, lean_object* v_a_1093_, lean_object* v_b_1094_){
_start:
{
lean_object* v_size_1095_; lean_object* v_buckets_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1139_; 
v_size_1095_ = lean_ctor_get(v_m_1092_, 0);
v_buckets_1096_ = lean_ctor_get(v_m_1092_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_m_1092_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1098_ = v_m_1092_;
v_isShared_1099_ = v_isSharedCheck_1139_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_buckets_1096_);
lean_inc(v_size_1095_);
lean_dec(v_m_1092_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1139_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1100_; uint64_t v___x_1101_; uint64_t v___x_1102_; uint64_t v___x_1103_; uint64_t v_fold_1104_; uint64_t v___x_1105_; uint64_t v___x_1106_; uint64_t v___x_1107_; size_t v___x_1108_; size_t v___x_1109_; size_t v___x_1110_; size_t v___x_1111_; size_t v___x_1112_; lean_object* v_bkt_1113_; uint8_t v___x_1114_; 
v___x_1100_ = lean_array_get_size(v_buckets_1096_);
v___x_1101_ = l_Lean_ExprStructEq_hash(v_a_1093_);
v___x_1102_ = 32ULL;
v___x_1103_ = lean_uint64_shift_right(v___x_1101_, v___x_1102_);
v_fold_1104_ = lean_uint64_xor(v___x_1101_, v___x_1103_);
v___x_1105_ = 16ULL;
v___x_1106_ = lean_uint64_shift_right(v_fold_1104_, v___x_1105_);
v___x_1107_ = lean_uint64_xor(v_fold_1104_, v___x_1106_);
v___x_1108_ = lean_uint64_to_usize(v___x_1107_);
v___x_1109_ = lean_usize_of_nat(v___x_1100_);
v___x_1110_ = ((size_t)1ULL);
v___x_1111_ = lean_usize_sub(v___x_1109_, v___x_1110_);
v___x_1112_ = lean_usize_land(v___x_1108_, v___x_1111_);
v_bkt_1113_ = lean_array_uget_borrowed(v_buckets_1096_, v___x_1112_);
v___x_1114_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(v_a_1093_, v_bkt_1113_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v_size_x27_1116_; lean_object* v___x_1117_; lean_object* v_buckets_x27_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1115_ = lean_unsigned_to_nat(1u);
v_size_x27_1116_ = lean_nat_add(v_size_1095_, v___x_1115_);
lean_dec(v_size_1095_);
lean_inc(v_bkt_1113_);
v___x_1117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1117_, 0, v_a_1093_);
lean_ctor_set(v___x_1117_, 1, v_b_1094_);
lean_ctor_set(v___x_1117_, 2, v_bkt_1113_);
v_buckets_x27_1118_ = lean_array_uset(v_buckets_1096_, v___x_1112_, v___x_1117_);
v___x_1119_ = lean_unsigned_to_nat(4u);
v___x_1120_ = lean_nat_mul(v_size_x27_1116_, v___x_1119_);
v___x_1121_ = lean_unsigned_to_nat(3u);
v___x_1122_ = lean_nat_div(v___x_1120_, v___x_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_array_get_size(v_buckets_x27_1118_);
v___x_1124_ = lean_nat_dec_le(v___x_1122_, v___x_1123_);
lean_dec(v___x_1122_);
if (v___x_1124_ == 0)
{
lean_object* v_val_1125_; lean_object* v___x_1127_; 
v_val_1125_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(v_buckets_x27_1118_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 1, v_val_1125_);
lean_ctor_set(v___x_1098_, 0, v_size_x27_1116_);
v___x_1127_ = v___x_1098_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_size_x27_1116_);
lean_ctor_set(v_reuseFailAlloc_1128_, 1, v_val_1125_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
else
{
lean_object* v___x_1130_; 
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 1, v_buckets_x27_1118_);
lean_ctor_set(v___x_1098_, 0, v_size_x27_1116_);
v___x_1130_ = v___x_1098_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_size_x27_1116_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_buckets_x27_1118_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
else
{
lean_object* v___x_1132_; lean_object* v_buckets_x27_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1137_; 
lean_inc(v_bkt_1113_);
v___x_1132_ = lean_box(0);
v_buckets_x27_1133_ = lean_array_uset(v_buckets_1096_, v___x_1112_, v___x_1132_);
v___x_1134_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__29___redArg(v_a_1093_, v_b_1094_, v_bkt_1113_);
v___x_1135_ = lean_array_uset(v_buckets_x27_1133_, v___x_1112_, v___x_1134_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 1, v___x_1135_);
v___x_1137_ = v___x_1098_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_size_1095_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v___x_1135_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object* v_a_1140_, lean_object* v_e_1141_, lean_object* v_fst_1142_){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1144_ = lean_st_ref_take(v_a_1140_);
v___x_1145_ = lean_box(0);
v___x_1146_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(v___x_1144_, v_e_1141_, v_fst_1142_);
v___x_1147_ = lean_st_ref_put(v_a_1140_, v___x_1146_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object* v_a_1148_, lean_object* v_e_1149_, lean_object* v_fst_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(v_a_1148_, v_e_1149_, v_fst_1150_);
lean_dec(v_a_1148_);
return v_res_1152_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__3(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = l_Lean_maxRecDepthErrorMessage;
v___x_1159_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
return v___x_1159_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__4(void){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__3);
v___x_1161_ = l_Lean_MessageData_ofFormat(v___x_1160_);
return v___x_1161_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__5(void){
_start:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1162_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__4);
v___x_1163_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__2));
v___x_1164_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
lean_ctor_set(v___x_1164_, 1, v___x_1162_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(lean_object* v_ref_1165_){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1167_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___closed__5);
v___x_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1168_, 0, v_ref_1165_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
v___x_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg___boxed(lean_object* v_ref_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_ref_1170_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object* v_x_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___y_1182_; lean_object* v_toCold_1199_; lean_object* v_currRecDepth_1200_; lean_object* v_ref_1201_; uint16_t v_optionFlags_1202_; uint8_t v_suppressElabErrors_1203_; uint8_t v_isRecordingDeps_1204_; lean_object* v_maxRecDepth_1210_; lean_object* v___x_1211_; uint8_t v___x_1212_; 
v_toCold_1199_ = lean_ctor_get(v___y_1178_, 0);
v_currRecDepth_1200_ = lean_ctor_get(v___y_1178_, 1);
v_ref_1201_ = lean_ctor_get(v___y_1178_, 2);
v_optionFlags_1202_ = lean_ctor_get_uint16(v___y_1178_, sizeof(void*)*3);
v_suppressElabErrors_1203_ = lean_ctor_get_uint8(v___y_1178_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1204_ = lean_ctor_get_uint8(v___y_1178_, sizeof(void*)*3 + 3);
v_maxRecDepth_1210_ = lean_ctor_get(v_toCold_1199_, 3);
v___x_1211_ = lean_unsigned_to_nat(0u);
v___x_1212_ = lean_nat_dec_eq(v_maxRecDepth_1210_, v___x_1211_);
if (v___x_1212_ == 0)
{
uint8_t v___x_1213_; 
v___x_1213_ = lean_nat_dec_eq(v_currRecDepth_1200_, v_maxRecDepth_1210_);
if (v___x_1213_ == 0)
{
goto v___jp_1205_;
}
else
{
lean_object* v___x_1214_; 
lean_dec(v___y_1175_);
lean_dec_ref(v_x_1173_);
lean_inc(v_ref_1201_);
v___x_1214_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_ref_1201_);
v___y_1182_ = v___x_1214_;
goto v___jp_1181_;
}
}
else
{
goto v___jp_1205_;
}
v___jp_1181_:
{
if (lean_obj_tag(v___y_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
v_a_1183_ = lean_ctor_get(v___y_1182_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___y_1182_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___y_1182_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___y_1182_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
v_a_1191_ = lean_ctor_get(v___y_1182_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___y_1182_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___y_1182_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___y_1182_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
v___jp_1205_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1206_ = lean_unsigned_to_nat(1u);
v___x_1207_ = lean_nat_add(v_currRecDepth_1200_, v___x_1206_);
lean_inc(v_ref_1201_);
lean_inc_ref(v_toCold_1199_);
v___x_1208_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1208_, 0, v_toCold_1199_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
lean_ctor_set(v___x_1208_, 2, v_ref_1201_);
lean_ctor_set_uint16(v___x_1208_, sizeof(void*)*3, v_optionFlags_1202_);
lean_ctor_set_uint8(v___x_1208_, sizeof(void*)*3 + 2, v_suppressElabErrors_1203_);
lean_ctor_set_uint8(v___x_1208_, sizeof(void*)*3 + 3, v_isRecordingDeps_1204_);
lean_inc(v___y_1179_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
lean_inc(v___y_1174_);
v___x_1209_ = lean_apply_7(v_x_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___x_1208_, v___y_1179_, lean_box(0));
v___y_1182_ = v___x_1209_;
goto v___jp_1181_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg___boxed(lean_object* v_x_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v_x_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1216_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___redArg(lean_object* v_a_1224_, lean_object* v_x_1225_){
_start:
{
if (lean_obj_tag(v_x_1225_) == 0)
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_box(0);
return v___x_1226_;
}
else
{
lean_object* v_key_1227_; lean_object* v_value_1228_; lean_object* v_tail_1229_; uint8_t v___x_1230_; 
v_key_1227_ = lean_ctor_get(v_x_1225_, 0);
v_value_1228_ = lean_ctor_get(v_x_1225_, 1);
v_tail_1229_ = lean_ctor_get(v_x_1225_, 2);
v___x_1230_ = l_Lean_ExprStructEq_beq(v_key_1227_, v_a_1224_);
if (v___x_1230_ == 0)
{
v_x_1225_ = v_tail_1229_;
goto _start;
}
else
{
lean_object* v___x_1232_; 
lean_inc(v_value_1228_);
v___x_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1232_, 0, v_value_1228_);
return v___x_1232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___redArg___boxed(lean_object* v_a_1233_, lean_object* v_x_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___redArg(v_a_1233_, v_x_1234_);
lean_dec(v_x_1234_);
lean_dec_ref(v_a_1233_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(lean_object* v_m_1236_, lean_object* v_a_1237_){
_start:
{
lean_object* v_buckets_1238_; lean_object* v___x_1239_; uint64_t v___x_1240_; uint64_t v___x_1241_; uint64_t v___x_1242_; uint64_t v_fold_1243_; uint64_t v___x_1244_; uint64_t v___x_1245_; uint64_t v___x_1246_; size_t v___x_1247_; size_t v___x_1248_; size_t v___x_1249_; size_t v___x_1250_; size_t v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_buckets_1238_ = lean_ctor_get(v_m_1236_, 1);
v___x_1239_ = lean_array_get_size(v_buckets_1238_);
v___x_1240_ = l_Lean_ExprStructEq_hash(v_a_1237_);
v___x_1241_ = 32ULL;
v___x_1242_ = lean_uint64_shift_right(v___x_1240_, v___x_1241_);
v_fold_1243_ = lean_uint64_xor(v___x_1240_, v___x_1242_);
v___x_1244_ = 16ULL;
v___x_1245_ = lean_uint64_shift_right(v_fold_1243_, v___x_1244_);
v___x_1246_ = lean_uint64_xor(v_fold_1243_, v___x_1245_);
v___x_1247_ = lean_uint64_to_usize(v___x_1246_);
v___x_1248_ = lean_usize_of_nat(v___x_1239_);
v___x_1249_ = ((size_t)1ULL);
v___x_1250_ = lean_usize_sub(v___x_1248_, v___x_1249_);
v___x_1251_ = lean_usize_land(v___x_1247_, v___x_1250_);
v___x_1252_ = lean_array_uget_borrowed(v_buckets_1238_, v___x_1251_);
v___x_1253_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___redArg(v_a_1237_, v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg___boxed(lean_object* v_m_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(v_m_1254_, v_a_1255_);
lean_dec_ref(v_a_1255_);
lean_dec_ref(v_m_1254_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object* v_00_u03b1_1257_, lean_object* v_x_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1265_ = lean_apply_1(v_x_1258_, lean_box(0));
v___x_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v___y_1259_);
v___x_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object* v_00_u03b1_1268_, lean_object* v_x_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(v_00_u03b1_1268_, v_x_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object* v_fvars_1277_, lean_object* v_pre_1278_, lean_object* v_post_1279_, lean_object* v_usedLetOnly_1280_, lean_object* v_skipConstInApp_1281_, lean_object* v_skipInstances_1282_, lean_object* v_body_1283_, lean_object* v_x_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
uint8_t v_usedLetOnly_boxed_1292_; uint8_t v_skipConstInApp_boxed_1293_; uint8_t v_skipInstances_boxed_1294_; lean_object* v_res_1295_; 
v_usedLetOnly_boxed_1292_ = lean_unbox(v_usedLetOnly_1280_);
v_skipConstInApp_boxed_1293_ = lean_unbox(v_skipConstInApp_1281_);
v_skipInstances_boxed_1294_ = lean_unbox(v_skipInstances_1282_);
v_res_1295_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(v_fvars_1277_, v_pre_1278_, v_post_1279_, v_usedLetOnly_boxed_1292_, v_skipConstInApp_boxed_1293_, v_skipInstances_boxed_1294_, v_body_1283_, v_x_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1285_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object* v_fvars_1299_, lean_object* v_pre_1300_, lean_object* v_post_1301_, uint8_t v_usedLetOnly_1302_, uint8_t v_skipConstInApp_1303_, uint8_t v_skipInstances_1304_, lean_object* v_body_1305_, lean_object* v_x_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_array_push(v_fvars_1299_, v_x_1306_);
v___x_1315_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1300_, v_post_1301_, v_usedLetOnly_1302_, v_skipConstInApp_1303_, v_skipInstances_1304_, v___x_1314_, v_body_1305_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object* v_fvars_1316_, lean_object* v_pre_1317_, lean_object* v_post_1318_, lean_object* v_usedLetOnly_1319_, lean_object* v_skipConstInApp_1320_, lean_object* v_skipInstances_1321_, lean_object* v_body_1322_, lean_object* v_x_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
uint8_t v_usedLetOnly_boxed_1331_; uint8_t v_skipConstInApp_boxed_1332_; uint8_t v_skipInstances_boxed_1333_; lean_object* v_res_1334_; 
v_usedLetOnly_boxed_1331_ = lean_unbox(v_usedLetOnly_1319_);
v_skipConstInApp_boxed_1332_ = lean_unbox(v_skipConstInApp_1320_);
v_skipInstances_boxed_1333_ = lean_unbox(v_skipInstances_1321_);
v_res_1334_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(v_fvars_1316_, v_pre_1317_, v_post_1318_, v_usedLetOnly_boxed_1331_, v_skipConstInApp_boxed_1332_, v_skipInstances_boxed_1333_, v_body_1322_, v_x_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v___y_1324_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object* v_pre_1335_, lean_object* v_post_1336_, uint8_t v_usedLetOnly_1337_, uint8_t v_skipConstInApp_1338_, uint8_t v_skipInstances_1339_, lean_object* v_e_1340_, lean_object* v_a_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v___x_1348_; 
lean_inc_ref(v_post_1336_);
lean_inc(v___y_1346_);
lean_inc_ref(v___y_1345_);
lean_inc(v___y_1344_);
lean_inc_ref(v___y_1343_);
lean_inc_ref(v_e_1340_);
v___x_1348_ = lean_apply_7(v_post_1336_, v_e_1340_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, lean_box(0));
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1380_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1351_ = v___x_1348_;
v_isShared_1352_ = v_isSharedCheck_1380_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1380_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v_fst_1353_; lean_object* v_snd_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1379_; 
v_fst_1353_ = lean_ctor_get(v_a_1349_, 0);
v_snd_1354_ = lean_ctor_get(v_a_1349_, 1);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_a_1349_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1356_ = v_a_1349_;
v_isShared_1357_ = v_isSharedCheck_1379_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_snd_1354_);
lean_inc(v_fst_1353_);
lean_dec(v_a_1349_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1379_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___y_1359_; 
switch(lean_obj_tag(v_fst_1353_))
{
case 0:
{
lean_object* v_e_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1374_; 
lean_del_object(v___x_1356_);
lean_del_object(v___x_1351_);
lean_dec_ref(v_e_1340_);
lean_dec_ref(v_post_1336_);
lean_dec_ref(v_pre_1335_);
v_e_1366_ = lean_ctor_get(v_fst_1353_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_fst_1353_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1368_ = v_fst_1353_;
v_isShared_1369_ = v_isSharedCheck_1374_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_e_1366_);
lean_dec(v_fst_1353_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1374_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1370_, 0, v_e_1366_);
lean_ctor_set(v___x_1370_, 1, v_snd_1354_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 0, v___x_1370_);
v___x_1372_ = v___x_1368_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
case 1:
{
lean_object* v_e_1375_; lean_object* v___x_1376_; 
lean_del_object(v___x_1356_);
lean_del_object(v___x_1351_);
lean_dec_ref(v_e_1340_);
v_e_1375_ = lean_ctor_get(v_fst_1353_, 0);
lean_inc_ref(v_e_1375_);
lean_dec_ref_known(v_fst_1353_, 1);
v___x_1376_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1335_, v_post_1336_, v_usedLetOnly_1337_, v_skipConstInApp_1338_, v_skipInstances_1339_, v_e_1375_, v_a_1341_, v_snd_1354_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
return v___x_1376_;
}
default: 
{
lean_object* v_e_x3f_1377_; 
lean_dec_ref(v_post_1336_);
lean_dec_ref(v_pre_1335_);
v_e_x3f_1377_ = lean_ctor_get(v_fst_1353_, 0);
lean_inc(v_e_x3f_1377_);
lean_dec_ref_known(v_fst_1353_, 1);
if (lean_obj_tag(v_e_x3f_1377_) == 0)
{
v___y_1359_ = v_e_1340_;
goto v___jp_1358_;
}
else
{
lean_object* v_val_1378_; 
lean_dec_ref(v_e_1340_);
v_val_1378_ = lean_ctor_get(v_e_x3f_1377_, 0);
lean_inc(v_val_1378_);
lean_dec_ref_known(v_e_x3f_1377_, 1);
v___y_1359_ = v_val_1378_;
goto v___jp_1358_;
}
}
}
v___jp_1358_:
{
lean_object* v___x_1361_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 0, v___y_1359_);
v___x_1361_ = v___x_1356_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___y_1359_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v_snd_1354_);
v___x_1361_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
lean_object* v___x_1363_; 
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v___x_1361_);
v___x_1363_ = v___x_1351_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec_ref(v_e_1340_);
lean_dec_ref(v_post_1336_);
lean_dec_ref(v_pre_1335_);
v_a_1381_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1348_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1348_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object* v_pre_1389_, lean_object* v_post_1390_, uint8_t v_usedLetOnly_1391_, uint8_t v_skipConstInApp_1392_, uint8_t v_skipInstances_1393_, lean_object* v_fvars_1394_, lean_object* v_e_1395_, lean_object* v_a_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
if (lean_obj_tag(v_e_1395_) == 6)
{
lean_object* v_binderName_1403_; lean_object* v_binderType_1404_; lean_object* v_body_1405_; uint8_t v_binderInfo_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___f_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v_binderName_1403_ = lean_ctor_get(v_e_1395_, 0);
lean_inc(v_binderName_1403_);
v_binderType_1404_ = lean_ctor_get(v_e_1395_, 1);
lean_inc_ref(v_binderType_1404_);
v_body_1405_ = lean_ctor_get(v_e_1395_, 2);
lean_inc_ref(v_body_1405_);
v_binderInfo_1406_ = lean_ctor_get_uint8(v_e_1395_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1395_, 3);
v___x_1407_ = lean_box(v_usedLetOnly_1391_);
v___x_1408_ = lean_box(v_skipConstInApp_1392_);
v___x_1409_ = lean_box(v_skipInstances_1393_);
lean_inc_ref(v_post_1390_);
lean_inc_ref(v_pre_1389_);
lean_inc_ref(v_fvars_1394_);
v___f_1410_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1410_, 0, v_fvars_1394_);
lean_closure_set(v___f_1410_, 1, v_pre_1389_);
lean_closure_set(v___f_1410_, 2, v_post_1390_);
lean_closure_set(v___f_1410_, 3, v___x_1407_);
lean_closure_set(v___f_1410_, 4, v___x_1408_);
lean_closure_set(v___f_1410_, 5, v___x_1409_);
lean_closure_set(v___f_1410_, 6, v_body_1405_);
v___x_1411_ = lean_expr_instantiate_rev(v_binderType_1404_, v_fvars_1394_);
lean_dec_ref(v_fvars_1394_);
lean_dec_ref(v_binderType_1404_);
v___x_1412_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1389_, v_post_1390_, v_usedLetOnly_1391_, v_skipConstInApp_1392_, v_skipInstances_1393_, v___x_1411_, v_a_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v_fst_1414_; lean_object* v_snd_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_a_1413_);
lean_dec_ref_known(v___x_1412_, 1);
v_fst_1414_ = lean_ctor_get(v_a_1413_, 0);
lean_inc(v_fst_1414_);
v_snd_1415_ = lean_ctor_get(v_a_1413_, 1);
lean_inc(v_snd_1415_);
lean_dec(v_a_1413_);
v___x_1416_ = 0;
v___x_1417_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg(v_binderName_1403_, v_binderInfo_1406_, v_fst_1414_, v___f_1410_, v___x_1416_, v_a_1396_, v_snd_1415_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1417_;
}
else
{
lean_dec_ref(v___f_1410_);
lean_dec(v_binderName_1403_);
return v___x_1412_;
}
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_expr_instantiate_rev(v_e_1395_, v_fvars_1394_);
lean_dec_ref(v_e_1395_);
lean_inc_ref(v_post_1390_);
lean_inc_ref(v_pre_1389_);
v___x_1419_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1389_, v_post_1390_, v_usedLetOnly_1391_, v_skipConstInApp_1392_, v_skipInstances_1393_, v___x_1418_, v_a_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v_fst_1421_; lean_object* v_snd_1422_; uint8_t v___x_1423_; uint8_t v___x_1424_; uint8_t v___x_1425_; lean_object* v___x_1426_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v_fst_1421_ = lean_ctor_get(v_a_1420_, 0);
lean_inc(v_fst_1421_);
v_snd_1422_ = lean_ctor_get(v_a_1420_, 1);
lean_inc(v_snd_1422_);
lean_dec(v_a_1420_);
v___x_1423_ = 0;
v___x_1424_ = 1;
v___x_1425_ = 1;
v___x_1426_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1394_, v_fst_1421_, v___x_1423_, v_usedLetOnly_1391_, v___x_1423_, v___x_1424_, v___x_1425_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
lean_dec_ref(v_fvars_1394_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1428_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
v___x_1428_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1389_, v_post_1390_, v_usedLetOnly_1391_, v_skipConstInApp_1392_, v_skipInstances_1393_, v_a_1427_, v_a_1396_, v_snd_1422_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1428_;
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec(v_snd_1422_);
lean_dec_ref(v_post_1390_);
lean_dec_ref(v_pre_1389_);
v_a_1429_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1426_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1426_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1394_);
lean_dec_ref(v_post_1390_);
lean_dec_ref(v_pre_1389_);
return v___x_1419_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0(lean_object* v_fvars_1437_, lean_object* v_pre_1438_, lean_object* v_post_1439_, uint8_t v_usedLetOnly_1440_, uint8_t v_skipConstInApp_1441_, uint8_t v_skipInstances_1442_, lean_object* v_body_1443_, lean_object* v_x_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = lean_array_push(v_fvars_1437_, v_x_1444_);
v___x_1453_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_pre_1438_, v_post_1439_, v_usedLetOnly_1440_, v_skipConstInApp_1441_, v_skipInstances_1442_, v___x_1452_, v_body_1443_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0___boxed(lean_object* v_fvars_1454_, lean_object* v_pre_1455_, lean_object* v_post_1456_, lean_object* v_usedLetOnly_1457_, lean_object* v_skipConstInApp_1458_, lean_object* v_skipInstances_1459_, lean_object* v_body_1460_, lean_object* v_x_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
uint8_t v_usedLetOnly_boxed_1469_; uint8_t v_skipConstInApp_boxed_1470_; uint8_t v_skipInstances_boxed_1471_; lean_object* v_res_1472_; 
v_usedLetOnly_boxed_1469_ = lean_unbox(v_usedLetOnly_1457_);
v_skipConstInApp_boxed_1470_ = lean_unbox(v_skipConstInApp_1458_);
v_skipInstances_boxed_1471_ = lean_unbox(v_skipInstances_1459_);
v_res_1472_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0(v_fvars_1454_, v_pre_1455_, v_post_1456_, v_usedLetOnly_boxed_1469_, v_skipConstInApp_boxed_1470_, v_skipInstances_boxed_1471_, v_body_1460_, v_x_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1462_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(lean_object* v_pre_1473_, lean_object* v_post_1474_, uint8_t v_usedLetOnly_1475_, uint8_t v_skipConstInApp_1476_, uint8_t v_skipInstances_1477_, lean_object* v_fvars_1478_, lean_object* v_e_1479_, lean_object* v_a_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
if (lean_obj_tag(v_e_1479_) == 8)
{
lean_object* v_declName_1487_; lean_object* v_type_1488_; lean_object* v_value_1489_; lean_object* v_body_1490_; uint8_t v_nondep_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___f_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v_declName_1487_ = lean_ctor_get(v_e_1479_, 0);
lean_inc(v_declName_1487_);
v_type_1488_ = lean_ctor_get(v_e_1479_, 1);
lean_inc_ref(v_type_1488_);
v_value_1489_ = lean_ctor_get(v_e_1479_, 2);
lean_inc_ref(v_value_1489_);
v_body_1490_ = lean_ctor_get(v_e_1479_, 3);
lean_inc_ref(v_body_1490_);
v_nondep_1491_ = lean_ctor_get_uint8(v_e_1479_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1479_, 4);
v___x_1492_ = lean_box(v_usedLetOnly_1475_);
v___x_1493_ = lean_box(v_skipConstInApp_1476_);
v___x_1494_ = lean_box(v_skipInstances_1477_);
lean_inc_ref_n(v_post_1474_, 2);
lean_inc_ref_n(v_pre_1473_, 2);
lean_inc_ref(v_fvars_1478_);
v___f_1495_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1495_, 0, v_fvars_1478_);
lean_closure_set(v___f_1495_, 1, v_pre_1473_);
lean_closure_set(v___f_1495_, 2, v_post_1474_);
lean_closure_set(v___f_1495_, 3, v___x_1492_);
lean_closure_set(v___f_1495_, 4, v___x_1493_);
lean_closure_set(v___f_1495_, 5, v___x_1494_);
lean_closure_set(v___f_1495_, 6, v_body_1490_);
v___x_1496_ = lean_expr_instantiate_rev(v_type_1488_, v_fvars_1478_);
lean_dec_ref(v_type_1488_);
v___x_1497_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1473_, v_post_1474_, v_usedLetOnly_1475_, v_skipConstInApp_1476_, v_skipInstances_1477_, v___x_1496_, v_a_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v_fst_1499_; lean_object* v_snd_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v_fst_1499_ = lean_ctor_get(v_a_1498_, 0);
lean_inc(v_fst_1499_);
v_snd_1500_ = lean_ctor_get(v_a_1498_, 1);
lean_inc(v_snd_1500_);
lean_dec(v_a_1498_);
v___x_1501_ = lean_expr_instantiate_rev(v_value_1489_, v_fvars_1478_);
lean_dec_ref(v_fvars_1478_);
lean_dec_ref(v_value_1489_);
v___x_1502_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1473_, v_post_1474_, v_usedLetOnly_1475_, v_skipConstInApp_1476_, v_skipInstances_1477_, v___x_1501_, v_a_1480_, v_snd_1500_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v_fst_1504_; lean_object* v_snd_1505_; uint8_t v___x_1506_; lean_object* v___x_1507_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1503_);
lean_dec_ref_known(v___x_1502_, 1);
v_fst_1504_ = lean_ctor_get(v_a_1503_, 0);
lean_inc(v_fst_1504_);
v_snd_1505_ = lean_ctor_get(v_a_1503_, 1);
lean_inc(v_snd_1505_);
lean_dec(v_a_1503_);
v___x_1506_ = 0;
v___x_1507_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___redArg(v_declName_1487_, v_fst_1499_, v_fst_1504_, v___f_1495_, v_nondep_1491_, v___x_1506_, v_a_1480_, v_snd_1505_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
return v___x_1507_;
}
else
{
lean_dec(v_fst_1499_);
lean_dec_ref(v___f_1495_);
lean_dec(v_declName_1487_);
return v___x_1502_;
}
}
else
{
lean_dec_ref(v___f_1495_);
lean_dec_ref(v_value_1489_);
lean_dec(v_declName_1487_);
lean_dec_ref(v_fvars_1478_);
lean_dec_ref(v_post_1474_);
lean_dec_ref(v_pre_1473_);
return v___x_1497_;
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = lean_expr_instantiate_rev(v_e_1479_, v_fvars_1478_);
lean_dec_ref(v_e_1479_);
lean_inc_ref(v_post_1474_);
lean_inc_ref(v_pre_1473_);
v___x_1509_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1473_, v_post_1474_, v_usedLetOnly_1475_, v_skipConstInApp_1476_, v_skipInstances_1477_, v___x_1508_, v_a_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v_fst_1511_; lean_object* v_snd_1512_; uint8_t v___x_1513_; uint8_t v___x_1514_; lean_object* v___x_1515_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1509_, 1);
v_fst_1511_ = lean_ctor_get(v_a_1510_, 0);
lean_inc(v_fst_1511_);
v_snd_1512_ = lean_ctor_get(v_a_1510_, 1);
lean_inc(v_snd_1512_);
lean_dec(v_a_1510_);
v___x_1513_ = 0;
v___x_1514_ = 1;
v___x_1515_ = l_Lean_Meta_mkLetFVars(v_fvars_1478_, v_fst_1511_, v_usedLetOnly_1475_, v___x_1513_, v___x_1514_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
lean_dec_ref(v_fvars_1478_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1517_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_a_1516_);
lean_dec_ref_known(v___x_1515_, 1);
v___x_1517_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1473_, v_post_1474_, v_usedLetOnly_1475_, v_skipConstInApp_1476_, v_skipInstances_1477_, v_a_1516_, v_a_1480_, v_snd_1512_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
return v___x_1517_;
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_dec(v_snd_1512_);
lean_dec_ref(v_post_1474_);
lean_dec_ref(v_pre_1473_);
v_a_1518_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1515_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1515_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1478_);
lean_dec_ref(v_post_1474_);
lean_dec_ref(v_pre_1473_);
return v___x_1509_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object* v_pre_1526_, lean_object* v_post_1527_, uint8_t v_usedLetOnly_1528_, uint8_t v_skipConstInApp_1529_, uint8_t v_skipInstances_1530_, size_t v_sz_1531_, size_t v_i_1532_, lean_object* v_bs_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
uint8_t v___x_1541_; 
v___x_1541_ = lean_usize_dec_lt(v_i_1532_, v_sz_1531_);
if (v___x_1541_ == 0)
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
lean_dec_ref(v_post_1527_);
lean_dec_ref(v_pre_1526_);
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v_bs_1533_);
lean_ctor_set(v___x_1542_, 1, v___y_1535_);
v___x_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
return v___x_1543_;
}
else
{
lean_object* v_v_1544_; lean_object* v___x_1545_; lean_object* v_bs_x27_1546_; lean_object* v___x_1547_; 
v_v_1544_ = lean_array_uget(v_bs_1533_, v_i_1532_);
v___x_1545_ = lean_unsigned_to_nat(0u);
v_bs_x27_1546_ = lean_array_uset(v_bs_1533_, v_i_1532_, v___x_1545_);
lean_inc_ref(v_post_1527_);
lean_inc_ref(v_pre_1526_);
v___x_1547_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1526_, v_post_1527_, v_usedLetOnly_1528_, v_skipConstInApp_1529_, v_skipInstances_1530_, v_v_1544_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v_fst_1549_; lean_object* v_snd_1550_; size_t v___x_1551_; size_t v___x_1552_; lean_object* v___x_1553_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1547_, 1);
v_fst_1549_ = lean_ctor_get(v_a_1548_, 0);
lean_inc(v_fst_1549_);
v_snd_1550_ = lean_ctor_get(v_a_1548_, 1);
lean_inc(v_snd_1550_);
lean_dec(v_a_1548_);
v___x_1551_ = ((size_t)1ULL);
v___x_1552_ = lean_usize_add(v_i_1532_, v___x_1551_);
v___x_1553_ = lean_array_uset(v_bs_x27_1546_, v_i_1532_, v_fst_1549_);
v_i_1532_ = v___x_1552_;
v_bs_1533_ = v___x_1553_;
v___y_1535_ = v_snd_1550_;
goto _start;
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
lean_dec_ref(v_bs_x27_1546_);
lean_dec_ref(v_post_1527_);
lean_dec_ref(v_pre_1526_);
v_a_1555_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1547_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1547_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0(lean_object* v_pre_1563_, lean_object* v_post_1564_, uint8_t v_usedLetOnly_1565_, uint8_t v_skipConstInApp_1566_, uint8_t v_skipInstances_1567_, lean_object* v___x_1568_, lean_object* v___y_1569_, lean_object* v_b_1570_, lean_object* v_a_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1563_, v_post_1564_, v_usedLetOnly_1565_, v_skipConstInApp_1566_, v_skipInstances_1567_, v___x_1568_, v___y_1569_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1597_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1581_ = v___x_1578_;
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1578_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v_fst_1583_; lean_object* v_snd_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1596_; 
v_fst_1583_ = lean_ctor_get(v_a_1579_, 0);
v_snd_1584_ = lean_ctor_get(v_a_1579_, 1);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_a_1579_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1586_ = v_a_1579_;
v_isShared_1587_ = v_isSharedCheck_1596_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_snd_1584_);
lean_inc(v_fst_1583_);
lean_dec(v_a_1579_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1596_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1591_; 
v___x_1588_ = lean_array_fset(v_b_1570_, v_a_1571_, v_fst_1583_);
v___x_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 0, v___x_1589_);
v___x_1591_ = v___x_1586_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1589_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v_snd_1584_);
v___x_1591_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1593_; 
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 0, v___x_1591_);
v___x_1593_ = v___x_1581_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec_ref(v_b_1570_);
v_a_1598_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1578_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1578_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed(lean_object* v_pre_1606_, lean_object* v_post_1607_, lean_object* v_usedLetOnly_1608_, lean_object* v_skipConstInApp_1609_, lean_object* v_skipInstances_1610_, lean_object* v___x_1611_, lean_object* v___y_1612_, lean_object* v_b_1613_, lean_object* v_a_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
uint8_t v_usedLetOnly_boxed_1621_; uint8_t v_skipConstInApp_boxed_1622_; uint8_t v_skipInstances_boxed_1623_; lean_object* v_res_1624_; 
v_usedLetOnly_boxed_1621_ = lean_unbox(v_usedLetOnly_1608_);
v_skipConstInApp_boxed_1622_ = lean_unbox(v_skipConstInApp_1609_);
v_skipInstances_boxed_1623_ = lean_unbox(v_skipInstances_1610_);
v_res_1624_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0(v_pre_1606_, v_post_1607_, v_usedLetOnly_boxed_1621_, v_skipConstInApp_boxed_1622_, v_skipInstances_boxed_1623_, v___x_1611_, v___y_1612_, v_b_1613_, v_a_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v_a_1614_);
lean_dec(v___y_1612_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object* v_upperBound_1625_, lean_object* v___x_1626_, lean_object* v_pre_1627_, lean_object* v_post_1628_, uint8_t v_usedLetOnly_1629_, uint8_t v_skipConstInApp_1630_, uint8_t v_skipInstances_1631_, lean_object* v_a_1632_, lean_object* v_b_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v___y_1642_; uint8_t v___x_1676_; 
v___x_1676_ = lean_nat_dec_lt(v_a_1632_, v_upperBound_1625_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
lean_dec(v_a_1632_);
lean_dec_ref(v_post_1628_);
lean_dec_ref(v_pre_1627_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v_b_1633_);
lean_ctor_set(v___x_1677_, 1, v___y_1635_);
v___x_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
return v___x_1678_;
}
else
{
lean_object* v___x_1679_; lean_object* v___x_1680_; uint8_t v___x_1681_; 
v___x_1679_ = lean_array_fget_borrowed(v_b_1633_, v_a_1632_);
v___x_1680_ = lean_array_get_size(v___x_1626_);
v___x_1681_ = lean_nat_dec_lt(v_a_1632_, v___x_1680_);
if (v___x_1681_ == 0)
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___f_1685_; 
lean_inc(v___x_1679_);
v___x_1682_ = lean_box(v_usedLetOnly_1629_);
v___x_1683_ = lean_box(v_skipConstInApp_1630_);
v___x_1684_ = lean_box(v_skipInstances_1631_);
lean_inc(v_a_1632_);
lean_inc(v___y_1634_);
lean_inc_ref(v_post_1628_);
lean_inc_ref(v_pre_1627_);
v___f_1685_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1685_, 0, v_pre_1627_);
lean_closure_set(v___f_1685_, 1, v_post_1628_);
lean_closure_set(v___f_1685_, 2, v___x_1682_);
lean_closure_set(v___f_1685_, 3, v___x_1683_);
lean_closure_set(v___f_1685_, 4, v___x_1684_);
lean_closure_set(v___f_1685_, 5, v___x_1679_);
lean_closure_set(v___f_1685_, 6, v___y_1634_);
lean_closure_set(v___f_1685_, 7, v_b_1633_);
lean_closure_set(v___f_1685_, 8, v_a_1632_);
v___y_1642_ = v___f_1685_;
goto v___jp_1641_;
}
else
{
lean_object* v___x_1686_; uint8_t v_isInstance_1687_; 
v___x_1686_ = lean_array_fget_borrowed(v___x_1626_, v_a_1632_);
v_isInstance_1687_ = lean_ctor_get_uint8(v___x_1686_, sizeof(void*)*1 + 4);
if (v_isInstance_1687_ == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___f_1691_; 
lean_inc(v___x_1679_);
v___x_1688_ = lean_box(v_usedLetOnly_1629_);
v___x_1689_ = lean_box(v_skipConstInApp_1630_);
v___x_1690_ = lean_box(v_skipInstances_1631_);
lean_inc(v_a_1632_);
lean_inc(v___y_1634_);
lean_inc_ref(v_post_1628_);
lean_inc_ref(v_pre_1627_);
v___f_1691_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1691_, 0, v_pre_1627_);
lean_closure_set(v___f_1691_, 1, v_post_1628_);
lean_closure_set(v___f_1691_, 2, v___x_1688_);
lean_closure_set(v___f_1691_, 3, v___x_1689_);
lean_closure_set(v___f_1691_, 4, v___x_1690_);
lean_closure_set(v___f_1691_, 5, v___x_1679_);
lean_closure_set(v___f_1691_, 6, v___y_1634_);
lean_closure_set(v___f_1691_, 7, v_b_1633_);
lean_closure_set(v___f_1691_, 8, v_a_1632_);
v___y_1642_ = v___f_1691_;
goto v___jp_1641_;
}
else
{
lean_object* v___x_1692_; lean_object* v___f_1693_; 
v___x_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1692_, 0, v_b_1633_);
v___f_1693_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2___boxed), 7, 1);
lean_closure_set(v___f_1693_, 0, v___x_1692_);
v___y_1642_ = v___f_1693_;
goto v___jp_1641_;
}
}
}
v___jp_1641_:
{
lean_object* v___x_1643_; 
lean_inc(v___y_1639_);
lean_inc_ref(v___y_1638_);
lean_inc(v___y_1637_);
lean_inc_ref(v___y_1636_);
v___x_1643_ = lean_apply_6(v___y_1642_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, lean_box(0));
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1667_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1646_ = v___x_1643_;
v_isShared_1647_ = v_isSharedCheck_1667_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1643_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1667_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v_fst_1648_; 
v_fst_1648_ = lean_ctor_get(v_a_1644_, 0);
lean_inc(v_fst_1648_);
if (lean_obj_tag(v_fst_1648_) == 0)
{
lean_object* v_snd_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_a_1632_);
lean_dec_ref(v_post_1628_);
lean_dec_ref(v_pre_1627_);
v_snd_1649_ = lean_ctor_get(v_a_1644_, 1);
v_isSharedCheck_1660_ = !lean_is_exclusive(v_a_1644_);
if (v_isSharedCheck_1660_ == 0)
{
lean_object* v_unused_1661_; 
v_unused_1661_ = lean_ctor_get(v_a_1644_, 0);
lean_dec(v_unused_1661_);
v___x_1651_ = v_a_1644_;
v_isShared_1652_ = v_isSharedCheck_1660_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_snd_1649_);
lean_dec(v_a_1644_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1660_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v_a_1653_; lean_object* v___x_1655_; 
v_a_1653_ = lean_ctor_get(v_fst_1648_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v_fst_1648_, 1);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v_a_1653_);
v___x_1655_ = v___x_1651_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
lean_ctor_set(v_reuseFailAlloc_1659_, 1, v_snd_1649_);
v___x_1655_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
lean_object* v___x_1657_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 0, v___x_1655_);
v___x_1657_ = v___x_1646_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v___x_1655_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
else
{
lean_object* v_snd_1662_; lean_object* v_a_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
lean_del_object(v___x_1646_);
v_snd_1662_ = lean_ctor_get(v_a_1644_, 1);
lean_inc(v_snd_1662_);
lean_dec(v_a_1644_);
v_a_1663_ = lean_ctor_get(v_fst_1648_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v_fst_1648_, 1);
v___x_1664_ = lean_unsigned_to_nat(1u);
v___x_1665_ = lean_nat_add(v_a_1632_, v___x_1664_);
lean_dec(v_a_1632_);
v_a_1632_ = v___x_1665_;
v_b_1633_ = v_a_1663_;
v___y_1635_ = v_snd_1662_;
goto _start;
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec(v_a_1632_);
lean_dec_ref(v_post_1628_);
lean_dec_ref(v_pre_1627_);
v_a_1668_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1643_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1643_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(uint8_t v_skipInstances_1694_, lean_object* v_pre_1695_, lean_object* v_post_1696_, uint8_t v_usedLetOnly_1697_, uint8_t v_skipConstInApp_1698_, lean_object* v_x_1699_, lean_object* v_x_1700_, lean_object* v_x_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v_f_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; 
if (lean_obj_tag(v_x_1699_) == 5)
{
lean_object* v_fn_1765_; lean_object* v_arg_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v_fn_1765_ = lean_ctor_get(v_x_1699_, 0);
lean_inc_ref(v_fn_1765_);
v_arg_1766_ = lean_ctor_get(v_x_1699_, 1);
lean_inc_ref(v_arg_1766_);
lean_dec_ref_known(v_x_1699_, 2);
v___x_1767_ = lean_array_set(v_x_1700_, v_x_1701_, v_arg_1766_);
v___x_1768_ = lean_unsigned_to_nat(1u);
v___x_1769_ = lean_nat_sub(v_x_1701_, v___x_1768_);
lean_dec(v_x_1701_);
v_x_1699_ = v_fn_1765_;
v_x_1700_ = v___x_1767_;
v_x_1701_ = v___x_1769_;
goto _start;
}
else
{
lean_dec(v_x_1701_);
if (v_skipConstInApp_1698_ == 0)
{
goto v___jp_1760_;
}
else
{
uint8_t v___x_1771_; 
v___x_1771_ = l_Lean_Expr_isConst(v_x_1699_);
if (v___x_1771_ == 0)
{
goto v___jp_1760_;
}
else
{
v_f_1710_ = v_x_1699_;
v___y_1711_ = v___y_1702_;
v___y_1712_ = v___y_1703_;
v___y_1713_ = v___y_1704_;
v___y_1714_ = v___y_1705_;
v___y_1715_ = v___y_1706_;
v___y_1716_ = v___y_1707_;
goto v___jp_1709_;
}
}
}
v___jp_1709_:
{
if (v_skipInstances_1694_ == 0)
{
size_t v_sz_1717_; size_t v___x_1718_; lean_object* v___x_1719_; 
v_sz_1717_ = lean_array_size(v_x_1700_);
v___x_1718_ = ((size_t)0ULL);
lean_inc_ref(v_post_1696_);
lean_inc_ref(v_pre_1695_);
v___x_1719_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1695_, v_post_1696_, v_usedLetOnly_1697_, v_skipConstInApp_1698_, v_skipInstances_1694_, v_sz_1717_, v___x_1718_, v_x_1700_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; lean_object* v_fst_1721_; lean_object* v_snd_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___x_1719_, 1);
v_fst_1721_ = lean_ctor_get(v_a_1720_, 0);
lean_inc(v_fst_1721_);
v_snd_1722_ = lean_ctor_get(v_a_1720_, 1);
lean_inc(v_snd_1722_);
lean_dec(v_a_1720_);
v___x_1723_ = l_Lean_mkAppN(v_f_1710_, v_fst_1721_);
lean_dec(v_fst_1721_);
v___x_1724_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1695_, v_post_1696_, v_usedLetOnly_1697_, v_skipConstInApp_1698_, v_skipInstances_1694_, v___x_1723_, v___y_1711_, v_snd_1722_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
return v___x_1724_;
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec_ref(v_f_1710_);
lean_dec_ref(v_post_1696_);
lean_dec_ref(v_pre_1695_);
v_a_1725_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1719_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1719_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
else
{
lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1733_ = lean_array_get_size(v_x_1700_);
lean_inc_ref(v_f_1710_);
v___x_1734_ = l_Lean_Meta_getFunInfoNArgs(v_f_1710_, v___x_1733_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; lean_object* v_paramInfo_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_a_1735_);
lean_dec_ref_known(v___x_1734_, 1);
v_paramInfo_1736_ = lean_ctor_get(v_a_1735_, 0);
lean_inc_ref(v_paramInfo_1736_);
lean_dec(v_a_1735_);
v___x_1737_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1696_);
lean_inc_ref(v_pre_1695_);
v___x_1738_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v___x_1733_, v_paramInfo_1736_, v_pre_1695_, v_post_1696_, v_usedLetOnly_1697_, v_skipConstInApp_1698_, v_skipInstances_1694_, v___x_1737_, v_x_1700_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
lean_dec_ref(v_paramInfo_1736_);
if (lean_obj_tag(v___x_1738_) == 0)
{
lean_object* v_a_1739_; lean_object* v_fst_1740_; lean_object* v_snd_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v_a_1739_ = lean_ctor_get(v___x_1738_, 0);
lean_inc(v_a_1739_);
lean_dec_ref_known(v___x_1738_, 1);
v_fst_1740_ = lean_ctor_get(v_a_1739_, 0);
lean_inc(v_fst_1740_);
v_snd_1741_ = lean_ctor_get(v_a_1739_, 1);
lean_inc(v_snd_1741_);
lean_dec(v_a_1739_);
v___x_1742_ = l_Lean_mkAppN(v_f_1710_, v_fst_1740_);
lean_dec(v_fst_1740_);
v___x_1743_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1695_, v_post_1696_, v_usedLetOnly_1697_, v_skipConstInApp_1698_, v_skipInstances_1694_, v___x_1742_, v___y_1711_, v_snd_1741_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
return v___x_1743_;
}
else
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
lean_dec_ref(v_f_1710_);
lean_dec_ref(v_post_1696_);
lean_dec_ref(v_pre_1695_);
v_a_1744_ = lean_ctor_get(v___x_1738_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___x_1738_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1738_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
lean_dec(v___y_1712_);
lean_dec_ref(v_f_1710_);
lean_dec_ref(v_x_1700_);
lean_dec_ref(v_post_1696_);
lean_dec_ref(v_pre_1695_);
v_a_1752_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1754_ = v___x_1734_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_a_1752_);
lean_dec(v___x_1734_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_a_1752_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
v___jp_1760_:
{
lean_object* v___x_1761_; 
lean_inc_ref(v_post_1696_);
lean_inc_ref(v_pre_1695_);
v___x_1761_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1695_, v_post_1696_, v_usedLetOnly_1697_, v_skipConstInApp_1698_, v_skipInstances_1694_, v_x_1699_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v_fst_1763_; lean_object* v_snd_1764_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v___x_1761_, 1);
v_fst_1763_ = lean_ctor_get(v_a_1762_, 0);
lean_inc(v_fst_1763_);
v_snd_1764_ = lean_ctor_get(v_a_1762_, 1);
lean_inc(v_snd_1764_);
lean_dec(v_a_1762_);
v_f_1710_ = v_fst_1763_;
v___y_1711_ = v___y_1702_;
v___y_1712_ = v_snd_1764_;
v___y_1713_ = v___y_1704_;
v___y_1714_ = v___y_1705_;
v___y_1715_ = v___y_1706_;
v___y_1716_ = v___y_1707_;
goto v___jp_1709_;
}
else
{
lean_dec_ref(v_x_1700_);
lean_dec_ref(v_post_1696_);
lean_dec_ref(v_pre_1695_);
return v___x_1761_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object* v___x_1772_, lean_object* v_pre_1773_, lean_object* v_e_1774_, lean_object* v_post_1775_, uint8_t v_usedLetOnly_1776_, uint8_t v_skipConstInApp_1777_, uint8_t v_skipInstances_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lean_Core_checkSystem(v___x_1772_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v___x_1787_; 
lean_dec_ref_known(v___x_1786_, 1);
lean_inc_ref(v_pre_1773_);
lean_inc(v___y_1784_);
lean_inc_ref(v___y_1783_);
lean_inc(v___y_1782_);
lean_inc_ref(v___y_1781_);
lean_inc_ref(v_e_1774_);
v___x_1787_ = lean_apply_7(v_pre_1773_, v_e_1774_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, lean_box(0));
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1849_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1790_ = v___x_1787_;
v_isShared_1791_ = v_isSharedCheck_1849_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1787_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1849_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v_fst_1792_; lean_object* v_snd_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1848_; 
v_fst_1792_ = lean_ctor_get(v_a_1788_, 0);
v_snd_1793_ = lean_ctor_get(v_a_1788_, 1);
v_isSharedCheck_1848_ = !lean_is_exclusive(v_a_1788_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1795_ = v_a_1788_;
v_isShared_1796_ = v_isSharedCheck_1848_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_snd_1793_);
lean_inc(v_fst_1792_);
lean_dec(v_a_1788_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1848_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___y_1798_; 
switch(lean_obj_tag(v_fst_1792_))
{
case 0:
{
lean_object* v_e_1837_; lean_object* v___x_1839_; 
lean_dec_ref(v_post_1775_);
lean_dec_ref(v_e_1774_);
lean_dec_ref(v_pre_1773_);
v_e_1837_ = lean_ctor_get(v_fst_1792_, 0);
lean_inc_ref(v_e_1837_);
lean_dec_ref_known(v_fst_1792_, 1);
if (v_isShared_1796_ == 0)
{
lean_ctor_set(v___x_1795_, 0, v_e_1837_);
v___x_1839_ = v___x_1795_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_e_1837_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v_snd_1793_);
v___x_1839_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
lean_object* v___x_1841_; 
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 0, v___x_1839_);
v___x_1841_ = v___x_1790_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
case 1:
{
lean_object* v_e_1844_; lean_object* v___x_1845_; 
lean_del_object(v___x_1795_);
lean_del_object(v___x_1790_);
lean_dec_ref(v_e_1774_);
v_e_1844_ = lean_ctor_get(v_fst_1792_, 0);
lean_inc_ref(v_e_1844_);
lean_dec_ref_known(v_fst_1792_, 1);
v___x_1845_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v_e_1844_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1845_;
}
default: 
{
lean_object* v_e_x3f_1846_; 
lean_del_object(v___x_1795_);
lean_del_object(v___x_1790_);
v_e_x3f_1846_ = lean_ctor_get(v_fst_1792_, 0);
lean_inc(v_e_x3f_1846_);
lean_dec_ref_known(v_fst_1792_, 1);
if (lean_obj_tag(v_e_x3f_1846_) == 0)
{
v___y_1798_ = v_e_1774_;
goto v___jp_1797_;
}
else
{
lean_object* v_val_1847_; 
lean_dec_ref(v_e_1774_);
v_val_1847_ = lean_ctor_get(v_e_x3f_1846_, 0);
lean_inc(v_val_1847_);
lean_dec_ref_known(v_e_x3f_1846_, 1);
v___y_1798_ = v_val_1847_;
goto v___jp_1797_;
}
}
}
v___jp_1797_:
{
switch(lean_obj_tag(v___y_1798_))
{
case 7:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1800_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___x_1799_, v___y_1798_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1800_;
}
case 6:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1802_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___x_1801_, v___y_1798_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1802_;
}
case 8:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1804_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___x_1803_, v___y_1798_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1804_;
}
case 5:
{
lean_object* v_dummy_1805_; lean_object* v_nargs_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v_dummy_1805_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_1806_ = l_Lean_Expr_getAppNumArgs(v___y_1798_);
lean_inc(v_nargs_1806_);
v___x_1807_ = lean_mk_array(v_nargs_1806_, v_dummy_1805_);
v___x_1808_ = lean_unsigned_to_nat(1u);
v___x_1809_ = lean_nat_sub(v_nargs_1806_, v___x_1808_);
lean_dec(v_nargs_1806_);
v___x_1810_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(v_skipInstances_1778_, v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v___y_1798_, v___x_1807_, v___x_1809_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1810_;
}
case 10:
{
lean_object* v_data_1811_; lean_object* v_expr_1812_; lean_object* v___x_1813_; 
v_data_1811_ = lean_ctor_get(v___y_1798_, 0);
v_expr_1812_ = lean_ctor_get(v___y_1798_, 1);
lean_inc_ref(v_expr_1812_);
lean_inc_ref(v_post_1775_);
lean_inc_ref(v_pre_1773_);
v___x_1813_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v_expr_1812_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; lean_object* v_fst_1815_; lean_object* v_snd_1816_; size_t v___x_1817_; size_t v___x_1818_; uint8_t v___x_1819_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
lean_dec_ref_known(v___x_1813_, 1);
v_fst_1815_ = lean_ctor_get(v_a_1814_, 0);
lean_inc(v_fst_1815_);
v_snd_1816_ = lean_ctor_get(v_a_1814_, 1);
lean_inc(v_snd_1816_);
lean_dec(v_a_1814_);
v___x_1817_ = lean_ptr_addr(v_expr_1812_);
v___x_1818_ = lean_ptr_addr(v_fst_1815_);
v___x_1819_ = lean_usize_dec_eq(v___x_1817_, v___x_1818_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
lean_inc(v_data_1811_);
lean_dec_ref_known(v___y_1798_, 2);
v___x_1820_ = l_Lean_Expr_mdata___override(v_data_1811_, v_fst_1815_);
v___x_1821_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___x_1820_, v___y_1779_, v_snd_1816_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1821_;
}
else
{
lean_object* v___x_1822_; 
lean_dec(v_fst_1815_);
v___x_1822_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___y_1798_, v___y_1779_, v_snd_1816_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1822_;
}
}
else
{
lean_dec_ref_known(v___y_1798_, 2);
lean_dec_ref(v_post_1775_);
lean_dec_ref(v_pre_1773_);
return v___x_1813_;
}
}
case 11:
{
lean_object* v_typeName_1823_; lean_object* v_idx_1824_; lean_object* v_struct_1825_; lean_object* v___x_1826_; 
v_typeName_1823_ = lean_ctor_get(v___y_1798_, 0);
v_idx_1824_ = lean_ctor_get(v___y_1798_, 1);
v_struct_1825_ = lean_ctor_get(v___y_1798_, 2);
lean_inc_ref(v_struct_1825_);
lean_inc_ref(v_post_1775_);
lean_inc_ref(v_pre_1773_);
v___x_1826_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v_struct_1825_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v_fst_1828_; lean_object* v_snd_1829_; size_t v___x_1830_; size_t v___x_1831_; uint8_t v___x_1832_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v___x_1826_, 1);
v_fst_1828_ = lean_ctor_get(v_a_1827_, 0);
lean_inc(v_fst_1828_);
v_snd_1829_ = lean_ctor_get(v_a_1827_, 1);
lean_inc(v_snd_1829_);
lean_dec(v_a_1827_);
v___x_1830_ = lean_ptr_addr(v_struct_1825_);
v___x_1831_ = lean_ptr_addr(v_fst_1828_);
v___x_1832_ = lean_usize_dec_eq(v___x_1830_, v___x_1831_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
lean_inc(v_idx_1824_);
lean_inc(v_typeName_1823_);
lean_dec_ref_known(v___y_1798_, 3);
v___x_1833_ = l_Lean_Expr_proj___override(v_typeName_1823_, v_idx_1824_, v_fst_1828_);
v___x_1834_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___x_1833_, v___y_1779_, v_snd_1829_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; 
lean_dec(v_fst_1828_);
v___x_1835_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___y_1798_, v___y_1779_, v_snd_1829_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1835_;
}
}
else
{
lean_dec_ref_known(v___y_1798_, 3);
lean_dec_ref(v_post_1775_);
lean_dec_ref(v_pre_1773_);
return v___x_1826_;
}
}
default: 
{
lean_object* v___x_1836_; 
v___x_1836_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1773_, v_post_1775_, v_usedLetOnly_1776_, v_skipConstInApp_1777_, v_skipInstances_1778_, v___y_1798_, v___y_1779_, v_snd_1793_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1836_;
}
}
}
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_dec_ref(v_post_1775_);
lean_dec_ref(v_e_1774_);
lean_dec_ref(v_pre_1773_);
v_a_1850_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1787_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1787_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
lean_dec(v___y_1780_);
lean_dec_ref(v_post_1775_);
lean_dec_ref(v_e_1774_);
lean_dec_ref(v_pre_1773_);
v_a_1858_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1786_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1786_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object* v___x_1866_, lean_object* v_pre_1867_, lean_object* v_e_1868_, lean_object* v_post_1869_, lean_object* v_usedLetOnly_1870_, lean_object* v_skipConstInApp_1871_, lean_object* v_skipInstances_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
uint8_t v_usedLetOnly_boxed_1880_; uint8_t v_skipConstInApp_boxed_1881_; uint8_t v_skipInstances_boxed_1882_; lean_object* v_res_1883_; 
v_usedLetOnly_boxed_1880_ = lean_unbox(v_usedLetOnly_1870_);
v_skipConstInApp_boxed_1881_ = lean_unbox(v_skipConstInApp_1871_);
v_skipInstances_boxed_1882_ = lean_unbox(v_skipInstances_1872_);
v_res_1883_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(v___x_1866_, v_pre_1867_, v_e_1868_, v_post_1869_, v_usedLetOnly_boxed_1880_, v_skipConstInApp_boxed_1881_, v_skipInstances_boxed_1882_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1873_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object* v_pre_1884_, lean_object* v_post_1885_, uint8_t v_usedLetOnly_1886_, uint8_t v_skipConstInApp_1887_, uint8_t v_skipInstances_1888_, lean_object* v_e_1889_, lean_object* v_a_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
lean_inc(v_a_1890_);
v___x_1897_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1897_, 0, lean_box(0));
lean_closure_set(v___x_1897_, 1, lean_box(0));
lean_closure_set(v___x_1897_, 2, v_a_1890_);
v___x_1898_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___x_1897_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1953_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1901_ = v___x_1898_;
v_isShared_1902_ = v_isSharedCheck_1953_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1898_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1953_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v_fst_1903_; lean_object* v_snd_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1952_; 
v_fst_1903_ = lean_ctor_get(v_a_1899_, 0);
v_snd_1904_ = lean_ctor_get(v_a_1899_, 1);
v_isSharedCheck_1952_ = !lean_is_exclusive(v_a_1899_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1906_ = v_a_1899_;
v_isShared_1907_ = v_isSharedCheck_1952_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_snd_1904_);
lean_inc(v_fst_1903_);
lean_dec(v_a_1899_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1952_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(v_fst_1903_, v_e_1889_);
lean_dec(v_fst_1903_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___f_1913_; lean_object* v___x_1914_; 
lean_del_object(v___x_1906_);
lean_del_object(v___x_1901_);
v___x_1909_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0));
v___x_1910_ = lean_box(v_usedLetOnly_1886_);
v___x_1911_ = lean_box(v_skipConstInApp_1887_);
v___x_1912_ = lean_box(v_skipInstances_1888_);
lean_inc_ref(v_e_1889_);
v___f_1913_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1913_, 0, v___x_1909_);
lean_closure_set(v___f_1913_, 1, v_pre_1884_);
lean_closure_set(v___f_1913_, 2, v_e_1889_);
lean_closure_set(v___f_1913_, 3, v_post_1885_);
lean_closure_set(v___f_1913_, 4, v___x_1910_);
lean_closure_set(v___f_1913_, 5, v___x_1911_);
lean_closure_set(v___f_1913_, 6, v___x_1912_);
v___x_1914_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v___f_1913_, v_a_1890_, v_snd_1904_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v_fst_1916_; lean_object* v_snd_1917_; lean_object* v___f_1918_; lean_object* v___x_1919_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v_fst_1916_ = lean_ctor_get(v_a_1915_, 0);
lean_inc_n(v_fst_1916_, 2);
v_snd_1917_ = lean_ctor_get(v_a_1915_, 1);
lean_inc(v_snd_1917_);
lean_dec(v_a_1915_);
lean_inc(v_a_1890_);
v___f_1918_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1918_, 0, v_a_1890_);
lean_closure_set(v___f_1918_, 1, v_e_1889_);
lean_closure_set(v___f_1918_, 2, v_fst_1916_);
v___x_1919_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___f_1918_, v_snd_1917_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1936_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1922_ = v___x_1919_;
v_isShared_1923_ = v_isSharedCheck_1936_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1919_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1936_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v_snd_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1934_; 
v_snd_1924_ = lean_ctor_get(v_a_1920_, 1);
v_isSharedCheck_1934_ = !lean_is_exclusive(v_a_1920_);
if (v_isSharedCheck_1934_ == 0)
{
lean_object* v_unused_1935_; 
v_unused_1935_ = lean_ctor_get(v_a_1920_, 0);
lean_dec(v_unused_1935_);
v___x_1926_ = v_a_1920_;
v_isShared_1927_ = v_isSharedCheck_1934_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_snd_1924_);
lean_dec(v_a_1920_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1934_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v_fst_1916_);
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_fst_1916_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_snd_1924_);
v___x_1929_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1931_; 
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v___x_1929_);
v___x_1931_ = v___x_1922_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1929_);
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
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec(v_fst_1916_);
v_a_1937_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1919_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1919_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
else
{
lean_dec_ref(v_e_1889_);
return v___x_1914_;
}
}
else
{
lean_object* v_val_1945_; lean_object* v___x_1947_; 
lean_dec_ref(v_e_1889_);
lean_dec_ref(v_post_1885_);
lean_dec_ref(v_pre_1884_);
v_val_1945_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_val_1945_);
lean_dec_ref_known(v___x_1908_, 1);
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 0, v_val_1945_);
v___x_1947_ = v___x_1906_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_val_1945_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_snd_1904_);
v___x_1947_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
lean_object* v___x_1949_; 
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v___x_1947_);
v___x_1949_ = v___x_1901_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec_ref(v_e_1889_);
lean_dec_ref(v_post_1885_);
lean_dec_ref(v_pre_1884_);
v_a_1954_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1898_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1898_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object* v_pre_1962_, lean_object* v_post_1963_, uint8_t v_usedLetOnly_1964_, uint8_t v_skipConstInApp_1965_, uint8_t v_skipInstances_1966_, lean_object* v_fvars_1967_, lean_object* v_e_1968_, lean_object* v_a_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
if (lean_obj_tag(v_e_1968_) == 7)
{
lean_object* v_binderName_1976_; lean_object* v_binderType_1977_; lean_object* v_body_1978_; uint8_t v_binderInfo_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___f_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_binderName_1976_ = lean_ctor_get(v_e_1968_, 0);
lean_inc(v_binderName_1976_);
v_binderType_1977_ = lean_ctor_get(v_e_1968_, 1);
lean_inc_ref(v_binderType_1977_);
v_body_1978_ = lean_ctor_get(v_e_1968_, 2);
lean_inc_ref(v_body_1978_);
v_binderInfo_1979_ = lean_ctor_get_uint8(v_e_1968_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1968_, 3);
v___x_1980_ = lean_box(v_usedLetOnly_1964_);
v___x_1981_ = lean_box(v_skipConstInApp_1965_);
v___x_1982_ = lean_box(v_skipInstances_1966_);
lean_inc_ref(v_post_1963_);
lean_inc_ref(v_pre_1962_);
lean_inc_ref(v_fvars_1967_);
v___f_1983_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1983_, 0, v_fvars_1967_);
lean_closure_set(v___f_1983_, 1, v_pre_1962_);
lean_closure_set(v___f_1983_, 2, v_post_1963_);
lean_closure_set(v___f_1983_, 3, v___x_1980_);
lean_closure_set(v___f_1983_, 4, v___x_1981_);
lean_closure_set(v___f_1983_, 5, v___x_1982_);
lean_closure_set(v___f_1983_, 6, v_body_1978_);
v___x_1984_ = lean_expr_instantiate_rev(v_binderType_1977_, v_fvars_1967_);
lean_dec_ref(v_fvars_1967_);
lean_dec_ref(v_binderType_1977_);
v___x_1985_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1962_, v_post_1963_, v_usedLetOnly_1964_, v_skipConstInApp_1965_, v_skipInstances_1966_, v___x_1984_, v_a_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v_fst_1987_; lean_object* v_snd_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1985_, 1);
v_fst_1987_ = lean_ctor_get(v_a_1986_, 0);
lean_inc(v_fst_1987_);
v_snd_1988_ = lean_ctor_get(v_a_1986_, 1);
lean_inc(v_snd_1988_);
lean_dec(v_a_1986_);
v___x_1989_ = 0;
v___x_1990_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg(v_binderName_1976_, v_binderInfo_1979_, v_fst_1987_, v___f_1983_, v___x_1989_, v_a_1969_, v_snd_1988_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
return v___x_1990_;
}
else
{
lean_dec_ref(v___f_1983_);
lean_dec(v_binderName_1976_);
return v___x_1985_;
}
}
else
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = lean_expr_instantiate_rev(v_e_1968_, v_fvars_1967_);
lean_dec_ref(v_e_1968_);
lean_inc_ref(v_post_1963_);
lean_inc_ref(v_pre_1962_);
v___x_1992_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1962_, v_post_1963_, v_usedLetOnly_1964_, v_skipConstInApp_1965_, v_skipInstances_1966_, v___x_1991_, v_a_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; lean_object* v_fst_1994_; lean_object* v_snd_1995_; uint8_t v___x_1996_; uint8_t v___x_1997_; uint8_t v___x_1998_; lean_object* v___x_1999_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
lean_dec_ref_known(v___x_1992_, 1);
v_fst_1994_ = lean_ctor_get(v_a_1993_, 0);
lean_inc(v_fst_1994_);
v_snd_1995_ = lean_ctor_get(v_a_1993_, 1);
lean_inc(v_snd_1995_);
lean_dec(v_a_1993_);
v___x_1996_ = 0;
v___x_1997_ = 1;
v___x_1998_ = 1;
v___x_1999_ = l_Lean_Meta_mkForallFVars(v_fvars_1967_, v_fst_1994_, v___x_1996_, v_usedLetOnly_1964_, v___x_1997_, v___x_1998_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
lean_dec_ref(v_fvars_1967_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2001_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___x_1999_, 1);
v___x_2001_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1962_, v_post_1963_, v_usedLetOnly_1964_, v_skipConstInApp_1965_, v_skipInstances_1966_, v_a_2000_, v_a_1969_, v_snd_1995_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
return v___x_2001_;
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec(v_snd_1995_);
lean_dec_ref(v_post_1963_);
lean_dec_ref(v_pre_1962_);
v_a_2002_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1999_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1999_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1967_);
lean_dec_ref(v_post_1963_);
lean_dec_ref(v_pre_1962_);
return v___x_1992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object* v_fvars_2010_, lean_object* v_pre_2011_, lean_object* v_post_2012_, uint8_t v_usedLetOnly_2013_, uint8_t v_skipConstInApp_2014_, uint8_t v_skipInstances_2015_, lean_object* v_body_2016_, lean_object* v_x_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = lean_array_push(v_fvars_2010_, v_x_2017_);
v___x_2026_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_2011_, v_post_2012_, v_usedLetOnly_2013_, v_skipConstInApp_2014_, v_skipInstances_2015_, v___x_2025_, v_body_2016_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object* v_pre_2027_, lean_object* v_post_2028_, lean_object* v_usedLetOnly_2029_, lean_object* v_skipConstInApp_2030_, lean_object* v_skipInstances_2031_, lean_object* v_sz_2032_, lean_object* v_i_2033_, lean_object* v_bs_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
uint8_t v_usedLetOnly_boxed_2042_; uint8_t v_skipConstInApp_boxed_2043_; uint8_t v_skipInstances_boxed_2044_; size_t v_sz_boxed_2045_; size_t v_i_boxed_2046_; lean_object* v_res_2047_; 
v_usedLetOnly_boxed_2042_ = lean_unbox(v_usedLetOnly_2029_);
v_skipConstInApp_boxed_2043_ = lean_unbox(v_skipConstInApp_2030_);
v_skipInstances_boxed_2044_ = lean_unbox(v_skipInstances_2031_);
v_sz_boxed_2045_ = lean_unbox_usize(v_sz_2032_);
lean_dec(v_sz_2032_);
v_i_boxed_2046_ = lean_unbox_usize(v_i_2033_);
lean_dec(v_i_2033_);
v_res_2047_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_2027_, v_post_2028_, v_usedLetOnly_boxed_2042_, v_skipConstInApp_boxed_2043_, v_skipInstances_boxed_2044_, v_sz_boxed_2045_, v_i_boxed_2046_, v_bs_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec(v___y_2035_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object* v_pre_2048_, lean_object* v_post_2049_, lean_object* v_usedLetOnly_2050_, lean_object* v_skipConstInApp_2051_, lean_object* v_skipInstances_2052_, lean_object* v_e_2053_, lean_object* v_a_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
uint8_t v_usedLetOnly_boxed_2061_; uint8_t v_skipConstInApp_boxed_2062_; uint8_t v_skipInstances_boxed_2063_; lean_object* v_res_2064_; 
v_usedLetOnly_boxed_2061_ = lean_unbox(v_usedLetOnly_2050_);
v_skipConstInApp_boxed_2062_ = lean_unbox(v_skipConstInApp_2051_);
v_skipInstances_boxed_2063_ = lean_unbox(v_skipInstances_2052_);
v_res_2064_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_2048_, v_post_2049_, v_usedLetOnly_boxed_2061_, v_skipConstInApp_boxed_2062_, v_skipInstances_boxed_2063_, v_e_2053_, v_a_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
lean_dec(v___y_2059_);
lean_dec_ref(v___y_2058_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
lean_dec(v_a_2054_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object* v_pre_2065_, lean_object* v_post_2066_, lean_object* v_usedLetOnly_2067_, lean_object* v_skipConstInApp_2068_, lean_object* v_skipInstances_2069_, lean_object* v_fvars_2070_, lean_object* v_e_2071_, lean_object* v_a_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
uint8_t v_usedLetOnly_boxed_2079_; uint8_t v_skipConstInApp_boxed_2080_; uint8_t v_skipInstances_boxed_2081_; lean_object* v_res_2082_; 
v_usedLetOnly_boxed_2079_ = lean_unbox(v_usedLetOnly_2067_);
v_skipConstInApp_boxed_2080_ = lean_unbox(v_skipConstInApp_2068_);
v_skipInstances_boxed_2081_ = lean_unbox(v_skipInstances_2069_);
v_res_2082_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_2065_, v_post_2066_, v_usedLetOnly_boxed_2079_, v_skipConstInApp_boxed_2080_, v_skipInstances_boxed_2081_, v_fvars_2070_, v_e_2071_, v_a_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec(v___y_2075_);
lean_dec_ref(v___y_2074_);
lean_dec(v_a_2072_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object* v_pre_2083_, lean_object* v_post_2084_, lean_object* v_usedLetOnly_2085_, lean_object* v_skipConstInApp_2086_, lean_object* v_skipInstances_2087_, lean_object* v_fvars_2088_, lean_object* v_e_2089_, lean_object* v_a_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
uint8_t v_usedLetOnly_boxed_2097_; uint8_t v_skipConstInApp_boxed_2098_; uint8_t v_skipInstances_boxed_2099_; lean_object* v_res_2100_; 
v_usedLetOnly_boxed_2097_ = lean_unbox(v_usedLetOnly_2085_);
v_skipConstInApp_boxed_2098_ = lean_unbox(v_skipConstInApp_2086_);
v_skipInstances_boxed_2099_ = lean_unbox(v_skipInstances_2087_);
v_res_2100_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_2083_, v_post_2084_, v_usedLetOnly_boxed_2097_, v_skipConstInApp_boxed_2098_, v_skipInstances_boxed_2099_, v_fvars_2088_, v_e_2089_, v_a_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec(v_a_2090_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object* v_pre_2101_, lean_object* v_post_2102_, lean_object* v_usedLetOnly_2103_, lean_object* v_skipConstInApp_2104_, lean_object* v_skipInstances_2105_, lean_object* v_e_2106_, lean_object* v_a_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
uint8_t v_usedLetOnly_boxed_2114_; uint8_t v_skipConstInApp_boxed_2115_; uint8_t v_skipInstances_boxed_2116_; lean_object* v_res_2117_; 
v_usedLetOnly_boxed_2114_ = lean_unbox(v_usedLetOnly_2103_);
v_skipConstInApp_boxed_2115_ = lean_unbox(v_skipConstInApp_2104_);
v_skipInstances_boxed_2116_ = lean_unbox(v_skipInstances_2105_);
v_res_2117_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_2101_, v_post_2102_, v_usedLetOnly_boxed_2114_, v_skipConstInApp_boxed_2115_, v_skipInstances_boxed_2116_, v_e_2106_, v_a_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec(v_a_2107_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object* v_pre_2118_, lean_object* v_post_2119_, lean_object* v_usedLetOnly_2120_, lean_object* v_skipConstInApp_2121_, lean_object* v_skipInstances_2122_, lean_object* v_fvars_2123_, lean_object* v_e_2124_, lean_object* v_a_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
uint8_t v_usedLetOnly_boxed_2132_; uint8_t v_skipConstInApp_boxed_2133_; uint8_t v_skipInstances_boxed_2134_; lean_object* v_res_2135_; 
v_usedLetOnly_boxed_2132_ = lean_unbox(v_usedLetOnly_2120_);
v_skipConstInApp_boxed_2133_ = lean_unbox(v_skipConstInApp_2121_);
v_skipInstances_boxed_2134_ = lean_unbox(v_skipInstances_2122_);
v_res_2135_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_pre_2118_, v_post_2119_, v_usedLetOnly_boxed_2132_, v_skipConstInApp_boxed_2133_, v_skipInstances_boxed_2134_, v_fvars_2123_, v_e_2124_, v_a_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v_a_2125_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object* v_upperBound_2136_, lean_object* v___x_2137_, lean_object* v_pre_2138_, lean_object* v_post_2139_, lean_object* v_usedLetOnly_2140_, lean_object* v_skipConstInApp_2141_, lean_object* v_skipInstances_2142_, lean_object* v_a_2143_, lean_object* v_b_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
uint8_t v_usedLetOnly_boxed_2152_; uint8_t v_skipConstInApp_boxed_2153_; uint8_t v_skipInstances_boxed_2154_; lean_object* v_res_2155_; 
v_usedLetOnly_boxed_2152_ = lean_unbox(v_usedLetOnly_2140_);
v_skipConstInApp_boxed_2153_ = lean_unbox(v_skipConstInApp_2141_);
v_skipInstances_boxed_2154_ = lean_unbox(v_skipInstances_2142_);
v_res_2155_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_upperBound_2136_, v___x_2137_, v_pre_2138_, v_post_2139_, v_usedLetOnly_boxed_2152_, v_skipConstInApp_boxed_2153_, v_skipInstances_boxed_2154_, v_a_2143_, v_b_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec(v___y_2145_);
lean_dec_ref(v___x_2137_);
lean_dec(v_upperBound_2136_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object* v_skipInstances_2156_, lean_object* v_pre_2157_, lean_object* v_post_2158_, lean_object* v_usedLetOnly_2159_, lean_object* v_skipConstInApp_2160_, lean_object* v_x_2161_, lean_object* v_x_2162_, lean_object* v_x_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
uint8_t v_skipInstances_boxed_2171_; uint8_t v_usedLetOnly_boxed_2172_; uint8_t v_skipConstInApp_boxed_2173_; lean_object* v_res_2174_; 
v_skipInstances_boxed_2171_ = lean_unbox(v_skipInstances_2156_);
v_usedLetOnly_boxed_2172_ = lean_unbox(v_usedLetOnly_2159_);
v_skipConstInApp_boxed_2173_ = lean_unbox(v_skipConstInApp_2160_);
v_res_2174_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(v_skipInstances_boxed_2171_, v_pre_2157_, v_post_2158_, v_usedLetOnly_boxed_2172_, v_skipConstInApp_boxed_2173_, v_x_2161_, v_x_2162_, v_x_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v___y_2164_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object* v_00_u03b1_2175_, lean_object* v_x_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2183_ = lean_apply_1(v_x_2176_, lean_box(0));
v___x_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
lean_ctor_set(v___x_2184_, 1, v___y_2177_);
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2186_, lean_object* v_x_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(v_00_u03b1_2186_, v_x_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
return v_res_2194_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2195_ = lean_box(0);
v___x_2196_ = lean_unsigned_to_nat(16u);
v___x_2197_ = lean_mk_array(v___x_2196_, v___x_2195_);
return v___x_2197_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2198_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0);
v___x_2199_ = lean_unsigned_to_nat(0u);
v___x_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
lean_ctor_set(v___x_2200_, 1, v___x_2198_);
return v___x_2200_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1);
v___x_2202_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2202_, 0, lean_box(0));
lean_closure_set(v___x_2202_, 1, lean_box(0));
lean_closure_set(v___x_2202_, 2, v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object* v_input_2203_, lean_object* v_pre_2204_, lean_object* v_post_2205_, uint8_t v_usedLetOnly_2206_, uint8_t v_skipConstInApp_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
uint8_t v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v_a_2217_; lean_object* v_fst_2218_; lean_object* v_snd_2219_; lean_object* v___x_2220_; 
v___x_2214_ = 0;
v___x_2215_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2);
v___x_2216_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2215_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref(v___x_2216_);
v_fst_2218_ = lean_ctor_get(v_a_2217_, 0);
lean_inc(v_fst_2218_);
v_snd_2219_ = lean_ctor_get(v_a_2217_, 1);
lean_inc(v_snd_2219_);
lean_dec(v_a_2217_);
v___x_2220_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_2204_, v_post_2205_, v_usedLetOnly_2206_, v_skipConstInApp_2207_, v___x_2214_, v_input_2203_, v_fst_2218_, v_snd_2219_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v_a_2221_; lean_object* v_fst_2222_; lean_object* v_snd_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2242_; 
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
lean_inc(v_a_2221_);
lean_dec_ref_known(v___x_2220_, 1);
v_fst_2222_ = lean_ctor_get(v_a_2221_, 0);
lean_inc(v_fst_2222_);
v_snd_2223_ = lean_ctor_get(v_a_2221_, 1);
lean_inc(v_snd_2223_);
lean_dec(v_a_2221_);
v___x_2224_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2224_, 0, lean_box(0));
lean_closure_set(v___x_2224_, 1, lean_box(0));
lean_closure_set(v___x_2224_, 2, v_fst_2218_);
v___x_2225_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2224_, v_snd_2223_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
v_a_2226_ = lean_ctor_get(v___x_2225_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2228_ = v___x_2225_;
v_isShared_2229_ = v_isSharedCheck_2242_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2225_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2242_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v_snd_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2240_; 
v_snd_2230_ = lean_ctor_get(v_a_2226_, 1);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_a_2226_);
if (v_isSharedCheck_2240_ == 0)
{
lean_object* v_unused_2241_; 
v_unused_2241_ = lean_ctor_get(v_a_2226_, 0);
lean_dec(v_unused_2241_);
v___x_2232_ = v_a_2226_;
v_isShared_2233_ = v_isSharedCheck_2240_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_snd_2230_);
lean_dec(v_a_2226_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2240_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v_fst_2222_);
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_fst_2222_);
lean_ctor_set(v_reuseFailAlloc_2239_, 1, v_snd_2230_);
v___x_2235_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
lean_object* v___x_2237_; 
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 0, v___x_2235_);
v___x_2237_ = v___x_2228_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2235_);
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
else
{
lean_dec(v_fst_2218_);
return v___x_2220_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object* v_input_2243_, lean_object* v_pre_2244_, lean_object* v_post_2245_, lean_object* v_usedLetOnly_2246_, lean_object* v_skipConstInApp_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
uint8_t v_usedLetOnly_boxed_2254_; uint8_t v_skipConstInApp_boxed_2255_; lean_object* v_res_2256_; 
v_usedLetOnly_boxed_2254_ = lean_unbox(v_usedLetOnly_2246_);
v_skipConstInApp_boxed_2255_ = lean_unbox(v_skipConstInApp_2247_);
v_res_2256_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_input_2243_, v_pre_2244_, v_post_2245_, v_usedLetOnly_boxed_2254_, v_skipConstInApp_boxed_2255_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object* v_e_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v___y_2266_; lean_object* v___x_2283_; uint8_t v_transparency_2284_; lean_object* v___f_2285_; lean_object* v___f_2286_; uint8_t v___x_2287_; uint8_t v___x_2288_; lean_object* v___x_2289_; uint8_t v___x_2290_; 
v___x_2283_ = l_Lean_Meta_Context_config(v_a_2260_);
v_transparency_2284_ = lean_ctor_get_uint8(v___x_2283_, 9);
lean_dec_ref(v___x_2283_);
v___f_2285_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__0));
v___f_2286_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__1));
v___x_2287_ = 0;
v___x_2288_ = 3;
v___x_2289_ = lean_box(0);
v___x_2290_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2284_, v___x_2288_);
if (v___x_2290_ == 0)
{
lean_object* v_keyedConfig_2291_; uint8_t v_trackZetaDelta_2292_; lean_object* v_zetaDeltaSet_2293_; lean_object* v_lctx_2294_; lean_object* v_localInstances_2295_; lean_object* v_defEqCtx_x3f_2296_; lean_object* v_synthPendingDepth_2297_; lean_object* v_customCanUnfoldPredicate_x3f_2298_; uint8_t v_univApprox_2299_; uint8_t v_inTypeClassResolution_2300_; uint8_t v_cacheInferType_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v_keyedConfig_2291_ = lean_ctor_get(v_a_2260_, 0);
v_trackZetaDelta_2292_ = lean_ctor_get_uint8(v_a_2260_, sizeof(void*)*7);
v_zetaDeltaSet_2293_ = lean_ctor_get(v_a_2260_, 1);
v_lctx_2294_ = lean_ctor_get(v_a_2260_, 2);
v_localInstances_2295_ = lean_ctor_get(v_a_2260_, 3);
v_defEqCtx_x3f_2296_ = lean_ctor_get(v_a_2260_, 4);
v_synthPendingDepth_2297_ = lean_ctor_get(v_a_2260_, 5);
v_customCanUnfoldPredicate_x3f_2298_ = lean_ctor_get(v_a_2260_, 6);
v_univApprox_2299_ = lean_ctor_get_uint8(v_a_2260_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2300_ = lean_ctor_get_uint8(v_a_2260_, sizeof(void*)*7 + 2);
v_cacheInferType_2301_ = lean_ctor_get_uint8(v_a_2260_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2291_);
v___x_2302_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2288_, v_keyedConfig_2291_);
lean_inc(v_customCanUnfoldPredicate_x3f_2298_);
lean_inc(v_synthPendingDepth_2297_);
lean_inc(v_defEqCtx_x3f_2296_);
lean_inc_ref(v_localInstances_2295_);
lean_inc_ref(v_lctx_2294_);
lean_inc(v_zetaDeltaSet_2293_);
v___x_2303_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
lean_ctor_set(v___x_2303_, 1, v_zetaDeltaSet_2293_);
lean_ctor_set(v___x_2303_, 2, v_lctx_2294_);
lean_ctor_set(v___x_2303_, 3, v_localInstances_2295_);
lean_ctor_set(v___x_2303_, 4, v_defEqCtx_x3f_2296_);
lean_ctor_set(v___x_2303_, 5, v_synthPendingDepth_2297_);
lean_ctor_set(v___x_2303_, 6, v_customCanUnfoldPredicate_x3f_2298_);
lean_ctor_set_uint8(v___x_2303_, sizeof(void*)*7, v_trackZetaDelta_2292_);
lean_ctor_set_uint8(v___x_2303_, sizeof(void*)*7 + 1, v_univApprox_2299_);
lean_ctor_set_uint8(v___x_2303_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2300_);
lean_ctor_set_uint8(v___x_2303_, sizeof(void*)*7 + 3, v_cacheInferType_2301_);
v___x_2304_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2259_, v___f_2286_, v___f_2285_, v___x_2287_, v___x_2287_, v___x_2289_, v___x_2303_, v_a_2261_, v_a_2262_, v_a_2263_);
lean_dec_ref_known(v___x_2303_, 7);
v___y_2266_ = v___x_2304_;
goto v___jp_2265_;
}
else
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2259_, v___f_2286_, v___f_2285_, v___x_2287_, v___x_2287_, v___x_2289_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
v___y_2266_ = v___x_2305_;
goto v___jp_2265_;
}
v___jp_2265_:
{
if (lean_obj_tag(v___y_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
v_a_2267_ = lean_ctor_get(v___y_2266_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___y_2266_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___y_2266_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___y_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
v_a_2275_ = lean_ctor_get(v___y_2266_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___y_2266_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___y_2266_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___y_2266_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object* v_e_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l_Lean_Meta_expandCoe(v_e_2306_, v_a_2307_, v_a_2308_, v_a_2309_, v_a_2310_);
lean_dec(v_a_2310_);
lean_dec_ref(v_a_2309_);
lean_dec(v_a_2308_);
lean_dec_ref(v_a_2307_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object* v_00_u03b2_2313_, lean_object* v_m_2314_, lean_object* v_a_2315_){
_start:
{
lean_object* v___x_2316_; 
v___x_2316_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_2314_, v_a_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2317_, lean_object* v_m_2318_, lean_object* v_a_2319_){
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(v_00_u03b2_2317_, v_m_2318_, v_a_2319_);
lean_dec(v_a_2319_);
lean_dec_ref(v_m_2318_);
return v_res_2320_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2321_, lean_object* v_x_2322_, lean_object* v_x_2323_){
_start:
{
uint8_t v___x_2324_; 
v___x_2324_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_2322_, v_x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2325_, lean_object* v_x_2326_, lean_object* v_x_2327_){
_start:
{
uint8_t v_res_2328_; lean_object* v_r_2329_; 
v_res_2328_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(v_00_u03b2_2325_, v_x_2326_, v_x_2327_);
lean_dec_ref(v_x_2327_);
lean_dec_ref(v_x_2326_);
v_r_2329_ = lean_box(v_res_2328_);
return v_r_2329_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2330_, lean_object* v_m_2331_, lean_object* v_a_2332_, lean_object* v_b_2333_){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(v_m_2331_, v_a_2332_, v_b_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_2335_, lean_object* v_a_2336_, lean_object* v_x_2337_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(v_a_2336_, v_x_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_2339_, lean_object* v_a_2340_, lean_object* v_x_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6(v_00_u03b2_2339_, v_a_2340_, v_x_2341_);
lean_dec(v_x_2341_);
lean_dec(v_a_2340_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object* v_upperBound_2343_, lean_object* v___x_2344_, lean_object* v_pre_2345_, lean_object* v_post_2346_, uint8_t v_usedLetOnly_2347_, uint8_t v_skipConstInApp_2348_, uint8_t v_skipInstances_2349_, lean_object* v___x_2350_, lean_object* v_inst_2351_, lean_object* v_R_2352_, lean_object* v_a_2353_, lean_object* v_b_2354_, lean_object* v_c_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_upperBound_2343_, v___x_2344_, v_pre_2345_, v_post_2346_, v_usedLetOnly_2347_, v_skipConstInApp_2348_, v_skipInstances_2349_, v_a_2353_, v_b_2354_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object** _args){
lean_object* v_upperBound_2364_ = _args[0];
lean_object* v___x_2365_ = _args[1];
lean_object* v_pre_2366_ = _args[2];
lean_object* v_post_2367_ = _args[3];
lean_object* v_usedLetOnly_2368_ = _args[4];
lean_object* v_skipConstInApp_2369_ = _args[5];
lean_object* v_skipInstances_2370_ = _args[6];
lean_object* v___x_2371_ = _args[7];
lean_object* v_inst_2372_ = _args[8];
lean_object* v_R_2373_ = _args[9];
lean_object* v_a_2374_ = _args[10];
lean_object* v_b_2375_ = _args[11];
lean_object* v_c_2376_ = _args[12];
lean_object* v___y_2377_ = _args[13];
lean_object* v___y_2378_ = _args[14];
lean_object* v___y_2379_ = _args[15];
lean_object* v___y_2380_ = _args[16];
lean_object* v___y_2381_ = _args[17];
lean_object* v___y_2382_ = _args[18];
lean_object* v___y_2383_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2384_; uint8_t v_skipConstInApp_boxed_2385_; uint8_t v_skipInstances_boxed_2386_; lean_object* v_res_2387_; 
v_usedLetOnly_boxed_2384_ = lean_unbox(v_usedLetOnly_2368_);
v_skipConstInApp_boxed_2385_ = lean_unbox(v_skipConstInApp_2369_);
v_skipInstances_boxed_2386_ = lean_unbox(v_skipInstances_2370_);
v_res_2387_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(v_upperBound_2364_, v___x_2365_, v_pre_2366_, v_post_2367_, v_usedLetOnly_boxed_2384_, v_skipConstInApp_boxed_2385_, v_skipInstances_boxed_2386_, v___x_2371_, v_inst_2372_, v_R_2373_, v_a_2374_, v_b_2375_, v_c_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2377_);
lean_dec(v___x_2371_);
lean_dec_ref(v___x_2365_);
lean_dec(v_upperBound_2364_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object* v_00_u03b2_2388_, lean_object* v_m_2389_, lean_object* v_a_2390_){
_start:
{
lean_object* v___x_2391_; 
v___x_2391_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(v_m_2389_, v_a_2390_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object* v_00_u03b2_2392_, lean_object* v_m_2393_, lean_object* v_a_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_00_u03b2_2392_, v_m_2393_, v_a_2394_);
lean_dec_ref(v_a_2394_);
lean_dec_ref(v_m_2393_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19(lean_object* v_00_u03b1_2396_, lean_object* v_name_2397_, uint8_t v_bi_2398_, lean_object* v_type_2399_, lean_object* v_k_2400_, uint8_t v_kind_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___redArg(v_name_2397_, v_bi_2398_, v_type_2399_, v_k_2400_, v_kind_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19___boxed(lean_object* v_00_u03b1_2410_, lean_object* v_name_2411_, lean_object* v_bi_2412_, lean_object* v_type_2413_, lean_object* v_k_2414_, lean_object* v_kind_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
uint8_t v_bi_boxed_2423_; uint8_t v_kind_boxed_2424_; lean_object* v_res_2425_; 
v_bi_boxed_2423_ = lean_unbox(v_bi_2412_);
v_kind_boxed_2424_ = lean_unbox(v_kind_2415_);
v_res_2425_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__19(v_00_u03b1_2410_, v_name_2411_, v_bi_boxed_2423_, v_type_2413_, v_k_2414_, v_kind_boxed_2424_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2416_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22(lean_object* v_00_u03b1_2426_, lean_object* v_name_2427_, lean_object* v_type_2428_, lean_object* v_val_2429_, lean_object* v_k_2430_, uint8_t v_nondep_2431_, uint8_t v_kind_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v___x_2440_; 
v___x_2440_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___redArg(v_name_2427_, v_type_2428_, v_val_2429_, v_k_2430_, v_nondep_2431_, v_kind_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22___boxed(lean_object* v_00_u03b1_2441_, lean_object* v_name_2442_, lean_object* v_type_2443_, lean_object* v_val_2444_, lean_object* v_k_2445_, lean_object* v_nondep_2446_, lean_object* v_kind_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
uint8_t v_nondep_boxed_2455_; uint8_t v_kind_boxed_2456_; lean_object* v_res_2457_; 
v_nondep_boxed_2455_ = lean_unbox(v_nondep_2446_);
v_kind_boxed_2456_ = lean_unbox(v_kind_2447_);
v_res_2457_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__22(v_00_u03b1_2441_, v_name_2442_, v_type_2443_, v_val_2444_, v_k_2445_, v_nondep_boxed_2455_, v_kind_boxed_2456_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2448_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(lean_object* v_00_u03b1_2458_, lean_object* v_ref_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_ref_2459_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___boxed(lean_object* v_00_u03b1_2466_, lean_object* v_ref_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(v_00_u03b1_2466_, v_ref_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object* v_00_u03b1_2474_, lean_object* v_x_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v___x_2483_; 
v___x_2483_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v_x_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___boxed(lean_object* v_00_u03b1_2484_, lean_object* v_x_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(v_00_u03b1_2484_, v_x_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2486_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18(lean_object* v_00_u03b2_2494_, lean_object* v_m_2495_, lean_object* v_a_2496_, lean_object* v_b_2497_){
_start:
{
lean_object* v___x_2498_; 
v___x_2498_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(v_m_2495_, v_a_2496_, v_b_2497_);
return v___x_2498_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2499_, lean_object* v_x_2500_, size_t v_x_2501_, lean_object* v_x_2502_){
_start:
{
uint8_t v___x_2503_; 
v___x_2503_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_2500_, v_x_2501_, v_x_2502_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2504_, lean_object* v_x_2505_, lean_object* v_x_2506_, lean_object* v_x_2507_){
_start:
{
size_t v_x_41045__boxed_2508_; uint8_t v_res_2509_; lean_object* v_r_2510_; 
v_x_41045__boxed_2508_ = lean_unbox_usize(v_x_2506_);
lean_dec(v_x_2506_);
v_res_2509_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2504_, v_x_2505_, v_x_41045__boxed_2508_, v_x_2507_);
lean_dec_ref(v_x_2507_);
lean_dec_ref(v_x_2505_);
v_r_2510_ = lean_box(v_res_2509_);
return v_r_2510_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2511_, lean_object* v_a_2512_, lean_object* v_x_2513_){
_start:
{
uint8_t v___x_2514_; 
v___x_2514_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(v_a_2512_, v_x_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2515_, lean_object* v_a_2516_, lean_object* v_x_2517_){
_start:
{
uint8_t v_res_2518_; lean_object* v_r_2519_; 
v_res_2518_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_2515_, v_a_2516_, v_x_2517_);
lean_dec(v_x_2517_);
lean_dec_ref(v_a_2516_);
v_r_2519_ = lean_box(v_res_2518_);
return v_r_2519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_2520_, lean_object* v_data_2521_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6___redArg(v_data_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17(lean_object* v_00_u03b2_2523_, lean_object* v_a_2524_, lean_object* v_x_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___redArg(v_a_2524_, v_x_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17___boxed(lean_object* v_00_u03b2_2527_, lean_object* v_a_2528_, lean_object* v_x_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__17(v_00_u03b2_2527_, v_a_2528_, v_x_2529_);
lean_dec(v_x_2529_);
lean_dec_ref(v_a_2528_);
return v_res_2530_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27(lean_object* v_00_u03b2_2531_, lean_object* v_a_2532_, lean_object* v_x_2533_){
_start:
{
uint8_t v___x_2534_; 
v___x_2534_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(v_a_2532_, v_x_2533_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___boxed(lean_object* v_00_u03b2_2535_, lean_object* v_a_2536_, lean_object* v_x_2537_){
_start:
{
uint8_t v_res_2538_; lean_object* v_r_2539_; 
v_res_2538_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27(v_00_u03b2_2535_, v_a_2536_, v_x_2537_);
lean_dec(v_x_2537_);
lean_dec_ref(v_a_2536_);
v_r_2539_ = lean_box(v_res_2538_);
return v_r_2539_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28(lean_object* v_00_u03b2_2540_, lean_object* v_data_2541_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(v_data_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__29(lean_object* v_00_u03b2_2543_, lean_object* v_a_2544_, lean_object* v_b_2545_, lean_object* v_x_2546_){
_start:
{
lean_object* v___x_2547_; 
v___x_2547_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__29___redArg(v_a_2544_, v_b_2545_, v_x_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2548_, lean_object* v_keys_2549_, lean_object* v_vals_2550_, lean_object* v_heq_2551_, lean_object* v_i_2552_, lean_object* v_k_2553_){
_start:
{
uint8_t v___x_2554_; 
v___x_2554_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_2549_, v_i_2552_, v_k_2553_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_2555_, lean_object* v_keys_2556_, lean_object* v_vals_2557_, lean_object* v_heq_2558_, lean_object* v_i_2559_, lean_object* v_k_2560_){
_start:
{
uint8_t v_res_2561_; lean_object* v_r_2562_; 
v_res_2561_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(v_00_u03b2_2555_, v_keys_2556_, v_vals_2557_, v_heq_2558_, v_i_2559_, v_k_2560_);
lean_dec_ref(v_k_2560_);
lean_dec_ref(v_vals_2557_);
lean_dec_ref(v_keys_2556_);
v_r_2562_ = lean_box(v_res_2561_);
return v_r_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11(lean_object* v_00_u03b2_2563_, lean_object* v_i_2564_, lean_object* v_source_2565_, lean_object* v_target_2566_){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11___redArg(v_i_2564_, v_source_2565_, v_target_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31(lean_object* v_00_u03b2_2568_, lean_object* v_i_2569_, lean_object* v_source_2570_, lean_object* v_target_2571_){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31___redArg(v_i_2569_, v_source_2570_, v_target_2571_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11_spec__28(lean_object* v_00_u03b2_2573_, lean_object* v_x_2574_, lean_object* v_x_2575_){
_start:
{
lean_object* v___x_2576_; 
v___x_2576_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__6_spec__11_spec__28___redArg(v_x_2574_, v_x_2575_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31_spec__33(lean_object* v_00_u03b2_2577_, lean_object* v_x_2578_, lean_object* v_x_2579_){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28_spec__31_spec__33___redArg(v_x_2578_, v_x_2579_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object* v_name_2581_, lean_object* v_decl_2582_, lean_object* v_ref_2583_){
_start:
{
lean_object* v_defValue_2585_; lean_object* v_descr_2586_; lean_object* v_deprecation_x3f_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v_defValue_2585_ = lean_ctor_get(v_decl_2582_, 0);
v_descr_2586_ = lean_ctor_get(v_decl_2582_, 1);
v_deprecation_x3f_2587_ = lean_ctor_get(v_decl_2582_, 2);
v___x_2588_ = lean_alloc_ctor(1, 0, 1);
v___x_2589_ = lean_unbox(v_defValue_2585_);
lean_ctor_set_uint8(v___x_2588_, 0, v___x_2589_);
lean_inc(v_deprecation_x3f_2587_);
lean_inc_ref(v_descr_2586_);
lean_inc_n(v_name_2581_, 2);
v___x_2590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2590_, 0, v_name_2581_);
lean_ctor_set(v___x_2590_, 1, v_ref_2583_);
lean_ctor_set(v___x_2590_, 2, v___x_2588_);
lean_ctor_set(v___x_2590_, 3, v_descr_2586_);
lean_ctor_set(v___x_2590_, 4, v_deprecation_x3f_2587_);
v___x_2591_ = lean_register_option(v_name_2581_, v___x_2590_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2599_; 
v_isSharedCheck_2599_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2599_ == 0)
{
lean_object* v_unused_2600_; 
v_unused_2600_ = lean_ctor_get(v___x_2591_, 0);
lean_dec(v_unused_2600_);
v___x_2593_ = v___x_2591_;
v_isShared_2594_ = v_isSharedCheck_2599_;
goto v_resetjp_2592_;
}
else
{
lean_dec(v___x_2591_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2599_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; lean_object* v___x_2597_; 
lean_inc(v_defValue_2585_);
v___x_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2595_, 0, v_name_2581_);
lean_ctor_set(v___x_2595_, 1, v_defValue_2585_);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 0, v___x_2595_);
v___x_2597_ = v___x_2593_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_dec(v_name_2581_);
v_a_2601_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2591_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2591_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_2609_, lean_object* v_decl_2610_, lean_object* v_ref_2611_, lean_object* v_a_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v_name_2609_, v_decl_2610_, v_ref_2611_);
lean_dec_ref(v_decl_2610_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2628_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2629_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2630_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2631_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v___x_2628_, v___x_2629_, v___x_2630_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object* v_a_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object* v_msg_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_ref_2640_; lean_object* v___x_2641_; lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2650_; 
v_ref_2640_ = lean_ctor_get(v___y_2637_, 2);
v___x_2641_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__8(v_msg_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2644_ = v___x_2641_;
v_isShared_2645_ = v_isSharedCheck_2650_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2641_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2650_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2646_; lean_object* v___x_2648_; 
lean_inc(v_ref_2640_);
v___x_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2646_, 0, v_ref_2640_);
lean_ctor_set(v___x_2646_, 1, v_a_2642_);
if (v_isShared_2645_ == 0)
{
lean_ctor_set_tag(v___x_2644_, 1);
lean_ctor_set(v___x_2644_, 0, v___x_2646_);
v___x_2648_ = v___x_2644_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v___x_2646_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object* v_msg_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
return v_res_2657_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4(void){
_start:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2665_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3));
v___x_2666_ = l_Lean_stringToMessageData(v___x_2665_);
return v___x_2666_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6(void){
_start:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; 
v___x_2668_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5));
v___x_2669_ = l_Lean_stringToMessageData(v___x_2668_);
return v___x_2669_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8(void){
_start:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7));
v___x_2672_ = l_Lean_stringToMessageData(v___x_2671_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object* v_expr_2673_, lean_object* v_expectedType_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v___x_2680_; 
lean_inc(v_a_2678_);
lean_inc_ref(v_a_2677_);
lean_inc(v_a_2676_);
lean_inc_ref(v_a_2675_);
lean_inc_ref(v_expr_2673_);
v___x_2680_ = lean_infer_type(v_expr_2673_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v___x_2682_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc_n(v_a_2681_, 2);
lean_dec_ref_known(v___x_2680_, 1);
v___x_2682_ = l_Lean_Meta_getLevel(v_a_2681_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
lean_inc_ref(v_expectedType_2674_);
v___x_2684_ = l_Lean_Meta_getLevel(v_expectedType_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2684_, 1);
v___x_2686_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_2687_ = lean_box(0);
v___x_2688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2688_, 0, v_a_2685_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2689_, 0, v_a_2683_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
lean_inc_ref(v___x_2689_);
v___x_2690_ = l_Lean_mkConst(v___x_2686_, v___x_2689_);
v___x_2691_ = lean_unsigned_to_nat(3u);
v___x_2692_ = lean_mk_empty_array_with_capacity(v___x_2691_);
lean_inc(v_a_2681_);
v___x_2693_ = lean_array_push(v___x_2692_, v_a_2681_);
lean_inc_ref(v_expr_2673_);
v___x_2694_ = lean_array_push(v___x_2693_, v_expr_2673_);
lean_inc_ref(v_expectedType_2674_);
v___x_2695_ = lean_array_push(v___x_2694_, v_expectedType_2674_);
v___x_2696_ = l_Lean_mkAppN(v___x_2690_, v___x_2695_);
lean_dec_ref(v___x_2695_);
v___x_2697_ = lean_box(0);
v___x_2698_ = l_Lean_Meta_trySynthInstance(v___x_2696_, v___x_2697_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2796_; 
v_a_2699_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2701_ = v___x_2698_;
v_isShared_2702_ = v_isSharedCheck_2796_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2698_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2796_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
switch(lean_obj_tag(v_a_2699_))
{
case 0:
{
lean_object* v___x_2703_; lean_object* v___x_2705_; 
lean_dec_ref_known(v___x_2689_, 2);
lean_dec(v_a_2681_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v___x_2703_ = lean_box(0);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v___x_2703_);
v___x_2705_ = v___x_2701_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
case 1:
{
lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2791_; 
lean_del_object(v___x_2701_);
v_a_2707_ = lean_ctor_get(v_a_2699_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v_a_2699_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2709_ = v_a_2699_;
v_isShared_2710_ = v_isSharedCheck_2791_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_dec(v_a_2699_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2791_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2711_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2));
v___x_2712_ = l_Lean_mkConst(v___x_2711_, v___x_2689_);
v___x_2713_ = lean_unsigned_to_nat(4u);
v___x_2714_ = lean_mk_empty_array_with_capacity(v___x_2713_);
v___x_2715_ = lean_array_push(v___x_2714_, v_a_2681_);
lean_inc_ref(v_expr_2673_);
v___x_2716_ = lean_array_push(v___x_2715_, v_expr_2673_);
lean_inc_ref(v_expectedType_2674_);
v___x_2717_ = lean_array_push(v___x_2716_, v_expectedType_2674_);
v___x_2718_ = lean_array_push(v___x_2717_, v_a_2707_);
v___x_2719_ = l_Lean_mkAppN(v___x_2712_, v___x_2718_);
lean_dec_ref(v___x_2718_);
v___x_2720_ = l_Lean_Meta_expandCoe(v___x_2719_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2782_; 
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2723_ = v___x_2720_;
v_isShared_2724_ = v_isSharedCheck_2782_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_a_2721_);
lean_dec(v___x_2720_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2782_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v_fst_2732_; lean_object* v___x_2733_; 
v_fst_2732_ = lean_ctor_get(v_a_2721_, 0);
lean_inc(v_a_2678_);
lean_inc_ref(v_a_2677_);
lean_inc(v_a_2676_);
lean_inc_ref(v_a_2675_);
lean_inc(v_fst_2732_);
v___x_2733_ = lean_infer_type(v_fst_2732_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; lean_object* v___x_2735_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
lean_dec_ref_known(v___x_2733_, 1);
lean_inc_ref(v_expectedType_2674_);
v___x_2735_ = l_Lean_Meta_isExprDefEq(v_a_2734_, v_expectedType_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v_a_2736_; uint8_t v___x_2737_; 
v_a_2736_ = lean_ctor_get(v___x_2735_, 0);
lean_inc(v_a_2736_);
lean_dec_ref_known(v___x_2735_, 1);
v___x_2737_ = lean_unbox(v_a_2736_);
lean_dec(v_a_2736_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2763_; 
lean_inc(v_fst_2732_);
lean_del_object(v___x_2723_);
lean_del_object(v___x_2709_);
v_isSharedCheck_2763_ = !lean_is_exclusive(v_a_2721_);
if (v_isSharedCheck_2763_ == 0)
{
lean_object* v_unused_2764_; lean_object* v_unused_2765_; 
v_unused_2764_ = lean_ctor_get(v_a_2721_, 1);
lean_dec(v_unused_2764_);
v_unused_2765_ = lean_ctor_get(v_a_2721_, 0);
lean_dec(v_unused_2765_);
v___x_2739_ = v_a_2721_;
v_isShared_2740_ = v_isSharedCheck_2763_;
goto v_resetjp_2738_;
}
else
{
lean_dec(v_a_2721_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2763_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2744_; 
v___x_2741_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4);
v___x_2742_ = l_Lean_indentExpr(v_expr_2673_);
if (v_isShared_2740_ == 0)
{
lean_ctor_set_tag(v___x_2739_, 7);
lean_ctor_set(v___x_2739_, 1, v___x_2742_);
lean_ctor_set(v___x_2739_, 0, v___x_2741_);
v___x_2744_ = v___x_2739_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v___x_2741_);
lean_ctor_set(v_reuseFailAlloc_2762_, 1, v___x_2742_);
v___x_2744_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
v___x_2745_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6);
v___x_2746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = l_Lean_indentExpr(v_expectedType_2674_);
v___x_2748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2746_);
lean_ctor_set(v___x_2748_, 1, v___x_2747_);
v___x_2749_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8);
v___x_2750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2748_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = l_Lean_indentExpr(v_fst_2732_);
v___x_2752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2750_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2752_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_a_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
}
}
else
{
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
goto v___jp_2725_;
}
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
lean_del_object(v___x_2723_);
lean_dec(v_a_2721_);
lean_del_object(v___x_2709_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v_a_2766_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2735_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2735_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_del_object(v___x_2723_);
lean_dec(v_a_2721_);
lean_del_object(v___x_2709_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v_a_2774_ = lean_ctor_get(v___x_2733_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2733_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2733_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
v___jp_2725_:
{
lean_object* v___x_2727_; 
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 0, v_a_2721_);
v___x_2727_ = v___x_2709_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2721_);
v___x_2727_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
lean_object* v___x_2729_; 
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 0, v___x_2727_);
v___x_2729_ = v___x_2723_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2727_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2790_; 
lean_del_object(v___x_2709_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v_a_2783_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2785_ = v___x_2720_;
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2720_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2783_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
}
default: 
{
lean_object* v___x_2792_; lean_object* v___x_2794_; 
lean_dec_ref_known(v___x_2689_, 2);
lean_dec(v_a_2681_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v___x_2792_ = lean_box(2);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v___x_2792_);
v___x_2794_ = v___x_2701_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2792_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
}
}
else
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2804_; 
lean_dec_ref_known(v___x_2689_, 2);
lean_dec(v_a_2681_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v_a_2797_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2799_ = v___x_2698_;
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___x_2698_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_a_2797_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
}
else
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2812_; 
lean_dec(v_a_2683_);
lean_dec(v_a_2681_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v_a_2805_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2807_ = v___x_2684_;
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2684_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2810_; 
if (v_isShared_2808_ == 0)
{
v___x_2810_ = v___x_2807_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_a_2805_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
}
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
lean_dec(v_a_2681_);
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v_a_2813_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2682_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2682_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
else
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_dec_ref(v_expectedType_2674_);
lean_dec_ref(v_expr_2673_);
v_a_2821_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2680_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2680_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object* v_expr_2829_, lean_object* v_expectedType_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2829_, v_expectedType_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_);
lean_dec(v_a_2834_);
lean_dec_ref(v_a_2833_);
lean_dec(v_a_2832_);
lean_dec_ref(v_a_2831_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object* v_00_u03b1_2837_, lean_object* v_msg_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object* v_00_u03b1_2845_, lean_object* v_msg_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_){
_start:
{
lean_object* v_res_2852_; 
v_res_2852_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(v_00_u03b1_2845_, v_msg_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object* v_expr_2853_, lean_object* v_expectedType_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2853_, v_expectedType_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2885_; 
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2863_ = v___x_2860_;
v_isShared_2864_ = v_isSharedCheck_2885_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2860_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2885_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
switch(lean_obj_tag(v_a_2861_))
{
case 0:
{
lean_object* v___x_2865_; lean_object* v___x_2867_; 
v___x_2865_ = lean_box(0);
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 0, v___x_2865_);
v___x_2867_ = v___x_2863_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2865_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
case 1:
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2880_; 
v_a_2869_ = lean_ctor_get(v_a_2861_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v_a_2861_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2871_ = v_a_2861_;
v_isShared_2872_ = v_isSharedCheck_2880_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v_a_2861_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2880_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v_fst_2873_; lean_object* v___x_2875_; 
v_fst_2873_ = lean_ctor_get(v_a_2869_, 0);
lean_inc(v_fst_2873_);
lean_dec(v_a_2869_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 0, v_fst_2873_);
v___x_2875_ = v___x_2871_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_fst_2873_);
v___x_2875_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
lean_object* v___x_2877_; 
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 0, v___x_2875_);
v___x_2877_ = v___x_2863_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v___x_2875_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
default: 
{
lean_object* v___x_2881_; lean_object* v___x_2883_; 
v___x_2881_ = lean_box(2);
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 0, v___x_2881_);
v___x_2883_ = v___x_2863_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2881_);
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
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
v_a_2886_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2888_ = v___x_2860_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2860_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2886_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object* v_expr_2894_, lean_object* v_expectedType_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lean_Meta_coerceSimple_x3f(v_expr_2894_, v_expectedType_2895_, v_a_2896_, v_a_2897_, v_a_2898_, v_a_2899_);
lean_dec(v_a_2899_);
lean_dec_ref(v_a_2898_);
lean_dec(v_a_2897_);
lean_dec_ref(v_a_2896_);
return v_res_2901_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__4(void){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2909_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__3));
v___x_2910_ = l_Lean_stringToMessageData(v___x_2909_);
return v___x_2910_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__6(void){
_start:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2912_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__5));
v___x_2913_ = l_Lean_stringToMessageData(v___x_2912_);
return v___x_2913_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__8(void){
_start:
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2915_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__7));
v___x_2916_ = l_Lean_stringToMessageData(v___x_2915_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object* v_expr_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_){
_start:
{
lean_object* v___x_2923_; 
lean_inc(v_a_2921_);
lean_inc_ref(v_a_2920_);
lean_inc(v_a_2919_);
lean_inc_ref(v_a_2918_);
lean_inc_ref(v_expr_2917_);
v___x_2923_ = lean_infer_type(v_expr_2917_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2925_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc_n(v_a_2924_, 2);
lean_dec_ref_known(v___x_2923_, 1);
v___x_2925_ = l_Lean_Meta_getLevel(v_a_2924_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; lean_object* v___x_2927_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2926_);
lean_dec_ref_known(v___x_2925_, 1);
v___x_2927_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_object* v_a_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
lean_inc_n(v_a_2928_, 2);
lean_dec_ref_known(v___x_2927_, 1);
v___x_2929_ = l_Lean_mkSort(v_a_2928_);
lean_inc(v_a_2924_);
v___x_2930_ = l_Lean_mkArrow(v_a_2924_, v___x_2929_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
lean_inc(v_a_2931_);
lean_dec_ref_known(v___x_2930_, 1);
v___x_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2932_, 0, v_a_2931_);
v___x_2933_ = 0;
v___x_2934_ = lean_box(0);
v___x_2935_ = l_Lean_Meta_mkFreshExprMVar(v___x_2932_, v___x_2933_, v___x_2934_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v_a_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc_n(v_a_2936_, 2);
lean_dec_ref_known(v___x_2935_, 1);
v___x_2937_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__1));
v___x_2938_ = lean_box(0);
v___x_2939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2939_, 0, v_a_2928_);
lean_ctor_set(v___x_2939_, 1, v___x_2938_);
v___x_2940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2940_, 0, v_a_2926_);
lean_ctor_set(v___x_2940_, 1, v___x_2939_);
lean_inc_ref(v___x_2940_);
v___x_2941_ = l_Lean_Expr_const___override(v___x_2937_, v___x_2940_);
lean_inc(v_a_2924_);
v___x_2942_ = l_Lean_mkAppB(v___x_2941_, v_a_2924_, v_a_2936_);
v___x_2943_ = lean_box(0);
v___x_2944_ = l_Lean_Meta_trySynthInstance(v___x_2942_, v___x_2943_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_3031_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_2947_ = v___x_2944_;
v_isShared_2948_ = v_isSharedCheck_3031_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_dec(v___x_2944_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_3031_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
if (lean_obj_tag(v_a_2945_) == 1)
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_3027_; 
lean_del_object(v___x_2947_);
v_a_2949_ = lean_ctor_get(v_a_2945_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_a_2945_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_2951_ = v_a_2945_;
v_isShared_2952_ = v_isSharedCheck_3027_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v_a_2945_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_3027_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2953_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__2));
v___x_2954_ = l_Lean_Expr_const___override(v___x_2953_, v___x_2940_);
lean_inc_ref(v_expr_2917_);
lean_inc(v_a_2949_);
v___x_2955_ = l_Lean_mkApp4(v___x_2954_, v_a_2924_, v_a_2936_, v_a_2949_, v_expr_2917_);
v___x_2956_ = l_Lean_Meta_expandCoe(v___x_2955_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_3018_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_2959_ = v___x_2956_;
v_isShared_2960_ = v_isSharedCheck_3018_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2956_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_3018_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v_fst_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_3016_; 
v_fst_2961_ = lean_ctor_get(v_a_2957_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v_a_2957_);
if (v_isSharedCheck_3016_ == 0)
{
lean_object* v_unused_3017_; 
v_unused_3017_ = lean_ctor_get(v_a_2957_, 1);
lean_dec(v_unused_3017_);
v___x_2963_ = v_a_2957_;
v_isShared_2964_ = v_isSharedCheck_3016_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_fst_2961_);
lean_dec(v_a_2957_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_3016_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2972_; 
lean_inc(v_a_2921_);
lean_inc_ref(v_a_2920_);
lean_inc(v_a_2919_);
lean_inc_ref(v_a_2918_);
lean_inc(v_fst_2961_);
v___x_2972_ = lean_infer_type(v_fst_2961_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2974_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
lean_inc(v_a_2921_);
lean_inc_ref(v_a_2920_);
lean_inc(v_a_2919_);
lean_inc_ref(v_a_2918_);
v___x_2974_ = lean_whnf(v_a_2973_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; uint8_t v___x_2976_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_2975_);
lean_dec_ref_known(v___x_2974_, 1);
v___x_2976_ = l_Lean_Expr_isForall(v_a_2975_);
lean_dec(v_a_2975_);
if (v___x_2976_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2980_; 
lean_del_object(v___x_2959_);
lean_del_object(v___x_2951_);
v___x_2977_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_2978_ = l_Lean_indentExpr(v_expr_2917_);
if (v_isShared_2964_ == 0)
{
lean_ctor_set_tag(v___x_2963_, 7);
lean_ctor_set(v___x_2963_, 1, v___x_2978_);
lean_ctor_set(v___x_2963_, 0, v___x_2977_);
v___x_2980_ = v___x_2963_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v___x_2977_);
lean_ctor_set(v_reuseFailAlloc_2999_, 1, v___x_2978_);
v___x_2980_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_2998_; 
v___x_2981_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__6, &l_Lean_Meta_coerceToFunction_x3f___closed__6_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__6);
v___x_2982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2980_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = l_Lean_indentExpr(v_fst_2961_);
v___x_2984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2982_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
v___x_2985_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__8, &l_Lean_Meta_coerceToFunction_x3f___closed__8_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__8);
v___x_2986_ = l_Lean_indentExpr(v_a_2949_);
v___x_2987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2985_);
lean_ctor_set(v___x_2987_, 1, v___x_2986_);
v___x_2988_ = l_Lean_MessageData_hint_x27(v___x_2987_);
v___x_2989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2984_);
lean_ctor_set(v___x_2989_, 1, v___x_2988_);
v___x_2990_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2989_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
v_a_2991_ = lean_ctor_get(v___x_2990_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2993_ = v___x_2990_;
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v___x_2990_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
if (v_isShared_2994_ == 0)
{
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2991_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
}
else
{
lean_del_object(v___x_2963_);
lean_dec(v_a_2949_);
lean_dec_ref(v_expr_2917_);
goto v___jp_2965_;
}
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
lean_del_object(v___x_2963_);
lean_dec(v_fst_2961_);
lean_del_object(v___x_2959_);
lean_del_object(v___x_2951_);
lean_dec(v_a_2949_);
lean_dec_ref(v_expr_2917_);
v_a_3000_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2974_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2974_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_del_object(v___x_2963_);
lean_dec(v_fst_2961_);
lean_del_object(v___x_2959_);
lean_del_object(v___x_2951_);
lean_dec(v_a_2949_);
lean_dec_ref(v_expr_2917_);
v_a_3008_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2972_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2972_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
v___jp_2965_:
{
lean_object* v___x_2967_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 0, v_fst_2961_);
v___x_2967_ = v___x_2951_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_fst_2961_);
v___x_2967_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2969_; 
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 0, v___x_2967_);
v___x_2969_ = v___x_2959_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v___x_2967_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_del_object(v___x_2951_);
lean_dec(v_a_2949_);
lean_dec_ref(v_expr_2917_);
v_a_3019_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_2956_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_2956_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
}
else
{
lean_object* v___x_3029_; 
lean_dec(v_a_2945_);
lean_dec_ref_known(v___x_2940_, 2);
lean_dec(v_a_2936_);
lean_dec(v_a_2924_);
lean_dec_ref(v_expr_2917_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 0, v___x_2943_);
v___x_3029_ = v___x_2947_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_2943_);
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
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
lean_dec_ref_known(v___x_2940_, 2);
lean_dec(v_a_2936_);
lean_dec(v_a_2924_);
lean_dec_ref(v_expr_2917_);
v_a_3032_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_2944_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_2944_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3037_; 
if (v_isShared_3035_ == 0)
{
v___x_3037_ = v___x_3034_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_dec(v_a_2928_);
lean_dec(v_a_2926_);
lean_dec(v_a_2924_);
lean_dec_ref(v_expr_2917_);
v_a_3040_ = lean_ctor_get(v___x_2935_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_2935_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_2935_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
else
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
lean_dec(v_a_2928_);
lean_dec(v_a_2926_);
lean_dec(v_a_2924_);
lean_dec_ref(v_expr_2917_);
v_a_3048_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_2930_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_2930_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
lean_dec(v_a_2926_);
lean_dec(v_a_2924_);
lean_dec_ref(v_expr_2917_);
v_a_3056_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_2927_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_2927_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
else
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
lean_dec(v_a_2924_);
lean_dec_ref(v_expr_2917_);
v_a_3064_ = lean_ctor_get(v___x_2925_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v___x_2925_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___x_2925_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
lean_dec_ref(v_expr_2917_);
v_a_3072_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_2923_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_2923_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object* v_expr_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_3080_, v_a_3081_, v_a_3082_, v_a_3083_, v_a_3084_);
lean_dec(v_a_3084_);
lean_dec_ref(v_a_3083_);
lean_dec(v_a_3082_);
lean_dec_ref(v_a_3081_);
return v_res_3086_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__4(void){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3094_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__3));
v___x_3095_ = l_Lean_stringToMessageData(v___x_3094_);
return v___x_3095_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__6(void){
_start:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3097_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__5));
v___x_3098_ = l_Lean_stringToMessageData(v___x_3097_);
return v___x_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object* v_expr_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_){
_start:
{
lean_object* v___x_3105_; 
lean_inc(v_a_3103_);
lean_inc_ref(v_a_3102_);
lean_inc(v_a_3101_);
lean_inc_ref(v_a_3100_);
lean_inc_ref(v_expr_3099_);
v___x_3105_ = lean_infer_type(v_expr_3099_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3107_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
lean_inc_n(v_a_3106_, 2);
lean_dec_ref_known(v___x_3105_, 1);
v___x_3107_ = l_Lean_Meta_getLevel(v_a_3106_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_object* v_a_3108_; lean_object* v___x_3109_; 
v_a_3108_ = lean_ctor_get(v___x_3107_, 0);
lean_inc(v_a_3108_);
lean_dec_ref_known(v___x_3107_, 1);
v___x_3109_ = l_Lean_Meta_mkFreshLevelMVar(v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; uint8_t v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
lean_inc_n(v_a_3110_, 2);
lean_dec_ref_known(v___x_3109_, 1);
v___x_3111_ = l_Lean_mkSort(v_a_3110_);
v___x_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
v___x_3113_ = 0;
v___x_3114_ = lean_box(0);
v___x_3115_ = l_Lean_Meta_mkFreshExprMVar(v___x_3112_, v___x_3113_, v___x_3114_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_a_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc_n(v_a_3116_, 2);
lean_dec_ref_known(v___x_3115_, 1);
v___x_3117_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__1));
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3119_, 0, v_a_3110_);
lean_ctor_set(v___x_3119_, 1, v___x_3118_);
v___x_3120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3120_, 0, v_a_3108_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
lean_inc_ref(v___x_3120_);
v___x_3121_ = l_Lean_Expr_const___override(v___x_3117_, v___x_3120_);
lean_inc(v_a_3106_);
v___x_3122_ = l_Lean_mkAppB(v___x_3121_, v_a_3106_, v_a_3116_);
v___x_3123_ = lean_box(0);
v___x_3124_ = l_Lean_Meta_trySynthInstance(v___x_3122_, v___x_3123_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3211_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3211_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3211_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
if (lean_obj_tag(v_a_3125_) == 1)
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3207_; 
lean_del_object(v___x_3127_);
v_a_3129_ = lean_ctor_get(v_a_3125_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v_a_3125_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3131_ = v_a_3125_;
v_isShared_3132_ = v_isSharedCheck_3207_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v_a_3125_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3207_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3133_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__2));
v___x_3134_ = l_Lean_Expr_const___override(v___x_3133_, v___x_3120_);
lean_inc_ref(v_expr_3099_);
lean_inc(v_a_3129_);
v___x_3135_ = l_Lean_mkApp4(v___x_3134_, v_a_3106_, v_a_3116_, v_a_3129_, v_expr_3099_);
v___x_3136_ = l_Lean_Meta_expandCoe(v___x_3135_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3198_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3139_ = v___x_3136_;
v_isShared_3140_ = v_isSharedCheck_3198_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3136_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3198_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v_fst_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3196_; 
v_fst_3141_ = lean_ctor_get(v_a_3137_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v_a_3137_);
if (v_isSharedCheck_3196_ == 0)
{
lean_object* v_unused_3197_; 
v_unused_3197_ = lean_ctor_get(v_a_3137_, 1);
lean_dec(v_unused_3197_);
v___x_3143_ = v_a_3137_;
v_isShared_3144_ = v_isSharedCheck_3196_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_fst_3141_);
lean_dec(v_a_3137_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3196_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3152_; 
lean_inc(v_a_3103_);
lean_inc_ref(v_a_3102_);
lean_inc(v_a_3101_);
lean_inc_ref(v_a_3100_);
lean_inc(v_fst_3141_);
v___x_3152_ = lean_infer_type(v_fst_3141_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3152_) == 0)
{
lean_object* v_a_3153_; lean_object* v___x_3154_; 
v_a_3153_ = lean_ctor_get(v___x_3152_, 0);
lean_inc(v_a_3153_);
lean_dec_ref_known(v___x_3152_, 1);
lean_inc(v_a_3103_);
lean_inc_ref(v_a_3102_);
lean_inc(v_a_3101_);
lean_inc_ref(v_a_3100_);
v___x_3154_ = lean_whnf(v_a_3153_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
if (lean_obj_tag(v___x_3154_) == 0)
{
lean_object* v_a_3155_; uint8_t v___x_3156_; 
v_a_3155_ = lean_ctor_get(v___x_3154_, 0);
lean_inc(v_a_3155_);
lean_dec_ref_known(v___x_3154_, 1);
v___x_3156_ = l_Lean_Expr_isSort(v_a_3155_);
lean_dec(v_a_3155_);
if (v___x_3156_ == 0)
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3160_; 
lean_del_object(v___x_3139_);
lean_del_object(v___x_3131_);
v___x_3157_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_3158_ = l_Lean_indentExpr(v_expr_3099_);
if (v_isShared_3144_ == 0)
{
lean_ctor_set_tag(v___x_3143_, 7);
lean_ctor_set(v___x_3143_, 1, v___x_3158_);
lean_ctor_set(v___x_3143_, 0, v___x_3157_);
v___x_3160_ = v___x_3143_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3157_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v___x_3158_);
v___x_3160_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
v___x_3161_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__4, &l_Lean_Meta_coerceToSort_x3f___closed__4_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__4);
v___x_3162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3160_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = l_Lean_indentExpr(v_fst_3141_);
v___x_3164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3162_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__6, &l_Lean_Meta_coerceToSort_x3f___closed__6_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__6);
v___x_3166_ = l_Lean_indentExpr(v_a_3129_);
v___x_3167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v___x_3168_ = l_Lean_MessageData_hint_x27(v___x_3167_);
v___x_3169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3164_);
lean_ctor_set(v___x_3169_, 1, v___x_3168_);
v___x_3170_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_3169_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_);
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3170_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_3170_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
else
{
lean_del_object(v___x_3143_);
lean_dec(v_a_3129_);
lean_dec_ref(v_expr_3099_);
goto v___jp_3145_;
}
}
else
{
lean_object* v_a_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3187_; 
lean_del_object(v___x_3143_);
lean_dec(v_fst_3141_);
lean_del_object(v___x_3139_);
lean_del_object(v___x_3131_);
lean_dec(v_a_3129_);
lean_dec_ref(v_expr_3099_);
v_a_3180_ = lean_ctor_get(v___x_3154_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3182_ = v___x_3154_;
v_isShared_3183_ = v_isSharedCheck_3187_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_a_3180_);
lean_dec(v___x_3154_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3187_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3185_; 
if (v_isShared_3183_ == 0)
{
v___x_3185_ = v___x_3182_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v_a_3180_);
v___x_3185_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
return v___x_3185_;
}
}
}
}
else
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3195_; 
lean_del_object(v___x_3143_);
lean_dec(v_fst_3141_);
lean_del_object(v___x_3139_);
lean_del_object(v___x_3131_);
lean_dec(v_a_3129_);
lean_dec_ref(v_expr_3099_);
v_a_3188_ = lean_ctor_get(v___x_3152_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3152_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3190_ = v___x_3152_;
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3152_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3193_; 
if (v_isShared_3191_ == 0)
{
v___x_3193_ = v___x_3190_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_a_3188_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
}
v___jp_3145_:
{
lean_object* v___x_3147_; 
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_fst_3141_);
v___x_3147_ = v___x_3131_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_fst_3141_);
v___x_3147_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
lean_object* v___x_3149_; 
if (v_isShared_3140_ == 0)
{
lean_ctor_set(v___x_3139_, 0, v___x_3147_);
v___x_3149_ = v___x_3139_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
lean_del_object(v___x_3131_);
lean_dec(v_a_3129_);
lean_dec_ref(v_expr_3099_);
v_a_3199_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3136_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3136_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
}
else
{
lean_object* v___x_3209_; 
lean_dec(v_a_3125_);
lean_dec_ref_known(v___x_3120_, 2);
lean_dec(v_a_3116_);
lean_dec(v_a_3106_);
lean_dec_ref(v_expr_3099_);
if (v_isShared_3128_ == 0)
{
lean_ctor_set(v___x_3127_, 0, v___x_3123_);
v___x_3209_ = v___x_3127_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3123_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
lean_dec_ref_known(v___x_3120_, 2);
lean_dec(v_a_3116_);
lean_dec(v_a_3106_);
lean_dec_ref(v_expr_3099_);
v_a_3212_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3124_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3124_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
lean_dec(v_a_3110_);
lean_dec(v_a_3108_);
lean_dec(v_a_3106_);
lean_dec_ref(v_expr_3099_);
v_a_3220_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3115_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3115_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
lean_dec(v_a_3108_);
lean_dec(v_a_3106_);
lean_dec_ref(v_expr_3099_);
v_a_3228_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3109_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3109_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec(v_a_3106_);
lean_dec_ref(v_expr_3099_);
v_a_3236_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3107_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3107_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec_ref(v_expr_3099_);
v_a_3244_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3105_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3105_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object* v_expr_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_){
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l_Lean_Meta_coerceToSort_x3f(v_expr_3252_, v_a_3253_, v_a_3254_, v_a_3255_, v_a_3256_);
lean_dec(v_a_3256_);
lean_dec_ref(v_a_3255_);
lean_dec(v_a_3254_);
lean_dec_ref(v_a_3253_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object* v_e_3259_, lean_object* v___y_3260_){
_start:
{
uint8_t v___x_3262_; 
v___x_3262_ = l_Lean_Expr_hasMVar(v_e_3259_);
if (v___x_3262_ == 0)
{
lean_object* v___x_3263_; 
v___x_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3263_, 0, v_e_3259_);
return v___x_3263_;
}
else
{
lean_object* v___x_3264_; lean_object* v_mctx_3265_; lean_object* v___x_3266_; lean_object* v_fst_3267_; lean_object* v_snd_3268_; lean_object* v___x_3269_; lean_object* v_cache_3270_; lean_object* v_zetaDeltaFVarIds_3271_; lean_object* v_postponed_3272_; lean_object* v_diag_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3282_; 
v___x_3264_ = lean_st_ref_get(v___y_3260_);
v_mctx_3265_ = lean_ctor_get(v___x_3264_, 0);
lean_inc_ref(v_mctx_3265_);
lean_dec(v___x_3264_);
v___x_3266_ = l_Lean_instantiateMVarsCore(v_mctx_3265_, v_e_3259_);
v_fst_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_fst_3267_);
v_snd_3268_ = lean_ctor_get(v___x_3266_, 1);
lean_inc(v_snd_3268_);
lean_dec_ref(v___x_3266_);
v___x_3269_ = lean_st_ref_take(v___y_3260_);
v_cache_3270_ = lean_ctor_get(v___x_3269_, 1);
v_zetaDeltaFVarIds_3271_ = lean_ctor_get(v___x_3269_, 2);
v_postponed_3272_ = lean_ctor_get(v___x_3269_, 3);
v_diag_3273_ = lean_ctor_get(v___x_3269_, 4);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3282_ == 0)
{
lean_object* v_unused_3283_; 
v_unused_3283_ = lean_ctor_get(v___x_3269_, 0);
lean_dec(v_unused_3283_);
v___x_3275_ = v___x_3269_;
v_isShared_3276_ = v_isSharedCheck_3282_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_diag_3273_);
lean_inc(v_postponed_3272_);
lean_inc(v_zetaDeltaFVarIds_3271_);
lean_inc(v_cache_3270_);
lean_dec(v___x_3269_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3282_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
lean_ctor_set(v___x_3275_, 0, v_snd_3268_);
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_snd_3268_);
lean_ctor_set(v_reuseFailAlloc_3281_, 1, v_cache_3270_);
lean_ctor_set(v_reuseFailAlloc_3281_, 2, v_zetaDeltaFVarIds_3271_);
lean_ctor_set(v_reuseFailAlloc_3281_, 3, v_postponed_3272_);
lean_ctor_set(v_reuseFailAlloc_3281_, 4, v_diag_3273_);
v___x_3278_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = lean_st_ref_put(v___y_3260_, v___x_3278_);
v___x_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3280_, 0, v_fst_3267_);
return v___x_3280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object* v_e_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3284_, v___y_3285_);
lean_dec(v___y_3285_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object* v_e_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v___x_3294_; 
v___x_3294_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3288_, v___y_3290_);
return v___x_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object* v_e_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(v_e_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object* v_type_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_){
_start:
{
lean_object* v___y_3309_; lean_object* v___x_3348_; uint8_t v_transparency_3349_; uint8_t v___x_3350_; uint8_t v___x_3351_; 
v___x_3348_ = l_Lean_Meta_Context_config(v_a_3303_);
v_transparency_3349_ = lean_ctor_get_uint8(v___x_3348_, 9);
lean_dec_ref(v___x_3348_);
v___x_3350_ = 2;
v___x_3351_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3349_, v___x_3350_);
if (v___x_3351_ == 0)
{
lean_object* v_keyedConfig_3352_; uint8_t v_trackZetaDelta_3353_; lean_object* v_zetaDeltaSet_3354_; lean_object* v_lctx_3355_; lean_object* v_localInstances_3356_; lean_object* v_defEqCtx_x3f_3357_; lean_object* v_synthPendingDepth_3358_; lean_object* v_customCanUnfoldPredicate_x3f_3359_; uint8_t v_univApprox_3360_; uint8_t v_inTypeClassResolution_3361_; uint8_t v_cacheInferType_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v_keyedConfig_3352_ = lean_ctor_get(v_a_3303_, 0);
v_trackZetaDelta_3353_ = lean_ctor_get_uint8(v_a_3303_, sizeof(void*)*7);
v_zetaDeltaSet_3354_ = lean_ctor_get(v_a_3303_, 1);
v_lctx_3355_ = lean_ctor_get(v_a_3303_, 2);
v_localInstances_3356_ = lean_ctor_get(v_a_3303_, 3);
v_defEqCtx_x3f_3357_ = lean_ctor_get(v_a_3303_, 4);
v_synthPendingDepth_3358_ = lean_ctor_get(v_a_3303_, 5);
v_customCanUnfoldPredicate_x3f_3359_ = lean_ctor_get(v_a_3303_, 6);
v_univApprox_3360_ = lean_ctor_get_uint8(v_a_3303_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3361_ = lean_ctor_get_uint8(v_a_3303_, sizeof(void*)*7 + 2);
v_cacheInferType_3362_ = lean_ctor_get_uint8(v_a_3303_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3352_);
v___x_3363_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3350_, v_keyedConfig_3352_);
lean_inc(v_customCanUnfoldPredicate_x3f_3359_);
lean_inc(v_synthPendingDepth_3358_);
lean_inc(v_defEqCtx_x3f_3357_);
lean_inc_ref(v_localInstances_3356_);
lean_inc_ref(v_lctx_3355_);
lean_inc(v_zetaDeltaSet_3354_);
v___x_3364_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
lean_ctor_set(v___x_3364_, 1, v_zetaDeltaSet_3354_);
lean_ctor_set(v___x_3364_, 2, v_lctx_3355_);
lean_ctor_set(v___x_3364_, 3, v_localInstances_3356_);
lean_ctor_set(v___x_3364_, 4, v_defEqCtx_x3f_3357_);
lean_ctor_set(v___x_3364_, 5, v_synthPendingDepth_3358_);
lean_ctor_set(v___x_3364_, 6, v_customCanUnfoldPredicate_x3f_3359_);
lean_ctor_set_uint8(v___x_3364_, sizeof(void*)*7, v_trackZetaDelta_3353_);
lean_ctor_set_uint8(v___x_3364_, sizeof(void*)*7 + 1, v_univApprox_3360_);
lean_ctor_set_uint8(v___x_3364_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3361_);
lean_ctor_set_uint8(v___x_3364_, sizeof(void*)*7 + 3, v_cacheInferType_3362_);
lean_inc(v_a_3306_);
lean_inc_ref(v_a_3305_);
lean_inc(v_a_3304_);
v___x_3365_ = lean_whnf(v_type_3302_, v___x_3364_, v_a_3304_, v_a_3305_, v_a_3306_);
v___y_3309_ = v___x_3365_;
goto v___jp_3308_;
}
else
{
lean_object* v___x_3366_; 
lean_inc(v_a_3306_);
lean_inc_ref(v_a_3305_);
lean_inc(v_a_3304_);
lean_inc_ref(v_a_3303_);
v___x_3366_ = lean_whnf(v_type_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_);
v___y_3309_ = v___x_3366_;
goto v___jp_3308_;
}
v___jp_3308_:
{
if (lean_obj_tag(v___y_3309_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3339_; 
v_a_3310_ = lean_ctor_get(v___y_3309_, 0);
v_isSharedCheck_3339_ = !lean_is_exclusive(v___y_3309_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3312_ = v___y_3309_;
v_isShared_3313_ = v_isSharedCheck_3339_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___y_3309_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3339_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
if (lean_obj_tag(v_a_3310_) == 5)
{
lean_object* v_fn_3314_; lean_object* v_arg_3315_; lean_object* v___x_3316_; lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3334_; 
lean_del_object(v___x_3312_);
v_fn_3314_ = lean_ctor_get(v_a_3310_, 0);
lean_inc_ref(v_fn_3314_);
v_arg_3315_ = lean_ctor_get(v_a_3310_, 1);
lean_inc_ref(v_arg_3315_);
lean_dec_ref_known(v_a_3310_, 2);
v___x_3316_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_fn_3314_, v_a_3304_);
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3334_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3334_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3333_; 
v___x_3321_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_arg_3315_, v_a_3304_);
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3324_ = v___x_3321_;
v_isShared_3325_ = v_isSharedCheck_3333_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3321_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3333_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3326_; lean_object* v___x_3328_; 
v___x_3326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3326_, 0, v_a_3317_);
lean_ctor_set(v___x_3326_, 1, v_a_3322_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set_tag(v___x_3319_, 1);
lean_ctor_set(v___x_3319_, 0, v___x_3326_);
v___x_3328_ = v___x_3319_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v___x_3326_);
v___x_3328_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
lean_object* v___x_3330_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v___x_3328_);
v___x_3330_ = v___x_3324_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v___x_3328_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
}
else
{
lean_object* v___x_3335_; lean_object* v___x_3337_; 
lean_dec(v_a_3310_);
v___x_3335_ = lean_box(0);
if (v_isShared_3313_ == 0)
{
lean_ctor_set(v___x_3312_, 0, v___x_3335_);
v___x_3337_ = v___x_3312_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v___x_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
}
else
{
lean_object* v_a_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3347_; 
v_a_3340_ = lean_ctor_get(v___y_3309_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___y_3309_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3342_ = v___y_3309_;
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_a_3340_);
lean_dec(v___y_3309_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3345_; 
if (v_isShared_3343_ == 0)
{
v___x_3345_ = v___x_3342_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v_a_3340_);
v___x_3345_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
return v___x_3345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object* v_type_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_){
_start:
{
lean_object* v_res_3373_; 
v_res_3373_ = l_Lean_Meta_isTypeApp_x3f(v_type_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
lean_dec(v_a_3371_);
lean_dec_ref(v_a_3370_);
lean_dec(v_a_3369_);
lean_dec_ref(v_a_3368_);
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object* v_type_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Lean_Meta_isTypeApp_x3f(v_type_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3416_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3416_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3383_ = v___x_3380_;
v_isShared_3384_ = v_isSharedCheck_3416_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3380_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3416_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
if (lean_obj_tag(v_a_3381_) == 1)
{
lean_object* v_val_3385_; lean_object* v_fst_3386_; lean_object* v___x_3387_; 
lean_del_object(v___x_3383_);
v_val_3385_ = lean_ctor_get(v_a_3381_, 0);
lean_inc(v_val_3385_);
lean_dec_ref_known(v_a_3381_, 1);
v_fst_3386_ = lean_ctor_get(v_val_3385_, 0);
lean_inc(v_fst_3386_);
lean_dec(v_val_3385_);
v___x_3387_ = l_Lean_Meta_isMonad_x3f(v_fst_3386_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v_a_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3402_; 
v_a_3388_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3390_ = v___x_3387_;
v_isShared_3391_ = v_isSharedCheck_3402_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_a_3388_);
lean_dec(v___x_3387_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3402_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
if (lean_obj_tag(v_a_3388_) == 0)
{
uint8_t v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3395_; 
v___x_3392_ = 0;
v___x_3393_ = lean_box(v___x_3392_);
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 0, v___x_3393_);
v___x_3395_ = v___x_3390_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3393_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
else
{
uint8_t v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3400_; 
lean_dec_ref_known(v_a_3388_, 1);
v___x_3397_ = 1;
v___x_3398_ = lean_box(v___x_3397_);
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 0, v___x_3398_);
v___x_3400_ = v___x_3390_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v___x_3398_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
v_a_3403_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3387_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3387_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
uint8_t v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3414_; 
lean_dec(v_a_3381_);
v___x_3411_ = 0;
v___x_3412_ = lean_box(v___x_3411_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v___x_3412_);
v___x_3414_ = v___x_3383_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3412_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
}
}
else
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3424_; 
v_a_3417_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3419_ = v___x_3380_;
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3380_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object* v_type_3425_, lean_object* v_a_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lean_Meta_isMonadApp(v_type_3425_, v_a_3426_, v_a_3427_, v_a_3428_, v_a_3429_);
lean_dec(v_a_3429_);
lean_dec_ref(v_a_3428_);
lean_dec(v_a_3427_);
lean_dec_ref(v_a_3426_);
return v_res_3431_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object* v_opts_3432_, lean_object* v_opt_3433_){
_start:
{
lean_object* v_name_3434_; lean_object* v_defValue_3435_; lean_object* v_map_3436_; lean_object* v___x_3437_; 
v_name_3434_ = lean_ctor_get(v_opt_3433_, 0);
v_defValue_3435_ = lean_ctor_get(v_opt_3433_, 1);
v_map_3436_ = lean_ctor_get(v_opts_3432_, 0);
v___x_3437_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3436_, v_name_3434_);
if (lean_obj_tag(v___x_3437_) == 0)
{
uint8_t v___x_3438_; 
v___x_3438_ = lean_unbox(v_defValue_3435_);
return v___x_3438_;
}
else
{
lean_object* v_val_3439_; 
v_val_3439_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_val_3439_);
lean_dec_ref_known(v___x_3437_, 1);
if (lean_obj_tag(v_val_3439_) == 1)
{
uint8_t v_v_3440_; 
v_v_3440_ = lean_ctor_get_uint8(v_val_3439_, 0);
lean_dec_ref_known(v_val_3439_, 0);
return v_v_3440_;
}
else
{
uint8_t v___x_3441_; 
lean_dec(v_val_3439_);
v___x_3441_ = lean_unbox(v_defValue_3435_);
return v___x_3441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object* v_opts_3442_, lean_object* v_opt_3443_){
_start:
{
uint8_t v_res_3444_; lean_object* v_r_3445_; 
v_res_3444_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v_opts_3442_, v_opt_3443_);
lean_dec_ref(v_opt_3443_);
lean_dec_ref(v_opts_3442_);
v_r_3445_ = lean_box(v_res_3444_);
return v_r_3445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object* v_x_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3454_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0));
v___x_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
return v___x_3455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object* v_x_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_){
_start:
{
lean_object* v_res_3462_; 
v_res_3462_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_x_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
lean_dec(v___y_3460_);
lean_dec_ref(v___y_3459_);
lean_dec(v___y_3458_);
lean_dec_ref(v___y_3457_);
lean_dec_ref(v_x_3456_);
return v_res_3462_;
}
}
static lean_object* _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6(void){
_start:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3472_ = lean_unsigned_to_nat(0u);
v___x_3473_ = l_Lean_mkBVar(v___x_3472_);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object* v_e_3485_, lean_object* v_expectedType_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_){
_start:
{
lean_object* v_a_3493_; lean_object* v___y_3501_; lean_object* v___x_3511_; lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3915_; 
v___x_3511_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_expectedType_3486_, v_a_3488_);
v_a_3512_ = lean_ctor_get(v___x_3511_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3514_ = v___x_3511_;
v_isShared_3515_ = v_isSharedCheck_3915_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3511_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3915_;
goto v_resetjp_3513_;
}
v___jp_3492_:
{
uint8_t v___x_3494_; 
v___x_3494_ = l_Lean_Exception_isInterrupt(v_a_3493_);
if (v___x_3494_ == 0)
{
uint8_t v___x_3495_; 
lean_inc_ref(v_a_3493_);
v___x_3495_ = l_Lean_Exception_isRuntime(v_a_3493_);
if (v___x_3495_ == 0)
{
lean_object* v___x_3496_; lean_object* v___x_3497_; 
lean_dec_ref(v_a_3493_);
v___x_3496_ = lean_box(0);
v___x_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
return v___x_3497_;
}
else
{
lean_object* v___x_3498_; 
v___x_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3498_, 0, v_a_3493_);
return v___x_3498_;
}
}
else
{
lean_object* v___x_3499_; 
v___x_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3499_, 0, v_a_3493_);
return v___x_3499_;
}
}
v___jp_3500_:
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3510_; 
v_a_3502_ = lean_ctor_get(v___y_3501_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___y_3501_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3504_ = v___y_3501_;
v_isShared_3505_ = v_isSharedCheck_3510_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___y_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3510_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v_a_3506_; lean_object* v___x_3508_; 
v_a_3506_ = lean_ctor_get(v_a_3502_, 0);
lean_inc(v_a_3506_);
lean_dec(v_a_3502_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v_a_3506_);
v___x_3508_ = v___x_3504_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_a_3506_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
v_resetjp_3513_:
{
lean_object* v___x_3516_; 
lean_inc(v_a_3490_);
lean_inc_ref(v_a_3489_);
lean_inc(v_a_3488_);
lean_inc_ref(v_a_3487_);
lean_inc_ref(v_e_3485_);
v___x_3516_ = lean_infer_type(v_e_3485_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3518_; lean_object* v_a_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3906_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3517_);
lean_dec_ref_known(v___x_3516_, 1);
v___x_3518_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_a_3517_, v_a_3488_);
v_a_3519_ = lean_ctor_get(v___x_3518_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3521_ = v___x_3518_;
v_isShared_3522_ = v_isSharedCheck_3906_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_a_3519_);
lean_dec(v___x_3518_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3906_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3523_; 
lean_inc(v_a_3512_);
v___x_3523_ = l_Lean_Meta_isTypeApp_x3f(v_a_3512_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3523_) == 0)
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3897_; 
v_a_3524_ = lean_ctor_get(v___x_3523_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3523_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3526_ = v___x_3523_;
v_isShared_3527_ = v_isSharedCheck_3897_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3523_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3897_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
if (lean_obj_tag(v_a_3524_) == 1)
{
lean_object* v_val_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3892_; 
lean_del_object(v___x_3526_);
v_val_3528_ = lean_ctor_get(v_a_3524_, 0);
v_isSharedCheck_3892_ = !lean_is_exclusive(v_a_3524_);
if (v_isSharedCheck_3892_ == 0)
{
v___x_3530_ = v_a_3524_;
v_isShared_3531_ = v_isSharedCheck_3892_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_val_3528_);
lean_dec(v_a_3524_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3892_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v_fst_3532_; lean_object* v_snd_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3891_; 
v_fst_3532_ = lean_ctor_get(v_val_3528_, 0);
v_snd_3533_ = lean_ctor_get(v_val_3528_, 1);
v_isSharedCheck_3891_ = !lean_is_exclusive(v_val_3528_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3535_ = v_val_3528_;
v_isShared_3536_ = v_isSharedCheck_3891_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_snd_3533_);
lean_inc(v_fst_3532_);
lean_dec(v_val_3528_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3891_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3537_; 
lean_inc(v_a_3519_);
v___x_3537_ = l_Lean_Meta_isTypeApp_x3f(v_a_3519_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3882_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3540_ = v___x_3537_;
v_isShared_3541_ = v_isSharedCheck_3882_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_a_3538_);
lean_dec(v___x_3537_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3882_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
if (lean_obj_tag(v_a_3538_) == 1)
{
lean_object* v_val_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3877_; 
lean_del_object(v___x_3540_);
v_val_3542_ = lean_ctor_get(v_a_3538_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v_a_3538_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3544_ = v_a_3538_;
v_isShared_3545_ = v_isSharedCheck_3877_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_val_3542_);
lean_dec(v_a_3538_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3877_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v_fst_3546_; lean_object* v_snd_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3876_; 
v_fst_3546_ = lean_ctor_get(v_val_3542_, 0);
v_snd_3547_ = lean_ctor_get(v_val_3542_, 1);
v_isSharedCheck_3876_ = !lean_is_exclusive(v_val_3542_);
if (v_isSharedCheck_3876_ == 0)
{
v___x_3549_ = v_val_3542_;
v_isShared_3550_ = v_isSharedCheck_3876_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_snd_3547_);
lean_inc(v_fst_3546_);
lean_dec(v_val_3542_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3876_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3551_; 
v___x_3551_ = l_Lean_Meta_saveState___redArg(v_a_3488_, v_a_3490_);
if (lean_obj_tag(v___x_3551_) == 0)
{
lean_object* v_a_3552_; lean_object* v___x_3553_; 
v_a_3552_ = lean_ctor_get(v___x_3551_, 0);
lean_inc(v_a_3552_);
lean_dec_ref_known(v___x_3551_, 1);
lean_inc(v_fst_3532_);
lean_inc(v_fst_3546_);
v___x_3553_ = l_Lean_Meta_isExprDefEq(v_fst_3546_, v_fst_3532_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3859_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3556_ = v___x_3553_;
v_isShared_3557_ = v_isSharedCheck_3859_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3553_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3859_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
uint8_t v___x_3558_; 
v___x_3558_ = lean_unbox(v_a_3554_);
lean_dec(v_a_3554_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; lean_object* v___x_3560_; uint8_t v___x_3561_; 
lean_dec(v_a_3552_);
lean_del_object(v___x_3530_);
lean_del_object(v___x_3521_);
lean_del_object(v___x_3514_);
v___x_3559_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3489_);
v___x_3560_ = l_Lean_Meta_autoLift;
v___x_3561_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v___x_3559_, v___x_3560_);
lean_dec_ref(v___x_3559_);
if (v___x_3561_ == 0)
{
lean_object* v___x_3562_; lean_object* v___x_3564_; 
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3562_ = lean_box(0);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 0, v___x_3562_);
v___x_3564_ = v___x_3556_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
else
{
lean_object* v___x_3566_; 
lean_del_object(v___x_3556_);
lean_inc(v_a_3490_);
lean_inc_ref(v_a_3489_);
lean_inc(v_a_3488_);
lean_inc_ref(v_a_3487_);
lean_inc(v_fst_3546_);
v___x_3566_ = lean_infer_type(v_fst_3546_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; lean_object* v___x_3568_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
lean_dec_ref_known(v___x_3566_, 1);
lean_inc(v_a_3490_);
lean_inc_ref(v_a_3489_);
lean_inc(v_a_3488_);
lean_inc_ref(v_a_3487_);
v___x_3568_ = lean_whnf(v_a_3567_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3568_, 1);
if (lean_obj_tag(v_a_3569_) == 7)
{
lean_object* v_binderType_3570_; 
v_binderType_3570_ = lean_ctor_get(v_a_3569_, 1);
if (lean_obj_tag(v_binderType_3570_) == 3)
{
lean_object* v_body_3571_; 
v_body_3571_ = lean_ctor_get(v_a_3569_, 2);
if (lean_obj_tag(v_body_3571_) == 3)
{
lean_object* v_u_3572_; lean_object* v_u_3573_; lean_object* v___x_3574_; 
lean_inc_ref(v_body_3571_);
lean_inc_ref(v_binderType_3570_);
lean_dec_ref_known(v_a_3569_, 3);
v_u_3572_ = lean_ctor_get(v_binderType_3570_, 0);
lean_inc(v_u_3572_);
lean_dec_ref_known(v_binderType_3570_, 1);
v_u_3573_ = lean_ctor_get(v_body_3571_, 0);
lean_inc(v_u_3573_);
lean_dec_ref_known(v_body_3571_, 1);
lean_inc(v_a_3490_);
lean_inc_ref(v_a_3489_);
lean_inc(v_a_3488_);
lean_inc_ref(v_a_3487_);
lean_inc(v_fst_3532_);
v___x_3574_ = lean_infer_type(v_fst_3532_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3576_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref_known(v___x_3574_, 1);
lean_inc(v_a_3490_);
lean_inc_ref(v_a_3489_);
lean_inc(v_a_3488_);
lean_inc_ref(v_a_3487_);
v___x_3576_ = lean_whnf(v_a_3575_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
lean_inc(v_a_3577_);
lean_dec_ref_known(v___x_3576_, 1);
if (lean_obj_tag(v_a_3577_) == 7)
{
lean_object* v_binderType_3578_; 
v_binderType_3578_ = lean_ctor_get(v_a_3577_, 1);
if (lean_obj_tag(v_binderType_3578_) == 3)
{
lean_object* v_body_3579_; 
v_body_3579_ = lean_ctor_get(v_a_3577_, 2);
if (lean_obj_tag(v_body_3579_) == 3)
{
lean_object* v_u_3580_; lean_object* v_u_3581_; lean_object* v___x_3582_; 
lean_inc_ref(v_body_3579_);
lean_inc_ref(v_binderType_3578_);
lean_dec_ref_known(v_a_3577_, 3);
v_u_3580_ = lean_ctor_get(v_binderType_3578_, 0);
lean_inc(v_u_3580_);
lean_dec_ref_known(v_binderType_3578_, 1);
v_u_3581_ = lean_ctor_get(v_body_3579_, 0);
lean_inc(v_u_3581_);
lean_dec_ref_known(v_body_3579_, 1);
v___x_3582_ = l_Lean_Meta_decLevel(v_u_3572_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3582_) == 0)
{
lean_object* v_a_3583_; lean_object* v___x_3584_; 
v_a_3583_ = lean_ctor_get(v___x_3582_, 0);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3582_, 1);
v___x_3584_ = l_Lean_Meta_decLevel(v_u_3580_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_a_3585_; lean_object* v___x_3586_; 
v_a_3585_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_a_3585_);
lean_dec_ref_known(v___x_3584_, 1);
lean_inc(v_a_3583_);
v___x_3586_ = l_Lean_Meta_isLevelDefEq(v_a_3583_, v_a_3585_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3751_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3589_ = v___x_3586_;
v_isShared_3590_ = v_isSharedCheck_3751_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3586_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3751_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
uint8_t v___x_3591_; 
v___x_3591_ = lean_unbox(v_a_3587_);
lean_dec(v_a_3587_);
if (v___x_3591_ == 1)
{
lean_object* v___x_3592_; 
lean_del_object(v___x_3589_);
v___x_3592_ = l_Lean_Meta_decLevel(v_u_3573_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3592_) == 0)
{
lean_object* v_a_3593_; lean_object* v___x_3594_; 
v_a_3593_ = lean_ctor_get(v___x_3592_, 0);
lean_inc(v_a_3593_);
lean_dec_ref_known(v___x_3592_, 1);
v___x_3594_ = l_Lean_Meta_decLevel(v_u_3581_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3594_) == 0)
{
lean_object* v_a_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3599_; 
v_a_3595_ = lean_ctor_get(v___x_3594_, 0);
lean_inc(v_a_3595_);
lean_dec_ref_known(v___x_3594_, 1);
v___x_3596_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__1));
v___x_3597_ = lean_box(0);
if (v_isShared_3550_ == 0)
{
lean_ctor_set_tag(v___x_3549_, 1);
lean_ctor_set(v___x_3549_, 1, v___x_3597_);
lean_ctor_set(v___x_3549_, 0, v_a_3595_);
v___x_3599_ = v___x_3549_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v_a_3595_);
lean_ctor_set(v_reuseFailAlloc_3744_, 1, v___x_3597_);
v___x_3599_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
lean_object* v___x_3601_; 
if (v_isShared_3536_ == 0)
{
lean_ctor_set_tag(v___x_3535_, 1);
lean_ctor_set(v___x_3535_, 1, v___x_3599_);
lean_ctor_set(v___x_3535_, 0, v_a_3593_);
v___x_3601_ = v___x_3535_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_a_3593_);
lean_ctor_set(v_reuseFailAlloc_3743_, 1, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3602_, 0, v_a_3583_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v___x_3603_ = l_Lean_Expr_const___override(v___x_3596_, v___x_3602_);
v___x_3604_ = lean_unsigned_to_nat(2u);
v___x_3605_ = lean_mk_empty_array_with_capacity(v___x_3604_);
lean_inc(v_fst_3546_);
v___x_3606_ = lean_array_push(v___x_3605_, v_fst_3546_);
lean_inc(v_fst_3532_);
v___x_3607_ = lean_array_push(v___x_3606_, v_fst_3532_);
v___x_3608_ = l_Lean_mkAppN(v___x_3603_, v___x_3607_);
lean_dec_ref(v___x_3607_);
v___x_3609_ = lean_box(0);
v___x_3610_ = l_Lean_Meta_trySynthInstance(v___x_3608_, v___x_3609_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v_a_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3741_; 
v_a_3611_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3613_ = v___x_3610_;
v_isShared_3614_ = v_isSharedCheck_3741_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_a_3611_);
lean_dec(v___x_3610_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3741_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
if (lean_obj_tag(v_a_3611_) == 1)
{
lean_object* v_a_3615_; lean_object* v___x_3616_; 
lean_del_object(v___x_3613_);
v_a_3615_ = lean_ctor_get(v_a_3611_, 0);
lean_inc(v_a_3615_);
lean_dec_ref_known(v_a_3611_, 1);
lean_inc(v_snd_3547_);
v___x_3616_ = l_Lean_Meta_getDecLevel(v_snd_3547_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; lean_object* v___x_3618_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3616_, 1);
v___x_3618_ = l_Lean_Meta_getDecLevel(v_a_3519_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3620_; 
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3618_, 1);
lean_inc(v_a_3512_);
v___x_3620_ = l_Lean_Meta_getDecLevel(v_a_3512_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3621_);
lean_dec_ref_known(v___x_3620_, 1);
v___x_3622_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__3));
v___x_3623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3623_, 0, v_a_3621_);
lean_ctor_set(v___x_3623_, 1, v___x_3597_);
v___x_3624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3624_, 0, v_a_3619_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3625_, 0, v_a_3617_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
lean_inc_ref(v___x_3625_);
v___x_3626_ = l_Lean_mkConst(v___x_3622_, v___x_3625_);
v___x_3627_ = lean_unsigned_to_nat(5u);
v___x_3628_ = lean_mk_empty_array_with_capacity(v___x_3627_);
lean_inc(v_fst_3546_);
v___x_3629_ = lean_array_push(v___x_3628_, v_fst_3546_);
lean_inc(v_fst_3532_);
v___x_3630_ = lean_array_push(v___x_3629_, v_fst_3532_);
lean_inc(v_a_3615_);
v___x_3631_ = lean_array_push(v___x_3630_, v_a_3615_);
lean_inc(v_snd_3547_);
v___x_3632_ = lean_array_push(v___x_3631_, v_snd_3547_);
lean_inc_ref(v_e_3485_);
v___x_3633_ = lean_array_push(v___x_3632_, v_e_3485_);
v___x_3634_ = l_Lean_mkAppN(v___x_3626_, v___x_3633_);
lean_dec_ref(v___x_3633_);
lean_inc(v_a_3490_);
lean_inc_ref(v_a_3489_);
lean_inc(v_a_3488_);
lean_inc_ref(v_a_3487_);
lean_inc_ref(v___x_3634_);
v___x_3635_ = lean_infer_type(v___x_3634_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v_a_3636_; lean_object* v___x_3637_; 
v_a_3636_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_a_3636_);
lean_dec_ref_known(v___x_3635_, 1);
lean_inc(v_a_3512_);
v___x_3637_ = l_Lean_Meta_isExprDefEq(v_a_3512_, v_a_3636_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3732_; 
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3640_ = v___x_3637_;
v_isShared_3641_ = v_isSharedCheck_3732_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v___x_3637_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3732_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
uint8_t v___x_3642_; 
v___x_3642_ = lean_unbox(v_a_3638_);
lean_dec(v_a_3638_);
if (v___x_3642_ == 0)
{
lean_object* v___x_3643_; 
lean_del_object(v___x_3640_);
lean_dec_ref(v___x_3634_);
lean_del_object(v___x_3544_);
lean_inc(v_fst_3532_);
v___x_3643_ = l_Lean_Meta_isMonad_x3f(v_fst_3532_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3724_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
v_isSharedCheck_3724_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_3724_ == 0)
{
v___x_3646_ = v___x_3643_;
v_isShared_3647_ = v_isSharedCheck_3724_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3643_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3724_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
if (lean_obj_tag(v_a_3644_) == 1)
{
lean_object* v_val_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3720_; 
lean_del_object(v___x_3646_);
v_val_3648_ = lean_ctor_get(v_a_3644_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v_a_3644_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3650_ = v_a_3644_;
v_isShared_3651_ = v_isSharedCheck_3720_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_val_3648_);
lean_dec(v_a_3644_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3720_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3652_; 
lean_inc(v_snd_3547_);
v___x_3652_ = l_Lean_Meta_getLevel(v_snd_3547_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v_a_3653_; lean_object* v___x_3654_; 
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
lean_inc(v_a_3653_);
lean_dec_ref_known(v___x_3652_, 1);
lean_inc(v_snd_3533_);
v___x_3654_ = l_Lean_Meta_getLevel(v_snd_3533_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v_a_3655_; lean_object* v___x_3656_; uint8_t v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
v_a_3655_ = lean_ctor_get(v___x_3654_, 0);
lean_inc(v_a_3655_);
lean_dec_ref_known(v___x_3654_, 1);
v___x_3656_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__5));
v___x_3657_ = 0;
v___x_3658_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_3659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3659_, 0, v_a_3655_);
lean_ctor_set(v___x_3659_, 1, v___x_3597_);
v___x_3660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3660_, 0, v_a_3653_);
lean_ctor_set(v___x_3660_, 1, v___x_3659_);
v___x_3661_ = l_Lean_mkConst(v___x_3658_, v___x_3660_);
v___x_3662_ = lean_obj_once(&l_Lean_Meta_coerceMonadLift_x3f___closed__6, &l_Lean_Meta_coerceMonadLift_x3f___closed__6_once, _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6);
v___x_3663_ = lean_unsigned_to_nat(3u);
v___x_3664_ = lean_mk_empty_array_with_capacity(v___x_3663_);
lean_inc_n(v_snd_3547_, 2);
v___x_3665_ = lean_array_push(v___x_3664_, v_snd_3547_);
v___x_3666_ = lean_array_push(v___x_3665_, v___x_3662_);
lean_inc(v_snd_3533_);
v___x_3667_ = lean_array_push(v___x_3666_, v_snd_3533_);
v___x_3668_ = l_Lean_mkAppN(v___x_3661_, v___x_3667_);
lean_dec_ref(v___x_3667_);
v___x_3669_ = l_Lean_mkForall(v___x_3656_, v___x_3657_, v_snd_3547_, v___x_3668_);
v___x_3670_ = l_Lean_Meta_trySynthInstance(v___x_3669_, v___x_3609_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3670_) == 0)
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3716_; 
v_a_3671_ = lean_ctor_get(v___x_3670_, 0);
v_isSharedCheck_3716_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3673_ = v___x_3670_;
v_isShared_3674_ = v_isSharedCheck_3716_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3670_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3716_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
if (lean_obj_tag(v_a_3671_) == 1)
{
lean_object* v_a_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
lean_del_object(v___x_3673_);
v_a_3675_ = lean_ctor_get(v_a_3671_, 0);
lean_inc(v_a_3675_);
lean_dec_ref_known(v_a_3671_, 1);
v___x_3676_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__9));
v___x_3677_ = l_Lean_mkConst(v___x_3676_, v___x_3625_);
v___x_3678_ = lean_unsigned_to_nat(8u);
v___x_3679_ = lean_mk_empty_array_with_capacity(v___x_3678_);
v___x_3680_ = lean_array_push(v___x_3679_, v_fst_3546_);
v___x_3681_ = lean_array_push(v___x_3680_, v_fst_3532_);
v___x_3682_ = lean_array_push(v___x_3681_, v_snd_3547_);
v___x_3683_ = lean_array_push(v___x_3682_, v_snd_3533_);
v___x_3684_ = lean_array_push(v___x_3683_, v_a_3615_);
v___x_3685_ = lean_array_push(v___x_3684_, v_a_3675_);
v___x_3686_ = lean_array_push(v___x_3685_, v_val_3648_);
v___x_3687_ = lean_array_push(v___x_3686_, v_e_3485_);
v___x_3688_ = l_Lean_mkAppN(v___x_3677_, v___x_3687_);
lean_dec_ref(v___x_3687_);
v___x_3689_ = l_Lean_Meta_expandCoe(v___x_3688_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; lean_object* v_fst_3691_; lean_object* v___x_3692_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
lean_inc(v_a_3690_);
lean_dec_ref_known(v___x_3689_, 1);
v_fst_3691_ = lean_ctor_get(v_a_3690_, 0);
lean_inc_n(v_fst_3691_, 2);
lean_dec(v_a_3690_);
lean_inc(v_a_3490_);
lean_inc_ref(v_a_3489_);
lean_inc(v_a_3488_);
lean_inc_ref(v_a_3487_);
v___x_3692_ = lean_infer_type(v_fst_3691_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; lean_object* v___x_3694_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3693_);
lean_dec_ref_known(v___x_3692_, 1);
v___x_3694_ = l_Lean_Meta_isExprDefEq(v_a_3512_, v_a_3693_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3709_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3697_ = v___x_3694_;
v_isShared_3698_ = v_isSharedCheck_3709_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v___x_3694_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3709_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
uint8_t v___x_3699_; 
v___x_3699_ = lean_unbox(v_a_3695_);
lean_dec(v_a_3695_);
if (v___x_3699_ == 0)
{
lean_object* v___x_3701_; 
lean_dec(v_fst_3691_);
lean_del_object(v___x_3650_);
if (v_isShared_3698_ == 0)
{
lean_ctor_set(v___x_3697_, 0, v___x_3609_);
v___x_3701_ = v___x_3697_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3609_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
else
{
lean_object* v___x_3704_; 
if (v_isShared_3651_ == 0)
{
lean_ctor_set(v___x_3650_, 0, v_fst_3691_);
v___x_3704_ = v___x_3650_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_fst_3691_);
v___x_3704_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
lean_object* v___x_3706_; 
if (v_isShared_3698_ == 0)
{
lean_ctor_set(v___x_3697_, 0, v___x_3704_);
v___x_3706_ = v___x_3697_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
}
else
{
lean_object* v_a_3710_; 
lean_dec(v_fst_3691_);
lean_del_object(v___x_3650_);
v_a_3710_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3710_);
lean_dec_ref_known(v___x_3694_, 1);
v_a_3493_ = v_a_3710_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3711_; 
lean_dec(v_fst_3691_);
lean_del_object(v___x_3650_);
lean_dec(v_a_3512_);
v_a_3711_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3711_);
lean_dec_ref_known(v___x_3692_, 1);
v_a_3493_ = v_a_3711_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3712_; 
lean_del_object(v___x_3650_);
lean_dec(v_a_3512_);
v_a_3712_ = lean_ctor_get(v___x_3689_, 0);
lean_inc(v_a_3712_);
lean_dec_ref_known(v___x_3689_, 1);
v_a_3493_ = v_a_3712_;
goto v___jp_3492_;
}
}
else
{
lean_object* v___x_3714_; 
lean_dec(v_a_3671_);
lean_del_object(v___x_3650_);
lean_dec(v_val_3648_);
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
if (v_isShared_3674_ == 0)
{
lean_ctor_set(v___x_3673_, 0, v___x_3609_);
v___x_3714_ = v___x_3673_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v___x_3609_);
v___x_3714_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
return v___x_3714_;
}
}
}
}
else
{
lean_object* v_a_3717_; 
lean_del_object(v___x_3650_);
lean_dec(v_val_3648_);
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3717_ = lean_ctor_get(v___x_3670_, 0);
lean_inc(v_a_3717_);
lean_dec_ref_known(v___x_3670_, 1);
v_a_3493_ = v_a_3717_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3718_; 
lean_dec(v_a_3653_);
lean_del_object(v___x_3650_);
lean_dec(v_val_3648_);
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3718_ = lean_ctor_get(v___x_3654_, 0);
lean_inc(v_a_3718_);
lean_dec_ref_known(v___x_3654_, 1);
v_a_3493_ = v_a_3718_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3719_; 
lean_del_object(v___x_3650_);
lean_dec(v_val_3648_);
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3719_ = lean_ctor_get(v___x_3652_, 0);
lean_inc(v_a_3719_);
lean_dec_ref_known(v___x_3652_, 1);
v_a_3493_ = v_a_3719_;
goto v___jp_3492_;
}
}
}
else
{
lean_object* v___x_3722_; 
lean_dec(v_a_3644_);
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
if (v_isShared_3647_ == 0)
{
lean_ctor_set(v___x_3646_, 0, v___x_3609_);
v___x_3722_ = v___x_3646_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v___x_3609_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
}
}
else
{
lean_object* v_a_3725_; 
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3725_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v___x_3643_, 1);
v_a_3493_ = v_a_3725_;
goto v___jp_3492_;
}
}
else
{
lean_object* v___x_3727_; 
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v___x_3634_);
v___x_3727_ = v___x_3544_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v___x_3634_);
v___x_3727_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
lean_object* v___x_3729_; 
if (v_isShared_3641_ == 0)
{
lean_ctor_set(v___x_3640_, 0, v___x_3727_);
v___x_3729_ = v___x_3640_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v___x_3727_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
}
}
}
}
}
else
{
lean_object* v_a_3733_; 
lean_dec_ref(v___x_3634_);
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3733_ = lean_ctor_get(v___x_3637_, 0);
lean_inc(v_a_3733_);
lean_dec_ref_known(v___x_3637_, 1);
v_a_3493_ = v_a_3733_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3734_; 
lean_dec_ref(v___x_3634_);
lean_dec_ref_known(v___x_3625_, 2);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3734_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_a_3734_);
lean_dec_ref_known(v___x_3635_, 1);
v_a_3493_ = v_a_3734_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3735_; 
lean_dec(v_a_3619_);
lean_dec(v_a_3617_);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3735_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3735_);
lean_dec_ref_known(v___x_3620_, 1);
v_a_3493_ = v_a_3735_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3736_; 
lean_dec(v_a_3617_);
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3736_ = lean_ctor_get(v___x_3618_, 0);
lean_inc(v_a_3736_);
lean_dec_ref_known(v___x_3618_, 1);
v_a_3493_ = v_a_3736_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3737_; 
lean_dec(v_a_3615_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3737_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3616_, 1);
v_a_3493_ = v_a_3737_;
goto v___jp_3492_;
}
}
else
{
lean_object* v___x_3739_; 
lean_dec(v_a_3611_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
if (v_isShared_3614_ == 0)
{
lean_ctor_set(v___x_3613_, 0, v___x_3609_);
v___x_3739_ = v___x_3613_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3609_);
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
else
{
lean_object* v_a_3742_; 
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3742_ = lean_ctor_get(v___x_3610_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___x_3610_, 1);
v_a_3493_ = v_a_3742_;
goto v___jp_3492_;
}
}
}
}
else
{
lean_object* v_a_3745_; 
lean_dec(v_a_3593_);
lean_dec(v_a_3583_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3745_ = lean_ctor_get(v___x_3594_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v___x_3594_, 1);
v_a_3493_ = v_a_3745_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3746_; 
lean_dec(v_a_3583_);
lean_dec(v_u_3581_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3746_ = lean_ctor_get(v___x_3592_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v___x_3592_, 1);
v_a_3493_ = v_a_3746_;
goto v___jp_3492_;
}
}
else
{
lean_object* v___x_3747_; lean_object* v___x_3749_; 
lean_dec(v_a_3583_);
lean_dec(v_u_3581_);
lean_dec(v_u_3573_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3747_ = lean_box(0);
if (v_isShared_3590_ == 0)
{
lean_ctor_set(v___x_3589_, 0, v___x_3747_);
v___x_3749_ = v___x_3589_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v___x_3747_);
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
lean_object* v_a_3752_; 
lean_dec(v_a_3583_);
lean_dec(v_u_3581_);
lean_dec(v_u_3573_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3752_ = lean_ctor_get(v___x_3586_, 0);
lean_inc(v_a_3752_);
lean_dec_ref_known(v___x_3586_, 1);
v_a_3493_ = v_a_3752_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3753_; 
lean_dec(v_a_3583_);
lean_dec(v_u_3581_);
lean_dec(v_u_3573_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3753_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_a_3753_);
lean_dec_ref_known(v___x_3584_, 1);
v_a_3493_ = v_a_3753_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3754_; 
lean_dec(v_u_3581_);
lean_dec(v_u_3580_);
lean_dec(v_u_3573_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3754_ = lean_ctor_get(v___x_3582_, 0);
lean_inc(v_a_3754_);
lean_dec_ref_known(v___x_3582_, 1);
v_a_3493_ = v_a_3754_;
goto v___jp_3492_;
}
}
else
{
lean_object* v___x_3755_; 
lean_dec(v_u_3573_);
lean_dec(v_u_3572_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3755_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3577_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
lean_dec_ref_known(v_a_3577_, 3);
v___y_3501_ = v___x_3755_;
goto v___jp_3500_;
}
}
else
{
lean_object* v___x_3756_; 
lean_dec(v_u_3573_);
lean_dec(v_u_3572_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3756_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3577_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
lean_dec_ref_known(v_a_3577_, 3);
v___y_3501_ = v___x_3756_;
goto v___jp_3500_;
}
}
else
{
lean_object* v___x_3757_; 
lean_dec(v_u_3573_);
lean_dec(v_u_3572_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3757_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3577_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
lean_dec(v_a_3577_);
v___y_3501_ = v___x_3757_;
goto v___jp_3500_;
}
}
else
{
lean_object* v_a_3758_; 
lean_dec(v_u_3573_);
lean_dec(v_u_3572_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3758_ = lean_ctor_get(v___x_3576_, 0);
lean_inc(v_a_3758_);
lean_dec_ref_known(v___x_3576_, 1);
v_a_3493_ = v_a_3758_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3759_; 
lean_dec(v_u_3573_);
lean_dec(v_u_3572_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3759_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3759_);
lean_dec_ref_known(v___x_3574_, 1);
v_a_3493_ = v_a_3759_;
goto v___jp_3492_;
}
}
else
{
lean_object* v___x_3760_; 
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3760_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3569_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
lean_dec_ref_known(v_a_3569_, 3);
v___y_3501_ = v___x_3760_;
goto v___jp_3500_;
}
}
else
{
lean_object* v___x_3761_; 
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3761_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3569_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
lean_dec_ref_known(v_a_3569_, 3);
v___y_3501_ = v___x_3761_;
goto v___jp_3500_;
}
}
else
{
lean_object* v___x_3762_; 
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3762_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3569_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
lean_dec(v_a_3569_);
v___y_3501_ = v___x_3762_;
goto v___jp_3500_;
}
}
else
{
lean_object* v_a_3763_; 
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3763_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3763_);
lean_dec_ref_known(v___x_3568_, 1);
v_a_3493_ = v_a_3763_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3764_; 
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3764_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3764_);
lean_dec_ref_known(v___x_3566_, 1);
v_a_3493_ = v_a_3764_;
goto v___jp_3492_;
}
}
}
else
{
lean_object* v___x_3765_; 
lean_del_object(v___x_3556_);
lean_del_object(v___x_3549_);
lean_del_object(v___x_3535_);
lean_dec(v_a_3519_);
lean_dec(v_a_3512_);
v___x_3765_ = l_Lean_Meta_isMonad_x3f(v_fst_3532_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3858_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3768_ = v___x_3765_;
v_isShared_3769_ = v_isSharedCheck_3858_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3765_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3858_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
if (lean_obj_tag(v_a_3766_) == 1)
{
lean_object* v___x_3770_; lean_object* v___x_3772_; 
v___x_3770_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__11));
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v_fst_3546_);
v___x_3772_ = v___x_3544_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_fst_3546_);
v___x_3772_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
lean_object* v___x_3774_; 
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v_snd_3547_);
v___x_3774_ = v___x_3530_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_snd_3547_);
v___x_3774_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
lean_object* v___x_3776_; 
if (v_isShared_3522_ == 0)
{
lean_ctor_set_tag(v___x_3521_, 1);
lean_ctor_set(v___x_3521_, 0, v_snd_3533_);
v___x_3776_ = v___x_3521_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_snd_3533_);
v___x_3776_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
lean_object* v___x_3777_; lean_object* v_a_3779_; lean_object* v___x_3806_; 
v___x_3777_ = lean_box(0);
if (v_isShared_3515_ == 0)
{
lean_ctor_set_tag(v___x_3514_, 1);
lean_ctor_set(v___x_3514_, 0, v_e_3485_);
v___x_3806_ = v___x_3514_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v_e_3485_);
v___x_3806_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3805_;
}
v___jp_3778_:
{
uint8_t v___x_3780_; 
v___x_3780_ = l_Lean_Exception_isInterrupt(v_a_3779_);
if (v___x_3780_ == 0)
{
uint8_t v___x_3781_; 
lean_inc_ref(v_a_3779_);
v___x_3781_ = l_Lean_Exception_isRuntime(v_a_3779_);
if (v___x_3781_ == 0)
{
lean_object* v___x_3782_; 
lean_dec_ref(v_a_3779_);
lean_del_object(v___x_3768_);
v___x_3782_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3552_, v_a_3488_, v_a_3490_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3782_);
if (v_isSharedCheck_3789_ == 0)
{
lean_object* v_unused_3790_; 
v_unused_3790_ = lean_ctor_get(v___x_3782_, 0);
lean_dec(v_unused_3790_);
v___x_3784_ = v___x_3782_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_dec(v___x_3782_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
lean_ctor_set(v___x_3784_, 0, v___x_3777_);
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v___x_3777_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3798_; 
v_a_3791_ = lean_ctor_get(v___x_3782_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3782_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3793_ = v___x_3782_;
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3782_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3796_; 
if (v_isShared_3794_ == 0)
{
v___x_3796_ = v___x_3793_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_a_3791_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
}
else
{
lean_object* v___x_3800_; 
lean_dec(v_a_3552_);
if (v_isShared_3769_ == 0)
{
lean_ctor_set_tag(v___x_3768_, 1);
lean_ctor_set(v___x_3768_, 0, v_a_3779_);
v___x_3800_ = v___x_3768_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3779_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
else
{
lean_object* v___x_3803_; 
lean_dec(v_a_3552_);
if (v_isShared_3769_ == 0)
{
lean_ctor_set_tag(v___x_3768_, 1);
lean_ctor_set(v___x_3768_, 0, v_a_3779_);
v___x_3803_ = v___x_3768_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3779_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
v_reusejp_3805_:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3807_ = lean_unsigned_to_nat(6u);
v___x_3808_ = lean_mk_empty_array_with_capacity(v___x_3807_);
v___x_3809_ = lean_array_push(v___x_3808_, v___x_3772_);
v___x_3810_ = lean_array_push(v___x_3809_, v___x_3774_);
v___x_3811_ = lean_array_push(v___x_3810_, v___x_3776_);
v___x_3812_ = lean_array_push(v___x_3811_, v___x_3777_);
v___x_3813_ = lean_array_push(v___x_3812_, v_a_3766_);
v___x_3814_ = lean_array_push(v___x_3813_, v___x_3806_);
v___x_3815_ = l_Lean_Meta_mkAppOptM(v___x_3770_, v___x_3814_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_object* v_a_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3834_; 
v_a_3816_ = lean_ctor_get(v___x_3815_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3815_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3818_ = v___x_3815_;
v_isShared_3819_ = v_isSharedCheck_3834_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_a_3816_);
lean_dec(v___x_3815_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3834_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_Lean_Meta_expandCoe(v_a_3816_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3832_; 
lean_del_object(v___x_3768_);
lean_dec(v_a_3552_);
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3823_ = v___x_3820_;
v_isShared_3824_ = v_isSharedCheck_3832_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3820_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3832_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v_fst_3825_; lean_object* v___x_3827_; 
v_fst_3825_ = lean_ctor_get(v_a_3821_, 0);
lean_inc(v_fst_3825_);
lean_dec(v_a_3821_);
if (v_isShared_3819_ == 0)
{
lean_ctor_set_tag(v___x_3818_, 1);
lean_ctor_set(v___x_3818_, 0, v_fst_3825_);
v___x_3827_ = v___x_3818_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_fst_3825_);
v___x_3827_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
lean_object* v___x_3829_; 
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v___x_3827_);
v___x_3829_ = v___x_3823_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v___x_3827_);
v___x_3829_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
return v___x_3829_;
}
}
}
}
else
{
lean_object* v_a_3833_; 
lean_del_object(v___x_3818_);
v_a_3833_ = lean_ctor_get(v___x_3820_, 0);
lean_inc(v_a_3833_);
lean_dec_ref_known(v___x_3820_, 1);
v_a_3779_ = v_a_3833_;
goto v___jp_3778_;
}
}
}
else
{
lean_object* v_a_3835_; 
v_a_3835_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_a_3835_);
lean_dec_ref_known(v___x_3815_, 1);
v_a_3779_ = v_a_3835_;
goto v___jp_3778_;
}
}
}
}
}
}
else
{
lean_object* v___x_3840_; 
lean_del_object(v___x_3768_);
lean_dec(v_a_3766_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_del_object(v___x_3530_);
lean_del_object(v___x_3521_);
lean_del_object(v___x_3514_);
lean_dec_ref(v_e_3485_);
v___x_3840_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3552_, v_a_3488_, v_a_3490_);
if (lean_obj_tag(v___x_3840_) == 0)
{
lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3848_; 
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3848_ == 0)
{
lean_object* v_unused_3849_; 
v_unused_3849_ = lean_ctor_get(v___x_3840_, 0);
lean_dec(v_unused_3849_);
v___x_3842_ = v___x_3840_;
v_isShared_3843_ = v_isSharedCheck_3848_;
goto v_resetjp_3841_;
}
else
{
lean_dec(v___x_3840_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3848_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3844_; lean_object* v___x_3846_; 
v___x_3844_ = lean_box(0);
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 0, v___x_3844_);
v___x_3846_ = v___x_3842_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v___x_3844_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
else
{
lean_object* v_a_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3857_; 
v_a_3850_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3857_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3857_ == 0)
{
v___x_3852_ = v___x_3840_;
v_isShared_3853_ = v_isSharedCheck_3857_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_a_3850_);
lean_dec(v___x_3840_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3857_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v___x_3855_; 
if (v_isShared_3853_ == 0)
{
v___x_3855_ = v___x_3852_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v_a_3850_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3552_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_dec(v_snd_3533_);
lean_del_object(v___x_3530_);
lean_del_object(v___x_3521_);
lean_del_object(v___x_3514_);
lean_dec_ref(v_e_3485_);
return v___x_3765_;
}
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
lean_dec(v_a_3552_);
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_del_object(v___x_3530_);
lean_del_object(v___x_3521_);
lean_dec(v_a_3519_);
lean_del_object(v___x_3514_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3860_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3553_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3553_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
}
else
{
lean_object* v_a_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3875_; 
lean_del_object(v___x_3549_);
lean_dec(v_snd_3547_);
lean_dec(v_fst_3546_);
lean_del_object(v___x_3544_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_del_object(v___x_3530_);
lean_del_object(v___x_3521_);
lean_dec(v_a_3519_);
lean_del_object(v___x_3514_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3868_ = lean_ctor_get(v___x_3551_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3551_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3870_ = v___x_3551_;
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_a_3868_);
lean_dec(v___x_3551_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3873_; 
if (v_isShared_3871_ == 0)
{
v___x_3873_ = v___x_3870_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v_a_3868_);
v___x_3873_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
return v___x_3873_;
}
}
}
}
}
}
else
{
lean_object* v___x_3878_; lean_object* v___x_3880_; 
lean_dec(v_a_3538_);
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_del_object(v___x_3530_);
lean_del_object(v___x_3521_);
lean_dec(v_a_3519_);
lean_del_object(v___x_3514_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3878_ = lean_box(0);
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 0, v___x_3878_);
v___x_3880_ = v___x_3540_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v___x_3878_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
lean_del_object(v___x_3535_);
lean_dec(v_snd_3533_);
lean_dec(v_fst_3532_);
lean_del_object(v___x_3530_);
lean_del_object(v___x_3521_);
lean_dec(v_a_3519_);
lean_del_object(v___x_3514_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3883_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v___x_3537_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3537_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
}
}
else
{
lean_object* v___x_3893_; lean_object* v___x_3895_; 
lean_dec(v_a_3524_);
lean_del_object(v___x_3521_);
lean_dec(v_a_3519_);
lean_del_object(v___x_3514_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v___x_3893_ = lean_box(0);
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 0, v___x_3893_);
v___x_3895_ = v___x_3526_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v___x_3893_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
return v___x_3895_;
}
}
}
}
else
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
lean_del_object(v___x_3521_);
lean_dec(v_a_3519_);
lean_del_object(v___x_3514_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3898_ = lean_ctor_get(v___x_3523_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3523_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3523_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3523_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
}
else
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3914_; 
lean_del_object(v___x_3514_);
lean_dec(v_a_3512_);
lean_dec_ref(v_e_3485_);
v_a_3907_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3909_ = v___x_3516_;
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v___x_3516_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3912_; 
if (v_isShared_3910_ == 0)
{
v___x_3912_ = v___x_3909_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v_a_3907_);
v___x_3912_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
return v___x_3912_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object* v_e_3916_, lean_object* v_expectedType_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Lean_Meta_coerceMonadLift_x3f(v_e_3916_, v_expectedType_3917_, v_a_3918_, v_a_3919_, v_a_3920_, v_a_3921_);
lean_dec(v_a_3921_);
lean_dec_ref(v_a_3920_);
lean_dec(v_a_3919_);
lean_dec_ref(v_a_3918_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object* v_expr_3924_, lean_object* v_expectedType_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_){
_start:
{
lean_object* v___x_3931_; 
lean_inc_ref(v_expectedType_3925_);
lean_inc_ref(v_expr_3924_);
v___x_3931_ = l_Lean_Meta_coerceMonadLift_x3f(v_expr_3924_, v_expectedType_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
if (lean_obj_tag(v___x_3931_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_4011_; 
v_a_3932_ = lean_ctor_get(v___x_3931_, 0);
v_isSharedCheck_4011_ = !lean_is_exclusive(v___x_3931_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_3934_ = v___x_3931_;
v_isShared_3935_ = v_isSharedCheck_4011_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v___x_3931_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_4011_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
if (lean_obj_tag(v_a_3932_) == 1)
{
lean_object* v_val_3936_; lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3948_; 
lean_dec_ref(v_expectedType_3925_);
lean_dec_ref(v_expr_3924_);
v_val_3936_ = lean_ctor_get(v_a_3932_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v_a_3932_);
if (v_isSharedCheck_3948_ == 0)
{
v___x_3938_ = v_a_3932_;
v_isShared_3939_ = v_isSharedCheck_3948_;
goto v_resetjp_3937_;
}
else
{
lean_inc(v_val_3936_);
lean_dec(v_a_3932_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3948_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3943_; 
v___x_3940_ = lean_box(0);
v___x_3941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3941_, 0, v_val_3936_);
lean_ctor_set(v___x_3941_, 1, v___x_3940_);
if (v_isShared_3939_ == 0)
{
lean_ctor_set(v___x_3938_, 0, v___x_3941_);
v___x_3943_ = v___x_3938_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v___x_3941_);
v___x_3943_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
lean_object* v___x_3945_; 
if (v_isShared_3935_ == 0)
{
lean_ctor_set(v___x_3934_, 0, v___x_3943_);
v___x_3945_ = v___x_3934_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v___x_3943_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
else
{
lean_object* v___x_3949_; 
lean_del_object(v___x_3934_);
lean_dec(v_a_3932_);
lean_inc_ref(v_expectedType_3925_);
v___x_3949_ = l_Lean_Meta_whnfR(v_expectedType_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
if (lean_obj_tag(v___x_3949_) == 0)
{
lean_object* v_a_3950_; uint8_t v___x_3951_; 
v_a_3950_ = lean_ctor_get(v___x_3949_, 0);
lean_inc(v_a_3950_);
lean_dec_ref_known(v___x_3949_, 1);
v___x_3951_ = l_Lean_Expr_isForall(v_a_3950_);
lean_dec(v_a_3950_);
if (v___x_3951_ == 0)
{
lean_object* v___x_3952_; 
v___x_3952_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3924_, v_expectedType_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
return v___x_3952_;
}
else
{
lean_object* v___x_3953_; 
lean_inc_ref(v_expr_3924_);
v___x_3953_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_3924_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
if (lean_obj_tag(v___x_3953_) == 0)
{
lean_object* v_a_3954_; 
v_a_3954_ = lean_ctor_get(v___x_3953_, 0);
lean_inc(v_a_3954_);
lean_dec_ref_known(v___x_3953_, 1);
if (lean_obj_tag(v_a_3954_) == 1)
{
lean_object* v_val_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3993_; 
v_val_3955_ = lean_ctor_get(v_a_3954_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v_a_3954_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3957_ = v_a_3954_;
v_isShared_3958_ = v_isSharedCheck_3993_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_val_3955_);
lean_dec(v_a_3954_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3993_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3959_; 
lean_inc(v_a_3929_);
lean_inc_ref(v_a_3928_);
lean_inc(v_a_3927_);
lean_inc_ref(v_a_3926_);
lean_inc(v_val_3955_);
v___x_3959_ = lean_infer_type(v_val_3955_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
if (lean_obj_tag(v___x_3959_) == 0)
{
lean_object* v_a_3960_; lean_object* v___x_3961_; 
v_a_3960_ = lean_ctor_get(v___x_3959_, 0);
lean_inc(v_a_3960_);
lean_dec_ref_known(v___x_3959_, 1);
lean_inc_ref(v_expectedType_3925_);
v___x_3961_ = l_Lean_Meta_isExprDefEq(v_a_3960_, v_expectedType_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
if (lean_obj_tag(v___x_3961_) == 0)
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3976_; 
v_a_3962_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3964_ = v___x_3961_;
v_isShared_3965_ = v_isSharedCheck_3976_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v___x_3961_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3976_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
uint8_t v___x_3966_; 
v___x_3966_ = lean_unbox(v_a_3962_);
lean_dec(v_a_3962_);
if (v___x_3966_ == 0)
{
lean_object* v___x_3967_; 
lean_del_object(v___x_3964_);
lean_del_object(v___x_3957_);
lean_dec(v_val_3955_);
v___x_3967_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3924_, v_expectedType_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
return v___x_3967_;
}
else
{
lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3971_; 
lean_dec_ref(v_expectedType_3925_);
lean_dec_ref(v_expr_3924_);
v___x_3968_ = lean_box(0);
v___x_3969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3969_, 0, v_val_3955_);
lean_ctor_set(v___x_3969_, 1, v___x_3968_);
if (v_isShared_3958_ == 0)
{
lean_ctor_set(v___x_3957_, 0, v___x_3969_);
v___x_3971_ = v___x_3957_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v___x_3969_);
v___x_3971_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
lean_object* v___x_3973_; 
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 0, v___x_3971_);
v___x_3973_ = v___x_3964_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v___x_3971_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
}
}
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_del_object(v___x_3957_);
lean_dec(v_val_3955_);
lean_dec_ref(v_expectedType_3925_);
lean_dec_ref(v_expr_3924_);
v_a_3977_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3961_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3961_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_del_object(v___x_3957_);
lean_dec(v_val_3955_);
lean_dec_ref(v_expectedType_3925_);
lean_dec_ref(v_expr_3924_);
v_a_3985_ = lean_ctor_get(v___x_3959_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3959_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3959_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3959_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
}
else
{
lean_object* v___x_3994_; 
lean_dec(v_a_3954_);
v___x_3994_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3924_, v_expectedType_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
return v___x_3994_;
}
}
else
{
lean_object* v_a_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4002_; 
lean_dec_ref(v_expectedType_3925_);
lean_dec_ref(v_expr_3924_);
v_a_3995_ = lean_ctor_get(v___x_3953_, 0);
v_isSharedCheck_4002_ = !lean_is_exclusive(v___x_3953_);
if (v_isSharedCheck_4002_ == 0)
{
v___x_3997_ = v___x_3953_;
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_a_3995_);
lean_dec(v___x_3953_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v___x_4000_; 
if (v_isShared_3998_ == 0)
{
v___x_4000_ = v___x_3997_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_a_3995_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
return v___x_4000_;
}
}
}
}
}
else
{
lean_object* v_a_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4010_; 
lean_dec_ref(v_expectedType_3925_);
lean_dec_ref(v_expr_3924_);
v_a_4003_ = lean_ctor_get(v___x_3949_, 0);
v_isSharedCheck_4010_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_4010_ == 0)
{
v___x_4005_ = v___x_3949_;
v_isShared_4006_ = v_isSharedCheck_4010_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_a_4003_);
lean_dec(v___x_3949_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4010_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v___x_4008_; 
if (v_isShared_4006_ == 0)
{
v___x_4008_ = v___x_4005_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v_a_4003_);
v___x_4008_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
return v___x_4008_;
}
}
}
}
}
}
else
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4019_; 
lean_dec_ref(v_expectedType_3925_);
lean_dec_ref(v_expr_3924_);
v_a_4012_ = lean_ctor_get(v___x_3931_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_3931_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4014_ = v___x_3931_;
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v___x_3931_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4017_; 
if (v_isShared_4015_ == 0)
{
v___x_4017_ = v___x_4014_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_4012_);
v___x_4017_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
return v___x_4017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object* v_expr_4020_, lean_object* v_expectedType_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_){
_start:
{
lean_object* v_res_4027_; 
v_res_4027_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_4020_, v_expectedType_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_);
lean_dec(v_a_4025_);
lean_dec_ref(v_a_4024_);
lean_dec(v_a_4023_);
lean_dec_ref(v_a_4022_);
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object* v_expr_4028_, lean_object* v_expectedType_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v___x_4035_; 
v___x_4035_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_4028_, v_expectedType_4029_, v_a_4030_, v_a_4031_, v_a_4032_, v_a_4033_);
if (lean_obj_tag(v___x_4035_) == 0)
{
lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4060_; 
v_a_4036_ = lean_ctor_get(v___x_4035_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4038_ = v___x_4035_;
v_isShared_4039_ = v_isSharedCheck_4060_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_4035_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4060_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
switch(lean_obj_tag(v_a_4036_))
{
case 0:
{
lean_object* v___x_4040_; lean_object* v___x_4042_; 
v___x_4040_ = lean_box(0);
if (v_isShared_4039_ == 0)
{
lean_ctor_set(v___x_4038_, 0, v___x_4040_);
v___x_4042_ = v___x_4038_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v___x_4040_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
return v___x_4042_;
}
}
case 1:
{
lean_object* v_a_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4055_; 
v_a_4044_ = lean_ctor_get(v_a_4036_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v_a_4036_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4046_ = v_a_4036_;
v_isShared_4047_ = v_isSharedCheck_4055_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_a_4044_);
lean_dec(v_a_4036_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4055_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
lean_object* v_fst_4048_; lean_object* v___x_4050_; 
v_fst_4048_ = lean_ctor_get(v_a_4044_, 0);
lean_inc(v_fst_4048_);
lean_dec(v_a_4044_);
if (v_isShared_4047_ == 0)
{
lean_ctor_set(v___x_4046_, 0, v_fst_4048_);
v___x_4050_ = v___x_4046_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_fst_4048_);
v___x_4050_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
lean_object* v___x_4052_; 
if (v_isShared_4039_ == 0)
{
lean_ctor_set(v___x_4038_, 0, v___x_4050_);
v___x_4052_ = v___x_4038_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v___x_4050_);
v___x_4052_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
return v___x_4052_;
}
}
}
}
default: 
{
lean_object* v___x_4056_; lean_object* v___x_4058_; 
v___x_4056_ = lean_box(2);
if (v_isShared_4039_ == 0)
{
lean_ctor_set(v___x_4038_, 0, v___x_4056_);
v___x_4058_ = v___x_4038_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v___x_4056_);
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
}
else
{
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4068_; 
v_a_4061_ = lean_ctor_get(v___x_4035_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4063_ = v___x_4035_;
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v___x_4035_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4066_; 
if (v_isShared_4064_ == 0)
{
v___x_4066_ = v___x_4063_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_a_4061_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object* v_expr_4069_, lean_object* v_expectedType_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lean_Meta_coerce_x3f(v_expr_4069_, v_expectedType_4070_, v_a_4071_, v_a_4072_, v_a_4073_, v_a_4074_);
lean_dec(v_a_4074_);
lean_dec_ref(v_a_4073_);
lean_dec(v_a_4072_);
lean_dec_ref(v_a_4071_);
return v_res_4076_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_coeDeclAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_coeDeclAttr);
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_autoLift = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_autoLift);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Coe(builtin);
}
#ifdef __cplusplus
}
#endif
