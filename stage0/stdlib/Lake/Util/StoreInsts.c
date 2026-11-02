// Lean compiler output
// Module: Lake.Util.StoreInsts
// Imports: public import Init.Data.Order public import Lean.Data.NameMap.Basic public import Lake.Util.RBArray public import Lake.Util.Family public import Lake.Util.Store
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
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_RBArray_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_cmp_2_, lean_object* v_k_3_, lean_object* v___y_4_){
_start:
{
lean_object* v_toApplicative_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_15_; 
v_toApplicative_5_ = lean_ctor_get(v_inst_1_, 0);
v_isSharedCheck_15_ = !lean_is_exclusive(v_inst_1_);
if (v_isSharedCheck_15_ == 0)
{
lean_object* v_unused_16_; 
v_unused_16_ = lean_ctor_get(v_inst_1_, 1);
lean_dec(v_unused_16_);
v___x_7_ = v_inst_1_;
v_isShared_8_ = v_isSharedCheck_15_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_toApplicative_5_);
lean_dec(v_inst_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_15_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v_toPure_9_; lean_object* v___x_10_; lean_object* v___x_12_; 
v_toPure_9_ = lean_ctor_get(v_toApplicative_5_, 1);
lean_inc(v_toPure_9_);
lean_dec_ref(v_toApplicative_5_);
lean_inc(v___y_4_);
v___x_10_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v_cmp_2_, v___y_4_, v_k_3_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___y_4_);
lean_ctor_set(v___x_7_, 0, v___x_10_);
v___x_12_ = v___x_7_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_14_, 0, v___x_10_);
lean_ctor_set(v_reuseFailAlloc_14_, 1, v___y_4_);
v___x_12_ = v_reuseFailAlloc_14_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
lean_object* v___x_13_; 
v___x_13_ = lean_apply_2(v_toPure_9_, lean_box(0), v___x_12_);
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg___lam__1(lean_object* v_inst_17_, lean_object* v_cmp_18_, lean_object* v_k_19_, lean_object* v_a_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_toApplicative_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_33_; 
v_toApplicative_22_ = lean_ctor_get(v_inst_17_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v_inst_17_);
if (v_isSharedCheck_33_ == 0)
{
lean_object* v_unused_34_; 
v_unused_34_ = lean_ctor_get(v_inst_17_, 1);
lean_dec(v_unused_34_);
v___x_24_ = v_inst_17_;
v_isShared_25_ = v_isSharedCheck_33_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_toApplicative_22_);
lean_dec(v_inst_17_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_33_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v_toPure_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
v_toPure_26_ = lean_ctor_get(v_toApplicative_22_, 1);
lean_inc(v_toPure_26_);
lean_dec_ref(v_toApplicative_22_);
v___x_27_ = lean_box(0);
v___x_28_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v_cmp_18_, v_k_19_, v_a_20_, v___y_21_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 1, v___x_28_);
lean_ctor_set(v___x_24_, 0, v___x_27_);
v___x_30_ = v___x_24_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_32_, 1, v___x_28_);
v___x_30_ = v_reuseFailAlloc_32_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
lean_object* v___x_31_; 
v___x_31_ = lean_apply_2(v_toPure_26_, lean_box(0), v___x_30_);
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg(lean_object* v_cmp_35_, lean_object* v_inst_36_){
_start:
{
lean_object* v___f_37_; lean_object* v___f_38_; lean_object* v___x_39_; 
lean_inc_ref(v_cmp_35_);
lean_inc_ref(v_inst_36_);
v___f_37_ = lean_alloc_closure((void*)(l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg___lam__0), 4, 2);
lean_closure_set(v___f_37_, 0, v_inst_36_);
lean_closure_set(v___f_37_, 1, v_cmp_35_);
v___f_38_ = lean_alloc_closure((void*)(l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg___lam__1), 5, 2);
lean_closure_set(v___f_38_, 0, v_inst_36_);
lean_closure_set(v___f_38_, 1, v_cmp_35_);
v___x_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_39_, 0, v___f_37_);
lean_ctor_set(v___x_39_, 1, v___f_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp(lean_object* v_00_u03ba_40_, lean_object* v_m_41_, lean_object* v_00_u03b2_42_, lean_object* v_cmp_43_, lean_object* v_inst_44_, lean_object* v_inst_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lake_instMonadDStoreStateTDTreeMapOfMonadOfLawfulEqCmp___redArg(v_cmp_43_, v_inst_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__0(lean_object* v_cmp_47_, lean_object* v_k_48_, lean_object* v_x_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v_cmp_47_, v_x_49_, v_k_48_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__1(lean_object* v_inst_51_, lean_object* v_cmp_52_, lean_object* v_inst_53_, lean_object* v_k_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_toApplicative_56_; lean_object* v_toFunctor_57_; lean_object* v_map_58_; lean_object* v___f_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v_toApplicative_56_ = lean_ctor_get(v_inst_51_, 0);
lean_inc_ref(v_toApplicative_56_);
lean_dec_ref(v_inst_51_);
v_toFunctor_57_ = lean_ctor_get(v_toApplicative_56_, 0);
lean_inc_ref(v_toFunctor_57_);
lean_dec_ref(v_toApplicative_56_);
v_map_58_ = lean_ctor_get(v_toFunctor_57_, 0);
lean_inc(v_map_58_);
lean_dec_ref(v_toFunctor_57_);
v___f_59_ = lean_alloc_closure((void*)(l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__0), 3, 2);
lean_closure_set(v___f_59_, 0, v_cmp_52_);
lean_closure_set(v___f_59_, 1, v_k_54_);
lean_inc(v___y_55_);
v___x_60_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_60_, 0, lean_box(0));
lean_closure_set(v___x_60_, 1, lean_box(0));
lean_closure_set(v___x_60_, 2, v___y_55_);
v___x_61_ = lean_apply_2(v_inst_53_, lean_box(0), v___x_60_);
v___x_62_ = lean_apply_4(v_map_58_, lean_box(0), lean_box(0), v___f_59_, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__1___boxed(lean_object* v_inst_63_, lean_object* v_cmp_64_, lean_object* v_inst_65_, lean_object* v_k_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__1(v_inst_63_, v_cmp_64_, v_inst_65_, v_k_66_, v___y_67_);
lean_dec(v___y_67_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__2(lean_object* v_cmp_69_, lean_object* v_k_70_, lean_object* v_a_71_, lean_object* v_s_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = lean_box(0);
v___x_74_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v_cmp_69_, v_k_70_, v_a_71_, v_s_72_);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__3(lean_object* v_cmp_76_, lean_object* v_inst_77_, lean_object* v_k_78_, lean_object* v_a_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___f_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___f_81_ = lean_alloc_closure((void*)(l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__2), 4, 3);
lean_closure_set(v___f_81_, 0, v_cmp_76_);
lean_closure_set(v___f_81_, 1, v_k_78_);
lean_closure_set(v___f_81_, 2, v_a_79_);
lean_inc(v___y_80_);
v___x_82_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_82_, 0, lean_box(0));
lean_closure_set(v___x_82_, 1, lean_box(0));
lean_closure_set(v___x_82_, 2, lean_box(0));
lean_closure_set(v___x_82_, 3, v___y_80_);
lean_closure_set(v___x_82_, 4, v___f_81_);
v___x_83_ = lean_apply_2(v_inst_77_, lean_box(0), v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__3___boxed(lean_object* v_cmp_84_, lean_object* v_inst_85_, lean_object* v_k_86_, lean_object* v_a_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__3(v_cmp_84_, v_inst_85_, v_k_86_, v_a_87_, v___y_88_);
lean_dec(v___y_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg(lean_object* v_cmp_90_, lean_object* v_inst_91_, lean_object* v_inst_92_){
_start:
{
lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___x_95_; 
lean_inc(v_inst_91_);
lean_inc_ref(v_cmp_90_);
v___f_93_ = lean_alloc_closure((void*)(l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_93_, 0, v_inst_92_);
lean_closure_set(v___f_93_, 1, v_cmp_90_);
lean_closure_set(v___f_93_, 2, v_inst_91_);
v___f_94_ = lean_alloc_closure((void*)(l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg___lam__3___boxed), 5, 2);
lean_closure_set(v___f_94_, 0, v_cmp_90_);
lean_closure_set(v___f_94_, 1, v_inst_91_);
v___x_95_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_95_, 0, v___f_93_);
lean_ctor_set(v___x_95_, 1, v___f_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp(lean_object* v_00_u03ba_96_, lean_object* v_00_u03c9_97_, lean_object* v_m_98_, lean_object* v_00_u03b2_99_, lean_object* v_cmp_100_, lean_object* v_inst_101_, lean_object* v_inst_102_, lean_object* v_inst_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lake_instMonadDStoreStateRefT_x27DTreeMapOfMonadLiftTSTOfMonadOfLawfulEqCmp___redArg(v_cmp_100_, v_inst_101_, v_inst_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg___lam__0(lean_object* v_inst_105_, lean_object* v_cmp_106_, lean_object* v_k_107_, lean_object* v___y_108_){
_start:
{
lean_object* v_toApplicative_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_120_; 
v_toApplicative_109_ = lean_ctor_get(v_inst_105_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v_inst_105_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; 
v_unused_121_ = lean_ctor_get(v_inst_105_, 1);
lean_dec(v_unused_121_);
v___x_111_ = v_inst_105_;
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_toApplicative_109_);
lean_dec(v_inst_105_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v_toPure_113_; lean_object* v_toTreeMap_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v_toPure_113_ = lean_ctor_get(v_toApplicative_109_, 1);
lean_inc(v_toPure_113_);
lean_dec_ref(v_toApplicative_109_);
v_toTreeMap_114_ = lean_ctor_get(v___y_108_, 0);
lean_inc(v_toTreeMap_114_);
v___x_115_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v_cmp_106_, v_toTreeMap_114_, v_k_107_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v___y_108_);
lean_ctor_set(v___x_111_, 0, v___x_115_);
v___x_117_ = v___x_111_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___y_108_);
v___x_117_ = v_reuseFailAlloc_119_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; 
v___x_118_ = lean_apply_2(v_toPure_113_, lean_box(0), v___x_117_);
return v___x_118_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg___lam__1(lean_object* v_inst_122_, lean_object* v_cmp_123_, lean_object* v_k_124_, lean_object* v_a_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_toApplicative_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_138_; 
v_toApplicative_127_ = lean_ctor_get(v_inst_122_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v_inst_122_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; 
v_unused_139_ = lean_ctor_get(v_inst_122_, 1);
lean_dec(v_unused_139_);
v___x_129_ = v_inst_122_;
v_isShared_130_ = v_isSharedCheck_138_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_toApplicative_127_);
lean_dec(v_inst_122_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_138_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v_toPure_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v_toPure_131_ = lean_ctor_get(v_toApplicative_127_, 1);
lean_inc(v_toPure_131_);
lean_dec_ref(v_toApplicative_127_);
v___x_132_ = lean_box(0);
v___x_133_ = l_Lake_RBArray_insert___redArg(v_cmp_123_, v___y_126_, v_k_124_, v_a_125_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_133_);
lean_ctor_set(v___x_129_, 0, v___x_132_);
v___x_135_ = v___x_129_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_132_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v___x_133_);
v___x_135_ = v_reuseFailAlloc_137_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_136_; 
v___x_136_ = lean_apply_2(v_toPure_131_, lean_box(0), v___x_135_);
return v___x_136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg(lean_object* v_cmp_140_, lean_object* v_inst_141_){
_start:
{
lean_object* v___f_142_; lean_object* v___f_143_; lean_object* v___x_144_; 
lean_inc_ref(v_cmp_140_);
lean_inc_ref(v_inst_141_);
v___f_142_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg___lam__0), 4, 2);
lean_closure_set(v___f_142_, 0, v_inst_141_);
lean_closure_set(v___f_142_, 1, v_cmp_140_);
v___f_143_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg___lam__1), 5, 2);
lean_closure_set(v___f_143_, 0, v_inst_141_);
lean_closure_set(v___f_143_, 1, v_cmp_140_);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___f_142_);
lean_ctor_set(v___x_144_, 1, v___f_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateTRBArrayOfMonad(lean_object* v_m_145_, lean_object* v_00_u03ba_146_, lean_object* v_00_u03b1_147_, lean_object* v_cmp_148_, lean_object* v_inst_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lake_instMonadStoreStateTRBArrayOfMonad___redArg(v_cmp_148_, v_inst_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__0(lean_object* v_cmp_151_, lean_object* v_k_152_, lean_object* v_x_153_){
_start:
{
lean_object* v_toTreeMap_154_; lean_object* v___x_155_; 
v_toTreeMap_154_ = lean_ctor_get(v_x_153_, 0);
lean_inc(v_toTreeMap_154_);
lean_dec_ref(v_x_153_);
v___x_155_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v_cmp_151_, v_toTreeMap_154_, v_k_152_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__1(lean_object* v_inst_156_, lean_object* v_cmp_157_, lean_object* v_inst_158_, lean_object* v_k_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_toApplicative_161_; lean_object* v_toFunctor_162_; lean_object* v_map_163_; lean_object* v___f_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_toApplicative_161_ = lean_ctor_get(v_inst_156_, 0);
lean_inc_ref(v_toApplicative_161_);
lean_dec_ref(v_inst_156_);
v_toFunctor_162_ = lean_ctor_get(v_toApplicative_161_, 0);
lean_inc_ref(v_toFunctor_162_);
lean_dec_ref(v_toApplicative_161_);
v_map_163_ = lean_ctor_get(v_toFunctor_162_, 0);
lean_inc(v_map_163_);
lean_dec_ref(v_toFunctor_162_);
v___f_164_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__0), 3, 2);
lean_closure_set(v___f_164_, 0, v_cmp_157_);
lean_closure_set(v___f_164_, 1, v_k_159_);
lean_inc(v___y_160_);
v___x_165_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_165_, 0, lean_box(0));
lean_closure_set(v___x_165_, 1, lean_box(0));
lean_closure_set(v___x_165_, 2, v___y_160_);
v___x_166_ = lean_apply_2(v_inst_158_, lean_box(0), v___x_165_);
v___x_167_ = lean_apply_4(v_map_163_, lean_box(0), lean_box(0), v___f_164_, v___x_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__1___boxed(lean_object* v_inst_168_, lean_object* v_cmp_169_, lean_object* v_inst_170_, lean_object* v_k_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__1(v_inst_168_, v_cmp_169_, v_inst_170_, v_k_171_, v___y_172_);
lean_dec(v___y_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__2(lean_object* v_cmp_174_, lean_object* v_k_175_, lean_object* v_a_176_, lean_object* v_s_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_box(0);
v___x_179_ = l_Lake_RBArray_insert___redArg(v_cmp_174_, v_s_177_, v_k_175_, v_a_176_);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_178_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__3(lean_object* v_cmp_181_, lean_object* v_inst_182_, lean_object* v_k_183_, lean_object* v_a_184_, lean_object* v___y_185_){
_start:
{
lean_object* v___f_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__2), 4, 3);
lean_closure_set(v___f_186_, 0, v_cmp_181_);
lean_closure_set(v___f_186_, 1, v_k_183_);
lean_closure_set(v___f_186_, 2, v_a_184_);
lean_inc(v___y_185_);
v___x_187_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_187_, 0, lean_box(0));
lean_closure_set(v___x_187_, 1, lean_box(0));
lean_closure_set(v___x_187_, 2, lean_box(0));
lean_closure_set(v___x_187_, 3, v___y_185_);
lean_closure_set(v___x_187_, 4, v___f_186_);
v___x_188_ = lean_apply_2(v_inst_182_, lean_box(0), v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__3___boxed(lean_object* v_cmp_189_, lean_object* v_inst_190_, lean_object* v_k_191_, lean_object* v_a_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__3(v_cmp_189_, v_inst_190_, v_k_191_, v_a_192_, v___y_193_);
lean_dec(v___y_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg(lean_object* v_cmp_195_, lean_object* v_inst_196_, lean_object* v_inst_197_){
_start:
{
lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___x_200_; 
lean_inc(v_inst_196_);
lean_inc_ref(v_cmp_195_);
v___f_198_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_198_, 0, v_inst_197_);
lean_closure_set(v___f_198_, 1, v_cmp_195_);
lean_closure_set(v___f_198_, 2, v_inst_196_);
v___f_199_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg___lam__3___boxed), 5, 2);
lean_closure_set(v___f_199_, 0, v_cmp_195_);
lean_closure_set(v___f_199_, 1, v_inst_196_);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___f_198_);
lean_ctor_set(v___x_200_, 1, v___f_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad(lean_object* v_00_u03c9_201_, lean_object* v_m_202_, lean_object* v_00_u03ba_203_, lean_object* v_00_u03b1_204_, lean_object* v_cmp_205_, lean_object* v_inst_206_, lean_object* v_inst_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lake_instMonadStoreStateRefT_x27RBArrayOfMonadLiftTSTOfMonad___redArg(v_cmp_205_, v_inst_206_, v_inst_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__0(lean_object* v_inst_209_, lean_object* v_k_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_toApplicative_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_222_; 
v_toApplicative_212_ = lean_ctor_get(v_inst_209_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v_inst_209_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; 
v_unused_223_ = lean_ctor_get(v_inst_209_, 1);
lean_dec(v_unused_223_);
v___x_214_ = v_inst_209_;
v_isShared_215_ = v_isSharedCheck_222_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_toApplicative_212_);
lean_dec(v_inst_209_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_222_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v_toPure_216_; lean_object* v___x_217_; lean_object* v___x_219_; 
v_toPure_216_ = lean_ctor_get(v_toApplicative_212_, 1);
lean_inc(v_toPure_216_);
lean_dec_ref(v_toApplicative_212_);
v___x_217_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_211_, v_k_210_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v___y_211_);
lean_ctor_set(v___x_214_, 0, v___x_217_);
v___x_219_ = v___x_214_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v___y_211_);
v___x_219_ = v_reuseFailAlloc_221_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_object* v___x_220_; 
v___x_220_ = lean_apply_2(v_toPure_216_, lean_box(0), v___x_219_);
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__0___boxed(lean_object* v_inst_224_, lean_object* v_k_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__0(v_inst_224_, v_k_225_, v___y_226_);
lean_dec(v_k_225_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__1(lean_object* v_inst_228_, lean_object* v_k_229_, lean_object* v_a_230_, lean_object* v___y_231_){
_start:
{
lean_object* v_toApplicative_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_243_; 
v_toApplicative_232_ = lean_ctor_get(v_inst_228_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v_inst_228_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; 
v_unused_244_ = lean_ctor_get(v_inst_228_, 1);
lean_dec(v_unused_244_);
v___x_234_ = v_inst_228_;
v_isShared_235_ = v_isSharedCheck_243_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_toApplicative_232_);
lean_dec(v_inst_228_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_243_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v_toPure_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_240_; 
v_toPure_236_ = lean_ctor_get(v_toApplicative_232_, 1);
lean_inc(v_toPure_236_);
lean_dec_ref(v_toApplicative_232_);
v___x_237_ = lean_box(0);
v___x_238_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_229_, v_a_230_, v___y_231_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v___x_238_);
lean_ctor_set(v___x_234_, 0, v___x_237_);
v___x_240_ = v___x_234_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v___x_238_);
v___x_240_ = v_reuseFailAlloc_242_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; 
v___x_241_ = lean_apply_2(v_toPure_236_, lean_box(0), v___x_240_);
return v___x_241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg(lean_object* v_inst_245_){
_start:
{
lean_object* v___f_246_; lean_object* v___f_247_; lean_object* v___x_248_; 
lean_inc_ref(v_inst_245_);
v___f_246_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_246_, 0, v_inst_245_);
v___f_247_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg___lam__1), 4, 1);
lean_closure_set(v___f_247_, 0, v_inst_245_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___f_246_);
lean_ctor_set(v___x_248_, 1, v___f_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateTNameMapOfMonad(lean_object* v_m_249_, lean_object* v_00_u03b1_250_, lean_object* v_inst_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lake_instMonadStoreNameStateTNameMapOfMonad___redArg(v_inst_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__0(lean_object* v_k_253_, lean_object* v_x_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_x_254_, v_k_253_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__0___boxed(lean_object* v_k_256_, lean_object* v_x_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__0(v_k_256_, v_x_257_);
lean_dec(v_x_257_);
lean_dec(v_k_256_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__1(lean_object* v_inst_259_, lean_object* v_inst_260_, lean_object* v_k_261_, lean_object* v___y_262_){
_start:
{
lean_object* v_toApplicative_263_; lean_object* v_toFunctor_264_; lean_object* v_map_265_; lean_object* v___f_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v_toApplicative_263_ = lean_ctor_get(v_inst_259_, 0);
lean_inc_ref(v_toApplicative_263_);
lean_dec_ref(v_inst_259_);
v_toFunctor_264_ = lean_ctor_get(v_toApplicative_263_, 0);
lean_inc_ref(v_toFunctor_264_);
lean_dec_ref(v_toApplicative_263_);
v_map_265_ = lean_ctor_get(v_toFunctor_264_, 0);
lean_inc(v_map_265_);
lean_dec_ref(v_toFunctor_264_);
v___f_266_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_266_, 0, v_k_261_);
lean_inc(v___y_262_);
v___x_267_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_267_, 0, lean_box(0));
lean_closure_set(v___x_267_, 1, lean_box(0));
lean_closure_set(v___x_267_, 2, v___y_262_);
v___x_268_ = lean_apply_2(v_inst_260_, lean_box(0), v___x_267_);
v___x_269_ = lean_apply_4(v_map_265_, lean_box(0), lean_box(0), v___f_266_, v___x_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__1___boxed(lean_object* v_inst_270_, lean_object* v_inst_271_, lean_object* v_k_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__1(v_inst_270_, v_inst_271_, v_k_272_, v___y_273_);
lean_dec(v___y_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__2(lean_object* v_k_275_, lean_object* v_a_276_, lean_object* v_s_277_){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_box(0);
v___x_279_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_275_, v_a_276_, v_s_277_);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__3(lean_object* v_inst_281_, lean_object* v_k_282_, lean_object* v_a_283_, lean_object* v___y_284_){
_start:
{
lean_object* v___f_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___f_285_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__2), 3, 2);
lean_closure_set(v___f_285_, 0, v_k_282_);
lean_closure_set(v___f_285_, 1, v_a_283_);
lean_inc(v___y_284_);
v___x_286_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_286_, 0, lean_box(0));
lean_closure_set(v___x_286_, 1, lean_box(0));
lean_closure_set(v___x_286_, 2, lean_box(0));
lean_closure_set(v___x_286_, 3, v___y_284_);
lean_closure_set(v___x_286_, 4, v___f_285_);
v___x_287_ = lean_apply_2(v_inst_281_, lean_box(0), v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__3___boxed(lean_object* v_inst_288_, lean_object* v_k_289_, lean_object* v_a_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__3(v_inst_288_, v_k_289_, v_a_290_, v___y_291_);
lean_dec(v___y_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg(lean_object* v_inst_293_, lean_object* v_inst_294_){
_start:
{
lean_object* v___f_295_; lean_object* v___f_296_; lean_object* v___x_297_; 
lean_inc(v_inst_293_);
v___f_295_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_295_, 0, v_inst_294_);
lean_closure_set(v___f_295_, 1, v_inst_293_);
v___f_296_ = lean_alloc_closure((void*)(l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg___lam__3___boxed), 4, 1);
lean_closure_set(v___f_296_, 0, v_inst_293_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v___f_295_);
lean_ctor_set(v___x_297_, 1, v___f_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad(lean_object* v_00_u03c9_298_, lean_object* v_m_299_, lean_object* v_00_u03b1_300_, lean_object* v_inst_301_, lean_object* v_inst_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lake_instMonadStoreNameStateRefT_x27NameMapOfMonadLiftTSTOfMonad___redArg(v_inst_301_, v_inst_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut___redArg___lam__0(lean_object* v_store_304_, lean_object* v_k_305_, lean_object* v_a_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_apply_2(v_store_304_, v_k_305_, v_a_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut___redArg(lean_object* v_k_308_, lean_object* v_inst_309_){
_start:
{
lean_object* v_fetch_x3f_310_; lean_object* v_store_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_320_; 
v_fetch_x3f_310_ = lean_ctor_get(v_inst_309_, 0);
v_store_311_ = lean_ctor_get(v_inst_309_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v_inst_309_);
if (v_isSharedCheck_320_ == 0)
{
v___x_313_ = v_inst_309_;
v_isShared_314_ = v_isSharedCheck_320_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_store_311_);
lean_inc(v_fetch_x3f_310_);
lean_dec(v_inst_309_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_320_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___x_318_; 
lean_inc(v_k_308_);
v___f_315_ = lean_alloc_closure((void*)(l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut___redArg___lam__0), 3, 2);
lean_closure_set(v___f_315_, 0, v_store_311_);
lean_closure_set(v___f_315_, 1, v_k_308_);
v___x_316_ = lean_apply_1(v_fetch_x3f_310_, v_k_308_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 1, v___f_315_);
lean_ctor_set(v___x_313_, 0, v___x_316_);
v___x_318_ = v___x_313_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v___f_315_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut(lean_object* v_00_u03ba_321_, lean_object* v_00_u03b2_322_, lean_object* v_m_323_, lean_object* v_k_324_, lean_object* v_00_u03b1_325_, lean_object* v_inst_326_, lean_object* v_t_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lake_instMonadStore1OfOfMonadDStoreOfFamilyOut___redArg(v_k_324_, v_inst_326_);
return v___x_328_;
}
}
lean_object* runtime_initialize_Init_Data_Order(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_RBArray(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Family(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Store(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_StoreInsts(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_Data_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_RBArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Store(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_StoreInsts(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Order(uint8_t builtin);
lean_object* initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* initialize_Lake_Util_RBArray(uint8_t builtin);
lean_object* initialize_Lake_Util_Family(uint8_t builtin);
lean_object* initialize_Lake_Util_Store(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_StoreInsts(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_RBArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Store(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_StoreInsts(builtin);
}
#ifdef __cplusplus
}
#endif
