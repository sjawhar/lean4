// Lean compiler output
// Module: Lake.CLI.Build
// Imports: public import Lake.CLI.Error public import Lake.Config.Workspace import Lake.Build.Infos import Lake.Build.Job.Monad public import Lake.Build.Job.Register import Lake.Util.IO import Init.Data.Iterators.Consumers
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_get_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_Package_findTargetModule_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_keyword;
lean_object* l_Lake_Workspace_findModuleFacetConfig_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_Module_irArtsFacet;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lake_BuildInfo_key(lean_object*);
lean_object* l_Lake_BuildKey_toSimpleString(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lake_resolvePath(lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l_Lake_Workspace_findModuleBySrc_x3f(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
lean_object* l_Lake_Workspace_findTargetModule_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findTargetDecl_x3f(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Workspace_findPackageFacetConfig_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* l_Lake_formatQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findLeanExe_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildSpecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<collection>"};
static const lean_object* l_Lake_buildSpecs___closed__0 = (const lean_object*)&l_Lake_buildSpecs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_querySpecs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_querySpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0 = (const lean_object*)&l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0_value;
static const lean_closure_object l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value)}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "package"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_parseTargetSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_parseTargetSpec___closed__0 = (const lean_object*)&l_Lake_parseTargetSpec___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_parseTargetSpecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_parseTargetSpecs___closed__0 = (const lean_object*)&l_Lake_parseTargetSpecs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec___redArg(lean_object* v_info_1_, lean_object* v_inst_2_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 1;
v___x_4_ = lean_alloc_closure((void*)(l_Lake_formatQuery___boxed), 4, 2);
lean_closure_set(v___x_4_, 0, lean_box(0));
lean_closure_set(v___x_4_, 1, v_inst_2_);
v___x_5_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5_, 0, v_info_1_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2, v___x_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec(lean_object* v_00_u03b1_6_, lean_object* v_info_7_, lean_object* v_inst_8_, lean_object* v_h_9_){
_start:
{
uint8_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = 1;
v___x_11_ = lean_alloc_closure((void*)(l_Lake_formatQuery___boxed), 4, 2);
lean_closure_set(v___x_11_, 0, lean_box(0));
lean_closure_set(v___x_11_, 1, v_inst_8_);
v___x_12_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_12_, 0, v_info_7_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2, v___x_10_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg(lean_object* v_info_13_, lean_object* v_config_14_){
_start:
{
uint8_t v_buildable_15_; lean_object* v_format_16_; lean_object* v___x_17_; 
v_buildable_15_ = lean_ctor_get_uint8(v_config_14_, sizeof(void*)*4);
v_format_16_ = lean_ctor_get(v_config_14_, 3);
lean_inc_ref(v_format_16_);
v___x_17_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_17_, 0, v_info_13_);
lean_ctor_set(v___x_17_, 1, v_format_16_);
lean_ctor_set_uint8(v___x_17_, sizeof(void*)*2, v_buildable_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg___boxed(lean_object* v_info_18_, lean_object* v_config_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lake_mkConfigBuildSpec___redArg(v_info_18_, v_config_19_);
lean_dec_ref(v_config_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec(lean_object* v_facet_21_, lean_object* v_info_22_, lean_object* v_config_23_, lean_object* v_h_24_){
_start:
{
uint8_t v_buildable_25_; lean_object* v_format_26_; lean_object* v___x_27_; 
v_buildable_25_ = lean_ctor_get_uint8(v_config_23_, sizeof(void*)*4);
v_format_26_ = lean_ctor_get(v_config_23_, 3);
lean_inc_ref(v_format_26_);
v___x_27_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_27_, 0, v_info_22_);
lean_ctor_set(v___x_27_, 1, v_format_26_);
lean_ctor_set_uint8(v___x_27_, sizeof(void*)*2, v_buildable_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___boxed(lean_object* v_facet_28_, lean_object* v_info_29_, lean_object* v_config_30_, lean_object* v_h_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lake_mkConfigBuildSpec(v_facet_28_, v_info_29_, v_config_30_, v_h_31_);
lean_dec_ref(v_config_30_);
lean_dec(v_facet_28_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch(lean_object* v_self_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_info_41_; lean_object* v___x_42_; 
v_info_41_ = lean_ctor_get(v_self_33_, 0);
lean_inc_ref_n(v_info_41_, 2);
lean_dec_ref(v_self_33_);
lean_inc_ref(v_a_38_);
lean_inc(v_a_37_);
lean_inc(v_a_36_);
lean_inc(v_a_35_);
v___x_42_ = lean_apply_7(v_a_34_, v_info_41_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, lean_box(0));
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; lean_object* v_a_44_; lean_object* v_task_45_; lean_object* v_kind_46_; lean_object* v_caption_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_75_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
v_a_44_ = lean_ctor_get(v___x_42_, 1);
lean_inc(v_a_44_);
v_task_45_ = lean_ctor_get(v_a_43_, 0);
v_kind_46_ = lean_ctor_get(v_a_43_, 1);
v_caption_47_ = lean_ctor_get(v_a_43_, 2);
v_isSharedCheck_75_ = !lean_is_exclusive(v_a_43_);
if (v_isSharedCheck_75_ == 0)
{
v___x_49_ = v_a_43_;
v_isShared_50_ = v_isSharedCheck_75_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_caption_47_);
lean_inc(v_kind_46_);
lean_inc(v_task_45_);
lean_dec(v_a_43_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_75_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_51_ = lean_string_utf8_byte_size(v_caption_47_);
lean_dec_ref(v_caption_47_);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_nat_dec_eq(v___x_51_, v___x_52_);
if (v___x_53_ == 0)
{
lean_del_object(v___x_49_);
lean_dec(v_kind_46_);
lean_dec_ref(v_task_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_info_41_);
return v___x_42_;
}
else
{
lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_72_; 
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; lean_object* v_unused_74_; 
v_unused_73_ = lean_ctor_get(v___x_42_, 1);
lean_dec(v_unused_73_);
v_unused_74_ = lean_ctor_get(v___x_42_, 0);
lean_dec(v_unused_74_);
v___x_55_ = v___x_42_;
v_isShared_56_ = v_isSharedCheck_72_;
goto v_resetjp_54_;
}
else
{
lean_dec(v___x_42_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_72_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v_registeredJobs_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v_job_62_; 
v_registeredJobs_57_ = lean_ctor_get(v_a_38_, 4);
v___x_58_ = l_Lake_BuildInfo_key(v_info_41_);
v___x_59_ = l_Lake_BuildKey_toSimpleString(v___x_58_);
v___x_60_ = 0;
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_59_);
v_job_62_ = v___x_49_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_task_45_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_kind_46_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v___x_59_);
v_job_62_ = v_reuseFailAlloc_71_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_69_; 
lean_ctor_set_uint8(v_job_62_, sizeof(void*)*3, v___x_60_);
v___x_63_ = lean_st_ref_take(v_registeredJobs_57_);
lean_inc_ref(v_job_62_);
v___x_64_ = l_Lake_Job_toOpaque___redArg(v_job_62_);
v___x_65_ = lean_array_push(v___x_63_, v___x_64_);
v___x_66_ = lean_st_ref_put(v_registeredJobs_57_, v___x_65_);
v___x_67_ = l_Lake_Job_renew___redArg(v_job_62_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_67_);
v___x_69_ = v___x_55_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_67_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_a_44_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_info_41_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch___boxed(lean_object* v_self_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lake_BuildSpec_fetch(v_self_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec(v_a_79_);
lean_dec(v_a_78_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build(lean_object* v_self_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v_info_98_; lean_object* v___x_99_; 
v_info_98_ = lean_ctor_get(v_self_85_, 0);
lean_inc_ref_n(v_info_98_, 2);
lean_dec_ref(v_self_85_);
lean_inc_ref(v_a_90_);
lean_inc(v_a_89_);
lean_inc(v_a_88_);
lean_inc(v_a_87_);
v___x_99_ = lean_apply_7(v_a_86_, v_info_98_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, lean_box(0));
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v_a_101_; lean_object* v_task_102_; lean_object* v_kind_103_; lean_object* v_caption_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
v_a_101_ = lean_ctor_get(v___x_99_, 1);
lean_inc(v_a_101_);
lean_dec_ref_known(v___x_99_, 2);
v_task_102_ = lean_ctor_get(v_a_100_, 0);
v_kind_103_ = lean_ctor_get(v_a_100_, 1);
v_caption_104_ = lean_ctor_get(v_a_100_, 2);
v___x_105_ = lean_string_utf8_byte_size(v_caption_104_);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_nat_dec_eq(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_info_98_);
v_a_94_ = v_a_100_;
v_a_95_ = v_a_101_;
goto v___jp_93_;
}
else
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_123_; 
lean_inc(v_kind_103_);
lean_inc_ref(v_task_102_);
v_isSharedCheck_123_ = !lean_is_exclusive(v_a_100_);
if (v_isSharedCheck_123_ == 0)
{
lean_object* v_unused_124_; lean_object* v_unused_125_; lean_object* v_unused_126_; 
v_unused_124_ = lean_ctor_get(v_a_100_, 2);
lean_dec(v_unused_124_);
v_unused_125_ = lean_ctor_get(v_a_100_, 1);
lean_dec(v_unused_125_);
v_unused_126_ = lean_ctor_get(v_a_100_, 0);
lean_dec(v_unused_126_);
v___x_109_ = v_a_100_;
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
else
{
lean_dec(v_a_100_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_registeredJobs_111_; lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v_job_116_; 
v_registeredJobs_111_ = lean_ctor_get(v_a_90_, 4);
v___x_112_ = l_Lake_BuildInfo_key(v_info_98_);
v___x_113_ = l_Lake_BuildKey_toSimpleString(v___x_112_);
v___x_114_ = 0;
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 2, v___x_113_);
v_job_116_ = v___x_109_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_task_102_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v_kind_103_);
lean_ctor_set(v_reuseFailAlloc_122_, 2, v___x_113_);
v_job_116_ = v_reuseFailAlloc_122_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
lean_ctor_set_uint8(v_job_116_, sizeof(void*)*3, v___x_114_);
v___x_117_ = lean_st_ref_take(v_registeredJobs_111_);
lean_inc_ref(v_job_116_);
v___x_118_ = l_Lake_Job_toOpaque___redArg(v_job_116_);
v___x_119_ = lean_array_push(v___x_117_, v___x_118_);
v___x_120_ = lean_st_ref_put(v_registeredJobs_111_, v___x_119_);
v___x_121_ = l_Lake_Job_renew___redArg(v_job_116_);
v_a_94_ = v___x_121_;
v_a_95_ = v_a_101_;
goto v___jp_93_;
}
}
}
}
else
{
lean_dec_ref(v_info_98_);
return v___x_99_;
}
v___jp_93_:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = l_Lake_Job_toOpaque___redArg(v_a_94_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_95_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build___boxed(lean_object* v_self_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lake_BuildSpec_build(v_self_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec(v_a_130_);
lean_dec(v_a_129_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0(lean_object* v_format_136_, uint8_t v_fmt_137_, lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_149_; 
v_a_139_ = lean_ctor_get(v_x_138_, 0);
v_a_140_ = lean_ctor_get(v_x_138_, 1);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_149_ == 0)
{
v___x_142_ = v_x_138_;
v_isShared_143_ = v_isSharedCheck_149_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_inc(v_a_139_);
lean_dec(v_x_138_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_149_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_147_; 
v___x_144_ = lean_box(v_fmt_137_);
v___x_145_ = lean_apply_2(v_format_136_, v___x_144_, v_a_139_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_a_140_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
else
{
lean_object* v_a_150_; lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_dec_ref(v_format_136_);
v_a_150_ = lean_ctor_get(v_x_138_, 0);
v_a_151_ = lean_ctor_get(v_x_138_, 1);
v_isSharedCheck_158_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v_x_138_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_inc(v_a_150_);
lean_dec(v_x_138_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_150_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0___boxed(lean_object* v_format_159_, lean_object* v_fmt_160_, lean_object* v_x_161_){
_start:
{
uint8_t v_fmt_boxed_162_; lean_object* v_res_163_; 
v_fmt_boxed_162_ = lean_unbox(v_fmt_160_);
v_res_163_ = l_Lake_BuildSpec_query___lam__0(v_format_159_, v_fmt_boxed_162_, v_x_161_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query(lean_object* v_self_164_, uint8_t v_fmt_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_info_173_; lean_object* v_format_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___f_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_info_173_ = lean_ctor_get(v_self_164_, 0);
lean_inc_ref_n(v_info_173_, 2);
v_format_174_ = lean_ctor_get(v_self_164_, 1);
lean_inc_ref(v_format_174_);
lean_dec_ref(v_self_164_);
v___x_175_ = lean_box(0);
v___x_176_ = lean_box(v_fmt_165_);
v___f_177_ = lean_alloc_closure((void*)(l_Lake_BuildSpec_query___lam__0___boxed), 3, 2);
lean_closure_set(v___f_177_, 0, v_format_174_);
lean_closure_set(v___f_177_, 1, v___x_176_);
v___x_178_ = l_Lake_BuildInfo_key(v_info_173_);
v___x_179_ = l_Lake_BuildKey_toSimpleString(v___x_178_);
lean_inc_ref(v_a_170_);
lean_inc(v_a_169_);
lean_inc(v_a_168_);
lean_inc(v_a_167_);
v___x_180_ = lean_apply_7(v_a_166_, v_info_173_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, lean_box(0));
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_218_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
v_a_182_ = lean_ctor_get(v___x_180_, 1);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_218_ == 0)
{
v___x_184_ = v___x_180_;
v_isShared_185_ = v_isSharedCheck_218_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_inc(v_a_181_);
lean_dec(v___x_180_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_218_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_task_186_; lean_object* v_caption_187_; uint8_t v_optional_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_216_; 
v_task_186_ = lean_ctor_get(v_a_181_, 0);
v_caption_187_ = lean_ctor_get(v_a_181_, 2);
v_optional_188_ = lean_ctor_get_uint8(v_a_181_, sizeof(void*)*3);
v_isSharedCheck_216_ = !lean_is_exclusive(v_a_181_);
if (v_isSharedCheck_216_ == 0)
{
lean_object* v_unused_217_; 
v_unused_217_ = lean_ctor_get(v_a_181_, 1);
lean_dec(v_unused_217_);
v___x_190_ = v_a_181_;
v_isShared_191_ = v_isSharedCheck_216_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_caption_187_);
lean_inc(v_task_186_);
lean_dec(v_a_181_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_216_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_192_ = lean_unsigned_to_nat(8u);
v___x_193_ = 0;
v___x_194_ = lean_task_map(v___f_177_, v_task_186_, v___x_192_, v___x_193_);
v___x_195_ = lean_string_utf8_byte_size(v_caption_187_);
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_nat_dec_eq(v___x_195_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_199_; 
lean_dec_ref(v___x_179_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 1, v___x_175_);
lean_ctor_set(v___x_190_, 0, v___x_194_);
v___x_199_ = v___x_190_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_caption_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_203_, sizeof(void*)*3, v_optional_188_);
v___x_199_ = v_reuseFailAlloc_203_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_201_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_199_);
v___x_201_ = v___x_184_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_a_182_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
else
{
lean_object* v_registeredJobs_204_; lean_object* v_job_206_; 
lean_dec_ref(v_caption_187_);
v_registeredJobs_204_ = lean_ctor_get(v_a_170_, 4);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 2, v___x_179_);
lean_ctor_set(v___x_190_, 1, v___x_175_);
lean_ctor_set(v___x_190_, 0, v___x_194_);
v_job_206_ = v___x_190_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_215_, 2, v___x_179_);
v_job_206_ = v_reuseFailAlloc_215_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
lean_ctor_set_uint8(v_job_206_, sizeof(void*)*3, v___x_193_);
v___x_207_ = lean_st_ref_take(v_registeredJobs_204_);
lean_inc_ref(v_job_206_);
v___x_208_ = l_Lake_Job_toOpaque___redArg(v_job_206_);
v___x_209_ = lean_array_push(v___x_207_, v___x_208_);
v___x_210_ = lean_st_ref_put(v_registeredJobs_204_, v___x_209_);
v___x_211_ = l_Lake_Job_renew___redArg(v_job_206_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_211_);
v___x_213_ = v___x_184_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_a_182_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref(v___x_179_);
lean_dec_ref(v___f_177_);
v_a_219_ = lean_ctor_get(v___x_180_, 0);
v_a_220_ = lean_ctor_get(v___x_180_, 1);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_180_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_inc(v_a_219_);
lean_dec(v___x_180_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_219_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___boxed(lean_object* v_self_228_, lean_object* v_fmt_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
uint8_t v_fmt_boxed_237_; lean_object* v_res_238_; 
v_fmt_boxed_237_ = lean_unbox(v_fmt_229_);
v_res_238_ = l_Lake_BuildSpec_query(v_self_228_, v_fmt_boxed_237_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
lean_dec(v_a_232_);
lean_dec(v_a_231_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(size_t v_sz_239_, size_t v_i_240_, lean_object* v_bs_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
uint8_t v___x_249_; 
v___x_249_ = lean_usize_dec_lt(v_i_240_, v_sz_239_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; 
lean_dec_ref(v___y_242_);
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v_bs_241_);
lean_ctor_set(v___x_250_, 1, v___y_247_);
return v___x_250_;
}
else
{
lean_object* v_v_251_; lean_object* v_info_252_; lean_object* v___x_253_; lean_object* v_bs_x27_254_; lean_object* v_a_256_; lean_object* v_a_257_; lean_object* v___x_263_; 
v_v_251_ = lean_array_uget_borrowed(v_bs_241_, v_i_240_);
v_info_252_ = lean_ctor_get(v_v_251_, 0);
lean_inc_ref_n(v_info_252_, 2);
v___x_253_ = lean_unsigned_to_nat(0u);
v_bs_x27_254_ = lean_array_uset(v_bs_241_, v_i_240_, v___x_253_);
lean_inc_ref(v___y_242_);
lean_inc_ref(v___y_246_);
lean_inc(v___y_245_);
lean_inc(v___y_244_);
lean_inc(v___y_243_);
v___x_263_ = lean_apply_7(v___y_242_, v_info_252_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, lean_box(0));
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v_a_265_; lean_object* v_task_266_; lean_object* v_kind_267_; lean_object* v_caption_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_a_264_);
v_a_265_ = lean_ctor_get(v___x_263_, 1);
lean_inc(v_a_265_);
lean_dec_ref_known(v___x_263_, 2);
v_task_266_ = lean_ctor_get(v_a_264_, 0);
v_kind_267_ = lean_ctor_get(v_a_264_, 1);
v_caption_268_ = lean_ctor_get(v_a_264_, 2);
v___x_269_ = lean_string_utf8_byte_size(v_caption_268_);
v___x_270_ = lean_nat_dec_eq(v___x_269_, v___x_253_);
if (v___x_270_ == 0)
{
lean_dec_ref(v_info_252_);
v_a_256_ = v_a_264_;
v_a_257_ = v_a_265_;
goto v___jp_255_;
}
else
{
lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_286_; 
lean_inc(v_kind_267_);
lean_inc_ref(v_task_266_);
v_isSharedCheck_286_ = !lean_is_exclusive(v_a_264_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; lean_object* v_unused_288_; lean_object* v_unused_289_; 
v_unused_287_ = lean_ctor_get(v_a_264_, 2);
lean_dec(v_unused_287_);
v_unused_288_ = lean_ctor_get(v_a_264_, 1);
lean_dec(v_unused_288_);
v_unused_289_ = lean_ctor_get(v_a_264_, 0);
lean_dec(v_unused_289_);
v___x_272_ = v_a_264_;
v_isShared_273_ = v_isSharedCheck_286_;
goto v_resetjp_271_;
}
else
{
lean_dec(v_a_264_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_286_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_registeredJobs_274_; lean_object* v___x_275_; lean_object* v___x_276_; uint8_t v___x_277_; lean_object* v_job_279_; 
v_registeredJobs_274_ = lean_ctor_get(v___y_246_, 4);
v___x_275_ = l_Lake_BuildInfo_key(v_info_252_);
v___x_276_ = l_Lake_BuildKey_toSimpleString(v___x_275_);
v___x_277_ = 0;
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 2, v___x_276_);
v_job_279_ = v___x_272_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_task_266_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_kind_267_);
lean_ctor_set(v_reuseFailAlloc_285_, 2, v___x_276_);
v_job_279_ = v_reuseFailAlloc_285_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
lean_ctor_set_uint8(v_job_279_, sizeof(void*)*3, v___x_277_);
v___x_280_ = lean_st_ref_take(v_registeredJobs_274_);
lean_inc_ref(v_job_279_);
v___x_281_ = l_Lake_Job_toOpaque___redArg(v_job_279_);
v___x_282_ = lean_array_push(v___x_280_, v___x_281_);
v___x_283_ = lean_st_ref_put(v_registeredJobs_274_, v___x_282_);
v___x_284_ = l_Lake_Job_renew___redArg(v_job_279_);
v_a_256_ = v___x_284_;
v_a_257_ = v_a_265_;
goto v___jp_255_;
}
}
}
}
else
{
lean_object* v_a_290_; lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_298_; 
lean_dec_ref(v_bs_x27_254_);
lean_dec_ref(v_info_252_);
lean_dec_ref(v___y_242_);
v_a_290_ = lean_ctor_get(v___x_263_, 0);
v_a_291_ = lean_ctor_get(v___x_263_, 1);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_298_ == 0)
{
v___x_293_ = v___x_263_;
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_inc(v_a_290_);
lean_dec(v___x_263_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_296_; 
if (v_isShared_294_ == 0)
{
v___x_296_ = v___x_293_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_290_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v_a_291_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
v___jp_255_:
{
lean_object* v___x_258_; size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v___x_258_ = l_Lake_Job_toOpaque___redArg(v_a_256_);
v___x_259_ = ((size_t)1ULL);
v___x_260_ = lean_usize_add(v_i_240_, v___x_259_);
v___x_261_ = lean_array_uset(v_bs_x27_254_, v_i_240_, v___x_258_);
v_i_240_ = v___x_260_;
v_bs_241_ = v___x_261_;
v___y_247_ = v_a_257_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0___boxed(lean_object* v_sz_299_, lean_object* v_i_300_, lean_object* v_bs_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
size_t v_sz_boxed_309_; size_t v_i_boxed_310_; lean_object* v_res_311_; 
v_sz_boxed_309_ = lean_unbox_usize(v_sz_299_);
lean_dec(v_sz_299_);
v_i_boxed_310_ = lean_unbox_usize(v_i_300_);
lean_dec(v_i_300_);
v_res_311_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(v_sz_boxed_309_, v_i_boxed_310_, v_bs_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec(v___y_304_);
lean_dec(v___y_303_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSpecs(lean_object* v_specs_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
size_t v_sz_321_; size_t v___x_322_; lean_object* v___x_323_; 
v_sz_321_ = lean_array_size(v_specs_313_);
v___x_322_ = ((size_t)0ULL);
v___x_323_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(v_sz_321_, v___x_322_, v_specs_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_334_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_a_325_ = lean_ctor_get(v___x_323_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_334_ == 0)
{
v___x_327_ = v___x_323_;
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_329_ = ((lean_object*)(l_Lake_buildSpecs___closed__0));
v___x_330_ = l_Lake_Job_mixArray___redArg(v_a_324_, v___x_329_);
lean_dec(v_a_324_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_330_);
v___x_332_ = v___x_327_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_a_325_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
lean_object* v_a_335_; lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v_a_335_ = lean_ctor_get(v___x_323_, 0);
v_a_336_ = lean_ctor_get(v___x_323_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_323_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_inc(v_a_335_);
lean_dec(v___x_323_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_335_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_a_336_);
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
LEAN_EXPORT lean_object* l_Lake_buildSpecs___boxed(lean_object* v_specs_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lake_buildSpecs(v_specs_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
lean_dec_ref(v_a_349_);
lean_dec(v_a_348_);
lean_dec(v_a_347_);
lean_dec(v_a_346_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(lean_object* v_format_353_, uint8_t v_fmt_354_, lean_object* v_x_355_){
_start:
{
if (lean_obj_tag(v_x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_366_; 
v_a_356_ = lean_ctor_get(v_x_355_, 0);
v_a_357_ = lean_ctor_get(v_x_355_, 1);
v_isSharedCheck_366_ = !lean_is_exclusive(v_x_355_);
if (v_isSharedCheck_366_ == 0)
{
v___x_359_ = v_x_355_;
v_isShared_360_ = v_isSharedCheck_366_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_inc(v_a_356_);
lean_dec(v_x_355_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_366_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_361_ = lean_box(v_fmt_354_);
v___x_362_ = lean_apply_2(v_format_353_, v___x_361_, v_a_356_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_362_);
v___x_364_ = v___x_359_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v_a_357_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
else
{
lean_object* v_a_367_; lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
lean_dec_ref(v_format_353_);
v_a_367_ = lean_ctor_get(v_x_355_, 0);
v_a_368_ = lean_ctor_get(v_x_355_, 1);
v_isSharedCheck_375_ = !lean_is_exclusive(v_x_355_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v_x_355_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_inc(v_a_367_);
lean_dec(v_x_355_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_367_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed(lean_object* v_format_376_, lean_object* v_fmt_377_, lean_object* v_x_378_){
_start:
{
uint8_t v_fmt_boxed_379_; lean_object* v_res_380_; 
v_fmt_boxed_379_ = lean_unbox(v_fmt_377_);
v_res_380_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(v_format_376_, v_fmt_boxed_379_, v_x_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(uint8_t v_fmt_381_, size_t v_sz_382_, size_t v_i_383_, lean_object* v_bs_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
uint8_t v___x_392_; 
v___x_392_ = lean_usize_dec_lt(v_i_383_, v_sz_382_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
lean_dec_ref(v___y_385_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v_bs_384_);
lean_ctor_set(v___x_393_, 1, v___y_390_);
return v___x_393_;
}
else
{
lean_object* v_v_394_; lean_object* v_info_395_; lean_object* v_format_396_; lean_object* v___x_397_; lean_object* v_bs_x27_398_; lean_object* v_a_400_; lean_object* v_a_401_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___f_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v_v_394_ = lean_array_uget_borrowed(v_bs_384_, v_i_383_);
v_info_395_ = lean_ctor_get(v_v_394_, 0);
lean_inc_ref_n(v_info_395_, 2);
v_format_396_ = lean_ctor_get(v_v_394_, 1);
lean_inc_ref(v_format_396_);
v___x_397_ = lean_unsigned_to_nat(0u);
v_bs_x27_398_ = lean_array_uset(v_bs_384_, v_i_383_, v___x_397_);
v___x_406_ = lean_box(0);
v___x_407_ = lean_box(v_fmt_381_);
v___f_408_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_408_, 0, v_format_396_);
lean_closure_set(v___f_408_, 1, v___x_407_);
v___x_409_ = l_Lake_BuildInfo_key(v_info_395_);
v___x_410_ = l_Lake_BuildKey_toSimpleString(v___x_409_);
lean_inc_ref(v___y_385_);
lean_inc_ref(v___y_389_);
lean_inc(v___y_388_);
lean_inc(v___y_387_);
lean_inc(v___y_386_);
v___x_411_ = lean_apply_7(v___y_385_, v_info_395_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, lean_box(0));
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v_a_413_; lean_object* v_task_414_; lean_object* v_caption_415_; uint8_t v_optional_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_437_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_412_);
v_a_413_ = lean_ctor_get(v___x_411_, 1);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_411_, 2);
v_task_414_ = lean_ctor_get(v_a_412_, 0);
v_caption_415_ = lean_ctor_get(v_a_412_, 2);
v_optional_416_ = lean_ctor_get_uint8(v_a_412_, sizeof(void*)*3);
v_isSharedCheck_437_ = !lean_is_exclusive(v_a_412_);
if (v_isSharedCheck_437_ == 0)
{
lean_object* v_unused_438_; 
v_unused_438_ = lean_ctor_get(v_a_412_, 1);
lean_dec(v_unused_438_);
v___x_418_ = v_a_412_;
v_isShared_419_ = v_isSharedCheck_437_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_caption_415_);
lean_inc(v_task_414_);
lean_dec(v_a_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_437_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; uint8_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_420_ = lean_unsigned_to_nat(8u);
v___x_421_ = 0;
v___x_422_ = lean_task_map(v___f_408_, v_task_414_, v___x_420_, v___x_421_);
v___x_423_ = lean_string_utf8_byte_size(v_caption_415_);
v___x_424_ = lean_nat_dec_eq(v___x_423_, v___x_397_);
if (v___x_424_ == 0)
{
lean_object* v___x_426_; 
lean_dec_ref(v___x_410_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v___x_406_);
lean_ctor_set(v___x_418_, 0, v___x_422_);
v___x_426_ = v___x_418_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v___x_406_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_caption_415_);
lean_ctor_set_uint8(v_reuseFailAlloc_427_, sizeof(void*)*3, v_optional_416_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
v_a_400_ = v___x_426_;
v_a_401_ = v_a_413_;
goto v___jp_399_;
}
}
else
{
lean_object* v_registeredJobs_428_; lean_object* v_job_430_; 
lean_dec_ref(v_caption_415_);
v_registeredJobs_428_ = lean_ctor_get(v___y_389_, 4);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 2, v___x_410_);
lean_ctor_set(v___x_418_, 1, v___x_406_);
lean_ctor_set(v___x_418_, 0, v___x_422_);
v_job_430_ = v___x_418_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v___x_406_);
lean_ctor_set(v_reuseFailAlloc_436_, 2, v___x_410_);
v_job_430_ = v_reuseFailAlloc_436_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
lean_ctor_set_uint8(v_job_430_, sizeof(void*)*3, v___x_421_);
v___x_431_ = lean_st_ref_take(v_registeredJobs_428_);
lean_inc_ref(v_job_430_);
v___x_432_ = l_Lake_Job_toOpaque___redArg(v_job_430_);
v___x_433_ = lean_array_push(v___x_431_, v___x_432_);
v___x_434_ = lean_st_ref_put(v_registeredJobs_428_, v___x_433_);
v___x_435_ = l_Lake_Job_renew___redArg(v_job_430_);
v_a_400_ = v___x_435_;
v_a_401_ = v_a_413_;
goto v___jp_399_;
}
}
}
}
else
{
lean_object* v_a_439_; lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_dec_ref(v___x_410_);
lean_dec_ref(v___f_408_);
lean_dec_ref(v_bs_x27_398_);
lean_dec_ref(v___y_385_);
v_a_439_ = lean_ctor_get(v___x_411_, 0);
v_a_440_ = lean_ctor_get(v___x_411_, 1);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_411_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_inc(v_a_439_);
lean_dec(v___x_411_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_439_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
v___jp_399_:
{
size_t v___x_402_; size_t v___x_403_; lean_object* v___x_404_; 
v___x_402_ = ((size_t)1ULL);
v___x_403_ = lean_usize_add(v_i_383_, v___x_402_);
v___x_404_ = lean_array_uset(v_bs_x27_398_, v_i_383_, v_a_400_);
v_i_383_ = v___x_403_;
v_bs_384_ = v___x_404_;
v___y_390_ = v_a_401_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___boxed(lean_object* v_fmt_448_, lean_object* v_sz_449_, lean_object* v_i_450_, lean_object* v_bs_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
uint8_t v_fmt_boxed_459_; size_t v_sz_boxed_460_; size_t v_i_boxed_461_; lean_object* v_res_462_; 
v_fmt_boxed_459_ = lean_unbox(v_fmt_448_);
v_sz_boxed_460_ = lean_unbox_usize(v_sz_449_);
lean_dec(v_sz_449_);
v_i_boxed_461_ = lean_unbox_usize(v_i_450_);
lean_dec(v_i_450_);
v_res_462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(v_fmt_boxed_459_, v_sz_boxed_460_, v_i_boxed_461_, v_bs_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec(v___y_454_);
lean_dec(v___y_453_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lake_querySpecs(lean_object* v_specs_463_, uint8_t v_fmt_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
size_t v_sz_472_; size_t v___x_473_; lean_object* v___x_474_; 
v_sz_472_ = lean_array_size(v_specs_463_);
v___x_473_ = ((size_t)0ULL);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(v_fmt_464_, v_sz_472_, v___x_473_, v_specs_463_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_485_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_a_476_ = lean_ctor_get(v___x_474_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_485_ == 0)
{
v___x_478_ = v___x_474_;
v_isShared_479_ = v_isSharedCheck_485_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_485_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
v___x_480_ = ((lean_object*)(l_Lake_buildSpecs___closed__0));
v___x_481_ = l_Lake_Job_collectArray___redArg(v_a_475_, v___x_480_);
lean_dec(v_a_475_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_481_);
v___x_483_ = v___x_478_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_a_476_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
else
{
lean_object* v_a_486_; lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
v_a_486_ = lean_ctor_get(v___x_474_, 0);
v_a_487_ = lean_ctor_get(v___x_474_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_474_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_inc(v_a_486_);
lean_dec(v___x_474_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_486_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_querySpecs___boxed(lean_object* v_specs_495_, lean_object* v_fmt_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
uint8_t v_fmt_boxed_504_; lean_object* v_res_505_; 
v_fmt_boxed_504_ = lean_unbox(v_fmt_496_);
v_res_505_ = l_Lake_querySpecs(v_specs_495_, v_fmt_boxed_504_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_);
lean_dec_ref(v_a_501_);
lean_dec(v_a_500_);
lean_dec(v_a_499_);
lean_dec(v_a_498_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(lean_object* v___x_509_, lean_object* v_as_510_, size_t v_sz_511_, size_t v_i_512_, lean_object* v_b_513_){
_start:
{
uint8_t v___x_514_; 
v___x_514_ = lean_usize_dec_lt(v_i_512_, v_sz_511_);
if (v___x_514_ == 0)
{
lean_inc_ref(v_b_513_);
return v_b_513_;
}
else
{
lean_object* v_a_515_; lean_object* v_baseName_516_; lean_object* v___x_517_; uint8_t v___x_518_; 
v_a_515_ = lean_array_uget_borrowed(v_as_510_, v_i_512_);
v_baseName_516_ = lean_ctor_get(v_a_515_, 1);
v___x_517_ = lean_box(0);
v___x_518_ = lean_name_eq(v_baseName_516_, v___x_509_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; size_t v___x_520_; size_t v___x_521_; 
v___x_519_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v___x_520_ = ((size_t)1ULL);
v___x_521_ = lean_usize_add(v_i_512_, v___x_520_);
v_i_512_ = v___x_521_;
v_b_513_ = v___x_519_;
goto _start;
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
lean_inc(v_a_515_);
v___x_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_523_, 0, v_a_515_);
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v___x_517_);
return v___x_525_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___boxed(lean_object* v___x_526_, lean_object* v_as_527_, lean_object* v_sz_528_, lean_object* v_i_529_, lean_object* v_b_530_){
_start:
{
size_t v_sz_boxed_531_; size_t v_i_boxed_532_; lean_object* v_res_533_; 
v_sz_boxed_531_ = lean_unbox_usize(v_sz_528_);
lean_dec(v_sz_528_);
v_i_boxed_532_ = lean_unbox_usize(v_i_529_);
lean_dec(v_i_529_);
v_res_533_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v___x_526_, v_as_527_, v_sz_boxed_531_, v_i_boxed_532_, v_b_530_);
lean_dec_ref(v_b_530_);
lean_dec_ref(v_as_527_);
lean_dec(v___x_526_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec(lean_object* v_ws_534_, lean_object* v_spec_535_){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_539_ = lean_string_utf8_byte_size(v_spec_535_);
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = lean_nat_dec_eq(v___x_539_, v___x_540_);
if (v___x_541_ == 0)
{
lean_object* v_packages_542_; lean_object* v___x_543_; lean_object* v___x_544_; size_t v_sz_545_; size_t v___x_546_; lean_object* v___x_547_; lean_object* v_fst_548_; 
v_packages_542_ = lean_ctor_get(v_ws_534_, 4);
lean_inc_ref(v_spec_535_);
v___x_543_ = l_Lake_stringToLegalOrSimpleName(v_spec_535_);
v___x_544_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v_sz_545_ = lean_array_size(v_packages_542_);
v___x_546_ = ((size_t)0ULL);
v___x_547_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v___x_543_, v_packages_542_, v_sz_545_, v___x_546_, v___x_544_);
lean_dec(v___x_543_);
v_fst_548_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_fst_548_);
lean_dec_ref(v___x_547_);
if (lean_obj_tag(v_fst_548_) == 0)
{
goto v___jp_536_;
}
else
{
lean_object* v_val_549_; 
v_val_549_ = lean_ctor_get(v_fst_548_, 0);
lean_inc(v_val_549_);
lean_dec_ref_known(v_fst_548_, 1);
if (lean_obj_tag(v_val_549_) == 0)
{
goto v___jp_536_;
}
else
{
lean_object* v_val_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref(v_spec_535_);
v_val_550_ = lean_ctor_get(v_val_549_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v_val_549_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v_val_549_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_val_550_);
lean_dec(v_val_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_val_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
else
{
lean_object* v_packages_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec_ref(v_spec_535_);
v_packages_558_ = lean_ctor_get(v_ws_534_, 4);
v___x_559_ = lean_array_fget_borrowed(v_packages_558_, v___x_540_);
lean_inc(v___x_559_);
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
return v___x_560_;
}
v___jp_536_:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v___x_537_, 0, v_spec_535_);
v___x_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
return v___x_538_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec___boxed(lean_object* v_ws_561_, lean_object* v_spec_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lake_parsePackageSpec(v_ws_561_, v_spec_562_);
lean_dec_ref(v_ws_561_);
return v_res_563_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_box(0);
v___x_566_ = l_Lean_Json_compress(v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(uint8_t v_fmt_567_){
_start:
{
if (v_fmt_567_ == 0)
{
lean_object* v___x_568_; 
v___x_568_ = ((lean_object*)(l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0));
return v___x_568_;
}
else
{
lean_object* v___x_569_; 
v___x_569_ = lean_obj_once(&l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1, &l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1_once, _init_l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1);
return v___x_569_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___boxed(lean_object* v_fmt_570_){
_start:
{
uint8_t v_fmt_boxed_571_; lean_object* v_res_572_; 
v_fmt_boxed_571_ = lean_unbox(v_fmt_570_);
v_res_572_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v_fmt_boxed_571_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(uint8_t v_fmt_573_, lean_object* v_a_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v_fmt_573_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___boxed(lean_object* v_fmt_576_, lean_object* v_a_577_){
_start:
{
uint8_t v_fmt_boxed_578_; lean_object* v_res_579_; 
v_fmt_boxed_578_ = lean_unbox(v_fmt_576_);
v_res_579_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(v_fmt_boxed_578_, v_a_577_);
lean_dec_ref(v_a_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(uint8_t v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v___y_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed(lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
uint8_t v___y_282__boxed_585_; lean_object* v_res_586_; 
v___y_282__boxed_585_ = lean_unbox(v___y_583_);
v_res_586_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(v___y_282__boxed_585_, v___y_584_);
lean_dec_ref(v___y_584_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(lean_object* v_ws_589_, lean_object* v_mod_590_, lean_object* v_facet_591_){
_start:
{
uint8_t v___x_592_; 
v___x_592_ = l_Lean_Name_isAnonymous(v_facet_591_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = l_Lake_Module_keyword;
lean_inc(v_facet_591_);
v___x_594_ = l_Lean_Name_append(v___x_593_, v_facet_591_);
v___x_595_ = l_Lake_Workspace_findModuleFacetConfig_x3f(v___x_594_, v_ws_589_);
if (lean_obj_tag(v___x_595_) == 1)
{
lean_object* v_lib_596_; lean_object* v_pkg_597_; lean_object* v_val_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_facet_591_);
v_lib_596_ = lean_ctor_get(v_mod_590_, 0);
v_pkg_597_ = lean_ctor_get(v_lib_596_, 0);
v_val_598_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_612_ == 0)
{
v___x_600_ = v___x_595_;
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_val_598_);
lean_dec(v___x_595_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v_name_602_; lean_object* v_keyName_603_; uint8_t v_buildable_604_; lean_object* v_format_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v_name_602_ = lean_ctor_get(v_mod_590_, 1);
v_keyName_603_ = lean_ctor_get(v_pkg_597_, 2);
v_buildable_604_ = lean_ctor_get_uint8(v_val_598_, sizeof(void*)*4);
v_format_605_ = lean_ctor_get(v_val_598_, 3);
lean_inc_ref(v_format_605_);
lean_dec(v_val_598_);
lean_inc(v_name_602_);
lean_inc(v_keyName_603_);
v___x_606_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_606_, 0, v_keyName_603_);
lean_ctor_set(v___x_606_, 1, v_name_602_);
v___x_607_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
lean_ctor_set(v___x_607_, 1, v___x_593_);
lean_ctor_set(v___x_607_, 2, v_mod_590_);
lean_ctor_set(v___x_607_, 3, v___x_594_);
v___x_608_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v_format_605_);
lean_ctor_set_uint8(v___x_608_, sizeof(void*)*2, v_buildable_604_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_608_);
v___x_610_ = v___x_600_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
else
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec(v___x_595_);
lean_dec(v___x_594_);
lean_dec_ref(v_mod_590_);
v___x_613_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0));
v___x_614_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
lean_ctor_set(v___x_614_, 1, v_facet_591_);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
else
{
lean_object* v_lib_616_; lean_object* v_pkg_617_; lean_object* v_name_618_; lean_object* v_keyName_619_; lean_object* v___f_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
lean_dec(v_facet_591_);
v_lib_616_ = lean_ctor_get(v_mod_590_, 0);
v_pkg_617_ = lean_ctor_get(v_lib_616_, 0);
v_name_618_ = lean_ctor_get(v_mod_590_, 1);
v_keyName_619_ = lean_ctor_get(v_pkg_617_, 2);
v___f_620_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1));
v___x_621_ = l_Lake_Module_irArtsFacet;
lean_inc(v_name_618_);
lean_inc(v_keyName_619_);
v___x_622_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_622_, 0, v_keyName_619_);
lean_ctor_set(v___x_622_, 1, v_name_618_);
v___x_623_ = l_Lake_Module_keyword;
v___x_624_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
lean_ctor_set(v___x_624_, 2, v_mod_590_);
lean_ctor_set(v___x_624_, 3, v___x_621_);
v___x_625_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_625_, 0, v___x_624_);
lean_ctor_set(v___x_625_, 1, v___f_620_);
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*2, v___x_592_);
v___x_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___boxed(lean_object* v_ws_627_, lean_object* v_mod_628_, lean_object* v_facet_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_627_, v_mod_628_, v_facet_629_);
lean_dec_ref(v_ws_627_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(lean_object* v_pkg_631_, lean_object* v_name_632_, lean_object* v_facet_633_, lean_object* v_config_634_){
_start:
{
uint8_t v___x_635_; 
v___x_635_ = l_Lean_Name_isAnonymous(v_facet_633_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec_ref(v_config_634_);
lean_dec_ref(v_pkg_631_);
v___x_636_ = lean_alloc_ctor(20, 2, 0);
lean_ctor_set(v___x_636_, 0, v_name_632_);
lean_ctor_set(v___x_636_, 1, v_facet_633_);
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
else
{
lean_object* v_format_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_647_; 
lean_dec(v_facet_633_);
v_format_638_ = lean_ctor_get(v_config_634_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_config_634_);
if (v_isSharedCheck_647_ == 0)
{
lean_object* v_unused_648_; 
v_unused_648_ = lean_ctor_get(v_config_634_, 0);
lean_dec(v_unused_648_);
v___x_640_ = v_config_634_;
v_isShared_641_ = v_isSharedCheck_647_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_format_638_);
lean_dec(v_config_634_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_647_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 1, v_name_632_);
lean_ctor_set(v___x_640_, 0, v_pkg_631_);
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_pkg_631_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_name_632_);
v___x_643_ = v_reuseFailAlloc_646_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v_format_638_);
lean_ctor_set_uint8(v___x_644_, sizeof(void*)*2, v___x_635_);
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(lean_object* v_ws_652_, lean_object* v_pkg_653_, lean_object* v_target_654_, lean_object* v_decl_655_, lean_object* v_facet_656_){
_start:
{
lean_object* v_name_657_; lean_object* v_kind_658_; lean_object* v_config_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_715_; 
v_name_657_ = lean_ctor_get(v_decl_655_, 1);
v_kind_658_ = lean_ctor_get(v_decl_655_, 2);
v_config_659_ = lean_ctor_get(v_decl_655_, 3);
v_isSharedCheck_715_ = !lean_is_exclusive(v_decl_655_);
if (v_isSharedCheck_715_ == 0)
{
lean_object* v_unused_716_; 
v_unused_716_ = lean_ctor_get(v_decl_655_, 0);
lean_dec(v_unused_716_);
v___x_661_ = v_decl_655_;
v_isShared_662_ = v_isSharedCheck_715_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_config_659_);
lean_inc(v_kind_658_);
lean_inc(v_name_657_);
lean_dec(v_decl_655_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_715_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
uint8_t v___x_663_; 
v___x_663_ = l_Lean_Name_isAnonymous(v_kind_658_);
if (v___x_663_ == 0)
{
uint8_t v___x_664_; lean_object* v___y_666_; uint8_t v___x_693_; 
lean_dec(v_target_654_);
v___x_664_ = 1;
v___x_693_ = l_Lean_Name_isAnonymous(v_facet_656_);
if (v___x_693_ == 0)
{
v___y_666_ = v_facet_656_;
goto v___jp_665_;
}
else
{
lean_object* v___x_694_; 
lean_dec(v_facet_656_);
v___x_694_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1));
v___y_666_ = v___x_694_;
goto v___jp_665_;
}
v___jp_665_:
{
lean_object* v_facetConfigs_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_facetConfigs_667_ = lean_ctor_get(v_ws_652_, 6);
lean_inc(v___y_666_);
lean_inc(v_kind_658_);
v___x_668_ = l_Lean_Name_append(v_kind_658_, v___y_666_);
v___x_669_ = l_Lake_FacetConfigMap_get_x3f(v___x_668_, v_facetConfigs_667_);
if (lean_obj_tag(v___x_669_) == 1)
{
lean_object* v_val_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_689_; 
lean_dec(v___y_666_);
v_val_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_689_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_689_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_val_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_689_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v_keyName_674_; uint8_t v_buildable_675_; lean_object* v_format_676_; lean_object* v_tgt_677_; lean_object* v___x_678_; lean_object* v_info_680_; 
v_keyName_674_ = lean_ctor_get(v_pkg_653_, 2);
lean_inc(v_keyName_674_);
v_buildable_675_ = lean_ctor_get_uint8(v_val_670_, sizeof(void*)*4);
v_format_676_ = lean_ctor_get(v_val_670_, 3);
lean_inc_ref(v_format_676_);
lean_dec(v_val_670_);
lean_inc(v_name_657_);
v_tgt_677_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_tgt_677_, 0, v_pkg_653_);
lean_ctor_set(v_tgt_677_, 1, v_name_657_);
lean_ctor_set(v_tgt_677_, 2, v_config_659_);
v___x_678_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_678_, 0, v_keyName_674_);
lean_ctor_set(v___x_678_, 1, v_name_657_);
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 1);
lean_ctor_set(v___x_661_, 3, v___x_668_);
lean_ctor_set(v___x_661_, 2, v_tgt_677_);
lean_ctor_set(v___x_661_, 1, v_kind_658_);
lean_ctor_set(v___x_661_, 0, v___x_678_);
v_info_680_ = v___x_661_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_kind_658_);
lean_ctor_set(v_reuseFailAlloc_688_, 2, v_tgt_677_);
lean_ctor_set(v_reuseFailAlloc_688_, 3, v___x_668_);
v_info_680_ = v_reuseFailAlloc_688_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_681_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_681_, 0, v_info_680_);
lean_ctor_set(v___x_681_, 1, v_format_676_);
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*2, v_buildable_675_);
v___x_682_ = lean_unsigned_to_nat(1u);
v___x_683_ = lean_mk_empty_array_with_capacity(v___x_682_);
v___x_684_ = lean_array_push(v___x_683_, v___x_681_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_684_);
v___x_686_ = v___x_672_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
else
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec(v___x_669_);
lean_dec(v___x_668_);
lean_del_object(v___x_661_);
lean_dec(v_config_659_);
lean_dec(v_name_657_);
lean_dec_ref(v_pkg_653_);
v___x_690_ = l_Lean_Name_toString(v_kind_658_, v___x_664_);
v___x_691_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v___y_666_);
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
return v___x_692_;
}
}
}
else
{
lean_object* v___x_695_; 
lean_del_object(v___x_661_);
lean_dec(v_kind_658_);
lean_dec(v_name_657_);
v___x_695_ = l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(v_pkg_653_, v_target_654_, v_facet_656_, v_config_659_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_695_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_695_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_714_; 
v_a_704_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_714_ == 0)
{
v___x_706_ = v___x_695_;
v_isShared_707_ = v_isSharedCheck_714_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_695_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_714_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_708_ = lean_unsigned_to_nat(1u);
v___x_709_ = lean_mk_empty_array_with_capacity(v___x_708_);
v___x_710_ = lean_array_push(v___x_709_, v_a_704_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v___x_710_);
v___x_712_ = v___x_706_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___boxed(lean_object* v_ws_717_, lean_object* v_pkg_718_, lean_object* v_target_719_, lean_object* v_decl_720_, lean_object* v_facet_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_717_, v_pkg_718_, v_target_719_, v_decl_720_, v_facet_721_);
lean_dec_ref(v_ws_717_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(lean_object* v_ws_723_, lean_object* v_pkg_724_, lean_object* v_target_725_, lean_object* v_facet_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lake_Package_findTargetDecl_x3f(v_target_725_, v_pkg_724_);
if (lean_obj_tag(v___x_727_) == 1)
{
lean_object* v_val_728_; lean_object* v___x_729_; 
v_val_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_val_728_);
lean_dec_ref_known(v___x_727_, 1);
v___x_729_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_723_, v_pkg_724_, v_target_725_, v_val_728_, v_facet_726_);
return v___x_729_;
}
else
{
lean_object* v___x_730_; 
lean_dec(v___x_727_);
lean_inc_ref(v_pkg_724_);
lean_inc(v_target_725_);
v___x_730_ = l_Lake_Package_findTargetModule_x3f(v_target_725_, v_pkg_724_);
if (lean_obj_tag(v___x_730_) == 1)
{
lean_object* v_val_731_; lean_object* v___x_732_; 
lean_dec(v_target_725_);
lean_dec_ref(v_pkg_724_);
v_val_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_val_731_);
lean_dec_ref_known(v___x_730_, 1);
v___x_732_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_723_, v_val_731_, v_facet_726_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_751_; 
v_a_741_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_751_ == 0)
{
v___x_743_ = v___x_732_;
v_isShared_744_ = v_isSharedCheck_751_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_732_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_751_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_745_ = lean_unsigned_to_nat(1u);
v___x_746_ = lean_mk_empty_array_with_capacity(v___x_745_);
v___x_747_ = lean_array_push(v___x_746_, v_a_741_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 0, v___x_747_);
v___x_749_ = v___x_743_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
else
{
lean_object* v_baseName_752_; uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
lean_dec(v___x_730_);
lean_dec(v_facet_726_);
v_baseName_752_ = lean_ctor_get(v_pkg_724_, 1);
lean_inc(v_baseName_752_);
lean_dec_ref(v_pkg_724_);
v___x_753_ = 0;
v___x_754_ = l_Lean_Name_toString(v_target_725_, v___x_753_);
v___x_755_ = lean_alloc_ctor(17, 2, 0);
lean_ctor_set(v___x_755_, 0, v_baseName_752_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
return v___x_756_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage___boxed(lean_object* v_ws_757_, lean_object* v_pkg_758_, lean_object* v_target_759_, lean_object* v_facet_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_757_, v_pkg_758_, v_target_759_, v_facet_760_);
lean_dec_ref(v_ws_757_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(lean_object* v_ws_762_, lean_object* v_pkg_763_, lean_object* v_as_764_, size_t v_i_765_, size_t v_stop_766_, lean_object* v_b_767_){
_start:
{
uint8_t v___x_768_; 
v___x_768_ = lean_usize_dec_eq(v_i_765_, v_stop_766_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_769_ = lean_array_uget_borrowed(v_as_764_, v_i_765_);
v___x_770_ = lean_box(0);
lean_inc(v___x_769_);
lean_inc_ref(v_pkg_763_);
v___x_771_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_762_, v_pkg_763_, v___x_769_, v___x_770_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_dec_ref(v_b_767_);
lean_dec_ref(v_pkg_763_);
return v___x_771_;
}
else
{
lean_object* v_a_772_; lean_object* v___x_773_; size_t v___x_774_; size_t v___x_775_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = l_Array_append___redArg(v_b_767_, v_a_772_);
lean_dec(v_a_772_);
v___x_774_ = ((size_t)1ULL);
v___x_775_ = lean_usize_add(v_i_765_, v___x_774_);
v_i_765_ = v___x_775_;
v_b_767_ = v___x_773_;
goto _start;
}
}
else
{
lean_object* v___x_777_; 
lean_dec_ref(v_pkg_763_);
v___x_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_777_, 0, v_b_767_);
return v___x_777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___boxed(lean_object* v_ws_778_, lean_object* v_pkg_779_, lean_object* v_as_780_, lean_object* v_i_781_, lean_object* v_stop_782_, lean_object* v_b_783_){
_start:
{
size_t v_i_boxed_784_; size_t v_stop_boxed_785_; lean_object* v_res_786_; 
v_i_boxed_784_ = lean_unbox_usize(v_i_781_);
lean_dec(v_i_781_);
v_stop_boxed_785_ = lean_unbox_usize(v_stop_782_);
lean_dec(v_stop_782_);
v_res_786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(v_ws_778_, v_pkg_779_, v_as_780_, v_i_boxed_784_, v_stop_boxed_785_, v_b_783_);
lean_dec_ref(v_as_780_);
lean_dec_ref(v_ws_778_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(lean_object* v_ws_791_, lean_object* v_pkg_792_){
_start:
{
lean_object* v_defaultTargets_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v_defaultTargets_793_ = lean_ctor_get(v_pkg_792_, 17);
lean_inc_ref(v_defaultTargets_793_);
v___x_794_ = lean_unsigned_to_nat(0u);
v___x_795_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0));
v___x_796_ = lean_array_get_size(v_defaultTargets_793_);
v___x_797_ = lean_nat_dec_lt(v___x_794_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; 
lean_dec_ref(v_defaultTargets_793_);
lean_dec_ref(v_pkg_792_);
v___x_798_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1));
return v___x_798_;
}
else
{
size_t v___x_799_; size_t v___x_800_; lean_object* v___x_801_; 
v___x_799_ = ((size_t)0ULL);
v___x_800_ = lean_usize_of_nat(v___x_796_);
v___x_801_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(v_ws_791_, v_pkg_792_, v_defaultTargets_793_, v___x_799_, v___x_800_, v___x_795_);
lean_dec_ref(v_defaultTargets_793_);
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___boxed(lean_object* v_ws_802_, lean_object* v_pkg_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_802_, v_pkg_803_);
lean_dec_ref(v_ws_802_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(lean_object* v_ws_806_, lean_object* v_pkg_807_, lean_object* v_facet_808_){
_start:
{
uint8_t v___x_809_; 
v___x_809_ = l_Lean_Name_isAnonymous(v_facet_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_810_ = l_Lake_Package_keyword;
lean_inc(v_facet_808_);
v___x_811_ = l_Lean_Name_append(v___x_810_, v_facet_808_);
v___x_812_ = l_Lake_Workspace_findPackageFacetConfig_x3f(v___x_811_, v_ws_806_);
if (lean_obj_tag(v___x_812_) == 1)
{
lean_object* v_val_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_829_; 
lean_dec(v_facet_808_);
v_val_813_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_829_ == 0)
{
v___x_815_ = v___x_812_;
v_isShared_816_ = v_isSharedCheck_829_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_val_813_);
lean_dec(v___x_812_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_829_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v_keyName_817_; uint8_t v_buildable_818_; lean_object* v_format_819_; lean_object* v___x_821_; 
v_keyName_817_ = lean_ctor_get(v_pkg_807_, 2);
v_buildable_818_ = lean_ctor_get_uint8(v_val_813_, sizeof(void*)*4);
v_format_819_ = lean_ctor_get(v_val_813_, 3);
lean_inc_ref(v_format_819_);
lean_dec(v_val_813_);
lean_inc(v_keyName_817_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v_keyName_817_);
v___x_821_ = v___x_815_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_keyName_817_);
v___x_821_ = v_reuseFailAlloc_828_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_822_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v___x_810_);
lean_ctor_set(v___x_822_, 2, v_pkg_807_);
lean_ctor_set(v___x_822_, 3, v___x_811_);
v___x_823_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_823_, 0, v___x_822_);
lean_ctor_set(v___x_823_, 1, v_format_819_);
lean_ctor_set_uint8(v___x_823_, sizeof(void*)*2, v_buildable_818_);
v___x_824_ = lean_unsigned_to_nat(1u);
v___x_825_ = lean_mk_empty_array_with_capacity(v___x_824_);
v___x_826_ = lean_array_push(v___x_825_, v___x_823_);
v___x_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
return v___x_827_;
}
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
lean_dec(v___x_812_);
lean_dec(v___x_811_);
lean_dec_ref(v_pkg_807_);
v___x_830_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0));
v___x_831_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v_facet_808_);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
else
{
lean_object* v___x_833_; 
lean_dec(v_facet_808_);
v___x_833_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_806_, v_pkg_807_);
return v___x_833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___boxed(lean_object* v_ws_834_, lean_object* v_pkg_835_, lean_object* v_facet_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_834_, v_pkg_835_, v_facet_836_);
lean_dec_ref(v_ws_834_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(lean_object* v_ws_838_, lean_object* v_target_839_, lean_object* v_facet_840_){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = l_Lake_Workspace_findTargetDecl_x3f(v_target_839_, v_ws_838_);
if (lean_obj_tag(v___x_866_) == 1)
{
lean_object* v_val_867_; lean_object* v_fst_868_; lean_object* v_snd_869_; lean_object* v___x_870_; 
v_val_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_val_867_);
lean_dec_ref_known(v___x_866_, 1);
v_fst_868_ = lean_ctor_get(v_val_867_, 0);
lean_inc(v_fst_868_);
v_snd_869_ = lean_ctor_get(v_val_867_, 1);
lean_inc(v_snd_869_);
lean_dec(v_val_867_);
v___x_870_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_838_, v_fst_868_, v_target_839_, v_snd_869_, v_facet_840_);
return v___x_870_;
}
else
{
lean_object* v_packages_871_; lean_object* v___x_872_; size_t v_sz_873_; size_t v___x_874_; lean_object* v___x_875_; lean_object* v_fst_876_; 
lean_dec(v___x_866_);
v_packages_871_ = lean_ctor_get(v_ws_838_, 4);
v___x_872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v_sz_873_ = lean_array_size(v_packages_871_);
v___x_874_ = ((size_t)0ULL);
v___x_875_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v_target_839_, v_packages_871_, v_sz_873_, v___x_874_, v___x_872_);
v_fst_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_fst_876_);
lean_dec_ref(v___x_875_);
if (lean_obj_tag(v_fst_876_) == 0)
{
goto v___jp_841_;
}
else
{
lean_object* v_val_877_; 
v_val_877_ = lean_ctor_get(v_fst_876_, 0);
lean_inc(v_val_877_);
lean_dec_ref_known(v_fst_876_, 1);
if (lean_obj_tag(v_val_877_) == 1)
{
lean_object* v_val_878_; lean_object* v___x_879_; 
lean_dec(v_target_839_);
v_val_878_ = lean_ctor_get(v_val_877_, 0);
lean_inc(v_val_878_);
lean_dec_ref_known(v_val_877_, 1);
v___x_879_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_838_, v_val_878_, v_facet_840_);
return v___x_879_;
}
else
{
lean_dec(v_val_877_);
goto v___jp_841_;
}
}
}
v___jp_841_:
{
lean_object* v___x_842_; 
lean_inc(v_target_839_);
v___x_842_ = l_Lake_Workspace_findTargetModule_x3f(v_target_839_, v_ws_838_);
if (lean_obj_tag(v___x_842_) == 1)
{
lean_object* v_val_843_; lean_object* v___x_844_; 
lean_dec(v_target_839_);
v_val_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_val_843_);
lean_dec_ref_known(v___x_842_, 1);
v___x_844_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_838_, v_val_843_, v_facet_840_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_863_; 
v_a_853_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_863_ == 0)
{
v___x_855_ = v___x_844_;
v_isShared_856_ = v_isSharedCheck_863_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_844_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_863_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_857_ = lean_unsigned_to_nat(1u);
v___x_858_ = lean_mk_empty_array_with_capacity(v___x_857_);
v___x_859_ = lean_array_push(v___x_858_, v_a_853_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v___x_859_);
v___x_861_ = v___x_855_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_859_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
else
{
lean_object* v___x_864_; lean_object* v___x_865_; 
lean_dec(v___x_842_);
lean_dec(v_facet_840_);
v___x_864_ = lean_alloc_ctor(15, 1, 0);
lean_ctor_set(v___x_864_, 0, v_target_839_);
v___x_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
return v___x_865_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace___boxed(lean_object* v_ws_880_, lean_object* v_target_881_, lean_object* v_facet_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(v_ws_880_, v_target_881_, v_facet_882_);
lean_dec_ref(v_ws_880_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg(){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0));
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___boxed(lean_object* v___dummy_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
return v_res_889_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0(void){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(lean_object* v_s_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___boxed(lean_object* v_s_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(v_s_893_);
lean_dec_ref(v_s_893_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(lean_object* v_spec_895_, lean_object* v___x_896_, lean_object* v___x_897_, lean_object* v_a_898_, lean_object* v_b_899_){
_start:
{
lean_object* v_it_901_; lean_object* v_startInclusive_902_; lean_object* v_endExclusive_903_; 
if (lean_obj_tag(v_a_898_) == 0)
{
lean_object* v_currPos_907_; lean_object* v_searcher_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_931_; 
v_currPos_907_ = lean_ctor_get(v_a_898_, 0);
v_searcher_908_ = lean_ctor_get(v_a_898_, 1);
v_isSharedCheck_931_ = !lean_is_exclusive(v_a_898_);
if (v_isSharedCheck_931_ == 0)
{
v___x_910_ = v_a_898_;
v_isShared_911_ = v_isSharedCheck_931_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_searcher_908_);
lean_inc(v_currPos_907_);
lean_dec(v_a_898_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_931_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
uint8_t v_decide_912_; 
v_decide_912_ = lean_nat_dec_eq(v_searcher_908_, v___x_897_);
if (v_decide_912_ == 0)
{
uint32_t v___x_913_; uint32_t v___x_914_; uint8_t v___x_915_; 
v___x_913_ = 47;
v___x_914_ = lean_string_utf8_get_fast(v_spec_895_, v_searcher_908_);
v___x_915_ = lean_uint32_dec_eq(v___x_914_, v___x_913_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_918_; 
v___x_916_ = lean_string_utf8_next_fast(v_spec_895_, v_searcher_908_);
lean_dec(v_searcher_908_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 1, v___x_916_);
v___x_918_ = v___x_910_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_currPos_907_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v___x_916_);
v___x_918_ = v_reuseFailAlloc_920_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
v_a_898_ = v___x_918_;
goto _start;
}
}
else
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v_slice_924_; lean_object* v_nextIt_926_; 
v___x_921_ = lean_string_utf8_next_fast(v_spec_895_, v_searcher_908_);
v___x_922_ = lean_nat_sub(v___x_921_, v_searcher_908_);
v___x_923_ = lean_nat_add(v_searcher_908_, v___x_922_);
lean_dec(v___x_922_);
v_slice_924_ = l_String_Slice_subslice_x21(v___x_896_, v_currPos_907_, v_searcher_908_);
lean_inc(v___x_923_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 1, v___x_923_);
lean_ctor_set(v___x_910_, 0, v___x_923_);
v_nextIt_926_ = v___x_910_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v___x_923_);
v_nextIt_926_ = v_reuseFailAlloc_929_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v_startInclusive_927_; lean_object* v_endExclusive_928_; 
v_startInclusive_927_ = lean_ctor_get(v_slice_924_, 0);
lean_inc(v_startInclusive_927_);
v_endExclusive_928_ = lean_ctor_get(v_slice_924_, 1);
lean_inc(v_endExclusive_928_);
lean_dec_ref(v_slice_924_);
v_it_901_ = v_nextIt_926_;
v_startInclusive_902_ = v_startInclusive_927_;
v_endExclusive_903_ = v_endExclusive_928_;
goto v___jp_900_;
}
}
}
else
{
lean_object* v___x_930_; 
lean_del_object(v___x_910_);
lean_dec(v_searcher_908_);
v___x_930_ = lean_box(1);
lean_inc(v___x_897_);
v_it_901_ = v___x_930_;
v_startInclusive_902_ = v_currPos_907_;
v_endExclusive_903_ = v___x_897_;
goto v___jp_900_;
}
}
}
else
{
lean_dec(v___x_897_);
lean_dec_ref(v_spec_895_);
return v_b_899_;
}
v___jp_900_:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
lean_inc_ref(v_spec_895_);
v___x_904_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_904_, 0, v_spec_895_);
lean_ctor_set(v___x_904_, 1, v_startInclusive_902_);
lean_ctor_set(v___x_904_, 2, v_endExclusive_903_);
v___x_905_ = lean_array_push(v_b_899_, v___x_904_);
v_a_898_ = v_it_901_;
v_b_899_ = v___x_905_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg___boxed(lean_object* v_spec_932_, lean_object* v___x_933_, lean_object* v___x_934_, lean_object* v_a_935_, lean_object* v_b_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_932_, v___x_933_, v___x_934_, v_a_935_, v_b_936_);
lean_dec_ref(v___x_933_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(lean_object* v_ws_941_, lean_object* v_spec_942_, lean_object* v_facet_943_, uint8_t v_isMaybePath_944_, uint8_t v_explicit_945_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = lean_string_utf8_byte_size(v_spec_942_);
lean_inc_ref_n(v_spec_942_, 2);
v___x_954_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_954_, 0, v_spec_942_);
lean_ctor_set(v___x_954_, 1, v___x_952_);
lean_ctor_set(v___x_954_, 2, v___x_953_);
v___x_955_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
v___x_956_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0));
v___x_957_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_942_, v___x_954_, v___x_953_, v___x_955_, v___x_956_);
lean_dec_ref_known(v___x_954_, 3);
v___x_958_ = lean_array_to_list(v___x_957_);
if (lean_obj_tag(v___x_958_) == 1)
{
lean_object* v_tail_959_; 
v_tail_959_ = lean_ctor_get(v___x_958_, 1);
if (lean_obj_tag(v_tail_959_) == 0)
{
lean_object* v_head_960_; lean_object* v_str_961_; lean_object* v_startInclusive_962_; lean_object* v_endExclusive_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
lean_dec_ref(v_spec_942_);
v_head_960_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_head_960_);
lean_dec_ref_known(v___x_958_, 2);
v_str_961_ = lean_ctor_get(v_head_960_, 0);
lean_inc_ref(v_str_961_);
v_startInclusive_962_ = lean_ctor_get(v_head_960_, 1);
lean_inc(v_startInclusive_962_);
v_endExclusive_963_ = lean_ctor_get(v_head_960_, 2);
lean_inc(v_endExclusive_963_);
lean_dec(v_head_960_);
v___x_964_ = lean_nat_sub(v_endExclusive_963_, v_startInclusive_962_);
v___x_965_ = lean_nat_dec_eq(v___x_964_, v___x_952_);
lean_dec(v___x_964_);
if (v___x_965_ == 0)
{
if (v_explicit_945_ == 0)
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_966_ = lean_string_utf8_extract_fast(v_str_961_, v_startInclusive_962_, v_endExclusive_963_);
lean_dec(v_endExclusive_963_);
lean_dec(v_startInclusive_962_);
lean_dec_ref(v_str_961_);
v___x_967_ = l_Lake_stringToLegalOrSimpleName(v___x_966_);
v___x_968_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(v_ws_941_, v___x_967_, v_facet_943_);
return v___x_968_;
}
else
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = lean_string_utf8_extract_fast(v_str_961_, v_startInclusive_962_, v_endExclusive_963_);
lean_dec(v_endExclusive_963_);
lean_dec(v_startInclusive_962_);
lean_dec_ref(v_str_961_);
v___x_970_ = l_Lake_parsePackageSpec(v_ws_941_, v___x_969_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_dec(v_facet_943_);
v_a_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
else
{
lean_object* v_a_979_; lean_object* v___x_980_; 
v_a_979_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_970_, 1);
v___x_980_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_941_, v_a_979_, v_facet_943_);
return v___x_980_;
}
}
}
else
{
lean_object* v_packages_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
lean_dec(v_endExclusive_963_);
lean_dec(v_startInclusive_962_);
lean_dec_ref(v_str_961_);
v_packages_981_ = lean_ctor_get(v_ws_941_, 4);
v___x_982_ = lean_array_fget_borrowed(v_packages_981_, v___x_952_);
lean_inc(v___x_982_);
v___x_983_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_941_, v___x_982_, v_facet_943_);
return v___x_983_;
}
}
else
{
lean_object* v_tail_984_; 
lean_inc_ref(v_tail_959_);
v_tail_984_ = lean_ctor_get(v_tail_959_, 1);
if (lean_obj_tag(v_tail_984_) == 0)
{
lean_object* v_head_985_; lean_object* v_head_986_; lean_object* v_str_987_; lean_object* v_startInclusive_988_; lean_object* v_endExclusive_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
lean_dec_ref(v_spec_942_);
v_head_985_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_head_985_);
lean_dec_ref_known(v___x_958_, 2);
v_head_986_ = lean_ctor_get(v_tail_959_, 0);
lean_inc(v_head_986_);
lean_dec_ref_known(v_tail_959_, 2);
v_str_987_ = lean_ctor_get(v_head_985_, 0);
lean_inc_ref(v_str_987_);
v_startInclusive_988_ = lean_ctor_get(v_head_985_, 1);
lean_inc(v_startInclusive_988_);
v_endExclusive_989_ = lean_ctor_get(v_head_985_, 2);
lean_inc(v_endExclusive_989_);
lean_dec(v_head_985_);
v___x_990_ = lean_string_utf8_extract_fast(v_str_987_, v_startInclusive_988_, v_endExclusive_989_);
lean_dec(v_endExclusive_989_);
lean_dec(v_startInclusive_988_);
lean_dec_ref(v_str_987_);
v___x_991_ = l_Lake_parsePackageSpec(v_ws_941_, v___x_990_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec(v_head_986_);
lean_dec(v_facet_943_);
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1047_; 
v_a_1000_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1002_ = v___x_991_;
v_isShared_1003_ = v_isSharedCheck_1047_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_991_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1047_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v_str_1004_; lean_object* v_startInclusive_1005_; lean_object* v_endExclusive_1006_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v_str_1004_ = lean_ctor_get(v_head_986_, 0);
lean_inc_ref(v_str_1004_);
v_startInclusive_1005_ = lean_ctor_get(v_head_986_, 1);
lean_inc(v_startInclusive_1005_);
v_endExclusive_1006_ = lean_ctor_get(v_head_986_, 2);
lean_inc(v_endExclusive_1006_);
v___x_1011_ = lean_nat_sub(v_endExclusive_1006_, v_startInclusive_1005_);
v___x_1012_ = lean_nat_dec_eq(v___x_1011_, v___x_952_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = lean_unsigned_to_nat(1u);
v___x_1014_ = lean_nat_dec_le(v___x_1013_, v___x_1011_);
lean_dec(v___x_1011_);
if (v___x_1014_ == 0)
{
lean_del_object(v___x_1002_);
lean_dec(v_head_986_);
goto v___jp_1007_;
}
else
{
lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1015_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_1016_ = lean_string_memcmp(v_str_1004_, v___x_1015_, v_startInclusive_1005_, v___x_952_, v___x_1013_);
if (v___x_1016_ == 0)
{
lean_del_object(v___x_1002_);
lean_dec(v_head_986_);
goto v___jp_1007_;
}
else
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1017_ = l_String_Slice_Pos_nextn(v_head_986_, v___x_952_, v___x_1013_);
lean_dec(v_head_986_);
v___x_1018_ = lean_nat_add(v_startInclusive_1005_, v___x_1017_);
lean_dec(v___x_1017_);
lean_dec(v_startInclusive_1005_);
v___x_1019_ = lean_string_utf8_extract_fast(v_str_1004_, v___x_1018_, v_endExclusive_1006_);
lean_dec(v_endExclusive_1006_);
lean_dec(v___x_1018_);
lean_dec_ref(v_str_1004_);
v___x_1020_ = l_String_toName(v___x_1019_);
lean_inc(v___x_1020_);
v___x_1021_ = l_Lake_Package_findTargetModule_x3f(v___x_1020_, v_a_1000_);
if (lean_obj_tag(v___x_1021_) == 1)
{
lean_object* v_val_1022_; lean_object* v___x_1023_; 
lean_dec(v___x_1020_);
lean_del_object(v___x_1002_);
v_val_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_val_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1023_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_941_, v_val_1022_, v_facet_943_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1041_; 
v_a_1032_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1034_ = v___x_1023_;
v_isShared_1035_ = v_isSharedCheck_1041_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1023_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1041_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1036_ = lean_mk_empty_array_with_capacity(v___x_1013_);
v___x_1037_ = lean_array_push(v___x_1036_, v_a_1032_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1037_);
v___x_1039_ = v___x_1034_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
else
{
lean_object* v___x_1042_; lean_object* v___x_1044_; 
lean_dec(v___x_1021_);
lean_dec(v_facet_943_);
v___x_1042_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1020_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set_tag(v___x_1002_, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1042_);
v___x_1044_ = v___x_1002_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1042_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
else
{
lean_object* v___x_1046_; 
lean_dec(v___x_1011_);
lean_dec(v_endExclusive_1006_);
lean_dec(v_startInclusive_1005_);
lean_dec_ref(v_str_1004_);
lean_del_object(v___x_1002_);
lean_dec(v_head_986_);
v___x_1046_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_941_, v_a_1000_, v_facet_943_);
return v___x_1046_;
}
v___jp_1007_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = lean_string_utf8_extract_fast(v_str_1004_, v_startInclusive_1005_, v_endExclusive_1006_);
lean_dec(v_endExclusive_1006_);
lean_dec(v_startInclusive_1005_);
lean_dec_ref(v_str_1004_);
v___x_1009_ = l_Lake_stringToLegalOrSimpleName(v___x_1008_);
v___x_1010_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_941_, v_a_1000_, v___x_1009_, v_facet_943_);
return v___x_1010_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_959_, 2);
lean_dec_ref_known(v___x_958_, 2);
lean_dec(v_facet_943_);
goto v___jp_946_;
}
}
}
else
{
lean_dec(v___x_958_);
lean_dec(v_facet_943_);
goto v___jp_946_;
}
v___jp_946_:
{
if (v_isMaybePath_944_ == 0)
{
uint32_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_947_ = 47;
v___x_948_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_948_, 0, v_spec_942_);
lean_ctor_set_uint32(v___x_948_, sizeof(void*)*1, v___x_947_);
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v___x_950_, 0, v_spec_942_);
v___x_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_951_, 0, v___x_950_);
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___boxed(lean_object* v_ws_1048_, lean_object* v_spec_1049_, lean_object* v_facet_1050_, lean_object* v_isMaybePath_1051_, lean_object* v_explicit_1052_){
_start:
{
uint8_t v_isMaybePath_boxed_1053_; uint8_t v_explicit_boxed_1054_; lean_object* v_res_1055_; 
v_isMaybePath_boxed_1053_ = lean_unbox(v_isMaybePath_1051_);
v_explicit_boxed_1054_ = lean_unbox(v_explicit_1052_);
v_res_1055_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1048_, v_spec_1049_, v_facet_1050_, v_isMaybePath_boxed_1053_, v_explicit_boxed_1054_);
lean_dec_ref(v_ws_1048_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(lean_object* v_spec_1056_, lean_object* v___x_1057_, lean_object* v___x_1058_, lean_object* v_inst_1059_, lean_object* v_R_1060_, lean_object* v_a_1061_, lean_object* v_b_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_1056_, v___x_1057_, v___x_1058_, v_a_1061_, v_b_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___boxed(lean_object* v_spec_1064_, lean_object* v___x_1065_, lean_object* v___x_1066_, lean_object* v_inst_1067_, lean_object* v_R_1068_, lean_object* v_a_1069_, lean_object* v_b_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(v_spec_1064_, v___x_1065_, v___x_1066_, v_inst_1067_, v_R_1068_, v_a_1069_, v_b_1070_);
lean_dec_ref(v___x_1065_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(lean_object* v_ws_1073_, lean_object* v_spec_1074_, lean_object* v_facet_1075_){
_start:
{
uint8_t v___y_1078_; uint8_t v___y_1079_; lean_object* v___x_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; 
v___x_1193_ = lean_string_utf8_byte_size(v_spec_1074_);
v___x_1194_ = lean_unsigned_to_nat(1u);
v___x_1195_ = lean_nat_dec_le(v___x_1194_, v___x_1193_);
if (v___x_1195_ == 0)
{
goto v___jp_1158_;
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; 
v___x_1196_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1197_ = lean_unsigned_to_nat(0u);
v___x_1198_ = lean_string_memcmp(v_spec_1074_, v___x_1196_, v___x_1197_, v___x_1197_, v___x_1194_);
if (v___x_1198_ == 0)
{
goto v___jp_1158_;
}
else
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; uint8_t v___x_1202_; lean_object* v___x_1203_; 
lean_inc_ref(v_spec_1074_);
v___x_1199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1199_, 0, v_spec_1074_);
lean_ctor_set(v___x_1199_, 1, v___x_1197_);
lean_ctor_set(v___x_1199_, 2, v___x_1193_);
v___x_1200_ = l_String_Slice_Pos_nextn(v___x_1199_, v___x_1197_, v___x_1194_);
lean_dec_ref_known(v___x_1199_, 3);
v___x_1201_ = lean_string_utf8_extract_fast(v_spec_1074_, v___x_1200_, v___x_1193_);
lean_dec(v___x_1200_);
lean_dec_ref(v_spec_1074_);
v___x_1202_ = 0;
v___x_1203_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1073_, v___x_1201_, v_facet_1075_, v___x_1202_, v___x_1195_);
if (lean_obj_tag(v___x_1203_) == 0)
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
v_a_1204_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1203_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1203_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
lean_ctor_set_tag(v___x_1206_, 1);
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
v_a_1212_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1203_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1203_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
lean_ctor_set_tag(v___x_1214_, 0);
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
v___jp_1077_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
lean_inc_ref(v_spec_1074_);
v___x_1080_ = l_Lake_resolvePath(v_spec_1074_);
v___x_1081_ = lean_string_utf8_byte_size(v___x_1080_);
v___x_1082_ = lean_unsigned_to_nat(0u);
v___x_1083_ = lean_nat_dec_eq(v___x_1081_, v___x_1082_);
if (v___x_1083_ == 0)
{
uint8_t v___x_1084_; 
v___x_1084_ = l_System_FilePath_isDir(v___x_1080_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Lake_Workspace_findModuleBySrc_x3f(v___x_1080_, v_ws_1073_);
if (lean_obj_tag(v___x_1085_) == 1)
{
lean_object* v_val_1086_; lean_object* v___x_1087_; 
lean_dec_ref(v_spec_1074_);
v_val_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_val_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_1073_, v_val_1086_, v_facet_1075_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
lean_ctor_set_tag(v___x_1090_, 1);
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1106_; 
v_a_1096_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1098_ = v___x_1087_;
v_isShared_1099_ = v_isSharedCheck_1106_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1087_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1106_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1104_; 
v___x_1100_ = lean_unsigned_to_nat(1u);
v___x_1101_ = lean_mk_empty_array_with_capacity(v___x_1100_);
v___x_1102_ = lean_array_push(v___x_1101_, v_a_1096_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set_tag(v___x_1098_, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1102_);
v___x_1104_ = v___x_1098_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
else
{
lean_object* v___x_1107_; 
lean_dec(v___x_1085_);
v___x_1107_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1073_, v_spec_1074_, v_facet_1075_, v___y_1078_, v___x_1084_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
v_a_1108_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1107_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1107_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
lean_ctor_set_tag(v___x_1110_, 1);
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
v_a_1116_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1107_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1107_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
lean_ctor_set_tag(v___x_1118_, 0);
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
}
else
{
lean_object* v___x_1124_; 
lean_dec_ref(v___x_1080_);
v___x_1124_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1073_, v_spec_1074_, v_facet_1075_, v___y_1079_, v___y_1079_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 1);
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
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
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
v_a_1133_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v___x_1124_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1124_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 0);
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
else
{
lean_object* v___x_1141_; 
lean_dec_ref(v___x_1080_);
v___x_1141_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1073_, v_spec_1074_, v_facet_1075_, v___y_1078_, v___y_1079_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1141_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1141_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set_tag(v___x_1144_, 1);
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
v_a_1150_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1141_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1141_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set_tag(v___x_1152_, 0);
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
v___jp_1158_:
{
uint8_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1159_ = 1;
v___x_1160_ = lean_string_utf8_byte_size(v_spec_1074_);
v___x_1161_ = lean_unsigned_to_nat(1u);
v___x_1162_ = lean_nat_dec_le(v___x_1161_, v___x_1160_);
if (v___x_1162_ == 0)
{
v___y_1078_ = v___x_1159_;
v___y_1079_ = v___x_1162_;
goto v___jp_1077_;
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1163_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_1164_ = lean_unsigned_to_nat(0u);
v___x_1165_ = lean_string_memcmp(v_spec_1074_, v___x_1163_, v___x_1164_, v___x_1164_, v___x_1161_);
if (v___x_1165_ == 0)
{
v___y_1078_ = v___x_1159_;
v___y_1079_ = v___x_1165_;
goto v___jp_1077_;
}
else
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v_mod_1169_; lean_object* v___x_1170_; 
lean_inc_ref(v_spec_1074_);
v___x_1166_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1166_, 0, v_spec_1074_);
lean_ctor_set(v___x_1166_, 1, v___x_1164_);
lean_ctor_set(v___x_1166_, 2, v___x_1160_);
v___x_1167_ = l_String_Slice_Pos_nextn(v___x_1166_, v___x_1164_, v___x_1161_);
lean_dec_ref_known(v___x_1166_, 3);
v___x_1168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1168_, 0, v_spec_1074_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
lean_ctor_set(v___x_1168_, 2, v___x_1160_);
v_mod_1169_ = l_String_Slice_toName(v___x_1168_);
lean_dec_ref_known(v___x_1168_, 3);
lean_inc(v_mod_1169_);
v___x_1170_ = l_Lake_Workspace_findTargetModule_x3f(v_mod_1169_, v_ws_1073_);
if (lean_obj_tag(v___x_1170_) == 1)
{
lean_object* v_val_1171_; lean_object* v___x_1172_; 
lean_dec(v_mod_1169_);
v_val_1171_ = lean_ctor_get(v___x_1170_, 0);
lean_inc(v_val_1171_);
lean_dec_ref_known(v___x_1170_, 1);
v___x_1172_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_1073_, v_val_1171_, v_facet_1075_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
lean_ctor_set_tag(v___x_1175_, 1);
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1190_; 
v_a_1181_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1183_ = v___x_1172_;
v_isShared_1184_ = v_isSharedCheck_1190_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1172_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1190_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1185_ = lean_mk_empty_array_with_capacity(v___x_1161_);
v___x_1186_ = lean_array_push(v___x_1185_, v_a_1181_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set_tag(v___x_1183_, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1186_);
v___x_1188_ = v___x_1183_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
else
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
lean_dec(v___x_1170_);
lean_dec(v_facet_1075_);
v___x_1191_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_mod_1169_);
v___x_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
return v___x_1192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___boxed(lean_object* v_ws_1220_, lean_object* v_spec_1221_, lean_object* v_facet_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1220_, v_spec_1221_, v_facet_1222_);
lean_dec_ref(v_ws_1220_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec(lean_object* v_ws_1225_, lean_object* v_spec_1226_){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1234_ = lean_unsigned_to_nat(0u);
v___x_1235_ = lean_string_utf8_byte_size(v_spec_1226_);
lean_inc_ref_n(v_spec_1226_, 2);
v___x_1236_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1236_, 0, v_spec_1226_);
lean_ctor_set(v___x_1236_, 1, v___x_1234_);
lean_ctor_set(v___x_1236_, 2, v___x_1235_);
v___x_1237_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
v___x_1238_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0));
v___x_1239_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_1226_, v___x_1236_, v___x_1235_, v___x_1237_, v___x_1238_);
lean_dec_ref_known(v___x_1236_, 3);
v___x_1240_ = lean_array_to_list(v___x_1239_);
if (lean_obj_tag(v___x_1240_) == 1)
{
lean_object* v_tail_1241_; 
v_tail_1241_ = lean_ctor_get(v___x_1240_, 1);
if (lean_obj_tag(v_tail_1241_) == 0)
{
lean_object* v_head_1242_; lean_object* v_str_1243_; lean_object* v_startInclusive_1244_; lean_object* v_endExclusive_1245_; lean_object* v___x_1246_; lean_object* v_targetName_1247_; lean_object* v___x_1248_; 
v_head_1242_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_head_1242_);
lean_dec_ref_known(v___x_1240_, 2);
v_str_1243_ = lean_ctor_get(v_head_1242_, 0);
lean_inc_ref(v_str_1243_);
v_startInclusive_1244_ = lean_ctor_get(v_head_1242_, 1);
lean_inc(v_startInclusive_1244_);
v_endExclusive_1245_ = lean_ctor_get(v_head_1242_, 2);
lean_inc(v_endExclusive_1245_);
lean_dec(v_head_1242_);
v___x_1246_ = lean_string_utf8_extract_fast(v_str_1243_, v_startInclusive_1244_, v_endExclusive_1245_);
lean_dec(v_endExclusive_1245_);
lean_dec(v_startInclusive_1244_);
lean_dec_ref(v_str_1243_);
v_targetName_1247_ = l_Lake_stringToLegalOrSimpleName(v___x_1246_);
v___x_1248_ = l_Lake_Workspace_findLeanExe_x3f(v_targetName_1247_, v_ws_1225_);
lean_dec(v_targetName_1247_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1249_ = lean_alloc_ctor(21, 1, 0);
lean_ctor_set(v___x_1249_, 0, v_spec_1226_);
v___x_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
return v___x_1250_;
}
else
{
lean_object* v_val_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
lean_dec_ref(v_spec_1226_);
v_val_1251_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1248_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_val_1251_);
lean_dec(v___x_1248_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_val_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
else
{
lean_object* v_head_1259_; lean_object* v_head_1260_; lean_object* v_tail_1261_; lean_object* v_str_1263_; lean_object* v_startInclusive_1264_; lean_object* v_endExclusive_1265_; 
lean_inc_ref(v_tail_1241_);
v_head_1259_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_head_1259_);
lean_dec_ref_known(v___x_1240_, 2);
v_head_1260_ = lean_ctor_get(v_tail_1241_, 0);
lean_inc(v_head_1260_);
v_tail_1261_ = lean_ctor_get(v_tail_1241_, 1);
lean_inc(v_tail_1261_);
lean_dec_ref_known(v_tail_1241_, 2);
if (lean_obj_tag(v_tail_1261_) == 0)
{
lean_object* v_str_1303_; lean_object* v_startInclusive_1304_; lean_object* v_endExclusive_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
v_str_1303_ = lean_ctor_get(v_head_1259_, 0);
lean_inc_ref(v_str_1303_);
v_startInclusive_1304_ = lean_ctor_get(v_head_1259_, 1);
lean_inc(v_startInclusive_1304_);
v_endExclusive_1305_ = lean_ctor_get(v_head_1259_, 2);
lean_inc(v_endExclusive_1305_);
v___x_1306_ = lean_unsigned_to_nat(1u);
v___x_1307_ = lean_nat_sub(v_endExclusive_1305_, v_startInclusive_1304_);
v___x_1308_ = lean_nat_dec_le(v___x_1306_, v___x_1307_);
lean_dec(v___x_1307_);
if (v___x_1308_ == 0)
{
lean_dec(v_head_1259_);
v_str_1263_ = v_str_1303_;
v_startInclusive_1264_ = v_startInclusive_1304_;
v_endExclusive_1265_ = v_endExclusive_1305_;
goto v___jp_1262_;
}
else
{
lean_object* v___x_1309_; uint8_t v___x_1310_; 
v___x_1309_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1310_ = lean_string_memcmp(v_str_1303_, v___x_1309_, v_startInclusive_1304_, v___x_1234_, v___x_1306_);
if (v___x_1310_ == 0)
{
lean_dec(v_head_1259_);
v_str_1263_ = v_str_1303_;
v_startInclusive_1264_ = v_startInclusive_1304_;
v_endExclusive_1265_ = v_endExclusive_1305_;
goto v___jp_1262_;
}
else
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1311_ = l_String_Slice_Pos_nextn(v_head_1259_, v___x_1234_, v___x_1306_);
lean_dec(v_head_1259_);
v___x_1312_ = lean_nat_add(v_startInclusive_1304_, v___x_1311_);
lean_dec(v___x_1311_);
lean_dec(v_startInclusive_1304_);
v_str_1263_ = v_str_1303_;
v_startInclusive_1264_ = v___x_1312_;
v_endExclusive_1265_ = v_endExclusive_1305_;
goto v___jp_1262_;
}
}
}
else
{
lean_dec(v_tail_1261_);
lean_dec(v_head_1260_);
lean_dec(v_head_1259_);
goto v___jp_1230_;
}
v___jp_1262_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_string_utf8_extract_fast(v_str_1263_, v_startInclusive_1264_, v_endExclusive_1265_);
lean_dec(v_endExclusive_1265_);
lean_dec(v_startInclusive_1264_);
lean_dec_ref(v_str_1263_);
v___x_1267_ = l_Lake_parsePackageSpec(v_ws_1225_, v___x_1266_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec(v_head_1260_);
lean_dec_ref(v_spec_1226_);
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1267_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1267_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1302_; 
v_a_1276_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1278_ = v___x_1267_;
v_isShared_1279_ = v_isSharedCheck_1302_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1267_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1302_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v_str_1280_; lean_object* v_startInclusive_1281_; lean_object* v_endExclusive_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1301_; 
v_str_1280_ = lean_ctor_get(v_head_1260_, 0);
v_startInclusive_1281_ = lean_ctor_get(v_head_1260_, 1);
v_endExclusive_1282_ = lean_ctor_get(v_head_1260_, 2);
v_isSharedCheck_1301_ = !lean_is_exclusive(v_head_1260_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1284_ = v_head_1260_;
v_isShared_1285_ = v_isSharedCheck_1301_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_endExclusive_1282_);
lean_inc(v_startInclusive_1281_);
lean_inc(v_str_1280_);
lean_dec(v_head_1260_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1301_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1286_ = lean_string_utf8_extract_fast(v_str_1280_, v_startInclusive_1281_, v_endExclusive_1282_);
lean_dec(v_endExclusive_1282_);
lean_dec(v_startInclusive_1281_);
lean_dec_ref(v_str_1280_);
v___x_1287_ = l_Lake_stringToLegalOrSimpleName(v___x_1286_);
v___x_1288_ = l_Lake_Package_findTargetDecl_x3f(v___x_1287_, v_a_1276_);
lean_dec(v___x_1287_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_del_object(v___x_1284_);
lean_del_object(v___x_1278_);
lean_dec(v_a_1276_);
goto v___jp_1227_;
}
else
{
lean_object* v_val_1289_; lean_object* v_name_1290_; lean_object* v_kind_1291_; lean_object* v_config_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; 
v_val_1289_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_val_1289_);
lean_dec_ref_known(v___x_1288_, 1);
v_name_1290_ = lean_ctor_get(v_val_1289_, 1);
lean_inc(v_name_1290_);
v_kind_1291_ = lean_ctor_get(v_val_1289_, 2);
lean_inc(v_kind_1291_);
v_config_1292_ = lean_ctor_get(v_val_1289_, 3);
lean_inc(v_config_1292_);
lean_dec(v_val_1289_);
v___x_1293_ = l_Lake_LeanExe_keyword;
v___x_1294_ = lean_name_eq(v_kind_1291_, v___x_1293_);
lean_dec(v_kind_1291_);
if (v___x_1294_ == 0)
{
lean_dec(v_config_1292_);
lean_dec(v_name_1290_);
lean_del_object(v___x_1284_);
lean_del_object(v___x_1278_);
lean_dec(v_a_1276_);
goto v___jp_1227_;
}
else
{
lean_object* v___x_1296_; 
lean_dec_ref(v_spec_1226_);
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 2, v_config_1292_);
lean_ctor_set(v___x_1284_, 1, v_name_1290_);
lean_ctor_set(v___x_1284_, 0, v_a_1276_);
v___x_1296_ = v___x_1284_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1276_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v_name_1290_);
lean_ctor_set(v_reuseFailAlloc_1300_, 2, v_config_1292_);
v___x_1296_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
lean_object* v___x_1298_; 
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1296_);
v___x_1298_ = v___x_1278_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1296_);
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
}
}
}
}
else
{
lean_dec(v___x_1240_);
goto v___jp_1230_;
}
v___jp_1227_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_alloc_ctor(21, 1, 0);
lean_ctor_set(v___x_1228_, 0, v_spec_1226_);
v___x_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
return v___x_1229_;
}
v___jp_1230_:
{
uint32_t v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1231_ = 47;
v___x_1232_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_1232_, 0, v_spec_1226_);
lean_ctor_set_uint32(v___x_1232_, sizeof(void*)*1, v___x_1231_);
v___x_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
return v___x_1233_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec___boxed(lean_object* v_ws_1313_, lean_object* v_spec_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lake_parseExeTargetSpec(v_ws_1313_, v_spec_1314_);
lean_dec_ref(v_ws_1313_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg(){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0));
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg___boxed(lean_object* v___dummy_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
return v_res_1319_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(lean_object* v_s_1321_){
_start:
{
lean_object* v___x_1322_; 
v___x_1322_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___boxed(lean_object* v_s_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(v_s_1323_);
lean_dec_ref(v_s_1323_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(lean_object* v_spec_1325_, lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v_a_1328_, lean_object* v_b_1329_){
_start:
{
lean_object* v_it_1331_; lean_object* v_startInclusive_1332_; lean_object* v_endExclusive_1333_; 
if (lean_obj_tag(v_a_1328_) == 0)
{
lean_object* v_currPos_1338_; lean_object* v_searcher_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1362_; 
v_currPos_1338_ = lean_ctor_get(v_a_1328_, 0);
v_searcher_1339_ = lean_ctor_get(v_a_1328_, 1);
v_isSharedCheck_1362_ = !lean_is_exclusive(v_a_1328_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1341_ = v_a_1328_;
v_isShared_1342_ = v_isSharedCheck_1362_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_searcher_1339_);
lean_inc(v_currPos_1338_);
lean_dec(v_a_1328_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1362_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
uint8_t v_decide_1343_; 
v_decide_1343_ = lean_nat_dec_eq(v_searcher_1339_, v___x_1327_);
if (v_decide_1343_ == 0)
{
uint32_t v___x_1344_; uint32_t v___x_1345_; uint8_t v___x_1346_; 
v___x_1344_ = 58;
v___x_1345_ = lean_string_utf8_get_fast(v_spec_1325_, v_searcher_1339_);
v___x_1346_ = lean_uint32_dec_eq(v___x_1345_, v___x_1344_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1347_ = lean_string_utf8_next_fast(v_spec_1325_, v_searcher_1339_);
lean_dec(v_searcher_1339_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 1, v___x_1347_);
v___x_1349_ = v___x_1341_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_currPos_1338_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v___x_1347_);
v___x_1349_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
v_a_1328_ = v___x_1349_;
goto _start;
}
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v_slice_1355_; lean_object* v_nextIt_1357_; 
v___x_1352_ = lean_string_utf8_next_fast(v_spec_1325_, v_searcher_1339_);
v___x_1353_ = lean_nat_sub(v___x_1352_, v_searcher_1339_);
v___x_1354_ = lean_nat_add(v_searcher_1339_, v___x_1353_);
lean_dec(v___x_1353_);
v_slice_1355_ = l_String_Slice_subslice_x21(v___x_1326_, v_currPos_1338_, v_searcher_1339_);
lean_inc(v___x_1354_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 1, v___x_1354_);
lean_ctor_set(v___x_1341_, 0, v___x_1354_);
v_nextIt_1357_ = v___x_1341_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1354_);
lean_ctor_set(v_reuseFailAlloc_1360_, 1, v___x_1354_);
v_nextIt_1357_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
lean_object* v_startInclusive_1358_; lean_object* v_endExclusive_1359_; 
v_startInclusive_1358_ = lean_ctor_get(v_slice_1355_, 0);
lean_inc(v_startInclusive_1358_);
v_endExclusive_1359_ = lean_ctor_get(v_slice_1355_, 1);
lean_inc(v_endExclusive_1359_);
lean_dec_ref(v_slice_1355_);
v_it_1331_ = v_nextIt_1357_;
v_startInclusive_1332_ = v_startInclusive_1358_;
v_endExclusive_1333_ = v_endExclusive_1359_;
goto v___jp_1330_;
}
}
}
else
{
lean_object* v___x_1361_; 
lean_del_object(v___x_1341_);
lean_dec(v_searcher_1339_);
v___x_1361_ = lean_box(1);
lean_inc(v___x_1327_);
v_it_1331_ = v___x_1361_;
v_startInclusive_1332_ = v_currPos_1338_;
v_endExclusive_1333_ = v___x_1327_;
goto v___jp_1330_;
}
}
}
else
{
lean_dec(v___x_1327_);
lean_dec_ref(v_spec_1325_);
return v_b_1329_;
}
v___jp_1330_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
lean_inc_ref(v_spec_1325_);
v___x_1334_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1334_, 0, v_spec_1325_);
lean_ctor_set(v___x_1334_, 1, v_startInclusive_1332_);
lean_ctor_set(v___x_1334_, 2, v_endExclusive_1333_);
v___x_1335_ = l_String_Slice_toString(v___x_1334_);
lean_dec_ref_known(v___x_1334_, 3);
v___x_1336_ = lean_array_push(v_b_1329_, v___x_1335_);
v_a_1328_ = v_it_1331_;
v_b_1329_ = v___x_1336_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg___boxed(lean_object* v_spec_1363_, lean_object* v___x_1364_, lean_object* v___x_1365_, lean_object* v_a_1366_, lean_object* v_b_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1363_, v___x_1364_, v___x_1365_, v_a_1366_, v_b_1367_);
lean_dec_ref(v___x_1364_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec(lean_object* v_ws_1371_, lean_object* v_spec_1372_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1378_ = lean_unsigned_to_nat(0u);
v___x_1379_ = lean_string_utf8_byte_size(v_spec_1372_);
lean_inc_ref_n(v_spec_1372_, 2);
v___x_1380_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1380_, 0, v_spec_1372_);
lean_ctor_set(v___x_1380_, 1, v___x_1378_);
lean_ctor_set(v___x_1380_, 2, v___x_1379_);
v___x_1381_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0);
v___x_1382_ = ((lean_object*)(l_Lake_parseTargetSpec___closed__0));
v___x_1383_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1372_, v___x_1380_, v___x_1379_, v___x_1381_, v___x_1382_);
lean_dec_ref_known(v___x_1380_, 3);
v___x_1384_ = lean_array_to_list(v___x_1383_);
if (lean_obj_tag(v___x_1384_) == 1)
{
lean_object* v_tail_1385_; 
v_tail_1385_ = lean_ctor_get(v___x_1384_, 1);
if (lean_obj_tag(v_tail_1385_) == 0)
{
lean_object* v_head_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_dec_ref(v_spec_1372_);
v_head_1386_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_head_1386_);
lean_dec_ref_known(v___x_1384_, 2);
v___x_1387_ = lean_box(0);
v___x_1388_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1371_, v_head_1386_, v___x_1387_);
return v___x_1388_;
}
else
{
lean_object* v_tail_1389_; 
lean_inc_ref(v_tail_1385_);
v_tail_1389_ = lean_ctor_get(v_tail_1385_, 1);
if (lean_obj_tag(v_tail_1389_) == 0)
{
lean_object* v_head_1390_; lean_object* v_head_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
lean_dec_ref(v_spec_1372_);
v_head_1390_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_head_1390_);
lean_dec_ref_known(v___x_1384_, 2);
v_head_1391_ = lean_ctor_get(v_tail_1385_, 0);
lean_inc(v_head_1391_);
lean_dec_ref_known(v_tail_1385_, 2);
v___x_1392_ = l_String_toName(v_head_1391_);
v___x_1393_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1371_, v_head_1390_, v___x_1392_);
return v___x_1393_;
}
else
{
lean_dec_ref_known(v_tail_1385_, 2);
lean_dec_ref_known(v___x_1384_, 2);
goto v___jp_1374_;
}
}
}
else
{
lean_dec(v___x_1384_);
goto v___jp_1374_;
}
v___jp_1374_:
{
uint32_t v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1375_ = 58;
v___x_1376_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_1376_, 0, v_spec_1372_);
lean_ctor_set_uint32(v___x_1376_, sizeof(void*)*1, v___x_1375_);
v___x_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
return v___x_1377_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec___boxed(lean_object* v_ws_1394_, lean_object* v_spec_1395_, lean_object* v_a_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lake_parseTargetSpec(v_ws_1394_, v_spec_1395_);
lean_dec_ref(v_ws_1394_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(lean_object* v_spec_1398_, lean_object* v___x_1399_, lean_object* v___x_1400_, lean_object* v_inst_1401_, lean_object* v_R_1402_, lean_object* v_a_1403_, lean_object* v_b_1404_){
_start:
{
lean_object* v___x_1405_; 
v___x_1405_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1398_, v___x_1399_, v___x_1400_, v_a_1403_, v_b_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___boxed(lean_object* v_spec_1406_, lean_object* v___x_1407_, lean_object* v___x_1408_, lean_object* v_inst_1409_, lean_object* v_R_1410_, lean_object* v_a_1411_, lean_object* v_b_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(v_spec_1406_, v___x_1407_, v___x_1408_, v_inst_1409_, v_R_1410_, v_a_1411_, v_b_1412_);
lean_dec_ref(v___x_1407_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(lean_object* v_ws_1414_, lean_object* v_as_x27_1415_, lean_object* v_b_1416_){
_start:
{
if (lean_obj_tag(v_as_x27_1415_) == 0)
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1418_, 0, v_b_1416_);
return v___x_1418_;
}
else
{
lean_object* v_head_1419_; lean_object* v_tail_1420_; lean_object* v___x_1421_; 
v_head_1419_ = lean_ctor_get(v_as_x27_1415_, 0);
v_tail_1420_ = lean_ctor_get(v_as_x27_1415_, 1);
lean_inc(v_head_1419_);
v___x_1421_ = l_Lake_parseTargetSpec(v_ws_1414_, v_head_1419_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1423_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = l_Array_append___redArg(v_b_1416_, v_a_1422_);
lean_dec(v_a_1422_);
v_as_x27_1415_ = v_tail_1420_;
v_b_1416_ = v___x_1423_;
goto _start;
}
else
{
lean_dec_ref(v_b_1416_);
return v___x_1421_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg___boxed(lean_object* v_ws_1425_, lean_object* v_as_x27_1426_, lean_object* v_b_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1425_, v_as_x27_1426_, v_b_1427_);
lean_dec(v_as_x27_1426_);
lean_dec_ref(v_ws_1425_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs(lean_object* v_ws_1432_, lean_object* v_specs_1433_){
_start:
{
lean_object* v___x_1435_; lean_object* v_results_1436_; lean_object* v___x_1437_; 
v___x_1435_ = lean_unsigned_to_nat(0u);
v_results_1436_ = ((lean_object*)(l_Lake_parseTargetSpecs___closed__0));
v___x_1437_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1432_, v_specs_1433_, v_results_1436_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
v___x_1439_ = lean_array_get_size(v_a_1438_);
v___x_1440_ = lean_nat_dec_eq(v___x_1439_, v___x_1435_);
if (v___x_1440_ == 0)
{
return v___x_1437_;
}
else
{
lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1455_; 
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1455_ == 0)
{
lean_object* v_unused_1456_; 
v_unused_1456_ = lean_ctor_get(v___x_1437_, 0);
lean_dec(v_unused_1456_);
v___x_1442_ = v___x_1437_;
v_isShared_1443_ = v_isSharedCheck_1455_;
goto v_resetjp_1441_;
}
else
{
lean_dec(v___x_1437_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1455_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v_packages_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v_packages_1444_ = lean_ctor_get(v_ws_1432_, 4);
v___x_1445_ = lean_array_fget_borrowed(v_packages_1444_, v___x_1435_);
lean_inc(v___x_1445_);
v___x_1446_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_1432_, v___x_1445_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1449_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
if (v_isShared_1443_ == 0)
{
lean_ctor_set_tag(v___x_1442_, 1);
lean_ctor_set(v___x_1442_, 0, v_a_1447_);
v___x_1449_ = v___x_1442_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1447_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; 
v_a_1451_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1451_);
lean_dec_ref_known(v___x_1446_, 1);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 0, v_a_1451_);
v___x_1453_ = v___x_1442_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
else
{
return v___x_1437_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs___boxed(lean_object* v_ws_1457_, lean_object* v_specs_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lake_parseTargetSpecs(v_ws_1457_, v_specs_1458_);
lean_dec(v_specs_1458_);
lean_dec_ref(v_ws_1457_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(lean_object* v_ws_1461_, lean_object* v_as_1462_, lean_object* v_as_x27_1463_, lean_object* v_b_1464_, lean_object* v_a_1465_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1461_, v_as_x27_1463_, v_b_1464_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___boxed(lean_object* v_ws_1468_, lean_object* v_as_1469_, lean_object* v_as_x27_1470_, lean_object* v_b_1471_, lean_object* v_a_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(v_ws_1468_, v_as_1469_, v_as_x27_1470_, v_b_1471_, v_a_1472_);
lean_dec(v_as_x27_1470_);
lean_dec(v_as_1469_);
lean_dec_ref(v_ws_1468_);
return v_res_1474_;
}
}
lean_object* runtime_initialize_Lake_CLI_Error(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_CLI_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_CLI_Error(uint8_t builtin);
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_CLI_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Build(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Build(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Build(builtin);
}
#ifdef __cplusplus
}
#endif
