// Lean compiler output
// Module: Lake.Build.Context
// Imports: public import Lake.Config.Cache public import Lake.Config.Context public import Lake.Build.Job.Basic public import Lake.Build.ModuleTimes public import Std.Sync.Mutex public import Lean.Data.PersistentHashSet public import Lean.Util.ModuleUsage
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildConfig_showProgress(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildConfig_showProgress___boxed(lean_object*);
static const lean_array_object l_Lake_mkJobQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_mkJobQueue___closed__0 = (const lean_object*)&l_Lake_mkJobQueue___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_mkJobQueue();
LEAN_EXPORT lean_object* l_Lake_mkJobQueue___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg(lean_object*, size_t, size_t, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0_spec__1(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_KernelProviders_index_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_KernelProviders_index_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KernelProviders_index(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_KernelProviders_index___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanTrace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanTrace___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanTrace___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanTrace___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanTrace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getBuildConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getBuildConfig___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getBuildConfig___redArg___closed__0 = (const lean_object*)&l_Lake_getBuildConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getBuildConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getModuleTimes_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getModuleTimes_x3f___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getModuleTimes_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getModuleTimes_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getIsOldMode___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getIsOldMode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getIsOldMode___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getIsOldMode___redArg___closed__0 = (const lean_object*)&l_Lake_getIsOldMode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsOldMode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getTrustHash___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getTrustHash___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getTrustHash___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getTrustHash___redArg___closed__0 = (const lean_object*)&l_Lake_getTrustHash___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTrustHash(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getNoBuild___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getNoBuild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getNoBuild___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getNoBuild___redArg___closed__0 = (const lean_object*)&l_Lake_getNoBuild___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getNoBuild(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getVerbosity___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getVerbosity___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getVerbosity___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getVerbosity___redArg___closed__0 = (const lean_object*)&l_Lake_getVerbosity___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getVerbosity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getIsVerbose___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getIsVerbose___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getIsVerbose___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getIsVerbose___redArg___closed__0 = (const lean_object*)&l_Lake_getIsVerbose___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsVerbose(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getIsQuiet___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getIsQuiet___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getIsQuiet___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getIsQuiet___redArg___closed__0 = (const lean_object*)&l_Lake_getIsQuiet___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getIsQuiet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanOptOverrides___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanOptOverrides___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanOptOverrides___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanOptOverrides___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildConfig_showProgress(lean_object* v_cfg_1_){
_start:
{
uint8_t v_noBuild_2_; uint8_t v_verbosity_3_; 
v_noBuild_2_ = lean_ctor_get_uint8(v_cfg_1_, sizeof(void*)*5 + 2);
v_verbosity_3_ = lean_ctor_get_uint8(v_cfg_1_, sizeof(void*)*5 + 4);
if (v_noBuild_2_ == 0)
{
goto v___jp_4_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; uint8_t v___x_14_; 
v___x_11_ = lean_box(v_verbosity_3_);
v___x_12_ = lean_obj_tag_nat(v___x_11_);
lean_dec(v___x_11_);
v___x_13_ = lean_unsigned_to_nat(2u);
v___x_14_ = lean_nat_dec_eq(v___x_12_, v___x_13_);
if (v___x_14_ == 0)
{
goto v___jp_4_;
}
else
{
return v___x_14_;
}
}
v___jp_4_:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_5_ = lean_box(v_verbosity_3_);
v___x_6_ = lean_obj_tag_nat(v___x_5_);
lean_dec(v___x_5_);
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_nat_dec_eq(v___x_6_, v___x_7_);
if (v___x_8_ == 0)
{
uint8_t v___x_9_; 
v___x_9_ = 1;
return v___x_9_;
}
else
{
uint8_t v___x_10_; 
v___x_10_ = 0;
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildConfig_showProgress___boxed(lean_object* v_cfg_15_){
_start:
{
uint8_t v_res_16_; lean_object* v_r_17_; 
v_res_16_ = l_Lake_BuildConfig_showProgress(v_cfg_15_);
lean_dec_ref(v_cfg_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkJobQueue(){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = ((lean_object*)(l_Lake_mkJobQueue___closed__0));
v___x_22_ = lean_st_mk_ref(v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkJobQueue___boxed(lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lake_mkJobQueue();
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_25_, lean_object* v_x_26_, uint64_t v_x_27_, lean_object* v_x_28_){
_start:
{
lean_object* v_ks_29_; lean_object* v_vs_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_57_; 
v_ks_29_ = lean_ctor_get(v_x_25_, 0);
v_vs_30_ = lean_ctor_get(v_x_25_, 1);
v_isSharedCheck_57_ = !lean_is_exclusive(v_x_25_);
if (v_isSharedCheck_57_ == 0)
{
v___x_32_ = v_x_25_;
v_isShared_33_ = v_isSharedCheck_57_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_vs_30_);
lean_inc(v_ks_29_);
lean_dec(v_x_25_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_57_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = lean_array_get_size(v_ks_29_);
v___x_35_ = lean_nat_dec_lt(v_x_26_, v___x_34_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
lean_dec(v_x_26_);
v___x_36_ = lean_box_uint64(v_x_27_);
v___x_37_ = lean_array_push(v_ks_29_, v___x_36_);
v___x_38_ = lean_array_push(v_vs_30_, v_x_28_);
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 1, v___x_38_);
lean_ctor_set(v___x_32_, 0, v___x_37_);
v___x_40_ = v___x_32_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_37_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
else
{
lean_object* v_k_x27_42_; uint64_t v___x_43_; uint8_t v___x_44_; 
v_k_x27_42_ = lean_array_fget_borrowed(v_ks_29_, v_x_26_);
v___x_43_ = lean_unbox_uint64(v_k_x27_42_);
v___x_44_ = lean_uint64_dec_eq(v_x_27_, v___x_43_);
if (v___x_44_ == 0)
{
lean_object* v___x_46_; 
if (v_isShared_33_ == 0)
{
v___x_46_ = v___x_32_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_ks_29_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v_vs_30_);
v___x_46_ = v_reuseFailAlloc_50_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_nat_add(v_x_26_, v___x_47_);
lean_dec(v_x_26_);
v_x_25_ = v___x_46_;
v_x_26_ = v___x_48_;
goto _start;
}
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_51_ = lean_box_uint64(v_x_27_);
v___x_52_ = lean_array_fset(v_ks_29_, v_x_26_, v___x_51_);
v___x_53_ = lean_array_fset(v_vs_30_, v_x_26_, v_x_28_);
lean_dec(v_x_26_);
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 1, v___x_53_);
lean_ctor_set(v___x_32_, 0, v___x_52_);
v___x_55_ = v___x_32_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v___x_52_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v___x_53_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_x_58_, lean_object* v_x_59_, lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
uint64_t v_x_773__boxed_62_; lean_object* v_res_63_; 
v_x_773__boxed_62_ = lean_unbox_uint64(v_x_60_);
lean_dec_ref(v_x_60_);
v_res_63_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___redArg(v_x_58_, v_x_59_, v_x_773__boxed_62_, v_x_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___redArg(lean_object* v_n_64_, uint64_t v_k_65_, lean_object* v_v_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___redArg(v_n_64_, v___x_67_, v_k_65_, v_v_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_n_69_, lean_object* v_k_70_, lean_object* v_v_71_){
_start:
{
uint64_t v_k_boxed_72_; lean_object* v_res_73_; 
v_k_boxed_72_ = lean_unbox_uint64(v_k_70_);
lean_dec_ref(v_k_70_);
v_res_73_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___redArg(v_n_69_, v_k_boxed_72_, v_v_71_);
return v_res_73_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg(lean_object* v_x_75_, size_t v_x_76_, size_t v_x_77_, uint64_t v_x_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
lean_object* v_es_80_; size_t v___x_81_; size_t v___x_82_; lean_object* v_j_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v_es_80_ = lean_ctor_get(v_x_75_, 0);
v___x_81_ = ((size_t)31ULL);
v___x_82_ = lean_usize_land(v_x_76_, v___x_81_);
v_j_83_ = lean_usize_to_nat(v___x_82_);
v___x_84_ = lean_array_get_size(v_es_80_);
v___x_85_ = lean_nat_dec_lt(v_j_83_, v___x_84_);
if (v___x_85_ == 0)
{
lean_dec(v_j_83_);
lean_dec(v_x_79_);
return v_x_75_;
}
else
{
lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_128_; 
lean_inc_ref(v_es_80_);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v_x_75_, 0);
lean_dec(v_unused_129_);
v___x_87_ = v_x_75_;
v_isShared_88_ = v_isSharedCheck_128_;
goto v_resetjp_86_;
}
else
{
lean_dec(v_x_75_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_128_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v_v_89_; lean_object* v___x_90_; lean_object* v_xs_x27_91_; lean_object* v___y_93_; 
v_v_89_ = lean_array_fget(v_es_80_, v_j_83_);
v___x_90_ = lean_box(0);
v_xs_x27_91_ = lean_array_fset(v_es_80_, v_j_83_, v___x_90_);
switch(lean_obj_tag(v_v_89_))
{
case 0:
{
lean_object* v_key_98_; lean_object* v_val_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_112_; 
v_key_98_ = lean_ctor_get(v_v_89_, 0);
v_val_99_ = lean_ctor_get(v_v_89_, 1);
v_isSharedCheck_112_ = !lean_is_exclusive(v_v_89_);
if (v_isSharedCheck_112_ == 0)
{
v___x_101_ = v_v_89_;
v_isShared_102_ = v_isSharedCheck_112_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_val_99_);
lean_inc(v_key_98_);
lean_dec(v_v_89_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_112_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
uint64_t v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_unbox_uint64(v_key_98_);
v___x_104_ = lean_uint64_dec_eq(v_x_78_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
lean_del_object(v___x_101_);
v___x_105_ = lean_box_uint64(v_x_78_);
v___x_106_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_98_, v_val_99_, v___x_105_, v_x_79_);
v___x_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
v___y_93_ = v___x_107_;
goto v___jp_92_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_110_; 
lean_dec(v_val_99_);
lean_dec(v_key_98_);
v___x_108_ = lean_box_uint64(v_x_78_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v_x_79_);
lean_ctor_set(v___x_101_, 0, v___x_108_);
v___x_110_ = v___x_101_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v_x_79_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
v___y_93_ = v___x_110_;
goto v___jp_92_;
}
}
}
}
case 1:
{
lean_object* v_node_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_125_; 
v_node_113_ = lean_ctor_get(v_v_89_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v_v_89_);
if (v_isSharedCheck_125_ == 0)
{
v___x_115_ = v_v_89_;
v_isShared_116_ = v_isSharedCheck_125_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_node_113_);
lean_dec(v_v_89_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_125_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
size_t v___x_117_; size_t v___x_118_; size_t v___x_119_; size_t v___x_120_; lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_117_ = ((size_t)5ULL);
v___x_118_ = lean_usize_shift_right(v_x_76_, v___x_117_);
v___x_119_ = ((size_t)1ULL);
v___x_120_ = lean_usize_add(v_x_77_, v___x_119_);
v___x_121_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg(v_node_113_, v___x_118_, v___x_120_, v_x_78_, v_x_79_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 0, v___x_121_);
v___x_123_ = v___x_115_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
v___y_93_ = v___x_123_;
goto v___jp_92_;
}
}
}
default: 
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_box_uint64(v_x_78_);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v_x_79_);
v___y_93_ = v___x_127_;
goto v___jp_92_;
}
}
v___jp_92_:
{
lean_object* v___x_94_; lean_object* v___x_96_; 
v___x_94_ = lean_array_fset(v_xs_x27_91_, v_j_83_, v___y_93_);
lean_dec(v_j_83_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 0, v___x_94_);
v___x_96_ = v___x_87_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v___x_94_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
}
else
{
lean_object* v_ks_130_; lean_object* v_vs_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_149_; 
v_ks_130_ = lean_ctor_get(v_x_75_, 0);
v_vs_131_ = lean_ctor_get(v_x_75_, 1);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_149_ == 0)
{
v___x_133_ = v_x_75_;
v_isShared_134_ = v_isSharedCheck_149_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_vs_131_);
lean_inc(v_ks_130_);
lean_dec(v_x_75_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_149_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_ks_130_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_vs_131_);
v___x_136_ = v_reuseFailAlloc_148_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
lean_object* v_newNode_137_; size_t v___x_138_; uint8_t v___x_139_; 
v_newNode_137_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___redArg(v___x_136_, v_x_78_, v_x_79_);
v___x_138_ = ((size_t)7ULL);
v___x_139_ = lean_usize_dec_le(v___x_138_, v_x_77_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_140_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_137_);
v___x_141_ = lean_unsigned_to_nat(4u);
v___x_142_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
lean_dec(v___x_140_);
if (v___x_142_ == 0)
{
lean_object* v_ks_143_; lean_object* v_vs_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_ks_143_ = lean_ctor_get(v_newNode_137_, 0);
lean_inc_ref(v_ks_143_);
v_vs_144_ = lean_ctor_get(v_newNode_137_, 1);
lean_inc_ref(v_vs_144_);
lean_dec_ref(v_newNode_137_);
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___closed__0);
v___x_147_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___redArg(v_x_77_, v_ks_143_, v_vs_144_, v___x_145_, v___x_146_);
lean_dec_ref(v_vs_144_);
lean_dec_ref(v_ks_143_);
return v___x_147_;
}
else
{
return v_newNode_137_;
}
}
else
{
return v_newNode_137_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___redArg(size_t v_depth_150_, lean_object* v_keys_151_, lean_object* v_vals_152_, lean_object* v_i_153_, lean_object* v_entries_154_){
_start:
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = lean_array_get_size(v_keys_151_);
v___x_156_ = lean_nat_dec_lt(v_i_153_, v___x_155_);
if (v___x_156_ == 0)
{
lean_dec(v_i_153_);
return v_entries_154_;
}
else
{
lean_object* v_k_157_; lean_object* v_v_158_; uint64_t v___x_159_; size_t v_h_160_; size_t v___x_161_; lean_object* v___x_162_; size_t v___x_163_; size_t v___x_164_; size_t v___x_165_; size_t v_h_166_; lean_object* v___x_167_; uint64_t v___x_168_; lean_object* v___x_169_; 
v_k_157_ = lean_array_fget_borrowed(v_keys_151_, v_i_153_);
v_v_158_ = lean_array_fget_borrowed(v_vals_152_, v_i_153_);
v___x_159_ = lean_unbox_uint64(v_k_157_);
v_h_160_ = lean_uint64_to_usize(v___x_159_);
v___x_161_ = ((size_t)5ULL);
v___x_162_ = lean_unsigned_to_nat(1u);
v___x_163_ = ((size_t)1ULL);
v___x_164_ = lean_usize_sub(v_depth_150_, v___x_163_);
v___x_165_ = lean_usize_mul(v___x_161_, v___x_164_);
v_h_166_ = lean_usize_shift_right(v_h_160_, v___x_165_);
v___x_167_ = lean_nat_add(v_i_153_, v___x_162_);
lean_dec(v_i_153_);
v___x_168_ = lean_unbox_uint64(v_k_157_);
lean_inc(v_v_158_);
v___x_169_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg(v_entries_154_, v_h_166_, v_depth_150_, v___x_168_, v_v_158_);
v_i_153_ = v___x_167_;
v_entries_154_ = v___x_169_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_171_, lean_object* v_keys_172_, lean_object* v_vals_173_, lean_object* v_i_174_, lean_object* v_entries_175_){
_start:
{
size_t v_depth_boxed_176_; lean_object* v_res_177_; 
v_depth_boxed_176_ = lean_unbox_usize(v_depth_171_);
lean_dec(v_depth_171_);
v_res_177_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___redArg(v_depth_boxed_176_, v_keys_172_, v_vals_173_, v_i_174_, v_entries_175_);
lean_dec_ref(v_vals_173_);
lean_dec_ref(v_keys_172_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg___boxed(lean_object* v_x_178_, lean_object* v_x_179_, lean_object* v_x_180_, lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
size_t v_x_857__boxed_183_; size_t v_x_858__boxed_184_; uint64_t v_x_859__boxed_185_; lean_object* v_res_186_; 
v_x_857__boxed_183_ = lean_unbox_usize(v_x_179_);
lean_dec(v_x_179_);
v_x_858__boxed_184_ = lean_unbox_usize(v_x_180_);
lean_dec(v_x_180_);
v_x_859__boxed_185_ = lean_unbox_uint64(v_x_181_);
lean_dec_ref(v_x_181_);
v_res_186_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg(v_x_178_, v_x_857__boxed_183_, v_x_858__boxed_184_, v_x_859__boxed_185_, v_x_182_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0(lean_object* v_m_189_, lean_object* v_d_190_, lean_object* v_o_191_){
_start:
{
lean_object* v___y_193_; 
if (lean_obj_tag(v_o_191_) == 0)
{
lean_object* v___x_197_; 
v___x_197_ = ((lean_object*)(l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0___closed__0));
v___y_193_ = v___x_197_;
goto v___jp_192_;
}
else
{
lean_object* v_val_198_; 
v_val_198_ = lean_ctor_get(v_o_191_, 0);
lean_inc(v_val_198_);
lean_dec_ref_known(v_o_191_, 1);
v___y_193_ = v_val_198_;
goto v___jp_192_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_m_189_);
lean_ctor_set(v___x_194_, 1, v_d_190_);
v___x_195_ = lean_array_push(v___y_193_, v___x_194_);
v___x_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0_spec__1(lean_object* v_xs_199_, uint64_t v_v_200_, lean_object* v_i_201_){
_start:
{
lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_202_ = lean_array_get_size(v_xs_199_);
v___x_203_ = lean_nat_dec_lt(v_i_201_, v___x_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
lean_dec(v_i_201_);
v___x_204_ = lean_box(0);
return v___x_204_;
}
else
{
lean_object* v___x_205_; uint64_t v___x_206_; uint8_t v___x_207_; 
v___x_205_ = lean_array_fget_borrowed(v_xs_199_, v_i_201_);
v___x_206_ = lean_unbox_uint64(v___x_205_);
v___x_207_ = lean_uint64_dec_eq(v___x_206_, v_v_200_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(1u);
v___x_209_ = lean_nat_add(v_i_201_, v___x_208_);
lean_dec(v_i_201_);
v_i_201_ = v___x_209_;
goto _start;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_211_, 0, v_i_201_);
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_212_, lean_object* v_v_213_, lean_object* v_i_214_){
_start:
{
uint64_t v_v_boxed_215_; lean_object* v_res_216_; 
v_v_boxed_215_ = lean_unbox_uint64(v_v_213_);
lean_dec_ref(v_v_213_);
v_res_216_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0_spec__1(v_xs_212_, v_v_boxed_215_, v_i_214_);
lean_dec_ref(v_xs_212_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0(lean_object* v_xs_217_, uint64_t v_v_218_){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0_spec__1(v_xs_217_, v_v_218_, v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0___boxed(lean_object* v_xs_221_, lean_object* v_v_222_){
_start:
{
uint64_t v_v_boxed_223_; lean_object* v_res_224_; 
v_v_boxed_223_ = lean_unbox_uint64(v_v_222_);
lean_dec_ref(v_v_222_);
v_res_224_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0(v_xs_221_, v_v_boxed_223_);
lean_dec_ref(v_xs_221_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0(lean_object* v_m_225_, lean_object* v_d_226_, lean_object* v_x_227_, size_t v_x_228_, size_t v_x_229_, uint64_t v_x_230_){
_start:
{
if (lean_obj_tag(v_x_227_) == 0)
{
lean_object* v_es_231_; size_t v___x_232_; size_t v___x_233_; lean_object* v_j_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_es_231_ = lean_ctor_get(v_x_227_, 0);
v___x_232_ = ((size_t)31ULL);
v___x_233_ = lean_usize_land(v_x_228_, v___x_232_);
v_j_234_ = lean_usize_to_nat(v___x_233_);
v___x_235_ = lean_array_get_size(v_es_231_);
v___x_236_ = lean_nat_dec_lt(v_j_234_, v___x_235_);
if (v___x_236_ == 0)
{
lean_dec(v_j_234_);
lean_dec_ref(v_d_226_);
lean_dec(v_m_225_);
return v_x_227_;
}
else
{
lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_308_; 
lean_inc_ref(v_es_231_);
v_isSharedCheck_308_ = !lean_is_exclusive(v_x_227_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_x_227_, 0);
lean_dec(v_unused_309_);
v___x_238_ = v_x_227_;
v_isShared_239_ = v_isSharedCheck_308_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_x_227_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_308_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v_v_240_; lean_object* v___x_241_; lean_object* v_xs_x27_242_; lean_object* v___y_244_; 
v_v_240_ = lean_array_fget(v_es_231_, v_j_234_);
v___x_241_ = lean_box(0);
v_xs_x27_242_ = lean_array_fset(v_es_231_, v_j_234_, v___x_241_);
switch(lean_obj_tag(v_v_240_))
{
case 0:
{
lean_object* v_key_249_; lean_object* v_val_250_; uint64_t v___x_251_; uint8_t v___x_252_; 
v_key_249_ = lean_ctor_get(v_v_240_, 0);
v_val_250_ = lean_ctor_get(v_v_240_, 1);
v___x_251_ = lean_unbox_uint64(v_key_249_);
v___x_252_ = lean_uint64_dec_eq(v_x_230_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_box(0);
v___x_254_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0(v_m_225_, v_d_226_, v___x_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
v___y_244_ = v_v_240_;
goto v___jp_243_;
}
else
{
lean_object* v_val_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_264_; 
lean_inc(v_val_250_);
lean_inc(v_key_249_);
lean_dec_ref_known(v_v_240_, 2);
v_val_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_264_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_264_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_val_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_264_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_259_ = lean_box_uint64(v_x_230_);
v___x_260_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_249_, v_val_250_, v___x_259_, v_val_255_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_260_);
v___x_262_ = v___x_257_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
v___y_244_ = v___x_262_;
goto v___jp_243_;
}
}
}
}
else
{
lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_276_; 
lean_inc(v_val_250_);
v_isSharedCheck_276_ = !lean_is_exclusive(v_v_240_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; lean_object* v_unused_278_; 
v_unused_277_ = lean_ctor_get(v_v_240_, 1);
lean_dec(v_unused_277_);
v_unused_278_ = lean_ctor_get(v_v_240_, 0);
lean_dec(v_unused_278_);
v___x_266_ = v_v_240_;
v_isShared_267_ = v_isSharedCheck_276_;
goto v_resetjp_265_;
}
else
{
lean_dec(v_v_240_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_276_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_268_, 0, v_val_250_);
v___x_269_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0(v_m_225_, v_d_226_, v___x_268_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v___x_270_; 
lean_del_object(v___x_266_);
v___x_270_ = lean_box(2);
v___y_244_ = v___x_270_;
goto v___jp_243_;
}
else
{
lean_object* v_val_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v_val_271_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_val_271_);
lean_dec_ref_known(v___x_269_, 1);
v___x_272_ = lean_box_uint64(v_x_230_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v_val_271_);
lean_ctor_set(v___x_266_, 0, v___x_272_);
v___x_274_ = v___x_266_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_val_271_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
v___y_244_ = v___x_274_;
goto v___jp_243_;
}
}
}
}
}
case 1:
{
lean_object* v_node_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_302_; 
v_node_279_ = lean_ctor_get(v_v_240_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v_v_240_);
if (v_isSharedCheck_302_ == 0)
{
v___x_281_ = v_v_240_;
v_isShared_282_ = v_isSharedCheck_302_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_node_279_);
lean_dec(v_v_240_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_302_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
size_t v___x_283_; size_t v___x_284_; size_t v___x_285_; size_t v___x_286_; lean_object* v_newNode_287_; lean_object* v___x_288_; 
v___x_283_ = ((size_t)5ULL);
v___x_284_ = lean_usize_shift_right(v_x_228_, v___x_283_);
v___x_285_ = ((size_t)1ULL);
v___x_286_ = lean_usize_add(v_x_229_, v___x_285_);
v_newNode_287_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0(v_m_225_, v_d_226_, v_node_279_, v___x_284_, v___x_286_, v_x_230_);
lean_inc_ref(v_newNode_287_);
v___x_288_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_287_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v___x_290_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v_newNode_287_);
v___x_290_ = v___x_281_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_newNode_287_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
v___y_244_ = v___x_290_;
goto v___jp_243_;
}
}
else
{
lean_object* v_val_292_; lean_object* v_fst_293_; lean_object* v_snd_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec_ref(v_newNode_287_);
lean_del_object(v___x_281_);
v_val_292_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_val_292_);
lean_dec_ref_known(v___x_288_, 1);
v_fst_293_ = lean_ctor_get(v_val_292_, 0);
v_snd_294_ = lean_ctor_get(v_val_292_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v_val_292_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v_val_292_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_snd_294_);
lean_inc(v_fst_293_);
lean_dec(v_val_292_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_fst_293_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v_snd_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
v___y_244_ = v___x_299_;
goto v___jp_243_;
}
}
}
}
}
default: 
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_box(0);
v___x_304_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0(v_m_225_, v_d_226_, v___x_303_);
if (lean_obj_tag(v___x_304_) == 0)
{
v___y_244_ = v_v_240_;
goto v___jp_243_;
}
else
{
lean_object* v_val_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_val_305_ = lean_ctor_get(v___x_304_, 0);
lean_inc(v_val_305_);
lean_dec_ref_known(v___x_304_, 1);
v___x_306_ = lean_box_uint64(v_x_230_);
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v_val_305_);
v___y_244_ = v___x_307_;
goto v___jp_243_;
}
}
}
v___jp_243_:
{
lean_object* v___x_245_; lean_object* v___x_247_; 
v___x_245_ = lean_array_fset(v_xs_x27_242_, v_j_234_, v___y_244_);
lean_dec(v_j_234_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_245_);
v___x_247_ = v___x_238_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
else
{
lean_object* v_ks_310_; lean_object* v_vs_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_345_; 
v_ks_310_ = lean_ctor_get(v_x_227_, 0);
v_vs_311_ = lean_ctor_get(v_x_227_, 1);
v_isSharedCheck_345_ = !lean_is_exclusive(v_x_227_);
if (v_isSharedCheck_345_ == 0)
{
v___x_313_ = v_x_227_;
v_isShared_314_ = v_isSharedCheck_345_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_vs_311_);
lean_inc(v_ks_310_);
lean_dec(v_x_227_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_345_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; 
v___x_315_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__0(v_ks_310_, v_x_230_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v___x_317_; 
if (v_isShared_314_ == 0)
{
v___x_317_ = v___x_313_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_ks_310_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_vs_311_);
v___x_317_ = v_reuseFailAlloc_322_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_box(0);
v___x_319_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0(v_m_225_, v_d_226_, v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
return v___x_317_;
}
else
{
lean_object* v_val_320_; lean_object* v___x_321_; 
v_val_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_val_320_);
lean_dec_ref_known(v___x_319_, 1);
v___x_321_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg(v___x_317_, v_x_228_, v_x_229_, v_x_230_, v_val_320_);
return v___x_321_;
}
}
}
else
{
lean_object* v_val_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_344_; 
v_val_323_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_344_ == 0)
{
v___x_325_ = v___x_315_;
v_isShared_326_ = v_isSharedCheck_344_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_val_323_);
lean_dec(v___x_315_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_344_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v_v_x27_327_; lean_object* v_keys_328_; lean_object* v_vals_329_; lean_object* v___x_331_; 
v_v_x27_327_ = lean_array_fget(v_vs_311_, v_val_323_);
lean_inc(v_val_323_);
v_keys_328_ = l_Array_eraseIdx___redArg(v_ks_310_, v_val_323_);
v_vals_329_ = l_Array_eraseIdx___redArg(v_vs_311_, v_val_323_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v_v_x27_327_);
v___x_331_ = v___x_325_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_v_x27_327_);
v___x_331_ = v_reuseFailAlloc_343_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___lam__0(v_m_225_, v_d_226_, v___x_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v___x_334_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 1, v_vals_329_);
lean_ctor_set(v___x_313_, 0, v_keys_328_);
v___x_334_ = v___x_313_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_keys_328_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_vals_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
else
{
lean_object* v_val_336_; lean_object* v___x_337_; lean_object* v_keys_338_; lean_object* v_vals_339_; lean_object* v___x_341_; 
v_val_336_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_val_336_);
lean_dec_ref_known(v___x_332_, 1);
v___x_337_ = lean_box_uint64(v_x_230_);
v_keys_338_ = lean_array_push(v_keys_328_, v___x_337_);
v_vals_339_ = lean_array_push(v_vals_329_, v_val_336_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 1, v_vals_339_);
lean_ctor_set(v___x_313_, 0, v_keys_338_);
v___x_341_ = v___x_313_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_keys_338_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_vals_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0___boxed(lean_object* v_m_346_, lean_object* v_d_347_, lean_object* v_x_348_, lean_object* v_x_349_, lean_object* v_x_350_, lean_object* v_x_351_){
_start:
{
size_t v_x_1064__boxed_352_; size_t v_x_1065__boxed_353_; uint64_t v_x_1066__boxed_354_; lean_object* v_res_355_; 
v_x_1064__boxed_352_ = lean_unbox_usize(v_x_349_);
lean_dec(v_x_349_);
v_x_1065__boxed_353_ = lean_unbox_usize(v_x_350_);
lean_dec(v_x_350_);
v_x_1066__boxed_354_ = lean_unbox_uint64(v_x_351_);
lean_dec_ref(v_x_351_);
v_res_355_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0(v_m_346_, v_d_347_, v_x_348_, v_x_1064__boxed_352_, v_x_1065__boxed_353_, v_x_1066__boxed_354_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_KernelProviders_index_spec__1(lean_object* v_m_356_, lean_object* v_d_357_, lean_object* v_as_358_, size_t v_i_359_, size_t v_stop_360_, lean_object* v_b_361_){
_start:
{
uint8_t v___x_362_; 
v___x_362_ = lean_usize_dec_eq(v_i_359_, v_stop_360_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; uint64_t v___x_364_; size_t v_h_365_; size_t v___x_366_; uint64_t v___x_367_; lean_object* v___x_368_; size_t v___x_369_; 
v___x_363_ = lean_array_uget_borrowed(v_as_358_, v_i_359_);
v___x_364_ = lean_unbox_uint64(v___x_363_);
v_h_365_ = lean_uint64_to_usize(v___x_364_);
v___x_366_ = ((size_t)1ULL);
v___x_367_ = lean_unbox_uint64(v___x_363_);
lean_inc_ref(v_d_357_);
lean_inc(v_m_356_);
v___x_368_ = l_Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0(v_m_356_, v_d_357_, v_b_361_, v_h_365_, v___x_366_, v___x_367_);
v___x_369_ = lean_usize_add(v_i_359_, v___x_366_);
v_i_359_ = v___x_369_;
v_b_361_ = v___x_368_;
goto _start;
}
else
{
lean_dec_ref(v_d_357_);
lean_dec(v_m_356_);
return v_b_361_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_KernelProviders_index_spec__1___boxed(lean_object* v_m_371_, lean_object* v_d_372_, lean_object* v_as_373_, lean_object* v_i_374_, lean_object* v_stop_375_, lean_object* v_b_376_){
_start:
{
size_t v_i_boxed_377_; size_t v_stop_boxed_378_; lean_object* v_res_379_; 
v_i_boxed_377_ = lean_unbox_usize(v_i_374_);
lean_dec(v_i_374_);
v_stop_boxed_378_ = lean_unbox_usize(v_stop_375_);
lean_dec(v_stop_375_);
v_res_379_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_KernelProviders_index_spec__1(v_m_371_, v_d_372_, v_as_373_, v_i_boxed_377_, v_stop_boxed_378_, v_b_376_);
lean_dec_ref(v_as_373_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lake_KernelProviders_index(lean_object* v_s_380_, lean_object* v_m_381_, lean_object* v_d_382_, lean_object* v_hs_383_){
_start:
{
lean_object* v_indexed_384_; lean_object* v_byHash_385_; lean_object* v_toolchain_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v_indexed_384_ = lean_ctor_get(v_s_380_, 0);
v_byHash_385_ = lean_ctor_get(v_s_380_, 1);
v_toolchain_386_ = lean_ctor_get(v_s_380_, 2);
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = lean_array_get_size(v_hs_383_);
v___x_389_ = lean_nat_dec_lt(v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
lean_dec_ref(v_d_382_);
lean_dec(v_m_381_);
return v_s_380_;
}
else
{
lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_399_; 
lean_inc_ref(v_toolchain_386_);
lean_inc_ref(v_byHash_385_);
lean_inc_ref(v_indexed_384_);
v_isSharedCheck_399_ = !lean_is_exclusive(v_s_380_);
if (v_isSharedCheck_399_ == 0)
{
lean_object* v_unused_400_; lean_object* v_unused_401_; lean_object* v_unused_402_; 
v_unused_400_ = lean_ctor_get(v_s_380_, 2);
lean_dec(v_unused_400_);
v_unused_401_ = lean_ctor_get(v_s_380_, 1);
lean_dec(v_unused_401_);
v_unused_402_ = lean_ctor_get(v_s_380_, 0);
lean_dec(v_unused_402_);
v___x_391_ = v_s_380_;
v_isShared_392_ = v_isSharedCheck_399_;
goto v_resetjp_390_;
}
else
{
lean_dec(v_s_380_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_399_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
size_t v___x_393_; size_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_393_ = ((size_t)0ULL);
v___x_394_ = lean_usize_of_nat(v___x_388_);
v___x_395_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_KernelProviders_index_spec__1(v_m_381_, v_d_382_, v_hs_383_, v___x_393_, v___x_394_, v_byHash_385_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 1, v___x_395_);
v___x_397_ = v___x_391_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_indexed_384_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_398_, 2, v_toolchain_386_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_KernelProviders_index___boxed(lean_object* v_s_403_, lean_object* v_m_404_, lean_object* v_d_405_, lean_object* v_hs_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lake_KernelProviders_index(v_s_403_, v_m_404_, v_d_405_, v_hs_406_);
lean_dec_ref(v_hs_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1(lean_object* v_00_u03b2_408_, lean_object* v_x_409_, size_t v_x_410_, size_t v_x_411_, uint64_t v_x_412_, lean_object* v_x_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___redArg(v_x_409_, v_x_410_, v_x_411_, v_x_412_, v_x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1___boxed(lean_object* v_00_u03b2_415_, lean_object* v_x_416_, lean_object* v_x_417_, lean_object* v_x_418_, lean_object* v_x_419_, lean_object* v_x_420_){
_start:
{
size_t v_x_1336__boxed_421_; size_t v_x_1337__boxed_422_; uint64_t v_x_1338__boxed_423_; lean_object* v_res_424_; 
v_x_1336__boxed_421_ = lean_unbox_usize(v_x_417_);
lean_dec(v_x_417_);
v_x_1337__boxed_422_ = lean_unbox_usize(v_x_418_);
lean_dec(v_x_418_);
v_x_1338__boxed_423_ = lean_unbox_uint64(v_x_419_);
lean_dec_ref(v_x_419_);
v_res_424_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1(v_00_u03b2_415_, v_x_416_, v_x_1336__boxed_421_, v_x_1337__boxed_422_, v_x_1338__boxed_423_, v_x_420_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_425_, lean_object* v_n_426_, uint64_t v_k_427_, lean_object* v_v_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___redArg(v_n_426_, v_k_427_, v_v_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_430_, lean_object* v_n_431_, lean_object* v_k_432_, lean_object* v_v_433_){
_start:
{
uint64_t v_k_boxed_434_; lean_object* v_res_435_; 
v_k_boxed_434_ = lean_unbox_uint64(v_k_432_);
lean_dec_ref(v_k_432_);
v_res_435_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3(v_00_u03b2_430_, v_n_431_, v_k_boxed_434_, v_v_433_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_436_, size_t v_depth_437_, lean_object* v_keys_438_, lean_object* v_vals_439_, lean_object* v_heq_440_, lean_object* v_i_441_, lean_object* v_entries_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___redArg(v_depth_437_, v_keys_438_, v_vals_439_, v_i_441_, v_entries_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_444_, lean_object* v_depth_445_, lean_object* v_keys_446_, lean_object* v_vals_447_, lean_object* v_heq_448_, lean_object* v_i_449_, lean_object* v_entries_450_){
_start:
{
size_t v_depth_boxed_451_; lean_object* v_res_452_; 
v_depth_boxed_451_ = lean_unbox_usize(v_depth_445_);
lean_dec(v_depth_445_);
v_res_452_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__4(v_00_u03b2_444_, v_depth_boxed_451_, v_keys_446_, v_vals_447_, v_heq_448_, v_i_449_, v_entries_450_);
lean_dec_ref(v_vals_447_);
lean_dec_ref(v_keys_446_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_453_, lean_object* v_x_454_, lean_object* v_x_455_, uint64_t v_x_456_, lean_object* v_x_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___redArg(v_x_454_, v_x_455_, v_x_456_, v_x_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_459_, lean_object* v_x_460_, lean_object* v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
uint64_t v_x_1358__boxed_464_; lean_object* v_res_465_; 
v_x_1358__boxed_464_ = lean_unbox_uint64(v_x_462_);
lean_dec_ref(v_x_462_);
v_res_465_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lake_KernelProviders_index_spec__0_spec__1_spec__3_spec__5(v_00_u03b2_459_, v_x_460_, v_x_461_, v_x_1358__boxed_464_, v_x_463_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0(lean_object* v_inst_466_, lean_object* v_00_u03b1_467_, lean_object* v_x_468_, lean_object* v_ctx_469_){
_start:
{
lean_object* v_toContext_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_toContext_470_ = lean_ctor_get(v_ctx_469_, 1);
lean_inc(v_toContext_470_);
lean_dec_ref(v_ctx_469_);
v___x_471_ = lean_apply_1(v_x_468_, v_toContext_470_);
v___x_472_ = lean_apply_2(v_inst_466_, lean_box(0), v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg(lean_object* v_inst_473_){
_start:
{
lean_object* v___f_474_; 
v___f_474_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_474_, 0, v_inst_473_);
return v___f_474_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure(lean_object* v_m_475_, lean_object* v_inst_476_){
_start:
{
lean_object* v___f_477_; 
v___f_477_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_477_, 0, v_inst_476_);
return v___f_477_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg(lean_object* v_inst_478_){
_start:
{
lean_inc(v_inst_478_);
return v_inst_478_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___redArg___boxed(lean_object* v_inst_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lake_getBuildContext___redArg(v_inst_479_);
lean_dec(v_inst_479_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext(lean_object* v_m_481_, lean_object* v_inst_482_){
_start:
{
lean_inc(v_inst_482_);
return v_inst_482_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildContext___boxed(lean_object* v_m_483_, lean_object* v_inst_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lake_getBuildContext(v_m_483_, v_inst_484_);
lean_dec(v_inst_484_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0(lean_object* v_x_486_){
_start:
{
lean_object* v_leanTrace_487_; 
v_leanTrace_487_ = lean_ctor_get(v_x_486_, 2);
lean_inc_ref(v_leanTrace_487_);
return v_leanTrace_487_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg___lam__0___boxed(lean_object* v_x_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lake_getLeanTrace___redArg___lam__0(v_x_488_);
lean_dec_ref(v_x_488_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace___redArg(lean_object* v_inst_491_, lean_object* v_inst_492_){
_start:
{
lean_object* v_map_493_; lean_object* v___f_494_; lean_object* v___x_495_; 
v_map_493_ = lean_ctor_get(v_inst_491_, 0);
lean_inc(v_map_493_);
lean_dec_ref(v_inst_491_);
v___f_494_ = ((lean_object*)(l_Lake_getLeanTrace___redArg___closed__0));
v___x_495_ = lean_apply_4(v_map_493_, lean_box(0), lean_box(0), v___f_494_, v_inst_492_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanTrace(lean_object* v_m_496_, lean_object* v_inst_497_, lean_object* v_inst_498_){
_start:
{
lean_object* v_map_499_; lean_object* v___f_500_; lean_object* v___x_501_; 
v_map_499_ = lean_ctor_get(v_inst_497_, 0);
lean_inc(v_map_499_);
lean_dec_ref(v_inst_497_);
v___f_500_ = ((lean_object*)(l_Lake_getLeanTrace___redArg___closed__0));
v___x_501_ = lean_apply_4(v_map_499_, lean_box(0), lean_box(0), v___f_500_, v_inst_498_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0(lean_object* v_x_502_){
_start:
{
lean_object* v_toBuildConfig_503_; 
v_toBuildConfig_503_ = lean_ctor_get(v_x_502_, 0);
lean_inc_ref(v_toBuildConfig_503_);
return v_toBuildConfig_503_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg___lam__0___boxed(lean_object* v_x_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lake_getBuildConfig___redArg___lam__0(v_x_504_);
lean_dec_ref(v_x_504_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig___redArg(lean_object* v_inst_507_, lean_object* v_inst_508_){
_start:
{
lean_object* v_map_509_; lean_object* v___f_510_; lean_object* v___x_511_; 
v_map_509_ = lean_ctor_get(v_inst_507_, 0);
lean_inc(v_map_509_);
lean_dec_ref(v_inst_507_);
v___f_510_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_511_ = lean_apply_4(v_map_509_, lean_box(0), lean_box(0), v___f_510_, v_inst_508_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lake_getBuildConfig(lean_object* v_m_512_, lean_object* v_inst_513_, lean_object* v_inst_514_){
_start:
{
lean_object* v_map_515_; lean_object* v___f_516_; lean_object* v___x_517_; 
v_map_515_ = lean_ctor_get(v_inst_513_, 0);
lean_inc(v_map_515_);
lean_dec_ref(v_inst_513_);
v___f_516_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_517_ = lean_apply_4(v_map_515_, lean_box(0), lean_box(0), v___f_516_, v_inst_514_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f___redArg___lam__0(lean_object* v_x_518_){
_start:
{
lean_object* v_moduleTimes_x3f_519_; 
v_moduleTimes_x3f_519_ = lean_ctor_get(v_x_518_, 7);
lean_inc(v_moduleTimes_x3f_519_);
return v_moduleTimes_x3f_519_;
}
}
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f___redArg___lam__0___boxed(lean_object* v_x_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lake_getModuleTimes_x3f___redArg___lam__0(v_x_520_);
lean_dec_ref(v_x_520_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f___redArg(lean_object* v_inst_523_, lean_object* v_inst_524_){
_start:
{
lean_object* v_map_525_; lean_object* v___f_526_; lean_object* v___x_527_; 
v_map_525_ = lean_ctor_get(v_inst_523_, 0);
lean_inc(v_map_525_);
lean_dec_ref(v_inst_523_);
v___f_526_ = ((lean_object*)(l_Lake_getModuleTimes_x3f___redArg___closed__0));
v___x_527_ = lean_apply_4(v_map_525_, lean_box(0), lean_box(0), v___f_526_, v_inst_524_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lake_getModuleTimes_x3f(lean_object* v_m_528_, lean_object* v_inst_529_, lean_object* v_inst_530_){
_start:
{
lean_object* v_map_531_; lean_object* v___f_532_; lean_object* v___x_533_; 
v_map_531_ = lean_ctor_get(v_inst_529_, 0);
lean_inc(v_map_531_);
lean_dec_ref(v_inst_529_);
v___f_532_ = ((lean_object*)(l_Lake_getModuleTimes_x3f___redArg___closed__0));
v___x_533_ = lean_apply_4(v_map_531_, lean_box(0), lean_box(0), v___f_532_, v_inst_530_);
return v___x_533_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsOldMode___redArg___lam__0(lean_object* v_x_534_){
_start:
{
uint8_t v_oldMode_535_; 
v_oldMode_535_ = lean_ctor_get_uint8(v_x_534_, sizeof(void*)*5);
return v_oldMode_535_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg___lam__0___boxed(lean_object* v_x_536_){
_start:
{
uint8_t v_res_537_; lean_object* v_r_538_; 
v_res_537_ = l_Lake_getIsOldMode___redArg___lam__0(v_x_536_);
lean_dec_ref(v_x_536_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode___redArg(lean_object* v_inst_540_, lean_object* v_inst_541_){
_start:
{
lean_object* v_map_542_; lean_object* v___f_543_; lean_object* v___f_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_map_542_ = lean_ctor_get(v_inst_540_, 0);
lean_inc_n(v_map_542_, 2);
lean_dec_ref(v_inst_540_);
v___f_543_ = ((lean_object*)(l_Lake_getIsOldMode___redArg___closed__0));
v___f_544_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_545_ = lean_apply_4(v_map_542_, lean_box(0), lean_box(0), v___f_544_, v_inst_541_);
v___x_546_ = lean_apply_4(v_map_542_, lean_box(0), lean_box(0), v___f_543_, v___x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsOldMode(lean_object* v_m_547_, lean_object* v_inst_548_, lean_object* v_inst_549_){
_start:
{
lean_object* v_map_550_; lean_object* v___f_551_; lean_object* v___f_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v_map_550_ = lean_ctor_get(v_inst_548_, 0);
lean_inc_n(v_map_550_, 2);
lean_dec_ref(v_inst_548_);
v___f_551_ = ((lean_object*)(l_Lake_getIsOldMode___redArg___closed__0));
v___f_552_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_553_ = lean_apply_4(v_map_550_, lean_box(0), lean_box(0), v___f_552_, v_inst_549_);
v___x_554_ = lean_apply_4(v_map_550_, lean_box(0), lean_box(0), v___f_551_, v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT uint8_t l_Lake_getTrustHash___redArg___lam__0(lean_object* v_x_555_){
_start:
{
uint8_t v_trustHash_556_; 
v_trustHash_556_ = lean_ctor_get_uint8(v_x_555_, sizeof(void*)*5 + 1);
return v_trustHash_556_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg___lam__0___boxed(lean_object* v_x_557_){
_start:
{
uint8_t v_res_558_; lean_object* v_r_559_; 
v_res_558_ = l_Lake_getTrustHash___redArg___lam__0(v_x_557_);
lean_dec_ref(v_x_557_);
v_r_559_ = lean_box(v_res_558_);
return v_r_559_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash___redArg(lean_object* v_inst_561_, lean_object* v_inst_562_){
_start:
{
lean_object* v_map_563_; lean_object* v___f_564_; lean_object* v___f_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_map_563_ = lean_ctor_get(v_inst_561_, 0);
lean_inc_n(v_map_563_, 2);
lean_dec_ref(v_inst_561_);
v___f_564_ = ((lean_object*)(l_Lake_getTrustHash___redArg___closed__0));
v___f_565_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_566_ = lean_apply_4(v_map_563_, lean_box(0), lean_box(0), v___f_565_, v_inst_562_);
v___x_567_ = lean_apply_4(v_map_563_, lean_box(0), lean_box(0), v___f_564_, v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTrustHash(lean_object* v_m_568_, lean_object* v_inst_569_, lean_object* v_inst_570_){
_start:
{
lean_object* v_map_571_; lean_object* v___f_572_; lean_object* v___f_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_map_571_ = lean_ctor_get(v_inst_569_, 0);
lean_inc_n(v_map_571_, 2);
lean_dec_ref(v_inst_569_);
v___f_572_ = ((lean_object*)(l_Lake_getTrustHash___redArg___closed__0));
v___f_573_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_574_ = lean_apply_4(v_map_571_, lean_box(0), lean_box(0), v___f_573_, v_inst_570_);
v___x_575_ = lean_apply_4(v_map_571_, lean_box(0), lean_box(0), v___f_572_, v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT uint8_t l_Lake_getNoBuild___redArg___lam__0(lean_object* v_x_576_){
_start:
{
uint8_t v_noBuild_577_; 
v_noBuild_577_ = lean_ctor_get_uint8(v_x_576_, sizeof(void*)*5 + 2);
return v_noBuild_577_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg___lam__0___boxed(lean_object* v_x_578_){
_start:
{
uint8_t v_res_579_; lean_object* v_r_580_; 
v_res_579_ = l_Lake_getNoBuild___redArg___lam__0(v_x_578_);
lean_dec_ref(v_x_578_);
v_r_580_ = lean_box(v_res_579_);
return v_r_580_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild___redArg(lean_object* v_inst_582_, lean_object* v_inst_583_){
_start:
{
lean_object* v_map_584_; lean_object* v___f_585_; lean_object* v___f_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v_map_584_ = lean_ctor_get(v_inst_582_, 0);
lean_inc_n(v_map_584_, 2);
lean_dec_ref(v_inst_582_);
v___f_585_ = ((lean_object*)(l_Lake_getNoBuild___redArg___closed__0));
v___f_586_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_587_ = lean_apply_4(v_map_584_, lean_box(0), lean_box(0), v___f_586_, v_inst_583_);
v___x_588_ = lean_apply_4(v_map_584_, lean_box(0), lean_box(0), v___f_585_, v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoBuild(lean_object* v_m_589_, lean_object* v_inst_590_, lean_object* v_inst_591_){
_start:
{
lean_object* v_map_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_map_592_ = lean_ctor_get(v_inst_590_, 0);
lean_inc_n(v_map_592_, 2);
lean_dec_ref(v_inst_590_);
v___f_593_ = ((lean_object*)(l_Lake_getNoBuild___redArg___closed__0));
v___f_594_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_595_ = lean_apply_4(v_map_592_, lean_box(0), lean_box(0), v___f_594_, v_inst_591_);
v___x_596_ = lean_apply_4(v_map_592_, lean_box(0), lean_box(0), v___f_593_, v___x_595_);
return v___x_596_;
}
}
LEAN_EXPORT uint8_t l_Lake_getVerbosity___redArg___lam__0(lean_object* v_x_597_){
_start:
{
uint8_t v_verbosity_598_; 
v_verbosity_598_ = lean_ctor_get_uint8(v_x_597_, sizeof(void*)*5 + 4);
return v_verbosity_598_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg___lam__0___boxed(lean_object* v_x_599_){
_start:
{
uint8_t v_res_600_; lean_object* v_r_601_; 
v_res_600_ = l_Lake_getVerbosity___redArg___lam__0(v_x_599_);
lean_dec_ref(v_x_599_);
v_r_601_ = lean_box(v_res_600_);
return v_r_601_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity___redArg(lean_object* v_inst_603_, lean_object* v_inst_604_){
_start:
{
lean_object* v_map_605_; lean_object* v___f_606_; lean_object* v___f_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v_map_605_ = lean_ctor_get(v_inst_603_, 0);
lean_inc_n(v_map_605_, 2);
lean_dec_ref(v_inst_603_);
v___f_606_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_607_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_608_ = lean_apply_4(v_map_605_, lean_box(0), lean_box(0), v___f_607_, v_inst_604_);
v___x_609_ = lean_apply_4(v_map_605_, lean_box(0), lean_box(0), v___f_606_, v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lake_getVerbosity(lean_object* v_m_610_, lean_object* v_inst_611_, lean_object* v_inst_612_){
_start:
{
lean_object* v_map_613_; lean_object* v___f_614_; lean_object* v___f_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_map_613_ = lean_ctor_get(v_inst_611_, 0);
lean_inc_n(v_map_613_, 2);
lean_dec_ref(v_inst_611_);
v___f_614_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_615_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_616_ = lean_apply_4(v_map_613_, lean_box(0), lean_box(0), v___f_615_, v_inst_612_);
v___x_617_ = lean_apply_4(v_map_613_, lean_box(0), lean_box(0), v___f_614_, v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsVerbose___redArg___lam__0(uint8_t v_x_618_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_619_ = lean_box(v_x_618_);
v___x_620_ = lean_obj_tag_nat(v___x_619_);
lean_dec(v___x_619_);
v___x_621_ = lean_unsigned_to_nat(2u);
v___x_622_ = lean_nat_dec_eq(v___x_620_, v___x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg___lam__0___boxed(lean_object* v_x_623_){
_start:
{
uint8_t v_x_67__boxed_624_; uint8_t v_res_625_; lean_object* v_r_626_; 
v_x_67__boxed_624_ = lean_unbox(v_x_623_);
v_res_625_ = l_Lake_getIsVerbose___redArg___lam__0(v_x_67__boxed_624_);
v_r_626_ = lean_box(v_res_625_);
return v_r_626_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsVerbose___redArg(lean_object* v_inst_628_, lean_object* v_inst_629_){
_start:
{
lean_object* v_map_630_; lean_object* v___f_631_; lean_object* v___f_632_; lean_object* v___f_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v_map_630_ = lean_ctor_get(v_inst_628_, 0);
lean_inc_n(v_map_630_, 3);
lean_dec_ref(v_inst_628_);
v___f_631_ = ((lean_object*)(l_Lake_getIsVerbose___redArg___closed__0));
v___f_632_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_633_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_634_ = lean_apply_4(v_map_630_, lean_box(0), lean_box(0), v___f_633_, v_inst_629_);
v___x_635_ = lean_apply_4(v_map_630_, lean_box(0), lean_box(0), v___f_632_, v___x_634_);
v___x_636_ = lean_apply_4(v_map_630_, lean_box(0), lean_box(0), v___f_631_, v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsVerbose(lean_object* v_m_637_, lean_object* v_inst_638_, lean_object* v_inst_639_){
_start:
{
lean_object* v_map_640_; lean_object* v___f_641_; lean_object* v___f_642_; lean_object* v___f_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_map_640_ = lean_ctor_get(v_inst_638_, 0);
lean_inc_n(v_map_640_, 3);
lean_dec_ref(v_inst_638_);
v___f_641_ = ((lean_object*)(l_Lake_getIsVerbose___redArg___closed__0));
v___f_642_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_643_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_644_ = lean_apply_4(v_map_640_, lean_box(0), lean_box(0), v___f_643_, v_inst_639_);
v___x_645_ = lean_apply_4(v_map_640_, lean_box(0), lean_box(0), v___f_642_, v___x_644_);
v___x_646_ = lean_apply_4(v_map_640_, lean_box(0), lean_box(0), v___f_641_, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT uint8_t l_Lake_getIsQuiet___redArg___lam__0(uint8_t v_x_647_){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_648_ = lean_box(v_x_647_);
v___x_649_ = lean_obj_tag_nat(v___x_648_);
lean_dec(v___x_648_);
v___x_650_ = lean_unsigned_to_nat(0u);
v___x_651_ = lean_nat_dec_eq(v___x_649_, v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg___lam__0___boxed(lean_object* v_x_652_){
_start:
{
uint8_t v_x_67__boxed_653_; uint8_t v_res_654_; lean_object* v_r_655_; 
v_x_67__boxed_653_ = lean_unbox(v_x_652_);
v_res_654_ = l_Lake_getIsQuiet___redArg___lam__0(v_x_67__boxed_653_);
v_r_655_ = lean_box(v_res_654_);
return v_r_655_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet___redArg(lean_object* v_inst_657_, lean_object* v_inst_658_){
_start:
{
lean_object* v_map_659_; lean_object* v___f_660_; lean_object* v___f_661_; lean_object* v___f_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_map_659_ = lean_ctor_get(v_inst_657_, 0);
lean_inc_n(v_map_659_, 3);
lean_dec_ref(v_inst_657_);
v___f_660_ = ((lean_object*)(l_Lake_getIsQuiet___redArg___closed__0));
v___f_661_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_662_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_663_ = lean_apply_4(v_map_659_, lean_box(0), lean_box(0), v___f_662_, v_inst_658_);
v___x_664_ = lean_apply_4(v_map_659_, lean_box(0), lean_box(0), v___f_661_, v___x_663_);
v___x_665_ = lean_apply_4(v_map_659_, lean_box(0), lean_box(0), v___f_660_, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lake_getIsQuiet(lean_object* v_m_666_, lean_object* v_inst_667_, lean_object* v_inst_668_){
_start:
{
lean_object* v_map_669_; lean_object* v___f_670_; lean_object* v___f_671_; lean_object* v___f_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_map_669_ = lean_ctor_get(v_inst_667_, 0);
lean_inc_n(v_map_669_, 3);
lean_dec_ref(v_inst_667_);
v___f_670_ = ((lean_object*)(l_Lake_getIsQuiet___redArg___closed__0));
v___f_671_ = ((lean_object*)(l_Lake_getVerbosity___redArg___closed__0));
v___f_672_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_673_ = lean_apply_4(v_map_669_, lean_box(0), lean_box(0), v___f_672_, v_inst_668_);
v___x_674_ = lean_apply_4(v_map_669_, lean_box(0), lean_box(0), v___f_671_, v___x_673_);
v___x_675_ = lean_apply_4(v_map_669_, lean_box(0), lean_box(0), v___f_670_, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0(lean_object* v_x_676_){
_start:
{
lean_object* v_leanOptOverrides_677_; 
v_leanOptOverrides_677_ = lean_ctor_get(v_x_676_, 3);
lean_inc(v_leanOptOverrides_677_);
return v_leanOptOverrides_677_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg___lam__0___boxed(lean_object* v_x_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lake_getLeanOptOverrides___redArg___lam__0(v_x_678_);
lean_dec_ref(v_x_678_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides___redArg(lean_object* v_inst_681_, lean_object* v_inst_682_){
_start:
{
lean_object* v_map_683_; lean_object* v___f_684_; lean_object* v___f_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v_map_683_ = lean_ctor_get(v_inst_681_, 0);
lean_inc_n(v_map_683_, 2);
lean_dec_ref(v_inst_681_);
v___f_684_ = ((lean_object*)(l_Lake_getLeanOptOverrides___redArg___closed__0));
v___f_685_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_686_ = lean_apply_4(v_map_683_, lean_box(0), lean_box(0), v___f_685_, v_inst_682_);
v___x_687_ = lean_apply_4(v_map_683_, lean_box(0), lean_box(0), v___f_684_, v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptOverrides(lean_object* v_m_688_, lean_object* v_inst_689_, lean_object* v_inst_690_){
_start:
{
lean_object* v_map_691_; lean_object* v___f_692_; lean_object* v___f_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v_map_691_ = lean_ctor_get(v_inst_689_, 0);
lean_inc_n(v_map_691_, 2);
lean_dec_ref(v_inst_689_);
v___f_692_ = ((lean_object*)(l_Lake_getLeanOptOverrides___redArg___closed__0));
v___f_693_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_694_ = lean_apply_4(v_map_691_, lean_box(0), lean_box(0), v___f_693_, v_inst_690_);
v___x_695_ = lean_apply_4(v_map_691_, lean_box(0), lean_box(0), v___f_692_, v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(lean_object* v_x_696_){
_start:
{
lean_object* v_macosxDeploymentTarget_x3f_697_; 
v_macosxDeploymentTarget_x3f_697_ = lean_ctor_get(v_x_696_, 4);
lean_inc(v_macosxDeploymentTarget_x3f_697_);
return v_macosxDeploymentTarget_x3f_697_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0___boxed(lean_object* v_x_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lake_getMacOSXDeploymentTarget_x3f___redArg___lam__0(v_x_698_);
lean_dec_ref(v_x_698_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f___redArg(lean_object* v_inst_701_, lean_object* v_inst_702_){
_start:
{
lean_object* v_map_703_; lean_object* v___f_704_; lean_object* v___f_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_map_703_ = lean_ctor_get(v_inst_701_, 0);
lean_inc_n(v_map_703_, 2);
lean_dec_ref(v_inst_701_);
v___f_704_ = ((lean_object*)(l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0));
v___f_705_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_706_ = lean_apply_4(v_map_703_, lean_box(0), lean_box(0), v___f_705_, v_inst_702_);
v___x_707_ = lean_apply_4(v_map_703_, lean_box(0), lean_box(0), v___f_704_, v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lake_getMacOSXDeploymentTarget_x3f(lean_object* v_m_708_, lean_object* v_inst_709_, lean_object* v_inst_710_){
_start:
{
lean_object* v_map_711_; lean_object* v___f_712_; lean_object* v___f_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_map_711_ = lean_ctor_get(v_inst_709_, 0);
lean_inc_n(v_map_711_, 2);
lean_dec_ref(v_inst_709_);
v___f_712_ = ((lean_object*)(l_Lake_getMacOSXDeploymentTarget_x3f___redArg___closed__0));
v___f_713_ = ((lean_object*)(l_Lake_getBuildConfig___redArg___closed__0));
v___x_714_ = lean_apply_4(v_map_711_, lean_box(0), lean_box(0), v___f_713_, v_inst_710_);
v___x_715_ = lean_apply_4(v_map_711_, lean_box(0), lean_box(0), v___f_712_, v___x_714_);
return v___x_715_;
}
}
lean_object* runtime_initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Context(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_ModuleTimes(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ModuleUsage(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Context(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_ModuleTimes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ModuleUsage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Context(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* initialize_Lake_Config_Context(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Basic(uint8_t builtin);
lean_object* initialize_Lake_Build_ModuleTimes(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
lean_object* initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
lean_object* initialize_Lean_Util_ModuleUsage(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Context(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_ModuleTimes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ModuleUsage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Context(builtin);
}
#ifdef __cplusplus
}
#endif
