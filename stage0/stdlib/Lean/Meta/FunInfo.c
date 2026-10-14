// Lean compiler output
// Module: Lean.Meta.FunInfo
// Imports: public import Lean.Meta.InferType import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqInfoCacheKey_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_areRealizationsEnabledForConst(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_set_heartbeats(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Kernel_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkInfoCacheKey___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_object* l_Lean_Meta_instBEqInfoCacheKey_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_hasMVar___boxed(lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "FunInfo"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(112, 52, 23, 53, 37, 12, 118, 217)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(73, 147, 169, 8, 188, 234, 221, 232)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(140, 0, 92, 209, 70, 2, 10, 135)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(176, 237, 136, 34, 252, 176, 16, 86)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "FunInfoEnvCacheKey"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_ctor_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),((lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value),LEAN_SCALAR_PTR_LITERAL(77, 18, 248, 164, 207, 212, 124, 226)}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqInfoCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hasMVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.FunInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "_private.Lean.Meta.FunInfo.0.Lean.Meta.getFunInfoAux"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0;
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "trying to realize `"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "` value but `enableRealizationsForConst` must be called for '"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' first"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Environment.realizeConst: `realizedImportedConsts` is empty"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value;
static const lean_ctor_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value)}};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Meta.Basic"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.realizeValue"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object* v_x_1_, lean_object* v_x_2_){
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
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
if (lean_obj_tag(v_x_13_) == 0)
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_15_; 
v___x_15_ = 1;
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
}
else
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_17_; 
v___x_17_ = 0;
return v___x_17_;
}
else
{
lean_object* v_head_18_; lean_object* v_tail_19_; lean_object* v_head_20_; lean_object* v_tail_21_; uint8_t v___x_22_; 
v_head_18_ = lean_ctor_get(v_x_13_, 0);
v_tail_19_ = lean_ctor_get(v_x_13_, 1);
v_head_20_ = lean_ctor_get(v_x_14_, 0);
v_tail_21_ = lean_ctor_get(v_x_14_, 1);
v___x_22_ = lean_level_eq(v_head_18_, v_head_20_);
if (v___x_22_ == 0)
{
return v___x_22_;
}
else
{
v_x_13_ = v_tail_19_;
v_x_14_ = v_tail_21_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_x_24_, v_x_25_);
lean_dec(v_x_25_);
lean_dec(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
lean_object* v_c_30_; lean_object* v_ls_31_; lean_object* v_maxArgs_x3f_32_; lean_object* v_c_33_; lean_object* v_ls_34_; lean_object* v_maxArgs_x3f_35_; uint8_t v___x_36_; 
v_c_30_ = lean_ctor_get(v_x_28_, 0);
v_ls_31_ = lean_ctor_get(v_x_28_, 1);
v_maxArgs_x3f_32_ = lean_ctor_get(v_x_28_, 2);
v_c_33_ = lean_ctor_get(v_x_29_, 0);
v_ls_34_ = lean_ctor_get(v_x_29_, 1);
v_maxArgs_x3f_35_ = lean_ctor_get(v_x_29_, 2);
v___x_36_ = lean_name_eq(v_c_30_, v_c_33_);
if (v___x_36_ == 0)
{
return v___x_36_;
}
else
{
uint8_t v___x_37_; 
v___x_37_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_ls_31_, v_ls_34_);
if (v___x_37_ == 0)
{
return v___x_37_;
}
else
{
uint8_t v___x_38_; 
v___x_38_ = l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_maxArgs_x3f_32_, v_maxArgs_x3f_35_);
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_39_, v_x_40_);
lean_dec_ref(v_x_40_);
lean_dec_ref(v_x_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t v_x_45_, lean_object* v_x_46_){
_start:
{
if (lean_obj_tag(v_x_46_) == 0)
{
return v_x_45_;
}
else
{
lean_object* v_head_47_; lean_object* v_tail_48_; uint64_t v___x_49_; uint64_t v___x_50_; 
v_head_47_ = lean_ctor_get(v_x_46_, 0);
v_tail_48_ = lean_ctor_get(v_x_46_, 1);
v___x_49_ = l_Lean_Level_hash(v_head_47_);
v___x_50_ = lean_uint64_mix_hash(v_x_45_, v___x_49_);
v_x_45_ = v___x_50_;
v_x_46_ = v_tail_48_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
uint64_t v_x_108__boxed_54_; uint64_t v_res_55_; lean_object* v_r_56_; 
v_x_108__boxed_54_ = lean_unbox_uint64(v_x_52_);
lean_dec_ref(v_x_52_);
v_res_55_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v_x_108__boxed_54_, v_x_53_);
lean_dec(v_x_53_);
v_r_56_ = lean_box_uint64(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object* v_x_57_){
_start:
{
lean_object* v_c_58_; lean_object* v_ls_59_; lean_object* v_maxArgs_x3f_60_; uint64_t v___x_61_; uint64_t v___y_63_; 
v_c_58_ = lean_ctor_get(v_x_57_, 0);
v_ls_59_ = lean_ctor_get(v_x_57_, 1);
v_maxArgs_x3f_60_ = lean_ctor_get(v_x_57_, 2);
v___x_61_ = 0ULL;
if (lean_obj_tag(v_c_58_) == 0)
{
uint64_t v___x_75_; 
v___x_75_ = 1723ULL;
v___y_63_ = v___x_75_;
goto v___jp_62_;
}
else
{
uint64_t v_hash_76_; 
v_hash_76_ = lean_ctor_get_uint64(v_c_58_, sizeof(void*)*2);
v___y_63_ = v_hash_76_;
goto v___jp_62_;
}
v___jp_62_:
{
uint64_t v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; uint64_t v___x_67_; 
v___x_64_ = lean_uint64_mix_hash(v___x_61_, v___y_63_);
v___x_65_ = 7ULL;
v___x_66_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v___x_65_, v_ls_59_);
v___x_67_ = lean_uint64_mix_hash(v___x_64_, v___x_66_);
if (lean_obj_tag(v_maxArgs_x3f_60_) == 0)
{
uint64_t v___x_68_; uint64_t v___x_69_; 
v___x_68_ = 11ULL;
v___x_69_ = lean_uint64_mix_hash(v___x_67_, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; uint64_t v___x_74_; 
v_val_70_ = lean_ctor_get(v_maxArgs_x3f_60_, 0);
v___x_71_ = lean_uint64_of_nat(v_val_70_);
v___x_72_ = 13ULL;
v___x_73_ = lean_uint64_mix_hash(v___x_71_, v___x_72_);
v___x_74_ = lean_uint64_mix_hash(v___x_67_, v___x_73_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object* v_x_77_){
_start:
{
uint64_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_77_);
lean_dec_ref(v_x_77_);
v_r_79_ = lean_box_uint64(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object* v_fn_116_, lean_object* v_maxArgs_x3f_117_, lean_object* v_k_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v___x_124_; 
lean_inc(v_maxArgs_x3f_117_);
lean_inc_ref(v_fn_116_);
v___x_124_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_116_, v_maxArgs_x3f_117_, v_a_119_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_192_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_192_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_192_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_192_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v_cache_130_; lean_object* v_funInfo_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v_finfo_135_; lean_object* v___y_136_; lean_object* v___x_168_; 
v___x_129_ = lean_st_ref_get(v_a_120_);
v_cache_130_ = lean_ctor_get(v___x_129_, 1);
lean_inc_ref(v_cache_130_);
lean_dec(v___x_129_);
v_funInfo_131_ = lean_ctor_get(v_cache_130_, 1);
lean_inc_ref(v_funInfo_131_);
lean_dec_ref(v_cache_130_);
v___x_132_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0));
v___x_133_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1));
lean_inc(v_a_125_);
v___x_168_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_132_, v___x_133_, v_funInfo_131_, v_a_125_);
lean_dec_ref(v_funInfo_131_);
if (lean_obj_tag(v___x_168_) == 0)
{
if (lean_obj_tag(v_fn_116_) == 4)
{
lean_object* v_declName_169_; lean_object* v_us_170_; lean_object* v___f_171_; uint8_t v___x_172_; 
v_declName_169_ = lean_ctor_get(v_fn_116_, 0);
lean_inc(v_declName_169_);
v_us_170_ = lean_ctor_get(v_fn_116_, 1);
lean_inc_n(v_us_170_, 2);
lean_dec_ref_known(v_fn_116_, 2);
v___f_171_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2));
v___x_172_ = l_List_any___redArg(v_us_170_, v___f_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_173_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0));
v___x_174_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0));
v___x_175_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_176_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_inc(v_declName_169_);
v___x_177_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_177_, 0, v_declName_169_);
lean_ctor_set(v___x_177_, 1, v_us_170_);
lean_ctor_set(v___x_177_, 2, v_maxArgs_x3f_117_);
v___x_178_ = l_Lean_Meta_realizeValue___redArg(v___x_173_, v___x_174_, v___x_175_, v___x_176_, v_declName_169_, v___x_177_, v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_178_, 1);
v_finfo_135_ = v_a_179_;
v___y_136_ = v_a_120_;
goto v___jp_134_;
}
else
{
lean_del_object(v___x_127_);
lean_dec(v_a_125_);
return v___x_178_;
}
}
else
{
lean_object* v___x_180_; 
lean_dec(v_us_170_);
lean_dec(v_declName_169_);
lean_dec(v_maxArgs_x3f_117_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_180_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref_known(v___x_180_, 1);
v_finfo_135_ = v_a_181_;
v___y_136_ = v_a_120_;
goto v___jp_134_;
}
else
{
lean_del_object(v___x_127_);
lean_dec(v_a_125_);
return v___x_180_;
}
}
}
else
{
lean_object* v___x_182_; 
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
lean_inc(v_a_122_);
lean_inc_ref(v_a_121_);
lean_inc(v_a_120_);
lean_inc_ref(v_a_119_);
v___x_182_ = lean_apply_5(v_k_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, lean_box(0));
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_a_183_);
lean_dec_ref_known(v___x_182_, 1);
v_finfo_135_ = v_a_183_;
v___y_136_ = v_a_120_;
goto v___jp_134_;
}
else
{
lean_del_object(v___x_127_);
lean_dec(v_a_125_);
return v___x_182_;
}
}
}
else
{
lean_object* v_val_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_del_object(v___x_127_);
lean_dec(v_a_125_);
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_val_184_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_168_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_val_184_);
lean_dec(v___x_168_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set_tag(v___x_186_, 0);
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_val_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
v___jp_134_:
{
lean_object* v___x_137_; lean_object* v_cache_138_; lean_object* v_mctx_139_; lean_object* v_zetaDeltaFVarIds_140_; lean_object* v_postponed_141_; lean_object* v_diag_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_167_; 
v___x_137_ = lean_st_ref_take(v___y_136_);
v_cache_138_ = lean_ctor_get(v___x_137_, 1);
v_mctx_139_ = lean_ctor_get(v___x_137_, 0);
v_zetaDeltaFVarIds_140_ = lean_ctor_get(v___x_137_, 2);
v_postponed_141_ = lean_ctor_get(v___x_137_, 3);
v_diag_142_ = lean_ctor_get(v___x_137_, 4);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_167_ == 0)
{
v___x_144_ = v___x_137_;
v_isShared_145_ = v_isSharedCheck_167_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_diag_142_);
lean_inc(v_postponed_141_);
lean_inc(v_zetaDeltaFVarIds_140_);
lean_inc(v_cache_138_);
lean_inc(v_mctx_139_);
lean_dec(v___x_137_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_167_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v_inferType_146_; lean_object* v_funInfo_147_; lean_object* v_synthInstance_148_; lean_object* v_whnf_149_; lean_object* v_defEqTrans_150_; lean_object* v_defEqPerm_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_166_; 
v_inferType_146_ = lean_ctor_get(v_cache_138_, 0);
v_funInfo_147_ = lean_ctor_get(v_cache_138_, 1);
v_synthInstance_148_ = lean_ctor_get(v_cache_138_, 2);
v_whnf_149_ = lean_ctor_get(v_cache_138_, 3);
v_defEqTrans_150_ = lean_ctor_get(v_cache_138_, 4);
v_defEqPerm_151_ = lean_ctor_get(v_cache_138_, 5);
v_isSharedCheck_166_ = !lean_is_exclusive(v_cache_138_);
if (v_isSharedCheck_166_ == 0)
{
v___x_153_ = v_cache_138_;
v_isShared_154_ = v_isSharedCheck_166_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_defEqPerm_151_);
lean_inc(v_defEqTrans_150_);
lean_inc(v_whnf_149_);
lean_inc(v_synthInstance_148_);
lean_inc(v_funInfo_147_);
lean_inc(v_inferType_146_);
lean_dec(v_cache_138_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_166_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v___x_157_; 
lean_inc_ref(v_finfo_135_);
v___x_155_ = l_Lean_PersistentHashMap_insert___redArg(v___x_132_, v___x_133_, v_funInfo_147_, v_a_125_, v_finfo_135_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 1, v___x_155_);
v___x_157_ = v___x_153_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_inferType_146_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___x_155_);
lean_ctor_set(v_reuseFailAlloc_165_, 2, v_synthInstance_148_);
lean_ctor_set(v_reuseFailAlloc_165_, 3, v_whnf_149_);
lean_ctor_set(v_reuseFailAlloc_165_, 4, v_defEqTrans_150_);
lean_ctor_set(v_reuseFailAlloc_165_, 5, v_defEqPerm_151_);
v___x_157_ = v_reuseFailAlloc_165_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_159_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 1, v___x_157_);
v___x_159_ = v___x_144_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_mctx_139_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v___x_157_);
lean_ctor_set(v_reuseFailAlloc_164_, 2, v_zetaDeltaFVarIds_140_);
lean_ctor_set(v_reuseFailAlloc_164_, 3, v_postponed_141_);
lean_ctor_set(v_reuseFailAlloc_164_, 4, v_diag_142_);
v___x_159_ = v_reuseFailAlloc_164_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = lean_st_ref_set(v___y_136_, v___x_159_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v_finfo_135_);
v___x_162_ = v___x_127_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_finfo_135_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
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
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_dec_ref(v_k_118_);
lean_dec(v_maxArgs_x3f_117_);
lean_dec_ref(v_fn_116_);
v_a_193_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_124_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_124_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object* v_fn_201_, lean_object* v_maxArgs_x3f_202_, lean_object* v_k_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(v_fn_201_, v_maxArgs_x3f_202_, v_k_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
lean_dec(v_a_205_);
lean_dec_ref(v_a_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object* v_e_210_, lean_object* v_deps_211_, lean_object* v_k_212_){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = l_Lean_Expr_hasFVar(v_e_210_);
if (v___x_213_ == 0)
{
lean_dec(v_k_212_);
return v_deps_211_;
}
else
{
lean_object* v___x_214_; 
v___x_214_ = lean_apply_1(v_k_212_, v_deps_211_);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object* v_e_215_, lean_object* v_deps_216_, lean_object* v_k_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(v_e_215_, v_deps_216_, v_k_217_);
lean_dec_ref(v_e_215_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object* v_00_u03b1_219_, lean_object* v_e_220_, lean_object* v_deps_221_, lean_object* v_k_222_){
_start:
{
uint8_t v___x_223_; 
v___x_223_ = l_Lean_Expr_hasFVar(v_e_220_);
if (v___x_223_ == 0)
{
lean_dec(v_k_222_);
return v_deps_221_;
}
else
{
lean_object* v___x_224_; 
v___x_224_ = lean_apply_1(v_k_222_, v_deps_221_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object* v_00_u03b1_225_, lean_object* v_e_226_, lean_object* v_deps_227_, lean_object* v_k_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(v_00_u03b1_225_, v_e_226_, v_deps_227_, v_k_228_);
lean_dec_ref(v_e_226_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object* v_xs_230_, lean_object* v_v_231_, lean_object* v_i_232_){
_start:
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = lean_array_get_size(v_xs_230_);
v___x_234_ = lean_nat_dec_lt(v_i_232_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; 
lean_dec(v_i_232_);
v___x_235_ = lean_box(0);
return v___x_235_;
}
else
{
lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_236_ = lean_array_fget_borrowed(v_xs_230_, v_i_232_);
v___x_237_ = lean_expr_eqv(v___x_236_, v_v_231_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_unsigned_to_nat(1u);
v___x_239_ = lean_nat_add(v_i_232_, v___x_238_);
lean_dec(v_i_232_);
v_i_232_ = v___x_239_;
goto _start;
}
else
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_241_, 0, v_i_232_);
return v___x_241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_242_, lean_object* v_v_243_, lean_object* v_i_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_242_, v_v_243_, v_i_244_);
lean_dec_ref(v_v_243_);
lean_dec_ref(v_xs_242_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object* v_xs_246_, lean_object* v_v_247_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(0u);
v___x_249_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_246_, v_v_247_, v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object* v_xs_250_, lean_object* v_v_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_250_, v_v_251_);
lean_dec_ref(v_v_251_);
lean_dec_ref(v_xs_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object* v_xs_253_, lean_object* v_v_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_253_, v_v_254_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v___x_256_; 
v___x_256_ = lean_box(0);
return v___x_256_;
}
else
{
lean_object* v_val_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
v_val_257_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_255_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_val_257_);
lean_dec(v___x_255_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_val_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object* v_xs_265_, lean_object* v_v_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_xs_265_, v_v_266_);
lean_dec_ref(v_v_266_);
lean_dec_ref(v_xs_265_);
return v_res_267_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object* v_a_268_, lean_object* v_as_269_, size_t v_i_270_, size_t v_stop_271_){
_start:
{
uint8_t v___x_272_; 
v___x_272_ = lean_usize_dec_eq(v_i_270_, v_stop_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_array_uget_borrowed(v_as_269_, v_i_270_);
v___x_274_ = lean_nat_dec_eq(v_a_268_, v___x_273_);
if (v___x_274_ == 0)
{
size_t v___x_275_; size_t v___x_276_; 
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_add(v_i_270_, v___x_275_);
v_i_270_ = v___x_276_;
goto _start;
}
else
{
return v___x_274_;
}
}
else
{
uint8_t v___x_278_; 
v___x_278_ = 0;
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object* v_a_279_, lean_object* v_as_280_, lean_object* v_i_281_, lean_object* v_stop_282_){
_start:
{
size_t v_i_boxed_283_; size_t v_stop_boxed_284_; uint8_t v_res_285_; lean_object* v_r_286_; 
v_i_boxed_283_ = lean_unbox_usize(v_i_281_);
lean_dec(v_i_281_);
v_stop_boxed_284_ = lean_unbox_usize(v_stop_282_);
lean_dec(v_stop_282_);
v_res_285_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_279_, v_as_280_, v_i_boxed_283_, v_stop_boxed_284_);
lean_dec_ref(v_as_280_);
lean_dec(v_a_279_);
v_r_286_ = lean_box(v_res_285_);
return v_r_286_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object* v_as_287_, lean_object* v_a_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_array_get_size(v_as_287_);
v___x_291_ = lean_nat_dec_lt(v___x_289_, v___x_290_);
if (v___x_291_ == 0)
{
return v___x_291_;
}
else
{
if (v___x_291_ == 0)
{
return v___x_291_;
}
else
{
size_t v___x_292_; size_t v___x_293_; uint8_t v___x_294_; 
v___x_292_ = ((size_t)0ULL);
v___x_293_ = lean_usize_of_nat(v___x_290_);
v___x_294_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_288_, v_as_287_, v___x_292_, v___x_293_);
return v___x_294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object* v_as_295_, lean_object* v_a_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_as_295_, v_a_296_);
lean_dec(v_a_296_);
lean_dec_ref(v_as_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object* v_fvars_299_, lean_object* v_e_300_, lean_object* v_deps_301_){
_start:
{
lean_object* v_d_303_; lean_object* v_b_304_; 
switch(lean_obj_tag(v_e_300_))
{
case 5:
{
lean_object* v_fn_308_; lean_object* v_arg_309_; uint8_t v___x_310_; 
v_fn_308_ = lean_ctor_get(v_e_300_, 0);
v_arg_309_ = lean_ctor_get(v_e_300_, 1);
v___x_310_ = l_Lean_Expr_hasFVar(v_e_300_);
if (v___x_310_ == 0)
{
return v_deps_301_;
}
else
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_fn_308_, v_deps_301_);
v_e_300_ = v_arg_309_;
v_deps_301_ = v___x_311_;
goto _start;
}
}
case 7:
{
lean_object* v_binderType_313_; lean_object* v_body_314_; 
v_binderType_313_ = lean_ctor_get(v_e_300_, 1);
v_body_314_ = lean_ctor_get(v_e_300_, 2);
v_d_303_ = v_binderType_313_;
v_b_304_ = v_body_314_;
goto v___jp_302_;
}
case 6:
{
lean_object* v_binderType_315_; lean_object* v_body_316_; 
v_binderType_315_ = lean_ctor_get(v_e_300_, 1);
v_body_316_ = lean_ctor_get(v_e_300_, 2);
v_d_303_ = v_binderType_315_;
v_b_304_ = v_body_316_;
goto v___jp_302_;
}
case 8:
{
lean_object* v_type_317_; lean_object* v_value_318_; lean_object* v_body_319_; uint8_t v___x_320_; 
v_type_317_ = lean_ctor_get(v_e_300_, 1);
v_value_318_ = lean_ctor_get(v_e_300_, 2);
v_body_319_ = lean_ctor_get(v_e_300_, 3);
v___x_320_ = l_Lean_Expr_hasFVar(v_e_300_);
if (v___x_320_ == 0)
{
return v_deps_301_;
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_type_317_, v_deps_301_);
v___x_322_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_value_318_, v___x_321_);
v_e_300_ = v_body_319_;
v_deps_301_ = v___x_322_;
goto _start;
}
}
case 11:
{
lean_object* v_struct_324_; 
v_struct_324_ = lean_ctor_get(v_e_300_, 2);
v_e_300_ = v_struct_324_;
goto _start;
}
case 10:
{
lean_object* v_expr_326_; 
v_expr_326_ = lean_ctor_get(v_e_300_, 1);
v_e_300_ = v_expr_326_;
goto _start;
}
case 1:
{
lean_object* v___x_328_; 
v___x_328_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_299_, v_e_300_);
if (lean_obj_tag(v___x_328_) == 0)
{
return v_deps_301_;
}
else
{
lean_object* v_val_329_; uint8_t v___x_330_; 
v_val_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_val_329_);
lean_dec_ref_known(v___x_328_, 1);
v___x_330_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_deps_301_, v_val_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
v___x_331_ = lean_array_push(v_deps_301_, v_val_329_);
return v___x_331_;
}
else
{
lean_dec(v_val_329_);
return v_deps_301_;
}
}
}
default: 
{
return v_deps_301_;
}
}
v___jp_302_:
{
uint8_t v___x_305_; 
v___x_305_ = l_Lean_Expr_hasFVar(v_e_300_);
if (v___x_305_ == 0)
{
return v_deps_301_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_299_, v_d_303_, v_deps_301_);
v_e_300_ = v_b_304_;
v_deps_301_ = v___x_306_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object* v_fvars_332_, lean_object* v_e_333_, lean_object* v_deps_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_332_, v_e_333_, v_deps_334_);
lean_dec_ref(v_e_333_);
lean_dec_ref(v_fvars_332_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object* v_hi_336_, lean_object* v_pivot_337_, lean_object* v_as_338_, lean_object* v_i_339_, lean_object* v_k_340_){
_start:
{
uint8_t v___x_341_; 
v___x_341_ = lean_nat_dec_lt(v_k_340_, v_hi_336_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec(v_k_340_);
v___x_342_ = lean_array_fswap(v_as_338_, v_i_339_, v_hi_336_);
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v_i_339_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_array_fget_borrowed(v_as_338_, v_k_340_);
v___x_345_ = lean_nat_dec_lt(v___x_344_, v_pivot_337_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_add(v_k_340_, v___x_346_);
lean_dec(v_k_340_);
v_k_340_ = v___x_347_;
goto _start;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_349_ = lean_array_fswap(v_as_338_, v_i_339_, v_k_340_);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_nat_add(v_i_339_, v___x_350_);
lean_dec(v_i_339_);
v___x_352_ = lean_nat_add(v_k_340_, v___x_350_);
lean_dec(v_k_340_);
v_as_338_ = v___x_349_;
v_i_339_ = v___x_351_;
v_k_340_ = v___x_352_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object* v_hi_354_, lean_object* v_pivot_355_, lean_object* v_as_356_, lean_object* v_i_357_, lean_object* v_k_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_354_, v_pivot_355_, v_as_356_, v_i_357_, v_k_358_);
lean_dec(v_pivot_355_);
lean_dec(v_hi_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object* v_n_360_, lean_object* v_as_361_, lean_object* v_lo_362_, lean_object* v_hi_363_){
_start:
{
lean_object* v___y_365_; uint8_t v___x_375_; 
v___x_375_ = lean_nat_dec_lt(v_lo_362_, v_hi_363_);
if (v___x_375_ == 0)
{
lean_dec(v_lo_362_);
return v_as_361_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_mid_378_; lean_object* v___y_380_; lean_object* v___y_386_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_376_ = lean_nat_add(v_lo_362_, v_hi_363_);
v___x_377_ = lean_unsigned_to_nat(1u);
v_mid_378_ = lean_nat_shiftr(v___x_376_, v___x_377_);
lean_dec(v___x_376_);
v___x_391_ = lean_array_fget_borrowed(v_as_361_, v_mid_378_);
v___x_392_ = lean_array_fget_borrowed(v_as_361_, v_lo_362_);
v___x_393_ = lean_nat_dec_lt(v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
v___y_386_ = v_as_361_;
goto v___jp_385_;
}
else
{
lean_object* v___x_394_; 
v___x_394_ = lean_array_fswap(v_as_361_, v_lo_362_, v_mid_378_);
v___y_386_ = v___x_394_;
goto v___jp_385_;
}
v___jp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_381_ = lean_array_fget_borrowed(v___y_380_, v_mid_378_);
v___x_382_ = lean_array_fget_borrowed(v___y_380_, v_hi_363_);
v___x_383_ = lean_nat_dec_lt(v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec(v_mid_378_);
v___y_365_ = v___y_380_;
goto v___jp_364_;
}
else
{
lean_object* v___x_384_; 
v___x_384_ = lean_array_fswap(v___y_380_, v_mid_378_, v_hi_363_);
lean_dec(v_mid_378_);
v___y_365_ = v___x_384_;
goto v___jp_364_;
}
}
v___jp_385_:
{
lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_387_ = lean_array_fget_borrowed(v___y_386_, v_hi_363_);
v___x_388_ = lean_array_fget_borrowed(v___y_386_, v_lo_362_);
v___x_389_ = lean_nat_dec_lt(v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
v___y_380_ = v___y_386_;
goto v___jp_379_;
}
else
{
lean_object* v___x_390_; 
v___x_390_ = lean_array_fswap(v___y_386_, v_lo_362_, v_hi_363_);
v___y_380_ = v___x_390_;
goto v___jp_379_;
}
}
}
v___jp_364_:
{
lean_object* v_pivot_366_; lean_object* v___x_367_; lean_object* v_fst_368_; lean_object* v_snd_369_; uint8_t v___x_370_; 
v_pivot_366_ = lean_array_fget(v___y_365_, v_hi_363_);
lean_inc_n(v_lo_362_, 2);
v___x_367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_363_, v_pivot_366_, v___y_365_, v_lo_362_, v_lo_362_);
lean_dec(v_pivot_366_);
v_fst_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_fst_368_);
v_snd_369_ = lean_ctor_get(v___x_367_, 1);
lean_inc(v_snd_369_);
lean_dec_ref(v___x_367_);
v___x_370_ = lean_nat_dec_le(v_hi_363_, v_fst_368_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_371_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_360_, v_snd_369_, v_lo_362_, v_fst_368_);
v___x_372_ = lean_unsigned_to_nat(1u);
v___x_373_ = lean_nat_add(v_fst_368_, v___x_372_);
lean_dec(v_fst_368_);
v_as_361_ = v___x_371_;
v_lo_362_ = v___x_373_;
goto _start;
}
else
{
lean_dec(v_fst_368_);
lean_dec(v_lo_362_);
return v_snd_369_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object* v_n_395_, lean_object* v_as_396_, lean_object* v_lo_397_, lean_object* v_hi_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_395_, v_as_396_, v_lo_397_, v_hi_398_);
lean_dec(v_hi_398_);
lean_dec(v_n_395_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object* v_fvars_402_, lean_object* v_e_403_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v_deps_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0));
v_deps_406_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_402_, v_e_403_, v___x_405_);
v___x_407_ = lean_array_get_size(v_deps_406_);
v___x_408_ = lean_nat_dec_eq(v___x_407_, v___x_404_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___y_412_; uint8_t v___x_416_; 
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = lean_nat_sub(v___x_407_, v___x_409_);
v___x_416_ = lean_nat_dec_le(v___x_404_, v___x_410_);
if (v___x_416_ == 0)
{
lean_inc(v___x_410_);
v___y_412_ = v___x_410_;
goto v___jp_411_;
}
else
{
v___y_412_ = v___x_404_;
goto v___jp_411_;
}
v___jp_411_:
{
uint8_t v___x_413_; 
v___x_413_ = lean_nat_dec_le(v___y_412_, v___x_410_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; 
lean_dec(v___x_410_);
lean_inc(v___y_412_);
v___x_414_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_407_, v_deps_406_, v___y_412_, v___y_412_);
lean_dec(v___y_412_);
return v___x_414_;
}
else
{
lean_object* v___x_415_; 
v___x_415_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_407_, v_deps_406_, v___y_412_, v___x_410_);
lean_dec(v___x_410_);
return v___x_415_;
}
}
}
else
{
return v_deps_406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object* v_fvars_417_, lean_object* v_e_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_417_, v_e_418_);
lean_dec_ref(v_e_418_);
lean_dec_ref(v_fvars_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object* v_n_420_, lean_object* v_as_421_, lean_object* v_lo_422_, lean_object* v_hi_423_, lean_object* v_w_424_, lean_object* v_hlo_425_, lean_object* v_hhi_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_420_, v_as_421_, v_lo_422_, v_hi_423_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object* v_n_428_, lean_object* v_as_429_, lean_object* v_lo_430_, lean_object* v_hi_431_, lean_object* v_w_432_, lean_object* v_hlo_433_, lean_object* v_hhi_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(v_n_428_, v_as_429_, v_lo_430_, v_hi_431_, v_w_432_, v_hlo_433_, v_hhi_434_);
lean_dec(v_hi_431_);
lean_dec(v_n_428_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object* v_n_436_, lean_object* v_lo_437_, lean_object* v_hi_438_, lean_object* v_hhi_439_, lean_object* v_pivot_440_, lean_object* v_as_441_, lean_object* v_i_442_, lean_object* v_k_443_, lean_object* v_ilo_444_, lean_object* v_ik_445_, lean_object* v_w_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_438_, v_pivot_440_, v_as_441_, v_i_442_, v_k_443_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object* v_n_448_, lean_object* v_lo_449_, lean_object* v_hi_450_, lean_object* v_hhi_451_, lean_object* v_pivot_452_, lean_object* v_as_453_, lean_object* v_i_454_, lean_object* v_k_455_, lean_object* v_ilo_456_, lean_object* v_ik_457_, lean_object* v_w_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(v_n_448_, v_lo_449_, v_hi_450_, v_hhi_451_, v_pivot_452_, v_as_453_, v_i_454_, v_k_455_, v_ilo_456_, v_ik_457_, v_w_458_);
lean_dec(v_pivot_452_);
lean_dec(v_hi_450_);
lean_dec(v_lo_449_);
lean_dec(v_n_448_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object* v_backDeps_460_, size_t v_sz_461_, size_t v_i_462_, lean_object* v_bs_463_){
_start:
{
uint8_t v___x_464_; 
v___x_464_ = lean_usize_dec_lt(v_i_462_, v_sz_461_);
if (v___x_464_ == 0)
{
return v_bs_463_;
}
else
{
lean_object* v_v_465_; uint8_t v_binderInfo_466_; uint8_t v_hasFwdDeps_467_; lean_object* v_backDeps_468_; uint8_t v_isProp_469_; uint8_t v_isDecInst_470_; uint8_t v_isInstance_471_; uint8_t v_higherOrderOutParam_472_; uint8_t v_dependsOnHigherOrderOutParam_473_; lean_object* v___x_474_; lean_object* v_bs_x27_475_; lean_object* v___y_477_; 
v_v_465_ = lean_array_uget(v_bs_463_, v_i_462_);
v_binderInfo_466_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1);
v_hasFwdDeps_467_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 1);
v_backDeps_468_ = lean_ctor_get(v_v_465_, 0);
v_isProp_469_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 2);
v_isDecInst_470_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 3);
v_isInstance_471_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 4);
v_higherOrderOutParam_472_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 5);
v_dependsOnHigherOrderOutParam_473_ = lean_ctor_get_uint8(v_v_465_, sizeof(void*)*1 + 6);
v___x_474_ = lean_unsigned_to_nat(0u);
v_bs_x27_475_ = lean_array_uset(v_bs_463_, v_i_462_, v___x_474_);
if (v_hasFwdDeps_467_ == 0)
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_usize_to_nat(v_i_462_);
v___x_483_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_backDeps_460_, v___x_482_);
lean_dec(v___x_482_);
if (v___x_483_ == 0)
{
v___y_477_ = v_v_465_;
goto v___jp_476_;
}
else
{
lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
lean_inc_ref(v_backDeps_468_);
v_isSharedCheck_490_ = !lean_is_exclusive(v_v_465_);
if (v_isSharedCheck_490_ == 0)
{
lean_object* v_unused_491_; 
v_unused_491_ = lean_ctor_get(v_v_465_, 0);
lean_dec(v_unused_491_);
v___x_485_ = v_v_465_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_dec(v_v_465_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_backDeps_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1, v_binderInfo_466_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 2, v_isProp_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 3, v_isDecInst_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 4, v_isInstance_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 5, v_higherOrderOutParam_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_489_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_473_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*1 + 1, v___x_483_);
v___y_477_ = v___x_488_;
goto v___jp_476_;
}
}
}
}
else
{
v___y_477_ = v_v_465_;
goto v___jp_476_;
}
v___jp_476_:
{
size_t v___x_478_; size_t v___x_479_; lean_object* v___x_480_; 
v___x_478_ = ((size_t)1ULL);
v___x_479_ = lean_usize_add(v_i_462_, v___x_478_);
v___x_480_ = lean_array_uset(v_bs_x27_475_, v_i_462_, v___y_477_);
v_i_462_ = v___x_479_;
v_bs_463_ = v___x_480_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object* v_backDeps_492_, lean_object* v_sz_493_, lean_object* v_i_494_, lean_object* v_bs_495_){
_start:
{
size_t v_sz_boxed_496_; size_t v_i_boxed_497_; lean_object* v_res_498_; 
v_sz_boxed_496_ = lean_unbox_usize(v_sz_493_);
lean_dec(v_sz_493_);
v_i_boxed_497_ = lean_unbox_usize(v_i_494_);
lean_dec(v_i_494_);
v_res_498_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_492_, v_sz_boxed_496_, v_i_boxed_497_, v_bs_495_);
lean_dec_ref(v_backDeps_492_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object* v_pinfo_499_, lean_object* v_backDeps_500_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_501_ = lean_array_get_size(v_backDeps_500_);
v___x_502_ = lean_unsigned_to_nat(0u);
v___x_503_ = lean_nat_dec_eq(v___x_501_, v___x_502_);
if (v___x_503_ == 0)
{
size_t v_sz_504_; size_t v___x_505_; lean_object* v___x_506_; 
v_sz_504_ = lean_array_size(v_pinfo_499_);
v___x_505_ = ((size_t)0ULL);
v___x_506_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_500_, v_sz_504_, v___x_505_, v_pinfo_499_);
return v___x_506_;
}
else
{
return v_pinfo_499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object* v_pinfo_507_, lean_object* v_backDeps_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_pinfo_507_, v_backDeps_508_);
lean_dec_ref(v_backDeps_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object* v_backDeps_510_, lean_object* v_as_511_, size_t v_sz_512_, size_t v_i_513_, lean_object* v_bs_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_510_, v_sz_512_, v_i_513_, v_bs_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object* v_backDeps_516_, lean_object* v_as_517_, lean_object* v_sz_518_, lean_object* v_i_519_, lean_object* v_bs_520_){
_start:
{
size_t v_sz_boxed_521_; size_t v_i_boxed_522_; lean_object* v_res_523_; 
v_sz_boxed_521_ = lean_unbox_usize(v_sz_518_);
lean_dec(v_sz_518_);
v_i_boxed_522_ = lean_unbox_usize(v_i_519_);
lean_dec(v_i_519_);
v_res_523_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(v_backDeps_516_, v_as_517_, v_sz_boxed_521_, v_i_boxed_522_, v_bs_520_);
lean_dec_ref(v_as_517_);
lean_dec_ref(v_backDeps_516_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object* v_k_524_, lean_object* v_b_525_, lean_object* v_c_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; 
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
v___x_532_ = lean_apply_7(v_k_524_, v_b_525_, v_c_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, lean_box(0));
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object* v_k_533_, lean_object* v_b_534_, lean_object* v_c_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(v_k_533_, v_b_534_, v_c_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object* v_type_542_, lean_object* v_k_543_, uint8_t v_cleanupAnnotations_544_, uint8_t v_whnfType_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v___f_551_; lean_object* v___x_552_; 
v___f_551_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_551_, 0, v_k_543_);
v___x_552_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_542_, v___f_551_, v_cleanupAnnotations_544_, v_whnfType_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_a_561_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_552_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_552_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object* v_type_569_, lean_object* v_k_570_, lean_object* v_cleanupAnnotations_571_, lean_object* v_whnfType_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_578_; uint8_t v_whnfType_boxed_579_; lean_object* v_res_580_; 
v_cleanupAnnotations_boxed_578_ = lean_unbox(v_cleanupAnnotations_571_);
v_whnfType_boxed_579_ = lean_unbox(v_whnfType_572_);
v_res_580_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_569_, v_k_570_, v_cleanupAnnotations_boxed_578_, v_whnfType_boxed_579_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object* v_00_u03b1_581_, lean_object* v_type_582_, lean_object* v_k_583_, uint8_t v_cleanupAnnotations_584_, uint8_t v_whnfType_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_582_, v_k_583_, v_cleanupAnnotations_584_, v_whnfType_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object* v_00_u03b1_592_, lean_object* v_type_593_, lean_object* v_k_594_, lean_object* v_cleanupAnnotations_595_, lean_object* v_whnfType_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_602_; uint8_t v_whnfType_boxed_603_; lean_object* v_res_604_; 
v_cleanupAnnotations_boxed_602_ = lean_unbox(v_cleanupAnnotations_595_);
v_whnfType_boxed_603_ = lean_unbox(v_whnfType_596_);
v_res_604_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(v_00_u03b1_592_, v_type_593_, v_k_594_, v_cleanupAnnotations_boxed_602_, v_whnfType_boxed_603_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object* v_msg_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v___f_612_; lean_object* v___x_9819__overap_613_; lean_object* v___x_614_; 
v___f_612_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_9819__overap_613_ = lean_panic_fn_borrowed(v___f_612_, v_msg_606_);
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
lean_inc(v___y_608_);
lean_inc_ref(v___y_607_);
v___x_614_ = lean_apply_5(v___x_9819__overap_613_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, lean_box(0));
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object* v_msg_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v_msg_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object* v_type_622_, lean_object* v_maxFVars_x3f_623_, lean_object* v_k_624_, uint8_t v_cleanupAnnotations_625_, uint8_t v_whnfType_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v___f_632_; lean_object* v___x_633_; 
v___f_632_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_632_, 0, v_k_624_);
v___x_633_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_622_, v_maxFVars_x3f_623_, v___f_632_, v_cleanupAnnotations_625_, v_whnfType_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
v_a_642_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_633_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_633_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object* v_type_650_, lean_object* v_maxFVars_x3f_651_, lean_object* v_k_652_, lean_object* v_cleanupAnnotations_653_, lean_object* v_whnfType_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_660_; uint8_t v_whnfType_boxed_661_; lean_object* v_res_662_; 
v_cleanupAnnotations_boxed_660_ = lean_unbox(v_cleanupAnnotations_653_);
v_whnfType_boxed_661_ = lean_unbox(v_whnfType_654_);
v_res_662_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_650_, v_maxFVars_x3f_651_, v_k_652_, v_cleanupAnnotations_boxed_660_, v_whnfType_boxed_661_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object* v_00_u03b1_663_, lean_object* v_type_664_, lean_object* v_maxFVars_x3f_665_, lean_object* v_k_666_, uint8_t v_cleanupAnnotations_667_, uint8_t v_whnfType_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_664_, v_maxFVars_x3f_665_, v_k_666_, v_cleanupAnnotations_667_, v_whnfType_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object* v_00_u03b1_675_, lean_object* v_type_676_, lean_object* v_maxFVars_x3f_677_, lean_object* v_k_678_, lean_object* v_cleanupAnnotations_679_, lean_object* v_whnfType_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_686_; uint8_t v_whnfType_boxed_687_; lean_object* v_res_688_; 
v_cleanupAnnotations_boxed_686_ = lean_unbox(v_cleanupAnnotations_679_);
v_whnfType_boxed_687_ = lean_unbox(v_whnfType_680_);
v_res_688_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(v_00_u03b1_675_, v_type_676_, v_maxFVars_x3f_677_, v_k_678_, v_cleanupAnnotations_boxed_686_, v_whnfType_boxed_687_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object* v_upperBound_689_, lean_object* v_val_690_, lean_object* v___x_691_, lean_object* v_fvars_692_, uint8_t v___y_693_, lean_object* v_a_694_, lean_object* v_b_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_a_702_; uint8_t v___x_706_; 
v___x_706_ = lean_nat_dec_lt(v_a_694_, v_upperBound_689_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; 
lean_dec(v_a_694_);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v_b_695_);
return v___x_707_;
}
else
{
lean_object* v_fst_708_; lean_object* v_snd_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_772_; 
v_fst_708_ = lean_ctor_get(v_b_695_, 0);
v_snd_709_ = lean_ctor_get(v_b_695_, 1);
v_isSharedCheck_772_ = !lean_is_exclusive(v_b_695_);
if (v_isSharedCheck_772_ == 0)
{
v___x_711_ = v_b_695_;
v_isShared_712_ = v_isSharedCheck_772_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_snd_709_);
lean_inc(v_fst_708_);
lean_dec(v_b_695_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_772_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
uint8_t v___x_713_; 
v___x_713_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_val_690_, v_a_694_);
if (v___x_713_ == 0)
{
lean_object* v___x_715_; 
if (v_isShared_712_ == 0)
{
v___x_715_ = v___x_711_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_fst_708_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_snd_709_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
v_a_702_ = v___x_715_;
goto v___jp_701_;
}
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = lean_array_fget_borrowed(v___x_691_, v_a_694_);
v___x_718_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_692_, v___x_717_);
if (lean_obj_tag(v___x_718_) == 1)
{
lean_object* v_val_719_; lean_object* v___x_720_; 
v_val_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_val_719_);
lean_dec_ref_known(v___x_718_, 1);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
lean_inc(v___y_697_);
lean_inc_ref(v___y_696_);
lean_inc(v___x_717_);
v___x_720_ = lean_infer_type(v___x_717_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; lean_object* v___x_722_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_a_721_);
lean_dec_ref_known(v___x_720_, 1);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
lean_inc(v___y_697_);
lean_inc_ref(v___y_696_);
v___x_722_ = lean_whnf(v_a_721_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___y_725_; uint8_t v___x_731_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_a_723_);
lean_dec_ref_known(v___x_722_, 1);
v___x_731_ = l_Lean_Expr_isForall(v_a_723_);
lean_dec(v_a_723_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_dec(v_val_719_);
lean_del_object(v___x_711_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v_fst_708_);
lean_ctor_set(v___x_732_, 1, v_snd_709_);
v_a_702_ = v___x_732_;
goto v___jp_701_;
}
else
{
lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_733_ = lean_array_get_size(v_fst_708_);
v___x_734_ = lean_nat_dec_lt(v_val_719_, v___x_733_);
if (v___x_734_ == 0)
{
lean_dec(v_val_719_);
v___y_725_ = v_fst_708_;
goto v___jp_724_;
}
else
{
lean_object* v_v_735_; uint8_t v_binderInfo_736_; uint8_t v_hasFwdDeps_737_; lean_object* v_backDeps_738_; uint8_t v_isProp_739_; uint8_t v_isDecInst_740_; uint8_t v_isInstance_741_; uint8_t v_dependsOnHigherOrderOutParam_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_752_; 
v_v_735_ = lean_array_fget(v_fst_708_, v_val_719_);
v_binderInfo_736_ = lean_ctor_get_uint8(v_v_735_, sizeof(void*)*1);
v_hasFwdDeps_737_ = lean_ctor_get_uint8(v_v_735_, sizeof(void*)*1 + 1);
v_backDeps_738_ = lean_ctor_get(v_v_735_, 0);
v_isProp_739_ = lean_ctor_get_uint8(v_v_735_, sizeof(void*)*1 + 2);
v_isDecInst_740_ = lean_ctor_get_uint8(v_v_735_, sizeof(void*)*1 + 3);
v_isInstance_741_ = lean_ctor_get_uint8(v_v_735_, sizeof(void*)*1 + 4);
v_dependsOnHigherOrderOutParam_742_ = lean_ctor_get_uint8(v_v_735_, sizeof(void*)*1 + 6);
v_isSharedCheck_752_ = !lean_is_exclusive(v_v_735_);
if (v_isSharedCheck_752_ == 0)
{
v___x_744_ = v_v_735_;
v_isShared_745_ = v_isSharedCheck_752_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_backDeps_738_);
lean_dec(v_v_735_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_752_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v_xs_x27_747_; lean_object* v___x_749_; 
v___x_746_ = lean_box(0);
v_xs_x27_747_ = lean_array_fset(v_fst_708_, v_val_719_, v___x_746_);
if (v_isShared_745_ == 0)
{
v___x_749_ = v___x_744_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_backDeps_738_);
lean_ctor_set_uint8(v_reuseFailAlloc_751_, sizeof(void*)*1, v_binderInfo_736_);
lean_ctor_set_uint8(v_reuseFailAlloc_751_, sizeof(void*)*1 + 1, v_hasFwdDeps_737_);
lean_ctor_set_uint8(v_reuseFailAlloc_751_, sizeof(void*)*1 + 2, v_isProp_739_);
lean_ctor_set_uint8(v_reuseFailAlloc_751_, sizeof(void*)*1 + 3, v_isDecInst_740_);
lean_ctor_set_uint8(v_reuseFailAlloc_751_, sizeof(void*)*1 + 4, v_isInstance_741_);
lean_ctor_set_uint8(v_reuseFailAlloc_751_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_742_);
v___x_749_ = v_reuseFailAlloc_751_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_750_; 
lean_ctor_set_uint8(v___x_749_, sizeof(void*)*1 + 5, v___y_693_);
v___x_750_ = lean_array_fset(v_xs_x27_747_, v_val_719_, v___x_749_);
lean_dec(v_val_719_);
v___y_725_ = v___x_750_;
goto v___jp_724_;
}
}
}
}
v___jp_724_:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; 
v___x_726_ = l_Lean_Expr_fvarId_x21(v___x_717_);
v___x_727_ = l_Lean_FVarIdSet_insert(v_snd_709_, v___x_726_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_727_);
lean_ctor_set(v___x_711_, 0, v___y_725_);
v___x_729_ = v___x_711_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___y_725_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
v_a_702_ = v___x_729_;
goto v___jp_701_;
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec(v_val_719_);
lean_del_object(v___x_711_);
lean_dec(v_snd_709_);
lean_dec(v_fst_708_);
lean_dec(v_a_694_);
v_a_753_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_722_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_722_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec(v_val_719_);
lean_del_object(v___x_711_);
lean_dec(v_snd_709_);
lean_dec(v_fst_708_);
lean_dec(v_a_694_);
v_a_761_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_720_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_720_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v___x_770_; 
lean_dec(v___x_718_);
if (v_isShared_712_ == 0)
{
v___x_770_ = v___x_711_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_fst_708_);
lean_ctor_set(v_reuseFailAlloc_771_, 1, v_snd_709_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
v_a_702_ = v___x_770_;
goto v___jp_701_;
}
}
}
}
}
v___jp_701_:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_unsigned_to_nat(1u);
v___x_704_ = lean_nat_add(v_a_694_, v___x_703_);
lean_dec(v_a_694_);
v_a_694_ = v___x_704_;
v_b_695_ = v_a_702_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object* v_upperBound_773_, lean_object* v_val_774_, lean_object* v___x_775_, lean_object* v_fvars_776_, lean_object* v___y_777_, lean_object* v_a_778_, lean_object* v_b_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
uint8_t v___y_12187__boxed_785_; lean_object* v_res_786_; 
v___y_12187__boxed_785_ = lean_unbox(v___y_777_);
v_res_786_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_773_, v_val_774_, v___x_775_, v_fvars_776_, v___y_12187__boxed_785_, v_a_778_, v_b_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec_ref(v_fvars_776_);
lean_dec_ref(v___x_775_);
lean_dec_ref(v_val_774_);
lean_dec(v_upperBound_773_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object* v_x_790_, lean_object* v_type_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v___x_797_; uint8_t v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_797_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1));
v___x_798_ = l_Lean_Expr_isAppOf(v_type_791_, v___x_797_);
v___x_799_ = lean_box(v___x_798_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object* v_x_801_, lean_object* v_type_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(v_x_801_, v_type_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec_ref(v_type_802_);
lean_dec_ref(v_x_801_);
return v_res_808_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object* v_k_809_, lean_object* v_t_810_){
_start:
{
if (lean_obj_tag(v_t_810_) == 0)
{
lean_object* v_k_811_; lean_object* v_l_812_; lean_object* v_r_813_; uint8_t v___x_814_; 
v_k_811_ = lean_ctor_get(v_t_810_, 1);
v_l_812_ = lean_ctor_get(v_t_810_, 3);
v_r_813_ = lean_ctor_get(v_t_810_, 4);
v___x_814_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_809_, v_k_811_);
switch(v___x_814_)
{
case 0:
{
v_t_810_ = v_l_812_;
goto _start;
}
case 1:
{
uint8_t v___x_816_; 
v___x_816_ = 1;
return v___x_816_;
}
default: 
{
v_t_810_ = v_r_813_;
goto _start;
}
}
}
else
{
uint8_t v___x_818_; 
v___x_818_ = 0;
return v___x_818_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object* v_k_819_, lean_object* v_t_820_){
_start:
{
uint8_t v_res_821_; lean_object* v_r_822_; 
v_res_821_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_819_, v_t_820_);
lean_dec(v_t_820_);
lean_dec(v_k_819_);
v_r_822_ = lean_box(v_res_821_);
return v_r_822_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object* v_snd_823_, lean_object* v_e_824_){
_start:
{
uint8_t v___x_825_; 
v___x_825_ = l_Lean_Expr_isFVar(v_e_824_);
if (v___x_825_ == 0)
{
return v___x_825_;
}
else
{
lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_826_ = l_Lean_Expr_fvarId_x21(v_e_824_);
v___x_827_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v___x_826_, v_snd_823_);
lean_dec(v___x_826_);
return v___x_827_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object* v_snd_828_, lean_object* v_e_829_){
_start:
{
uint8_t v_res_830_; lean_object* v_r_831_; 
v_res_830_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(v_snd_828_, v_e_829_);
lean_dec_ref(v_e_829_);
lean_dec(v_snd_828_);
v_r_831_ = lean_box(v_res_830_);
return v_r_831_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_833_; lean_object* v_dummy_834_; 
v___x_833_ = lean_box(0);
v_dummy_834_ = l_Lean_Expr_sort___override(v___x_833_);
return v_dummy_834_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_838_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_839_ = lean_unsigned_to_nat(47u);
v___x_840_ = lean_unsigned_to_nat(121u);
v___x_841_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3));
v___x_842_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2));
v___x_843_ = l_mkPanicMessageWithDecl(v___x_842_, v___x_841_, v___x_840_, v___x_839_, v___x_838_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object* v_upperBound_844_, lean_object* v_fvars_845_, lean_object* v_a_846_, lean_object* v_b_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_a_854_; uint8_t v___x_858_; 
v___x_858_ = lean_nat_dec_lt(v_a_846_, v_upperBound_844_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; 
lean_dec(v_a_846_);
v___x_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_859_, 0, v_b_847_);
return v___x_859_;
}
else
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = lean_array_fget_borrowed(v_fvars_845_, v_a_846_);
v___x_861_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_860_, v___y_848_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v_fst_863_; lean_object* v_snd_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_973_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_861_, 1);
v_fst_863_ = lean_ctor_get(v_b_847_, 0);
v_snd_864_ = lean_ctor_get(v_b_847_, 1);
v_isSharedCheck_973_ = !lean_is_exclusive(v_b_847_);
if (v_isSharedCheck_973_ == 0)
{
v___x_866_ = v_b_847_;
v_isShared_867_ = v_isSharedCheck_973_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_snd_864_);
lean_inc(v_fst_863_);
lean_dec(v_b_847_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_973_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___f_868_; lean_object* v___x_869_; lean_object* v___x_870_; uint8_t v___y_872_; lean_object* v___y_873_; uint8_t v___y_874_; uint8_t v___y_954_; 
v___f_868_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0));
v___x_869_ = l_Lean_LocalDecl_type(v_a_862_);
v___x_870_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_845_, v___x_869_);
if (lean_obj_tag(v_snd_864_) == 0)
{
lean_object* v___f_969_; lean_object* v___x_970_; 
lean_inc_ref(v_snd_864_);
v___f_969_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_969_, 0, v_snd_864_);
v___x_970_ = lean_find_expr(v___f_969_, v___x_869_);
lean_dec_ref(v___f_969_);
if (lean_obj_tag(v___x_970_) == 0)
{
uint8_t v___x_971_; 
v___x_971_ = 0;
v___y_954_ = v___x_971_;
goto v___jp_953_;
}
else
{
lean_dec_ref_known(v___x_970_, 1);
v___y_954_ = v___x_858_;
goto v___jp_953_;
}
}
else
{
uint8_t v___x_972_; 
v___x_972_ = 0;
v___y_954_ = v___x_972_;
goto v___jp_953_;
}
v___jp_871_:
{
lean_object* v___x_875_; 
lean_inc_ref(v___x_869_);
v___x_875_ = l_Lean_Meta_isProp(v___x_869_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; uint8_t v___x_877_; lean_object* v___x_878_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_875_, 1);
v___x_877_ = 0;
lean_inc_ref(v___x_869_);
v___x_878_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v___x_869_, v___f_868_, v___x_877_, v___x_877_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_880_; uint8_t v___x_881_; lean_object* v___x_882_; uint8_t v___x_883_; uint8_t v___x_884_; lean_object* v___x_885_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_878_, 1);
v___x_880_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_863_, v___x_870_);
v___x_881_ = l_Lean_LocalDecl_binderInfo(v_a_862_);
lean_dec(v_a_862_);
v___x_882_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v___x_882_, 0, v___x_870_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1, v___x_881_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 1, v___x_877_);
v___x_883_ = lean_unbox(v_a_876_);
lean_dec(v_a_876_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 2, v___x_883_);
v___x_884_ = lean_unbox(v_a_879_);
lean_dec(v_a_879_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 3, v___x_884_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 4, v___y_874_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 5, v___x_877_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1 + 6, v___y_872_);
v___x_885_ = lean_array_push(v___x_880_, v___x_882_);
if (v___y_874_ == 0)
{
lean_object* v___x_887_; 
lean_dec(v___y_873_);
lean_dec_ref(v___x_869_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_885_);
v___x_887_ = v___x_866_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_snd_864_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
v_a_854_ = v___x_887_;
goto v___jp_853_;
}
}
else
{
if (lean_obj_tag(v___y_873_) == 1)
{
lean_object* v_val_889_; lean_object* v___x_890_; lean_object* v_env_891_; lean_object* v___x_892_; 
v_val_889_ = lean_ctor_get(v___y_873_, 0);
lean_inc(v_val_889_);
lean_dec_ref_known(v___y_873_, 1);
v___x_890_ = lean_st_ref_get(v___y_851_);
v_env_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc_ref(v_env_891_);
lean_dec(v___x_890_);
v___x_892_ = l_Lean_getOutParamPositions_x3f(v_env_891_, v_val_889_);
lean_dec(v_val_889_);
if (lean_obj_tag(v___x_892_) == 1)
{
lean_object* v_val_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v_val_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_val_893_);
lean_dec_ref_known(v___x_892_, 1);
v___x_894_ = lean_array_get_size(v_val_893_);
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = lean_nat_dec_eq(v___x_894_, v___x_895_);
if (v___x_896_ == 0)
{
lean_object* v_dummy_897_; lean_object* v_nargs_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
v_dummy_897_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1);
v_nargs_898_ = l_Lean_Expr_getAppNumArgs(v___x_869_);
lean_inc(v_nargs_898_);
v___x_899_ = lean_mk_array(v_nargs_898_, v_dummy_897_);
v___x_900_ = lean_unsigned_to_nat(1u);
v___x_901_ = lean_nat_sub(v_nargs_898_, v___x_900_);
lean_dec(v_nargs_898_);
v___x_902_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_869_, v___x_899_, v___x_901_);
v___x_903_ = lean_array_get_size(v___x_902_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_885_);
v___x_905_ = v___x_866_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v_snd_864_);
v___x_905_ = v_reuseFailAlloc_917_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_906_; 
v___x_906_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v___x_903_, v_val_893_, v___x_902_, v_fvars_845_, v___y_874_, v___x_895_, v___x_905_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec_ref(v___x_902_);
lean_dec(v_val_893_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v_fst_908_; lean_object* v_snd_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v_fst_908_ = lean_ctor_get(v_a_907_, 0);
v_snd_909_ = lean_ctor_get(v_a_907_, 1);
v_isSharedCheck_916_ = !lean_is_exclusive(v_a_907_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v_a_907_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_snd_909_);
lean_inc(v_fst_908_);
lean_dec(v_a_907_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_fst_908_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_snd_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
v_a_854_ = v___x_914_;
goto v___jp_853_;
}
}
}
else
{
lean_dec(v_a_846_);
return v___x_906_;
}
}
}
else
{
lean_object* v___x_919_; 
lean_dec(v_val_893_);
lean_dec_ref(v___x_869_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_885_);
v___x_919_ = v___x_866_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v_snd_864_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
v_a_854_ = v___x_919_;
goto v___jp_853_;
}
}
}
else
{
lean_object* v___x_922_; 
lean_dec(v___x_892_);
lean_dec_ref(v___x_869_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_885_);
v___x_922_ = v___x_866_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v_snd_864_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
v_a_854_ = v___x_922_;
goto v___jp_853_;
}
}
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; 
lean_dec(v___y_873_);
lean_dec_ref(v___x_869_);
v___x_924_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5);
v___x_925_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v___x_924_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_927_; 
lean_dec_ref_known(v___x_925_, 1);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_885_);
v___x_927_ = v___x_866_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_snd_864_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
v_a_854_ = v___x_927_;
goto v___jp_853_;
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec_ref(v___x_885_);
lean_del_object(v___x_866_);
lean_dec(v_snd_864_);
lean_dec(v_a_846_);
v_a_929_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_925_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_925_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec(v_a_876_);
lean_dec(v___y_873_);
lean_dec_ref(v___x_870_);
lean_dec_ref(v___x_869_);
lean_del_object(v___x_866_);
lean_dec(v_snd_864_);
lean_dec(v_fst_863_);
lean_dec(v_a_862_);
lean_dec(v_a_846_);
v_a_937_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_878_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_878_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v___y_873_);
lean_dec_ref(v___x_870_);
lean_dec_ref(v___x_869_);
lean_del_object(v___x_866_);
lean_dec(v_snd_864_);
lean_dec(v_fst_863_);
lean_dec(v_a_862_);
lean_dec(v_a_846_);
v_a_945_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_875_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_875_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
v___jp_953_:
{
lean_object* v___x_955_; 
lean_inc_ref(v___x_869_);
v___x_955_ = l_Lean_Meta_isClass_x3f(v___x_869_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_955_, 1);
if (lean_obj_tag(v_a_956_) == 0)
{
uint8_t v___x_957_; 
v___x_957_ = 0;
v___y_872_ = v___y_954_;
v___y_873_ = v_a_956_;
v___y_874_ = v___x_957_;
goto v___jp_871_;
}
else
{
uint8_t v___x_958_; uint8_t v___x_959_; 
v___x_958_ = l_Lean_LocalDecl_binderInfo(v_a_862_);
v___x_959_ = l_Lean_BinderInfo_isExplicit(v___x_958_);
if (v___x_959_ == 0)
{
v___y_872_ = v___y_954_;
v___y_873_ = v_a_956_;
v___y_874_ = v___x_858_;
goto v___jp_871_;
}
else
{
uint8_t v___x_960_; 
v___x_960_ = 0;
v___y_872_ = v___y_954_;
v___y_873_ = v_a_956_;
v___y_874_ = v___x_960_;
goto v___jp_871_;
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v___x_870_);
lean_dec_ref(v___x_869_);
lean_del_object(v___x_866_);
lean_dec(v_snd_864_);
lean_dec(v_fst_863_);
lean_dec(v_a_862_);
lean_dec(v_a_846_);
v_a_961_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_955_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_955_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
lean_dec_ref(v_b_847_);
lean_dec(v_a_846_);
v_a_974_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_861_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_861_);
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
v___jp_853_:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = lean_unsigned_to_nat(1u);
v___x_856_ = lean_nat_add(v_a_846_, v___x_855_);
lean_dec(v_a_846_);
v_a_846_ = v___x_856_;
v_b_847_ = v_a_854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object* v_upperBound_982_, lean_object* v_fvars_983_, lean_object* v_a_984_, lean_object* v_b_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_982_, v_fvars_983_, v_a_984_, v_b_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec_ref(v_fvars_983_);
lean_dec(v_upperBound_982_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object* v___x_994_, lean_object* v_fvars_995_, lean_object* v_type_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1002_ = lean_array_get_size(v_fvars_995_);
v___x_1003_ = lean_unsigned_to_nat(0u);
v___x_1004_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0));
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_994_);
v___x_1006_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v___x_1002_, v_fvars_995_, v___x_1003_, v___x_1005_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1025_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1025_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1025_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_fst_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1023_; 
v_fst_1011_ = lean_ctor_get(v_a_1007_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_a_1007_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; 
v_unused_1024_ = lean_ctor_get(v_a_1007_, 1);
lean_dec(v_unused_1024_);
v___x_1013_ = v_a_1007_;
v_isShared_1014_ = v_isSharedCheck_1023_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_fst_1011_);
lean_dec(v_a_1007_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1023_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1015_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_995_, v_type_996_);
v___x_1016_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_1011_, v___x_1015_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 1, v___x_1015_);
lean_ctor_set(v___x_1013_, 0, v___x_1016_);
v___x_1018_ = v___x_1013_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v___x_1015_);
v___x_1018_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1020_; 
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v___x_1018_);
v___x_1020_ = v___x_1009_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
v_a_1026_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_1006_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1006_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object* v___x_1034_, lean_object* v_fvars_1035_, lean_object* v_type_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(v___x_1034_, v_fvars_1035_, v_type_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec_ref(v_type_1036_);
lean_dec_ref(v_fvars_1035_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object* v_fn_1043_, lean_object* v_maxArgs_x3f_1044_, lean_object* v___f_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v___x_1051_; 
lean_inc(v___y_1049_);
lean_inc_ref(v___y_1048_);
lean_inc(v___y_1047_);
lean_inc_ref(v___y_1046_);
v___x_1051_ = lean_infer_type(v_fn_1043_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1053_; uint8_t v_transparency_1054_; uint8_t v___x_1055_; uint8_t v___x_1056_; uint8_t v___y_1058_; uint8_t v___x_1079_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1051_, 1);
v___x_1053_ = l_Lean_Meta_Context_config(v___y_1046_);
v_transparency_1054_ = lean_ctor_get_uint8(v___x_1053_, 9);
lean_dec_ref(v___x_1053_);
v___x_1055_ = 1;
v___x_1056_ = 0;
v___x_1079_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1054_, v___x_1055_);
if (v___x_1079_ == 0)
{
v___y_1058_ = v_transparency_1054_;
goto v___jp_1057_;
}
else
{
v___y_1058_ = v___x_1055_;
goto v___jp_1057_;
}
v___jp_1057_:
{
lean_object* v_keyedConfig_1059_; uint8_t v_trackZetaDelta_1060_; lean_object* v_zetaDeltaSet_1061_; lean_object* v_lctx_1062_; lean_object* v_localInstances_1063_; lean_object* v_defEqCtx_x3f_1064_; lean_object* v_synthPendingDepth_1065_; lean_object* v_customCanUnfoldPredicate_x3f_1066_; uint8_t v_univApprox_1067_; uint8_t v_inTypeClassResolution_1068_; uint8_t v_cacheInferType_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1078_; 
v_keyedConfig_1059_ = lean_ctor_get(v___y_1046_, 0);
v_trackZetaDelta_1060_ = lean_ctor_get_uint8(v___y_1046_, sizeof(void*)*7);
v_zetaDeltaSet_1061_ = lean_ctor_get(v___y_1046_, 1);
v_lctx_1062_ = lean_ctor_get(v___y_1046_, 2);
v_localInstances_1063_ = lean_ctor_get(v___y_1046_, 3);
v_defEqCtx_x3f_1064_ = lean_ctor_get(v___y_1046_, 4);
v_synthPendingDepth_1065_ = lean_ctor_get(v___y_1046_, 5);
v_customCanUnfoldPredicate_x3f_1066_ = lean_ctor_get(v___y_1046_, 6);
v_univApprox_1067_ = lean_ctor_get_uint8(v___y_1046_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1068_ = lean_ctor_get_uint8(v___y_1046_, sizeof(void*)*7 + 2);
v_cacheInferType_1069_ = lean_ctor_get_uint8(v___y_1046_, sizeof(void*)*7 + 3);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___y_1046_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1071_ = v___y_1046_;
v_isShared_1072_ = v_isSharedCheck_1078_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1066_);
lean_inc(v_synthPendingDepth_1065_);
lean_inc(v_defEqCtx_x3f_1064_);
lean_inc(v_localInstances_1063_);
lean_inc(v_lctx_1062_);
lean_inc(v_zetaDeltaSet_1061_);
lean_inc(v_keyedConfig_1059_);
lean_dec(v___y_1046_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1078_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1073_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___y_1058_, v_keyedConfig_1059_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 0, v___x_1073_);
v___x_1075_ = v___x_1071_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1073_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v_zetaDeltaSet_1061_);
lean_ctor_set(v_reuseFailAlloc_1077_, 2, v_lctx_1062_);
lean_ctor_set(v_reuseFailAlloc_1077_, 3, v_localInstances_1063_);
lean_ctor_set(v_reuseFailAlloc_1077_, 4, v_defEqCtx_x3f_1064_);
lean_ctor_set(v_reuseFailAlloc_1077_, 5, v_synthPendingDepth_1065_);
lean_ctor_set(v_reuseFailAlloc_1077_, 6, v_customCanUnfoldPredicate_x3f_1066_);
lean_ctor_set_uint8(v_reuseFailAlloc_1077_, sizeof(void*)*7, v_trackZetaDelta_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1077_, sizeof(void*)*7 + 1, v_univApprox_1067_);
lean_ctor_set_uint8(v_reuseFailAlloc_1077_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1068_);
lean_ctor_set_uint8(v_reuseFailAlloc_1077_, sizeof(void*)*7 + 3, v_cacheInferType_1069_);
v___x_1075_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_a_1052_, v_maxArgs_x3f_1044_, v___f_1045_, v___x_1056_, v___x_1056_, v___x_1075_, v___y_1047_, v___y_1048_, v___y_1049_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___x_1075_);
return v___x_1076_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec_ref(v___f_1045_);
lean_dec(v_maxArgs_x3f_1044_);
v_a_1080_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1051_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1051_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object* v_fn_1088_, lean_object* v_maxArgs_x3f_1089_, lean_object* v___f_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1088_, v_maxArgs_x3f_1089_, v___f_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object* v_keys_1097_, lean_object* v_vals_1098_, lean_object* v_i_1099_, lean_object* v_k_1100_){
_start:
{
lean_object* v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = lean_array_get_size(v_keys_1097_);
v___x_1102_ = lean_nat_dec_lt(v_i_1099_, v___x_1101_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1103_; 
lean_dec(v_i_1099_);
v___x_1103_ = lean_box(0);
return v___x_1103_;
}
else
{
lean_object* v_k_x27_1104_; uint8_t v___x_1105_; 
v_k_x27_1104_ = lean_array_fget_borrowed(v_keys_1097_, v_i_1099_);
v___x_1105_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_k_1100_, v_k_x27_1104_);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = lean_unsigned_to_nat(1u);
v___x_1107_ = lean_nat_add(v_i_1099_, v___x_1106_);
lean_dec(v_i_1099_);
v_i_1099_ = v___x_1107_;
goto _start;
}
else
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_array_fget_borrowed(v_vals_1098_, v_i_1099_);
lean_dec(v_i_1099_);
lean_inc(v___x_1109_);
v___x_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object* v_keys_1111_, lean_object* v_vals_1112_, lean_object* v_i_1113_, lean_object* v_k_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_1111_, v_vals_1112_, v_i_1113_, v_k_1114_);
lean_dec_ref(v_k_1114_);
lean_dec_ref(v_vals_1112_);
lean_dec_ref(v_keys_1111_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object* v_x_1116_, size_t v_x_1117_, lean_object* v_x_1118_){
_start:
{
if (lean_obj_tag(v_x_1116_) == 0)
{
lean_object* v_es_1119_; lean_object* v___x_1120_; size_t v___x_1121_; size_t v___x_1122_; lean_object* v_j_1123_; lean_object* v___x_1124_; 
v_es_1119_ = lean_ctor_get(v_x_1116_, 0);
v___x_1120_ = lean_box(2);
v___x_1121_ = ((size_t)31ULL);
v___x_1122_ = lean_usize_land(v_x_1117_, v___x_1121_);
v_j_1123_ = lean_usize_to_nat(v___x_1122_);
v___x_1124_ = lean_array_get_borrowed(v___x_1120_, v_es_1119_, v_j_1123_);
lean_dec(v_j_1123_);
switch(lean_obj_tag(v___x_1124_))
{
case 0:
{
lean_object* v_key_1125_; lean_object* v_val_1126_; uint8_t v___x_1127_; 
v_key_1125_ = lean_ctor_get(v___x_1124_, 0);
v_val_1126_ = lean_ctor_get(v___x_1124_, 1);
v___x_1127_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1118_, v_key_1125_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_box(0);
return v___x_1128_;
}
else
{
lean_object* v___x_1129_; 
lean_inc(v_val_1126_);
v___x_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_val_1126_);
return v___x_1129_;
}
}
case 1:
{
lean_object* v_node_1130_; size_t v___x_1131_; size_t v___x_1132_; 
v_node_1130_ = lean_ctor_get(v___x_1124_, 0);
v___x_1131_ = ((size_t)5ULL);
v___x_1132_ = lean_usize_shift_right(v_x_1117_, v___x_1131_);
v_x_1116_ = v_node_1130_;
v_x_1117_ = v___x_1132_;
goto _start;
}
default: 
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_box(0);
return v___x_1134_;
}
}
}
else
{
lean_object* v_ks_1135_; lean_object* v_vs_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v_ks_1135_ = lean_ctor_get(v_x_1116_, 0);
v_vs_1136_ = lean_ctor_get(v_x_1116_, 1);
v___x_1137_ = lean_unsigned_to_nat(0u);
v___x_1138_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_ks_1135_, v_vs_1136_, v___x_1137_, v_x_1118_);
return v___x_1138_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object* v_x_1139_, lean_object* v_x_1140_, lean_object* v_x_1141_){
_start:
{
size_t v_x_12869__boxed_1142_; lean_object* v_res_1143_; 
v_x_12869__boxed_1142_ = lean_unbox_usize(v_x_1140_);
lean_dec(v_x_1140_);
v_res_1143_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1139_, v_x_12869__boxed_1142_, v_x_1141_);
lean_dec_ref(v_x_1141_);
lean_dec_ref(v_x_1139_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object* v_x_1144_, lean_object* v_x_1145_){
_start:
{
uint64_t v___x_1146_; size_t v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1145_);
v___x_1147_ = lean_uint64_to_usize(v___x_1146_);
v___x_1148_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1144_, v___x_1147_, v_x_1145_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object* v_x_1149_, lean_object* v_x_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_1149_, v_x_1150_);
lean_dec_ref(v_x_1150_);
lean_dec_ref(v_x_1149_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(lean_object* v_x_1152_, lean_object* v_x_1153_, lean_object* v_x_1154_, lean_object* v_x_1155_){
_start:
{
lean_object* v_ks_1156_; lean_object* v_vs_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1181_; 
v_ks_1156_ = lean_ctor_get(v_x_1152_, 0);
v_vs_1157_ = lean_ctor_get(v_x_1152_, 1);
v_isSharedCheck_1181_ = !lean_is_exclusive(v_x_1152_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1159_ = v_x_1152_;
v_isShared_1160_ = v_isSharedCheck_1181_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_vs_1157_);
lean_inc(v_ks_1156_);
lean_dec(v_x_1152_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1181_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1161_ = lean_array_get_size(v_ks_1156_);
v___x_1162_ = lean_nat_dec_lt(v_x_1153_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1166_; 
lean_dec(v_x_1153_);
v___x_1163_ = lean_array_push(v_ks_1156_, v_x_1154_);
v___x_1164_ = lean_array_push(v_vs_1157_, v_x_1155_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1164_);
lean_ctor_set(v___x_1159_, 0, v___x_1163_);
v___x_1166_ = v___x_1159_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v___x_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
else
{
lean_object* v_k_x27_1168_; uint8_t v___x_1169_; 
v_k_x27_1168_ = lean_array_fget_borrowed(v_ks_1156_, v_x_1153_);
v___x_1169_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1154_, v_k_x27_1168_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1171_; 
if (v_isShared_1160_ == 0)
{
v___x_1171_ = v___x_1159_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_ks_1156_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_vs_1157_);
v___x_1171_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_unsigned_to_nat(1u);
v___x_1173_ = lean_nat_add(v_x_1153_, v___x_1172_);
lean_dec(v_x_1153_);
v_x_1152_ = v___x_1171_;
v_x_1153_ = v___x_1173_;
goto _start;
}
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1176_ = lean_array_fset(v_ks_1156_, v_x_1153_, v_x_1154_);
v___x_1177_ = lean_array_fset(v_vs_1157_, v_x_1153_, v_x_1155_);
lean_dec(v_x_1153_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1177_);
lean_ctor_set(v___x_1159_, 0, v___x_1176_);
v___x_1179_ = v___x_1159_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1176_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object* v_n_1182_, lean_object* v_k_1183_, lean_object* v_v_1184_){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = lean_unsigned_to_nat(0u);
v___x_1186_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(v_n_1182_, v___x_1185_, v_k_1183_, v_v_1184_);
return v___x_1186_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object* v_x_1188_, size_t v_x_1189_, size_t v_x_1190_, lean_object* v_x_1191_, lean_object* v_x_1192_){
_start:
{
if (lean_obj_tag(v_x_1188_) == 0)
{
lean_object* v_es_1193_; size_t v___x_1194_; size_t v___x_1195_; lean_object* v_j_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; 
v_es_1193_ = lean_ctor_get(v_x_1188_, 0);
v___x_1194_ = ((size_t)31ULL);
v___x_1195_ = lean_usize_land(v_x_1189_, v___x_1194_);
v_j_1196_ = lean_usize_to_nat(v___x_1195_);
v___x_1197_ = lean_array_get_size(v_es_1193_);
v___x_1198_ = lean_nat_dec_lt(v_j_1196_, v___x_1197_);
if (v___x_1198_ == 0)
{
lean_dec(v_j_1196_);
lean_dec(v_x_1192_);
lean_dec_ref(v_x_1191_);
return v_x_1188_;
}
else
{
lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1237_; 
lean_inc_ref(v_es_1193_);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_x_1188_);
if (v_isSharedCheck_1237_ == 0)
{
lean_object* v_unused_1238_; 
v_unused_1238_ = lean_ctor_get(v_x_1188_, 0);
lean_dec(v_unused_1238_);
v___x_1200_ = v_x_1188_;
v_isShared_1201_ = v_isSharedCheck_1237_;
goto v_resetjp_1199_;
}
else
{
lean_dec(v_x_1188_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1237_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v_v_1202_; lean_object* v___x_1203_; lean_object* v_xs_x27_1204_; lean_object* v___y_1206_; 
v_v_1202_ = lean_array_fget(v_es_1193_, v_j_1196_);
v___x_1203_ = lean_box(0);
v_xs_x27_1204_ = lean_array_fset(v_es_1193_, v_j_1196_, v___x_1203_);
switch(lean_obj_tag(v_v_1202_))
{
case 0:
{
lean_object* v_key_1211_; lean_object* v_val_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1222_; 
v_key_1211_ = lean_ctor_get(v_v_1202_, 0);
v_val_1212_ = lean_ctor_get(v_v_1202_, 1);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_v_1202_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1214_ = v_v_1202_;
v_isShared_1215_ = v_isSharedCheck_1222_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_val_1212_);
lean_inc(v_key_1211_);
lean_dec(v_v_1202_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1222_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
uint8_t v___x_1216_; 
v___x_1216_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1191_, v_key_1211_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
lean_del_object(v___x_1214_);
v___x_1217_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1211_, v_val_1212_, v_x_1191_, v_x_1192_);
v___x_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
v___y_1206_ = v___x_1218_;
goto v___jp_1205_;
}
else
{
lean_object* v___x_1220_; 
lean_dec(v_val_1212_);
lean_dec(v_key_1211_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 1, v_x_1192_);
lean_ctor_set(v___x_1214_, 0, v_x_1191_);
v___x_1220_ = v___x_1214_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_x_1191_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_x_1192_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
v___y_1206_ = v___x_1220_;
goto v___jp_1205_;
}
}
}
}
case 1:
{
lean_object* v_node_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1235_; 
v_node_1223_ = lean_ctor_get(v_v_1202_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_v_1202_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1225_ = v_v_1202_;
v_isShared_1226_ = v_isSharedCheck_1235_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_node_1223_);
lean_dec(v_v_1202_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1235_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
size_t v___x_1227_; size_t v___x_1228_; size_t v___x_1229_; size_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1227_ = ((size_t)5ULL);
v___x_1228_ = lean_usize_shift_right(v_x_1189_, v___x_1227_);
v___x_1229_ = ((size_t)1ULL);
v___x_1230_ = lean_usize_add(v_x_1190_, v___x_1229_);
v___x_1231_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_node_1223_, v___x_1228_, v___x_1230_, v_x_1191_, v_x_1192_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v___x_1231_);
v___x_1233_ = v___x_1225_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
v___y_1206_ = v___x_1233_;
goto v___jp_1205_;
}
}
}
default: 
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v_x_1191_);
lean_ctor_set(v___x_1236_, 1, v_x_1192_);
v___y_1206_ = v___x_1236_;
goto v___jp_1205_;
}
}
v___jp_1205_:
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = lean_array_fset(v_xs_x27_1204_, v_j_1196_, v___y_1206_);
lean_dec(v_j_1196_);
if (v_isShared_1201_ == 0)
{
lean_ctor_set(v___x_1200_, 0, v___x_1207_);
v___x_1209_ = v___x_1200_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
}
else
{
lean_object* v_ks_1239_; lean_object* v_vs_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1260_; 
v_ks_1239_ = lean_ctor_get(v_x_1188_, 0);
v_vs_1240_ = lean_ctor_get(v_x_1188_, 1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_x_1188_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1242_ = v_x_1188_;
v_isShared_1243_ = v_isSharedCheck_1260_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_vs_1240_);
lean_inc(v_ks_1239_);
lean_dec(v_x_1188_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1260_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_ks_1239_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_vs_1240_);
v___x_1245_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v_newNode_1246_; uint8_t v___y_1248_; size_t v___x_1254_; uint8_t v___x_1255_; 
v_newNode_1246_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v___x_1245_, v_x_1191_, v_x_1192_);
v___x_1254_ = ((size_t)7ULL);
v___x_1255_ = lean_usize_dec_le(v___x_1254_, v_x_1190_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
v___x_1256_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1246_);
v___x_1257_ = lean_unsigned_to_nat(4u);
v___x_1258_ = lean_nat_dec_lt(v___x_1256_, v___x_1257_);
lean_dec(v___x_1256_);
v___y_1248_ = v___x_1258_;
goto v___jp_1247_;
}
else
{
v___y_1248_ = v___x_1255_;
goto v___jp_1247_;
}
v___jp_1247_:
{
if (v___y_1248_ == 0)
{
lean_object* v_ks_1249_; lean_object* v_vs_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_ks_1249_ = lean_ctor_get(v_newNode_1246_, 0);
lean_inc_ref(v_ks_1249_);
v_vs_1250_ = lean_ctor_get(v_newNode_1246_, 1);
lean_inc_ref(v_vs_1250_);
lean_dec_ref(v_newNode_1246_);
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1252_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0);
v___x_1253_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_x_1190_, v_ks_1249_, v_vs_1250_, v___x_1251_, v___x_1252_);
lean_dec_ref(v_vs_1250_);
lean_dec_ref(v_ks_1249_);
return v___x_1253_;
}
else
{
return v_newNode_1246_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t v_depth_1261_, lean_object* v_keys_1262_, lean_object* v_vals_1263_, lean_object* v_i_1264_, lean_object* v_entries_1265_){
_start:
{
lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = lean_array_get_size(v_keys_1262_);
v___x_1267_ = lean_nat_dec_lt(v_i_1264_, v___x_1266_);
if (v___x_1267_ == 0)
{
lean_dec(v_i_1264_);
return v_entries_1265_;
}
else
{
lean_object* v_k_1268_; lean_object* v_v_1269_; uint64_t v___x_1270_; size_t v_h_1271_; size_t v___x_1272_; lean_object* v___x_1273_; size_t v___x_1274_; size_t v___x_1275_; size_t v___x_1276_; size_t v_h_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v_k_1268_ = lean_array_fget_borrowed(v_keys_1262_, v_i_1264_);
v_v_1269_ = lean_array_fget_borrowed(v_vals_1263_, v_i_1264_);
v___x_1270_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_k_1268_);
v_h_1271_ = lean_uint64_to_usize(v___x_1270_);
v___x_1272_ = ((size_t)5ULL);
v___x_1273_ = lean_unsigned_to_nat(1u);
v___x_1274_ = ((size_t)1ULL);
v___x_1275_ = lean_usize_sub(v_depth_1261_, v___x_1274_);
v___x_1276_ = lean_usize_mul(v___x_1272_, v___x_1275_);
v_h_1277_ = lean_usize_shift_right(v_h_1271_, v___x_1276_);
v___x_1278_ = lean_nat_add(v_i_1264_, v___x_1273_);
lean_dec(v_i_1264_);
lean_inc(v_v_1269_);
lean_inc(v_k_1268_);
v___x_1279_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_entries_1265_, v_h_1277_, v_depth_1261_, v_k_1268_, v_v_1269_);
v_i_1264_ = v___x_1278_;
v_entries_1265_ = v___x_1279_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object* v_depth_1281_, lean_object* v_keys_1282_, lean_object* v_vals_1283_, lean_object* v_i_1284_, lean_object* v_entries_1285_){
_start:
{
size_t v_depth_boxed_1286_; lean_object* v_res_1287_; 
v_depth_boxed_1286_ = lean_unbox_usize(v_depth_1281_);
lean_dec(v_depth_1281_);
v_res_1287_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_boxed_1286_, v_keys_1282_, v_vals_1283_, v_i_1284_, v_entries_1285_);
lean_dec_ref(v_vals_1283_);
lean_dec_ref(v_keys_1282_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object* v_x_1288_, lean_object* v_x_1289_, lean_object* v_x_1290_, lean_object* v_x_1291_, lean_object* v_x_1292_){
_start:
{
size_t v_x_13004__boxed_1293_; size_t v_x_13005__boxed_1294_; lean_object* v_res_1295_; 
v_x_13004__boxed_1293_ = lean_unbox_usize(v_x_1289_);
lean_dec(v_x_1289_);
v_x_13005__boxed_1294_ = lean_unbox_usize(v_x_1290_);
lean_dec(v_x_1290_);
v_res_1295_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1288_, v_x_13004__boxed_1293_, v_x_13005__boxed_1294_, v_x_1291_, v_x_1292_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object* v_x_1296_, lean_object* v_x_1297_, lean_object* v_x_1298_){
_start:
{
uint64_t v___x_1299_; size_t v___x_1300_; size_t v___x_1301_; lean_object* v___x_1302_; 
v___x_1299_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1297_);
v___x_1300_ = lean_uint64_to_usize(v___x_1299_);
v___x_1301_ = ((size_t)1ULL);
v___x_1302_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1296_, v___x_1300_, v___x_1301_, v_x_1297_, v_x_1298_);
return v___x_1302_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1303_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0);
v___x_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object* v_realizeMapRef_1306_, lean_object* v_env_1307_, lean_object* v_forConst_1308_, lean_object* v_ctx_1309_, lean_object* v_importRealizationCtx_x3f_1310_, lean_object* v_realize_1311_, lean_object* v_opts_1312_, lean_object* v_key_1313_, lean_object* v_inst_1314_, lean_object* v_____r_1315_){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v_fst_1320_; lean_object* v_snd_1321_; lean_object* v___y_1353_; lean_object* v___x_1358_; 
v___x_1317_ = lean_io_promise_new();
v___x_1318_ = lean_st_ref_take(v_realizeMapRef_1306_);
v___x_1358_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1318_, v_inst_1314_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1);
v___y_1353_ = v___x_1359_;
goto v___jp_1352_;
}
else
{
lean_object* v_val_1360_; 
v_val_1360_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_val_1360_);
lean_dec_ref_known(v___x_1358_, 1);
v___y_1353_ = v_val_1360_;
goto v___jp_1352_;
}
v___jp_1319_:
{
lean_object* v___x_1322_; 
v___x_1322_ = lean_st_ref_set(v_realizeMapRef_1306_, v_snd_1321_);
if (lean_obj_tag(v_fst_1320_) == 1)
{
lean_object* v_val_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1331_; 
lean_dec(v___x_1317_);
lean_dec_ref(v_opts_1312_);
lean_dec_ref(v_realize_1311_);
lean_dec(v_importRealizationCtx_x3f_1310_);
lean_dec_ref(v_ctx_1309_);
lean_dec(v_forConst_1308_);
lean_dec(v_env_1307_);
v_val_1323_ = lean_ctor_get(v_fst_1320_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_fst_1320_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1325_ = v_fst_1320_;
v_isShared_1326_ = v_isSharedCheck_1331_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_val_1323_);
lean_dec(v_fst_1320_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1331_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = lean_task_get_own(v_val_1323_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set_tag(v___x_1325_, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1327_);
v___x_1329_ = v___x_1325_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
else
{
lean_object* v_base_1332_; lean_object* v_serverBaseExts_1333_; lean_object* v_checked_1334_; lean_object* v_asyncConstsMap_1335_; lean_object* v_asyncCtx_x3f_1336_; lean_object* v_localRealizationCtxMap_1337_; lean_object* v_allRealizations_1338_; uint8_t v_isExporting_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1350_; 
lean_dec(v_fst_1320_);
v_base_1332_ = lean_ctor_get(v_env_1307_, 0);
v_serverBaseExts_1333_ = lean_ctor_get(v_env_1307_, 1);
v_checked_1334_ = lean_ctor_get(v_env_1307_, 2);
v_asyncConstsMap_1335_ = lean_ctor_get(v_env_1307_, 3);
v_asyncCtx_x3f_1336_ = lean_ctor_get(v_env_1307_, 4);
v_localRealizationCtxMap_1337_ = lean_ctor_get(v_env_1307_, 6);
v_allRealizations_1338_ = lean_ctor_get(v_env_1307_, 7);
v_isExporting_1339_ = lean_ctor_get_uint8(v_env_1307_, sizeof(void*)*8);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_env_1307_);
if (v_isSharedCheck_1350_ == 0)
{
lean_object* v_unused_1351_; 
v_unused_1351_ = lean_ctor_get(v_env_1307_, 5);
lean_dec(v_unused_1351_);
v___x_1341_ = v_env_1307_;
v_isShared_1342_ = v_isSharedCheck_1350_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_allRealizations_1338_);
lean_inc(v_localRealizationCtxMap_1337_);
lean_inc(v_asyncCtx_x3f_1336_);
lean_inc(v_asyncConstsMap_1335_);
lean_inc(v_checked_1334_);
lean_inc(v_serverBaseExts_1333_);
lean_inc(v_base_1332_);
lean_dec(v_env_1307_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1350_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1343_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_forConst_1308_, v_ctx_1309_, v_localRealizationCtxMap_1337_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 6, v___x_1343_);
lean_ctor_set(v___x_1341_, 5, v_importRealizationCtx_x3f_1310_);
v___x_1345_ = v___x_1341_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_base_1332_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v_serverBaseExts_1333_);
lean_ctor_set(v_reuseFailAlloc_1349_, 2, v_checked_1334_);
lean_ctor_set(v_reuseFailAlloc_1349_, 3, v_asyncConstsMap_1335_);
lean_ctor_set(v_reuseFailAlloc_1349_, 4, v_asyncCtx_x3f_1336_);
lean_ctor_set(v_reuseFailAlloc_1349_, 5, v_importRealizationCtx_x3f_1310_);
lean_ctor_set(v_reuseFailAlloc_1349_, 6, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1349_, 7, v_allRealizations_1338_);
lean_ctor_set_uint8(v_reuseFailAlloc_1349_, sizeof(void*)*8, v_isExporting_1339_);
v___x_1345_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = lean_apply_3(v_realize_1311_, v___x_1345_, v_opts_1312_, lean_box(0));
lean_inc(v___x_1346_);
v___x_1347_ = lean_io_promise_resolve(v___x_1346_, v___x_1317_);
lean_dec(v___x_1317_);
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1346_);
return v___x_1348_;
}
}
}
}
v___jp_1352_:
{
lean_object* v___x_1354_; 
v___x_1354_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v___y_1353_, v_key_1313_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1355_ = l_IO_Promise_result_x21___redArg(v___x_1317_);
v___x_1356_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v___y_1353_, v_key_1313_, v___x_1355_);
v___x_1357_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_inst_1314_, v___x_1356_, v___x_1318_);
v_fst_1320_ = v___x_1354_;
v_snd_1321_ = v___x_1357_;
goto v___jp_1319_;
}
else
{
lean_dec_ref(v___y_1353_);
lean_dec(v_inst_1314_);
lean_dec_ref(v_key_1313_);
v_fst_1320_ = v___x_1354_;
v_snd_1321_ = v___x_1318_;
goto v___jp_1319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object* v_realizeMapRef_1361_, lean_object* v_env_1362_, lean_object* v_forConst_1363_, lean_object* v_ctx_1364_, lean_object* v_importRealizationCtx_x3f_1365_, lean_object* v_realize_1366_, lean_object* v_opts_1367_, lean_object* v_key_1368_, lean_object* v_inst_1369_, lean_object* v_____r_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1361_, v_env_1362_, v_forConst_1363_, v_ctx_1364_, v_importRealizationCtx_x3f_1365_, v_realize_1366_, v_opts_1367_, v_key_1368_, v_inst_1369_, v_____r_1370_);
lean_dec(v_realizeMapRef_1361_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object* v_inst_1379_, lean_object* v_env_1380_, lean_object* v_forConst_1381_, lean_object* v_key_1382_, lean_object* v_realize_1383_){
_start:
{
lean_object* v___x_1385_; lean_object* v_a_1387_; lean_object* v___y_1391_; lean_object* v_base_1393_; lean_object* v_importRealizationCtx_x3f_1394_; lean_object* v_localRealizationCtxMap_1395_; uint8_t v_isExporting_1396_; lean_object* v_ctx_1398_; lean_object* v___y_1413_; 
v___x_1385_ = lean_io_get_num_heartbeats();
v_base_1393_ = lean_ctor_get(v_env_1380_, 0);
lean_inc_ref(v_base_1393_);
v_importRealizationCtx_x3f_1394_ = lean_ctor_get(v_env_1380_, 5);
lean_inc(v_importRealizationCtx_x3f_1394_);
v_localRealizationCtxMap_1395_ = lean_ctor_get(v_env_1380_, 6);
lean_inc(v_localRealizationCtxMap_1395_);
v_isExporting_1396_ = lean_ctor_get_uint8(v_env_1380_, sizeof(void*)*8);
lean_dec_ref(v_env_1380_);
if (v_isExporting_1396_ == 0)
{
lean_object* v_private_1439_; 
v_private_1439_ = lean_ctor_get(v_base_1393_, 0);
lean_inc(v_private_1439_);
lean_dec_ref(v_base_1393_);
v___y_1413_ = v_private_1439_;
goto v___jp_1412_;
}
else
{
lean_object* v_public_1440_; 
v_public_1440_ = lean_ctor_get(v_base_1393_, 1);
lean_inc(v_public_1440_);
lean_dec_ref(v_base_1393_);
v___y_1413_ = v_public_1440_;
goto v___jp_1412_;
}
v___jp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_io_set_heartbeats(v___x_1385_);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v_a_1387_);
return v___x_1389_;
}
v___jp_1390_:
{
lean_object* v_a_1392_; 
v_a_1392_ = lean_ctor_get(v___y_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref(v___y_1391_);
v_a_1387_ = v_a_1392_;
goto v___jp_1386_;
}
v___jp_1397_:
{
lean_object* v_env_1399_; lean_object* v_opts_1400_; lean_object* v_realizeMapRef_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v_env_1399_ = lean_ctor_get(v_ctx_1398_, 0);
lean_inc(v_env_1399_);
v_opts_1400_ = lean_ctor_get(v_ctx_1398_, 1);
lean_inc_ref(v_opts_1400_);
v_realizeMapRef_1401_ = lean_ctor_get(v_ctx_1398_, 2);
lean_inc(v_realizeMapRef_1401_);
v___x_1402_ = lean_st_ref_get(v_realizeMapRef_1401_);
v___x_1403_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1402_, v_inst_1379_);
lean_dec(v___x_1402_);
if (lean_obj_tag(v___x_1403_) == 1)
{
lean_object* v_val_1404_; lean_object* v___x_1405_; 
v_val_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_val_1404_);
lean_dec_ref_known(v___x_1403_, 1);
v___x_1405_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_val_1404_, v_key_1382_);
lean_dec(v_val_1404_);
if (lean_obj_tag(v___x_1405_) == 1)
{
lean_object* v_val_1406_; lean_object* v___x_1407_; 
lean_dec(v_realizeMapRef_1401_);
lean_dec_ref(v_opts_1400_);
lean_dec(v_env_1399_);
lean_dec_ref(v_ctx_1398_);
lean_dec(v_importRealizationCtx_x3f_1394_);
lean_dec_ref(v_realize_1383_);
lean_dec_ref(v_key_1382_);
lean_dec(v_forConst_1381_);
lean_dec(v_inst_1379_);
v_val_1406_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_val_1406_);
lean_dec_ref_known(v___x_1405_, 1);
v___x_1407_ = lean_task_get_own(v_val_1406_);
v_a_1387_ = v___x_1407_;
goto v___jp_1386_;
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v___x_1409_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1401_, v_env_1399_, v_forConst_1381_, v_ctx_1398_, v_importRealizationCtx_x3f_1394_, v_realize_1383_, v_opts_1400_, v_key_1382_, v_inst_1379_, v___x_1408_);
lean_dec(v_realizeMapRef_1401_);
v___y_1391_ = v___x_1409_;
goto v___jp_1390_;
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec(v___x_1403_);
v___x_1410_ = lean_box(0);
v___x_1411_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1401_, v_env_1399_, v_forConst_1381_, v_ctx_1398_, v_importRealizationCtx_x3f_1394_, v_realize_1383_, v_opts_1400_, v_key_1382_, v_inst_1379_, v___x_1410_);
lean_dec(v_realizeMapRef_1401_);
v___y_1391_ = v___x_1411_;
goto v___jp_1390_;
}
}
v___jp_1412_:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lean_Kernel_Environment_getModuleIdxFor_x3f(v___y_1413_, v_forConst_1381_);
lean_dec_ref(v___y_1413_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v___x_1415_; 
v___x_1415_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_localRealizationCtxMap_1395_, v_forConst_1381_);
lean_dec(v_localRealizationCtxMap_1395_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v___x_1416_; uint8_t v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
lean_dec(v_importRealizationCtx_x3f_1394_);
lean_dec(v___x_1385_);
lean_dec_ref(v_realize_1383_);
lean_dec_ref(v_key_1382_);
v___x_1416_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0));
v___x_1417_ = 1;
v___x_1418_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_inst_1379_, v___x_1417_);
v___x_1419_ = lean_string_append(v___x_1416_, v___x_1418_);
lean_dec_ref(v___x_1418_);
v___x_1420_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1));
v___x_1421_ = lean_string_append(v___x_1419_, v___x_1420_);
v___x_1422_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_forConst_1381_, v___x_1417_);
v___x_1423_ = lean_string_append(v___x_1421_, v___x_1422_);
lean_dec_ref(v___x_1422_);
v___x_1424_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2));
v___x_1425_ = lean_string_append(v___x_1423_, v___x_1424_);
v___x_1426_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
v___x_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
else
{
lean_object* v_val_1428_; 
v_val_1428_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_val_1428_);
lean_dec_ref_known(v___x_1415_, 1);
v_ctx_1398_ = v_val_1428_;
goto v___jp_1397_;
}
}
else
{
lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_localRealizationCtxMap_1395_);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v___x_1414_, 0);
lean_dec(v_unused_1438_);
v___x_1430_ = v___x_1414_;
v_isShared_1431_ = v_isSharedCheck_1437_;
goto v_resetjp_1429_;
}
else
{
lean_dec(v___x_1414_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1437_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
if (lean_obj_tag(v_importRealizationCtx_x3f_1394_) == 0)
{
lean_object* v___x_1432_; lean_object* v___x_1434_; 
lean_dec(v___x_1385_);
lean_dec_ref(v_realize_1383_);
lean_dec_ref(v_key_1382_);
lean_dec(v_forConst_1381_);
lean_dec(v_inst_1379_);
v___x_1432_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4));
if (v_isShared_1431_ == 0)
{
lean_ctor_set(v___x_1430_, 0, v___x_1432_);
v___x_1434_ = v___x_1430_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
else
{
lean_object* v_val_1436_; 
lean_del_object(v___x_1430_);
v_val_1436_ = lean_ctor_get(v_importRealizationCtx_x3f_1394_, 0);
lean_inc(v_val_1436_);
v_ctx_1398_ = v_val_1436_;
goto v___jp_1397_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object* v_inst_1441_, lean_object* v_env_1442_, lean_object* v_forConst_1443_, lean_object* v_key_1444_, lean_object* v_realize_1445_, lean_object* v_a_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1441_, v_env_1442_, v_forConst_1443_, v_key_1444_, v_realize_1445_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object* v_msg_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___f_1454_; lean_object* v___x_11265__overap_1455_; lean_object* v___x_1456_; 
v___f_1454_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_11265__overap_1455_ = lean_panic_fn_borrowed(v___f_1454_, v_msg_1448_);
lean_inc(v___y_1452_);
lean_inc_ref(v___y_1451_);
lean_inc(v___y_1450_);
lean_inc_ref(v___y_1449_);
v___x_1456_ = lean_apply_5(v___x_11265__overap_1455_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, lean_box(0));
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object* v_msg_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object* v_realize_1464_, lean_object* v_inst_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v___x_1471_; 
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
lean_inc(v___y_1467_);
v___x_1471_ = lean_apply_5(v_realize_1464_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, lean_box(0));
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1480_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1474_ = v___x_1471_;
v_isShared_1475_ = v_isSharedCheck_1480_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1480_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1478_; 
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v_inst_1465_);
lean_ctor_set(v___x_1476_, 1, v_a_1472_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 0, v___x_1476_);
v___x_1478_ = v___x_1474_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v___x_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
lean_dec(v_inst_1465_);
v_a_1481_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1471_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1471_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object* v_realize_1489_, lean_object* v_inst_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(v_realize_1489_, v_inst_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
return v_res_1496_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1497_ = l_Lean_Options_empty;
v___x_1498_ = l_Lean_Core_getMaxHeartbeats(v___x_1497_);
return v___x_1498_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = lean_box(0);
v___x_1500_ = lean_unsigned_to_nat(16u);
v___x_1501_ = lean_mk_array(v___x_1500_, v___x_1499_);
return v___x_1501_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1502_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1);
v___x_1503_ = lean_unsigned_to_nat(0u);
v___x_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
lean_ctor_set(v___x_1504_, 1, v___x_1502_);
return v___x_1504_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1507_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_1508_ = lean_unsigned_to_nat(36u);
v___x_1509_ = lean_unsigned_to_nat(2664u);
v___x_1510_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1511_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3));
v___x_1512_ = l_mkPanicMessageWithDecl(v___x_1511_, v___x_1510_, v___x_1509_, v___x_1508_, v___x_1507_);
return v___x_1512_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1513_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_1514_ = lean_unsigned_to_nat(48u);
v___x_1515_ = lean_unsigned_to_nat(2655u);
v___x_1516_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1517_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3));
v___x_1518_ = l_mkPanicMessageWithDecl(v___x_1517_, v___x_1516_, v___x_1515_, v___x_1514_, v___x_1513_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object* v_inst_1519_, lean_object* v_inst_1520_, lean_object* v_forConst_1521_, lean_object* v_key_1522_, lean_object* v_realize_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_){
_start:
{
lean_object* v___x_1529_; lean_object* v_env_1530_; uint8_t v___x_1531_; 
v___x_1529_ = lean_st_ref_get(v_a_1527_);
v_env_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc_ref(v_env_1530_);
lean_dec(v___x_1529_);
v___x_1531_ = l_Lean_Environment_areRealizationsEnabledForConst(v_env_1530_, v_forConst_1521_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; 
lean_dec_ref(v_env_1530_);
lean_dec_ref(v_key_1522_);
lean_dec(v_forConst_1521_);
lean_dec(v_inst_1520_);
lean_dec(v_inst_1519_);
lean_inc(v_a_1527_);
lean_inc_ref(v_a_1526_);
lean_inc(v_a_1525_);
lean_inc_ref(v_a_1524_);
v___x_1532_ = lean_apply_5(v_realize_1523_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_, lean_box(0));
return v___x_1532_;
}
else
{
lean_object* v___x_1533_; lean_object* v_fileName_1534_; lean_object* v_fileMap_1535_; lean_object* v_ref_1536_; lean_object* v___f_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1533_ = lean_io_get_num_heartbeats();
v_fileName_1534_ = lean_ctor_get(v_a_1526_, 0);
v_fileMap_1535_ = lean_ctor_get(v_a_1526_, 1);
v_ref_1536_ = lean_ctor_get(v_a_1526_, 5);
lean_inc(v_inst_1520_);
v___f_1537_ = lean_alloc_closure((void*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1537_, 0, v_realize_1523_);
lean_closure_set(v___f_1537_, 1, v_inst_1520_);
v___x_1538_ = 0;
v___x_1539_ = l_Lean_Options_empty;
v___x_1540_ = lean_unsigned_to_nat(0u);
v___x_1541_ = lean_unsigned_to_nat(1000u);
v___x_1542_ = lean_box(0);
v___x_1543_ = lean_box(0);
v___x_1544_ = lean_box(0);
v___x_1545_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0);
v___x_1546_ = l_Lean_firstFrontendMacroScope;
v___x_1547_ = lean_box(0);
v___x_1548_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2);
lean_inc_ref(v_fileMap_1535_);
lean_inc_ref(v_fileName_1534_);
v___x_1549_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1549_, 0, v_fileName_1534_);
lean_ctor_set(v___x_1549_, 1, v_fileMap_1535_);
lean_ctor_set(v___x_1549_, 2, v___x_1539_);
lean_ctor_set(v___x_1549_, 3, v___x_1540_);
lean_ctor_set(v___x_1549_, 4, v___x_1541_);
lean_ctor_set(v___x_1549_, 5, v___x_1542_);
lean_ctor_set(v___x_1549_, 6, v___x_1543_);
lean_ctor_set(v___x_1549_, 7, v___x_1544_);
lean_ctor_set(v___x_1549_, 8, v___x_1533_);
lean_ctor_set(v___x_1549_, 9, v___x_1545_);
lean_ctor_set(v___x_1549_, 10, v___x_1543_);
lean_ctor_set(v___x_1549_, 11, v___x_1546_);
lean_ctor_set(v___x_1549_, 12, v___x_1547_);
lean_ctor_set(v___x_1549_, 13, v___x_1548_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*14, v___x_1538_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*14 + 1, v___x_1538_);
v___x_1550_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed), 5, 2);
lean_closure_set(v___x_1550_, 0, v___f_1537_);
lean_closure_set(v___x_1550_, 1, v___x_1549_);
v___x_1551_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1519_, v_env_1530_, v_forConst_1521_, v_key_1522_, v___x_1550_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1604_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1554_ = v___x_1551_;
v_isShared_1555_ = v_isSharedCheck_1604_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1551_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1604_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
v___x_1557_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1552_, v___x_1556_);
lean_dec(v_a_1552_);
if (lean_obj_tag(v___x_1557_) == 1)
{
lean_object* v_val_1558_; lean_object* v_res_x3f_1559_; lean_object* v_snap_x3f_1560_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v_snap_1579_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; 
v_val_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_val_1558_);
lean_dec_ref_known(v___x_1557_, 1);
v_res_x3f_1559_ = lean_ctor_get(v_val_1558_, 0);
lean_inc_ref(v_res_x3f_1559_);
v_snap_x3f_1560_ = lean_ctor_get(v_val_1558_, 1);
lean_inc(v_snap_x3f_1560_);
lean_dec(v_val_1558_);
if (lean_obj_tag(v_snap_x3f_1560_) == 1)
{
lean_object* v_val_1594_; lean_object* v___x_1595_; 
v_val_1594_ = lean_ctor_get(v_snap_x3f_1560_, 0);
lean_inc(v_val_1594_);
lean_dec_ref_known(v_snap_x3f_1560_, 1);
v___x_1595_ = l_Lean_Syntax_getRange_x3f(v_ref_1536_, v___x_1538_);
if (lean_obj_tag(v___x_1595_) == 1)
{
lean_object* v_val_1596_; lean_object* v_start_1597_; lean_object* v_stop_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v_val_1596_ = lean_ctor_get(v___x_1595_, 0);
lean_inc(v_val_1596_);
lean_dec_ref_known(v___x_1595_, 1);
v_start_1597_ = lean_ctor_get(v_val_1596_, 0);
lean_inc(v_start_1597_);
v_stop_1598_ = lean_ctor_get(v_val_1596_, 1);
lean_inc(v_stop_1598_);
lean_dec(v_val_1596_);
lean_inc_ref_n(v_fileMap_1535_, 2);
v___x_1599_ = l_Lean_FileMap_toPosition(v_fileMap_1535_, v_start_1597_);
lean_dec(v_start_1597_);
v___x_1600_ = l_Lean_FileMap_toPosition(v_fileMap_1535_, v_stop_1598_);
lean_dec(v_stop_1598_);
v___x_1601_ = l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(v_val_1594_, v___x_1599_, v___x_1600_);
v_snap_1579_ = v___x_1601_;
v___y_1580_ = v_a_1524_;
v___y_1581_ = v_a_1525_;
v___y_1582_ = v_a_1526_;
v___y_1583_ = v_a_1527_;
goto v___jp_1578_;
}
else
{
lean_dec(v___x_1595_);
v_snap_1579_ = v_val_1594_;
v___y_1580_ = v_a_1524_;
v___y_1581_ = v_a_1525_;
v___y_1582_ = v_a_1526_;
v___y_1583_ = v_a_1527_;
goto v___jp_1578_;
}
}
else
{
lean_dec(v_snap_x3f_1560_);
v___y_1562_ = v_a_1524_;
v___y_1563_ = v_a_1525_;
v___y_1564_ = v_a_1526_;
v___y_1565_ = v_a_1527_;
goto v___jp_1561_;
}
v___jp_1561_:
{
if (lean_obj_tag(v_res_x3f_1559_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1568_; 
lean_dec(v_inst_1520_);
v_a_1566_ = lean_ctor_get(v_res_x3f_1559_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v_res_x3f_1559_, 1);
if (v_isShared_1555_ == 0)
{
lean_ctor_set_tag(v___x_1554_, 1);
lean_ctor_set(v___x_1554_, 0, v_a_1566_);
v___x_1568_ = v___x_1554_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1566_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1571_; 
v_a_1570_ = lean_ctor_get(v_res_x3f_1559_, 0);
lean_inc(v_a_1570_);
lean_dec_ref_known(v_res_x3f_1559_, 1);
v___x_1571_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1570_, v_inst_1520_);
lean_dec(v_inst_1520_);
lean_dec(v_a_1570_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_del_object(v___x_1554_);
v___x_1572_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5);
v___x_1573_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1572_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
return v___x_1573_;
}
else
{
lean_object* v_val_1574_; lean_object* v___x_1576_; 
v_val_1574_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_val_1574_);
lean_dec_ref_known(v___x_1571_, 1);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 0, v_val_1574_);
v___x_1576_ = v___x_1554_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_val_1574_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
v___jp_1578_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_1547_, v_snap_1579_);
v___x_1585_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1584_, v___y_1583_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_dec_ref_known(v___x_1585_, 1);
v___y_1562_ = v___y_1580_;
v___y_1563_ = v___y_1581_;
v___y_1564_ = v___y_1582_;
v___y_1565_ = v___y_1583_;
goto v___jp_1561_;
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_dec_ref(v_res_x3f_1559_);
lean_del_object(v___x_1554_);
lean_dec(v_inst_1520_);
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1585_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1585_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
}
else
{
lean_object* v___x_1602_; lean_object* v___x_1603_; 
lean_dec(v___x_1557_);
lean_del_object(v___x_1554_);
lean_dec(v_inst_1520_);
v___x_1602_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6);
v___x_1603_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1602_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_);
return v___x_1603_;
}
}
}
else
{
lean_object* v_a_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_inst_1520_);
v_a_1605_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1607_ = v___x_1551_;
v_isShared_1608_ = v_isSharedCheck_1616_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v___x_1551_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1616_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1614_; 
v___x_1609_ = lean_io_error_to_string(v_a_1605_);
v___x_1610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
v___x_1611_ = l_Lean_MessageData_ofFormat(v___x_1610_);
lean_inc(v_ref_1536_);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v_ref_1536_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 0, v___x_1612_);
v___x_1614_ = v___x_1607_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1612_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object* v_inst_1617_, lean_object* v_inst_1618_, lean_object* v_forConst_1619_, lean_object* v_key_1620_, lean_object* v_realize_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_1617_, v_inst_1618_, v_forConst_1619_, v_key_1620_, v_realize_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
lean_dec(v_a_1625_);
lean_dec_ref(v_a_1624_);
lean_dec(v_a_1623_);
lean_dec_ref(v_a_1622_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object* v_keys_1628_, lean_object* v_vals_1629_, lean_object* v_i_1630_, lean_object* v_k_1631_){
_start:
{
lean_object* v___x_1632_; uint8_t v___x_1633_; 
v___x_1632_ = lean_array_get_size(v_keys_1628_);
v___x_1633_ = lean_nat_dec_lt(v_i_1630_, v___x_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; 
lean_dec(v_i_1630_);
v___x_1634_ = lean_box(0);
return v___x_1634_;
}
else
{
lean_object* v_k_x27_1635_; uint8_t v___x_1636_; 
v_k_x27_1635_ = lean_array_fget_borrowed(v_keys_1628_, v_i_1630_);
v___x_1636_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_k_1631_, v_k_x27_1635_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = lean_unsigned_to_nat(1u);
v___x_1638_ = lean_nat_add(v_i_1630_, v___x_1637_);
lean_dec(v_i_1630_);
v_i_1630_ = v___x_1638_;
goto _start;
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1640_ = lean_array_fget_borrowed(v_vals_1629_, v_i_1630_);
lean_dec(v_i_1630_);
lean_inc(v___x_1640_);
v___x_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
return v___x_1641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_keys_1642_, lean_object* v_vals_1643_, lean_object* v_i_1644_, lean_object* v_k_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_1642_, v_vals_1643_, v_i_1644_, v_k_1645_);
lean_dec_ref(v_k_1645_);
lean_dec_ref(v_vals_1643_);
lean_dec_ref(v_keys_1642_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object* v_x_1647_, size_t v_x_1648_, lean_object* v_x_1649_){
_start:
{
if (lean_obj_tag(v_x_1647_) == 0)
{
lean_object* v_es_1650_; lean_object* v___x_1651_; size_t v___x_1652_; size_t v___x_1653_; lean_object* v_j_1654_; lean_object* v___x_1655_; 
v_es_1650_ = lean_ctor_get(v_x_1647_, 0);
v___x_1651_ = lean_box(2);
v___x_1652_ = ((size_t)31ULL);
v___x_1653_ = lean_usize_land(v_x_1648_, v___x_1652_);
v_j_1654_ = lean_usize_to_nat(v___x_1653_);
v___x_1655_ = lean_array_get_borrowed(v___x_1651_, v_es_1650_, v_j_1654_);
lean_dec(v_j_1654_);
switch(lean_obj_tag(v___x_1655_))
{
case 0:
{
lean_object* v_key_1656_; lean_object* v_val_1657_; uint8_t v___x_1658_; 
v_key_1656_ = lean_ctor_get(v___x_1655_, 0);
v_val_1657_ = lean_ctor_get(v___x_1655_, 1);
v___x_1658_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1649_, v_key_1656_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_box(0);
return v___x_1659_;
}
else
{
lean_object* v___x_1660_; 
lean_inc(v_val_1657_);
v___x_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1660_, 0, v_val_1657_);
return v___x_1660_;
}
}
case 1:
{
lean_object* v_node_1661_; size_t v___x_1662_; size_t v___x_1663_; 
v_node_1661_ = lean_ctor_get(v___x_1655_, 0);
v___x_1662_ = ((size_t)5ULL);
v___x_1663_ = lean_usize_shift_right(v_x_1648_, v___x_1662_);
v_x_1647_ = v_node_1661_;
v_x_1648_ = v___x_1663_;
goto _start;
}
default: 
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_box(0);
return v___x_1665_;
}
}
}
else
{
lean_object* v_ks_1666_; lean_object* v_vs_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v_ks_1666_ = lean_ctor_get(v_x_1647_, 0);
v_vs_1667_ = lean_ctor_get(v_x_1647_, 1);
v___x_1668_ = lean_unsigned_to_nat(0u);
v___x_1669_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_ks_1666_, v_vs_1667_, v___x_1668_, v_x_1649_);
return v___x_1669_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object* v_x_1670_, lean_object* v_x_1671_, lean_object* v_x_1672_){
_start:
{
size_t v_x_13712__boxed_1673_; lean_object* v_res_1674_; 
v_x_13712__boxed_1673_ = lean_unbox_usize(v_x_1671_);
lean_dec(v_x_1671_);
v_res_1674_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1670_, v_x_13712__boxed_1673_, v_x_1672_);
lean_dec_ref(v_x_1672_);
lean_dec_ref(v_x_1670_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object* v_x_1675_, lean_object* v_x_1676_){
_start:
{
uint64_t v_configKey_1677_; lean_object* v_expr_1678_; lean_object* v_nargs_x3f_1679_; uint64_t v___x_1680_; uint64_t v___y_1682_; 
v_configKey_1677_ = lean_ctor_get_uint64(v_x_1676_, sizeof(void*)*2);
v_expr_1678_ = lean_ctor_get(v_x_1676_, 0);
v_nargs_x3f_1679_ = lean_ctor_get(v_x_1676_, 1);
v___x_1680_ = l_Lean_Expr_hash(v_expr_1678_);
if (lean_obj_tag(v_nargs_x3f_1679_) == 0)
{
uint64_t v___x_1687_; 
v___x_1687_ = 11ULL;
v___y_1682_ = v___x_1687_;
goto v___jp_1681_;
}
else
{
lean_object* v_val_1688_; uint64_t v___x_1689_; uint64_t v___x_1690_; uint64_t v___x_1691_; 
v_val_1688_ = lean_ctor_get(v_nargs_x3f_1679_, 0);
v___x_1689_ = lean_uint64_of_nat(v_val_1688_);
v___x_1690_ = 13ULL;
v___x_1691_ = lean_uint64_mix_hash(v___x_1689_, v___x_1690_);
v___y_1682_ = v___x_1691_;
goto v___jp_1681_;
}
v___jp_1681_:
{
uint64_t v___x_1683_; uint64_t v___x_1684_; size_t v___x_1685_; lean_object* v___x_1686_; 
v___x_1683_ = lean_uint64_mix_hash(v___x_1680_, v___y_1682_);
v___x_1684_ = lean_uint64_mix_hash(v_configKey_1677_, v___x_1683_);
v___x_1685_ = lean_uint64_to_usize(v___x_1684_);
v___x_1686_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1675_, v___x_1685_, v_x_1676_);
return v___x_1686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object* v_x_1692_, lean_object* v_x_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_1692_, v_x_1693_);
lean_dec_ref(v_x_1693_);
lean_dec_ref(v_x_1692_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object* v_x_1695_, lean_object* v_x_1696_, lean_object* v_x_1697_, lean_object* v_x_1698_){
_start:
{
lean_object* v_ks_1699_; lean_object* v_vs_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1724_; 
v_ks_1699_ = lean_ctor_get(v_x_1695_, 0);
v_vs_1700_ = lean_ctor_get(v_x_1695_, 1);
v_isSharedCheck_1724_ = !lean_is_exclusive(v_x_1695_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1702_ = v_x_1695_;
v_isShared_1703_ = v_isSharedCheck_1724_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_vs_1700_);
lean_inc(v_ks_1699_);
lean_dec(v_x_1695_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1724_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = lean_array_get_size(v_ks_1699_);
v___x_1705_ = lean_nat_dec_lt(v_x_1696_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1709_; 
lean_dec(v_x_1696_);
v___x_1706_ = lean_array_push(v_ks_1699_, v_x_1697_);
v___x_1707_ = lean_array_push(v_vs_1700_, v_x_1698_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v___x_1707_);
lean_ctor_set(v___x_1702_, 0, v___x_1706_);
v___x_1709_ = v___x_1702_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
else
{
lean_object* v_k_x27_1711_; uint8_t v___x_1712_; 
v_k_x27_1711_ = lean_array_fget_borrowed(v_ks_1699_, v_x_1696_);
v___x_1712_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1697_, v_k_x27_1711_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1714_; 
if (v_isShared_1703_ == 0)
{
v___x_1714_ = v___x_1702_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_ks_1699_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v_vs_1700_);
v___x_1714_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = lean_unsigned_to_nat(1u);
v___x_1716_ = lean_nat_add(v_x_1696_, v___x_1715_);
lean_dec(v_x_1696_);
v_x_1695_ = v___x_1714_;
v_x_1696_ = v___x_1716_;
goto _start;
}
}
else
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1719_ = lean_array_fset(v_ks_1699_, v_x_1696_, v_x_1697_);
v___x_1720_ = lean_array_fset(v_vs_1700_, v_x_1696_, v_x_1698_);
lean_dec(v_x_1696_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v___x_1720_);
lean_ctor_set(v___x_1702_, 0, v___x_1719_);
v___x_1722_ = v___x_1702_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1719_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object* v_n_1725_, lean_object* v_k_1726_, lean_object* v_v_1727_){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_unsigned_to_nat(0u);
v___x_1729_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_n_1725_, v___x_1728_, v_k_1726_, v_v_1727_);
return v___x_1729_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object* v_x_1731_, size_t v_x_1732_, size_t v_x_1733_, lean_object* v_x_1734_, lean_object* v_x_1735_){
_start:
{
if (lean_obj_tag(v_x_1731_) == 0)
{
lean_object* v_es_1736_; size_t v___x_1737_; size_t v___x_1738_; lean_object* v_j_1739_; lean_object* v___x_1740_; uint8_t v___x_1741_; 
v_es_1736_ = lean_ctor_get(v_x_1731_, 0);
v___x_1737_ = ((size_t)31ULL);
v___x_1738_ = lean_usize_land(v_x_1732_, v___x_1737_);
v_j_1739_ = lean_usize_to_nat(v___x_1738_);
v___x_1740_ = lean_array_get_size(v_es_1736_);
v___x_1741_ = lean_nat_dec_lt(v_j_1739_, v___x_1740_);
if (v___x_1741_ == 0)
{
lean_dec(v_j_1739_);
lean_dec(v_x_1735_);
lean_dec_ref(v_x_1734_);
return v_x_1731_;
}
else
{
lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1780_; 
lean_inc_ref(v_es_1736_);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_x_1731_);
if (v_isSharedCheck_1780_ == 0)
{
lean_object* v_unused_1781_; 
v_unused_1781_ = lean_ctor_get(v_x_1731_, 0);
lean_dec(v_unused_1781_);
v___x_1743_ = v_x_1731_;
v_isShared_1744_ = v_isSharedCheck_1780_;
goto v_resetjp_1742_;
}
else
{
lean_dec(v_x_1731_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1780_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v_v_1745_; lean_object* v___x_1746_; lean_object* v_xs_x27_1747_; lean_object* v___y_1749_; 
v_v_1745_ = lean_array_fget(v_es_1736_, v_j_1739_);
v___x_1746_ = lean_box(0);
v_xs_x27_1747_ = lean_array_fset(v_es_1736_, v_j_1739_, v___x_1746_);
switch(lean_obj_tag(v_v_1745_))
{
case 0:
{
lean_object* v_key_1754_; lean_object* v_val_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1765_; 
v_key_1754_ = lean_ctor_get(v_v_1745_, 0);
v_val_1755_ = lean_ctor_get(v_v_1745_, 1);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_v_1745_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1757_ = v_v_1745_;
v_isShared_1758_ = v_isSharedCheck_1765_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_val_1755_);
lean_inc(v_key_1754_);
lean_dec(v_v_1745_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1765_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
uint8_t v___x_1759_; 
v___x_1759_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1734_, v_key_1754_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
lean_del_object(v___x_1757_);
v___x_1760_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1754_, v_val_1755_, v_x_1734_, v_x_1735_);
v___x_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
v___y_1749_ = v___x_1761_;
goto v___jp_1748_;
}
else
{
lean_object* v___x_1763_; 
lean_dec(v_val_1755_);
lean_dec(v_key_1754_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v_x_1735_);
lean_ctor_set(v___x_1757_, 0, v_x_1734_);
v___x_1763_ = v___x_1757_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_x_1734_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v_x_1735_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
v___y_1749_ = v___x_1763_;
goto v___jp_1748_;
}
}
}
}
case 1:
{
lean_object* v_node_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1778_; 
v_node_1766_ = lean_ctor_get(v_v_1745_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_v_1745_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1768_ = v_v_1745_;
v_isShared_1769_ = v_isSharedCheck_1778_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_node_1766_);
lean_dec(v_v_1745_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1778_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
size_t v___x_1770_; size_t v___x_1771_; size_t v___x_1772_; size_t v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1770_ = ((size_t)5ULL);
v___x_1771_ = lean_usize_shift_right(v_x_1732_, v___x_1770_);
v___x_1772_ = ((size_t)1ULL);
v___x_1773_ = lean_usize_add(v_x_1733_, v___x_1772_);
v___x_1774_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_node_1766_, v___x_1771_, v___x_1773_, v_x_1734_, v_x_1735_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1774_);
v___x_1776_ = v___x_1768_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
v___y_1749_ = v___x_1776_;
goto v___jp_1748_;
}
}
}
default: 
{
lean_object* v___x_1779_; 
v___x_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1779_, 0, v_x_1734_);
lean_ctor_set(v___x_1779_, 1, v_x_1735_);
v___y_1749_ = v___x_1779_;
goto v___jp_1748_;
}
}
v___jp_1748_:
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1750_ = lean_array_fset(v_xs_x27_1747_, v_j_1739_, v___y_1749_);
lean_dec(v_j_1739_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1750_);
v___x_1752_ = v___x_1743_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
else
{
lean_object* v_ks_1782_; lean_object* v_vs_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1803_; 
v_ks_1782_ = lean_ctor_get(v_x_1731_, 0);
v_vs_1783_ = lean_ctor_get(v_x_1731_, 1);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_x_1731_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1785_ = v_x_1731_;
v_isShared_1786_ = v_isSharedCheck_1803_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_vs_1783_);
lean_inc(v_ks_1782_);
lean_dec(v_x_1731_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1803_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_ks_1782_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v_vs_1783_);
v___x_1788_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
lean_object* v_newNode_1789_; uint8_t v___y_1791_; size_t v___x_1797_; uint8_t v___x_1798_; 
v_newNode_1789_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v___x_1788_, v_x_1734_, v_x_1735_);
v___x_1797_ = ((size_t)7ULL);
v___x_1798_ = lean_usize_dec_le(v___x_1797_, v_x_1733_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v___x_1799_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1789_);
v___x_1800_ = lean_unsigned_to_nat(4u);
v___x_1801_ = lean_nat_dec_lt(v___x_1799_, v___x_1800_);
lean_dec(v___x_1799_);
v___y_1791_ = v___x_1801_;
goto v___jp_1790_;
}
else
{
v___y_1791_ = v___x_1798_;
goto v___jp_1790_;
}
v___jp_1790_:
{
if (v___y_1791_ == 0)
{
lean_object* v_ks_1792_; lean_object* v_vs_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_ks_1792_ = lean_ctor_get(v_newNode_1789_, 0);
lean_inc_ref(v_ks_1792_);
v_vs_1793_ = lean_ctor_get(v_newNode_1789_, 1);
lean_inc_ref(v_vs_1793_);
lean_dec_ref(v_newNode_1789_);
v___x_1794_ = lean_unsigned_to_nat(0u);
v___x_1795_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___closed__0);
v___x_1796_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_x_1733_, v_ks_1792_, v_vs_1793_, v___x_1794_, v___x_1795_);
lean_dec_ref(v_vs_1793_);
lean_dec_ref(v_ks_1792_);
return v___x_1796_;
}
else
{
return v_newNode_1789_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t v_depth_1804_, lean_object* v_keys_1805_, lean_object* v_vals_1806_, lean_object* v_i_1807_, lean_object* v_entries_1808_){
_start:
{
lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = lean_array_get_size(v_keys_1805_);
v___x_1810_ = lean_nat_dec_lt(v_i_1807_, v___x_1809_);
if (v___x_1810_ == 0)
{
lean_dec(v_i_1807_);
return v_entries_1808_;
}
else
{
lean_object* v_k_1811_; uint64_t v_configKey_1812_; lean_object* v_expr_1813_; lean_object* v_nargs_x3f_1814_; lean_object* v_v_1815_; uint64_t v___x_1816_; uint64_t v___y_1818_; 
v_k_1811_ = lean_array_fget_borrowed(v_keys_1805_, v_i_1807_);
v_configKey_1812_ = lean_ctor_get_uint64(v_k_1811_, sizeof(void*)*2);
v_expr_1813_ = lean_ctor_get(v_k_1811_, 0);
v_nargs_x3f_1814_ = lean_ctor_get(v_k_1811_, 1);
v_v_1815_ = lean_array_fget_borrowed(v_vals_1806_, v_i_1807_);
v___x_1816_ = l_Lean_Expr_hash(v_expr_1813_);
if (lean_obj_tag(v_nargs_x3f_1814_) == 0)
{
uint64_t v___x_1831_; 
v___x_1831_ = 11ULL;
v___y_1818_ = v___x_1831_;
goto v___jp_1817_;
}
else
{
lean_object* v_val_1832_; uint64_t v___x_1833_; uint64_t v___x_1834_; uint64_t v___x_1835_; 
v_val_1832_ = lean_ctor_get(v_nargs_x3f_1814_, 0);
v___x_1833_ = lean_uint64_of_nat(v_val_1832_);
v___x_1834_ = 13ULL;
v___x_1835_ = lean_uint64_mix_hash(v___x_1833_, v___x_1834_);
v___y_1818_ = v___x_1835_;
goto v___jp_1817_;
}
v___jp_1817_:
{
uint64_t v___x_1819_; uint64_t v___x_1820_; size_t v_h_1821_; size_t v___x_1822_; lean_object* v___x_1823_; size_t v___x_1824_; size_t v___x_1825_; size_t v___x_1826_; size_t v_h_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1819_ = lean_uint64_mix_hash(v___x_1816_, v___y_1818_);
v___x_1820_ = lean_uint64_mix_hash(v_configKey_1812_, v___x_1819_);
v_h_1821_ = lean_uint64_to_usize(v___x_1820_);
v___x_1822_ = ((size_t)5ULL);
v___x_1823_ = lean_unsigned_to_nat(1u);
v___x_1824_ = ((size_t)1ULL);
v___x_1825_ = lean_usize_sub(v_depth_1804_, v___x_1824_);
v___x_1826_ = lean_usize_mul(v___x_1822_, v___x_1825_);
v_h_1827_ = lean_usize_shift_right(v_h_1821_, v___x_1826_);
v___x_1828_ = lean_nat_add(v_i_1807_, v___x_1823_);
lean_dec(v_i_1807_);
lean_inc(v_v_1815_);
lean_inc(v_k_1811_);
v___x_1829_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_entries_1808_, v_h_1827_, v_depth_1804_, v_k_1811_, v_v_1815_);
v_i_1807_ = v___x_1828_;
v_entries_1808_ = v___x_1829_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object* v_depth_1836_, lean_object* v_keys_1837_, lean_object* v_vals_1838_, lean_object* v_i_1839_, lean_object* v_entries_1840_){
_start:
{
size_t v_depth_boxed_1841_; lean_object* v_res_1842_; 
v_depth_boxed_1841_ = lean_unbox_usize(v_depth_1836_);
lean_dec(v_depth_1836_);
v_res_1842_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_boxed_1841_, v_keys_1837_, v_vals_1838_, v_i_1839_, v_entries_1840_);
lean_dec_ref(v_vals_1838_);
lean_dec_ref(v_keys_1837_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object* v_x_1843_, lean_object* v_x_1844_, lean_object* v_x_1845_, lean_object* v_x_1846_, lean_object* v_x_1847_){
_start:
{
size_t v_x_13883__boxed_1848_; size_t v_x_13884__boxed_1849_; lean_object* v_res_1850_; 
v_x_13883__boxed_1848_ = lean_unbox_usize(v_x_1844_);
lean_dec(v_x_1844_);
v_x_13884__boxed_1849_ = lean_unbox_usize(v_x_1845_);
lean_dec(v_x_1845_);
v_res_1850_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1843_, v_x_13883__boxed_1848_, v_x_13884__boxed_1849_, v_x_1846_, v_x_1847_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object* v_x_1851_, lean_object* v_x_1852_, lean_object* v_x_1853_){
_start:
{
uint64_t v_configKey_1854_; lean_object* v_expr_1855_; lean_object* v_nargs_x3f_1856_; uint64_t v___x_1857_; uint64_t v___y_1859_; 
v_configKey_1854_ = lean_ctor_get_uint64(v_x_1852_, sizeof(void*)*2);
v_expr_1855_ = lean_ctor_get(v_x_1852_, 0);
v_nargs_x3f_1856_ = lean_ctor_get(v_x_1852_, 1);
v___x_1857_ = l_Lean_Expr_hash(v_expr_1855_);
if (lean_obj_tag(v_nargs_x3f_1856_) == 0)
{
uint64_t v___x_1865_; 
v___x_1865_ = 11ULL;
v___y_1859_ = v___x_1865_;
goto v___jp_1858_;
}
else
{
lean_object* v_val_1866_; uint64_t v___x_1867_; uint64_t v___x_1868_; uint64_t v___x_1869_; 
v_val_1866_ = lean_ctor_get(v_nargs_x3f_1856_, 0);
v___x_1867_ = lean_uint64_of_nat(v_val_1866_);
v___x_1868_ = 13ULL;
v___x_1869_ = lean_uint64_mix_hash(v___x_1867_, v___x_1868_);
v___y_1859_ = v___x_1869_;
goto v___jp_1858_;
}
v___jp_1858_:
{
uint64_t v___x_1860_; uint64_t v___x_1861_; size_t v___x_1862_; size_t v___x_1863_; lean_object* v___x_1864_; 
v___x_1860_ = lean_uint64_mix_hash(v___x_1857_, v___y_1859_);
v___x_1861_ = lean_uint64_mix_hash(v_configKey_1854_, v___x_1860_);
v___x_1862_ = lean_uint64_to_usize(v___x_1861_);
v___x_1863_ = ((size_t)1ULL);
v___x_1864_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1851_, v___x_1862_, v___x_1863_, v_x_1852_, v_x_1853_);
return v___x_1864_;
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object* v_x_1870_){
_start:
{
if (lean_obj_tag(v_x_1870_) == 0)
{
uint8_t v___x_1871_; 
v___x_1871_ = 0;
return v___x_1871_;
}
else
{
lean_object* v_head_1872_; lean_object* v_tail_1873_; uint8_t v___x_1874_; 
v_head_1872_ = lean_ctor_get(v_x_1870_, 0);
v_tail_1873_ = lean_ctor_get(v_x_1870_, 1);
v___x_1874_ = l_Lean_Level_hasMVar(v_head_1872_);
if (v___x_1874_ == 0)
{
v_x_1870_ = v_tail_1873_;
goto _start;
}
else
{
return v___x_1874_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object* v_x_1876_){
_start:
{
uint8_t v_res_1877_; lean_object* v_r_1878_; 
v_res_1877_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_x_1876_);
lean_dec(v_x_1876_);
v_r_1878_ = lean_box(v_res_1877_);
return v_r_1878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object* v_fn_1881_, lean_object* v_maxArgs_x3f_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v___x_1888_; 
lean_inc(v_maxArgs_x3f_1882_);
lean_inc_ref(v_fn_1881_);
v___x_1888_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_1881_, v_maxArgs_x3f_1882_, v_a_1883_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1953_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1891_ = v___x_1888_;
v_isShared_1892_ = v_isSharedCheck_1953_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1888_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1953_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v_finfo_1894_; lean_object* v___y_1895_; lean_object* v___x_1927_; lean_object* v_cache_1928_; lean_object* v_funInfo_1929_; lean_object* v___x_1930_; 
v___x_1927_ = lean_st_ref_get(v_a_1884_);
v_cache_1928_ = lean_ctor_get(v___x_1927_, 1);
lean_inc_ref(v_cache_1928_);
lean_dec(v___x_1927_);
v_funInfo_1929_ = lean_ctor_get(v_cache_1928_, 1);
lean_inc_ref(v_funInfo_1929_);
lean_dec_ref(v_cache_1928_);
v___x_1930_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_funInfo_1929_, v_a_1889_);
lean_dec_ref(v_funInfo_1929_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v___f_1931_; lean_object* v___f_1932_; 
v___f_1931_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0));
lean_inc(v_maxArgs_x3f_1882_);
lean_inc_ref(v_fn_1881_);
v___f_1932_ = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed), 8, 3);
lean_closure_set(v___f_1932_, 0, v_fn_1881_);
lean_closure_set(v___f_1932_, 1, v_maxArgs_x3f_1882_);
lean_closure_set(v___f_1932_, 2, v___f_1931_);
if (lean_obj_tag(v_fn_1881_) == 4)
{
lean_object* v_declName_1933_; lean_object* v_us_1934_; uint8_t v___x_1935_; 
v_declName_1933_ = lean_ctor_get(v_fn_1881_, 0);
v_us_1934_ = lean_ctor_get(v_fn_1881_, 1);
v___x_1935_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_us_1934_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
lean_inc(v_us_1934_);
lean_inc_n(v_declName_1933_, 2);
lean_dec_ref_known(v_fn_1881_, 2);
v___x_1936_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_1937_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
v___x_1938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1938_, 0, v_declName_1933_);
lean_ctor_set(v___x_1938_, 1, v_us_1934_);
lean_ctor_set(v___x_1938_, 2, v_maxArgs_x3f_1882_);
v___x_1939_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v___x_1936_, v___x_1937_, v_declName_1933_, v___x_1938_, v___f_1932_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v_finfo_1894_ = v_a_1940_;
v___y_1895_ = v_a_1884_;
goto v___jp_1893_;
}
else
{
lean_del_object(v___x_1891_);
lean_dec(v_a_1889_);
return v___x_1939_;
}
}
else
{
lean_object* v___x_1941_; 
lean_dec_ref(v___f_1932_);
lean_inc(v_a_1886_);
lean_inc_ref(v_a_1885_);
lean_inc(v_a_1884_);
lean_inc_ref(v_a_1883_);
v___x_1941_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1881_, v_maxArgs_x3f_1882_, v___f_1931_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v_finfo_1894_ = v_a_1942_;
v___y_1895_ = v_a_1884_;
goto v___jp_1893_;
}
else
{
lean_del_object(v___x_1891_);
lean_dec(v_a_1889_);
return v___x_1941_;
}
}
}
else
{
lean_object* v___x_1943_; 
lean_dec_ref(v___f_1932_);
lean_inc(v_a_1886_);
lean_inc_ref(v_a_1885_);
lean_inc(v_a_1884_);
lean_inc_ref(v_a_1883_);
v___x_1943_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1881_, v_maxArgs_x3f_1882_, v___f_1931_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
v_finfo_1894_ = v_a_1944_;
v___y_1895_ = v_a_1884_;
goto v___jp_1893_;
}
else
{
lean_del_object(v___x_1891_);
lean_dec(v_a_1889_);
return v___x_1943_;
}
}
}
else
{
lean_object* v_val_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_del_object(v___x_1891_);
lean_dec(v_a_1889_);
lean_dec(v_maxArgs_x3f_1882_);
lean_dec_ref(v_fn_1881_);
v_val_1945_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1930_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_val_1945_);
lean_dec(v___x_1930_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
lean_ctor_set_tag(v___x_1947_, 0);
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_val_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
v___jp_1893_:
{
lean_object* v___x_1896_; lean_object* v_cache_1897_; lean_object* v_mctx_1898_; lean_object* v_zetaDeltaFVarIds_1899_; lean_object* v_postponed_1900_; lean_object* v_diag_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1926_; 
v___x_1896_ = lean_st_ref_take(v___y_1895_);
v_cache_1897_ = lean_ctor_get(v___x_1896_, 1);
v_mctx_1898_ = lean_ctor_get(v___x_1896_, 0);
v_zetaDeltaFVarIds_1899_ = lean_ctor_get(v___x_1896_, 2);
v_postponed_1900_ = lean_ctor_get(v___x_1896_, 3);
v_diag_1901_ = lean_ctor_get(v___x_1896_, 4);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1903_ = v___x_1896_;
v_isShared_1904_ = v_isSharedCheck_1926_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_diag_1901_);
lean_inc(v_postponed_1900_);
lean_inc(v_zetaDeltaFVarIds_1899_);
lean_inc(v_cache_1897_);
lean_inc(v_mctx_1898_);
lean_dec(v___x_1896_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1926_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v_inferType_1905_; lean_object* v_funInfo_1906_; lean_object* v_synthInstance_1907_; lean_object* v_whnf_1908_; lean_object* v_defEqTrans_1909_; lean_object* v_defEqPerm_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1925_; 
v_inferType_1905_ = lean_ctor_get(v_cache_1897_, 0);
v_funInfo_1906_ = lean_ctor_get(v_cache_1897_, 1);
v_synthInstance_1907_ = lean_ctor_get(v_cache_1897_, 2);
v_whnf_1908_ = lean_ctor_get(v_cache_1897_, 3);
v_defEqTrans_1909_ = lean_ctor_get(v_cache_1897_, 4);
v_defEqPerm_1910_ = lean_ctor_get(v_cache_1897_, 5);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_cache_1897_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1912_ = v_cache_1897_;
v_isShared_1913_ = v_isSharedCheck_1925_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_defEqPerm_1910_);
lean_inc(v_defEqTrans_1909_);
lean_inc(v_whnf_1908_);
lean_inc(v_synthInstance_1907_);
lean_inc(v_funInfo_1906_);
lean_inc(v_inferType_1905_);
lean_dec(v_cache_1897_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1925_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1914_; lean_object* v___x_1916_; 
lean_inc_ref(v_finfo_1894_);
v___x_1914_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_funInfo_1906_, v_a_1889_, v_finfo_1894_);
if (v_isShared_1913_ == 0)
{
lean_ctor_set(v___x_1912_, 1, v___x_1914_);
v___x_1916_ = v___x_1912_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_inferType_1905_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v___x_1914_);
lean_ctor_set(v_reuseFailAlloc_1924_, 2, v_synthInstance_1907_);
lean_ctor_set(v_reuseFailAlloc_1924_, 3, v_whnf_1908_);
lean_ctor_set(v_reuseFailAlloc_1924_, 4, v_defEqTrans_1909_);
lean_ctor_set(v_reuseFailAlloc_1924_, 5, v_defEqPerm_1910_);
v___x_1916_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1918_; 
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 1, v___x_1916_);
v___x_1918_ = v___x_1903_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_mctx_1898_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1923_, 2, v_zetaDeltaFVarIds_1899_);
lean_ctor_set(v_reuseFailAlloc_1923_, 3, v_postponed_1900_);
lean_ctor_set(v_reuseFailAlloc_1923_, 4, v_diag_1901_);
v___x_1918_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
lean_object* v___x_1919_; lean_object* v___x_1921_; 
v___x_1919_ = lean_st_ref_set(v___y_1895_, v___x_1918_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 0, v_finfo_1894_);
v___x_1921_ = v___x_1891_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_finfo_1894_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
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
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec(v_maxArgs_x3f_1882_);
lean_dec_ref(v_fn_1881_);
v_a_1954_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1888_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1888_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object* v_fn_1962_, lean_object* v_maxArgs_x3f_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_1962_, v_maxArgs_x3f_1963_, v_a_1964_, v_a_1965_, v_a_1966_, v_a_1967_);
lean_dec(v_a_1967_);
lean_dec_ref(v_a_1966_);
lean_dec(v_a_1965_);
lean_dec_ref(v_a_1964_);
return v_res_1969_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object* v_00_u03b2_1970_, lean_object* v_k_1971_, lean_object* v_t_1972_){
_start:
{
uint8_t v___x_1973_; 
v___x_1973_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_1971_, v_t_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object* v_00_u03b2_1974_, lean_object* v_k_1975_, lean_object* v_t_1976_){
_start:
{
uint8_t v_res_1977_; lean_object* v_r_1978_; 
v_res_1977_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(v_00_u03b2_1974_, v_k_1975_, v_t_1976_);
lean_dec(v_t_1976_);
lean_dec(v_k_1975_);
v_r_1978_ = lean_box(v_res_1977_);
return v_r_1978_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object* v_upperBound_1979_, lean_object* v_val_1980_, lean_object* v___x_1981_, lean_object* v_fvars_1982_, uint8_t v___y_1983_, lean_object* v_inst_1984_, lean_object* v_R_1985_, lean_object* v_a_1986_, lean_object* v_b_1987_, lean_object* v_c_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v___x_1994_; 
v___x_1994_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_1979_, v_val_1980_, v___x_1981_, v_fvars_1982_, v___y_1983_, v_a_1986_, v_b_1987_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object* v_upperBound_1995_, lean_object* v_val_1996_, lean_object* v___x_1997_, lean_object* v_fvars_1998_, lean_object* v___y_1999_, lean_object* v_inst_2000_, lean_object* v_R_2001_, lean_object* v_a_2002_, lean_object* v_b_2003_, lean_object* v_c_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
uint8_t v___y_14238__boxed_2010_; lean_object* v_res_2011_; 
v___y_14238__boxed_2010_ = lean_unbox(v___y_1999_);
v_res_2011_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(v_upperBound_1995_, v_val_1996_, v___x_1997_, v_fvars_1998_, v___y_14238__boxed_2010_, v_inst_2000_, v_R_2001_, v_a_2002_, v_b_2003_, v_c_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec_ref(v_fvars_1998_);
lean_dec_ref(v___x_1997_);
lean_dec_ref(v_val_1996_);
lean_dec(v_upperBound_1995_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object* v_upperBound_2012_, lean_object* v_fvars_2013_, lean_object* v_inst_2014_, lean_object* v_R_2015_, lean_object* v_a_2016_, lean_object* v_b_2017_, lean_object* v_c_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_2012_, v_fvars_2013_, v_a_2016_, v_b_2017_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object* v_upperBound_2025_, lean_object* v_fvars_2026_, lean_object* v_inst_2027_, lean_object* v_R_2028_, lean_object* v_a_2029_, lean_object* v_b_2030_, lean_object* v_c_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(v_upperBound_2025_, v_fvars_2026_, v_inst_2027_, v_R_2028_, v_a_2029_, v_b_2030_, v_c_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec_ref(v_fvars_2026_);
lean_dec(v_upperBound_2025_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object* v_00_u03b2_2038_, lean_object* v_x_2039_, lean_object* v_x_2040_, lean_object* v_x_2041_){
_start:
{
lean_object* v___x_2042_; 
v___x_2042_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_x_2039_, v_x_2040_, v_x_2041_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object* v_00_u03b2_2043_, lean_object* v_x_2044_, lean_object* v_x_2045_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_2044_, v_x_2045_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object* v_00_u03b2_2047_, lean_object* v_x_2048_, lean_object* v_x_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(v_00_u03b2_2047_, v_x_2048_, v_x_2049_);
lean_dec_ref(v_x_2049_);
lean_dec_ref(v_x_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object* v_00_u03b2_2051_, lean_object* v_msg_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object* v_00_u03b2_2059_, lean_object* v_msg_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(v_00_u03b2_2059_, v_msg_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object* v_00_u03b2_2067_, lean_object* v_inst_2068_, lean_object* v_inst_2069_, lean_object* v_forConst_2070_, lean_object* v_key_2071_, lean_object* v_realize_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_){
_start:
{
lean_object* v___x_2078_; 
v___x_2078_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_2068_, v_inst_2069_, v_forConst_2070_, v_key_2071_, v_realize_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object* v_00_u03b2_2079_, lean_object* v_inst_2080_, lean_object* v_inst_2081_, lean_object* v_forConst_2082_, lean_object* v_key_2083_, lean_object* v_realize_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(v_00_u03b2_2079_, v_inst_2080_, v_inst_2081_, v_forConst_2082_, v_key_2083_, v_realize_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_);
lean_dec(v_a_2088_);
lean_dec_ref(v_a_2087_);
lean_dec(v_a_2086_);
lean_dec_ref(v_a_2085_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object* v_00_u03b2_2091_, lean_object* v_x_2092_, size_t v_x_2093_, size_t v_x_2094_, lean_object* v_x_2095_, lean_object* v_x_2096_){
_start:
{
lean_object* v___x_2097_; 
v___x_2097_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_2092_, v_x_2093_, v_x_2094_, v_x_2095_, v_x_2096_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object* v_00_u03b2_2098_, lean_object* v_x_2099_, lean_object* v_x_2100_, lean_object* v_x_2101_, lean_object* v_x_2102_, lean_object* v_x_2103_){
_start:
{
size_t v_x_14335__boxed_2104_; size_t v_x_14336__boxed_2105_; lean_object* v_res_2106_; 
v_x_14335__boxed_2104_ = lean_unbox_usize(v_x_2100_);
lean_dec(v_x_2100_);
v_x_14336__boxed_2105_ = lean_unbox_usize(v_x_2101_);
lean_dec(v_x_2101_);
v_res_2106_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(v_00_u03b2_2098_, v_x_2099_, v_x_14335__boxed_2104_, v_x_14336__boxed_2105_, v_x_2102_, v_x_2103_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object* v_00_u03b2_2107_, lean_object* v_x_2108_, size_t v_x_2109_, lean_object* v_x_2110_){
_start:
{
lean_object* v___x_2111_; 
v___x_2111_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_2108_, v_x_2109_, v_x_2110_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object* v_00_u03b2_2112_, lean_object* v_x_2113_, lean_object* v_x_2114_, lean_object* v_x_2115_){
_start:
{
size_t v_x_14352__boxed_2116_; lean_object* v_res_2117_; 
v_x_14352__boxed_2116_ = lean_unbox_usize(v_x_2114_);
lean_dec(v_x_2114_);
v_res_2117_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(v_00_u03b2_2112_, v_x_2113_, v_x_14352__boxed_2116_, v_x_2115_);
lean_dec_ref(v_x_2115_);
lean_dec_ref(v_x_2113_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object* v_00_u03b2_2118_, lean_object* v_n_2119_, lean_object* v_k_2120_, lean_object* v_v_2121_){
_start:
{
lean_object* v___x_2122_; 
v___x_2122_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v_n_2119_, v_k_2120_, v_v_2121_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object* v_00_u03b2_2123_, size_t v_depth_2124_, lean_object* v_keys_2125_, lean_object* v_vals_2126_, lean_object* v_heq_2127_, lean_object* v_i_2128_, lean_object* v_entries_2129_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_2124_, v_keys_2125_, v_vals_2126_, v_i_2128_, v_entries_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object* v_00_u03b2_2131_, lean_object* v_depth_2132_, lean_object* v_keys_2133_, lean_object* v_vals_2134_, lean_object* v_heq_2135_, lean_object* v_i_2136_, lean_object* v_entries_2137_){
_start:
{
size_t v_depth_boxed_2138_; lean_object* v_res_2139_; 
v_depth_boxed_2138_ = lean_unbox_usize(v_depth_2132_);
lean_dec(v_depth_2132_);
v_res_2139_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(v_00_u03b2_2131_, v_depth_boxed_2138_, v_keys_2133_, v_vals_2134_, v_heq_2135_, v_i_2136_, v_entries_2137_);
lean_dec_ref(v_vals_2134_);
lean_dec_ref(v_keys_2133_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object* v_00_u03b2_2140_, lean_object* v_keys_2141_, lean_object* v_vals_2142_, lean_object* v_heq_2143_, lean_object* v_i_2144_, lean_object* v_k_2145_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_2141_, v_vals_2142_, v_i_2144_, v_k_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2147_, lean_object* v_keys_2148_, lean_object* v_vals_2149_, lean_object* v_heq_2150_, lean_object* v_i_2151_, lean_object* v_k_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(v_00_u03b2_2147_, v_keys_2148_, v_vals_2149_, v_heq_2150_, v_i_2151_, v_k_2152_);
lean_dec_ref(v_k_2152_);
lean_dec_ref(v_vals_2149_);
lean_dec_ref(v_keys_2148_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object* v_00_u03b2_2154_, lean_object* v_x_2155_, lean_object* v_x_2156_){
_start:
{
lean_object* v___x_2157_; 
v___x_2157_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_2155_, v_x_2156_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object* v_00_u03b2_2158_, lean_object* v_x_2159_, lean_object* v_x_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(v_00_u03b2_2158_, v_x_2159_, v_x_2160_);
lean_dec_ref(v_x_2160_);
lean_dec_ref(v_x_2159_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object* v_00_u03b2_2162_, lean_object* v_x_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_){
_start:
{
lean_object* v___x_2166_; 
v___x_2166_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v_x_2163_, v_x_2164_, v_x_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object* v_00_u03b2_2167_, lean_object* v_x_2168_, lean_object* v_x_2169_, lean_object* v_x_2170_, lean_object* v_x_2171_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_x_2168_, v_x_2169_, v_x_2170_, v_x_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object* v_00_u03b2_2173_, lean_object* v_x_2174_, size_t v_x_2175_, lean_object* v_x_2176_){
_start:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_2174_, v_x_2175_, v_x_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object* v_00_u03b2_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_, lean_object* v_x_2181_){
_start:
{
size_t v_x_14395__boxed_2182_; lean_object* v_res_2183_; 
v_x_14395__boxed_2182_ = lean_unbox_usize(v_x_2180_);
lean_dec(v_x_2180_);
v_res_2183_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(v_00_u03b2_2178_, v_x_2179_, v_x_14395__boxed_2182_, v_x_2181_);
lean_dec_ref(v_x_2181_);
lean_dec_ref(v_x_2179_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object* v_00_u03b2_2184_, lean_object* v_x_2185_, size_t v_x_2186_, size_t v_x_2187_, lean_object* v_x_2188_, lean_object* v_x_2189_){
_start:
{
lean_object* v___x_2190_; 
v___x_2190_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_2185_, v_x_2186_, v_x_2187_, v_x_2188_, v_x_2189_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object* v_00_u03b2_2191_, lean_object* v_x_2192_, lean_object* v_x_2193_, lean_object* v_x_2194_, lean_object* v_x_2195_, lean_object* v_x_2196_){
_start:
{
size_t v_x_14406__boxed_2197_; size_t v_x_14407__boxed_2198_; lean_object* v_res_2199_; 
v_x_14406__boxed_2197_ = lean_unbox_usize(v_x_2193_);
lean_dec(v_x_2193_);
v_x_14407__boxed_2198_ = lean_unbox_usize(v_x_2194_);
lean_dec(v_x_2194_);
v_res_2199_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(v_00_u03b2_2191_, v_x_2192_, v_x_14406__boxed_2197_, v_x_14407__boxed_2198_, v_x_2195_, v_x_2196_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object* v_00_u03b2_2200_, lean_object* v_keys_2201_, lean_object* v_vals_2202_, lean_object* v_heq_2203_, lean_object* v_i_2204_, lean_object* v_k_2205_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_2201_, v_vals_2202_, v_i_2204_, v_k_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object* v_00_u03b2_2207_, lean_object* v_keys_2208_, lean_object* v_vals_2209_, lean_object* v_heq_2210_, lean_object* v_i_2211_, lean_object* v_k_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(v_00_u03b2_2207_, v_keys_2208_, v_vals_2209_, v_heq_2210_, v_i_2211_, v_k_2212_);
lean_dec_ref(v_k_2212_);
lean_dec_ref(v_vals_2209_);
lean_dec_ref(v_keys_2208_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object* v_00_u03b2_2214_, lean_object* v_n_2215_, lean_object* v_k_2216_, lean_object* v_v_2217_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v_n_2215_, v_k_2216_, v_v_2217_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object* v_00_u03b2_2219_, size_t v_depth_2220_, lean_object* v_keys_2221_, lean_object* v_vals_2222_, lean_object* v_heq_2223_, lean_object* v_i_2224_, lean_object* v_entries_2225_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_2220_, v_keys_2221_, v_vals_2222_, v_i_2224_, v_entries_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object* v_00_u03b2_2227_, lean_object* v_depth_2228_, lean_object* v_keys_2229_, lean_object* v_vals_2230_, lean_object* v_heq_2231_, lean_object* v_i_2232_, lean_object* v_entries_2233_){
_start:
{
size_t v_depth_boxed_2234_; lean_object* v_res_2235_; 
v_depth_boxed_2234_ = lean_unbox_usize(v_depth_2228_);
lean_dec(v_depth_2228_);
v_res_2235_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(v_00_u03b2_2227_, v_depth_boxed_2234_, v_keys_2229_, v_vals_2230_, v_heq_2231_, v_i_2232_, v_entries_2233_);
lean_dec_ref(v_vals_2230_);
lean_dec_ref(v_keys_2229_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23(lean_object* v_00_u03b2_2236_, lean_object* v_x_2237_, lean_object* v_x_2238_, lean_object* v_x_2239_, lean_object* v_x_2240_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__23___redArg(v_x_2237_, v_x_2238_, v_x_2239_, v_x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object* v_fn_2242_, lean_object* v_maxArgs_x3f_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2242_, v_maxArgs_x3f_2243_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object* v_fn_2250_, lean_object* v_maxArgs_x3f_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_){
_start:
{
lean_object* v_res_2257_; 
v_res_2257_ = l_Lean_Meta_getFunInfo(v_fn_2250_, v_maxArgs_x3f_2251_, v_a_2252_, v_a_2253_, v_a_2254_, v_a_2255_);
lean_dec(v_a_2255_);
lean_dec_ref(v_a_2254_);
lean_dec(v_a_2253_);
lean_dec_ref(v_a_2252_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object* v_fn_2258_, lean_object* v_nargs_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2265_, 0, v_nargs_2259_);
v___x_2266_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2258_, v___x_2265_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object* v_fn_2267_, lean_object* v_nargs_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l_Lean_Meta_getFunInfoNArgs(v_fn_2267_, v_nargs_2268_, v_a_2269_, v_a_2270_, v_a_2271_, v_a_2272_);
lean_dec(v_a_2272_);
lean_dec_ref(v_a_2271_);
lean_dec(v_a_2270_);
lean_dec_ref(v_a_2269_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object* v_info_2275_){
_start:
{
lean_object* v_paramInfo_2276_; lean_object* v___x_2277_; 
v_paramInfo_2276_ = lean_ctor_get(v_info_2275_, 0);
v___x_2277_ = lean_array_get_size(v_paramInfo_2276_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object* v_info_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lean_Meta_FunInfo_getArity(v_info_2278_);
lean_dec_ref(v_info_2278_);
return v_res_2279_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_FunInfo(builtin);
}
#ifdef __cplusplus
}
#endif
