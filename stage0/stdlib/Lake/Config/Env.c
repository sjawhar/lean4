// Lean compiler output
// Module: Lake.Config.Env
// Imports: public import Lake.Config.Cache public import Lake.Config.InstallPath import Init.System.Platform
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_LeanInstall_leanCc_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Lake_envToBool_x3f(lean_object*);
lean_object* l_Lake_getSearchPath(lean_object*);
extern lean_object* l_Lake_sharedLibPathEnvVar;
extern lean_object* l_Lean_toolchain;
extern uint8_t l_System_Platform_isWindows;
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
extern lean_object* l_Lake_instInhabitedLeanInstall_default;
extern lean_object* l_Lake_instInhabitedLakeInstall_default;
lean_object* l_Lake_LeanInstall_sharedLibPath(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_System_SearchPath_toString(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_string_object l_Lake_instInhabitedEnv_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedEnv_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedEnv_default___closed__0_value;
static lean_once_cell_t l_Lake_instInhabitedEnv_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedEnv_default___closed__1;
LEAN_EXPORT lean_object* l_Lake_instInhabitedEnv_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedEnv;
static const lean_string_object l_Lake_getUserHome_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HOME"};
static const lean_object* l_Lake_getUserHome_x3f___closed__0 = (const lean_object*)&l_Lake_getUserHome_x3f___closed__0_value;
static const lean_string_object l_Lake_getUserHome_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "HOMEDRIVE"};
static const lean_object* l_Lake_getUserHome_x3f___closed__1 = (const lean_object*)&l_Lake_getUserHome_x3f___closed__1_value;
static const lean_string_object l_Lake_getUserHome_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HOMEPATH"};
static const lean_object* l_Lake_getUserHome_x3f___closed__2 = (const lean_object*)&l_Lake_getUserHome_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f();
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "XDG_CACHE_HOME"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0_value;
static const lean_string_object l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ".cache"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f();
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lake"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0_value;
static const lean_string_object l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cache"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Env_computeToolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ELAN_TOOLCHAIN"};
static const lean_object* l_Lake_Env_computeToolchain___closed__0 = (const lean_object*)&l_Lake_Env_computeToolchain___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain();
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain___boxed(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LAKE_CACHE_DIR"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f();
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfSystem_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "expected a `Name`, got '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected a `NameMap`, got '"};
static const lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0 = (const lean_object*)&l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0(lean_object*);
static const lean_string_object l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LAKE_PKG_URL_MAP"};
static const lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0_value;
static const lean_string_object l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "'LAKE_PKG_URL_MAP' has invalid JSON: "};
static const lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1 = (const lean_object*)&l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap();
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(lean_object*);
static const lean_string_object l_Lake_Env_compute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".lake"};
static const lean_object* l_Lake_Env_compute___closed__0 = (const lean_object*)&l_Lake_Env_compute___closed__0_value;
static const lean_string_object l_Lake_Env_compute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "config.toml"};
static const lean_object* l_Lake_Env_compute___closed__1 = (const lean_object*)&l_Lake_Env_compute___closed__1_value;
static const lean_string_object l_Lake_Env_compute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LAKE_NO_CACHE"};
static const lean_object* l_Lake_Env_compute___closed__2 = (const lean_object*)&l_Lake_Env_compute___closed__2_value;
static const lean_string_object l_Lake_Env_compute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LAKE_ARTIFACT_CACHE"};
static const lean_object* l_Lake_Env_compute___closed__3 = (const lean_object*)&l_Lake_Env_compute___closed__3_value;
static const lean_string_object l_Lake_Env_compute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LAKE_RESTORE_ARTIFACTS"};
static const lean_object* l_Lake_Env_compute___closed__4 = (const lean_object*)&l_Lake_Env_compute___closed__4_value;
static const lean_string_object l_Lake_Env_compute___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "LAKE_USAGE_CUTOFF"};
static const lean_object* l_Lake_Env_compute___closed__5 = (const lean_object*)&l_Lake_Env_compute___closed__5_value;
static const lean_string_object l_Lake_Env_compute___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LAKE_CONFIG"};
static const lean_object* l_Lake_Env_compute___closed__6 = (const lean_object*)&l_Lake_Env_compute___closed__6_value;
static const lean_string_object l_Lake_Env_compute___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LAKE_CACHE_KEY"};
static const lean_object* l_Lake_Env_compute___closed__7 = (const lean_object*)&l_Lake_Env_compute___closed__7_value;
static const lean_string_object l_Lake_Env_compute___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LAKE_CACHE_ARTIFACT_ENDPOINT"};
static const lean_object* l_Lake_Env_compute___closed__8 = (const lean_object*)&l_Lake_Env_compute___closed__8_value;
static const lean_string_object l_Lake_Env_compute___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LAKE_CACHE_REVISION_ENDPOINT"};
static const lean_object* l_Lake_Env_compute___closed__9 = (const lean_object*)&l_Lake_Env_compute___closed__9_value;
static const lean_string_object l_Lake_Env_compute___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LAKE_CACHE_SERVICE"};
static const lean_object* l_Lake_Env_compute___closed__10 = (const lean_object*)&l_Lake_Env_compute___closed__10_value;
static const lean_string_object l_Lake_Env_compute___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LEAN_GITHASH"};
static const lean_object* l_Lake_Env_compute___closed__11 = (const lean_object*)&l_Lake_Env_compute___closed__11_value;
static const lean_string_object l_Lake_Env_compute___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l_Lake_Env_compute___closed__12 = (const lean_object*)&l_Lake_Env_compute___closed__12_value;
static const lean_string_object l_Lake_Env_compute___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LEAN_SRC_PATH"};
static const lean_object* l_Lake_Env_compute___closed__13 = (const lean_object*)&l_Lake_Env_compute___closed__13_value;
static const lean_string_object l_Lake_Env_compute___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PATH"};
static const lean_object* l_Lake_Env_compute___closed__14 = (const lean_object*)&l_Lake_Env_compute___closed__14_value;
static const lean_string_object l_Lake_Env_compute___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "RESERVOIR_API_URL"};
static const lean_object* l_Lake_Env_compute___closed__15 = (const lean_object*)&l_Lake_Env_compute___closed__15_value;
static const lean_string_object l_Lake_Env_compute___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "/v1"};
static const lean_object* l_Lake_Env_compute___closed__16 = (const lean_object*)&l_Lake_Env_compute___closed__16_value;
static const lean_string_object l_Lake_Env_compute___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "RESERVOIR_API_BASE_URL"};
static const lean_object* l_Lake_Env_compute___closed__17 = (const lean_object*)&l_Lake_Env_compute___closed__17_value;
static const lean_string_object l_Lake_Env_compute___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "https://reservoir.lean-lang.org/api"};
static const lean_object* l_Lake_Env_compute___closed__18 = (const lean_object*)&l_Lake_Env_compute___closed__18_value;
LEAN_EXPORT lean_object* l_Lake_Env_compute(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_compute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_path(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_path___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_sharedLibPath(lean_object*);
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_computeToolchain___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__0 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__0_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LAKE"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__1 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__1_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__2 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__2_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LAKE_OVERRIDE_LEAN"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__3 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__3_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__4 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__4_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LAKE_HOME"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__5 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__5_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__6 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__6_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LEAN"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__7 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__7_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__8 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__8_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_compute___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__9 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__9_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LEAN_SYSROOT"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__10 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__10_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__11 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__11_value;
static const lean_string_object l_Lake_Env_noToolchainVars___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "LEAN_AR"};
static const lean_object* l_Lake_Env_noToolchainVars___closed__12 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__12_value;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Env_noToolchainVars___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__13 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__13_value;
static lean_once_cell_t l_Lake_Env_noToolchainVars___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Env_noToolchainVars___closed__14;
static lean_once_cell_t l_Lake_Env_noToolchainVars___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Env_noToolchainVars___closed__15;
static const lean_ctor_object l_Lake_Env_noToolchainVars___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instInhabitedEnv_default___closed__0_value)}};
static const lean_object* l_Lake_Env_noToolchainVars___closed__16 = (const lean_object*)&l_Lake_Env_noToolchainVars___closed__16_value;
LEAN_EXPORT lean_object* l_Lake_Env_noToolchainVars(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0(lean_object*);
static const lean_string_object l_Lake_Env_baseVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "LEAN_CC"};
static const lean_object* l_Lake_Env_baseVars___closed__0 = (const lean_object*)&l_Lake_Env_baseVars___closed__0_value;
static const lean_string_object l_Lake_Env_baseVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_Env_baseVars___closed__1 = (const lean_object*)&l_Lake_Env_baseVars___closed__1_value;
static const lean_string_object l_Lake_Env_baseVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_Env_baseVars___closed__2 = (const lean_object*)&l_Lake_Env_baseVars___closed__2_value;
static const lean_string_object l_Lake_Env_baseVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ELAN"};
static const lean_object* l_Lake_Env_baseVars___closed__3 = (const lean_object*)&l_Lake_Env_baseVars___closed__3_value;
static const lean_string_object l_Lake_Env_baseVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ELAN_HOME"};
static const lean_object* l_Lake_Env_baseVars___closed__4 = (const lean_object*)&l_Lake_Env_baseVars___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Env_baseVars(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_Env_vars___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Env_baseVars___closed__1_value)}};
static const lean_object* l_Lake_Env_vars___lam__0___closed__0 = (const lean_object*)&l_Lake_Env_vars___lam__0___closed__0_value;
static const lean_ctor_object l_Lake_Env_vars___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Env_baseVars___closed__2_value)}};
static const lean_object* l_Lake_Env_vars___lam__0___closed__1 = (const lean_object*)&l_Lake_Env_vars___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_vars(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath___boxed(lean_object*);
static lean_object* _init_l_Lake_instInhabitedEnv_default___closed__1(void){
_start:
{
lean_object* v___x_2_; uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_2_ = lean_box(0);
v___x_3_ = 0;
v___x_4_ = lean_box(1);
v___x_5_ = ((lean_object*)(l_Lake_instInhabitedEnv_default___closed__0));
v___x_6_ = lean_box(0);
v___x_7_ = l_Lake_instInhabitedLeanInstall_default;
v___x_8_ = l_Lake_instInhabitedLakeInstall_default;
v___x_9_ = lean_alloc_ctor(0, 20, 3);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_6_);
lean_ctor_set(v___x_9_, 3, v___x_5_);
lean_ctor_set(v___x_9_, 4, v___x_5_);
lean_ctor_set(v___x_9_, 5, v___x_4_);
lean_ctor_set(v___x_9_, 6, v___x_6_);
lean_ctor_set(v___x_9_, 7, v___x_6_);
lean_ctor_set(v___x_9_, 8, v___x_6_);
lean_ctor_set(v___x_9_, 9, v___x_6_);
lean_ctor_set(v___x_9_, 10, v___x_6_);
lean_ctor_set(v___x_9_, 11, v___x_6_);
lean_ctor_set(v___x_9_, 12, v___x_6_);
lean_ctor_set(v___x_9_, 13, v___x_6_);
lean_ctor_set(v___x_9_, 14, v___x_6_);
lean_ctor_set(v___x_9_, 15, v___x_2_);
lean_ctor_set(v___x_9_, 16, v___x_2_);
lean_ctor_set(v___x_9_, 17, v___x_2_);
lean_ctor_set(v___x_9_, 18, v___x_2_);
lean_ctor_set(v___x_9_, 19, v___x_5_);
lean_ctor_set_uint8(v___x_9_, sizeof(void*)*20, v___x_3_);
lean_ctor_set_uint8(v___x_9_, sizeof(void*)*20 + 1, v___x_3_);
lean_ctor_set_uint8(v___x_9_, sizeof(void*)*20 + 2, v___x_3_);
return v___x_9_;
}
}
static lean_object* _init_l_Lake_instInhabitedEnv_default(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lake_instInhabitedEnv_default___closed__1, &l_Lake_instInhabitedEnv_default___closed__1_once, _init_l_Lake_instInhabitedEnv_default___closed__1);
return v___x_10_;
}
}
static lean_object* _init_l_Lake_instInhabitedEnv(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lake_instInhabitedEnv_default;
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f(){
_start:
{
uint8_t v___x_16_; 
v___x_16_ = l_System_Platform_isWindows;
if (v___x_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = ((lean_object*)(l_Lake_getUserHome_x3f___closed__0));
v___x_18_ = lean_io_getenv(v___x_17_);
if (lean_obj_tag(v___x_18_) == 1)
{
lean_object* v_val_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_26_; 
v_val_19_ = lean_ctor_get(v___x_18_, 0);
v_isSharedCheck_26_ = !lean_is_exclusive(v___x_18_);
if (v_isSharedCheck_26_ == 0)
{
v___x_21_ = v___x_18_;
v_isShared_22_ = v_isSharedCheck_26_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_val_19_);
lean_dec(v___x_18_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_26_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_24_; 
if (v_isShared_22_ == 0)
{
v___x_24_ = v___x_21_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_val_19_);
v___x_24_ = v_reuseFailAlloc_25_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
return v___x_24_;
}
}
}
else
{
lean_object* v___x_27_; 
lean_dec(v___x_18_);
v___x_27_ = lean_box(0);
return v___x_27_;
}
}
else
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = ((lean_object*)(l_Lake_getUserHome_x3f___closed__1));
v___x_29_ = lean_io_getenv(v___x_28_);
if (lean_obj_tag(v___x_29_) == 1)
{
lean_object* v_val_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_val_30_ = lean_ctor_get(v___x_29_, 0);
lean_inc(v_val_30_);
lean_dec_ref_known(v___x_29_, 1);
v___x_31_ = ((lean_object*)(l_Lake_getUserHome_x3f___closed__2));
v___x_32_ = lean_io_getenv(v___x_31_);
if (lean_obj_tag(v___x_32_) == 1)
{
lean_object* v_val_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_41_; 
v_val_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_41_ == 0)
{
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_41_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_val_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_41_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_37_ = lean_string_append(v_val_30_, v_val_33_);
lean_dec(v_val_33_);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 0, v___x_37_);
v___x_39_ = v___x_35_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_37_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
else
{
lean_object* v___x_42_; 
lean_dec(v___x_32_);
lean_dec(v_val_30_);
v___x_42_ = lean_box(0);
return v___x_42_;
}
}
else
{
lean_object* v___x_43_; 
lean_dec(v___x_29_);
v___x_43_ = lean_box(0);
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getUserHome_x3f___boxed(lean_object* v_a_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lake_getUserHome_x3f();
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(lean_object* v_userHome_x3f_48_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0));
v___x_51_ = lean_io_getenv(v___x_50_);
if (lean_obj_tag(v___x_51_) == 1)
{
lean_object* v_val_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
lean_dec(v_userHome_x3f_48_);
v_val_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_59_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_val_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_val_52_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
else
{
lean_dec(v___x_51_);
if (lean_obj_tag(v_userHome_x3f_48_) == 1)
{
lean_object* v_val_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_69_; 
v_val_60_ = lean_ctor_get(v_userHome_x3f_48_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v_userHome_x3f_48_);
if (v_isSharedCheck_69_ == 0)
{
v___x_62_ = v_userHome_x3f_48_;
v_isShared_63_ = v_isSharedCheck_69_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_val_60_);
lean_dec(v_userHome_x3f_48_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_69_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_64_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1));
v___x_65_ = l_System_FilePath_join(v_val_60_, v___x_64_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 0, v___x_65_);
v___x_67_ = v___x_62_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_65_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_userHome_x3f_48_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___boxed(lean_object* v_userHome_x3f_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(v_userHome_x3f_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f(){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__0));
v___x_76_ = lean_io_getenv(v___x_75_);
if (lean_obj_tag(v___x_76_) == 1)
{
lean_object* v_val_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
v_val_77_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_76_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_val_77_);
lean_dec(v___x_76_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_val_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
else
{
lean_object* v___x_85_; 
lean_dec(v___x_76_);
v___x_85_ = l_Lake_getUserHome_x3f();
if (lean_obj_tag(v___x_85_) == 1)
{
lean_object* v_val_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_95_; 
v_val_86_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_95_ == 0)
{
v___x_88_ = v___x_85_;
v_isShared_89_ = v_isSharedCheck_95_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_val_86_);
lean_dec(v___x_85_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_95_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_90_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f___closed__1));
v___x_91_ = l_System_FilePath_join(v_val_86_, v___x_90_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_91_);
v___x_93_ = v___x_88_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v___x_96_; 
lean_dec(v___x_85_);
v___x_96_ = lean_box(0);
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getSystemCacheHome_x3f___boxed(lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lake_getSystemCacheHome_x3f();
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(lean_object* v_elan_101_, lean_object* v_toolchain_102_){
_start:
{
lean_object* v_toolchainsDir_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_toolchainsDir_103_ = lean_ctor_get(v_elan_101_, 3);
lean_inc_ref(v_toolchainsDir_103_);
lean_dec_ref(v_elan_101_);
v___x_104_ = ((lean_object*)(l_Lake_instInhabitedEnv_default___closed__0));
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(v_toolchain_102_, v___x_104_, v___x_105_);
v___x_107_ = l_System_FilePath_join(v_toolchainsDir_103_, v___x_106_);
v___x_108_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_109_ = l_System_FilePath_join(v___x_107_, v___x_108_);
v___x_110_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__1));
v___x_111_ = l_System_FilePath_join(v___x_109_, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___boxed(lean_object* v_elan_112_, lean_object* v_toolchain_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_elan_112_, v_toolchain_113_);
lean_dec_ref(v_toolchain_113_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f(lean_object* v_elan_115_, lean_object* v_toolchain_116_){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_117_ = lean_string_utf8_byte_size(v_toolchain_116_);
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_nat_dec_eq(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_elan_115_, v_toolchain_116_);
v___x_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; 
lean_dec_ref(v_elan_115_);
v___x_122_ = lean_box(0);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f___boxed(lean_object* v_elan_123_, lean_object* v_toolchain_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache_x3f(v_elan_123_, v_toolchain_124_);
lean_dec_ref(v_toolchain_124_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain(){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = ((lean_object*)(l_Lake_Env_computeToolchain___closed__0));
v___x_129_ = lean_io_getenv(v___x_128_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_toolchain;
return v___x_130_;
}
else
{
lean_object* v_val_131_; 
v_val_131_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_val_131_);
lean_dec_ref_known(v___x_129_, 1);
return v_val_131_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeToolchain___boxed(lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lake_Env_computeToolchain();
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f(){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
v___x_137_ = lean_io_getenv(v___x_136_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_138_; 
v___x_138_ = lean_box(0);
return v___x_138_;
}
else
{
lean_object* v_val_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_150_; 
v_val_139_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_150_ == 0)
{
v___x_141_ = v___x_137_;
v_isShared_142_ = v_isSharedCheck_150_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_val_139_);
lean_dec(v___x_137_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_150_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_143_ = lean_string_utf8_byte_size(v_val_139_);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; 
lean_del_object(v___x_141_);
lean_dec(v_val_139_);
v___x_146_ = lean_box(0);
return v___x_146_;
}
else
{
lean_object* v___x_148_; 
if (v_isShared_142_ == 0)
{
v___x_148_ = v___x_141_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_val_139_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___boxed(lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f();
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfSystem_x3f(lean_object* v_cacheHome_x3f_153_){
_start:
{
if (lean_obj_tag(v_cacheHome_x3f_153_) == 0)
{
lean_object* v___x_154_; 
v___x_154_ = lean_box(0);
return v___x_154_;
}
else
{
lean_object* v_val_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_164_; 
v_val_155_ = lean_ctor_get(v_cacheHome_x3f_153_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_cacheHome_x3f_153_);
if (v_isSharedCheck_164_ == 0)
{
v___x_157_ = v_cacheHome_x3f_153_;
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_val_155_);
lean_dec(v_cacheHome_x3f_153_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_159_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_160_ = l_System_FilePath_join(v_val_155_, v___x_159_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_160_);
v___x_162_ = v___x_157_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
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
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f(lean_object* v_elan_x3f_165_, lean_object* v_toolchain_166_){
_start:
{
if (lean_obj_tag(v_elan_x3f_165_) == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_box(0);
return v___x_167_;
}
else
{
lean_object* v_val_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_180_; 
v_val_168_ = lean_ctor_get(v_elan_x3f_165_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v_elan_x3f_165_);
if (v_isSharedCheck_180_ == 0)
{
v___x_170_ = v_elan_x3f_165_;
v_isShared_171_ = v_isSharedCheck_180_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_val_168_);
lean_dec(v_elan_x3f_165_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_180_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_172_ = lean_string_utf8_byte_size(v_toolchain_166_);
v___x_173_ = lean_unsigned_to_nat(0u);
v___x_174_ = lean_nat_dec_eq(v___x_172_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_val_168_, v_toolchain_166_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 0, v___x_175_);
v___x_177_ = v___x_170_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
else
{
lean_object* v___x_179_; 
lean_del_object(v___x_170_);
lean_dec(v_val_168_);
v___x_179_ = lean_box(0);
return v___x_179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f___boxed(lean_object* v_elan_x3f_181_, lean_object* v_toolchain_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l___private_Lake_Config_Env_0__Lake_Env_cacheOfToolchain_x3f(v_elan_x3f_181_, v_toolchain_182_);
lean_dec_ref(v_toolchain_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f(lean_object* v_elan_x3f_184_, lean_object* v_toolchain_185_){
_start:
{
lean_object* v_cache_188_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
v___x_203_ = lean_io_getenv(v___x_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
goto v___jp_196_;
}
else
{
lean_object* v_val_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v_val_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_203_, 1);
v___x_205_ = lean_string_utf8_byte_size(v_val_204_);
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_nat_dec_eq(v___x_205_, v___x_206_);
if (v___x_207_ == 0)
{
lean_dec(v_val_204_);
goto v___jp_196_;
}
else
{
lean_dec(v_elan_x3f_184_);
v_cache_188_ = v_val_204_;
goto v___jp_187_;
}
}
v___jp_187_:
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v_cache_188_);
return v___x_189_;
}
v___jp_190_:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lake_getSystemCacheHome_x3f();
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_box(0);
return v___x_192_;
}
else
{
lean_object* v_val_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_val_193_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v___x_191_, 1);
v___x_194_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_195_ = l_System_FilePath_join(v_val_193_, v___x_194_);
v_cache_188_ = v___x_195_;
goto v___jp_187_;
}
}
v___jp_196_:
{
if (lean_obj_tag(v_elan_x3f_184_) == 0)
{
goto v___jp_190_;
}
else
{
lean_object* v_val_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_val_197_ = lean_ctor_get(v_elan_x3f_184_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v_elan_x3f_184_, 1);
v___x_198_ = lean_string_utf8_byte_size(v_toolchain_185_);
v___x_199_ = lean_unsigned_to_nat(0u);
v___x_200_ = lean_nat_dec_eq(v___x_198_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
v___x_201_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_val_197_, v_toolchain_185_);
v_cache_188_ = v___x_201_;
goto v___jp_187_;
}
else
{
lean_dec(v_val_197_);
goto v___jp_190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_computeCache_x3f___boxed(lean_object* v_elan_x3f_208_, lean_object* v_toolchain_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lake_Env_computeCache_x3f(v_elan_x3f_208_, v_toolchain_209_);
lean_dec_ref(v_toolchain_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(lean_object* v_elan_x3f_212_, lean_object* v_userHome_x3f_213_, lean_object* v_toolchain_214_, lean_object* v_env_215_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
v___x_218_ = lean_io_getenv(v___x_217_);
if (lean_obj_tag(v___x_218_) == 1)
{
lean_object* v_val_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_334_; 
lean_dec(v_userHome_x3f_213_);
lean_dec(v_elan_x3f_212_);
v_val_263_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_334_ == 0)
{
v___x_265_ = v___x_218_;
v_isShared_266_ = v_isSharedCheck_334_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_val_263_);
lean_dec(v___x_218_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_334_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_267_ = lean_string_utf8_byte_size(v_val_263_);
v___x_268_ = lean_unsigned_to_nat(0u);
v___x_269_ = lean_nat_dec_eq(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v_lake_270_; lean_object* v_lean_271_; lean_object* v_elan_x3f_272_; lean_object* v_reservoirApiUrl_273_; lean_object* v_githashOverride_274_; lean_object* v_pkgUrlMap_275_; uint8_t v_noCache_276_; lean_object* v_enableArtifactCache_x3f_277_; lean_object* v_restoreAllArtifacts_x3f_278_; uint8_t v_usageCutoff_279_; uint8_t v_noSystemCache_280_; lean_object* v_lakeConfig_x3f_281_; lean_object* v_cacheKey_x3f_282_; lean_object* v_cacheArtifactEndpoint_x3f_283_; lean_object* v_cacheRevisionEndpoint_x3f_284_; lean_object* v_cacheService_x3f_285_; lean_object* v_initLeanPath_286_; lean_object* v_initLeanSrcPath_287_; lean_object* v_initSharedLibPath_288_; lean_object* v_initPath_289_; lean_object* v_toolchain_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_301_; 
v_lake_270_ = lean_ctor_get(v_env_215_, 0);
v_lean_271_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_272_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_273_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_274_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_275_ = lean_ctor_get(v_env_215_, 5);
v_noCache_276_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_277_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_278_ = lean_ctor_get(v_env_215_, 7);
v_usageCutoff_279_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 1);
v_noSystemCache_280_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 2);
v_lakeConfig_x3f_281_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_282_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_283_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_284_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_285_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_286_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_287_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_288_ = lean_ctor_get(v_env_215_, 17);
v_initPath_289_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_290_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_301_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_301_ == 0)
{
lean_object* v_unused_302_; lean_object* v_unused_303_; 
v_unused_302_ = lean_ctor_get(v_env_215_, 9);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_env_215_, 8);
lean_dec(v_unused_303_);
v___x_292_ = v_env_215_;
v_isShared_293_ = v_isSharedCheck_301_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_toolchain_290_);
lean_inc(v_initPath_289_);
lean_inc(v_initSharedLibPath_288_);
lean_inc(v_initLeanSrcPath_287_);
lean_inc(v_initLeanPath_286_);
lean_inc(v_cacheService_x3f_285_);
lean_inc(v_cacheRevisionEndpoint_x3f_284_);
lean_inc(v_cacheArtifactEndpoint_x3f_283_);
lean_inc(v_cacheKey_x3f_282_);
lean_inc(v_lakeConfig_x3f_281_);
lean_inc(v_restoreAllArtifacts_x3f_278_);
lean_inc(v_enableArtifactCache_x3f_277_);
lean_inc(v_pkgUrlMap_275_);
lean_inc(v_githashOverride_274_);
lean_inc(v_reservoirApiUrl_273_);
lean_inc(v_elan_x3f_272_);
lean_inc(v_lean_271_);
lean_inc(v_lake_270_);
lean_dec(v_env_215_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_301_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_266_ == 0)
{
v___x_295_ = v___x_265_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_val_263_);
v___x_295_ = v_reuseFailAlloc_300_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_297_; 
lean_inc_ref(v___x_295_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 9, v___x_295_);
lean_ctor_set(v___x_292_, 8, v___x_295_);
v___x_297_ = v___x_292_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 20, 3);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_lake_270_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_lean_271_);
lean_ctor_set(v_reuseFailAlloc_299_, 2, v_elan_x3f_272_);
lean_ctor_set(v_reuseFailAlloc_299_, 3, v_reservoirApiUrl_273_);
lean_ctor_set(v_reuseFailAlloc_299_, 4, v_githashOverride_274_);
lean_ctor_set(v_reuseFailAlloc_299_, 5, v_pkgUrlMap_275_);
lean_ctor_set(v_reuseFailAlloc_299_, 6, v_enableArtifactCache_x3f_277_);
lean_ctor_set(v_reuseFailAlloc_299_, 7, v_restoreAllArtifacts_x3f_278_);
lean_ctor_set(v_reuseFailAlloc_299_, 8, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_299_, 9, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_299_, 10, v_lakeConfig_x3f_281_);
lean_ctor_set(v_reuseFailAlloc_299_, 11, v_cacheKey_x3f_282_);
lean_ctor_set(v_reuseFailAlloc_299_, 12, v_cacheArtifactEndpoint_x3f_283_);
lean_ctor_set(v_reuseFailAlloc_299_, 13, v_cacheRevisionEndpoint_x3f_284_);
lean_ctor_set(v_reuseFailAlloc_299_, 14, v_cacheService_x3f_285_);
lean_ctor_set(v_reuseFailAlloc_299_, 15, v_initLeanPath_286_);
lean_ctor_set(v_reuseFailAlloc_299_, 16, v_initLeanSrcPath_287_);
lean_ctor_set(v_reuseFailAlloc_299_, 17, v_initSharedLibPath_288_);
lean_ctor_set(v_reuseFailAlloc_299_, 18, v_initPath_289_);
lean_ctor_set(v_reuseFailAlloc_299_, 19, v_toolchain_290_);
lean_ctor_set_uint8(v_reuseFailAlloc_299_, sizeof(void*)*20, v_noCache_276_);
lean_ctor_set_uint8(v_reuseFailAlloc_299_, sizeof(void*)*20 + 1, v_usageCutoff_279_);
lean_ctor_set_uint8(v_reuseFailAlloc_299_, sizeof(void*)*20 + 2, v_noSystemCache_280_);
v___x_297_ = v_reuseFailAlloc_299_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; 
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
}
else
{
lean_object* v_lake_304_; lean_object* v_lean_305_; lean_object* v_elan_x3f_306_; lean_object* v_reservoirApiUrl_307_; lean_object* v_githashOverride_308_; lean_object* v_pkgUrlMap_309_; uint8_t v_noCache_310_; lean_object* v_enableArtifactCache_x3f_311_; lean_object* v_restoreAllArtifacts_x3f_312_; uint8_t v_usageCutoff_313_; lean_object* v_lakeCache_x3f_314_; lean_object* v_lakeSystemCache_x3f_315_; lean_object* v_lakeConfig_x3f_316_; lean_object* v_cacheKey_x3f_317_; lean_object* v_cacheArtifactEndpoint_x3f_318_; lean_object* v_cacheRevisionEndpoint_x3f_319_; lean_object* v_cacheService_x3f_320_; lean_object* v_initLeanPath_321_; lean_object* v_initLeanSrcPath_322_; lean_object* v_initSharedLibPath_323_; lean_object* v_initPath_324_; lean_object* v_toolchain_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_333_; 
lean_del_object(v___x_265_);
lean_dec(v_val_263_);
v_lake_304_ = lean_ctor_get(v_env_215_, 0);
v_lean_305_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_306_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_307_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_308_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_309_ = lean_ctor_get(v_env_215_, 5);
v_noCache_310_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_311_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_312_ = lean_ctor_get(v_env_215_, 7);
v_usageCutoff_313_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 1);
v_lakeCache_x3f_314_ = lean_ctor_get(v_env_215_, 8);
v_lakeSystemCache_x3f_315_ = lean_ctor_get(v_env_215_, 9);
v_lakeConfig_x3f_316_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_317_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_318_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_319_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_320_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_321_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_322_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_323_ = lean_ctor_get(v_env_215_, 17);
v_initPath_324_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_325_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_333_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_333_ == 0)
{
v___x_327_ = v_env_215_;
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_toolchain_325_);
lean_inc(v_initPath_324_);
lean_inc(v_initSharedLibPath_323_);
lean_inc(v_initLeanSrcPath_322_);
lean_inc(v_initLeanPath_321_);
lean_inc(v_cacheService_x3f_320_);
lean_inc(v_cacheRevisionEndpoint_x3f_319_);
lean_inc(v_cacheArtifactEndpoint_x3f_318_);
lean_inc(v_cacheKey_x3f_317_);
lean_inc(v_lakeConfig_x3f_316_);
lean_inc(v_lakeSystemCache_x3f_315_);
lean_inc(v_lakeCache_x3f_314_);
lean_inc(v_restoreAllArtifacts_x3f_312_);
lean_inc(v_enableArtifactCache_x3f_311_);
lean_inc(v_pkgUrlMap_309_);
lean_inc(v_githashOverride_308_);
lean_inc(v_reservoirApiUrl_307_);
lean_inc(v_elan_x3f_306_);
lean_inc(v_lean_305_);
lean_inc(v_lake_304_);
lean_dec(v_env_215_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 20, 3);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_lake_304_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_lean_305_);
lean_ctor_set(v_reuseFailAlloc_332_, 2, v_elan_x3f_306_);
lean_ctor_set(v_reuseFailAlloc_332_, 3, v_reservoirApiUrl_307_);
lean_ctor_set(v_reuseFailAlloc_332_, 4, v_githashOverride_308_);
lean_ctor_set(v_reuseFailAlloc_332_, 5, v_pkgUrlMap_309_);
lean_ctor_set(v_reuseFailAlloc_332_, 6, v_enableArtifactCache_x3f_311_);
lean_ctor_set(v_reuseFailAlloc_332_, 7, v_restoreAllArtifacts_x3f_312_);
lean_ctor_set(v_reuseFailAlloc_332_, 8, v_lakeCache_x3f_314_);
lean_ctor_set(v_reuseFailAlloc_332_, 9, v_lakeSystemCache_x3f_315_);
lean_ctor_set(v_reuseFailAlloc_332_, 10, v_lakeConfig_x3f_316_);
lean_ctor_set(v_reuseFailAlloc_332_, 11, v_cacheKey_x3f_317_);
lean_ctor_set(v_reuseFailAlloc_332_, 12, v_cacheArtifactEndpoint_x3f_318_);
lean_ctor_set(v_reuseFailAlloc_332_, 13, v_cacheRevisionEndpoint_x3f_319_);
lean_ctor_set(v_reuseFailAlloc_332_, 14, v_cacheService_x3f_320_);
lean_ctor_set(v_reuseFailAlloc_332_, 15, v_initLeanPath_321_);
lean_ctor_set(v_reuseFailAlloc_332_, 16, v_initLeanSrcPath_322_);
lean_ctor_set(v_reuseFailAlloc_332_, 17, v_initSharedLibPath_323_);
lean_ctor_set(v_reuseFailAlloc_332_, 18, v_initPath_324_);
lean_ctor_set(v_reuseFailAlloc_332_, 19, v_toolchain_325_);
lean_ctor_set_uint8(v_reuseFailAlloc_332_, sizeof(void*)*20, v_noCache_310_);
lean_ctor_set_uint8(v_reuseFailAlloc_332_, sizeof(void*)*20 + 1, v_usageCutoff_313_);
v___x_330_ = v_reuseFailAlloc_332_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_331_; 
lean_ctor_set_uint8(v___x_330_, sizeof(void*)*20 + 2, v___x_269_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
return v___x_331_;
}
}
}
}
}
else
{
lean_dec(v___x_218_);
if (lean_obj_tag(v_elan_x3f_212_) == 0)
{
goto v___jp_219_;
}
else
{
lean_object* v_val_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_391_; 
v_val_335_ = lean_ctor_get(v_elan_x3f_212_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v_elan_x3f_212_);
if (v_isSharedCheck_391_ == 0)
{
v___x_337_ = v_elan_x3f_212_;
v_isShared_338_ = v_isSharedCheck_391_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_val_335_);
lean_dec(v_elan_x3f_212_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_391_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_339_ = lean_string_utf8_byte_size(v_toolchain_214_);
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = lean_nat_dec_eq(v___x_339_, v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_342_ = l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache(v_val_335_, v_toolchain_214_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_342_);
v___x_344_ = v___x_337_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_342_);
v___x_344_ = v_reuseFailAlloc_390_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v___y_347_; 
v___x_345_ = l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(v_userHome_x3f_213_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v___x_379_; 
v___x_379_ = lean_box(0);
v___y_347_ = v___x_379_;
goto v___jp_346_;
}
else
{
lean_object* v_val_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_389_; 
v_val_380_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_389_ == 0)
{
v___x_382_ = v___x_345_;
v_isShared_383_ = v_isSharedCheck_389_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_val_380_);
lean_dec(v___x_345_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_389_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_384_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_385_ = l_System_FilePath_join(v_val_380_, v___x_384_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_385_);
v___x_387_ = v___x_382_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
v___y_347_ = v___x_387_;
goto v___jp_346_;
}
}
}
v___jp_346_:
{
lean_object* v_lake_348_; lean_object* v_lean_349_; lean_object* v_elan_x3f_350_; lean_object* v_reservoirApiUrl_351_; lean_object* v_githashOverride_352_; lean_object* v_pkgUrlMap_353_; uint8_t v_noCache_354_; lean_object* v_enableArtifactCache_x3f_355_; lean_object* v_restoreAllArtifacts_x3f_356_; uint8_t v_usageCutoff_357_; uint8_t v_noSystemCache_358_; lean_object* v_lakeConfig_x3f_359_; lean_object* v_cacheKey_x3f_360_; lean_object* v_cacheArtifactEndpoint_x3f_361_; lean_object* v_cacheRevisionEndpoint_x3f_362_; lean_object* v_cacheService_x3f_363_; lean_object* v_initLeanPath_364_; lean_object* v_initLeanSrcPath_365_; lean_object* v_initSharedLibPath_366_; lean_object* v_initPath_367_; lean_object* v_toolchain_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_376_; 
v_lake_348_ = lean_ctor_get(v_env_215_, 0);
v_lean_349_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_350_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_351_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_352_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_353_ = lean_ctor_get(v_env_215_, 5);
v_noCache_354_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_355_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_356_ = lean_ctor_get(v_env_215_, 7);
v_usageCutoff_357_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 1);
v_noSystemCache_358_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 2);
v_lakeConfig_x3f_359_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_360_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_361_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_362_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_363_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_364_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_365_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_366_ = lean_ctor_get(v_env_215_, 17);
v_initPath_367_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_368_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_376_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_376_ == 0)
{
lean_object* v_unused_377_; lean_object* v_unused_378_; 
v_unused_377_ = lean_ctor_get(v_env_215_, 9);
lean_dec(v_unused_377_);
v_unused_378_ = lean_ctor_get(v_env_215_, 8);
lean_dec(v_unused_378_);
v___x_370_ = v_env_215_;
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_toolchain_368_);
lean_inc(v_initPath_367_);
lean_inc(v_initSharedLibPath_366_);
lean_inc(v_initLeanSrcPath_365_);
lean_inc(v_initLeanPath_364_);
lean_inc(v_cacheService_x3f_363_);
lean_inc(v_cacheRevisionEndpoint_x3f_362_);
lean_inc(v_cacheArtifactEndpoint_x3f_361_);
lean_inc(v_cacheKey_x3f_360_);
lean_inc(v_lakeConfig_x3f_359_);
lean_inc(v_restoreAllArtifacts_x3f_356_);
lean_inc(v_enableArtifactCache_x3f_355_);
lean_inc(v_pkgUrlMap_353_);
lean_inc(v_githashOverride_352_);
lean_inc(v_reservoirApiUrl_351_);
lean_inc(v_elan_x3f_350_);
lean_inc(v_lean_349_);
lean_inc(v_lake_348_);
lean_dec(v_env_215_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 9, v___y_347_);
lean_ctor_set(v___x_370_, 8, v___x_344_);
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 20, 3);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_lake_348_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_lean_349_);
lean_ctor_set(v_reuseFailAlloc_375_, 2, v_elan_x3f_350_);
lean_ctor_set(v_reuseFailAlloc_375_, 3, v_reservoirApiUrl_351_);
lean_ctor_set(v_reuseFailAlloc_375_, 4, v_githashOverride_352_);
lean_ctor_set(v_reuseFailAlloc_375_, 5, v_pkgUrlMap_353_);
lean_ctor_set(v_reuseFailAlloc_375_, 6, v_enableArtifactCache_x3f_355_);
lean_ctor_set(v_reuseFailAlloc_375_, 7, v_restoreAllArtifacts_x3f_356_);
lean_ctor_set(v_reuseFailAlloc_375_, 8, v___x_344_);
lean_ctor_set(v_reuseFailAlloc_375_, 9, v___y_347_);
lean_ctor_set(v_reuseFailAlloc_375_, 10, v_lakeConfig_x3f_359_);
lean_ctor_set(v_reuseFailAlloc_375_, 11, v_cacheKey_x3f_360_);
lean_ctor_set(v_reuseFailAlloc_375_, 12, v_cacheArtifactEndpoint_x3f_361_);
lean_ctor_set(v_reuseFailAlloc_375_, 13, v_cacheRevisionEndpoint_x3f_362_);
lean_ctor_set(v_reuseFailAlloc_375_, 14, v_cacheService_x3f_363_);
lean_ctor_set(v_reuseFailAlloc_375_, 15, v_initLeanPath_364_);
lean_ctor_set(v_reuseFailAlloc_375_, 16, v_initLeanSrcPath_365_);
lean_ctor_set(v_reuseFailAlloc_375_, 17, v_initSharedLibPath_366_);
lean_ctor_set(v_reuseFailAlloc_375_, 18, v_initPath_367_);
lean_ctor_set(v_reuseFailAlloc_375_, 19, v_toolchain_368_);
lean_ctor_set_uint8(v_reuseFailAlloc_375_, sizeof(void*)*20, v_noCache_354_);
lean_ctor_set_uint8(v_reuseFailAlloc_375_, sizeof(void*)*20 + 1, v_usageCutoff_357_);
lean_ctor_set_uint8(v_reuseFailAlloc_375_, sizeof(void*)*20 + 2, v_noSystemCache_358_);
v___x_373_ = v_reuseFailAlloc_375_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; 
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
}
}
}
else
{
lean_del_object(v___x_337_);
lean_dec(v_val_335_);
goto v___jp_219_;
}
}
}
}
v___jp_219_:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Lake_Config_Env_0__Lake_getSystemCacheHomeAux_x3f(v_userHome_x3f_213_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v_env_215_);
return v___x_221_;
}
else
{
lean_object* v_val_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_262_; 
v_val_222_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_262_ == 0)
{
v___x_224_ = v___x_220_;
v_isShared_225_ = v_isSharedCheck_262_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_val_222_);
lean_dec(v___x_220_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_262_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v_lake_226_; lean_object* v_lean_227_; lean_object* v_elan_x3f_228_; lean_object* v_reservoirApiUrl_229_; lean_object* v_githashOverride_230_; lean_object* v_pkgUrlMap_231_; uint8_t v_noCache_232_; lean_object* v_enableArtifactCache_x3f_233_; lean_object* v_restoreAllArtifacts_x3f_234_; uint8_t v_usageCutoff_235_; uint8_t v_noSystemCache_236_; lean_object* v_lakeConfig_x3f_237_; lean_object* v_cacheKey_x3f_238_; lean_object* v_cacheArtifactEndpoint_x3f_239_; lean_object* v_cacheRevisionEndpoint_x3f_240_; lean_object* v_cacheService_x3f_241_; lean_object* v_initLeanPath_242_; lean_object* v_initLeanSrcPath_243_; lean_object* v_initSharedLibPath_244_; lean_object* v_initPath_245_; lean_object* v_toolchain_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_259_; 
v_lake_226_ = lean_ctor_get(v_env_215_, 0);
v_lean_227_ = lean_ctor_get(v_env_215_, 1);
v_elan_x3f_228_ = lean_ctor_get(v_env_215_, 2);
v_reservoirApiUrl_229_ = lean_ctor_get(v_env_215_, 3);
v_githashOverride_230_ = lean_ctor_get(v_env_215_, 4);
v_pkgUrlMap_231_ = lean_ctor_get(v_env_215_, 5);
v_noCache_232_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20);
v_enableArtifactCache_x3f_233_ = lean_ctor_get(v_env_215_, 6);
v_restoreAllArtifacts_x3f_234_ = lean_ctor_get(v_env_215_, 7);
v_usageCutoff_235_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 1);
v_noSystemCache_236_ = lean_ctor_get_uint8(v_env_215_, sizeof(void*)*20 + 2);
v_lakeConfig_x3f_237_ = lean_ctor_get(v_env_215_, 10);
v_cacheKey_x3f_238_ = lean_ctor_get(v_env_215_, 11);
v_cacheArtifactEndpoint_x3f_239_ = lean_ctor_get(v_env_215_, 12);
v_cacheRevisionEndpoint_x3f_240_ = lean_ctor_get(v_env_215_, 13);
v_cacheService_x3f_241_ = lean_ctor_get(v_env_215_, 14);
v_initLeanPath_242_ = lean_ctor_get(v_env_215_, 15);
v_initLeanSrcPath_243_ = lean_ctor_get(v_env_215_, 16);
v_initSharedLibPath_244_ = lean_ctor_get(v_env_215_, 17);
v_initPath_245_ = lean_ctor_get(v_env_215_, 18);
v_toolchain_246_ = lean_ctor_get(v_env_215_, 19);
v_isSharedCheck_259_ = !lean_is_exclusive(v_env_215_);
if (v_isSharedCheck_259_ == 0)
{
lean_object* v_unused_260_; lean_object* v_unused_261_; 
v_unused_260_ = lean_ctor_get(v_env_215_, 9);
lean_dec(v_unused_260_);
v_unused_261_ = lean_ctor_get(v_env_215_, 8);
lean_dec(v_unused_261_);
v___x_248_ = v_env_215_;
v_isShared_249_ = v_isSharedCheck_259_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_toolchain_246_);
lean_inc(v_initPath_245_);
lean_inc(v_initSharedLibPath_244_);
lean_inc(v_initLeanSrcPath_243_);
lean_inc(v_initLeanPath_242_);
lean_inc(v_cacheService_x3f_241_);
lean_inc(v_cacheRevisionEndpoint_x3f_240_);
lean_inc(v_cacheArtifactEndpoint_x3f_239_);
lean_inc(v_cacheKey_x3f_238_);
lean_inc(v_lakeConfig_x3f_237_);
lean_inc(v_restoreAllArtifacts_x3f_234_);
lean_inc(v_enableArtifactCache_x3f_233_);
lean_inc(v_pkgUrlMap_231_);
lean_inc(v_githashOverride_230_);
lean_inc(v_reservoirApiUrl_229_);
lean_inc(v_elan_x3f_228_);
lean_inc(v_lean_227_);
lean_inc(v_lake_226_);
lean_dec(v_env_215_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_259_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_250_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_ElanInstall_lakeToolchainCache___closed__0));
v___x_251_ = l_System_FilePath_join(v_val_222_, v___x_250_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 0, v___x_251_);
v___x_253_ = v___x_224_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_251_);
v___x_253_ = v_reuseFailAlloc_258_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
lean_object* v___x_255_; 
lean_inc_ref(v___x_253_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 9, v___x_253_);
lean_ctor_set(v___x_248_, 8, v___x_253_);
v___x_255_ = v___x_248_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 20, 3);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_lake_226_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v_lean_227_);
lean_ctor_set(v_reuseFailAlloc_257_, 2, v_elan_x3f_228_);
lean_ctor_set(v_reuseFailAlloc_257_, 3, v_reservoirApiUrl_229_);
lean_ctor_set(v_reuseFailAlloc_257_, 4, v_githashOverride_230_);
lean_ctor_set(v_reuseFailAlloc_257_, 5, v_pkgUrlMap_231_);
lean_ctor_set(v_reuseFailAlloc_257_, 6, v_enableArtifactCache_x3f_233_);
lean_ctor_set(v_reuseFailAlloc_257_, 7, v_restoreAllArtifacts_x3f_234_);
lean_ctor_set(v_reuseFailAlloc_257_, 8, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_257_, 9, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_257_, 10, v_lakeConfig_x3f_237_);
lean_ctor_set(v_reuseFailAlloc_257_, 11, v_cacheKey_x3f_238_);
lean_ctor_set(v_reuseFailAlloc_257_, 12, v_cacheArtifactEndpoint_x3f_239_);
lean_ctor_set(v_reuseFailAlloc_257_, 13, v_cacheRevisionEndpoint_x3f_240_);
lean_ctor_set(v_reuseFailAlloc_257_, 14, v_cacheService_x3f_241_);
lean_ctor_set(v_reuseFailAlloc_257_, 15, v_initLeanPath_242_);
lean_ctor_set(v_reuseFailAlloc_257_, 16, v_initLeanSrcPath_243_);
lean_ctor_set(v_reuseFailAlloc_257_, 17, v_initSharedLibPath_244_);
lean_ctor_set(v_reuseFailAlloc_257_, 18, v_initPath_245_);
lean_ctor_set(v_reuseFailAlloc_257_, 19, v_toolchain_246_);
lean_ctor_set_uint8(v_reuseFailAlloc_257_, sizeof(void*)*20, v_noCache_232_);
lean_ctor_set_uint8(v_reuseFailAlloc_257_, sizeof(void*)*20 + 1, v_usageCutoff_235_);
lean_ctor_set_uint8(v_reuseFailAlloc_257_, sizeof(void*)*20 + 2, v_noSystemCache_236_);
v___x_255_ = v_reuseFailAlloc_257_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_256_; 
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs___boxed(lean_object* v_elan_x3f_392_, lean_object* v_userHome_x3f_393_, lean_object* v_toolchain_394_, lean_object* v_env_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(v_elan_x3f_392_, v_userHome_x3f_393_, v_toolchain_394_, v_env_395_);
lean_dec_ref(v_toolchain_394_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(lean_object* v_init_401_, lean_object* v_x_402_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
lean_object* v_k_403_; lean_object* v_v_404_; lean_object* v_l_405_; lean_object* v_r_406_; lean_object* v___x_407_; 
v_k_403_ = lean_ctor_get(v_x_402_, 1);
lean_inc(v_k_403_);
v_v_404_ = lean_ctor_get(v_x_402_, 2);
lean_inc(v_v_404_);
v_l_405_ = lean_ctor_get(v_x_402_, 3);
lean_inc(v_l_405_);
v_r_406_ = lean_ctor_get(v_x_402_, 4);
lean_inc(v_r_406_);
lean_dec_ref_known(v_x_402_, 5);
v___x_407_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(v_init_401_, v_l_405_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_dec(v_r_406_);
lean_dec(v_v_404_);
lean_dec(v_k_403_);
return v___x_407_;
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_448_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_448_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_448_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_448_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__0));
v___x_413_ = lean_string_dec_eq(v_k_403_, v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v_n_414_; uint8_t v___x_415_; 
lean_inc(v_k_403_);
v_n_414_ = l_String_toName(v_k_403_);
v___x_415_ = l_Lean_Name_isAnonymous(v_n_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; 
lean_del_object(v___x_410_);
lean_dec(v_k_403_);
v___x_416_ = l_Lean_Json_getStr_x3f(v_v_404_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v_n_414_);
lean_dec(v_a_408_);
lean_dec(v_r_406_);
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_426_; 
v_a_425_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_416_, 1);
v___x_426_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_414_, v_a_425_, v_a_408_);
v_init_401_ = v___x_426_;
v_x_402_ = v_r_406_;
goto _start;
}
}
else
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_433_; 
lean_dec(v_n_414_);
lean_dec(v_a_408_);
lean_dec(v_r_406_);
lean_dec(v_v_404_);
v___x_428_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__1));
v___x_429_ = lean_string_append(v___x_428_, v_k_403_);
lean_dec(v_k_403_);
v___x_430_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2));
v___x_431_ = lean_string_append(v___x_429_, v___x_430_);
if (v_isShared_411_ == 0)
{
lean_ctor_set_tag(v___x_410_, 0);
lean_ctor_set(v___x_410_, 0, v___x_431_);
v___x_433_ = v___x_410_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
else
{
lean_object* v___x_435_; 
lean_del_object(v___x_410_);
lean_dec(v_k_403_);
v___x_435_ = l_Lean_Json_getStr_x3f(v_v_404_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec(v_a_408_);
lean_dec(v_r_406_);
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_a_444_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___x_435_, 1);
v___x_445_ = lean_box(0);
v___x_446_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_445_, v_a_444_, v_a_408_);
v_init_401_ = v___x_446_;
v_x_402_ = v_r_406_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_449_; 
v___x_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_449_, 0, v_init_401_);
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0(lean_object* v_x_451_){
_start:
{
if (lean_obj_tag(v_x_451_) == 5)
{
lean_object* v_kvPairs_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_kvPairs_452_ = lean_ctor_get(v_x_451_, 0);
lean_inc(v_kvPairs_452_);
lean_dec_ref_known(v_x_451_, 1);
v___x_453_ = lean_box(1);
v___x_454_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0(v___x_453_, v_kvPairs_452_);
return v___x_454_;
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_455_ = ((lean_object*)(l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0___closed__0));
v___x_456_ = lean_unsigned_to_nat(80u);
v___x_457_ = l_Lean_Json_pretty(v_x_451_, v___x_456_);
v___x_458_ = lean_string_append(v___x_455_, v___x_457_);
lean_dec_ref(v___x_457_);
v___x_459_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_foldlM___at___00Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0_spec__0___closed__2));
v___x_460_ = lean_string_append(v___x_458_, v___x_459_);
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap(){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_a_468_; 
v___x_465_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0));
v___x_466_ = lean_io_getenv(v___x_465_);
if (lean_obj_tag(v___x_466_) == 1)
{
lean_object* v_val_472_; lean_object* v___x_473_; 
v_val_472_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_val_472_);
lean_dec_ref_known(v___x_466_, 1);
v___x_473_ = l_Lean_Json_parse(v_val_472_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_a_474_);
lean_dec_ref_known(v___x_473_, 1);
v_a_468_ = v_a_474_;
goto v___jp_467_;
}
else
{
lean_object* v_a_475_; lean_object* v___x_476_; 
v_a_475_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_473_, 1);
v___x_476_ = l_Lean_NameMap_fromJson_x3f___at___00__private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap_spec__0(v_a_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_476_, 1);
v_a_468_ = v_a_477_;
goto v___jp_467_;
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
v_a_478_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v___x_476_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_476_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
lean_ctor_set_tag(v___x_480_, 0);
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_478_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; 
lean_dec(v___x_466_);
v___x_486_ = lean_box(1);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
v___jp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__1));
v___x_470_ = lean_string_append(v___x_469_, v_a_468_);
lean_dec_ref(v_a_468_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___boxed(lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap();
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(lean_object* v_url_490_){
_start:
{
uint32_t v___y_492_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_503_ = lean_unsigned_to_nat(0u);
v___x_504_ = lean_string_utf8_byte_size(v_url_490_);
lean_inc_ref(v_url_490_);
v___x_505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_505_, 0, v_url_490_);
lean_ctor_set(v___x_505_, 1, v___x_503_);
lean_ctor_set(v___x_505_, 2, v___x_504_);
v___x_506_ = l_String_Slice_Pos_prev_x3f(v___x_505_, v___x_504_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_dec_ref_known(v___x_505_, 3);
goto v___jp_501_;
}
else
{
lean_object* v_val_507_; lean_object* v___x_508_; 
v_val_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_val_507_);
lean_dec_ref_known(v___x_506_, 1);
v___x_508_ = l_String_Slice_Pos_get_x3f(v___x_505_, v_val_507_);
lean_dec(v_val_507_);
lean_dec_ref_known(v___x_505_, 3);
if (lean_obj_tag(v___x_508_) == 0)
{
goto v___jp_501_;
}
else
{
lean_object* v_val_509_; uint32_t v___x_510_; 
v_val_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_val_509_);
lean_dec_ref_known(v___x_508_, 1);
v___x_510_ = lean_unbox_uint32(v_val_509_);
lean_dec(v_val_509_);
v___y_492_ = v___x_510_;
goto v___jp_491_;
}
}
v___jp_491_:
{
uint32_t v___x_493_; uint8_t v___x_494_; 
v___x_493_ = 47;
v___x_494_ = lean_uint32_dec_eq(v___y_492_, v___x_493_);
if (v___x_494_ == 0)
{
return v_url_490_;
}
else
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_495_ = lean_unsigned_to_nat(1u);
v___x_496_ = lean_unsigned_to_nat(0u);
v___x_497_ = lean_string_utf8_byte_size(v_url_490_);
lean_inc_ref(v_url_490_);
v___x_498_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_498_, 0, v_url_490_);
lean_ctor_set(v___x_498_, 1, v___x_496_);
lean_ctor_set(v___x_498_, 2, v___x_497_);
v___x_499_ = l_String_Slice_Pos_prevn(v___x_498_, v___x_497_, v___x_495_);
lean_dec_ref_known(v___x_498_, 3);
v___x_500_ = lean_string_utf8_extract_fast(v_url_490_, v___x_496_, v___x_499_);
lean_dec(v___x_499_);
lean_dec_ref(v_url_490_);
return v___x_500_;
}
}
v___jp_501_:
{
uint32_t v___x_502_; 
v___x_502_ = 65;
v___y_492_ = v___x_502_;
goto v___jp_491_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_compute(lean_object* v_lake_530_, lean_object* v_lean_531_, lean_object* v_elan_x3f_532_, lean_object* v_noCache_533_){
_start:
{
lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; uint8_t v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_551_; uint8_t v___y_552_; lean_object* v___y_553_; uint8_t v___y_554_; lean_object* v___y_555_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; uint8_t v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; uint8_t v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; uint8_t v___y_577_; lean_object* v___y_578_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; uint8_t v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; uint8_t v___y_613_; uint8_t v___y_614_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; uint8_t v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; uint8_t v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; uint8_t v___y_645_; lean_object* v___y_646_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; uint8_t v___y_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; uint8_t v___y_673_; uint8_t v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; uint8_t v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; uint8_t v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; uint8_t v___y_712_; lean_object* v_val_713_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_725_; lean_object* v___y_726_; lean_object* v___y_727_; lean_object* v___y_728_; lean_object* v___y_729_; lean_object* v___y_730_; lean_object* v___y_731_; uint8_t v___y_732_; uint8_t v___y_733_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; uint8_t v___y_758_; lean_object* v___y_759_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_776_; uint8_t v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_791_; lean_object* v___y_792_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; uint8_t v___y_801_; lean_object* v___y_802_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; uint8_t v___y_824_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v_a_876_; lean_object* v_a_908_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l_Lake_Env_compute___closed__17));
v___x_928_ = lean_io_getenv(v___x_927_);
if (lean_obj_tag(v___x_928_) == 1)
{
lean_object* v_val_929_; lean_object* v___x_930_; 
v_val_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_val_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_929_);
v_a_908_ = v___x_930_;
goto v___jp_907_;
}
else
{
lean_object* v___x_931_; 
lean_dec(v___x_928_);
v___x_931_ = ((lean_object*)(l_Lake_Env_compute___closed__18));
v_a_908_ = v___x_931_;
goto v___jp_907_;
}
v___jp_535_:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_inc_ref(v___y_543_);
lean_inc_n(v___y_538_, 2);
lean_inc(v_elan_x3f_532_);
v___x_556_ = lean_alloc_ctor(0, 20, 3);
lean_ctor_set(v___x_556_, 0, v_lake_530_);
lean_ctor_set(v___x_556_, 1, v_lean_531_);
lean_ctor_set(v___x_556_, 2, v_elan_x3f_532_);
lean_ctor_set(v___x_556_, 3, v___y_547_);
lean_ctor_set(v___x_556_, 4, v___y_537_);
lean_ctor_set(v___x_556_, 5, v___y_549_);
lean_ctor_set(v___x_556_, 6, v___y_542_);
lean_ctor_set(v___x_556_, 7, v___y_550_);
lean_ctor_set(v___x_556_, 8, v___y_538_);
lean_ctor_set(v___x_556_, 9, v___y_538_);
lean_ctor_set(v___x_556_, 10, v___y_539_);
lean_ctor_set(v___x_556_, 11, v___y_540_);
lean_ctor_set(v___x_556_, 12, v___y_541_);
lean_ctor_set(v___x_556_, 13, v___y_553_);
lean_ctor_set(v___x_556_, 14, v___y_555_);
lean_ctor_set(v___x_556_, 15, v___y_544_);
lean_ctor_set(v___x_556_, 16, v___y_548_);
lean_ctor_set(v___x_556_, 17, v___y_536_);
lean_ctor_set(v___x_556_, 18, v___y_551_);
lean_ctor_set(v___x_556_, 19, v___y_543_);
lean_ctor_set_uint8(v___x_556_, sizeof(void*)*20, v___y_554_);
lean_ctor_set_uint8(v___x_556_, sizeof(void*)*20 + 1, v___y_546_);
lean_ctor_set_uint8(v___x_556_, sizeof(void*)*20 + 2, v___y_552_);
v___x_557_ = l___private_Lake_Config_Env_0__Lake_Env_compute_addCacheDirs(v_elan_x3f_532_, v___y_545_, v___y_543_, v___x_556_);
lean_dec_ref(v___y_543_);
return v___x_557_;
}
v___jp_558_:
{
if (lean_obj_tag(v___y_576_) == 0)
{
lean_object* v___x_579_; 
v___x_579_ = lean_box(0);
v___y_536_ = v___y_559_;
v___y_537_ = v___y_560_;
v___y_538_ = v___y_561_;
v___y_539_ = v___y_562_;
v___y_540_ = v___y_563_;
v___y_541_ = v___y_564_;
v___y_542_ = v___y_565_;
v___y_543_ = v___y_566_;
v___y_544_ = v___y_567_;
v___y_545_ = v___y_568_;
v___y_546_ = v___y_569_;
v___y_547_ = v___y_570_;
v___y_548_ = v___y_571_;
v___y_549_ = v___y_572_;
v___y_550_ = v___y_573_;
v___y_551_ = v___y_575_;
v___y_552_ = v___y_574_;
v___y_553_ = v___y_578_;
v___y_554_ = v___y_577_;
v___y_555_ = v___x_579_;
goto v___jp_535_;
}
else
{
lean_object* v_val_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_595_; 
v_val_580_ = lean_ctor_get(v___y_576_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___y_576_);
if (v_isSharedCheck_595_ == 0)
{
v___x_582_ = v___y_576_;
v_isShared_583_ = v_isSharedCheck_595_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_val_580_);
lean_dec(v___y_576_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_595_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v_str_588_; lean_object* v_startInclusive_589_; lean_object* v_endExclusive_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = lean_string_utf8_byte_size(v_val_580_);
v___x_586_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_586_, 0, v_val_580_);
lean_ctor_set(v___x_586_, 1, v___x_584_);
lean_ctor_set(v___x_586_, 2, v___x_585_);
v___x_587_ = l_String_Slice_trimAscii(v___x_586_);
v_str_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc_ref(v_str_588_);
v_startInclusive_589_ = lean_ctor_get(v___x_587_, 1);
lean_inc(v_startInclusive_589_);
v_endExclusive_590_ = lean_ctor_get(v___x_587_, 2);
lean_inc(v_endExclusive_590_);
lean_dec_ref(v___x_587_);
v___x_591_ = lean_string_utf8_extract_fast(v_str_588_, v_startInclusive_589_, v_endExclusive_590_);
lean_dec(v_endExclusive_590_);
lean_dec(v_startInclusive_589_);
lean_dec_ref(v_str_588_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_591_);
v___x_593_ = v___x_582_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
v___y_536_ = v___y_559_;
v___y_537_ = v___y_560_;
v___y_538_ = v___y_561_;
v___y_539_ = v___y_562_;
v___y_540_ = v___y_563_;
v___y_541_ = v___y_564_;
v___y_542_ = v___y_565_;
v___y_543_ = v___y_566_;
v___y_544_ = v___y_567_;
v___y_545_ = v___y_568_;
v___y_546_ = v___y_569_;
v___y_547_ = v___y_570_;
v___y_548_ = v___y_571_;
v___y_549_ = v___y_572_;
v___y_550_ = v___y_573_;
v___y_551_ = v___y_575_;
v___y_552_ = v___y_574_;
v___y_553_ = v___y_578_;
v___y_554_ = v___y_577_;
v___y_555_ = v___x_593_;
goto v___jp_535_;
}
}
}
}
v___jp_596_:
{
if (lean_obj_tag(v___y_601_) == 0)
{
v___y_559_ = v___y_597_;
v___y_560_ = v___y_598_;
v___y_561_ = v___y_599_;
v___y_562_ = v___y_600_;
v___y_563_ = v___y_602_;
v___y_564_ = v___y_616_;
v___y_565_ = v___y_603_;
v___y_566_ = v___y_604_;
v___y_567_ = v___y_605_;
v___y_568_ = v___y_606_;
v___y_569_ = v___y_607_;
v___y_570_ = v___y_608_;
v___y_571_ = v___y_609_;
v___y_572_ = v___y_610_;
v___y_573_ = v___y_611_;
v___y_574_ = v___y_613_;
v___y_575_ = v___y_612_;
v___y_576_ = v___y_615_;
v___y_577_ = v___y_614_;
v___y_578_ = v___y_601_;
goto v___jp_558_;
}
else
{
lean_object* v_val_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_625_; 
v_val_617_ = lean_ctor_get(v___y_601_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___y_601_);
if (v_isSharedCheck_625_ == 0)
{
v___x_619_ = v___y_601_;
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_val_617_);
lean_dec(v___y_601_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_617_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_621_);
v___x_623_ = v___x_619_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v___y_559_ = v___y_597_;
v___y_560_ = v___y_598_;
v___y_561_ = v___y_599_;
v___y_562_ = v___y_600_;
v___y_563_ = v___y_602_;
v___y_564_ = v___y_616_;
v___y_565_ = v___y_603_;
v___y_566_ = v___y_604_;
v___y_567_ = v___y_605_;
v___y_568_ = v___y_606_;
v___y_569_ = v___y_607_;
v___y_570_ = v___y_608_;
v___y_571_ = v___y_609_;
v___y_572_ = v___y_610_;
v___y_573_ = v___y_611_;
v___y_574_ = v___y_613_;
v___y_575_ = v___y_612_;
v___y_576_ = v___y_615_;
v___y_577_ = v___y_614_;
v___y_578_ = v___x_623_;
goto v___jp_558_;
}
}
}
}
v___jp_626_:
{
if (lean_obj_tag(v___y_627_) == 0)
{
v___y_597_ = v___y_628_;
v___y_598_ = v___y_629_;
v___y_599_ = v___y_630_;
v___y_600_ = v___y_631_;
v___y_601_ = v___y_632_;
v___y_602_ = v___y_646_;
v___y_603_ = v___y_633_;
v___y_604_ = v___y_634_;
v___y_605_ = v___y_635_;
v___y_606_ = v___y_636_;
v___y_607_ = v___y_637_;
v___y_608_ = v___y_638_;
v___y_609_ = v___y_639_;
v___y_610_ = v___y_640_;
v___y_611_ = v___y_641_;
v___y_612_ = v___y_643_;
v___y_613_ = v___y_642_;
v___y_614_ = v___y_645_;
v___y_615_ = v___y_644_;
v___y_616_ = v___y_627_;
goto v___jp_596_;
}
else
{
lean_object* v_val_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_655_; 
v_val_647_ = lean_ctor_get(v___y_627_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___y_627_);
if (v_isSharedCheck_655_ == 0)
{
v___x_649_ = v___y_627_;
v_isShared_650_ = v_isSharedCheck_655_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_val_647_);
lean_dec(v___y_627_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_655_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_651_; lean_object* v___x_653_; 
v___x_651_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_647_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 0, v___x_651_);
v___x_653_ = v___x_649_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
v___y_597_ = v___y_628_;
v___y_598_ = v___y_629_;
v___y_599_ = v___y_630_;
v___y_600_ = v___y_631_;
v___y_601_ = v___y_632_;
v___y_602_ = v___y_646_;
v___y_603_ = v___y_633_;
v___y_604_ = v___y_634_;
v___y_605_ = v___y_635_;
v___y_606_ = v___y_636_;
v___y_607_ = v___y_637_;
v___y_608_ = v___y_638_;
v___y_609_ = v___y_639_;
v___y_610_ = v___y_640_;
v___y_611_ = v___y_641_;
v___y_612_ = v___y_643_;
v___y_613_ = v___y_642_;
v___y_614_ = v___y_645_;
v___y_615_ = v___y_644_;
v___y_616_ = v___x_653_;
goto v___jp_596_;
}
}
}
}
v___jp_656_:
{
if (lean_obj_tag(v___y_669_) == 0)
{
v___y_627_ = v___y_657_;
v___y_628_ = v___y_658_;
v___y_629_ = v___y_659_;
v___y_630_ = v___y_660_;
v___y_631_ = v___y_676_;
v___y_632_ = v___y_661_;
v___y_633_ = v___y_662_;
v___y_634_ = v___y_663_;
v___y_635_ = v___y_664_;
v___y_636_ = v___y_665_;
v___y_637_ = v___y_666_;
v___y_638_ = v___y_667_;
v___y_639_ = v___y_668_;
v___y_640_ = v___y_670_;
v___y_641_ = v___y_671_;
v___y_642_ = v___y_673_;
v___y_643_ = v___y_672_;
v___y_644_ = v___y_675_;
v___y_645_ = v___y_674_;
v___y_646_ = v___y_669_;
goto v___jp_626_;
}
else
{
lean_object* v_val_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_692_; 
v_val_677_ = lean_ctor_get(v___y_669_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___y_669_);
if (v_isSharedCheck_692_ == 0)
{
v___x_679_ = v___y_669_;
v_isShared_680_ = v_isSharedCheck_692_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_val_677_);
lean_dec(v___y_669_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_692_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v_str_685_; lean_object* v_startInclusive_686_; lean_object* v_endExclusive_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = lean_string_utf8_byte_size(v_val_677_);
v___x_683_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_683_, 0, v_val_677_);
lean_ctor_set(v___x_683_, 1, v___x_681_);
lean_ctor_set(v___x_683_, 2, v___x_682_);
v___x_684_ = l_String_Slice_trimAscii(v___x_683_);
v_str_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc_ref(v_str_685_);
v_startInclusive_686_ = lean_ctor_get(v___x_684_, 1);
lean_inc(v_startInclusive_686_);
v_endExclusive_687_ = lean_ctor_get(v___x_684_, 2);
lean_inc(v_endExclusive_687_);
lean_dec_ref(v___x_684_);
v___x_688_ = lean_string_utf8_extract_fast(v_str_685_, v_startInclusive_686_, v_endExclusive_687_);
lean_dec(v_endExclusive_687_);
lean_dec(v_startInclusive_686_);
lean_dec_ref(v_str_685_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_688_);
v___x_690_ = v___x_679_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
v___y_627_ = v___y_657_;
v___y_628_ = v___y_658_;
v___y_629_ = v___y_659_;
v___y_630_ = v___y_660_;
v___y_631_ = v___y_676_;
v___y_632_ = v___y_661_;
v___y_633_ = v___y_662_;
v___y_634_ = v___y_663_;
v___y_635_ = v___y_664_;
v___y_636_ = v___y_665_;
v___y_637_ = v___y_666_;
v___y_638_ = v___y_667_;
v___y_639_ = v___y_668_;
v___y_640_ = v___y_670_;
v___y_641_ = v___y_671_;
v___y_642_ = v___y_673_;
v___y_643_ = v___y_672_;
v___y_644_ = v___y_675_;
v___y_645_ = v___y_674_;
v___y_646_ = v___x_690_;
goto v___jp_626_;
}
}
}
}
v___jp_693_:
{
lean_object* v___x_714_; 
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v_val_713_);
v___y_657_ = v___y_694_;
v___y_658_ = v___y_695_;
v___y_659_ = v___y_696_;
v___y_660_ = v___y_697_;
v___y_661_ = v___y_698_;
v___y_662_ = v___y_699_;
v___y_663_ = v___y_700_;
v___y_664_ = v___y_701_;
v___y_665_ = v___y_702_;
v___y_666_ = v___y_703_;
v___y_667_ = v___y_704_;
v___y_668_ = v___y_705_;
v___y_669_ = v___y_706_;
v___y_670_ = v___y_707_;
v___y_671_ = v___y_708_;
v___y_672_ = v___y_710_;
v___y_673_ = v___y_709_;
v___y_674_ = v___y_712_;
v___y_675_ = v___y_711_;
v___y_676_ = v___x_714_;
goto v___jp_656_;
}
v___jp_715_:
{
uint8_t v___x_734_; lean_object* v___x_735_; 
v___x_734_ = 0;
v___x_735_ = lean_box(0);
if (lean_obj_tag(v___y_726_) == 0)
{
if (lean_obj_tag(v___y_723_) == 0)
{
v___y_657_ = v___y_716_;
v___y_658_ = v___y_717_;
v___y_659_ = v___y_718_;
v___y_660_ = v___x_735_;
v___y_661_ = v___y_719_;
v___y_662_ = v___y_720_;
v___y_663_ = v___y_721_;
v___y_664_ = v___y_722_;
v___y_665_ = v___y_723_;
v___y_666_ = v___y_733_;
v___y_667_ = v___y_724_;
v___y_668_ = v___y_725_;
v___y_669_ = v___y_727_;
v___y_670_ = v___y_728_;
v___y_671_ = v___y_729_;
v___y_672_ = v___y_730_;
v___y_673_ = v___x_734_;
v___y_674_ = v___y_732_;
v___y_675_ = v___y_731_;
v___y_676_ = v___y_723_;
goto v___jp_656_;
}
else
{
lean_object* v_val_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_val_736_ = lean_ctor_get(v___y_723_, 0);
v___x_737_ = ((lean_object*)(l_Lake_Env_compute___closed__0));
lean_inc(v_val_736_);
v___x_738_ = l_System_FilePath_join(v_val_736_, v___x_737_);
v___x_739_ = ((lean_object*)(l_Lake_Env_compute___closed__1));
v___x_740_ = l_System_FilePath_join(v___x_738_, v___x_739_);
v___y_694_ = v___y_716_;
v___y_695_ = v___y_717_;
v___y_696_ = v___y_718_;
v___y_697_ = v___x_735_;
v___y_698_ = v___y_719_;
v___y_699_ = v___y_720_;
v___y_700_ = v___y_721_;
v___y_701_ = v___y_722_;
v___y_702_ = v___y_723_;
v___y_703_ = v___y_733_;
v___y_704_ = v___y_724_;
v___y_705_ = v___y_725_;
v___y_706_ = v___y_727_;
v___y_707_ = v___y_728_;
v___y_708_ = v___y_729_;
v___y_709_ = v___x_734_;
v___y_710_ = v___y_730_;
v___y_711_ = v___y_731_;
v___y_712_ = v___y_732_;
v_val_713_ = v___x_740_;
goto v___jp_693_;
}
}
else
{
lean_object* v_val_741_; 
v_val_741_ = lean_ctor_get(v___y_726_, 0);
lean_inc(v_val_741_);
lean_dec_ref_known(v___y_726_, 1);
v___y_694_ = v___y_716_;
v___y_695_ = v___y_717_;
v___y_696_ = v___y_718_;
v___y_697_ = v___x_735_;
v___y_698_ = v___y_719_;
v___y_699_ = v___y_720_;
v___y_700_ = v___y_721_;
v___y_701_ = v___y_722_;
v___y_702_ = v___y_723_;
v___y_703_ = v___y_733_;
v___y_704_ = v___y_724_;
v___y_705_ = v___y_725_;
v___y_706_ = v___y_727_;
v___y_707_ = v___y_728_;
v___y_708_ = v___y_729_;
v___y_709_ = v___x_734_;
v___y_710_ = v___y_730_;
v___y_711_ = v___y_731_;
v___y_712_ = v___y_732_;
v_val_713_ = v_val_741_;
goto v___jp_693_;
}
}
v___jp_742_:
{
uint8_t v___x_760_; 
v___x_760_ = 0;
v___y_716_ = v___y_743_;
v___y_717_ = v___y_744_;
v___y_718_ = v___y_745_;
v___y_719_ = v___y_746_;
v___y_720_ = v___y_747_;
v___y_721_ = v___y_748_;
v___y_722_ = v___y_749_;
v___y_723_ = v___y_750_;
v___y_724_ = v___y_751_;
v___y_725_ = v___y_752_;
v___y_726_ = v___y_753_;
v___y_727_ = v___y_754_;
v___y_728_ = v___y_755_;
v___y_729_ = v___y_756_;
v___y_730_ = v___y_757_;
v___y_731_ = v___y_759_;
v___y_732_ = v___y_758_;
v___y_733_ = v___x_760_;
goto v___jp_715_;
}
v___jp_761_:
{
if (lean_obj_tag(v___y_773_) == 0)
{
v___y_743_ = v___y_762_;
v___y_744_ = v___y_763_;
v___y_745_ = v___y_764_;
v___y_746_ = v___y_765_;
v___y_747_ = v___y_766_;
v___y_748_ = v___y_767_;
v___y_749_ = v___y_768_;
v___y_750_ = v___y_769_;
v___y_751_ = v___y_770_;
v___y_752_ = v___y_771_;
v___y_753_ = v___y_772_;
v___y_754_ = v___y_774_;
v___y_755_ = v___y_775_;
v___y_756_ = v___y_779_;
v___y_757_ = v___y_776_;
v___y_758_ = v___y_777_;
v___y_759_ = v___y_778_;
goto v___jp_742_;
}
else
{
lean_object* v_val_780_; lean_object* v___x_781_; 
v_val_780_ = lean_ctor_get(v___y_773_, 0);
lean_inc(v_val_780_);
lean_dec_ref_known(v___y_773_, 1);
v___x_781_ = l_Lake_envToBool_x3f(v_val_780_);
if (lean_obj_tag(v___x_781_) == 0)
{
v___y_743_ = v___y_762_;
v___y_744_ = v___y_763_;
v___y_745_ = v___y_764_;
v___y_746_ = v___y_765_;
v___y_747_ = v___y_766_;
v___y_748_ = v___y_767_;
v___y_749_ = v___y_768_;
v___y_750_ = v___y_769_;
v___y_751_ = v___y_770_;
v___y_752_ = v___y_771_;
v___y_753_ = v___y_772_;
v___y_754_ = v___y_774_;
v___y_755_ = v___y_775_;
v___y_756_ = v___y_779_;
v___y_757_ = v___y_776_;
v___y_758_ = v___y_777_;
v___y_759_ = v___y_778_;
goto v___jp_742_;
}
else
{
lean_object* v_val_782_; uint8_t v___x_783_; 
v_val_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_val_782_);
lean_dec_ref_known(v___x_781_, 1);
v___x_783_ = lean_unbox(v_val_782_);
lean_dec(v_val_782_);
v___y_716_ = v___y_762_;
v___y_717_ = v___y_763_;
v___y_718_ = v___y_764_;
v___y_719_ = v___y_765_;
v___y_720_ = v___y_766_;
v___y_721_ = v___y_767_;
v___y_722_ = v___y_768_;
v___y_723_ = v___y_769_;
v___y_724_ = v___y_770_;
v___y_725_ = v___y_771_;
v___y_726_ = v___y_772_;
v___y_727_ = v___y_774_;
v___y_728_ = v___y_775_;
v___y_729_ = v___y_779_;
v___y_730_ = v___y_776_;
v___y_731_ = v___y_778_;
v___y_732_ = v___y_777_;
v___y_733_ = v___x_783_;
goto v___jp_715_;
}
}
}
v___jp_784_:
{
if (lean_obj_tag(v___y_792_) == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_box(0);
v___y_762_ = v___y_785_;
v___y_763_ = v___y_786_;
v___y_764_ = v___y_787_;
v___y_765_ = v___y_788_;
v___y_766_ = v___y_802_;
v___y_767_ = v___y_789_;
v___y_768_ = v___y_790_;
v___y_769_ = v___y_791_;
v___y_770_ = v___y_793_;
v___y_771_ = v___y_794_;
v___y_772_ = v___y_795_;
v___y_773_ = v___y_796_;
v___y_774_ = v___y_797_;
v___y_775_ = v___y_798_;
v___y_776_ = v___y_799_;
v___y_777_ = v___y_801_;
v___y_778_ = v___y_800_;
v___y_779_ = v___x_803_;
goto v___jp_761_;
}
else
{
lean_object* v_val_804_; lean_object* v___x_805_; 
v_val_804_ = lean_ctor_get(v___y_792_, 0);
lean_inc(v_val_804_);
lean_dec_ref_known(v___y_792_, 1);
v___x_805_ = l_Lake_envToBool_x3f(v_val_804_);
v___y_762_ = v___y_785_;
v___y_763_ = v___y_786_;
v___y_764_ = v___y_787_;
v___y_765_ = v___y_788_;
v___y_766_ = v___y_802_;
v___y_767_ = v___y_789_;
v___y_768_ = v___y_790_;
v___y_769_ = v___y_791_;
v___y_770_ = v___y_793_;
v___y_771_ = v___y_794_;
v___y_772_ = v___y_795_;
v___y_773_ = v___y_796_;
v___y_774_ = v___y_797_;
v___y_775_ = v___y_798_;
v___y_776_ = v___y_799_;
v___y_777_ = v___y_801_;
v___y_778_ = v___y_800_;
v___y_779_ = v___x_805_;
goto v___jp_761_;
}
}
v___jp_806_:
{
if (lean_obj_tag(v___y_807_) == 0)
{
lean_object* v___x_825_; 
v___x_825_ = lean_box(0);
v___y_785_ = v___y_808_;
v___y_786_ = v___y_809_;
v___y_787_ = v___y_810_;
v___y_788_ = v___y_811_;
v___y_789_ = v___y_812_;
v___y_790_ = v___y_813_;
v___y_791_ = v___y_814_;
v___y_792_ = v___y_815_;
v___y_793_ = v___y_816_;
v___y_794_ = v___y_817_;
v___y_795_ = v___y_818_;
v___y_796_ = v___y_820_;
v___y_797_ = v___y_819_;
v___y_798_ = v___y_821_;
v___y_799_ = v___y_822_;
v___y_800_ = v___y_823_;
v___y_801_ = v___y_824_;
v___y_802_ = v___x_825_;
goto v___jp_784_;
}
else
{
lean_object* v_val_826_; lean_object* v___x_827_; 
v_val_826_ = lean_ctor_get(v___y_807_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v___y_807_, 1);
v___x_827_ = l_Lake_envToBool_x3f(v_val_826_);
v___y_785_ = v___y_808_;
v___y_786_ = v___y_809_;
v___y_787_ = v___y_810_;
v___y_788_ = v___y_811_;
v___y_789_ = v___y_812_;
v___y_790_ = v___y_813_;
v___y_791_ = v___y_814_;
v___y_792_ = v___y_815_;
v___y_793_ = v___y_816_;
v___y_794_ = v___y_817_;
v___y_795_ = v___y_818_;
v___y_796_ = v___y_820_;
v___y_797_ = v___y_819_;
v___y_798_ = v___y_821_;
v___y_799_ = v___y_822_;
v___y_800_ = v___y_823_;
v___y_801_ = v___y_824_;
v___y_802_ = v___x_827_;
goto v___jp_784_;
}
}
v___jp_828_:
{
uint8_t v___x_846_; 
v___x_846_ = 0;
v___y_807_ = v___y_829_;
v___y_808_ = v___y_830_;
v___y_809_ = v___y_831_;
v___y_810_ = v___y_832_;
v___y_811_ = v___y_833_;
v___y_812_ = v___y_834_;
v___y_813_ = v___y_835_;
v___y_814_ = v___y_836_;
v___y_815_ = v___y_837_;
v___y_816_ = v___y_838_;
v___y_817_ = v___y_839_;
v___y_818_ = v___y_840_;
v___y_819_ = v___y_842_;
v___y_820_ = v___y_841_;
v___y_821_ = v___y_843_;
v___y_822_ = v___y_844_;
v___y_823_ = v___y_845_;
v___y_824_ = v___x_846_;
goto v___jp_806_;
}
v___jp_847_:
{
if (lean_obj_tag(v_noCache_533_) == 0)
{
if (lean_obj_tag(v___y_850_) == 0)
{
v___y_829_ = v___y_848_;
v___y_830_ = v___y_849_;
v___y_831_ = v___y_851_;
v___y_832_ = v___y_865_;
v___y_833_ = v___y_852_;
v___y_834_ = v___y_853_;
v___y_835_ = v___y_854_;
v___y_836_ = v___y_855_;
v___y_837_ = v___y_856_;
v___y_838_ = v___y_857_;
v___y_839_ = v___y_858_;
v___y_840_ = v___y_859_;
v___y_841_ = v___y_860_;
v___y_842_ = v___y_861_;
v___y_843_ = v___y_862_;
v___y_844_ = v___y_863_;
v___y_845_ = v___y_864_;
goto v___jp_828_;
}
else
{
lean_object* v_val_866_; lean_object* v___x_867_; 
v_val_866_ = lean_ctor_get(v___y_850_, 0);
lean_inc(v_val_866_);
lean_dec_ref_known(v___y_850_, 1);
v___x_867_ = l_Lake_envToBool_x3f(v_val_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
v___y_829_ = v___y_848_;
v___y_830_ = v___y_849_;
v___y_831_ = v___y_851_;
v___y_832_ = v___y_865_;
v___y_833_ = v___y_852_;
v___y_834_ = v___y_853_;
v___y_835_ = v___y_854_;
v___y_836_ = v___y_855_;
v___y_837_ = v___y_856_;
v___y_838_ = v___y_857_;
v___y_839_ = v___y_858_;
v___y_840_ = v___y_859_;
v___y_841_ = v___y_860_;
v___y_842_ = v___y_861_;
v___y_843_ = v___y_862_;
v___y_844_ = v___y_863_;
v___y_845_ = v___y_864_;
goto v___jp_828_;
}
else
{
lean_object* v_val_868_; uint8_t v___x_869_; 
v_val_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_val_868_);
lean_dec_ref_known(v___x_867_, 1);
v___x_869_ = lean_unbox(v_val_868_);
lean_dec(v_val_868_);
v___y_807_ = v___y_848_;
v___y_808_ = v___y_849_;
v___y_809_ = v___y_851_;
v___y_810_ = v___y_865_;
v___y_811_ = v___y_852_;
v___y_812_ = v___y_853_;
v___y_813_ = v___y_854_;
v___y_814_ = v___y_855_;
v___y_815_ = v___y_856_;
v___y_816_ = v___y_857_;
v___y_817_ = v___y_858_;
v___y_818_ = v___y_859_;
v___y_819_ = v___y_861_;
v___y_820_ = v___y_860_;
v___y_821_ = v___y_862_;
v___y_822_ = v___y_863_;
v___y_823_ = v___y_864_;
v___y_824_ = v___x_869_;
goto v___jp_806_;
}
}
}
else
{
lean_object* v_val_870_; uint8_t v___x_871_; 
lean_dec(v___y_850_);
v_val_870_ = lean_ctor_get(v_noCache_533_, 0);
v___x_871_ = lean_unbox(v_val_870_);
v___y_807_ = v___y_848_;
v___y_808_ = v___y_849_;
v___y_809_ = v___y_851_;
v___y_810_ = v___y_865_;
v___y_811_ = v___y_852_;
v___y_812_ = v___y_853_;
v___y_813_ = v___y_854_;
v___y_814_ = v___y_855_;
v___y_815_ = v___y_856_;
v___y_816_ = v___y_857_;
v___y_817_ = v___y_858_;
v___y_818_ = v___y_859_;
v___y_819_ = v___y_861_;
v___y_820_ = v___y_860_;
v___y_821_ = v___y_862_;
v___y_822_ = v___y_863_;
v___y_823_ = v___y_864_;
v___y_824_ = v___x_871_;
goto v___jp_806_;
}
}
v___jp_872_:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_877_ = ((lean_object*)(l_Lake_Env_compute___closed__2));
v___x_878_ = lean_io_getenv(v___x_877_);
v___x_879_ = ((lean_object*)(l_Lake_Env_compute___closed__3));
v___x_880_ = lean_io_getenv(v___x_879_);
v___x_881_ = ((lean_object*)(l_Lake_Env_compute___closed__4));
v___x_882_ = lean_io_getenv(v___x_881_);
v___x_883_ = ((lean_object*)(l_Lake_Env_compute___closed__5));
v___x_884_ = lean_io_getenv(v___x_883_);
v___x_885_ = ((lean_object*)(l_Lake_Env_compute___closed__6));
v___x_886_ = lean_io_getenv(v___x_885_);
v___x_887_ = ((lean_object*)(l_Lake_Env_compute___closed__7));
v___x_888_ = lean_io_getenv(v___x_887_);
v___x_889_ = ((lean_object*)(l_Lake_Env_compute___closed__8));
v___x_890_ = lean_io_getenv(v___x_889_);
v___x_891_ = ((lean_object*)(l_Lake_Env_compute___closed__9));
v___x_892_ = lean_io_getenv(v___x_891_);
v___x_893_ = ((lean_object*)(l_Lake_Env_compute___closed__10));
v___x_894_ = lean_io_getenv(v___x_893_);
v___x_895_ = ((lean_object*)(l_Lake_Env_compute___closed__11));
v___x_896_ = lean_io_getenv(v___x_895_);
v___x_897_ = ((lean_object*)(l_Lake_Env_compute___closed__12));
v___x_898_ = l_Lake_getSearchPath(v___x_897_);
v___x_899_ = ((lean_object*)(l_Lake_Env_compute___closed__13));
v___x_900_ = l_Lake_getSearchPath(v___x_899_);
v___x_901_ = l_Lake_sharedLibPathEnvVar;
v___x_902_ = l_Lake_getSearchPath(v___x_901_);
v___x_903_ = ((lean_object*)(l_Lake_Env_compute___closed__14));
v___x_904_ = l_Lake_getSearchPath(v___x_903_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v___x_905_; 
v___x_905_ = ((lean_object*)(l_Lake_instInhabitedEnv_default___closed__0));
v___y_848_ = v___x_880_;
v___y_849_ = v___x_890_;
v___y_850_ = v___x_878_;
v___y_851_ = v___x_902_;
v___y_852_ = v___x_892_;
v___y_853_ = v___y_875_;
v___y_854_ = v___x_898_;
v___y_855_ = v___y_873_;
v___y_856_ = v___x_882_;
v___y_857_ = v_a_876_;
v___y_858_ = v___x_900_;
v___y_859_ = v___x_886_;
v___y_860_ = v___x_884_;
v___y_861_ = v___x_888_;
v___y_862_ = v___y_874_;
v___y_863_ = v___x_904_;
v___y_864_ = v___x_894_;
v___y_865_ = v___x_905_;
goto v___jp_847_;
}
else
{
lean_object* v_val_906_; 
v_val_906_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_val_906_);
lean_dec_ref_known(v___x_896_, 1);
v___y_848_ = v___x_880_;
v___y_849_ = v___x_890_;
v___y_850_ = v___x_878_;
v___y_851_ = v___x_902_;
v___y_852_ = v___x_892_;
v___y_853_ = v___y_875_;
v___y_854_ = v___x_898_;
v___y_855_ = v___y_873_;
v___y_856_ = v___x_882_;
v___y_857_ = v_a_876_;
v___y_858_ = v___x_900_;
v___y_859_ = v___x_886_;
v___y_860_ = v___x_884_;
v___y_861_ = v___x_888_;
v___y_862_ = v___y_874_;
v___y_863_ = v___x_904_;
v___y_864_ = v___x_894_;
v___y_865_ = v_val_906_;
goto v___jp_847_;
}
}
v___jp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_909_ = l_Lake_Env_computeToolchain();
v___x_910_ = l_Lake_getUserHome_x3f();
v___x_911_ = l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap();
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = ((lean_object*)(l_Lake_Env_compute___closed__15));
v___x_914_ = lean_io_getenv(v___x_913_);
if (lean_obj_tag(v___x_914_) == 1)
{
lean_object* v_val_915_; lean_object* v___x_916_; 
lean_dec_ref(v_a_908_);
v_val_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_val_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = l___private_Lake_Config_Env_0__Lake_Env_compute_normalizeUrl(v_val_915_);
v___y_873_ = v___x_910_;
v___y_874_ = v_a_912_;
v___y_875_ = v___x_909_;
v_a_876_ = v___x_916_;
goto v___jp_872_;
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; 
lean_dec(v___x_914_);
v___x_917_ = ((lean_object*)(l_Lake_Env_compute___closed__16));
v___x_918_ = lean_string_append(v_a_908_, v___x_917_);
v___y_873_ = v___x_910_;
v___y_874_ = v_a_912_;
v___y_875_ = v___x_909_;
v_a_876_ = v___x_918_;
goto v___jp_872_;
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
lean_dec(v___x_910_);
lean_dec_ref(v___x_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_elan_x3f_532_);
lean_dec_ref(v_lean_531_);
lean_dec_ref(v_lake_530_);
v_a_919_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_911_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_911_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_compute___boxed(lean_object* v_lake_932_, lean_object* v_lean_933_, lean_object* v_elan_x3f_934_, lean_object* v_noCache_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lake_Env_compute(v_lake_932_, v_lean_933_, v_elan_x3f_934_, v_noCache_935_);
lean_dec(v_noCache_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain(lean_object* v_env_938_){
_start:
{
lean_object* v_toolchain_939_; 
v_toolchain_939_ = lean_ctor_get(v_env_938_, 19);
lean_inc_ref(v_toolchain_939_);
return v_toolchain_939_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_cacheToolchain___boxed(lean_object* v_env_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lake_Env_cacheToolchain(v_env_940_);
lean_dec_ref(v_env_940_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash(lean_object* v_env_942_){
_start:
{
lean_object* v_lean_943_; lean_object* v_githashOverride_944_; lean_object* v___x_945_; lean_object* v___x_946_; uint8_t v___x_947_; 
v_lean_943_ = lean_ctor_get(v_env_942_, 1);
v_githashOverride_944_ = lean_ctor_get(v_env_942_, 4);
v___x_945_ = lean_string_utf8_byte_size(v_githashOverride_944_);
v___x_946_ = lean_unsigned_to_nat(0u);
v___x_947_ = lean_nat_dec_eq(v___x_945_, v___x_946_);
if (v___x_947_ == 0)
{
lean_inc_ref(v_githashOverride_944_);
return v_githashOverride_944_;
}
else
{
lean_object* v_githash_948_; 
v_githash_948_ = lean_ctor_get(v_lean_943_, 1);
lean_inc_ref(v_githash_948_);
return v_githash_948_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanGithash___boxed(lean_object* v_env_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lake_Env_leanGithash(v_env_949_);
lean_dec_ref(v_env_949_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_path(lean_object* v_env_951_){
_start:
{
lean_object* v_lake_952_; lean_object* v_lean_953_; lean_object* v_initPath_954_; lean_object* v_binDir_955_; lean_object* v_binDir_956_; uint8_t v___x_957_; 
v_lake_952_ = lean_ctor_get(v_env_951_, 0);
v_lean_953_ = lean_ctor_get(v_env_951_, 1);
v_initPath_954_ = lean_ctor_get(v_env_951_, 18);
v_binDir_955_ = lean_ctor_get(v_lake_952_, 2);
v_binDir_956_ = lean_ctor_get(v_lean_953_, 6);
v___x_957_ = lean_string_dec_eq(v_binDir_955_, v_binDir_956_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; lean_object* v___x_959_; 
lean_inc(v_initPath_954_);
lean_inc_ref(v_binDir_956_);
v___x_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_958_, 0, v_binDir_956_);
lean_ctor_set(v___x_958_, 1, v_initPath_954_);
lean_inc_ref(v_binDir_955_);
v___x_959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_959_, 0, v_binDir_955_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
return v___x_959_;
}
else
{
lean_object* v___x_960_; 
lean_inc(v_initPath_954_);
lean_inc_ref(v_binDir_956_);
v___x_960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_960_, 0, v_binDir_956_);
lean_ctor_set(v___x_960_, 1, v_initPath_954_);
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_path___boxed(lean_object* v_env_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lake_Env_path(v_env_961_);
lean_dec_ref(v_env_961_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanPath(lean_object* v_env_963_){
_start:
{
lean_object* v_lake_964_; lean_object* v_initLeanPath_965_; lean_object* v_libDir_966_; lean_object* v___x_967_; 
v_lake_964_ = lean_ctor_get(v_env_963_, 0);
v_initLeanPath_965_ = lean_ctor_get(v_env_963_, 15);
v_libDir_966_ = lean_ctor_get(v_lake_964_, 3);
lean_inc(v_initLeanPath_965_);
lean_inc_ref(v_libDir_966_);
v___x_967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_967_, 0, v_libDir_966_);
lean_ctor_set(v___x_967_, 1, v_initLeanPath_965_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanPath___boxed(lean_object* v_env_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lake_Env_leanPath(v_env_968_);
lean_dec_ref(v_env_968_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath(lean_object* v_env_970_){
_start:
{
lean_object* v_lake_971_; lean_object* v_initLeanSrcPath_972_; lean_object* v_srcDir_973_; lean_object* v___x_974_; 
v_lake_971_ = lean_ctor_get(v_env_970_, 0);
v_initLeanSrcPath_972_ = lean_ctor_get(v_env_970_, 16);
v_srcDir_973_ = lean_ctor_get(v_lake_971_, 1);
lean_inc(v_initLeanSrcPath_972_);
lean_inc_ref(v_srcDir_973_);
v___x_974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_974_, 0, v_srcDir_973_);
lean_ctor_set(v___x_974_, 1, v_initLeanSrcPath_972_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSrcPath___boxed(lean_object* v_env_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lake_Env_leanSrcPath(v_env_975_);
lean_dec_ref(v_env_975_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_sharedLibPath(lean_object* v_env_977_){
_start:
{
lean_object* v_lean_978_; lean_object* v_initSharedLibPath_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v_lean_978_ = lean_ctor_get(v_env_977_, 1);
lean_inc_ref(v_lean_978_);
v_initSharedLibPath_979_ = lean_ctor_get(v_env_977_, 17);
lean_inc(v_initSharedLibPath_979_);
lean_dec_ref(v_env_977_);
v___x_980_ = l_Lake_LeanInstall_sharedLibPath(v_lean_978_);
lean_dec_ref(v_lean_978_);
v___x_981_ = l_List_appendTR___redArg(v___x_980_, v_initSharedLibPath_979_);
return v___x_981_;
}
}
static lean_object* _init_l_Lake_Env_noToolchainVars___closed__14(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1012_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__0));
v___x_1013_ = lean_unsigned_to_nat(9u);
v___x_1014_ = lean_mk_empty_array_with_capacity(v___x_1013_);
v___x_1015_ = lean_array_push(v___x_1014_, v___x_1012_);
return v___x_1015_;
}
}
static lean_object* _init_l_Lake_Env_noToolchainVars___closed__15(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__2));
v___x_1017_ = lean_obj_once(&l_Lake_Env_noToolchainVars___closed__14, &l_Lake_Env_noToolchainVars___closed__14_once, _init_l_Lake_Env_noToolchainVars___closed__14);
v___x_1018_ = lean_array_push(v___x_1017_, v___x_1016_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_noToolchainVars(lean_object* v_env_1021_){
_start:
{
uint8_t v_noSystemCache_1022_; lean_object* v_lakeSystemCache_x3f_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___y_1027_; 
v_noSystemCache_1022_ = lean_ctor_get_uint8(v_env_1021_, sizeof(void*)*20 + 2);
v_lakeSystemCache_x3f_1023_ = lean_ctor_get(v_env_1021_, 9);
lean_inc(v_lakeSystemCache_x3f_1023_);
lean_dec_ref(v_env_1021_);
v___x_1024_ = lean_box(0);
v___x_1025_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
if (v_noSystemCache_1022_ == 0)
{
if (lean_obj_tag(v_lakeSystemCache_x3f_1023_) == 0)
{
v___y_1027_ = v___x_1024_;
goto v___jp_1026_;
}
else
{
lean_object* v_val_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_val_1043_ = lean_ctor_get(v_lakeSystemCache_x3f_1023_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_lakeSystemCache_x3f_1023_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v_lakeSystemCache_x3f_1023_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_val_1043_);
lean_dec(v_lakeSystemCache_x3f_1023_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_val_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
v___y_1027_ = v___x_1048_;
goto v___jp_1026_;
}
}
}
}
else
{
lean_object* v___x_1051_; 
lean_dec(v_lakeSystemCache_x3f_1023_);
v___x_1051_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
v___y_1027_ = v___x_1051_;
goto v___jp_1026_;
}
v___jp_1026_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1025_);
lean_ctor_set(v___x_1028_, 1, v___y_1027_);
v___x_1029_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__4));
v___x_1030_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__6));
v___x_1031_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__8));
v___x_1032_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__9));
v___x_1033_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__11));
v___x_1034_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__13));
v___x_1035_ = lean_obj_once(&l_Lake_Env_noToolchainVars___closed__15, &l_Lake_Env_noToolchainVars___closed__15_once, _init_l_Lake_Env_noToolchainVars___closed__15);
v___x_1036_ = lean_array_push(v___x_1035_, v___x_1028_);
v___x_1037_ = lean_array_push(v___x_1036_, v___x_1029_);
v___x_1038_ = lean_array_push(v___x_1037_, v___x_1030_);
v___x_1039_ = lean_array_push(v___x_1038_, v___x_1031_);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1032_);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1033_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1034_);
return v___x_1042_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_1052_){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_box(1);
v___x_1054_ = lean_panic_fn_borrowed(v___x_1053_, v_msg_1052_);
return v___x_1054_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1058_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2));
v___x_1059_ = lean_unsigned_to_nat(35u);
v___x_1060_ = lean_unsigned_to_nat(182u);
v___x_1061_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1));
v___x_1062_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1063_ = l_mkPanicMessageWithDecl(v___x_1062_, v___x_1061_, v___x_1060_, v___x_1059_, v___x_1058_);
return v___x_1063_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1064_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__2));
v___x_1065_ = lean_unsigned_to_nat(21u);
v___x_1066_ = lean_unsigned_to_nat(183u);
v___x_1067_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__1));
v___x_1068_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1069_ = l_mkPanicMessageWithDecl(v___x_1068_, v___x_1067_, v___x_1066_, v___x_1065_, v___x_1064_);
return v___x_1069_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1072_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6));
v___x_1073_ = lean_unsigned_to_nat(35u);
v___x_1074_ = lean_unsigned_to_nat(276u);
v___x_1075_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5));
v___x_1076_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1077_ = l_mkPanicMessageWithDecl(v___x_1076_, v___x_1075_, v___x_1074_, v___x_1073_, v___x_1072_);
return v___x_1077_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1078_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__6));
v___x_1079_ = lean_unsigned_to_nat(21u);
v___x_1080_ = lean_unsigned_to_nat(277u);
v___x_1081_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__5));
v___x_1082_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__0));
v___x_1083_ = l_mkPanicMessageWithDecl(v___x_1082_, v___x_1081_, v___x_1080_, v___x_1079_, v___x_1078_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(lean_object* v_k_1084_, lean_object* v_v_1085_, lean_object* v_t_1086_){
_start:
{
if (lean_obj_tag(v_t_1086_) == 0)
{
lean_object* v_size_1087_; lean_object* v_k_1088_; lean_object* v_v_1089_; lean_object* v_l_1090_; lean_object* v_r_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1447_; 
v_size_1087_ = lean_ctor_get(v_t_1086_, 0);
v_k_1088_ = lean_ctor_get(v_t_1086_, 1);
v_v_1089_ = lean_ctor_get(v_t_1086_, 2);
v_l_1090_ = lean_ctor_get(v_t_1086_, 3);
v_r_1091_ = lean_ctor_get(v_t_1086_, 4);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_t_1086_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1093_ = v_t_1086_;
v_isShared_1094_ = v_isSharedCheck_1447_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_r_1091_);
lean_inc(v_l_1090_);
lean_inc(v_v_1089_);
lean_inc(v_k_1088_);
lean_inc(v_size_1087_);
lean_dec(v_t_1086_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1447_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
uint8_t v___x_1095_; 
v___x_1095_ = lean_string_compare(v_k_1084_, v_k_1088_);
switch(v___x_1095_)
{
case 0:
{
lean_object* v___x_1096_; 
lean_dec(v_size_1087_);
v___x_1096_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v_k_1084_, v_v_1085_, v_l_1090_);
if (lean_obj_tag(v_r_1091_) == 0)
{
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_size_1097_; lean_object* v_size_1098_; lean_object* v_k_1099_; lean_object* v_v_1100_; lean_object* v_l_1101_; lean_object* v_r_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; uint8_t v___x_1105_; 
v_size_1097_ = lean_ctor_get(v_r_1091_, 0);
v_size_1098_ = lean_ctor_get(v___x_1096_, 0);
v_k_1099_ = lean_ctor_get(v___x_1096_, 1);
v_v_1100_ = lean_ctor_get(v___x_1096_, 2);
v_l_1101_ = lean_ctor_get(v___x_1096_, 3);
v_r_1102_ = lean_ctor_get(v___x_1096_, 4);
lean_inc(v_r_1102_);
v___x_1103_ = lean_unsigned_to_nat(3u);
v___x_1104_ = lean_nat_mul(v___x_1103_, v_size_1097_);
v___x_1105_ = lean_nat_dec_lt(v___x_1104_, v_size_1098_);
lean_dec(v___x_1104_);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1110_; 
lean_dec(v_r_1102_);
v___x_1106_ = lean_unsigned_to_nat(1u);
v___x_1107_ = lean_nat_add(v___x_1106_, v_size_1098_);
v___x_1108_ = lean_nat_add(v___x_1107_, v_size_1097_);
lean_dec(v___x_1107_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 3, v___x_1096_);
lean_ctor_set(v___x_1093_, 0, v___x_1108_);
v___x_1110_ = v___x_1093_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1108_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1111_, 3, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1111_, 4, v_r_1091_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
else
{
lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1183_; 
lean_inc(v_l_1101_);
lean_inc(v_v_1100_);
lean_inc(v_k_1099_);
lean_inc(v_size_1098_);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1183_ == 0)
{
lean_object* v_unused_1184_; lean_object* v_unused_1185_; lean_object* v_unused_1186_; lean_object* v_unused_1187_; lean_object* v_unused_1188_; 
v_unused_1184_ = lean_ctor_get(v___x_1096_, 4);
lean_dec(v_unused_1184_);
v_unused_1185_ = lean_ctor_get(v___x_1096_, 3);
lean_dec(v_unused_1185_);
v_unused_1186_ = lean_ctor_get(v___x_1096_, 2);
lean_dec(v_unused_1186_);
v_unused_1187_ = lean_ctor_get(v___x_1096_, 1);
lean_dec(v_unused_1187_);
v_unused_1188_ = lean_ctor_get(v___x_1096_, 0);
lean_dec(v_unused_1188_);
v___x_1113_ = v___x_1096_;
v_isShared_1114_ = v_isSharedCheck_1183_;
goto v_resetjp_1112_;
}
else
{
lean_dec(v___x_1096_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1183_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
if (lean_obj_tag(v_l_1101_) == 0)
{
if (lean_obj_tag(v_r_1102_) == 0)
{
lean_object* v_size_1115_; lean_object* v_size_1116_; lean_object* v_k_1117_; lean_object* v_v_1118_; lean_object* v_l_1119_; lean_object* v_r_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v_size_1115_ = lean_ctor_get(v_l_1101_, 0);
v_size_1116_ = lean_ctor_get(v_r_1102_, 0);
v_k_1117_ = lean_ctor_get(v_r_1102_, 1);
v_v_1118_ = lean_ctor_get(v_r_1102_, 2);
v_l_1119_ = lean_ctor_get(v_r_1102_, 3);
v_r_1120_ = lean_ctor_get(v_r_1102_, 4);
v___x_1121_ = lean_unsigned_to_nat(2u);
v___x_1122_ = lean_nat_mul(v___x_1121_, v_size_1115_);
v___x_1123_ = lean_nat_dec_lt(v_size_1116_, v___x_1122_);
lean_dec(v___x_1122_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1153_; 
lean_inc(v_r_1120_);
lean_inc(v_l_1119_);
lean_inc(v_v_1118_);
lean_inc(v_k_1117_);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_r_1102_);
if (v_isSharedCheck_1153_ == 0)
{
lean_object* v_unused_1154_; lean_object* v_unused_1155_; lean_object* v_unused_1156_; lean_object* v_unused_1157_; lean_object* v_unused_1158_; 
v_unused_1154_ = lean_ctor_get(v_r_1102_, 4);
lean_dec(v_unused_1154_);
v_unused_1155_ = lean_ctor_get(v_r_1102_, 3);
lean_dec(v_unused_1155_);
v_unused_1156_ = lean_ctor_get(v_r_1102_, 2);
lean_dec(v_unused_1156_);
v_unused_1157_ = lean_ctor_get(v_r_1102_, 1);
lean_dec(v_unused_1157_);
v_unused_1158_ = lean_ctor_get(v_r_1102_, 0);
lean_dec(v_unused_1158_);
v___x_1125_ = v_r_1102_;
v_isShared_1126_ = v_isSharedCheck_1153_;
goto v_resetjp_1124_;
}
else
{
lean_dec(v_r_1102_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1153_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___x_1141_; lean_object* v___y_1143_; 
v___x_1127_ = lean_unsigned_to_nat(1u);
v___x_1128_ = lean_nat_add(v___x_1127_, v_size_1098_);
lean_dec(v_size_1098_);
v___x_1129_ = lean_nat_add(v___x_1128_, v_size_1097_);
lean_dec(v___x_1128_);
v___x_1141_ = lean_nat_add(v___x_1127_, v_size_1115_);
if (lean_obj_tag(v_l_1119_) == 0)
{
lean_object* v_size_1151_; 
v_size_1151_ = lean_ctor_get(v_l_1119_, 0);
lean_inc(v_size_1151_);
v___y_1143_ = v_size_1151_;
goto v___jp_1142_;
}
else
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_unsigned_to_nat(0u);
v___y_1143_ = v___x_1152_;
goto v___jp_1142_;
}
v___jp_1130_:
{
lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1134_ = lean_nat_add(v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec(v___y_1132_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 4, v_r_1091_);
lean_ctor_set(v___x_1125_, 3, v_r_1120_);
lean_ctor_set(v___x_1125_, 2, v_v_1089_);
lean_ctor_set(v___x_1125_, 1, v_k_1088_);
lean_ctor_set(v___x_1125_, 0, v___x_1134_);
v___x_1136_ = v___x_1125_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1134_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1140_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1140_, 3, v_r_1120_);
lean_ctor_set(v_reuseFailAlloc_1140_, 4, v_r_1091_);
v___x_1136_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1138_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v___x_1136_);
lean_ctor_set(v___x_1113_, 3, v___y_1131_);
lean_ctor_set(v___x_1113_, 2, v_v_1118_);
lean_ctor_set(v___x_1113_, 1, v_k_1117_);
lean_ctor_set(v___x_1113_, 0, v___x_1129_);
v___x_1138_ = v___x_1113_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1129_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_k_1117_);
lean_ctor_set(v_reuseFailAlloc_1139_, 2, v_v_1118_);
lean_ctor_set(v_reuseFailAlloc_1139_, 3, v___y_1131_);
lean_ctor_set(v_reuseFailAlloc_1139_, 4, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
v___jp_1142_:
{
lean_object* v___x_1144_; lean_object* v___x_1146_; 
v___x_1144_ = lean_nat_add(v___x_1141_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec(v___x_1141_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v_l_1119_);
lean_ctor_set(v___x_1093_, 3, v_l_1101_);
lean_ctor_set(v___x_1093_, 2, v_v_1100_);
lean_ctor_set(v___x_1093_, 1, v_k_1099_);
lean_ctor_set(v___x_1093_, 0, v___x_1144_);
v___x_1146_ = v___x_1093_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_k_1099_);
lean_ctor_set(v_reuseFailAlloc_1150_, 2, v_v_1100_);
lean_ctor_set(v_reuseFailAlloc_1150_, 3, v_l_1101_);
lean_ctor_set(v_reuseFailAlloc_1150_, 4, v_l_1119_);
v___x_1146_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_nat_add(v___x_1127_, v_size_1097_);
if (lean_obj_tag(v_r_1120_) == 0)
{
lean_object* v_size_1148_; 
v_size_1148_ = lean_ctor_get(v_r_1120_, 0);
lean_inc(v_size_1148_);
v___y_1131_ = v___x_1146_;
v___y_1132_ = v___x_1147_;
v___y_1133_ = v_size_1148_;
goto v___jp_1130_;
}
else
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_unsigned_to_nat(0u);
v___y_1131_ = v___x_1146_;
v___y_1132_ = v___x_1147_;
v___y_1133_ = v___x_1149_;
goto v___jp_1130_;
}
}
}
}
}
else
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
lean_del_object(v___x_1093_);
v___x_1159_ = lean_unsigned_to_nat(1u);
v___x_1160_ = lean_nat_add(v___x_1159_, v_size_1098_);
lean_dec(v_size_1098_);
v___x_1161_ = lean_nat_add(v___x_1160_, v_size_1097_);
lean_dec(v___x_1160_);
v___x_1162_ = lean_nat_add(v___x_1159_, v_size_1097_);
v___x_1163_ = lean_nat_add(v___x_1162_, v_size_1116_);
lean_dec(v___x_1162_);
lean_inc_ref(v_r_1091_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v_r_1091_);
lean_ctor_set(v___x_1113_, 3, v_r_1102_);
lean_ctor_set(v___x_1113_, 2, v_v_1089_);
lean_ctor_set(v___x_1113_, 1, v_k_1088_);
lean_ctor_set(v___x_1113_, 0, v___x_1163_);
v___x_1165_ = v___x_1113_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1178_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1178_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1178_, 3, v_r_1102_);
lean_ctor_set(v_reuseFailAlloc_1178_, 4, v_r_1091_);
v___x_1165_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_isSharedCheck_1172_ = !lean_is_exclusive(v_r_1091_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; lean_object* v_unused_1174_; lean_object* v_unused_1175_; lean_object* v_unused_1176_; lean_object* v_unused_1177_; 
v_unused_1173_ = lean_ctor_get(v_r_1091_, 4);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v_r_1091_, 3);
lean_dec(v_unused_1174_);
v_unused_1175_ = lean_ctor_get(v_r_1091_, 2);
lean_dec(v_unused_1175_);
v_unused_1176_ = lean_ctor_get(v_r_1091_, 1);
lean_dec(v_unused_1176_);
v_unused_1177_ = lean_ctor_get(v_r_1091_, 0);
lean_dec(v_unused_1177_);
v___x_1167_ = v_r_1091_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_dec(v_r_1091_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 4, v___x_1165_);
lean_ctor_set(v___x_1167_, 3, v_l_1101_);
lean_ctor_set(v___x_1167_, 2, v_v_1100_);
lean_ctor_set(v___x_1167_, 1, v_k_1099_);
lean_ctor_set(v___x_1167_, 0, v___x_1161_);
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1161_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_k_1099_);
lean_ctor_set(v_reuseFailAlloc_1171_, 2, v_v_1100_);
lean_ctor_set(v_reuseFailAlloc_1171_, 3, v_l_1101_);
lean_ctor_set(v_reuseFailAlloc_1171_, 4, v___x_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
lean_dec_ref_known(v_l_1101_, 5);
lean_del_object(v___x_1113_);
lean_dec(v_v_1100_);
lean_dec(v_k_1099_);
lean_dec(v_size_1098_);
lean_dec_ref_known(v_r_1091_, 5);
lean_del_object(v___x_1093_);
lean_dec(v_v_1089_);
lean_dec(v_k_1088_);
v___x_1179_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__3);
v___x_1180_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1179_);
return v___x_1180_;
}
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
lean_del_object(v___x_1113_);
lean_dec(v_r_1102_);
lean_dec(v_v_1100_);
lean_dec(v_k_1099_);
lean_dec(v_size_1098_);
lean_dec_ref_known(v_r_1091_, 5);
lean_del_object(v___x_1093_);
lean_dec(v_v_1089_);
lean_dec(v_k_1088_);
v___x_1181_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__4);
v___x_1182_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1181_);
return v___x_1182_;
}
}
}
}
else
{
lean_object* v_size_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
v_size_1189_ = lean_ctor_get(v_r_1091_, 0);
v___x_1190_ = lean_unsigned_to_nat(1u);
v___x_1191_ = lean_nat_add(v___x_1190_, v_size_1189_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 3, v___x_1096_);
lean_ctor_set(v___x_1093_, 0, v___x_1191_);
v___x_1193_ = v___x_1093_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1191_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1194_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1194_, 3, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1194_, 4, v_r_1091_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
else
{
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_l_1195_; 
v_l_1195_ = lean_ctor_get(v___x_1096_, 3);
if (lean_obj_tag(v_l_1195_) == 0)
{
lean_object* v_r_1196_; 
lean_inc_ref(v_l_1195_);
v_r_1196_ = lean_ctor_get(v___x_1096_, 4);
lean_inc(v_r_1196_);
if (lean_obj_tag(v_r_1196_) == 0)
{
lean_object* v_size_1197_; lean_object* v_k_1198_; lean_object* v_v_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1213_; 
v_size_1197_ = lean_ctor_get(v___x_1096_, 0);
v_k_1198_ = lean_ctor_get(v___x_1096_, 1);
v_v_1199_ = lean_ctor_get(v___x_1096_, 2);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1213_ == 0)
{
lean_object* v_unused_1214_; lean_object* v_unused_1215_; 
v_unused_1214_ = lean_ctor_get(v___x_1096_, 4);
lean_dec(v_unused_1214_);
v_unused_1215_ = lean_ctor_get(v___x_1096_, 3);
lean_dec(v_unused_1215_);
v___x_1201_ = v___x_1096_;
v_isShared_1202_ = v_isSharedCheck_1213_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_v_1199_);
lean_inc(v_k_1198_);
lean_inc(v_size_1197_);
lean_dec(v___x_1096_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1213_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v_size_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v_size_1203_ = lean_ctor_get(v_r_1196_, 0);
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_nat_add(v___x_1204_, v_size_1197_);
lean_dec(v_size_1197_);
v___x_1206_ = lean_nat_add(v___x_1204_, v_size_1203_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 4, v_r_1091_);
lean_ctor_set(v___x_1201_, 3, v_r_1196_);
lean_ctor_set(v___x_1201_, 2, v_v_1089_);
lean_ctor_set(v___x_1201_, 1, v_k_1088_);
lean_ctor_set(v___x_1201_, 0, v___x_1206_);
v___x_1208_ = v___x_1201_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1206_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1212_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1212_, 3, v_r_1196_);
lean_ctor_set(v_reuseFailAlloc_1212_, 4, v_r_1091_);
v___x_1208_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
lean_object* v___x_1210_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1208_);
lean_ctor_set(v___x_1093_, 3, v_l_1195_);
lean_ctor_set(v___x_1093_, 2, v_v_1199_);
lean_ctor_set(v___x_1093_, 1, v_k_1198_);
lean_ctor_set(v___x_1093_, 0, v___x_1205_);
v___x_1210_ = v___x_1093_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1205_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_k_1198_);
lean_ctor_set(v_reuseFailAlloc_1211_, 2, v_v_1199_);
lean_ctor_set(v_reuseFailAlloc_1211_, 3, v_l_1195_);
lean_ctor_set(v_reuseFailAlloc_1211_, 4, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
else
{
lean_object* v_k_1216_; lean_object* v_v_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1229_; 
v_k_1216_ = lean_ctor_get(v___x_1096_, 1);
v_v_1217_ = lean_ctor_get(v___x_1096_, 2);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1229_ == 0)
{
lean_object* v_unused_1230_; lean_object* v_unused_1231_; lean_object* v_unused_1232_; 
v_unused_1230_ = lean_ctor_get(v___x_1096_, 4);
lean_dec(v_unused_1230_);
v_unused_1231_ = lean_ctor_get(v___x_1096_, 3);
lean_dec(v_unused_1231_);
v_unused_1232_ = lean_ctor_get(v___x_1096_, 0);
lean_dec(v_unused_1232_);
v___x_1219_ = v___x_1096_;
v_isShared_1220_ = v_isSharedCheck_1229_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_v_1217_);
lean_inc(v_k_1216_);
lean_dec(v___x_1096_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1229_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1224_; 
v___x_1221_ = lean_unsigned_to_nat(3u);
v___x_1222_ = lean_unsigned_to_nat(1u);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 3, v_r_1196_);
lean_ctor_set(v___x_1219_, 2, v_v_1089_);
lean_ctor_set(v___x_1219_, 1, v_k_1088_);
lean_ctor_set(v___x_1219_, 0, v___x_1222_);
v___x_1224_ = v___x_1219_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1228_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1228_, 3, v_r_1196_);
lean_ctor_set(v_reuseFailAlloc_1228_, 4, v_r_1196_);
v___x_1224_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
lean_object* v___x_1226_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1224_);
lean_ctor_set(v___x_1093_, 3, v_l_1195_);
lean_ctor_set(v___x_1093_, 2, v_v_1217_);
lean_ctor_set(v___x_1093_, 1, v_k_1216_);
lean_ctor_set(v___x_1093_, 0, v___x_1221_);
v___x_1226_ = v___x_1093_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_k_1216_);
lean_ctor_set(v_reuseFailAlloc_1227_, 2, v_v_1217_);
lean_ctor_set(v_reuseFailAlloc_1227_, 3, v_l_1195_);
lean_ctor_set(v_reuseFailAlloc_1227_, 4, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
}
else
{
lean_object* v_r_1233_; 
v_r_1233_ = lean_ctor_get(v___x_1096_, 4);
lean_inc(v_r_1233_);
if (lean_obj_tag(v_r_1233_) == 0)
{
lean_object* v_k_1234_; lean_object* v_v_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1259_; 
lean_inc(v_l_1195_);
v_k_1234_ = lean_ctor_get(v___x_1096_, 1);
v_v_1235_ = lean_ctor_get(v___x_1096_, 2);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1259_ == 0)
{
lean_object* v_unused_1260_; lean_object* v_unused_1261_; lean_object* v_unused_1262_; 
v_unused_1260_ = lean_ctor_get(v___x_1096_, 4);
lean_dec(v_unused_1260_);
v_unused_1261_ = lean_ctor_get(v___x_1096_, 3);
lean_dec(v_unused_1261_);
v_unused_1262_ = lean_ctor_get(v___x_1096_, 0);
lean_dec(v_unused_1262_);
v___x_1237_ = v___x_1096_;
v_isShared_1238_ = v_isSharedCheck_1259_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_v_1235_);
lean_inc(v_k_1234_);
lean_dec(v___x_1096_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1259_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v_k_1239_; lean_object* v_v_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1255_; 
v_k_1239_ = lean_ctor_get(v_r_1233_, 1);
v_v_1240_ = lean_ctor_get(v_r_1233_, 2);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_r_1233_);
if (v_isSharedCheck_1255_ == 0)
{
lean_object* v_unused_1256_; lean_object* v_unused_1257_; lean_object* v_unused_1258_; 
v_unused_1256_ = lean_ctor_get(v_r_1233_, 4);
lean_dec(v_unused_1256_);
v_unused_1257_ = lean_ctor_get(v_r_1233_, 3);
lean_dec(v_unused_1257_);
v_unused_1258_ = lean_ctor_get(v_r_1233_, 0);
lean_dec(v_unused_1258_);
v___x_1242_ = v_r_1233_;
v_isShared_1243_ = v_isSharedCheck_1255_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_v_1240_);
lean_inc(v_k_1239_);
lean_dec(v_r_1233_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1255_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1247_; 
v___x_1244_ = lean_unsigned_to_nat(3u);
v___x_1245_ = lean_unsigned_to_nat(1u);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 4, v_l_1195_);
lean_ctor_set(v___x_1242_, 3, v_l_1195_);
lean_ctor_set(v___x_1242_, 2, v_v_1235_);
lean_ctor_set(v___x_1242_, 1, v_k_1234_);
lean_ctor_set(v___x_1242_, 0, v___x_1245_);
v___x_1247_ = v___x_1242_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1245_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_k_1234_);
lean_ctor_set(v_reuseFailAlloc_1254_, 2, v_v_1235_);
lean_ctor_set(v_reuseFailAlloc_1254_, 3, v_l_1195_);
lean_ctor_set(v_reuseFailAlloc_1254_, 4, v_l_1195_);
v___x_1247_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1249_; 
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 4, v_l_1195_);
lean_ctor_set(v___x_1237_, 2, v_v_1089_);
lean_ctor_set(v___x_1237_, 1, v_k_1088_);
lean_ctor_set(v___x_1237_, 0, v___x_1245_);
v___x_1249_ = v___x_1237_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1245_);
lean_ctor_set(v_reuseFailAlloc_1253_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1253_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1253_, 3, v_l_1195_);
lean_ctor_set(v_reuseFailAlloc_1253_, 4, v_l_1195_);
v___x_1249_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1251_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1249_);
lean_ctor_set(v___x_1093_, 3, v___x_1247_);
lean_ctor_set(v___x_1093_, 2, v_v_1240_);
lean_ctor_set(v___x_1093_, 1, v_k_1239_);
lean_ctor_set(v___x_1093_, 0, v___x_1244_);
v___x_1251_ = v___x_1093_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1244_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_k_1239_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v_v_1240_);
lean_ctor_set(v_reuseFailAlloc_1252_, 3, v___x_1247_);
lean_ctor_set(v_reuseFailAlloc_1252_, 4, v___x_1249_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
}
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1265_; 
v___x_1263_ = lean_unsigned_to_nat(2u);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v_r_1233_);
lean_ctor_set(v___x_1093_, 3, v___x_1096_);
lean_ctor_set(v___x_1093_, 0, v___x_1263_);
v___x_1265_ = v___x_1093_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1263_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1266_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1266_, 3, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1266_, 4, v_r_1233_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
else
{
lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1267_ = lean_unsigned_to_nat(1u);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1096_);
lean_ctor_set(v___x_1093_, 3, v___x_1096_);
lean_ctor_set(v___x_1093_, 0, v___x_1267_);
v___x_1269_ = v___x_1093_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1267_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1270_, 3, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1270_, 4, v___x_1096_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
case 1:
{
lean_object* v___x_1272_; 
lean_dec(v_v_1089_);
lean_dec(v_k_1088_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 2, v_v_1085_);
lean_ctor_set(v___x_1093_, 1, v_k_1084_);
v___x_1272_ = v___x_1093_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_size_1087_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_k_1084_);
lean_ctor_set(v_reuseFailAlloc_1273_, 2, v_v_1085_);
lean_ctor_set(v_reuseFailAlloc_1273_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1273_, 4, v_r_1091_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
default: 
{
lean_object* v___x_1274_; 
lean_dec(v_size_1087_);
v___x_1274_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v_k_1084_, v_v_1085_, v_r_1091_);
if (lean_obj_tag(v_l_1090_) == 0)
{
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_size_1275_; lean_object* v_size_1276_; lean_object* v_k_1277_; lean_object* v_v_1278_; lean_object* v_l_1279_; lean_object* v_r_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v_size_1275_ = lean_ctor_get(v_l_1090_, 0);
v_size_1276_ = lean_ctor_get(v___x_1274_, 0);
v_k_1277_ = lean_ctor_get(v___x_1274_, 1);
v_v_1278_ = lean_ctor_get(v___x_1274_, 2);
v_l_1279_ = lean_ctor_get(v___x_1274_, 3);
lean_inc(v_l_1279_);
v_r_1280_ = lean_ctor_get(v___x_1274_, 4);
v___x_1281_ = lean_unsigned_to_nat(3u);
v___x_1282_ = lean_nat_mul(v___x_1281_, v_size_1275_);
v___x_1283_ = lean_nat_dec_lt(v___x_1282_, v_size_1276_);
lean_dec(v___x_1282_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1288_; 
lean_dec(v_l_1279_);
v___x_1284_ = lean_unsigned_to_nat(1u);
v___x_1285_ = lean_nat_add(v___x_1284_, v_size_1275_);
v___x_1286_ = lean_nat_add(v___x_1285_, v_size_1276_);
lean_dec(v___x_1285_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1274_);
lean_ctor_set(v___x_1093_, 0, v___x_1286_);
v___x_1288_ = v___x_1093_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1289_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1289_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1289_, 4, v___x_1274_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
else
{
lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1359_; 
lean_inc(v_r_1280_);
lean_inc(v_v_1278_);
lean_inc(v_k_1277_);
lean_inc(v_size_1276_);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1359_ == 0)
{
lean_object* v_unused_1360_; lean_object* v_unused_1361_; lean_object* v_unused_1362_; lean_object* v_unused_1363_; lean_object* v_unused_1364_; 
v_unused_1360_ = lean_ctor_get(v___x_1274_, 4);
lean_dec(v_unused_1360_);
v_unused_1361_ = lean_ctor_get(v___x_1274_, 3);
lean_dec(v_unused_1361_);
v_unused_1362_ = lean_ctor_get(v___x_1274_, 2);
lean_dec(v_unused_1362_);
v_unused_1363_ = lean_ctor_get(v___x_1274_, 1);
lean_dec(v_unused_1363_);
v_unused_1364_ = lean_ctor_get(v___x_1274_, 0);
lean_dec(v_unused_1364_);
v___x_1291_ = v___x_1274_;
v_isShared_1292_ = v_isSharedCheck_1359_;
goto v_resetjp_1290_;
}
else
{
lean_dec(v___x_1274_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1359_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
if (lean_obj_tag(v_l_1279_) == 0)
{
if (lean_obj_tag(v_r_1280_) == 0)
{
lean_object* v_size_1293_; lean_object* v_k_1294_; lean_object* v_v_1295_; lean_object* v_l_1296_; lean_object* v_r_1297_; lean_object* v_size_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; 
v_size_1293_ = lean_ctor_get(v_l_1279_, 0);
v_k_1294_ = lean_ctor_get(v_l_1279_, 1);
v_v_1295_ = lean_ctor_get(v_l_1279_, 2);
v_l_1296_ = lean_ctor_get(v_l_1279_, 3);
v_r_1297_ = lean_ctor_get(v_l_1279_, 4);
v_size_1298_ = lean_ctor_get(v_r_1280_, 0);
v___x_1299_ = lean_unsigned_to_nat(2u);
v___x_1300_ = lean_nat_mul(v___x_1299_, v_size_1298_);
v___x_1301_ = lean_nat_dec_lt(v_size_1293_, v___x_1300_);
lean_dec(v___x_1300_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1330_; 
lean_inc(v_r_1297_);
lean_inc(v_l_1296_);
lean_inc(v_v_1295_);
lean_inc(v_k_1294_);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_l_1279_);
if (v_isSharedCheck_1330_ == 0)
{
lean_object* v_unused_1331_; lean_object* v_unused_1332_; lean_object* v_unused_1333_; lean_object* v_unused_1334_; lean_object* v_unused_1335_; 
v_unused_1331_ = lean_ctor_get(v_l_1279_, 4);
lean_dec(v_unused_1331_);
v_unused_1332_ = lean_ctor_get(v_l_1279_, 3);
lean_dec(v_unused_1332_);
v_unused_1333_ = lean_ctor_get(v_l_1279_, 2);
lean_dec(v_unused_1333_);
v_unused_1334_ = lean_ctor_get(v_l_1279_, 1);
lean_dec(v_unused_1334_);
v_unused_1335_ = lean_ctor_get(v_l_1279_, 0);
lean_dec(v_unused_1335_);
v___x_1303_ = v_l_1279_;
v_isShared_1304_ = v_isSharedCheck_1330_;
goto v_resetjp_1302_;
}
else
{
lean_dec(v_l_1279_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1330_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1320_; 
v___x_1305_ = lean_unsigned_to_nat(1u);
v___x_1306_ = lean_nat_add(v___x_1305_, v_size_1275_);
v___x_1307_ = lean_nat_add(v___x_1306_, v_size_1276_);
lean_dec(v_size_1276_);
if (lean_obj_tag(v_l_1296_) == 0)
{
lean_object* v_size_1328_; 
v_size_1328_ = lean_ctor_get(v_l_1296_, 0);
lean_inc(v_size_1328_);
v___y_1320_ = v_size_1328_;
goto v___jp_1319_;
}
else
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_unsigned_to_nat(0u);
v___y_1320_ = v___x_1329_;
goto v___jp_1319_;
}
v___jp_1308_:
{
lean_object* v___x_1312_; lean_object* v___x_1314_; 
v___x_1312_ = lean_nat_add(v___y_1309_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec(v___y_1309_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 4, v_r_1280_);
lean_ctor_set(v___x_1303_, 3, v_r_1297_);
lean_ctor_set(v___x_1303_, 2, v_v_1278_);
lean_ctor_set(v___x_1303_, 1, v_k_1277_);
lean_ctor_set(v___x_1303_, 0, v___x_1312_);
v___x_1314_ = v___x_1303_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v___x_1312_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v_k_1277_);
lean_ctor_set(v_reuseFailAlloc_1318_, 2, v_v_1278_);
lean_ctor_set(v_reuseFailAlloc_1318_, 3, v_r_1297_);
lean_ctor_set(v_reuseFailAlloc_1318_, 4, v_r_1280_);
v___x_1314_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
lean_object* v___x_1316_; 
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 4, v___x_1314_);
lean_ctor_set(v___x_1291_, 3, v___y_1310_);
lean_ctor_set(v___x_1291_, 2, v_v_1295_);
lean_ctor_set(v___x_1291_, 1, v_k_1294_);
lean_ctor_set(v___x_1291_, 0, v___x_1307_);
v___x_1316_ = v___x_1291_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1307_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v_k_1294_);
lean_ctor_set(v_reuseFailAlloc_1317_, 2, v_v_1295_);
lean_ctor_set(v_reuseFailAlloc_1317_, 3, v___y_1310_);
lean_ctor_set(v_reuseFailAlloc_1317_, 4, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
v___jp_1319_:
{
lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1321_ = lean_nat_add(v___x_1306_, v___y_1320_);
lean_dec(v___y_1320_);
lean_dec(v___x_1306_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v_l_1296_);
lean_ctor_set(v___x_1093_, 0, v___x_1321_);
v___x_1323_ = v___x_1093_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1321_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1327_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1327_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1327_, 4, v_l_1296_);
v___x_1323_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_nat_add(v___x_1305_, v_size_1298_);
if (lean_obj_tag(v_r_1297_) == 0)
{
lean_object* v_size_1325_; 
v_size_1325_ = lean_ctor_get(v_r_1297_, 0);
lean_inc(v_size_1325_);
v___y_1309_ = v___x_1324_;
v___y_1310_ = v___x_1323_;
v___y_1311_ = v_size_1325_;
goto v___jp_1308_;
}
else
{
lean_object* v___x_1326_; 
v___x_1326_ = lean_unsigned_to_nat(0u);
v___y_1309_ = v___x_1324_;
v___y_1310_ = v___x_1323_;
v___y_1311_ = v___x_1326_;
goto v___jp_1308_;
}
}
}
}
}
else
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1341_; 
lean_del_object(v___x_1093_);
v___x_1336_ = lean_unsigned_to_nat(1u);
v___x_1337_ = lean_nat_add(v___x_1336_, v_size_1275_);
v___x_1338_ = lean_nat_add(v___x_1337_, v_size_1276_);
lean_dec(v_size_1276_);
v___x_1339_ = lean_nat_add(v___x_1337_, v_size_1293_);
lean_dec(v___x_1337_);
lean_inc_ref(v_l_1090_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 4, v_l_1279_);
lean_ctor_set(v___x_1291_, 3, v_l_1090_);
lean_ctor_set(v___x_1291_, 2, v_v_1089_);
lean_ctor_set(v___x_1291_, 1, v_k_1088_);
lean_ctor_set(v___x_1291_, 0, v___x_1339_);
v___x_1341_ = v___x_1291_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1339_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1354_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1354_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1354_, 4, v_l_1279_);
v___x_1341_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1348_; 
v_isSharedCheck_1348_ = !lean_is_exclusive(v_l_1090_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; lean_object* v_unused_1350_; lean_object* v_unused_1351_; lean_object* v_unused_1352_; lean_object* v_unused_1353_; 
v_unused_1349_ = lean_ctor_get(v_l_1090_, 4);
lean_dec(v_unused_1349_);
v_unused_1350_ = lean_ctor_get(v_l_1090_, 3);
lean_dec(v_unused_1350_);
v_unused_1351_ = lean_ctor_get(v_l_1090_, 2);
lean_dec(v_unused_1351_);
v_unused_1352_ = lean_ctor_get(v_l_1090_, 1);
lean_dec(v_unused_1352_);
v_unused_1353_ = lean_ctor_get(v_l_1090_, 0);
lean_dec(v_unused_1353_);
v___x_1343_ = v_l_1090_;
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
else
{
lean_dec(v_l_1090_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 4, v_r_1280_);
lean_ctor_set(v___x_1343_, 3, v___x_1341_);
lean_ctor_set(v___x_1343_, 2, v_v_1278_);
lean_ctor_set(v___x_1343_, 1, v_k_1277_);
lean_ctor_set(v___x_1343_, 0, v___x_1338_);
v___x_1346_ = v___x_1343_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1338_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v_k_1277_);
lean_ctor_set(v_reuseFailAlloc_1347_, 2, v_v_1278_);
lean_ctor_set(v_reuseFailAlloc_1347_, 3, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1347_, 4, v_r_1280_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
}
else
{
lean_object* v___x_1355_; lean_object* v___x_1356_; 
lean_dec_ref_known(v_l_1279_, 5);
lean_del_object(v___x_1291_);
lean_dec(v_v_1278_);
lean_dec(v_k_1277_);
lean_dec(v_size_1276_);
lean_dec_ref_known(v_l_1090_, 5);
lean_del_object(v___x_1093_);
lean_dec(v_v_1089_);
lean_dec(v_k_1088_);
v___x_1355_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__7);
v___x_1356_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1355_);
return v___x_1356_;
}
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
lean_del_object(v___x_1291_);
lean_dec(v_r_1280_);
lean_dec(v_v_1278_);
lean_dec(v_k_1277_);
lean_dec(v_size_1276_);
lean_dec_ref_known(v_l_1090_, 5);
lean_del_object(v___x_1093_);
lean_dec(v_v_1089_);
lean_dec(v_k_1088_);
v___x_1357_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg___closed__8);
v___x_1358_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v___x_1357_);
return v___x_1358_;
}
}
}
}
else
{
lean_object* v_size_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1369_; 
v_size_1365_ = lean_ctor_get(v_l_1090_, 0);
v___x_1366_ = lean_unsigned_to_nat(1u);
v___x_1367_ = lean_nat_add(v___x_1366_, v_size_1365_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1274_);
lean_ctor_set(v___x_1093_, 0, v___x_1367_);
v___x_1369_ = v___x_1093_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1370_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1370_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1370_, 4, v___x_1274_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
else
{
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_l_1371_; 
v_l_1371_ = lean_ctor_get(v___x_1274_, 3);
lean_inc(v_l_1371_);
if (lean_obj_tag(v_l_1371_) == 0)
{
lean_object* v_r_1372_; 
v_r_1372_ = lean_ctor_get(v___x_1274_, 4);
lean_inc(v_r_1372_);
if (lean_obj_tag(v_r_1372_) == 0)
{
lean_object* v_size_1373_; lean_object* v_k_1374_; lean_object* v_v_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1389_; 
v_size_1373_ = lean_ctor_get(v___x_1274_, 0);
v_k_1374_ = lean_ctor_get(v___x_1274_, 1);
v_v_1375_ = lean_ctor_get(v___x_1274_, 2);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; lean_object* v_unused_1391_; 
v_unused_1390_ = lean_ctor_get(v___x_1274_, 4);
lean_dec(v_unused_1390_);
v_unused_1391_ = lean_ctor_get(v___x_1274_, 3);
lean_dec(v_unused_1391_);
v___x_1377_ = v___x_1274_;
v_isShared_1378_ = v_isSharedCheck_1389_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_v_1375_);
lean_inc(v_k_1374_);
lean_inc(v_size_1373_);
lean_dec(v___x_1274_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1389_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v_size_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1384_; 
v_size_1379_ = lean_ctor_get(v_l_1371_, 0);
v___x_1380_ = lean_unsigned_to_nat(1u);
v___x_1381_ = lean_nat_add(v___x_1380_, v_size_1373_);
lean_dec(v_size_1373_);
v___x_1382_ = lean_nat_add(v___x_1380_, v_size_1379_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 4, v_l_1371_);
lean_ctor_set(v___x_1377_, 3, v_l_1090_);
lean_ctor_set(v___x_1377_, 2, v_v_1089_);
lean_ctor_set(v___x_1377_, 1, v_k_1088_);
lean_ctor_set(v___x_1377_, 0, v___x_1382_);
v___x_1384_ = v___x_1377_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v_l_1090_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v_l_1371_);
v___x_1384_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
lean_object* v___x_1386_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v_r_1372_);
lean_ctor_set(v___x_1093_, 3, v___x_1384_);
lean_ctor_set(v___x_1093_, 2, v_v_1375_);
lean_ctor_set(v___x_1093_, 1, v_k_1374_);
lean_ctor_set(v___x_1093_, 0, v___x_1381_);
v___x_1386_ = v___x_1093_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v_k_1374_);
lean_ctor_set(v_reuseFailAlloc_1387_, 2, v_v_1375_);
lean_ctor_set(v_reuseFailAlloc_1387_, 3, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1387_, 4, v_r_1372_);
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
else
{
lean_object* v_k_1392_; lean_object* v_v_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1417_; 
v_k_1392_ = lean_ctor_get(v___x_1274_, 1);
v_v_1393_ = lean_ctor_get(v___x_1274_, 2);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1417_ == 0)
{
lean_object* v_unused_1418_; lean_object* v_unused_1419_; lean_object* v_unused_1420_; 
v_unused_1418_ = lean_ctor_get(v___x_1274_, 4);
lean_dec(v_unused_1418_);
v_unused_1419_ = lean_ctor_get(v___x_1274_, 3);
lean_dec(v_unused_1419_);
v_unused_1420_ = lean_ctor_get(v___x_1274_, 0);
lean_dec(v_unused_1420_);
v___x_1395_ = v___x_1274_;
v_isShared_1396_ = v_isSharedCheck_1417_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_v_1393_);
lean_inc(v_k_1392_);
lean_dec(v___x_1274_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1417_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v_k_1397_; lean_object* v_v_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1413_; 
v_k_1397_ = lean_ctor_get(v_l_1371_, 1);
v_v_1398_ = lean_ctor_get(v_l_1371_, 2);
v_isSharedCheck_1413_ = !lean_is_exclusive(v_l_1371_);
if (v_isSharedCheck_1413_ == 0)
{
lean_object* v_unused_1414_; lean_object* v_unused_1415_; lean_object* v_unused_1416_; 
v_unused_1414_ = lean_ctor_get(v_l_1371_, 4);
lean_dec(v_unused_1414_);
v_unused_1415_ = lean_ctor_get(v_l_1371_, 3);
lean_dec(v_unused_1415_);
v_unused_1416_ = lean_ctor_get(v_l_1371_, 0);
lean_dec(v_unused_1416_);
v___x_1400_ = v_l_1371_;
v_isShared_1401_ = v_isSharedCheck_1413_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_v_1398_);
lean_inc(v_k_1397_);
lean_dec(v_l_1371_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1413_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1402_ = lean_unsigned_to_nat(3u);
v___x_1403_ = lean_unsigned_to_nat(1u);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 4, v_r_1372_);
lean_ctor_set(v___x_1400_, 3, v_r_1372_);
lean_ctor_set(v___x_1400_, 2, v_v_1089_);
lean_ctor_set(v___x_1400_, 1, v_k_1088_);
lean_ctor_set(v___x_1400_, 0, v___x_1403_);
v___x_1405_ = v___x_1400_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1403_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1412_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1412_, 3, v_r_1372_);
lean_ctor_set(v_reuseFailAlloc_1412_, 4, v_r_1372_);
v___x_1405_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1407_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 3, v_r_1372_);
lean_ctor_set(v___x_1395_, 0, v___x_1403_);
v___x_1407_ = v___x_1395_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1403_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1411_, 3, v_r_1372_);
lean_ctor_set(v_reuseFailAlloc_1411_, 4, v_r_1372_);
v___x_1407_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1409_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1407_);
lean_ctor_set(v___x_1093_, 3, v___x_1405_);
lean_ctor_set(v___x_1093_, 2, v_v_1398_);
lean_ctor_set(v___x_1093_, 1, v_k_1397_);
lean_ctor_set(v___x_1093_, 0, v___x_1402_);
v___x_1409_ = v___x_1093_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1402_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_k_1397_);
lean_ctor_set(v_reuseFailAlloc_1410_, 2, v_v_1398_);
lean_ctor_set(v_reuseFailAlloc_1410_, 3, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1410_, 4, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1421_; 
v_r_1421_ = lean_ctor_get(v___x_1274_, 4);
lean_inc(v_r_1421_);
if (lean_obj_tag(v_r_1421_) == 0)
{
lean_object* v_k_1422_; lean_object* v_v_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1435_; 
v_k_1422_ = lean_ctor_get(v___x_1274_, 1);
v_v_1423_ = lean_ctor_get(v___x_1274_, 2);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; lean_object* v_unused_1437_; lean_object* v_unused_1438_; 
v_unused_1436_ = lean_ctor_get(v___x_1274_, 4);
lean_dec(v_unused_1436_);
v_unused_1437_ = lean_ctor_get(v___x_1274_, 3);
lean_dec(v_unused_1437_);
v_unused_1438_ = lean_ctor_get(v___x_1274_, 0);
lean_dec(v_unused_1438_);
v___x_1425_ = v___x_1274_;
v_isShared_1426_ = v_isSharedCheck_1435_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_v_1423_);
lean_inc(v_k_1422_);
lean_dec(v___x_1274_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1435_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1427_ = lean_unsigned_to_nat(3u);
v___x_1428_ = lean_unsigned_to_nat(1u);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 4, v_l_1371_);
lean_ctor_set(v___x_1425_, 2, v_v_1089_);
lean_ctor_set(v___x_1425_, 1, v_k_1088_);
lean_ctor_set(v___x_1425_, 0, v___x_1428_);
v___x_1430_ = v___x_1425_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1428_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1434_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1434_, 3, v_l_1371_);
lean_ctor_set(v_reuseFailAlloc_1434_, 4, v_l_1371_);
v___x_1430_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1432_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v_r_1421_);
lean_ctor_set(v___x_1093_, 3, v___x_1430_);
lean_ctor_set(v___x_1093_, 2, v_v_1423_);
lean_ctor_set(v___x_1093_, 1, v_k_1422_);
lean_ctor_set(v___x_1093_, 0, v___x_1427_);
v___x_1432_ = v___x_1093_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1427_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v_k_1422_);
lean_ctor_set(v_reuseFailAlloc_1433_, 2, v_v_1423_);
lean_ctor_set(v_reuseFailAlloc_1433_, 3, v___x_1430_);
lean_ctor_set(v_reuseFailAlloc_1433_, 4, v_r_1421_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
else
{
lean_object* v___x_1439_; lean_object* v___x_1441_; 
v___x_1439_ = lean_unsigned_to_nat(2u);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1274_);
lean_ctor_set(v___x_1093_, 3, v_r_1421_);
lean_ctor_set(v___x_1093_, 0, v___x_1439_);
v___x_1441_ = v___x_1093_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1442_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1442_, 3, v_r_1421_);
lean_ctor_set(v_reuseFailAlloc_1442_, 4, v___x_1274_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
else
{
lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1443_ = lean_unsigned_to_nat(1u);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 4, v___x_1274_);
lean_ctor_set(v___x_1093_, 3, v___x_1274_);
lean_ctor_set(v___x_1093_, 0, v___x_1443_);
v___x_1445_ = v___x_1093_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v_k_1088_);
lean_ctor_set(v_reuseFailAlloc_1446_, 2, v_v_1089_);
lean_ctor_set(v_reuseFailAlloc_1446_, 3, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1446_, 4, v___x_1274_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1448_);
lean_ctor_set(v___x_1449_, 1, v_k_1084_);
lean_ctor_set(v___x_1449_, 2, v_v_1085_);
lean_ctor_set(v___x_1449_, 3, v_t_1086_);
lean_ctor_set(v___x_1449_, 4, v_t_1086_);
return v___x_1449_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(lean_object* v_init_1450_, lean_object* v_x_1451_){
_start:
{
if (lean_obj_tag(v_x_1451_) == 0)
{
lean_object* v_k_1452_; lean_object* v_v_1453_; lean_object* v_l_1454_; lean_object* v_r_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_k_1452_ = lean_ctor_get(v_x_1451_, 1);
lean_inc(v_k_1452_);
v_v_1453_ = lean_ctor_get(v_x_1451_, 2);
lean_inc(v_v_1453_);
v_l_1454_ = lean_ctor_get(v_x_1451_, 3);
lean_inc(v_l_1454_);
v_r_1455_ = lean_ctor_get(v_x_1451_, 4);
lean_inc(v_r_1455_);
lean_dec_ref_known(v_x_1451_, 5);
v___x_1456_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(v_init_1450_, v_l_1454_);
v___x_1457_ = 1;
v___x_1458_ = l_Lean_Name_toString(v_k_1452_, v___x_1457_);
v___x_1459_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_v_1453_);
v___x_1460_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v___x_1458_, v___x_1459_, v___x_1456_);
v_init_1450_ = v___x_1460_;
v_x_1451_ = v_r_1455_;
goto _start;
}
else
{
return v_init_1450_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0(lean_object* v_m_1462_){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1463_ = lean_box(1);
v___x_1464_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(v___x_1463_, v_m_1462_);
v___x_1465_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_baseVars(lean_object* v_env_1471_){
_start:
{
lean_object* v_lake_1472_; lean_object* v_lean_1473_; lean_object* v_elan_x3f_1474_; lean_object* v_pkgUrlMap_1475_; uint8_t v_noCache_1476_; lean_object* v_lakeConfig_x3f_1477_; lean_object* v_cacheKey_x3f_1478_; lean_object* v_cacheArtifactEndpoint_x3f_1479_; lean_object* v_cacheRevisionEndpoint_x3f_1480_; lean_object* v_cacheService_x3f_1481_; lean_object* v_toolchain_1482_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; lean_object* v___y_1490_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1538_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1560_; lean_object* v___y_1561_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___x_1611_; lean_object* v___y_1613_; 
v_lake_1472_ = lean_ctor_get(v_env_1471_, 0);
lean_inc_ref(v_lake_1472_);
v_lean_1473_ = lean_ctor_get(v_env_1471_, 1);
lean_inc_ref(v_lean_1473_);
v_elan_x3f_1474_ = lean_ctor_get(v_env_1471_, 2);
lean_inc(v_elan_x3f_1474_);
v_pkgUrlMap_1475_ = lean_ctor_get(v_env_1471_, 5);
lean_inc(v_pkgUrlMap_1475_);
v_noCache_1476_ = lean_ctor_get_uint8(v_env_1471_, sizeof(void*)*20);
v_lakeConfig_x3f_1477_ = lean_ctor_get(v_env_1471_, 10);
lean_inc(v_lakeConfig_x3f_1477_);
v_cacheKey_x3f_1478_ = lean_ctor_get(v_env_1471_, 11);
lean_inc(v_cacheKey_x3f_1478_);
v_cacheArtifactEndpoint_x3f_1479_ = lean_ctor_get(v_env_1471_, 12);
lean_inc(v_cacheArtifactEndpoint_x3f_1479_);
v_cacheRevisionEndpoint_x3f_1480_ = lean_ctor_get(v_env_1471_, 13);
lean_inc(v_cacheRevisionEndpoint_x3f_1480_);
v_cacheService_x3f_1481_ = lean_ctor_get(v_env_1471_, 14);
lean_inc(v_cacheService_x3f_1481_);
v_toolchain_1482_ = lean_ctor_get(v_env_1471_, 19);
lean_inc_ref(v_toolchain_1482_);
lean_dec_ref(v_env_1471_);
v___x_1611_ = ((lean_object*)(l_Lake_Env_baseVars___closed__3));
if (lean_obj_tag(v_elan_x3f_1474_) == 0)
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_box(0);
v___y_1613_ = v___x_1626_;
goto v___jp_1612_;
}
else
{
lean_object* v_val_1627_; lean_object* v_elan_1628_; lean_object* v___x_1629_; 
v_val_1627_ = lean_ctor_get(v_elan_x3f_1474_, 0);
v_elan_1628_ = lean_ctor_get(v_val_1627_, 1);
lean_inc_ref(v_elan_1628_);
v___x_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1629_, 0, v_elan_1628_);
v___y_1613_ = v___x_1629_;
goto v___jp_1612_;
}
v___jp_1483_:
{
lean_object* v_sysroot_1497_; lean_object* v_lean_1498_; lean_object* v_ar_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v_sysroot_1497_ = lean_ctor_get(v_lean_1473_, 0);
v_lean_1498_ = lean_ctor_get(v_lean_1473_, 7);
v_ar_1499_ = lean_ctor_get(v_lean_1473_, 13);
lean_inc_ref(v___y_1491_);
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___y_1491_);
lean_ctor_set(v___x_1500_, 1, v___y_1496_);
v___x_1501_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__7));
lean_inc_ref(v_lean_1498_);
v___x_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1502_, 0, v_lean_1498_);
v___x_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1501_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
v___x_1504_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__10));
lean_inc_ref(v_sysroot_1497_);
v___x_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1505_, 0, v_sysroot_1497_);
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1504_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__12));
lean_inc_ref(v_ar_1499_);
v___x_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_ar_1499_);
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1507_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
v___x_1510_ = ((lean_object*)(l_Lake_Env_baseVars___closed__0));
v___x_1511_ = l_Lake_LeanInstall_leanCc_x3f(v_lean_1473_);
lean_dec_ref(v_lean_1473_);
v___x_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_unsigned_to_nat(16u);
v___x_1514_ = lean_mk_empty_array_with_capacity(v___x_1513_);
v___x_1515_ = lean_array_push(v___x_1514_, v___y_1490_);
v___x_1516_ = lean_array_push(v___x_1515_, v___y_1486_);
v___x_1517_ = lean_array_push(v___x_1516_, v___y_1487_);
v___x_1518_ = lean_array_push(v___x_1517_, v___y_1485_);
v___x_1519_ = lean_array_push(v___x_1518_, v___y_1488_);
v___x_1520_ = lean_array_push(v___x_1519_, v___y_1484_);
v___x_1521_ = lean_array_push(v___x_1520_, v___y_1494_);
v___x_1522_ = lean_array_push(v___x_1521_, v___y_1495_);
v___x_1523_ = lean_array_push(v___x_1522_, v___y_1489_);
v___x_1524_ = lean_array_push(v___x_1523_, v___y_1493_);
v___x_1525_ = lean_array_push(v___x_1524_, v___y_1492_);
v___x_1526_ = lean_array_push(v___x_1525_, v___x_1500_);
v___x_1527_ = lean_array_push(v___x_1526_, v___x_1503_);
v___x_1528_ = lean_array_push(v___x_1527_, v___x_1506_);
v___x_1529_ = lean_array_push(v___x_1528_, v___x_1509_);
v___x_1530_ = lean_array_push(v___x_1529_, v___x_1512_);
return v___x_1530_;
}
v___jp_1531_:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
lean_inc_ref(v___y_1540_);
v___x_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1541_, 0, v___y_1540_);
lean_inc_ref(v___y_1537_);
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v___y_1537_);
lean_ctor_set(v___x_1542_, 1, v___x_1541_);
v___x_1543_ = ((lean_object*)(l_Lake_Env_compute___closed__7));
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
lean_ctor_set(v___x_1544_, 1, v_cacheKey_x3f_1478_);
v___x_1545_ = ((lean_object*)(l_Lake_Env_compute___closed__8));
v___x_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
lean_ctor_set(v___x_1546_, 1, v_cacheArtifactEndpoint_x3f_1479_);
v___x_1547_ = ((lean_object*)(l_Lake_Env_compute___closed__9));
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
lean_ctor_set(v___x_1548_, 1, v_cacheRevisionEndpoint_x3f_1480_);
v___x_1549_ = ((lean_object*)(l_Lake_Env_compute___closed__10));
if (lean_obj_tag(v_cacheService_x3f_1481_) == 0)
{
lean_object* v___x_1550_; 
v___x_1550_ = lean_box(0);
v___y_1484_ = v___y_1534_;
v___y_1485_ = v___y_1533_;
v___y_1486_ = v___y_1532_;
v___y_1487_ = v___y_1535_;
v___y_1488_ = v___y_1536_;
v___y_1489_ = v___x_1544_;
v___y_1490_ = v___y_1538_;
v___y_1491_ = v___x_1549_;
v___y_1492_ = v___x_1548_;
v___y_1493_ = v___x_1546_;
v___y_1494_ = v___y_1539_;
v___y_1495_ = v___x_1542_;
v___y_1496_ = v___x_1550_;
goto v___jp_1483_;
}
else
{
lean_object* v_val_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
v_val_1551_ = lean_ctor_get(v_cacheService_x3f_1481_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_cacheService_x3f_1481_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1553_ = v_cacheService_x3f_1481_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_val_1551_);
lean_dec(v_cacheService_x3f_1481_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_val_1551_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
v___y_1484_ = v___y_1534_;
v___y_1485_ = v___y_1533_;
v___y_1486_ = v___y_1532_;
v___y_1487_ = v___y_1535_;
v___y_1488_ = v___y_1536_;
v___y_1489_ = v___x_1544_;
v___y_1490_ = v___y_1538_;
v___y_1491_ = v___x_1549_;
v___y_1492_ = v___x_1548_;
v___y_1493_ = v___x_1546_;
v___y_1494_ = v___y_1539_;
v___y_1495_ = v___x_1542_;
v___y_1496_ = v___x_1556_;
goto v___jp_1483_;
}
}
}
}
v___jp_1559_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_inc_ref(v___y_1565_);
v___x_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___y_1565_);
lean_ctor_set(v___x_1567_, 1, v___y_1566_);
v___x_1568_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_compute_computePkgUrlMap___closed__0));
v___x_1569_ = l_Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0(v_pkgUrlMap_1475_);
v___x_1570_ = l_Lean_Json_compress(v___x_1569_);
v___x_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1568_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = ((lean_object*)(l_Lake_Env_compute___closed__2));
if (v_noCache_1476_ == 0)
{
lean_object* v___x_1574_; 
v___x_1574_ = ((lean_object*)(l_Lake_Env_baseVars___closed__1));
v___y_1532_ = v___y_1561_;
v___y_1533_ = v___y_1560_;
v___y_1534_ = v___x_1567_;
v___y_1535_ = v___y_1562_;
v___y_1536_ = v___y_1563_;
v___y_1537_ = v___x_1573_;
v___y_1538_ = v___y_1564_;
v___y_1539_ = v___x_1572_;
v___y_1540_ = v___x_1574_;
goto v___jp_1531_;
}
else
{
lean_object* v___x_1575_; 
v___x_1575_ = ((lean_object*)(l_Lake_Env_baseVars___closed__2));
v___y_1532_ = v___y_1561_;
v___y_1533_ = v___y_1560_;
v___y_1534_ = v___x_1567_;
v___y_1535_ = v___y_1562_;
v___y_1536_ = v___y_1563_;
v___y_1537_ = v___x_1573_;
v___y_1538_ = v___y_1564_;
v___y_1539_ = v___x_1572_;
v___y_1540_ = v___x_1575_;
goto v___jp_1531_;
}
}
v___jp_1576_:
{
lean_object* v_home_1581_; lean_object* v_lake_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v_home_1581_ = lean_ctor_get(v_lake_1472_, 0);
lean_inc_ref(v_home_1581_);
v_lake_1582_ = lean_ctor_get(v_lake_1472_, 5);
lean_inc_ref(v_lake_1582_);
lean_dec_ref(v_lake_1472_);
lean_inc_ref(v___y_1579_);
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___y_1579_);
lean_ctor_set(v___x_1583_, 1, v___y_1580_);
v___x_1584_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__1));
v___x_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1585_, 0, v_lake_1582_);
v___x_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1584_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
v___x_1587_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__5));
v___x_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1588_, 0, v_home_1581_);
v___x_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = ((lean_object*)(l_Lake_Env_compute___closed__6));
if (lean_obj_tag(v_lakeConfig_x3f_1477_) == 1)
{
lean_object* v_val_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
v_val_1591_ = lean_ctor_get(v_lakeConfig_x3f_1477_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v_lakeConfig_x3f_1477_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v_lakeConfig_x3f_1477_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_val_1591_);
lean_dec(v_lakeConfig_x3f_1477_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_val_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
v___y_1560_ = v___x_1586_;
v___y_1561_ = v___y_1577_;
v___y_1562_ = v___x_1583_;
v___y_1563_ = v___x_1589_;
v___y_1564_ = v___y_1578_;
v___y_1565_ = v___x_1590_;
v___y_1566_ = v___x_1596_;
goto v___jp_1559_;
}
}
}
else
{
lean_object* v___x_1599_; 
lean_dec(v_lakeConfig_x3f_1477_);
v___x_1599_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
v___y_1560_ = v___x_1586_;
v___y_1561_ = v___y_1577_;
v___y_1562_ = v___x_1583_;
v___y_1563_ = v___x_1589_;
v___y_1564_ = v___y_1578_;
v___y_1565_ = v___x_1590_;
v___y_1566_ = v___x_1599_;
goto v___jp_1559_;
}
}
v___jp_1600_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; uint8_t v___x_1608_; 
lean_inc_ref(v___y_1602_);
v___x_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___y_1602_);
lean_ctor_set(v___x_1604_, 1, v___y_1603_);
v___x_1605_ = ((lean_object*)(l_Lake_Env_computeToolchain___closed__0));
v___x_1606_ = lean_string_utf8_byte_size(v_toolchain_1482_);
v___x_1607_ = lean_unsigned_to_nat(0u);
v___x_1608_ = lean_nat_dec_eq(v___x_1606_, v___x_1607_);
if (v___x_1608_ == 0)
{
lean_object* v___x_1609_; 
v___x_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_toolchain_1482_);
v___y_1577_ = v___x_1604_;
v___y_1578_ = v___y_1601_;
v___y_1579_ = v___x_1605_;
v___y_1580_ = v___x_1609_;
goto v___jp_1576_;
}
else
{
lean_object* v___x_1610_; 
lean_dec_ref(v_toolchain_1482_);
v___x_1610_ = lean_box(0);
v___y_1577_ = v___x_1604_;
v___y_1578_ = v___y_1601_;
v___y_1579_ = v___x_1605_;
v___y_1580_ = v___x_1610_;
goto v___jp_1576_;
}
}
v___jp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1611_);
lean_ctor_set(v___x_1614_, 1, v___y_1613_);
v___x_1615_ = ((lean_object*)(l_Lake_Env_baseVars___closed__4));
if (lean_obj_tag(v_elan_x3f_1474_) == 0)
{
lean_object* v___x_1616_; 
v___x_1616_ = lean_box(0);
v___y_1601_ = v___x_1614_;
v___y_1602_ = v___x_1615_;
v___y_1603_ = v___x_1616_;
goto v___jp_1600_;
}
else
{
lean_object* v_val_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1625_; 
v_val_1617_ = lean_ctor_get(v_elan_x3f_1474_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v_elan_x3f_1474_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1619_ = v_elan_x3f_1474_;
v_isShared_1620_ = v_isSharedCheck_1625_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_val_1617_);
lean_dec(v_elan_x3f_1474_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1625_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v_home_1621_; lean_object* v___x_1623_; 
v_home_1621_ = lean_ctor_get(v_val_1617_, 0);
lean_inc_ref(v_home_1621_);
lean_dec(v_val_1617_);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 0, v_home_1621_);
v___x_1623_ = v___x_1619_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_home_1621_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
v___y_1601_ = v___x_1614_;
v___y_1602_ = v___x_1615_;
v___y_1603_ = v___x_1623_;
goto v___jp_1600_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1630_, lean_object* v_msg_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0_spec__1___redArg(v_msg_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0(lean_object* v_00_u03b2_1633_, lean_object* v_k_1634_, lean_object* v_v_1635_, lean_object* v_t_1636_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__0___redArg(v_k_1634_, v_v_1635_, v_t_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1(lean_object* v_init_1638_, lean_object* v_t_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00Lake_Env_baseVars_spec__0_spec__1_spec__3(v_init_1638_, v_t_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0(uint8_t v_b_1645_){
_start:
{
if (v_b_1645_ == 0)
{
lean_object* v___x_1646_; 
v___x_1646_ = ((lean_object*)(l_Lake_Env_vars___lam__0___closed__0));
return v___x_1646_;
}
else
{
lean_object* v___x_1647_; 
v___x_1647_ = ((lean_object*)(l_Lake_Env_vars___lam__0___closed__1));
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__0___boxed(lean_object* v_b_1648_){
_start:
{
uint8_t v_b_boxed_1649_; lean_object* v_res_1650_; 
v_b_boxed_1649_ = lean_unbox(v_b_1648_);
v_res_1650_ = l_Lake_Env_vars___lam__0(v_b_boxed_1649_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1(lean_object* v_x_1651_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars___lam__1___boxed(lean_object* v_x_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lake_Env_vars___lam__1(v_x_1653_);
lean_dec(v_x_1653_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_vars(lean_object* v_env_1655_){
_start:
{
lean_object* v_enableArtifactCache_x3f_1656_; lean_object* v_restoreAllArtifacts_x3f_1657_; uint8_t v_usageCutoff_1658_; lean_object* v_lakeCache_x3f_1659_; lean_object* v___x_1660_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___x_1725_; lean_object* v___y_1727_; 
v_enableArtifactCache_x3f_1656_ = lean_ctor_get(v_env_1655_, 6);
v_restoreAllArtifacts_x3f_1657_ = lean_ctor_get(v_env_1655_, 7);
v_usageCutoff_1658_ = lean_ctor_get_uint8(v_env_1655_, sizeof(void*)*20 + 1);
v_lakeCache_x3f_1659_ = lean_ctor_get(v_env_1655_, 8);
lean_inc(v_lakeCache_x3f_1659_);
lean_inc_ref(v_env_1655_);
v___x_1660_ = l_Lake_Env_baseVars(v_env_1655_);
v___x_1725_ = ((lean_object*)(l___private_Lake_Config_Env_0__Lake_Env_computeEnvCache_x3f___closed__0));
if (lean_obj_tag(v_lakeCache_x3f_1659_) == 1)
{
lean_object* v_val_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
v_val_1734_ = lean_ctor_get(v_lakeCache_x3f_1659_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v_lakeCache_x3f_1659_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v_lakeCache_x3f_1659_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_val_1734_);
lean_dec(v_lakeCache_x3f_1659_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_val_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
v___y_1727_ = v___x_1739_;
goto v___jp_1726_;
}
}
}
else
{
lean_object* v___x_1742_; 
lean_dec(v_lakeCache_x3f_1659_);
v___x_1742_ = ((lean_object*)(l_Lake_Env_noToolchainVars___closed__16));
v___y_1727_ = v___x_1742_;
goto v___jp_1726_;
}
v___jp_1661_:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v_vars_1698_; uint8_t v___x_1699_; 
lean_inc_ref(v___y_1666_);
v___x_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1667_, 0, v___y_1666_);
lean_inc_ref(v___y_1663_);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___y_1663_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = ((lean_object*)(l_Lake_Env_compute___closed__12));
v___x_1670_ = l_Lake_Env_leanPath(v_env_1655_);
v___x_1671_ = l_System_SearchPath_toString(v___x_1670_);
v___x_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1669_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = ((lean_object*)(l_Lake_Env_compute___closed__13));
v___x_1675_ = l_Lake_Env_leanSrcPath(v_env_1655_);
v___x_1676_ = l_System_SearchPath_toString(v___x_1675_);
v___x_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1674_);
lean_ctor_set(v___x_1678_, 1, v___x_1677_);
v___x_1679_ = ((lean_object*)(l_Lake_Env_compute___closed__11));
v___x_1680_ = l_Lake_Env_leanGithash(v_env_1655_);
v___x_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1679_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = ((lean_object*)(l_Lake_Env_compute___closed__14));
v___x_1684_ = l_Lake_Env_path(v_env_1655_);
v___x_1685_ = l_System_SearchPath_toString(v___x_1684_);
v___x_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1683_);
lean_ctor_set(v___x_1687_, 1, v___x_1686_);
v___x_1688_ = lean_unsigned_to_nat(8u);
v___x_1689_ = lean_mk_empty_array_with_capacity(v___x_1688_);
v___x_1690_ = lean_array_push(v___x_1689_, v___y_1665_);
v___x_1691_ = lean_array_push(v___x_1690_, v___y_1662_);
v___x_1692_ = lean_array_push(v___x_1691_, v___y_1664_);
v___x_1693_ = lean_array_push(v___x_1692_, v___x_1668_);
v___x_1694_ = lean_array_push(v___x_1693_, v___x_1673_);
v___x_1695_ = lean_array_push(v___x_1694_, v___x_1678_);
v___x_1696_ = lean_array_push(v___x_1695_, v___x_1682_);
v___x_1697_ = lean_array_push(v___x_1696_, v___x_1687_);
v_vars_1698_ = l_Array_append___redArg(v___x_1660_, v___x_1697_);
lean_dec_ref(v___x_1697_);
v___x_1699_ = l_System_Platform_isWindows;
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1700_ = l_Lake_sharedLibPathEnvVar;
v___x_1701_ = l_Lake_Env_sharedLibPath(v_env_1655_);
v___x_1702_ = l_System_SearchPath_toString(v___x_1701_);
v___x_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1700_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = lean_array_push(v_vars_1698_, v___x_1704_);
return v___x_1705_;
}
else
{
lean_dec_ref(v_env_1655_);
return v_vars_1698_;
}
}
v___jp_1706_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
lean_inc_ref(v___y_1708_);
v___x_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___y_1708_);
lean_ctor_set(v___x_1711_, 1, v___y_1710_);
v___x_1712_ = ((lean_object*)(l_Lake_Env_compute___closed__5));
if (v_usageCutoff_1658_ == 0)
{
lean_object* v___x_1713_; 
v___x_1713_ = ((lean_object*)(l_Lake_Env_baseVars___closed__1));
v___y_1662_ = v___y_1707_;
v___y_1663_ = v___x_1712_;
v___y_1664_ = v___x_1711_;
v___y_1665_ = v___y_1709_;
v___y_1666_ = v___x_1713_;
goto v___jp_1661_;
}
else
{
lean_object* v___x_1714_; 
v___x_1714_ = ((lean_object*)(l_Lake_Env_baseVars___closed__2));
v___y_1662_ = v___y_1707_;
v___y_1663_ = v___x_1712_;
v___y_1664_ = v___x_1711_;
v___y_1665_ = v___y_1709_;
v___y_1666_ = v___x_1714_;
goto v___jp_1661_;
}
}
v___jp_1715_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
lean_inc_ref(v___y_1716_);
v___x_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___y_1716_);
lean_ctor_set(v___x_1719_, 1, v___y_1718_);
v___x_1720_ = ((lean_object*)(l_Lake_Env_compute___closed__4));
if (lean_obj_tag(v_restoreAllArtifacts_x3f_1657_) == 1)
{
lean_object* v_val_1721_; uint8_t v___x_1722_; lean_object* v___x_1723_; 
v_val_1721_ = lean_ctor_get(v_restoreAllArtifacts_x3f_1657_, 0);
v___x_1722_ = lean_unbox(v_val_1721_);
v___x_1723_ = l_Lake_Env_vars___lam__0(v___x_1722_);
v___y_1707_ = v___x_1719_;
v___y_1708_ = v___x_1720_;
v___y_1709_ = v___y_1717_;
v___y_1710_ = v___x_1723_;
goto v___jp_1706_;
}
else
{
lean_object* v___x_1724_; 
v___x_1724_ = l_Lake_Env_vars___lam__1(v_restoreAllArtifacts_x3f_1657_);
v___y_1707_ = v___x_1719_;
v___y_1708_ = v___x_1720_;
v___y_1709_ = v___y_1717_;
v___y_1710_ = v___x_1724_;
goto v___jp_1706_;
}
}
v___jp_1726_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1725_);
lean_ctor_set(v___x_1728_, 1, v___y_1727_);
v___x_1729_ = ((lean_object*)(l_Lake_Env_compute___closed__3));
if (lean_obj_tag(v_enableArtifactCache_x3f_1656_) == 1)
{
lean_object* v_val_1730_; uint8_t v___x_1731_; lean_object* v___x_1732_; 
v_val_1730_ = lean_ctor_get(v_enableArtifactCache_x3f_1656_, 0);
v___x_1731_ = lean_unbox(v_val_1730_);
v___x_1732_ = l_Lake_Env_vars___lam__0(v___x_1731_);
v___y_1716_ = v___x_1729_;
v___y_1717_ = v___x_1728_;
v___y_1718_ = v___x_1732_;
goto v___jp_1715_;
}
else
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lake_Env_vars___lam__1(v_enableArtifactCache_x3f_1656_);
v___y_1716_ = v___x_1729_;
v___y_1717_ = v___x_1728_;
v___y_1718_ = v___x_1733_;
goto v___jp_1715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath(lean_object* v_env_1743_){
_start:
{
lean_object* v_lake_1744_; lean_object* v_lean_1745_; lean_object* v_libDir_1746_; lean_object* v_leanLibDir_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v_lake_1744_ = lean_ctor_get(v_env_1743_, 0);
v_lean_1745_ = lean_ctor_get(v_env_1743_, 1);
v_libDir_1746_ = lean_ctor_get(v_lake_1744_, 3);
v_leanLibDir_1747_ = lean_ctor_get(v_lean_1745_, 3);
v___x_1748_ = l_Lake_Env_leanPath(v_env_1743_);
lean_inc_ref(v_leanLibDir_1747_);
v___x_1749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1749_, 0, v_leanLibDir_1747_);
lean_ctor_set(v___x_1749_, 1, v___x_1748_);
lean_inc_ref(v_libDir_1746_);
v___x_1750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1750_, 0, v_libDir_1746_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Lake_Env_leanSearchPath___boxed(lean_object* v_env_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Lake_Env_leanSearchPath(v_env_1751_);
lean_dec_ref(v_env_1751_);
return v_res_1752_;
}
}
lean_object* runtime_initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Env(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedEnv_default = _init_l_Lake_instInhabitedEnv_default();
lean_mark_persistent(l_Lake_instInhabitedEnv_default);
l_Lake_instInhabitedEnv = _init_l_Lake_instInhabitedEnv();
lean_mark_persistent(l_Lake_instInhabitedEnv);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Env(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Cache(uint8_t builtin);
lean_object* initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Env(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Env(builtin);
}
#ifdef __cplusplus
}
#endif
