// Lean compiler output
// Module: Lake.Build.UsageCutoff
// Imports: public import Lake.Build.Job.Monad public import Lake.Build.Infos public import Lean.Util.ModuleUsage.Basic import Lean.Util.ModuleUsage import Lake.Config.Monad
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
uint64_t l_System_instHashableFilePath_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
extern lean_object* l_Lean_ModuleUsage_usageVersion;
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_ModuleUsage_instInhabitedDigest_default;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lake_Workspace_findModule_x3f(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_ImportArtifacts_olean_x3f(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_Lean_ImportArtifacts_oleanServer_x3f(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_usage_file_stamp(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
uint8_t l_Lean_ModuleUsage_instBEqFileStamp_beq(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_ModuleUsage_instBEqDigest_beq(lean_object*, lean_object*);
lean_object* lean_usage_read_file_stamped(lean_object*);
lean_object* lean_usage_digest_bytes(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_ModuleUsage_Digest_ofHex_x3f(lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getArr_x3f(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_usage_file_digest_stamped(lean_object*);
lean_object* l_Lean_ModuleUsage_specProviders(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Lake_EStateT_instMonadLiftOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_name(lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_nat(lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_digest(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_JobM_runFetchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
lean_object* l_Lake_EquipT_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadLiftTOfMonadLift__lake___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_tryFinally___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadFinallyStateRefT_x27___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EquipT_instMonadFinallyOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_instHashableFilePath_hash___boxed(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_System_instDecidableEqFilePath___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_ModuleUsage_instFromJsonDigest___lam__0(lean_object*);
lean_object* l_Lean_Prod_fromJson_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Array_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
uint8_t l_Lean_Json_isNull(lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lean_modToFilePath(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_finish(lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_nameToJson(lean_object*);
lean_object* l_Lean_ModuleUsage_Digest_hex(lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
uint8_t l_Lean_ModuleUsage_kindsIn(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__2_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__2_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__2_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__3_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__2_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),LEAN_SCALAR_PTR_LITERAL(91, 223, 152, 205, 91, 21, 95, 180)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__3_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__3_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__4_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Build"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__4_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__4_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__5_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__3_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__4_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),LEAN_SCALAR_PTR_LITERAL(2, 137, 78, 165, 26, 100, 189, 141)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__5_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__5_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__6_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "UsageCutoff"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__6_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__6_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__7_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__5_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__6_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),LEAN_SCALAR_PTR_LITERAL(213, 132, 178, 239, 46, 97, 44, 125)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__7_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__7_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__8_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__7_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(64, 214, 141, 109, 90, 110, 218, 65)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__8_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__8_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__9_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__8_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__2_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),LEAN_SCALAR_PTR_LITERAL(168, 73, 180, 94, 234, 116, 130, 190)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__9_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__9_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__10_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "UsekeySidecar"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__10_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__10_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__11_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__9_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__10_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),LEAN_SCALAR_PTR_LITERAL(56, 90, 228, 149, 242, 204, 153, 3)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__11_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__11_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__11_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instTypeNameUsekeySidecar = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__11_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "expected a name component, got "};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__1___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__0_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__1_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__2 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__2_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__3 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__3_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__4 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__4_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__5 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__5_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__5_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__1_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__6 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__6_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__7 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__7_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__6_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__7_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__2_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__3_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__4_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__8 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__8_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__9 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__9_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__8_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__9_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__10 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__10_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__1, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__10_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__0_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "expected a triple, got "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "expected a digest of 32 hex digits, got "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___lam__0(lean_object*);
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "expected a pair of name arrays, got "};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected a pair, got "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__4(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__0_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__1_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__2 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__2_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__3 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__3_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__4 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__4_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__5 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__5_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__6 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__6_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__0_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__1_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__7 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__7_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__7_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__2_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__3_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__4_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__5_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__8 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__8_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__8_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__6_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__9 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "own"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__0_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "used"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__1_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "specKeys"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__3 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__3_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "noskip"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__4 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__4_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moduleDigest"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__5 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__5_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "closure"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "digested"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__7 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__7_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "importedClosures"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__8 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__8_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "importedDigests"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__9 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__9_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "resolved"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__10 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__10_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "providesDigest"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__11 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__11_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "provides"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__12 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__12_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "specLookups"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__13 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__0_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__1_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__2 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__2_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__3, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__2_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__3 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__3_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__6, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__4 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__4_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__4, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__4_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__5 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__5_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__5_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__6 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__6_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_instFromJsonDigest___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Prod_fromJson_x3f, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__8 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__8_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__8_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__9 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__9_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Prod_fromJson_x3f, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__9_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__10 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__10_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__10_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__11 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__11_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getBool_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__12 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__12_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Prod_fromJson_x3f, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__12_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__13 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__13_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__13_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__14 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__14_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Prod_fromJson_x3f, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___closed__11_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__15 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__15_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__15_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__16 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__16_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Prod_fromJson_x3f, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__17 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__17_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Array_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__17_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__18 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__18_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*14, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8, .m_arity = 15, .m_num_fixed = 14, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__9_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__11_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__14_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__16_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__12_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__18_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__5_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__6_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__1_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__0_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__3_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__3_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__3_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__19 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__19_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__19_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "UsageImport"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32__value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__9_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25__value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__0_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32__value),LEAN_SCALAR_PTR_LITERAL(199, 46, 175, 94, 232, 12, 146, 106)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32__value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instImpl_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32_ = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32__value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instTypeNameUsageImport = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instImpl___closed__1_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32__value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_toImport(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_toImport___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__0_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___lam__2, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__9_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__16_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__0_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__0_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___closed__1_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "usage"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__2 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__2_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "modsys"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Hash_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__0_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__0_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___closed__7_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___closed__1_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ": read failed: "};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not UTF-8"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__0_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__1_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getNat_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0;
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ": cached sidecar has the wrong type"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_JobM_runFetchM___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__0_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EquipT_lift___boxed, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__1_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__3_value;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__4;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__5;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__6;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__7;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__8;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__9;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__10;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__11;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__12;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__13;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__14;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__15;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__16;
static lean_once_cell_t l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__17;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LogIO_instMonadLiftIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__18 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__18_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__19 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__19_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__20 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__20_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadLiftTOfMonadLift__lake___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__20_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__21 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__21_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__21_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__19_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__22 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__22_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__22_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__18_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__23 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__23_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__23_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__24 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__24_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__24_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__3_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__25 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__25_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__25_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__26 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__26_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__26_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__27 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__27_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__27_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__1_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__28 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__28_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__28_value),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__0_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__29 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__29_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_System_instHashableFilePath_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__30 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__30_value;
static const lean_closure_object l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_get___boxed, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__29_value)} };
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__31 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__31_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13_spec__21(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__11(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected pair, got '"};
static const lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0 = (const lean_object*)&l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__21(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__12(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__24(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__25(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__16(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__17(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__28(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__29(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__29___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__0_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_modsysHash_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_modsysHash_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_modsysHash_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_modsysHash_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_modsysHash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_modsysHash___closed__0;
LEAN_EXPORT lean_object* l_Lake_modsysHash(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_modsysHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__0_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__0_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "usekey"};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__0 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__0_value)}};
static const lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__1 = (const lean_object*)&l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_eraseDups___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseDups___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__0___closed__0 = (const lean_object*)&l_List_eraseDups___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_closureHash(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_closureHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__1_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__1_value)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__2_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Module_writeUsekey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_writeUsekey___closed__0;
static lean_once_cell_t l_Lake_Module_writeUsekey___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_writeUsekey___closed__1;
static const lean_array_object l_Lake_Module_writeUsekey___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Module_writeUsekey___closed__2 = (const lean_object*)&l_Lake_Module_writeUsekey___closed__2_value;
static const lean_ctor_object l_Lake_Module_writeUsekey___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Module_writeUsekey___closed__2_value)}};
static const lean_object* l_Lake_Module_writeUsekey___closed__3 = (const lean_object*)&l_Lake_Module_writeUsekey___closed__3_value;
static lean_once_cell_t l_Lake_Module_writeUsekey___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_writeUsekey___closed__4;
static lean_once_cell_t l_Lake_Module_writeUsekey___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_writeUsekey___closed__5;
static lean_once_cell_t l_Lake_Module_writeUsekey___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_writeUsekey___closed__6;
LEAN_EXPORT lean_object* l_Lake_Module_writeUsekey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_writeUsekey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_Module_usageUpToDate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Module_usageUpToDate___closed__0 = (const lean_object*)&l_Lake_Module_usageUpToDate___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_usageUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_usageUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0(lean_object* v_p_30_, lean_object* v_c_31_){
_start:
{
switch(lean_obj_tag(v_c_31_))
{
case 3:
{
lean_object* v_s_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_s_32_ = lean_ctor_get(v_c_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v_c_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v_c_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_s_32_);
lean_dec(v_c_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_36_ = l_Lean_Name_str___override(v_p_30_, v_s_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
case 2:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Json_getNat_x3f(v_c_31_);
if (lean_obj_tag(v___x_41_) == 0)
{
lean_object* v_a_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_49_; 
lean_dec(v_p_30_);
v_a_42_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_49_ == 0)
{
v___x_44_ = v___x_41_;
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_a_42_);
lean_dec(v___x_41_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_47_; 
if (v_isShared_45_ == 0)
{
v___x_47_ = v___x_44_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_a_42_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
else
{
lean_object* v_a_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_58_; 
v_a_50_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_58_ == 0)
{
v___x_52_ = v___x_41_;
v_isShared_53_ = v_isSharedCheck_58_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_a_50_);
lean_dec(v___x_41_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_58_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_54_; lean_object* v___x_56_; 
v___x_54_ = l_Lean_Name_num___override(v_p_30_, v_a_50_);
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 0, v___x_54_);
v___x_56_ = v___x_52_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_54_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
}
default: 
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
lean_dec(v_p_30_);
v___x_59_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0___closed__0));
v___x_60_ = l_Lean_Json_compress(v_c_31_);
v___x_61_ = lean_string_append(v___x_59_, v___x_60_);
lean_dec_ref(v___x_60_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__1(lean_object* v___x_65_, lean_object* v___f_66_, lean_object* v_j_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Json_getArr_x3f(v_j_67_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_76_; 
lean_dec_ref(v___f_66_);
lean_dec_ref(v___x_65_);
v_a_69_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_76_ == 0)
{
v___x_71_ = v___x_68_;
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_a_69_);
lean_dec(v___x_68_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_74_; 
if (v_isShared_72_ == 0)
{
v___x_74_ = v___x_71_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_a_69_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
else
{
lean_object* v_a_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v_a_77_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_77_);
lean_dec_ref_known(v___x_68_, 1);
v___x_78_ = lean_box(0);
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_array_get_size(v_a_77_);
v___x_81_ = lean_nat_dec_lt(v___x_79_, v___x_80_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
lean_dec(v_a_77_);
lean_dec_ref(v___f_66_);
lean_dec_ref(v___x_65_);
v___x_82_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__1___closed__0));
return v___x_82_;
}
else
{
size_t v___x_83_; size_t v___x_84_; lean_object* v___x_85_; 
v___x_83_ = ((size_t)0ULL);
v___x_84_ = lean_usize_of_nat(v___x_80_);
v___x_85_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_65_, v___f_66_, v_a_77_, v___x_83_, v___x_84_, v___x_78_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_93_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_93_ == 0)
{
v___x_88_ = v___x_85_;
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_a_86_);
lean_dec(v___x_85_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_91_; 
if (v_isShared_89_ == 0)
{
v___x_91_ = v___x_88_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_86_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
else
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_101_; 
v_a_94_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_101_ == 0)
{
v___x_96_ = v___x_85_;
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_85_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_99_; 
if (v_isShared_97_ == 0)
{
v___x_99_ = v___x_96_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_94_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(lean_object* v_as_126_, size_t v_i_127_, size_t v_stop_128_, lean_object* v_b_129_){
_start:
{
lean_object* v_a_131_; uint8_t v___x_135_; 
v___x_135_ = lean_usize_dec_eq(v_i_127_, v_stop_128_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
v___x_136_ = lean_array_uget_borrowed(v_as_126_, v_i_127_);
switch(lean_obj_tag(v___x_136_))
{
case 3:
{
lean_object* v_s_137_; lean_object* v___x_138_; 
v_s_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc_ref(v_s_137_);
v___x_138_ = l_Lean_Name_str___override(v_b_129_, v_s_137_);
v_a_131_ = v___x_138_;
goto v___jp_130_;
}
case 2:
{
lean_object* v___x_139_; 
lean_inc_ref(v___x_136_);
v___x_139_ = l_Lean_Json_getNat_x3f(v___x_136_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_b_129_);
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_149_; 
v_a_148_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_139_, 1);
v___x_149_ = l_Lean_Name_num___override(v_b_129_, v_a_148_);
v_a_131_ = v___x_149_;
goto v___jp_130_;
}
}
default: 
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
lean_dec(v_b_129_);
v___x_150_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonSidecarName___lam__0___closed__0));
lean_inc(v___x_136_);
v___x_151_ = l_Lean_Json_compress(v___x_136_);
v___x_152_ = lean_string_append(v___x_150_, v___x_151_);
lean_dec_ref(v___x_151_);
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_154_, 0, v_b_129_);
return v___x_154_;
}
v___jp_130_:
{
size_t v___x_132_; size_t v___x_133_; 
v___x_132_ = ((size_t)1ULL);
v___x_133_ = lean_usize_add(v_i_127_, v___x_132_);
v_i_127_ = v___x_133_;
v_b_129_ = v_a_131_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0___boxed(lean_object* v_as_155_, lean_object* v_i_156_, lean_object* v_stop_157_, lean_object* v_b_158_){
_start:
{
size_t v_i_boxed_159_; size_t v_stop_boxed_160_; lean_object* v_res_161_; 
v_i_boxed_159_ = lean_unbox_usize(v_i_156_);
lean_dec(v_i_156_);
v_stop_boxed_160_ = lean_unbox_usize(v_stop_157_);
lean_dec(v_stop_157_);
v_res_161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_as_155_, v_i_boxed_159_, v_stop_boxed_160_, v_b_158_);
lean_dec_ref(v_as_155_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1(lean_object* v_as_164_, size_t v_i_165_, size_t v_stop_166_, lean_object* v_b_167_){
_start:
{
uint8_t v___x_168_; 
v___x_168_ = lean_usize_dec_eq(v_i_165_, v_stop_166_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_array_uget_borrowed(v_as_164_, v_i_165_);
lean_inc(v___x_169_);
v___x_170_ = l_Lean_Json_getArr_x3f(v___x_169_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
lean_dec(v_b_167_);
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_171_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_272_; 
v_a_179_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_272_ == 0)
{
v___x_181_ = v___x_170_;
v_isShared_182_ = v_isSharedCheck_272_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_170_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_272_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_183_ = lean_array_get_size(v_a_179_);
v___x_184_ = lean_unsigned_to_nat(3u);
v___x_185_ = lean_nat_dec_eq(v___x_183_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
lean_dec(v_a_179_);
lean_dec(v_b_167_);
v___x_186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__0));
lean_inc(v___x_169_);
v___x_187_ = l_Lean_Json_compress(v___x_169_);
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
lean_dec_ref(v___x_187_);
if (v_isShared_182_ == 0)
{
lean_ctor_set_tag(v___x_181_, 0);
lean_ctor_set(v___x_181_, 0, v___x_188_);
v___x_190_ = v___x_181_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_188_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
else
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
lean_del_object(v___x_181_);
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = lean_array_fget_borrowed(v_a_179_, v___x_192_);
lean_inc(v___x_193_);
v___x_194_ = l_Lean_Json_getArr_x3f(v___x_193_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec(v_a_179_);
lean_dec(v_b_167_);
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v_a_209_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_a_203_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_194_, 1);
v___x_204_ = lean_unsigned_to_nat(1u);
v___x_205_ = lean_array_fget(v_a_179_, v___x_204_);
v___x_206_ = lean_unsigned_to_nat(2u);
v___x_207_ = lean_array_fget(v_a_179_, v___x_206_);
lean_dec(v_a_179_);
v___x_257_ = lean_box(0);
v___x_258_ = lean_array_get_size(v_a_203_);
v___x_259_ = lean_nat_dec_lt(v___x_192_, v___x_258_);
if (v___x_259_ == 0)
{
lean_dec(v_a_203_);
v_a_209_ = v___x_257_;
goto v___jp_208_;
}
else
{
size_t v___x_260_; size_t v___x_261_; lean_object* v___x_262_; 
v___x_260_ = ((size_t)0ULL);
v___x_261_ = lean_usize_of_nat(v___x_258_);
v___x_262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_203_, v___x_260_, v___x_261_, v___x_257_);
lean_dec(v_a_203_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_dec(v___x_207_);
lean_dec(v___x_205_);
lean_dec(v_b_167_);
v_a_263_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_262_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_262_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
else
{
lean_object* v_a_271_; 
v_a_271_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_262_, 1);
v_a_209_ = v_a_271_;
goto v___jp_208_;
}
}
v___jp_208_:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_Json_getStr_x3f(v___x_205_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
lean_dec(v_a_209_);
lean_dec(v___x_207_);
lean_dec(v_b_167_);
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_256_; 
v_a_219_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_256_ == 0)
{
v___x_221_ = v___x_210_;
v_isShared_222_ = v_isSharedCheck_256_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_210_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_256_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_223_; 
lean_inc(v_a_219_);
v___x_223_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_219_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_227_; 
lean_dec(v_a_209_);
lean_dec(v___x_207_);
lean_dec(v_b_167_);
v___x_224_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1));
v___x_225_ = lean_string_append(v___x_224_, v_a_219_);
lean_dec(v_a_219_);
if (v_isShared_222_ == 0)
{
lean_ctor_set_tag(v___x_221_, 0);
lean_ctor_set(v___x_221_, 0, v___x_225_);
v___x_227_ = v___x_221_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
else
{
lean_object* v_val_229_; lean_object* v___x_230_; 
lean_del_object(v___x_221_);
lean_dec(v_a_219_);
v_val_229_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_val_229_);
lean_dec_ref_known(v___x_223_, 1);
v___x_230_ = l_Lean_Json_getStr_x3f(v___x_207_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_dec(v_val_229_);
lean_dec(v_a_209_);
lean_dec(v_b_167_);
v_a_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_255_; 
v_a_239_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_255_ == 0)
{
v___x_241_ = v___x_230_;
v_isShared_242_ = v_isSharedCheck_255_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_230_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_255_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_243_; 
lean_inc(v_a_239_);
v___x_243_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_239_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_247_; 
lean_dec(v_val_229_);
lean_dec(v_a_209_);
lean_dec(v_b_167_);
v___x_244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1));
v___x_245_ = lean_string_append(v___x_244_, v_a_239_);
lean_dec(v_a_239_);
if (v_isShared_242_ == 0)
{
lean_ctor_set_tag(v___x_241_, 0);
lean_ctor_set(v___x_241_, 0, v___x_245_);
v___x_247_ = v___x_241_;
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
else
{
lean_object* v_val_249_; lean_object* v___x_250_; lean_object* v___x_251_; size_t v___x_252_; size_t v___x_253_; 
lean_del_object(v___x_241_);
lean_dec(v_a_239_);
v_val_249_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_val_249_);
lean_dec_ref_known(v___x_243_, 1);
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v_val_229_);
lean_ctor_set(v___x_250_, 1, v_val_249_);
v___x_251_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_a_209_, v___x_250_, v_b_167_);
v___x_252_ = ((size_t)1ULL);
v___x_253_ = lean_usize_add(v_i_165_, v___x_252_);
v_i_165_ = v___x_253_;
v_b_167_ = v___x_251_;
goto _start;
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
}
else
{
lean_object* v___x_273_; 
v___x_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_273_, 0, v_b_167_);
return v___x_273_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___boxed(lean_object* v_as_274_, lean_object* v_i_275_, lean_object* v_stop_276_, lean_object* v_b_277_){
_start:
{
size_t v_i_boxed_278_; size_t v_stop_boxed_279_; lean_object* v_res_280_; 
v_i_boxed_278_ = lean_unbox_usize(v_i_275_);
lean_dec(v_i_275_);
v_stop_boxed_279_ = lean_unbox_usize(v_stop_276_);
lean_dec(v_stop_276_);
v_res_280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1(v_as_274_, v_i_boxed_278_, v_stop_boxed_279_, v_b_277_);
lean_dec_ref(v_as_274_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs(lean_object* v_j_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_Json_getArr_x3f(v_j_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v_a_293_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_284_, 1);
v___x_294_ = lean_box(1);
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_array_get_size(v_a_293_);
v___x_297_ = lean_nat_dec_lt(v___x_295_, v___x_296_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; 
lean_dec(v_a_293_);
v___x_298_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs___closed__0));
return v___x_298_;
}
else
{
size_t v___x_299_; size_t v___x_300_; lean_object* v___x_301_; 
v___x_299_ = ((size_t)0ULL);
v___x_300_ = lean_usize_of_nat(v___x_296_);
v___x_301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1(v_a_293_, v___x_299_, v___x_300_, v___x_294_);
lean_dec(v_a_293_);
return v___x_301_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0_spec__0(size_t v_sz_302_, size_t v_i_303_, lean_object* v_bs_304_){
_start:
{
uint8_t v___x_305_; 
v___x_305_ = lean_usize_dec_lt(v_i_303_, v_sz_302_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; 
v___x_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_306_, 0, v_bs_304_);
return v___x_306_;
}
else
{
lean_object* v_v_307_; lean_object* v___x_308_; 
v_v_307_ = lean_array_uget_borrowed(v_bs_304_, v_i_303_);
lean_inc(v_v_307_);
v___x_308_ = l_Lean_Json_getArr_x3f(v_v_307_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec_ref(v_bs_304_);
v_a_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_318_; lean_object* v_bs_x27_319_; lean_object* v_a_321_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v_a_317_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v___x_308_, 1);
v___x_318_ = lean_unsigned_to_nat(0u);
v_bs_x27_319_ = lean_array_uset(v_bs_304_, v_i_303_, v___x_318_);
v___x_326_ = lean_box(0);
v___x_327_ = lean_array_get_size(v_a_317_);
v___x_328_ = lean_nat_dec_lt(v___x_318_, v___x_327_);
if (v___x_328_ == 0)
{
lean_dec(v_a_317_);
v_a_321_ = v___x_326_;
goto v___jp_320_;
}
else
{
size_t v___x_329_; size_t v___x_330_; lean_object* v___x_331_; 
v___x_329_ = ((size_t)0ULL);
v___x_330_ = lean_usize_of_nat(v___x_327_);
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_317_, v___x_329_, v___x_330_, v___x_326_);
lean_dec(v_a_317_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
lean_dec_ref(v_bs_x27_319_);
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
else
{
lean_object* v_a_340_; 
v_a_340_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_340_);
lean_dec_ref_known(v___x_331_, 1);
v_a_321_ = v_a_340_;
goto v___jp_320_;
}
}
v___jp_320_:
{
size_t v___x_322_; size_t v___x_323_; lean_object* v___x_324_; 
v___x_322_ = ((size_t)1ULL);
v___x_323_ = lean_usize_add(v_i_303_, v___x_322_);
v___x_324_ = lean_array_uset(v_bs_x27_319_, v_i_303_, v_a_321_);
v_i_303_ = v___x_323_;
v_bs_304_ = v___x_324_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0_spec__0___boxed(lean_object* v_sz_341_, lean_object* v_i_342_, lean_object* v_bs_343_){
_start:
{
size_t v_sz_boxed_344_; size_t v_i_boxed_345_; lean_object* v_res_346_; 
v_sz_boxed_344_ = lean_unbox_usize(v_sz_341_);
lean_dec(v_sz_341_);
v_i_boxed_345_ = lean_unbox_usize(v_i_342_);
lean_dec(v_i_342_);
v_res_346_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0_spec__0(v_sz_boxed_344_, v_i_boxed_345_, v_bs_343_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0(lean_object* v_x_349_){
_start:
{
if (lean_obj_tag(v_x_349_) == 4)
{
lean_object* v_elems_350_; size_t v_sz_351_; size_t v___x_352_; lean_object* v___x_353_; 
v_elems_350_ = lean_ctor_get(v_x_349_, 0);
lean_inc_ref(v_elems_350_);
lean_dec_ref_known(v_x_349_, 1);
v_sz_351_ = lean_array_size(v_elems_350_);
v___x_352_ = ((size_t)0ULL);
v___x_353_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0_spec__0(v_sz_351_, v___x_352_, v_elems_350_);
return v___x_353_;
}
else
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_354_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0));
v___x_355_ = lean_unsigned_to_nat(80u);
v___x_356_ = l_Lean_Json_pretty(v_x_349_, v___x_355_);
v___x_357_ = lean_string_append(v___x_354_, v___x_356_);
lean_dec_ref(v___x_356_);
v___x_358_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_359_ = lean_string_append(v___x_357_, v___x_358_);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__1(size_t v_sz_361_, size_t v_i_362_, lean_object* v_bs_363_){
_start:
{
uint8_t v___x_364_; 
v___x_364_ = lean_usize_dec_lt(v_i_362_, v_sz_361_);
if (v___x_364_ == 0)
{
return v_bs_363_;
}
else
{
lean_object* v_v_365_; lean_object* v___x_366_; lean_object* v_bs_x27_367_; size_t v___x_368_; size_t v___x_369_; lean_object* v___x_370_; 
v_v_365_ = lean_array_uget(v_bs_363_, v_i_362_);
v___x_366_ = lean_unsigned_to_nat(0u);
v_bs_x27_367_ = lean_array_uset(v_bs_363_, v_i_362_, v___x_366_);
v___x_368_ = ((size_t)1ULL);
v___x_369_ = lean_usize_add(v_i_362_, v___x_368_);
v___x_370_ = lean_array_uset(v_bs_x27_367_, v_i_362_, v_v_365_);
v_i_362_ = v___x_369_;
v_bs_363_ = v___x_370_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__1___boxed(lean_object* v_sz_372_, lean_object* v_i_373_, lean_object* v_bs_374_){
_start:
{
size_t v_sz_boxed_375_; size_t v_i_boxed_376_; lean_object* v_res_377_; 
v_sz_boxed_375_ = lean_unbox_usize(v_sz_372_);
lean_dec(v_sz_372_);
v_i_boxed_376_ = lean_unbox_usize(v_i_373_);
lean_dec(v_i_373_);
v_res_377_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__1(v_sz_boxed_375_, v_i_boxed_376_, v_bs_374_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___lam__0(lean_object* v_a_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0(v_a_378_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_379_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_398_; 
v_a_388_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_398_ == 0)
{
v___x_390_ = v___x_379_;
v_isShared_391_ = v_isSharedCheck_398_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_379_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_398_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
size_t v_sz_392_; size_t v___x_393_; lean_object* v___x_394_; lean_object* v___x_396_; 
v_sz_392_ = lean_array_size(v_a_388_);
v___x_393_ = ((size_t)0ULL);
v___x_394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__1(v_sz_392_, v___x_393_, v_a_388_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v___x_394_);
v___x_396_ = v___x_390_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson(lean_object* v_j_400_){
_start:
{
lean_object* v___x_401_; 
lean_inc(v_j_400_);
v___x_401_ = l_Lean_Json_getArr_x3f(v_j_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec(v_j_400_);
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_455_; 
v_a_410_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_455_ == 0)
{
v___x_412_ = v___x_401_;
v_isShared_413_ = v_isSharedCheck_455_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_401_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_455_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v___x_414_ = lean_array_get_size(v_a_410_);
v___x_415_ = lean_unsigned_to_nat(2u);
v___x_416_ = lean_nat_dec_eq(v___x_414_, v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_421_; 
lean_dec(v_a_410_);
v___x_417_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___closed__0));
v___x_418_ = l_Lean_Json_compress(v_j_400_);
v___x_419_ = lean_string_append(v___x_417_, v___x_418_);
lean_dec_ref(v___x_418_);
if (v_isShared_413_ == 0)
{
lean_ctor_set_tag(v___x_412_, 0);
lean_ctor_set(v___x_412_, 0, v___x_419_);
v___x_421_ = v___x_412_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
else
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
lean_del_object(v___x_412_);
lean_dec(v_j_400_);
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = lean_array_fget_borrowed(v_a_410_, v___x_423_);
lean_inc(v___x_424_);
v___x_425_ = l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___lam__0(v___x_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
lean_dec(v_a_410_);
v_a_426_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_425_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_425_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v_a_434_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_425_, 1);
v___x_435_ = lean_unsigned_to_nat(1u);
v___x_436_ = lean_array_fget(v_a_410_, v___x_435_);
lean_dec(v_a_410_);
v___x_437_ = l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson___lam__0(v___x_436_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec(v_a_434_);
v_a_438_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_437_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_437_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_454_; 
v_a_446_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_454_ == 0)
{
v___x_448_ = v___x_437_;
v_isShared_449_ = v_isSharedCheck_454_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_437_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_454_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_450_; lean_object* v___x_452_; 
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v_a_434_);
lean_ctor_set(v___x_450_, 1, v_a_446_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v___x_450_);
v___x_452_ = v___x_448_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_450_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0(size_t v_sz_457_, size_t v_i_458_, lean_object* v_bs_459_){
_start:
{
uint8_t v___x_460_; 
v___x_460_ = lean_usize_dec_lt(v_i_458_, v_sz_457_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; 
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v_bs_459_);
return v___x_461_;
}
else
{
lean_object* v_v_462_; lean_object* v___x_463_; 
v_v_462_ = lean_array_uget_borrowed(v_bs_459_, v_i_458_);
lean_inc(v_v_462_);
v___x_463_ = l_Lean_Json_getArr_x3f(v_v_462_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
lean_dec_ref(v_bs_459_);
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_534_; 
v_a_472_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_534_ == 0)
{
v___x_474_ = v___x_463_;
v_isShared_475_ = v_isSharedCheck_534_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_463_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_534_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_476_ = lean_array_get_size(v_a_472_);
v___x_477_ = lean_unsigned_to_nat(2u);
v___x_478_ = lean_nat_dec_eq(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
lean_inc(v_v_462_);
lean_dec(v_a_472_);
lean_dec_ref(v_bs_459_);
v___x_479_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0___closed__0));
v___x_480_ = l_Lean_Json_compress(v_v_462_);
v___x_481_ = lean_string_append(v___x_479_, v___x_480_);
lean_dec_ref(v___x_480_);
if (v_isShared_475_ == 0)
{
lean_ctor_set_tag(v___x_474_, 0);
lean_ctor_set(v___x_474_, 0, v___x_481_);
v___x_483_ = v___x_474_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_481_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
else
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
lean_del_object(v___x_474_);
v___x_485_ = lean_unsigned_to_nat(0u);
v___x_486_ = lean_array_fget_borrowed(v_a_472_, v___x_485_);
lean_inc(v___x_486_);
v___x_487_ = l_Lean_Json_getArr_x3f(v___x_486_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
lean_dec(v_a_472_);
lean_dec_ref(v_bs_459_);
v_a_488_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_487_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
else
{
lean_object* v_a_496_; lean_object* v_bs_x27_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v_a_501_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v_a_496_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_496_);
lean_dec_ref_known(v___x_487_, 1);
v_bs_x27_497_ = lean_array_uset(v_bs_459_, v_i_458_, v___x_485_);
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_499_ = lean_array_fget(v_a_472_, v___x_498_);
lean_dec(v_a_472_);
v___x_519_ = lean_box(0);
v___x_520_ = lean_array_get_size(v_a_496_);
v___x_521_ = lean_nat_dec_lt(v___x_485_, v___x_520_);
if (v___x_521_ == 0)
{
lean_dec(v_a_496_);
v_a_501_ = v___x_519_;
goto v___jp_500_;
}
else
{
size_t v___x_522_; size_t v___x_523_; lean_object* v___x_524_; 
v___x_522_ = ((size_t)0ULL);
v___x_523_ = lean_usize_of_nat(v___x_520_);
v___x_524_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_496_, v___x_522_, v___x_523_, v___x_519_);
lean_dec(v_a_496_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec(v___x_499_);
lean_dec_ref(v_bs_x27_497_);
v_a_525_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_524_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_524_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
else
{
lean_object* v_a_533_; 
v_a_533_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v___x_524_, 1);
v_a_501_ = v_a_533_;
goto v___jp_500_;
}
}
v___jp_500_:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_Json_getNat_x3f(v___x_499_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
lean_dec(v_a_501_);
lean_dec_ref(v_bs_x27_497_);
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
else
{
lean_object* v_a_511_; uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; size_t v___x_515_; size_t v___x_516_; lean_object* v___x_517_; 
v_a_511_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_502_, 1);
v___x_512_ = lean_uint8_of_nat(v_a_511_);
lean_dec(v_a_511_);
v___x_513_ = lean_box(v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v_a_501_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = ((size_t)1ULL);
v___x_516_ = lean_usize_add(v_i_458_, v___x_515_);
v___x_517_ = lean_array_uset(v_bs_x27_497_, v_i_458_, v___x_514_);
v_i_458_ = v___x_516_;
v_bs_459_ = v___x_517_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0___boxed(lean_object* v_sz_535_, lean_object* v_i_536_, lean_object* v_bs_537_){
_start:
{
size_t v_sz_boxed_538_; size_t v_i_boxed_539_; lean_object* v_res_540_; 
v_sz_boxed_538_ = lean_unbox_usize(v_sz_535_);
lean_dec(v_sz_535_);
v_i_boxed_539_ = lean_unbox_usize(v_i_536_);
lean_dec(v_i_536_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0(v_sz_boxed_538_, v_i_boxed_539_, v_bs_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__1(size_t v_sz_541_, size_t v_i_542_, lean_object* v_bs_543_){
_start:
{
uint8_t v___x_544_; 
v___x_544_ = lean_usize_dec_lt(v_i_542_, v_sz_541_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; 
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v_bs_543_);
return v___x_545_;
}
else
{
lean_object* v_v_546_; lean_object* v___x_547_; 
v_v_546_ = lean_array_uget_borrowed(v_bs_543_, v_i_542_);
lean_inc(v_v_546_);
v___x_547_ = l_Lean_Json_getArr_x3f(v_v_546_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec_ref(v_bs_543_);
v_a_548_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_547_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_547_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_625_; 
v_a_556_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_625_ == 0)
{
v___x_558_ = v___x_547_;
v_isShared_559_ = v_isSharedCheck_625_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_547_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_625_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_560_ = lean_array_get_size(v_a_556_);
v___x_561_ = lean_unsigned_to_nat(2u);
v___x_562_ = lean_nat_dec_eq(v___x_560_, v___x_561_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
lean_inc(v_v_546_);
lean_dec(v_a_556_);
lean_dec_ref(v_bs_543_);
v___x_563_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0___closed__0));
v___x_564_ = l_Lean_Json_compress(v_v_546_);
v___x_565_ = lean_string_append(v___x_563_, v___x_564_);
lean_dec_ref(v___x_564_);
if (v_isShared_559_ == 0)
{
lean_ctor_set_tag(v___x_558_, 0);
lean_ctor_set(v___x_558_, 0, v___x_565_);
v___x_567_ = v___x_558_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_565_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
else
{
lean_object* v___x_569_; lean_object* v_bs_x27_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v_m_x3f_575_; lean_object* v_a_596_; uint8_t v___x_598_; 
lean_del_object(v___x_558_);
v___x_569_ = lean_unsigned_to_nat(0u);
v_bs_x27_570_ = lean_array_uset(v_bs_543_, v_i_542_, v___x_569_);
v___x_571_ = lean_array_fget(v_a_556_, v___x_569_);
v___x_572_ = lean_unsigned_to_nat(1u);
v___x_573_ = lean_array_fget(v_a_556_, v___x_572_);
lean_dec(v_a_556_);
v___x_598_ = l_Lean_Json_isNull(v___x_571_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Json_getArr_x3f(v___x_571_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
lean_dec(v___x_573_);
lean_dec_ref(v_bs_x27_570_);
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
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
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v_a_608_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_a_608_);
lean_dec_ref_known(v___x_599_, 1);
v___x_609_ = lean_box(0);
v___x_610_ = lean_array_get_size(v_a_608_);
v___x_611_ = lean_nat_dec_lt(v___x_569_, v___x_610_);
if (v___x_611_ == 0)
{
lean_dec(v_a_608_);
v_a_596_ = v___x_609_;
goto v___jp_595_;
}
else
{
size_t v___x_612_; size_t v___x_613_; lean_object* v___x_614_; 
v___x_612_ = ((size_t)0ULL);
v___x_613_ = lean_usize_of_nat(v___x_610_);
v___x_614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_608_, v___x_612_, v___x_613_, v___x_609_);
lean_dec(v_a_608_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec(v___x_573_);
lean_dec_ref(v_bs_x27_570_);
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
else
{
lean_object* v_a_623_; 
v_a_623_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_614_, 1);
v_a_596_ = v_a_623_;
goto v___jp_595_;
}
}
}
}
else
{
lean_object* v___x_624_; 
lean_dec(v___x_571_);
v___x_624_ = lean_box(0);
v_m_x3f_575_ = v___x_624_;
goto v___jp_574_;
}
v___jp_574_:
{
lean_object* v___x_576_; 
v___x_576_ = l_Lean_Json_getArr_x3f(v___x_573_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec(v_m_x3f_575_);
lean_dec_ref(v_bs_x27_570_);
v_a_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
else
{
lean_object* v_a_585_; size_t v_sz_586_; size_t v___x_587_; lean_object* v___x_588_; 
v_a_585_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_576_, 1);
v_sz_586_ = lean_array_size(v_a_585_);
v___x_587_ = ((size_t)0ULL);
v___x_588_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__0(v_sz_586_, v___x_587_, v_a_585_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_dec(v_m_x3f_575_);
lean_dec_ref(v_bs_x27_570_);
return v___x_588_;
}
else
{
lean_object* v_a_589_; lean_object* v___x_590_; size_t v___x_591_; size_t v___x_592_; lean_object* v___x_593_; 
v_a_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_a_589_);
lean_dec_ref_known(v___x_588_, 1);
v___x_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_590_, 0, v_m_x3f_575_);
lean_ctor_set(v___x_590_, 1, v_a_589_);
v___x_591_ = ((size_t)1ULL);
v___x_592_ = lean_usize_add(v_i_542_, v___x_591_);
v___x_593_ = lean_array_uset(v_bs_x27_570_, v_i_542_, v___x_590_);
v_i_542_ = v___x_592_;
v_bs_543_ = v___x_593_;
goto _start;
}
}
}
v___jp_595_:
{
lean_object* v___x_597_; 
v___x_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_597_, 0, v_a_596_);
v_m_x3f_575_ = v___x_597_;
goto v___jp_574_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__1___boxed(lean_object* v_sz_626_, lean_object* v_i_627_, lean_object* v_bs_628_){
_start:
{
size_t v_sz_boxed_629_; size_t v_i_boxed_630_; lean_object* v_res_631_; 
v_sz_boxed_629_ = lean_unbox_usize(v_sz_626_);
lean_dec(v_sz_626_);
v_i_boxed_630_ = lean_unbox_usize(v_i_627_);
lean_dec(v_i_627_);
v_res_631_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__1(v_sz_boxed_629_, v_i_boxed_630_, v_bs_628_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson(lean_object* v_j_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_Json_getArr_x3f(v_j_632_);
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
lean_object* v_a_642_; size_t v_sz_643_; size_t v___x_644_; lean_object* v___x_645_; 
v_a_642_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_642_);
lean_dec_ref_known(v___x_633_, 1);
v_sz_643_ = lean_array_size(v_a_642_);
v___x_644_ = ((size_t)0ULL);
v___x_645_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson_spec__1(v_sz_643_, v___x_644_, v_a_642_);
return v___x_645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__0(lean_object* v_x_646_){
_start:
{
lean_object* v_fst_647_; lean_object* v_snd_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_fst_647_ = lean_ctor_get(v_x_646_, 0);
v_snd_648_ = lean_ctor_get(v_x_646_, 1);
v_isSharedCheck_655_ = !lean_is_exclusive(v_x_646_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v_x_646_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_dec(v_x_646_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_fst_647_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v_snd_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__1(lean_object* v_x_656_){
_start:
{
lean_object* v_fst_657_; 
v_fst_657_ = lean_ctor_get(v_x_656_, 0);
lean_inc(v_fst_657_);
return v_fst_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__1___boxed(lean_object* v_x_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__1(v_x_658_);
lean_dec_ref(v_x_658_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__2(lean_object* v_m_660_, lean_object* v_x_661_){
_start:
{
lean_object* v_fst_662_; lean_object* v_snd_663_; lean_object* v___x_664_; 
v_fst_662_ = lean_ctor_get(v_x_661_, 0);
lean_inc(v_fst_662_);
v_snd_663_ = lean_ctor_get(v_x_661_, 1);
lean_inc(v_snd_663_);
lean_dec_ref(v_x_661_);
v___x_664_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_662_, v_snd_663_, v_m_660_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__3(lean_object* v___f_665_, lean_object* v_x1_666_, lean_object* v_x2_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_apply_2(v___f_665_, v_x1_666_, v_x2_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__6(lean_object* v_x_669_){
_start:
{
lean_object* v_fst_670_; lean_object* v_snd_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_fst_670_ = lean_ctor_get(v_x_669_, 0);
v_snd_671_ = lean_ctor_get(v_x_669_, 1);
v_isSharedCheck_678_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v_x_669_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_snd_671_);
lean_inc(v_fst_670_);
lean_dec(v_x_669_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_fst_670_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v_snd_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__4(lean_object* v___f_679_, lean_object* v_x_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = lean_apply_1(v___f_679_, v_x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5(lean_object* v___f_701_, lean_object* v_x_702_){
_start:
{
lean_object* v_fst_703_; lean_object* v_snd_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_715_; 
v_fst_703_ = lean_ctor_get(v_x_702_, 0);
v_snd_704_ = lean_ctor_get(v_x_702_, 1);
v_isSharedCheck_715_ = !lean_is_exclusive(v_x_702_);
if (v_isSharedCheck_715_ == 0)
{
v___x_706_ = v_x_702_;
v_isShared_707_ = v_isSharedCheck_715_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_snd_704_);
lean_inc(v_fst_703_);
lean_dec(v_x_702_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_715_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; size_t v_sz_709_; size_t v___x_710_; lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_708_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__9));
v_sz_709_ = lean_array_size(v_snd_704_);
v___x_710_ = ((size_t)0ULL);
v___x_711_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_708_, v___f_701_, v_sz_709_, v___x_710_, v_snd_704_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 1, v___x_711_);
v___x_713_ = v___x_706_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_fst_703_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v___x_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8(lean_object* v___x_730_, lean_object* v___x_731_, lean_object* v___x_732_, lean_object* v___x_733_, lean_object* v___x_734_, lean_object* v___f_735_, lean_object* v___x_736_, lean_object* v___f_737_, lean_object* v___f_738_, lean_object* v___f_739_, lean_object* v___f_740_, lean_object* v___f_741_, lean_object* v___f_742_, lean_object* v___f_743_, lean_object* v_j_744_){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__0));
lean_inc_ref(v___x_730_);
lean_inc(v_j_744_);
v___x_746_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_730_, v___x_745_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_734_);
lean_dec_ref(v___x_733_);
lean_dec_ref(v___x_732_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_730_);
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_a_755_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_746_, 1);
v___x_756_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__1));
lean_inc(v_j_744_);
v___x_757_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_731_, v___x_756_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_734_);
lean_dec_ref(v___x_733_);
lean_dec_ref(v___x_732_);
lean_dec_ref(v___x_730_);
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_a_766_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_757_, 1);
v___x_767_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2));
lean_inc(v_j_744_);
v___x_768_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_732_, v___x_767_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_734_);
lean_dec_ref(v___x_733_);
lean_dec_ref(v___x_730_);
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_a_777_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_768_, 1);
v___x_778_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__3));
lean_inc(v_j_744_);
v___x_779_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_733_, v___x_778_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_734_);
lean_dec_ref(v___x_730_);
v_a_780_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_779_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_779_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v_a_788_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_788_);
lean_dec_ref_known(v___x_779_, 1);
v___x_789_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__4));
lean_inc(v_j_744_);
v___x_790_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_734_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_730_);
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_790_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_790_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_a_799_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_790_, 1);
v___x_800_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__5));
lean_inc_ref(v___f_735_);
lean_inc(v_j_744_);
v___x_801_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___f_735_, v___x_800_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_730_);
v_a_802_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_801_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_801_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_a_810_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_810_);
lean_dec_ref_known(v___x_801_, 1);
v___x_811_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6));
lean_inc_ref(v___f_735_);
lean_inc(v_j_744_);
v___x_812_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___f_735_, v___x_811_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_730_);
v_a_813_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_812_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_812_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_a_821_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_a_821_);
lean_dec_ref_known(v___x_812_, 1);
v___x_822_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__7));
lean_inc_ref(v___x_730_);
lean_inc(v_j_744_);
v___x_823_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_730_, v___x_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_730_);
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_a_832_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_823_, 1);
v___x_833_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__8));
lean_inc_ref(v___x_730_);
lean_inc(v_j_744_);
v___x_834_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_730_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___x_730_);
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
else
{
lean_object* v_a_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_a_843_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_834_, 1);
v___x_844_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__9));
lean_inc(v_j_744_);
v___x_845_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_730_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
v_a_846_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_845_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_845_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_a_854_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_845_, 1);
v___x_855_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__10));
lean_inc(v_j_744_);
v___x_856_ = l_Lean_Json_getObjVal_x3f(v_j_744_, v___x_855_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
v_a_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_866_; 
v_a_865_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_856_, 1);
v___x_866_ = l___private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson(v_a_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
lean_dec_ref(v___f_735_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_a_875_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_866_, 1);
v___x_876_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__11));
lean_inc(v_j_744_);
v___x_877_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___f_735_, v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec(v_a_875_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_a_886_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_877_, 1);
v___x_887_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__12));
lean_inc(v_j_744_);
v___x_888_ = l_Lean_Json_getObjVal_x3f(v_j_744_, v___x_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
v_a_889_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_888_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_888_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
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
lean_object* v_a_897_; lean_object* v___x_898_; 
v_a_897_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_888_, 1);
v___x_898_ = l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson(v_a_897_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_j_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___x_736_);
v_a_899_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_898_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_898_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v_a_907_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_898_, 1);
v___x_908_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__13));
v___x_909_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_744_, v___x_736_, v___x_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec(v_a_907_);
lean_dec(v_a_886_);
lean_dec(v_a_875_);
lean_dec(v_a_854_);
lean_dec(v_a_843_);
lean_dec(v_a_832_);
lean_dec(v_a_821_);
lean_dec(v_a_810_);
lean_dec(v_a_799_);
lean_dec(v_a_788_);
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v___f_742_);
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec_ref(v___f_738_);
lean_dec_ref(v___f_737_);
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_960_; 
v_a_918_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_960_ == 0)
{
v___x_920_ = v___x_909_;
v_isShared_921_ = v_isSharedCheck_960_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_909_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_960_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; size_t v_sz_923_; size_t v___x_924_; lean_object* v___x_925_; lean_object* v___y_927_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_951_; lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_922_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__9));
v_sz_923_ = lean_array_size(v_a_832_);
v___x_924_ = ((size_t)0ULL);
v___x_925_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_922_, v___f_737_, v_sz_923_, v___x_924_, v_a_832_);
v___x_941_ = lean_box(1);
v___x_942_ = lean_unsigned_to_nat(0u);
v___x_956_ = lean_array_get_size(v_a_843_);
v___x_957_ = lean_nat_dec_lt(v___x_942_, v___x_956_);
if (v___x_957_ == 0)
{
lean_dec(v_a_843_);
lean_dec_ref(v___f_743_);
v___y_951_ = v___x_941_;
goto v___jp_950_;
}
else
{
size_t v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_usize_of_nat(v___x_956_);
v___x_959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_922_, v___f_743_, v_a_843_, v___x_924_, v___x_958_, v___x_941_);
v___y_951_ = v___x_959_;
goto v___jp_950_;
}
v___jp_926_:
{
size_t v_sz_930_; lean_object* v___x_931_; size_t v_sz_932_; lean_object* v___x_933_; size_t v_sz_934_; lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; lean_object* v___x_939_; 
v_sz_930_ = lean_array_size(v_a_766_);
v___x_931_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_922_, v___f_738_, v_sz_930_, v___x_924_, v_a_766_);
v_sz_932_ = lean_array_size(v_a_777_);
v___x_933_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_922_, v___f_739_, v_sz_932_, v___x_924_, v_a_777_);
v_sz_934_ = lean_array_size(v_a_788_);
v___x_935_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_922_, v___f_740_, v_sz_934_, v___x_924_, v_a_788_);
v___x_936_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v___x_936_, 0, v_a_810_);
lean_ctor_set(v___x_936_, 1, v_a_821_);
lean_ctor_set(v___x_936_, 2, v___x_925_);
lean_ctor_set(v___x_936_, 3, v___y_928_);
lean_ctor_set(v___x_936_, 4, v___y_927_);
lean_ctor_set(v___x_936_, 5, v___y_929_);
lean_ctor_set(v___x_936_, 6, v___x_931_);
lean_ctor_set(v___x_936_, 7, v___x_933_);
lean_ctor_set(v___x_936_, 8, v_a_875_);
lean_ctor_set(v___x_936_, 9, v_a_886_);
lean_ctor_set(v___x_936_, 10, v_a_907_);
lean_ctor_set(v___x_936_, 11, v___x_935_);
lean_ctor_set(v___x_936_, 12, v_a_918_);
v___x_937_ = lean_unbox(v_a_799_);
lean_dec(v_a_799_);
lean_ctor_set_uint8(v___x_936_, sizeof(void*)*13, v___x_937_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 0, v___x_936_);
v___x_939_ = v___x_920_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_936_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
v___jp_943_:
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = lean_array_get_size(v_a_755_);
v___x_947_ = lean_nat_dec_lt(v___x_942_, v___x_946_);
if (v___x_947_ == 0)
{
lean_dec(v_a_755_);
lean_dec_ref(v___f_741_);
v___y_927_ = v___y_945_;
v___y_928_ = v___y_944_;
v___y_929_ = v___x_941_;
goto v___jp_926_;
}
else
{
size_t v___x_948_; lean_object* v___x_949_; 
v___x_948_ = lean_usize_of_nat(v___x_946_);
v___x_949_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_922_, v___f_741_, v_a_755_, v___x_924_, v___x_948_, v___x_941_);
v___y_927_ = v___y_945_;
v___y_928_ = v___y_944_;
v___y_929_ = v___x_949_;
goto v___jp_926_;
}
}
v___jp_950_:
{
lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_952_ = lean_array_get_size(v_a_854_);
v___x_953_ = lean_nat_dec_lt(v___x_942_, v___x_952_);
if (v___x_953_ == 0)
{
lean_dec(v_a_854_);
lean_dec_ref(v___f_742_);
v___y_944_ = v___y_951_;
v___y_945_ = v___x_941_;
goto v___jp_943_;
}
else
{
size_t v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_usize_of_nat(v___x_952_);
v___x_955_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_922_, v___f_742_, v_a_854_, v___x_924_, v___x_954_, v___x_941_);
v___y_944_ = v___y_951_;
v___y_945_ = v___x_955_;
goto v___jp_943_;
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
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_toImport(lean_object* v_u_1017_){
_start:
{
lean_object* v_moduleDigest_1018_; lean_object* v_closure_1019_; lean_object* v_own_1020_; lean_object* v_providesDigest_1021_; lean_object* v_provides_1022_; lean_object* v_specKeys_1023_; lean_object* v___x_1024_; 
v_moduleDigest_1018_ = lean_ctor_get(v_u_1017_, 0);
v_closure_1019_ = lean_ctor_get(v_u_1017_, 1);
v_own_1020_ = lean_ctor_get(v_u_1017_, 5);
v_providesDigest_1021_ = lean_ctor_get(v_u_1017_, 9);
v_provides_1022_ = lean_ctor_get(v_u_1017_, 10);
v_specKeys_1023_ = lean_ctor_get(v_u_1017_, 11);
lean_inc_ref(v_specKeys_1023_);
lean_inc_ref(v_provides_1022_);
lean_inc_ref(v_providesDigest_1021_);
lean_inc(v_own_1020_);
lean_inc_ref(v_closure_1019_);
lean_inc_ref(v_moduleDigest_1018_);
v___x_1024_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1024_, 0, v_moduleDigest_1018_);
lean_ctor_set(v___x_1024_, 1, v_closure_1019_);
lean_ctor_set(v___x_1024_, 2, v_own_1020_);
lean_ctor_set(v___x_1024_, 3, v_providesDigest_1021_);
lean_ctor_set(v___x_1024_, 4, v_provides_1022_);
lean_ctor_set(v___x_1024_, 5, v_specKeys_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_toImport___boxed(lean_object* v_u_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_toImport(v_u_1025_);
lean_dec_ref(v_u_1025_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___lam__0(lean_object* v_x1_1027_, lean_object* v_x2_1028_){
_start:
{
lean_object* v_fst_1029_; lean_object* v_snd_1030_; lean_object* v___x_1031_; 
v_fst_1029_ = lean_ctor_get(v_x2_1028_, 0);
lean_inc(v_fst_1029_);
v_snd_1030_ = lean_ctor_get(v_x2_1028_, 1);
lean_inc(v_snd_1030_);
lean_dec_ref(v_x2_1028_);
v___x_1031_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_1029_, v_snd_1030_, v_x1_1027_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageImport___lam__2(lean_object* v___x_1032_, lean_object* v___x_1033_, lean_object* v___f_1034_, lean_object* v___f_1035_, lean_object* v___f_1036_, lean_object* v_j_1037_){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__0));
lean_inc(v_j_1037_);
v___x_1039_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1037_, v___x_1032_, v___x_1038_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec(v_j_1037_);
lean_dec_ref(v___f_1036_);
lean_dec_ref(v___f_1035_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1039_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1039_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v_a_1048_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___x_1039_, 1);
v___x_1049_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__3));
lean_inc(v_j_1037_);
v___x_1050_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1037_, v___x_1033_, v___x_1049_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_dec(v_a_1048_);
lean_dec(v_j_1037_);
lean_dec_ref(v___f_1036_);
lean_dec_ref(v___f_1035_);
lean_dec_ref(v___f_1034_);
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v_a_1059_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1050_, 1);
v___x_1060_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__5));
lean_inc_ref(v___f_1034_);
lean_inc(v_j_1037_);
v___x_1061_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1037_, v___f_1034_, v___x_1060_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec(v_a_1059_);
lean_dec(v_a_1048_);
lean_dec(v_j_1037_);
lean_dec_ref(v___f_1036_);
lean_dec_ref(v___f_1035_);
lean_dec_ref(v___f_1034_);
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1061_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1061_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_a_1070_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1061_, 1);
v___x_1071_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6));
lean_inc_ref(v___f_1034_);
lean_inc(v_j_1037_);
v___x_1072_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1037_, v___f_1034_, v___x_1071_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_dec(v_a_1070_);
lean_dec(v_a_1059_);
lean_dec(v_a_1048_);
lean_dec(v_j_1037_);
lean_dec_ref(v___f_1036_);
lean_dec_ref(v___f_1035_);
lean_dec_ref(v___f_1034_);
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_a_1081_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1072_, 1);
v___x_1082_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__11));
lean_inc(v_j_1037_);
v___x_1083_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1037_, v___f_1034_, v___x_1082_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec(v_a_1081_);
lean_dec(v_a_1070_);
lean_dec(v_a_1059_);
lean_dec(v_a_1048_);
lean_dec(v_j_1037_);
lean_dec_ref(v___f_1036_);
lean_dec_ref(v___f_1035_);
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1083_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1083_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
else
{
lean_object* v_a_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_a_1092_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1092_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1093_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__12));
v___x_1094_ = l_Lean_Json_getObjVal_x3f(v_j_1037_, v___x_1093_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_dec(v_a_1092_);
lean_dec(v_a_1081_);
lean_dec(v_a_1070_);
lean_dec(v_a_1059_);
lean_dec(v_a_1048_);
lean_dec_ref(v___f_1036_);
lean_dec_ref(v___f_1035_);
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1094_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1094_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1104_; 
v_a_1103_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1094_, 1);
v___x_1104_ = l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson(v_a_1103_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec(v_a_1092_);
lean_dec(v_a_1081_);
lean_dec(v_a_1070_);
lean_dec(v_a_1059_);
lean_dec(v_a_1048_);
lean_dec_ref(v___f_1036_);
lean_dec_ref(v___f_1035_);
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1104_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1104_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1135_; 
v_a_1113_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1115_ = v___x_1104_;
v_isShared_1116_ = v_isSharedCheck_1135_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1104_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1135_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___y_1118_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1127_ = lean_box(1);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = lean_array_get_size(v_a_1048_);
v___x_1130_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__9));
v___x_1131_ = lean_nat_dec_lt(v___x_1128_, v___x_1129_);
if (v___x_1131_ == 0)
{
lean_dec(v_a_1048_);
lean_dec_ref(v___f_1036_);
v___y_1118_ = v___x_1127_;
goto v___jp_1117_;
}
else
{
size_t v___x_1132_; size_t v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = ((size_t)0ULL);
v___x_1133_ = lean_usize_of_nat(v___x_1129_);
v___x_1134_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1130_, v___f_1036_, v_a_1048_, v___x_1132_, v___x_1133_, v___x_1127_);
v___y_1118_ = v___x_1134_;
goto v___jp_1117_;
}
v___jp_1117_:
{
lean_object* v___x_1119_; size_t v_sz_1120_; size_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1119_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__5___closed__9));
v_sz_1120_ = lean_array_size(v_a_1059_);
v___x_1121_ = ((size_t)0ULL);
v___x_1122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1119_, v___f_1035_, v_sz_1120_, v___x_1121_, v_a_1059_);
v___x_1123_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1123_, 0, v_a_1070_);
lean_ctor_set(v___x_1123_, 1, v_a_1081_);
lean_ctor_set(v___x_1123_, 2, v___y_1118_);
lean_ctor_set(v___x_1123_, 3, v_a_1092_);
lean_ctor_set(v___x_1123_, 4, v_a_1113_);
lean_ctor_set(v___x_1123_, 5, v___x_1122_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v___x_1123_);
v___x_1125_ = v___x_1115_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1123_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
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
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0(lean_object* v___x_1148_, lean_object* v___f_1149_, lean_object* v_j_1150_){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__0));
lean_inc(v_j_1150_);
v___x_1152_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1150_, v___x_1148_, v___x_1151_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec(v_j_1150_);
lean_dec_ref(v___f_1149_);
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1152_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_a_1161_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1161_);
lean_dec_ref_known(v___x_1152_, 1);
v___x_1162_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1));
lean_inc_ref(v___f_1149_);
lean_inc(v_j_1150_);
v___x_1163_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1150_, v___f_1149_, v___x_1162_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_1161_);
lean_dec(v_j_1150_);
lean_dec_ref(v___f_1149_);
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1163_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1163_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_a_1172_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_a_1172_);
lean_dec_ref_known(v___x_1163_, 1);
v___x_1173_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__2));
lean_inc_ref(v___f_1149_);
lean_inc(v_j_1150_);
v___x_1174_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1150_, v___f_1149_, v___x_1173_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_dec(v_a_1172_);
lean_dec(v_a_1161_);
lean_dec(v_j_1150_);
lean_dec_ref(v___f_1149_);
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1174_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1174_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_a_1183_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1174_, 1);
v___x_1184_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__3));
lean_inc_ref(v___f_1149_);
lean_inc(v_j_1150_);
v___x_1185_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1150_, v___f_1149_, v___x_1184_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec(v_a_1183_);
lean_dec(v_a_1172_);
lean_dec(v_a_1161_);
lean_dec(v_j_1150_);
lean_dec_ref(v___f_1149_);
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1185_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v_a_1194_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1194_);
lean_dec_ref_known(v___x_1185_, 1);
v___x_1195_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6));
lean_inc(v_j_1150_);
v___x_1196_ = l_Lean_Json_getObjValAs_x3f___redArg(v_j_1150_, v___f_1149_, v___x_1195_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1204_; 
lean_dec(v_a_1194_);
lean_dec(v_a_1183_);
lean_dec(v_a_1172_);
lean_dec(v_a_1161_);
lean_dec(v_j_1150_);
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1199_ = v___x_1196_;
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___x_1196_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v_a_1205_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1206_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2));
v___x_1207_ = l_Lean_Json_getObjVal_x3f(v_j_1150_, v___x_1206_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
lean_dec(v_a_1205_);
lean_dec(v_a_1194_);
lean_dec(v_a_1183_);
lean_dec(v_a_1172_);
lean_dec(v_a_1161_);
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1207_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1207_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1217_; 
v_a_1216_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1207_, 1);
v___x_1217_ = l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs(v_a_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec(v_a_1205_);
lean_dec(v_a_1194_);
lean_dec(v_a_1183_);
lean_dec(v_a_1172_);
lean_dec(v_a_1161_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1235_; 
v_a_1226_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1228_ = v___x_1217_;
v_isShared_1229_ = v_isSharedCheck_1235_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1217_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1235_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; uint64_t v___x_1231_; lean_object* v___x_1233_; 
v___x_1230_ = lean_alloc_ctor(0, 5, 8);
lean_ctor_set(v___x_1230_, 0, v_a_1172_);
lean_ctor_set(v___x_1230_, 1, v_a_1183_);
lean_ctor_set(v___x_1230_, 2, v_a_1194_);
lean_ctor_set(v___x_1230_, 3, v_a_1205_);
lean_ctor_set(v___x_1230_, 4, v_a_1226_);
v___x_1231_ = lean_unbox_uint64(v_a_1161_);
lean_dec(v_a_1161_);
lean_ctor_set_uint64(v___x_1230_, sizeof(void*)*5, v___x_1231_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1230_);
v___x_1233_ = v___x_1228_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1230_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
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
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(lean_object* v_path_1242_, lean_object* v_expected_x3f_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v_log_1258_; uint8_t v_action_1259_; uint8_t v_wantsRebuild_1260_; uint8_t v_canceled_1261_; lean_object* v_trace_1262_; lean_object* v_buildTime_1263_; lean_object* v___x_1264_; 
v_log_1258_ = lean_ctor_get(v_a_1244_, 0);
v_action_1259_ = lean_ctor_get_uint8(v_a_1244_, sizeof(void*)*3);
v_wantsRebuild_1260_ = lean_ctor_get_uint8(v_a_1244_, sizeof(void*)*3 + 1);
v_canceled_1261_ = lean_ctor_get_uint8(v_a_1244_, sizeof(void*)*3 + 2);
v_trace_1262_ = lean_ctor_get(v_a_1244_, 1);
v_buildTime_1263_ = lean_ctor_get(v_a_1244_, 2);
v___x_1264_ = lean_usage_read_file_stamped(v_path_1242_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v_fst_1266_; lean_object* v_snd_1267_; lean_object* v___x_1268_; 
lean_dec_ref(v_path_1242_);
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
v_fst_1266_ = lean_ctor_get(v_a_1265_, 0);
lean_inc(v_fst_1266_);
v_snd_1267_ = lean_ctor_get(v_a_1265_, 1);
lean_inc(v_snd_1267_);
lean_dec(v_a_1265_);
v___x_1268_ = lean_usage_digest_bytes(v_fst_1266_);
if (lean_obj_tag(v_expected_x3f_1243_) == 0)
{
v___y_1251_ = v_snd_1267_;
v___y_1252_ = v_a_1244_;
v___y_1253_ = v___x_1268_;
v___y_1254_ = v_fst_1266_;
goto v___jp_1250_;
}
else
{
lean_object* v_val_1269_; uint8_t v___x_1270_; 
v_val_1269_ = lean_ctor_get(v_expected_x3f_1243_, 0);
v___x_1270_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_val_1269_, v___x_1268_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; 
lean_dec_ref(v___x_1268_);
lean_dec(v_snd_1267_);
lean_dec(v_fst_1266_);
v___x_1271_ = lean_box(0);
v___y_1247_ = v_a_1244_;
v___y_1248_ = v___x_1271_;
goto v___jp_1246_;
}
else
{
v___y_1251_ = v_snd_1267_;
v___y_1252_ = v_a_1244_;
v___y_1253_ = v___x_1268_;
v___y_1254_ = v_fst_1266_;
goto v___jp_1250_;
}
}
}
else
{
lean_object* v_a_1272_; 
v_a_1272_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1272_);
lean_dec_ref_known(v___x_1264_, 1);
if (lean_obj_tag(v_a_1272_) == 11)
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_dec_ref_known(v_a_1272_, 2);
lean_dec_ref(v_path_1242_);
v___x_1273_ = lean_box(0);
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
lean_ctor_set(v___x_1274_, 1, v_a_1244_);
return v___x_1274_;
}
else
{
lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1290_; 
lean_inc(v_buildTime_1263_);
lean_inc_ref(v_trace_1262_);
lean_inc_ref(v_log_1258_);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_a_1244_);
if (v_isSharedCheck_1290_ == 0)
{
lean_object* v_unused_1291_; lean_object* v_unused_1292_; lean_object* v_unused_1293_; 
v_unused_1291_ = lean_ctor_get(v_a_1244_, 2);
lean_dec(v_unused_1291_);
v_unused_1292_ = lean_ctor_get(v_a_1244_, 1);
lean_dec(v_unused_1292_);
v_unused_1293_ = lean_ctor_get(v_a_1244_, 0);
lean_dec(v_unused_1293_);
v___x_1276_ = v_a_1244_;
v_isShared_1277_ = v_isSharedCheck_1290_;
goto v_resetjp_1275_;
}
else
{
lean_dec(v_a_1244_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1290_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1287_; 
v___x_1278_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg___closed__0));
v___x_1279_ = lean_string_append(v_path_1242_, v___x_1278_);
v___x_1280_ = lean_io_error_to_string(v_a_1272_);
v___x_1281_ = lean_string_append(v___x_1279_, v___x_1280_);
lean_dec_ref(v___x_1280_);
v___x_1282_ = 3;
v___x_1283_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set_uint8(v___x_1283_, sizeof(void*)*1, v___x_1282_);
v___x_1284_ = lean_array_get_size(v_log_1258_);
v___x_1285_ = lean_array_push(v_log_1258_, v___x_1283_);
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 0, v___x_1285_);
v___x_1287_ = v___x_1276_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1285_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_trace_1262_);
lean_ctor_set(v_reuseFailAlloc_1289_, 2, v_buildTime_1263_);
lean_ctor_set_uint8(v_reuseFailAlloc_1289_, sizeof(void*)*3, v_action_1259_);
lean_ctor_set_uint8(v_reuseFailAlloc_1289_, sizeof(void*)*3 + 1, v_wantsRebuild_1260_);
lean_ctor_set_uint8(v_reuseFailAlloc_1289_, sizeof(void*)*3 + 2, v_canceled_1261_);
v___x_1287_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1284_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
return v___x_1288_;
}
}
}
}
v___jp_1246_:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___y_1248_);
lean_ctor_set(v___x_1249_, 1, v___y_1247_);
return v___x_1249_;
}
v___jp_1250_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___y_1253_);
lean_ctor_set(v___x_1255_, 1, v___y_1251_);
v___x_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___y_1254_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v___x_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1256_);
v___y_1247_ = v___y_1252_;
v___y_1248_ = v___x_1257_;
goto v___jp_1246_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg___boxed(lean_object* v_path_1294_, lean_object* v_expected_x3f_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(v_path_1294_, v_expected_x3f_1295_, v_a_1296_);
lean_dec(v_expected_x3f_1295_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f(lean_object* v_path_1299_, lean_object* v_expected_x3f_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(v_path_1299_, v_expected_x3f_1300_, v_a_1306_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___boxed(lean_object* v_path_1309_, lean_object* v_expected_x3f_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f(v_path_1309_, v_expected_x3f_1310_, v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
lean_dec_ref(v_a_1315_);
lean_dec(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec(v_a_1312_);
lean_dec_ref(v_a_1311_);
lean_dec(v_expected_x3f_1310_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___lam__0(lean_object* v_mutex_1319_, lean_object* v_a_x3f_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = lean_io_basemutex_unlock(v_mutex_1319_);
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v___y_1321_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___lam__0___boxed(lean_object* v_mutex_1325_, lean_object* v_a_x3f_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___lam__0(v_mutex_1325_, v_a_x3f_1326_, v___y_1327_);
lean_dec(v_a_x3f_1326_);
lean_dec(v_mutex_1325_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(lean_object* v_mutex_1330_, lean_object* v_k_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_a_1340_; lean_object* v_a_1341_; lean_object* v_ref_1343_; lean_object* v_mutex_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v_ref_1343_ = lean_ctor_get(v_mutex_1330_, 0);
lean_inc(v_ref_1343_);
v_mutex_1344_ = lean_ctor_get(v_mutex_1330_, 1);
lean_inc(v_mutex_1344_);
lean_dec_ref(v_mutex_1330_);
v___x_1345_ = lean_io_basemutex_lock(v_mutex_1344_);
lean_inc_ref(v___y_1336_);
lean_inc(v___y_1335_);
lean_inc(v___y_1334_);
lean_inc(v___y_1333_);
v___x_1346_ = lean_apply_8(v_k_1331_, v_ref_1343_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, lean_box(0));
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v_a_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc_n(v_a_1347_, 2);
v_a_1348_ = lean_ctor_get(v___x_1346_, 1);
lean_inc(v_a_1348_);
lean_dec_ref_known(v___x_1346_, 2);
v___x_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1349_, 0, v_a_1347_);
v___x_1350_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___lam__0(v_mutex_1344_, v___x_1349_, v_a_1348_);
lean_dec_ref_known(v___x_1349_, 1);
lean_dec(v_mutex_1344_);
v_a_1351_ = lean_ctor_get(v___x_1350_, 1);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1358_ == 0)
{
lean_object* v_unused_1359_; 
v_unused_1359_ = lean_ctor_get(v___x_1350_, 0);
lean_dec(v_unused_1359_);
v___x_1353_ = v___x_1350_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1350_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 0, v_a_1347_);
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1347_);
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
else
{
lean_object* v_a_1360_; lean_object* v_a_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v_a_1364_; 
v_a_1360_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1360_);
v_a_1361_ = lean_ctor_get(v___x_1346_, 1);
lean_inc(v_a_1361_);
lean_dec_ref_known(v___x_1346_, 2);
v___x_1362_ = lean_box(0);
v___x_1363_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___lam__0(v_mutex_1344_, v___x_1362_, v_a_1361_);
lean_dec(v_mutex_1344_);
v_a_1364_ = lean_ctor_get(v___x_1363_, 1);
lean_inc(v_a_1364_);
lean_dec_ref(v___x_1363_);
v_a_1340_ = v_a_1360_;
v_a_1341_ = v_a_1364_;
goto v___jp_1339_;
}
v___jp_1339_:
{
lean_object* v___x_1342_; 
v___x_1342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1342_, 0, v_a_1340_);
lean_ctor_set(v___x_1342_, 1, v_a_1341_);
return v___x_1342_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg___boxed(lean_object* v_mutex_1365_, lean_object* v_k_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_mutex_1365_, v_k_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec(v___y_1368_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1(lean_object* v_00_u03b1_1375_, lean_object* v_00_u03b2_1376_, lean_object* v_mutex_1377_, lean_object* v_k_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v___x_1386_; 
v___x_1386_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_mutex_1377_, v_k_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___boxed(lean_object* v_00_u03b1_1387_, lean_object* v_00_u03b2_1388_, lean_object* v_mutex_1389_, lean_object* v_k_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1(v_00_u03b1_1387_, v_00_u03b2_1388_, v_mutex_1389_, v_k_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec(v___y_1392_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___redArg(lean_object* v_a_1399_, lean_object* v_x_1400_){
_start:
{
if (lean_obj_tag(v_x_1400_) == 0)
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_box(0);
return v___x_1401_;
}
else
{
lean_object* v_key_1402_; lean_object* v_value_1403_; lean_object* v_tail_1404_; uint8_t v___x_1405_; 
v_key_1402_ = lean_ctor_get(v_x_1400_, 0);
v_value_1403_ = lean_ctor_get(v_x_1400_, 1);
v_tail_1404_ = lean_ctor_get(v_x_1400_, 2);
v___x_1405_ = lean_string_dec_eq(v_key_1402_, v_a_1399_);
if (v___x_1405_ == 0)
{
v_x_1400_ = v_tail_1404_;
goto _start;
}
else
{
lean_object* v___x_1407_; 
lean_inc(v_value_1403_);
v___x_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1407_, 0, v_value_1403_);
return v___x_1407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_1408_, lean_object* v_x_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___redArg(v_a_1408_, v_x_1409_);
lean_dec(v_x_1409_);
lean_dec_ref(v_a_1408_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(lean_object* v_m_1411_, lean_object* v_a_1412_){
_start:
{
lean_object* v_buckets_1413_; lean_object* v___x_1414_; uint64_t v___x_1415_; uint64_t v___x_1416_; uint64_t v___x_1417_; uint64_t v_fold_1418_; uint64_t v___x_1419_; uint64_t v___x_1420_; uint64_t v___x_1421_; size_t v___x_1422_; size_t v___x_1423_; size_t v___x_1424_; size_t v___x_1425_; size_t v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v_buckets_1413_ = lean_ctor_get(v_m_1411_, 1);
v___x_1414_ = lean_array_get_size(v_buckets_1413_);
v___x_1415_ = l_System_instHashableFilePath_hash(v_a_1412_);
v___x_1416_ = 32ULL;
v___x_1417_ = lean_uint64_shift_right(v___x_1415_, v___x_1416_);
v_fold_1418_ = lean_uint64_xor(v___x_1415_, v___x_1417_);
v___x_1419_ = 16ULL;
v___x_1420_ = lean_uint64_shift_right(v_fold_1418_, v___x_1419_);
v___x_1421_ = lean_uint64_xor(v_fold_1418_, v___x_1420_);
v___x_1422_ = lean_uint64_to_usize(v___x_1421_);
v___x_1423_ = lean_usize_of_nat(v___x_1414_);
v___x_1424_ = ((size_t)1ULL);
v___x_1425_ = lean_usize_sub(v___x_1423_, v___x_1424_);
v___x_1426_ = lean_usize_land(v___x_1422_, v___x_1425_);
v___x_1427_ = lean_array_uget_borrowed(v_buckets_1413_, v___x_1426_);
v___x_1428_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___redArg(v_a_1412_, v___x_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg___boxed(lean_object* v_m_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(v_m_1429_, v_a_1430_);
lean_dec_ref(v_a_1430_);
lean_dec_ref(v_m_1429_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___lam__0(lean_object* v_path_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1441_ = lean_st_ref_get(v___y_1433_);
v___x_1442_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(v___x_1441_, v_path_1432_);
lean_dec(v___x_1441_);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
lean_ctor_set(v___x_1443_, 1, v___y_1439_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___lam__0___boxed(lean_object* v_path_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___lam__0(v_path_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v_path_1444_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f(lean_object* v_path_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_){
_start:
{
lean_object* v___y_1463_; lean_object* v_log_1466_; uint8_t v_action_1467_; uint8_t v_wantsRebuild_1468_; uint8_t v_canceled_1469_; lean_object* v_trace_1470_; lean_object* v_buildTime_1471_; lean_object* v___f_1472_; lean_object* v___x_1473_; 
v_log_1466_ = lean_ctor_get(v_a_1460_, 0);
v_action_1467_ = lean_ctor_get_uint8(v_a_1460_, sizeof(void*)*3);
v_wantsRebuild_1468_ = lean_ctor_get_uint8(v_a_1460_, sizeof(void*)*3 + 1);
v_canceled_1469_ = lean_ctor_get_uint8(v_a_1460_, sizeof(void*)*3 + 2);
v_trace_1470_ = lean_ctor_get(v_a_1460_, 1);
v_buildTime_1471_ = lean_ctor_get(v_a_1460_, 2);
lean_inc_ref(v_path_1454_);
v___f_1472_ = lean_alloc_closure((void*)(l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___lam__0___boxed), 9, 1);
lean_closure_set(v___f_1472_, 0, v_path_1454_);
v___x_1473_ = lean_usage_file_stamp(v_path_1454_);
lean_dec_ref(v_path_1454_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref_known(v___x_1473_, 1);
if (lean_obj_tag(v_a_1474_) == 1)
{
lean_object* v_val_1475_; lean_object* v_sidecarCache_1476_; lean_object* v___x_1477_; 
v_val_1475_ = lean_ctor_get(v_a_1474_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v_a_1474_, 1);
v_sidecarCache_1476_ = lean_ctor_get(v_a_1459_, 7);
lean_inc_ref(v_sidecarCache_1476_);
v___x_1477_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_sidecarCache_1476_, v___f_1472_, v_a_1455_, v_a_1456_, v_a_1457_, v_a_1458_, v_a_1459_, v_a_1460_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1501_; 
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
v_a_1479_ = lean_ctor_get(v___x_1477_, 1);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1481_ = v___x_1477_;
v_isShared_1482_ = v_isSharedCheck_1501_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_inc(v_a_1478_);
lean_dec(v___x_1477_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1501_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___y_1484_; 
if (lean_obj_tag(v_a_1478_) == 1)
{
lean_object* v_val_1488_; lean_object* v_fst_1489_; 
v_val_1488_ = lean_ctor_get(v_a_1478_, 0);
lean_inc(v_val_1488_);
lean_dec_ref_known(v_a_1478_, 1);
v_fst_1489_ = lean_ctor_get(v_val_1488_, 0);
lean_inc(v_fst_1489_);
if (lean_obj_tag(v_fst_1489_) == 1)
{
lean_object* v_snd_1490_; lean_object* v_val_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1500_; 
v_snd_1490_ = lean_ctor_get(v_val_1488_, 1);
lean_inc(v_snd_1490_);
lean_dec(v_val_1488_);
v_val_1491_ = lean_ctor_get(v_fst_1489_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_fst_1489_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1493_ = v_fst_1489_;
v_isShared_1494_ = v_isSharedCheck_1500_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_val_1491_);
lean_dec(v_fst_1489_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1500_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
uint8_t v___x_1495_; 
v___x_1495_ = l_Lean_ModuleUsage_instBEqFileStamp_beq(v_val_1491_, v_val_1475_);
lean_dec(v_val_1475_);
lean_dec(v_val_1491_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; 
lean_del_object(v___x_1493_);
lean_dec(v_snd_1490_);
v___x_1496_ = lean_box(0);
v___y_1484_ = v___x_1496_;
goto v___jp_1483_;
}
else
{
lean_object* v___x_1498_; 
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v_snd_1490_);
v___x_1498_ = v___x_1493_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_snd_1490_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
v___y_1484_ = v___x_1498_;
goto v___jp_1483_;
}
}
}
}
else
{
lean_dec(v_fst_1489_);
lean_dec(v_val_1488_);
lean_del_object(v___x_1481_);
lean_dec(v_val_1475_);
v___y_1463_ = v_a_1479_;
goto v___jp_1462_;
}
}
else
{
lean_del_object(v___x_1481_);
lean_dec(v_a_1478_);
lean_dec(v_val_1475_);
v___y_1463_ = v_a_1479_;
goto v___jp_1462_;
}
v___jp_1483_:
{
lean_object* v___x_1486_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___y_1484_);
v___x_1486_ = v___x_1481_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___y_1484_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_a_1479_);
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
else
{
lean_object* v_a_1502_; lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec(v_val_1475_);
v_a_1502_ = lean_ctor_get(v___x_1477_, 0);
v_a_1503_ = lean_ctor_get(v___x_1477_, 1);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1477_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_inc(v_a_1502_);
lean_dec(v___x_1477_);
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
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1502_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_a_1503_);
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
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
lean_dec(v_a_1474_);
lean_dec_ref(v___f_1472_);
lean_dec_ref(v_a_1455_);
v___x_1511_ = lean_box(0);
v___x_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1511_);
lean_ctor_set(v___x_1512_, 1, v_a_1460_);
return v___x_1512_;
}
}
else
{
lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1526_; 
lean_inc(v_buildTime_1471_);
lean_inc_ref(v_trace_1470_);
lean_inc_ref(v_log_1466_);
lean_dec_ref(v___f_1472_);
lean_dec_ref(v_a_1455_);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_a_1460_);
if (v_isSharedCheck_1526_ == 0)
{
lean_object* v_unused_1527_; lean_object* v_unused_1528_; lean_object* v_unused_1529_; 
v_unused_1527_ = lean_ctor_get(v_a_1460_, 2);
lean_dec(v_unused_1527_);
v_unused_1528_ = lean_ctor_get(v_a_1460_, 1);
lean_dec(v_unused_1528_);
v_unused_1529_ = lean_ctor_get(v_a_1460_, 0);
lean_dec(v_unused_1529_);
v___x_1514_ = v_a_1460_;
v_isShared_1515_ = v_isSharedCheck_1526_;
goto v_resetjp_1513_;
}
else
{
lean_dec(v_a_1460_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1526_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v_a_1516_; lean_object* v___x_1517_; uint8_t v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1523_; 
v_a_1516_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1516_);
lean_dec_ref_known(v___x_1473_, 1);
v___x_1517_ = lean_io_error_to_string(v_a_1516_);
v___x_1518_ = 3;
v___x_1519_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set_uint8(v___x_1519_, sizeof(void*)*1, v___x_1518_);
v___x_1520_ = lean_array_get_size(v_log_1466_);
v___x_1521_ = lean_array_push(v_log_1466_, v___x_1519_);
if (v_isShared_1515_ == 0)
{
lean_ctor_set(v___x_1514_, 0, v___x_1521_);
v___x_1523_ = v___x_1514_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1521_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_trace_1470_);
lean_ctor_set(v_reuseFailAlloc_1525_, 2, v_buildTime_1471_);
lean_ctor_set_uint8(v_reuseFailAlloc_1525_, sizeof(void*)*3, v_action_1467_);
lean_ctor_set_uint8(v_reuseFailAlloc_1525_, sizeof(void*)*3 + 1, v_wantsRebuild_1468_);
lean_ctor_set_uint8(v_reuseFailAlloc_1525_, sizeof(void*)*3 + 2, v_canceled_1469_);
v___x_1523_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1520_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
return v___x_1524_;
}
}
}
v___jp_1462_:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = lean_box(0);
v___x_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
lean_ctor_set(v___x_1465_, 1, v___y_1463_);
return v___x_1465_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f___boxed(lean_object* v_path_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f(v_path_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_);
lean_dec_ref(v_a_1535_);
lean_dec(v_a_1534_);
lean_dec(v_a_1533_);
lean_dec(v_a_1532_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0(lean_object* v_00_u03b2_1539_, lean_object* v_m_1540_, lean_object* v_a_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(v_m_1540_, v_a_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___boxed(lean_object* v_00_u03b2_1543_, lean_object* v_m_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0(v_00_u03b2_1543_, v_m_1544_, v_a_1545_);
lean_dec_ref(v_a_1545_);
lean_dec_ref(v_m_1544_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1547_, lean_object* v_a_1548_, lean_object* v_x_1549_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___redArg(v_a_1548_, v_x_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1551_, lean_object* v_a_1552_, lean_object* v_x_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0_spec__0(v_00_u03b2_1551_, v_a_1552_, v_x_1553_);
lean_dec(v_x_1553_);
lean_dec_ref(v_a_1552_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg(lean_object* v_inst_1562_, lean_object* v_bytes_1563_){
_start:
{
uint8_t v___x_1564_; 
v___x_1564_ = lean_string_validate_utf8(v_bytes_1563_);
if (v___x_1564_ == 0)
{
lean_object* v___x_1565_; 
lean_dec_ref(v_bytes_1563_);
lean_dec_ref(v_inst_1562_);
v___x_1565_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__1));
return v___x_1565_;
}
else
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1566_ = lean_string_from_utf8_unchecked(v_bytes_1563_);
v___x_1567_ = l_Lean_Json_parse(v___x_1566_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_dec_ref(v_inst_1562_);
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1567_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1567_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_a_1576_ = lean_ctor_get(v___x_1567_, 0);
lean_inc_n(v_a_1576_, 2);
lean_dec_ref_known(v___x_1567_, 1);
v___x_1577_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__2));
v___x_1578_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3));
v___x_1579_ = l_Lean_Json_getObjValAs_x3f___redArg(v_a_1576_, v___x_1577_, v___x_1578_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
lean_dec(v_a_1576_);
lean_dec_ref(v_inst_1562_);
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1579_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1579_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
else
{
lean_object* v_a_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v_a_1588_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1579_, 1);
v___x_1589_ = l_Lean_ModuleUsage_usageVersion;
v___x_1590_ = lean_nat_dec_eq(v_a_1588_, v___x_1589_);
lean_dec(v_a_1588_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; 
lean_dec(v_a_1576_);
lean_dec_ref(v_inst_1562_);
v___x_1591_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__4));
return v___x_1591_;
}
else
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_apply_1(v_inst_1562_, v_a_1576_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1600_; 
v_a_1593_ = lean_ctor_get(v___x_1592_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1595_ = v___x_1592_;
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_dec(v___x_1592_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1598_; 
if (v_isShared_1596_ == 0)
{
v___x_1598_ = v___x_1595_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_a_1593_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
else
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1609_; 
v_a_1601_ = lean_ctor_get(v___x_1592_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1603_ = v___x_1592_;
v_isShared_1604_ = v_isSharedCheck_1609_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1592_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1609_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_a_1601_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v___x_1605_);
v___x_1607_ = v___x_1603_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse(lean_object* v_00_u03b1_1610_, lean_object* v_inst_1611_, lean_object* v_bytes_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg(v_inst_1611_, v_bytes_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg(lean_object* v_inst_1615_, lean_object* v_path_1616_, lean_object* v_bytes_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg(v_inst_1615_, v_bytes_1617_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v_log_1622_; uint8_t v_action_1623_; uint8_t v_wantsRebuild_1624_; uint8_t v_canceled_1625_; lean_object* v_trace_1626_; lean_object* v_buildTime_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1642_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v___x_1620_, 1);
v_log_1622_ = lean_ctor_get(v_a_1618_, 0);
v_action_1623_ = lean_ctor_get_uint8(v_a_1618_, sizeof(void*)*3);
v_wantsRebuild_1624_ = lean_ctor_get_uint8(v_a_1618_, sizeof(void*)*3 + 1);
v_canceled_1625_ = lean_ctor_get_uint8(v_a_1618_, sizeof(void*)*3 + 2);
v_trace_1626_ = lean_ctor_get(v_a_1618_, 1);
v_buildTime_1627_ = lean_ctor_get(v_a_1618_, 2);
v_isSharedCheck_1642_ = !lean_is_exclusive(v_a_1618_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1629_ = v_a_1618_;
v_isShared_1630_ = v_isSharedCheck_1642_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_buildTime_1627_);
lean_inc(v_trace_1626_);
lean_inc(v_log_1622_);
lean_dec(v_a_1618_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1642_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; uint8_t v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1638_; 
v___x_1631_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___closed__0));
v___x_1632_ = lean_string_append(v_path_1616_, v___x_1631_);
v___x_1633_ = lean_string_append(v___x_1632_, v_a_1621_);
lean_dec(v_a_1621_);
v___x_1634_ = 2;
v___x_1635_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set_uint8(v___x_1635_, sizeof(void*)*1, v___x_1634_);
v___x_1636_ = lean_array_push(v_log_1622_, v___x_1635_);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 0, v___x_1636_);
v___x_1638_ = v___x_1629_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_trace_1626_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_buildTime_1627_);
lean_ctor_set_uint8(v_reuseFailAlloc_1641_, sizeof(void*)*3, v_action_1623_);
lean_ctor_set_uint8(v_reuseFailAlloc_1641_, sizeof(void*)*3 + 1, v_wantsRebuild_1624_);
lean_ctor_set_uint8(v_reuseFailAlloc_1641_, sizeof(void*)*3 + 2, v_canceled_1625_);
v___x_1638_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = lean_box(0);
v___x_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1639_);
lean_ctor_set(v___x_1640_, 1, v___x_1638_);
return v___x_1640_;
}
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1644_; 
lean_dec_ref(v_path_1616_);
v_a_1643_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1620_, 1);
v___x_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1644_, 0, v_a_1643_);
lean_ctor_set(v___x_1644_, 1, v_a_1618_);
return v___x_1644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___boxed(lean_object* v_inst_1645_, lean_object* v_path_1646_, lean_object* v_bytes_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg(v_inst_1645_, v_path_1646_, v_bytes_1647_, v_a_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar(lean_object* v_00_u03b1_1651_, lean_object* v_inst_1652_, lean_object* v_path_1653_, lean_object* v_bytes_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg(v_inst_1652_, v_path_1653_, v_bytes_1654_, v_a_1660_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___boxed(lean_object* v_00_u03b1_1663_, lean_object* v_inst_1664_, lean_object* v_path_1665_, lean_object* v_bytes_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar(v_00_u03b1_1663_, v_inst_1664_, v_path_1665_, v_bytes_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
lean_dec_ref(v_a_1671_);
lean_dec(v_a_1670_);
lean_dec(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec_ref(v_a_1667_);
return v_res_1674_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1675_; lean_object* v___f_1676_; 
v___x_1675_ = lean_alloc_closure((void*)(l_System_instDecidableEqFilePath___boxed), 2, 0);
v___f_1676_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1676_, 0, v___x_1675_);
return v___f_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0(lean_object* v_inst_1678_, lean_object* v_path_1679_, lean_object* v_fst_1680_, lean_object* v_inst_1681_, lean_object* v_fst_1682_, lean_object* v_snd_1683_, lean_object* v___x_1684_, lean_object* v_entries_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v___f_1724_; lean_object* v___x_1725_; 
v___f_1724_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0);
lean_inc_ref(v_path_1679_);
lean_inc_ref(v___x_1684_);
v___x_1725_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_1724_, v___x_1684_, v_entries_1685_, v_path_1679_);
if (lean_obj_tag(v___x_1725_) == 1)
{
lean_object* v_val_1726_; lean_object* v_snd_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1769_; 
v_val_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_val_1726_);
lean_dec_ref_known(v___x_1725_, 1);
v_snd_1727_ = lean_ctor_get(v_val_1726_, 1);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_val_1726_);
if (v_isSharedCheck_1769_ == 0)
{
lean_object* v_unused_1770_; 
v_unused_1770_ = lean_ctor_get(v_val_1726_, 0);
lean_dec(v_unused_1770_);
v___x_1729_ = v_val_1726_;
v_isShared_1730_ = v_isSharedCheck_1769_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_snd_1727_);
lean_dec(v_val_1726_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1769_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v_fst_1731_; lean_object* v_snd_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1768_; 
v_fst_1731_ = lean_ctor_get(v_snd_1727_, 0);
v_snd_1732_ = lean_ctor_get(v_snd_1727_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_snd_1727_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1734_ = v_snd_1727_;
v_isShared_1735_ = v_isSharedCheck_1768_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_snd_1732_);
lean_inc(v_fst_1731_);
lean_dec(v_snd_1727_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1768_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
uint8_t v___x_1736_; 
v___x_1736_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_fst_1731_, v_fst_1682_);
lean_dec(v_fst_1731_);
if (v___x_1736_ == 0)
{
lean_del_object(v___x_1734_);
lean_dec(v_snd_1732_);
lean_del_object(v___x_1729_);
goto v___jp_1694_;
}
else
{
lean_object* v___x_1737_; 
lean_dec_ref(v_fst_1680_);
lean_dec_ref(v_inst_1678_);
v___x_1737_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_snd_1732_, v_inst_1681_);
lean_dec(v_inst_1681_);
if (lean_obj_tag(v___x_1737_) == 1)
{
lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1738_ = lean_st_ref_take(v___y_1686_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v_fst_1682_);
v___x_1740_ = v___x_1734_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_fst_1682_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v_snd_1732_);
v___x_1740_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1742_; 
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 1, v___x_1740_);
lean_ctor_set(v___x_1729_, 0, v_snd_1683_);
v___x_1742_ = v___x_1729_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_snd_1683_);
lean_ctor_set(v_reuseFailAlloc_1746_, 1, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1743_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_1724_, v___x_1684_, v___x_1738_, v_path_1679_, v___x_1742_);
v___x_1744_ = lean_st_ref_put(v___y_1686_, v___x_1743_);
v___x_1745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1737_);
lean_ctor_set(v___x_1745_, 1, v___y_1692_);
return v___x_1745_;
}
}
}
else
{
lean_object* v_log_1748_; uint8_t v_action_1749_; uint8_t v_wantsRebuild_1750_; uint8_t v_canceled_1751_; lean_object* v_trace_1752_; lean_object* v_buildTime_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1767_; 
lean_dec(v___x_1737_);
lean_del_object(v___x_1734_);
lean_dec(v_snd_1732_);
lean_del_object(v___x_1729_);
lean_dec_ref(v___x_1684_);
lean_dec(v_snd_1683_);
lean_dec_ref(v_fst_1682_);
v_log_1748_ = lean_ctor_get(v___y_1692_, 0);
v_action_1749_ = lean_ctor_get_uint8(v___y_1692_, sizeof(void*)*3);
v_wantsRebuild_1750_ = lean_ctor_get_uint8(v___y_1692_, sizeof(void*)*3 + 1);
v_canceled_1751_ = lean_ctor_get_uint8(v___y_1692_, sizeof(void*)*3 + 2);
v_trace_1752_ = lean_ctor_get(v___y_1692_, 1);
v_buildTime_1753_ = lean_ctor_get(v___y_1692_, 2);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___y_1692_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1755_ = v___y_1692_;
v_isShared_1756_ = v_isSharedCheck_1767_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_buildTime_1753_);
lean_inc(v_trace_1752_);
lean_inc(v_log_1748_);
lean_dec(v___y_1692_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1767_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1757_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1));
v___x_1758_ = lean_string_append(v_path_1679_, v___x_1757_);
v___x_1759_ = 3;
v___x_1760_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1760_, 0, v___x_1758_);
lean_ctor_set_uint8(v___x_1760_, sizeof(void*)*1, v___x_1759_);
v___x_1761_ = lean_array_get_size(v_log_1748_);
v___x_1762_ = lean_array_push(v_log_1748_, v___x_1760_);
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 0, v___x_1762_);
v___x_1764_ = v___x_1755_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v___x_1762_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_trace_1752_);
lean_ctor_set(v_reuseFailAlloc_1766_, 2, v_buildTime_1753_);
lean_ctor_set_uint8(v_reuseFailAlloc_1766_, sizeof(void*)*3, v_action_1749_);
lean_ctor_set_uint8(v_reuseFailAlloc_1766_, sizeof(void*)*3 + 1, v_wantsRebuild_1750_);
lean_ctor_set_uint8(v_reuseFailAlloc_1766_, sizeof(void*)*3 + 2, v_canceled_1751_);
v___x_1764_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1761_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
return v___x_1765_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_1725_);
goto v___jp_1694_;
}
v___jp_1694_:
{
lean_object* v___x_1695_; lean_object* v_a_1696_; 
lean_inc_ref(v_path_1679_);
v___x_1695_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg(v_inst_1678_, v_path_1679_, v_fst_1680_, v___y_1692_);
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
if (lean_obj_tag(v_a_1696_) == 1)
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1712_; 
lean_inc_ref(v_a_1696_);
v_a_1697_ = lean_ctor_get(v___x_1695_, 1);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1712_ == 0)
{
lean_object* v_unused_1713_; 
v_unused_1713_ = lean_ctor_get(v___x_1695_, 0);
lean_dec(v_unused_1713_);
v___x_1699_ = v___x_1695_;
v_isShared_1700_ = v_isSharedCheck_1712_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1695_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1712_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v_val_1701_; lean_object* v___x_1702_; lean_object* v___f_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1710_; 
v_val_1701_ = lean_ctor_get(v_a_1696_, 0);
v___x_1702_ = lean_st_ref_take(v___y_1686_);
v___f_1703_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__0);
lean_inc(v_val_1701_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v_inst_1681_);
lean_ctor_set(v___x_1704_, 1, v_val_1701_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v_fst_1682_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1706_, 0, v_snd_1683_);
lean_ctor_set(v___x_1706_, 1, v___x_1705_);
v___x_1707_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_1703_, v___x_1684_, v___x_1702_, v_path_1679_, v___x_1706_);
v___x_1708_ = lean_st_ref_put(v___y_1686_, v___x_1707_);
if (v_isShared_1700_ == 0)
{
v___x_1710_ = v___x_1699_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1696_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_a_1697_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1722_; 
lean_dec_ref(v___x_1684_);
lean_dec(v_snd_1683_);
lean_dec_ref(v_fst_1682_);
lean_dec(v_inst_1681_);
lean_dec_ref(v_path_1679_);
v_a_1714_ = lean_ctor_get(v___x_1695_, 1);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1722_ == 0)
{
lean_object* v_unused_1723_; 
v_unused_1723_ = lean_ctor_get(v___x_1695_, 0);
lean_dec(v_unused_1723_);
v___x_1716_ = v___x_1695_;
v_isShared_1717_ = v_isSharedCheck_1722_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1695_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1722_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1718_ = lean_box(0);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1718_);
v___x_1720_ = v___x_1716_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1721_, 1, v_a_1714_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___boxed(lean_object* v_inst_1771_, lean_object* v_path_1772_, lean_object* v_fst_1773_, lean_object* v_inst_1774_, lean_object* v_fst_1775_, lean_object* v_snd_1776_, lean_object* v___x_1777_, lean_object* v_entries_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0(v_inst_1771_, v_path_1772_, v_fst_1773_, v_inst_1774_, v_fst_1775_, v_snd_1776_, v___x_1777_, v_entries_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v_entries_1778_);
return v_res_1787_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__4(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___f_1793_; 
v___x_1792_ = l_instMonadBaseIO;
v___f_1793_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadLiftOfMonad___redArg___lam__1), 4, 1);
lean_closure_set(v___f_1793_, 0, v___x_1792_);
return v___f_1793_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__5(void){
_start:
{
lean_object* v___f_1794_; lean_object* v___f_1795_; 
v___f_1794_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__4, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__4_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__4);
v___f_1795_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftTOfMonadLift__lake___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1795_, 0, v___f_1794_);
return v___f_1795_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__6(void){
_start:
{
lean_object* v___f_1796_; lean_object* v___f_1797_; lean_object* v___f_1798_; 
v___f_1796_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2));
v___f_1797_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__5, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__5_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__5);
v___f_1798_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1798_, 0, v___f_1797_);
lean_closure_set(v___f_1798_, 1, v___f_1796_);
return v___f_1798_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__7(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___f_1800_; lean_object* v___f_1801_; 
v___x_1799_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__3));
v___f_1800_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__6, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__6_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__6);
v___f_1801_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1801_, 0, v___f_1800_);
lean_closure_set(v___f_1801_, 1, v___x_1799_);
return v___f_1801_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__8(void){
_start:
{
lean_object* v___f_1802_; lean_object* v___f_1803_; lean_object* v___f_1804_; 
v___f_1802_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2));
v___f_1803_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__7, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__7_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__7);
v___f_1804_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1804_, 0, v___f_1803_);
lean_closure_set(v___f_1804_, 1, v___f_1802_);
return v___f_1804_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__9(void){
_start:
{
lean_object* v___f_1805_; lean_object* v___f_1806_; lean_object* v___f_1807_; 
v___f_1805_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__2));
v___f_1806_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__8, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__8_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__8);
v___f_1807_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1807_, 0, v___f_1806_);
lean_closure_set(v___f_1807_, 1, v___f_1805_);
return v___f_1807_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__10(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___f_1809_; lean_object* v___f_1810_; 
v___x_1808_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__1));
v___f_1809_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__9, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__9_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__9);
v___f_1810_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1810_, 0, v___f_1809_);
lean_closure_set(v___f_1810_, 1, v___x_1808_);
return v___f_1810_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__11(void){
_start:
{
lean_object* v___x_1811_; lean_object* v___f_1812_; lean_object* v___f_1813_; 
v___x_1811_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__0));
v___f_1812_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__10, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__10_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__10);
v___f_1813_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1813_, 0, v___f_1812_);
lean_closure_set(v___f_1813_, 1, v___x_1811_);
return v___f_1813_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__12(void){
_start:
{
lean_object* v___x_1814_; lean_object* v___f_1815_; 
v___x_1814_ = l_instMonadBaseIO;
v___f_1815_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonadFinallyOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1815_, 0, v___x_1814_);
return v___f_1815_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__13(void){
_start:
{
lean_object* v___f_1816_; lean_object* v___f_1817_; 
v___f_1816_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__12, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__12_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__12);
v___f_1817_ = lean_alloc_closure((void*)(l_ReaderT_tryFinally___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1817_, 0, v___f_1816_);
return v___f_1817_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__14(void){
_start:
{
lean_object* v___f_1818_; lean_object* v___x_1819_; 
v___f_1818_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__13, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__13_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__13);
v___x_1819_ = lean_alloc_closure((void*)(l_instMonadFinallyStateRefT_x27___aux__1___boxed), 9, 4);
lean_closure_set(v___x_1819_, 0, lean_box(0));
lean_closure_set(v___x_1819_, 1, lean_box(0));
lean_closure_set(v___x_1819_, 2, lean_box(0));
lean_closure_set(v___x_1819_, 3, v___f_1818_);
return v___x_1819_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__15(void){
_start:
{
lean_object* v___x_1820_; lean_object* v___f_1821_; 
v___x_1820_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__14, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__14_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__14);
v___f_1821_ = lean_alloc_closure((void*)(l_ReaderT_tryFinally___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1821_, 0, v___x_1820_);
return v___f_1821_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__16(void){
_start:
{
lean_object* v___f_1822_; lean_object* v___f_1823_; 
v___f_1822_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__15, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__15_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__15);
v___f_1823_ = lean_alloc_closure((void*)(l_ReaderT_tryFinally___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1823_, 0, v___f_1822_);
return v___f_1823_;
}
}
static lean_object* _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__17(void){
_start:
{
lean_object* v___f_1824_; lean_object* v___f_1825_; 
v___f_1824_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__16, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__16_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__16);
v___f_1825_ = lean_alloc_closure((void*)(l_Lake_EquipT_instMonadFinallyOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1825_, 0, v___f_1824_);
return v___f_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg(lean_object* v_inst_1858_, lean_object* v_inst_1859_, lean_object* v_path_1860_, lean_object* v_expected_x3f_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v___x_1869_; lean_object* v_toApplicative_1870_; lean_object* v_toBind_1871_; lean_object* v_toFunctor_1872_; lean_object* v_toPure_1873_; lean_object* v___f_1874_; lean_object* v___f_1875_; lean_object* v___f_1876_; lean_object* v___f_1877_; lean_object* v___x_1878_; lean_object* v___f_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___f_1887_; lean_object* v___f_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1869_ = l_instMonadBaseIO;
v_toApplicative_1870_ = lean_ctor_get(v___x_1869_, 0);
v_toBind_1871_ = lean_ctor_get(v___x_1869_, 1);
v_toFunctor_1872_ = lean_ctor_get(v_toApplicative_1870_, 0);
v_toPure_1873_ = lean_ctor_get(v_toApplicative_1870_, 1);
lean_inc_n(v_toBind_1871_, 3);
lean_inc_n(v_toPure_1873_, 5);
v___f_1874_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1874_, 0, v_toPure_1873_);
lean_closure_set(v___f_1874_, 1, v_toBind_1871_);
v___f_1875_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1875_, 0, v_toPure_1873_);
lean_closure_set(v___f_1875_, 1, v_toBind_1871_);
lean_inc_ref(v___f_1874_);
v___f_1876_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1876_, 0, v_toPure_1873_);
lean_closure_set(v___f_1876_, 1, v___f_1874_);
lean_inc_ref_n(v_toFunctor_1872_, 2);
v___f_1877_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1877_, 0, v_toFunctor_1872_);
lean_closure_set(v___f_1877_, 1, v_toPure_1873_);
lean_closure_set(v___f_1877_, 2, v_toBind_1871_);
v___x_1878_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1872_);
v___f_1879_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1879_, 0, v_toPure_1873_);
v___x_1880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1878_);
lean_ctor_set(v___x_1880_, 1, v___f_1879_);
lean_ctor_set(v___x_1880_, 2, v___f_1877_);
lean_ctor_set(v___x_1880_, 3, v___f_1876_);
lean_ctor_set(v___x_1880_, 4, v___f_1875_);
v___x_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
lean_ctor_set(v___x_1881_, 1, v___f_1874_);
v___x_1882_ = l_ReaderT_instMonad___redArg(v___x_1881_);
v___x_1883_ = l_StateRefT_x27_instMonad___redArg(v___x_1882_);
v___x_1884_ = l_ReaderT_instMonad___redArg(v___x_1883_);
v___x_1885_ = l_ReaderT_instMonad___redArg(v___x_1884_);
v___x_1886_ = l_Lake_EquipT_instMonad___redArg(v___x_1885_);
v___f_1887_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__11, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__11_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__11);
v___f_1888_ = lean_obj_once(&l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__17, &l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__17_once, _init_l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__17);
v___x_1889_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__30));
lean_inc_ref(v_a_1862_);
lean_inc_ref(v_path_1860_);
v___x_1890_ = l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f(v_path_1860_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
if (lean_obj_tag(v_a_1891_) == 1)
{
lean_object* v_val_1892_; lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1936_; 
lean_dec_ref(v___x_1886_);
lean_dec_ref(v_a_1862_);
lean_dec_ref(v_inst_1858_);
v_val_1892_ = lean_ctor_get(v_a_1891_, 0);
lean_inc(v_val_1892_);
v_a_1893_ = lean_ctor_get(v___x_1890_, 1);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1936_ == 0)
{
lean_object* v_unused_1937_; 
v_unused_1937_ = lean_ctor_get(v___x_1890_, 0);
lean_dec(v_unused_1937_);
v___x_1895_ = v___x_1890_;
v_isShared_1896_ = v_isSharedCheck_1936_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1890_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1936_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v_fst_1897_; lean_object* v_snd_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1935_; 
v_fst_1897_ = lean_ctor_get(v_val_1892_, 0);
v_snd_1898_ = lean_ctor_get(v_val_1892_, 1);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_val_1892_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1900_ = v_val_1892_;
v_isShared_1901_ = v_isSharedCheck_1935_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_snd_1898_);
lean_inc(v_fst_1897_);
lean_dec(v_val_1892_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1935_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
if (lean_obj_tag(v_expected_x3f_1861_) == 0)
{
lean_del_object(v___x_1900_);
lean_dec(v_fst_1897_);
goto v___jp_1902_;
}
else
{
lean_object* v_val_1929_; uint8_t v___x_1930_; 
v_val_1929_ = lean_ctor_get(v_expected_x3f_1861_, 0);
v___x_1930_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_val_1929_, v_fst_1897_);
lean_dec(v_fst_1897_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; lean_object* v___x_1933_; 
lean_dec(v_snd_1898_);
lean_del_object(v___x_1895_);
lean_dec_ref(v_path_1860_);
lean_dec(v_inst_1859_);
v___x_1931_ = lean_box(0);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 1, v_a_1893_);
lean_ctor_set(v___x_1900_, 0, v___x_1931_);
v___x_1933_ = v___x_1900_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1931_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v_a_1893_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
else
{
lean_del_object(v___x_1900_);
goto v___jp_1902_;
}
}
v___jp_1902_:
{
lean_object* v___x_1903_; 
v___x_1903_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_snd_1898_, v_inst_1859_);
lean_dec(v_inst_1859_);
lean_dec(v_snd_1898_);
if (lean_obj_tag(v___x_1903_) == 1)
{
lean_object* v___x_1905_; 
lean_dec_ref(v_path_1860_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___x_1903_);
v___x_1905_ = v___x_1895_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_a_1893_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
else
{
lean_object* v_log_1907_; uint8_t v_action_1908_; uint8_t v_wantsRebuild_1909_; uint8_t v_canceled_1910_; lean_object* v_trace_1911_; lean_object* v_buildTime_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1928_; 
lean_dec(v___x_1903_);
v_log_1907_ = lean_ctor_get(v_a_1893_, 0);
v_action_1908_ = lean_ctor_get_uint8(v_a_1893_, sizeof(void*)*3);
v_wantsRebuild_1909_ = lean_ctor_get_uint8(v_a_1893_, sizeof(void*)*3 + 1);
v_canceled_1910_ = lean_ctor_get_uint8(v_a_1893_, sizeof(void*)*3 + 2);
v_trace_1911_ = lean_ctor_get(v_a_1893_, 1);
v_buildTime_1912_ = lean_ctor_get(v_a_1893_, 2);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_a_1893_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1914_ = v_a_1893_;
v_isShared_1915_ = v_isSharedCheck_1928_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_buildTime_1912_);
lean_inc(v_trace_1911_);
lean_inc(v_log_1907_);
lean_dec(v_a_1893_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1928_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; uint8_t v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1923_; 
v___x_1916_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1));
v___x_1917_ = lean_string_append(v_path_1860_, v___x_1916_);
v___x_1918_ = 3;
v___x_1919_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1919_, 0, v___x_1917_);
lean_ctor_set_uint8(v___x_1919_, sizeof(void*)*1, v___x_1918_);
v___x_1920_ = lean_array_get_size(v_log_1907_);
v___x_1921_ = lean_array_push(v_log_1907_, v___x_1919_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 0, v___x_1921_);
v___x_1923_ = v___x_1914_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1921_);
lean_ctor_set(v_reuseFailAlloc_1927_, 1, v_trace_1911_);
lean_ctor_set(v_reuseFailAlloc_1927_, 2, v_buildTime_1912_);
lean_ctor_set_uint8(v_reuseFailAlloc_1927_, sizeof(void*)*3, v_action_1908_);
lean_ctor_set_uint8(v_reuseFailAlloc_1927_, sizeof(void*)*3 + 1, v_wantsRebuild_1909_);
lean_ctor_set_uint8(v_reuseFailAlloc_1927_, sizeof(void*)*3 + 2, v_canceled_1910_);
v___x_1923_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
lean_object* v___x_1925_; 
if (v_isShared_1896_ == 0)
{
lean_ctor_set_tag(v___x_1895_, 1);
lean_ctor_set(v___x_1895_, 1, v___x_1923_);
lean_ctor_set(v___x_1895_, 0, v___x_1920_);
v___x_1925_ = v___x_1895_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1920_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
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
lean_object* v_a_1938_; lean_object* v___x_1939_; 
v_a_1938_ = lean_ctor_get(v___x_1890_, 1);
lean_inc(v_a_1938_);
lean_dec_ref_known(v___x_1890_, 2);
lean_inc_ref(v_path_1860_);
v___x_1939_ = l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(v_path_1860_, v_expected_x3f_1861_, v_a_1938_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
if (lean_obj_tag(v_a_1940_) == 1)
{
lean_object* v_val_1941_; lean_object* v_snd_1942_; lean_object* v_a_1943_; lean_object* v_fst_1944_; lean_object* v_fst_1945_; lean_object* v_snd_1946_; lean_object* v_sidecarCache_1947_; lean_object* v___f_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_23737__overap_1951_; lean_object* v___x_1952_; 
v_val_1941_ = lean_ctor_get(v_a_1940_, 0);
lean_inc(v_val_1941_);
v_snd_1942_ = lean_ctor_get(v_val_1941_, 1);
lean_inc(v_snd_1942_);
v_a_1943_ = lean_ctor_get(v___x_1939_, 1);
lean_inc(v_a_1943_);
lean_dec_ref_known(v___x_1939_, 2);
v_fst_1944_ = lean_ctor_get(v_val_1941_, 0);
lean_inc(v_fst_1944_);
lean_dec(v_val_1941_);
v_fst_1945_ = lean_ctor_get(v_snd_1942_, 0);
lean_inc(v_fst_1945_);
v_snd_1946_ = lean_ctor_get(v_snd_1942_, 1);
lean_inc(v_snd_1946_);
lean_dec(v_snd_1942_);
v_sidecarCache_1947_ = lean_ctor_get(v_a_1866_, 7);
v___f_1948_ = lean_alloc_closure((void*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___boxed), 16, 7);
lean_closure_set(v___f_1948_, 0, v_inst_1858_);
lean_closure_set(v___f_1948_, 1, v_path_1860_);
lean_closure_set(v___f_1948_, 2, v_fst_1944_);
lean_closure_set(v___f_1948_, 3, v_inst_1859_);
lean_closure_set(v___f_1948_, 4, v_fst_1945_);
lean_closure_set(v___f_1948_, 5, v_snd_1946_);
lean_closure_set(v___f_1948_, 6, v___x_1889_);
v___x_1949_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___closed__31));
lean_inc_ref(v___x_1886_);
v___x_1950_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_1950_, 0, lean_box(0));
lean_closure_set(v___x_1950_, 1, lean_box(0));
lean_closure_set(v___x_1950_, 2, v___x_1886_);
lean_closure_set(v___x_1950_, 3, lean_box(0));
lean_closure_set(v___x_1950_, 4, lean_box(0));
lean_closure_set(v___x_1950_, 5, v___x_1949_);
lean_closure_set(v___x_1950_, 6, v___f_1948_);
lean_inc_ref(v_sidecarCache_1947_);
v___x_23737__overap_1951_ = l_Std_Mutex_atomically___redArg(v___x_1886_, v___f_1887_, v___f_1888_, v_sidecarCache_1947_, v___x_1950_);
lean_inc_ref(v_a_1866_);
lean_inc(v_a_1865_);
lean_inc(v_a_1864_);
lean_inc(v_a_1863_);
v___x_1952_ = lean_apply_7(v___x_23737__overap_1951_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1943_, lean_box(0));
return v___x_1952_;
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1961_; 
lean_dec_ref(v___x_1886_);
lean_dec_ref(v_a_1862_);
lean_dec_ref(v_path_1860_);
lean_dec(v_inst_1859_);
lean_dec_ref(v_inst_1858_);
v_a_1953_ = lean_ctor_get(v___x_1939_, 1);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1961_ == 0)
{
lean_object* v_unused_1962_; 
v_unused_1962_ = lean_ctor_get(v___x_1939_, 0);
lean_dec(v_unused_1962_);
v___x_1955_ = v___x_1939_;
v_isShared_1956_ = v_isSharedCheck_1961_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1939_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1961_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1957_ = lean_box(0);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1957_);
v___x_1959_ = v___x_1955_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v___x_1957_);
lean_ctor_set(v_reuseFailAlloc_1960_, 1, v_a_1953_);
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
else
{
lean_object* v_a_1963_; lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
lean_dec_ref(v___x_1886_);
lean_dec_ref(v_a_1862_);
lean_dec_ref(v_path_1860_);
lean_dec(v_inst_1859_);
lean_dec_ref(v_inst_1858_);
v_a_1963_ = lean_ctor_get(v___x_1939_, 0);
v_a_1964_ = lean_ctor_get(v___x_1939_, 1);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1939_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_inc(v_a_1963_);
lean_dec(v___x_1939_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1963_);
lean_ctor_set(v_reuseFailAlloc_1970_, 1, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
}
else
{
lean_object* v_a_1972_; lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
lean_dec_ref(v___x_1886_);
lean_dec_ref(v_a_1862_);
lean_dec_ref(v_path_1860_);
lean_dec(v_inst_1859_);
lean_dec_ref(v_inst_1858_);
v_a_1972_ = lean_ctor_get(v___x_1890_, 0);
v_a_1973_ = lean_ctor_get(v___x_1890_, 1);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1890_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_inc(v_a_1972_);
lean_dec(v___x_1890_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1972_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___boxed(lean_object* v_inst_1981_, lean_object* v_inst_1982_, lean_object* v_path_1983_, lean_object* v_expected_x3f_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg(v_inst_1981_, v_inst_1982_, v_path_1983_, v_expected_x3f_1984_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_);
lean_dec_ref(v_a_1989_);
lean_dec(v_a_1988_);
lean_dec(v_a_1987_);
lean_dec(v_a_1986_);
lean_dec(v_expected_x3f_1984_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar(lean_object* v_00_u03b1_1993_, lean_object* v_inst_1994_, lean_object* v_inst_1995_, lean_object* v_path_1996_, lean_object* v_expected_x3f_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v___x_2005_; 
v___x_2005_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg(v_inst_1994_, v_inst_1995_, v_path_1996_, v_expected_x3f_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___boxed(lean_object* v_00_u03b1_2006_, lean_object* v_inst_2007_, lean_object* v_inst_2008_, lean_object* v_path_2009_, lean_object* v_expected_x3f_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar(v_00_u03b1_2006_, v_inst_2007_, v_inst_2008_, v_path_2009_, v_expected_x3f_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
lean_dec_ref(v_a_2015_);
lean_dec(v_a_2014_);
lean_dec(v_a_2013_);
lean_dec(v_a_2012_);
lean_dec(v_expected_x3f_2010_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17_spec__25___redArg(lean_object* v_x_2019_, lean_object* v_x_2020_){
_start:
{
if (lean_obj_tag(v_x_2020_) == 0)
{
return v_x_2019_;
}
else
{
lean_object* v_key_2021_; lean_object* v_value_2022_; lean_object* v_tail_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2046_; 
v_key_2021_ = lean_ctor_get(v_x_2020_, 0);
v_value_2022_ = lean_ctor_get(v_x_2020_, 1);
v_tail_2023_ = lean_ctor_get(v_x_2020_, 2);
v_isSharedCheck_2046_ = !lean_is_exclusive(v_x_2020_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2025_ = v_x_2020_;
v_isShared_2026_ = v_isSharedCheck_2046_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_tail_2023_);
lean_inc(v_value_2022_);
lean_inc(v_key_2021_);
lean_dec(v_x_2020_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2046_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2027_; uint64_t v___x_2028_; uint64_t v___x_2029_; uint64_t v___x_2030_; uint64_t v_fold_2031_; uint64_t v___x_2032_; uint64_t v___x_2033_; uint64_t v___x_2034_; size_t v___x_2035_; size_t v___x_2036_; size_t v___x_2037_; size_t v___x_2038_; size_t v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2042_; 
v___x_2027_ = lean_array_get_size(v_x_2019_);
v___x_2028_ = l_System_instHashableFilePath_hash(v_key_2021_);
v___x_2029_ = 32ULL;
v___x_2030_ = lean_uint64_shift_right(v___x_2028_, v___x_2029_);
v_fold_2031_ = lean_uint64_xor(v___x_2028_, v___x_2030_);
v___x_2032_ = 16ULL;
v___x_2033_ = lean_uint64_shift_right(v_fold_2031_, v___x_2032_);
v___x_2034_ = lean_uint64_xor(v_fold_2031_, v___x_2033_);
v___x_2035_ = lean_uint64_to_usize(v___x_2034_);
v___x_2036_ = lean_usize_of_nat(v___x_2027_);
v___x_2037_ = ((size_t)1ULL);
v___x_2038_ = lean_usize_sub(v___x_2036_, v___x_2037_);
v___x_2039_ = lean_usize_land(v___x_2035_, v___x_2038_);
v___x_2040_ = lean_array_uget_borrowed(v_x_2019_, v___x_2039_);
lean_inc(v___x_2040_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 2, v___x_2040_);
v___x_2042_ = v___x_2025_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_key_2021_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v_value_2022_);
lean_ctor_set(v_reuseFailAlloc_2045_, 2, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_array_uset(v_x_2019_, v___x_2039_, v___x_2042_);
v_x_2019_ = v___x_2043_;
v_x_2020_ = v_tail_2023_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17___redArg(lean_object* v_i_2047_, lean_object* v_source_2048_, lean_object* v_target_2049_){
_start:
{
lean_object* v___x_2050_; uint8_t v___x_2051_; 
v___x_2050_ = lean_array_get_size(v_source_2048_);
v___x_2051_ = lean_nat_dec_lt(v_i_2047_, v___x_2050_);
if (v___x_2051_ == 0)
{
lean_dec_ref(v_source_2048_);
lean_dec(v_i_2047_);
return v_target_2049_;
}
else
{
lean_object* v_es_2052_; lean_object* v___x_2053_; lean_object* v_source_2054_; lean_object* v_target_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v_es_2052_ = lean_array_fget(v_source_2048_, v_i_2047_);
v___x_2053_ = lean_box(0);
v_source_2054_ = lean_array_fset(v_source_2048_, v_i_2047_, v___x_2053_);
v_target_2055_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17_spec__25___redArg(v_target_2049_, v_es_2052_);
v___x_2056_ = lean_unsigned_to_nat(1u);
v___x_2057_ = lean_nat_add(v_i_2047_, v___x_2056_);
lean_dec(v_i_2047_);
v_i_2047_ = v___x_2057_;
v_source_2048_ = v_source_2054_;
v_target_2049_ = v_target_2055_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3___redArg(lean_object* v_data_2059_){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v_nbuckets_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2060_ = lean_array_get_size(v_data_2059_);
v___x_2061_ = lean_unsigned_to_nat(2u);
v_nbuckets_2062_ = lean_nat_mul(v___x_2060_, v___x_2061_);
v___x_2063_ = lean_unsigned_to_nat(0u);
v___x_2064_ = lean_box(0);
v___x_2065_ = lean_mk_array(v_nbuckets_2062_, v___x_2064_);
v___x_2066_ = lean_array_propagate_mark(v_data_2059_, v___x_2065_);
v___x_2067_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17___redArg(v___x_2063_, v_data_2059_, v___x_2066_);
return v___x_2067_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___redArg(lean_object* v_a_2068_, lean_object* v_x_2069_){
_start:
{
if (lean_obj_tag(v_x_2069_) == 0)
{
uint8_t v___x_2070_; 
v___x_2070_ = 0;
return v___x_2070_;
}
else
{
lean_object* v_key_2071_; lean_object* v_tail_2072_; uint8_t v___x_2073_; 
v_key_2071_ = lean_ctor_get(v_x_2069_, 0);
v_tail_2072_ = lean_ctor_get(v_x_2069_, 2);
v___x_2073_ = lean_string_dec_eq(v_key_2071_, v_a_2068_);
if (v___x_2073_ == 0)
{
v_x_2069_ = v_tail_2072_;
goto _start;
}
else
{
return v___x_2073_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___redArg___boxed(lean_object* v_a_2075_, lean_object* v_x_2076_){
_start:
{
uint8_t v_res_2077_; lean_object* v_r_2078_; 
v_res_2077_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___redArg(v_a_2075_, v_x_2076_);
lean_dec(v_x_2076_);
lean_dec_ref(v_a_2075_);
v_r_2078_ = lean_box(v_res_2077_);
return v_r_2078_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__4___redArg(lean_object* v_a_2079_, lean_object* v_b_2080_, lean_object* v_x_2081_){
_start:
{
if (lean_obj_tag(v_x_2081_) == 0)
{
lean_dec(v_b_2080_);
lean_dec_ref(v_a_2079_);
return v_x_2081_;
}
else
{
lean_object* v_key_2082_; lean_object* v_value_2083_; lean_object* v_tail_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2096_; 
v_key_2082_ = lean_ctor_get(v_x_2081_, 0);
v_value_2083_ = lean_ctor_get(v_x_2081_, 1);
v_tail_2084_ = lean_ctor_get(v_x_2081_, 2);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_x_2081_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2086_ = v_x_2081_;
v_isShared_2087_ = v_isSharedCheck_2096_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_tail_2084_);
lean_inc(v_value_2083_);
lean_inc(v_key_2082_);
lean_dec(v_x_2081_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2096_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_string_dec_eq(v_key_2082_, v_a_2079_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; lean_object* v___x_2091_; 
v___x_2089_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__4___redArg(v_a_2079_, v_b_2080_, v_tail_2084_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 2, v___x_2089_);
v___x_2091_ = v___x_2086_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_key_2082_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v_value_2083_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
else
{
lean_object* v___x_2094_; 
lean_dec(v_value_2083_);
lean_dec(v_key_2082_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 1, v_b_2080_);
lean_ctor_set(v___x_2086_, 0, v_a_2079_);
v___x_2094_ = v___x_2086_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2079_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_b_2080_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v_tail_2084_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(lean_object* v_m_2097_, lean_object* v_a_2098_, lean_object* v_b_2099_){
_start:
{
lean_object* v_size_2100_; lean_object* v_buckets_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2144_; 
v_size_2100_ = lean_ctor_get(v_m_2097_, 0);
v_buckets_2101_ = lean_ctor_get(v_m_2097_, 1);
v_isSharedCheck_2144_ = !lean_is_exclusive(v_m_2097_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2103_ = v_m_2097_;
v_isShared_2104_ = v_isSharedCheck_2144_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_buckets_2101_);
lean_inc(v_size_2100_);
lean_dec(v_m_2097_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2144_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; uint64_t v___x_2106_; uint64_t v___x_2107_; uint64_t v___x_2108_; uint64_t v_fold_2109_; uint64_t v___x_2110_; uint64_t v___x_2111_; uint64_t v___x_2112_; size_t v___x_2113_; size_t v___x_2114_; size_t v___x_2115_; size_t v___x_2116_; size_t v___x_2117_; lean_object* v_bkt_2118_; uint8_t v___x_2119_; 
v___x_2105_ = lean_array_get_size(v_buckets_2101_);
v___x_2106_ = l_System_instHashableFilePath_hash(v_a_2098_);
v___x_2107_ = 32ULL;
v___x_2108_ = lean_uint64_shift_right(v___x_2106_, v___x_2107_);
v_fold_2109_ = lean_uint64_xor(v___x_2106_, v___x_2108_);
v___x_2110_ = 16ULL;
v___x_2111_ = lean_uint64_shift_right(v_fold_2109_, v___x_2110_);
v___x_2112_ = lean_uint64_xor(v_fold_2109_, v___x_2111_);
v___x_2113_ = lean_uint64_to_usize(v___x_2112_);
v___x_2114_ = lean_usize_of_nat(v___x_2105_);
v___x_2115_ = ((size_t)1ULL);
v___x_2116_ = lean_usize_sub(v___x_2114_, v___x_2115_);
v___x_2117_ = lean_usize_land(v___x_2113_, v___x_2116_);
v_bkt_2118_ = lean_array_uget_borrowed(v_buckets_2101_, v___x_2117_);
v___x_2119_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___redArg(v_a_2098_, v_bkt_2118_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; lean_object* v_size_x27_2121_; lean_object* v___x_2122_; lean_object* v_buckets_x27_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2120_ = lean_unsigned_to_nat(1u);
v_size_x27_2121_ = lean_nat_add(v_size_2100_, v___x_2120_);
lean_dec(v_size_2100_);
lean_inc(v_bkt_2118_);
v___x_2122_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2122_, 0, v_a_2098_);
lean_ctor_set(v___x_2122_, 1, v_b_2099_);
lean_ctor_set(v___x_2122_, 2, v_bkt_2118_);
v_buckets_x27_2123_ = lean_array_uset(v_buckets_2101_, v___x_2117_, v___x_2122_);
v___x_2124_ = lean_unsigned_to_nat(4u);
v___x_2125_ = lean_nat_mul(v_size_x27_2121_, v___x_2124_);
v___x_2126_ = lean_unsigned_to_nat(3u);
v___x_2127_ = lean_nat_div(v___x_2125_, v___x_2126_);
lean_dec(v___x_2125_);
v___x_2128_ = lean_array_get_size(v_buckets_x27_2123_);
v___x_2129_ = lean_nat_dec_le(v___x_2127_, v___x_2128_);
lean_dec(v___x_2127_);
if (v___x_2129_ == 0)
{
lean_object* v_val_2130_; lean_object* v___x_2132_; 
v_val_2130_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3___redArg(v_buckets_x27_2123_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v_val_2130_);
lean_ctor_set(v___x_2103_, 0, v_size_x27_2121_);
v___x_2132_ = v___x_2103_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_size_x27_2121_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v_val_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
else
{
lean_object* v___x_2135_; 
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v_buckets_x27_2123_);
lean_ctor_set(v___x_2103_, 0, v_size_x27_2121_);
v___x_2135_ = v___x_2103_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_size_x27_2121_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v_buckets_x27_2123_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
else
{
lean_object* v___x_2137_; lean_object* v_buckets_x27_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2142_; 
lean_inc(v_bkt_2118_);
v___x_2137_ = lean_box(0);
v_buckets_x27_2138_ = lean_array_uset(v_buckets_2101_, v___x_2117_, v___x_2137_);
v___x_2139_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__4___redArg(v_a_2098_, v_b_2099_, v_bkt_2118_);
v___x_2140_ = lean_array_uset(v_buckets_x27_2138_, v___x_2117_, v___x_2139_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v___x_2140_);
v___x_2142_ = v___x_2103_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_size_2100_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___lam__0(lean_object* v_val_2145_, lean_object* v___x_2146_, lean_object* v_fst_2147_, lean_object* v_snd_2148_, lean_object* v_path_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2158_ = lean_st_ref_take(v___y_2150_);
v___x_2159_ = lean_box(0);
v___x_2160_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_toImport(v_val_2145_);
v___x_2161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2146_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v___x_2162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2162_, 0, v_fst_2147_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2163_, 0, v_snd_2148_);
lean_ctor_set(v___x_2163_, 1, v___x_2162_);
v___x_2164_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v___x_2158_, v_path_2149_, v___x_2163_);
v___x_2165_ = lean_st_ref_put(v___y_2150_, v___x_2164_);
v___x_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2159_);
lean_ctor_set(v___x_2166_, 1, v___y_2156_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___lam__0___boxed(lean_object* v_val_2167_, lean_object* v___x_2168_, lean_object* v_fst_2169_, lean_object* v_snd_2170_, lean_object* v_path_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___lam__0(v_val_2167_, v___x_2168_, v_fst_2169_, v_snd_2170_, v_path_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_);
lean_dec_ref(v___y_2177_);
lean_dec(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec(v___y_2172_);
lean_dec_ref(v_val_2167_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13_spec__21(lean_object* v_as_2181_, size_t v_i_2182_, size_t v_stop_2183_, lean_object* v_b_2184_){
_start:
{
uint8_t v___x_2185_; 
v___x_2185_ = lean_usize_dec_eq(v_i_2182_, v_stop_2183_);
if (v___x_2185_ == 0)
{
lean_object* v___x_2186_; lean_object* v_fst_2187_; lean_object* v_snd_2188_; lean_object* v___x_2189_; size_t v___x_2190_; size_t v___x_2191_; 
v___x_2186_ = lean_array_uget_borrowed(v_as_2181_, v_i_2182_);
v_fst_2187_ = lean_ctor_get(v___x_2186_, 0);
v_snd_2188_ = lean_ctor_get(v___x_2186_, 1);
lean_inc(v_snd_2188_);
lean_inc(v_fst_2187_);
v___x_2189_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2187_, v_snd_2188_, v_b_2184_);
v___x_2190_ = ((size_t)1ULL);
v___x_2191_ = lean_usize_add(v_i_2182_, v___x_2190_);
v_i_2182_ = v___x_2191_;
v_b_2184_ = v___x_2189_;
goto _start;
}
else
{
return v_b_2184_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13_spec__21___boxed(lean_object* v_as_2193_, lean_object* v_i_2194_, lean_object* v_stop_2195_, lean_object* v_b_2196_){
_start:
{
size_t v_i_boxed_2197_; size_t v_stop_boxed_2198_; lean_object* v_res_2199_; 
v_i_boxed_2197_ = lean_unbox_usize(v_i_2194_);
lean_dec(v_i_2194_);
v_stop_boxed_2198_ = lean_unbox_usize(v_stop_2195_);
lean_dec(v_stop_2195_);
v_res_2199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13_spec__21(v_as_2193_, v_i_boxed_2197_, v_stop_boxed_2198_, v_b_2196_);
lean_dec_ref(v_as_2193_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13(lean_object* v_as_2200_, size_t v_i_2201_, size_t v_stop_2202_, lean_object* v_b_2203_){
_start:
{
uint8_t v___x_2204_; 
v___x_2204_ = lean_usize_dec_eq(v_i_2201_, v_stop_2202_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; lean_object* v_fst_2206_; lean_object* v_snd_2207_; lean_object* v___x_2208_; size_t v___x_2209_; size_t v___x_2210_; lean_object* v___x_2211_; 
v___x_2205_ = lean_array_uget_borrowed(v_as_2200_, v_i_2201_);
v_fst_2206_ = lean_ctor_get(v___x_2205_, 0);
v_snd_2207_ = lean_ctor_get(v___x_2205_, 1);
lean_inc(v_snd_2207_);
lean_inc(v_fst_2206_);
v___x_2208_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2206_, v_snd_2207_, v_b_2203_);
v___x_2209_ = ((size_t)1ULL);
v___x_2210_ = lean_usize_add(v_i_2201_, v___x_2209_);
v___x_2211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13_spec__21(v_as_2200_, v___x_2210_, v_stop_2202_, v___x_2208_);
return v___x_2211_;
}
else
{
return v_b_2203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13___boxed(lean_object* v_as_2212_, lean_object* v_i_2213_, lean_object* v_stop_2214_, lean_object* v_b_2215_){
_start:
{
size_t v_i_boxed_2216_; size_t v_stop_boxed_2217_; lean_object* v_res_2218_; 
v_i_boxed_2216_ = lean_unbox_usize(v_i_2213_);
lean_dec(v_i_2213_);
v_stop_boxed_2217_ = lean_unbox_usize(v_stop_2214_);
lean_dec(v_stop_2214_);
v_res_2218_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13(v_as_2212_, v_i_boxed_2216_, v_stop_boxed_2217_, v_b_2215_);
lean_dec_ref(v_as_2212_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1(lean_object* v_j_2219_, lean_object* v_k_2220_){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = l_Lean_Json_getObjValD(v_j_2219_, v_k_2220_);
v___x_2222_ = l_Lean_Json_getNat_x3f(v___x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1___boxed(lean_object* v_j_2223_, lean_object* v_k_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1(v_j_2223_, v_k_2224_);
lean_dec_ref(v_k_2224_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(lean_object* v_j_2226_, lean_object* v_k_2227_){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = l_Lean_Json_getObjValD(v_j_2226_, v_k_2227_);
v___x_2229_ = l_Lean_Json_getStr_x3f(v___x_2228_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
else
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2252_; 
v_a_2238_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2240_ = v___x_2229_;
v_isShared_2241_ = v_isSharedCheck_2252_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2229_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2252_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2242_; 
lean_inc(v_a_2238_);
v___x_2242_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_2238_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2246_; 
v___x_2243_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1));
v___x_2244_ = lean_string_append(v___x_2243_, v_a_2238_);
lean_dec(v_a_2238_);
if (v_isShared_2241_ == 0)
{
lean_ctor_set_tag(v___x_2240_, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2244_);
v___x_2246_ = v___x_2240_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v___x_2244_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
else
{
lean_object* v_val_2248_; lean_object* v___x_2250_; 
lean_dec(v_a_2238_);
v_val_2248_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_val_2248_);
lean_dec_ref_known(v___x_2242_, 1);
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 0, v_val_2248_);
v___x_2250_ = v___x_2240_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_val_2248_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8___boxed(lean_object* v_j_2253_, lean_object* v_k_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_j_2253_, v_k_2254_);
lean_dec_ref(v_k_2254_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__11(size_t v_sz_2256_, size_t v_i_2257_, lean_object* v_bs_2258_){
_start:
{
uint8_t v___x_2259_; 
v___x_2259_ = lean_usize_dec_lt(v_i_2257_, v_sz_2256_);
if (v___x_2259_ == 0)
{
return v_bs_2258_;
}
else
{
lean_object* v_v_2260_; lean_object* v_fst_2261_; lean_object* v___x_2262_; lean_object* v_bs_x27_2263_; size_t v___x_2264_; size_t v___x_2265_; lean_object* v___x_2266_; 
v_v_2260_ = lean_array_uget_borrowed(v_bs_2258_, v_i_2257_);
v_fst_2261_ = lean_ctor_get(v_v_2260_, 0);
lean_inc(v_fst_2261_);
v___x_2262_ = lean_unsigned_to_nat(0u);
v_bs_x27_2263_ = lean_array_uset(v_bs_2258_, v_i_2257_, v___x_2262_);
v___x_2264_ = ((size_t)1ULL);
v___x_2265_ = lean_usize_add(v_i_2257_, v___x_2264_);
v___x_2266_ = lean_array_uset(v_bs_x27_2263_, v_i_2257_, v_fst_2261_);
v_i_2257_ = v___x_2265_;
v_bs_2258_ = v___x_2266_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__11___boxed(lean_object* v_sz_2268_, lean_object* v_i_2269_, lean_object* v_bs_2270_){
_start:
{
size_t v_sz_boxed_2271_; size_t v_i_boxed_2272_; lean_object* v_res_2273_; 
v_sz_boxed_2271_ = lean_unbox_usize(v_sz_2268_);
lean_dec(v_sz_2268_);
v_i_boxed_2272_ = lean_unbox_usize(v_i_2269_);
lean_dec(v_i_2269_);
v_res_2273_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__11(v_sz_boxed_2271_, v_i_boxed_2272_, v_bs_2270_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2_spec__4(size_t v_sz_2274_, size_t v_i_2275_, lean_object* v_bs_2276_){
_start:
{
uint8_t v___x_2277_; 
v___x_2277_ = lean_usize_dec_lt(v_i_2275_, v_sz_2274_);
if (v___x_2277_ == 0)
{
return v_bs_2276_;
}
else
{
lean_object* v_v_2278_; lean_object* v_fst_2279_; lean_object* v_snd_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2293_; 
v_v_2278_ = lean_array_uget(v_bs_2276_, v_i_2275_);
v_fst_2279_ = lean_ctor_get(v_v_2278_, 0);
v_snd_2280_ = lean_ctor_get(v_v_2278_, 1);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_v_2278_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2282_ = v_v_2278_;
v_isShared_2283_ = v_isSharedCheck_2293_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_snd_2280_);
lean_inc(v_fst_2279_);
lean_dec(v_v_2278_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2293_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2284_; lean_object* v_bs_x27_2285_; lean_object* v___x_2287_; 
v___x_2284_ = lean_unsigned_to_nat(0u);
v_bs_x27_2285_ = lean_array_uset(v_bs_2276_, v_i_2275_, v___x_2284_);
if (v_isShared_2283_ == 0)
{
v___x_2287_ = v___x_2282_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_fst_2279_);
lean_ctor_set(v_reuseFailAlloc_2292_, 1, v_snd_2280_);
v___x_2287_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
size_t v___x_2288_; size_t v___x_2289_; lean_object* v___x_2290_; 
v___x_2288_ = ((size_t)1ULL);
v___x_2289_ = lean_usize_add(v_i_2275_, v___x_2288_);
v___x_2290_ = lean_array_uset(v_bs_x27_2285_, v_i_2275_, v___x_2287_);
v_i_2275_ = v___x_2289_;
v_bs_2276_ = v___x_2290_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_sz_2294_, lean_object* v_i_2295_, lean_object* v_bs_2296_){
_start:
{
size_t v_sz_boxed_2297_; size_t v_i_boxed_2298_; lean_object* v_res_2299_; 
v_sz_boxed_2297_ = lean_unbox_usize(v_sz_2294_);
lean_dec(v_sz_2294_);
v_i_boxed_2298_ = lean_unbox_usize(v_i_2295_);
lean_dec(v_i_2295_);
v_res_2299_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2_spec__4(v_sz_boxed_2297_, v_i_boxed_2298_, v_bs_2296_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2(size_t v_sz_2300_, size_t v_i_2301_, lean_object* v_bs_2302_){
_start:
{
uint8_t v___x_2303_; 
v___x_2303_ = lean_usize_dec_lt(v_i_2301_, v_sz_2300_);
if (v___x_2303_ == 0)
{
return v_bs_2302_;
}
else
{
lean_object* v_v_2304_; lean_object* v_fst_2305_; lean_object* v_snd_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2319_; 
v_v_2304_ = lean_array_uget(v_bs_2302_, v_i_2301_);
v_fst_2305_ = lean_ctor_get(v_v_2304_, 0);
v_snd_2306_ = lean_ctor_get(v_v_2304_, 1);
v_isSharedCheck_2319_ = !lean_is_exclusive(v_v_2304_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2308_ = v_v_2304_;
v_isShared_2309_ = v_isSharedCheck_2319_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_snd_2306_);
lean_inc(v_fst_2305_);
lean_dec(v_v_2304_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2319_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2310_; lean_object* v_bs_x27_2311_; lean_object* v___x_2313_; 
v___x_2310_ = lean_unsigned_to_nat(0u);
v_bs_x27_2311_ = lean_array_uset(v_bs_2302_, v_i_2301_, v___x_2310_);
if (v_isShared_2309_ == 0)
{
v___x_2313_ = v___x_2308_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_fst_2305_);
lean_ctor_set(v_reuseFailAlloc_2318_, 1, v_snd_2306_);
v___x_2313_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
size_t v___x_2314_; size_t v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2314_ = ((size_t)1ULL);
v___x_2315_ = lean_usize_add(v_i_2301_, v___x_2314_);
v___x_2316_ = lean_array_uset(v_bs_x27_2311_, v_i_2301_, v___x_2313_);
v___x_2317_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2_spec__4(v_sz_2300_, v___x_2315_, v___x_2316_);
return v___x_2317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2___boxed(lean_object* v_sz_2320_, lean_object* v_i_2321_, lean_object* v_bs_2322_){
_start:
{
size_t v_sz_boxed_2323_; size_t v_i_boxed_2324_; lean_object* v_res_2325_; 
v_sz_boxed_2323_ = lean_unbox_usize(v_sz_2320_);
lean_dec(v_sz_2320_);
v_i_boxed_2324_ = lean_unbox_usize(v_i_2321_);
lean_dec(v_i_2321_);
v_res_2325_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2(v_sz_boxed_2323_, v_i_boxed_2324_, v_bs_2322_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__10(size_t v_sz_2326_, size_t v_i_2327_, lean_object* v_bs_2328_){
_start:
{
uint8_t v___x_2329_; 
v___x_2329_ = lean_usize_dec_lt(v_i_2327_, v_sz_2326_);
if (v___x_2329_ == 0)
{
return v_bs_2328_;
}
else
{
lean_object* v_v_2330_; lean_object* v_fst_2331_; lean_object* v_snd_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2348_; 
v_v_2330_ = lean_array_uget(v_bs_2328_, v_i_2327_);
v_fst_2331_ = lean_ctor_get(v_v_2330_, 0);
v_snd_2332_ = lean_ctor_get(v_v_2330_, 1);
v_isSharedCheck_2348_ = !lean_is_exclusive(v_v_2330_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2334_ = v_v_2330_;
v_isShared_2335_ = v_isSharedCheck_2348_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_snd_2332_);
lean_inc(v_fst_2331_);
lean_dec(v_v_2330_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2348_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2336_; lean_object* v_bs_x27_2337_; size_t v_sz_2338_; size_t v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2342_; 
v___x_2336_ = lean_unsigned_to_nat(0u);
v_bs_x27_2337_ = lean_array_uset(v_bs_2328_, v_i_2327_, v___x_2336_);
v_sz_2338_ = lean_array_size(v_snd_2332_);
v___x_2339_ = ((size_t)0ULL);
v___x_2340_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2(v_sz_2338_, v___x_2339_, v_snd_2332_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v___x_2340_);
v___x_2342_ = v___x_2334_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_fst_2331_);
lean_ctor_set(v_reuseFailAlloc_2347_, 1, v___x_2340_);
v___x_2342_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
size_t v___x_2343_; size_t v___x_2344_; lean_object* v___x_2345_; 
v___x_2343_ = ((size_t)1ULL);
v___x_2344_ = lean_usize_add(v_i_2327_, v___x_2343_);
v___x_2345_ = lean_array_uset(v_bs_x27_2337_, v_i_2327_, v___x_2342_);
v_i_2327_ = v___x_2344_;
v_bs_2328_ = v___x_2345_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__10___boxed(lean_object* v_sz_2349_, lean_object* v_i_2350_, lean_object* v_bs_2351_){
_start:
{
size_t v_sz_boxed_2352_; size_t v_i_boxed_2353_; lean_object* v_res_2354_; 
v_sz_boxed_2352_ = lean_unbox_usize(v_sz_2349_);
lean_dec(v_sz_2349_);
v_i_boxed_2353_ = lean_unbox_usize(v_i_2350_);
lean_dec(v_i_2350_);
v_res_2354_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__10(v_sz_boxed_2352_, v_i_boxed_2353_, v_bs_2351_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20(lean_object* v_x_2356_){
_start:
{
lean_object* v_j_2358_; 
if (lean_obj_tag(v_x_2356_) == 4)
{
lean_object* v_elems_2366_; lean_object* v_a_2368_; lean_object* v___x_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; 
v_elems_2366_ = lean_ctor_get(v_x_2356_, 0);
v___x_2389_ = lean_array_get_size(v_elems_2366_);
v___x_2390_ = lean_unsigned_to_nat(2u);
v___x_2391_ = lean_nat_dec_eq(v___x_2389_, v___x_2390_);
if (v___x_2391_ == 0)
{
v_j_2358_ = v_x_2356_;
goto v___jp_2357_;
}
else
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
lean_inc_ref(v_elems_2366_);
lean_dec_ref_known(v_x_2356_, 1);
v___x_2392_ = lean_unsigned_to_nat(0u);
v___x_2393_ = lean_array_fget_borrowed(v_elems_2366_, v___x_2392_);
lean_inc(v___x_2393_);
v___x_2394_ = l_Lean_Json_getArr_x3f(v___x_2393_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_dec_ref(v_elems_2366_);
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2394_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2394_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; 
v_a_2403_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2403_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2404_ = lean_box(0);
v___x_2405_ = lean_array_get_size(v_a_2403_);
v___x_2406_ = lean_nat_dec_lt(v___x_2392_, v___x_2405_);
if (v___x_2406_ == 0)
{
lean_dec(v_a_2403_);
v_a_2368_ = v___x_2404_;
goto v___jp_2367_;
}
else
{
size_t v___x_2407_; size_t v___x_2408_; lean_object* v___x_2409_; 
v___x_2407_ = ((size_t)0ULL);
v___x_2408_ = lean_usize_of_nat(v___x_2405_);
v___x_2409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_2403_, v___x_2407_, v___x_2408_, v___x_2404_);
lean_dec(v_a_2403_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
lean_dec_ref(v_elems_2366_);
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2409_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2409_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
else
{
lean_object* v_a_2418_; 
v_a_2418_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2409_, 1);
v_a_2368_ = v_a_2418_;
goto v___jp_2367_;
}
}
}
}
v___jp_2367_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2369_ = lean_unsigned_to_nat(1u);
v___x_2370_ = lean_array_fget(v_elems_2366_, v___x_2369_);
lean_dec_ref(v_elems_2366_);
v___x_2371_ = l_Lean_Json_getBool_x3f(v___x_2370_);
lean_dec(v___x_2370_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
lean_dec(v_a_2368_);
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v___x_2371_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2371_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2388_; 
v_a_2380_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2382_ = v___x_2371_;
v_isShared_2383_ = v_isSharedCheck_2388_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2371_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2388_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2384_; lean_object* v___x_2386_; 
v___x_2384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2384_, 0, v_a_2368_);
lean_ctor_set(v___x_2384_, 1, v_a_2380_);
if (v_isShared_2383_ == 0)
{
lean_ctor_set(v___x_2382_, 0, v___x_2384_);
v___x_2386_ = v___x_2382_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v___x_2384_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
else
{
v_j_2358_ = v_x_2356_;
goto v___jp_2357_;
}
v___jp_2357_:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2359_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0));
v___x_2360_ = lean_unsigned_to_nat(80u);
v___x_2361_ = l_Lean_Json_pretty(v_j_2358_, v___x_2360_);
v___x_2362_ = lean_string_append(v___x_2359_, v___x_2361_);
lean_dec_ref(v___x_2361_);
v___x_2363_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2364_ = lean_string_append(v___x_2362_, v___x_2363_);
v___x_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
return v___x_2365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__21(size_t v_sz_2419_, size_t v_i_2420_, lean_object* v_bs_2421_){
_start:
{
uint8_t v___x_2422_; 
v___x_2422_ = lean_usize_dec_lt(v_i_2420_, v_sz_2419_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2423_, 0, v_bs_2421_);
return v___x_2423_;
}
else
{
lean_object* v_v_2424_; lean_object* v___x_2425_; 
v_v_2424_ = lean_array_uget_borrowed(v_bs_2421_, v_i_2420_);
lean_inc(v_v_2424_);
v___x_2425_ = l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20(v_v_2424_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec_ref(v_bs_2421_);
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2425_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2425_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2435_; lean_object* v_bs_x27_2436_; size_t v___x_2437_; size_t v___x_2438_; lean_object* v___x_2439_; 
v_a_2434_ = lean_ctor_get(v___x_2425_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2425_, 1);
v___x_2435_ = lean_unsigned_to_nat(0u);
v_bs_x27_2436_ = lean_array_uset(v_bs_2421_, v_i_2420_, v___x_2435_);
v___x_2437_ = ((size_t)1ULL);
v___x_2438_ = lean_usize_add(v_i_2420_, v___x_2437_);
v___x_2439_ = lean_array_uset(v_bs_x27_2436_, v_i_2420_, v_a_2434_);
v_i_2420_ = v___x_2438_;
v_bs_2421_ = v___x_2439_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__21___boxed(lean_object* v_sz_2441_, lean_object* v_i_2442_, lean_object* v_bs_2443_){
_start:
{
size_t v_sz_boxed_2444_; size_t v_i_boxed_2445_; lean_object* v_res_2446_; 
v_sz_boxed_2444_ = lean_unbox_usize(v_sz_2441_);
lean_dec(v_sz_2441_);
v_i_boxed_2445_ = lean_unbox_usize(v_i_2442_);
lean_dec(v_i_2442_);
v_res_2446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__21(v_sz_boxed_2444_, v_i_boxed_2445_, v_bs_2443_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10(lean_object* v_x_2447_){
_start:
{
if (lean_obj_tag(v_x_2447_) == 4)
{
lean_object* v_elems_2448_; size_t v_sz_2449_; size_t v___x_2450_; lean_object* v___x_2451_; 
v_elems_2448_ = lean_ctor_get(v_x_2447_, 0);
lean_inc_ref(v_elems_2448_);
lean_dec_ref_known(v_x_2447_, 1);
v_sz_2449_ = lean_array_size(v_elems_2448_);
v___x_2450_ = ((size_t)0ULL);
v___x_2451_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__21(v_sz_2449_, v___x_2450_, v_elems_2448_);
return v___x_2451_;
}
else
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2452_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0));
v___x_2453_ = lean_unsigned_to_nat(80u);
v___x_2454_ = l_Lean_Json_pretty(v_x_2447_, v___x_2453_);
v___x_2455_ = lean_string_append(v___x_2452_, v___x_2454_);
lean_dec_ref(v___x_2454_);
v___x_2456_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2457_ = lean_string_append(v___x_2455_, v___x_2456_);
v___x_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
return v___x_2458_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5(lean_object* v_j_2459_, lean_object* v_k_2460_){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = l_Lean_Json_getObjValD(v_j_2459_, v_k_2460_);
v___x_2462_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10(v___x_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5___boxed(lean_object* v_j_2463_, lean_object* v_k_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5(v_j_2463_, v_k_2464_);
lean_dec_ref(v_k_2464_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__12(lean_object* v_x_2466_){
_start:
{
lean_object* v_j_2468_; 
if (lean_obj_tag(v_x_2466_) == 4)
{
lean_object* v_elems_2476_; lean_object* v_a_2478_; lean_object* v___x_2506_; lean_object* v___x_2507_; uint8_t v___x_2508_; 
v_elems_2476_ = lean_ctor_get(v_x_2466_, 0);
v___x_2506_ = lean_array_get_size(v_elems_2476_);
v___x_2507_ = lean_unsigned_to_nat(2u);
v___x_2508_ = lean_nat_dec_eq(v___x_2506_, v___x_2507_);
if (v___x_2508_ == 0)
{
v_j_2468_ = v_x_2466_;
goto v___jp_2467_;
}
else
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_inc_ref(v_elems_2476_);
lean_dec_ref_known(v_x_2466_, 1);
v___x_2509_ = lean_unsigned_to_nat(0u);
v___x_2510_ = lean_array_fget_borrowed(v_elems_2476_, v___x_2509_);
lean_inc(v___x_2510_);
v___x_2511_ = l_Lean_Json_getArr_x3f(v___x_2510_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
lean_dec_ref(v_elems_2476_);
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; uint8_t v___x_2523_; 
v_a_2520_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2511_, 1);
v___x_2521_ = lean_box(0);
v___x_2522_ = lean_array_get_size(v_a_2520_);
v___x_2523_ = lean_nat_dec_lt(v___x_2509_, v___x_2522_);
if (v___x_2523_ == 0)
{
lean_dec(v_a_2520_);
v_a_2478_ = v___x_2521_;
goto v___jp_2477_;
}
else
{
size_t v___x_2524_; size_t v___x_2525_; lean_object* v___x_2526_; 
v___x_2524_ = ((size_t)0ULL);
v___x_2525_ = lean_usize_of_nat(v___x_2522_);
v___x_2526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_2520_, v___x_2524_, v___x_2525_, v___x_2521_);
lean_dec(v_a_2520_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
lean_dec_ref(v_elems_2476_);
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2526_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2526_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
else
{
lean_object* v_a_2535_; 
v_a_2535_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2526_, 1);
v_a_2478_ = v_a_2535_;
goto v___jp_2477_;
}
}
}
}
v___jp_2477_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2479_ = lean_unsigned_to_nat(1u);
v___x_2480_ = lean_array_fget(v_elems_2476_, v___x_2479_);
lean_dec_ref(v_elems_2476_);
v___x_2481_ = l_Lean_Json_getStr_x3f(v___x_2480_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
lean_dec(v_a_2478_);
v_a_2482_ = lean_ctor_get(v___x_2481_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2484_ = v___x_2481_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2481_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2482_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
}
}
}
else
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2505_; 
v_a_2490_ = lean_ctor_get(v___x_2481_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2492_ = v___x_2481_;
v_isShared_2493_ = v_isSharedCheck_2505_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2481_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2505_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2494_; 
lean_inc(v_a_2490_);
v___x_2494_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_2490_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2498_; 
lean_dec(v_a_2478_);
v___x_2495_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1));
v___x_2496_ = lean_string_append(v___x_2495_, v_a_2490_);
lean_dec(v_a_2490_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set_tag(v___x_2492_, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2496_);
v___x_2498_ = v___x_2492_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v___x_2496_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
else
{
lean_object* v_val_2500_; lean_object* v___x_2501_; lean_object* v___x_2503_; 
lean_dec(v_a_2490_);
v_val_2500_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_val_2500_);
lean_dec_ref_known(v___x_2494_, 1);
v___x_2501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2501_, 0, v_a_2478_);
lean_ctor_set(v___x_2501_, 1, v_val_2500_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 0, v___x_2501_);
v___x_2503_ = v___x_2492_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v___x_2501_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
}
}
else
{
v_j_2468_ = v_x_2466_;
goto v___jp_2467_;
}
v___jp_2467_:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2469_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0));
v___x_2470_ = lean_unsigned_to_nat(80u);
v___x_2471_ = l_Lean_Json_pretty(v_j_2468_, v___x_2470_);
v___x_2472_ = lean_string_append(v___x_2469_, v___x_2471_);
lean_dec_ref(v___x_2471_);
v___x_2473_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2474_ = lean_string_append(v___x_2472_, v___x_2473_);
v___x_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2475_, 0, v___x_2474_);
return v___x_2475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__13(size_t v_sz_2536_, size_t v_i_2537_, lean_object* v_bs_2538_){
_start:
{
uint8_t v___x_2539_; 
v___x_2539_ = lean_usize_dec_lt(v_i_2537_, v_sz_2536_);
if (v___x_2539_ == 0)
{
lean_object* v___x_2540_; 
v___x_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2540_, 0, v_bs_2538_);
return v___x_2540_;
}
else
{
lean_object* v_v_2541_; lean_object* v___x_2542_; 
v_v_2541_ = lean_array_uget_borrowed(v_bs_2538_, v_i_2537_);
lean_inc(v_v_2541_);
v___x_2542_ = l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__12(v_v_2541_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec_ref(v_bs_2538_);
v_a_2543_ = lean_ctor_get(v___x_2542_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2542_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2542_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2552_; lean_object* v_bs_x27_2553_; size_t v___x_2554_; size_t v___x_2555_; lean_object* v___x_2556_; 
v_a_2551_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_a_2551_);
lean_dec_ref_known(v___x_2542_, 1);
v___x_2552_ = lean_unsigned_to_nat(0u);
v_bs_x27_2553_ = lean_array_uset(v_bs_2538_, v_i_2537_, v___x_2552_);
v___x_2554_ = ((size_t)1ULL);
v___x_2555_ = lean_usize_add(v_i_2537_, v___x_2554_);
v___x_2556_ = lean_array_uset(v_bs_x27_2553_, v_i_2537_, v_a_2551_);
v_i_2537_ = v___x_2555_;
v_bs_2538_ = v___x_2556_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__13___boxed(lean_object* v_sz_2558_, lean_object* v_i_2559_, lean_object* v_bs_2560_){
_start:
{
size_t v_sz_boxed_2561_; size_t v_i_boxed_2562_; lean_object* v_res_2563_; 
v_sz_boxed_2561_ = lean_unbox_usize(v_sz_2558_);
lean_dec(v_sz_2558_);
v_i_boxed_2562_ = lean_unbox_usize(v_i_2559_);
lean_dec(v_i_2559_);
v_res_2563_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__13(v_sz_boxed_2561_, v_i_boxed_2562_, v_bs_2560_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6(lean_object* v_x_2564_){
_start:
{
if (lean_obj_tag(v_x_2564_) == 4)
{
lean_object* v_elems_2565_; size_t v_sz_2566_; size_t v___x_2567_; lean_object* v___x_2568_; 
v_elems_2565_ = lean_ctor_get(v_x_2564_, 0);
lean_inc_ref(v_elems_2565_);
lean_dec_ref_known(v_x_2564_, 1);
v_sz_2566_ = lean_array_size(v_elems_2565_);
v___x_2567_ = ((size_t)0ULL);
v___x_2568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6_spec__13(v_sz_2566_, v___x_2567_, v_elems_2565_);
return v___x_2568_;
}
else
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2569_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0));
v___x_2570_ = lean_unsigned_to_nat(80u);
v___x_2571_ = l_Lean_Json_pretty(v_x_2564_, v___x_2570_);
v___x_2572_ = lean_string_append(v___x_2569_, v___x_2571_);
lean_dec_ref(v___x_2571_);
v___x_2573_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2574_ = lean_string_append(v___x_2572_, v___x_2573_);
v___x_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2574_);
return v___x_2575_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(lean_object* v_j_2576_, lean_object* v_k_2577_){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = l_Lean_Json_getObjValD(v_j_2576_, v_k_2577_);
v___x_2579_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6(v___x_2578_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3___boxed(lean_object* v_j_2580_, lean_object* v_k_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(v_j_2580_, v_k_2581_);
lean_dec_ref(v_k_2581_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__24(lean_object* v_x_2583_){
_start:
{
lean_object* v_j_2585_; 
if (lean_obj_tag(v_x_2583_) == 4)
{
lean_object* v_elems_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; uint8_t v___x_2596_; 
v_elems_2593_ = lean_ctor_get(v_x_2583_, 0);
v___x_2594_ = lean_array_get_size(v_elems_2593_);
v___x_2595_ = lean_unsigned_to_nat(2u);
v___x_2596_ = lean_nat_dec_eq(v___x_2594_, v___x_2595_);
if (v___x_2596_ == 0)
{
v_j_2585_ = v_x_2583_;
goto v___jp_2584_;
}
else
{
lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_inc_ref(v_elems_2593_);
lean_dec_ref_known(v_x_2583_, 1);
v___x_2597_ = lean_unsigned_to_nat(0u);
v___x_2598_ = lean_array_fget_borrowed(v_elems_2593_, v___x_2597_);
lean_inc(v___x_2598_);
v___x_2599_ = l_Lean_Json_getStr_x3f(v___x_2598_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2607_; 
lean_dec_ref(v_elems_2593_);
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2602_ = v___x_2599_;
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v___x_2599_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2607_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_a_2600_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2652_; 
v_a_2608_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2610_ = v___x_2599_;
v_isShared_2611_ = v_isSharedCheck_2652_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2599_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2652_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2612_; 
lean_inc(v_a_2608_);
v___x_2612_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_2608_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2616_; 
lean_dec_ref(v_elems_2593_);
v___x_2613_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1));
v___x_2614_ = lean_string_append(v___x_2613_, v_a_2608_);
lean_dec(v_a_2608_);
if (v_isShared_2611_ == 0)
{
lean_ctor_set_tag(v___x_2610_, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2614_);
v___x_2616_ = v___x_2610_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
else
{
lean_object* v_val_2618_; lean_object* v_a_2620_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
lean_dec(v_a_2608_);
v_val_2618_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_val_2618_);
lean_dec_ref_known(v___x_2612_, 1);
v___x_2625_ = lean_unsigned_to_nat(1u);
v___x_2626_ = lean_array_fget(v_elems_2593_, v___x_2625_);
lean_dec_ref(v_elems_2593_);
v___x_2627_ = l_Lean_Json_getArr_x3f(v___x_2626_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v_val_2618_);
lean_del_object(v___x_2610_);
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2627_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2627_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
else
{
lean_object* v_a_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; uint8_t v___x_2639_; 
v_a_2636_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2636_);
lean_dec_ref_known(v___x_2627_, 1);
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_array_get_size(v_a_2636_);
v___x_2639_ = lean_nat_dec_lt(v___x_2597_, v___x_2638_);
if (v___x_2639_ == 0)
{
lean_dec(v_a_2636_);
v_a_2620_ = v___x_2637_;
goto v___jp_2619_;
}
else
{
size_t v___x_2640_; size_t v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = ((size_t)0ULL);
v___x_2641_ = lean_usize_of_nat(v___x_2638_);
v___x_2642_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_2636_, v___x_2640_, v___x_2641_, v___x_2637_);
lean_dec(v_a_2636_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec(v_val_2618_);
lean_del_object(v___x_2610_);
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2642_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2642_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
else
{
lean_object* v_a_2651_; 
v_a_2651_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2642_, 1);
v_a_2620_ = v_a_2651_;
goto v___jp_2619_;
}
}
}
v___jp_2619_:
{
lean_object* v___x_2621_; lean_object* v___x_2623_; 
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v_val_2618_);
lean_ctor_set(v___x_2621_, 1, v_a_2620_);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 0, v___x_2621_);
v___x_2623_ = v___x_2610_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v___x_2621_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
}
}
}
else
{
v_j_2585_ = v_x_2583_;
goto v___jp_2584_;
}
v___jp_2584_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2586_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0));
v___x_2587_ = lean_unsigned_to_nat(80u);
v___x_2588_ = l_Lean_Json_pretty(v_j_2585_, v___x_2587_);
v___x_2589_ = lean_string_append(v___x_2586_, v___x_2588_);
lean_dec_ref(v___x_2588_);
v___x_2590_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2591_ = lean_string_append(v___x_2589_, v___x_2590_);
v___x_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
return v___x_2592_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__25(size_t v_sz_2653_, size_t v_i_2654_, lean_object* v_bs_2655_){
_start:
{
uint8_t v___x_2656_; 
v___x_2656_ = lean_usize_dec_lt(v_i_2654_, v_sz_2653_);
if (v___x_2656_ == 0)
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2657_, 0, v_bs_2655_);
return v___x_2657_;
}
else
{
lean_object* v_v_2658_; lean_object* v___x_2659_; 
v_v_2658_ = lean_array_uget_borrowed(v_bs_2655_, v_i_2654_);
lean_inc(v_v_2658_);
v___x_2659_ = l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__24(v_v_2658_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_dec_ref(v_bs_2655_);
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2659_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2659_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2669_; lean_object* v_bs_x27_2670_; size_t v___x_2671_; size_t v___x_2672_; lean_object* v___x_2673_; 
v_a_2668_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2659_, 1);
v___x_2669_ = lean_unsigned_to_nat(0u);
v_bs_x27_2670_ = lean_array_uset(v_bs_2655_, v_i_2654_, v___x_2669_);
v___x_2671_ = ((size_t)1ULL);
v___x_2672_ = lean_usize_add(v_i_2654_, v___x_2671_);
v___x_2673_ = lean_array_uset(v_bs_x27_2670_, v_i_2654_, v_a_2668_);
v_i_2654_ = v___x_2672_;
v_bs_2655_ = v___x_2673_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__25___boxed(lean_object* v_sz_2675_, lean_object* v_i_2676_, lean_object* v_bs_2677_){
_start:
{
size_t v_sz_boxed_2678_; size_t v_i_boxed_2679_; lean_object* v_res_2680_; 
v_sz_boxed_2678_ = lean_unbox_usize(v_sz_2675_);
lean_dec(v_sz_2675_);
v_i_boxed_2679_ = lean_unbox_usize(v_i_2676_);
lean_dec(v_i_2676_);
v_res_2680_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__25(v_sz_boxed_2678_, v_i_boxed_2679_, v_bs_2677_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12(lean_object* v_x_2681_){
_start:
{
if (lean_obj_tag(v_x_2681_) == 4)
{
lean_object* v_elems_2682_; size_t v_sz_2683_; size_t v___x_2684_; lean_object* v___x_2685_; 
v_elems_2682_ = lean_ctor_get(v_x_2681_, 0);
lean_inc_ref(v_elems_2682_);
lean_dec_ref_known(v_x_2681_, 1);
v_sz_2683_ = lean_array_size(v_elems_2682_);
v___x_2684_ = ((size_t)0ULL);
v___x_2685_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12_spec__25(v_sz_2683_, v___x_2684_, v_elems_2682_);
return v___x_2685_;
}
else
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2686_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0));
v___x_2687_ = lean_unsigned_to_nat(80u);
v___x_2688_ = l_Lean_Json_pretty(v_x_2681_, v___x_2687_);
v___x_2689_ = lean_string_append(v___x_2686_, v___x_2688_);
lean_dec_ref(v___x_2688_);
v___x_2690_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2691_ = lean_string_append(v___x_2689_, v___x_2690_);
v___x_2692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2691_);
return v___x_2692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6(lean_object* v_j_2693_, lean_object* v_k_2694_){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; 
v___x_2695_ = l_Lean_Json_getObjValD(v_j_2693_, v_k_2694_);
v___x_2696_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6_spec__12(v___x_2695_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6___boxed(lean_object* v_j_2697_, lean_object* v_k_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6(v_j_2697_, v_k_2698_);
lean_dec_ref(v_k_2698_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__16(lean_object* v_x_2700_){
_start:
{
lean_object* v_j_2702_; 
if (lean_obj_tag(v_x_2700_) == 4)
{
lean_object* v_elems_2710_; lean_object* v_a_2712_; lean_object* v___x_2733_; lean_object* v___x_2734_; uint8_t v___x_2735_; 
v_elems_2710_ = lean_ctor_get(v_x_2700_, 0);
v___x_2733_ = lean_array_get_size(v_elems_2710_);
v___x_2734_ = lean_unsigned_to_nat(2u);
v___x_2735_ = lean_nat_dec_eq(v___x_2733_, v___x_2734_);
if (v___x_2735_ == 0)
{
v_j_2702_ = v_x_2700_;
goto v___jp_2701_;
}
else
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
lean_inc_ref(v_elems_2710_);
lean_dec_ref_known(v_x_2700_, 1);
v___x_2736_ = lean_unsigned_to_nat(0u);
v___x_2737_ = lean_array_fget_borrowed(v_elems_2710_, v___x_2736_);
lean_inc(v___x_2737_);
v___x_2738_ = l_Lean_Json_getArr_x3f(v___x_2737_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
lean_dec_ref(v_elems_2710_);
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2738_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2738_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; uint8_t v___x_2750_; 
v_a_2747_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2738_, 1);
v___x_2748_ = lean_box(0);
v___x_2749_ = lean_array_get_size(v_a_2747_);
v___x_2750_ = lean_nat_dec_lt(v___x_2736_, v___x_2749_);
if (v___x_2750_ == 0)
{
lean_dec(v_a_2747_);
v_a_2712_ = v___x_2748_;
goto v___jp_2711_;
}
else
{
size_t v___x_2751_; size_t v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = ((size_t)0ULL);
v___x_2752_ = lean_usize_of_nat(v___x_2749_);
v___x_2753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__0(v_a_2747_, v___x_2751_, v___x_2752_, v___x_2748_);
lean_dec(v_a_2747_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
lean_dec_ref(v_elems_2710_);
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
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2762_; 
v_a_2762_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2762_);
lean_dec_ref_known(v___x_2753_, 1);
v_a_2712_ = v_a_2762_;
goto v___jp_2711_;
}
}
}
}
v___jp_2711_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2713_ = lean_unsigned_to_nat(1u);
v___x_2714_ = lean_array_fget(v_elems_2710_, v___x_2713_);
lean_dec_ref(v_elems_2710_);
v___x_2715_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3_spec__6(v___x_2714_);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec(v_a_2712_);
v_a_2716_ = lean_ctor_get(v___x_2715_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2715_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2715_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2715_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2732_; 
v_a_2724_ = lean_ctor_get(v___x_2715_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2715_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2726_ = v___x_2715_;
v_isShared_2727_ = v_isSharedCheck_2732_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2715_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2732_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; lean_object* v___x_2730_; 
v___x_2728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2728_, 0, v_a_2712_);
lean_ctor_set(v___x_2728_, 1, v_a_2724_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v___x_2728_);
v___x_2730_ = v___x_2726_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2728_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
}
else
{
v_j_2702_ = v_x_2700_;
goto v___jp_2701_;
}
v___jp_2701_:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2703_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0));
v___x_2704_ = lean_unsigned_to_nat(80u);
v___x_2705_ = l_Lean_Json_pretty(v_j_2702_, v___x_2704_);
v___x_2706_ = lean_string_append(v___x_2703_, v___x_2705_);
lean_dec_ref(v___x_2705_);
v___x_2707_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2708_ = lean_string_append(v___x_2706_, v___x_2707_);
v___x_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
return v___x_2709_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__17(size_t v_sz_2763_, size_t v_i_2764_, lean_object* v_bs_2765_){
_start:
{
uint8_t v___x_2766_; 
v___x_2766_ = lean_usize_dec_lt(v_i_2764_, v_sz_2763_);
if (v___x_2766_ == 0)
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2767_, 0, v_bs_2765_);
return v___x_2767_;
}
else
{
lean_object* v_v_2768_; lean_object* v___x_2769_; 
v_v_2768_ = lean_array_uget_borrowed(v_bs_2765_, v_i_2764_);
lean_inc(v_v_2768_);
v___x_2769_ = l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__16(v_v_2768_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
lean_dec_ref(v_bs_2765_);
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2769_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2769_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
else
{
lean_object* v_a_2778_; lean_object* v___x_2779_; lean_object* v_bs_x27_2780_; size_t v___x_2781_; size_t v___x_2782_; lean_object* v___x_2783_; 
v_a_2778_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2778_);
lean_dec_ref_known(v___x_2769_, 1);
v___x_2779_ = lean_unsigned_to_nat(0u);
v_bs_x27_2780_ = lean_array_uset(v_bs_2765_, v_i_2764_, v___x_2779_);
v___x_2781_ = ((size_t)1ULL);
v___x_2782_ = lean_usize_add(v_i_2764_, v___x_2781_);
v___x_2783_ = lean_array_uset(v_bs_x27_2780_, v_i_2764_, v_a_2778_);
v_i_2764_ = v___x_2782_;
v_bs_2765_ = v___x_2783_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__17___boxed(lean_object* v_sz_2785_, lean_object* v_i_2786_, lean_object* v_bs_2787_){
_start:
{
size_t v_sz_boxed_2788_; size_t v_i_boxed_2789_; lean_object* v_res_2790_; 
v_sz_boxed_2788_ = lean_unbox_usize(v_sz_2785_);
lean_dec(v_sz_2785_);
v_i_boxed_2789_ = lean_unbox_usize(v_i_2786_);
lean_dec(v_i_2786_);
v_res_2790_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__17(v_sz_boxed_2788_, v_i_boxed_2789_, v_bs_2787_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8(lean_object* v_x_2791_){
_start:
{
if (lean_obj_tag(v_x_2791_) == 4)
{
lean_object* v_elems_2792_; size_t v_sz_2793_; size_t v___x_2794_; lean_object* v___x_2795_; 
v_elems_2792_ = lean_ctor_get(v_x_2791_, 0);
lean_inc_ref(v_elems_2792_);
lean_dec_ref_known(v_x_2791_, 1);
v_sz_2793_ = lean_array_size(v_elems_2792_);
v___x_2794_ = ((size_t)0ULL);
v___x_2795_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8_spec__17(v_sz_2793_, v___x_2794_, v_elems_2792_);
return v___x_2795_;
}
else
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2796_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0));
v___x_2797_ = lean_unsigned_to_nat(80u);
v___x_2798_ = l_Lean_Json_pretty(v_x_2791_, v___x_2797_);
v___x_2799_ = lean_string_append(v___x_2796_, v___x_2798_);
lean_dec_ref(v___x_2798_);
v___x_2800_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2801_ = lean_string_append(v___x_2799_, v___x_2800_);
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
return v___x_2802_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4(lean_object* v_j_2803_, lean_object* v_k_2804_){
_start:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2805_ = l_Lean_Json_getObjValD(v_j_2803_, v_k_2804_);
v___x_2806_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4_spec__8(v___x_2805_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4___boxed(lean_object* v_j_2807_, lean_object* v_k_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4(v_j_2807_, v_k_2808_);
lean_dec_ref(v_k_2808_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__7(lean_object* v_j_2810_, lean_object* v_k_2811_){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = l_Lean_Json_getObjValD(v_j_2810_, v_k_2811_);
v___x_2813_ = l_Lean_Json_getBool_x3f(v___x_2812_);
lean_dec(v___x_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__7___boxed(lean_object* v_j_2814_, lean_object* v_k_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__7(v_j_2814_, v_k_2815_);
lean_dec_ref(v_k_2815_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__12(size_t v_sz_2817_, size_t v_i_2818_, lean_object* v_bs_2819_){
_start:
{
uint8_t v___x_2820_; 
v___x_2820_ = lean_usize_dec_lt(v_i_2818_, v_sz_2817_);
if (v___x_2820_ == 0)
{
return v_bs_2819_;
}
else
{
lean_object* v_v_2821_; lean_object* v_fst_2822_; lean_object* v_snd_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2836_; 
v_v_2821_ = lean_array_uget(v_bs_2819_, v_i_2818_);
v_fst_2822_ = lean_ctor_get(v_v_2821_, 0);
v_snd_2823_ = lean_ctor_get(v_v_2821_, 1);
v_isSharedCheck_2836_ = !lean_is_exclusive(v_v_2821_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2825_ = v_v_2821_;
v_isShared_2826_ = v_isSharedCheck_2836_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_snd_2823_);
lean_inc(v_fst_2822_);
lean_dec(v_v_2821_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2836_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2827_; lean_object* v_bs_x27_2828_; lean_object* v___x_2830_; 
v___x_2827_ = lean_unsigned_to_nat(0u);
v_bs_x27_2828_ = lean_array_uset(v_bs_2819_, v_i_2818_, v___x_2827_);
if (v_isShared_2826_ == 0)
{
v___x_2830_ = v___x_2825_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_fst_2822_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_snd_2823_);
v___x_2830_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
size_t v___x_2831_; size_t v___x_2832_; lean_object* v___x_2833_; 
v___x_2831_ = ((size_t)1ULL);
v___x_2832_ = lean_usize_add(v_i_2818_, v___x_2831_);
v___x_2833_ = lean_array_uset(v_bs_x27_2828_, v_i_2818_, v___x_2830_);
v_i_2818_ = v___x_2832_;
v_bs_2819_ = v___x_2833_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__12___boxed(lean_object* v_sz_2837_, lean_object* v_i_2838_, lean_object* v_bs_2839_){
_start:
{
size_t v_sz_boxed_2840_; size_t v_i_boxed_2841_; lean_object* v_res_2842_; 
v_sz_boxed_2840_ = lean_unbox_usize(v_sz_2837_);
lean_dec(v_sz_2837_);
v_i_boxed_2841_ = lean_unbox_usize(v_i_2838_);
lean_dec(v_i_2838_);
v_res_2842_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__12(v_sz_boxed_2840_, v_i_boxed_2841_, v_bs_2839_);
return v_res_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__28(lean_object* v_x_2843_){
_start:
{
lean_object* v_j_2845_; 
if (lean_obj_tag(v_x_2843_) == 4)
{
lean_object* v_elems_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; uint8_t v___x_2856_; 
v_elems_2853_ = lean_ctor_get(v_x_2843_, 0);
v___x_2854_ = lean_array_get_size(v_elems_2853_);
v___x_2855_ = lean_unsigned_to_nat(2u);
v___x_2856_ = lean_nat_dec_eq(v___x_2854_, v___x_2855_);
if (v___x_2856_ == 0)
{
v_j_2845_ = v_x_2843_;
goto v___jp_2844_;
}
else
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
lean_inc_ref(v_elems_2853_);
lean_dec_ref_known(v_x_2843_, 1);
v___x_2857_ = lean_unsigned_to_nat(0u);
v___x_2858_ = lean_array_fget_borrowed(v_elems_2853_, v___x_2857_);
lean_inc(v___x_2858_);
v___x_2859_ = l_Lean_Json_getStr_x3f(v___x_2858_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec_ref(v_elems_2853_);
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2859_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2859_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2906_; 
v_a_2868_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2870_ = v___x_2859_;
v_isShared_2871_ = v_isSharedCheck_2906_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2859_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2906_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2872_; 
lean_inc(v_a_2868_);
v___x_2872_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_2868_);
if (lean_obj_tag(v___x_2872_) == 0)
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2876_; 
lean_dec_ref(v_elems_2853_);
v___x_2873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1));
v___x_2874_ = lean_string_append(v___x_2873_, v_a_2868_);
lean_dec(v_a_2868_);
if (v_isShared_2871_ == 0)
{
lean_ctor_set_tag(v___x_2870_, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2874_);
v___x_2876_ = v___x_2870_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2874_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
else
{
lean_object* v_val_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
lean_del_object(v___x_2870_);
lean_dec(v_a_2868_);
v_val_2878_ = lean_ctor_get(v___x_2872_, 0);
lean_inc(v_val_2878_);
lean_dec_ref_known(v___x_2872_, 1);
v___x_2879_ = lean_unsigned_to_nat(1u);
v___x_2880_ = lean_array_fget(v_elems_2853_, v___x_2879_);
lean_dec_ref(v_elems_2853_);
v___x_2881_ = l_Lean_Json_getStr_x3f(v___x_2880_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2889_; 
lean_dec(v_val_2878_);
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2884_ = v___x_2881_;
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2881_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_a_2882_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2905_; 
v_a_2890_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2892_ = v___x_2881_;
v_isShared_2893_ = v_isSharedCheck_2905_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2881_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2905_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2894_; 
lean_inc(v_a_2890_);
v___x_2894_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_2890_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2898_; 
lean_dec(v_val_2878_);
v___x_2895_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs_spec__1___closed__1));
v___x_2896_ = lean_string_append(v___x_2895_, v_a_2890_);
lean_dec(v_a_2890_);
if (v_isShared_2893_ == 0)
{
lean_ctor_set_tag(v___x_2892_, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2896_);
v___x_2898_ = v___x_2892_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
else
{
lean_object* v_val_2900_; lean_object* v___x_2901_; lean_object* v___x_2903_; 
lean_dec(v_a_2890_);
v_val_2900_ = lean_ctor_get(v___x_2894_, 0);
lean_inc(v_val_2900_);
lean_dec_ref_known(v___x_2894_, 1);
v___x_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2901_, 0, v_val_2878_);
lean_ctor_set(v___x_2901_, 1, v_val_2900_);
if (v_isShared_2893_ == 0)
{
lean_ctor_set(v___x_2892_, 0, v___x_2901_);
v___x_2903_ = v___x_2892_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v___x_2901_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
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
v_j_2845_ = v_x_2843_;
goto v___jp_2844_;
}
v___jp_2844_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2846_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5_spec__10_spec__20___closed__0));
v___x_2847_ = lean_unsigned_to_nat(80u);
v___x_2848_ = l_Lean_Json_pretty(v_j_2845_, v___x_2847_);
v___x_2849_ = lean_string_append(v___x_2846_, v___x_2848_);
lean_dec_ref(v___x_2848_);
v___x_2850_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2851_ = lean_string_append(v___x_2849_, v___x_2850_);
v___x_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
return v___x_2852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__29(size_t v_sz_2907_, size_t v_i_2908_, lean_object* v_bs_2909_){
_start:
{
uint8_t v___x_2910_; 
v___x_2910_ = lean_usize_dec_lt(v_i_2908_, v_sz_2907_);
if (v___x_2910_ == 0)
{
lean_object* v___x_2911_; 
v___x_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_bs_2909_);
return v___x_2911_;
}
else
{
lean_object* v_v_2912_; lean_object* v___x_2913_; 
v_v_2912_ = lean_array_uget_borrowed(v_bs_2909_, v_i_2908_);
lean_inc(v_v_2912_);
v___x_2913_ = l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__28(v_v_2912_);
if (lean_obj_tag(v___x_2913_) == 0)
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2921_; 
lean_dec_ref(v_bs_2909_);
v_a_2914_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2916_ = v___x_2913_;
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2913_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2921_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2919_; 
if (v_isShared_2917_ == 0)
{
v___x_2919_ = v___x_2916_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2914_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2923_; lean_object* v_bs_x27_2924_; size_t v___x_2925_; size_t v___x_2926_; lean_object* v___x_2927_; 
v_a_2922_ = lean_ctor_get(v___x_2913_, 0);
lean_inc(v_a_2922_);
lean_dec_ref_known(v___x_2913_, 1);
v___x_2923_ = lean_unsigned_to_nat(0u);
v_bs_x27_2924_ = lean_array_uset(v_bs_2909_, v_i_2908_, v___x_2923_);
v___x_2925_ = ((size_t)1ULL);
v___x_2926_ = lean_usize_add(v_i_2908_, v___x_2925_);
v___x_2927_ = lean_array_uset(v_bs_x27_2924_, v_i_2908_, v_a_2922_);
v_i_2908_ = v___x_2926_;
v_bs_2909_ = v___x_2927_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__29___boxed(lean_object* v_sz_2929_, lean_object* v_i_2930_, lean_object* v_bs_2931_){
_start:
{
size_t v_sz_boxed_2932_; size_t v_i_boxed_2933_; lean_object* v_res_2934_; 
v_sz_boxed_2932_ = lean_unbox_usize(v_sz_2929_);
lean_dec(v_sz_2929_);
v_i_boxed_2933_ = lean_unbox_usize(v_i_2930_);
lean_dec(v_i_2930_);
v_res_2934_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__29(v_sz_boxed_2932_, v_i_boxed_2933_, v_bs_2931_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16(lean_object* v_x_2935_){
_start:
{
if (lean_obj_tag(v_x_2935_) == 4)
{
lean_object* v_elems_2936_; size_t v_sz_2937_; size_t v___x_2938_; lean_object* v___x_2939_; 
v_elems_2936_ = lean_ctor_get(v_x_2935_, 0);
lean_inc_ref(v_elems_2936_);
lean_dec_ref_known(v_x_2935_, 1);
v_sz_2937_ = lean_array_size(v_elems_2936_);
v___x_2938_ = ((size_t)0ULL);
v___x_2939_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16_spec__29(v_sz_2937_, v___x_2938_, v_elems_2936_);
return v___x_2939_;
}
else
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; 
v___x_2940_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__0));
v___x_2941_ = lean_unsigned_to_nat(80u);
v___x_2942_ = l_Lean_Json_pretty(v_x_2935_, v___x_2941_);
v___x_2943_ = lean_string_append(v___x_2940_, v___x_2942_);
lean_dec_ref(v___x_2942_);
v___x_2944_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_providesOfJson_spec__0___closed__1));
v___x_2945_ = lean_string_append(v___x_2943_, v___x_2944_);
v___x_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
return v___x_2946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9(lean_object* v_j_2947_, lean_object* v_k_2948_){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2949_ = l_Lean_Json_getObjValD(v_j_2947_, v_k_2948_);
v___x_2950_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9_spec__16(v___x_2949_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9___boxed(lean_object* v_j_2951_, lean_object* v_k_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9(v_j_2951_, v_k_2952_);
lean_dec_ref(v_k_2952_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0(lean_object* v_bytes_2958_){
_start:
{
uint8_t v___x_2959_; 
v___x_2959_ = lean_string_validate_utf8(v_bytes_2958_);
if (v___x_2959_ == 0)
{
lean_object* v___x_2960_; 
lean_dec_ref(v_bytes_2958_);
v___x_2960_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__0));
return v___x_2960_;
}
else
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2961_ = lean_string_from_utf8_unchecked(v_bytes_2958_);
v___x_2962_ = l_Lean_Json_parse(v___x_2961_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2962_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2962_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v_a_2971_ = lean_ctor_get(v___x_2962_, 0);
lean_inc_n(v_a_2971_, 2);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2972_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3));
v___x_2973_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1(v_a_2971_, v___x_2972_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec(v_a_2971_);
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2973_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2973_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; 
v_a_2982_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v___x_2973_, 1);
v___x_2983_ = l_Lean_ModuleUsage_usageVersion;
v___x_2984_ = lean_nat_dec_eq(v_a_2982_, v___x_2983_);
lean_dec(v_a_2982_);
if (v___x_2984_ == 0)
{
lean_object* v___x_2985_; 
lean_dec(v_a_2971_);
v___x_2985_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0___closed__1));
return v___x_2985_;
}
else
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2986_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__0));
lean_inc(v_a_2971_);
v___x_2987_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(v_a_2971_, v___x_2986_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec(v_a_2971_);
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2987_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2987_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v_a_2996_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2996_);
lean_dec_ref_known(v___x_2987_, 1);
v___x_2997_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__1));
lean_inc(v_a_2971_);
v___x_2998_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__4(v_a_2971_, v___x_2997_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3006_; 
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_2999_ = lean_ctor_get(v___x_2998_, 0);
v_isSharedCheck_3006_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_3001_ = v___x_2998_;
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v___x_2998_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3004_; 
if (v_isShared_3002_ == 0)
{
v___x_3004_ = v___x_3001_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_a_2999_);
v___x_3004_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
return v___x_3004_;
}
}
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
v_a_3007_ = lean_ctor_get(v___x_2998_, 0);
lean_inc(v_a_3007_);
lean_dec_ref_known(v___x_2998_, 1);
v___x_3008_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2));
lean_inc(v_a_2971_);
v___x_3009_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__5(v_a_2971_, v___x_3008_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3010_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_3009_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_3009_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
else
{
lean_object* v_a_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v_a_3018_ = lean_ctor_get(v___x_3009_, 0);
lean_inc(v_a_3018_);
lean_dec_ref_known(v___x_3009_, 1);
v___x_3019_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__3));
lean_inc(v_a_2971_);
v___x_3020_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6(v_a_2971_, v___x_3019_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_3020_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_3020_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
else
{
lean_object* v_a_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
v_a_3029_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3030_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__4));
lean_inc(v_a_2971_);
v___x_3031_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__7(v_a_2971_, v___x_3030_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3032_ = lean_ctor_get(v___x_3031_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_3031_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_3031_);
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
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v_a_3040_ = lean_ctor_get(v___x_3031_, 0);
lean_inc(v_a_3040_);
lean_dec_ref_known(v___x_3031_, 1);
v___x_3041_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__5));
lean_inc(v_a_2971_);
v___x_3042_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_2971_, v___x_3041_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3050_; 
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3045_ = v___x_3042_;
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3042_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3048_; 
if (v_isShared_3046_ == 0)
{
v___x_3048_ = v___x_3045_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_a_3043_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v_a_3051_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3051_);
lean_dec_ref_known(v___x_3042_, 1);
v___x_3052_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6));
lean_inc(v_a_2971_);
v___x_3053_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_2971_, v___x_3052_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3061_; 
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3056_ = v___x_3053_;
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_3053_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3059_; 
if (v_isShared_3057_ == 0)
{
v___x_3059_ = v___x_3056_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3054_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
else
{
lean_object* v_a_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v_a_3062_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_a_3062_);
lean_dec_ref_known(v___x_3053_, 1);
v___x_3063_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__7));
lean_inc(v_a_2971_);
v___x_3064_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(v_a_2971_, v___x_3063_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_3064_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3064_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v_a_3073_ = lean_ctor_get(v___x_3064_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3064_, 1);
v___x_3074_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__8));
lean_inc(v_a_2971_);
v___x_3075_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(v_a_2971_, v___x_3074_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v_a_3084_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3075_, 1);
v___x_3085_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__9));
lean_inc(v_a_2971_);
v___x_3086_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(v_a_2971_, v___x_3085_);
if (lean_obj_tag(v___x_3086_) == 0)
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
lean_dec(v_a_3084_);
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3087_ = lean_ctor_get(v___x_3086_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3086_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3086_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3086_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v_a_3095_ = lean_ctor_get(v___x_3086_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v___x_3086_, 1);
v___x_3096_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__10));
lean_inc(v_a_2971_);
v___x_3097_ = l_Lean_Json_getObjVal_x3f(v_a_2971_, v___x_3096_);
if (lean_obj_tag(v___x_3097_) == 0)
{
lean_object* v_a_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3105_; 
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3098_ = lean_ctor_get(v___x_3097_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3097_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3100_ = v___x_3097_;
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_a_3098_);
lean_dec(v___x_3097_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3103_; 
if (v_isShared_3101_ == 0)
{
v___x_3103_ = v___x_3100_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_a_3098_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
return v___x_3103_;
}
}
}
else
{
lean_object* v_a_3106_; lean_object* v___x_3107_; 
v_a_3106_ = lean_ctor_get(v___x_3097_, 0);
lean_inc(v_a_3106_);
lean_dec_ref_known(v___x_3097_, 1);
v___x_3107_ = l___private_Lake_Build_UsageCutoff_0__Lake_resolvedOfJson(v_a_3106_);
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3108_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3107_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3107_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
else
{
lean_object* v_a_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v_a_3116_ = lean_ctor_get(v___x_3107_, 0);
lean_inc(v_a_3116_);
lean_dec_ref_known(v___x_3107_, 1);
v___x_3117_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__11));
lean_inc(v_a_2971_);
v___x_3118_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_2971_, v___x_3117_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
lean_dec(v_a_3116_);
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_3118_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3118_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3119_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
else
{
lean_object* v_a_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v_a_3127_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3127_);
lean_dec_ref_known(v___x_3118_, 1);
v___x_3128_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__12));
lean_inc(v_a_2971_);
v___x_3129_ = l_Lean_Json_getObjVal_x3f(v_a_2971_, v___x_3128_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
lean_dec(v_a_3127_);
lean_dec(v_a_3116_);
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3130_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3129_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3129_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
else
{
lean_object* v_a_3138_; lean_object* v___x_3139_; 
v_a_3138_ = lean_ctor_get(v___x_3129_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3129_, 1);
v___x_3139_ = l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson(v_a_3138_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec(v_a_3127_);
lean_dec(v_a_3116_);
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
lean_dec(v_a_2971_);
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3139_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3139_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v_a_3148_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___x_3139_, 1);
v___x_3149_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__13));
v___x_3150_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__9(v_a_2971_, v___x_3149_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3158_; 
lean_dec(v_a_3148_);
lean_dec(v_a_3127_);
lean_dec(v_a_3116_);
lean_dec(v_a_3095_);
lean_dec(v_a_3084_);
lean_dec(v_a_3073_);
lean_dec(v_a_3062_);
lean_dec(v_a_3051_);
lean_dec(v_a_3040_);
lean_dec(v_a_3029_);
lean_dec(v_a_3018_);
lean_dec(v_a_3007_);
lean_dec(v_a_2996_);
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3153_ = v___x_3150_;
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3150_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3154_ == 0)
{
v___x_3156_ = v___x_3153_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3151_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3201_; 
v_a_3159_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3161_ = v___x_3150_;
v_isShared_3162_ = v_isSharedCheck_3201_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_dec(v___x_3150_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3201_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
size_t v_sz_3163_; size_t v___x_3164_; lean_object* v___x_3165_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3192_; lean_object* v___x_3197_; uint8_t v___x_3198_; 
v_sz_3163_ = lean_array_size(v_a_3073_);
v___x_3164_ = ((size_t)0ULL);
v___x_3165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__2(v_sz_3163_, v___x_3164_, v_a_3073_);
v___x_3182_ = lean_box(1);
v___x_3183_ = lean_unsigned_to_nat(0u);
v___x_3197_ = lean_array_get_size(v_a_3084_);
v___x_3198_ = lean_nat_dec_lt(v___x_3183_, v___x_3197_);
if (v___x_3198_ == 0)
{
lean_dec(v_a_3084_);
v___y_3192_ = v___x_3182_;
goto v___jp_3191_;
}
else
{
size_t v___x_3199_; lean_object* v___x_3200_; 
v___x_3199_ = lean_usize_of_nat(v___x_3197_);
v___x_3200_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13(v_a_3084_, v___x_3164_, v___x_3199_, v___x_3182_);
lean_dec(v_a_3084_);
v___y_3192_ = v___x_3200_;
goto v___jp_3191_;
}
v___jp_3166_:
{
size_t v_sz_3170_; lean_object* v___x_3171_; size_t v_sz_3172_; lean_object* v___x_3173_; size_t v_sz_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; uint8_t v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3180_; 
v_sz_3170_ = lean_array_size(v_a_3007_);
v___x_3171_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__10(v_sz_3170_, v___x_3164_, v_a_3007_);
v_sz_3172_ = lean_array_size(v_a_3018_);
v___x_3173_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__11(v_sz_3172_, v___x_3164_, v_a_3018_);
v_sz_3174_ = lean_array_size(v_a_3029_);
v___x_3175_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__12(v_sz_3174_, v___x_3164_, v_a_3029_);
v___x_3176_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v___x_3176_, 0, v_a_3051_);
lean_ctor_set(v___x_3176_, 1, v_a_3062_);
lean_ctor_set(v___x_3176_, 2, v___x_3165_);
lean_ctor_set(v___x_3176_, 3, v___y_3167_);
lean_ctor_set(v___x_3176_, 4, v___y_3168_);
lean_ctor_set(v___x_3176_, 5, v___y_3169_);
lean_ctor_set(v___x_3176_, 6, v___x_3171_);
lean_ctor_set(v___x_3176_, 7, v___x_3173_);
lean_ctor_set(v___x_3176_, 8, v_a_3116_);
lean_ctor_set(v___x_3176_, 9, v_a_3127_);
lean_ctor_set(v___x_3176_, 10, v_a_3148_);
lean_ctor_set(v___x_3176_, 11, v___x_3175_);
lean_ctor_set(v___x_3176_, 12, v_a_3159_);
v___x_3177_ = lean_unbox(v_a_3040_);
lean_dec(v_a_3040_);
lean_ctor_set_uint8(v___x_3176_, sizeof(void*)*13, v___x_3177_);
v___x_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3176_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 0, v___x_3178_);
v___x_3180_ = v___x_3161_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
v___jp_3184_:
{
lean_object* v___x_3187_; uint8_t v___x_3188_; 
v___x_3187_ = lean_array_get_size(v_a_2996_);
v___x_3188_ = lean_nat_dec_lt(v___x_3183_, v___x_3187_);
if (v___x_3188_ == 0)
{
lean_dec(v_a_2996_);
v___y_3167_ = v___y_3185_;
v___y_3168_ = v___y_3186_;
v___y_3169_ = v___x_3182_;
goto v___jp_3166_;
}
else
{
size_t v___x_3189_; lean_object* v___x_3190_; 
v___x_3189_ = lean_usize_of_nat(v___x_3187_);
v___x_3190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13(v_a_2996_, v___x_3164_, v___x_3189_, v___x_3182_);
lean_dec(v_a_2996_);
v___y_3167_ = v___y_3185_;
v___y_3168_ = v___y_3186_;
v___y_3169_ = v___x_3190_;
goto v___jp_3166_;
}
}
v___jp_3191_:
{
lean_object* v___x_3193_; uint8_t v___x_3194_; 
v___x_3193_ = lean_array_get_size(v_a_3095_);
v___x_3194_ = lean_nat_dec_lt(v___x_3183_, v___x_3193_);
if (v___x_3194_ == 0)
{
lean_dec(v_a_3095_);
v___y_3185_ = v___y_3192_;
v___y_3186_ = v___x_3182_;
goto v___jp_3184_;
}
else
{
size_t v___x_3195_; lean_object* v___x_3196_; 
v___x_3195_ = lean_usize_of_nat(v___x_3193_);
v___x_3196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13(v_a_3095_, v___x_3164_, v___x_3195_, v___x_3182_);
lean_dec(v_a_3095_);
v___y_3185_ = v___y_3192_;
v___y_3186_ = v___x_3196_;
goto v___jp_3184_;
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___redArg(lean_object* v_path_3202_, lean_object* v_bytes_3203_, lean_object* v_a_3204_){
_start:
{
lean_object* v___x_3206_; 
v___x_3206_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0(v_bytes_3203_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; lean_object* v_log_3208_; uint8_t v_action_3209_; uint8_t v_wantsRebuild_3210_; uint8_t v_canceled_3211_; lean_object* v_trace_3212_; lean_object* v_buildTime_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3228_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3206_, 1);
v_log_3208_ = lean_ctor_get(v_a_3204_, 0);
v_action_3209_ = lean_ctor_get_uint8(v_a_3204_, sizeof(void*)*3);
v_wantsRebuild_3210_ = lean_ctor_get_uint8(v_a_3204_, sizeof(void*)*3 + 1);
v_canceled_3211_ = lean_ctor_get_uint8(v_a_3204_, sizeof(void*)*3 + 2);
v_trace_3212_ = lean_ctor_get(v_a_3204_, 1);
v_buildTime_3213_ = lean_ctor_get(v_a_3204_, 2);
v_isSharedCheck_3228_ = !lean_is_exclusive(v_a_3204_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3215_ = v_a_3204_;
v_isShared_3216_ = v_isSharedCheck_3228_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_buildTime_3213_);
lean_inc(v_trace_3212_);
lean_inc(v_log_3208_);
lean_dec(v_a_3204_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3228_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; uint8_t v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3224_; 
v___x_3217_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___closed__0));
v___x_3218_ = lean_string_append(v_path_3202_, v___x_3217_);
v___x_3219_ = lean_string_append(v___x_3218_, v_a_3207_);
lean_dec(v_a_3207_);
v___x_3220_ = 2;
v___x_3221_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3221_, 0, v___x_3219_);
lean_ctor_set_uint8(v___x_3221_, sizeof(void*)*1, v___x_3220_);
v___x_3222_ = lean_array_push(v_log_3208_, v___x_3221_);
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 0, v___x_3222_);
v___x_3224_ = v___x_3215_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3222_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v_trace_3212_);
lean_ctor_set(v_reuseFailAlloc_3227_, 2, v_buildTime_3213_);
lean_ctor_set_uint8(v_reuseFailAlloc_3227_, sizeof(void*)*3, v_action_3209_);
lean_ctor_set_uint8(v_reuseFailAlloc_3227_, sizeof(void*)*3 + 1, v_wantsRebuild_3210_);
lean_ctor_set_uint8(v_reuseFailAlloc_3227_, sizeof(void*)*3 + 2, v_canceled_3211_);
v___x_3224_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = lean_box(0);
v___x_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
lean_ctor_set(v___x_3226_, 1, v___x_3224_);
return v___x_3226_;
}
}
}
else
{
lean_object* v_a_3229_; lean_object* v___x_3230_; 
lean_dec_ref(v_path_3202_);
v_a_3229_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3229_);
lean_dec_ref_known(v___x_3206_, 1);
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v_a_3229_);
lean_ctor_set(v___x_3230_, 1, v_a_3204_);
return v___x_3230_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___redArg___boxed(lean_object* v_path_3231_, lean_object* v_bytes_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_){
_start:
{
lean_object* v_res_3235_; 
v_res_3235_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___redArg(v_path_3231_, v_bytes_3232_, v_a_3233_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage(lean_object* v_path_3236_, lean_object* v_expected_x3f_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; 
v___x_3245_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instImpl_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32_));
lean_inc_ref(v_path_3236_);
v___x_3246_ = l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(v_path_3236_, v_expected_x3f_3237_, v_a_3243_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
if (lean_obj_tag(v_a_3247_) == 1)
{
lean_object* v_val_3248_; lean_object* v_snd_3249_; lean_object* v_a_3250_; lean_object* v_fst_3251_; lean_object* v_fst_3252_; lean_object* v_snd_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3302_; 
v_val_3248_ = lean_ctor_get(v_a_3247_, 0);
lean_inc(v_val_3248_);
v_snd_3249_ = lean_ctor_get(v_val_3248_, 1);
lean_inc(v_snd_3249_);
v_a_3250_ = lean_ctor_get(v___x_3246_, 1);
lean_inc(v_a_3250_);
lean_dec_ref_known(v___x_3246_, 2);
v_fst_3251_ = lean_ctor_get(v_val_3248_, 0);
lean_inc(v_fst_3251_);
lean_dec(v_val_3248_);
v_fst_3252_ = lean_ctor_get(v_snd_3249_, 0);
v_snd_3253_ = lean_ctor_get(v_snd_3249_, 1);
v_isSharedCheck_3302_ = !lean_is_exclusive(v_snd_3249_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3255_ = v_snd_3249_;
v_isShared_3256_ = v_isSharedCheck_3302_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_snd_3253_);
lean_inc(v_fst_3252_);
lean_dec(v_snd_3249_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3302_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3257_; lean_object* v_a_3258_; 
lean_inc_ref(v_path_3236_);
v___x_3257_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___redArg(v_path_3236_, v_fst_3251_, v_a_3250_);
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
if (lean_obj_tag(v_a_3258_) == 1)
{
lean_object* v_a_3259_; lean_object* v_val_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3291_; 
v_a_3259_ = lean_ctor_get(v___x_3257_, 1);
lean_inc(v_a_3259_);
lean_dec_ref(v___x_3257_);
v_val_3260_ = lean_ctor_get(v_a_3258_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v_a_3258_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3262_ = v_a_3258_;
v_isShared_3263_ = v_isSharedCheck_3291_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_val_3260_);
lean_dec(v_a_3258_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3291_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v_sidecarCache_3264_; lean_object* v___f_3265_; lean_object* v___x_3266_; 
v_sidecarCache_3264_ = lean_ctor_get(v_a_3242_, 7);
lean_inc(v_fst_3252_);
lean_inc(v_val_3260_);
v___f_3265_ = lean_alloc_closure((void*)(l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___lam__0___boxed), 13, 5);
lean_closure_set(v___f_3265_, 0, v_val_3260_);
lean_closure_set(v___f_3265_, 1, v___x_3245_);
lean_closure_set(v___f_3265_, 2, v_fst_3252_);
lean_closure_set(v___f_3265_, 3, v_snd_3253_);
lean_closure_set(v___f_3265_, 4, v_path_3236_);
lean_inc_ref(v_sidecarCache_3264_);
v___x_3266_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_sidecarCache_3264_, v___f_3265_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3259_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3280_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 1);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3280_ == 0)
{
lean_object* v_unused_3281_; 
v_unused_3281_ = lean_ctor_get(v___x_3266_, 0);
lean_dec(v_unused_3281_);
v___x_3269_ = v___x_3266_;
v_isShared_3270_ = v_isSharedCheck_3280_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_a_3267_);
lean_dec(v___x_3266_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3280_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v___x_3272_; 
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 1, v_fst_3252_);
lean_ctor_set(v___x_3255_, 0, v_val_3260_);
v___x_3272_ = v___x_3255_;
goto v_reusejp_3271_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_val_3260_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v_fst_3252_);
v___x_3272_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3271_;
}
v_reusejp_3271_:
{
lean_object* v___x_3274_; 
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 0, v___x_3272_);
v___x_3274_ = v___x_3262_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
lean_object* v___x_3276_; 
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 0, v___x_3274_);
v___x_3276_ = v___x_3269_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v___x_3274_);
lean_ctor_set(v_reuseFailAlloc_3277_, 1, v_a_3267_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v_a_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3290_; 
lean_del_object(v___x_3262_);
lean_dec(v_val_3260_);
lean_del_object(v___x_3255_);
lean_dec(v_fst_3252_);
v_a_3282_ = lean_ctor_get(v___x_3266_, 0);
v_a_3283_ = lean_ctor_get(v___x_3266_, 1);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3285_ = v___x_3266_;
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_a_3283_);
lean_inc(v_a_3282_);
lean_dec(v___x_3266_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3288_; 
if (v_isShared_3286_ == 0)
{
v___x_3288_ = v___x_3285_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_a_3282_);
lean_ctor_set(v_reuseFailAlloc_3289_, 1, v_a_3283_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
}
}
else
{
lean_object* v_a_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3300_; 
lean_dec(v_a_3258_);
lean_del_object(v___x_3255_);
lean_dec(v_snd_3253_);
lean_dec(v_fst_3252_);
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_path_3236_);
v_a_3292_ = lean_ctor_get(v___x_3257_, 1);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3300_ == 0)
{
lean_object* v_unused_3301_; 
v_unused_3301_ = lean_ctor_get(v___x_3257_, 0);
lean_dec(v_unused_3301_);
v___x_3294_ = v___x_3257_;
v_isShared_3295_ = v_isSharedCheck_3300_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_a_3292_);
lean_dec(v___x_3257_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3300_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v___x_3296_; lean_object* v___x_3298_; 
v___x_3296_ = lean_box(0);
if (v_isShared_3295_ == 0)
{
lean_ctor_set(v___x_3294_, 0, v___x_3296_);
v___x_3298_ = v___x_3294_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v___x_3296_);
lean_ctor_set(v_reuseFailAlloc_3299_, 1, v_a_3292_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
else
{
lean_object* v_a_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3311_; 
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_path_3236_);
v_a_3303_ = lean_ctor_get(v___x_3246_, 1);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3311_ == 0)
{
lean_object* v_unused_3312_; 
v_unused_3312_ = lean_ctor_get(v___x_3246_, 0);
lean_dec(v_unused_3312_);
v___x_3305_ = v___x_3246_;
v_isShared_3306_ = v_isSharedCheck_3311_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_a_3303_);
lean_dec(v___x_3246_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3311_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3307_; lean_object* v___x_3309_; 
v___x_3307_ = lean_box(0);
if (v_isShared_3306_ == 0)
{
lean_ctor_set(v___x_3305_, 0, v___x_3307_);
v___x_3309_ = v___x_3305_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v___x_3307_);
lean_ctor_set(v_reuseFailAlloc_3310_, 1, v_a_3303_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
else
{
lean_object* v_a_3313_; lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3321_; 
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_path_3236_);
v_a_3313_ = lean_ctor_get(v___x_3246_, 0);
v_a_3314_ = lean_ctor_get(v___x_3246_, 1);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3316_ = v___x_3246_;
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_inc(v_a_3313_);
lean_dec(v___x_3246_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3313_);
lean_ctor_set(v_reuseFailAlloc_3320_, 1, v_a_3314_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage___boxed(lean_object* v_path_3322_, lean_object* v_expected_x3f_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_){
_start:
{
lean_object* v_res_3331_; 
v_res_3331_ = l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage(v_path_3322_, v_expected_x3f_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_);
lean_dec_ref(v_a_3328_);
lean_dec(v_a_3327_);
lean_dec(v_a_3326_);
lean_dec(v_a_3325_);
lean_dec(v_expected_x3f_3323_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0(lean_object* v_path_3332_, lean_object* v_bytes_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_){
_start:
{
lean_object* v___x_3341_; 
v___x_3341_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___redArg(v_path_3332_, v_bytes_3333_, v_a_3339_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0___boxed(lean_object* v_path_3342_, lean_object* v_bytes_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_, lean_object* v_a_3349_, lean_object* v_a_3350_){
_start:
{
lean_object* v_res_3351_; 
v_res_3351_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0(v_path_3342_, v_bytes_3343_, v_a_3344_, v_a_3345_, v_a_3346_, v_a_3347_, v_a_3348_, v_a_3349_);
lean_dec_ref(v_a_3348_);
lean_dec(v_a_3347_);
lean_dec(v_a_3346_);
lean_dec(v_a_3345_);
lean_dec_ref(v_a_3344_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1(lean_object* v_00_u03b2_3352_, lean_object* v_m_3353_, lean_object* v_a_3354_, lean_object* v_b_3355_){
_start:
{
lean_object* v___x_3356_; 
v___x_3356_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v_m_3353_, v_a_3354_, v_b_3355_);
return v___x_3356_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2(lean_object* v_00_u03b2_3357_, lean_object* v_a_3358_, lean_object* v_x_3359_){
_start:
{
uint8_t v___x_3360_; 
v___x_3360_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___redArg(v_a_3358_, v_x_3359_);
return v___x_3360_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3361_, lean_object* v_a_3362_, lean_object* v_x_3363_){
_start:
{
uint8_t v_res_3364_; lean_object* v_r_3365_; 
v_res_3364_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__2(v_00_u03b2_3361_, v_a_3362_, v_x_3363_);
lean_dec(v_x_3363_);
lean_dec_ref(v_a_3362_);
v_r_3365_ = lean_box(v_res_3364_);
return v_r_3365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3(lean_object* v_00_u03b2_3366_, lean_object* v_data_3367_){
_start:
{
lean_object* v___x_3368_; 
v___x_3368_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3___redArg(v_data_3367_);
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__4(lean_object* v_00_u03b2_3369_, lean_object* v_a_3370_, lean_object* v_b_3371_, lean_object* v_x_3372_){
_start:
{
lean_object* v___x_3373_; 
v___x_3373_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__4___redArg(v_a_3370_, v_b_3371_, v_x_3372_);
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17(lean_object* v_00_u03b2_3374_, lean_object* v_i_3375_, lean_object* v_source_3376_, lean_object* v_target_3377_){
_start:
{
lean_object* v___x_3378_; 
v___x_3378_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17___redArg(v_i_3375_, v_source_3376_, v_target_3377_);
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17_spec__25(lean_object* v_00_u03b2_3379_, lean_object* v_x_3380_, lean_object* v_x_3381_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1_spec__3_spec__17_spec__25___redArg(v_x_3380_, v_x_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__0(lean_object* v_file_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; 
v___x_3392_ = lean_st_ref_get(v___y_3384_);
v___x_3393_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(v___x_3392_, v_file_3383_);
lean_dec(v___x_3392_);
v___x_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3393_);
lean_ctor_set(v___x_3394_, 1, v___y_3390_);
return v___x_3394_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__0___boxed(lean_object* v_file_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__0(v_file_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v___y_3400_);
lean_dec(v___y_3399_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v_file_3395_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__1(lean_object* v_val_3405_, lean_object* v_fst_3406_, lean_object* v_file_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_){
_start:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3416_ = lean_st_ref_take(v___y_3408_);
v___x_3417_ = lean_box(0);
v___x_3418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3418_, 0, v_val_3405_);
lean_ctor_set(v___x_3418_, 1, v_fst_3406_);
v___x_3419_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v___x_3416_, v_file_3407_, v___x_3418_);
v___x_3420_ = lean_st_ref_put(v___y_3408_, v___x_3419_);
v___x_3421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3417_);
lean_ctor_set(v___x_3421_, 1, v___y_3414_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__1___boxed(lean_object* v_val_3422_, lean_object* v_fst_3423_, lean_object* v_file_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_){
_start:
{
lean_object* v_res_3433_; 
v_res_3433_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__1(v_val_3422_, v_fst_3423_, v_file_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec(v___y_3428_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest(lean_object* v_file_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_){
_start:
{
lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v_log_3446_; uint8_t v_action_3447_; uint8_t v_wantsRebuild_3448_; uint8_t v_canceled_3449_; lean_object* v_trace_3450_; lean_object* v_buildTime_3451_; lean_object* v_fileDigests_3452_; lean_object* v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; lean_object* v___y_3459_; lean_object* v_log_3460_; uint8_t v_action_3461_; uint8_t v_wantsRebuild_3462_; uint8_t v_canceled_3463_; lean_object* v_trace_3464_; lean_object* v_buildTime_3465_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___f_3505_; lean_object* v___x_3506_; 
v_log_3446_ = lean_ctor_get(v_a_3440_, 0);
v_action_3447_ = lean_ctor_get_uint8(v_a_3440_, sizeof(void*)*3);
v_wantsRebuild_3448_ = lean_ctor_get_uint8(v_a_3440_, sizeof(void*)*3 + 1);
v_canceled_3449_ = lean_ctor_get_uint8(v_a_3440_, sizeof(void*)*3 + 2);
v_trace_3450_ = lean_ctor_get(v_a_3440_, 1);
v_buildTime_3451_ = lean_ctor_get(v_a_3440_, 2);
v_fileDigests_3452_ = lean_ctor_get(v_a_3439_, 8);
lean_inc_ref(v_file_3434_);
v___f_3505_ = lean_alloc_closure((void*)(l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3505_, 0, v_file_3434_);
v___x_3506_ = lean_usage_file_stamp(v_file_3434_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref_known(v___x_3506_, 1);
if (lean_obj_tag(v_a_3507_) == 1)
{
lean_object* v_val_3508_; lean_object* v___x_3509_; 
v_val_3508_ = lean_ctor_get(v_a_3507_, 0);
lean_inc(v_val_3508_);
lean_dec_ref_known(v_a_3507_, 1);
lean_inc_ref(v_a_3435_);
lean_inc_ref(v_fileDigests_3452_);
v___x_3509_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_fileDigests_3452_, v___f_3505_, v_a_3435_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_object* v_a_3510_; 
v_a_3510_ = lean_ctor_get(v___x_3509_, 0);
if (lean_obj_tag(v_a_3510_) == 1)
{
lean_object* v_val_3511_; lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3522_; 
v_val_3511_ = lean_ctor_get(v_a_3510_, 0);
lean_inc(v_val_3511_);
v_a_3512_ = lean_ctor_get(v___x_3509_, 1);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3522_ == 0)
{
lean_object* v_unused_3523_; 
v_unused_3523_ = lean_ctor_get(v___x_3509_, 0);
lean_dec(v_unused_3523_);
v___x_3514_ = v___x_3509_;
v_isShared_3515_ = v_isSharedCheck_3522_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3509_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3522_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v_fst_3516_; lean_object* v_snd_3517_; uint8_t v___x_3518_; 
v_fst_3516_ = lean_ctor_get(v_val_3511_, 0);
lean_inc(v_fst_3516_);
v_snd_3517_ = lean_ctor_get(v_val_3511_, 1);
lean_inc(v_snd_3517_);
lean_dec(v_val_3511_);
v___x_3518_ = l_Lean_ModuleUsage_instBEqFileStamp_beq(v_fst_3516_, v_val_3508_);
lean_dec(v_val_3508_);
lean_dec(v_fst_3516_);
if (v___x_3518_ == 0)
{
lean_dec(v_snd_3517_);
lean_del_object(v___x_3514_);
v___y_3493_ = v_a_3435_;
v___y_3494_ = v_a_3436_;
v___y_3495_ = v_a_3437_;
v___y_3496_ = v_a_3438_;
v___y_3497_ = v_a_3439_;
v___y_3498_ = v_a_3512_;
goto v___jp_3492_;
}
else
{
lean_object* v___x_3520_; 
lean_dec_ref(v_a_3435_);
lean_dec_ref(v_file_3434_);
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v_snd_3517_);
v___x_3520_ = v___x_3514_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_snd_3517_);
lean_ctor_set(v_reuseFailAlloc_3521_, 1, v_a_3512_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
else
{
lean_object* v_a_3524_; 
lean_dec(v_val_3508_);
v_a_3524_ = lean_ctor_get(v___x_3509_, 1);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3509_, 2);
v___y_3493_ = v_a_3435_;
v___y_3494_ = v_a_3436_;
v___y_3495_ = v_a_3437_;
v___y_3496_ = v_a_3438_;
v___y_3497_ = v_a_3439_;
v___y_3498_ = v_a_3524_;
goto v___jp_3492_;
}
}
else
{
lean_object* v_a_3525_; lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3533_; 
lean_dec(v_val_3508_);
lean_dec_ref(v_a_3435_);
lean_dec_ref(v_file_3434_);
v_a_3525_ = lean_ctor_get(v___x_3509_, 0);
v_a_3526_ = lean_ctor_get(v___x_3509_, 1);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3528_ = v___x_3509_;
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_inc(v_a_3525_);
lean_dec(v___x_3509_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3531_; 
if (v_isShared_3529_ == 0)
{
v___x_3531_ = v___x_3528_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_a_3525_);
lean_ctor_set(v_reuseFailAlloc_3532_, 1, v_a_3526_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
else
{
lean_inc(v_buildTime_3451_);
lean_inc_ref(v_trace_3450_);
lean_inc_ref(v_log_3446_);
lean_dec(v_a_3507_);
lean_dec_ref(v___f_3505_);
v___y_3454_ = v_a_3435_;
v___y_3455_ = v_a_3436_;
v___y_3456_ = v_a_3437_;
v___y_3457_ = v_a_3438_;
v___y_3458_ = v_a_3439_;
v___y_3459_ = v_a_3440_;
v_log_3460_ = v_log_3446_;
v_action_3461_ = v_action_3447_;
v_wantsRebuild_3462_ = v_wantsRebuild_3448_;
v_canceled_3463_ = v_canceled_3449_;
v_trace_3464_ = v_trace_3450_;
v_buildTime_3465_ = v_buildTime_3451_;
goto v___jp_3453_;
}
}
else
{
lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3547_; 
lean_inc(v_buildTime_3451_);
lean_inc_ref(v_trace_3450_);
lean_inc_ref(v_log_3446_);
lean_dec_ref(v___f_3505_);
lean_dec_ref(v_a_3435_);
lean_dec_ref(v_file_3434_);
v_isSharedCheck_3547_ = !lean_is_exclusive(v_a_3440_);
if (v_isSharedCheck_3547_ == 0)
{
lean_object* v_unused_3548_; lean_object* v_unused_3549_; lean_object* v_unused_3550_; 
v_unused_3548_ = lean_ctor_get(v_a_3440_, 2);
lean_dec(v_unused_3548_);
v_unused_3549_ = lean_ctor_get(v_a_3440_, 1);
lean_dec(v_unused_3549_);
v_unused_3550_ = lean_ctor_get(v_a_3440_, 0);
lean_dec(v_unused_3550_);
v___x_3535_ = v_a_3440_;
v_isShared_3536_ = v_isSharedCheck_3547_;
goto v_resetjp_3534_;
}
else
{
lean_dec(v_a_3440_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3547_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v_a_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3544_; 
v_a_3537_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3537_);
lean_dec_ref_known(v___x_3506_, 1);
v___x_3538_ = lean_io_error_to_string(v_a_3537_);
v___x_3539_ = 3;
v___x_3540_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3540_, 0, v___x_3538_);
lean_ctor_set_uint8(v___x_3540_, sizeof(void*)*1, v___x_3539_);
v___x_3541_ = lean_array_get_size(v_log_3446_);
v___x_3542_ = lean_array_push(v_log_3446_, v___x_3540_);
if (v_isShared_3536_ == 0)
{
lean_ctor_set(v___x_3535_, 0, v___x_3542_);
v___x_3544_ = v___x_3535_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v___x_3542_);
lean_ctor_set(v_reuseFailAlloc_3546_, 1, v_trace_3450_);
lean_ctor_set(v_reuseFailAlloc_3546_, 2, v_buildTime_3451_);
lean_ctor_set_uint8(v_reuseFailAlloc_3546_, sizeof(void*)*3, v_action_3447_);
lean_ctor_set_uint8(v_reuseFailAlloc_3546_, sizeof(void*)*3 + 1, v_wantsRebuild_3448_);
lean_ctor_set_uint8(v_reuseFailAlloc_3546_, sizeof(void*)*3 + 2, v_canceled_3449_);
v___x_3544_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3541_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
return v___x_3545_;
}
}
}
v___jp_3442_:
{
lean_object* v___x_3445_; 
v___x_3445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___y_3443_);
lean_ctor_set(v___x_3445_, 1, v___y_3444_);
return v___x_3445_;
}
v___jp_3453_:
{
lean_object* v___x_3466_; 
v___x_3466_ = lean_usage_file_digest_stamped(v_file_3434_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; lean_object* v_snd_3468_; 
lean_dec(v_buildTime_3465_);
lean_dec_ref(v_trace_3464_);
lean_dec_ref(v_log_3460_);
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v___x_3466_, 1);
v_snd_3468_ = lean_ctor_get(v_a_3467_, 1);
if (lean_obj_tag(v_snd_3468_) == 1)
{
lean_object* v_fst_3469_; lean_object* v_val_3470_; lean_object* v___f_3471_; lean_object* v___x_3472_; 
lean_inc_ref(v_snd_3468_);
v_fst_3469_ = lean_ctor_get(v_a_3467_, 0);
lean_inc_n(v_fst_3469_, 2);
lean_dec(v_a_3467_);
v_val_3470_ = lean_ctor_get(v_snd_3468_, 0);
lean_inc(v_val_3470_);
lean_dec_ref_known(v_snd_3468_, 1);
v___f_3471_ = lean_alloc_closure((void*)(l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___lam__1___boxed), 11, 3);
lean_closure_set(v___f_3471_, 0, v_val_3470_);
lean_closure_set(v___f_3471_, 1, v_fst_3469_);
lean_closure_set(v___f_3471_, 2, v_file_3434_);
lean_inc_ref(v_fileDigests_3452_);
v___x_3472_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_fileDigests_3452_, v___f_3471_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 1);
lean_inc(v_a_3473_);
lean_dec_ref_known(v___x_3472_, 2);
v___y_3443_ = v_fst_3469_;
v___y_3444_ = v_a_3473_;
goto v___jp_3442_;
}
else
{
lean_object* v_a_3474_; lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
lean_dec(v_fst_3469_);
v_a_3474_ = lean_ctor_get(v___x_3472_, 0);
v_a_3475_ = lean_ctor_get(v___x_3472_, 1);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3477_ = v___x_3472_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_inc(v_a_3474_);
lean_dec(v___x_3472_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3474_);
lean_ctor_set(v_reuseFailAlloc_3481_, 1, v_a_3475_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
else
{
lean_object* v_fst_3483_; 
lean_dec_ref(v___y_3454_);
lean_dec_ref(v_file_3434_);
v_fst_3483_ = lean_ctor_get(v_a_3467_, 0);
lean_inc(v_fst_3483_);
lean_dec(v_a_3467_);
v___y_3443_ = v_fst_3483_;
v___y_3444_ = v___y_3459_;
goto v___jp_3442_;
}
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3485_; uint8_t v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
lean_dec_ref(v___y_3459_);
lean_dec_ref(v___y_3454_);
lean_dec_ref(v_file_3434_);
v_a_3484_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3466_, 1);
v___x_3485_ = lean_io_error_to_string(v_a_3484_);
v___x_3486_ = 3;
v___x_3487_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3487_, 0, v___x_3485_);
lean_ctor_set_uint8(v___x_3487_, sizeof(void*)*1, v___x_3486_);
v___x_3488_ = lean_array_get_size(v_log_3460_);
v___x_3489_ = lean_array_push(v_log_3460_, v___x_3487_);
v___x_3490_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
lean_ctor_set(v___x_3490_, 1, v_trace_3464_);
lean_ctor_set(v___x_3490_, 2, v_buildTime_3465_);
lean_ctor_set_uint8(v___x_3490_, sizeof(void*)*3, v_action_3461_);
lean_ctor_set_uint8(v___x_3490_, sizeof(void*)*3 + 1, v_wantsRebuild_3462_);
lean_ctor_set_uint8(v___x_3490_, sizeof(void*)*3 + 2, v_canceled_3463_);
v___x_3491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3488_);
lean_ctor_set(v___x_3491_, 1, v___x_3490_);
return v___x_3491_;
}
}
v___jp_3492_:
{
lean_object* v_log_3499_; uint8_t v_action_3500_; uint8_t v_wantsRebuild_3501_; uint8_t v_canceled_3502_; lean_object* v_trace_3503_; lean_object* v_buildTime_3504_; 
v_log_3499_ = lean_ctor_get(v___y_3498_, 0);
lean_inc_ref(v_log_3499_);
v_action_3500_ = lean_ctor_get_uint8(v___y_3498_, sizeof(void*)*3);
v_wantsRebuild_3501_ = lean_ctor_get_uint8(v___y_3498_, sizeof(void*)*3 + 1);
v_canceled_3502_ = lean_ctor_get_uint8(v___y_3498_, sizeof(void*)*3 + 2);
v_trace_3503_ = lean_ctor_get(v___y_3498_, 1);
lean_inc_ref(v_trace_3503_);
v_buildTime_3504_ = lean_ctor_get(v___y_3498_, 2);
lean_inc(v_buildTime_3504_);
v___y_3454_ = v___y_3493_;
v___y_3455_ = v___y_3494_;
v___y_3456_ = v___y_3495_;
v___y_3457_ = v___y_3496_;
v___y_3458_ = v___y_3497_;
v___y_3459_ = v___y_3498_;
v_log_3460_ = v_log_3499_;
v_action_3461_ = v_action_3500_;
v_wantsRebuild_3462_ = v_wantsRebuild_3501_;
v_canceled_3463_ = v_canceled_3502_;
v_trace_3464_ = v_trace_3503_;
v_buildTime_3465_ = v_buildTime_3504_;
goto v___jp_3453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest___boxed(lean_object* v_file_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest(v_file_3551_, v_a_3552_, v_a_3553_, v_a_3554_, v_a_3555_, v_a_3556_, v_a_3557_);
lean_dec_ref(v_a_3556_);
lean_dec(v_a_3555_);
lean_dec(v_a_3554_);
lean_dec(v_a_3553_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(lean_object* v_hashes_3560_, lean_object* v_file_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3569_ = lean_st_ref_get(v_hashes_3560_);
v___x_3570_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(v___x_3569_, v_file_3561_);
lean_dec(v___x_3569_);
if (lean_obj_tag(v___x_3570_) == 1)
{
lean_object* v_val_3571_; lean_object* v___x_3572_; 
lean_dec_ref(v_a_3562_);
lean_dec_ref(v_file_3561_);
v_val_3571_ = lean_ctor_get(v___x_3570_, 0);
lean_inc(v_val_3571_);
lean_dec_ref_known(v___x_3570_, 1);
v___x_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3572_, 0, v_val_3571_);
lean_ctor_set(v___x_3572_, 1, v_a_3567_);
return v___x_3572_;
}
else
{
lean_object* v___x_3573_; 
lean_dec(v___x_3570_);
lean_inc_ref(v_file_3561_);
v___x_3573_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash_stampedDigest(v_file_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3585_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
v_a_3575_ = lean_ctor_get(v___x_3573_, 1);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3577_ = v___x_3573_;
v_isShared_3578_ = v_isSharedCheck_3585_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_inc(v_a_3574_);
lean_dec(v___x_3573_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3585_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3579_ = lean_st_ref_take(v_hashes_3560_);
lean_inc(v_a_3574_);
v___x_3580_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v___x_3579_, v_file_3561_, v_a_3574_);
v___x_3581_ = lean_st_ref_put(v_hashes_3560_, v___x_3580_);
if (v_isShared_3578_ == 0)
{
v___x_3583_ = v___x_3577_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3574_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v_a_3575_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
else
{
lean_dec_ref(v_file_3561_);
return v___x_3573_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_contentHash___boxed(lean_object* v_hashes_3586_, lean_object* v_file_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(v_hashes_3586_, v_file_3587_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_);
lean_dec_ref(v_a_3592_);
lean_dec(v_a_3591_);
lean_dec(v_a_3590_);
lean_dec(v_a_3589_);
lean_dec(v_hashes_3586_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_modsysHash_spec__1(lean_object* v_as_3596_, size_t v_i_3597_, size_t v_stop_3598_, lean_object* v_b_3599_){
_start:
{
uint8_t v___x_3600_; 
v___x_3600_ = lean_usize_dec_eq(v_i_3597_, v_stop_3598_);
if (v___x_3600_ == 0)
{
lean_object* v___x_3601_; lean_object* v___x_3602_; size_t v___x_3603_; size_t v___x_3604_; 
v___x_3601_ = lean_array_uget_borrowed(v_as_3596_, v_i_3597_);
v___x_3602_ = l_Array_append___redArg(v_b_3599_, v___x_3601_);
v___x_3603_ = ((size_t)1ULL);
v___x_3604_ = lean_usize_add(v_i_3597_, v___x_3603_);
v_i_3597_ = v___x_3604_;
v_b_3599_ = v___x_3602_;
goto _start;
}
else
{
return v_b_3599_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_modsysHash_spec__1___boxed(lean_object* v_as_3606_, lean_object* v_i_3607_, lean_object* v_stop_3608_, lean_object* v_b_3609_){
_start:
{
size_t v_i_boxed_3610_; size_t v_stop_boxed_3611_; lean_object* v_res_3612_; 
v_i_boxed_3610_ = lean_unbox_usize(v_i_3607_);
lean_dec(v_i_3607_);
v_stop_boxed_3611_ = lean_unbox_usize(v_stop_3608_);
lean_dec(v_stop_3608_);
v_res_3612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_modsysHash_spec__1(v_as_3606_, v_i_boxed_3610_, v_stop_boxed_3611_, v_b_3609_);
lean_dec_ref(v_as_3606_);
return v_res_3612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_modsysHash_spec__0(lean_object* v_hashes_3613_, lean_object* v_as_3614_, size_t v_sz_3615_, size_t v_i_3616_, lean_object* v_b_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_){
_start:
{
uint8_t v___x_3625_; 
v___x_3625_ = lean_usize_dec_lt(v_i_3616_, v_sz_3615_);
if (v___x_3625_ == 0)
{
lean_object* v___x_3626_; 
lean_dec_ref(v___y_3618_);
v___x_3626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3626_, 0, v_b_3617_);
lean_ctor_set(v___x_3626_, 1, v___y_3623_);
return v___x_3626_;
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3628_; 
v_a_3627_ = lean_array_uget_borrowed(v_as_3614_, v_i_3616_);
lean_inc_ref(v___y_3618_);
lean_inc(v_a_3627_);
v___x_3628_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(v_hashes_3613_, v_a_3627_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v_a_3629_; lean_object* v_a_3630_; lean_object* v___x_3631_; size_t v___x_3632_; size_t v___x_3633_; 
v_a_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc(v_a_3629_);
v_a_3630_ = lean_ctor_get(v___x_3628_, 1);
lean_inc(v_a_3630_);
lean_dec_ref_known(v___x_3628_, 2);
v___x_3631_ = l_Lean_ModuleUsage_Enc_digest(v_b_3617_, v_a_3629_);
lean_dec(v_a_3629_);
v___x_3632_ = ((size_t)1ULL);
v___x_3633_ = lean_usize_add(v_i_3616_, v___x_3632_);
v_i_3616_ = v___x_3633_;
v_b_3617_ = v___x_3631_;
v___y_3623_ = v_a_3630_;
goto _start;
}
else
{
lean_object* v_a_3635_; lean_object* v_a_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3643_; 
lean_dec_ref(v___y_3618_);
lean_dec_ref(v_b_3617_);
v_a_3635_ = lean_ctor_get(v___x_3628_, 0);
v_a_3636_ = lean_ctor_get(v___x_3628_, 1);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3638_ = v___x_3628_;
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_a_3636_);
lean_inc(v_a_3635_);
lean_dec(v___x_3628_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3641_; 
if (v_isShared_3639_ == 0)
{
v___x_3641_ = v___x_3638_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_a_3635_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v_a_3636_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_modsysHash_spec__0___boxed(lean_object* v_hashes_3644_, lean_object* v_as_3645_, lean_object* v_sz_3646_, lean_object* v_i_3647_, lean_object* v_b_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_){
_start:
{
size_t v_sz_boxed_3656_; size_t v_i_boxed_3657_; lean_object* v_res_3658_; 
v_sz_boxed_3656_ = lean_unbox_usize(v_sz_3646_);
lean_dec(v_sz_3646_);
v_i_boxed_3657_ = lean_unbox_usize(v_i_3647_);
lean_dec(v_i_3647_);
v_res_3658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_modsysHash_spec__0(v_hashes_3644_, v_as_3645_, v_sz_boxed_3656_, v_i_boxed_3657_, v_b_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec(v___y_3652_);
lean_dec(v___y_3651_);
lean_dec(v___y_3650_);
lean_dec_ref(v_as_3645_);
lean_dec(v_hashes_3644_);
return v_res_3658_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2(lean_object* v_hashes_3661_, lean_object* v_init_3662_, lean_object* v_x_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_){
_start:
{
if (lean_obj_tag(v_x_3663_) == 0)
{
lean_object* v_k_3671_; lean_object* v_v_3672_; lean_object* v_l_3673_; lean_object* v_r_3674_; lean_object* v___x_3675_; 
v_k_3671_ = lean_ctor_get(v_x_3663_, 1);
lean_inc(v_k_3671_);
v_v_3672_ = lean_ctor_get(v_x_3663_, 2);
lean_inc(v_v_3672_);
v_l_3673_ = lean_ctor_get(v_x_3663_, 3);
lean_inc(v_l_3673_);
v_r_3674_ = lean_ctor_get(v_x_3663_, 4);
lean_inc(v_r_3674_);
lean_dec_ref_known(v_x_3663_, 5);
lean_inc_ref(v___y_3664_);
v___x_3675_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2(v_hashes_3661_, v_init_3662_, v_l_3673_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_object* v_a_3676_; lean_object* v_a_3677_; lean_object* v_a_3678_; lean_object* v___y_3680_; lean_object* v___x_3699_; 
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_a_3676_);
v_a_3677_ = lean_ctor_get(v___x_3675_, 1);
lean_inc(v_a_3677_);
lean_dec_ref_known(v___x_3675_, 2);
v_a_3678_ = lean_ctor_get(v_a_3676_, 0);
lean_inc(v_a_3678_);
lean_dec(v_a_3676_);
v___x_3699_ = l_Lean_ImportArtifacts_oleanServer_x3f(v_v_3672_);
if (lean_obj_tag(v___x_3699_) == 0)
{
lean_dec(v_v_3672_);
lean_dec(v_k_3671_);
v_init_3662_ = v_a_3678_;
v_x_3663_ = v_r_3674_;
v___y_3669_ = v_a_3677_;
goto _start;
}
else
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; uint8_t v___x_3704_; 
lean_dec_ref_known(v___x_3699_, 1);
v___x_3701_ = lean_unsigned_to_nat(0u);
v___x_3702_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2___closed__0));
v___x_3703_ = lean_array_get_size(v_v_3672_);
v___x_3704_ = lean_nat_dec_lt(v___x_3701_, v___x_3703_);
if (v___x_3704_ == 0)
{
lean_dec(v_v_3672_);
v___y_3680_ = v___x_3702_;
goto v___jp_3679_;
}
else
{
size_t v___x_3705_; size_t v___x_3706_; lean_object* v___x_3707_; 
v___x_3705_ = ((size_t)0ULL);
v___x_3706_ = lean_usize_of_nat(v___x_3703_);
v___x_3707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_modsysHash_spec__1(v_v_3672_, v___x_3705_, v___x_3706_, v___x_3702_);
lean_dec(v_v_3672_);
v___y_3680_ = v___x_3707_;
goto v___jp_3679_;
}
}
v___jp_3679_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; size_t v_sz_3684_; size_t v___x_3685_; lean_object* v___x_3686_; 
v___x_3681_ = l_Lean_ModuleUsage_Enc_name(v_a_3678_, v_k_3671_);
v___x_3682_ = lean_array_get_size(v___y_3680_);
v___x_3683_ = l_Lean_ModuleUsage_Enc_nat(v___x_3681_, v___x_3682_);
v_sz_3684_ = lean_array_size(v___y_3680_);
v___x_3685_ = ((size_t)0ULL);
lean_inc_ref(v___y_3664_);
v___x_3686_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_modsysHash_spec__0(v_hashes_3661_, v___y_3680_, v_sz_3684_, v___x_3685_, v___x_3683_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v_a_3677_);
lean_dec_ref(v___y_3680_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; lean_object* v_a_3688_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3687_);
v_a_3688_ = lean_ctor_get(v___x_3686_, 1);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3686_, 2);
v_init_3662_ = v_a_3687_;
v_x_3663_ = v_r_3674_;
v___y_3669_ = v_a_3688_;
goto _start;
}
else
{
lean_object* v_a_3690_; lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3698_; 
lean_dec(v_r_3674_);
lean_dec_ref(v___y_3664_);
v_a_3690_ = lean_ctor_get(v___x_3686_, 0);
v_a_3691_ = lean_ctor_get(v___x_3686_, 1);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3693_ = v___x_3686_;
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_inc(v_a_3690_);
lean_dec(v___x_3686_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3696_; 
if (v_isShared_3694_ == 0)
{
v___x_3696_ = v___x_3693_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3690_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v_a_3691_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
}
else
{
lean_dec(v_r_3674_);
lean_dec(v_v_3672_);
lean_dec(v_k_3671_);
lean_dec_ref(v___y_3664_);
return v___x_3675_;
}
}
else
{
lean_object* v___x_3708_; lean_object* v___x_3709_; 
lean_dec_ref(v___y_3664_);
v___x_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3708_, 0, v_init_3662_);
v___x_3709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3708_);
lean_ctor_set(v___x_3709_, 1, v___y_3669_);
return v___x_3709_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2___boxed(lean_object* v_hashes_3710_, lean_object* v_init_3711_, lean_object* v_x_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2(v_hashes_3710_, v_init_3711_, v_x_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec(v___y_3715_);
lean_dec(v___y_3714_);
lean_dec(v_hashes_3710_);
return v_res_3720_;
}
}
static lean_object* _init_l_Lake_modsysHash___closed__0(void){
_start:
{
lean_object* v___x_3721_; lean_object* v_e_3722_; 
v___x_3721_ = lean_unsigned_to_nat(256u);
v_e_3722_ = lean_mk_empty_byte_array(v___x_3721_);
return v_e_3722_;
}
}
LEAN_EXPORT lean_object* l_Lake_modsysHash(lean_object* v_hashes_3723_, lean_object* v_importArts_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_){
_start:
{
lean_object* v_a_3733_; lean_object* v_a_3734_; lean_object* v_e_3737_; lean_object* v___x_3738_; 
v_e_3737_ = lean_obj_once(&l_Lake_modsysHash___closed__0, &l_Lake_modsysHash___closed__0_once, _init_l_Lake_modsysHash___closed__0);
v___x_3738_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lake_modsysHash_spec__2(v_hashes_3723_, v_e_3737_, v_importArts_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_, v_a_3729_, v_a_3730_);
if (lean_obj_tag(v___x_3738_) == 0)
{
lean_object* v_a_3739_; lean_object* v_a_3740_; lean_object* v_a_3741_; 
v_a_3739_ = lean_ctor_get(v___x_3738_, 0);
lean_inc(v_a_3739_);
v_a_3740_ = lean_ctor_get(v___x_3738_, 1);
lean_inc(v_a_3740_);
lean_dec_ref_known(v___x_3738_, 2);
v_a_3741_ = lean_ctor_get(v_a_3739_, 0);
lean_inc(v_a_3741_);
lean_dec(v_a_3739_);
v_a_3733_ = v_a_3741_;
v_a_3734_ = v_a_3740_;
goto v___jp_3732_;
}
else
{
lean_object* v_a_3742_; lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
v_a_3742_ = lean_ctor_get(v___x_3738_, 0);
v_a_3743_ = lean_ctor_get(v___x_3738_, 1);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3738_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3738_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_inc(v_a_3742_);
lean_dec(v___x_3738_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3742_);
lean_ctor_set(v_reuseFailAlloc_3749_, 1, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
v___jp_3732_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3735_ = l_Lean_ModuleUsage_Enc_finish(v_a_3733_);
lean_dec_ref(v_a_3733_);
v___x_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3735_);
lean_ctor_set(v___x_3736_, 1, v_a_3734_);
return v___x_3736_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_modsysHash___boxed(lean_object* v_hashes_3751_, lean_object* v_importArts_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_, lean_object* v_a_3756_, lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_){
_start:
{
lean_object* v_res_3760_; 
v_res_3760_ = l_Lake_modsysHash(v_hashes_3751_, v_importArts_3752_, v_a_3753_, v_a_3754_, v_a_3755_, v_a_3756_, v_a_3757_, v_a_3758_);
lean_dec_ref(v_a_3757_);
lean_dec(v_a_3756_);
lean_dec(v_a_3755_);
lean_dec(v_a_3754_);
lean_dec(v_hashes_3751_);
return v_res_3760_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4(lean_object* v_bytes_3765_){
_start:
{
uint8_t v___x_3766_; 
v___x_3766_ = lean_string_validate_utf8(v_bytes_3765_);
if (v___x_3766_ == 0)
{
lean_object* v___x_3767_; 
lean_dec_ref(v_bytes_3765_);
v___x_3767_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__0));
return v___x_3767_;
}
else
{
lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3768_ = lean_string_from_utf8_unchecked(v_bytes_3765_);
v___x_3769_ = l_Lean_Json_parse(v___x_3768_);
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3777_; 
v_a_3770_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3772_ = v___x_3769_;
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3769_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
v_a_3778_ = lean_ctor_get(v___x_3769_, 0);
lean_inc_n(v_a_3778_, 2);
lean_dec_ref_known(v___x_3769_, 1);
v___x_3779_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3));
v___x_3780_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1(v_a_3778_, v___x_3779_);
if (lean_obj_tag(v___x_3780_) == 0)
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
lean_dec(v_a_3778_);
v_a_3781_ = lean_ctor_get(v___x_3780_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3780_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3780_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3780_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3790_; uint8_t v___x_3791_; 
v_a_3789_ = lean_ctor_get(v___x_3780_, 0);
lean_inc(v_a_3789_);
lean_dec_ref_known(v___x_3780_, 1);
v___x_3790_ = l_Lean_ModuleUsage_usageVersion;
v___x_3791_ = lean_nat_dec_eq(v_a_3789_, v___x_3790_);
lean_dec(v_a_3789_);
if (v___x_3791_ == 0)
{
lean_object* v___x_3792_; 
lean_dec(v_a_3778_);
v___x_3792_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4___closed__1));
return v___x_3792_;
}
else
{
lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3793_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__0));
lean_inc(v_a_3778_);
v___x_3794_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__3(v_a_3778_, v___x_3793_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
lean_dec(v_a_3778_);
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___x_3794_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3794_);
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
v_reuseFailAlloc_3801_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
v_a_3803_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3803_);
lean_dec_ref_known(v___x_3794_, 1);
v___x_3804_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__3));
lean_inc(v_a_3778_);
v___x_3805_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__6(v_a_3778_, v___x_3804_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3813_; 
lean_dec(v_a_3803_);
lean_dec(v_a_3778_);
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3808_ = v___x_3805_;
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3805_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3811_; 
if (v_isShared_3809_ == 0)
{
v___x_3811_ = v___x_3808_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_a_3806_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v_a_3814_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3814_);
lean_dec_ref_known(v___x_3805_, 1);
v___x_3815_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__5));
lean_inc(v_a_3778_);
v___x_3816_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_3778_, v___x_3815_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_dec(v_a_3814_);
lean_dec(v_a_3803_);
lean_dec(v_a_3778_);
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3816_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3816_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
else
{
lean_object* v_a_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; 
v_a_3825_ = lean_ctor_get(v___x_3816_, 0);
lean_inc(v_a_3825_);
lean_dec_ref_known(v___x_3816_, 1);
v___x_3826_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6));
lean_inc(v_a_3778_);
v___x_3827_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_3778_, v___x_3826_);
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v_a_3828_; lean_object* v___x_3830_; uint8_t v_isShared_3831_; uint8_t v_isSharedCheck_3835_; 
lean_dec(v_a_3825_);
lean_dec(v_a_3814_);
lean_dec(v_a_3803_);
lean_dec(v_a_3778_);
v_a_3828_ = lean_ctor_get(v___x_3827_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3830_ = v___x_3827_;
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
else
{
lean_inc(v_a_3828_);
lean_dec(v___x_3827_);
v___x_3830_ = lean_box(0);
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
v_resetjp_3829_:
{
lean_object* v___x_3833_; 
if (v_isShared_3831_ == 0)
{
v___x_3833_ = v___x_3830_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v_a_3828_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
else
{
lean_object* v_a_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v_a_3836_ = lean_ctor_get(v___x_3827_, 0);
lean_inc(v_a_3836_);
lean_dec_ref_known(v___x_3827_, 1);
v___x_3837_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__11));
lean_inc(v_a_3778_);
v___x_3838_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_3778_, v___x_3837_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
lean_dec(v_a_3836_);
lean_dec(v_a_3825_);
lean_dec(v_a_3814_);
lean_dec(v_a_3803_);
lean_dec(v_a_3778_);
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3838_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3838_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; 
v_a_3847_ = lean_ctor_get(v___x_3838_, 0);
lean_inc(v_a_3847_);
lean_dec_ref_known(v___x_3838_, 1);
v___x_3848_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__12));
v___x_3849_ = l_Lean_Json_getObjVal_x3f(v_a_3778_, v___x_3848_);
if (lean_obj_tag(v___x_3849_) == 0)
{
lean_object* v_a_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3857_; 
lean_dec(v_a_3847_);
lean_dec(v_a_3836_);
lean_dec(v_a_3825_);
lean_dec(v_a_3814_);
lean_dec(v_a_3803_);
v_a_3850_ = lean_ctor_get(v___x_3849_, 0);
v_isSharedCheck_3857_ = !lean_is_exclusive(v___x_3849_);
if (v_isSharedCheck_3857_ == 0)
{
v___x_3852_ = v___x_3849_;
v_isShared_3853_ = v_isSharedCheck_3857_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_a_3850_);
lean_dec(v___x_3849_);
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
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3858_; lean_object* v___x_3859_; 
v_a_3858_ = lean_ctor_get(v___x_3849_, 0);
lean_inc(v_a_3858_);
lean_dec_ref_known(v___x_3849_, 1);
v___x_3859_ = l___private_Lake_Build_UsageCutoff_0__Lake_providesOfJson(v_a_3858_);
if (lean_obj_tag(v___x_3859_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
lean_dec(v_a_3847_);
lean_dec(v_a_3836_);
lean_dec(v_a_3825_);
lean_dec(v_a_3814_);
lean_dec(v_a_3803_);
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3859_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3859_);
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
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3889_; 
v_a_3868_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3889_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3870_ = v___x_3859_;
v_isShared_3871_ = v_isSharedCheck_3889_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_a_3868_);
lean_dec(v___x_3859_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3889_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___y_3873_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3882_ = lean_box(1);
v___x_3883_ = lean_unsigned_to_nat(0u);
v___x_3884_ = lean_array_get_size(v_a_3803_);
v___x_3885_ = lean_nat_dec_lt(v___x_3883_, v___x_3884_);
if (v___x_3885_ == 0)
{
lean_dec(v_a_3803_);
v___y_3873_ = v___x_3882_;
goto v___jp_3872_;
}
else
{
size_t v___x_3886_; size_t v___x_3887_; lean_object* v___x_3888_; 
v___x_3886_ = ((size_t)0ULL);
v___x_3887_ = lean_usize_of_nat(v___x_3884_);
v___x_3888_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__13_spec__21(v_a_3803_, v___x_3886_, v___x_3887_, v___x_3882_);
lean_dec(v_a_3803_);
v___y_3873_ = v___x_3888_;
goto v___jp_3872_;
}
v___jp_3872_:
{
size_t v_sz_3874_; size_t v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3880_; 
v_sz_3874_ = lean_array_size(v_a_3814_);
v___x_3875_ = ((size_t)0ULL);
v___x_3876_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__12(v_sz_3874_, v___x_3875_, v_a_3814_);
v___x_3877_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3877_, 0, v_a_3825_);
lean_ctor_set(v___x_3877_, 1, v_a_3836_);
lean_ctor_set(v___x_3877_, 2, v___y_3873_);
lean_ctor_set(v___x_3877_, 3, v_a_3847_);
lean_ctor_set(v___x_3877_, 4, v_a_3868_);
lean_ctor_set(v___x_3877_, 5, v___x_3876_);
v___x_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 0, v___x_3878_);
v___x_3880_ = v___x_3870_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___redArg(lean_object* v_path_3890_, lean_object* v_bytes_3891_, lean_object* v_a_3892_){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2_spec__4(v_bytes_3891_);
if (lean_obj_tag(v___x_3894_) == 0)
{
lean_object* v_a_3895_; lean_object* v_log_3896_; uint8_t v_action_3897_; uint8_t v_wantsRebuild_3898_; uint8_t v_canceled_3899_; lean_object* v_trace_3900_; lean_object* v_buildTime_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3916_; 
v_a_3895_ = lean_ctor_get(v___x_3894_, 0);
lean_inc(v_a_3895_);
lean_dec_ref_known(v___x_3894_, 1);
v_log_3896_ = lean_ctor_get(v_a_3892_, 0);
v_action_3897_ = lean_ctor_get_uint8(v_a_3892_, sizeof(void*)*3);
v_wantsRebuild_3898_ = lean_ctor_get_uint8(v_a_3892_, sizeof(void*)*3 + 1);
v_canceled_3899_ = lean_ctor_get_uint8(v_a_3892_, sizeof(void*)*3 + 2);
v_trace_3900_ = lean_ctor_get(v_a_3892_, 1);
v_buildTime_3901_ = lean_ctor_get(v_a_3892_, 2);
v_isSharedCheck_3916_ = !lean_is_exclusive(v_a_3892_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3903_ = v_a_3892_;
v_isShared_3904_ = v_isSharedCheck_3916_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_buildTime_3901_);
lean_inc(v_trace_3900_);
lean_inc(v_log_3896_);
lean_dec(v_a_3892_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3916_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; uint8_t v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3912_; 
v___x_3905_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___closed__0));
v___x_3906_ = lean_string_append(v_path_3890_, v___x_3905_);
v___x_3907_ = lean_string_append(v___x_3906_, v_a_3895_);
lean_dec(v_a_3895_);
v___x_3908_ = 2;
v___x_3909_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3909_, 0, v___x_3907_);
lean_ctor_set_uint8(v___x_3909_, sizeof(void*)*1, v___x_3908_);
v___x_3910_ = lean_array_push(v_log_3896_, v___x_3909_);
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3910_);
v___x_3912_ = v___x_3903_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v___x_3910_);
lean_ctor_set(v_reuseFailAlloc_3915_, 1, v_trace_3900_);
lean_ctor_set(v_reuseFailAlloc_3915_, 2, v_buildTime_3901_);
lean_ctor_set_uint8(v_reuseFailAlloc_3915_, sizeof(void*)*3, v_action_3897_);
lean_ctor_set_uint8(v_reuseFailAlloc_3915_, sizeof(void*)*3 + 1, v_wantsRebuild_3898_);
lean_ctor_set_uint8(v_reuseFailAlloc_3915_, sizeof(void*)*3 + 2, v_canceled_3899_);
v___x_3912_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3913_ = lean_box(0);
v___x_3914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3913_);
lean_ctor_set(v___x_3914_, 1, v___x_3912_);
return v___x_3914_;
}
}
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3918_; 
lean_dec_ref(v_path_3890_);
v_a_3917_ = lean_ctor_get(v___x_3894_, 0);
lean_inc(v_a_3917_);
lean_dec_ref_known(v___x_3894_, 1);
v___x_3918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3918_, 0, v_a_3917_);
lean_ctor_set(v___x_3918_, 1, v_a_3892_);
return v___x_3918_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_path_3919_, lean_object* v_bytes_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___redArg(v_path_3919_, v_bytes_3920_, v_a_3921_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___lam__0(lean_object* v_path_3924_, lean_object* v_fst_3925_, lean_object* v_inst_3926_, lean_object* v_fst_3927_, lean_object* v_snd_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v___y_3938_; lean_object* v___y_3939_; lean_object* v___y_3940_; lean_object* v___y_3941_; lean_object* v___y_3942_; lean_object* v___y_3943_; lean_object* v___y_3944_; lean_object* v_log_3973_; uint8_t v_action_3974_; uint8_t v_wantsRebuild_3975_; uint8_t v_canceled_3976_; lean_object* v_trace_3977_; lean_object* v_buildTime_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
v_log_3973_ = lean_ctor_get(v___y_3935_, 0);
v_action_3974_ = lean_ctor_get_uint8(v___y_3935_, sizeof(void*)*3);
v_wantsRebuild_3975_ = lean_ctor_get_uint8(v___y_3935_, sizeof(void*)*3 + 1);
v_canceled_3976_ = lean_ctor_get_uint8(v___y_3935_, sizeof(void*)*3 + 2);
v_trace_3977_ = lean_ctor_get(v___y_3935_, 1);
v_buildTime_3978_ = lean_ctor_get(v___y_3935_, 2);
v___x_3979_ = lean_st_ref_get(v___y_3929_);
v___x_3980_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(v___x_3979_, v_path_3924_);
lean_dec(v___x_3979_);
if (lean_obj_tag(v___x_3980_) == 1)
{
lean_object* v_val_3981_; lean_object* v_snd_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_4021_; 
v_val_3981_ = lean_ctor_get(v___x_3980_, 0);
lean_inc(v_val_3981_);
lean_dec_ref_known(v___x_3980_, 1);
v_snd_3982_ = lean_ctor_get(v_val_3981_, 1);
v_isSharedCheck_4021_ = !lean_is_exclusive(v_val_3981_);
if (v_isSharedCheck_4021_ == 0)
{
lean_object* v_unused_4022_; 
v_unused_4022_ = lean_ctor_get(v_val_3981_, 0);
lean_dec(v_unused_4022_);
v___x_3984_ = v_val_3981_;
v_isShared_3985_ = v_isSharedCheck_4021_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_snd_3982_);
lean_dec(v_val_3981_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_4021_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v_fst_3986_; lean_object* v_snd_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_4020_; 
v_fst_3986_ = lean_ctor_get(v_snd_3982_, 0);
v_snd_3987_ = lean_ctor_get(v_snd_3982_, 1);
v_isSharedCheck_4020_ = !lean_is_exclusive(v_snd_3982_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_3989_ = v_snd_3982_;
v_isShared_3990_ = v_isSharedCheck_4020_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_snd_3987_);
lean_inc(v_fst_3986_);
lean_dec(v_snd_3982_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_4020_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
uint8_t v___x_3991_; 
v___x_3991_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_fst_3986_, v_fst_3927_);
lean_dec(v_fst_3986_);
if (v___x_3991_ == 0)
{
lean_del_object(v___x_3989_);
lean_dec(v_snd_3987_);
lean_del_object(v___x_3984_);
v___y_3938_ = v___y_3929_;
v___y_3939_ = v___y_3930_;
v___y_3940_ = v___y_3931_;
v___y_3941_ = v___y_3932_;
v___y_3942_ = v___y_3933_;
v___y_3943_ = v___y_3934_;
v___y_3944_ = v___y_3935_;
goto v___jp_3937_;
}
else
{
lean_object* v___x_3992_; 
lean_dec_ref(v_fst_3925_);
v___x_3992_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_snd_3987_, v_inst_3926_);
lean_dec(v_inst_3926_);
if (lean_obj_tag(v___x_3992_) == 1)
{
lean_object* v___x_3993_; lean_object* v___x_3995_; 
v___x_3993_ = lean_st_ref_take(v___y_3929_);
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 0, v_fst_3927_);
v___x_3995_ = v___x_3989_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v_fst_3927_);
lean_ctor_set(v_reuseFailAlloc_4002_, 1, v_snd_3987_);
v___x_3995_ = v_reuseFailAlloc_4002_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
lean_object* v___x_3997_; 
if (v_isShared_3985_ == 0)
{
lean_ctor_set(v___x_3984_, 1, v___x_3995_);
lean_ctor_set(v___x_3984_, 0, v_snd_3928_);
v___x_3997_ = v___x_3984_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_snd_3928_);
lean_ctor_set(v_reuseFailAlloc_4001_, 1, v___x_3995_);
v___x_3997_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; 
v___x_3998_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v___x_3993_, v_path_3924_, v___x_3997_);
v___x_3999_ = lean_st_ref_put(v___y_3929_, v___x_3998_);
v___x_4000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4000_, 0, v___x_3992_);
lean_ctor_set(v___x_4000_, 1, v___y_3935_);
return v___x_4000_;
}
}
}
else
{
lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4016_; 
lean_inc(v_buildTime_3978_);
lean_inc_ref(v_trace_3977_);
lean_inc_ref(v_log_3973_);
lean_dec(v___x_3992_);
lean_del_object(v___x_3989_);
lean_dec(v_snd_3987_);
lean_del_object(v___x_3984_);
lean_dec(v_snd_3928_);
lean_dec_ref(v_fst_3927_);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___y_3935_);
if (v_isSharedCheck_4016_ == 0)
{
lean_object* v_unused_4017_; lean_object* v_unused_4018_; lean_object* v_unused_4019_; 
v_unused_4017_ = lean_ctor_get(v___y_3935_, 2);
lean_dec(v_unused_4017_);
v_unused_4018_ = lean_ctor_get(v___y_3935_, 1);
lean_dec(v_unused_4018_);
v_unused_4019_ = lean_ctor_get(v___y_3935_, 0);
lean_dec(v_unused_4019_);
v___x_4004_ = v___y_3935_;
v_isShared_4005_ = v_isSharedCheck_4016_;
goto v_resetjp_4003_;
}
else
{
lean_dec(v___y_3935_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4016_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; uint8_t v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4013_; 
v___x_4006_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1));
v___x_4007_ = lean_string_append(v_path_3924_, v___x_4006_);
v___x_4008_ = 3;
v___x_4009_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4009_, 0, v___x_4007_);
lean_ctor_set_uint8(v___x_4009_, sizeof(void*)*1, v___x_4008_);
v___x_4010_ = lean_array_get_size(v_log_3973_);
v___x_4011_ = lean_array_push(v_log_3973_, v___x_4009_);
if (v_isShared_4005_ == 0)
{
lean_ctor_set(v___x_4004_, 0, v___x_4011_);
v___x_4013_ = v___x_4004_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v___x_4011_);
lean_ctor_set(v_reuseFailAlloc_4015_, 1, v_trace_3977_);
lean_ctor_set(v_reuseFailAlloc_4015_, 2, v_buildTime_3978_);
lean_ctor_set_uint8(v_reuseFailAlloc_4015_, sizeof(void*)*3, v_action_3974_);
lean_ctor_set_uint8(v_reuseFailAlloc_4015_, sizeof(void*)*3 + 1, v_wantsRebuild_3975_);
lean_ctor_set_uint8(v_reuseFailAlloc_4015_, sizeof(void*)*3 + 2, v_canceled_3976_);
v___x_4013_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
lean_object* v___x_4014_; 
v___x_4014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4010_);
lean_ctor_set(v___x_4014_, 1, v___x_4013_);
return v___x_4014_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3980_);
v___y_3938_ = v___y_3929_;
v___y_3939_ = v___y_3930_;
v___y_3940_ = v___y_3931_;
v___y_3941_ = v___y_3932_;
v___y_3942_ = v___y_3933_;
v___y_3943_ = v___y_3934_;
v___y_3944_ = v___y_3935_;
goto v___jp_3937_;
}
v___jp_3937_:
{
lean_object* v___x_3945_; lean_object* v_a_3946_; 
lean_inc_ref(v_path_3924_);
v___x_3945_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___redArg(v_path_3924_, v_fst_3925_, v___y_3944_);
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
if (lean_obj_tag(v_a_3946_) == 1)
{
lean_object* v_a_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3961_; 
lean_inc_ref(v_a_3946_);
v_a_3947_ = lean_ctor_get(v___x_3945_, 1);
v_isSharedCheck_3961_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3961_ == 0)
{
lean_object* v_unused_3962_; 
v_unused_3962_ = lean_ctor_get(v___x_3945_, 0);
lean_dec(v_unused_3962_);
v___x_3949_ = v___x_3945_;
v_isShared_3950_ = v_isSharedCheck_3961_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_a_3947_);
lean_dec(v___x_3945_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3961_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v_val_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3959_; 
v_val_3951_ = lean_ctor_get(v_a_3946_, 0);
v___x_3952_ = lean_st_ref_take(v___y_3938_);
lean_inc(v_val_3951_);
v___x_3953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3953_, 0, v_inst_3926_);
lean_ctor_set(v___x_3953_, 1, v_val_3951_);
v___x_3954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3954_, 0, v_fst_3927_);
lean_ctor_set(v___x_3954_, 1, v___x_3953_);
v___x_3955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3955_, 0, v_snd_3928_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
v___x_3956_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v___x_3952_, v_path_3924_, v___x_3955_);
v___x_3957_ = lean_st_ref_put(v___y_3938_, v___x_3956_);
if (v_isShared_3950_ == 0)
{
v___x_3959_ = v___x_3949_;
goto v_reusejp_3958_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v_a_3946_);
lean_ctor_set(v_reuseFailAlloc_3960_, 1, v_a_3947_);
v___x_3959_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3958_;
}
v_reusejp_3958_:
{
return v___x_3959_;
}
}
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3971_; 
lean_dec(v_snd_3928_);
lean_dec_ref(v_fst_3927_);
lean_dec(v_inst_3926_);
lean_dec_ref(v_path_3924_);
v_a_3963_ = lean_ctor_get(v___x_3945_, 1);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3971_ == 0)
{
lean_object* v_unused_3972_; 
v_unused_3972_ = lean_ctor_get(v___x_3945_, 0);
lean_dec(v_unused_3972_);
v___x_3965_ = v___x_3945_;
v_isShared_3966_ = v_isSharedCheck_3971_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3945_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3971_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3967_; lean_object* v___x_3969_; 
v___x_3967_ = lean_box(0);
if (v_isShared_3966_ == 0)
{
lean_ctor_set(v___x_3965_, 0, v___x_3967_);
v___x_3969_ = v___x_3965_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3970_, 1, v_a_3963_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
return v___x_3969_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___lam__0___boxed(lean_object* v_path_4023_, lean_object* v_fst_4024_, lean_object* v_inst_4025_, lean_object* v_fst_4026_, lean_object* v_snd_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___lam__0(v_path_4023_, v_fst_4024_, v_inst_4025_, v_fst_4026_, v_snd_4027_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_);
lean_dec_ref(v___y_4033_);
lean_dec(v___y_4032_);
lean_dec(v___y_4031_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
lean_dec(v___y_4028_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1(lean_object* v_inst_4037_, lean_object* v_path_4038_, lean_object* v_expected_x3f_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_){
_start:
{
lean_object* v___x_4047_; 
lean_inc_ref(v_a_4040_);
lean_inc_ref(v_path_4038_);
v___x_4047_ = l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f(v_path_4038_, v_a_4040_, v_a_4041_, v_a_4042_, v_a_4043_, v_a_4044_, v_a_4045_);
if (lean_obj_tag(v___x_4047_) == 0)
{
lean_object* v_a_4048_; 
v_a_4048_ = lean_ctor_get(v___x_4047_, 0);
if (lean_obj_tag(v_a_4048_) == 1)
{
lean_object* v_val_4049_; lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4093_; 
lean_dec_ref(v_a_4040_);
v_val_4049_ = lean_ctor_get(v_a_4048_, 0);
lean_inc(v_val_4049_);
v_a_4050_ = lean_ctor_get(v___x_4047_, 1);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4047_);
if (v_isSharedCheck_4093_ == 0)
{
lean_object* v_unused_4094_; 
v_unused_4094_ = lean_ctor_get(v___x_4047_, 0);
lean_dec(v_unused_4094_);
v___x_4052_ = v___x_4047_;
v_isShared_4053_ = v_isSharedCheck_4093_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_4047_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4093_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v_fst_4054_; lean_object* v_snd_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4092_; 
v_fst_4054_ = lean_ctor_get(v_val_4049_, 0);
v_snd_4055_ = lean_ctor_get(v_val_4049_, 1);
v_isSharedCheck_4092_ = !lean_is_exclusive(v_val_4049_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4057_ = v_val_4049_;
v_isShared_4058_ = v_isSharedCheck_4092_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_snd_4055_);
lean_inc(v_fst_4054_);
lean_dec(v_val_4049_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4092_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
if (lean_obj_tag(v_expected_x3f_4039_) == 0)
{
lean_del_object(v___x_4057_);
lean_dec(v_fst_4054_);
goto v___jp_4059_;
}
else
{
lean_object* v_val_4086_; uint8_t v___x_4087_; 
v_val_4086_ = lean_ctor_get(v_expected_x3f_4039_, 0);
v___x_4087_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_val_4086_, v_fst_4054_);
lean_dec(v_fst_4054_);
if (v___x_4087_ == 0)
{
lean_object* v___x_4088_; lean_object* v___x_4090_; 
lean_dec(v_snd_4055_);
lean_del_object(v___x_4052_);
lean_dec_ref(v_path_4038_);
lean_dec(v_inst_4037_);
v___x_4088_ = lean_box(0);
if (v_isShared_4058_ == 0)
{
lean_ctor_set(v___x_4057_, 1, v_a_4050_);
lean_ctor_set(v___x_4057_, 0, v___x_4088_);
v___x_4090_ = v___x_4057_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v___x_4088_);
lean_ctor_set(v_reuseFailAlloc_4091_, 1, v_a_4050_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
else
{
lean_del_object(v___x_4057_);
goto v___jp_4059_;
}
}
v___jp_4059_:
{
lean_object* v___x_4060_; 
v___x_4060_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_snd_4055_, v_inst_4037_);
lean_dec(v_inst_4037_);
lean_dec(v_snd_4055_);
if (lean_obj_tag(v___x_4060_) == 1)
{
lean_object* v___x_4062_; 
lean_dec_ref(v_path_4038_);
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 0, v___x_4060_);
v___x_4062_ = v___x_4052_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v___x_4060_);
lean_ctor_set(v_reuseFailAlloc_4063_, 1, v_a_4050_);
v___x_4062_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
return v___x_4062_;
}
}
else
{
lean_object* v_log_4064_; uint8_t v_action_4065_; uint8_t v_wantsRebuild_4066_; uint8_t v_canceled_4067_; lean_object* v_trace_4068_; lean_object* v_buildTime_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4085_; 
lean_dec(v___x_4060_);
v_log_4064_ = lean_ctor_get(v_a_4050_, 0);
v_action_4065_ = lean_ctor_get_uint8(v_a_4050_, sizeof(void*)*3);
v_wantsRebuild_4066_ = lean_ctor_get_uint8(v_a_4050_, sizeof(void*)*3 + 1);
v_canceled_4067_ = lean_ctor_get_uint8(v_a_4050_, sizeof(void*)*3 + 2);
v_trace_4068_ = lean_ctor_get(v_a_4050_, 1);
v_buildTime_4069_ = lean_ctor_get(v_a_4050_, 2);
v_isSharedCheck_4085_ = !lean_is_exclusive(v_a_4050_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4071_ = v_a_4050_;
v_isShared_4072_ = v_isSharedCheck_4085_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_buildTime_4069_);
lean_inc(v_trace_4068_);
lean_inc(v_log_4064_);
lean_dec(v_a_4050_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4085_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; uint8_t v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4080_; 
v___x_4073_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1));
v___x_4074_ = lean_string_append(v_path_4038_, v___x_4073_);
v___x_4075_ = 3;
v___x_4076_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4076_, 0, v___x_4074_);
lean_ctor_set_uint8(v___x_4076_, sizeof(void*)*1, v___x_4075_);
v___x_4077_ = lean_array_get_size(v_log_4064_);
v___x_4078_ = lean_array_push(v_log_4064_, v___x_4076_);
if (v_isShared_4072_ == 0)
{
lean_ctor_set(v___x_4071_, 0, v___x_4078_);
v___x_4080_ = v___x_4071_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v___x_4078_);
lean_ctor_set(v_reuseFailAlloc_4084_, 1, v_trace_4068_);
lean_ctor_set(v_reuseFailAlloc_4084_, 2, v_buildTime_4069_);
lean_ctor_set_uint8(v_reuseFailAlloc_4084_, sizeof(void*)*3, v_action_4065_);
lean_ctor_set_uint8(v_reuseFailAlloc_4084_, sizeof(void*)*3 + 1, v_wantsRebuild_4066_);
lean_ctor_set_uint8(v_reuseFailAlloc_4084_, sizeof(void*)*3 + 2, v_canceled_4067_);
v___x_4080_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
lean_object* v___x_4082_; 
if (v_isShared_4053_ == 0)
{
lean_ctor_set_tag(v___x_4052_, 1);
lean_ctor_set(v___x_4052_, 1, v___x_4080_);
lean_ctor_set(v___x_4052_, 0, v___x_4077_);
v___x_4082_ = v___x_4052_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v___x_4077_);
lean_ctor_set(v_reuseFailAlloc_4083_, 1, v___x_4080_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
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
lean_object* v_a_4095_; lean_object* v___x_4096_; 
v_a_4095_ = lean_ctor_get(v___x_4047_, 1);
lean_inc(v_a_4095_);
lean_dec_ref_known(v___x_4047_, 2);
lean_inc_ref(v_path_4038_);
v___x_4096_ = l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(v_path_4038_, v_expected_x3f_4039_, v_a_4095_);
if (lean_obj_tag(v___x_4096_) == 0)
{
lean_object* v_a_4097_; 
v_a_4097_ = lean_ctor_get(v___x_4096_, 0);
if (lean_obj_tag(v_a_4097_) == 1)
{
lean_object* v_val_4098_; lean_object* v_snd_4099_; lean_object* v_a_4100_; lean_object* v_fst_4101_; lean_object* v_fst_4102_; lean_object* v_snd_4103_; lean_object* v_sidecarCache_4104_; lean_object* v___f_4105_; lean_object* v___x_4106_; 
v_val_4098_ = lean_ctor_get(v_a_4097_, 0);
lean_inc(v_val_4098_);
v_snd_4099_ = lean_ctor_get(v_val_4098_, 1);
lean_inc(v_snd_4099_);
v_a_4100_ = lean_ctor_get(v___x_4096_, 1);
lean_inc(v_a_4100_);
lean_dec_ref_known(v___x_4096_, 2);
v_fst_4101_ = lean_ctor_get(v_val_4098_, 0);
lean_inc(v_fst_4101_);
lean_dec(v_val_4098_);
v_fst_4102_ = lean_ctor_get(v_snd_4099_, 0);
lean_inc(v_fst_4102_);
v_snd_4103_ = lean_ctor_get(v_snd_4099_, 1);
lean_inc(v_snd_4103_);
lean_dec(v_snd_4099_);
v_sidecarCache_4104_ = lean_ctor_get(v_a_4044_, 7);
v___f_4105_ = lean_alloc_closure((void*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___lam__0___boxed), 13, 5);
lean_closure_set(v___f_4105_, 0, v_path_4038_);
lean_closure_set(v___f_4105_, 1, v_fst_4101_);
lean_closure_set(v___f_4105_, 2, v_inst_4037_);
lean_closure_set(v___f_4105_, 3, v_fst_4102_);
lean_closure_set(v___f_4105_, 4, v_snd_4103_);
lean_inc_ref(v_sidecarCache_4104_);
v___x_4106_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_sidecarCache_4104_, v___f_4105_, v_a_4040_, v_a_4041_, v_a_4042_, v_a_4043_, v_a_4044_, v_a_4100_);
return v___x_4106_;
}
else
{
lean_object* v_a_4107_; lean_object* v___x_4109_; uint8_t v_isShared_4110_; uint8_t v_isSharedCheck_4115_; 
lean_dec_ref(v_a_4040_);
lean_dec_ref(v_path_4038_);
lean_dec(v_inst_4037_);
v_a_4107_ = lean_ctor_get(v___x_4096_, 1);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4096_);
if (v_isSharedCheck_4115_ == 0)
{
lean_object* v_unused_4116_; 
v_unused_4116_ = lean_ctor_get(v___x_4096_, 0);
lean_dec(v_unused_4116_);
v___x_4109_ = v___x_4096_;
v_isShared_4110_ = v_isSharedCheck_4115_;
goto v_resetjp_4108_;
}
else
{
lean_inc(v_a_4107_);
lean_dec(v___x_4096_);
v___x_4109_ = lean_box(0);
v_isShared_4110_ = v_isSharedCheck_4115_;
goto v_resetjp_4108_;
}
v_resetjp_4108_:
{
lean_object* v___x_4111_; lean_object* v___x_4113_; 
v___x_4111_ = lean_box(0);
if (v_isShared_4110_ == 0)
{
lean_ctor_set(v___x_4109_, 0, v___x_4111_);
v___x_4113_ = v___x_4109_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v___x_4111_);
lean_ctor_set(v_reuseFailAlloc_4114_, 1, v_a_4107_);
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
else
{
lean_object* v_a_4117_; lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4125_; 
lean_dec_ref(v_a_4040_);
lean_dec_ref(v_path_4038_);
lean_dec(v_inst_4037_);
v_a_4117_ = lean_ctor_get(v___x_4096_, 0);
v_a_4118_ = lean_ctor_get(v___x_4096_, 1);
v_isSharedCheck_4125_ = !lean_is_exclusive(v___x_4096_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4120_ = v___x_4096_;
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_inc(v_a_4117_);
lean_dec(v___x_4096_);
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
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_a_4117_);
lean_ctor_set(v_reuseFailAlloc_4124_, 1, v_a_4118_);
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
}
else
{
lean_object* v_a_4126_; lean_object* v_a_4127_; lean_object* v___x_4129_; uint8_t v_isShared_4130_; uint8_t v_isSharedCheck_4134_; 
lean_dec_ref(v_a_4040_);
lean_dec_ref(v_path_4038_);
lean_dec(v_inst_4037_);
v_a_4126_ = lean_ctor_get(v___x_4047_, 0);
v_a_4127_ = lean_ctor_get(v___x_4047_, 1);
v_isSharedCheck_4134_ = !lean_is_exclusive(v___x_4047_);
if (v_isSharedCheck_4134_ == 0)
{
v___x_4129_ = v___x_4047_;
v_isShared_4130_ = v_isSharedCheck_4134_;
goto v_resetjp_4128_;
}
else
{
lean_inc(v_a_4127_);
lean_inc(v_a_4126_);
lean_dec(v___x_4047_);
v___x_4129_ = lean_box(0);
v_isShared_4130_ = v_isSharedCheck_4134_;
goto v_resetjp_4128_;
}
v_resetjp_4128_:
{
lean_object* v___x_4132_; 
if (v_isShared_4130_ == 0)
{
v___x_4132_ = v___x_4129_;
goto v_reusejp_4131_;
}
else
{
lean_object* v_reuseFailAlloc_4133_; 
v_reuseFailAlloc_4133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4133_, 0, v_a_4126_);
lean_ctor_set(v_reuseFailAlloc_4133_, 1, v_a_4127_);
v___x_4132_ = v_reuseFailAlloc_4133_;
goto v_reusejp_4131_;
}
v_reusejp_4131_:
{
return v___x_4132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1___boxed(lean_object* v_inst_4135_, lean_object* v_path_4136_, lean_object* v_expected_x3f_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1(v_inst_4135_, v_path_4136_, v_expected_x3f_4137_, v_a_4138_, v_a_4139_, v_a_4140_, v_a_4141_, v_a_4142_, v_a_4143_);
lean_dec_ref(v_a_4142_);
lean_dec(v_a_4141_);
lean_dec(v_a_4140_);
lean_dec(v_a_4139_);
lean_dec(v_expected_x3f_4137_);
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1_spec__3(lean_object* v_j_4146_, lean_object* v_k_4147_){
_start:
{
lean_object* v___x_4148_; lean_object* v___x_4149_; 
v___x_4148_ = l_Lean_Json_getObjValD(v_j_4146_, v_k_4147_);
v___x_4149_ = l_Lake_Hash_fromJson_x3f(v___x_4148_);
return v___x_4149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_j_4150_, lean_object* v_k_4151_){
_start:
{
lean_object* v_res_4152_; 
v_res_4152_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1_spec__3(v_j_4150_, v_k_4151_);
lean_dec_ref(v_k_4151_);
return v_res_4152_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1(lean_object* v_bytes_4157_){
_start:
{
uint8_t v___x_4158_; 
v___x_4158_ = lean_string_validate_utf8(v_bytes_4157_);
if (v___x_4158_ == 0)
{
lean_object* v___x_4159_; 
lean_dec_ref(v_bytes_4157_);
v___x_4159_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__0));
return v___x_4159_;
}
else
{
lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4160_ = lean_string_from_utf8_unchecked(v_bytes_4157_);
v___x_4161_ = l_Lean_Json_parse(v___x_4160_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_object* v_a_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4169_; 
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v___x_4161_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4164_ = v___x_4161_;
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_a_4162_);
lean_dec(v___x_4161_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
lean_object* v___x_4167_; 
if (v_isShared_4165_ == 0)
{
v___x_4167_ = v___x_4164_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4162_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
return v___x_4167_;
}
}
}
else
{
lean_object* v_a_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; 
v_a_4170_ = lean_ctor_get(v___x_4161_, 0);
lean_inc_n(v_a_4170_, 2);
lean_dec_ref_known(v___x_4161_, 1);
v___x_4171_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3));
v___x_4172_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__1(v_a_4170_, v___x_4171_);
if (lean_obj_tag(v___x_4172_) == 0)
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4180_; 
lean_dec(v_a_4170_);
v_a_4173_ = lean_ctor_get(v___x_4172_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v___x_4172_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4175_ = v___x_4172_;
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v___x_4172_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v___x_4178_; 
if (v_isShared_4176_ == 0)
{
v___x_4178_ = v___x_4175_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4173_);
v___x_4178_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
return v___x_4178_;
}
}
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4182_; uint8_t v___x_4183_; 
v_a_4181_ = lean_ctor_get(v___x_4172_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___x_4172_, 1);
v___x_4182_ = l_Lean_ModuleUsage_usageVersion;
v___x_4183_ = lean_nat_dec_eq(v_a_4181_, v___x_4182_);
lean_dec(v_a_4181_);
if (v___x_4183_ == 0)
{
lean_object* v___x_4184_; 
lean_dec(v_a_4170_);
v___x_4184_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1___closed__1));
return v___x_4184_;
}
else
{
lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4185_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__0));
lean_inc(v_a_4170_);
v___x_4186_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1_spec__3(v_a_4170_, v___x_4185_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4194_; 
lean_dec(v_a_4170_);
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4189_ = v___x_4186_;
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4186_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_a_4187_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
v_a_4195_ = lean_ctor_get(v___x_4186_, 0);
lean_inc(v_a_4195_);
lean_dec_ref_known(v___x_4186_, 1);
v___x_4196_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1));
lean_inc(v_a_4170_);
v___x_4197_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_4170_, v___x_4196_);
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_a_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4205_; 
lean_dec(v_a_4195_);
lean_dec(v_a_4170_);
v_a_4198_ = lean_ctor_get(v___x_4197_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4200_ = v___x_4197_;
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_a_4198_);
lean_dec(v___x_4197_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
lean_object* v___x_4203_; 
if (v_isShared_4201_ == 0)
{
v___x_4203_ = v___x_4200_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_a_4198_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
return v___x_4203_;
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
v_a_4206_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_a_4206_);
lean_dec_ref_known(v___x_4197_, 1);
v___x_4207_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__2));
lean_inc(v_a_4170_);
v___x_4208_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_4170_, v___x_4207_);
if (lean_obj_tag(v___x_4208_) == 0)
{
lean_object* v_a_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4216_; 
lean_dec(v_a_4206_);
lean_dec(v_a_4195_);
lean_dec(v_a_4170_);
v_a_4209_ = lean_ctor_get(v___x_4208_, 0);
v_isSharedCheck_4216_ = !lean_is_exclusive(v___x_4208_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4211_ = v___x_4208_;
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
else
{
lean_inc(v_a_4209_);
lean_dec(v___x_4208_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
lean_object* v___x_4214_; 
if (v_isShared_4212_ == 0)
{
v___x_4214_ = v___x_4211_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_a_4209_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
else
{
lean_object* v_a_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
v_a_4217_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4217_);
lean_dec_ref_known(v___x_4208_, 1);
v___x_4218_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__3));
lean_inc(v_a_4170_);
v___x_4219_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_4170_, v___x_4218_);
if (lean_obj_tag(v___x_4219_) == 0)
{
lean_object* v_a_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4227_; 
lean_dec(v_a_4217_);
lean_dec(v_a_4206_);
lean_dec(v_a_4195_);
lean_dec(v_a_4170_);
v_a_4220_ = lean_ctor_get(v___x_4219_, 0);
v_isSharedCheck_4227_ = !lean_is_exclusive(v___x_4219_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4222_ = v___x_4219_;
v_isShared_4223_ = v_isSharedCheck_4227_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_a_4220_);
lean_dec(v___x_4219_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4227_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___x_4225_; 
if (v_isShared_4223_ == 0)
{
v___x_4225_ = v___x_4222_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v_a_4220_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
return v___x_4225_;
}
}
}
else
{
lean_object* v_a_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v_a_4228_ = lean_ctor_get(v___x_4219_, 0);
lean_inc(v_a_4228_);
lean_dec_ref_known(v___x_4219_, 1);
v___x_4229_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6));
lean_inc(v_a_4170_);
v___x_4230_ = l_Lean_Json_getObjValAs_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__0_spec__0_spec__8(v_a_4170_, v___x_4229_);
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_object* v_a_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4238_; 
lean_dec(v_a_4228_);
lean_dec(v_a_4217_);
lean_dec(v_a_4206_);
lean_dec(v_a_4195_);
lean_dec(v_a_4170_);
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4230_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4233_ = v___x_4230_;
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_a_4231_);
lean_dec(v___x_4230_);
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
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
v_a_4239_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4239_);
lean_dec_ref_known(v___x_4230_, 1);
v___x_4240_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2));
v___x_4241_ = l_Lean_Json_getObjVal_x3f(v_a_4170_, v___x_4240_);
if (lean_obj_tag(v___x_4241_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4244_; uint8_t v_isShared_4245_; uint8_t v_isSharedCheck_4249_; 
lean_dec(v_a_4239_);
lean_dec(v_a_4228_);
lean_dec(v_a_4217_);
lean_dec(v_a_4206_);
lean_dec(v_a_4195_);
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4249_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4244_ = v___x_4241_;
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
else
{
lean_inc(v_a_4242_);
lean_dec(v___x_4241_);
v___x_4244_ = lean_box(0);
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
v_resetjp_4243_:
{
lean_object* v___x_4247_; 
if (v_isShared_4245_ == 0)
{
v___x_4247_ = v___x_4244_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v_a_4242_);
v___x_4247_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
return v___x_4247_;
}
}
}
else
{
lean_object* v_a_4250_; lean_object* v___x_4251_; 
v_a_4250_ = lean_ctor_get(v___x_4241_, 0);
lean_inc(v_a_4250_);
lean_dec_ref_known(v___x_4241_, 1);
v___x_4251_ = l___private_Lake_Build_UsageCutoff_0__Lake_nameDigestPairs(v_a_4250_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_object* v_a_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4259_; 
lean_dec(v_a_4239_);
lean_dec(v_a_4228_);
lean_dec(v_a_4217_);
lean_dec(v_a_4206_);
lean_dec(v_a_4195_);
v_a_4252_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4254_ = v___x_4251_;
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_a_4252_);
lean_dec(v___x_4251_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4259_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
lean_object* v___x_4257_; 
if (v_isShared_4255_ == 0)
{
v___x_4257_ = v___x_4254_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v_a_4252_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
return v___x_4257_;
}
}
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4270_; 
v_a_4260_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4262_ = v___x_4251_;
v_isShared_4263_ = v_isSharedCheck_4270_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4251_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4270_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4264_; uint64_t v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4268_; 
v___x_4264_ = lean_alloc_ctor(0, 5, 8);
lean_ctor_set(v___x_4264_, 0, v_a_4206_);
lean_ctor_set(v___x_4264_, 1, v_a_4217_);
lean_ctor_set(v___x_4264_, 2, v_a_4228_);
lean_ctor_set(v___x_4264_, 3, v_a_4239_);
lean_ctor_set(v___x_4264_, 4, v_a_4260_);
v___x_4265_ = lean_unbox_uint64(v_a_4195_);
lean_dec(v_a_4195_);
lean_ctor_set_uint64(v___x_4264_, sizeof(void*)*5, v___x_4265_);
v___x_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4264_);
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4266_);
v___x_4268_ = v___x_4262_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v___x_4266_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___redArg(lean_object* v_path_4271_, lean_object* v_bytes_4272_, lean_object* v_a_4273_){
_start:
{
lean_object* v___x_4275_; 
v___x_4275_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___at___00__private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0_spec__1(v_bytes_4272_);
if (lean_obj_tag(v___x_4275_) == 0)
{
lean_object* v_a_4276_; lean_object* v_log_4277_; uint8_t v_action_4278_; uint8_t v_wantsRebuild_4279_; uint8_t v_canceled_4280_; lean_object* v_trace_4281_; lean_object* v_buildTime_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4297_; 
v_a_4276_ = lean_ctor_get(v___x_4275_, 0);
lean_inc(v_a_4276_);
lean_dec_ref_known(v___x_4275_, 1);
v_log_4277_ = lean_ctor_get(v_a_4273_, 0);
v_action_4278_ = lean_ctor_get_uint8(v_a_4273_, sizeof(void*)*3);
v_wantsRebuild_4279_ = lean_ctor_get_uint8(v_a_4273_, sizeof(void*)*3 + 1);
v_canceled_4280_ = lean_ctor_get_uint8(v_a_4273_, sizeof(void*)*3 + 2);
v_trace_4281_ = lean_ctor_get(v_a_4273_, 1);
v_buildTime_4282_ = lean_ctor_get(v_a_4273_, 2);
v_isSharedCheck_4297_ = !lean_is_exclusive(v_a_4273_);
if (v_isSharedCheck_4297_ == 0)
{
v___x_4284_ = v_a_4273_;
v_isShared_4285_ = v_isSharedCheck_4297_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_buildTime_4282_);
lean_inc(v_trace_4281_);
lean_inc(v_log_4277_);
lean_dec(v_a_4273_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4297_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; uint8_t v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4293_; 
v___x_4286_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___redArg___closed__0));
v___x_4287_ = lean_string_append(v_path_4271_, v___x_4286_);
v___x_4288_ = lean_string_append(v___x_4287_, v_a_4276_);
lean_dec(v_a_4276_);
v___x_4289_ = 2;
v___x_4290_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4290_, 0, v___x_4288_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*1, v___x_4289_);
v___x_4291_ = lean_array_push(v_log_4277_, v___x_4290_);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v___x_4291_);
v___x_4293_ = v___x_4284_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v___x_4291_);
lean_ctor_set(v_reuseFailAlloc_4296_, 1, v_trace_4281_);
lean_ctor_set(v_reuseFailAlloc_4296_, 2, v_buildTime_4282_);
lean_ctor_set_uint8(v_reuseFailAlloc_4296_, sizeof(void*)*3, v_action_4278_);
lean_ctor_set_uint8(v_reuseFailAlloc_4296_, sizeof(void*)*3 + 1, v_wantsRebuild_4279_);
lean_ctor_set_uint8(v_reuseFailAlloc_4296_, sizeof(void*)*3 + 2, v_canceled_4280_);
v___x_4293_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___x_4294_ = lean_box(0);
v___x_4295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
lean_ctor_set(v___x_4295_, 1, v___x_4293_);
return v___x_4295_;
}
}
}
else
{
lean_object* v_a_4298_; lean_object* v___x_4299_; 
lean_dec_ref(v_path_4271_);
v_a_4298_ = lean_ctor_get(v___x_4275_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4275_, 1);
v___x_4299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4299_, 0, v_a_4298_);
lean_ctor_set(v___x_4299_, 1, v_a_4273_);
return v___x_4299_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_path_4300_, lean_object* v_bytes_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_){
_start:
{
lean_object* v_res_4304_; 
v_res_4304_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___redArg(v_path_4300_, v_bytes_4301_, v_a_4302_);
return v_res_4304_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___lam__0(lean_object* v_path_4305_, lean_object* v_fst_4306_, lean_object* v_inst_4307_, lean_object* v_fst_4308_, lean_object* v_snd_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_){
_start:
{
lean_object* v___y_4319_; lean_object* v___y_4320_; lean_object* v___y_4321_; lean_object* v___y_4322_; lean_object* v___y_4323_; lean_object* v___y_4324_; lean_object* v___y_4325_; lean_object* v_log_4354_; uint8_t v_action_4355_; uint8_t v_wantsRebuild_4356_; uint8_t v_canceled_4357_; lean_object* v_trace_4358_; lean_object* v_buildTime_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v_log_4354_ = lean_ctor_get(v___y_4316_, 0);
v_action_4355_ = lean_ctor_get_uint8(v___y_4316_, sizeof(void*)*3);
v_wantsRebuild_4356_ = lean_ctor_get_uint8(v___y_4316_, sizeof(void*)*3 + 1);
v_canceled_4357_ = lean_ctor_get_uint8(v___y_4316_, sizeof(void*)*3 + 2);
v_trace_4358_ = lean_ctor_get(v___y_4316_, 1);
v_buildTime_4359_ = lean_ctor_get(v___y_4316_, 2);
v___x_4360_ = lean_st_ref_get(v___y_4310_);
v___x_4361_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__0___redArg(v___x_4360_, v_path_4305_);
lean_dec(v___x_4360_);
if (lean_obj_tag(v___x_4361_) == 1)
{
lean_object* v_val_4362_; lean_object* v_snd_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4402_; 
v_val_4362_ = lean_ctor_get(v___x_4361_, 0);
lean_inc(v_val_4362_);
lean_dec_ref_known(v___x_4361_, 1);
v_snd_4363_ = lean_ctor_get(v_val_4362_, 1);
v_isSharedCheck_4402_ = !lean_is_exclusive(v_val_4362_);
if (v_isSharedCheck_4402_ == 0)
{
lean_object* v_unused_4403_; 
v_unused_4403_ = lean_ctor_get(v_val_4362_, 0);
lean_dec(v_unused_4403_);
v___x_4365_ = v_val_4362_;
v_isShared_4366_ = v_isSharedCheck_4402_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_snd_4363_);
lean_dec(v_val_4362_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4402_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v_fst_4367_; lean_object* v_snd_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4401_; 
v_fst_4367_ = lean_ctor_get(v_snd_4363_, 0);
v_snd_4368_ = lean_ctor_get(v_snd_4363_, 1);
v_isSharedCheck_4401_ = !lean_is_exclusive(v_snd_4363_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4370_ = v_snd_4363_;
v_isShared_4371_ = v_isSharedCheck_4401_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_snd_4368_);
lean_inc(v_fst_4367_);
lean_dec(v_snd_4363_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4401_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
uint8_t v___x_4372_; 
v___x_4372_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_fst_4367_, v_fst_4308_);
lean_dec(v_fst_4367_);
if (v___x_4372_ == 0)
{
lean_del_object(v___x_4370_);
lean_dec(v_snd_4368_);
lean_del_object(v___x_4365_);
v___y_4319_ = v___y_4310_;
v___y_4320_ = v___y_4311_;
v___y_4321_ = v___y_4312_;
v___y_4322_ = v___y_4313_;
v___y_4323_ = v___y_4314_;
v___y_4324_ = v___y_4315_;
v___y_4325_ = v___y_4316_;
goto v___jp_4318_;
}
else
{
lean_object* v___x_4373_; 
lean_dec_ref(v_fst_4306_);
v___x_4373_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_snd_4368_, v_inst_4307_);
lean_dec(v_inst_4307_);
if (lean_obj_tag(v___x_4373_) == 1)
{
lean_object* v___x_4374_; lean_object* v___x_4376_; 
v___x_4374_ = lean_st_ref_take(v___y_4310_);
if (v_isShared_4371_ == 0)
{
lean_ctor_set(v___x_4370_, 0, v_fst_4308_);
v___x_4376_ = v___x_4370_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_fst_4308_);
lean_ctor_set(v_reuseFailAlloc_4383_, 1, v_snd_4368_);
v___x_4376_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
lean_object* v___x_4378_; 
if (v_isShared_4366_ == 0)
{
lean_ctor_set(v___x_4365_, 1, v___x_4376_);
lean_ctor_set(v___x_4365_, 0, v_snd_4309_);
v___x_4378_ = v___x_4365_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_snd_4309_);
lean_ctor_set(v_reuseFailAlloc_4382_, 1, v___x_4376_);
v___x_4378_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4379_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v___x_4374_, v_path_4305_, v___x_4378_);
v___x_4380_ = lean_st_ref_put(v___y_4310_, v___x_4379_);
v___x_4381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4381_, 0, v___x_4373_);
lean_ctor_set(v___x_4381_, 1, v___y_4316_);
return v___x_4381_;
}
}
}
else
{
lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4397_; 
lean_inc(v_buildTime_4359_);
lean_inc_ref(v_trace_4358_);
lean_inc_ref(v_log_4354_);
lean_dec(v___x_4373_);
lean_del_object(v___x_4370_);
lean_dec(v_snd_4368_);
lean_del_object(v___x_4365_);
lean_dec(v_snd_4309_);
lean_dec_ref(v_fst_4308_);
v_isSharedCheck_4397_ = !lean_is_exclusive(v___y_4316_);
if (v_isSharedCheck_4397_ == 0)
{
lean_object* v_unused_4398_; lean_object* v_unused_4399_; lean_object* v_unused_4400_; 
v_unused_4398_ = lean_ctor_get(v___y_4316_, 2);
lean_dec(v_unused_4398_);
v_unused_4399_ = lean_ctor_get(v___y_4316_, 1);
lean_dec(v_unused_4399_);
v_unused_4400_ = lean_ctor_get(v___y_4316_, 0);
lean_dec(v_unused_4400_);
v___x_4385_ = v___y_4316_;
v_isShared_4386_ = v_isSharedCheck_4397_;
goto v_resetjp_4384_;
}
else
{
lean_dec(v___y_4316_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4397_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; uint8_t v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4394_; 
v___x_4387_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1));
v___x_4388_ = lean_string_append(v_path_4305_, v___x_4387_);
v___x_4389_ = 3;
v___x_4390_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4390_, 0, v___x_4388_);
lean_ctor_set_uint8(v___x_4390_, sizeof(void*)*1, v___x_4389_);
v___x_4391_ = lean_array_get_size(v_log_4354_);
v___x_4392_ = lean_array_push(v_log_4354_, v___x_4390_);
if (v_isShared_4386_ == 0)
{
lean_ctor_set(v___x_4385_, 0, v___x_4392_);
v___x_4394_ = v___x_4385_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v___x_4392_);
lean_ctor_set(v_reuseFailAlloc_4396_, 1, v_trace_4358_);
lean_ctor_set(v_reuseFailAlloc_4396_, 2, v_buildTime_4359_);
lean_ctor_set_uint8(v_reuseFailAlloc_4396_, sizeof(void*)*3, v_action_4355_);
lean_ctor_set_uint8(v_reuseFailAlloc_4396_, sizeof(void*)*3 + 1, v_wantsRebuild_4356_);
lean_ctor_set_uint8(v_reuseFailAlloc_4396_, sizeof(void*)*3 + 2, v_canceled_4357_);
v___x_4394_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
lean_object* v___x_4395_; 
v___x_4395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4395_, 0, v___x_4391_);
lean_ctor_set(v___x_4395_, 1, v___x_4394_);
return v___x_4395_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_4361_);
v___y_4319_ = v___y_4310_;
v___y_4320_ = v___y_4311_;
v___y_4321_ = v___y_4312_;
v___y_4322_ = v___y_4313_;
v___y_4323_ = v___y_4314_;
v___y_4324_ = v___y_4315_;
v___y_4325_ = v___y_4316_;
goto v___jp_4318_;
}
v___jp_4318_:
{
lean_object* v___x_4326_; lean_object* v_a_4327_; 
lean_inc_ref(v_path_4305_);
v___x_4326_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___redArg(v_path_4305_, v_fst_4306_, v___y_4325_);
v_a_4327_ = lean_ctor_get(v___x_4326_, 0);
if (lean_obj_tag(v_a_4327_) == 1)
{
lean_object* v_a_4328_; lean_object* v___x_4330_; uint8_t v_isShared_4331_; uint8_t v_isSharedCheck_4342_; 
lean_inc_ref(v_a_4327_);
v_a_4328_ = lean_ctor_get(v___x_4326_, 1);
v_isSharedCheck_4342_ = !lean_is_exclusive(v___x_4326_);
if (v_isSharedCheck_4342_ == 0)
{
lean_object* v_unused_4343_; 
v_unused_4343_ = lean_ctor_get(v___x_4326_, 0);
lean_dec(v_unused_4343_);
v___x_4330_ = v___x_4326_;
v_isShared_4331_ = v_isSharedCheck_4342_;
goto v_resetjp_4329_;
}
else
{
lean_inc(v_a_4328_);
lean_dec(v___x_4326_);
v___x_4330_ = lean_box(0);
v_isShared_4331_ = v_isSharedCheck_4342_;
goto v_resetjp_4329_;
}
v_resetjp_4329_:
{
lean_object* v_val_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4340_; 
v_val_4332_ = lean_ctor_get(v_a_4327_, 0);
v___x_4333_ = lean_st_ref_take(v___y_4319_);
lean_inc(v_val_4332_);
v___x_4334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4334_, 0, v_inst_4307_);
lean_ctor_set(v___x_4334_, 1, v_val_4332_);
v___x_4335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4335_, 0, v_fst_4308_);
lean_ctor_set(v___x_4335_, 1, v___x_4334_);
v___x_4336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4336_, 0, v_snd_4309_);
lean_ctor_set(v___x_4336_, 1, v___x_4335_);
v___x_4337_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage_spec__1___redArg(v___x_4333_, v_path_4305_, v___x_4336_);
v___x_4338_ = lean_st_ref_put(v___y_4319_, v___x_4337_);
if (v_isShared_4331_ == 0)
{
v___x_4340_ = v___x_4330_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v_a_4327_);
lean_ctor_set(v_reuseFailAlloc_4341_, 1, v_a_4328_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
return v___x_4340_;
}
}
}
else
{
lean_object* v_a_4344_; lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4352_; 
lean_dec(v_snd_4309_);
lean_dec_ref(v_fst_4308_);
lean_dec(v_inst_4307_);
lean_dec_ref(v_path_4305_);
v_a_4344_ = lean_ctor_get(v___x_4326_, 1);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4326_);
if (v_isSharedCheck_4352_ == 0)
{
lean_object* v_unused_4353_; 
v_unused_4353_ = lean_ctor_get(v___x_4326_, 0);
lean_dec(v_unused_4353_);
v___x_4346_ = v___x_4326_;
v_isShared_4347_ = v_isSharedCheck_4352_;
goto v_resetjp_4345_;
}
else
{
lean_inc(v_a_4344_);
lean_dec(v___x_4326_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4352_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4348_ = lean_box(0);
if (v_isShared_4347_ == 0)
{
lean_ctor_set(v___x_4346_, 0, v___x_4348_);
v___x_4350_ = v___x_4346_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v___x_4348_);
lean_ctor_set(v_reuseFailAlloc_4351_, 1, v_a_4344_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___lam__0___boxed(lean_object* v_path_4404_, lean_object* v_fst_4405_, lean_object* v_inst_4406_, lean_object* v_fst_4407_, lean_object* v_snd_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
lean_object* v_res_4417_; 
v_res_4417_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___lam__0(v_path_4404_, v_fst_4405_, v_inst_4406_, v_fst_4407_, v_snd_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_);
lean_dec_ref(v___y_4414_);
lean_dec(v___y_4413_);
lean_dec(v___y_4412_);
lean_dec(v___y_4411_);
lean_dec_ref(v___y_4410_);
lean_dec(v___y_4409_);
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0(lean_object* v_inst_4418_, lean_object* v_path_4419_, lean_object* v_expected_x3f_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_, lean_object* v_a_4426_){
_start:
{
lean_object* v___x_4428_; 
lean_inc_ref(v_a_4421_);
lean_inc_ref(v_path_4419_);
v___x_4428_ = l___private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f(v_path_4419_, v_a_4421_, v_a_4422_, v_a_4423_, v_a_4424_, v_a_4425_, v_a_4426_);
if (lean_obj_tag(v___x_4428_) == 0)
{
lean_object* v_a_4429_; 
v_a_4429_ = lean_ctor_get(v___x_4428_, 0);
if (lean_obj_tag(v_a_4429_) == 1)
{
lean_object* v_val_4430_; lean_object* v_a_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4474_; 
lean_dec_ref(v_a_4421_);
v_val_4430_ = lean_ctor_get(v_a_4429_, 0);
lean_inc(v_val_4430_);
v_a_4431_ = lean_ctor_get(v___x_4428_, 1);
v_isSharedCheck_4474_ = !lean_is_exclusive(v___x_4428_);
if (v_isSharedCheck_4474_ == 0)
{
lean_object* v_unused_4475_; 
v_unused_4475_ = lean_ctor_get(v___x_4428_, 0);
lean_dec(v_unused_4475_);
v___x_4433_ = v___x_4428_;
v_isShared_4434_ = v_isSharedCheck_4474_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_a_4431_);
lean_dec(v___x_4428_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4474_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v_fst_4435_; lean_object* v_snd_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4473_; 
v_fst_4435_ = lean_ctor_get(v_val_4430_, 0);
v_snd_4436_ = lean_ctor_get(v_val_4430_, 1);
v_isSharedCheck_4473_ = !lean_is_exclusive(v_val_4430_);
if (v_isSharedCheck_4473_ == 0)
{
v___x_4438_ = v_val_4430_;
v_isShared_4439_ = v_isSharedCheck_4473_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_snd_4436_);
lean_inc(v_fst_4435_);
lean_dec(v_val_4430_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4473_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
if (lean_obj_tag(v_expected_x3f_4420_) == 0)
{
lean_del_object(v___x_4438_);
lean_dec(v_fst_4435_);
goto v___jp_4440_;
}
else
{
lean_object* v_val_4467_; uint8_t v___x_4468_; 
v_val_4467_ = lean_ctor_get(v_expected_x3f_4420_, 0);
v___x_4468_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_val_4467_, v_fst_4435_);
lean_dec(v_fst_4435_);
if (v___x_4468_ == 0)
{
lean_object* v___x_4469_; lean_object* v___x_4471_; 
lean_dec(v_snd_4436_);
lean_del_object(v___x_4433_);
lean_dec_ref(v_path_4419_);
lean_dec(v_inst_4418_);
v___x_4469_ = lean_box(0);
if (v_isShared_4439_ == 0)
{
lean_ctor_set(v___x_4438_, 1, v_a_4431_);
lean_ctor_set(v___x_4438_, 0, v___x_4469_);
v___x_4471_ = v___x_4438_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v___x_4469_);
lean_ctor_set(v_reuseFailAlloc_4472_, 1, v_a_4431_);
v___x_4471_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
return v___x_4471_;
}
}
else
{
lean_del_object(v___x_4438_);
goto v___jp_4440_;
}
}
v___jp_4440_:
{
lean_object* v___x_4441_; 
v___x_4441_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_snd_4436_, v_inst_4418_);
lean_dec(v_inst_4418_);
lean_dec(v_snd_4436_);
if (lean_obj_tag(v___x_4441_) == 1)
{
lean_object* v___x_4443_; 
lean_dec_ref(v_path_4419_);
if (v_isShared_4434_ == 0)
{
lean_ctor_set(v___x_4433_, 0, v___x_4441_);
v___x_4443_ = v___x_4433_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v___x_4441_);
lean_ctor_set(v_reuseFailAlloc_4444_, 1, v_a_4431_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
else
{
lean_object* v_log_4445_; uint8_t v_action_4446_; uint8_t v_wantsRebuild_4447_; uint8_t v_canceled_4448_; lean_object* v_trace_4449_; lean_object* v_buildTime_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4466_; 
lean_dec(v___x_4441_);
v_log_4445_ = lean_ctor_get(v_a_4431_, 0);
v_action_4446_ = lean_ctor_get_uint8(v_a_4431_, sizeof(void*)*3);
v_wantsRebuild_4447_ = lean_ctor_get_uint8(v_a_4431_, sizeof(void*)*3 + 1);
v_canceled_4448_ = lean_ctor_get_uint8(v_a_4431_, sizeof(void*)*3 + 2);
v_trace_4449_ = lean_ctor_get(v_a_4431_, 1);
v_buildTime_4450_ = lean_ctor_get(v_a_4431_, 2);
v_isSharedCheck_4466_ = !lean_is_exclusive(v_a_4431_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4452_ = v_a_4431_;
v_isShared_4453_ = v_isSharedCheck_4466_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_buildTime_4450_);
lean_inc(v_trace_4449_);
lean_inc(v_log_4445_);
lean_dec(v_a_4431_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4466_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4454_; lean_object* v___x_4455_; uint8_t v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4461_; 
v___x_4454_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___redArg___lam__0___closed__1));
v___x_4455_ = lean_string_append(v_path_4419_, v___x_4454_);
v___x_4456_ = 3;
v___x_4457_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4457_, 0, v___x_4455_);
lean_ctor_set_uint8(v___x_4457_, sizeof(void*)*1, v___x_4456_);
v___x_4458_ = lean_array_get_size(v_log_4445_);
v___x_4459_ = lean_array_push(v_log_4445_, v___x_4457_);
if (v_isShared_4453_ == 0)
{
lean_ctor_set(v___x_4452_, 0, v___x_4459_);
v___x_4461_ = v___x_4452_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v___x_4459_);
lean_ctor_set(v_reuseFailAlloc_4465_, 1, v_trace_4449_);
lean_ctor_set(v_reuseFailAlloc_4465_, 2, v_buildTime_4450_);
lean_ctor_set_uint8(v_reuseFailAlloc_4465_, sizeof(void*)*3, v_action_4446_);
lean_ctor_set_uint8(v_reuseFailAlloc_4465_, sizeof(void*)*3 + 1, v_wantsRebuild_4447_);
lean_ctor_set_uint8(v_reuseFailAlloc_4465_, sizeof(void*)*3 + 2, v_canceled_4448_);
v___x_4461_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
lean_object* v___x_4463_; 
if (v_isShared_4434_ == 0)
{
lean_ctor_set_tag(v___x_4433_, 1);
lean_ctor_set(v___x_4433_, 1, v___x_4461_);
lean_ctor_set(v___x_4433_, 0, v___x_4458_);
v___x_4463_ = v___x_4433_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v___x_4458_);
lean_ctor_set(v_reuseFailAlloc_4464_, 1, v___x_4461_);
v___x_4463_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
return v___x_4463_;
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
lean_object* v_a_4476_; lean_object* v___x_4477_; 
v_a_4476_ = lean_ctor_get(v___x_4428_, 1);
lean_inc(v_a_4476_);
lean_dec_ref_known(v___x_4428_, 2);
lean_inc_ref(v_path_4419_);
v___x_4477_ = l___private_Lake_Build_UsageCutoff_0__Lake_readSidecarBytes_x3f___redArg(v_path_4419_, v_expected_x3f_4420_, v_a_4476_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
if (lean_obj_tag(v_a_4478_) == 1)
{
lean_object* v_val_4479_; lean_object* v_snd_4480_; lean_object* v_a_4481_; lean_object* v_fst_4482_; lean_object* v_fst_4483_; lean_object* v_snd_4484_; lean_object* v_sidecarCache_4485_; lean_object* v___f_4486_; lean_object* v___x_4487_; 
v_val_4479_ = lean_ctor_get(v_a_4478_, 0);
lean_inc(v_val_4479_);
v_snd_4480_ = lean_ctor_get(v_val_4479_, 1);
lean_inc(v_snd_4480_);
v_a_4481_ = lean_ctor_get(v___x_4477_, 1);
lean_inc(v_a_4481_);
lean_dec_ref_known(v___x_4477_, 2);
v_fst_4482_ = lean_ctor_get(v_val_4479_, 0);
lean_inc(v_fst_4482_);
lean_dec(v_val_4479_);
v_fst_4483_ = lean_ctor_get(v_snd_4480_, 0);
lean_inc(v_fst_4483_);
v_snd_4484_ = lean_ctor_get(v_snd_4480_, 1);
lean_inc(v_snd_4484_);
lean_dec(v_snd_4480_);
v_sidecarCache_4485_ = lean_ctor_get(v_a_4425_, 7);
v___f_4486_ = lean_alloc_closure((void*)(l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___lam__0___boxed), 13, 5);
lean_closure_set(v___f_4486_, 0, v_path_4419_);
lean_closure_set(v___f_4486_, 1, v_fst_4482_);
lean_closure_set(v___f_4486_, 2, v_inst_4418_);
lean_closure_set(v___f_4486_, 3, v_fst_4483_);
lean_closure_set(v___f_4486_, 4, v_snd_4484_);
lean_inc_ref(v_sidecarCache_4485_);
v___x_4487_ = l_Std_Mutex_atomically___at___00__private_Lake_Build_UsageCutoff_0__Lake_stampedSidecar_x3f_spec__1___redArg(v_sidecarCache_4485_, v___f_4486_, v_a_4421_, v_a_4422_, v_a_4423_, v_a_4424_, v_a_4425_, v_a_4481_);
return v___x_4487_;
}
else
{
lean_object* v_a_4488_; lean_object* v___x_4490_; uint8_t v_isShared_4491_; uint8_t v_isSharedCheck_4496_; 
lean_dec_ref(v_a_4421_);
lean_dec_ref(v_path_4419_);
lean_dec(v_inst_4418_);
v_a_4488_ = lean_ctor_get(v___x_4477_, 1);
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4496_ == 0)
{
lean_object* v_unused_4497_; 
v_unused_4497_ = lean_ctor_get(v___x_4477_, 0);
lean_dec(v_unused_4497_);
v___x_4490_ = v___x_4477_;
v_isShared_4491_ = v_isSharedCheck_4496_;
goto v_resetjp_4489_;
}
else
{
lean_inc(v_a_4488_);
lean_dec(v___x_4477_);
v___x_4490_ = lean_box(0);
v_isShared_4491_ = v_isSharedCheck_4496_;
goto v_resetjp_4489_;
}
v_resetjp_4489_:
{
lean_object* v___x_4492_; lean_object* v___x_4494_; 
v___x_4492_ = lean_box(0);
if (v_isShared_4491_ == 0)
{
lean_ctor_set(v___x_4490_, 0, v___x_4492_);
v___x_4494_ = v___x_4490_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v___x_4492_);
lean_ctor_set(v_reuseFailAlloc_4495_, 1, v_a_4488_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
return v___x_4494_;
}
}
}
}
else
{
lean_object* v_a_4498_; lean_object* v_a_4499_; lean_object* v___x_4501_; uint8_t v_isShared_4502_; uint8_t v_isSharedCheck_4506_; 
lean_dec_ref(v_a_4421_);
lean_dec_ref(v_path_4419_);
lean_dec(v_inst_4418_);
v_a_4498_ = lean_ctor_get(v___x_4477_, 0);
v_a_4499_ = lean_ctor_get(v___x_4477_, 1);
v_isSharedCheck_4506_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4506_ == 0)
{
v___x_4501_ = v___x_4477_;
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
else
{
lean_inc(v_a_4499_);
lean_inc(v_a_4498_);
lean_dec(v___x_4477_);
v___x_4501_ = lean_box(0);
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
v_resetjp_4500_:
{
lean_object* v___x_4504_; 
if (v_isShared_4502_ == 0)
{
v___x_4504_ = v___x_4501_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_a_4498_);
lean_ctor_set(v_reuseFailAlloc_4505_, 1, v_a_4499_);
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
lean_object* v_a_4507_; lean_object* v_a_4508_; lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4515_; 
lean_dec_ref(v_a_4421_);
lean_dec_ref(v_path_4419_);
lean_dec(v_inst_4418_);
v_a_4507_ = lean_ctor_get(v___x_4428_, 0);
v_a_4508_ = lean_ctor_get(v___x_4428_, 1);
v_isSharedCheck_4515_ = !lean_is_exclusive(v___x_4428_);
if (v_isSharedCheck_4515_ == 0)
{
v___x_4510_ = v___x_4428_;
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
else
{
lean_inc(v_a_4508_);
lean_inc(v_a_4507_);
lean_dec(v___x_4428_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4513_; 
if (v_isShared_4511_ == 0)
{
v___x_4513_ = v___x_4510_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v_a_4507_);
lean_ctor_set(v_reuseFailAlloc_4514_, 1, v_a_4508_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0___boxed(lean_object* v_inst_4516_, lean_object* v_path_4517_, lean_object* v_expected_x3f_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_){
_start:
{
lean_object* v_res_4526_; 
v_res_4526_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0(v_inst_4516_, v_path_4517_, v_expected_x3f_4518_, v_a_4519_, v_a_4520_, v_a_4521_, v_a_4522_, v_a_4523_, v_a_4524_);
lean_dec_ref(v_a_4523_);
lean_dec(v_a_4522_);
lean_dec(v_a_4521_);
lean_dec(v_a_4520_);
lean_dec(v_expected_x3f_4518_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(lean_object* v_hashes_4528_, lean_object* v_importArts_4529_, lean_object* v_m_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_, lean_object* v_a_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_){
_start:
{
lean_object* v___x_4538_; 
v___x_4538_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_importArts_4529_, v_m_4530_);
if (lean_obj_tag(v___x_4538_) == 1)
{
lean_object* v_val_4539_; lean_object* v___x_4540_; 
v_val_4539_ = lean_ctor_get(v___x_4538_, 0);
lean_inc(v_val_4539_);
lean_dec_ref_known(v___x_4538_, 1);
v___x_4540_ = l_Lean_ImportArtifacts_olean_x3f(v_val_4539_);
if (lean_obj_tag(v___x_4540_) == 1)
{
lean_object* v_val_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v_usageFile_4544_; lean_object* v___x_4545_; 
v_val_4541_ = lean_ctor_get(v___x_4540_, 0);
lean_inc_n(v_val_4541_, 2);
lean_dec_ref_known(v___x_4540_, 1);
v___x_4542_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instImpl_00___x40_Lake_Build_UsageCutoff_2103468120____hygCtx___hyg_32_));
v___x_4543_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1));
v_usageFile_4544_ = l_System_FilePath_withExtension(v_val_4541_, v___x_4543_);
v___x_4545_ = l_Lean_ImportArtifacts_oleanServer_x3f(v_val_4539_);
lean_dec(v_val_4539_);
if (lean_obj_tag(v___x_4545_) == 0)
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4546_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instImpl_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_));
v___x_4547_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___closed__0));
lean_inc(v_val_4541_);
v___x_4548_ = l_System_FilePath_withExtension(v_val_4541_, v___x_4547_);
v___x_4549_ = lean_box(0);
lean_inc_ref(v_a_4531_);
v___x_4550_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0(v___x_4546_, v___x_4548_, v___x_4549_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_, v_a_4535_, v_a_4536_);
if (lean_obj_tag(v___x_4550_) == 0)
{
lean_object* v_a_4551_; 
v_a_4551_ = lean_ctor_get(v___x_4550_, 0);
lean_inc(v_a_4551_);
if (lean_obj_tag(v_a_4551_) == 1)
{
lean_object* v_val_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4615_; 
v_val_4552_ = lean_ctor_get(v_a_4551_, 0);
v_isSharedCheck_4615_ = !lean_is_exclusive(v_a_4551_);
if (v_isSharedCheck_4615_ == 0)
{
v___x_4554_ = v_a_4551_;
v_isShared_4555_ = v_isSharedCheck_4615_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_val_4552_);
lean_dec(v_a_4551_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4615_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v_a_4556_; lean_object* v_usage_4557_; lean_object* v_olean_4558_; lean_object* v___x_4560_; 
v_a_4556_ = lean_ctor_get(v___x_4550_, 1);
lean_inc(v_a_4556_);
lean_dec_ref_known(v___x_4550_, 2);
v_usage_4557_ = lean_ctor_get(v_val_4552_, 0);
lean_inc_ref(v_usage_4557_);
v_olean_4558_ = lean_ctor_get(v_val_4552_, 1);
lean_inc_ref(v_olean_4558_);
lean_dec(v_val_4552_);
if (v_isShared_4555_ == 0)
{
lean_ctor_set(v___x_4554_, 0, v_usage_4557_);
v___x_4560_ = v___x_4554_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4614_; 
v_reuseFailAlloc_4614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4614_, 0, v_usage_4557_);
v___x_4560_ = v_reuseFailAlloc_4614_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
lean_object* v___x_4561_; 
lean_inc_ref(v_a_4531_);
v___x_4561_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1(v___x_4542_, v_usageFile_4544_, v___x_4560_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_, v_a_4535_, v_a_4556_);
lean_dec_ref(v___x_4560_);
if (lean_obj_tag(v___x_4561_) == 0)
{
lean_object* v_a_4562_; 
v_a_4562_ = lean_ctor_get(v___x_4561_, 0);
lean_inc(v_a_4562_);
if (lean_obj_tag(v_a_4562_) == 1)
{
lean_object* v_a_4563_; lean_object* v_val_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4595_; 
v_a_4563_ = lean_ctor_get(v___x_4561_, 1);
lean_inc(v_a_4563_);
lean_dec_ref_known(v___x_4561_, 2);
v_val_4564_ = lean_ctor_get(v_a_4562_, 0);
v_isSharedCheck_4595_ = !lean_is_exclusive(v_a_4562_);
if (v_isSharedCheck_4595_ == 0)
{
v___x_4566_ = v_a_4562_;
v_isShared_4567_ = v_isSharedCheck_4595_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_val_4564_);
lean_dec(v_a_4562_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4595_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4568_; 
lean_inc(v_val_4541_);
v___x_4568_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(v_hashes_4528_, v_val_4541_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_, v_a_4535_, v_a_4563_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v_a_4569_; lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4585_; 
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
v_a_4570_ = lean_ctor_get(v___x_4568_, 1);
v_isSharedCheck_4585_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4572_ = v___x_4568_;
v_isShared_4573_ = v_isSharedCheck_4585_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_inc(v_a_4569_);
lean_dec(v___x_4568_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4585_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
uint8_t v___x_4574_; 
v___x_4574_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_olean_4558_, v_a_4569_);
lean_dec(v_a_4569_);
lean_dec_ref(v_olean_4558_);
if (v___x_4574_ == 0)
{
lean_object* v___x_4576_; 
lean_del_object(v___x_4566_);
lean_dec(v_val_4564_);
lean_dec(v_val_4541_);
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v___x_4549_);
v___x_4576_ = v___x_4572_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v___x_4549_);
lean_ctor_set(v_reuseFailAlloc_4577_, 1, v_a_4570_);
v___x_4576_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
return v___x_4576_;
}
}
else
{
lean_object* v___x_4578_; lean_object* v___x_4580_; 
v___x_4578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4578_, 0, v_val_4541_);
lean_ctor_set(v___x_4578_, 1, v_val_4564_);
if (v_isShared_4567_ == 0)
{
lean_ctor_set(v___x_4566_, 0, v___x_4578_);
v___x_4580_ = v___x_4566_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v___x_4578_);
v___x_4580_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
lean_object* v___x_4582_; 
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v___x_4580_);
v___x_4582_ = v___x_4572_;
goto v_reusejp_4581_;
}
else
{
lean_object* v_reuseFailAlloc_4583_; 
v_reuseFailAlloc_4583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4583_, 0, v___x_4580_);
lean_ctor_set(v_reuseFailAlloc_4583_, 1, v_a_4570_);
v___x_4582_ = v_reuseFailAlloc_4583_;
goto v_reusejp_4581_;
}
v_reusejp_4581_:
{
return v___x_4582_;
}
}
}
}
}
else
{
lean_object* v_a_4586_; lean_object* v_a_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4594_; 
lean_del_object(v___x_4566_);
lean_dec(v_val_4564_);
lean_dec_ref(v_olean_4558_);
lean_dec(v_val_4541_);
v_a_4586_ = lean_ctor_get(v___x_4568_, 0);
v_a_4587_ = lean_ctor_get(v___x_4568_, 1);
v_isSharedCheck_4594_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4594_ == 0)
{
v___x_4589_ = v___x_4568_;
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_a_4587_);
lean_inc(v_a_4586_);
lean_dec(v___x_4568_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
lean_object* v___x_4592_; 
if (v_isShared_4590_ == 0)
{
v___x_4592_ = v___x_4589_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v_a_4586_);
lean_ctor_set(v_reuseFailAlloc_4593_, 1, v_a_4587_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
return v___x_4592_;
}
}
}
}
}
else
{
lean_object* v_a_4596_; lean_object* v___x_4598_; uint8_t v_isShared_4599_; uint8_t v_isSharedCheck_4603_; 
lean_dec(v_a_4562_);
lean_dec_ref(v_olean_4558_);
lean_dec(v_val_4541_);
lean_dec_ref(v_a_4531_);
v_a_4596_ = lean_ctor_get(v___x_4561_, 1);
v_isSharedCheck_4603_ = !lean_is_exclusive(v___x_4561_);
if (v_isSharedCheck_4603_ == 0)
{
lean_object* v_unused_4604_; 
v_unused_4604_ = lean_ctor_get(v___x_4561_, 0);
lean_dec(v_unused_4604_);
v___x_4598_ = v___x_4561_;
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
else
{
lean_inc(v_a_4596_);
lean_dec(v___x_4561_);
v___x_4598_ = lean_box(0);
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
v_resetjp_4597_:
{
lean_object* v___x_4601_; 
if (v_isShared_4599_ == 0)
{
lean_ctor_set(v___x_4598_, 0, v___x_4549_);
v___x_4601_ = v___x_4598_;
goto v_reusejp_4600_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v___x_4549_);
lean_ctor_set(v_reuseFailAlloc_4602_, 1, v_a_4596_);
v___x_4601_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4600_;
}
v_reusejp_4600_:
{
return v___x_4601_;
}
}
}
}
else
{
lean_object* v_a_4605_; lean_object* v_a_4606_; lean_object* v___x_4608_; uint8_t v_isShared_4609_; uint8_t v_isSharedCheck_4613_; 
lean_dec_ref(v_olean_4558_);
lean_dec(v_val_4541_);
lean_dec_ref(v_a_4531_);
v_a_4605_ = lean_ctor_get(v___x_4561_, 0);
v_a_4606_ = lean_ctor_get(v___x_4561_, 1);
v_isSharedCheck_4613_ = !lean_is_exclusive(v___x_4561_);
if (v_isSharedCheck_4613_ == 0)
{
v___x_4608_ = v___x_4561_;
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
else
{
lean_inc(v_a_4606_);
lean_inc(v_a_4605_);
lean_dec(v___x_4561_);
v___x_4608_ = lean_box(0);
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
v_resetjp_4607_:
{
lean_object* v___x_4611_; 
if (v_isShared_4609_ == 0)
{
v___x_4611_ = v___x_4608_;
goto v_reusejp_4610_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v_a_4605_);
lean_ctor_set(v_reuseFailAlloc_4612_, 1, v_a_4606_);
v___x_4611_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4610_;
}
v_reusejp_4610_:
{
return v___x_4611_;
}
}
}
}
}
}
else
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4623_; 
lean_dec(v_a_4551_);
lean_dec_ref(v_usageFile_4544_);
lean_dec(v_val_4541_);
lean_dec_ref(v_a_4531_);
v_a_4616_ = lean_ctor_get(v___x_4550_, 1);
v_isSharedCheck_4623_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4623_ == 0)
{
lean_object* v_unused_4624_; 
v_unused_4624_ = lean_ctor_get(v___x_4550_, 0);
lean_dec(v_unused_4624_);
v___x_4618_ = v___x_4550_;
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v___x_4550_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v___x_4621_; 
if (v_isShared_4619_ == 0)
{
lean_ctor_set(v___x_4618_, 0, v___x_4549_);
v___x_4621_ = v___x_4618_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v___x_4549_);
lean_ctor_set(v_reuseFailAlloc_4622_, 1, v_a_4616_);
v___x_4621_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
return v___x_4621_;
}
}
}
}
else
{
lean_object* v_a_4625_; lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
lean_dec_ref(v_usageFile_4544_);
lean_dec(v_val_4541_);
lean_dec_ref(v_a_4531_);
v_a_4625_ = lean_ctor_get(v___x_4550_, 0);
v_a_4626_ = lean_ctor_get(v___x_4550_, 1);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4550_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_inc(v_a_4625_);
lean_dec(v___x_4550_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4625_);
lean_ctor_set(v_reuseFailAlloc_4632_, 1, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
}
else
{
lean_object* v___x_4634_; lean_object* v___x_4635_; 
lean_dec_ref_known(v___x_4545_, 1);
v___x_4634_ = lean_box(0);
v___x_4635_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1(v___x_4542_, v_usageFile_4544_, v___x_4634_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_, v_a_4535_, v_a_4536_);
if (lean_obj_tag(v___x_4635_) == 0)
{
lean_object* v_a_4636_; lean_object* v_a_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4655_; 
v_a_4636_ = lean_ctor_get(v___x_4635_, 0);
v_a_4637_ = lean_ctor_get(v___x_4635_, 1);
v_isSharedCheck_4655_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4639_ = v___x_4635_;
v_isShared_4640_ = v_isSharedCheck_4655_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_a_4637_);
lean_inc(v_a_4636_);
lean_dec(v___x_4635_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4655_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v___y_4642_; 
if (lean_obj_tag(v_a_4636_) == 0)
{
lean_dec(v_val_4541_);
v___y_4642_ = v___x_4634_;
goto v___jp_4641_;
}
else
{
lean_object* v_val_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4654_; 
v_val_4646_ = lean_ctor_get(v_a_4636_, 0);
v_isSharedCheck_4654_ = !lean_is_exclusive(v_a_4636_);
if (v_isSharedCheck_4654_ == 0)
{
v___x_4648_ = v_a_4636_;
v_isShared_4649_ = v_isSharedCheck_4654_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_val_4646_);
lean_dec(v_a_4636_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4654_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4650_; lean_object* v___x_4652_; 
v___x_4650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4650_, 0, v_val_4541_);
lean_ctor_set(v___x_4650_, 1, v_val_4646_);
if (v_isShared_4649_ == 0)
{
lean_ctor_set(v___x_4648_, 0, v___x_4650_);
v___x_4652_ = v___x_4648_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v___x_4650_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
v___y_4642_ = v___x_4652_;
goto v___jp_4641_;
}
}
}
v___jp_4641_:
{
lean_object* v___x_4644_; 
if (v_isShared_4640_ == 0)
{
lean_ctor_set(v___x_4639_, 0, v___y_4642_);
v___x_4644_ = v___x_4639_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4645_; 
v_reuseFailAlloc_4645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4645_, 0, v___y_4642_);
lean_ctor_set(v_reuseFailAlloc_4645_, 1, v_a_4637_);
v___x_4644_ = v_reuseFailAlloc_4645_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
return v___x_4644_;
}
}
}
}
else
{
lean_object* v_a_4656_; lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
lean_dec(v_val_4541_);
v_a_4656_ = lean_ctor_get(v___x_4635_, 0);
v_a_4657_ = lean_ctor_get(v___x_4635_, 1);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4635_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_inc(v_a_4656_);
lean_dec(v___x_4635_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4656_);
lean_ctor_set(v_reuseFailAlloc_4663_, 1, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
}
}
else
{
lean_object* v___x_4665_; lean_object* v___x_4666_; 
lean_dec(v___x_4540_);
lean_dec(v_val_4539_);
lean_dec_ref(v_a_4531_);
v___x_4665_ = lean_box(0);
v___x_4666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4666_, 0, v___x_4665_);
lean_ctor_set(v___x_4666_, 1, v_a_4536_);
return v___x_4666_;
}
}
else
{
lean_object* v___x_4667_; lean_object* v___x_4668_; 
lean_dec(v___x_4538_);
lean_dec_ref(v_a_4531_);
v___x_4667_ = lean_box(0);
v___x_4668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4668_, 0, v___x_4667_);
lean_ctor_set(v___x_4668_, 1, v_a_4536_);
return v___x_4668_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___boxed(lean_object* v_hashes_4669_, lean_object* v_importArts_4670_, lean_object* v_m_4671_, lean_object* v_a_4672_, lean_object* v_a_4673_, lean_object* v_a_4674_, lean_object* v_a_4675_, lean_object* v_a_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_){
_start:
{
lean_object* v_res_4679_; 
v_res_4679_ = l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(v_hashes_4669_, v_importArts_4670_, v_m_4671_, v_a_4672_, v_a_4673_, v_a_4674_, v_a_4675_, v_a_4676_, v_a_4677_);
lean_dec_ref(v_a_4676_);
lean_dec(v_a_4675_);
lean_dec(v_a_4674_);
lean_dec(v_a_4673_);
lean_dec(v_m_4671_);
lean_dec(v_importArts_4670_);
lean_dec(v_hashes_4669_);
return v_res_4679_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0(lean_object* v_path_4680_, lean_object* v_bytes_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_, lean_object* v_a_4687_){
_start:
{
lean_object* v___x_4689_; 
v___x_4689_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___redArg(v_path_4680_, v_bytes_4681_, v_a_4687_);
return v___x_4689_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0___boxed(lean_object* v_path_4690_, lean_object* v_bytes_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_a_4696_, lean_object* v_a_4697_, lean_object* v_a_4698_){
_start:
{
lean_object* v_res_4699_; 
v_res_4699_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0_spec__0(v_path_4690_, v_bytes_4691_, v_a_4692_, v_a_4693_, v_a_4694_, v_a_4695_, v_a_4696_, v_a_4697_);
lean_dec_ref(v_a_4696_);
lean_dec(v_a_4695_);
lean_dec(v_a_4694_);
lean_dec(v_a_4693_);
lean_dec_ref(v_a_4692_);
return v_res_4699_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2(lean_object* v_path_4700_, lean_object* v_bytes_4701_, lean_object* v_a_4702_, lean_object* v_a_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_){
_start:
{
lean_object* v___x_4709_; 
v___x_4709_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___redArg(v_path_4700_, v_bytes_4701_, v_a_4707_);
return v___x_4709_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2___boxed(lean_object* v_path_4710_, lean_object* v_bytes_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_, lean_object* v_a_4718_){
_start:
{
lean_object* v_res_4719_; 
v_res_4719_ = l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__1_spec__2(v_path_4710_, v_bytes_4711_, v_a_4712_, v_a_4713_, v_a_4714_, v_a_4715_, v_a_4716_, v_a_4717_);
lean_dec_ref(v_a_4716_);
lean_dec(v_a_4715_);
lean_dec(v_a_4714_);
lean_dec(v_a_4713_);
lean_dec_ref(v_a_4712_);
return v_res_4719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__0(size_t v_sz_4720_, size_t v_i_4721_, lean_object* v_bs_4722_){
_start:
{
uint8_t v___x_4723_; 
v___x_4723_ = lean_usize_dec_lt(v_i_4721_, v_sz_4720_);
if (v___x_4723_ == 0)
{
return v_bs_4722_;
}
else
{
lean_object* v_v_4724_; lean_object* v_fst_4725_; lean_object* v___x_4726_; lean_object* v_bs_x27_4727_; size_t v___x_4728_; size_t v___x_4729_; lean_object* v___x_4730_; 
v_v_4724_ = lean_array_uget_borrowed(v_bs_4722_, v_i_4721_);
v_fst_4725_ = lean_ctor_get(v_v_4724_, 0);
lean_inc(v_fst_4725_);
v___x_4726_ = lean_unsigned_to_nat(0u);
v_bs_x27_4727_ = lean_array_uset(v_bs_4722_, v_i_4721_, v___x_4726_);
v___x_4728_ = ((size_t)1ULL);
v___x_4729_ = lean_usize_add(v_i_4721_, v___x_4728_);
v___x_4730_ = lean_array_uset(v_bs_x27_4727_, v_i_4721_, v_fst_4725_);
v_i_4721_ = v___x_4729_;
v_bs_4722_ = v___x_4730_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__0___boxed(lean_object* v_sz_4732_, lean_object* v_i_4733_, lean_object* v_bs_4734_){
_start:
{
size_t v_sz_boxed_4735_; size_t v_i_boxed_4736_; lean_object* v_res_4737_; 
v_sz_boxed_4735_ = lean_unbox_usize(v_sz_4732_);
lean_dec(v_sz_4732_);
v_i_boxed_4736_ = lean_unbox_usize(v_i_4733_);
lean_dec(v_i_4733_);
v_res_4737_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__0(v_sz_boxed_4735_, v_i_boxed_4736_, v_bs_4734_);
return v_res_4737_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___redArg(lean_object* v_xs_4738_, lean_object* v_ys_4739_, lean_object* v_x_4740_){
_start:
{
lean_object* v_zero_4741_; uint8_t v_isZero_4742_; 
v_zero_4741_ = lean_unsigned_to_nat(0u);
v_isZero_4742_ = lean_nat_dec_eq(v_x_4740_, v_zero_4741_);
if (v_isZero_4742_ == 1)
{
lean_dec(v_x_4740_);
return v_isZero_4742_;
}
else
{
lean_object* v_one_4743_; lean_object* v_n_4744_; lean_object* v___x_4745_; lean_object* v_fst_4746_; lean_object* v_snd_4747_; lean_object* v___x_4748_; lean_object* v_fst_4749_; lean_object* v_snd_4750_; uint8_t v___x_4751_; 
v_one_4743_ = lean_unsigned_to_nat(1u);
v_n_4744_ = lean_nat_sub(v_x_4740_, v_one_4743_);
lean_dec(v_x_4740_);
v___x_4745_ = lean_array_fget_borrowed(v_xs_4738_, v_n_4744_);
v_fst_4746_ = lean_ctor_get(v___x_4745_, 0);
v_snd_4747_ = lean_ctor_get(v___x_4745_, 1);
v___x_4748_ = lean_array_fget_borrowed(v_ys_4739_, v_n_4744_);
v_fst_4749_ = lean_ctor_get(v___x_4748_, 0);
v_snd_4750_ = lean_ctor_get(v___x_4748_, 1);
v___x_4751_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_fst_4746_, v_fst_4749_);
if (v___x_4751_ == 0)
{
lean_dec(v_n_4744_);
return v___x_4751_;
}
else
{
uint8_t v___x_4752_; 
v___x_4752_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_snd_4747_, v_snd_4750_);
if (v___x_4752_ == 0)
{
lean_dec(v_n_4744_);
return v___x_4752_;
}
else
{
v_x_4740_ = v_n_4744_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___redArg___boxed(lean_object* v_xs_4754_, lean_object* v_ys_4755_, lean_object* v_x_4756_){
_start:
{
uint8_t v_res_4757_; lean_object* v_r_4758_; 
v_res_4757_ = l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___redArg(v_xs_4754_, v_ys_4755_, v_x_4756_);
lean_dec_ref(v_ys_4755_);
lean_dec_ref(v_xs_4754_);
v_r_4758_ = lean_box(v_res_4757_);
return v_r_4758_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__2(lean_object* v_hashes_4759_, lean_object* v_importArts_4760_, lean_object* v___x_4761_, lean_object* v_init_4762_, lean_object* v_x_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_){
_start:
{
lean_object* v_d_4772_; lean_object* v___y_4773_; 
if (lean_obj_tag(v_x_4763_) == 0)
{
lean_object* v_k_4776_; lean_object* v_v_4777_; lean_object* v_l_4778_; lean_object* v_r_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; uint8_t v___x_4782_; lean_object* v___x_4783_; 
v_k_4776_ = lean_ctor_get(v_x_4763_, 1);
v_v_4777_ = lean_ctor_get(v_x_4763_, 2);
v_l_4778_ = lean_ctor_get(v_x_4763_, 3);
v_r_4779_ = lean_ctor_get(v_x_4763_, 4);
v___x_4780_ = lean_box(0);
v___x_4781_ = lean_unsigned_to_nat(0u);
v___x_4782_ = lean_nat_dec_eq(v___x_4761_, v___x_4781_);
lean_inc_ref(v___y_4764_);
v___x_4783_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__2(v_hashes_4759_, v_importArts_4760_, v___x_4761_, v_init_4762_, v_l_4778_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_, v___y_4769_);
if (lean_obj_tag(v___x_4783_) == 0)
{
lean_object* v_a_4784_; 
v_a_4784_ = lean_ctor_get(v___x_4783_, 0);
lean_inc(v_a_4784_);
if (lean_obj_tag(v_a_4784_) == 0)
{
lean_object* v_a_4785_; lean_object* v_a_4786_; 
lean_dec_ref(v___y_4764_);
v_a_4785_ = lean_ctor_get(v___x_4783_, 1);
lean_inc(v_a_4785_);
lean_dec_ref_known(v___x_4783_, 2);
v_a_4786_ = lean_ctor_get(v_a_4784_, 0);
lean_inc(v_a_4786_);
lean_dec_ref_known(v_a_4784_, 1);
v_d_4772_ = v_a_4786_;
v___y_4773_ = v_a_4785_;
goto v___jp_4771_;
}
else
{
lean_object* v_a_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4839_; 
v_a_4787_ = lean_ctor_get(v_a_4784_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v_a_4784_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4789_ = v_a_4784_;
v_isShared_4790_ = v_isSharedCheck_4839_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_a_4787_);
lean_dec(v_a_4784_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4839_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v_a_4791_; lean_object* v_snd_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4837_; 
v_a_4791_ = lean_ctor_get(v___x_4783_, 1);
lean_inc(v_a_4791_);
lean_dec_ref_known(v___x_4783_, 2);
v_snd_4792_ = lean_ctor_get(v_a_4787_, 1);
v_isSharedCheck_4837_ = !lean_is_exclusive(v_a_4787_);
if (v_isSharedCheck_4837_ == 0)
{
lean_object* v_unused_4838_; 
v_unused_4838_ = lean_ctor_get(v_a_4787_, 0);
lean_dec(v_unused_4838_);
v___x_4794_ = v_a_4787_;
v_isShared_4795_ = v_isSharedCheck_4837_;
goto v_resetjp_4793_;
}
else
{
lean_inc(v_snd_4792_);
lean_dec(v_a_4787_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4837_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
lean_object* v___x_4796_; 
v___x_4796_ = l_Lean_ImportArtifacts_oleanServer_x3f(v_v_4777_);
if (lean_obj_tag(v___x_4796_) == 0)
{
lean_object* v___x_4797_; 
lean_inc_ref(v___y_4764_);
v___x_4797_ = l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(v_hashes_4759_, v_importArts_4760_, v_k_4776_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_, v_a_4791_);
if (lean_obj_tag(v___x_4797_) == 0)
{
lean_object* v_a_4798_; 
v_a_4798_ = lean_ctor_get(v___x_4797_, 0);
if (lean_obj_tag(v_a_4798_) == 1)
{
lean_object* v_val_4799_; lean_object* v_snd_4800_; lean_object* v___x_4802_; uint8_t v_isShared_4803_; uint8_t v_isSharedCheck_4814_; 
lean_del_object(v___x_4789_);
v_val_4799_ = lean_ctor_get(v_a_4798_, 0);
lean_inc(v_val_4799_);
v_snd_4800_ = lean_ctor_get(v_val_4799_, 1);
v_isSharedCheck_4814_ = !lean_is_exclusive(v_val_4799_);
if (v_isSharedCheck_4814_ == 0)
{
lean_object* v_unused_4815_; 
v_unused_4815_ = lean_ctor_get(v_val_4799_, 0);
lean_dec(v_unused_4815_);
v___x_4802_ = v_val_4799_;
v_isShared_4803_ = v_isSharedCheck_4814_;
goto v_resetjp_4801_;
}
else
{
lean_inc(v_snd_4800_);
lean_dec(v_val_4799_);
v___x_4802_ = lean_box(0);
v_isShared_4803_ = v_isSharedCheck_4814_;
goto v_resetjp_4801_;
}
v_resetjp_4801_:
{
lean_object* v_a_4804_; lean_object* v_specKeys_4805_; lean_object* v___x_4807_; 
v_a_4804_ = lean_ctor_get(v___x_4797_, 1);
lean_inc(v_a_4804_);
lean_dec_ref_known(v___x_4797_, 2);
v_specKeys_4805_ = lean_ctor_get(v_snd_4800_, 5);
lean_inc_ref(v_specKeys_4805_);
lean_dec(v_snd_4800_);
lean_inc(v_k_4776_);
if (v_isShared_4803_ == 0)
{
lean_ctor_set(v___x_4802_, 1, v_specKeys_4805_);
lean_ctor_set(v___x_4802_, 0, v_k_4776_);
v___x_4807_ = v___x_4802_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_k_4776_);
lean_ctor_set(v_reuseFailAlloc_4813_, 1, v_specKeys_4805_);
v___x_4807_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
lean_object* v___x_4808_; lean_object* v___x_4810_; 
v___x_4808_ = lean_array_push(v_snd_4792_, v___x_4807_);
if (v_isShared_4795_ == 0)
{
lean_ctor_set(v___x_4794_, 1, v___x_4808_);
lean_ctor_set(v___x_4794_, 0, v___x_4780_);
v___x_4810_ = v___x_4794_;
goto v_reusejp_4809_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v___x_4780_);
lean_ctor_set(v_reuseFailAlloc_4812_, 1, v___x_4808_);
v___x_4810_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4809_;
}
v_reusejp_4809_:
{
v_init_4762_ = v___x_4810_;
v_x_4763_ = v_r_4779_;
v___y_4769_ = v_a_4804_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4817_; lean_object* v___x_4819_; 
lean_dec_ref(v___y_4764_);
v_a_4816_ = lean_ctor_get(v___x_4797_, 1);
lean_inc(v_a_4816_);
lean_dec_ref_known(v___x_4797_, 2);
v___x_4817_ = lean_box(v___x_4782_);
if (v_isShared_4790_ == 0)
{
lean_ctor_set(v___x_4789_, 0, v___x_4817_);
v___x_4819_ = v___x_4789_;
goto v_reusejp_4818_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v___x_4817_);
v___x_4819_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4818_;
}
v_reusejp_4818_:
{
lean_object* v___x_4821_; 
if (v_isShared_4795_ == 0)
{
lean_ctor_set(v___x_4794_, 0, v___x_4819_);
v___x_4821_ = v___x_4794_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v___x_4819_);
lean_ctor_set(v_reuseFailAlloc_4822_, 1, v_snd_4792_);
v___x_4821_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
v_d_4772_ = v___x_4821_;
v___y_4773_ = v_a_4816_;
goto v___jp_4771_;
}
}
}
}
else
{
lean_object* v_a_4824_; lean_object* v_a_4825_; lean_object* v___x_4827_; uint8_t v_isShared_4828_; uint8_t v_isSharedCheck_4832_; 
lean_del_object(v___x_4794_);
lean_dec(v_snd_4792_);
lean_del_object(v___x_4789_);
lean_dec_ref(v___y_4764_);
v_a_4824_ = lean_ctor_get(v___x_4797_, 0);
v_a_4825_ = lean_ctor_get(v___x_4797_, 1);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4797_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4827_ = v___x_4797_;
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
else
{
lean_inc(v_a_4825_);
lean_inc(v_a_4824_);
lean_dec(v___x_4797_);
v___x_4827_ = lean_box(0);
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
v_resetjp_4826_:
{
lean_object* v___x_4830_; 
if (v_isShared_4828_ == 0)
{
v___x_4830_ = v___x_4827_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v_a_4824_);
lean_ctor_set(v_reuseFailAlloc_4831_, 1, v_a_4825_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
return v___x_4830_;
}
}
}
}
else
{
lean_object* v___x_4834_; 
lean_dec_ref_known(v___x_4796_, 1);
lean_del_object(v___x_4789_);
if (v_isShared_4795_ == 0)
{
lean_ctor_set(v___x_4794_, 0, v___x_4780_);
v___x_4834_ = v___x_4794_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v___x_4780_);
lean_ctor_set(v_reuseFailAlloc_4836_, 1, v_snd_4792_);
v___x_4834_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
v_init_4762_ = v___x_4834_;
v_x_4763_ = v_r_4779_;
v___y_4769_ = v_a_4791_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_4764_);
return v___x_4783_;
}
}
else
{
lean_object* v___x_4840_; lean_object* v___x_4841_; 
lean_dec_ref(v___y_4764_);
v___x_4840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4840_, 0, v_init_4762_);
v___x_4841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4841_, 0, v___x_4840_);
lean_ctor_set(v___x_4841_, 1, v___y_4769_);
return v___x_4841_;
}
v___jp_4771_:
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4774_, 0, v_d_4772_);
v___x_4775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4774_);
lean_ctor_set(v___x_4775_, 1, v___y_4773_);
return v___x_4775_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__2___boxed(lean_object* v_hashes_4842_, lean_object* v_importArts_4843_, lean_object* v___x_4844_, lean_object* v_init_4845_, lean_object* v_x_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__2(v_hashes_4842_, v_importArts_4843_, v___x_4844_, v_init_4845_, v_x_4846_, v___y_4847_, v___y_4848_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_);
lean_dec_ref(v___y_4851_);
lean_dec(v___y_4850_);
lean_dec(v___y_4849_);
lean_dec(v___y_4848_);
lean_dec(v_x_4846_);
lean_dec(v___x_4844_);
lean_dec(v_importArts_4843_);
lean_dec(v_hashes_4842_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged(lean_object* v_usage_4860_, lean_object* v_hashes_4861_, lean_object* v_importArts_4862_, lean_object* v_a_4863_, lean_object* v_a_4864_, lean_object* v_a_4865_, lean_object* v_a_4866_, lean_object* v_a_4867_, lean_object* v_a_4868_){
_start:
{
lean_object* v___y_4871_; uint8_t v___y_4872_; lean_object* v_specLookups_4875_; lean_object* v_a_4877_; lean_object* v_a_4878_; lean_object* v___x_4899_; lean_object* v___x_4900_; uint8_t v___x_4901_; 
v_specLookups_4875_ = lean_ctor_get(v_usage_4860_, 12);
lean_inc_ref(v_specLookups_4875_);
lean_dec_ref(v_usage_4860_);
v___x_4899_ = lean_array_get_size(v_specLookups_4875_);
v___x_4900_ = lean_unsigned_to_nat(0u);
v___x_4901_ = lean_nat_dec_eq(v___x_4899_, v___x_4900_);
if (v___x_4901_ == 0)
{
lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4902_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___closed__1));
v___x_4903_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__2(v_hashes_4861_, v_importArts_4862_, v___x_4899_, v___x_4902_, v_importArts_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
if (lean_obj_tag(v___x_4903_) == 0)
{
lean_object* v_a_4904_; lean_object* v_a_4905_; lean_object* v_a_4906_; 
v_a_4904_ = lean_ctor_get(v___x_4903_, 0);
lean_inc(v_a_4904_);
v_a_4905_ = lean_ctor_get(v___x_4903_, 1);
lean_inc(v_a_4905_);
lean_dec_ref_known(v___x_4903_, 2);
v_a_4906_ = lean_ctor_get(v_a_4904_, 0);
lean_inc(v_a_4906_);
lean_dec(v_a_4904_);
v_a_4877_ = v_a_4906_;
v_a_4878_ = v_a_4905_;
goto v___jp_4876_;
}
else
{
lean_object* v_a_4907_; lean_object* v_a_4908_; lean_object* v___x_4910_; uint8_t v_isShared_4911_; uint8_t v_isSharedCheck_4915_; 
lean_dec_ref(v_specLookups_4875_);
v_a_4907_ = lean_ctor_get(v___x_4903_, 0);
v_a_4908_ = lean_ctor_get(v___x_4903_, 1);
v_isSharedCheck_4915_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4910_ = v___x_4903_;
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
else
{
lean_inc(v_a_4908_);
lean_inc(v_a_4907_);
lean_dec(v___x_4903_);
v___x_4910_ = lean_box(0);
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
v_resetjp_4909_:
{
lean_object* v___x_4913_; 
if (v_isShared_4911_ == 0)
{
v___x_4913_ = v___x_4910_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v_a_4907_);
lean_ctor_set(v_reuseFailAlloc_4914_, 1, v_a_4908_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
return v___x_4913_;
}
}
}
}
else
{
lean_object* v___x_4916_; lean_object* v___x_4917_; 
lean_dec_ref(v_specLookups_4875_);
lean_dec_ref(v_a_4863_);
v___x_4916_ = lean_box(v___x_4901_);
v___x_4917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4917_, 0, v___x_4916_);
lean_ctor_set(v___x_4917_, 1, v_a_4868_);
return v___x_4917_;
}
v___jp_4870_:
{
lean_object* v___x_4873_; lean_object* v___x_4874_; 
v___x_4873_ = lean_box(v___y_4872_);
v___x_4874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4874_, 0, v___x_4873_);
lean_ctor_set(v___x_4874_, 1, v___y_4871_);
return v___x_4874_;
}
v___jp_4876_:
{
lean_object* v_fst_4879_; 
v_fst_4879_ = lean_ctor_get(v_a_4877_, 0);
if (lean_obj_tag(v_fst_4879_) == 0)
{
lean_object* v_snd_4880_; size_t v_sz_4881_; size_t v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; uint8_t v___x_4887_; 
v_snd_4880_ = lean_ctor_get(v_a_4877_, 1);
lean_inc(v_snd_4880_);
lean_dec_ref(v_a_4877_);
v_sz_4881_ = lean_array_size(v_specLookups_4875_);
v___x_4882_ = ((size_t)0ULL);
lean_inc_ref(v_specLookups_4875_);
v___x_4883_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__0(v_sz_4881_, v___x_4882_, v_specLookups_4875_);
v___x_4884_ = l_Lean_ModuleUsage_specProviders(v___x_4883_, v_snd_4880_);
lean_dec(v_snd_4880_);
v___x_4885_ = lean_array_get_size(v___x_4884_);
v___x_4886_ = lean_array_get_size(v_specLookups_4875_);
v___x_4887_ = lean_nat_dec_eq(v___x_4885_, v___x_4886_);
if (v___x_4887_ == 0)
{
lean_dec_ref(v___x_4884_);
lean_dec_ref(v_specLookups_4875_);
v___y_4871_ = v_a_4878_;
v___y_4872_ = v___x_4887_;
goto v___jp_4870_;
}
else
{
uint8_t v___x_4888_; 
v___x_4888_ = l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___redArg(v___x_4884_, v_specLookups_4875_, v___x_4885_);
lean_dec_ref(v_specLookups_4875_);
lean_dec_ref(v___x_4884_);
v___y_4871_ = v_a_4878_;
v___y_4872_ = v___x_4888_;
goto v___jp_4870_;
}
}
else
{
lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4896_; 
lean_inc_ref(v_fst_4879_);
lean_dec_ref(v_specLookups_4875_);
v_isSharedCheck_4896_ = !lean_is_exclusive(v_a_4877_);
if (v_isSharedCheck_4896_ == 0)
{
lean_object* v_unused_4897_; lean_object* v_unused_4898_; 
v_unused_4897_ = lean_ctor_get(v_a_4877_, 1);
lean_dec(v_unused_4897_);
v_unused_4898_ = lean_ctor_get(v_a_4877_, 0);
lean_dec(v_unused_4898_);
v___x_4890_ = v_a_4877_;
v_isShared_4891_ = v_isSharedCheck_4896_;
goto v_resetjp_4889_;
}
else
{
lean_dec(v_a_4877_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4896_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v_val_4892_; lean_object* v___x_4894_; 
v_val_4892_ = lean_ctor_get(v_fst_4879_, 0);
lean_inc(v_val_4892_);
lean_dec_ref_known(v_fst_4879_, 1);
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 1, v_a_4878_);
lean_ctor_set(v___x_4890_, 0, v_val_4892_);
v___x_4894_ = v___x_4890_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v_val_4892_);
lean_ctor_set(v_reuseFailAlloc_4895_, 1, v_a_4878_);
v___x_4894_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
return v___x_4894_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged___boxed(lean_object* v_usage_4918_, lean_object* v_hashes_4919_, lean_object* v_importArts_4920_, lean_object* v_a_4921_, lean_object* v_a_4922_, lean_object* v_a_4923_, lean_object* v_a_4924_, lean_object* v_a_4925_, lean_object* v_a_4926_, lean_object* v_a_4927_){
_start:
{
lean_object* v_res_4928_; 
v_res_4928_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged(v_usage_4918_, v_hashes_4919_, v_importArts_4920_, v_a_4921_, v_a_4922_, v_a_4923_, v_a_4924_, v_a_4925_, v_a_4926_);
lean_dec_ref(v_a_4925_);
lean_dec(v_a_4924_);
lean_dec(v_a_4923_);
lean_dec(v_a_4922_);
lean_dec(v_importArts_4920_);
lean_dec(v_hashes_4919_);
return v_res_4928_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1(lean_object* v_xs_4929_, lean_object* v_ys_4930_, lean_object* v_hsz_4931_, lean_object* v_x_4932_, lean_object* v_x_4933_){
_start:
{
uint8_t v___x_4934_; 
v___x_4934_ = l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___redArg(v_xs_4929_, v_ys_4930_, v_x_4932_);
return v___x_4934_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1___boxed(lean_object* v_xs_4935_, lean_object* v_ys_4936_, lean_object* v_hsz_4937_, lean_object* v_x_4938_, lean_object* v_x_4939_){
_start:
{
uint8_t v_res_4940_; lean_object* v_r_4941_; 
v_res_4940_ = l_Array_isEqvAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged_spec__1(v_xs_4935_, v_ys_4936_, v_hsz_4937_, v_x_4938_, v_x_4939_);
lean_dec_ref(v_ys_4936_);
lean_dec_ref(v_xs_4935_);
v_r_4941_ = lean_box(v_res_4940_);
return v_r_4941_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__0(lean_object* v_as_4943_){
_start:
{
lean_object* v___f_4944_; lean_object* v___x_4945_; 
v___f_4944_ = ((lean_object*)(l_List_eraseDups___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__0___closed__0));
v___x_4945_ = l_List_eraseDupsBy___redArg(v___f_4944_, v_as_4943_);
return v___x_4945_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1(lean_object* v_x_4946_, lean_object* v_x_4947_){
_start:
{
if (lean_obj_tag(v_x_4946_) == 0)
{
if (lean_obj_tag(v_x_4947_) == 0)
{
uint8_t v___x_4948_; 
v___x_4948_ = 1;
return v___x_4948_;
}
else
{
uint8_t v___x_4949_; 
v___x_4949_ = 0;
return v___x_4949_;
}
}
else
{
if (lean_obj_tag(v_x_4947_) == 0)
{
uint8_t v___x_4950_; 
v___x_4950_ = 0;
return v___x_4950_;
}
else
{
lean_object* v_val_4951_; lean_object* v_val_4952_; uint8_t v___x_4953_; 
v_val_4951_ = lean_ctor_get(v_x_4946_, 0);
v_val_4952_ = lean_ctor_get(v_x_4947_, 0);
v___x_4953_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_val_4951_, v_val_4952_);
return v___x_4953_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1___boxed(lean_object* v_x_4954_, lean_object* v_x_4955_){
_start:
{
uint8_t v_res_4956_; lean_object* v_r_4957_; 
v_res_4956_ = l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1(v_x_4954_, v_x_4955_);
lean_dec(v_x_4955_);
lean_dec(v_x_4954_);
v_r_4957_ = lean_box(v_res_4956_);
return v_r_4957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3_spec__3(lean_object* v_as_4958_, size_t v_i_4959_, size_t v_stop_4960_, lean_object* v_b_4961_){
_start:
{
lean_object* v___y_4963_; uint8_t v___x_4967_; 
v___x_4967_ = lean_usize_dec_eq(v_i_4959_, v_stop_4960_);
if (v___x_4967_ == 0)
{
lean_object* v___x_4968_; lean_object* v_module_x3f_4969_; 
v___x_4968_ = lean_array_uget_borrowed(v_as_4958_, v_i_4959_);
v_module_x3f_4969_ = lean_ctor_get(v___x_4968_, 1);
if (lean_obj_tag(v_module_x3f_4969_) == 0)
{
v___y_4963_ = v_b_4961_;
goto v___jp_4962_;
}
else
{
lean_object* v_val_4970_; lean_object* v___x_4971_; 
v_val_4970_ = lean_ctor_get(v_module_x3f_4969_, 0);
lean_inc(v_val_4970_);
v___x_4971_ = lean_array_push(v_b_4961_, v_val_4970_);
v___y_4963_ = v___x_4971_;
goto v___jp_4962_;
}
}
else
{
return v_b_4961_;
}
v___jp_4962_:
{
size_t v___x_4964_; size_t v___x_4965_; 
v___x_4964_ = ((size_t)1ULL);
v___x_4965_ = lean_usize_add(v_i_4959_, v___x_4964_);
v_i_4959_ = v___x_4965_;
v_b_4961_ = v___y_4963_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3_spec__3___boxed(lean_object* v_as_4972_, lean_object* v_i_4973_, lean_object* v_stop_4974_, lean_object* v_b_4975_){
_start:
{
size_t v_i_boxed_4976_; size_t v_stop_boxed_4977_; lean_object* v_res_4978_; 
v_i_boxed_4976_ = lean_unbox_usize(v_i_4973_);
lean_dec(v_i_4973_);
v_stop_boxed_4977_ = lean_unbox_usize(v_stop_4974_);
lean_dec(v_stop_4974_);
v_res_4978_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3_spec__3(v_as_4972_, v_i_boxed_4976_, v_stop_boxed_4977_, v_b_4975_);
lean_dec_ref(v_as_4972_);
return v_res_4978_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3(lean_object* v_as_4981_, lean_object* v_start_4982_, lean_object* v_stop_4983_){
_start:
{
lean_object* v___x_4984_; uint8_t v___x_4985_; 
v___x_4984_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3___closed__0));
v___x_4985_ = lean_nat_dec_lt(v_start_4982_, v_stop_4983_);
if (v___x_4985_ == 0)
{
return v___x_4984_;
}
else
{
lean_object* v___x_4986_; uint8_t v___x_4987_; 
v___x_4986_ = lean_array_get_size(v_as_4981_);
v___x_4987_ = lean_nat_dec_le(v_stop_4983_, v___x_4986_);
if (v___x_4987_ == 0)
{
uint8_t v___x_4988_; 
v___x_4988_ = lean_nat_dec_lt(v_start_4982_, v___x_4986_);
if (v___x_4988_ == 0)
{
return v___x_4984_;
}
else
{
size_t v___x_4989_; size_t v___x_4990_; lean_object* v___x_4991_; 
v___x_4989_ = lean_usize_of_nat(v_start_4982_);
v___x_4990_ = lean_usize_of_nat(v___x_4986_);
v___x_4991_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3_spec__3(v_as_4981_, v___x_4989_, v___x_4990_, v___x_4984_);
return v___x_4991_;
}
}
else
{
size_t v___x_4992_; size_t v___x_4993_; lean_object* v___x_4994_; 
v___x_4992_ = lean_usize_of_nat(v_start_4982_);
v___x_4993_ = lean_usize_of_nat(v_stop_4983_);
v___x_4994_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3_spec__3(v_as_4981_, v___x_4992_, v___x_4993_, v___x_4984_);
return v___x_4994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3___boxed(lean_object* v_as_4995_, lean_object* v_start_4996_, lean_object* v_stop_4997_){
_start:
{
lean_object* v_res_4998_; 
v_res_4998_ = l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3(v_as_4995_, v_start_4996_, v_stop_4997_);
lean_dec(v_stop_4997_);
lean_dec(v_start_4996_);
lean_dec_ref(v_as_4995_);
return v_res_4998_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg(lean_object* v_hashes_5001_, lean_object* v_importArts_5002_, lean_object* v_importedClosures_x3f_5003_, lean_object* v_as_x27_5004_, lean_object* v_b_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
lean_object* v_a_5014_; lean_object* v_a_5015_; 
if (lean_obj_tag(v_as_x27_5004_) == 0)
{
lean_object* v___x_5017_; 
lean_dec_ref(v___y_5006_);
v___x_5017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5017_, 0, v_b_5005_);
lean_ctor_set(v___x_5017_, 1, v___y_5011_);
return v___x_5017_;
}
else
{
lean_object* v_head_5018_; lean_object* v_tail_5019_; lean_object* v_snd_5020_; lean_object* v___x_5022_; uint8_t v_isShared_5023_; uint8_t v_isSharedCheck_5073_; 
v_head_5018_ = lean_ctor_get(v_as_x27_5004_, 0);
v_tail_5019_ = lean_ctor_get(v_as_x27_5004_, 1);
v_snd_5020_ = lean_ctor_get(v_b_5005_, 1);
v_isSharedCheck_5073_ = !lean_is_exclusive(v_b_5005_);
if (v_isSharedCheck_5073_ == 0)
{
lean_object* v_unused_5074_; 
v_unused_5074_ = lean_ctor_get(v_b_5005_, 0);
lean_dec(v_unused_5074_);
v___x_5022_ = v_b_5005_;
v_isShared_5023_ = v_isSharedCheck_5073_;
goto v_resetjp_5021_;
}
else
{
lean_inc(v_snd_5020_);
lean_dec(v_b_5005_);
v___x_5022_ = lean_box(0);
v_isShared_5023_ = v_isSharedCheck_5073_;
goto v_resetjp_5021_;
}
v_resetjp_5021_:
{
lean_object* v___x_5024_; lean_object* v___x_5025_; 
v___x_5024_ = lean_box(0);
lean_inc_ref(v___y_5006_);
v___x_5025_ = l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(v_hashes_5001_, v_importArts_5002_, v_head_5018_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_);
if (lean_obj_tag(v___x_5025_) == 0)
{
lean_object* v_a_5026_; 
v_a_5026_ = lean_ctor_get(v___x_5025_, 0);
lean_inc(v_a_5026_);
if (lean_obj_tag(v_a_5026_) == 1)
{
lean_object* v_val_5027_; lean_object* v___x_5029_; uint8_t v_isShared_5030_; uint8_t v_isSharedCheck_5058_; 
v_val_5027_ = lean_ctor_get(v_a_5026_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v_a_5026_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5029_ = v_a_5026_;
v_isShared_5030_ = v_isSharedCheck_5058_;
goto v_resetjp_5028_;
}
else
{
lean_inc(v_val_5027_);
lean_dec(v_a_5026_);
v___x_5029_ = lean_box(0);
v_isShared_5030_ = v_isSharedCheck_5058_;
goto v_resetjp_5028_;
}
v_resetjp_5028_:
{
lean_object* v_a_5031_; lean_object* v_snd_5032_; lean_object* v___x_5034_; uint8_t v_isShared_5035_; uint8_t v_isSharedCheck_5056_; 
v_a_5031_ = lean_ctor_get(v___x_5025_, 1);
lean_inc(v_a_5031_);
lean_dec_ref_known(v___x_5025_, 2);
v_snd_5032_ = lean_ctor_get(v_val_5027_, 1);
v_isSharedCheck_5056_ = !lean_is_exclusive(v_val_5027_);
if (v_isSharedCheck_5056_ == 0)
{
lean_object* v_unused_5057_; 
v_unused_5057_ = lean_ctor_get(v_val_5027_, 0);
lean_dec(v_unused_5057_);
v___x_5034_ = v_val_5027_;
v_isShared_5035_ = v_isSharedCheck_5056_;
goto v_resetjp_5033_;
}
else
{
lean_inc(v_snd_5032_);
lean_dec(v_val_5027_);
v___x_5034_ = lean_box(0);
v_isShared_5035_ = v_isSharedCheck_5056_;
goto v_resetjp_5033_;
}
v_resetjp_5033_:
{
lean_object* v___y_5037_; 
if (lean_obj_tag(v_importedClosures_x3f_5003_) == 1)
{
lean_object* v_val_5045_; lean_object* v_closure_5046_; lean_object* v___x_5047_; lean_object* v___x_5049_; 
v_val_5045_ = lean_ctor_get(v_importedClosures_x3f_5003_, 0);
v_closure_5046_ = lean_ctor_get(v_snd_5032_, 1);
v___x_5047_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_val_5045_, v_head_5018_);
lean_inc_ref(v_closure_5046_);
if (v_isShared_5030_ == 0)
{
lean_ctor_set(v___x_5029_, 0, v_closure_5046_);
v___x_5049_ = v___x_5029_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v_closure_5046_);
v___x_5049_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
uint8_t v___x_5050_; 
v___x_5050_ = l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1(v___x_5047_, v___x_5049_);
lean_dec_ref(v___x_5049_);
lean_dec(v___x_5047_);
if (v___x_5050_ == 0)
{
lean_object* v___x_5051_; lean_object* v___x_5053_; 
lean_del_object(v___x_5034_);
lean_dec(v_snd_5032_);
lean_dec_ref(v___y_5006_);
v___x_5051_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg___closed__0));
if (v_isShared_5023_ == 0)
{
lean_ctor_set(v___x_5022_, 0, v___x_5051_);
v___x_5053_ = v___x_5022_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v___x_5051_);
lean_ctor_set(v_reuseFailAlloc_5054_, 1, v_snd_5020_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
v_a_5014_ = v___x_5053_;
v_a_5015_ = v_a_5031_;
goto v___jp_5013_;
}
}
else
{
lean_del_object(v___x_5022_);
v___y_5037_ = v_a_5031_;
goto v___jp_5036_;
}
}
}
else
{
lean_del_object(v___x_5029_);
lean_del_object(v___x_5022_);
v___y_5037_ = v_a_5031_;
goto v___jp_5036_;
}
v___jp_5036_:
{
lean_object* v_closure_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5042_; 
v_closure_5038_ = lean_ctor_get(v_snd_5032_, 1);
lean_inc_ref(v_closure_5038_);
lean_dec(v_snd_5032_);
lean_inc(v_head_5018_);
v___x_5039_ = l_Lean_ModuleUsage_Enc_name(v_snd_5020_, v_head_5018_);
v___x_5040_ = l_Lean_ModuleUsage_Enc_digest(v___x_5039_, v_closure_5038_);
lean_dec_ref(v_closure_5038_);
if (v_isShared_5035_ == 0)
{
lean_ctor_set(v___x_5034_, 1, v___x_5040_);
lean_ctor_set(v___x_5034_, 0, v___x_5024_);
v___x_5042_ = v___x_5034_;
goto v_reusejp_5041_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v___x_5024_);
lean_ctor_set(v_reuseFailAlloc_5044_, 1, v___x_5040_);
v___x_5042_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5041_;
}
v_reusejp_5041_:
{
v_as_x27_5004_ = v_tail_5019_;
v_b_5005_ = v___x_5042_;
v___y_5011_ = v___y_5037_;
goto _start;
}
}
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___x_5060_; lean_object* v___x_5062_; 
lean_dec(v_a_5026_);
lean_dec_ref(v___y_5006_);
v_a_5059_ = lean_ctor_get(v___x_5025_, 1);
lean_inc(v_a_5059_);
lean_dec_ref_known(v___x_5025_, 2);
v___x_5060_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg___closed__0));
if (v_isShared_5023_ == 0)
{
lean_ctor_set(v___x_5022_, 0, v___x_5060_);
v___x_5062_ = v___x_5022_;
goto v_reusejp_5061_;
}
else
{
lean_object* v_reuseFailAlloc_5063_; 
v_reuseFailAlloc_5063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5063_, 0, v___x_5060_);
lean_ctor_set(v_reuseFailAlloc_5063_, 1, v_snd_5020_);
v___x_5062_ = v_reuseFailAlloc_5063_;
goto v_reusejp_5061_;
}
v_reusejp_5061_:
{
v_a_5014_ = v___x_5062_;
v_a_5015_ = v_a_5059_;
goto v___jp_5013_;
}
}
}
else
{
lean_object* v_a_5064_; lean_object* v_a_5065_; lean_object* v___x_5067_; uint8_t v_isShared_5068_; uint8_t v_isSharedCheck_5072_; 
lean_del_object(v___x_5022_);
lean_dec(v_snd_5020_);
lean_dec_ref(v___y_5006_);
v_a_5064_ = lean_ctor_get(v___x_5025_, 0);
v_a_5065_ = lean_ctor_get(v___x_5025_, 1);
v_isSharedCheck_5072_ = !lean_is_exclusive(v___x_5025_);
if (v_isSharedCheck_5072_ == 0)
{
v___x_5067_ = v___x_5025_;
v_isShared_5068_ = v_isSharedCheck_5072_;
goto v_resetjp_5066_;
}
else
{
lean_inc(v_a_5065_);
lean_inc(v_a_5064_);
lean_dec(v___x_5025_);
v___x_5067_ = lean_box(0);
v_isShared_5068_ = v_isSharedCheck_5072_;
goto v_resetjp_5066_;
}
v_resetjp_5066_:
{
lean_object* v___x_5070_; 
if (v_isShared_5068_ == 0)
{
v___x_5070_ = v___x_5067_;
goto v_reusejp_5069_;
}
else
{
lean_object* v_reuseFailAlloc_5071_; 
v_reuseFailAlloc_5071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5071_, 0, v_a_5064_);
lean_ctor_set(v_reuseFailAlloc_5071_, 1, v_a_5065_);
v___x_5070_ = v_reuseFailAlloc_5071_;
goto v_reusejp_5069_;
}
v_reusejp_5069_:
{
return v___x_5070_;
}
}
}
}
}
v___jp_5013_:
{
lean_object* v___x_5016_; 
v___x_5016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5016_, 0, v_a_5014_);
lean_ctor_set(v___x_5016_, 1, v_a_5015_);
return v___x_5016_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg___boxed(lean_object* v_hashes_5075_, lean_object* v_importArts_5076_, lean_object* v_importedClosures_x3f_5077_, lean_object* v_as_x27_5078_, lean_object* v_b_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_){
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg(v_hashes_5075_, v_importArts_5076_, v_importedClosures_x3f_5077_, v_as_x27_5078_, v_b_5079_, v___y_5080_, v___y_5081_, v___y_5082_, v___y_5083_, v___y_5084_, v___y_5085_);
lean_dec_ref(v___y_5084_);
lean_dec(v___y_5083_);
lean_dec(v___y_5082_);
lean_dec(v___y_5081_);
lean_dec(v_as_x27_5078_);
lean_dec(v_importedClosures_x3f_5077_);
lean_dec(v_importArts_5076_);
lean_dec(v_hashes_5075_);
return v_res_5087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__4(size_t v_sz_5088_, size_t v_i_5089_, lean_object* v_bs_5090_){
_start:
{
uint8_t v___x_5091_; 
v___x_5091_ = lean_usize_dec_lt(v_i_5089_, v_sz_5088_);
if (v___x_5091_ == 0)
{
return v_bs_5090_;
}
else
{
lean_object* v_v_5092_; lean_object* v_name_5093_; lean_object* v___x_5094_; lean_object* v_bs_x27_5095_; size_t v___x_5096_; size_t v___x_5097_; lean_object* v___x_5098_; 
v_v_5092_ = lean_array_uget_borrowed(v_bs_5090_, v_i_5089_);
v_name_5093_ = lean_ctor_get(v_v_5092_, 1);
lean_inc(v_name_5093_);
v___x_5094_ = lean_unsigned_to_nat(0u);
v_bs_x27_5095_ = lean_array_uset(v_bs_5090_, v_i_5089_, v___x_5094_);
v___x_5096_ = ((size_t)1ULL);
v___x_5097_ = lean_usize_add(v_i_5089_, v___x_5096_);
v___x_5098_ = lean_array_uset(v_bs_x27_5095_, v_i_5089_, v_name_5093_);
v_i_5089_ = v___x_5097_;
v_bs_5090_ = v___x_5098_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__4___boxed(lean_object* v_sz_5100_, lean_object* v_i_5101_, lean_object* v_bs_5102_){
_start:
{
size_t v_sz_boxed_5103_; size_t v_i_boxed_5104_; lean_object* v_res_5105_; 
v_sz_boxed_5103_ = lean_unbox_usize(v_sz_5100_);
lean_dec(v_sz_5100_);
v_i_boxed_5104_ = lean_unbox_usize(v_i_5101_);
lean_dec(v_i_5101_);
v_res_5105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__4(v_sz_boxed_5103_, v_i_boxed_5104_, v_bs_5102_);
return v_res_5105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___redArg(lean_object* v_hi_5106_, lean_object* v_pivot_5107_, lean_object* v_as_5108_, lean_object* v_i_5109_, lean_object* v_k_5110_){
_start:
{
uint8_t v___x_5111_; 
v___x_5111_ = lean_nat_dec_lt(v_k_5110_, v_hi_5106_);
if (v___x_5111_ == 0)
{
lean_object* v___x_5112_; lean_object* v___x_5113_; 
lean_dec(v_k_5110_);
v___x_5112_ = lean_array_fswap(v_as_5108_, v_i_5109_, v_hi_5106_);
v___x_5113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5113_, 0, v_i_5109_);
lean_ctor_set(v___x_5113_, 1, v___x_5112_);
return v___x_5113_;
}
else
{
lean_object* v___x_5114_; uint8_t v___x_5115_; 
v___x_5114_ = lean_array_fget_borrowed(v_as_5108_, v_k_5110_);
v___x_5115_ = l_Lean_Name_quickLt(v___x_5114_, v_pivot_5107_);
if (v___x_5115_ == 0)
{
lean_object* v___x_5116_; lean_object* v___x_5117_; 
v___x_5116_ = lean_unsigned_to_nat(1u);
v___x_5117_ = lean_nat_add(v_k_5110_, v___x_5116_);
lean_dec(v_k_5110_);
v_k_5110_ = v___x_5117_;
goto _start;
}
else
{
lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; 
v___x_5119_ = lean_array_fswap(v_as_5108_, v_i_5109_, v_k_5110_);
v___x_5120_ = lean_unsigned_to_nat(1u);
v___x_5121_ = lean_nat_add(v_i_5109_, v___x_5120_);
lean_dec(v_i_5109_);
v___x_5122_ = lean_nat_add(v_k_5110_, v___x_5120_);
lean_dec(v_k_5110_);
v_as_5108_ = v___x_5119_;
v_i_5109_ = v___x_5121_;
v_k_5110_ = v___x_5122_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___redArg___boxed(lean_object* v_hi_5124_, lean_object* v_pivot_5125_, lean_object* v_as_5126_, lean_object* v_i_5127_, lean_object* v_k_5128_){
_start:
{
lean_object* v_res_5129_; 
v_res_5129_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___redArg(v_hi_5124_, v_pivot_5125_, v_as_5126_, v_i_5127_, v_k_5128_);
lean_dec(v_pivot_5125_);
lean_dec(v_hi_5124_);
return v_res_5129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg(lean_object* v_n_5130_, lean_object* v_as_5131_, lean_object* v_lo_5132_, lean_object* v_hi_5133_){
_start:
{
lean_object* v___y_5135_; uint8_t v___x_5145_; 
v___x_5145_ = lean_nat_dec_lt(v_lo_5132_, v_hi_5133_);
if (v___x_5145_ == 0)
{
lean_dec(v_lo_5132_);
return v_as_5131_;
}
else
{
lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v_mid_5148_; lean_object* v___y_5150_; lean_object* v___y_5156_; lean_object* v___x_5161_; lean_object* v___x_5162_; uint8_t v___x_5163_; 
v___x_5146_ = lean_nat_add(v_lo_5132_, v_hi_5133_);
v___x_5147_ = lean_unsigned_to_nat(1u);
v_mid_5148_ = lean_nat_shiftr(v___x_5146_, v___x_5147_);
lean_dec(v___x_5146_);
v___x_5161_ = lean_array_fget_borrowed(v_as_5131_, v_mid_5148_);
v___x_5162_ = lean_array_fget_borrowed(v_as_5131_, v_lo_5132_);
v___x_5163_ = l_Lean_Name_quickLt(v___x_5161_, v___x_5162_);
if (v___x_5163_ == 0)
{
v___y_5156_ = v_as_5131_;
goto v___jp_5155_;
}
else
{
lean_object* v___x_5164_; 
v___x_5164_ = lean_array_fswap(v_as_5131_, v_lo_5132_, v_mid_5148_);
v___y_5156_ = v___x_5164_;
goto v___jp_5155_;
}
v___jp_5149_:
{
lean_object* v___x_5151_; lean_object* v___x_5152_; uint8_t v___x_5153_; 
v___x_5151_ = lean_array_fget_borrowed(v___y_5150_, v_mid_5148_);
v___x_5152_ = lean_array_fget_borrowed(v___y_5150_, v_hi_5133_);
v___x_5153_ = l_Lean_Name_quickLt(v___x_5151_, v___x_5152_);
if (v___x_5153_ == 0)
{
lean_dec(v_mid_5148_);
v___y_5135_ = v___y_5150_;
goto v___jp_5134_;
}
else
{
lean_object* v___x_5154_; 
v___x_5154_ = lean_array_fswap(v___y_5150_, v_mid_5148_, v_hi_5133_);
lean_dec(v_mid_5148_);
v___y_5135_ = v___x_5154_;
goto v___jp_5134_;
}
}
v___jp_5155_:
{
lean_object* v___x_5157_; lean_object* v___x_5158_; uint8_t v___x_5159_; 
v___x_5157_ = lean_array_fget_borrowed(v___y_5156_, v_hi_5133_);
v___x_5158_ = lean_array_fget_borrowed(v___y_5156_, v_lo_5132_);
v___x_5159_ = l_Lean_Name_quickLt(v___x_5157_, v___x_5158_);
if (v___x_5159_ == 0)
{
v___y_5150_ = v___y_5156_;
goto v___jp_5149_;
}
else
{
lean_object* v___x_5160_; 
v___x_5160_ = lean_array_fswap(v___y_5156_, v_lo_5132_, v_hi_5133_);
v___y_5150_ = v___x_5160_;
goto v___jp_5149_;
}
}
}
v___jp_5134_:
{
lean_object* v_pivot_5136_; lean_object* v___x_5137_; lean_object* v_fst_5138_; lean_object* v_snd_5139_; uint8_t v___x_5140_; 
v_pivot_5136_ = lean_array_fget(v___y_5135_, v_hi_5133_);
lean_inc_n(v_lo_5132_, 2);
v___x_5137_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___redArg(v_hi_5133_, v_pivot_5136_, v___y_5135_, v_lo_5132_, v_lo_5132_);
lean_dec(v_pivot_5136_);
v_fst_5138_ = lean_ctor_get(v___x_5137_, 0);
lean_inc(v_fst_5138_);
v_snd_5139_ = lean_ctor_get(v___x_5137_, 1);
lean_inc(v_snd_5139_);
lean_dec_ref(v___x_5137_);
v___x_5140_ = lean_nat_dec_le(v_hi_5133_, v_fst_5138_);
if (v___x_5140_ == 0)
{
lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; 
v___x_5141_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg(v_n_5130_, v_snd_5139_, v_lo_5132_, v_fst_5138_);
v___x_5142_ = lean_unsigned_to_nat(1u);
v___x_5143_ = lean_nat_add(v_fst_5138_, v___x_5142_);
lean_dec(v_fst_5138_);
v_as_5131_ = v___x_5141_;
v_lo_5132_ = v___x_5143_;
goto _start;
}
else
{
lean_dec(v_fst_5138_);
lean_dec(v_lo_5132_);
return v_snd_5139_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg___boxed(lean_object* v_n_5165_, lean_object* v_as_5166_, lean_object* v_lo_5167_, lean_object* v_hi_5168_){
_start:
{
lean_object* v_res_5169_; 
v_res_5169_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg(v_n_5165_, v_as_5166_, v_lo_5167_, v_hi_5168_);
lean_dec(v_hi_5168_);
lean_dec(v_n_5165_);
return v_res_5169_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_closureHash(lean_object* v_hashes_5170_, lean_object* v_presetup_5171_, lean_object* v_importArts_5172_, lean_object* v_importedClosures_x3f_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_, lean_object* v_a_5178_, lean_object* v_a_5179_){
_start:
{
lean_object* v___y_5182_; lean_object* v_directImports_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; size_t v_sz_5228_; size_t v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___y_5233_; lean_object* v___y_5234_; uint8_t v___x_5236_; 
v_directImports_5224_ = lean_ctor_get(v_presetup_5171_, 5);
v___x_5225_ = lean_unsigned_to_nat(0u);
v___x_5226_ = lean_array_get_size(v_directImports_5224_);
v___x_5227_ = l_Array_filterMapM___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__3(v_directImports_5224_, v___x_5225_, v___x_5226_);
v_sz_5228_ = lean_array_size(v___x_5227_);
v___x_5229_ = ((size_t)0ULL);
v___x_5230_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__4(v_sz_5228_, v___x_5229_, v___x_5227_);
v___x_5231_ = lean_array_get_size(v___x_5230_);
v___x_5236_ = lean_nat_dec_eq(v___x_5231_, v___x_5225_);
if (v___x_5236_ == 0)
{
lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___y_5240_; uint8_t v___x_5242_; 
v___x_5237_ = lean_unsigned_to_nat(1u);
v___x_5238_ = lean_nat_sub(v___x_5231_, v___x_5237_);
v___x_5242_ = lean_nat_dec_le(v___x_5225_, v___x_5238_);
if (v___x_5242_ == 0)
{
lean_inc(v___x_5238_);
v___y_5240_ = v___x_5238_;
goto v___jp_5239_;
}
else
{
v___y_5240_ = v___x_5225_;
goto v___jp_5239_;
}
v___jp_5239_:
{
uint8_t v___x_5241_; 
v___x_5241_ = lean_nat_dec_le(v___y_5240_, v___x_5238_);
if (v___x_5241_ == 0)
{
lean_dec(v___x_5238_);
lean_inc(v___y_5240_);
v___y_5233_ = v___y_5240_;
v___y_5234_ = v___y_5240_;
goto v___jp_5232_;
}
else
{
v___y_5233_ = v___y_5240_;
v___y_5234_ = v___x_5238_;
goto v___jp_5232_;
}
}
}
else
{
v___y_5182_ = v___x_5230_;
goto v___jp_5181_;
}
v___jp_5181_:
{
lean_object* v___x_5183_; lean_object* v_mods_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v_e_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; 
v___x_5183_ = lean_array_to_list(v___y_5182_);
v_mods_5184_ = l_List_eraseDups___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__0(v___x_5183_);
v___x_5185_ = lean_obj_once(&l_Lake_modsysHash___closed__0, &l_Lake_modsysHash___closed__0_once, _init_l_Lake_modsysHash___closed__0);
v___x_5186_ = l_List_lengthTR___redArg(v_mods_5184_);
v_e_5187_ = l_Lean_ModuleUsage_Enc_nat(v___x_5185_, v___x_5186_);
v___x_5188_ = lean_box(0);
v___x_5189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5189_, 0, v___x_5188_);
lean_ctor_set(v___x_5189_, 1, v_e_5187_);
v___x_5190_ = l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg(v_hashes_5170_, v_importArts_5172_, v_importedClosures_x3f_5173_, v_mods_5184_, v___x_5189_, v_a_5174_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_, v_a_5179_);
lean_dec(v_mods_5184_);
if (lean_obj_tag(v___x_5190_) == 0)
{
lean_object* v_a_5191_; lean_object* v_fst_5192_; 
v_a_5191_ = lean_ctor_get(v___x_5190_, 0);
v_fst_5192_ = lean_ctor_get(v_a_5191_, 0);
if (lean_obj_tag(v_fst_5192_) == 0)
{
lean_object* v_a_5193_; lean_object* v___x_5195_; uint8_t v_isShared_5196_; uint8_t v_isSharedCheck_5203_; 
lean_inc(v_a_5191_);
v_a_5193_ = lean_ctor_get(v___x_5190_, 1);
v_isSharedCheck_5203_ = !lean_is_exclusive(v___x_5190_);
if (v_isSharedCheck_5203_ == 0)
{
lean_object* v_unused_5204_; 
v_unused_5204_ = lean_ctor_get(v___x_5190_, 0);
lean_dec(v_unused_5204_);
v___x_5195_ = v___x_5190_;
v_isShared_5196_ = v_isSharedCheck_5203_;
goto v_resetjp_5194_;
}
else
{
lean_inc(v_a_5193_);
lean_dec(v___x_5190_);
v___x_5195_ = lean_box(0);
v_isShared_5196_ = v_isSharedCheck_5203_;
goto v_resetjp_5194_;
}
v_resetjp_5194_:
{
lean_object* v_snd_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5201_; 
v_snd_5197_ = lean_ctor_get(v_a_5191_, 1);
lean_inc(v_snd_5197_);
lean_dec(v_a_5191_);
v___x_5198_ = l_Lean_ModuleUsage_Enc_finish(v_snd_5197_);
lean_dec(v_snd_5197_);
v___x_5199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5198_);
if (v_isShared_5196_ == 0)
{
lean_ctor_set(v___x_5195_, 0, v___x_5199_);
v___x_5201_ = v___x_5195_;
goto v_reusejp_5200_;
}
else
{
lean_object* v_reuseFailAlloc_5202_; 
v_reuseFailAlloc_5202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5202_, 0, v___x_5199_);
lean_ctor_set(v_reuseFailAlloc_5202_, 1, v_a_5193_);
v___x_5201_ = v_reuseFailAlloc_5202_;
goto v_reusejp_5200_;
}
v_reusejp_5200_:
{
return v___x_5201_;
}
}
}
else
{
lean_object* v_a_5205_; lean_object* v___x_5207_; uint8_t v_isShared_5208_; uint8_t v_isSharedCheck_5213_; 
lean_inc_ref(v_fst_5192_);
v_a_5205_ = lean_ctor_get(v___x_5190_, 1);
v_isSharedCheck_5213_ = !lean_is_exclusive(v___x_5190_);
if (v_isSharedCheck_5213_ == 0)
{
lean_object* v_unused_5214_; 
v_unused_5214_ = lean_ctor_get(v___x_5190_, 0);
lean_dec(v_unused_5214_);
v___x_5207_ = v___x_5190_;
v_isShared_5208_ = v_isSharedCheck_5213_;
goto v_resetjp_5206_;
}
else
{
lean_inc(v_a_5205_);
lean_dec(v___x_5190_);
v___x_5207_ = lean_box(0);
v_isShared_5208_ = v_isSharedCheck_5213_;
goto v_resetjp_5206_;
}
v_resetjp_5206_:
{
lean_object* v_val_5209_; lean_object* v___x_5211_; 
v_val_5209_ = lean_ctor_get(v_fst_5192_, 0);
lean_inc(v_val_5209_);
lean_dec_ref_known(v_fst_5192_, 1);
if (v_isShared_5208_ == 0)
{
lean_ctor_set(v___x_5207_, 0, v_val_5209_);
v___x_5211_ = v___x_5207_;
goto v_reusejp_5210_;
}
else
{
lean_object* v_reuseFailAlloc_5212_; 
v_reuseFailAlloc_5212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5212_, 0, v_val_5209_);
lean_ctor_set(v_reuseFailAlloc_5212_, 1, v_a_5205_);
v___x_5211_ = v_reuseFailAlloc_5212_;
goto v_reusejp_5210_;
}
v_reusejp_5210_:
{
return v___x_5211_;
}
}
}
}
else
{
lean_object* v_a_5215_; lean_object* v_a_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5223_; 
v_a_5215_ = lean_ctor_get(v___x_5190_, 0);
v_a_5216_ = lean_ctor_get(v___x_5190_, 1);
v_isSharedCheck_5223_ = !lean_is_exclusive(v___x_5190_);
if (v_isSharedCheck_5223_ == 0)
{
v___x_5218_ = v___x_5190_;
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_a_5216_);
lean_inc(v_a_5215_);
lean_dec(v___x_5190_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v___x_5221_; 
if (v_isShared_5219_ == 0)
{
v___x_5221_ = v___x_5218_;
goto v_reusejp_5220_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v_a_5215_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v_a_5216_);
v___x_5221_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5220_;
}
v_reusejp_5220_:
{
return v___x_5221_;
}
}
}
}
v___jp_5232_:
{
lean_object* v___x_5235_; 
v___x_5235_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg(v___x_5231_, v___x_5230_, v___y_5233_, v___y_5234_);
lean_dec(v___y_5234_);
v___y_5182_ = v___x_5235_;
goto v___jp_5181_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_closureHash___boxed(lean_object* v_hashes_5243_, lean_object* v_presetup_5244_, lean_object* v_importArts_5245_, lean_object* v_importedClosures_x3f_5246_, lean_object* v_a_5247_, lean_object* v_a_5248_, lean_object* v_a_5249_, lean_object* v_a_5250_, lean_object* v_a_5251_, lean_object* v_a_5252_, lean_object* v_a_5253_){
_start:
{
lean_object* v_res_5254_; 
v_res_5254_ = l___private_Lake_Build_UsageCutoff_0__Lake_closureHash(v_hashes_5243_, v_presetup_5244_, v_importArts_5245_, v_importedClosures_x3f_5246_, v_a_5247_, v_a_5248_, v_a_5249_, v_a_5250_, v_a_5251_, v_a_5252_);
lean_dec_ref(v_a_5251_);
lean_dec(v_a_5250_);
lean_dec(v_a_5249_);
lean_dec(v_a_5248_);
lean_dec(v_importedClosures_x3f_5246_);
lean_dec(v_importArts_5245_);
lean_dec_ref(v_presetup_5244_);
lean_dec(v_hashes_5243_);
return v_res_5254_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2(lean_object* v_hashes_5255_, lean_object* v_importArts_5256_, lean_object* v_importedClosures_x3f_5257_, lean_object* v_as_5258_, lean_object* v_as_x27_5259_, lean_object* v_b_5260_, lean_object* v_a_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_){
_start:
{
lean_object* v___x_5269_; 
v___x_5269_ = l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___redArg(v_hashes_5255_, v_importArts_5256_, v_importedClosures_x3f_5257_, v_as_x27_5259_, v_b_5260_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_, v___y_5266_, v___y_5267_);
return v___x_5269_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2___boxed(lean_object* v_hashes_5270_, lean_object* v_importArts_5271_, lean_object* v_importedClosures_x3f_5272_, lean_object* v_as_5273_, lean_object* v_as_x27_5274_, lean_object* v_b_5275_, lean_object* v_a_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_){
_start:
{
lean_object* v_res_5284_; 
v_res_5284_ = l_List_forIn_x27_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__2(v_hashes_5270_, v_importArts_5271_, v_importedClosures_x3f_5272_, v_as_5273_, v_as_x27_5274_, v_b_5275_, v_a_5276_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_);
lean_dec_ref(v___y_5281_);
lean_dec(v___y_5280_);
lean_dec(v___y_5279_);
lean_dec(v___y_5278_);
lean_dec(v_as_x27_5274_);
lean_dec(v_as_5273_);
lean_dec(v_importedClosures_x3f_5272_);
lean_dec(v_importArts_5271_);
lean_dec(v_hashes_5270_);
return v_res_5284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5(lean_object* v_n_5285_, lean_object* v_as_5286_, lean_object* v_lo_5287_, lean_object* v_hi_5288_, lean_object* v_w_5289_, lean_object* v_hlo_5290_, lean_object* v_hhi_5291_){
_start:
{
lean_object* v___x_5292_; 
v___x_5292_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___redArg(v_n_5285_, v_as_5286_, v_lo_5287_, v_hi_5288_);
return v___x_5292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5___boxed(lean_object* v_n_5293_, lean_object* v_as_5294_, lean_object* v_lo_5295_, lean_object* v_hi_5296_, lean_object* v_w_5297_, lean_object* v_hlo_5298_, lean_object* v_hhi_5299_){
_start:
{
lean_object* v_res_5300_; 
v_res_5300_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5(v_n_5293_, v_as_5294_, v_lo_5295_, v_hi_5296_, v_w_5297_, v_hlo_5298_, v_hhi_5299_);
lean_dec(v_hi_5296_);
lean_dec(v_n_5293_);
return v_res_5300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6(lean_object* v_n_5301_, lean_object* v_lo_5302_, lean_object* v_hi_5303_, lean_object* v_hhi_5304_, lean_object* v_pivot_5305_, lean_object* v_as_5306_, lean_object* v_i_5307_, lean_object* v_k_5308_, lean_object* v_ilo_5309_, lean_object* v_ik_5310_, lean_object* v_w_5311_){
_start:
{
lean_object* v___x_5312_; 
v___x_5312_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___redArg(v_hi_5303_, v_pivot_5305_, v_as_5306_, v_i_5307_, v_k_5308_);
return v___x_5312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6___boxed(lean_object* v_n_5313_, lean_object* v_lo_5314_, lean_object* v_hi_5315_, lean_object* v_hhi_5316_, lean_object* v_pivot_5317_, lean_object* v_as_5318_, lean_object* v_i_5319_, lean_object* v_k_5320_, lean_object* v_ilo_5321_, lean_object* v_ik_5322_, lean_object* v_w_5323_){
_start:
{
lean_object* v_res_5324_; 
v_res_5324_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__5_spec__6(v_n_5313_, v_lo_5314_, v_hi_5315_, v_hhi_5316_, v_pivot_5317_, v_as_5318_, v_i_5319_, v_k_5320_, v_ilo_5321_, v_ik_5322_, v_w_5323_);
lean_dec(v_pivot_5317_);
lean_dec(v_hi_5315_);
lean_dec(v_lo_5314_);
lean_dec(v_n_5313_);
return v_res_5324_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___lam__0(lean_object* v_x1_5325_, lean_object* v_x2_5326_){
_start:
{
lean_object* v_fst_5327_; lean_object* v_fst_5328_; uint8_t v___x_5329_; 
v_fst_5327_ = lean_ctor_get(v_x1_5325_, 0);
v_fst_5328_ = lean_ctor_get(v_x2_5326_, 0);
v___x_5329_ = l_Lean_Name_quickLt(v_fst_5327_, v_fst_5328_);
return v___x_5329_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___lam__0___boxed(lean_object* v_x1_5330_, lean_object* v_x2_5331_){
_start:
{
uint8_t v_res_5332_; lean_object* v_r_5333_; 
v_res_5332_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___lam__0(v_x1_5330_, v_x2_5331_);
lean_dec_ref(v_x2_5331_);
lean_dec_ref(v_x1_5330_);
v_r_5333_ = lean_box(v_res_5332_);
return v_r_5333_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg(lean_object* v_as_5334_, lean_object* v_k_5335_, lean_object* v_x_5336_, lean_object* v_x_5337_){
_start:
{
lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v_m_5340_; lean_object* v_a_5341_; uint8_t v___x_5342_; 
v___x_5338_ = lean_nat_add(v_x_5336_, v_x_5337_);
v___x_5339_ = lean_unsigned_to_nat(1u);
v_m_5340_ = lean_nat_shiftr(v___x_5338_, v___x_5339_);
lean_dec(v___x_5338_);
v_a_5341_ = lean_array_fget_borrowed(v_as_5334_, v_m_5340_);
v___x_5342_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___lam__0(v_a_5341_, v_k_5335_);
if (v___x_5342_ == 0)
{
uint8_t v___x_5343_; 
lean_dec(v_x_5337_);
v___x_5343_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___lam__0(v_k_5335_, v_a_5341_);
if (v___x_5343_ == 0)
{
lean_object* v___x_5344_; 
lean_dec(v_m_5340_);
lean_dec(v_x_5336_);
lean_inc(v_a_5341_);
v___x_5344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5344_, 0, v_a_5341_);
return v___x_5344_;
}
else
{
lean_object* v___x_5345_; uint8_t v___x_5346_; 
v___x_5345_ = lean_unsigned_to_nat(0u);
v___x_5346_ = lean_nat_dec_eq(v_m_5340_, v___x_5345_);
if (v___x_5346_ == 0)
{
lean_object* v___x_5347_; uint8_t v___x_5348_; 
v___x_5347_ = lean_nat_sub(v_m_5340_, v___x_5339_);
lean_dec(v_m_5340_);
v___x_5348_ = lean_nat_dec_lt(v___x_5347_, v_x_5336_);
if (v___x_5348_ == 0)
{
v_x_5337_ = v___x_5347_;
goto _start;
}
else
{
lean_object* v___x_5350_; 
lean_dec(v___x_5347_);
lean_dec(v_x_5336_);
v___x_5350_ = lean_box(0);
return v___x_5350_;
}
}
else
{
lean_object* v___x_5351_; 
lean_dec(v_m_5340_);
lean_dec(v_x_5336_);
v___x_5351_ = lean_box(0);
return v___x_5351_;
}
}
}
else
{
lean_object* v___x_5352_; uint8_t v___x_5353_; 
lean_dec(v_x_5336_);
v___x_5352_ = lean_nat_add(v_m_5340_, v___x_5339_);
lean_dec(v_m_5340_);
v___x_5353_ = lean_nat_dec_le(v___x_5352_, v_x_5337_);
if (v___x_5353_ == 0)
{
lean_object* v___x_5354_; 
lean_dec(v___x_5352_);
lean_dec(v_x_5337_);
v___x_5354_ = lean_box(0);
return v___x_5354_;
}
else
{
v_x_5336_ = v___x_5352_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg___boxed(lean_object* v_as_5356_, lean_object* v_k_5357_, lean_object* v_x_5358_, lean_object* v_x_5359_){
_start:
{
lean_object* v_res_5360_; 
v_res_5360_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg(v_as_5356_, v_k_5357_, v_x_5358_, v_x_5359_);
lean_dec_ref(v_k_5357_);
lean_dec_ref(v_as_5356_);
return v_res_5360_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1(lean_object* v_usage_5372_, lean_object* v_init_5373_, lean_object* v_x_5374_){
_start:
{
if (lean_obj_tag(v_x_5374_) == 0)
{
lean_object* v_k_5375_; lean_object* v_l_5376_; lean_object* v_r_5377_; lean_object* v___x_5378_; 
v_k_5375_ = lean_ctor_get(v_x_5374_, 1);
v_l_5376_ = lean_ctor_get(v_x_5374_, 3);
v_r_5377_ = lean_ctor_get(v_x_5374_, 4);
v___x_5378_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1(v_usage_5372_, v_init_5373_, v_l_5376_);
if (lean_obj_tag(v___x_5378_) == 0)
{
return v___x_5378_;
}
else
{
lean_object* v_digested_5379_; lean_object* v___x_5382_; lean_object* v___x_5383_; uint8_t v___x_5384_; 
lean_dec_ref_known(v___x_5378_, 1);
v_digested_5379_ = lean_ctor_get(v_usage_5372_, 2);
v___x_5382_ = lean_unsigned_to_nat(0u);
v___x_5383_ = lean_array_get_size(v_digested_5379_);
v___x_5384_ = lean_nat_dec_lt(v___x_5382_, v___x_5383_);
if (v___x_5384_ == 0)
{
goto v___jp_5380_;
}
else
{
lean_object* v___x_5385_; lean_object* v___x_5386_; uint8_t v___x_5387_; 
v___x_5385_ = lean_unsigned_to_nat(1u);
v___x_5386_ = lean_nat_sub(v___x_5383_, v___x_5385_);
v___x_5387_ = lean_nat_dec_le(v___x_5382_, v___x_5386_);
if (v___x_5387_ == 0)
{
lean_dec(v___x_5386_);
goto v___jp_5380_;
}
else
{
lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; 
v___x_5388_ = l_Lean_ModuleUsage_instInhabitedDigest_default;
lean_inc(v_k_5375_);
v___x_5389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5389_, 0, v_k_5375_);
lean_ctor_set(v___x_5389_, 1, v___x_5388_);
v___x_5390_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg(v_digested_5379_, v___x_5389_, v___x_5382_, v___x_5386_);
lean_dec_ref_known(v___x_5389_, 2);
if (lean_obj_tag(v___x_5390_) == 0)
{
goto v___jp_5380_;
}
else
{
lean_object* v___x_5391_; 
lean_dec_ref_known(v___x_5390_, 1);
v___x_5391_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
v_init_5373_ = v___x_5391_;
v_x_5374_ = v_r_5377_;
goto _start;
}
}
}
v___jp_5380_:
{
lean_object* v___x_5381_; 
v___x_5381_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__2));
return v___x_5381_;
}
}
}
else
{
lean_object* v___x_5393_; 
v___x_5393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5393_, 0, v_init_5373_);
return v___x_5393_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___boxed(lean_object* v_usage_5394_, lean_object* v_init_5395_, lean_object* v_x_5396_){
_start:
{
lean_object* v_res_5397_; 
v_res_5397_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1(v_usage_5394_, v_init_5395_, v_x_5396_);
lean_dec(v_x_5396_);
lean_dec_ref(v_usage_5394_);
return v_res_5397_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure(lean_object* v_usage_5398_, lean_object* v_importArts_5399_){
_start:
{
lean_object* v___y_5401_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v_a_5408_; 
v___x_5406_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
v___x_5407_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1(v_usage_5398_, v___x_5406_, v_importArts_5399_);
v_a_5408_ = lean_ctor_get(v___x_5407_, 0);
lean_inc(v_a_5408_);
lean_dec_ref(v___x_5407_);
v___y_5401_ = v_a_5408_;
goto v___jp_5400_;
v___jp_5400_:
{
lean_object* v_fst_5402_; 
v_fst_5402_ = lean_ctor_get(v___y_5401_, 0);
lean_inc(v_fst_5402_);
lean_dec_ref(v___y_5401_);
if (lean_obj_tag(v_fst_5402_) == 0)
{
uint8_t v___x_5403_; 
v___x_5403_ = 1;
return v___x_5403_;
}
else
{
lean_object* v_val_5404_; uint8_t v___x_5405_; 
v_val_5404_ = lean_ctor_get(v_fst_5402_, 0);
lean_inc(v_val_5404_);
lean_dec_ref_known(v_fst_5402_, 1);
v___x_5405_ = lean_unbox(v_val_5404_);
lean_dec(v_val_5404_);
return v___x_5405_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure___boxed(lean_object* v_usage_5409_, lean_object* v_importArts_5410_){
_start:
{
uint8_t v_res_5411_; lean_object* v_r_5412_; 
v_res_5411_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure(v_usage_5409_, v_importArts_5410_);
lean_dec(v_importArts_5410_);
lean_dec_ref(v_usage_5409_);
v_r_5412_ = lean_box(v_res_5411_);
return v_r_5412_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0(lean_object* v_as_5413_, lean_object* v_k_5414_, lean_object* v_x_5415_, lean_object* v_x_5416_, lean_object* v_x_5417_){
_start:
{
lean_object* v___x_5418_; 
v___x_5418_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg(v_as_5413_, v_k_5414_, v_x_5415_, v_x_5416_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___boxed(lean_object* v_as_5419_, lean_object* v_k_5420_, lean_object* v_x_5421_, lean_object* v_x_5422_, lean_object* v_x_5423_){
_start:
{
lean_object* v_res_5424_; 
v_res_5424_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0(v_as_5419_, v_k_5420_, v_x_5421_, v_x_5422_, v_x_5423_);
lean_dec_ref(v_k_5420_);
lean_dec_ref(v_as_5419_);
return v_res_5424_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__0(lean_object* v_x_5425_, lean_object* v_x_5426_){
_start:
{
if (lean_obj_tag(v_x_5425_) == 0)
{
if (lean_obj_tag(v_x_5426_) == 0)
{
uint8_t v___x_5427_; 
v___x_5427_ = 1;
return v___x_5427_;
}
else
{
uint8_t v___x_5428_; 
v___x_5428_ = 0;
return v___x_5428_;
}
}
else
{
if (lean_obj_tag(v_x_5426_) == 0)
{
uint8_t v___x_5429_; 
v___x_5429_ = 0;
return v___x_5429_;
}
else
{
lean_object* v_val_5430_; lean_object* v_val_5431_; uint8_t v___x_5432_; 
v_val_5430_ = lean_ctor_get(v_x_5425_, 0);
v_val_5431_ = lean_ctor_get(v_x_5426_, 0);
v___x_5432_ = lean_name_eq(v_val_5430_, v_val_5431_);
return v___x_5432_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__0___boxed(lean_object* v_x_5433_, lean_object* v_x_5434_){
_start:
{
uint8_t v_res_5435_; lean_object* v_r_5436_; 
v_res_5435_ = l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__0(v_x_5433_, v_x_5434_);
lean_dec(v_x_5434_);
lean_dec(v_x_5433_);
v_r_5436_ = lean_box(v_res_5435_);
return v_r_5436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___redArg(lean_object* v_fst_5437_, lean_object* v_snd_5438_, uint8_t v___x_5439_, lean_object* v_as_5440_, size_t v_sz_5441_, size_t v_i_5442_, lean_object* v_b_5443_, lean_object* v___y_5444_){
_start:
{
uint8_t v___x_5446_; 
v___x_5446_ = lean_usize_dec_lt(v_i_5442_, v_sz_5441_);
if (v___x_5446_ == 0)
{
lean_object* v___x_5447_; 
v___x_5447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5447_, 0, v_b_5443_);
lean_ctor_set(v___x_5447_, 1, v___y_5444_);
return v___x_5447_;
}
else
{
lean_object* v_a_5448_; lean_object* v_fst_5449_; lean_object* v_snd_5450_; lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5471_; 
lean_dec_ref(v_b_5443_);
v_a_5448_ = lean_array_uget(v_as_5440_, v_i_5442_);
v_fst_5449_ = lean_ctor_get(v_a_5448_, 0);
v_snd_5450_ = lean_ctor_get(v_a_5448_, 1);
v_isSharedCheck_5471_ = !lean_is_exclusive(v_a_5448_);
if (v_isSharedCheck_5471_ == 0)
{
v___x_5452_ = v_a_5448_;
v_isShared_5453_ = v_isSharedCheck_5471_;
goto v_resetjp_5451_;
}
else
{
lean_inc(v_snd_5450_);
lean_inc(v_fst_5449_);
lean_dec(v_a_5448_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5471_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5454_; lean_object* v___x_5455_; uint8_t v___x_5456_; uint8_t v___y_5458_; 
v___x_5454_ = lean_box(0);
v___x_5455_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
v___x_5456_ = l_Lean_ModuleUsage_kindsIn(v_fst_5437_, v_snd_5438_, v_fst_5449_);
lean_dec(v_fst_5449_);
if (v___x_5439_ == 0)
{
uint8_t v___x_5469_; 
lean_dec(v_snd_5450_);
v___x_5469_ = 0;
v___y_5458_ = v___x_5469_;
goto v___jp_5457_;
}
else
{
uint8_t v___x_5470_; 
v___x_5470_ = lean_unbox(v_snd_5450_);
lean_dec(v_snd_5450_);
v___y_5458_ = v___x_5470_;
goto v___jp_5457_;
}
v___jp_5457_:
{
uint8_t v___x_5459_; 
v___x_5459_ = lean_uint8_dec_eq(v___x_5456_, v___y_5458_);
if (v___x_5459_ == 0)
{
lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5463_; 
v___x_5460_ = lean_box(v___x_5459_);
v___x_5461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5461_, 0, v___x_5460_);
if (v_isShared_5453_ == 0)
{
lean_ctor_set(v___x_5452_, 1, v___x_5454_);
lean_ctor_set(v___x_5452_, 0, v___x_5461_);
v___x_5463_ = v___x_5452_;
goto v_reusejp_5462_;
}
else
{
lean_object* v_reuseFailAlloc_5465_; 
v_reuseFailAlloc_5465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5465_, 0, v___x_5461_);
lean_ctor_set(v_reuseFailAlloc_5465_, 1, v___x_5454_);
v___x_5463_ = v_reuseFailAlloc_5465_;
goto v_reusejp_5462_;
}
v_reusejp_5462_:
{
lean_object* v___x_5464_; 
v___x_5464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5464_, 0, v___x_5463_);
lean_ctor_set(v___x_5464_, 1, v___y_5444_);
return v___x_5464_;
}
}
else
{
size_t v___x_5466_; size_t v___x_5467_; 
lean_del_object(v___x_5452_);
v___x_5466_ = ((size_t)1ULL);
v___x_5467_ = lean_usize_add(v_i_5442_, v___x_5466_);
v_i_5442_ = v___x_5467_;
v_b_5443_ = v___x_5455_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___redArg___boxed(lean_object* v_fst_5472_, lean_object* v_snd_5473_, lean_object* v___x_5474_, lean_object* v_as_5475_, lean_object* v_sz_5476_, lean_object* v_i_5477_, lean_object* v_b_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_){
_start:
{
uint8_t v___x_35633__boxed_5481_; size_t v_sz_boxed_5482_; size_t v_i_boxed_5483_; lean_object* v_res_5484_; 
v___x_35633__boxed_5481_ = lean_unbox(v___x_5474_);
v_sz_boxed_5482_ = lean_unbox_usize(v_sz_5476_);
lean_dec(v_sz_5476_);
v_i_boxed_5483_ = lean_unbox_usize(v_i_5477_);
lean_dec(v_i_5477_);
v_res_5484_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___redArg(v_fst_5472_, v_snd_5473_, v___x_35633__boxed_5481_, v_as_5475_, v_sz_boxed_5482_, v_i_boxed_5483_, v_b_5478_, v___y_5479_);
lean_dec_ref(v_as_5475_);
lean_dec_ref(v_snd_5473_);
lean_dec_ref(v_fst_5472_);
return v_res_5484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__2(lean_object* v_a_5485_, lean_object* v_fst_5486_, lean_object* v_snd_5487_, lean_object* v_as_5488_, size_t v_sz_5489_, size_t v_i_5490_, lean_object* v_b_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_, lean_object* v___y_5496_, lean_object* v___y_5497_){
_start:
{
uint8_t v___x_5499_; 
v___x_5499_ = lean_usize_dec_lt(v_i_5490_, v_sz_5489_);
if (v___x_5499_ == 0)
{
lean_object* v___x_5500_; 
lean_dec(v_a_5485_);
v___x_5500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5500_, 0, v_b_5491_);
lean_ctor_set(v___x_5500_, 1, v___y_5497_);
return v___x_5500_;
}
else
{
lean_object* v_a_5501_; lean_object* v_fst_5502_; lean_object* v_snd_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; uint8_t v___x_5507_; size_t v_sz_5508_; size_t v___x_5509_; lean_object* v___x_5510_; 
lean_dec_ref(v_b_5491_);
v_a_5501_ = lean_array_uget_borrowed(v_as_5488_, v_i_5490_);
v_fst_5502_ = lean_ctor_get(v_a_5501_, 0);
v_snd_5503_ = lean_ctor_get(v_a_5501_, 1);
v___x_5504_ = lean_box(0);
v___x_5505_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
lean_inc(v_a_5485_);
v___x_5506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5506_, 0, v_a_5485_);
v___x_5507_ = l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__0(v_fst_5502_, v___x_5506_);
lean_dec_ref_known(v___x_5506_, 1);
v_sz_5508_ = lean_array_size(v_snd_5503_);
v___x_5509_ = ((size_t)0ULL);
v___x_5510_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___redArg(v_fst_5486_, v_snd_5487_, v___x_5507_, v_snd_5503_, v_sz_5508_, v___x_5509_, v___x_5505_, v___y_5497_);
if (lean_obj_tag(v___x_5510_) == 0)
{
lean_object* v_a_5511_; lean_object* v_fst_5512_; lean_object* v___x_5514_; uint8_t v_isShared_5515_; uint8_t v_isSharedCheck_5532_; 
v_a_5511_ = lean_ctor_get(v___x_5510_, 0);
lean_inc(v_a_5511_);
v_fst_5512_ = lean_ctor_get(v_a_5511_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v_a_5511_);
if (v_isSharedCheck_5532_ == 0)
{
lean_object* v_unused_5533_; 
v_unused_5533_ = lean_ctor_get(v_a_5511_, 1);
lean_dec(v_unused_5533_);
v___x_5514_ = v_a_5511_;
v_isShared_5515_ = v_isSharedCheck_5532_;
goto v_resetjp_5513_;
}
else
{
lean_inc(v_fst_5512_);
lean_dec(v_a_5511_);
v___x_5514_ = lean_box(0);
v_isShared_5515_ = v_isSharedCheck_5532_;
goto v_resetjp_5513_;
}
v_resetjp_5513_:
{
if (lean_obj_tag(v_fst_5512_) == 0)
{
lean_object* v_a_5516_; size_t v___x_5517_; size_t v___x_5518_; 
lean_del_object(v___x_5514_);
v_a_5516_ = lean_ctor_get(v___x_5510_, 1);
lean_inc(v_a_5516_);
lean_dec_ref_known(v___x_5510_, 2);
v___x_5517_ = ((size_t)1ULL);
v___x_5518_ = lean_usize_add(v_i_5490_, v___x_5517_);
v_i_5490_ = v___x_5518_;
v_b_5491_ = v___x_5505_;
v___y_5497_ = v_a_5516_;
goto _start;
}
else
{
lean_object* v_a_5520_; lean_object* v___x_5522_; uint8_t v_isShared_5523_; uint8_t v_isSharedCheck_5530_; 
lean_dec(v_a_5485_);
v_a_5520_ = lean_ctor_get(v___x_5510_, 1);
v_isSharedCheck_5530_ = !lean_is_exclusive(v___x_5510_);
if (v_isSharedCheck_5530_ == 0)
{
lean_object* v_unused_5531_; 
v_unused_5531_ = lean_ctor_get(v___x_5510_, 0);
lean_dec(v_unused_5531_);
v___x_5522_ = v___x_5510_;
v_isShared_5523_ = v_isSharedCheck_5530_;
goto v_resetjp_5521_;
}
else
{
lean_inc(v_a_5520_);
lean_dec(v___x_5510_);
v___x_5522_ = lean_box(0);
v_isShared_5523_ = v_isSharedCheck_5530_;
goto v_resetjp_5521_;
}
v_resetjp_5521_:
{
lean_object* v___x_5525_; 
if (v_isShared_5515_ == 0)
{
lean_ctor_set(v___x_5514_, 1, v___x_5504_);
v___x_5525_ = v___x_5514_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5529_; 
v_reuseFailAlloc_5529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5529_, 0, v_fst_5512_);
lean_ctor_set(v_reuseFailAlloc_5529_, 1, v___x_5504_);
v___x_5525_ = v_reuseFailAlloc_5529_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
lean_object* v___x_5527_; 
if (v_isShared_5523_ == 0)
{
lean_ctor_set(v___x_5522_, 0, v___x_5525_);
v___x_5527_ = v___x_5522_;
goto v_reusejp_5526_;
}
else
{
lean_object* v_reuseFailAlloc_5528_; 
v_reuseFailAlloc_5528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5528_, 0, v___x_5525_);
lean_ctor_set(v_reuseFailAlloc_5528_, 1, v_a_5520_);
v___x_5527_ = v_reuseFailAlloc_5528_;
goto v_reusejp_5526_;
}
v_reusejp_5526_:
{
return v___x_5527_;
}
}
}
}
}
}
else
{
lean_dec(v_a_5485_);
return v___x_5510_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__2___boxed(lean_object* v_a_5534_, lean_object* v_fst_5535_, lean_object* v_snd_5536_, lean_object* v_as_5537_, lean_object* v_sz_5538_, lean_object* v_i_5539_, lean_object* v_b_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_){
_start:
{
size_t v_sz_boxed_5548_; size_t v_i_boxed_5549_; lean_object* v_res_5550_; 
v_sz_boxed_5548_ = lean_unbox_usize(v_sz_5538_);
lean_dec(v_sz_5538_);
v_i_boxed_5549_ = lean_unbox_usize(v_i_5539_);
lean_dec(v_i_5539_);
v_res_5550_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__2(v_a_5534_, v_fst_5535_, v_snd_5536_, v_as_5537_, v_sz_boxed_5548_, v_i_boxed_5549_, v_b_5540_, v___y_5541_, v___y_5542_, v___y_5543_, v___y_5544_, v___y_5545_, v___y_5546_);
lean_dec_ref(v___y_5545_);
lean_dec(v___y_5544_);
lean_dec(v___y_5543_);
lean_dec(v___y_5542_);
lean_dec_ref(v___y_5541_);
lean_dec_ref(v_as_5537_);
lean_dec_ref(v_snd_5536_);
lean_dec_ref(v_fst_5535_);
return v_res_5550_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__3(lean_object* v_usage_5551_, lean_object* v_hashes_5552_, lean_object* v_importArts_5553_, lean_object* v_init_5554_, lean_object* v_x_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_){
_start:
{
lean_object* v_d_5564_; lean_object* v___y_5565_; 
if (lean_obj_tag(v_x_5555_) == 0)
{
lean_object* v_k_5568_; lean_object* v_v_5569_; lean_object* v_l_5570_; lean_object* v_r_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; 
v_k_5568_ = lean_ctor_get(v_x_5555_, 1);
lean_inc(v_k_5568_);
v_v_5569_ = lean_ctor_get(v_x_5555_, 2);
lean_inc(v_v_5569_);
v_l_5570_ = lean_ctor_get(v_x_5555_, 3);
lean_inc(v_l_5570_);
v_r_5571_ = lean_ctor_get(v_x_5555_, 4);
lean_inc(v_r_5571_);
lean_dec_ref_known(v_x_5555_, 5);
v___x_5572_ = lean_box(0);
v___x_5573_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
lean_inc_ref(v___y_5556_);
v___x_5574_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__3(v_usage_5551_, v_hashes_5552_, v_importArts_5553_, v_init_5554_, v_l_5570_, v___y_5556_, v___y_5557_, v___y_5558_, v___y_5559_, v___y_5560_, v___y_5561_);
if (lean_obj_tag(v___x_5574_) == 0)
{
lean_object* v_a_5575_; 
v_a_5575_ = lean_ctor_get(v___x_5574_, 0);
if (lean_obj_tag(v_a_5575_) == 0)
{
lean_object* v_a_5576_; lean_object* v_a_5577_; 
lean_inc_ref(v_a_5575_);
lean_dec(v_r_5571_);
lean_dec(v_v_5569_);
lean_dec(v_k_5568_);
lean_dec_ref(v___y_5556_);
v_a_5576_ = lean_ctor_get(v___x_5574_, 1);
lean_inc(v_a_5576_);
lean_dec_ref_known(v___x_5574_, 2);
v_a_5577_ = lean_ctor_get(v_a_5575_, 0);
lean_inc(v_a_5577_);
lean_dec_ref_known(v_a_5575_, 1);
v_d_5564_ = v_a_5577_;
v___y_5565_ = v_a_5576_;
goto v___jp_5563_;
}
else
{
lean_object* v_a_5578_; lean_object* v___x_5580_; uint8_t v_isShared_5581_; uint8_t v_isSharedCheck_5651_; 
v_a_5578_ = lean_ctor_get(v___x_5574_, 1);
v_isSharedCheck_5651_ = !lean_is_exclusive(v___x_5574_);
if (v_isSharedCheck_5651_ == 0)
{
lean_object* v_unused_5652_; 
v_unused_5652_ = lean_ctor_get(v___x_5574_, 0);
lean_dec(v_unused_5652_);
v___x_5580_ = v___x_5574_;
v_isShared_5581_ = v_isSharedCheck_5651_;
goto v_resetjp_5579_;
}
else
{
lean_inc(v_a_5578_);
lean_dec(v___x_5574_);
v___x_5580_ = lean_box(0);
v_isShared_5581_ = v_isSharedCheck_5651_;
goto v_resetjp_5579_;
}
v_resetjp_5579_:
{
lean_object* v___x_5582_; 
v___x_5582_ = l_Lean_ImportArtifacts_oleanServer_x3f(v_v_5569_);
lean_dec(v_v_5569_);
if (lean_obj_tag(v___x_5582_) == 0)
{
lean_object* v_toContext_5583_; lean_object* v___x_5584_; 
v_toContext_5583_ = lean_ctor_get(v___y_5560_, 1);
lean_inc(v_k_5568_);
v___x_5584_ = l_Lake_Workspace_findModule_x3f(v_k_5568_, v_toContext_5583_);
if (lean_obj_tag(v___x_5584_) == 0)
{
lean_del_object(v___x_5580_);
lean_dec(v_k_5568_);
v_init_5554_ = v___x_5573_;
v_x_5555_ = v_r_5571_;
v___y_5561_ = v_a_5578_;
goto _start;
}
else
{
lean_object* v_digested_5586_; lean_object* v_resolved_5587_; lean_object* v___x_5590_; lean_object* v___x_5591_; uint8_t v___x_5592_; 
lean_dec_ref_known(v___x_5584_, 1);
v_digested_5586_ = lean_ctor_get(v_usage_5551_, 2);
v_resolved_5587_ = lean_ctor_get(v_usage_5551_, 8);
v___x_5590_ = lean_unsigned_to_nat(0u);
v___x_5591_ = lean_array_get_size(v_digested_5586_);
v___x_5592_ = lean_nat_dec_lt(v___x_5590_, v___x_5591_);
if (v___x_5592_ == 0)
{
lean_del_object(v___x_5580_);
lean_dec(v_r_5571_);
lean_dec(v_k_5568_);
lean_dec_ref(v___y_5556_);
goto v___jp_5588_;
}
else
{
lean_object* v___x_5593_; lean_object* v___x_5594_; uint8_t v___x_5595_; 
v___x_5593_ = lean_unsigned_to_nat(1u);
v___x_5594_ = lean_nat_sub(v___x_5591_, v___x_5593_);
v___x_5595_ = lean_nat_dec_le(v___x_5590_, v___x_5594_);
if (v___x_5595_ == 0)
{
lean_dec(v___x_5594_);
lean_del_object(v___x_5580_);
lean_dec(v_r_5571_);
lean_dec(v_k_5568_);
lean_dec_ref(v___y_5556_);
goto v___jp_5588_;
}
else
{
lean_object* v___x_5596_; lean_object* v___x_5598_; 
v___x_5596_ = l_Lean_ModuleUsage_instInhabitedDigest_default;
lean_inc(v_k_5568_);
if (v_isShared_5581_ == 0)
{
lean_ctor_set(v___x_5580_, 1, v___x_5596_);
lean_ctor_set(v___x_5580_, 0, v_k_5568_);
v___x_5598_ = v___x_5580_;
goto v_reusejp_5597_;
}
else
{
lean_object* v_reuseFailAlloc_5649_; 
v_reuseFailAlloc_5649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5649_, 0, v_k_5568_);
lean_ctor_set(v_reuseFailAlloc_5649_, 1, v___x_5596_);
v___x_5598_ = v_reuseFailAlloc_5649_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
lean_object* v___x_5599_; 
v___x_5599_ = l_Array_binSearchAux___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__0___redArg(v_digested_5586_, v___x_5598_, v___x_5590_, v___x_5594_);
lean_dec_ref(v___x_5598_);
if (lean_obj_tag(v___x_5599_) == 1)
{
lean_object* v_val_5600_; lean_object* v_snd_5601_; lean_object* v___x_5602_; 
v_val_5600_ = lean_ctor_get(v___x_5599_, 0);
lean_inc(v_val_5600_);
lean_dec_ref_known(v___x_5599_, 1);
v_snd_5601_ = lean_ctor_get(v_val_5600_, 1);
lean_inc(v_snd_5601_);
lean_dec(v_val_5600_);
lean_inc_ref(v___y_5556_);
v___x_5602_ = l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(v_hashes_5552_, v_importArts_5553_, v_k_5568_, v___y_5556_, v___y_5557_, v___y_5558_, v___y_5559_, v___y_5560_, v_a_5578_);
if (lean_obj_tag(v___x_5602_) == 0)
{
lean_object* v_a_5603_; 
v_a_5603_ = lean_ctor_get(v___x_5602_, 0);
if (lean_obj_tag(v_a_5603_) == 1)
{
lean_object* v_val_5604_; lean_object* v_snd_5605_; lean_object* v_a_5606_; lean_object* v_providesDigest_5607_; lean_object* v_provides_5608_; uint8_t v___x_5609_; 
v_val_5604_ = lean_ctor_get(v_a_5603_, 0);
v_snd_5605_ = lean_ctor_get(v_val_5604_, 1);
lean_inc(v_snd_5605_);
v_a_5606_ = lean_ctor_get(v___x_5602_, 1);
lean_inc(v_a_5606_);
lean_dec_ref_known(v___x_5602_, 2);
v_providesDigest_5607_ = lean_ctor_get(v_snd_5605_, 3);
lean_inc_ref(v_providesDigest_5607_);
v_provides_5608_ = lean_ctor_get(v_snd_5605_, 4);
lean_inc_ref(v_provides_5608_);
lean_dec(v_snd_5605_);
v___x_5609_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_providesDigest_5607_, v_snd_5601_);
lean_dec(v_snd_5601_);
lean_dec_ref(v_providesDigest_5607_);
if (v___x_5609_ == 0)
{
lean_object* v_fst_5610_; lean_object* v_snd_5611_; size_t v_sz_5612_; size_t v___x_5613_; lean_object* v___x_5614_; 
v_fst_5610_ = lean_ctor_get(v_provides_5608_, 0);
lean_inc(v_fst_5610_);
v_snd_5611_ = lean_ctor_get(v_provides_5608_, 1);
lean_inc(v_snd_5611_);
lean_dec_ref(v_provides_5608_);
v_sz_5612_ = lean_array_size(v_resolved_5587_);
v___x_5613_ = ((size_t)0ULL);
v___x_5614_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__2(v_k_5568_, v_fst_5610_, v_snd_5611_, v_resolved_5587_, v_sz_5612_, v___x_5613_, v___x_5573_, v___y_5556_, v___y_5557_, v___y_5558_, v___y_5559_, v___y_5560_, v_a_5606_);
lean_dec(v_snd_5611_);
lean_dec(v_fst_5610_);
if (lean_obj_tag(v___x_5614_) == 0)
{
lean_object* v_a_5615_; lean_object* v_fst_5616_; lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5626_; 
v_a_5615_ = lean_ctor_get(v___x_5614_, 0);
lean_inc(v_a_5615_);
v_fst_5616_ = lean_ctor_get(v_a_5615_, 0);
v_isSharedCheck_5626_ = !lean_is_exclusive(v_a_5615_);
if (v_isSharedCheck_5626_ == 0)
{
lean_object* v_unused_5627_; 
v_unused_5627_ = lean_ctor_get(v_a_5615_, 1);
lean_dec(v_unused_5627_);
v___x_5618_ = v_a_5615_;
v_isShared_5619_ = v_isSharedCheck_5626_;
goto v_resetjp_5617_;
}
else
{
lean_inc(v_fst_5616_);
lean_dec(v_a_5615_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5626_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
if (lean_obj_tag(v_fst_5616_) == 0)
{
lean_object* v_a_5620_; 
lean_del_object(v___x_5618_);
v_a_5620_ = lean_ctor_get(v___x_5614_, 1);
lean_inc(v_a_5620_);
lean_dec_ref_known(v___x_5614_, 2);
v_init_5554_ = v___x_5573_;
v_x_5555_ = v_r_5571_;
v___y_5561_ = v_a_5620_;
goto _start;
}
else
{
lean_object* v_a_5622_; lean_object* v___x_5624_; 
lean_dec(v_r_5571_);
lean_dec_ref(v___y_5556_);
v_a_5622_ = lean_ctor_get(v___x_5614_, 1);
lean_inc(v_a_5622_);
lean_dec_ref_known(v___x_5614_, 2);
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 1, v___x_5572_);
v___x_5624_ = v___x_5618_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v_fst_5616_);
lean_ctor_set(v_reuseFailAlloc_5625_, 1, v___x_5572_);
v___x_5624_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
v_d_5564_ = v___x_5624_;
v___y_5565_ = v_a_5622_;
goto v___jp_5563_;
}
}
}
}
else
{
lean_object* v_a_5628_; lean_object* v_a_5629_; lean_object* v___x_5631_; uint8_t v_isShared_5632_; uint8_t v_isSharedCheck_5636_; 
lean_dec(v_r_5571_);
lean_dec_ref(v___y_5556_);
v_a_5628_ = lean_ctor_get(v___x_5614_, 0);
v_a_5629_ = lean_ctor_get(v___x_5614_, 1);
v_isSharedCheck_5636_ = !lean_is_exclusive(v___x_5614_);
if (v_isSharedCheck_5636_ == 0)
{
v___x_5631_ = v___x_5614_;
v_isShared_5632_ = v_isSharedCheck_5636_;
goto v_resetjp_5630_;
}
else
{
lean_inc(v_a_5629_);
lean_inc(v_a_5628_);
lean_dec(v___x_5614_);
v___x_5631_ = lean_box(0);
v_isShared_5632_ = v_isSharedCheck_5636_;
goto v_resetjp_5630_;
}
v_resetjp_5630_:
{
lean_object* v___x_5634_; 
if (v_isShared_5632_ == 0)
{
v___x_5634_ = v___x_5631_;
goto v_reusejp_5633_;
}
else
{
lean_object* v_reuseFailAlloc_5635_; 
v_reuseFailAlloc_5635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5635_, 0, v_a_5628_);
lean_ctor_set(v_reuseFailAlloc_5635_, 1, v_a_5629_);
v___x_5634_ = v_reuseFailAlloc_5635_;
goto v_reusejp_5633_;
}
v_reusejp_5633_:
{
return v___x_5634_;
}
}
}
}
else
{
lean_dec_ref(v_provides_5608_);
lean_dec(v_k_5568_);
v_init_5554_ = v___x_5573_;
v_x_5555_ = v_r_5571_;
v___y_5561_ = v_a_5606_;
goto _start;
}
}
else
{
lean_object* v_a_5638_; lean_object* v___x_5639_; 
lean_dec(v_snd_5601_);
lean_dec(v_r_5571_);
lean_dec(v_k_5568_);
lean_dec_ref(v___y_5556_);
v_a_5638_ = lean_ctor_get(v___x_5602_, 1);
lean_inc(v_a_5638_);
lean_dec_ref_known(v___x_5602_, 2);
v___x_5639_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__1));
v_d_5564_ = v___x_5639_;
v___y_5565_ = v_a_5638_;
goto v___jp_5563_;
}
}
else
{
lean_object* v_a_5640_; lean_object* v_a_5641_; lean_object* v___x_5643_; uint8_t v_isShared_5644_; uint8_t v_isSharedCheck_5648_; 
lean_dec(v_snd_5601_);
lean_dec(v_r_5571_);
lean_dec(v_k_5568_);
lean_dec_ref(v___y_5556_);
v_a_5640_ = lean_ctor_get(v___x_5602_, 0);
v_a_5641_ = lean_ctor_get(v___x_5602_, 1);
v_isSharedCheck_5648_ = !lean_is_exclusive(v___x_5602_);
if (v_isSharedCheck_5648_ == 0)
{
v___x_5643_ = v___x_5602_;
v_isShared_5644_ = v_isSharedCheck_5648_;
goto v_resetjp_5642_;
}
else
{
lean_inc(v_a_5641_);
lean_inc(v_a_5640_);
lean_dec(v___x_5602_);
v___x_5643_ = lean_box(0);
v_isShared_5644_ = v_isSharedCheck_5648_;
goto v_resetjp_5642_;
}
v_resetjp_5642_:
{
lean_object* v___x_5646_; 
if (v_isShared_5644_ == 0)
{
v___x_5646_ = v___x_5643_;
goto v_reusejp_5645_;
}
else
{
lean_object* v_reuseFailAlloc_5647_; 
v_reuseFailAlloc_5647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5647_, 0, v_a_5640_);
lean_ctor_set(v_reuseFailAlloc_5647_, 1, v_a_5641_);
v___x_5646_ = v_reuseFailAlloc_5647_;
goto v_reusejp_5645_;
}
v_reusejp_5645_:
{
return v___x_5646_;
}
}
}
}
else
{
lean_dec(v___x_5599_);
lean_dec(v_r_5571_);
lean_dec(v_k_5568_);
lean_dec_ref(v___y_5556_);
goto v___jp_5588_;
}
}
}
}
v___jp_5588_:
{
lean_object* v___x_5589_; 
v___x_5589_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__1));
v_d_5564_ = v___x_5589_;
v___y_5565_ = v_a_5578_;
goto v___jp_5563_;
}
}
}
else
{
lean_dec_ref_known(v___x_5582_, 1);
lean_del_object(v___x_5580_);
lean_dec(v_k_5568_);
v_init_5554_ = v___x_5573_;
v_x_5555_ = v_r_5571_;
v___y_5561_ = v_a_5578_;
goto _start;
}
}
}
}
else
{
lean_dec(v_r_5571_);
lean_dec(v_v_5569_);
lean_dec(v_k_5568_);
lean_dec_ref(v___y_5556_);
return v___x_5574_;
}
}
else
{
lean_object* v___x_5653_; lean_object* v___x_5654_; 
lean_dec_ref(v___y_5556_);
v___x_5653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5653_, 0, v_init_5554_);
v___x_5654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5654_, 0, v___x_5653_);
lean_ctor_set(v___x_5654_, 1, v___y_5561_);
return v___x_5654_;
}
v___jp_5563_:
{
lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5566_, 0, v_d_5564_);
v___x_5567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5567_, 0, v___x_5566_);
lean_ctor_set(v___x_5567_, 1, v___y_5565_);
return v___x_5567_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__3___boxed(lean_object* v_usage_5655_, lean_object* v_hashes_5656_, lean_object* v_importArts_5657_, lean_object* v_init_5658_, lean_object* v_x_5659_, lean_object* v___y_5660_, lean_object* v___y_5661_, lean_object* v___y_5662_, lean_object* v___y_5663_, lean_object* v___y_5664_, lean_object* v___y_5665_, lean_object* v___y_5666_){
_start:
{
lean_object* v_res_5667_; 
v_res_5667_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__3(v_usage_5655_, v_hashes_5656_, v_importArts_5657_, v_init_5658_, v_x_5659_, v___y_5660_, v___y_5661_, v___y_5662_, v___y_5663_, v___y_5664_, v___y_5665_);
lean_dec_ref(v___y_5664_);
lean_dec(v___y_5663_);
lean_dec(v___y_5662_);
lean_dec(v___y_5661_);
lean_dec(v_importArts_5657_);
lean_dec(v_hashes_5656_);
lean_dec_ref(v_usage_5655_);
return v_res_5667_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged(lean_object* v_usage_5668_, lean_object* v_hashes_5669_, lean_object* v_importArts_5670_, lean_object* v_a_5671_, lean_object* v_a_5672_, lean_object* v_a_5673_, lean_object* v_a_5674_, lean_object* v_a_5675_, lean_object* v_a_5676_){
_start:
{
lean_object* v_a_5679_; lean_object* v_a_5680_; lean_object* v___x_5696_; lean_object* v___x_5697_; 
v___x_5696_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
lean_inc(v_importArts_5670_);
v___x_5697_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__3(v_usage_5668_, v_hashes_5669_, v_importArts_5670_, v___x_5696_, v_importArts_5670_, v_a_5671_, v_a_5672_, v_a_5673_, v_a_5674_, v_a_5675_, v_a_5676_);
lean_dec(v_importArts_5670_);
if (lean_obj_tag(v___x_5697_) == 0)
{
lean_object* v_a_5698_; lean_object* v_a_5699_; lean_object* v_a_5700_; 
v_a_5698_ = lean_ctor_get(v___x_5697_, 0);
lean_inc(v_a_5698_);
v_a_5699_ = lean_ctor_get(v___x_5697_, 1);
lean_inc(v_a_5699_);
lean_dec_ref_known(v___x_5697_, 2);
v_a_5700_ = lean_ctor_get(v_a_5698_, 0);
lean_inc(v_a_5700_);
lean_dec(v_a_5698_);
v_a_5679_ = v_a_5700_;
v_a_5680_ = v_a_5699_;
goto v___jp_5678_;
}
else
{
lean_object* v_a_5701_; lean_object* v_a_5702_; lean_object* v___x_5704_; uint8_t v_isShared_5705_; uint8_t v_isSharedCheck_5709_; 
v_a_5701_ = lean_ctor_get(v___x_5697_, 0);
v_a_5702_ = lean_ctor_get(v___x_5697_, 1);
v_isSharedCheck_5709_ = !lean_is_exclusive(v___x_5697_);
if (v_isSharedCheck_5709_ == 0)
{
v___x_5704_ = v___x_5697_;
v_isShared_5705_ = v_isSharedCheck_5709_;
goto v_resetjp_5703_;
}
else
{
lean_inc(v_a_5702_);
lean_inc(v_a_5701_);
lean_dec(v___x_5697_);
v___x_5704_ = lean_box(0);
v_isShared_5705_ = v_isSharedCheck_5709_;
goto v_resetjp_5703_;
}
v_resetjp_5703_:
{
lean_object* v___x_5707_; 
if (v_isShared_5705_ == 0)
{
v___x_5707_ = v___x_5704_;
goto v_reusejp_5706_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v_a_5701_);
lean_ctor_set(v_reuseFailAlloc_5708_, 1, v_a_5702_);
v___x_5707_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5706_;
}
v_reusejp_5706_:
{
return v___x_5707_;
}
}
}
v___jp_5678_:
{
lean_object* v_fst_5681_; lean_object* v___x_5683_; uint8_t v_isShared_5684_; uint8_t v_isSharedCheck_5694_; 
v_fst_5681_ = lean_ctor_get(v_a_5679_, 0);
v_isSharedCheck_5694_ = !lean_is_exclusive(v_a_5679_);
if (v_isSharedCheck_5694_ == 0)
{
lean_object* v_unused_5695_; 
v_unused_5695_ = lean_ctor_get(v_a_5679_, 1);
lean_dec(v_unused_5695_);
v___x_5683_ = v_a_5679_;
v_isShared_5684_ = v_isSharedCheck_5694_;
goto v_resetjp_5682_;
}
else
{
lean_inc(v_fst_5681_);
lean_dec(v_a_5679_);
v___x_5683_ = lean_box(0);
v_isShared_5684_ = v_isSharedCheck_5694_;
goto v_resetjp_5682_;
}
v_resetjp_5682_:
{
if (lean_obj_tag(v_fst_5681_) == 0)
{
uint8_t v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5688_; 
v___x_5685_ = 1;
v___x_5686_ = lean_box(v___x_5685_);
if (v_isShared_5684_ == 0)
{
lean_ctor_set(v___x_5683_, 1, v_a_5680_);
lean_ctor_set(v___x_5683_, 0, v___x_5686_);
v___x_5688_ = v___x_5683_;
goto v_reusejp_5687_;
}
else
{
lean_object* v_reuseFailAlloc_5689_; 
v_reuseFailAlloc_5689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5689_, 0, v___x_5686_);
lean_ctor_set(v_reuseFailAlloc_5689_, 1, v_a_5680_);
v___x_5688_ = v_reuseFailAlloc_5689_;
goto v_reusejp_5687_;
}
v_reusejp_5687_:
{
return v___x_5688_;
}
}
else
{
lean_object* v_val_5690_; lean_object* v___x_5692_; 
v_val_5690_ = lean_ctor_get(v_fst_5681_, 0);
lean_inc(v_val_5690_);
lean_dec_ref_known(v_fst_5681_, 1);
if (v_isShared_5684_ == 0)
{
lean_ctor_set(v___x_5683_, 1, v_a_5680_);
lean_ctor_set(v___x_5683_, 0, v_val_5690_);
v___x_5692_ = v___x_5683_;
goto v_reusejp_5691_;
}
else
{
lean_object* v_reuseFailAlloc_5693_; 
v_reuseFailAlloc_5693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5693_, 0, v_val_5690_);
lean_ctor_set(v_reuseFailAlloc_5693_, 1, v_a_5680_);
v___x_5692_ = v_reuseFailAlloc_5693_;
goto v_reusejp_5691_;
}
v_reusejp_5691_:
{
return v___x_5692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged___boxed(lean_object* v_usage_5710_, lean_object* v_hashes_5711_, lean_object* v_importArts_5712_, lean_object* v_a_5713_, lean_object* v_a_5714_, lean_object* v_a_5715_, lean_object* v_a_5716_, lean_object* v_a_5717_, lean_object* v_a_5718_, lean_object* v_a_5719_){
_start:
{
lean_object* v_res_5720_; 
v_res_5720_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged(v_usage_5710_, v_hashes_5711_, v_importArts_5712_, v_a_5713_, v_a_5714_, v_a_5715_, v_a_5716_, v_a_5717_, v_a_5718_);
lean_dec_ref(v_a_5717_);
lean_dec(v_a_5716_);
lean_dec(v_a_5715_);
lean_dec(v_a_5714_);
lean_dec(v_hashes_5711_);
lean_dec_ref(v_usage_5710_);
return v_res_5720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1(lean_object* v_fst_5721_, lean_object* v_snd_5722_, uint8_t v___x_5723_, lean_object* v_as_5724_, size_t v_sz_5725_, size_t v_i_5726_, lean_object* v_b_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_){
_start:
{
lean_object* v___x_5735_; 
v___x_5735_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___redArg(v_fst_5721_, v_snd_5722_, v___x_5723_, v_as_5724_, v_sz_5725_, v_i_5726_, v_b_5727_, v___y_5733_);
return v___x_5735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1___boxed(lean_object* v_fst_5736_, lean_object* v_snd_5737_, lean_object* v___x_5738_, lean_object* v_as_5739_, lean_object* v_sz_5740_, lean_object* v_i_5741_, lean_object* v_b_5742_, lean_object* v___y_5743_, lean_object* v___y_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_){
_start:
{
uint8_t v___x_36091__boxed_5750_; size_t v_sz_boxed_5751_; size_t v_i_boxed_5752_; lean_object* v_res_5753_; 
v___x_36091__boxed_5750_ = lean_unbox(v___x_5738_);
v_sz_boxed_5751_ = lean_unbox_usize(v_sz_5740_);
lean_dec(v_sz_5740_);
v_i_boxed_5752_ = lean_unbox_usize(v_i_5741_);
lean_dec(v_i_5741_);
v_res_5753_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged_spec__1(v_fst_5736_, v_snd_5737_, v___x_36091__boxed_5750_, v_as_5739_, v_sz_boxed_5751_, v_i_boxed_5752_, v_b_5742_, v___y_5743_, v___y_5744_, v___y_5745_, v___y_5746_, v___y_5747_, v___y_5748_);
lean_dec_ref(v___y_5747_);
lean_dec(v___y_5746_);
lean_dec(v___y_5745_);
lean_dec(v___y_5744_);
lean_dec_ref(v___y_5743_);
lean_dec_ref(v_as_5739_);
lean_dec_ref(v_snd_5737_);
lean_dec_ref(v_fst_5736_);
return v_res_5753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0(lean_object* v_val_5756_, lean_object* v_importArts_5757_, lean_object* v_fst_5758_, lean_object* v_as_5759_, size_t v_sz_5760_, size_t v_i_5761_, lean_object* v_b_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_, lean_object* v___y_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_){
_start:
{
lean_object* v_a_5771_; lean_object* v_a_5772_; lean_object* v_a_5777_; lean_object* v_a_5778_; lean_object* v_a_5781_; lean_object* v_a_5782_; uint8_t v___x_5784_; 
v___x_5784_ = lean_usize_dec_lt(v_i_5761_, v_sz_5760_);
if (v___x_5784_ == 0)
{
lean_object* v___x_5785_; 
lean_dec_ref(v___y_5763_);
v___x_5785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5785_, 0, v_b_5762_);
lean_ctor_set(v___x_5785_, 1, v___y_5768_);
return v___x_5785_;
}
else
{
lean_object* v_snd_5786_; lean_object* v___x_5788_; uint8_t v_isShared_5789_; uint8_t v_isSharedCheck_5857_; 
v_snd_5786_ = lean_ctor_get(v_b_5762_, 1);
v_isSharedCheck_5857_ = !lean_is_exclusive(v_b_5762_);
if (v_isSharedCheck_5857_ == 0)
{
lean_object* v_unused_5858_; 
v_unused_5858_ = lean_ctor_get(v_b_5762_, 0);
lean_dec(v_unused_5858_);
v___x_5788_ = v_b_5762_;
v_isShared_5789_ = v_isSharedCheck_5857_;
goto v_resetjp_5787_;
}
else
{
lean_inc(v_snd_5786_);
lean_dec(v_b_5762_);
v___x_5788_ = lean_box(0);
v_isShared_5789_ = v_isSharedCheck_5857_;
goto v_resetjp_5787_;
}
v_resetjp_5787_:
{
lean_object* v_toContext_5790_; lean_object* v___x_5791_; lean_object* v_a_5792_; lean_object* v___x_5793_; 
v_toContext_5790_ = lean_ctor_get(v___y_5767_, 1);
v___x_5791_ = lean_box(0);
v_a_5792_ = lean_array_uget_borrowed(v_as_5759_, v_i_5761_);
lean_inc(v_a_5792_);
v___x_5793_ = l_Lake_Workspace_findModule_x3f(v_a_5792_, v_toContext_5790_);
if (lean_obj_tag(v___x_5793_) == 0)
{
lean_object* v___x_5795_; 
if (v_isShared_5789_ == 0)
{
lean_ctor_set(v___x_5788_, 0, v___x_5791_);
v___x_5795_ = v___x_5788_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5796_; 
v_reuseFailAlloc_5796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5796_, 0, v___x_5791_);
lean_ctor_set(v_reuseFailAlloc_5796_, 1, v_snd_5786_);
v___x_5795_ = v_reuseFailAlloc_5796_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
v_a_5771_ = v___x_5795_;
v_a_5772_ = v___y_5768_;
goto v___jp_5770_;
}
}
else
{
lean_object* v___x_5798_; uint8_t v_isShared_5799_; uint8_t v_isSharedCheck_5855_; 
v_isSharedCheck_5855_ = !lean_is_exclusive(v___x_5793_);
if (v_isSharedCheck_5855_ == 0)
{
lean_object* v_unused_5856_; 
v_unused_5856_ = lean_ctor_get(v___x_5793_, 0);
lean_dec(v_unused_5856_);
v___x_5798_ = v___x_5793_;
v_isShared_5799_ = v_isSharedCheck_5855_;
goto v_resetjp_5797_;
}
else
{
lean_dec(v___x_5793_);
v___x_5798_ = lean_box(0);
v_isShared_5799_ = v_isSharedCheck_5855_;
goto v_resetjp_5797_;
}
v_resetjp_5797_:
{
lean_object* v___x_5800_; 
lean_inc_ref(v___y_5763_);
v___x_5800_ = l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(v_val_5756_, v_importArts_5757_, v_a_5792_, v___y_5763_, v___y_5764_, v___y_5765_, v___y_5766_, v___y_5767_, v___y_5768_);
if (lean_obj_tag(v___x_5800_) == 0)
{
lean_object* v_a_5801_; 
v_a_5801_ = lean_ctor_get(v___x_5800_, 0);
lean_inc(v_a_5801_);
if (lean_obj_tag(v_a_5801_) == 1)
{
lean_object* v_val_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5847_; 
lean_del_object(v___x_5788_);
v_val_5802_ = lean_ctor_get(v_a_5801_, 0);
v_isSharedCheck_5847_ = !lean_is_exclusive(v_a_5801_);
if (v_isSharedCheck_5847_ == 0)
{
v___x_5804_ = v_a_5801_;
v_isShared_5805_ = v_isSharedCheck_5847_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_val_5802_);
lean_dec(v_a_5801_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5847_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
lean_object* v_snd_5806_; lean_object* v_a_5807_; lean_object* v_fst_5808_; lean_object* v___x_5810_; uint8_t v_isShared_5811_; uint8_t v_isSharedCheck_5845_; 
v_snd_5806_ = lean_ctor_get(v_val_5802_, 1);
lean_inc(v_snd_5806_);
v_a_5807_ = lean_ctor_get(v___x_5800_, 1);
lean_inc(v_a_5807_);
lean_dec_ref_known(v___x_5800_, 2);
v_fst_5808_ = lean_ctor_get(v_val_5802_, 0);
v_isSharedCheck_5845_ = !lean_is_exclusive(v_val_5802_);
if (v_isSharedCheck_5845_ == 0)
{
lean_object* v_unused_5846_; 
v_unused_5846_ = lean_ctor_get(v_val_5802_, 1);
lean_dec(v_unused_5846_);
v___x_5810_ = v_val_5802_;
v_isShared_5811_ = v_isSharedCheck_5845_;
goto v_resetjp_5809_;
}
else
{
lean_inc(v_fst_5808_);
lean_dec(v_val_5802_);
v___x_5810_ = lean_box(0);
v_isShared_5811_ = v_isSharedCheck_5845_;
goto v_resetjp_5809_;
}
v_resetjp_5809_:
{
lean_object* v_importedDigests_5812_; lean_object* v_moduleDigest_5813_; lean_object* v___x_5814_; lean_object* v___x_5816_; 
v_importedDigests_5812_ = lean_ctor_get(v_fst_5758_, 4);
v_moduleDigest_5813_ = lean_ctor_get(v_snd_5806_, 0);
lean_inc_ref_n(v_moduleDigest_5813_, 2);
lean_dec(v_snd_5806_);
v___x_5814_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_importedDigests_5812_, v_a_5792_);
if (v_isShared_5805_ == 0)
{
lean_ctor_set(v___x_5804_, 0, v_moduleDigest_5813_);
v___x_5816_ = v___x_5804_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5844_; 
v_reuseFailAlloc_5844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5844_, 0, v_moduleDigest_5813_);
v___x_5816_ = v_reuseFailAlloc_5844_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
uint8_t v___x_5817_; 
v___x_5817_ = l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1(v___x_5814_, v___x_5816_);
lean_dec_ref(v___x_5816_);
lean_dec(v___x_5814_);
if (v___x_5817_ == 0)
{
lean_object* v___x_5818_; lean_object* v___x_5820_; 
lean_dec_ref(v_moduleDigest_5813_);
lean_dec(v_fst_5808_);
lean_del_object(v___x_5798_);
lean_dec_ref(v___y_5763_);
v___x_5818_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0___closed__0));
if (v_isShared_5811_ == 0)
{
lean_ctor_set(v___x_5810_, 1, v_snd_5786_);
lean_ctor_set(v___x_5810_, 0, v___x_5818_);
v___x_5820_ = v___x_5810_;
goto v_reusejp_5819_;
}
else
{
lean_object* v_reuseFailAlloc_5821_; 
v_reuseFailAlloc_5821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5821_, 0, v___x_5818_);
lean_ctor_set(v_reuseFailAlloc_5821_, 1, v_snd_5786_);
v___x_5820_ = v_reuseFailAlloc_5821_;
goto v_reusejp_5819_;
}
v_reusejp_5819_:
{
v_a_5777_ = v___x_5820_;
v_a_5778_ = v_a_5807_;
goto v___jp_5776_;
}
}
else
{
lean_object* v___x_5822_; 
lean_inc_ref(v___y_5763_);
v___x_5822_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(v_val_5756_, v_fst_5808_, v___y_5763_, v___y_5764_, v___y_5765_, v___y_5766_, v___y_5767_, v_a_5807_);
if (lean_obj_tag(v___x_5822_) == 0)
{
lean_object* v_a_5823_; lean_object* v_a_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5828_; 
v_a_5823_ = lean_ctor_get(v___x_5822_, 0);
lean_inc(v_a_5823_);
v_a_5824_ = lean_ctor_get(v___x_5822_, 1);
lean_inc(v_a_5824_);
lean_dec_ref_known(v___x_5822_, 2);
lean_inc(v_a_5792_);
v___x_5825_ = l_Lean_ModuleUsage_nameToJson(v_a_5792_);
v___x_5826_ = l_Lean_ModuleUsage_Digest_hex(v_a_5823_);
lean_dec(v_a_5823_);
if (v_isShared_5799_ == 0)
{
lean_ctor_set_tag(v___x_5798_, 3);
lean_ctor_set(v___x_5798_, 0, v___x_5826_);
v___x_5828_ = v___x_5798_;
goto v_reusejp_5827_;
}
else
{
lean_object* v_reuseFailAlloc_5841_; 
v_reuseFailAlloc_5841_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5841_, 0, v___x_5826_);
v___x_5828_ = v_reuseFailAlloc_5841_;
goto v_reusejp_5827_;
}
v_reusejp_5827_:
{
lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; lean_object* v___x_5839_; 
v___x_5829_ = l_Lean_ModuleUsage_Digest_hex(v_moduleDigest_5813_);
lean_dec_ref(v_moduleDigest_5813_);
v___x_5830_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5830_, 0, v___x_5829_);
v___x_5831_ = lean_unsigned_to_nat(3u);
v___x_5832_ = lean_mk_empty_array_with_capacity(v___x_5831_);
v___x_5833_ = lean_array_push(v___x_5832_, v___x_5825_);
v___x_5834_ = lean_array_push(v___x_5833_, v___x_5828_);
v___x_5835_ = lean_array_push(v___x_5834_, v___x_5830_);
v___x_5836_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5836_, 0, v___x_5835_);
v___x_5837_ = lean_array_push(v_snd_5786_, v___x_5836_);
if (v_isShared_5811_ == 0)
{
lean_ctor_set(v___x_5810_, 1, v___x_5837_);
lean_ctor_set(v___x_5810_, 0, v___x_5791_);
v___x_5839_ = v___x_5810_;
goto v_reusejp_5838_;
}
else
{
lean_object* v_reuseFailAlloc_5840_; 
v_reuseFailAlloc_5840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5840_, 0, v___x_5791_);
lean_ctor_set(v_reuseFailAlloc_5840_, 1, v___x_5837_);
v___x_5839_ = v_reuseFailAlloc_5840_;
goto v_reusejp_5838_;
}
v_reusejp_5838_:
{
v_a_5771_ = v___x_5839_;
v_a_5772_ = v_a_5824_;
goto v___jp_5770_;
}
}
}
else
{
lean_object* v_a_5842_; lean_object* v_a_5843_; 
lean_dec_ref(v_moduleDigest_5813_);
lean_del_object(v___x_5810_);
lean_del_object(v___x_5798_);
lean_dec(v_snd_5786_);
lean_dec_ref(v___y_5763_);
v_a_5842_ = lean_ctor_get(v___x_5822_, 0);
lean_inc(v_a_5842_);
v_a_5843_ = lean_ctor_get(v___x_5822_, 1);
lean_inc(v_a_5843_);
lean_dec_ref_known(v___x_5822_, 2);
v_a_5781_ = v_a_5842_;
v_a_5782_ = v_a_5843_;
goto v___jp_5780_;
}
}
}
}
}
}
else
{
lean_object* v_a_5848_; lean_object* v___x_5849_; lean_object* v___x_5851_; 
lean_dec(v_a_5801_);
lean_del_object(v___x_5798_);
lean_dec_ref(v___y_5763_);
v_a_5848_ = lean_ctor_get(v___x_5800_, 1);
lean_inc(v_a_5848_);
lean_dec_ref_known(v___x_5800_, 2);
v___x_5849_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0___closed__0));
if (v_isShared_5789_ == 0)
{
lean_ctor_set(v___x_5788_, 0, v___x_5849_);
v___x_5851_ = v___x_5788_;
goto v_reusejp_5850_;
}
else
{
lean_object* v_reuseFailAlloc_5852_; 
v_reuseFailAlloc_5852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5852_, 0, v___x_5849_);
lean_ctor_set(v_reuseFailAlloc_5852_, 1, v_snd_5786_);
v___x_5851_ = v_reuseFailAlloc_5852_;
goto v_reusejp_5850_;
}
v_reusejp_5850_:
{
v_a_5777_ = v___x_5851_;
v_a_5778_ = v_a_5848_;
goto v___jp_5776_;
}
}
}
else
{
lean_object* v_a_5853_; lean_object* v_a_5854_; 
lean_del_object(v___x_5798_);
lean_del_object(v___x_5788_);
lean_dec(v_snd_5786_);
lean_dec_ref(v___y_5763_);
v_a_5853_ = lean_ctor_get(v___x_5800_, 0);
lean_inc(v_a_5853_);
v_a_5854_ = lean_ctor_get(v___x_5800_, 1);
lean_inc(v_a_5854_);
lean_dec_ref_known(v___x_5800_, 2);
v_a_5781_ = v_a_5853_;
v_a_5782_ = v_a_5854_;
goto v___jp_5780_;
}
}
}
}
}
v___jp_5770_:
{
size_t v___x_5773_; size_t v___x_5774_; 
v___x_5773_ = ((size_t)1ULL);
v___x_5774_ = lean_usize_add(v_i_5761_, v___x_5773_);
v_i_5761_ = v___x_5774_;
v_b_5762_ = v_a_5771_;
v___y_5768_ = v_a_5772_;
goto _start;
}
v___jp_5776_:
{
lean_object* v___x_5779_; 
v___x_5779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5779_, 0, v_a_5777_);
lean_ctor_set(v___x_5779_, 1, v_a_5778_);
return v___x_5779_;
}
v___jp_5780_:
{
lean_object* v___x_5783_; 
v___x_5783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5783_, 0, v_a_5781_);
lean_ctor_set(v___x_5783_, 1, v_a_5782_);
return v___x_5783_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0___boxed(lean_object* v_val_5859_, lean_object* v_importArts_5860_, lean_object* v_fst_5861_, lean_object* v_as_5862_, lean_object* v_sz_5863_, lean_object* v_i_5864_, lean_object* v_b_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_, lean_object* v___y_5871_, lean_object* v___y_5872_){
_start:
{
size_t v_sz_boxed_5873_; size_t v_i_boxed_5874_; lean_object* v_res_5875_; 
v_sz_boxed_5873_ = lean_unbox_usize(v_sz_5863_);
lean_dec(v_sz_5863_);
v_i_boxed_5874_ = lean_unbox_usize(v_i_5864_);
lean_dec(v_i_5864_);
v_res_5875_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0(v_val_5859_, v_importArts_5860_, v_fst_5861_, v_as_5862_, v_sz_boxed_5873_, v_i_boxed_5874_, v_b_5865_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_);
lean_dec_ref(v___y_5870_);
lean_dec(v___y_5869_);
lean_dec(v___y_5868_);
lean_dec(v___y_5867_);
lean_dec_ref(v_as_5862_);
lean_dec_ref(v_fst_5861_);
lean_dec(v_importArts_5860_);
lean_dec(v_val_5859_);
return v_res_5875_;
}
}
static lean_object* _init_l_Lake_Module_writeUsekey___closed__0(void){
_start:
{
lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; 
v___x_5876_ = lean_box(0);
v___x_5877_ = lean_unsigned_to_nat(16u);
v___x_5878_ = lean_mk_array(v___x_5877_, v___x_5876_);
return v___x_5878_;
}
}
static lean_object* _init_l_Lake_Module_writeUsekey___closed__1(void){
_start:
{
lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; 
v___x_5879_ = lean_obj_once(&l_Lake_Module_writeUsekey___closed__0, &l_Lake_Module_writeUsekey___closed__0_once, _init_l_Lake_Module_writeUsekey___closed__0);
v___x_5880_ = lean_unsigned_to_nat(0u);
v___x_5881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5881_, 0, v___x_5880_);
lean_ctor_set(v___x_5881_, 1, v___x_5879_);
return v___x_5881_;
}
}
static lean_object* _init_l_Lake_Module_writeUsekey___closed__4(void){
_start:
{
lean_object* v___x_5887_; lean_object* v___x_5888_; 
v___x_5887_ = l_Lean_ModuleUsage_usageVersion;
v___x_5888_ = l_Lean_JsonNumber_fromNat(v___x_5887_);
return v___x_5888_;
}
}
static lean_object* _init_l_Lake_Module_writeUsekey___closed__5(void){
_start:
{
lean_object* v___x_5889_; lean_object* v___x_5890_; 
v___x_5889_ = lean_obj_once(&l_Lake_Module_writeUsekey___closed__4, &l_Lake_Module_writeUsekey___closed__4_once, _init_l_Lake_Module_writeUsekey___closed__4);
v___x_5890_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5890_, 0, v___x_5889_);
return v___x_5890_;
}
}
static lean_object* _init_l_Lake_Module_writeUsekey___closed__6(void){
_start:
{
lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; 
v___x_5891_ = lean_obj_once(&l_Lake_Module_writeUsekey___closed__5, &l_Lake_Module_writeUsekey___closed__5_once, _init_l_Lake_Module_writeUsekey___closed__5);
v___x_5892_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_parseUsageSidecar_parse___redArg___closed__3));
v___x_5893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5893_, 0, v___x_5892_);
lean_ctor_set(v___x_5893_, 1, v___x_5891_);
return v___x_5893_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_writeUsekey(lean_object* v_mod_5894_, lean_object* v_presetup_5895_, lean_object* v_importArts_5896_, lean_object* v_modsysBefore_5897_, lean_object* v_a_5898_, lean_object* v_a_5899_, lean_object* v_a_5900_, lean_object* v_a_5901_, lean_object* v_a_5902_, lean_object* v_a_5903_){
_start:
{
lean_object* v_lib_5905_; lean_object* v_pkg_5906_; lean_object* v_config_5907_; lean_object* v_name_5908_; lean_object* v___x_5910_; uint8_t v_isShared_5911_; uint8_t v_isSharedCheck_6144_; 
v_lib_5905_ = lean_ctor_get(v_mod_5894_, 0);
v_pkg_5906_ = lean_ctor_get(v_lib_5905_, 0);
lean_inc_ref(v_pkg_5906_);
v_config_5907_ = lean_ctor_get(v_pkg_5906_, 6);
lean_inc_ref(v_config_5907_);
v_name_5908_ = lean_ctor_get(v_mod_5894_, 1);
v_isSharedCheck_6144_ = !lean_is_exclusive(v_mod_5894_);
if (v_isSharedCheck_6144_ == 0)
{
lean_object* v_unused_6145_; 
v_unused_6145_ = lean_ctor_get(v_mod_5894_, 0);
lean_dec(v_unused_6145_);
v___x_5910_ = v_mod_5894_;
v_isShared_5911_ = v_isSharedCheck_6144_;
goto v_resetjp_5909_;
}
else
{
lean_inc(v_name_5908_);
lean_dec(v_mod_5894_);
v___x_5910_ = lean_box(0);
v_isShared_5911_ = v_isSharedCheck_6144_;
goto v_resetjp_5909_;
}
v_resetjp_5909_:
{
lean_object* v_dir_5912_; lean_object* v_buildDir_5913_; lean_object* v_leanLibDir_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; 
v_dir_5912_ = lean_ctor_get(v_pkg_5906_, 4);
lean_inc_ref(v_dir_5912_);
lean_dec_ref(v_pkg_5906_);
v_buildDir_5913_ = lean_ctor_get(v_config_5907_, 5);
lean_inc_ref(v_buildDir_5913_);
v_leanLibDir_5914_ = lean_ctor_get(v_config_5907_, 6);
lean_inc_ref(v_leanLibDir_5914_);
lean_dec_ref(v_config_5907_);
v___x_5915_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1));
v___x_5916_ = l_System_FilePath_normalize(v_buildDir_5913_);
v___x_5917_ = l_Lake_joinRelative(v_dir_5912_, v___x_5916_);
v___x_5918_ = l_System_FilePath_normalize(v_leanLibDir_5914_);
v___x_5919_ = l_Lake_joinRelative(v___x_5917_, v___x_5918_);
lean_inc(v_name_5908_);
v___x_5920_ = l_Lean_modToFilePath(v___x_5919_, v_name_5908_, v___x_5915_);
v___x_5921_ = lean_box(0);
lean_inc_ref(v_a_5898_);
v___x_5922_ = l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage(v___x_5920_, v___x_5921_, v_a_5898_, v_a_5899_, v_a_5900_, v_a_5901_, v_a_5902_, v_a_5903_);
if (lean_obj_tag(v___x_5922_) == 0)
{
lean_object* v_a_5923_; 
v_a_5923_ = lean_ctor_get(v___x_5922_, 0);
lean_inc(v_a_5923_);
if (lean_obj_tag(v_a_5923_) == 1)
{
lean_object* v_val_5924_; lean_object* v___x_5926_; uint8_t v_isShared_5927_; uint8_t v_isSharedCheck_6124_; 
v_val_5924_ = lean_ctor_get(v_a_5923_, 0);
v_isSharedCheck_6124_ = !lean_is_exclusive(v_a_5923_);
if (v_isSharedCheck_6124_ == 0)
{
v___x_5926_ = v_a_5923_;
v_isShared_5927_ = v_isSharedCheck_6124_;
goto v_resetjp_5925_;
}
else
{
lean_inc(v_val_5924_);
lean_dec(v_a_5923_);
v___x_5926_ = lean_box(0);
v_isShared_5927_ = v_isSharedCheck_6124_;
goto v_resetjp_5925_;
}
v_resetjp_5925_:
{
lean_object* v_a_5928_; lean_object* v___x_5930_; uint8_t v_isShared_5931_; uint8_t v_isSharedCheck_6122_; 
v_a_5928_ = lean_ctor_get(v___x_5922_, 1);
v_isSharedCheck_6122_ = !lean_is_exclusive(v___x_5922_);
if (v_isSharedCheck_6122_ == 0)
{
lean_object* v_unused_6123_; 
v_unused_6123_ = lean_ctor_get(v___x_5922_, 0);
lean_dec(v_unused_6123_);
v___x_5930_ = v___x_5922_;
v_isShared_5931_ = v_isSharedCheck_6122_;
goto v_resetjp_5929_;
}
else
{
lean_inc(v_a_5928_);
lean_dec(v___x_5922_);
v___x_5930_ = lean_box(0);
v_isShared_5931_ = v_isSharedCheck_6122_;
goto v_resetjp_5929_;
}
v_resetjp_5929_:
{
lean_object* v_fst_5932_; lean_object* v_snd_5933_; lean_object* v___x_5935_; uint8_t v_isShared_5936_; uint8_t v_isSharedCheck_6121_; 
v_fst_5932_ = lean_ctor_get(v_val_5924_, 0);
v_snd_5933_ = lean_ctor_get(v_val_5924_, 1);
v_isSharedCheck_6121_ = !lean_is_exclusive(v_val_5924_);
if (v_isSharedCheck_6121_ == 0)
{
v___x_5935_ = v_val_5924_;
v_isShared_5936_ = v_isSharedCheck_6121_;
goto v_resetjp_5934_;
}
else
{
lean_inc(v_snd_5933_);
lean_inc(v_fst_5932_);
lean_dec(v_val_5924_);
v___x_5935_ = lean_box(0);
v_isShared_5936_ = v_isSharedCheck_6121_;
goto v_resetjp_5934_;
}
v_resetjp_5934_:
{
uint8_t v___x_5937_; 
v___x_5937_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure(v_fst_5932_, v_importArts_5896_);
if (v___x_5937_ == 0)
{
lean_object* v___x_5938_; lean_object* v___x_5940_; 
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec(v_fst_5932_);
lean_del_object(v___x_5926_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
lean_dec(v_importArts_5896_);
v___x_5938_ = lean_box(0);
if (v_isShared_5931_ == 0)
{
lean_ctor_set(v___x_5930_, 0, v___x_5938_);
v___x_5940_ = v___x_5930_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v___x_5938_);
lean_ctor_set(v_reuseFailAlloc_5941_, 1, v_a_5928_);
v___x_5940_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
return v___x_5940_;
}
}
else
{
lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; 
lean_del_object(v___x_5930_);
v___x_5942_ = lean_obj_once(&l_Lake_Module_writeUsekey___closed__1, &l_Lake_Module_writeUsekey___closed__1_once, _init_l_Lake_Module_writeUsekey___closed__1);
v___x_5943_ = lean_st_mk_ref(v___x_5942_);
lean_inc_ref(v_a_5898_);
lean_inc(v_importArts_5896_);
v___x_5944_ = l_Lake_modsysHash(v___x_5943_, v_importArts_5896_, v_a_5898_, v_a_5899_, v_a_5900_, v_a_5901_, v_a_5902_, v_a_5928_);
if (lean_obj_tag(v___x_5944_) == 0)
{
lean_object* v_a_5945_; lean_object* v_a_5946_; lean_object* v___x_5948_; uint8_t v_isShared_5949_; uint8_t v_isSharedCheck_6111_; 
v_a_5945_ = lean_ctor_get(v___x_5944_, 0);
v_a_5946_ = lean_ctor_get(v___x_5944_, 1);
v_isSharedCheck_6111_ = !lean_is_exclusive(v___x_5944_);
if (v_isSharedCheck_6111_ == 0)
{
v___x_5948_ = v___x_5944_;
v_isShared_5949_ = v_isSharedCheck_6111_;
goto v_resetjp_5947_;
}
else
{
lean_inc(v_a_5946_);
lean_inc(v_a_5945_);
lean_dec(v___x_5944_);
v___x_5948_ = lean_box(0);
v_isShared_5949_ = v_isSharedCheck_6111_;
goto v_resetjp_5947_;
}
v_resetjp_5947_:
{
uint8_t v___x_5950_; 
v___x_5950_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_a_5945_, v_modsysBefore_5897_);
if (v___x_5950_ == 0)
{
lean_object* v___x_5951_; lean_object* v___x_5953_; 
lean_dec(v_a_5945_);
lean_dec(v___x_5943_);
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec(v_fst_5932_);
lean_del_object(v___x_5926_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
lean_dec(v_importArts_5896_);
v___x_5951_ = lean_box(0);
if (v_isShared_5949_ == 0)
{
lean_ctor_set(v___x_5948_, 0, v___x_5951_);
v___x_5953_ = v___x_5948_;
goto v_reusejp_5952_;
}
else
{
lean_object* v_reuseFailAlloc_5954_; 
v_reuseFailAlloc_5954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5954_, 0, v___x_5951_);
lean_ctor_set(v_reuseFailAlloc_5954_, 1, v_a_5946_);
v___x_5953_ = v_reuseFailAlloc_5954_;
goto v_reusejp_5952_;
}
v_reusejp_5952_:
{
return v___x_5953_;
}
}
else
{
lean_object* v_importedClosures_5955_; lean_object* v_extra_5956_; lean_object* v___x_5958_; 
lean_del_object(v___x_5948_);
v_importedClosures_5955_ = lean_ctor_get(v_fst_5932_, 3);
v_extra_5956_ = lean_ctor_get(v_fst_5932_, 7);
lean_inc_ref(v_extra_5956_);
lean_inc(v_importedClosures_5955_);
if (v_isShared_5927_ == 0)
{
lean_ctor_set(v___x_5926_, 0, v_importedClosures_5955_);
v___x_5958_ = v___x_5926_;
goto v_reusejp_5957_;
}
else
{
lean_object* v_reuseFailAlloc_6110_; 
v_reuseFailAlloc_6110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6110_, 0, v_importedClosures_5955_);
v___x_5958_ = v_reuseFailAlloc_6110_;
goto v_reusejp_5957_;
}
v_reusejp_5957_:
{
lean_object* v___x_5959_; 
lean_inc_ref(v_a_5898_);
v___x_5959_ = l___private_Lake_Build_UsageCutoff_0__Lake_closureHash(v___x_5943_, v_presetup_5895_, v_importArts_5896_, v___x_5958_, v_a_5898_, v_a_5899_, v_a_5900_, v_a_5901_, v_a_5902_, v_a_5946_);
lean_dec_ref(v___x_5958_);
if (lean_obj_tag(v___x_5959_) == 0)
{
lean_object* v_a_5960_; 
v_a_5960_ = lean_ctor_get(v___x_5959_, 0);
lean_inc(v_a_5960_);
if (lean_obj_tag(v_a_5960_) == 1)
{
lean_object* v_a_5961_; lean_object* v_val_5962_; lean_object* v___x_5964_; uint8_t v_isShared_5965_; uint8_t v_isSharedCheck_6090_; 
v_a_5961_ = lean_ctor_get(v___x_5959_, 1);
lean_inc(v_a_5961_);
lean_dec_ref_known(v___x_5959_, 2);
v_val_5962_ = lean_ctor_get(v_a_5960_, 0);
v_isSharedCheck_6090_ = !lean_is_exclusive(v_a_5960_);
if (v_isSharedCheck_6090_ == 0)
{
v___x_5964_ = v_a_5960_;
v_isShared_5965_ = v_isSharedCheck_6090_;
goto v_resetjp_5963_;
}
else
{
lean_inc(v_val_5962_);
lean_dec(v_a_5960_);
v___x_5964_ = lean_box(0);
v_isShared_5965_ = v_isSharedCheck_6090_;
goto v_resetjp_5963_;
}
v_resetjp_5963_:
{
lean_object* v___x_5966_; size_t v_sz_5967_; size_t v___x_5968_; lean_object* v___x_5969_; 
v___x_5966_ = ((lean_object*)(l_Lake_Module_writeUsekey___closed__3));
v_sz_5967_ = lean_array_size(v_extra_5956_);
v___x_5968_ = ((size_t)0ULL);
lean_inc_ref(v_a_5898_);
v___x_5969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_writeUsekey_spec__0(v___x_5943_, v_importArts_5896_, v_fst_5932_, v_extra_5956_, v_sz_5967_, v___x_5968_, v___x_5966_, v_a_5898_, v_a_5899_, v_a_5900_, v_a_5901_, v_a_5902_, v_a_5961_);
lean_dec_ref(v_extra_5956_);
lean_dec(v_fst_5932_);
lean_dec(v_importArts_5896_);
if (lean_obj_tag(v___x_5969_) == 0)
{
lean_object* v_a_5970_; lean_object* v_fst_5971_; 
v_a_5970_ = lean_ctor_get(v___x_5969_, 0);
lean_inc(v_a_5970_);
v_fst_5971_ = lean_ctor_get(v_a_5970_, 0);
if (lean_obj_tag(v_fst_5971_) == 0)
{
lean_object* v_a_5972_; lean_object* v_snd_5973_; lean_object* v___x_5975_; uint8_t v_isShared_5976_; uint8_t v_isSharedCheck_6069_; 
v_a_5972_ = lean_ctor_get(v___x_5969_, 1);
lean_inc(v_a_5972_);
lean_dec_ref_known(v___x_5969_, 2);
v_snd_5973_ = lean_ctor_get(v_a_5970_, 1);
v_isSharedCheck_6069_ = !lean_is_exclusive(v_a_5970_);
if (v_isSharedCheck_6069_ == 0)
{
lean_object* v_unused_6070_; 
v_unused_6070_ = lean_ctor_get(v_a_5970_, 0);
lean_dec(v_unused_6070_);
v___x_5975_ = v_a_5970_;
v_isShared_5976_ = v_isSharedCheck_6069_;
goto v_resetjp_5974_;
}
else
{
lean_inc(v_snd_5973_);
lean_dec(v_a_5970_);
v___x_5975_ = lean_box(0);
v_isShared_5976_ = v_isSharedCheck_6069_;
goto v_resetjp_5974_;
}
v_resetjp_5974_:
{
lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; 
v___x_5977_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__2));
lean_inc(v_name_5908_);
v___x_5978_ = l_Lean_modToFilePath(v___x_5919_, v_name_5908_, v___x_5977_);
v___x_5979_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(v___x_5943_, v___x_5978_, v_a_5898_, v_a_5899_, v_a_5900_, v_a_5901_, v_a_5902_, v_a_5972_);
lean_dec(v___x_5943_);
if (lean_obj_tag(v___x_5979_) == 0)
{
lean_object* v_localTrace_5980_; lean_object* v_a_5981_; lean_object* v_a_5982_; lean_object* v___x_5984_; uint8_t v_isShared_5985_; uint8_t v_isSharedCheck_6059_; 
v_localTrace_5980_ = lean_ctor_get(v_presetup_5895_, 2);
v_a_5981_ = lean_ctor_get(v___x_5979_, 1);
v_a_5982_ = lean_ctor_get(v___x_5979_, 0);
v_isSharedCheck_6059_ = !lean_is_exclusive(v___x_5979_);
if (v_isSharedCheck_6059_ == 0)
{
v___x_5984_ = v___x_5979_;
v_isShared_5985_ = v_isSharedCheck_6059_;
goto v_resetjp_5983_;
}
else
{
lean_inc(v_a_5981_);
lean_inc(v_a_5982_);
lean_dec(v___x_5979_);
v___x_5984_ = lean_box(0);
v_isShared_5985_ = v_isSharedCheck_6059_;
goto v_resetjp_5983_;
}
v_resetjp_5983_:
{
uint64_t v_hash_5986_; lean_object* v_log_5987_; uint8_t v_action_5988_; uint8_t v_wantsRebuild_5989_; uint8_t v_canceled_5990_; lean_object* v_trace_5991_; lean_object* v_buildTime_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5996_; 
v_hash_5986_ = lean_ctor_get_uint64(v_localTrace_5980_, sizeof(void*)*3);
v_log_5987_ = lean_ctor_get(v_a_5981_, 0);
v_action_5988_ = lean_ctor_get_uint8(v_a_5981_, sizeof(void*)*3);
v_wantsRebuild_5989_ = lean_ctor_get_uint8(v_a_5981_, sizeof(void*)*3 + 1);
v_canceled_5990_ = lean_ctor_get_uint8(v_a_5981_, sizeof(void*)*3 + 2);
v_trace_5991_ = lean_ctor_get(v_a_5981_, 1);
v_buildTime_5992_ = lean_ctor_get(v_a_5981_, 2);
v___x_5993_ = lean_obj_once(&l_Lake_Module_writeUsekey___closed__6, &l_Lake_Module_writeUsekey___closed__6_once, _init_l_Lake_Module_writeUsekey___closed__6);
v___x_5994_ = l_Lean_ModuleUsage_Digest_hex(v_snd_5933_);
lean_dec(v_snd_5933_);
if (v_isShared_5965_ == 0)
{
lean_ctor_set_tag(v___x_5964_, 3);
lean_ctor_set(v___x_5964_, 0, v___x_5994_);
v___x_5996_ = v___x_5964_;
goto v_reusejp_5995_;
}
else
{
lean_object* v_reuseFailAlloc_6058_; 
v_reuseFailAlloc_6058_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6058_, 0, v___x_5994_);
v___x_5996_ = v_reuseFailAlloc_6058_;
goto v_reusejp_5995_;
}
v_reusejp_5995_:
{
lean_object* v___x_5998_; 
if (v_isShared_5976_ == 0)
{
lean_ctor_set(v___x_5975_, 1, v___x_5996_);
lean_ctor_set(v___x_5975_, 0, v___x_5915_);
v___x_5998_ = v___x_5975_;
goto v_reusejp_5997_;
}
else
{
lean_object* v_reuseFailAlloc_6057_; 
v_reuseFailAlloc_6057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6057_, 0, v___x_5915_);
lean_ctor_set(v_reuseFailAlloc_6057_, 1, v___x_5996_);
v___x_5998_ = v_reuseFailAlloc_6057_;
goto v_reusejp_5997_;
}
v_reusejp_5997_:
{
lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6003_; 
v___x_5999_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__0));
v___x_6000_ = l_Lake_lowerHexUInt64(v_hash_5986_);
v___x_6001_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6001_, 0, v___x_6000_);
if (v_isShared_5936_ == 0)
{
lean_ctor_set(v___x_5935_, 1, v___x_6001_);
lean_ctor_set(v___x_5935_, 0, v___x_5999_);
v___x_6003_ = v___x_5935_;
goto v_reusejp_6002_;
}
else
{
lean_object* v_reuseFailAlloc_6056_; 
v_reuseFailAlloc_6056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6056_, 0, v___x_5999_);
lean_ctor_set(v_reuseFailAlloc_6056_, 1, v___x_6001_);
v___x_6003_ = v_reuseFailAlloc_6056_;
goto v_reusejp_6002_;
}
v_reusejp_6002_:
{
lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6007_; 
v___x_6004_ = l_Lean_ModuleUsage_Digest_hex(v_a_5982_);
lean_dec(v_a_5982_);
v___x_6005_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6005_, 0, v___x_6004_);
if (v_isShared_5911_ == 0)
{
lean_ctor_set(v___x_5910_, 1, v___x_6005_);
lean_ctor_set(v___x_5910_, 0, v___x_5977_);
v___x_6007_ = v___x_5910_;
goto v_reusejp_6006_;
}
else
{
lean_object* v_reuseFailAlloc_6055_; 
v_reuseFailAlloc_6055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6055_, 0, v___x_5977_);
lean_ctor_set(v_reuseFailAlloc_6055_, 1, v___x_6005_);
v___x_6007_ = v_reuseFailAlloc_6055_;
goto v_reusejp_6006_;
}
v_reusejp_6006_:
{
lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6008_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__3));
v___x_6009_ = l_Lean_ModuleUsage_Digest_hex(v_a_5945_);
lean_dec(v_a_5945_);
v___x_6010_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6010_, 0, v___x_6009_);
v___x_6011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6011_, 0, v___x_6008_);
lean_ctor_set(v___x_6011_, 1, v___x_6010_);
v___x_6012_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__6));
v___x_6013_ = l_Lean_ModuleUsage_Digest_hex(v_val_5962_);
lean_dec(v_val_5962_);
v___x_6014_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6014_, 0, v___x_6013_);
v___x_6015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6015_, 0, v___x_6012_);
lean_ctor_set(v___x_6015_, 1, v___x_6014_);
v___x_6016_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsageSidecar___lam__8___closed__2));
v___x_6017_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6017_, 0, v_snd_5973_);
v___x_6018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6018_, 0, v___x_6016_);
lean_ctor_set(v___x_6018_, 1, v___x_6017_);
v___x_6019_ = lean_box(0);
v___x_6020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6020_, 0, v___x_6018_);
lean_ctor_set(v___x_6020_, 1, v___x_6019_);
v___x_6021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6021_, 0, v___x_6015_);
lean_ctor_set(v___x_6021_, 1, v___x_6020_);
v___x_6022_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6022_, 0, v___x_6011_);
lean_ctor_set(v___x_6022_, 1, v___x_6021_);
v___x_6023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6023_, 0, v___x_6007_);
lean_ctor_set(v___x_6023_, 1, v___x_6022_);
v___x_6024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6024_, 0, v___x_6003_);
lean_ctor_set(v___x_6024_, 1, v___x_6023_);
v___x_6025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6025_, 0, v___x_5998_);
lean_ctor_set(v___x_6025_, 1, v___x_6024_);
v___x_6026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6026_, 0, v___x_5993_);
lean_ctor_set(v___x_6026_, 1, v___x_6025_);
v___x_6027_ = l_Lean_Json_mkObj(v___x_6026_);
lean_dec_ref_known(v___x_6026_, 2);
v___x_6028_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___closed__0));
v___x_6029_ = l_Lean_modToFilePath(v___x_5919_, v_name_5908_, v___x_6028_);
lean_dec_ref(v___x_5919_);
v___x_6030_ = l_Lean_Json_compress(v___x_6027_);
v___x_6031_ = l_IO_FS_writeFile(v___x_6029_, v___x_6030_);
lean_dec_ref(v___x_6030_);
lean_dec_ref(v___x_6029_);
if (lean_obj_tag(v___x_6031_) == 0)
{
lean_object* v_a_6032_; lean_object* v___x_6034_; 
v_a_6032_ = lean_ctor_get(v___x_6031_, 0);
lean_inc(v_a_6032_);
lean_dec_ref_known(v___x_6031_, 1);
if (v_isShared_5985_ == 0)
{
lean_ctor_set(v___x_5984_, 0, v_a_6032_);
v___x_6034_ = v___x_5984_;
goto v_reusejp_6033_;
}
else
{
lean_object* v_reuseFailAlloc_6035_; 
v_reuseFailAlloc_6035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6035_, 0, v_a_6032_);
lean_ctor_set(v_reuseFailAlloc_6035_, 1, v_a_5981_);
v___x_6034_ = v_reuseFailAlloc_6035_;
goto v_reusejp_6033_;
}
v_reusejp_6033_:
{
return v___x_6034_;
}
}
else
{
lean_object* v___x_6037_; uint8_t v_isShared_6038_; uint8_t v_isSharedCheck_6051_; 
lean_inc(v_buildTime_5992_);
lean_inc_ref(v_trace_5991_);
lean_inc_ref(v_log_5987_);
v_isSharedCheck_6051_ = !lean_is_exclusive(v_a_5981_);
if (v_isSharedCheck_6051_ == 0)
{
lean_object* v_unused_6052_; lean_object* v_unused_6053_; lean_object* v_unused_6054_; 
v_unused_6052_ = lean_ctor_get(v_a_5981_, 2);
lean_dec(v_unused_6052_);
v_unused_6053_ = lean_ctor_get(v_a_5981_, 1);
lean_dec(v_unused_6053_);
v_unused_6054_ = lean_ctor_get(v_a_5981_, 0);
lean_dec(v_unused_6054_);
v___x_6037_ = v_a_5981_;
v_isShared_6038_ = v_isSharedCheck_6051_;
goto v_resetjp_6036_;
}
else
{
lean_dec(v_a_5981_);
v___x_6037_ = lean_box(0);
v_isShared_6038_ = v_isSharedCheck_6051_;
goto v_resetjp_6036_;
}
v_resetjp_6036_:
{
lean_object* v_a_6039_; lean_object* v___x_6040_; uint8_t v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6046_; 
v_a_6039_ = lean_ctor_get(v___x_6031_, 0);
lean_inc(v_a_6039_);
lean_dec_ref_known(v___x_6031_, 1);
v___x_6040_ = lean_io_error_to_string(v_a_6039_);
v___x_6041_ = 3;
v___x_6042_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6042_, 0, v___x_6040_);
lean_ctor_set_uint8(v___x_6042_, sizeof(void*)*1, v___x_6041_);
v___x_6043_ = lean_array_get_size(v_log_5987_);
v___x_6044_ = lean_array_push(v_log_5987_, v___x_6042_);
if (v_isShared_6038_ == 0)
{
lean_ctor_set(v___x_6037_, 0, v___x_6044_);
v___x_6046_ = v___x_6037_;
goto v_reusejp_6045_;
}
else
{
lean_object* v_reuseFailAlloc_6050_; 
v_reuseFailAlloc_6050_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_6050_, 0, v___x_6044_);
lean_ctor_set(v_reuseFailAlloc_6050_, 1, v_trace_5991_);
lean_ctor_set(v_reuseFailAlloc_6050_, 2, v_buildTime_5992_);
lean_ctor_set_uint8(v_reuseFailAlloc_6050_, sizeof(void*)*3, v_action_5988_);
lean_ctor_set_uint8(v_reuseFailAlloc_6050_, sizeof(void*)*3 + 1, v_wantsRebuild_5989_);
lean_ctor_set_uint8(v_reuseFailAlloc_6050_, sizeof(void*)*3 + 2, v_canceled_5990_);
v___x_6046_ = v_reuseFailAlloc_6050_;
goto v_reusejp_6045_;
}
v_reusejp_6045_:
{
lean_object* v___x_6048_; 
if (v_isShared_5985_ == 0)
{
lean_ctor_set_tag(v___x_5984_, 1);
lean_ctor_set(v___x_5984_, 1, v___x_6046_);
lean_ctor_set(v___x_5984_, 0, v___x_6043_);
v___x_6048_ = v___x_5984_;
goto v_reusejp_6047_;
}
else
{
lean_object* v_reuseFailAlloc_6049_; 
v_reuseFailAlloc_6049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6049_, 0, v___x_6043_);
lean_ctor_set(v_reuseFailAlloc_6049_, 1, v___x_6046_);
v___x_6048_ = v_reuseFailAlloc_6049_;
goto v_reusejp_6047_;
}
v_reusejp_6047_:
{
return v___x_6048_;
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
lean_object* v_a_6060_; lean_object* v_a_6061_; lean_object* v___x_6063_; uint8_t v_isShared_6064_; uint8_t v_isSharedCheck_6068_; 
lean_del_object(v___x_5975_);
lean_dec(v_snd_5973_);
lean_del_object(v___x_5964_);
lean_dec(v_val_5962_);
lean_dec(v_a_5945_);
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
v_a_6060_ = lean_ctor_get(v___x_5979_, 0);
v_a_6061_ = lean_ctor_get(v___x_5979_, 1);
v_isSharedCheck_6068_ = !lean_is_exclusive(v___x_5979_);
if (v_isSharedCheck_6068_ == 0)
{
v___x_6063_ = v___x_5979_;
v_isShared_6064_ = v_isSharedCheck_6068_;
goto v_resetjp_6062_;
}
else
{
lean_inc(v_a_6061_);
lean_inc(v_a_6060_);
lean_dec(v___x_5979_);
v___x_6063_ = lean_box(0);
v_isShared_6064_ = v_isSharedCheck_6068_;
goto v_resetjp_6062_;
}
v_resetjp_6062_:
{
lean_object* v___x_6066_; 
if (v_isShared_6064_ == 0)
{
v___x_6066_ = v___x_6063_;
goto v_reusejp_6065_;
}
else
{
lean_object* v_reuseFailAlloc_6067_; 
v_reuseFailAlloc_6067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6067_, 0, v_a_6060_);
lean_ctor_set(v_reuseFailAlloc_6067_, 1, v_a_6061_);
v___x_6066_ = v_reuseFailAlloc_6067_;
goto v_reusejp_6065_;
}
v_reusejp_6065_:
{
return v___x_6066_;
}
}
}
}
}
else
{
lean_object* v_a_6071_; lean_object* v___x_6073_; uint8_t v_isShared_6074_; uint8_t v_isSharedCheck_6079_; 
lean_inc_ref(v_fst_5971_);
lean_dec(v_a_5970_);
lean_del_object(v___x_5964_);
lean_dec(v_val_5962_);
lean_dec(v_a_5945_);
lean_dec(v___x_5943_);
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
v_a_6071_ = lean_ctor_get(v___x_5969_, 1);
v_isSharedCheck_6079_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_6079_ == 0)
{
lean_object* v_unused_6080_; 
v_unused_6080_ = lean_ctor_get(v___x_5969_, 0);
lean_dec(v_unused_6080_);
v___x_6073_ = v___x_5969_;
v_isShared_6074_ = v_isSharedCheck_6079_;
goto v_resetjp_6072_;
}
else
{
lean_inc(v_a_6071_);
lean_dec(v___x_5969_);
v___x_6073_ = lean_box(0);
v_isShared_6074_ = v_isSharedCheck_6079_;
goto v_resetjp_6072_;
}
v_resetjp_6072_:
{
lean_object* v_val_6075_; lean_object* v___x_6077_; 
v_val_6075_ = lean_ctor_get(v_fst_5971_, 0);
lean_inc(v_val_6075_);
lean_dec_ref_known(v_fst_5971_, 1);
if (v_isShared_6074_ == 0)
{
lean_ctor_set(v___x_6073_, 0, v_val_6075_);
v___x_6077_ = v___x_6073_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6078_; 
v_reuseFailAlloc_6078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6078_, 0, v_val_6075_);
lean_ctor_set(v_reuseFailAlloc_6078_, 1, v_a_6071_);
v___x_6077_ = v_reuseFailAlloc_6078_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
return v___x_6077_;
}
}
}
}
else
{
lean_object* v_a_6081_; lean_object* v_a_6082_; lean_object* v___x_6084_; uint8_t v_isShared_6085_; uint8_t v_isSharedCheck_6089_; 
lean_del_object(v___x_5964_);
lean_dec(v_val_5962_);
lean_dec(v_a_5945_);
lean_dec(v___x_5943_);
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
v_a_6081_ = lean_ctor_get(v___x_5969_, 0);
v_a_6082_ = lean_ctor_get(v___x_5969_, 1);
v_isSharedCheck_6089_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_6089_ == 0)
{
v___x_6084_ = v___x_5969_;
v_isShared_6085_ = v_isSharedCheck_6089_;
goto v_resetjp_6083_;
}
else
{
lean_inc(v_a_6082_);
lean_inc(v_a_6081_);
lean_dec(v___x_5969_);
v___x_6084_ = lean_box(0);
v_isShared_6085_ = v_isSharedCheck_6089_;
goto v_resetjp_6083_;
}
v_resetjp_6083_:
{
lean_object* v___x_6087_; 
if (v_isShared_6085_ == 0)
{
v___x_6087_ = v___x_6084_;
goto v_reusejp_6086_;
}
else
{
lean_object* v_reuseFailAlloc_6088_; 
v_reuseFailAlloc_6088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6088_, 0, v_a_6081_);
lean_ctor_set(v_reuseFailAlloc_6088_, 1, v_a_6082_);
v___x_6087_ = v_reuseFailAlloc_6088_;
goto v_reusejp_6086_;
}
v_reusejp_6086_:
{
return v___x_6087_;
}
}
}
}
}
else
{
lean_object* v_a_6091_; lean_object* v___x_6093_; uint8_t v_isShared_6094_; uint8_t v_isSharedCheck_6099_; 
lean_dec(v_a_5960_);
lean_dec_ref(v_extra_5956_);
lean_dec(v_a_5945_);
lean_dec(v___x_5943_);
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec(v_fst_5932_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
lean_dec(v_importArts_5896_);
v_a_6091_ = lean_ctor_get(v___x_5959_, 1);
v_isSharedCheck_6099_ = !lean_is_exclusive(v___x_5959_);
if (v_isSharedCheck_6099_ == 0)
{
lean_object* v_unused_6100_; 
v_unused_6100_ = lean_ctor_get(v___x_5959_, 0);
lean_dec(v_unused_6100_);
v___x_6093_ = v___x_5959_;
v_isShared_6094_ = v_isSharedCheck_6099_;
goto v_resetjp_6092_;
}
else
{
lean_inc(v_a_6091_);
lean_dec(v___x_5959_);
v___x_6093_ = lean_box(0);
v_isShared_6094_ = v_isSharedCheck_6099_;
goto v_resetjp_6092_;
}
v_resetjp_6092_:
{
lean_object* v___x_6095_; lean_object* v___x_6097_; 
v___x_6095_ = lean_box(0);
if (v_isShared_6094_ == 0)
{
lean_ctor_set(v___x_6093_, 0, v___x_6095_);
v___x_6097_ = v___x_6093_;
goto v_reusejp_6096_;
}
else
{
lean_object* v_reuseFailAlloc_6098_; 
v_reuseFailAlloc_6098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6098_, 0, v___x_6095_);
lean_ctor_set(v_reuseFailAlloc_6098_, 1, v_a_6091_);
v___x_6097_ = v_reuseFailAlloc_6098_;
goto v_reusejp_6096_;
}
v_reusejp_6096_:
{
return v___x_6097_;
}
}
}
}
else
{
lean_object* v_a_6101_; lean_object* v_a_6102_; lean_object* v___x_6104_; uint8_t v_isShared_6105_; uint8_t v_isSharedCheck_6109_; 
lean_dec_ref(v_extra_5956_);
lean_dec(v_a_5945_);
lean_dec(v___x_5943_);
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec(v_fst_5932_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
lean_dec(v_importArts_5896_);
v_a_6101_ = lean_ctor_get(v___x_5959_, 0);
v_a_6102_ = lean_ctor_get(v___x_5959_, 1);
v_isSharedCheck_6109_ = !lean_is_exclusive(v___x_5959_);
if (v_isSharedCheck_6109_ == 0)
{
v___x_6104_ = v___x_5959_;
v_isShared_6105_ = v_isSharedCheck_6109_;
goto v_resetjp_6103_;
}
else
{
lean_inc(v_a_6102_);
lean_inc(v_a_6101_);
lean_dec(v___x_5959_);
v___x_6104_ = lean_box(0);
v_isShared_6105_ = v_isSharedCheck_6109_;
goto v_resetjp_6103_;
}
v_resetjp_6103_:
{
lean_object* v___x_6107_; 
if (v_isShared_6105_ == 0)
{
v___x_6107_ = v___x_6104_;
goto v_reusejp_6106_;
}
else
{
lean_object* v_reuseFailAlloc_6108_; 
v_reuseFailAlloc_6108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6108_, 0, v_a_6101_);
lean_ctor_set(v_reuseFailAlloc_6108_, 1, v_a_6102_);
v___x_6107_ = v_reuseFailAlloc_6108_;
goto v_reusejp_6106_;
}
v_reusejp_6106_:
{
return v___x_6107_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6112_; lean_object* v_a_6113_; lean_object* v___x_6115_; uint8_t v_isShared_6116_; uint8_t v_isSharedCheck_6120_; 
lean_dec(v___x_5943_);
lean_del_object(v___x_5935_);
lean_dec(v_snd_5933_);
lean_dec(v_fst_5932_);
lean_del_object(v___x_5926_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
lean_dec(v_importArts_5896_);
v_a_6112_ = lean_ctor_get(v___x_5944_, 0);
v_a_6113_ = lean_ctor_get(v___x_5944_, 1);
v_isSharedCheck_6120_ = !lean_is_exclusive(v___x_5944_);
if (v_isSharedCheck_6120_ == 0)
{
v___x_6115_ = v___x_5944_;
v_isShared_6116_ = v_isSharedCheck_6120_;
goto v_resetjp_6114_;
}
else
{
lean_inc(v_a_6113_);
lean_inc(v_a_6112_);
lean_dec(v___x_5944_);
v___x_6115_ = lean_box(0);
v_isShared_6116_ = v_isSharedCheck_6120_;
goto v_resetjp_6114_;
}
v_resetjp_6114_:
{
lean_object* v___x_6118_; 
if (v_isShared_6116_ == 0)
{
v___x_6118_ = v___x_6115_;
goto v_reusejp_6117_;
}
else
{
lean_object* v_reuseFailAlloc_6119_; 
v_reuseFailAlloc_6119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6119_, 0, v_a_6112_);
lean_ctor_set(v_reuseFailAlloc_6119_, 1, v_a_6113_);
v___x_6118_ = v_reuseFailAlloc_6119_;
goto v_reusejp_6117_;
}
v_reusejp_6117_:
{
return v___x_6118_;
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
lean_object* v_a_6125_; lean_object* v___x_6127_; uint8_t v_isShared_6128_; uint8_t v_isSharedCheck_6133_; 
lean_dec(v_a_5923_);
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
lean_dec(v_importArts_5896_);
v_a_6125_ = lean_ctor_get(v___x_5922_, 1);
v_isSharedCheck_6133_ = !lean_is_exclusive(v___x_5922_);
if (v_isSharedCheck_6133_ == 0)
{
lean_object* v_unused_6134_; 
v_unused_6134_ = lean_ctor_get(v___x_5922_, 0);
lean_dec(v_unused_6134_);
v___x_6127_ = v___x_5922_;
v_isShared_6128_ = v_isSharedCheck_6133_;
goto v_resetjp_6126_;
}
else
{
lean_inc(v_a_6125_);
lean_dec(v___x_5922_);
v___x_6127_ = lean_box(0);
v_isShared_6128_ = v_isSharedCheck_6133_;
goto v_resetjp_6126_;
}
v_resetjp_6126_:
{
lean_object* v___x_6129_; lean_object* v___x_6131_; 
v___x_6129_ = lean_box(0);
if (v_isShared_6128_ == 0)
{
lean_ctor_set(v___x_6127_, 0, v___x_6129_);
v___x_6131_ = v___x_6127_;
goto v_reusejp_6130_;
}
else
{
lean_object* v_reuseFailAlloc_6132_; 
v_reuseFailAlloc_6132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6132_, 0, v___x_6129_);
lean_ctor_set(v_reuseFailAlloc_6132_, 1, v_a_6125_);
v___x_6131_ = v_reuseFailAlloc_6132_;
goto v_reusejp_6130_;
}
v_reusejp_6130_:
{
return v___x_6131_;
}
}
}
}
else
{
lean_object* v_a_6135_; lean_object* v_a_6136_; lean_object* v___x_6138_; uint8_t v_isShared_6139_; uint8_t v_isSharedCheck_6143_; 
lean_dec_ref(v___x_5919_);
lean_del_object(v___x_5910_);
lean_dec(v_name_5908_);
lean_dec_ref(v_a_5898_);
lean_dec(v_importArts_5896_);
v_a_6135_ = lean_ctor_get(v___x_5922_, 0);
v_a_6136_ = lean_ctor_get(v___x_5922_, 1);
v_isSharedCheck_6143_ = !lean_is_exclusive(v___x_5922_);
if (v_isSharedCheck_6143_ == 0)
{
v___x_6138_ = v___x_5922_;
v_isShared_6139_ = v_isSharedCheck_6143_;
goto v_resetjp_6137_;
}
else
{
lean_inc(v_a_6136_);
lean_inc(v_a_6135_);
lean_dec(v___x_5922_);
v___x_6138_ = lean_box(0);
v_isShared_6139_ = v_isSharedCheck_6143_;
goto v_resetjp_6137_;
}
v_resetjp_6137_:
{
lean_object* v___x_6141_; 
if (v_isShared_6139_ == 0)
{
v___x_6141_ = v___x_6138_;
goto v_reusejp_6140_;
}
else
{
lean_object* v_reuseFailAlloc_6142_; 
v_reuseFailAlloc_6142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6142_, 0, v_a_6135_);
lean_ctor_set(v_reuseFailAlloc_6142_, 1, v_a_6136_);
v___x_6141_ = v_reuseFailAlloc_6142_;
goto v_reusejp_6140_;
}
v_reusejp_6140_:
{
return v___x_6141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_writeUsekey___boxed(lean_object* v_mod_6146_, lean_object* v_presetup_6147_, lean_object* v_importArts_6148_, lean_object* v_modsysBefore_6149_, lean_object* v_a_6150_, lean_object* v_a_6151_, lean_object* v_a_6152_, lean_object* v_a_6153_, lean_object* v_a_6154_, lean_object* v_a_6155_, lean_object* v_a_6156_){
_start:
{
lean_object* v_res_6157_; 
v_res_6157_ = l_Lake_Module_writeUsekey(v_mod_6146_, v_presetup_6147_, v_importArts_6148_, v_modsysBefore_6149_, v_a_6150_, v_a_6151_, v_a_6152_, v_a_6153_, v_a_6154_, v_a_6155_);
lean_dec_ref(v_a_6154_);
lean_dec(v_a_6153_);
lean_dec(v_a_6152_);
lean_dec(v_a_6151_);
lean_dec_ref(v_modsysBefore_6149_);
lean_dec_ref(v_presetup_6147_);
return v_res_6157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___redArg(lean_object* v_snd_6158_, lean_object* v_as_6159_, size_t v_sz_6160_, size_t v_i_6161_, lean_object* v_b_6162_, lean_object* v___y_6163_){
_start:
{
uint8_t v___x_6165_; 
v___x_6165_ = lean_usize_dec_lt(v_i_6161_, v_sz_6160_);
if (v___x_6165_ == 0)
{
lean_object* v___x_6166_; 
v___x_6166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6166_, 0, v_b_6162_);
lean_ctor_set(v___x_6166_, 1, v___y_6163_);
return v___x_6166_;
}
else
{
lean_object* v_a_6167_; lean_object* v_fst_6168_; lean_object* v_snd_6169_; lean_object* v___x_6171_; uint8_t v_isShared_6172_; uint8_t v_isSharedCheck_6188_; 
lean_dec_ref(v_b_6162_);
v_a_6167_ = lean_array_uget(v_as_6159_, v_i_6161_);
v_fst_6168_ = lean_ctor_get(v_a_6167_, 0);
v_snd_6169_ = lean_ctor_get(v_a_6167_, 1);
v_isSharedCheck_6188_ = !lean_is_exclusive(v_a_6167_);
if (v_isSharedCheck_6188_ == 0)
{
v___x_6171_ = v_a_6167_;
v_isShared_6172_ = v_isSharedCheck_6188_;
goto v_resetjp_6170_;
}
else
{
lean_inc(v_snd_6169_);
lean_inc(v_fst_6168_);
lean_dec(v_a_6167_);
v___x_6171_ = lean_box(0);
v_isShared_6172_ = v_isSharedCheck_6188_;
goto v_resetjp_6170_;
}
v_resetjp_6170_:
{
lean_object* v_own_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; uint8_t v___x_6177_; 
v_own_6173_ = lean_ctor_get(v_snd_6158_, 2);
v___x_6174_ = lean_box(0);
v___x_6175_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_own_6173_, v_fst_6168_);
lean_dec(v_fst_6168_);
v___x_6176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6176_, 0, v_snd_6169_);
v___x_6177_ = l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1(v___x_6175_, v___x_6176_);
lean_dec_ref_known(v___x_6176_, 1);
lean_dec(v___x_6175_);
if (v___x_6177_ == 0)
{
lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6181_; 
v___x_6178_ = lean_box(v___x_6177_);
v___x_6179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6179_, 0, v___x_6178_);
if (v_isShared_6172_ == 0)
{
lean_ctor_set(v___x_6171_, 1, v___x_6174_);
lean_ctor_set(v___x_6171_, 0, v___x_6179_);
v___x_6181_ = v___x_6171_;
goto v_reusejp_6180_;
}
else
{
lean_object* v_reuseFailAlloc_6183_; 
v_reuseFailAlloc_6183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6183_, 0, v___x_6179_);
lean_ctor_set(v_reuseFailAlloc_6183_, 1, v___x_6174_);
v___x_6181_ = v_reuseFailAlloc_6183_;
goto v_reusejp_6180_;
}
v_reusejp_6180_:
{
lean_object* v___x_6182_; 
v___x_6182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6182_, 0, v___x_6181_);
lean_ctor_set(v___x_6182_, 1, v___y_6163_);
return v___x_6182_;
}
}
else
{
lean_object* v___x_6184_; size_t v___x_6185_; size_t v___x_6186_; 
lean_del_object(v___x_6171_);
v___x_6184_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
v___x_6185_ = ((size_t)1ULL);
v___x_6186_ = lean_usize_add(v_i_6161_, v___x_6185_);
v_i_6161_ = v___x_6186_;
v_b_6162_ = v___x_6184_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___redArg___boxed(lean_object* v_snd_6189_, lean_object* v_as_6190_, lean_object* v_sz_6191_, lean_object* v_i_6192_, lean_object* v_b_6193_, lean_object* v___y_6194_, lean_object* v___y_6195_){
_start:
{
size_t v_sz_boxed_6196_; size_t v_i_boxed_6197_; lean_object* v_res_6198_; 
v_sz_boxed_6196_ = lean_unbox_usize(v_sz_6191_);
lean_dec(v_sz_6191_);
v_i_boxed_6197_ = lean_unbox_usize(v_i_6192_);
lean_dec(v_i_6192_);
v_res_6198_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___redArg(v_snd_6189_, v_as_6190_, v_sz_boxed_6196_, v_i_boxed_6197_, v_b_6193_, v___y_6194_);
lean_dec_ref(v_as_6190_);
lean_dec_ref(v_snd_6189_);
return v_res_6198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__1(lean_object* v_val_6199_, lean_object* v_importArts_6200_, uint8_t v___x_6201_, lean_object* v_as_6202_, size_t v_sz_6203_, size_t v_i_6204_, lean_object* v_b_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_, lean_object* v___y_6208_, lean_object* v___y_6209_, lean_object* v___y_6210_, lean_object* v___y_6211_){
_start:
{
lean_object* v_a_6214_; lean_object* v_a_6215_; lean_object* v_a_6220_; lean_object* v_a_6221_; lean_object* v_a_6224_; lean_object* v_a_6225_; uint8_t v___x_6227_; 
v___x_6227_ = lean_usize_dec_lt(v_i_6204_, v_sz_6203_);
if (v___x_6227_ == 0)
{
lean_object* v___x_6228_; 
lean_dec_ref(v___y_6206_);
v___x_6228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6228_, 0, v_b_6205_);
lean_ctor_set(v___x_6228_, 1, v___y_6211_);
return v___x_6228_;
}
else
{
lean_object* v_a_6229_; lean_object* v_fst_6230_; lean_object* v_snd_6231_; lean_object* v___x_6233_; uint8_t v_isShared_6234_; uint8_t v_isSharedCheck_6276_; 
lean_dec_ref(v_b_6205_);
v_a_6229_ = lean_array_uget(v_as_6202_, v_i_6204_);
v_fst_6230_ = lean_ctor_get(v_a_6229_, 0);
v_snd_6231_ = lean_ctor_get(v_a_6229_, 1);
v_isSharedCheck_6276_ = !lean_is_exclusive(v_a_6229_);
if (v_isSharedCheck_6276_ == 0)
{
v___x_6233_ = v_a_6229_;
v_isShared_6234_ = v_isSharedCheck_6276_;
goto v_resetjp_6232_;
}
else
{
lean_inc(v_snd_6231_);
lean_inc(v_fst_6230_);
lean_dec(v_a_6229_);
v___x_6233_ = lean_box(0);
v_isShared_6234_ = v_isSharedCheck_6276_;
goto v_resetjp_6232_;
}
v_resetjp_6232_:
{
lean_object* v_toContext_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; 
v_toContext_6235_ = lean_ctor_get(v___y_6210_, 1);
v___x_6236_ = lean_box(0);
v___x_6237_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
lean_inc(v_fst_6230_);
v___x_6238_ = l_Lake_Workspace_findModule_x3f(v_fst_6230_, v_toContext_6235_);
if (lean_obj_tag(v___x_6238_) == 0)
{
lean_del_object(v___x_6233_);
lean_dec(v_snd_6231_);
lean_dec(v_fst_6230_);
v_a_6214_ = v___x_6237_;
v_a_6215_ = v___y_6211_;
goto v___jp_6213_;
}
else
{
lean_object* v___x_6240_; uint8_t v_isShared_6241_; uint8_t v_isSharedCheck_6274_; 
v_isSharedCheck_6274_ = !lean_is_exclusive(v___x_6238_);
if (v_isSharedCheck_6274_ == 0)
{
lean_object* v_unused_6275_; 
v_unused_6275_ = lean_ctor_get(v___x_6238_, 0);
lean_dec(v_unused_6275_);
v___x_6240_ = v___x_6238_;
v_isShared_6241_ = v_isSharedCheck_6274_;
goto v_resetjp_6239_;
}
else
{
lean_dec(v___x_6238_);
v___x_6240_ = lean_box(0);
v_isShared_6241_ = v_isSharedCheck_6274_;
goto v_resetjp_6239_;
}
v_resetjp_6239_:
{
lean_object* v___x_6242_; 
lean_inc_ref(v___y_6206_);
v___x_6242_ = l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(v_val_6199_, v_importArts_6200_, v_fst_6230_, v___y_6206_, v___y_6207_, v___y_6208_, v___y_6209_, v___y_6210_, v___y_6211_);
lean_dec(v_fst_6230_);
if (lean_obj_tag(v___x_6242_) == 0)
{
lean_object* v_a_6243_; 
v_a_6243_ = lean_ctor_get(v___x_6242_, 0);
if (lean_obj_tag(v_a_6243_) == 1)
{
lean_object* v_val_6244_; lean_object* v_a_6245_; lean_object* v_snd_6246_; size_t v_sz_6247_; size_t v___x_6248_; lean_object* v___x_6249_; 
lean_del_object(v___x_6240_);
lean_del_object(v___x_6233_);
v_val_6244_ = lean_ctor_get(v_a_6243_, 0);
lean_inc(v_val_6244_);
v_a_6245_ = lean_ctor_get(v___x_6242_, 1);
lean_inc(v_a_6245_);
lean_dec_ref_known(v___x_6242_, 2);
v_snd_6246_ = lean_ctor_get(v_val_6244_, 1);
lean_inc(v_snd_6246_);
lean_dec(v_val_6244_);
v_sz_6247_ = lean_array_size(v_snd_6231_);
v___x_6248_ = ((size_t)0ULL);
v___x_6249_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___redArg(v_snd_6246_, v_snd_6231_, v_sz_6247_, v___x_6248_, v___x_6237_, v_a_6245_);
lean_dec(v_snd_6231_);
lean_dec(v_snd_6246_);
if (lean_obj_tag(v___x_6249_) == 0)
{
lean_object* v_a_6250_; lean_object* v_fst_6251_; lean_object* v___x_6253_; uint8_t v_isShared_6254_; uint8_t v_isSharedCheck_6260_; 
v_a_6250_ = lean_ctor_get(v___x_6249_, 0);
lean_inc(v_a_6250_);
v_fst_6251_ = lean_ctor_get(v_a_6250_, 0);
v_isSharedCheck_6260_ = !lean_is_exclusive(v_a_6250_);
if (v_isSharedCheck_6260_ == 0)
{
lean_object* v_unused_6261_; 
v_unused_6261_ = lean_ctor_get(v_a_6250_, 1);
lean_dec(v_unused_6261_);
v___x_6253_ = v_a_6250_;
v_isShared_6254_ = v_isSharedCheck_6260_;
goto v_resetjp_6252_;
}
else
{
lean_inc(v_fst_6251_);
lean_dec(v_a_6250_);
v___x_6253_ = lean_box(0);
v_isShared_6254_ = v_isSharedCheck_6260_;
goto v_resetjp_6252_;
}
v_resetjp_6252_:
{
if (lean_obj_tag(v_fst_6251_) == 0)
{
lean_object* v_a_6255_; 
lean_del_object(v___x_6253_);
v_a_6255_ = lean_ctor_get(v___x_6249_, 1);
lean_inc(v_a_6255_);
lean_dec_ref_known(v___x_6249_, 2);
v_a_6214_ = v___x_6237_;
v_a_6215_ = v_a_6255_;
goto v___jp_6213_;
}
else
{
lean_object* v_a_6256_; lean_object* v___x_6258_; 
lean_dec_ref(v___y_6206_);
v_a_6256_ = lean_ctor_get(v___x_6249_, 1);
lean_inc(v_a_6256_);
lean_dec_ref_known(v___x_6249_, 2);
if (v_isShared_6254_ == 0)
{
lean_ctor_set(v___x_6253_, 1, v___x_6236_);
v___x_6258_ = v___x_6253_;
goto v_reusejp_6257_;
}
else
{
lean_object* v_reuseFailAlloc_6259_; 
v_reuseFailAlloc_6259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6259_, 0, v_fst_6251_);
lean_ctor_set(v_reuseFailAlloc_6259_, 1, v___x_6236_);
v___x_6258_ = v_reuseFailAlloc_6259_;
goto v_reusejp_6257_;
}
v_reusejp_6257_:
{
v_a_6220_ = v___x_6258_;
v_a_6221_ = v_a_6256_;
goto v___jp_6219_;
}
}
}
}
else
{
lean_object* v_a_6262_; lean_object* v_a_6263_; 
lean_dec_ref(v___y_6206_);
v_a_6262_ = lean_ctor_get(v___x_6249_, 0);
lean_inc(v_a_6262_);
v_a_6263_ = lean_ctor_get(v___x_6249_, 1);
lean_inc(v_a_6263_);
lean_dec_ref_known(v___x_6249_, 2);
v_a_6224_ = v_a_6262_;
v_a_6225_ = v_a_6263_;
goto v___jp_6223_;
}
}
else
{
lean_object* v_a_6264_; lean_object* v___x_6265_; lean_object* v___x_6267_; 
lean_dec(v_snd_6231_);
lean_dec_ref(v___y_6206_);
v_a_6264_ = lean_ctor_get(v___x_6242_, 1);
lean_inc(v_a_6264_);
lean_dec_ref_known(v___x_6242_, 2);
v___x_6265_ = lean_box(v___x_6201_);
if (v_isShared_6241_ == 0)
{
lean_ctor_set(v___x_6240_, 0, v___x_6265_);
v___x_6267_ = v___x_6240_;
goto v_reusejp_6266_;
}
else
{
lean_object* v_reuseFailAlloc_6271_; 
v_reuseFailAlloc_6271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6271_, 0, v___x_6265_);
v___x_6267_ = v_reuseFailAlloc_6271_;
goto v_reusejp_6266_;
}
v_reusejp_6266_:
{
lean_object* v___x_6269_; 
if (v_isShared_6234_ == 0)
{
lean_ctor_set(v___x_6233_, 1, v___x_6236_);
lean_ctor_set(v___x_6233_, 0, v___x_6267_);
v___x_6269_ = v___x_6233_;
goto v_reusejp_6268_;
}
else
{
lean_object* v_reuseFailAlloc_6270_; 
v_reuseFailAlloc_6270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6270_, 0, v___x_6267_);
lean_ctor_set(v_reuseFailAlloc_6270_, 1, v___x_6236_);
v___x_6269_ = v_reuseFailAlloc_6270_;
goto v_reusejp_6268_;
}
v_reusejp_6268_:
{
v_a_6220_ = v___x_6269_;
v_a_6221_ = v_a_6264_;
goto v___jp_6219_;
}
}
}
}
else
{
lean_object* v_a_6272_; lean_object* v_a_6273_; 
lean_del_object(v___x_6240_);
lean_del_object(v___x_6233_);
lean_dec(v_snd_6231_);
lean_dec_ref(v___y_6206_);
v_a_6272_ = lean_ctor_get(v___x_6242_, 0);
lean_inc(v_a_6272_);
v_a_6273_ = lean_ctor_get(v___x_6242_, 1);
lean_inc(v_a_6273_);
lean_dec_ref_known(v___x_6242_, 2);
v_a_6224_ = v_a_6272_;
v_a_6225_ = v_a_6273_;
goto v___jp_6223_;
}
}
}
}
}
v___jp_6213_:
{
size_t v___x_6216_; size_t v___x_6217_; 
v___x_6216_ = ((size_t)1ULL);
v___x_6217_ = lean_usize_add(v_i_6204_, v___x_6216_);
v_i_6204_ = v___x_6217_;
v_b_6205_ = v_a_6214_;
v___y_6211_ = v_a_6215_;
goto _start;
}
v___jp_6219_:
{
lean_object* v___x_6222_; 
v___x_6222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6222_, 0, v_a_6220_);
lean_ctor_set(v___x_6222_, 1, v_a_6221_);
return v___x_6222_;
}
v___jp_6223_:
{
lean_object* v___x_6226_; 
v___x_6226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6226_, 0, v_a_6224_);
lean_ctor_set(v___x_6226_, 1, v_a_6225_);
return v___x_6226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__1___boxed(lean_object* v_val_6277_, lean_object* v_importArts_6278_, lean_object* v___x_6279_, lean_object* v_as_6280_, lean_object* v_sz_6281_, lean_object* v_i_6282_, lean_object* v_b_6283_, lean_object* v___y_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_){
_start:
{
uint8_t v___x_117815__boxed_6291_; size_t v_sz_boxed_6292_; size_t v_i_boxed_6293_; lean_object* v_res_6294_; 
v___x_117815__boxed_6291_ = lean_unbox(v___x_6279_);
v_sz_boxed_6292_ = lean_unbox_usize(v_sz_6281_);
lean_dec(v_sz_6281_);
v_i_boxed_6293_ = lean_unbox_usize(v_i_6282_);
lean_dec(v_i_6282_);
v_res_6294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__1(v_val_6277_, v_importArts_6278_, v___x_117815__boxed_6291_, v_as_6280_, v_sz_boxed_6292_, v_i_boxed_6293_, v_b_6283_, v___y_6284_, v___y_6285_, v___y_6286_, v___y_6287_, v___y_6288_, v___y_6289_);
lean_dec_ref(v___y_6288_);
lean_dec(v___y_6287_);
lean_dec(v___y_6286_);
lean_dec(v___y_6285_);
lean_dec_ref(v_as_6280_);
lean_dec(v_importArts_6278_);
lean_dec(v_val_6277_);
return v_res_6294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__2(lean_object* v_val_6295_, lean_object* v_val_6296_, lean_object* v_importArts_6297_, uint8_t v___x_6298_, lean_object* v_as_6299_, size_t v_sz_6300_, size_t v_i_6301_, lean_object* v_b_6302_, lean_object* v___y_6303_, lean_object* v___y_6304_, lean_object* v___y_6305_, lean_object* v___y_6306_, lean_object* v___y_6307_, lean_object* v___y_6308_){
_start:
{
lean_object* v_a_6311_; lean_object* v_a_6312_; lean_object* v_a_6317_; lean_object* v_a_6318_; lean_object* v_a_6321_; lean_object* v_a_6322_; uint8_t v___x_6324_; 
v___x_6324_ = lean_usize_dec_lt(v_i_6301_, v_sz_6300_);
if (v___x_6324_ == 0)
{
lean_object* v___x_6325_; 
lean_dec_ref(v___y_6303_);
v___x_6325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6325_, 0, v_b_6302_);
lean_ctor_set(v___x_6325_, 1, v___y_6308_);
return v___x_6325_;
}
else
{
lean_object* v_toContext_6326_; lean_object* v___x_6327_; lean_object* v___x_6328_; lean_object* v_a_6329_; lean_object* v___x_6330_; 
lean_dec_ref(v_b_6302_);
v_toContext_6326_ = lean_ctor_get(v___y_6307_, 1);
v___x_6327_ = lean_box(0);
v___x_6328_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure_spec__1___closed__3));
v_a_6329_ = lean_array_uget_borrowed(v_as_6299_, v_i_6301_);
lean_inc(v_a_6329_);
v___x_6330_ = l_Lake_Workspace_findModule_x3f(v_a_6329_, v_toContext_6326_);
if (lean_obj_tag(v___x_6330_) == 0)
{
v_a_6311_ = v___x_6328_;
v_a_6312_ = v___y_6308_;
goto v___jp_6310_;
}
else
{
lean_object* v___x_6332_; uint8_t v_isShared_6333_; uint8_t v_isSharedCheck_6398_; 
v_isSharedCheck_6398_ = !lean_is_exclusive(v___x_6330_);
if (v_isSharedCheck_6398_ == 0)
{
lean_object* v_unused_6399_; 
v_unused_6399_ = lean_ctor_get(v___x_6330_, 0);
lean_dec(v_unused_6399_);
v___x_6332_ = v___x_6330_;
v_isShared_6333_ = v_isSharedCheck_6398_;
goto v_resetjp_6331_;
}
else
{
lean_dec(v___x_6330_);
v___x_6332_ = lean_box(0);
v_isShared_6333_ = v_isSharedCheck_6398_;
goto v_resetjp_6331_;
}
v_resetjp_6331_:
{
lean_object* v_extra_6334_; lean_object* v___x_6335_; 
v_extra_6334_ = lean_ctor_get(v_val_6295_, 4);
v___x_6335_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_extra_6334_, v_a_6329_);
if (lean_obj_tag(v___x_6335_) == 1)
{
lean_object* v_val_6336_; lean_object* v___x_6338_; uint8_t v_isShared_6339_; uint8_t v_isSharedCheck_6392_; 
lean_del_object(v___x_6332_);
v_val_6336_ = lean_ctor_get(v___x_6335_, 0);
v_isSharedCheck_6392_ = !lean_is_exclusive(v___x_6335_);
if (v_isSharedCheck_6392_ == 0)
{
v___x_6338_ = v___x_6335_;
v_isShared_6339_ = v_isSharedCheck_6392_;
goto v_resetjp_6337_;
}
else
{
lean_inc(v_val_6336_);
lean_dec(v___x_6335_);
v___x_6338_ = lean_box(0);
v_isShared_6339_ = v_isSharedCheck_6392_;
goto v_resetjp_6337_;
}
v_resetjp_6337_:
{
lean_object* v_fst_6340_; lean_object* v_snd_6341_; lean_object* v___x_6343_; uint8_t v_isShared_6344_; uint8_t v_isSharedCheck_6391_; 
v_fst_6340_ = lean_ctor_get(v_val_6336_, 0);
v_snd_6341_ = lean_ctor_get(v_val_6336_, 1);
v_isSharedCheck_6391_ = !lean_is_exclusive(v_val_6336_);
if (v_isSharedCheck_6391_ == 0)
{
v___x_6343_ = v_val_6336_;
v_isShared_6344_ = v_isSharedCheck_6391_;
goto v_resetjp_6342_;
}
else
{
lean_inc(v_snd_6341_);
lean_inc(v_fst_6340_);
lean_dec(v_val_6336_);
v___x_6343_ = lean_box(0);
v_isShared_6344_ = v_isSharedCheck_6391_;
goto v_resetjp_6342_;
}
v_resetjp_6342_:
{
lean_object* v___x_6345_; 
lean_inc_ref(v___y_6303_);
v___x_6345_ = l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f(v_val_6296_, v_importArts_6297_, v_a_6329_, v___y_6303_, v___y_6304_, v___y_6305_, v___y_6306_, v___y_6307_, v___y_6308_);
if (lean_obj_tag(v___x_6345_) == 0)
{
lean_object* v_a_6346_; 
v_a_6346_ = lean_ctor_get(v___x_6345_, 0);
lean_inc(v_a_6346_);
if (lean_obj_tag(v_a_6346_) == 1)
{
lean_object* v_val_6347_; lean_object* v___x_6349_; uint8_t v_isShared_6350_; uint8_t v_isSharedCheck_6380_; 
lean_del_object(v___x_6343_);
lean_del_object(v___x_6338_);
v_val_6347_ = lean_ctor_get(v_a_6346_, 0);
v_isSharedCheck_6380_ = !lean_is_exclusive(v_a_6346_);
if (v_isSharedCheck_6380_ == 0)
{
v___x_6349_ = v_a_6346_;
v_isShared_6350_ = v_isSharedCheck_6380_;
goto v_resetjp_6348_;
}
else
{
lean_inc(v_val_6347_);
lean_dec(v_a_6346_);
v___x_6349_ = lean_box(0);
v_isShared_6350_ = v_isSharedCheck_6380_;
goto v_resetjp_6348_;
}
v_resetjp_6348_:
{
lean_object* v_a_6351_; lean_object* v_fst_6352_; lean_object* v_snd_6353_; lean_object* v___x_6355_; uint8_t v_isShared_6356_; uint8_t v_isSharedCheck_6379_; 
v_a_6351_ = lean_ctor_get(v___x_6345_, 1);
lean_inc(v_a_6351_);
lean_dec_ref_known(v___x_6345_, 2);
v_fst_6352_ = lean_ctor_get(v_val_6347_, 0);
v_snd_6353_ = lean_ctor_get(v_val_6347_, 1);
v_isSharedCheck_6379_ = !lean_is_exclusive(v_val_6347_);
if (v_isSharedCheck_6379_ == 0)
{
v___x_6355_ = v_val_6347_;
v_isShared_6356_ = v_isSharedCheck_6379_;
goto v_resetjp_6354_;
}
else
{
lean_inc(v_snd_6353_);
lean_inc(v_fst_6352_);
lean_dec(v_val_6347_);
v___x_6355_ = lean_box(0);
v_isShared_6356_ = v_isSharedCheck_6379_;
goto v_resetjp_6354_;
}
v_resetjp_6354_:
{
lean_object* v___x_6357_; 
lean_inc_ref(v___y_6303_);
v___x_6357_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(v_val_6296_, v_fst_6352_, v___y_6303_, v___y_6304_, v___y_6305_, v___y_6306_, v___y_6307_, v_a_6351_);
if (lean_obj_tag(v___x_6357_) == 0)
{
lean_object* v_a_6358_; lean_object* v_a_6359_; uint8_t v___x_6360_; 
v_a_6358_ = lean_ctor_get(v___x_6357_, 0);
lean_inc(v_a_6358_);
v_a_6359_ = lean_ctor_get(v___x_6357_, 1);
lean_inc(v_a_6359_);
lean_dec_ref_known(v___x_6357_, 2);
v___x_6360_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_a_6358_, v_fst_6340_);
lean_dec(v_fst_6340_);
lean_dec(v_a_6358_);
if (v___x_6360_ == 0)
{
lean_object* v___x_6361_; lean_object* v___x_6363_; 
lean_dec(v_snd_6353_);
lean_dec(v_snd_6341_);
lean_dec_ref(v___y_6303_);
v___x_6361_ = lean_box(v___x_6360_);
if (v_isShared_6350_ == 0)
{
lean_ctor_set(v___x_6349_, 0, v___x_6361_);
v___x_6363_ = v___x_6349_;
goto v_reusejp_6362_;
}
else
{
lean_object* v_reuseFailAlloc_6367_; 
v_reuseFailAlloc_6367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6367_, 0, v___x_6361_);
v___x_6363_ = v_reuseFailAlloc_6367_;
goto v_reusejp_6362_;
}
v_reusejp_6362_:
{
lean_object* v___x_6365_; 
if (v_isShared_6356_ == 0)
{
lean_ctor_set(v___x_6355_, 1, v___x_6327_);
lean_ctor_set(v___x_6355_, 0, v___x_6363_);
v___x_6365_ = v___x_6355_;
goto v_reusejp_6364_;
}
else
{
lean_object* v_reuseFailAlloc_6366_; 
v_reuseFailAlloc_6366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6366_, 0, v___x_6363_);
lean_ctor_set(v_reuseFailAlloc_6366_, 1, v___x_6327_);
v___x_6365_ = v_reuseFailAlloc_6366_;
goto v_reusejp_6364_;
}
v_reusejp_6364_:
{
v_a_6317_ = v___x_6365_;
v_a_6318_ = v_a_6359_;
goto v___jp_6316_;
}
}
}
else
{
lean_object* v_moduleDigest_6368_; uint8_t v___x_6369_; 
v_moduleDigest_6368_ = lean_ctor_get(v_snd_6353_, 0);
lean_inc_ref(v_moduleDigest_6368_);
lean_dec(v_snd_6353_);
v___x_6369_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_moduleDigest_6368_, v_snd_6341_);
lean_dec(v_snd_6341_);
lean_dec_ref(v_moduleDigest_6368_);
if (v___x_6369_ == 0)
{
lean_object* v___x_6370_; lean_object* v___x_6372_; 
lean_dec_ref(v___y_6303_);
v___x_6370_ = lean_box(v___x_6369_);
if (v_isShared_6350_ == 0)
{
lean_ctor_set(v___x_6349_, 0, v___x_6370_);
v___x_6372_ = v___x_6349_;
goto v_reusejp_6371_;
}
else
{
lean_object* v_reuseFailAlloc_6376_; 
v_reuseFailAlloc_6376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6376_, 0, v___x_6370_);
v___x_6372_ = v_reuseFailAlloc_6376_;
goto v_reusejp_6371_;
}
v_reusejp_6371_:
{
lean_object* v___x_6374_; 
if (v_isShared_6356_ == 0)
{
lean_ctor_set(v___x_6355_, 1, v___x_6327_);
lean_ctor_set(v___x_6355_, 0, v___x_6372_);
v___x_6374_ = v___x_6355_;
goto v_reusejp_6373_;
}
else
{
lean_object* v_reuseFailAlloc_6375_; 
v_reuseFailAlloc_6375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6375_, 0, v___x_6372_);
lean_ctor_set(v_reuseFailAlloc_6375_, 1, v___x_6327_);
v___x_6374_ = v_reuseFailAlloc_6375_;
goto v_reusejp_6373_;
}
v_reusejp_6373_:
{
v_a_6317_ = v___x_6374_;
v_a_6318_ = v_a_6359_;
goto v___jp_6316_;
}
}
}
else
{
lean_del_object(v___x_6355_);
lean_del_object(v___x_6349_);
v_a_6311_ = v___x_6328_;
v_a_6312_ = v_a_6359_;
goto v___jp_6310_;
}
}
}
else
{
lean_object* v_a_6377_; lean_object* v_a_6378_; 
lean_del_object(v___x_6355_);
lean_dec(v_snd_6353_);
lean_del_object(v___x_6349_);
lean_dec(v_snd_6341_);
lean_dec(v_fst_6340_);
lean_dec_ref(v___y_6303_);
v_a_6377_ = lean_ctor_get(v___x_6357_, 0);
lean_inc(v_a_6377_);
v_a_6378_ = lean_ctor_get(v___x_6357_, 1);
lean_inc(v_a_6378_);
lean_dec_ref_known(v___x_6357_, 2);
v_a_6321_ = v_a_6377_;
v_a_6322_ = v_a_6378_;
goto v___jp_6320_;
}
}
}
}
else
{
lean_object* v_a_6381_; lean_object* v___x_6382_; lean_object* v___x_6384_; 
lean_dec(v_a_6346_);
lean_dec(v_snd_6341_);
lean_dec(v_fst_6340_);
lean_dec_ref(v___y_6303_);
v_a_6381_ = lean_ctor_get(v___x_6345_, 1);
lean_inc(v_a_6381_);
lean_dec_ref_known(v___x_6345_, 2);
v___x_6382_ = lean_box(v___x_6298_);
if (v_isShared_6339_ == 0)
{
lean_ctor_set(v___x_6338_, 0, v___x_6382_);
v___x_6384_ = v___x_6338_;
goto v_reusejp_6383_;
}
else
{
lean_object* v_reuseFailAlloc_6388_; 
v_reuseFailAlloc_6388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6388_, 0, v___x_6382_);
v___x_6384_ = v_reuseFailAlloc_6388_;
goto v_reusejp_6383_;
}
v_reusejp_6383_:
{
lean_object* v___x_6386_; 
if (v_isShared_6344_ == 0)
{
lean_ctor_set(v___x_6343_, 1, v___x_6327_);
lean_ctor_set(v___x_6343_, 0, v___x_6384_);
v___x_6386_ = v___x_6343_;
goto v_reusejp_6385_;
}
else
{
lean_object* v_reuseFailAlloc_6387_; 
v_reuseFailAlloc_6387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6387_, 0, v___x_6384_);
lean_ctor_set(v_reuseFailAlloc_6387_, 1, v___x_6327_);
v___x_6386_ = v_reuseFailAlloc_6387_;
goto v_reusejp_6385_;
}
v_reusejp_6385_:
{
v_a_6317_ = v___x_6386_;
v_a_6318_ = v_a_6381_;
goto v___jp_6316_;
}
}
}
}
else
{
lean_object* v_a_6389_; lean_object* v_a_6390_; 
lean_del_object(v___x_6343_);
lean_dec(v_snd_6341_);
lean_dec(v_fst_6340_);
lean_del_object(v___x_6338_);
lean_dec_ref(v___y_6303_);
v_a_6389_ = lean_ctor_get(v___x_6345_, 0);
lean_inc(v_a_6389_);
v_a_6390_ = lean_ctor_get(v___x_6345_, 1);
lean_inc(v_a_6390_);
lean_dec_ref_known(v___x_6345_, 2);
v_a_6321_ = v_a_6389_;
v_a_6322_ = v_a_6390_;
goto v___jp_6320_;
}
}
}
}
else
{
lean_object* v___x_6393_; lean_object* v___x_6395_; 
lean_dec(v___x_6335_);
lean_dec_ref(v___y_6303_);
v___x_6393_ = lean_box(v___x_6298_);
if (v_isShared_6333_ == 0)
{
lean_ctor_set(v___x_6332_, 0, v___x_6393_);
v___x_6395_ = v___x_6332_;
goto v_reusejp_6394_;
}
else
{
lean_object* v_reuseFailAlloc_6397_; 
v_reuseFailAlloc_6397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6397_, 0, v___x_6393_);
v___x_6395_ = v_reuseFailAlloc_6397_;
goto v_reusejp_6394_;
}
v_reusejp_6394_:
{
lean_object* v___x_6396_; 
v___x_6396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6396_, 0, v___x_6395_);
lean_ctor_set(v___x_6396_, 1, v___x_6327_);
v_a_6317_ = v___x_6396_;
v_a_6318_ = v___y_6308_;
goto v___jp_6316_;
}
}
}
}
}
v___jp_6310_:
{
size_t v___x_6313_; size_t v___x_6314_; 
v___x_6313_ = ((size_t)1ULL);
v___x_6314_ = lean_usize_add(v_i_6301_, v___x_6313_);
lean_inc_ref(v_a_6311_);
v_i_6301_ = v___x_6314_;
v_b_6302_ = v_a_6311_;
v___y_6308_ = v_a_6312_;
goto _start;
}
v___jp_6316_:
{
lean_object* v___x_6319_; 
v___x_6319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6319_, 0, v_a_6317_);
lean_ctor_set(v___x_6319_, 1, v_a_6318_);
return v___x_6319_;
}
v___jp_6320_:
{
lean_object* v___x_6323_; 
v___x_6323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6323_, 0, v_a_6321_);
lean_ctor_set(v___x_6323_, 1, v_a_6322_);
return v___x_6323_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__2___boxed(lean_object* v_val_6400_, lean_object* v_val_6401_, lean_object* v_importArts_6402_, lean_object* v___x_6403_, lean_object* v_as_6404_, lean_object* v_sz_6405_, lean_object* v_i_6406_, lean_object* v_b_6407_, lean_object* v___y_6408_, lean_object* v___y_6409_, lean_object* v___y_6410_, lean_object* v___y_6411_, lean_object* v___y_6412_, lean_object* v___y_6413_, lean_object* v___y_6414_){
_start:
{
uint8_t v___x_117970__boxed_6415_; size_t v_sz_boxed_6416_; size_t v_i_boxed_6417_; lean_object* v_res_6418_; 
v___x_117970__boxed_6415_ = lean_unbox(v___x_6403_);
v_sz_boxed_6416_ = lean_unbox_usize(v_sz_6405_);
lean_dec(v_sz_6405_);
v_i_boxed_6417_ = lean_unbox_usize(v_i_6406_);
lean_dec(v_i_6406_);
v_res_6418_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__2(v_val_6400_, v_val_6401_, v_importArts_6402_, v___x_117970__boxed_6415_, v_as_6404_, v_sz_boxed_6416_, v_i_boxed_6417_, v_b_6407_, v___y_6408_, v___y_6409_, v___y_6410_, v___y_6411_, v___y_6412_, v___y_6413_);
lean_dec_ref(v___y_6412_);
lean_dec(v___y_6411_);
lean_dec(v___y_6410_);
lean_dec(v___y_6409_);
lean_dec_ref(v_as_6404_);
lean_dec(v_importArts_6402_);
lean_dec(v_val_6401_);
lean_dec_ref(v_val_6400_);
return v_res_6418_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_usageUpToDate(lean_object* v_mod_6422_, lean_object* v_presetup_6423_, lean_object* v_importArts_6424_, lean_object* v_a_6425_, lean_object* v_a_6426_, lean_object* v_a_6427_, lean_object* v_a_6428_, lean_object* v_a_6429_, lean_object* v_a_6430_){
_start:
{
uint8_t v_r_6433_; lean_object* v___y_6434_; lean_object* v_lib_6437_; lean_object* v_pkg_6438_; lean_object* v_config_6439_; lean_object* v_name_6440_; lean_object* v_dir_6441_; lean_object* v_buildDir_6442_; lean_object* v_leanLibDir_6443_; lean_object* v___x_6444_; lean_object* v___x_6445_; lean_object* v___x_6446_; lean_object* v___x_6447_; lean_object* v___x_6448_; lean_object* v___x_6449_; lean_object* v___x_6450_; lean_object* v___x_6451_; lean_object* v___x_6452_; 
v_lib_6437_ = lean_ctor_get(v_mod_6422_, 0);
v_pkg_6438_ = lean_ctor_get(v_lib_6437_, 0);
lean_inc_ref(v_pkg_6438_);
v_config_6439_ = lean_ctor_get(v_pkg_6438_, 6);
lean_inc_ref(v_config_6439_);
v_name_6440_ = lean_ctor_get(v_mod_6422_, 1);
lean_inc_n(v_name_6440_, 2);
lean_dec_ref(v_mod_6422_);
v_dir_6441_ = lean_ctor_get(v_pkg_6438_, 4);
lean_inc_ref(v_dir_6441_);
lean_dec_ref(v_pkg_6438_);
v_buildDir_6442_ = lean_ctor_get(v_config_6439_, 5);
lean_inc_ref(v_buildDir_6442_);
v_leanLibDir_6443_ = lean_ctor_get(v_config_6439_, 6);
lean_inc_ref(v_leanLibDir_6443_);
lean_dec_ref(v_config_6439_);
v___x_6444_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instImpl_00___x40_Lake_Build_UsageCutoff_569572007____hygCtx___hyg_25_));
v___x_6445_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f___closed__0));
v___x_6446_ = l_System_FilePath_normalize(v_buildDir_6442_);
v___x_6447_ = l_Lake_joinRelative(v_dir_6441_, v___x_6446_);
v___x_6448_ = l_System_FilePath_normalize(v_leanLibDir_6443_);
v___x_6449_ = l_Lake_joinRelative(v___x_6447_, v___x_6448_);
v___x_6450_ = l_Lean_modToFilePath(v___x_6449_, v_name_6440_, v___x_6445_);
v___x_6451_ = lean_box(0);
lean_inc_ref(v_a_6425_);
v___x_6452_ = l___private_Lake_Build_UsageCutoff_0__Lake_readUsageSidecar___at___00__private_Lake_Build_UsageCutoff_0__Lake_importUsage_x3f_spec__0(v___x_6444_, v___x_6450_, v___x_6451_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6430_);
if (lean_obj_tag(v___x_6452_) == 0)
{
lean_object* v_a_6453_; 
v_a_6453_ = lean_ctor_get(v___x_6452_, 0);
lean_inc(v_a_6453_);
if (lean_obj_tag(v_a_6453_) == 1)
{
lean_object* v_val_6454_; lean_object* v___x_6456_; uint8_t v_isShared_6457_; uint8_t v_isSharedCheck_6625_; 
v_val_6454_ = lean_ctor_get(v_a_6453_, 0);
v_isSharedCheck_6625_ = !lean_is_exclusive(v_a_6453_);
if (v_isSharedCheck_6625_ == 0)
{
v___x_6456_ = v_a_6453_;
v_isShared_6457_ = v_isSharedCheck_6625_;
goto v_resetjp_6455_;
}
else
{
lean_inc(v_val_6454_);
lean_dec(v_a_6453_);
v___x_6456_ = lean_box(0);
v_isShared_6457_ = v_isSharedCheck_6625_;
goto v_resetjp_6455_;
}
v_resetjp_6455_:
{
lean_object* v_a_6458_; lean_object* v___x_6460_; uint8_t v_isShared_6461_; uint8_t v_isSharedCheck_6623_; 
v_a_6458_ = lean_ctor_get(v___x_6452_, 1);
v_isSharedCheck_6623_ = !lean_is_exclusive(v___x_6452_);
if (v_isSharedCheck_6623_ == 0)
{
lean_object* v_unused_6624_; 
v_unused_6624_ = lean_ctor_get(v___x_6452_, 0);
lean_dec(v_unused_6624_);
v___x_6460_ = v___x_6452_;
v_isShared_6461_ = v_isSharedCheck_6623_;
goto v_resetjp_6459_;
}
else
{
lean_inc(v_a_6458_);
lean_dec(v___x_6452_);
v___x_6460_ = lean_box(0);
v_isShared_6461_ = v_isSharedCheck_6623_;
goto v_resetjp_6459_;
}
v_resetjp_6459_:
{
uint64_t v_localHash_6462_; lean_object* v_usage_6463_; lean_object* v_olean_6464_; lean_object* v_modsys_6465_; lean_object* v_closure_6466_; lean_object* v___x_6467_; lean_object* v___x_6468_; lean_object* v___x_6470_; 
v_localHash_6462_ = lean_ctor_get_uint64(v_val_6454_, sizeof(void*)*5);
v_usage_6463_ = lean_ctor_get(v_val_6454_, 0);
v_olean_6464_ = lean_ctor_get(v_val_6454_, 1);
v_modsys_6465_ = lean_ctor_get(v_val_6454_, 2);
v_closure_6466_ = lean_ctor_get(v_val_6454_, 3);
v___x_6467_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__1));
lean_inc(v_name_6440_);
v___x_6468_ = l_Lean_modToFilePath(v___x_6449_, v_name_6440_, v___x_6467_);
lean_inc_ref(v_usage_6463_);
if (v_isShared_6457_ == 0)
{
lean_ctor_set(v___x_6456_, 0, v_usage_6463_);
v___x_6470_ = v___x_6456_;
goto v_reusejp_6469_;
}
else
{
lean_object* v_reuseFailAlloc_6622_; 
v_reuseFailAlloc_6622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6622_, 0, v_usage_6463_);
v___x_6470_ = v_reuseFailAlloc_6622_;
goto v_reusejp_6469_;
}
v_reusejp_6469_:
{
lean_object* v___x_6471_; 
lean_inc_ref(v_a_6425_);
v___x_6471_ = l___private_Lake_Build_UsageCutoff_0__Lake_readOwnUsage(v___x_6468_, v___x_6470_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6458_);
lean_dec_ref(v___x_6470_);
if (lean_obj_tag(v___x_6471_) == 0)
{
lean_object* v_a_6472_; lean_object* v_a_6473_; lean_object* v___x_6475_; uint8_t v_isShared_6476_; uint8_t v_isSharedCheck_6612_; 
v_a_6472_ = lean_ctor_get(v___x_6471_, 0);
v_a_6473_ = lean_ctor_get(v___x_6471_, 1);
v_isSharedCheck_6612_ = !lean_is_exclusive(v___x_6471_);
if (v_isSharedCheck_6612_ == 0)
{
v___x_6475_ = v___x_6471_;
v_isShared_6476_ = v_isSharedCheck_6612_;
goto v_resetjp_6474_;
}
else
{
lean_inc(v_a_6473_);
lean_inc(v_a_6472_);
lean_dec(v___x_6471_);
v___x_6475_ = lean_box(0);
v_isShared_6476_ = v_isSharedCheck_6612_;
goto v_resetjp_6474_;
}
v_resetjp_6474_:
{
if (lean_obj_tag(v_a_6472_) == 1)
{
lean_object* v_val_6483_; lean_object* v___x_6485_; uint8_t v_isShared_6486_; uint8_t v_isSharedCheck_6606_; 
lean_del_object(v___x_6460_);
v_val_6483_ = lean_ctor_get(v_a_6472_, 0);
v_isSharedCheck_6606_ = !lean_is_exclusive(v_a_6472_);
if (v_isSharedCheck_6606_ == 0)
{
v___x_6485_ = v_a_6472_;
v_isShared_6486_ = v_isSharedCheck_6606_;
goto v_resetjp_6484_;
}
else
{
lean_inc(v_val_6483_);
lean_dec(v_a_6472_);
v___x_6485_ = lean_box(0);
v_isShared_6486_ = v_isSharedCheck_6606_;
goto v_resetjp_6484_;
}
v_resetjp_6484_:
{
lean_object* v_fst_6487_; uint8_t v_noskip_6488_; 
v_fst_6487_ = lean_ctor_get(v_val_6483_, 0);
lean_inc(v_fst_6487_);
lean_dec(v_val_6483_);
v_noskip_6488_ = lean_ctor_get_uint8(v_fst_6487_, sizeof(void*)*13);
if (v_noskip_6488_ == 0)
{
lean_object* v_localTrace_6489_; lean_object* v_used_6490_; lean_object* v_extra_6491_; uint64_t v_hash_6492_; uint8_t v___x_6493_; 
v_localTrace_6489_ = lean_ctor_get(v_presetup_6423_, 2);
v_used_6490_ = lean_ctor_get(v_fst_6487_, 6);
v_extra_6491_ = lean_ctor_get(v_fst_6487_, 7);
v_hash_6492_ = lean_ctor_get_uint64(v_localTrace_6489_, sizeof(void*)*3);
v___x_6493_ = lean_uint64_dec_eq(v_localHash_6462_, v_hash_6492_);
if (v___x_6493_ == 0)
{
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v___x_6449_);
lean_dec(v_name_6440_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
goto v___jp_6477_;
}
else
{
uint8_t v___x_6494_; 
v___x_6494_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_coversClosure(v_fst_6487_, v_importArts_6424_);
if (v___x_6494_ == 0)
{
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v___x_6449_);
lean_dec(v_name_6440_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
goto v___jp_6477_;
}
else
{
lean_object* v___x_6495_; lean_object* v___x_6496_; lean_object* v___x_6497_; lean_object* v___x_6498_; lean_object* v___x_6499_; 
lean_del_object(v___x_6475_);
v___x_6495_ = lean_obj_once(&l_Lake_Module_writeUsekey___closed__1, &l_Lake_Module_writeUsekey___closed__1_once, _init_l_Lake_Module_writeUsekey___closed__1);
v___x_6496_ = lean_st_mk_ref(v___x_6495_);
v___x_6497_ = ((lean_object*)(l___private_Lake_Build_UsageCutoff_0__Lake_instFromJsonUsekeySidecar___lam__0___closed__2));
v___x_6498_ = l_Lean_modToFilePath(v___x_6449_, v_name_6440_, v___x_6497_);
lean_dec_ref(v___x_6449_);
lean_inc_ref(v_a_6425_);
v___x_6499_ = l___private_Lake_Build_UsageCutoff_0__Lake_contentHash(v___x_6496_, v___x_6498_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6473_);
if (lean_obj_tag(v___x_6499_) == 0)
{
lean_object* v_a_6500_; lean_object* v_a_6501_; lean_object* v___x_6503_; uint8_t v_isShared_6504_; uint8_t v_isSharedCheck_6596_; 
v_a_6500_ = lean_ctor_get(v___x_6499_, 0);
v_a_6501_ = lean_ctor_get(v___x_6499_, 1);
v_isSharedCheck_6596_ = !lean_is_exclusive(v___x_6499_);
if (v_isSharedCheck_6596_ == 0)
{
v___x_6503_ = v___x_6499_;
v_isShared_6504_ = v_isSharedCheck_6596_;
goto v_resetjp_6502_;
}
else
{
lean_inc(v_a_6501_);
lean_inc(v_a_6500_);
lean_dec(v___x_6499_);
v___x_6503_ = lean_box(0);
v_isShared_6504_ = v_isSharedCheck_6596_;
goto v_resetjp_6502_;
}
v_resetjp_6502_:
{
uint8_t v___x_6505_; 
v___x_6505_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_a_6500_, v_olean_6464_);
lean_dec(v_a_6500_);
if (v___x_6505_ == 0)
{
lean_object* v___x_6506_; lean_object* v___x_6508_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v___x_6506_ = lean_box(v___x_6505_);
if (v_isShared_6504_ == 0)
{
lean_ctor_set(v___x_6503_, 0, v___x_6506_);
v___x_6508_ = v___x_6503_;
goto v_reusejp_6507_;
}
else
{
lean_object* v_reuseFailAlloc_6509_; 
v_reuseFailAlloc_6509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6509_, 0, v___x_6506_);
lean_ctor_set(v_reuseFailAlloc_6509_, 1, v_a_6501_);
v___x_6508_ = v_reuseFailAlloc_6509_;
goto v_reusejp_6507_;
}
v_reusejp_6507_:
{
return v___x_6508_;
}
}
else
{
lean_object* v___x_6510_; 
lean_del_object(v___x_6503_);
lean_inc_ref(v_a_6425_);
lean_inc(v_importArts_6424_);
v___x_6510_ = l_Lake_modsysHash(v___x_6496_, v_importArts_6424_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6501_);
if (lean_obj_tag(v___x_6510_) == 0)
{
lean_object* v_a_6511_; lean_object* v_a_6512_; lean_object* v___x_6514_; uint8_t v_isShared_6515_; uint8_t v_isSharedCheck_6586_; 
v_a_6511_ = lean_ctor_get(v___x_6510_, 0);
v_a_6512_ = lean_ctor_get(v___x_6510_, 1);
v_isSharedCheck_6586_ = !lean_is_exclusive(v___x_6510_);
if (v_isSharedCheck_6586_ == 0)
{
v___x_6514_ = v___x_6510_;
v_isShared_6515_ = v_isSharedCheck_6586_;
goto v_resetjp_6513_;
}
else
{
lean_inc(v_a_6512_);
lean_inc(v_a_6511_);
lean_dec(v___x_6510_);
v___x_6514_ = lean_box(0);
v_isShared_6515_ = v_isSharedCheck_6586_;
goto v_resetjp_6513_;
}
v_resetjp_6513_:
{
uint8_t v___x_6516_; 
v___x_6516_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_a_6511_, v_modsys_6465_);
lean_dec(v_a_6511_);
if (v___x_6516_ == 0)
{
lean_object* v___x_6517_; lean_object* v___x_6519_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v___x_6517_ = lean_box(v___x_6516_);
if (v_isShared_6515_ == 0)
{
lean_ctor_set(v___x_6514_, 0, v___x_6517_);
v___x_6519_ = v___x_6514_;
goto v_reusejp_6518_;
}
else
{
lean_object* v_reuseFailAlloc_6520_; 
v_reuseFailAlloc_6520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6520_, 0, v___x_6517_);
lean_ctor_set(v_reuseFailAlloc_6520_, 1, v_a_6512_);
v___x_6519_ = v_reuseFailAlloc_6520_;
goto v_reusejp_6518_;
}
v_reusejp_6518_:
{
return v___x_6519_;
}
}
else
{
lean_object* v___x_6521_; 
lean_del_object(v___x_6514_);
lean_inc_ref(v_a_6425_);
v___x_6521_ = l___private_Lake_Build_UsageCutoff_0__Lake_closureHash(v___x_6496_, v_presetup_6423_, v_importArts_6424_, v___x_6451_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6512_);
if (lean_obj_tag(v___x_6521_) == 0)
{
lean_object* v_a_6522_; lean_object* v_a_6523_; lean_object* v___x_6525_; uint8_t v_isShared_6526_; uint8_t v_isSharedCheck_6576_; 
v_a_6522_ = lean_ctor_get(v___x_6521_, 0);
v_a_6523_ = lean_ctor_get(v___x_6521_, 1);
v_isSharedCheck_6576_ = !lean_is_exclusive(v___x_6521_);
if (v_isSharedCheck_6576_ == 0)
{
v___x_6525_ = v___x_6521_;
v_isShared_6526_ = v_isSharedCheck_6576_;
goto v_resetjp_6524_;
}
else
{
lean_inc(v_a_6523_);
lean_inc(v_a_6522_);
lean_dec(v___x_6521_);
v___x_6525_ = lean_box(0);
v_isShared_6526_ = v_isSharedCheck_6576_;
goto v_resetjp_6524_;
}
v_resetjp_6524_:
{
lean_object* v___x_6528_; 
lean_inc_ref(v_closure_6466_);
if (v_isShared_6486_ == 0)
{
lean_ctor_set(v___x_6485_, 0, v_closure_6466_);
v___x_6528_ = v___x_6485_;
goto v_reusejp_6527_;
}
else
{
lean_object* v_reuseFailAlloc_6575_; 
v_reuseFailAlloc_6575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6575_, 0, v_closure_6466_);
v___x_6528_ = v_reuseFailAlloc_6575_;
goto v_reusejp_6527_;
}
v_reusejp_6527_:
{
uint8_t v___x_6529_; 
v___x_6529_ = l_instBEqOption_beq___at___00__private_Lake_Build_UsageCutoff_0__Lake_closureHash_spec__1(v_a_6522_, v___x_6528_);
lean_dec_ref(v___x_6528_);
lean_dec(v_a_6522_);
if (v___x_6529_ == 0)
{
lean_object* v___x_6530_; lean_object* v___x_6532_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v___x_6530_ = lean_box(v___x_6529_);
if (v_isShared_6526_ == 0)
{
lean_ctor_set(v___x_6525_, 0, v___x_6530_);
v___x_6532_ = v___x_6525_;
goto v_reusejp_6531_;
}
else
{
lean_object* v_reuseFailAlloc_6533_; 
v_reuseFailAlloc_6533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6533_, 0, v___x_6530_);
lean_ctor_set(v_reuseFailAlloc_6533_, 1, v_a_6523_);
v___x_6532_ = v_reuseFailAlloc_6533_;
goto v_reusejp_6531_;
}
v_reusejp_6531_:
{
return v___x_6532_;
}
}
else
{
lean_object* v___x_6534_; size_t v_sz_6535_; size_t v___x_6536_; lean_object* v___x_6537_; 
lean_del_object(v___x_6525_);
v___x_6534_ = ((lean_object*)(l_Lake_Module_usageUpToDate___closed__0));
v_sz_6535_ = lean_array_size(v_used_6490_);
v___x_6536_ = ((size_t)0ULL);
lean_inc_ref(v_a_6425_);
v___x_6537_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__1(v___x_6496_, v_importArts_6424_, v_noskip_6488_, v_used_6490_, v_sz_6535_, v___x_6536_, v___x_6534_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6523_);
if (lean_obj_tag(v___x_6537_) == 0)
{
lean_object* v_a_6538_; lean_object* v_fst_6539_; 
v_a_6538_ = lean_ctor_get(v___x_6537_, 0);
v_fst_6539_ = lean_ctor_get(v_a_6538_, 0);
if (lean_obj_tag(v_fst_6539_) == 0)
{
lean_object* v_a_6540_; size_t v_sz_6541_; lean_object* v___x_6542_; 
v_a_6540_ = lean_ctor_get(v___x_6537_, 1);
lean_inc(v_a_6540_);
lean_dec_ref_known(v___x_6537_, 2);
v_sz_6541_ = lean_array_size(v_extra_6491_);
lean_inc_ref(v_a_6425_);
v___x_6542_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__2(v_val_6454_, v___x_6496_, v_importArts_6424_, v_noskip_6488_, v_extra_6491_, v_sz_6541_, v___x_6536_, v___x_6534_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6540_);
lean_dec(v_val_6454_);
if (lean_obj_tag(v___x_6542_) == 0)
{
lean_object* v_a_6543_; lean_object* v_fst_6544_; 
v_a_6543_ = lean_ctor_get(v___x_6542_, 0);
v_fst_6544_ = lean_ctor_get(v_a_6543_, 0);
if (lean_obj_tag(v_fst_6544_) == 0)
{
lean_object* v_a_6545_; lean_object* v___x_6546_; 
v_a_6545_ = lean_ctor_get(v___x_6542_, 1);
lean_inc(v_a_6545_);
lean_dec_ref_known(v___x_6542_, 2);
lean_inc_ref(v_a_6425_);
lean_inc(v_importArts_6424_);
v___x_6546_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_resolvedUnchanged(v_fst_6487_, v___x_6496_, v_importArts_6424_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6545_);
if (lean_obj_tag(v___x_6546_) == 0)
{
lean_object* v_a_6547_; uint8_t v___x_6548_; 
v_a_6547_ = lean_ctor_get(v___x_6546_, 0);
v___x_6548_ = lean_unbox(v_a_6547_);
if (v___x_6548_ == 0)
{
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
return v___x_6546_;
}
else
{
lean_object* v_a_6549_; lean_object* v___x_6550_; 
v_a_6549_ = lean_ctor_get(v___x_6546_, 1);
lean_inc(v_a_6549_);
lean_dec_ref_known(v___x_6546_, 2);
v___x_6550_ = l___private_Lake_Build_UsageCutoff_0__Lake_UsageSidecar_specProvidersUnchanged(v_fst_6487_, v___x_6496_, v_importArts_6424_, v_a_6425_, v_a_6426_, v_a_6427_, v_a_6428_, v_a_6429_, v_a_6549_);
lean_dec(v_importArts_6424_);
lean_dec(v___x_6496_);
return v___x_6550_;
}
}
else
{
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
return v___x_6546_;
}
}
else
{
lean_object* v_a_6551_; lean_object* v_val_6552_; uint8_t v___x_6553_; 
lean_inc_ref(v_fst_6544_);
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6551_ = lean_ctor_get(v___x_6542_, 1);
lean_inc(v_a_6551_);
lean_dec_ref_known(v___x_6542_, 2);
v_val_6552_ = lean_ctor_get(v_fst_6544_, 0);
lean_inc(v_val_6552_);
lean_dec_ref_known(v_fst_6544_, 1);
v___x_6553_ = lean_unbox(v_val_6552_);
lean_dec(v_val_6552_);
v_r_6433_ = v___x_6553_;
v___y_6434_ = v_a_6551_;
goto v___jp_6432_;
}
}
else
{
lean_object* v_a_6554_; lean_object* v_a_6555_; lean_object* v___x_6557_; uint8_t v_isShared_6558_; uint8_t v_isSharedCheck_6562_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6554_ = lean_ctor_get(v___x_6542_, 0);
v_a_6555_ = lean_ctor_get(v___x_6542_, 1);
v_isSharedCheck_6562_ = !lean_is_exclusive(v___x_6542_);
if (v_isSharedCheck_6562_ == 0)
{
v___x_6557_ = v___x_6542_;
v_isShared_6558_ = v_isSharedCheck_6562_;
goto v_resetjp_6556_;
}
else
{
lean_inc(v_a_6555_);
lean_inc(v_a_6554_);
lean_dec(v___x_6542_);
v___x_6557_ = lean_box(0);
v_isShared_6558_ = v_isSharedCheck_6562_;
goto v_resetjp_6556_;
}
v_resetjp_6556_:
{
lean_object* v___x_6560_; 
if (v_isShared_6558_ == 0)
{
v___x_6560_ = v___x_6557_;
goto v_reusejp_6559_;
}
else
{
lean_object* v_reuseFailAlloc_6561_; 
v_reuseFailAlloc_6561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6561_, 0, v_a_6554_);
lean_ctor_set(v_reuseFailAlloc_6561_, 1, v_a_6555_);
v___x_6560_ = v_reuseFailAlloc_6561_;
goto v_reusejp_6559_;
}
v_reusejp_6559_:
{
return v___x_6560_;
}
}
}
}
else
{
lean_object* v_a_6563_; lean_object* v_val_6564_; uint8_t v___x_6565_; 
lean_inc_ref(v_fst_6539_);
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6563_ = lean_ctor_get(v___x_6537_, 1);
lean_inc(v_a_6563_);
lean_dec_ref_known(v___x_6537_, 2);
v_val_6564_ = lean_ctor_get(v_fst_6539_, 0);
lean_inc(v_val_6564_);
lean_dec_ref_known(v_fst_6539_, 1);
v___x_6565_ = lean_unbox(v_val_6564_);
lean_dec(v_val_6564_);
v_r_6433_ = v___x_6565_;
v___y_6434_ = v_a_6563_;
goto v___jp_6432_;
}
}
else
{
lean_object* v_a_6566_; lean_object* v_a_6567_; lean_object* v___x_6569_; uint8_t v_isShared_6570_; uint8_t v_isSharedCheck_6574_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6566_ = lean_ctor_get(v___x_6537_, 0);
v_a_6567_ = lean_ctor_get(v___x_6537_, 1);
v_isSharedCheck_6574_ = !lean_is_exclusive(v___x_6537_);
if (v_isSharedCheck_6574_ == 0)
{
v___x_6569_ = v___x_6537_;
v_isShared_6570_ = v_isSharedCheck_6574_;
goto v_resetjp_6568_;
}
else
{
lean_inc(v_a_6567_);
lean_inc(v_a_6566_);
lean_dec(v___x_6537_);
v___x_6569_ = lean_box(0);
v_isShared_6570_ = v_isSharedCheck_6574_;
goto v_resetjp_6568_;
}
v_resetjp_6568_:
{
lean_object* v___x_6572_; 
if (v_isShared_6570_ == 0)
{
v___x_6572_ = v___x_6569_;
goto v_reusejp_6571_;
}
else
{
lean_object* v_reuseFailAlloc_6573_; 
v_reuseFailAlloc_6573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6573_, 0, v_a_6566_);
lean_ctor_set(v_reuseFailAlloc_6573_, 1, v_a_6567_);
v___x_6572_ = v_reuseFailAlloc_6573_;
goto v_reusejp_6571_;
}
v_reusejp_6571_:
{
return v___x_6572_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6577_; lean_object* v_a_6578_; lean_object* v___x_6580_; uint8_t v_isShared_6581_; uint8_t v_isSharedCheck_6585_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6577_ = lean_ctor_get(v___x_6521_, 0);
v_a_6578_ = lean_ctor_get(v___x_6521_, 1);
v_isSharedCheck_6585_ = !lean_is_exclusive(v___x_6521_);
if (v_isSharedCheck_6585_ == 0)
{
v___x_6580_ = v___x_6521_;
v_isShared_6581_ = v_isSharedCheck_6585_;
goto v_resetjp_6579_;
}
else
{
lean_inc(v_a_6578_);
lean_inc(v_a_6577_);
lean_dec(v___x_6521_);
v___x_6580_ = lean_box(0);
v_isShared_6581_ = v_isSharedCheck_6585_;
goto v_resetjp_6579_;
}
v_resetjp_6579_:
{
lean_object* v___x_6583_; 
if (v_isShared_6581_ == 0)
{
v___x_6583_ = v___x_6580_;
goto v_reusejp_6582_;
}
else
{
lean_object* v_reuseFailAlloc_6584_; 
v_reuseFailAlloc_6584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6584_, 0, v_a_6577_);
lean_ctor_set(v_reuseFailAlloc_6584_, 1, v_a_6578_);
v___x_6583_ = v_reuseFailAlloc_6584_;
goto v_reusejp_6582_;
}
v_reusejp_6582_:
{
return v___x_6583_;
}
}
}
}
}
}
else
{
lean_object* v_a_6587_; lean_object* v_a_6588_; lean_object* v___x_6590_; uint8_t v_isShared_6591_; uint8_t v_isSharedCheck_6595_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6587_ = lean_ctor_get(v___x_6510_, 0);
v_a_6588_ = lean_ctor_get(v___x_6510_, 1);
v_isSharedCheck_6595_ = !lean_is_exclusive(v___x_6510_);
if (v_isSharedCheck_6595_ == 0)
{
v___x_6590_ = v___x_6510_;
v_isShared_6591_ = v_isSharedCheck_6595_;
goto v_resetjp_6589_;
}
else
{
lean_inc(v_a_6588_);
lean_inc(v_a_6587_);
lean_dec(v___x_6510_);
v___x_6590_ = lean_box(0);
v_isShared_6591_ = v_isSharedCheck_6595_;
goto v_resetjp_6589_;
}
v_resetjp_6589_:
{
lean_object* v___x_6593_; 
if (v_isShared_6591_ == 0)
{
v___x_6593_ = v___x_6590_;
goto v_reusejp_6592_;
}
else
{
lean_object* v_reuseFailAlloc_6594_; 
v_reuseFailAlloc_6594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6594_, 0, v_a_6587_);
lean_ctor_set(v_reuseFailAlloc_6594_, 1, v_a_6588_);
v___x_6593_ = v_reuseFailAlloc_6594_;
goto v_reusejp_6592_;
}
v_reusejp_6592_:
{
return v___x_6593_;
}
}
}
}
}
}
else
{
lean_object* v_a_6597_; lean_object* v_a_6598_; lean_object* v___x_6600_; uint8_t v_isShared_6601_; uint8_t v_isSharedCheck_6605_; 
lean_dec(v___x_6496_);
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6597_ = lean_ctor_get(v___x_6499_, 0);
v_a_6598_ = lean_ctor_get(v___x_6499_, 1);
v_isSharedCheck_6605_ = !lean_is_exclusive(v___x_6499_);
if (v_isSharedCheck_6605_ == 0)
{
v___x_6600_ = v___x_6499_;
v_isShared_6601_ = v_isSharedCheck_6605_;
goto v_resetjp_6599_;
}
else
{
lean_inc(v_a_6598_);
lean_inc(v_a_6597_);
lean_dec(v___x_6499_);
v___x_6600_ = lean_box(0);
v_isShared_6601_ = v_isSharedCheck_6605_;
goto v_resetjp_6599_;
}
v_resetjp_6599_:
{
lean_object* v___x_6603_; 
if (v_isShared_6601_ == 0)
{
v___x_6603_ = v___x_6600_;
goto v_reusejp_6602_;
}
else
{
lean_object* v_reuseFailAlloc_6604_; 
v_reuseFailAlloc_6604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6604_, 0, v_a_6597_);
lean_ctor_set(v_reuseFailAlloc_6604_, 1, v_a_6598_);
v___x_6603_ = v_reuseFailAlloc_6604_;
goto v_reusejp_6602_;
}
v_reusejp_6602_:
{
return v___x_6603_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_6487_);
lean_del_object(v___x_6485_);
lean_dec(v_val_6454_);
lean_dec_ref(v___x_6449_);
lean_dec(v_name_6440_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
goto v___jp_6477_;
}
}
}
else
{
uint8_t v___x_6607_; lean_object* v___x_6608_; lean_object* v___x_6610_; 
lean_del_object(v___x_6475_);
lean_dec(v_a_6472_);
lean_dec(v_val_6454_);
lean_dec_ref(v___x_6449_);
lean_dec(v_name_6440_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v___x_6607_ = 0;
v___x_6608_ = lean_box(v___x_6607_);
if (v_isShared_6461_ == 0)
{
lean_ctor_set(v___x_6460_, 1, v_a_6473_);
lean_ctor_set(v___x_6460_, 0, v___x_6608_);
v___x_6610_ = v___x_6460_;
goto v_reusejp_6609_;
}
else
{
lean_object* v_reuseFailAlloc_6611_; 
v_reuseFailAlloc_6611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6611_, 0, v___x_6608_);
lean_ctor_set(v_reuseFailAlloc_6611_, 1, v_a_6473_);
v___x_6610_ = v_reuseFailAlloc_6611_;
goto v_reusejp_6609_;
}
v_reusejp_6609_:
{
return v___x_6610_;
}
}
v___jp_6477_:
{
uint8_t v___x_6478_; lean_object* v___x_6479_; lean_object* v___x_6481_; 
v___x_6478_ = 0;
v___x_6479_ = lean_box(v___x_6478_);
if (v_isShared_6476_ == 0)
{
lean_ctor_set(v___x_6475_, 0, v___x_6479_);
v___x_6481_ = v___x_6475_;
goto v_reusejp_6480_;
}
else
{
lean_object* v_reuseFailAlloc_6482_; 
v_reuseFailAlloc_6482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6482_, 0, v___x_6479_);
lean_ctor_set(v_reuseFailAlloc_6482_, 1, v_a_6473_);
v___x_6481_ = v_reuseFailAlloc_6482_;
goto v_reusejp_6480_;
}
v_reusejp_6480_:
{
return v___x_6481_;
}
}
}
}
else
{
lean_object* v_a_6613_; lean_object* v_a_6614_; lean_object* v___x_6616_; uint8_t v_isShared_6617_; uint8_t v_isSharedCheck_6621_; 
lean_del_object(v___x_6460_);
lean_dec(v_val_6454_);
lean_dec_ref(v___x_6449_);
lean_dec(v_name_6440_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6613_ = lean_ctor_get(v___x_6471_, 0);
v_a_6614_ = lean_ctor_get(v___x_6471_, 1);
v_isSharedCheck_6621_ = !lean_is_exclusive(v___x_6471_);
if (v_isSharedCheck_6621_ == 0)
{
v___x_6616_ = v___x_6471_;
v_isShared_6617_ = v_isSharedCheck_6621_;
goto v_resetjp_6615_;
}
else
{
lean_inc(v_a_6614_);
lean_inc(v_a_6613_);
lean_dec(v___x_6471_);
v___x_6616_ = lean_box(0);
v_isShared_6617_ = v_isSharedCheck_6621_;
goto v_resetjp_6615_;
}
v_resetjp_6615_:
{
lean_object* v___x_6619_; 
if (v_isShared_6617_ == 0)
{
v___x_6619_ = v___x_6616_;
goto v_reusejp_6618_;
}
else
{
lean_object* v_reuseFailAlloc_6620_; 
v_reuseFailAlloc_6620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6620_, 0, v_a_6613_);
lean_ctor_set(v_reuseFailAlloc_6620_, 1, v_a_6614_);
v___x_6619_ = v_reuseFailAlloc_6620_;
goto v_reusejp_6618_;
}
v_reusejp_6618_:
{
return v___x_6619_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6626_; lean_object* v___x_6628_; uint8_t v_isShared_6629_; uint8_t v_isSharedCheck_6635_; 
lean_dec(v_a_6453_);
lean_dec_ref(v___x_6449_);
lean_dec(v_name_6440_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6626_ = lean_ctor_get(v___x_6452_, 1);
v_isSharedCheck_6635_ = !lean_is_exclusive(v___x_6452_);
if (v_isSharedCheck_6635_ == 0)
{
lean_object* v_unused_6636_; 
v_unused_6636_ = lean_ctor_get(v___x_6452_, 0);
lean_dec(v_unused_6636_);
v___x_6628_ = v___x_6452_;
v_isShared_6629_ = v_isSharedCheck_6635_;
goto v_resetjp_6627_;
}
else
{
lean_inc(v_a_6626_);
lean_dec(v___x_6452_);
v___x_6628_ = lean_box(0);
v_isShared_6629_ = v_isSharedCheck_6635_;
goto v_resetjp_6627_;
}
v_resetjp_6627_:
{
uint8_t v___x_6630_; lean_object* v___x_6631_; lean_object* v___x_6633_; 
v___x_6630_ = 0;
v___x_6631_ = lean_box(v___x_6630_);
if (v_isShared_6629_ == 0)
{
lean_ctor_set(v___x_6628_, 0, v___x_6631_);
v___x_6633_ = v___x_6628_;
goto v_reusejp_6632_;
}
else
{
lean_object* v_reuseFailAlloc_6634_; 
v_reuseFailAlloc_6634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6634_, 0, v___x_6631_);
lean_ctor_set(v_reuseFailAlloc_6634_, 1, v_a_6626_);
v___x_6633_ = v_reuseFailAlloc_6634_;
goto v_reusejp_6632_;
}
v_reusejp_6632_:
{
return v___x_6633_;
}
}
}
}
else
{
lean_object* v_a_6637_; lean_object* v_a_6638_; lean_object* v___x_6640_; uint8_t v_isShared_6641_; uint8_t v_isSharedCheck_6645_; 
lean_dec_ref(v___x_6449_);
lean_dec(v_name_6440_);
lean_dec_ref(v_a_6425_);
lean_dec(v_importArts_6424_);
v_a_6637_ = lean_ctor_get(v___x_6452_, 0);
v_a_6638_ = lean_ctor_get(v___x_6452_, 1);
v_isSharedCheck_6645_ = !lean_is_exclusive(v___x_6452_);
if (v_isSharedCheck_6645_ == 0)
{
v___x_6640_ = v___x_6452_;
v_isShared_6641_ = v_isSharedCheck_6645_;
goto v_resetjp_6639_;
}
else
{
lean_inc(v_a_6638_);
lean_inc(v_a_6637_);
lean_dec(v___x_6452_);
v___x_6640_ = lean_box(0);
v_isShared_6641_ = v_isSharedCheck_6645_;
goto v_resetjp_6639_;
}
v_resetjp_6639_:
{
lean_object* v___x_6643_; 
if (v_isShared_6641_ == 0)
{
v___x_6643_ = v___x_6640_;
goto v_reusejp_6642_;
}
else
{
lean_object* v_reuseFailAlloc_6644_; 
v_reuseFailAlloc_6644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6644_, 0, v_a_6637_);
lean_ctor_set(v_reuseFailAlloc_6644_, 1, v_a_6638_);
v___x_6643_ = v_reuseFailAlloc_6644_;
goto v_reusejp_6642_;
}
v_reusejp_6642_:
{
return v___x_6643_;
}
}
}
v___jp_6432_:
{
lean_object* v___x_6435_; lean_object* v___x_6436_; 
v___x_6435_ = lean_box(v_r_6433_);
v___x_6436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6436_, 0, v___x_6435_);
lean_ctor_set(v___x_6436_, 1, v___y_6434_);
return v___x_6436_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_usageUpToDate___boxed(lean_object* v_mod_6646_, lean_object* v_presetup_6647_, lean_object* v_importArts_6648_, lean_object* v_a_6649_, lean_object* v_a_6650_, lean_object* v_a_6651_, lean_object* v_a_6652_, lean_object* v_a_6653_, lean_object* v_a_6654_, lean_object* v_a_6655_){
_start:
{
lean_object* v_res_6656_; 
v_res_6656_ = l_Lake_Module_usageUpToDate(v_mod_6646_, v_presetup_6647_, v_importArts_6648_, v_a_6649_, v_a_6650_, v_a_6651_, v_a_6652_, v_a_6653_, v_a_6654_);
lean_dec_ref(v_a_6653_);
lean_dec(v_a_6652_);
lean_dec(v_a_6651_);
lean_dec(v_a_6650_);
lean_dec_ref(v_presetup_6647_);
return v_res_6656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0(lean_object* v_snd_6657_, lean_object* v_as_6658_, size_t v_sz_6659_, size_t v_i_6660_, lean_object* v_b_6661_, lean_object* v___y_6662_, lean_object* v___y_6663_, lean_object* v___y_6664_, lean_object* v___y_6665_, lean_object* v___y_6666_, lean_object* v___y_6667_){
_start:
{
lean_object* v___x_6669_; 
v___x_6669_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___redArg(v_snd_6657_, v_as_6658_, v_sz_6659_, v_i_6660_, v_b_6661_, v___y_6667_);
return v___x_6669_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0___boxed(lean_object* v_snd_6670_, lean_object* v_as_6671_, lean_object* v_sz_6672_, lean_object* v_i_6673_, lean_object* v_b_6674_, lean_object* v___y_6675_, lean_object* v___y_6676_, lean_object* v___y_6677_, lean_object* v___y_6678_, lean_object* v___y_6679_, lean_object* v___y_6680_, lean_object* v___y_6681_){
_start:
{
size_t v_sz_boxed_6682_; size_t v_i_boxed_6683_; lean_object* v_res_6684_; 
v_sz_boxed_6682_ = lean_unbox_usize(v_sz_6672_);
lean_dec(v_sz_6672_);
v_i_boxed_6683_ = lean_unbox_usize(v_i_6673_);
lean_dec(v_i_6673_);
v_res_6684_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Module_usageUpToDate_spec__0(v_snd_6670_, v_as_6671_, v_sz_boxed_6682_, v_i_boxed_6683_, v_b_6674_, v___y_6675_, v___y_6676_, v___y_6677_, v___y_6678_, v___y_6679_, v___y_6680_);
lean_dec_ref(v___y_6679_);
lean_dec(v___y_6678_);
lean_dec(v___y_6677_);
lean_dec(v___y_6676_);
lean_dec_ref(v___y_6675_);
lean_dec_ref(v_as_6671_);
lean_dec_ref(v_snd_6670_);
return v_res_6684_;
}
}
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ModuleUsage_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ModuleUsage(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_UsageCutoff(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ModuleUsage_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ModuleUsage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_UsageCutoff(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lean_Util_ModuleUsage_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_ModuleUsage(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_UsageCutoff(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ModuleUsage_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ModuleUsage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_UsageCutoff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_UsageCutoff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_UsageCutoff(builtin);
}
#ifdef __cplusplus
}
#endif
