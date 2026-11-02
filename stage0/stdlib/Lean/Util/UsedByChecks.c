// Lean compiler output
// Module: Lean.Util.UsedByChecks
// Imports: public import Lean.Data.NameMap.Basic public import Lean.Declaration public import Init.System.IO import Lean.Util.FoldConsts
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
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_FoldConstsImpl_fold___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3283505831____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3283505831____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef;
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_220753446____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_220753446____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_usedByChecksRef;
static const lean_array_object l___private_Lean_Util_UsedByChecks_0__Lean_initFn___closed__0_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn___closed__0_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_UsedByChecks_0__Lean_initFn___closed__0_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_specLookupsRef;
lean_object* lean_usage_enable_resolved();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_enableResolvedRecording___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_enableUsageRecording();
LEAN_EXPORT lean_object* l_Lean_enableUsageRecording___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_usageRecordingEnabled();
LEAN_EXPORT lean_object* l_Lean_usageRecordingEnabled___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_usage_record_used(lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordUsedName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_usedNames();
LEAN_EXPORT lean_object* l_Lean_usedNames___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordSpecLookup(lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordSpecLookup___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_lookedUpSpecKeys();
LEAN_EXPORT lean_object* l_Lean_lookedUpSpecKeys___boxed(lean_object*);
lean_object* lean_usage_note_resolved(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_noteResolved___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_usage_note_all_resolved(lean_object*);
LEAN_EXPORT lean_object* l_Lean_noteAllResolved___boxed(lean_object*, lean_object*);
lean_object* lean_usage_resolved_names();
LEAN_EXPORT lean_object* l_Lean_resolvedNames___boxed(lean_object*);
uint8_t lean_usage_all_resolved();
LEAN_EXPORT lean_object* l_Lean_allResolved___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3237528688____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3237528688____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_compilerCodeRef;
LEAN_EXPORT lean_object* l_Lean_recordCompilerCode();
LEAN_EXPORT lean_object* l_Lean_recordCompilerCode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_compilerCodeSeen();
LEAN_EXPORT lean_object* l_Lean_compilerCodeSeen___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_1088975926____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_1088975926____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_pluginLoadingRef;
LEAN_EXPORT lean_object* l_Lean_withPluginLoading___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withPluginLoading___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withPluginLoading(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withPluginLoading___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_pluginLoading();
LEAN_EXPORT lean_object* l_Lean_pluginLoading___boxed(lean_object*);
static const lean_string_object l_Lean_inCompileOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_inCompile"};
static const lean_object* l_Lean_inCompileOption___closed__0 = (const lean_object*)&l_Lean_inCompileOption___closed__0_value;
static const lean_ctor_object l_Lean_inCompileOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_inCompileOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 181, 15, 64, 171, 123, 31, 44)}};
static const lean_object* l_Lean_inCompileOption___closed__1 = (const lean_object*)&l_Lean_inCompileOption___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_inCompileOption = (const lean_object*)&l_Lean_inCompileOption___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordIfCompiling(lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIfCompiling___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2584013828____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2584013828____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_compileHintsRef;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordHintsIfCompiling_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordHintsIfCompiling_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordHintsIfCompiling(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordHintsIfCompiling___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_compileHints();
LEAN_EXPORT lean_object* l_Lean_compileHints___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2543333316____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2543333316____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_declConstsRef;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_UsedByChecks_0__Lean_declConstVals_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_UsedByChecks_0__Lean_declConstVals_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_declConstVals(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0 = (const lean_object*)&l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordDeclConsts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordDeclConsts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordedDeclConsts();
LEAN_EXPORT lean_object* l_Lean_recordedDeclConsts___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3283505831____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_2_ = 0;
v___x_3_ = lean_box(v___x_2_);
v___x_4_ = lean_st_mk_ref(v___x_3_);
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3283505831____hygCtx___hyg_2____boxed(lean_object* v_a_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3283505831____hygCtx___hyg_2_();
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_220753446____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = l_Lean_NameSet_empty;
v___x_10_ = lean_st_mk_ref(v___x_9_);
v___x_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_220753446____hygCtx___hyg_2____boxed(lean_object* v_a_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_220753446____hygCtx___hyg_2_();
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = ((lean_object*)(l___private_Lean_Util_UsedByChecks_0__Lean_initFn___closed__0_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2_));
v___x_18_ = lean_st_mk_ref(v___x_17_);
v___x_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2____boxed(lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2_();
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_enableResolvedRecording___boxed(lean_object* v_a_00___x40___internal___hyg_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lean_usage_enable_resolved();
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_enableUsageRecording(){
_start:
{
lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_26_ = l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef;
v___x_27_ = 1;
v___x_28_ = lean_box(v___x_27_);
v___x_29_ = lean_st_ref_swap(v___x_26_, v___x_28_);
lean_dec(v___x_29_);
v___x_30_ = lean_usage_enable_resolved();
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_enableUsageRecording___boxed(lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_enableUsageRecording();
return v_res_32_;
}
}
LEAN_EXPORT uint8_t l_Lean_usageRecordingEnabled(){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v___x_34_ = l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef;
v___x_35_ = lean_st_ref_get(v___x_34_);
v___x_36_ = lean_unbox(v___x_35_);
lean_dec(v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_usageRecordingEnabled___boxed(lean_object* v_a_37_){
_start:
{
uint8_t v_res_38_; lean_object* v_r_39_; 
v_res_38_ = l_Lean_usageRecordingEnabled();
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT lean_object* lean_usage_record_used(lean_object* v_n_40_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_42_ = l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef;
v___x_43_ = lean_st_ref_get(v___x_42_);
v___x_44_ = lean_unbox(v___x_43_);
lean_dec(v___x_43_);
if (v___x_44_ == 0)
{
lean_object* v___x_45_; 
lean_dec(v_n_40_);
v___x_45_ = lean_box(0);
return v___x_45_;
}
else
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_46_ = l___private_Lean_Util_UsedByChecks_0__Lean_usedByChecksRef;
v___x_47_ = lean_st_ref_take(v___x_46_);
v___x_48_ = l_Lean_NameSet_insert(v___x_47_, v_n_40_);
v___x_49_ = lean_st_ref_put(v___x_46_, v___x_48_);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordUsedName___boxed(lean_object* v_n_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = lean_usage_record_used(v_n_50_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_usedNames(){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = l___private_Lean_Util_UsedByChecks_0__Lean_usedByChecksRef;
v___x_55_ = lean_st_ref_get(v___x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_usedNames___boxed(lean_object* v_a_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_usedNames();
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordSpecLookup(lean_object* v_key_58_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_60_ = l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef;
v___x_61_ = lean_st_ref_get(v___x_60_);
v___x_62_ = lean_unbox(v___x_61_);
lean_dec(v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; 
lean_dec_ref(v_key_58_);
v___x_63_ = lean_box(0);
return v___x_63_;
}
else
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = l___private_Lean_Util_UsedByChecks_0__Lean_specLookupsRef;
v___x_65_ = lean_st_ref_take(v___x_64_);
v___x_66_ = lean_array_push(v___x_65_, v_key_58_);
v___x_67_ = lean_st_ref_put(v___x_64_, v___x_66_);
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordSpecLookup___boxed(lean_object* v_key_68_, lean_object* v_a_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_recordSpecLookup(v_key_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_lookedUpSpecKeys(){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = l___private_Lean_Util_UsedByChecks_0__Lean_specLookupsRef;
v___x_73_ = lean_st_ref_get(v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_lookedUpSpecKeys___boxed(lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_lookedUpSpecKeys();
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_noteResolved___boxed(lean_object* v_00_u03b1_79_, lean_object* v_n_80_, lean_object* v_x_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = lean_usage_note_resolved(v_n_80_, v_x_81_);
lean_dec(v_n_80_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_noteAllResolved___boxed(lean_object* v_00_u03b1_85_, lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = lean_usage_note_all_resolved(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolvedNames___boxed(lean_object* v_a_00___x40___internal___hyg_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = lean_usage_resolved_names();
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_allResolved___boxed(lean_object* v_a_00___x40___internal___hyg_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = lean_usage_all_resolved();
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3237528688____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_96_ = 0;
v___x_97_ = lean_box(v___x_96_);
v___x_98_ = lean_st_mk_ref(v___x_97_);
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3237528688____hygCtx___hyg_2____boxed(lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3237528688____hygCtx___hyg_2_();
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordCompilerCode(){
_start:
{
lean_object* v___x_103_; uint8_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_103_ = l___private_Lean_Util_UsedByChecks_0__Lean_compilerCodeRef;
v___x_104_ = 1;
v___x_105_ = lean_box(0);
v___x_106_ = lean_box(v___x_104_);
v___x_107_ = lean_st_ref_swap(v___x_103_, v___x_106_);
lean_dec(v___x_107_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordCompilerCode___boxed(lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_recordCompilerCode();
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l_Lean_compilerCodeSeen(){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_111_ = l___private_Lean_Util_UsedByChecks_0__Lean_compilerCodeRef;
v___x_112_ = lean_st_ref_get(v___x_111_);
v___x_113_ = lean_unbox(v___x_112_);
lean_dec(v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_compilerCodeSeen___boxed(lean_object* v_a_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = l_Lean_compilerCodeSeen();
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_1088975926____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_118_ = 0;
v___x_119_ = lean_box(v___x_118_);
v___x_120_ = lean_st_mk_ref(v___x_119_);
v___x_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_1088975926____hygCtx___hyg_2____boxed(lean_object* v_a_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_1088975926____hygCtx___hyg_2_();
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_withPluginLoading___redArg(lean_object* v_act_124_){
_start:
{
lean_object* v___x_126_; uint8_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v_r_131_; 
v___x_126_ = l___private_Lean_Util_UsedByChecks_0__Lean_pluginLoadingRef;
v___x_127_ = 1;
v___x_128_ = lean_box(v___x_127_);
v___x_129_ = lean_st_ref_swap(v___x_126_, v___x_128_);
lean_dec(v___x_129_);
v___x_130_ = 0;
v_r_131_ = lean_apply_1(v_act_124_, lean_box(0));
if (lean_obj_tag(v_r_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_141_; 
v_a_132_ = lean_ctor_get(v_r_131_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v_r_131_);
if (v_isSharedCheck_141_ == 0)
{
v___x_134_ = v_r_131_;
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v_r_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_136_ = lean_box(v___x_130_);
v___x_137_ = lean_st_ref_swap(v___x_126_, v___x_136_);
lean_dec(v___x_137_);
if (v_isShared_135_ == 0)
{
v___x_139_ = v___x_134_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_132_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_151_; 
v_a_142_ = lean_ctor_get(v_r_131_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v_r_131_);
if (v_isSharedCheck_151_ == 0)
{
v___x_144_ = v_r_131_;
v_isShared_145_ = v_isSharedCheck_151_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v_r_131_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_151_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_146_ = lean_box(v___x_130_);
v___x_147_ = lean_st_ref_swap(v___x_126_, v___x_146_);
lean_dec(v___x_147_);
if (v_isShared_145_ == 0)
{
v___x_149_ = v___x_144_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_142_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withPluginLoading___redArg___boxed(lean_object* v_act_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_withPluginLoading___redArg(v_act_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_withPluginLoading(lean_object* v_00_u03b1_155_, lean_object* v_act_156_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_withPluginLoading___redArg(v_act_156_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_withPluginLoading___boxed(lean_object* v_00_u03b1_159_, lean_object* v_act_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_withPluginLoading(v_00_u03b1_159_, v_act_160_);
return v_res_162_;
}
}
LEAN_EXPORT uint8_t l_Lean_pluginLoading(){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_164_ = l___private_Lean_Util_UsedByChecks_0__Lean_pluginLoadingRef;
v___x_165_ = lean_st_ref_get(v___x_164_);
v___x_166_ = lean_unbox(v___x_165_);
lean_dec(v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_pluginLoading___boxed(lean_object* v_a_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Lean_pluginLoading();
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIfCompiling(lean_object* v_opts_174_){
_start:
{
lean_object* v_map_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_map_178_ = lean_ctor_get(v_opts_174_, 0);
v___x_179_ = ((lean_object*)(l_Lean_inCompileOption));
v___x_180_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_178_, v___x_179_);
if (lean_obj_tag(v___x_180_) == 0)
{
goto v___jp_176_;
}
else
{
lean_object* v_val_181_; 
v_val_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_val_181_);
lean_dec_ref_known(v___x_180_, 1);
if (lean_obj_tag(v_val_181_) == 1)
{
uint8_t v_v_182_; 
v_v_182_ = lean_ctor_get_uint8(v_val_181_, 0);
lean_dec_ref_known(v_val_181_, 0);
if (v_v_182_ == 0)
{
goto v___jp_176_;
}
else
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_recordCompilerCode();
return v___x_183_;
}
}
else
{
lean_dec(v_val_181_);
goto v___jp_176_;
}
}
v___jp_176_:
{
lean_object* v___x_177_; 
v___x_177_ = lean_box(0);
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIfCompiling___boxed(lean_object* v_opts_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_recordIfCompiling(v_opts_184_);
lean_dec_ref(v_opts_184_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2584013828____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = l_Lean_NameSet_empty;
v___x_189_ = lean_st_mk_ref(v___x_188_);
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2584013828____hygCtx___hyg_2____boxed(lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2584013828____hygCtx___hyg_2_();
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordHintsIfCompiling_spec__0(lean_object* v_as_193_, size_t v_i_194_, size_t v_stop_195_, lean_object* v_b_196_){
_start:
{
uint8_t v___x_197_; 
v___x_197_ = lean_usize_dec_eq(v_i_194_, v_stop_195_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; size_t v___x_200_; size_t v___x_201_; 
v___x_198_ = lean_array_uget_borrowed(v_as_193_, v_i_194_);
lean_inc(v___x_198_);
v___x_199_ = l_Lean_NameSet_insert(v_b_196_, v___x_198_);
v___x_200_ = ((size_t)1ULL);
v___x_201_ = lean_usize_add(v_i_194_, v___x_200_);
v_i_194_ = v___x_201_;
v_b_196_ = v___x_199_;
goto _start;
}
else
{
return v_b_196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordHintsIfCompiling_spec__0___boxed(lean_object* v_as_203_, lean_object* v_i_204_, lean_object* v_stop_205_, lean_object* v_b_206_){
_start:
{
size_t v_i_boxed_207_; size_t v_stop_boxed_208_; lean_object* v_res_209_; 
v_i_boxed_207_ = lean_unbox_usize(v_i_204_);
lean_dec(v_i_204_);
v_stop_boxed_208_ = lean_unbox_usize(v_stop_205_);
lean_dec(v_stop_205_);
v_res_209_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordHintsIfCompiling_spec__0(v_as_203_, v_i_boxed_207_, v_stop_boxed_208_, v_b_206_);
lean_dec_ref(v_as_203_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordHintsIfCompiling(lean_object* v_opts_210_, lean_object* v_hints_211_){
_start:
{
lean_object* v_map_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_map_215_ = lean_ctor_get(v_opts_210_, 0);
v___x_216_ = ((lean_object*)(l_Lean_inCompileOption));
v___x_217_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_215_, v___x_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
goto v___jp_213_;
}
else
{
lean_object* v_val_218_; 
v_val_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_val_218_);
lean_dec_ref_known(v___x_217_, 1);
if (lean_obj_tag(v_val_218_) == 1)
{
uint8_t v_v_219_; 
v_v_219_ = lean_ctor_get_uint8(v_val_218_, 0);
lean_dec_ref_known(v_val_218_, 0);
if (v_v_219_ == 0)
{
goto v___jp_213_;
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_220_ = l___private_Lean_Util_UsedByChecks_0__Lean_compileHintsRef;
v___x_221_ = lean_st_ref_take(v___x_220_);
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = lean_array_get_size(v_hints_211_);
v___x_224_ = lean_nat_dec_lt(v___x_222_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; 
v___x_225_ = lean_st_ref_put(v___x_220_, v___x_221_);
return v___x_225_;
}
else
{
size_t v___x_226_; size_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_226_ = ((size_t)0ULL);
v___x_227_ = lean_usize_of_nat(v___x_223_);
v___x_228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordHintsIfCompiling_spec__0(v_hints_211_, v___x_226_, v___x_227_, v___x_221_);
v___x_229_ = lean_st_ref_put(v___x_220_, v___x_228_);
return v___x_229_;
}
}
}
else
{
lean_dec(v_val_218_);
goto v___jp_213_;
}
}
v___jp_213_:
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(0);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordHintsIfCompiling___boxed(lean_object* v_opts_230_, lean_object* v_hints_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_recordHintsIfCompiling(v_opts_230_, v_hints_231_);
lean_dec_ref(v_hints_231_);
lean_dec_ref(v_opts_230_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_compileHints(){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = l___private_Lean_Util_UsedByChecks_0__Lean_compileHintsRef;
v___x_236_ = lean_st_ref_get(v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_compileHints___boxed(lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_compileHints();
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2543333316____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_box(1);
v___x_241_ = lean_st_mk_ref(v___x_240_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2543333316____hygCtx___hyg_2____boxed(lean_object* v_a_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2543333316____hygCtx___hyg_2_();
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_UsedByChecks_0__Lean_declConstVals_spec__0(size_t v_sz_245_, size_t v_i_246_, lean_object* v_bs_247_){
_start:
{
uint8_t v___x_248_; 
v___x_248_ = lean_usize_dec_lt(v_i_246_, v_sz_245_);
if (v___x_248_ == 0)
{
return v_bs_247_;
}
else
{
lean_object* v_v_249_; lean_object* v_toConstantVal_250_; lean_object* v_value_251_; lean_object* v_name_252_; lean_object* v_type_253_; lean_object* v___x_254_; lean_object* v_bs_x27_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v_v_249_ = lean_array_uget_borrowed(v_bs_247_, v_i_246_);
v_toConstantVal_250_ = lean_ctor_get(v_v_249_, 0);
v_value_251_ = lean_ctor_get(v_v_249_, 1);
lean_inc_ref(v_value_251_);
v_name_252_ = lean_ctor_get(v_toConstantVal_250_, 0);
lean_inc(v_name_252_);
v_type_253_ = lean_ctor_get(v_toConstantVal_250_, 2);
lean_inc_ref(v_type_253_);
v___x_254_ = lean_unsigned_to_nat(0u);
v_bs_x27_255_ = lean_array_uset(v_bs_247_, v_i_246_, v___x_254_);
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v_value_251_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_type_253_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v_name_252_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = ((size_t)1ULL);
v___x_260_ = lean_usize_add(v_i_246_, v___x_259_);
v___x_261_ = lean_array_uset(v_bs_x27_255_, v_i_246_, v___x_258_);
v_i_246_ = v___x_260_;
v_bs_247_ = v___x_261_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_UsedByChecks_0__Lean_declConstVals_spec__0___boxed(lean_object* v_sz_263_, lean_object* v_i_264_, lean_object* v_bs_265_){
_start:
{
size_t v_sz_boxed_266_; size_t v_i_boxed_267_; lean_object* v_res_268_; 
v_sz_boxed_266_ = lean_unbox_usize(v_sz_263_);
lean_dec(v_sz_263_);
v_i_boxed_267_ = lean_unbox_usize(v_i_264_);
lean_dec(v_i_264_);
v_res_268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_UsedByChecks_0__Lean_declConstVals_spec__0(v_sz_boxed_266_, v_i_boxed_267_, v_bs_265_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_UsedByChecks_0__Lean_declConstVals(lean_object* v_x_269_){
_start:
{
switch(lean_obj_tag(v_x_269_))
{
case 0:
{
lean_object* v_val_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_286_; 
v_val_270_ = lean_ctor_get(v_x_269_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v_x_269_);
if (v_isSharedCheck_286_ == 0)
{
v___x_272_ = v_x_269_;
v_isShared_273_ = v_isSharedCheck_286_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_val_270_);
lean_dec(v_x_269_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_286_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_toConstantVal_274_; lean_object* v_name_275_; lean_object* v_type_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v_toConstantVal_274_ = lean_ctor_get(v_val_270_, 0);
lean_inc_ref(v_toConstantVal_274_);
lean_dec_ref(v_val_270_);
v_name_275_ = lean_ctor_get(v_toConstantVal_274_, 0);
lean_inc(v_name_275_);
v_type_276_ = lean_ctor_get(v_toConstantVal_274_, 2);
lean_inc_ref(v_type_276_);
lean_dec_ref(v_toConstantVal_274_);
v___x_277_ = lean_box(0);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v_type_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v_name_275_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = lean_mk_empty_array_with_capacity(v___x_280_);
v___x_282_ = lean_array_push(v___x_281_, v___x_279_);
if (v_isShared_273_ == 0)
{
lean_ctor_set_tag(v___x_272_, 1);
lean_ctor_set(v___x_272_, 0, v___x_282_);
v___x_284_ = v___x_272_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
case 1:
{
lean_object* v_val_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_304_; 
v_val_287_ = lean_ctor_get(v_x_269_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_x_269_);
if (v_isSharedCheck_304_ == 0)
{
v___x_289_ = v_x_269_;
v_isShared_290_ = v_isSharedCheck_304_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_val_287_);
lean_dec(v_x_269_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_304_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v_toConstantVal_291_; lean_object* v_value_292_; lean_object* v_name_293_; lean_object* v_type_294_; lean_object* v___x_296_; 
v_toConstantVal_291_ = lean_ctor_get(v_val_287_, 0);
lean_inc_ref(v_toConstantVal_291_);
v_value_292_ = lean_ctor_get(v_val_287_, 1);
lean_inc_ref(v_value_292_);
lean_dec_ref(v_val_287_);
v_name_293_ = lean_ctor_get(v_toConstantVal_291_, 0);
lean_inc(v_name_293_);
v_type_294_ = lean_ctor_get(v_toConstantVal_291_, 2);
lean_inc_ref(v_type_294_);
lean_dec_ref(v_toConstantVal_291_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v_value_292_);
v___x_296_ = v___x_289_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_value_292_);
v___x_296_ = v_reuseFailAlloc_303_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v_type_294_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_name_293_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = lean_unsigned_to_nat(1u);
v___x_300_ = lean_mk_empty_array_with_capacity(v___x_299_);
v___x_301_ = lean_array_push(v___x_300_, v___x_298_);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
}
case 2:
{
lean_object* v_val_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_322_; 
v_val_305_ = lean_ctor_get(v_x_269_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_x_269_);
if (v_isSharedCheck_322_ == 0)
{
v___x_307_ = v_x_269_;
v_isShared_308_ = v_isSharedCheck_322_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_val_305_);
lean_dec(v_x_269_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_322_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v_toConstantVal_309_; lean_object* v_value_310_; lean_object* v_name_311_; lean_object* v_type_312_; lean_object* v___x_314_; 
v_toConstantVal_309_ = lean_ctor_get(v_val_305_, 0);
lean_inc_ref(v_toConstantVal_309_);
v_value_310_ = lean_ctor_get(v_val_305_, 1);
lean_inc_ref(v_value_310_);
lean_dec_ref(v_val_305_);
v_name_311_ = lean_ctor_get(v_toConstantVal_309_, 0);
lean_inc(v_name_311_);
v_type_312_ = lean_ctor_get(v_toConstantVal_309_, 2);
lean_inc_ref(v_type_312_);
lean_dec_ref(v_toConstantVal_309_);
if (v_isShared_308_ == 0)
{
lean_ctor_set_tag(v___x_307_, 1);
lean_ctor_set(v___x_307_, 0, v_value_310_);
v___x_314_ = v___x_307_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_value_310_);
v___x_314_ = v_reuseFailAlloc_321_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_type_312_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_name_311_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = lean_unsigned_to_nat(1u);
v___x_318_ = lean_mk_empty_array_with_capacity(v___x_317_);
v___x_319_ = lean_array_push(v___x_318_, v___x_316_);
v___x_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
}
}
case 3:
{
lean_object* v_val_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_340_; 
v_val_323_ = lean_ctor_get(v_x_269_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v_x_269_);
if (v_isSharedCheck_340_ == 0)
{
v___x_325_ = v_x_269_;
v_isShared_326_ = v_isSharedCheck_340_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_val_323_);
lean_dec(v_x_269_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_340_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v_toConstantVal_327_; lean_object* v_value_328_; lean_object* v_name_329_; lean_object* v_type_330_; lean_object* v___x_332_; 
v_toConstantVal_327_ = lean_ctor_get(v_val_323_, 0);
lean_inc_ref(v_toConstantVal_327_);
v_value_328_ = lean_ctor_get(v_val_323_, 1);
lean_inc_ref(v_value_328_);
lean_dec_ref(v_val_323_);
v_name_329_ = lean_ctor_get(v_toConstantVal_327_, 0);
lean_inc(v_name_329_);
v_type_330_ = lean_ctor_get(v_toConstantVal_327_, 2);
lean_inc_ref(v_type_330_);
lean_dec_ref(v_toConstantVal_327_);
if (v_isShared_326_ == 0)
{
lean_ctor_set_tag(v___x_325_, 1);
lean_ctor_set(v___x_325_, 0, v_value_328_);
v___x_332_ = v___x_325_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_value_328_);
v___x_332_ = v_reuseFailAlloc_339_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v_type_330_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v_name_329_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_unsigned_to_nat(1u);
v___x_336_ = lean_mk_empty_array_with_capacity(v___x_335_);
v___x_337_ = lean_array_push(v___x_336_, v___x_334_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
}
case 5:
{
lean_object* v_defns_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_352_; 
v_defns_341_ = lean_ctor_get(v_x_269_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_269_);
if (v_isSharedCheck_352_ == 0)
{
v___x_343_ = v_x_269_;
v_isShared_344_ = v_isSharedCheck_352_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_defns_341_);
lean_dec(v_x_269_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_352_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_345_; size_t v_sz_346_; size_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_345_ = lean_array_mk(v_defns_341_);
v_sz_346_ = lean_array_size(v___x_345_);
v___x_347_ = ((size_t)0ULL);
v___x_348_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_UsedByChecks_0__Lean_declConstVals_spec__0(v_sz_346_, v___x_347_, v___x_345_);
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 1);
lean_ctor_set(v___x_343_, 0, v___x_348_);
v___x_350_ = v___x_343_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_348_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
default: 
{
lean_object* v___x_353_; 
lean_dec(v_x_269_);
v___x_353_ = lean_box(0);
return v___x_353_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__2(lean_object* v_as_354_, size_t v_i_355_, size_t v_stop_356_, lean_object* v_b_357_){
_start:
{
uint8_t v___x_358_; 
v___x_358_ = lean_usize_dec_eq(v_i_355_, v_stop_356_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; lean_object* v_fst_360_; lean_object* v_snd_361_; lean_object* v___x_362_; size_t v___x_363_; size_t v___x_364_; 
v___x_359_ = lean_array_uget_borrowed(v_as_354_, v_i_355_);
v_fst_360_ = lean_ctor_get(v___x_359_, 0);
v_snd_361_ = lean_ctor_get(v___x_359_, 1);
lean_inc(v_snd_361_);
lean_inc(v_fst_360_);
v___x_362_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_360_, v_snd_361_, v_b_357_);
v___x_363_ = ((size_t)1ULL);
v___x_364_ = lean_usize_add(v_i_355_, v___x_363_);
v_i_355_ = v___x_364_;
v_b_357_ = v___x_362_;
goto _start;
}
else
{
return v_b_357_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__2___boxed(lean_object* v_as_366_, lean_object* v_i_367_, lean_object* v_stop_368_, lean_object* v_b_369_){
_start:
{
size_t v_i_boxed_370_; size_t v_stop_boxed_371_; lean_object* v_res_372_; 
v_i_boxed_370_ = lean_unbox_usize(v_i_367_);
lean_dec(v_i_367_);
v_stop_boxed_371_ = lean_unbox_usize(v_stop_368_);
lean_dec(v_stop_368_);
v_res_372_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__2(v_as_366_, v_i_boxed_370_, v_stop_boxed_371_, v_b_369_);
lean_dec_ref(v_as_366_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0_spec__0(lean_object* v_init_373_, lean_object* v_x_374_){
_start:
{
if (lean_obj_tag(v_x_374_) == 0)
{
lean_object* v_k_375_; lean_object* v_l_376_; lean_object* v_r_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_k_375_ = lean_ctor_get(v_x_374_, 1);
lean_inc(v_k_375_);
v_l_376_ = lean_ctor_get(v_x_374_, 3);
lean_inc(v_l_376_);
v_r_377_ = lean_ctor_get(v_x_374_, 4);
lean_inc(v_r_377_);
lean_dec_ref_known(v_x_374_, 5);
v___x_378_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0_spec__0(v_init_373_, v_l_376_);
v___x_379_ = l_Lean_NameSet_insert(v___x_378_, v_k_375_);
v_init_373_ = v___x_379_;
v_x_374_ = v_r_377_;
goto _start;
}
else
{
return v_init_373_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__3(lean_object* v_as_381_, size_t v_i_382_, size_t v_stop_383_, lean_object* v_b_384_){
_start:
{
uint8_t v___x_385_; 
v___x_385_ = lean_usize_dec_eq(v_i_382_, v_stop_383_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; lean_object* v_snd_387_; lean_object* v_consts_388_; lean_object* v___x_389_; size_t v___x_390_; size_t v___x_391_; 
v___x_386_ = lean_array_uget_borrowed(v_as_381_, v_i_382_);
v_snd_387_ = lean_ctor_get(v___x_386_, 1);
v_consts_388_ = lean_ctor_get(v_snd_387_, 2);
lean_inc(v_consts_388_);
v___x_389_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0_spec__0(v_b_384_, v_consts_388_);
v___x_390_ = ((size_t)1ULL);
v___x_391_ = lean_usize_add(v_i_382_, v___x_390_);
v_i_382_ = v___x_391_;
v_b_384_ = v___x_389_;
goto _start;
}
else
{
return v_b_384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__3___boxed(lean_object* v_as_393_, lean_object* v_i_394_, lean_object* v_stop_395_, lean_object* v_b_396_){
_start:
{
size_t v_i_boxed_397_; size_t v_stop_boxed_398_; lean_object* v_res_399_; 
v_i_boxed_397_ = lean_unbox_usize(v_i_394_);
lean_dec(v_i_394_);
v_stop_boxed_398_ = lean_unbox_usize(v_stop_395_);
lean_dec(v_stop_395_);
v_res_399_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__3(v_as_393_, v_i_boxed_397_, v_stop_boxed_398_, v_b_396_);
lean_dec_ref(v_as_393_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___lam__0(lean_object* v_c_400_, lean_object* v_s_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lean_NameSet_insert(v_s_401_, v_c_400_);
return v___x_402_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__1(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_unsigned_to_nat(64u);
v___x_405_ = l_Lean_mkPtrSet___redArg(v___x_404_);
return v___x_405_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__2(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = lean_box(0);
v___x_407_ = lean_unsigned_to_nat(16u);
v___x_408_ = lean_mk_array(v___x_407_, v___x_406_);
return v___x_408_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__3(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_409_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__2);
v___x_410_ = lean_unsigned_to_nat(0u);
v___x_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v___x_409_);
return v___x_411_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__3);
v___x_413_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__1);
v___x_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___x_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1(size_t v_sz_415_, size_t v_i_416_, lean_object* v_bs_417_){
_start:
{
uint8_t v___x_418_; 
v___x_418_ = lean_usize_dec_lt(v_i_416_, v_sz_415_);
if (v___x_418_ == 0)
{
return v_bs_417_;
}
else
{
lean_object* v_v_419_; lean_object* v_snd_420_; lean_object* v_fst_421_; lean_object* v_fst_422_; lean_object* v_snd_423_; lean_object* v___f_424_; lean_object* v___x_425_; lean_object* v_bs_x27_426_; lean_object* v___y_428_; 
v_v_419_ = lean_array_uget_borrowed(v_bs_417_, v_i_416_);
v_snd_420_ = lean_ctor_get(v_v_419_, 1);
v_fst_421_ = lean_ctor_get(v_v_419_, 0);
lean_inc(v_fst_421_);
v_fst_422_ = lean_ctor_get(v_snd_420_, 0);
lean_inc(v_fst_422_);
v_snd_423_ = lean_ctor_get(v_snd_420_, 1);
lean_inc(v_snd_423_);
v___f_424_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__0));
v___x_425_ = lean_unsigned_to_nat(0u);
v_bs_x27_426_ = lean_array_uset(v_bs_417_, v_i_416_, v___x_425_);
if (lean_obj_tag(v_snd_423_) == 0)
{
lean_inc(v_fst_422_);
v___y_428_ = v_fst_422_;
goto v___jp_427_;
}
else
{
lean_object* v_val_446_; lean_object* v___x_447_; 
v_val_446_ = lean_ctor_get(v_snd_423_, 0);
lean_inc(v_val_446_);
lean_inc(v_fst_422_);
v___x_447_ = l_Lean_Expr_app___override(v_fst_422_, v_val_446_);
v___y_428_ = v___x_447_;
goto v___jp_427_;
}
v___jp_427_:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v_fst_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_444_; 
v___x_429_ = l_Lean_NameSet_empty;
v___x_430_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4);
v___x_431_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_424_, v___y_428_, v___x_429_, v___x_430_);
v_fst_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; 
v_unused_445_ = lean_ctor_get(v___x_431_, 1);
lean_dec(v_unused_445_);
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_fst_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_436_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_436_, 0, v_fst_422_);
lean_ctor_set(v___x_436_, 1, v_snd_423_);
lean_ctor_set(v___x_436_, 2, v_fst_432_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v___x_436_);
lean_ctor_set(v___x_434_, 0, v_fst_421_);
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_fst_421_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v___x_436_);
v___x_438_ = v_reuseFailAlloc_443_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
size_t v___x_439_; size_t v___x_440_; lean_object* v___x_441_; 
v___x_439_ = ((size_t)1ULL);
v___x_440_ = lean_usize_add(v_i_416_, v___x_439_);
v___x_441_ = lean_array_uset(v_bs_x27_426_, v_i_416_, v___x_438_);
v_i_416_ = v___x_440_;
v_bs_417_ = v___x_441_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___boxed(lean_object* v_sz_448_, lean_object* v_i_449_, lean_object* v_bs_450_){
_start:
{
size_t v_sz_boxed_451_; size_t v_i_boxed_452_; lean_object* v_res_453_; 
v_sz_boxed_451_ = lean_unbox_usize(v_sz_448_);
lean_dec(v_sz_448_);
v_i_boxed_452_ = lean_unbox_usize(v_i_449_);
lean_dec(v_i_449_);
v_res_453_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1(v_sz_boxed_451_, v_i_boxed_452_, v_bs_450_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__0(lean_object* v_c_454_, lean_object* v_s_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Lean_NameSet_insert(v_s_455_, v_c_454_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__1(lean_object* v___f_457_, lean_object* v_s_458_, lean_object* v_e_459_){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v_fst_462_; 
v___x_460_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4);
v___x_461_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_457_, v_e_459_, v_s_458_, v___x_460_);
v_fst_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_fst_462_);
lean_dec_ref(v___x_461_);
return v_fst_462_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6(lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
return v_x_464_;
}
else
{
lean_object* v_head_466_; lean_object* v_toConstantVal_467_; lean_object* v_tail_468_; lean_object* v_value_469_; lean_object* v_type_470_; lean_object* v___f_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_head_466_ = lean_ctor_get(v_x_465_, 0);
lean_inc(v_head_466_);
v_toConstantVal_467_ = lean_ctor_get(v_head_466_, 0);
lean_inc_ref(v_toConstantVal_467_);
v_tail_468_ = lean_ctor_get(v_x_465_, 1);
lean_inc(v_tail_468_);
lean_dec_ref_known(v_x_465_, 2);
v_value_469_ = lean_ctor_get(v_head_466_, 1);
lean_inc_ref(v_value_469_);
lean_dec(v_head_466_);
v_type_470_ = lean_ctor_get(v_toConstantVal_467_, 2);
lean_inc_ref(v_type_470_);
lean_dec_ref(v_toConstantVal_467_);
v___f_471_ = ((lean_object*)(l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0));
v___x_472_ = l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__1(v___f_471_, v_x_464_, v_type_470_);
v___x_473_ = l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__1(v___f_471_, v___x_472_, v_value_469_);
v_x_464_ = v___x_473_;
v_x_465_ = v_tail_468_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__5_spec__6(lean_object* v_x_475_, lean_object* v_x_476_){
_start:
{
if (lean_obj_tag(v_x_476_) == 0)
{
return v_x_475_;
}
else
{
lean_object* v_head_477_; lean_object* v_tail_478_; lean_object* v_type_479_; lean_object* v___f_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_fst_483_; 
v_head_477_ = lean_ctor_get(v_x_476_, 0);
lean_inc(v_head_477_);
v_tail_478_ = lean_ctor_get(v_x_476_, 1);
lean_inc(v_tail_478_);
lean_dec_ref_known(v_x_476_, 2);
v_type_479_ = lean_ctor_get(v_head_477_, 1);
lean_inc_ref(v_type_479_);
lean_dec(v_head_477_);
v___f_480_ = ((lean_object*)(l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0));
v___x_481_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4);
v___x_482_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_480_, v_type_479_, v_x_475_, v___x_481_);
v_fst_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_fst_483_);
lean_dec_ref(v___x_482_);
v_x_475_ = v_fst_483_;
v_x_476_ = v_tail_478_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__5(lean_object* v_x_485_, lean_object* v_x_486_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
return v_x_485_;
}
else
{
lean_object* v_head_487_; lean_object* v_tail_488_; lean_object* v_type_489_; lean_object* v___f_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v_fst_493_; lean_object* v___x_494_; 
v_head_487_ = lean_ctor_get(v_x_486_, 0);
lean_inc(v_head_487_);
v_tail_488_ = lean_ctor_get(v_x_486_, 1);
lean_inc(v_tail_488_);
lean_dec_ref_known(v_x_486_, 2);
v_type_489_ = lean_ctor_get(v_head_487_, 1);
lean_inc_ref(v_type_489_);
lean_dec(v_head_487_);
v___f_490_ = ((lean_object*)(l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0));
v___x_491_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4);
v___x_492_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_490_, v_type_489_, v_x_485_, v___x_491_);
v_fst_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_fst_493_);
lean_dec_ref(v___x_492_);
v___x_494_ = l_List_foldlM___at___00List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__5_spec__6(v_fst_493_, v_tail_488_);
return v___x_494_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__7_spec__9(lean_object* v_x_495_, lean_object* v_x_496_){
_start:
{
if (lean_obj_tag(v_x_496_) == 0)
{
return v_x_495_;
}
else
{
lean_object* v_head_497_; lean_object* v_tail_498_; lean_object* v_type_499_; lean_object* v_ctors_500_; lean_object* v___f_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v_fst_504_; lean_object* v___x_505_; 
v_head_497_ = lean_ctor_get(v_x_496_, 0);
lean_inc(v_head_497_);
v_tail_498_ = lean_ctor_get(v_x_496_, 1);
lean_inc(v_tail_498_);
lean_dec_ref_known(v_x_496_, 2);
v_type_499_ = lean_ctor_get(v_head_497_, 1);
lean_inc_ref(v_type_499_);
v_ctors_500_ = lean_ctor_get(v_head_497_, 2);
lean_inc(v_ctors_500_);
lean_dec(v_head_497_);
v___f_501_ = ((lean_object*)(l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0));
v___x_502_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4);
v___x_503_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_501_, v_type_499_, v_x_495_, v___x_502_);
v_fst_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_fst_504_);
lean_dec_ref(v___x_503_);
v___x_505_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__5(v_fst_504_, v_ctors_500_);
v_x_495_ = v___x_505_;
v_x_496_ = v_tail_498_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__7(lean_object* v_x_507_, lean_object* v_x_508_){
_start:
{
if (lean_obj_tag(v_x_508_) == 0)
{
return v_x_507_;
}
else
{
lean_object* v_head_509_; lean_object* v_tail_510_; lean_object* v_type_511_; lean_object* v_ctors_512_; lean_object* v___f_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v_fst_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v_head_509_ = lean_ctor_get(v_x_508_, 0);
lean_inc(v_head_509_);
v_tail_510_ = lean_ctor_get(v_x_508_, 1);
lean_inc(v_tail_510_);
lean_dec_ref_known(v_x_508_, 2);
v_type_511_ = lean_ctor_get(v_head_509_, 1);
lean_inc_ref(v_type_511_);
v_ctors_512_ = lean_ctor_get(v_head_509_, 2);
lean_inc(v_ctors_512_);
lean_dec(v_head_509_);
v___f_513_ = ((lean_object*)(l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0));
v___x_514_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1___closed__4);
v___x_515_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_513_, v_type_511_, v_x_507_, v___x_514_);
v_fst_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_fst_516_);
lean_dec_ref(v___x_515_);
v___x_517_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__5(v_fst_516_, v_ctors_512_);
v___x_518_ = l_List_foldlM___at___00List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__7_spec__9(v___x_517_, v_tail_510_);
return v___x_518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4(lean_object* v_d_519_, lean_object* v_a_520_){
_start:
{
lean_object* v___f_521_; 
v___f_521_ = ((lean_object*)(l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6___closed__0));
switch(lean_obj_tag(v_d_519_))
{
case 0:
{
lean_object* v_val_522_; lean_object* v_toConstantVal_523_; lean_object* v_type_524_; lean_object* v___x_525_; 
v_val_522_ = lean_ctor_get(v_d_519_, 0);
lean_inc_ref(v_val_522_);
lean_dec_ref_known(v_d_519_, 1);
v_toConstantVal_523_ = lean_ctor_get(v_val_522_, 0);
lean_inc_ref(v_toConstantVal_523_);
lean_dec_ref(v_val_522_);
v_type_524_ = lean_ctor_get(v_toConstantVal_523_, 2);
lean_inc_ref(v_type_524_);
lean_dec_ref(v_toConstantVal_523_);
v___x_525_ = l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__1(v___f_521_, v_a_520_, v_type_524_);
return v___x_525_;
}
case 4:
{
return v_a_520_;
}
case 5:
{
lean_object* v_defns_526_; lean_object* v___x_527_; 
v_defns_526_ = lean_ctor_get(v_d_519_, 0);
lean_inc(v_defns_526_);
lean_dec_ref_known(v_d_519_, 1);
v___x_527_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__6(v_a_520_, v_defns_526_);
return v___x_527_;
}
case 6:
{
lean_object* v_types_528_; lean_object* v___x_529_; 
v_types_528_ = lean_ctor_get(v_d_519_, 2);
lean_inc(v_types_528_);
lean_dec_ref_known(v_d_519_, 3);
v___x_529_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4_spec__7(v_a_520_, v_types_528_);
return v___x_529_;
}
default: 
{
lean_object* v_val_530_; lean_object* v_toConstantVal_531_; lean_object* v_value_532_; lean_object* v_type_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_val_530_ = lean_ctor_get(v_d_519_, 0);
lean_inc_ref(v_val_530_);
lean_dec(v_d_519_);
v_toConstantVal_531_ = lean_ctor_get(v_val_530_, 0);
lean_inc_ref(v_toConstantVal_531_);
v_value_532_ = lean_ctor_get(v_val_530_, 1);
lean_inc_ref(v_value_532_);
lean_dec_ref(v_val_530_);
v_type_533_ = lean_ctor_get(v_toConstantVal_531_, 2);
lean_inc_ref(v_type_533_);
lean_dec_ref(v_toConstantVal_531_);
v___x_534_ = l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__1(v___f_521_, v_a_520_, v_type_533_);
v___x_535_ = l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4___lam__1(v___f_521_, v___x_534_, v_value_532_);
return v___x_535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordDeclConsts(lean_object* v_decl_536_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_538_ = l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef;
v___x_539_ = lean_st_ref_get(v___x_538_);
v___x_540_ = lean_unbox(v___x_539_);
lean_dec(v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; 
lean_dec(v_decl_536_);
v___x_541_ = lean_box(0);
return v___x_541_;
}
else
{
lean_object* v___x_542_; 
lean_inc(v_decl_536_);
v___x_542_ = l___private_Lean_Util_UsedByChecks_0__Lean_declConstVals(v_decl_536_);
if (lean_obj_tag(v___x_542_) == 1)
{
lean_object* v_val_543_; size_t v_sz_544_; size_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___y_550_; lean_object* v___x_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
lean_dec(v_decl_536_);
v_val_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_val_543_);
lean_dec_ref_known(v___x_542_, 1);
v_sz_544_ = lean_array_size(v_val_543_);
v___x_545_ = ((size_t)0ULL);
v___x_546_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_recordDeclConsts_spec__1(v_sz_544_, v___x_545_, v_val_543_);
v___x_547_ = l___private_Lean_Util_UsedByChecks_0__Lean_usedByChecksRef;
v___x_548_ = lean_st_ref_take(v___x_547_);
v___x_561_ = lean_unsigned_to_nat(0u);
v___x_562_ = lean_array_get_size(v___x_546_);
v___x_563_ = lean_nat_dec_lt(v___x_561_, v___x_562_);
if (v___x_563_ == 0)
{
v___y_550_ = v___x_548_;
goto v___jp_549_;
}
else
{
size_t v___x_564_; lean_object* v___x_565_; 
v___x_564_ = lean_usize_of_nat(v___x_562_);
v___x_565_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__3(v___x_546_, v___x_545_, v___x_564_, v___x_548_);
v___y_550_ = v___x_565_;
goto v___jp_549_;
}
v___jp_549_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_551_ = lean_st_ref_put(v___x_547_, v___y_550_);
v___x_552_ = l___private_Lean_Util_UsedByChecks_0__Lean_declConstsRef;
v___x_553_ = lean_st_ref_take(v___x_552_);
v___x_554_ = lean_unsigned_to_nat(0u);
v___x_555_ = lean_array_get_size(v___x_546_);
v___x_556_ = lean_nat_dec_lt(v___x_554_, v___x_555_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; 
lean_dec_ref(v___x_546_);
v___x_557_ = lean_st_ref_put(v___x_552_, v___x_553_);
return v___x_557_;
}
else
{
size_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_usize_of_nat(v___x_555_);
v___x_559_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_recordDeclConsts_spec__2(v___x_546_, v___x_545_, v___x_558_, v___x_553_);
lean_dec_ref(v___x_546_);
v___x_560_ = lean_st_ref_put(v___x_552_, v___x_559_);
return v___x_560_;
}
}
}
else
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
lean_dec(v___x_542_);
v___x_566_ = l_Lean_NameSet_empty;
v___x_567_ = l_Lean_Declaration_foldExprM___at___00Lean_recordDeclConsts_spec__4(v_decl_536_, v___x_566_);
v___x_568_ = l___private_Lean_Util_UsedByChecks_0__Lean_usedByChecksRef;
v___x_569_ = lean_st_ref_take(v___x_568_);
v___x_570_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0_spec__0(v___x_569_, v___x_567_);
v___x_571_ = lean_st_ref_put(v___x_568_, v___x_570_);
return v___x_571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordDeclConsts___boxed(lean_object* v_decl_572_, lean_object* v_a_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_recordDeclConsts(v_decl_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0(lean_object* v_init_575_, lean_object* v_t_576_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_recordDeclConsts_spec__0_spec__0(v_init_575_, v_t_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordedDeclConsts(){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = l___private_Lean_Util_UsedByChecks_0__Lean_declConstsRef;
v___x_580_ = lean_st_ref_get(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordedDeclConsts___boxed(lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_recordedDeclConsts();
return v_res_582_;
}
}
lean_object* runtime_initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Declaration(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_FoldConsts(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_UsedByChecks(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3283505831____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_UsedByChecks_0__Lean_usageRecordingRef);
lean_dec_ref(res);
res = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_220753446____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_UsedByChecks_0__Lean_usedByChecksRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_UsedByChecks_0__Lean_usedByChecksRef);
lean_dec_ref(res);
res = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3277417217____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_UsedByChecks_0__Lean_specLookupsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_UsedByChecks_0__Lean_specLookupsRef);
lean_dec_ref(res);
res = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_3237528688____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_UsedByChecks_0__Lean_compilerCodeRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_UsedByChecks_0__Lean_compilerCodeRef);
lean_dec_ref(res);
res = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_1088975926____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_UsedByChecks_0__Lean_pluginLoadingRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_UsedByChecks_0__Lean_pluginLoadingRef);
lean_dec_ref(res);
res = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2584013828____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_UsedByChecks_0__Lean_compileHintsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_UsedByChecks_0__Lean_compileHintsRef);
lean_dec_ref(res);
res = l___private_Lean_Util_UsedByChecks_0__Lean_initFn_00___x40_Lean_Util_UsedByChecks_2543333316____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_UsedByChecks_0__Lean_declConstsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_UsedByChecks_0__Lean_declConstsRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_UsedByChecks(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* initialize_Lean_Declaration(uint8_t builtin);
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Lean_Util_FoldConsts(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_UsedByChecks(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_UsedByChecks(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_UsedByChecks(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_UsedByChecks(builtin);
}
#ifdef __cplusplus
}
#endif
