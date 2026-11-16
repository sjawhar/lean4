// Lean compiler output
// Module: Lean.Compiler.LCNF.MonoTypes
// Imports: public import Lean.Compiler.LCNF.Util public import Lean.Compiler.LCNF.BaseTypes public import Lean.Compiler.LCNF.Irrelevant
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getOtherDeclBaseType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_erasedExpr;
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MonoTypes"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 163, 188, 36, 234, 230, 12, 164)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(15, 104, 138, 221, 40, 128, 66, 209)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 193, 97, 55, 202, 162, 3, 38)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(144, 79, 120, 160, 44, 67, 75, 103)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(169, 5, 59, 84, 4, 22, 180, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "trivialStructureInfoExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(9, 26, 11, 215, 188, 118, 90, 171)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findTrivialStructureInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_getParamTypes_go(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_getParamTypes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_getParamTypes___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getParamTypes___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParamTypes(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_toMonoType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_toMonoType___closed__0;
static const lean_string_object l_Lean_Compiler_LCNF_toMonoType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lcErased"};
static const lean_object* l_Lean_Compiler_LCNF_toMonoType___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_toMonoType___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Compiler.LCNF.MonoTypes.0.Lean.Compiler.LCNF.toMonoType.visitApp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Compiler.LCNF.MonoTypes"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcAny"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "monoTypeExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(38, 30, 14, 157, 163, 232, 91, 18)}};
static const lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_monoTypeExt;
static lean_once_cell_t l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "` was not compiled; `compileDecls` must run on inductive types first"};
static const lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_init_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v_k_3_; lean_object* v_v_4_; lean_object* v_l_5_; lean_object* v_r_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_k_3_ = lean_ctor_get(v_x_2_, 1);
v_v_4_ = lean_ctor_get(v_x_2_, 2);
v_l_5_ = lean_ctor_get(v_x_2_, 3);
v_r_6_ = lean_ctor_get(v_x_2_, 4);
v___x_7_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1(v_init_1_, v_l_5_);
lean_inc(v_v_4_);
lean_inc(v_k_3_);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v_k_3_);
lean_ctor_set(v___x_8_, 1, v_v_4_);
v___x_9_ = lean_array_push(v___x_7_, v___x_8_);
v_init_1_ = v___x_9_;
v_x_2_ = v_r_6_;
goto _start;
}
else
{
return v_init_1_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_init_11_, lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1(v_init_11_, v_x_12_);
lean_dec(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__2(lean_object* v_env_14_, lean_object* v_as_15_, size_t v_i_16_, size_t v_stop_17_, lean_object* v_b_18_){
_start:
{
lean_object* v___y_20_; uint8_t v___x_24_; 
v___x_24_ = lean_usize_dec_eq(v_i_16_, v_stop_17_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; lean_object* v_fst_26_; uint8_t v___x_27_; 
v___x_25_ = lean_array_uget_borrowed(v_as_15_, v_i_16_);
v_fst_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc(v_fst_26_);
lean_inc_ref(v_env_14_);
v___x_27_ = l_Lean_Environment_contains(v_env_14_, v_fst_26_, v___x_24_);
if (v___x_27_ == 0)
{
v___y_20_ = v_b_18_;
goto v___jp_19_;
}
else
{
lean_object* v___x_28_; 
lean_inc(v___x_25_);
v___x_28_ = lean_array_push(v_b_18_, v___x_25_);
v___y_20_ = v___x_28_;
goto v___jp_19_;
}
}
else
{
lean_dec_ref(v_env_14_);
return v_b_18_;
}
v___jp_19_:
{
size_t v___x_21_; size_t v___x_22_; 
v___x_21_ = ((size_t)1ULL);
v___x_22_ = lean_usize_add(v_i_16_, v___x_21_);
v_i_16_ = v___x_22_;
v_b_18_ = v___y_20_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_29_, lean_object* v_as_30_, lean_object* v_i_31_, lean_object* v_stop_32_, lean_object* v_b_33_){
_start:
{
size_t v_i_boxed_34_; size_t v_stop_boxed_35_; lean_object* v_res_36_; 
v_i_boxed_34_ = lean_unbox_usize(v_i_31_);
lean_dec(v_i_31_);
v_stop_boxed_35_ = lean_unbox_usize(v_stop_32_);
lean_dec(v_stop_32_);
v_res_36_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__2(v_env_29_, v_as_30_, v_i_boxed_34_, v_stop_boxed_35_, v_b_33_);
lean_dec_ref(v_as_30_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(lean_object* v_env_37_, lean_object* v_as_38_, size_t v_i_39_, size_t v_stop_40_, lean_object* v_b_41_){
_start:
{
lean_object* v___y_43_; uint8_t v___x_47_; 
v___x_47_ = lean_usize_dec_eq(v_i_39_, v_stop_40_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; lean_object* v_fst_49_; uint8_t v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_48_ = lean_array_uget_borrowed(v_as_38_, v_i_39_);
v_fst_49_ = lean_ctor_get(v___x_48_, 0);
v___x_50_ = 1;
lean_inc_ref(v_env_37_);
v___x_51_ = l_Lean_Environment_setExporting(v_env_37_, v___x_50_);
lean_inc(v_fst_49_);
v___x_52_ = l_Lean_Environment_contains(v___x_51_, v_fst_49_, v___x_47_);
if (v___x_52_ == 0)
{
v___y_43_ = v_b_41_;
goto v___jp_42_;
}
else
{
lean_object* v___x_53_; 
lean_inc(v___x_48_);
v___x_53_ = lean_array_push(v_b_41_, v___x_48_);
v___y_43_ = v___x_53_;
goto v___jp_42_;
}
}
else
{
lean_dec_ref(v_env_37_);
return v_b_41_;
}
v___jp_42_:
{
size_t v___x_44_; size_t v___x_45_; 
v___x_44_ = ((size_t)1ULL);
v___x_45_ = lean_usize_add(v_i_39_, v___x_44_);
v_i_39_ = v___x_45_;
v_b_41_ = v___y_43_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_54_, lean_object* v_as_55_, lean_object* v_i_56_, lean_object* v_stop_57_, lean_object* v_b_58_){
_start:
{
size_t v_i_boxed_59_; size_t v_stop_boxed_60_; lean_object* v_res_61_; 
v_i_boxed_59_ = lean_unbox_usize(v_i_56_);
lean_dec(v_i_56_);
v_stop_boxed_60_ = lean_unbox_usize(v_stop_57_);
lean_dec(v_stop_57_);
v_res_61_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(v_env_54_, v_as_55_, v_i_boxed_59_, v_stop_boxed_60_, v_b_58_);
lean_dec_ref(v_as_55_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(lean_object* v___x_62_, lean_object* v_env_63_, lean_object* v_s_64_){
_start:
{
lean_object* v___y_66_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_75_ = lean_mk_empty_array_with_capacity(v___x_62_);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1(v___x_75_, v_s_64_);
v___x_77_ = lean_array_get_size(v___x_76_);
v___x_78_ = lean_mk_empty_array_with_capacity(v___x_62_);
v___x_79_ = lean_nat_dec_lt(v___x_62_, v___x_77_);
if (v___x_79_ == 0)
{
lean_dec_ref(v___x_76_);
v___y_66_ = v___x_78_;
goto v___jp_65_;
}
else
{
size_t v___x_80_; size_t v___x_81_; lean_object* v___x_82_; 
v___x_80_ = ((size_t)0ULL);
v___x_81_ = lean_usize_of_nat(v___x_77_);
lean_inc_ref(v_env_63_);
v___x_82_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__2(v_env_63_, v___x_76_, v___x_80_, v___x_81_, v___x_78_);
lean_dec_ref(v___x_76_);
v___y_66_ = v___x_82_;
goto v___jp_65_;
}
v___jp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_67_ = lean_array_get_size(v___y_66_);
v___x_68_ = lean_mk_empty_array_with_capacity(v___x_62_);
v___x_69_ = lean_nat_dec_lt(v___x_62_, v___x_67_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; 
lean_dec_ref(v_env_63_);
lean_inc_ref(v___x_68_);
v___x_70_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
lean_ctor_set(v___x_70_, 2, v___y_66_);
return v___x_70_;
}
else
{
size_t v___x_71_; size_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = ((size_t)0ULL);
v___x_72_ = lean_usize_of_nat(v___x_67_);
v___x_73_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__0(v_env_63_, v___y_66_, v___x_71_, v___x_72_, v___x_68_);
lean_inc_ref(v___x_73_);
v___x_74_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
lean_ctor_set(v___x_74_, 2, v___y_66_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object* v___x_83_, lean_object* v_env_84_, lean_object* v_s_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(v___x_83_, v_env_84_, v_s_85_);
lean_dec(v_s_85_);
lean_dec(v___x_83_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; 
v___f_126_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_));
v___x_127_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_));
v___x_128_ = lean_box(0);
v___x_129_ = 0;
v___x_130_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_127_, v___x_128_, v___x_129_, v___f_126_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2____boxed(lean_object* v_a_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_();
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1(lean_object* v_init_133_, lean_object* v_t_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1_spec__1(v_init_133_, v_t_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1___boxed(lean_object* v_init_136_, lean_object* v_t_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2__spec__1(v_init_136_, v_t_137_);
lean_dec(v_t_137_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0(lean_object* v_type_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v___x_145_; 
lean_inc_ref(v_type_139_);
v___x_145_ = l_Lean_Meta_isProp(v_type_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_object* v_a_146_; uint8_t v___x_147_; 
v_a_146_ = lean_ctor_get(v___x_145_, 0);
v___x_147_ = lean_unbox(v_a_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; 
lean_dec_ref_known(v___x_145_, 1);
v___x_148_ = l_Lean_Meta_isTypeFormerType(v_type_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
return v___x_148_;
}
else
{
lean_dec_ref(v_type_139_);
return v___x_145_;
}
}
else
{
lean_dec_ref(v_type_139_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0___boxed(lean_object* v_type_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___lam__0(v_type_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(lean_object* v_declName_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
lean_object* v___f_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___f_161_ = ((lean_object*)(l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___closed__0));
v___x_162_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt;
v___x_163_ = l_Lean_Compiler_LCNF_Irrelevant_setHasTrivialStructure_x3f(v___x_162_, v___f_161_, v_declName_157_, v_a_158_, v_a_159_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f___boxed(lean_object* v_declName_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Compiler_LCNF_setHasTrivialStructure_x3f(v_declName_164_, v_a_165_, v_a_166_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object* v_declName_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt;
v___x_174_ = l_Lean_Compiler_LCNF_Irrelevant_hasTrivialStructure_x3f(v___x_173_, v_declName_169_, v_a_170_, v_a_171_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f___boxed(lean_object* v_declName_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_declName_175_, v_a_176_, v_a_177_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findTrivialStructureInfo_x3f(lean_object* v_env_180_, lean_object* v_declName_181_){
_start:
{
lean_object* v___x_182_; lean_object* v_toEnvExtension_183_; lean_object* v_asyncMode_184_; lean_object* v___x_185_; uint8_t v___x_186_; lean_object* v___x_187_; 
v___x_182_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt;
v_toEnvExtension_183_ = lean_ctor_get(v___x_182_, 0);
v_asyncMode_184_ = lean_ctor_get(v_toEnvExtension_183_, 2);
v___x_185_ = lean_box(0);
v___x_186_ = 0;
v___x_187_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_185_, v___x_182_, v_env_180_, v_declName_181_, v_asyncMode_184_, v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_getParamTypes_go(lean_object* v_type_188_, lean_object* v_r_189_){
_start:
{
if (lean_obj_tag(v_type_188_) == 7)
{
lean_object* v_binderType_190_; lean_object* v_body_191_; lean_object* v___x_192_; 
v_binderType_190_ = lean_ctor_get(v_type_188_, 1);
lean_inc_ref(v_binderType_190_);
v_body_191_ = lean_ctor_get(v_type_188_, 2);
lean_inc_ref(v_body_191_);
lean_dec_ref_known(v_type_188_, 3);
v___x_192_ = lean_array_push(v_r_189_, v_binderType_190_);
v_type_188_ = v_body_191_;
v_r_189_ = v___x_192_;
goto _start;
}
else
{
lean_dec_ref(v_type_188_);
return v_r_189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParamTypes(lean_object* v_type_196_){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = ((lean_object*)(l_Lean_Compiler_LCNF_getParamTypes___closed__0));
v___x_198_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_getParamTypes_go(v_type_196_, v___x_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(lean_object* v_msg_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
lean_object* v___f_204_; lean_object* v___x_2869__overap_205_; lean_object* v___x_206_; 
v___f_204_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___closed__0));
v___x_2869__overap_205_ = lean_panic_fn_borrowed(v___f_204_, v_msg_200_);
lean_inc(v___y_202_);
lean_inc_ref(v___y_201_);
v___x_206_ = lean_apply_3(v___x_2869__overap_205_, v___y_201_, v___y_202_, lean_box(0));
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0___boxed(lean_object* v_msg_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(v_msg_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
return v_res_211_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_toMonoType___closed__0(void){
_start:
{
lean_object* v___x_212_; lean_object* v_dummy_213_; 
v___x_212_ = lean_box(0);
v_dummy_213_ = l_Lean_Expr_sort___override(v___x_212_);
return v_dummy_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object* v_type_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_type_219_; 
v_type_219_ = l_Lean_Expr_headBeta(v_type_215_);
switch(lean_obj_tag(v_type_219_))
{
case 4:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = ((lean_object*)(l_Lean_Compiler_LCNF_getParamTypes___closed__0));
v___x_221_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(v_type_219_, v___x_220_, v_a_216_, v_a_217_);
return v___x_221_;
}
case 5:
{
lean_object* v_dummy_222_; lean_object* v_nargs_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_dummy_222_ = lean_obj_once(&l_Lean_Compiler_LCNF_toMonoType___closed__0, &l_Lean_Compiler_LCNF_toMonoType___closed__0_once, _init_l_Lean_Compiler_LCNF_toMonoType___closed__0);
v_nargs_223_ = l_Lean_Expr_getAppNumArgs(v_type_219_);
lean_inc(v_nargs_223_);
v___x_224_ = lean_mk_array(v_nargs_223_, v_dummy_222_);
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = lean_nat_sub(v_nargs_223_, v___x_225_);
lean_dec(v_nargs_223_);
v___x_227_ = l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(v_type_219_, v___x_224_, v___x_226_, v_a_216_, v_a_217_);
return v___x_227_;
}
case 7:
{
lean_object* v_binderName_228_; lean_object* v_binderType_229_; lean_object* v_body_230_; uint8_t v_binderInfo_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v_binderName_228_ = lean_ctor_get(v_type_219_, 0);
lean_inc(v_binderName_228_);
v_binderType_229_ = lean_ctor_get(v_type_219_, 1);
lean_inc_ref(v_binderType_229_);
v_body_230_ = lean_ctor_get(v_type_219_, 2);
lean_inc_ref(v_body_230_);
v_binderInfo_231_ = lean_ctor_get_uint8(v_type_219_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_219_, 3);
v___x_232_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_233_ = lean_expr_instantiate1(v_body_230_, v___x_232_);
lean_dec_ref(v_body_230_);
v___x_234_ = l_Lean_Compiler_LCNF_toMonoType(v___x_233_, v_a_216_, v_a_217_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_261_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_261_ == 0)
{
v___x_237_ = v___x_234_;
v_isShared_238_ = v_isSharedCheck_261_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_234_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_261_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___y_240_; lean_object* v___y_241_; 
if (lean_obj_tag(v_a_235_) == 4)
{
lean_object* v_declName_252_; 
v_declName_252_ = lean_ctor_get(v_a_235_, 0);
if (lean_obj_tag(v_declName_252_) == 1)
{
lean_object* v_pre_253_; 
v_pre_253_ = lean_ctor_get(v_declName_252_, 0);
if (lean_obj_tag(v_pre_253_) == 0)
{
lean_object* v_str_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v_str_254_ = lean_ctor_get(v_declName_252_, 1);
v___x_255_ = ((lean_object*)(l_Lean_Compiler_LCNF_toMonoType___closed__1));
v___x_256_ = lean_string_dec_eq(v_str_254_, v___x_255_);
if (v___x_256_ == 0)
{
lean_del_object(v___x_237_);
v___y_240_ = v_a_216_;
v___y_241_ = v_a_217_;
goto v___jp_239_;
}
else
{
lean_object* v___x_257_; lean_object* v___x_259_; 
lean_dec_ref_known(v_a_235_, 2);
lean_dec_ref(v_binderType_229_);
lean_dec(v_binderName_228_);
v___x_257_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 0, v___x_257_);
v___x_259_ = v___x_237_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_del_object(v___x_237_);
v___y_240_ = v_a_216_;
v___y_241_ = v_a_217_;
goto v___jp_239_;
}
}
else
{
lean_del_object(v___x_237_);
v___y_240_ = v_a_216_;
v___y_241_ = v_a_217_;
goto v___jp_239_;
}
}
else
{
lean_del_object(v___x_237_);
v___y_240_ = v_a_216_;
v___y_241_ = v_a_217_;
goto v___jp_239_;
}
v___jp_239_:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lean_Compiler_LCNF_toMonoType(v_binderType_229_, v___y_240_, v___y_241_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_251_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_251_ == 0)
{
v___x_245_ = v___x_242_;
v_isShared_246_ = v_isSharedCheck_251_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_251_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_247_ = l_Lean_Expr_forallE___override(v_binderName_228_, v_a_243_, v_a_235_, v_binderInfo_231_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 0, v___x_247_);
v___x_249_ = v___x_245_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
else
{
lean_dec(v_a_235_);
lean_dec(v_binderName_228_);
return v___x_242_;
}
}
}
}
else
{
lean_dec_ref(v_binderType_229_);
lean_dec(v_binderName_228_);
return v___x_234_;
}
}
case 3:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
lean_dec_ref_known(v_type_219_, 1);
v___x_262_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
return v___x_263_;
}
case 10:
{
lean_object* v_data_264_; lean_object* v_expr_265_; lean_object* v___x_266_; 
v_data_264_ = lean_ctor_get(v_type_219_, 0);
lean_inc(v_data_264_);
v_expr_265_ = lean_ctor_get(v_type_219_, 1);
lean_inc_ref(v_expr_265_);
lean_dec_ref_known(v_type_219_, 2);
v___x_266_ = l_Lean_Compiler_LCNF_toMonoType(v_expr_265_, v_a_216_, v_a_217_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_275_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_275_ == 0)
{
v___x_269_ = v___x_266_;
v_isShared_270_ = v_isSharedCheck_275_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_266_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_275_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_271_ = l_Lean_Expr_mdata___override(v_data_264_, v_a_267_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 0, v___x_271_);
v___x_273_ = v___x_269_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
else
{
lean_dec(v_data_264_);
return v___x_266_;
}
}
default: 
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec_ref(v_type_219_);
v___x_276_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__2));
v___x_282_ = lean_unsigned_to_nat(50u);
v___x_283_ = lean_unsigned_to_nat(85u);
v___x_284_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__1));
v___x_285_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__0));
v___x_286_ = l_mkPanicMessageWithDecl(v___x_285_, v___x_284_, v___x_283_, v___x_282_, v___x_281_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(lean_object* v_as_287_, size_t v_sz_288_, size_t v_i_289_, lean_object* v_b_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_a_295_; uint8_t v___x_299_; 
v___x_299_ = lean_usize_dec_lt(v_i_289_, v_sz_288_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; 
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v_b_290_);
return v___x_300_;
}
else
{
lean_object* v_fst_301_; lean_object* v_snd_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_350_; 
v_fst_301_ = lean_ctor_get(v_b_290_, 0);
v_snd_302_ = lean_ctor_get(v_b_290_, 1);
v_isSharedCheck_350_ = !lean_is_exclusive(v_b_290_);
if (v_isSharedCheck_350_ == 0)
{
v___x_304_ = v_b_290_;
v_isShared_305_ = v_isSharedCheck_350_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_snd_302_);
lean_inc(v_fst_301_);
lean_dec(v_b_290_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_350_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; 
lean_inc(v_snd_302_);
v___x_306_ = l_Lean_Expr_headBeta(v_snd_302_);
if (lean_obj_tag(v___x_306_) == 7)
{
lean_object* v_binderType_307_; lean_object* v_body_308_; lean_object* v_a_309_; lean_object* v___x_310_; lean_object* v_result_312_; 
lean_dec(v_snd_302_);
v_binderType_307_ = lean_ctor_get(v___x_306_, 1);
lean_inc_ref(v_binderType_307_);
v_body_308_ = lean_ctor_get(v___x_306_, 2);
lean_inc_ref(v_body_308_);
lean_dec_ref_known(v___x_306_, 3);
v_a_309_ = lean_array_uget_borrowed(v_as_287_, v_i_289_);
lean_inc(v_a_309_);
v___x_310_ = l_Lean_Expr_headBeta(v_a_309_);
switch(lean_obj_tag(v_binderType_307_))
{
case 4:
{
lean_object* v_declName_332_; 
v_declName_332_ = lean_ctor_get(v_binderType_307_, 0);
lean_inc(v_declName_332_);
lean_dec_ref_known(v_binderType_307_, 2);
if (lean_obj_tag(v_declName_332_) == 1)
{
lean_object* v_pre_333_; 
v_pre_333_ = lean_ctor_get(v_declName_332_, 0);
if (lean_obj_tag(v_pre_333_) == 0)
{
lean_object* v_str_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v_str_334_ = lean_ctor_get(v_declName_332_, 1);
lean_inc_ref(v_str_334_);
lean_dec_ref_known(v_declName_332_, 2);
v___x_335_ = ((lean_object*)(l_Lean_Compiler_LCNF_toMonoType___closed__1));
v___x_336_ = lean_string_dec_eq(v_str_334_, v___x_335_);
lean_dec_ref(v_str_334_);
if (v___x_336_ == 0)
{
goto v___jp_329_;
}
else
{
goto v___jp_317_;
}
}
else
{
lean_dec_ref_known(v_declName_332_, 2);
goto v___jp_329_;
}
}
else
{
lean_dec(v_declName_332_);
goto v___jp_329_;
}
}
case 3:
{
lean_dec_ref_known(v_binderType_307_, 1);
goto v___jp_317_;
}
default: 
{
lean_dec_ref(v_binderType_307_);
goto v___jp_329_;
}
}
v___jp_311_:
{
lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_313_ = lean_expr_instantiate1(v_body_308_, v___x_310_);
lean_dec_ref(v___x_310_);
lean_dec_ref(v_body_308_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 1, v___x_313_);
lean_ctor_set(v___x_304_, 0, v_result_312_);
v___x_315_ = v___x_304_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_result_312_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v___x_313_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
v_a_295_ = v___x_315_;
goto v___jp_294_;
}
}
v___jp_317_:
{
lean_object* v___x_318_; 
lean_inc_ref(v___x_310_);
v___x_318_ = l_Lean_Compiler_LCNF_toMonoType(v___x_310_, v___y_291_, v___y_292_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; lean_object* v___x_320_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_a_319_);
lean_dec_ref_known(v___x_318_, 1);
v___x_320_ = l_Lean_Expr_app___override(v_fst_301_, v_a_319_);
v_result_312_ = v___x_320_;
goto v___jp_311_;
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_dec_ref(v___x_310_);
lean_dec_ref(v_body_308_);
lean_del_object(v___x_304_);
lean_dec(v_fst_301_);
v_a_321_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_318_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_318_);
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
v___jp_329_:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_331_ = l_Lean_Expr_app___override(v_fst_301_, v___x_330_);
v_result_312_ = v___x_331_;
goto v___jp_311_;
}
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; 
lean_dec_ref(v___x_306_);
v___x_337_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___closed__3);
v___x_338_ = l_panic___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__0(v___x_337_, v___y_291_, v___y_292_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v___x_340_; 
lean_dec_ref_known(v___x_338_, 1);
if (v_isShared_305_ == 0)
{
v___x_340_ = v___x_304_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_fst_301_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_snd_302_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
v_a_295_ = v___x_340_;
goto v___jp_294_;
}
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_del_object(v___x_304_);
lean_dec(v_snd_302_);
lean_dec(v_fst_301_);
v_a_342_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_338_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_338_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
}
v___jp_294_:
{
size_t v___x_296_; size_t v___x_297_; 
v___x_296_ = ((size_t)1ULL);
v___x_297_ = lean_usize_add(v_i_289_, v___x_296_);
v_i_289_ = v___x_297_;
v_b_290_ = v_a_295_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(lean_object* v_f_352_, lean_object* v_args_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
if (lean_obj_tag(v_f_352_) == 4)
{
lean_object* v_declName_357_; lean_object* v_us_358_; lean_object* v___x_359_; lean_object* v___y_361_; lean_object* v___y_362_; 
v_declName_357_ = lean_ctor_get(v_f_352_, 0);
lean_inc(v_declName_357_);
v_us_358_ = lean_ctor_get(v_f_352_, 1);
lean_inc(v_us_358_);
lean_dec_ref_known(v_f_352_, 2);
v___x_359_ = l_Lean_instInhabitedExpr;
if (lean_obj_tag(v_declName_357_) == 1)
{
lean_object* v_pre_422_; 
v_pre_422_ = lean_ctor_get(v_declName_357_, 0);
if (lean_obj_tag(v_pre_422_) == 0)
{
lean_object* v_str_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v_str_423_ = lean_ctor_get(v_declName_357_, 1);
v___x_424_ = ((lean_object*)(l_Lean_Compiler_LCNF_toMonoType___closed__1));
v___x_425_ = lean_string_dec_eq(v_str_423_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___closed__0));
v___x_427_ = lean_string_dec_eq(v_str_423_, v___x_426_);
if (v___x_427_ == 0)
{
v___y_361_ = v_a_354_;
v___y_362_ = v_a_355_;
goto v___jp_360_;
}
else
{
lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref_known(v_declName_357_, 2);
lean_dec(v_us_358_);
lean_dec_ref(v_args_353_);
v___x_428_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
}
else
{
lean_object* v___x_430_; lean_object* v___x_431_; 
lean_dec_ref_known(v_declName_357_, 2);
lean_dec(v_us_358_);
lean_dec_ref(v_args_353_);
v___x_430_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
else
{
v___y_361_ = v_a_354_;
v___y_362_ = v_a_355_;
goto v___jp_360_;
}
}
else
{
v___y_361_ = v_a_354_;
v___y_362_ = v_a_355_;
goto v___jp_360_;
}
v___jp_360_:
{
lean_object* v___x_363_; 
lean_inc(v_declName_357_);
v___x_363_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_declName_357_, v___y_361_, v___y_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_363_, 1);
if (lean_obj_tag(v_a_364_) == 1)
{
lean_object* v_val_365_; lean_object* v_ctorName_366_; lean_object* v_numParams_367_; lean_object* v_fieldIdx_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
lean_dec(v_us_358_);
lean_dec(v_declName_357_);
v_val_365_ = lean_ctor_get(v_a_364_, 0);
lean_inc(v_val_365_);
lean_dec_ref_known(v_a_364_, 1);
v_ctorName_366_ = lean_ctor_get(v_val_365_, 0);
lean_inc(v_ctorName_366_);
v_numParams_367_ = lean_ctor_get(v_val_365_, 1);
lean_inc(v_numParams_367_);
v_fieldIdx_368_ = lean_ctor_get(v_val_365_, 2);
lean_inc(v_fieldIdx_368_);
lean_dec(v_val_365_);
v___x_369_ = lean_box(0);
v___x_370_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_ctorName_366_, v___x_369_, v___y_361_, v___y_362_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = l_Array_toSubarray___redArg(v_args_353_, v___x_372_, v_numParams_367_);
v___x_374_ = l_Subarray_copy___redArg(v___x_373_);
v___x_375_ = l_Lean_Compiler_LCNF_instantiateForall(v_a_371_, v___x_374_, v___y_361_, v___y_362_);
lean_dec_ref(v___x_374_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_a_376_ = lean_ctor_get(v___x_375_, 0);
lean_inc(v_a_376_);
lean_dec_ref_known(v___x_375_, 1);
v___x_377_ = l_Lean_Compiler_LCNF_getParamTypes(v_a_376_);
v___x_378_ = lean_array_get(v___x_359_, v___x_377_, v_fieldIdx_368_);
lean_dec(v_fieldIdx_368_);
lean_dec_ref(v___x_377_);
v___x_379_ = l_Lean_Compiler_LCNF_toMonoType(v___x_378_, v___y_361_, v___y_362_);
return v___x_379_;
}
else
{
lean_dec(v_fieldIdx_368_);
return v___x_375_;
}
}
else
{
lean_dec(v_fieldIdx_368_);
lean_dec(v_numParams_367_);
lean_dec_ref(v_args_353_);
return v___x_370_;
}
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
lean_dec(v_a_364_);
v___x_380_ = lean_box(0);
lean_inc(v_declName_357_);
v___x_381_ = l_Lean_mkConst(v_declName_357_, v___x_380_);
v___x_382_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_declName_357_, v_us_358_, v___y_361_, v___y_362_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_413_; 
v_a_383_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_413_ == 0)
{
v___x_385_ = v___x_382_;
v_isShared_386_ = v_isSharedCheck_413_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_382_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_413_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
uint8_t v___x_387_; 
v___x_387_ = l_Lean_Expr_isErased(v_a_383_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; size_t v_sz_389_; size_t v___x_390_; lean_object* v___x_391_; 
lean_del_object(v___x_385_);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_381_);
lean_ctor_set(v___x_388_, 1, v_a_383_);
v_sz_389_ = lean_array_size(v_args_353_);
v___x_390_ = ((size_t)0ULL);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(v_args_353_, v_sz_389_, v___x_390_, v___x_388_, v___y_361_, v___y_362_);
lean_dec_ref(v_args_353_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_400_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_400_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_400_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_400_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v_fst_396_; lean_object* v___x_398_; 
v_fst_396_ = lean_ctor_get(v_a_392_, 0);
lean_inc(v_fst_396_);
lean_dec(v_a_392_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v_fst_396_);
v___x_398_ = v___x_394_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_fst_396_);
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
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_a_401_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_391_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_391_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_object* v___x_409_; lean_object* v___x_411_; 
lean_dec(v_a_383_);
lean_dec_ref(v___x_381_);
lean_dec_ref(v_args_353_);
v___x_409_ = l_Lean_Compiler_LCNF_erasedExpr;
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_409_);
v___x_411_ = v___x_385_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_dec_ref(v___x_381_);
lean_dec_ref(v_args_353_);
return v___x_382_;
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec(v_us_358_);
lean_dec(v_declName_357_);
lean_dec_ref(v_args_353_);
v_a_414_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_363_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_363_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
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
else
{
lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec_ref(v_args_353_);
lean_dec_ref(v_f_352_);
v___x_432_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(lean_object* v_x_434_, lean_object* v_x_435_, lean_object* v_x_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
if (lean_obj_tag(v_x_434_) == 5)
{
lean_object* v_fn_440_; lean_object* v_arg_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_fn_440_ = lean_ctor_get(v_x_434_, 0);
lean_inc_ref(v_fn_440_);
v_arg_441_ = lean_ctor_get(v_x_434_, 1);
lean_inc_ref(v_arg_441_);
lean_dec_ref_known(v_x_434_, 2);
v___x_442_ = lean_array_set(v_x_435_, v_x_436_, v_arg_441_);
v___x_443_ = lean_unsigned_to_nat(1u);
v___x_444_ = lean_nat_sub(v_x_436_, v___x_443_);
lean_dec(v_x_436_);
v_x_434_ = v_fn_440_;
v_x_435_ = v___x_442_;
v_x_436_ = v___x_444_;
goto _start;
}
else
{
lean_object* v___x_446_; 
lean_dec(v_x_436_);
v___x_446_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(v_x_434_, v_x_435_, v___y_437_, v___y_438_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3___boxed(lean_object* v_x_447_, lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lean_Expr_withAppAux___at___00Lean_Compiler_LCNF_toMonoType_spec__3(v_x_447_, v_x_448_, v_x_449_, v___y_450_, v___y_451_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMonoType___boxed(lean_object* v_type_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_Compiler_LCNF_toMonoType(v_type_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1___boxed(lean_object* v_as_459_, lean_object* v_sz_460_, lean_object* v_i_461_, lean_object* v_b_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
size_t v_sz_boxed_466_; size_t v_i_boxed_467_; lean_object* v_res_468_; 
v_sz_boxed_466_ = lean_unbox_usize(v_sz_460_);
lean_dec(v_sz_460_);
v_i_boxed_467_ = lean_unbox_usize(v_i_461_);
lean_dec(v_i_461_);
v_res_468_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp_spec__1(v_as_459_, v_sz_boxed_466_, v_i_boxed_467_, v_b_462_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec_ref(v_as_459_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp___boxed(lean_object* v_f_469_, lean_object* v_args_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_toMonoType_visitApp(v_f_469_, v_args_470_, v_a_471_, v_a_472_);
lean_dec(v_a_472_);
lean_dec_ref(v_a_471_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__2(lean_object* v_env_475_, lean_object* v_as_476_, size_t v_i_477_, size_t v_stop_478_, lean_object* v_b_479_){
_start:
{
lean_object* v___y_481_; uint8_t v___x_485_; 
v___x_485_ = lean_usize_dec_eq(v_i_477_, v_stop_478_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v_fst_487_; uint8_t v___x_488_; 
v___x_486_ = lean_array_uget_borrowed(v_as_476_, v_i_477_);
v_fst_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_fst_487_);
lean_inc_ref(v_env_475_);
v___x_488_ = l_Lean_Environment_contains(v_env_475_, v_fst_487_, v___x_485_);
if (v___x_488_ == 0)
{
v___y_481_ = v_b_479_;
goto v___jp_480_;
}
else
{
lean_object* v___x_489_; 
lean_inc(v___x_486_);
v___x_489_ = lean_array_push(v_b_479_, v___x_486_);
v___y_481_ = v___x_489_;
goto v___jp_480_;
}
}
else
{
lean_dec_ref(v_env_475_);
return v_b_479_;
}
v___jp_480_:
{
size_t v___x_482_; size_t v___x_483_; 
v___x_482_ = ((size_t)1ULL);
v___x_483_ = lean_usize_add(v_i_477_, v___x_482_);
v_i_477_ = v___x_483_;
v_b_479_ = v___y_481_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__2___boxed(lean_object* v_env_490_, lean_object* v_as_491_, lean_object* v_i_492_, lean_object* v_stop_493_, lean_object* v_b_494_){
_start:
{
size_t v_i_boxed_495_; size_t v_stop_boxed_496_; lean_object* v_res_497_; 
v_i_boxed_495_ = lean_unbox_usize(v_i_492_);
lean_dec(v_i_492_);
v_stop_boxed_496_ = lean_unbox_usize(v_stop_493_);
lean_dec(v_stop_493_);
v_res_497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__2(v_env_490_, v_as_491_, v_i_boxed_495_, v_stop_boxed_496_, v_b_494_);
lean_dec_ref(v_as_491_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_498_, lean_object* v_x_499_){
_start:
{
if (lean_obj_tag(v_x_499_) == 0)
{
lean_object* v_k_500_; lean_object* v_v_501_; lean_object* v_l_502_; lean_object* v_r_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_k_500_ = lean_ctor_get(v_x_499_, 1);
v_v_501_ = lean_ctor_get(v_x_499_, 2);
v_l_502_ = lean_ctor_get(v_x_499_, 3);
v_r_503_ = lean_ctor_get(v_x_499_, 4);
v___x_504_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0(v_init_498_, v_l_502_);
lean_inc(v_v_501_);
lean_inc(v_k_500_);
v___x_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_505_, 0, v_k_500_);
lean_ctor_set(v___x_505_, 1, v_v_501_);
v___x_506_ = lean_array_push(v___x_504_, v___x_505_);
v_init_498_ = v___x_506_;
v_x_499_ = v_r_503_;
goto _start;
}
else
{
return v_init_498_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_508_, lean_object* v_x_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0(v_init_508_, v_x_509_);
lean_dec(v_x_509_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__1(lean_object* v_env_511_, lean_object* v_as_512_, size_t v_i_513_, size_t v_stop_514_, lean_object* v_b_515_){
_start:
{
lean_object* v___y_517_; uint8_t v___x_521_; 
v___x_521_ = lean_usize_dec_eq(v_i_513_, v_stop_514_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; lean_object* v_fst_523_; uint8_t v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_522_ = lean_array_uget_borrowed(v_as_512_, v_i_513_);
v_fst_523_ = lean_ctor_get(v___x_522_, 0);
v___x_524_ = 1;
lean_inc_ref(v_env_511_);
v___x_525_ = l_Lean_Environment_setExporting(v_env_511_, v___x_524_);
lean_inc(v_fst_523_);
v___x_526_ = l_Lean_Environment_contains(v___x_525_, v_fst_523_, v___x_521_);
if (v___x_526_ == 0)
{
v___y_517_ = v_b_515_;
goto v___jp_516_;
}
else
{
lean_object* v___x_527_; 
lean_inc(v___x_522_);
v___x_527_ = lean_array_push(v_b_515_, v___x_522_);
v___y_517_ = v___x_527_;
goto v___jp_516_;
}
}
else
{
lean_dec_ref(v_env_511_);
return v_b_515_;
}
v___jp_516_:
{
size_t v___x_518_; size_t v___x_519_; 
v___x_518_ = ((size_t)1ULL);
v___x_519_ = lean_usize_add(v_i_513_, v___x_518_);
v_i_513_ = v___x_519_;
v_b_515_ = v___y_517_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_528_, lean_object* v_as_529_, lean_object* v_i_530_, lean_object* v_stop_531_, lean_object* v_b_532_){
_start:
{
size_t v_i_boxed_533_; size_t v_stop_boxed_534_; lean_object* v_res_535_; 
v_i_boxed_533_ = lean_unbox_usize(v_i_530_);
lean_dec(v_i_530_);
v_stop_boxed_534_ = lean_unbox_usize(v_stop_531_);
lean_dec(v_stop_531_);
v_res_535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__1(v_env_528_, v_as_529_, v_i_boxed_533_, v_stop_boxed_534_, v_b_532_);
lean_dec_ref(v_as_529_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(lean_object* v_env_540_, lean_object* v_s_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___y_544_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_553_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__1_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_554_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0(v___x_553_, v_s_541_);
v___x_555_ = lean_array_get_size(v___x_554_);
v___x_556_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_557_ = lean_nat_dec_lt(v___x_542_, v___x_555_);
if (v___x_557_ == 0)
{
lean_dec_ref(v___x_554_);
v___y_544_ = v___x_556_;
goto v___jp_543_;
}
else
{
size_t v___x_558_; size_t v___x_559_; lean_object* v___x_560_; 
v___x_558_ = ((size_t)0ULL);
v___x_559_ = lean_usize_of_nat(v___x_555_);
lean_inc_ref(v_env_540_);
v___x_560_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__2(v_env_540_, v___x_554_, v___x_558_, v___x_559_, v___x_556_);
lean_dec_ref(v___x_554_);
v___y_544_ = v___x_560_;
goto v___jp_543_;
}
v___jp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; uint8_t v___x_547_; 
v___x_545_ = lean_array_get_size(v___y_544_);
v___x_546_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_547_ = lean_nat_dec_lt(v___x_542_, v___x_545_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; 
lean_dec_ref(v_env_540_);
v___x_548_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_548_, 0, v___x_546_);
lean_ctor_set(v___x_548_, 1, v___x_546_);
lean_ctor_set(v___x_548_, 2, v___y_544_);
return v___x_548_;
}
else
{
size_t v___x_549_; size_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_549_ = ((size_t)0ULL);
v___x_550_ = lean_usize_of_nat(v___x_545_);
v___x_551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__1(v_env_540_, v___y_544_, v___x_549_, v___x_550_, v___x_546_);
lean_inc_ref(v___x_551_);
v___x_552_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
lean_ctor_set(v___x_552_, 2, v___y_544_);
return v___x_552_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object* v_env_561_, lean_object* v_s_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(v_env_561_, v_s_562_);
lean_dec(v_s_562_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; lean_object* v___x_576_; 
v___f_572_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_573_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_));
v___x_574_ = lean_box(0);
v___x_575_ = 0;
v___x_576_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_573_, v___x_574_, v___x_575_, v___f_572_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2____boxed(lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_();
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(lean_object* v_init_579_, lean_object* v_t_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0_spec__0(v_init_579_, v_t_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_582_, lean_object* v_t_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2__spec__0(v_init_582_, v_t_583_);
lean_dec(v_t_583_);
return v_res_584_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0(void){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_585_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0);
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
return v___x_587_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2(void){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__1);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType(lean_object* v_declName_590_, lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v_env_596_; lean_object* v___x_597_; lean_object* v_toEnvExtension_598_; lean_object* v_asyncMode_599_; uint8_t v___x_600_; lean_object* v___x_601_; 
v___x_594_ = l_Lean_instInhabitedExpr;
v___x_595_ = lean_st_ref_get(v_a_592_);
v_env_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc_ref(v_env_596_);
lean_dec(v___x_595_);
v___x_597_ = l_Lean_Compiler_LCNF_monoTypeExt;
v_toEnvExtension_598_ = lean_ctor_get(v___x_597_, 0);
v_asyncMode_599_ = lean_ctor_get(v_toEnvExtension_598_, 2);
v___x_600_ = 0;
lean_inc(v_declName_590_);
v___x_601_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_594_, v___x_597_, v_env_596_, v_declName_590_, v_asyncMode_599_, v___x_600_);
if (lean_obj_tag(v___x_601_) == 0)
{
uint8_t v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_602_ = 0;
v___x_603_ = lean_box(0);
lean_inc(v_declName_590_);
v___x_604_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_declName_590_, v___x_603_, v_a_591_, v_a_592_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; lean_object* v___x_606_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_604_, 1);
v___x_606_ = l_Lean_Compiler_LCNF_toMonoType(v_a_605_, v_a_591_, v_a_592_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_636_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_636_ == 0)
{
v___x_609_ = v___x_606_;
v_isShared_610_ = v_isSharedCheck_636_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_636_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_611_; lean_object* v_env_612_; lean_object* v_nextMacroScope_613_; lean_object* v_ngen_614_; lean_object* v_auxDeclNGen_615_; lean_object* v_traceState_616_; lean_object* v_recordedDeps_617_; lean_object* v_messages_618_; lean_object* v_infoState_619_; lean_object* v_snapshotTasks_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_634_; 
v___x_611_ = lean_st_ref_take(v_a_592_);
v_env_612_ = lean_ctor_get(v___x_611_, 0);
v_nextMacroScope_613_ = lean_ctor_get(v___x_611_, 1);
v_ngen_614_ = lean_ctor_get(v___x_611_, 2);
v_auxDeclNGen_615_ = lean_ctor_get(v___x_611_, 3);
v_traceState_616_ = lean_ctor_get(v___x_611_, 4);
v_recordedDeps_617_ = lean_ctor_get(v___x_611_, 6);
v_messages_618_ = lean_ctor_get(v___x_611_, 7);
v_infoState_619_ = lean_ctor_get(v___x_611_, 8);
v_snapshotTasks_620_ = lean_ctor_get(v___x_611_, 9);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_634_ == 0)
{
lean_object* v_unused_635_; 
v_unused_635_ = lean_ctor_get(v___x_611_, 5);
lean_dec(v_unused_635_);
v___x_622_ = v___x_611_;
v_isShared_623_ = v_isSharedCheck_634_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_snapshotTasks_620_);
lean_inc(v_infoState_619_);
lean_inc(v_messages_618_);
lean_inc(v_recordedDeps_617_);
lean_inc(v_traceState_616_);
lean_inc(v_auxDeclNGen_615_);
lean_inc(v_ngen_614_);
lean_inc(v_nextMacroScope_613_);
lean_inc(v_env_612_);
lean_dec(v___x_611_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_634_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_624_ = lean_box(0);
v___x_625_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_597_, v_env_612_, v_declName_590_, v_a_607_, v___x_602_);
v___x_626_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 5, v___x_626_);
lean_ctor_set(v___x_622_, 0, v___x_625_);
v___x_628_ = v___x_622_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_nextMacroScope_613_);
lean_ctor_set(v_reuseFailAlloc_633_, 2, v_ngen_614_);
lean_ctor_set(v_reuseFailAlloc_633_, 3, v_auxDeclNGen_615_);
lean_ctor_set(v_reuseFailAlloc_633_, 4, v_traceState_616_);
lean_ctor_set(v_reuseFailAlloc_633_, 5, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_633_, 6, v_recordedDeps_617_);
lean_ctor_set(v_reuseFailAlloc_633_, 7, v_messages_618_);
lean_ctor_set(v_reuseFailAlloc_633_, 8, v_infoState_619_);
lean_ctor_set(v_reuseFailAlloc_633_, 9, v_snapshotTasks_620_);
v___x_628_ = v_reuseFailAlloc_633_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_629_ = lean_st_ref_put(v_a_592_, v___x_628_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v___x_624_);
v___x_631_ = v___x_609_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_624_);
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
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec(v_declName_590_);
v_a_637_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_606_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_606_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_declName_590_);
v_a_645_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_604_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_604_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
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
lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_660_; 
lean_dec(v_declName_590_);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_660_ == 0)
{
lean_object* v_unused_661_; 
v_unused_661_ = lean_ctor_get(v___x_601_, 0);
lean_dec(v_unused_661_);
v___x_654_ = v___x_601_;
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
else
{
lean_dec(v___x_601_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; lean_object* v___x_658_; 
v___x_656_ = lean_box(0);
if (v_isShared_655_ == 0)
{
lean_ctor_set_tag(v___x_654_, 0);
lean_ctor_set(v___x_654_, 0, v___x_656_);
v___x_658_ = v___x_654_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setOtherDeclMonoType___boxed(lean_object* v_declName_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_Compiler_LCNF_setOtherDeclMonoType(v_declName_662_, v_a_663_, v_a_664_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___lam__0(lean_object* v_declName_667_, lean_object* v_a_668_, lean_object* v_addEntryFn_669_, lean_object* v_ps_670_){
_start:
{
lean_object* v_importedEntries_671_; lean_object* v_state_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_681_; 
v_importedEntries_671_ = lean_ctor_get(v_ps_670_, 0);
v_state_672_ = lean_ctor_get(v_ps_670_, 1);
v_isSharedCheck_681_ = !lean_is_exclusive(v_ps_670_);
if (v_isSharedCheck_681_ == 0)
{
v___x_674_ = v_ps_670_;
v_isShared_675_ = v_isSharedCheck_681_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_state_672_);
lean_inc(v_importedEntries_671_);
lean_dec(v_ps_670_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_681_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v_declName_667_);
lean_ctor_set(v___x_676_, 1, v_a_668_);
v___x_677_ = lean_apply_2(v_addEntryFn_669_, v_state_672_, v___x_676_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 1, v___x_677_);
v___x_679_ = v___x_674_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_importedEntries_671_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__0);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_684_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_685_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0);
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
lean_ctor_set(v___x_687_, 2, v___x_686_);
lean_ctor_set(v___x_687_, 3, v___x_686_);
lean_ctor_set(v___x_687_, 4, v___x_685_);
lean_ctor_set(v___x_687_, 5, v___x_685_);
lean_ctor_set(v___x_687_, 6, v___x_685_);
lean_ctor_set(v___x_687_, 7, v___x_685_);
lean_ctor_set(v___x_687_, 8, v___x_685_);
lean_ctor_set(v___x_687_, 9, v___x_685_);
lean_ctor_set(v___x_687_, 10, v___x_685_);
lean_ctor_set(v___x_687_, 11, v___x_684_);
return v___x_687_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_unsigned_to_nat(32u);
v___x_689_ = lean_mk_empty_array_with_capacity(v___x_688_);
v___x_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_691_ = ((size_t)5ULL);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_unsigned_to_nat(32u);
v___x_694_ = lean_mk_empty_array_with_capacity(v___x_693_);
v___x_695_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__2);
v___x_696_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_696_, 0, v___x_695_);
lean_ctor_set(v___x_696_, 1, v___x_694_);
lean_ctor_set(v___x_696_, 2, v___x_692_);
lean_ctor_set(v___x_696_, 3, v___x_692_);
lean_ctor_set_usize(v___x_696_, 4, v___x_691_);
return v___x_696_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_697_ = lean_box(1);
v___x_698_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__3);
v___x_699_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__0);
v___x_700_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
lean_ctor_set(v___x_700_, 2, v___x_697_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(lean_object* v_msgData_701_, lean_object* v___y_702_, lean_object* v___y_703_){
_start:
{
lean_object* v___x_705_; lean_object* v_toCold_706_; lean_object* v_env_707_; lean_object* v_options_708_; uint8_t v___x_709_; lean_object* v_env_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_705_ = lean_st_ref_get(v___y_703_);
v_toCold_706_ = lean_ctor_get(v___y_702_, 0);
v_env_707_ = lean_ctor_get(v___x_705_, 0);
lean_inc_ref(v_env_707_);
lean_dec(v___x_705_);
v_options_708_ = lean_ctor_get(v_toCold_706_, 2);
v___x_709_ = 0;
v_env_710_ = l_Lean_Environment_setRecordingDeps(v_env_707_, v___x_709_);
v___x_711_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__1);
v___x_712_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_708_);
v___x_713_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_713_, 0, v_env_710_);
lean_ctor_set(v___x_713_, 1, v___x_711_);
lean_ctor_set(v___x_713_, 2, v___x_712_);
lean_ctor_set(v___x_713_, 3, v_options_708_);
v___x_714_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
lean_ctor_set(v___x_714_, 1, v_msgData_701_);
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0___boxed(lean_object* v_msgData_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(v_msgData_716_, v___y_717_, v___y_718_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(lean_object* v_msg_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v_ref_725_; lean_object* v___x_726_; lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_735_; 
v_ref_725_ = lean_ctor_get(v___y_722_, 2);
v___x_726_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0_spec__0(v_msg_721_, v___y_722_, v___y_723_);
v_a_727_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_735_ == 0)
{
v___x_729_ = v___x_726_;
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_733_; 
lean_inc(v_ref_725_);
v___x_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_731_, 0, v_ref_725_);
lean_ctor_set(v___x_731_, 1, v_a_727_);
if (v_isShared_730_ == 0)
{
lean_ctor_set_tag(v___x_729_, 1);
lean_ctor_set(v___x_729_, 0, v___x_731_);
v___x_733_ = v___x_729_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg___boxed(lean_object* v_msg_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(v_msg_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
return v_res_740_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__0));
v___x_743_ = l_Lean_stringToMessageData(v___x_742_);
return v___x_743_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__2));
v___x_746_ = l_Lean_stringToMessageData(v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType(lean_object* v_declName_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v___y_752_; lean_object* v_nextMacroScope_753_; lean_object* v_ngen_754_; lean_object* v_auxDeclNGen_755_; lean_object* v_traceState_756_; lean_object* v_recordedDeps_757_; lean_object* v_messages_758_; lean_object* v_infoState_759_; lean_object* v_snapshotTasks_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v_env_798_; lean_object* v___x_799_; lean_object* v_toEnvExtension_800_; lean_object* v_asyncMode_801_; uint8_t v___x_802_; lean_object* v___x_803_; 
v___x_796_ = l_Lean_instInhabitedExpr;
v___x_797_ = lean_st_ref_get(v_a_749_);
v_env_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc_ref(v_env_798_);
lean_dec(v___x_797_);
v___x_799_ = l_Lean_Compiler_LCNF_monoTypeExt;
v_toEnvExtension_800_ = lean_ctor_get(v___x_799_, 0);
v_asyncMode_801_ = lean_ctor_get(v_toEnvExtension_800_, 2);
v___x_802_ = 0;
lean_inc(v_declName_747_);
v___x_803_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_796_, v___x_799_, v_env_798_, v_declName_747_, v_asyncMode_801_, v___x_802_);
if (lean_obj_tag(v___x_803_) == 1)
{
lean_object* v_val_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v_declName_747_);
v_val_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_val_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 0);
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_val_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
else
{
lean_object* v___x_812_; lean_object* v_env_828_; uint8_t v___x_829_; lean_object* v___x_830_; 
lean_dec(v___x_803_);
v___x_812_ = lean_st_ref_get(v_a_749_);
v_env_828_ = lean_ctor_get(v___x_812_, 0);
lean_inc_ref(v_env_828_);
lean_dec(v___x_812_);
v___x_829_ = 0;
lean_inc(v_declName_747_);
v___x_830_ = l_Lean_Environment_find_x3f(v_env_828_, v_declName_747_, v___x_829_);
if (lean_obj_tag(v___x_830_) == 1)
{
lean_object* v_val_831_; 
v_val_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_val_831_);
lean_dec_ref_known(v___x_830_, 1);
switch(lean_obj_tag(v_val_831_))
{
case 5:
{
lean_dec_ref_known(v_val_831_, 1);
goto v___jp_813_;
}
case 6:
{
lean_dec_ref_known(v_val_831_, 1);
goto v___jp_813_;
}
default: 
{
lean_dec(v_val_831_);
v___y_768_ = v_a_748_;
v___y_769_ = v_a_749_;
goto v___jp_767_;
}
}
}
else
{
lean_dec(v___x_830_);
v___y_768_ = v_a_748_;
v___y_769_ = v_a_749_;
goto v___jp_767_;
}
v___jp_813_:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
v___x_814_ = lean_obj_once(&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1, &l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1_once, _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__1);
v___x_815_ = l_Lean_MessageData_ofName(v_declName_747_);
v___x_816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_814_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lean_obj_once(&l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3, &l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3_once, _init_l_Lean_Compiler_LCNF_getOtherDeclMonoType___closed__3);
v___x_818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v___x_819_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(v___x_818_, v_a_748_, v_a_749_);
v_a_820_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_819_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
v___jp_751_:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_763_ = lean_obj_once(&l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2, &l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2_once, _init_l_Lean_Compiler_LCNF_setOtherDeclMonoType___closed__2);
v___x_764_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_764_, 0, v___y_762_);
lean_ctor_set(v___x_764_, 1, v_nextMacroScope_753_);
lean_ctor_set(v___x_764_, 2, v_ngen_754_);
lean_ctor_set(v___x_764_, 3, v_auxDeclNGen_755_);
lean_ctor_set(v___x_764_, 4, v_traceState_756_);
lean_ctor_set(v___x_764_, 5, v___x_763_);
lean_ctor_set(v___x_764_, 6, v_recordedDeps_757_);
lean_ctor_set(v___x_764_, 7, v_messages_758_);
lean_ctor_set(v___x_764_, 8, v_infoState_759_);
lean_ctor_set(v___x_764_, 9, v_snapshotTasks_760_);
v___x_765_ = lean_st_ref_put(v___y_761_, v___x_764_);
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v___y_752_);
return v___x_766_;
}
v___jp_767_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_box(0);
lean_inc(v_declName_747_);
v___x_771_ = l_Lean_Compiler_LCNF_getOtherDeclBaseType(v_declName_747_, v___x_770_, v___y_768_, v___y_769_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = l_Lean_Compiler_LCNF_toMonoType(v_a_772_, v___y_768_, v___y_769_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_775_; lean_object* v_env_776_; lean_object* v_nextMacroScope_777_; lean_object* v_ngen_778_; lean_object* v_auxDeclNGen_779_; lean_object* v_traceState_780_; lean_object* v_recordedDeps_781_; lean_object* v_messages_782_; lean_object* v_infoState_783_; lean_object* v_snapshotTasks_784_; lean_object* v___x_785_; lean_object* v_toEnvExtension_786_; lean_object* v_addEntryFn_787_; lean_object* v_asyncMode_788_; uint8_t v_logWrites_789_; lean_object* v___f_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc_n(v_a_774_, 2);
lean_dec_ref_known(v___x_773_, 1);
v___x_775_ = lean_st_ref_take(v___y_769_);
v_env_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc_ref(v_env_776_);
v_nextMacroScope_777_ = lean_ctor_get(v___x_775_, 1);
lean_inc(v_nextMacroScope_777_);
v_ngen_778_ = lean_ctor_get(v___x_775_, 2);
lean_inc_ref(v_ngen_778_);
v_auxDeclNGen_779_ = lean_ctor_get(v___x_775_, 3);
lean_inc_ref(v_auxDeclNGen_779_);
v_traceState_780_ = lean_ctor_get(v___x_775_, 4);
lean_inc_ref(v_traceState_780_);
v_recordedDeps_781_ = lean_ctor_get(v___x_775_, 6);
lean_inc_ref(v_recordedDeps_781_);
v_messages_782_ = lean_ctor_get(v___x_775_, 7);
lean_inc_ref(v_messages_782_);
v_infoState_783_ = lean_ctor_get(v___x_775_, 8);
lean_inc_ref(v_infoState_783_);
v_snapshotTasks_784_ = lean_ctor_get(v___x_775_, 9);
lean_inc_ref(v_snapshotTasks_784_);
lean_dec(v___x_775_);
v___x_785_ = l_Lean_Compiler_LCNF_monoTypeExt;
v_toEnvExtension_786_ = lean_ctor_get(v___x_785_, 0);
v_addEntryFn_787_ = lean_ctor_get(v___x_785_, 3);
v_asyncMode_788_ = lean_ctor_get(v_toEnvExtension_786_, 2);
v_logWrites_789_ = lean_ctor_get_uint8(v_toEnvExtension_786_, sizeof(void*)*6);
lean_inc(v_addEntryFn_787_);
v___f_790_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_getOtherDeclMonoType___lam__0), 4, 3);
lean_closure_set(v___f_790_, 0, v_declName_747_);
lean_closure_set(v___f_790_, 1, v_a_774_);
lean_closure_set(v___f_790_, 2, v_addEntryFn_787_);
v___x_791_ = lean_box(0);
v___x_792_ = 1;
if (v_logWrites_789_ == 0)
{
lean_object* v___x_793_; 
lean_inc_ref(v_toEnvExtension_786_);
v___x_793_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_786_, v_env_776_, v___f_790_, v_asyncMode_788_, v___x_791_, v___x_792_);
v___y_752_ = v_a_774_;
v_nextMacroScope_753_ = v_nextMacroScope_777_;
v_ngen_754_ = v_ngen_778_;
v_auxDeclNGen_755_ = v_auxDeclNGen_779_;
v_traceState_756_ = v_traceState_780_;
v_recordedDeps_757_ = v_recordedDeps_781_;
v_messages_758_ = v_messages_782_;
v_infoState_759_ = v_infoState_783_;
v_snapshotTasks_760_ = v_snapshotTasks_784_;
v___y_761_ = v___y_769_;
v___y_762_ = v___x_793_;
goto v___jp_751_;
}
else
{
lean_object* v___x_794_; lean_object* v___x_795_; 
lean_inc_ref_n(v_toEnvExtension_786_, 2);
v___x_794_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_786_, v_env_776_);
lean_dec_ref(v_env_776_);
v___x_795_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_786_, v___x_794_, v___f_790_, v_asyncMode_788_, v___x_791_, v___x_792_);
v___y_752_ = v_a_774_;
v_nextMacroScope_753_ = v_nextMacroScope_777_;
v_ngen_754_ = v_ngen_778_;
v_auxDeclNGen_755_ = v_auxDeclNGen_779_;
v_traceState_756_ = v_traceState_780_;
v_recordedDeps_757_ = v_recordedDeps_781_;
v_messages_758_ = v_messages_782_;
v_infoState_759_ = v_infoState_783_;
v_snapshotTasks_760_ = v_snapshotTasks_784_;
v___y_761_ = v___y_769_;
v___y_762_ = v___x_795_;
goto v___jp_751_;
}
}
else
{
lean_dec(v_declName_747_);
return v___x_773_;
}
}
else
{
lean_dec(v_declName_747_);
return v___x_771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getOtherDeclMonoType___boxed(lean_object* v_declName_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lean_Compiler_LCNF_getOtherDeclMonoType(v_declName_832_, v_a_833_, v_a_834_);
lean_dec(v_a_834_);
lean_dec_ref(v_a_833_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0(lean_object* v_00_u03b1_837_, lean_object* v_msg_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___redArg(v_msg_838_, v___y_839_, v___y_840_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0___boxed(lean_object* v_00_u03b1_843_, lean_object* v_msg_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getOtherDeclMonoType_spec__0(v_00_u03b1_843_, v_msg_844_, v___y_845_, v___y_846_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
return v_res_848_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_BaseTypes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_BaseTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_1308376395____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_trivialStructureInfoExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_MonoTypes_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_MonoTypes_735612717____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_monoTypeExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_monoTypeExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Util(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_BaseTypes(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Irrelevant(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_BaseTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Irrelevant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
}
#ifdef __cplusplus
}
#endif
