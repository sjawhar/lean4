// Lean compiler output
// Module: Lean.Elab.Frontend
// Imports: import Init.System.Platform public import Lean.Language.Lean public import Lean.Server.References public import Lean.Util.Profiler import Lean.Compiler.Options import Lean.Compiler.InitAttr import Lean.Linter.PersistentLintLog import Lean.Util.ProfilerServer import Lean.Util.ModuleUsage import Lean.Util.UsedByChecks
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
extern lean_object* l_Lean_instInhabitedModuleArtifacts_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_runInitAttrsForModules(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_ModuleArtifacts_oleanParts(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_compacted_region_read(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_ModuleArtifacts_irParts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_profileit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_load_dynlib(lean_object*);
uint32_t lean_internal_get_hardware_concurrency(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_getRegularInitAttrModIdxs(lean_object*);
lean_object* lean_compacted_region_save(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_System_FilePath_extension(lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lean_instToJsonModuleArtifacts_toJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_runtime_forget(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_IO_CancelToken_set(lean_object*);
lean_object* l_Lean_instFromJsonModuleArtifacts_fromJson(lean_object*);
lean_object* l_Lean_Language_Lean_processCommands(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTree_getAll(lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_recordLints(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Lean_writeModule(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ModuleUsage_setLocalDigests(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Language_Lean_pushOpt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed(lean_object*, lean_object*);
lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
lean_object* lean_enable_initializer_execution();
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
lean_object* l_Lean_Options_mergeBy(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_HeaderSyntax_isModule(lean_object*);
uint8_t lean_strict_or(uint8_t, uint8_t);
lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
extern lean_object* l_Lean_trace_profiler_output;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Firefox_Profile_export(lean_object*, double, lean_object*, lean_object*);
lean_object* l_Lean_Firefox_instToJsonProfile_toJson(lean_object*);
extern lean_object* l_Lean_trace_profiler_serve;
lean_object* l_Lean_Firefox_Profile_serve(lean_object*);
lean_object* l_Lean_Server_findModuleRefs(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs(lean_object*);
lean_object* l_Lean_Server_collectImports(lean_object*);
lean_object* l_Lean_Server_instToJsonIlean_toJson(lean_object*);
lean_object* l_Lean_ModuleUsage_writeUsage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_lookedUpSpecKeys();
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_usedNames();
lean_object* l_Lean_ModuleUsage_usedFromInfoTreesImpl(lean_object*, lean_object*);
lean_object* lean_usage_resolved_names();
lean_object* l_Lean_recordedDeclConsts();
lean_object* l_Lean_ModuleUsage_ownConsts(lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_ownNodes(lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_localDigests(lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_closureDigest(lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_ownProvides(lean_object*);
lean_object* l_Lean_Environment_displayStats(lean_object*);
lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object*);
extern lean_object* l_Lean_Linter_codeQualityLogExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTree_runAndReport(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_process(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(lean_object*);
lean_object* l_Lean_withImporting___redArg(lean_object*);
extern lean_object* l_Lean_internal_cmdlineSnapshots;
lean_object* l_Lean_enableUsageRecording();
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected internal error: "};
static const lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Frontend_processCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parsing"};
static const lean_object* l_Lean_Elab_Frontend_processCommand___closed__0 = (const lean_object*)&l_Lean_Elab_Frontend_processCommand___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_IO_processCommandsIncrementally___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_IO_processCommandsIncrementally___closed__0 = (const lean_object*)&l_Lean_Elab_IO_processCommandsIncrementally___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_process___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_process___closed__0 = (const lean_object*)&l_Lean_Elab_process___closed__0_value;
static const lean_string_object l_Lean_Elab_process___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l_Lean_Elab_process___closed__1 = (const lean_object*)&l_Lean_Elab_process___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_process(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "server"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8_spec__10(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1(lean_object*);
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "deps"};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "failed to parse snapshot deps file "};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4;
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LEAN_IMPORT_WORKERS"};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_setMainModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_snap"};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 190, 236, 193, 206, 64, 207, 210)}};
static const lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1 = (const lean_object*)&l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_runFrontend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_runFrontend___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_runFrontend___closed__0 = (const lean_object*)&l_Lean_Elab_runFrontend___closed__0_value;
static const lean_closure_object l_Lean_Elab_runFrontend___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_runFrontend___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_runFrontend___closed__1 = (const lean_object*)&l_Lean_Elab_runFrontend___closed__1_value;
static lean_once_cell_t l_Lean_Elab_runFrontend___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_runFrontend___closed__2;
static const lean_string_object l_Lean_Elab_runFrontend___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ".olean serialization"};
static const lean_object* l_Lean_Elab_runFrontend___closed__3 = (const lean_object*)&l_Lean_Elab_runFrontend___closed__3_value;
static lean_once_cell_t l_Lean_Elab_runFrontend___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_runFrontend___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg(lean_object* v_commandState_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_parserState_5_; lean_object* v_cmdPos_6_; lean_object* v_commands_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_17_; 
v___x_4_ = lean_st_ref_take(v_a_2_);
v_parserState_5_ = lean_ctor_get(v___x_4_, 1);
v_cmdPos_6_ = lean_ctor_get(v___x_4_, 2);
v_commands_7_ = lean_ctor_get(v___x_4_, 3);
v_isSharedCheck_17_ = !lean_is_exclusive(v___x_4_);
if (v_isSharedCheck_17_ == 0)
{
lean_object* v_unused_18_; 
v_unused_18_ = lean_ctor_get(v___x_4_, 0);
lean_dec(v_unused_18_);
v___x_9_ = v___x_4_;
v_isShared_10_ = v_isSharedCheck_17_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_commands_7_);
lean_inc(v_cmdPos_6_);
lean_inc(v_parserState_5_);
lean_dec(v___x_4_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_17_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_11_; lean_object* v___x_13_; 
v___x_11_ = lean_box(0);
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 0, v_commandState_1_);
v___x_13_ = v___x_9_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_commandState_1_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_parserState_5_);
lean_ctor_set(v_reuseFailAlloc_16_, 2, v_cmdPos_6_);
lean_ctor_set(v_reuseFailAlloc_16_, 3, v_commands_7_);
v___x_13_ = v_reuseFailAlloc_16_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_st_ref_put(v_a_2_, v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_11_);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___redArg___boxed(lean_object* v_commandState_19_, lean_object* v_a_20_, lean_object* v_a_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Elab_Frontend_setCommandState___redArg(v_commandState_19_, v_a_20_);
lean_dec(v_a_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState(lean_object* v_commandState_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Elab_Frontend_setCommandState___redArg(v_commandState_23_, v_a_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setCommandState___boxed(lean_object* v_commandState_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Elab_Frontend_setCommandState(v_commandState_28_, v_a_29_, v_a_30_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg(lean_object* v_x_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v___x_38_; lean_object* v_fileName_39_; lean_object* v_fileMap_40_; lean_object* v_commandState_41_; lean_object* v_cmdPos_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_38_ = lean_st_ref_get(v_a_36_);
v_fileName_39_ = lean_ctor_get(v_a_35_, 1);
v_fileMap_40_ = lean_ctor_get(v_a_35_, 2);
v_commandState_41_ = lean_ctor_get(v___x_38_, 0);
lean_inc_ref(v_commandState_41_);
v_cmdPos_42_ = lean_ctor_get(v___x_38_, 2);
lean_inc(v_cmdPos_42_);
lean_dec(v___x_38_);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_box(0);
v___x_45_ = lean_box(0);
v___x_46_ = l_Lean_firstFrontendMacroScope;
v___x_47_ = lean_box(0);
v___x_48_ = 0;
lean_inc_ref(v_fileMap_40_);
lean_inc_ref(v_fileName_39_);
v___x_49_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_49_, 0, v_fileName_39_);
lean_ctor_set(v___x_49_, 1, v_fileMap_40_);
lean_ctor_set(v___x_49_, 2, v___x_43_);
lean_ctor_set(v___x_49_, 3, v_cmdPos_42_);
lean_ctor_set(v___x_49_, 4, v___x_44_);
lean_ctor_set(v___x_49_, 5, v___x_45_);
lean_ctor_set(v___x_49_, 6, v___x_46_);
lean_ctor_set(v___x_49_, 7, v___x_47_);
lean_ctor_set(v___x_49_, 8, v___x_45_);
lean_ctor_set(v___x_49_, 9, v___x_45_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*10, v___x_48_);
v___x_50_ = lean_st_mk_ref(v_commandState_41_);
lean_inc(v___x_50_);
v___x_51_ = lean_apply_3(v_x_34_, v___x_49_, v___x_50_, lean_box(0));
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
v_a_52_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_a_52_);
lean_dec_ref_known(v___x_51_, 1);
v___x_53_ = lean_st_ref_get(v___x_50_);
lean_dec(v___x_50_);
v___x_54_ = l_Lean_Elab_Frontend_setCommandState___redArg(v___x_53_, v_a_36_);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_61_ == 0)
{
lean_object* v_unused_62_; 
v_unused_62_ = lean_ctor_get(v___x_54_, 0);
lean_dec(v_unused_62_);
v___x_56_ = v___x_54_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_dec(v___x_54_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v_a_52_);
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_52_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_75_; 
lean_dec(v___x_50_);
v_a_63_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_75_ == 0)
{
v___x_65_ = v___x_51_;
v_isShared_66_ = v_isSharedCheck_75_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_51_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_75_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_67_ = l_Lean_Exception_toMessageData(v_a_63_);
v___x_68_ = l_Lean_MessageData_toString(v___x_67_);
v___x_69_ = ((lean_object*)(l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0));
v___x_70_ = lean_string_append(v___x_69_, v___x_68_);
lean_dec_ref(v___x_68_);
v___x_71_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_71_);
v___x_73_ = v___x_65_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___redArg___boxed(lean_object* v_x_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_Elab_Frontend_runCommandElabM___redArg(v_x_76_, v_a_77_, v_a_78_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM(lean_object* v_00_u03b1_81_, lean_object* v_x_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v___x_86_; lean_object* v_fileName_87_; lean_object* v_fileMap_88_; lean_object* v_commandState_89_; lean_object* v_cmdPos_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_86_ = lean_st_ref_get(v_a_84_);
v_fileName_87_ = lean_ctor_get(v_a_83_, 1);
v_fileMap_88_ = lean_ctor_get(v_a_83_, 2);
v_commandState_89_ = lean_ctor_get(v___x_86_, 0);
lean_inc_ref(v_commandState_89_);
v_cmdPos_90_ = lean_ctor_get(v___x_86_, 2);
lean_inc(v_cmdPos_90_);
lean_dec(v___x_86_);
v___x_91_ = lean_unsigned_to_nat(0u);
v___x_92_ = lean_box(0);
v___x_93_ = lean_box(0);
v___x_94_ = l_Lean_firstFrontendMacroScope;
v___x_95_ = lean_box(0);
v___x_96_ = 0;
lean_inc_ref(v_fileMap_88_);
lean_inc_ref(v_fileName_87_);
v___x_97_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_97_, 0, v_fileName_87_);
lean_ctor_set(v___x_97_, 1, v_fileMap_88_);
lean_ctor_set(v___x_97_, 2, v___x_91_);
lean_ctor_set(v___x_97_, 3, v_cmdPos_90_);
lean_ctor_set(v___x_97_, 4, v___x_92_);
lean_ctor_set(v___x_97_, 5, v___x_93_);
lean_ctor_set(v___x_97_, 6, v___x_94_);
lean_ctor_set(v___x_97_, 7, v___x_95_);
lean_ctor_set(v___x_97_, 8, v___x_93_);
lean_ctor_set(v___x_97_, 9, v___x_93_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*10, v___x_96_);
v___x_98_ = lean_st_mk_ref(v_commandState_89_);
lean_inc(v___x_98_);
v___x_99_ = lean_apply_3(v_x_82_, v___x_97_, v___x_98_, lean_box(0));
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_109_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
lean_dec_ref_known(v___x_99_, 1);
v___x_101_ = lean_st_ref_get(v___x_98_);
lean_dec(v___x_98_);
v___x_102_ = l_Lean_Elab_Frontend_setCommandState___redArg(v___x_101_, v_a_84_);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; 
v_unused_110_ = lean_ctor_get(v___x_102_, 0);
lean_dec(v_unused_110_);
v___x_104_ = v___x_102_;
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
else
{
lean_dec(v___x_102_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v_a_100_);
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_a_100_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_123_; 
lean_dec(v___x_98_);
v_a_111_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_123_ == 0)
{
v___x_113_ = v___x_99_;
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_99_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_115_ = l_Lean_Exception_toMessageData(v_a_111_);
v___x_116_ = l_Lean_MessageData_toString(v___x_115_);
v___x_117_ = ((lean_object*)(l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0));
v___x_118_ = lean_string_append(v___x_117_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_119_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_119_);
v___x_121_ = v___x_113_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_runCommandElabM___boxed(lean_object* v_00_u03b1_124_, lean_object* v_x_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_Elab_Frontend_runCommandElabM(v_00_u03b1_124_, v_x_125_, v_a_126_, v_a_127_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend(lean_object* v_stx_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v___x_134_; lean_object* v_fileName_135_; lean_object* v_fileMap_136_; lean_object* v_commandState_137_; lean_object* v_cmdPos_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_134_ = lean_st_ref_get(v_a_132_);
v_fileName_135_ = lean_ctor_get(v_a_131_, 1);
v_fileMap_136_ = lean_ctor_get(v_a_131_, 2);
v_commandState_137_ = lean_ctor_get(v___x_134_, 0);
lean_inc_ref(v_commandState_137_);
v_cmdPos_138_ = lean_ctor_get(v___x_134_, 2);
lean_inc(v_cmdPos_138_);
lean_dec(v___x_134_);
v___x_139_ = lean_unsigned_to_nat(0u);
v___x_140_ = lean_box(0);
v___x_141_ = lean_box(0);
v___x_142_ = l_Lean_firstFrontendMacroScope;
v___x_143_ = lean_box(0);
v___x_144_ = 0;
lean_inc_ref(v_fileMap_136_);
lean_inc_ref(v_fileName_135_);
v___x_145_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_145_, 0, v_fileName_135_);
lean_ctor_set(v___x_145_, 1, v_fileMap_136_);
lean_ctor_set(v___x_145_, 2, v___x_139_);
lean_ctor_set(v___x_145_, 3, v_cmdPos_138_);
lean_ctor_set(v___x_145_, 4, v___x_140_);
lean_ctor_set(v___x_145_, 5, v___x_141_);
lean_ctor_set(v___x_145_, 6, v___x_142_);
lean_ctor_set(v___x_145_, 7, v___x_143_);
lean_ctor_set(v___x_145_, 8, v___x_141_);
lean_ctor_set(v___x_145_, 9, v___x_141_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*10, v___x_144_);
v___x_146_ = lean_st_mk_ref(v_commandState_137_);
v___x_147_ = l_Lean_Elab_Command_elabCommandTopLevel(v_stx_130_, v___x_145_, v___x_146_);
lean_dec_ref_known(v___x_145_, 10);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_147_, 1);
v___x_149_ = lean_st_ref_get(v___x_146_);
lean_dec(v___x_146_);
v___x_150_ = l_Lean_Elab_Frontend_setCommandState___redArg(v___x_149_, v_a_132_);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; 
v_unused_158_ = lean_ctor_get(v___x_150_, 0);
lean_dec(v_unused_158_);
v___x_152_ = v___x_150_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_dec(v___x_150_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v_a_148_);
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_148_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_171_; 
lean_dec(v___x_146_);
v_a_159_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_171_ == 0)
{
v___x_161_ = v___x_147_;
v_isShared_162_ = v_isSharedCheck_171_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_147_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_171_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_169_; 
v___x_163_ = l_Lean_Exception_toMessageData(v_a_159_);
v___x_164_ = l_Lean_MessageData_toString(v___x_163_);
v___x_165_ = ((lean_object*)(l_Lean_Elab_Frontend_runCommandElabM___redArg___closed__0));
v___x_166_ = lean_string_append(v___x_165_, v___x_164_);
lean_dec_ref(v___x_164_);
v___x_167_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 0, v___x_167_);
v___x_169_ = v___x_161_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_167_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_elabCommandAtFrontend___boxed(lean_object* v_stx_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_Elab_Frontend_elabCommandAtFrontend(v_stx_172_, v_a_173_, v_a_174_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg(lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; lean_object* v_parserState_180_; lean_object* v_commandState_181_; lean_object* v_commands_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_193_; 
v___x_179_ = lean_st_ref_take(v_a_177_);
v_parserState_180_ = lean_ctor_get(v___x_179_, 1);
v_commandState_181_ = lean_ctor_get(v___x_179_, 0);
v_commands_182_ = lean_ctor_get(v___x_179_, 3);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_193_ == 0)
{
lean_object* v_unused_194_; 
v_unused_194_ = lean_ctor_get(v___x_179_, 2);
lean_dec(v_unused_194_);
v___x_184_ = v___x_179_;
v_isShared_185_ = v_isSharedCheck_193_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_commands_182_);
lean_inc(v_parserState_180_);
lean_inc(v_commandState_181_);
lean_dec(v___x_179_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_193_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_pos_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
v_pos_186_ = lean_ctor_get(v_parserState_180_, 0);
lean_inc(v_pos_186_);
v___x_187_ = lean_box(0);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 2, v_pos_186_);
v___x_189_ = v___x_184_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_commandState_181_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_parserState_180_);
lean_ctor_set(v_reuseFailAlloc_192_, 2, v_pos_186_);
lean_ctor_set(v_reuseFailAlloc_192_, 3, v_commands_182_);
v___x_189_ = v_reuseFailAlloc_192_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_st_ref_put(v_a_177_, v___x_189_);
v___x_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_187_);
return v___x_191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___redArg___boxed(lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Elab_Frontend_updateCmdPos___redArg(v_a_195_);
lean_dec(v_a_195_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos(lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Elab_Frontend_updateCmdPos___redArg(v_a_199_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_updateCmdPos___boxed(lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Frontend_updateCmdPos(v_a_202_, v_a_203_);
lean_dec(v_a_203_);
lean_dec_ref(v_a_202_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg(lean_object* v_a_206_){
_start:
{
lean_object* v___x_208_; lean_object* v_parserState_209_; lean_object* v___x_210_; 
v___x_208_ = lean_st_ref_get(v_a_206_);
v_parserState_209_ = lean_ctor_get(v___x_208_, 1);
lean_inc_ref(v_parserState_209_);
lean_dec(v___x_208_);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v_parserState_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___redArg___boxed(lean_object* v_a_211_, lean_object* v_a_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_Elab_Frontend_getParserState___redArg(v_a_211_);
lean_dec(v_a_211_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState(lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_Elab_Frontend_getParserState___redArg(v_a_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getParserState___boxed(lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_Elab_Frontend_getParserState(v_a_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg(lean_object* v_a_222_){
_start:
{
lean_object* v___x_224_; lean_object* v_commandState_225_; lean_object* v___x_226_; 
v___x_224_ = lean_st_ref_get(v_a_222_);
v_commandState_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc_ref(v_commandState_225_);
lean_dec(v___x_224_);
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v_commandState_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___redArg___boxed(lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Elab_Frontend_getCommandState___redArg(v_a_227_);
lean_dec(v_a_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState(lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lean_Elab_Frontend_getCommandState___redArg(v_a_231_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getCommandState___boxed(lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Elab_Frontend_getCommandState(v_a_234_, v_a_235_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg(lean_object* v_ps_238_, lean_object* v_a_239_){
_start:
{
lean_object* v___x_241_; lean_object* v_commandState_242_; lean_object* v_cmdPos_243_; lean_object* v_commands_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_254_; 
v___x_241_ = lean_st_ref_take(v_a_239_);
v_commandState_242_ = lean_ctor_get(v___x_241_, 0);
v_cmdPos_243_ = lean_ctor_get(v___x_241_, 2);
v_commands_244_ = lean_ctor_get(v___x_241_, 3);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_254_ == 0)
{
lean_object* v_unused_255_; 
v_unused_255_ = lean_ctor_get(v___x_241_, 1);
lean_dec(v_unused_255_);
v___x_246_ = v___x_241_;
v_isShared_247_ = v_isSharedCheck_254_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_commands_244_);
lean_inc(v_cmdPos_243_);
lean_inc(v_commandState_242_);
lean_dec(v___x_241_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_254_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_248_; lean_object* v___x_250_; 
v___x_248_ = lean_box(0);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 1, v_ps_238_);
v___x_250_ = v___x_246_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_commandState_242_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v_ps_238_);
lean_ctor_set(v_reuseFailAlloc_253_, 2, v_cmdPos_243_);
lean_ctor_set(v_reuseFailAlloc_253_, 3, v_commands_244_);
v___x_250_ = v_reuseFailAlloc_253_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_251_ = lean_st_ref_put(v_a_239_, v___x_250_);
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_248_);
return v___x_252_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___redArg___boxed(lean_object* v_ps_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lean_Elab_Frontend_setParserState___redArg(v_ps_256_, v_a_257_);
lean_dec(v_a_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState(lean_object* v_ps_260_, lean_object* v_a_261_, lean_object* v_a_262_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lean_Elab_Frontend_setParserState___redArg(v_ps_260_, v_a_262_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setParserState___boxed(lean_object* v_ps_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_Elab_Frontend_setParserState(v_ps_265_, v_a_266_, v_a_267_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg(lean_object* v_msgs_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___x_273_; lean_object* v_commandState_274_; lean_object* v_parserState_275_; lean_object* v_cmdPos_276_; lean_object* v_commands_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_307_; 
v___x_273_ = lean_st_ref_take(v_a_271_);
v_commandState_274_ = lean_ctor_get(v___x_273_, 0);
v_parserState_275_ = lean_ctor_get(v___x_273_, 1);
v_cmdPos_276_ = lean_ctor_get(v___x_273_, 2);
v_commands_277_ = lean_ctor_get(v___x_273_, 3);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_307_ == 0)
{
v___x_279_ = v___x_273_;
v_isShared_280_ = v_isSharedCheck_307_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_commands_277_);
lean_inc(v_cmdPos_276_);
lean_inc(v_parserState_275_);
lean_inc(v_commandState_274_);
lean_dec(v___x_273_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_307_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v_env_281_; lean_object* v_scopes_282_; lean_object* v_usedQuotCtxts_283_; lean_object* v_nextMacroScope_284_; lean_object* v_maxRecDepth_285_; lean_object* v_ngen_286_; lean_object* v_auxDeclNGen_287_; lean_object* v_infoState_288_; lean_object* v_traceState_289_; lean_object* v_snapshotTasks_290_; lean_object* v_prevLinterStates_291_; lean_object* v_codeQualityEntryTasks_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_305_; 
v_env_281_ = lean_ctor_get(v_commandState_274_, 0);
v_scopes_282_ = lean_ctor_get(v_commandState_274_, 2);
v_usedQuotCtxts_283_ = lean_ctor_get(v_commandState_274_, 3);
v_nextMacroScope_284_ = lean_ctor_get(v_commandState_274_, 4);
v_maxRecDepth_285_ = lean_ctor_get(v_commandState_274_, 5);
v_ngen_286_ = lean_ctor_get(v_commandState_274_, 6);
v_auxDeclNGen_287_ = lean_ctor_get(v_commandState_274_, 7);
v_infoState_288_ = lean_ctor_get(v_commandState_274_, 8);
v_traceState_289_ = lean_ctor_get(v_commandState_274_, 9);
v_snapshotTasks_290_ = lean_ctor_get(v_commandState_274_, 10);
v_prevLinterStates_291_ = lean_ctor_get(v_commandState_274_, 11);
v_codeQualityEntryTasks_292_ = lean_ctor_get(v_commandState_274_, 12);
v_isSharedCheck_305_ = !lean_is_exclusive(v_commandState_274_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v_commandState_274_, 1);
lean_dec(v_unused_306_);
v___x_294_ = v_commandState_274_;
v_isShared_295_ = v_isSharedCheck_305_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_codeQualityEntryTasks_292_);
lean_inc(v_prevLinterStates_291_);
lean_inc(v_snapshotTasks_290_);
lean_inc(v_traceState_289_);
lean_inc(v_infoState_288_);
lean_inc(v_auxDeclNGen_287_);
lean_inc(v_ngen_286_);
lean_inc(v_maxRecDepth_285_);
lean_inc(v_nextMacroScope_284_);
lean_inc(v_usedQuotCtxts_283_);
lean_inc(v_scopes_282_);
lean_inc(v_env_281_);
lean_dec(v_commandState_274_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_305_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = lean_box(0);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 1, v_msgs_270_);
v___x_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_env_281_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v_msgs_270_);
lean_ctor_set(v_reuseFailAlloc_304_, 2, v_scopes_282_);
lean_ctor_set(v_reuseFailAlloc_304_, 3, v_usedQuotCtxts_283_);
lean_ctor_set(v_reuseFailAlloc_304_, 4, v_nextMacroScope_284_);
lean_ctor_set(v_reuseFailAlloc_304_, 5, v_maxRecDepth_285_);
lean_ctor_set(v_reuseFailAlloc_304_, 6, v_ngen_286_);
lean_ctor_set(v_reuseFailAlloc_304_, 7, v_auxDeclNGen_287_);
lean_ctor_set(v_reuseFailAlloc_304_, 8, v_infoState_288_);
lean_ctor_set(v_reuseFailAlloc_304_, 9, v_traceState_289_);
lean_ctor_set(v_reuseFailAlloc_304_, 10, v_snapshotTasks_290_);
lean_ctor_set(v_reuseFailAlloc_304_, 11, v_prevLinterStates_291_);
lean_ctor_set(v_reuseFailAlloc_304_, 12, v_codeQualityEntryTasks_292_);
v___x_298_ = v_reuseFailAlloc_304_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_300_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_298_);
v___x_300_ = v___x_279_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_parserState_275_);
lean_ctor_set(v_reuseFailAlloc_303_, 2, v_cmdPos_276_);
lean_ctor_set(v_reuseFailAlloc_303_, 3, v_commands_277_);
v___x_300_ = v_reuseFailAlloc_303_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_st_ref_put(v_a_271_, v___x_300_);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_296_);
return v___x_302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___redArg___boxed(lean_object* v_msgs_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_Elab_Frontend_setMessages___redArg(v_msgs_308_, v_a_309_);
lean_dec(v_a_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages(lean_object* v_msgs_312_, lean_object* v_a_313_, lean_object* v_a_314_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_Elab_Frontend_setMessages___redArg(v_msgs_312_, v_a_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_setMessages___boxed(lean_object* v_msgs_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_Elab_Frontend_setMessages(v_msgs_317_, v_a_318_, v_a_319_);
lean_dec(v_a_319_);
lean_dec_ref(v_a_318_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg(lean_object* v_a_322_){
_start:
{
lean_object* v___x_324_; 
lean_inc_ref(v_a_322_);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v_a_322_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___redArg___boxed(lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Elab_Frontend_getInputContext___redArg(v_a_325_);
lean_dec_ref(v_a_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext(lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v___x_331_; 
lean_inc_ref(v_a_328_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v_a_328_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_getInputContext___boxed(lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Lean_Elab_Frontend_getInputContext(v_a_332_, v_a_333_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0(lean_object* v_a_336_, lean_object* v___x_337_, lean_object* v_a_338_, lean_object* v_messages_339_, lean_object* v_x_340_){
_start:
{
lean_object* v___x_341_; 
lean_inc_ref(v_a_336_);
v___x_341_ = l_Lean_Parser_parseCommand(v_a_336_, v___x_337_, v_a_338_, v_messages_339_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___lam__0___boxed(lean_object* v_a_342_, lean_object* v___x_343_, lean_object* v_a_344_, lean_object* v_messages_345_, lean_object* v_x_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_Elab_Frontend_processCommand___lam__0(v_a_342_, v___x_343_, v_a_344_, v_messages_345_, v_x_346_);
lean_dec_ref(v_a_342_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand(lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v_a_355_; lean_object* v___x_356_; lean_object* v_a_357_; lean_object* v_env_358_; lean_object* v_messages_359_; lean_object* v_scopes_360_; lean_object* v___x_361_; lean_object* v_opts_362_; lean_object* v_currNamespace_363_; lean_object* v_openDecls_364_; lean_object* v___x_365_; lean_object* v___f_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_snd_370_; lean_object* v_fst_371_; lean_object* v_fst_372_; lean_object* v_snd_373_; lean_object* v___x_374_; lean_object* v_commandState_375_; lean_object* v_parserState_376_; lean_object* v_cmdPos_377_; lean_object* v_commands_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_408_; 
v___x_352_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_353_ = l_Lean_Elab_Frontend_updateCmdPos___redArg(v_a_350_);
lean_dec_ref(v___x_353_);
v___x_354_ = l_Lean_Elab_Frontend_getCommandState___redArg(v_a_350_);
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref(v___x_354_);
v___x_356_ = l_Lean_Elab_Frontend_getParserState___redArg(v_a_350_);
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref(v___x_356_);
v_env_358_ = lean_ctor_get(v_a_355_, 0);
lean_inc_ref(v_env_358_);
v_messages_359_ = lean_ctor_get(v_a_355_, 1);
lean_inc_ref(v_messages_359_);
v_scopes_360_ = lean_ctor_get(v_a_355_, 2);
lean_inc(v_scopes_360_);
lean_dec(v_a_355_);
v___x_361_ = l_List_head_x21___redArg(v___x_352_, v_scopes_360_);
lean_dec(v_scopes_360_);
v_opts_362_ = lean_ctor_get(v___x_361_, 1);
lean_inc_ref_n(v_opts_362_, 2);
v_currNamespace_363_ = lean_ctor_get(v___x_361_, 2);
lean_inc(v_currNamespace_363_);
v_openDecls_364_ = lean_ctor_get(v___x_361_, 3);
lean_inc(v_openDecls_364_);
lean_dec(v___x_361_);
v___x_365_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_365_, 0, v_env_358_);
lean_ctor_set(v___x_365_, 1, v_opts_362_);
lean_ctor_set(v___x_365_, 2, v_currNamespace_363_);
lean_ctor_set(v___x_365_, 3, v_openDecls_364_);
lean_inc_ref(v_a_349_);
v___f_366_ = lean_alloc_closure((void*)(l_Lean_Elab_Frontend_processCommand___lam__0___boxed), 5, 4);
lean_closure_set(v___f_366_, 0, v_a_349_);
lean_closure_set(v___f_366_, 1, v___x_365_);
lean_closure_set(v___f_366_, 2, v_a_357_);
lean_closure_set(v___f_366_, 3, v_messages_359_);
v___x_367_ = ((lean_object*)(l_Lean_Elab_Frontend_processCommand___closed__0));
v___x_368_ = lean_box(0);
v___x_369_ = lean_profileit(v___x_367_, v_opts_362_, v___f_366_, v___x_368_);
lean_dec_ref(v_opts_362_);
v_snd_370_ = lean_ctor_get(v___x_369_, 1);
lean_inc(v_snd_370_);
v_fst_371_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_fst_371_);
lean_dec(v___x_369_);
v_fst_372_ = lean_ctor_get(v_snd_370_, 0);
lean_inc(v_fst_372_);
v_snd_373_ = lean_ctor_get(v_snd_370_, 1);
lean_inc(v_snd_373_);
lean_dec(v_snd_370_);
v___x_374_ = lean_st_ref_take(v_a_350_);
v_commandState_375_ = lean_ctor_get(v___x_374_, 0);
v_parserState_376_ = lean_ctor_get(v___x_374_, 1);
v_cmdPos_377_ = lean_ctor_get(v___x_374_, 2);
v_commands_378_ = lean_ctor_get(v___x_374_, 3);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_408_ == 0)
{
v___x_380_ = v___x_374_;
v_isShared_381_ = v_isSharedCheck_408_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_commands_378_);
lean_inc(v_cmdPos_377_);
lean_inc(v_parserState_376_);
lean_inc(v_commandState_375_);
lean_dec(v___x_374_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_408_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_384_; 
lean_inc(v_fst_371_);
v___x_382_ = lean_array_push(v_commands_378_, v_fst_371_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 3, v___x_382_);
v___x_384_ = v___x_380_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_commandState_375_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_parserState_376_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_cmdPos_377_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v___x_382_);
v___x_384_ = v_reuseFailAlloc_407_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_385_ = lean_st_ref_put(v_a_350_, v___x_384_);
v___x_386_ = l_Lean_Elab_Frontend_setParserState___redArg(v_fst_372_, v_a_350_);
lean_dec_ref(v___x_386_);
v___x_387_ = l_Lean_Elab_Frontend_setMessages___redArg(v_snd_373_, v_a_350_);
lean_dec_ref(v___x_387_);
lean_inc(v_fst_371_);
v___x_388_ = l_Lean_Elab_Frontend_elabCommandAtFrontend(v_fst_371_, v_a_349_, v_a_350_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_397_; 
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; 
v_unused_398_ = lean_ctor_get(v___x_388_, 0);
lean_dec(v_unused_398_);
v___x_390_ = v___x_388_;
v_isShared_391_ = v_isSharedCheck_397_;
goto v_resetjp_389_;
}
else
{
lean_dec(v___x_388_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_397_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_392_ = l_Lean_Parser_isTerminalCommand(v_fst_371_);
v___x_393_ = lean_box(v___x_392_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v___x_393_);
v___x_395_ = v___x_390_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_393_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v_fst_371_);
v_a_399_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_388_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_388_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommand___boxed(lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_Elab_Frontend_processCommand(v_a_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands(lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_Elab_Frontend_processCommand(v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_427_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_427_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_427_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_427_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
uint8_t v___x_421_; 
v___x_421_ = lean_unbox(v_a_417_);
lean_dec(v_a_417_);
if (v___x_421_ == 0)
{
lean_del_object(v___x_419_);
goto _start;
}
else
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lean_box(0);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 0, v___x_423_);
v___x_425_ = v___x_419_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
v_a_428_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_416_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_416_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Frontend_processCommands___boxed(lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Elab_Frontend_processCommands(v_a_436_, v_a_437_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_436_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__3(lean_object* v_a_440_){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_442_ = l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(v_a_440_, v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(lean_object* v_as_443_, size_t v_i_444_, size_t v_stop_445_, lean_object* v_b_446_){
_start:
{
lean_object* v___y_448_; uint8_t v___x_452_; 
v___x_452_ = lean_usize_dec_eq(v_i_444_, v_stop_445_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; 
v___x_453_ = lean_array_uget_borrowed(v_as_443_, v_i_444_);
if (lean_obj_tag(v___x_453_) == 0)
{
v___y_448_ = v_b_446_;
goto v___jp_447_;
}
else
{
lean_object* v_val_454_; lean_object* v___x_455_; 
v_val_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_val_454_);
v___x_455_ = lean_array_push(v_b_446_, v_val_454_);
v___y_448_ = v___x_455_;
goto v___jp_447_;
}
}
else
{
return v_b_446_;
}
v___jp_447_:
{
size_t v___x_449_; size_t v___x_450_; 
v___x_449_ = ((size_t)1ULL);
v___x_450_ = lean_usize_add(v_i_444_, v___x_449_);
v_i_444_ = v___x_450_;
v_b_446_ = v___y_448_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1___boxed(lean_object* v_as_456_, lean_object* v_i_457_, lean_object* v_stop_458_, lean_object* v_b_459_){
_start:
{
size_t v_i_boxed_460_; size_t v_stop_boxed_461_; lean_object* v_res_462_; 
v_i_boxed_460_ = lean_unbox_usize(v_i_457_);
lean_dec(v_i_457_);
v_stop_boxed_461_ = lean_unbox_usize(v_stop_458_);
lean_dec(v_stop_458_);
v_res_462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(v_as_456_, v_i_boxed_460_, v_stop_boxed_461_, v_b_459_);
lean_dec_ref(v_as_456_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(lean_object* v_as_465_, lean_object* v_start_466_, lean_object* v_stop_467_){
_start:
{
lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_468_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0));
v___x_469_ = lean_nat_dec_lt(v_start_466_, v_stop_467_);
if (v___x_469_ == 0)
{
return v___x_468_;
}
else
{
lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_470_ = lean_array_get_size(v_as_465_);
v___x_471_ = lean_nat_dec_le(v_stop_467_, v___x_470_);
if (v___x_471_ == 0)
{
uint8_t v___x_472_; 
v___x_472_ = lean_nat_dec_lt(v_start_466_, v___x_470_);
if (v___x_472_ == 0)
{
return v___x_468_;
}
else
{
size_t v___x_473_; size_t v___x_474_; lean_object* v___x_475_; 
v___x_473_ = lean_usize_of_nat(v_start_466_);
v___x_474_ = lean_usize_of_nat(v___x_470_);
v___x_475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(v_as_465_, v___x_473_, v___x_474_, v___x_468_);
return v___x_475_;
}
}
else
{
size_t v___x_476_; size_t v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_usize_of_nat(v_start_466_);
v___x_477_ = lean_usize_of_nat(v_stop_467_);
v___x_478_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1_spec__1(v_as_465_, v___x_476_, v___x_477_, v___x_468_);
return v___x_478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___boxed(lean_object* v_as_479_, lean_object* v_start_480_, lean_object* v_stop_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(v_as_479_, v_start_480_, v_stop_481_);
lean_dec(v_stop_481_);
lean_dec(v_start_480_);
lean_dec_ref(v_as_479_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(size_t v_sz_483_, size_t v_i_484_, lean_object* v_bs_485_){
_start:
{
uint8_t v___x_486_; 
v___x_486_ = lean_usize_dec_lt(v_i_484_, v_sz_483_);
if (v___x_486_ == 0)
{
return v_bs_485_;
}
else
{
lean_object* v_v_487_; lean_object* v_diagnostics_488_; lean_object* v_msgLog_489_; lean_object* v___x_490_; lean_object* v_bs_x27_491_; size_t v___x_492_; size_t v___x_493_; lean_object* v___x_494_; 
v_v_487_ = lean_array_uget_borrowed(v_bs_485_, v_i_484_);
v_diagnostics_488_ = lean_ctor_get(v_v_487_, 1);
v_msgLog_489_ = lean_ctor_get(v_diagnostics_488_, 0);
lean_inc_ref(v_msgLog_489_);
v___x_490_ = lean_unsigned_to_nat(0u);
v_bs_x27_491_ = lean_array_uset(v_bs_485_, v_i_484_, v___x_490_);
v___x_492_ = ((size_t)1ULL);
v___x_493_ = lean_usize_add(v_i_484_, v___x_492_);
v___x_494_ = lean_array_uset(v_bs_x27_491_, v_i_484_, v_msgLog_489_);
v_i_484_ = v___x_493_;
v_bs_485_ = v___x_494_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4___boxed(lean_object* v_sz_496_, lean_object* v_i_497_, lean_object* v_bs_498_){
_start:
{
size_t v_sz_boxed_499_; size_t v_i_boxed_500_; lean_object* v_res_501_; 
v_sz_boxed_499_ = lean_unbox_usize(v_sz_496_);
lean_dec(v_sz_496_);
v_i_boxed_500_ = lean_unbox_usize(v_i_497_);
lean_dec(v_i_497_);
v_res_501_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(v_sz_boxed_499_, v_i_boxed_500_, v_bs_498_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(size_t v_sz_502_, size_t v_i_503_, lean_object* v_bs_504_){
_start:
{
uint8_t v___x_505_; 
v___x_505_ = lean_usize_dec_lt(v_i_503_, v_sz_502_);
if (v___x_505_ == 0)
{
return v_bs_504_;
}
else
{
lean_object* v_v_506_; lean_object* v_elabSnap_507_; lean_object* v_infoTreeSnap_508_; lean_object* v___x_509_; lean_object* v_infoTree_x3f_510_; lean_object* v___x_511_; lean_object* v_bs_x27_512_; size_t v___x_513_; size_t v___x_514_; lean_object* v___x_515_; 
v_v_506_ = lean_array_uget_borrowed(v_bs_504_, v_i_503_);
v_elabSnap_507_ = lean_ctor_get(v_v_506_, 3);
v_infoTreeSnap_508_ = lean_ctor_get(v_elabSnap_507_, 3);
lean_inc_ref(v_infoTreeSnap_508_);
v___x_509_ = l_Lean_Language_SnapshotTask_get___redArg(v_infoTreeSnap_508_);
v_infoTree_x3f_510_ = lean_ctor_get(v___x_509_, 2);
lean_inc(v_infoTree_x3f_510_);
lean_dec(v___x_509_);
v___x_511_ = lean_unsigned_to_nat(0u);
v_bs_x27_512_ = lean_array_uset(v_bs_504_, v_i_503_, v___x_511_);
v___x_513_ = ((size_t)1ULL);
v___x_514_ = lean_usize_add(v_i_503_, v___x_513_);
v___x_515_ = lean_array_uset(v_bs_x27_512_, v_i_503_, v_infoTree_x3f_510_);
v_i_503_ = v___x_514_;
v_bs_504_ = v___x_515_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0___boxed(lean_object* v_sz_517_, lean_object* v_i_518_, lean_object* v_bs_519_){
_start:
{
size_t v_sz_boxed_520_; size_t v_i_boxed_521_; lean_object* v_res_522_; 
v_sz_boxed_520_ = lean_unbox_usize(v_sz_517_);
lean_dec(v_sz_517_);
v_i_boxed_521_ = lean_unbox_usize(v_i_518_);
lean_dec(v_i_518_);
v_res_522_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(v_sz_boxed_520_, v_i_boxed_521_, v_bs_519_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(size_t v_sz_523_, size_t v_i_524_, lean_object* v_bs_525_){
_start:
{
uint8_t v___x_526_; 
v___x_526_ = lean_usize_dec_lt(v_i_524_, v_sz_523_);
if (v___x_526_ == 0)
{
return v_bs_525_;
}
else
{
lean_object* v_v_527_; lean_object* v_stx_528_; lean_object* v___x_529_; lean_object* v_bs_x27_530_; size_t v___x_531_; size_t v___x_532_; lean_object* v___x_533_; 
v_v_527_ = lean_array_uget_borrowed(v_bs_525_, v_i_524_);
v_stx_528_ = lean_ctor_get(v_v_527_, 1);
lean_inc(v_stx_528_);
v___x_529_ = lean_unsigned_to_nat(0u);
v_bs_x27_530_ = lean_array_uset(v_bs_525_, v_i_524_, v___x_529_);
v___x_531_ = ((size_t)1ULL);
v___x_532_ = lean_usize_add(v_i_524_, v___x_531_);
v___x_533_ = lean_array_uset(v_bs_x27_530_, v_i_524_, v_stx_528_);
v_i_524_ = v___x_532_;
v_bs_525_ = v___x_533_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2___boxed(lean_object* v_sz_535_, lean_object* v_i_536_, lean_object* v_bs_537_){
_start:
{
size_t v_sz_boxed_538_; size_t v_i_boxed_539_; lean_object* v_res_540_; 
v_sz_boxed_538_ = lean_unbox_usize(v_sz_535_);
lean_dec(v_sz_535_);
v_i_boxed_539_ = lean_unbox_usize(v_i_536_);
lean_dec(v_i_536_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(v_sz_boxed_538_, v_i_boxed_539_, v_bs_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(lean_object* v_as_541_, size_t v_i_542_, size_t v_stop_543_, lean_object* v_b_544_){
_start:
{
uint8_t v___x_545_; 
v___x_545_ = lean_usize_dec_eq(v_i_542_, v_stop_543_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; lean_object* v___x_547_; size_t v___x_548_; size_t v___x_549_; 
v___x_546_ = lean_array_uget_borrowed(v_as_541_, v_i_542_);
lean_inc(v___x_546_);
v___x_547_ = l_Lean_MessageLog_append(v_b_544_, v___x_546_);
v___x_548_ = ((size_t)1ULL);
v___x_549_ = lean_usize_add(v_i_542_, v___x_548_);
v_i_542_ = v___x_549_;
v_b_544_ = v___x_547_;
goto _start;
}
else
{
return v_b_544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5___boxed(lean_object* v_as_551_, lean_object* v_i_552_, lean_object* v_stop_553_, lean_object* v_b_554_){
_start:
{
size_t v_i_boxed_555_; size_t v_stop_boxed_556_; lean_object* v_res_557_; 
v_i_boxed_555_ = lean_unbox_usize(v_i_552_);
lean_dec(v_i_552_);
v_stop_boxed_556_ = lean_unbox_usize(v_stop_553_);
lean_dec(v_stop_553_);
v_res_557_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(v_as_551_, v_i_boxed_555_, v_stop_boxed_556_, v_b_554_);
lean_dec_ref(v_as_551_);
return v_res_557_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_unsigned_to_nat(32u);
v___x_559_ = lean_mk_empty_array_with_capacity(v___x_558_);
v___x_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1(void){
_start:
{
size_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_561_ = ((size_t)5ULL);
v___x_562_ = lean_unsigned_to_nat(0u);
v___x_563_ = lean_unsigned_to_nat(32u);
v___x_564_ = lean_mk_empty_array_with_capacity(v___x_563_);
v___x_565_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__0);
v___x_566_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_564_);
lean_ctor_set(v___x_566_, 2, v___x_562_);
lean_ctor_set(v___x_566_, 3, v___x_562_);
lean_ctor_set_usize(v___x_566_, 4, v___x_561_);
return v___x_566_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = l_Lean_NameSet_empty;
v___x_568_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__1);
v___x_569_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
lean_ctor_set(v___x_569_, 2, v___x_567_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(lean_object* v_inputCtx_570_, lean_object* v_initialSnap_571_, lean_object* v_t_572_, lean_object* v_commands_573_){
_start:
{
lean_object* v_snap_575_; lean_object* v_parserState_576_; lean_object* v_elabSnap_577_; lean_object* v_nextCmdSnap_x3f_578_; lean_object* v_commands_579_; 
v_snap_575_ = lean_task_get_own(v_t_572_);
v_parserState_576_ = lean_ctor_get(v_snap_575_, 2);
lean_inc_ref(v_parserState_576_);
v_elabSnap_577_ = lean_ctor_get(v_snap_575_, 3);
lean_inc_ref(v_elabSnap_577_);
v_nextCmdSnap_x3f_578_ = lean_ctor_get(v_snap_575_, 4);
lean_inc(v_nextCmdSnap_x3f_578_);
v_commands_579_ = lean_array_push(v_commands_573_, v_snap_575_);
if (lean_obj_tag(v_nextCmdSnap_x3f_578_) == 1)
{
lean_object* v_val_580_; lean_object* v_task_581_; 
lean_dec_ref(v_elabSnap_577_);
lean_dec_ref(v_parserState_576_);
v_val_580_ = lean_ctor_get(v_nextCmdSnap_x3f_578_, 0);
lean_inc(v_val_580_);
lean_dec_ref_known(v_nextCmdSnap_x3f_578_, 1);
v_task_581_ = lean_ctor_get(v_val_580_, 3);
lean_inc_ref(v_task_581_);
lean_dec(v_val_580_);
v_t_572_ = v_task_581_;
v_commands_573_ = v_commands_579_;
goto _start;
}
else
{
lean_object* v___x_583_; lean_object* v___y_585_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; size_t v_sz_641_; size_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
lean_dec(v_nextCmdSnap_x3f_578_);
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_638_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2);
lean_inc_ref(v_initialSnap_571_);
v___x_639_ = l_Lean_Language_toSnapshotTree___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__3(v_initialSnap_571_);
v___x_640_ = l_Lean_Language_SnapshotTree_getAll(v___x_639_);
v_sz_641_ = lean_array_size(v___x_640_);
v___x_642_ = ((size_t)0ULL);
v___x_643_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__4(v_sz_641_, v___x_642_, v___x_640_);
v___x_644_ = lean_array_get_size(v___x_643_);
v___x_645_ = lean_nat_dec_lt(v___x_583_, v___x_644_);
if (v___x_645_ == 0)
{
lean_dec_ref(v___x_643_);
v___y_585_ = v___x_638_;
goto v___jp_584_;
}
else
{
size_t v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_usize_of_nat(v___x_644_);
v___x_647_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__5(v___x_643_, v___x_642_, v___x_646_, v___x_638_);
lean_dec_ref(v___x_643_);
v___y_585_ = v___x_647_;
goto v___jp_584_;
}
v___jp_584_:
{
size_t v_sz_586_; lean_object* v_resultSnap_587_; lean_object* v___x_588_; lean_object* v_cmdState_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_635_; 
v_sz_586_ = lean_array_size(v_commands_579_);
v_resultSnap_587_ = lean_ctor_get(v_elabSnap_577_, 2);
lean_inc_ref(v_resultSnap_587_);
lean_dec_ref(v_elabSnap_577_);
v___x_588_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_587_);
v_cmdState_589_ = lean_ctor_get(v___x_588_, 1);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; lean_object* v_unused_637_; 
v_unused_636_ = lean_ctor_get(v___x_588_, 2);
lean_dec(v_unused_636_);
v_unused_637_ = lean_ctor_get(v___x_588_, 0);
lean_dec(v_unused_637_);
v___x_591_ = v___x_588_;
v_isShared_592_ = v_isSharedCheck_635_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_cmdState_589_);
lean_dec(v___x_588_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_635_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v_infoState_593_; lean_object* v_env_594_; lean_object* v_scopes_595_; lean_object* v_usedQuotCtxts_596_; lean_object* v_nextMacroScope_597_; lean_object* v_maxRecDepth_598_; lean_object* v_ngen_599_; lean_object* v_auxDeclNGen_600_; lean_object* v_traceState_601_; lean_object* v_snapshotTasks_602_; lean_object* v_prevLinterStates_603_; lean_object* v_codeQualityEntryTasks_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_633_; 
v_infoState_593_ = lean_ctor_get(v_cmdState_589_, 8);
v_env_594_ = lean_ctor_get(v_cmdState_589_, 0);
v_scopes_595_ = lean_ctor_get(v_cmdState_589_, 2);
v_usedQuotCtxts_596_ = lean_ctor_get(v_cmdState_589_, 3);
v_nextMacroScope_597_ = lean_ctor_get(v_cmdState_589_, 4);
v_maxRecDepth_598_ = lean_ctor_get(v_cmdState_589_, 5);
v_ngen_599_ = lean_ctor_get(v_cmdState_589_, 6);
v_auxDeclNGen_600_ = lean_ctor_get(v_cmdState_589_, 7);
v_traceState_601_ = lean_ctor_get(v_cmdState_589_, 9);
v_snapshotTasks_602_ = lean_ctor_get(v_cmdState_589_, 10);
v_prevLinterStates_603_ = lean_ctor_get(v_cmdState_589_, 11);
v_codeQualityEntryTasks_604_ = lean_ctor_get(v_cmdState_589_, 12);
v_isSharedCheck_633_ = !lean_is_exclusive(v_cmdState_589_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; 
v_unused_634_ = lean_ctor_get(v_cmdState_589_, 1);
lean_dec(v_unused_634_);
v___x_606_ = v_cmdState_589_;
v_isShared_607_ = v_isSharedCheck_633_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_codeQualityEntryTasks_604_);
lean_inc(v_prevLinterStates_603_);
lean_inc(v_snapshotTasks_602_);
lean_inc(v_traceState_601_);
lean_inc(v_infoState_593_);
lean_inc(v_auxDeclNGen_600_);
lean_inc(v_ngen_599_);
lean_inc(v_maxRecDepth_598_);
lean_inc(v_nextMacroScope_597_);
lean_inc(v_usedQuotCtxts_596_);
lean_inc(v_scopes_595_);
lean_inc(v_env_594_);
lean_dec(v_cmdState_589_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_633_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
uint8_t v_enabled_608_; lean_object* v_assignment_609_; lean_object* v_lazyAssignment_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_631_; 
v_enabled_608_ = lean_ctor_get_uint8(v_infoState_593_, sizeof(void*)*3);
v_assignment_609_ = lean_ctor_get(v_infoState_593_, 0);
v_lazyAssignment_610_ = lean_ctor_get(v_infoState_593_, 1);
v_isSharedCheck_631_ = !lean_is_exclusive(v_infoState_593_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v_infoState_593_, 2);
lean_dec(v_unused_632_);
v___x_612_ = v_infoState_593_;
v_isShared_613_ = v_isSharedCheck_631_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_lazyAssignment_610_);
lean_inc(v_assignment_609_);
lean_dec(v_infoState_593_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_631_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v_pos_614_; size_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v_trees_619_; lean_object* v___x_621_; 
v_pos_614_ = lean_ctor_get(v_parserState_576_, 0);
lean_inc(v_pos_614_);
v___x_615_ = ((size_t)0ULL);
lean_inc_ref(v_commands_579_);
v___x_616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__0(v_sz_586_, v___x_615_, v_commands_579_);
v___x_617_ = lean_array_get_size(v___x_616_);
v___x_618_ = l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1(v___x_616_, v___x_583_, v___x_617_);
lean_dec_ref(v___x_616_);
v_trees_619_ = l_Lean_Array_toPArray_x27___redArg(v___x_618_);
lean_dec_ref(v___x_618_);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 2, v_trees_619_);
v___x_621_ = v___x_612_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_assignment_609_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_lazyAssignment_610_);
lean_ctor_set(v_reuseFailAlloc_630_, 2, v_trees_619_);
lean_ctor_set_uint8(v_reuseFailAlloc_630_, sizeof(void*)*3, v_enabled_608_);
v___x_621_ = v_reuseFailAlloc_630_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 8, v___x_621_);
lean_ctor_set(v___x_606_, 1, v___y_585_);
v___x_623_ = v___x_606_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_env_594_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v___y_585_);
lean_ctor_set(v_reuseFailAlloc_629_, 2, v_scopes_595_);
lean_ctor_set(v_reuseFailAlloc_629_, 3, v_usedQuotCtxts_596_);
lean_ctor_set(v_reuseFailAlloc_629_, 4, v_nextMacroScope_597_);
lean_ctor_set(v_reuseFailAlloc_629_, 5, v_maxRecDepth_598_);
lean_ctor_set(v_reuseFailAlloc_629_, 6, v_ngen_599_);
lean_ctor_set(v_reuseFailAlloc_629_, 7, v_auxDeclNGen_600_);
lean_ctor_set(v_reuseFailAlloc_629_, 8, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_629_, 9, v_traceState_601_);
lean_ctor_set(v_reuseFailAlloc_629_, 10, v_snapshotTasks_602_);
lean_ctor_set(v_reuseFailAlloc_629_, 11, v_prevLinterStates_603_);
lean_ctor_set(v_reuseFailAlloc_629_, 12, v_codeQualityEntryTasks_604_);
v___x_623_ = v_reuseFailAlloc_629_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_624_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__2(v_sz_586_, v___x_615_, v_commands_579_);
v___x_625_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set(v___x_625_, 1, v_parserState_576_);
lean_ctor_set(v___x_625_, 2, v_pos_614_);
lean_ctor_set(v___x_625_, 3, v___x_624_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 2, v_initialSnap_571_);
lean_ctor_set(v___x_591_, 1, v_inputCtx_570_);
lean_ctor_set(v___x_591_, 0, v___x_625_);
v___x_627_ = v___x_591_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_inputCtx_570_);
lean_ctor_set(v_reuseFailAlloc_628_, 2, v_initialSnap_571_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___boxed(lean_object* v_inputCtx_648_, lean_object* v_initialSnap_649_, lean_object* v_t_650_, lean_object* v_commands_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(v_inputCtx_648_, v_initialSnap_649_, v_t_650_, v_commands_651_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally(lean_object* v_inputCtx_656_, lean_object* v_parserState_657_, lean_object* v_commandState_658_, lean_object* v_old_x3f_659_){
_start:
{
lean_object* v___y_662_; 
if (lean_obj_tag(v_old_x3f_659_) == 0)
{
lean_object* v___x_667_; 
v___x_667_ = lean_box(0);
v___y_662_ = v___x_667_;
goto v___jp_661_;
}
else
{
lean_object* v_val_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_678_; 
v_val_668_ = lean_ctor_get(v_old_x3f_659_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v_old_x3f_659_);
if (v_isSharedCheck_678_ == 0)
{
v___x_670_ = v_old_x3f_659_;
v_isShared_671_ = v_isSharedCheck_678_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_val_668_);
lean_dec(v_old_x3f_659_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_678_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_inputCtx_672_; lean_object* v_initialSnap_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v_inputCtx_672_ = lean_ctor_get(v_val_668_, 1);
lean_inc_ref(v_inputCtx_672_);
v_initialSnap_673_ = lean_ctor_get(v_val_668_, 2);
lean_inc_ref(v_initialSnap_673_);
lean_dec(v_val_668_);
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v_inputCtx_672_);
lean_ctor_set(v___x_674_, 1, v_initialSnap_673_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 0, v___x_674_);
v___x_676_ = v___x_670_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v___y_662_ = v___x_676_;
goto v___jp_661_;
}
}
}
v___jp_661_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_663_ = l_Lean_Language_Lean_processCommands(v_inputCtx_656_, v_parserState_657_, v_commandState_658_, v___y_662_);
lean_inc_ref(v___x_663_);
v___x_664_ = lean_task_get_own(v___x_663_);
v___x_665_ = ((lean_object*)(l_Lean_Elab_IO_processCommandsIncrementally___closed__0));
v___x_666_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go(v_inputCtx_656_, v___x_664_, v___x_663_, v___x_665_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommandsIncrementally___boxed(lean_object* v_inputCtx_679_, lean_object* v_parserState_680_, lean_object* v_commandState_681_, lean_object* v_old_x3f_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Elab_IO_processCommandsIncrementally(v_inputCtx_679_, v_parserState_680_, v_commandState_681_, v_old_x3f_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands(lean_object* v_inputCtx_685_, lean_object* v_parserState_686_, lean_object* v_commandState_687_){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v_toState_691_; lean_object* v___x_692_; 
v___x_689_ = lean_box(0);
v___x_690_ = l_Lean_Elab_IO_processCommandsIncrementally(v_inputCtx_685_, v_parserState_686_, v_commandState_687_, v___x_689_);
v_toState_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc_ref(v_toState_691_);
lean_dec_ref(v___x_690_);
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v_toState_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_IO_processCommands___boxed(lean_object* v_inputCtx_693_, lean_object* v_parserState_694_, lean_object* v_commandState_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lean_Elab_IO_processCommands(v_inputCtx_693_, v_parserState_694_, v_commandState_695_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_process(lean_object* v_input_703_, lean_object* v_env_704_, lean_object* v_opts_705_, lean_object* v_fileName_706_){
_start:
{
lean_object* v___y_709_; 
if (lean_obj_tag(v_fileName_706_) == 0)
{
lean_object* v___x_729_; 
v___x_729_ = ((lean_object*)(l_Lean_Elab_process___closed__1));
v___y_709_ = v___x_729_;
goto v___jp_708_;
}
else
{
lean_object* v_val_730_; 
v_val_730_ = lean_ctor_get(v_fileName_706_, 0);
lean_inc(v_val_730_);
lean_dec_ref_known(v_fileName_706_, 1);
v___y_709_ = v_val_730_;
goto v___jp_708_;
}
v___jp_708_:
{
uint8_t v___x_710_; lean_object* v___x_711_; lean_object* v_inputCtx_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_728_; 
v___x_710_ = 1;
v___x_711_ = lean_string_utf8_byte_size(v_input_703_);
v_inputCtx_712_ = l_Lean_Parser_mkInputContext___redArg(v_input_703_, v___y_709_, v___x_710_, v___x_711_);
v___x_713_ = ((lean_object*)(l_Lean_Elab_process___closed__0));
v___x_714_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2, &l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go___closed__2);
v___x_715_ = l_Lean_Elab_Command_mkState(v_env_704_, v___x_714_, v_opts_705_);
v___x_716_ = l_Lean_Elab_IO_processCommands(v_inputCtx_712_, v___x_713_, v___x_715_);
v_a_717_ = lean_ctor_get(v___x_716_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_728_ == 0)
{
v___x_719_ = v___x_716_;
v_isShared_720_ = v_isSharedCheck_728_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_716_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_728_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_commandState_721_; lean_object* v_env_722_; lean_object* v_messages_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
v_commandState_721_ = lean_ctor_get(v_a_717_, 0);
lean_inc_ref(v_commandState_721_);
lean_dec(v_a_717_);
v_env_722_ = lean_ctor_get(v_commandState_721_, 0);
lean_inc_ref(v_env_722_);
v_messages_723_ = lean_ctor_get(v_commandState_721_, 1);
lean_inc_ref(v_messages_723_);
lean_dec_ref(v_commandState_721_);
v___x_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_724_, 0, v_env_722_);
lean_ctor_set(v___x_724_, 1, v_messages_723_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 0, v___x_724_);
v___x_726_ = v___x_719_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_process___boxed(lean_object* v_input_731_, lean_object* v_env_732_, lean_object* v_opts_733_, lean_object* v_fileName_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_Elab_process(v_input_731_, v_env_732_, v_opts_733_, v_fileName_734_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(lean_object* v_cmdStx_x3f_737_, lean_object* v_as_738_, size_t v_i_739_, size_t v_stop_740_, lean_object* v_b_741_){
_start:
{
lean_object* v___y_743_; uint8_t v___x_747_; 
v___x_747_ = lean_usize_dec_eq(v_i_739_, v_stop_740_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; lean_object* v_stx_x3f_749_; lean_object* v___x_750_; 
v___x_748_ = lean_array_uget_borrowed(v_as_738_, v_i_739_);
v_stx_x3f_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v___x_748_);
v___x_750_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_748_);
if (lean_obj_tag(v_stx_x3f_749_) == 0)
{
lean_object* v___x_751_; 
lean_inc(v_cmdStx_x3f_737_);
v___x_751_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(v___x_750_, v_cmdStx_x3f_737_, v_b_741_);
v___y_743_ = v___x_751_;
goto v___jp_742_;
}
else
{
lean_object* v___x_752_; 
lean_inc_ref(v_stx_x3f_749_);
v___x_752_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(v___x_750_, v_stx_x3f_749_, v_b_741_);
v___y_743_ = v___x_752_;
goto v___jp_742_;
}
}
else
{
lean_dec(v_cmdStx_x3f_737_);
return v_b_741_;
}
v___jp_742_:
{
size_t v___x_744_; size_t v___x_745_; 
v___x_744_ = ((size_t)1ULL);
v___x_745_ = lean_usize_add(v_i_739_, v___x_744_);
v_i_739_ = v___x_745_;
v_b_741_ = v___y_743_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(lean_object* v_t_753_, lean_object* v_cmdStx_x3f_754_, lean_object* v_acc_755_){
_start:
{
lean_object* v_element_756_; lean_object* v_diagnostics_757_; lean_object* v_children_758_; lean_object* v_msgLog_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_773_; 
v_element_756_ = lean_ctor_get(v_t_753_, 0);
v_diagnostics_757_ = lean_ctor_get(v_element_756_, 1);
lean_inc_ref(v_diagnostics_757_);
v_children_758_ = lean_ctor_get(v_t_753_, 1);
lean_inc_ref(v_children_758_);
lean_dec_ref(v_t_753_);
v_msgLog_759_ = lean_ctor_get(v_diagnostics_757_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v_diagnostics_757_);
if (v_isSharedCheck_773_ == 0)
{
lean_object* v_unused_774_; 
v_unused_774_ = lean_ctor_get(v_diagnostics_757_, 1);
lean_dec(v_unused_774_);
v___x_761_ = v_diagnostics_757_;
v_isShared_762_ = v_isSharedCheck_773_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_msgLog_759_);
lean_dec(v_diagnostics_757_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_773_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
lean_inc(v_cmdStx_x3f_754_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 1, v_msgLog_759_);
lean_ctor_set(v___x_761_, 0, v_cmdStx_x3f_754_);
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_cmdStx_x3f_754_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_msgLog_759_);
v___x_764_ = v_reuseFailAlloc_772_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v_acc_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; 
v_acc_765_ = lean_array_push(v_acc_755_, v___x_764_);
v___x_766_ = lean_unsigned_to_nat(0u);
v___x_767_ = lean_array_get_size(v_children_758_);
v___x_768_ = lean_nat_dec_lt(v___x_766_, v___x_767_);
if (v___x_768_ == 0)
{
lean_dec_ref(v_children_758_);
lean_dec(v_cmdStx_x3f_754_);
return v_acc_765_;
}
else
{
size_t v___x_769_; size_t v___x_770_; lean_object* v___x_771_; 
v___x_769_ = ((size_t)0ULL);
v___x_770_ = lean_usize_of_nat(v___x_767_);
v___x_771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(v_cmdStx_x3f_754_, v_children_758_, v___x_769_, v___x_770_, v_acc_765_);
lean_dec_ref(v_children_758_);
return v___x_771_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0___boxed(lean_object* v_cmdStx_x3f_775_, lean_object* v_as_776_, lean_object* v_i_777_, lean_object* v_stop_778_, lean_object* v_b_779_){
_start:
{
size_t v_i_boxed_780_; size_t v_stop_boxed_781_; lean_object* v_res_782_; 
v_i_boxed_780_ = lean_unbox_usize(v_i_777_);
lean_dec(v_i_777_);
v_stop_boxed_781_ = lean_unbox_usize(v_stop_778_);
lean_dec(v_stop_778_);
v_res_782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints_spec__0(v_cmdStx_x3f_775_, v_as_776_, v_i_boxed_780_, v_stop_boxed_781_, v_b_779_);
lean_dec_ref(v_as_776_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__3(lean_object* v_filePath_783_, lean_object* v_a_784_){
_start:
{
lean_object* v_lean_x3f_785_; lean_object* v_olean_x3f_786_; lean_object* v_oleanServer_x3f_787_; lean_object* v_ilean_x3f_788_; lean_object* v_irSig_x3f_789_; lean_object* v_ir_x3f_790_; lean_object* v_c_x3f_791_; lean_object* v_bc_x3f_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_800_; 
v_lean_x3f_785_ = lean_ctor_get(v_a_784_, 0);
v_olean_x3f_786_ = lean_ctor_get(v_a_784_, 1);
v_oleanServer_x3f_787_ = lean_ctor_get(v_a_784_, 2);
v_ilean_x3f_788_ = lean_ctor_get(v_a_784_, 4);
v_irSig_x3f_789_ = lean_ctor_get(v_a_784_, 5);
v_ir_x3f_790_ = lean_ctor_get(v_a_784_, 6);
v_c_x3f_791_ = lean_ctor_get(v_a_784_, 7);
v_bc_x3f_792_ = lean_ctor_get(v_a_784_, 8);
v_isSharedCheck_800_ = !lean_is_exclusive(v_a_784_);
if (v_isSharedCheck_800_ == 0)
{
lean_object* v_unused_801_; 
v_unused_801_ = lean_ctor_get(v_a_784_, 3);
lean_dec(v_unused_801_);
v___x_794_ = v_a_784_;
v_isShared_795_ = v_isSharedCheck_800_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_bc_x3f_792_);
lean_inc(v_c_x3f_791_);
lean_inc(v_ir_x3f_790_);
lean_inc(v_irSig_x3f_789_);
lean_inc(v_ilean_x3f_788_);
lean_inc(v_oleanServer_x3f_787_);
lean_inc(v_olean_x3f_786_);
lean_inc(v_lean_x3f_785_);
lean_dec(v_a_784_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_800_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_796_, 0, v_filePath_783_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 3, v___x_796_);
v___x_798_ = v___x_794_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_lean_x3f_785_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_olean_x3f_786_);
lean_ctor_set(v_reuseFailAlloc_799_, 2, v_oleanServer_x3f_787_);
lean_ctor_set(v_reuseFailAlloc_799_, 3, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_799_, 4, v_ilean_x3f_788_);
lean_ctor_set(v_reuseFailAlloc_799_, 5, v_irSig_x3f_789_);
lean_ctor_set(v_reuseFailAlloc_799_, 6, v_ir_x3f_790_);
lean_ctor_set(v_reuseFailAlloc_799_, 7, v_c_x3f_791_);
lean_ctor_set(v_reuseFailAlloc_799_, 8, v_bc_x3f_792_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__1(lean_object* v_filePath_802_, lean_object* v_a_803_){
_start:
{
lean_object* v_lean_x3f_804_; lean_object* v_olean_x3f_805_; lean_object* v_oleanServer_x3f_806_; lean_object* v_oleanPrivate_x3f_807_; lean_object* v_ilean_x3f_808_; lean_object* v_ir_x3f_809_; lean_object* v_c_x3f_810_; lean_object* v_bc_x3f_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_819_; 
v_lean_x3f_804_ = lean_ctor_get(v_a_803_, 0);
v_olean_x3f_805_ = lean_ctor_get(v_a_803_, 1);
v_oleanServer_x3f_806_ = lean_ctor_get(v_a_803_, 2);
v_oleanPrivate_x3f_807_ = lean_ctor_get(v_a_803_, 3);
v_ilean_x3f_808_ = lean_ctor_get(v_a_803_, 4);
v_ir_x3f_809_ = lean_ctor_get(v_a_803_, 6);
v_c_x3f_810_ = lean_ctor_get(v_a_803_, 7);
v_bc_x3f_811_ = lean_ctor_get(v_a_803_, 8);
v_isSharedCheck_819_ = !lean_is_exclusive(v_a_803_);
if (v_isSharedCheck_819_ == 0)
{
lean_object* v_unused_820_; 
v_unused_820_ = lean_ctor_get(v_a_803_, 5);
lean_dec(v_unused_820_);
v___x_813_ = v_a_803_;
v_isShared_814_ = v_isSharedCheck_819_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_bc_x3f_811_);
lean_inc(v_c_x3f_810_);
lean_inc(v_ir_x3f_809_);
lean_inc(v_ilean_x3f_808_);
lean_inc(v_oleanPrivate_x3f_807_);
lean_inc(v_oleanServer_x3f_806_);
lean_inc(v_olean_x3f_805_);
lean_inc(v_lean_x3f_804_);
lean_dec(v_a_803_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_819_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_815_; lean_object* v___x_817_; 
v___x_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_815_, 0, v_filePath_802_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 5, v___x_815_);
v___x_817_ = v___x_813_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_lean_x3f_804_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v_olean_x3f_805_);
lean_ctor_set(v_reuseFailAlloc_818_, 2, v_oleanServer_x3f_806_);
lean_ctor_set(v_reuseFailAlloc_818_, 3, v_oleanPrivate_x3f_807_);
lean_ctor_set(v_reuseFailAlloc_818_, 4, v_ilean_x3f_808_);
lean_ctor_set(v_reuseFailAlloc_818_, 5, v___x_815_);
lean_ctor_set(v_reuseFailAlloc_818_, 6, v_ir_x3f_809_);
lean_ctor_set(v_reuseFailAlloc_818_, 7, v_c_x3f_810_);
lean_ctor_set(v_reuseFailAlloc_818_, 8, v_bc_x3f_811_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__4(lean_object* v_filePath_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_lean_x3f_823_; lean_object* v_olean_x3f_824_; lean_object* v_oleanPrivate_x3f_825_; lean_object* v_ilean_x3f_826_; lean_object* v_irSig_x3f_827_; lean_object* v_ir_x3f_828_; lean_object* v_c_x3f_829_; lean_object* v_bc_x3f_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_838_; 
v_lean_x3f_823_ = lean_ctor_get(v_a_822_, 0);
v_olean_x3f_824_ = lean_ctor_get(v_a_822_, 1);
v_oleanPrivate_x3f_825_ = lean_ctor_get(v_a_822_, 3);
v_ilean_x3f_826_ = lean_ctor_get(v_a_822_, 4);
v_irSig_x3f_827_ = lean_ctor_get(v_a_822_, 5);
v_ir_x3f_828_ = lean_ctor_get(v_a_822_, 6);
v_c_x3f_829_ = lean_ctor_get(v_a_822_, 7);
v_bc_x3f_830_ = lean_ctor_get(v_a_822_, 8);
v_isSharedCheck_838_ = !lean_is_exclusive(v_a_822_);
if (v_isSharedCheck_838_ == 0)
{
lean_object* v_unused_839_; 
v_unused_839_ = lean_ctor_get(v_a_822_, 2);
lean_dec(v_unused_839_);
v___x_832_ = v_a_822_;
v_isShared_833_ = v_isSharedCheck_838_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_bc_x3f_830_);
lean_inc(v_c_x3f_829_);
lean_inc(v_ir_x3f_828_);
lean_inc(v_irSig_x3f_827_);
lean_inc(v_ilean_x3f_826_);
lean_inc(v_oleanPrivate_x3f_825_);
lean_inc(v_olean_x3f_824_);
lean_inc(v_lean_x3f_823_);
lean_dec(v_a_822_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_838_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_834_, 0, v_filePath_821_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 2, v___x_834_);
v___x_836_ = v___x_832_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_lean_x3f_823_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v_olean_x3f_824_);
lean_ctor_set(v_reuseFailAlloc_837_, 2, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_837_, 3, v_oleanPrivate_x3f_825_);
lean_ctor_set(v_reuseFailAlloc_837_, 4, v_ilean_x3f_826_);
lean_ctor_set(v_reuseFailAlloc_837_, 5, v_irSig_x3f_827_);
lean_ctor_set(v_reuseFailAlloc_837_, 6, v_ir_x3f_828_);
lean_ctor_set(v_reuseFailAlloc_837_, 7, v_c_x3f_829_);
lean_ctor_set(v_reuseFailAlloc_837_, 8, v_bc_x3f_830_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(lean_object* v_a_840_, lean_object* v_x_841_){
_start:
{
if (lean_obj_tag(v_x_841_) == 0)
{
uint8_t v___x_842_; 
v___x_842_ = 0;
return v___x_842_;
}
else
{
lean_object* v_key_843_; lean_object* v_tail_844_; uint8_t v___x_845_; 
v_key_843_ = lean_ctor_get(v_x_841_, 0);
v_tail_844_ = lean_ctor_get(v_x_841_, 2);
v___x_845_ = lean_string_dec_eq(v_key_843_, v_a_840_);
if (v___x_845_ == 0)
{
v_x_841_ = v_tail_844_;
goto _start;
}
else
{
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg___boxed(lean_object* v_a_847_, lean_object* v_x_848_){
_start:
{
uint8_t v_res_849_; lean_object* v_r_850_; 
v_res_849_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_847_, v_x_848_);
lean_dec(v_x_848_);
lean_dec_ref(v_a_847_);
v_r_850_ = lean_box(v_res_849_);
return v_r_850_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(lean_object* v_m_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_buckets_853_; lean_object* v___x_854_; uint64_t v___x_855_; uint64_t v___x_856_; uint64_t v___x_857_; uint64_t v_fold_858_; uint64_t v___x_859_; uint64_t v___x_860_; uint64_t v___x_861_; size_t v___x_862_; size_t v___x_863_; size_t v___x_864_; size_t v___x_865_; size_t v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
v_buckets_853_ = lean_ctor_get(v_m_851_, 1);
v___x_854_ = lean_array_get_size(v_buckets_853_);
v___x_855_ = lean_string_hash(v_a_852_);
v___x_856_ = 32ULL;
v___x_857_ = lean_uint64_shift_right(v___x_855_, v___x_856_);
v_fold_858_ = lean_uint64_xor(v___x_855_, v___x_857_);
v___x_859_ = 16ULL;
v___x_860_ = lean_uint64_shift_right(v_fold_858_, v___x_859_);
v___x_861_ = lean_uint64_xor(v_fold_858_, v___x_860_);
v___x_862_ = lean_uint64_to_usize(v___x_861_);
v___x_863_ = lean_usize_of_nat(v___x_854_);
v___x_864_ = ((size_t)1ULL);
v___x_865_ = lean_usize_sub(v___x_863_, v___x_864_);
v___x_866_ = lean_usize_land(v___x_862_, v___x_865_);
v___x_867_ = lean_array_uget_borrowed(v_buckets_853_, v___x_866_);
v___x_868_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_852_, v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg___boxed(lean_object* v_m_869_, lean_object* v_a_870_){
_start:
{
uint8_t v_res_871_; lean_object* v_r_872_; 
v_res_871_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(v_m_869_, v_a_870_);
lean_dec_ref(v_a_870_);
lean_dec_ref(v_m_869_);
v_r_872_ = lean_box(v_res_871_);
return v_r_872_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(lean_object* v_a_873_, lean_object* v_fallback_874_, lean_object* v_x_875_){
_start:
{
if (lean_obj_tag(v_x_875_) == 0)
{
lean_inc(v_fallback_874_);
return v_fallback_874_;
}
else
{
lean_object* v_key_876_; lean_object* v_value_877_; lean_object* v_tail_878_; uint8_t v___x_879_; 
v_key_876_ = lean_ctor_get(v_x_875_, 0);
v_value_877_ = lean_ctor_get(v_x_875_, 1);
v_tail_878_ = lean_ctor_get(v_x_875_, 2);
v___x_879_ = lean_string_dec_eq(v_key_876_, v_a_873_);
if (v___x_879_ == 0)
{
v_x_875_ = v_tail_878_;
goto _start;
}
else
{
lean_inc(v_value_877_);
return v_value_877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg___boxed(lean_object* v_a_881_, lean_object* v_fallback_882_, lean_object* v_x_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(v_a_881_, v_fallback_882_, v_x_883_);
lean_dec(v_x_883_);
lean_dec(v_fallback_882_);
lean_dec_ref(v_a_881_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(lean_object* v_m_885_, lean_object* v_a_886_, lean_object* v_fallback_887_){
_start:
{
lean_object* v_buckets_888_; lean_object* v___x_889_; uint64_t v___x_890_; uint64_t v___x_891_; uint64_t v___x_892_; uint64_t v_fold_893_; uint64_t v___x_894_; uint64_t v___x_895_; uint64_t v___x_896_; size_t v___x_897_; size_t v___x_898_; size_t v___x_899_; size_t v___x_900_; size_t v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_buckets_888_ = lean_ctor_get(v_m_885_, 1);
v___x_889_ = lean_array_get_size(v_buckets_888_);
v___x_890_ = lean_string_hash(v_a_886_);
v___x_891_ = 32ULL;
v___x_892_ = lean_uint64_shift_right(v___x_890_, v___x_891_);
v_fold_893_ = lean_uint64_xor(v___x_890_, v___x_892_);
v___x_894_ = 16ULL;
v___x_895_ = lean_uint64_shift_right(v_fold_893_, v___x_894_);
v___x_896_ = lean_uint64_xor(v_fold_893_, v___x_895_);
v___x_897_ = lean_uint64_to_usize(v___x_896_);
v___x_898_ = lean_usize_of_nat(v___x_889_);
v___x_899_ = ((size_t)1ULL);
v___x_900_ = lean_usize_sub(v___x_898_, v___x_899_);
v___x_901_ = lean_usize_land(v___x_897_, v___x_900_);
v___x_902_ = lean_array_uget_borrowed(v_buckets_888_, v___x_901_);
v___x_903_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(v_a_886_, v_fallback_887_, v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg___boxed(lean_object* v_m_904_, lean_object* v_a_905_, lean_object* v_fallback_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(v_m_904_, v_a_905_, v_fallback_906_);
lean_dec(v_fallback_906_);
lean_dec_ref(v_a_905_);
lean_dec_ref(v_m_904_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__2(lean_object* v_filePath_908_, lean_object* v_a_909_){
_start:
{
lean_object* v_lean_x3f_910_; lean_object* v_olean_x3f_911_; lean_object* v_oleanServer_x3f_912_; lean_object* v_oleanPrivate_x3f_913_; lean_object* v_ilean_x3f_914_; lean_object* v_irSig_x3f_915_; lean_object* v_c_x3f_916_; lean_object* v_bc_x3f_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_925_; 
v_lean_x3f_910_ = lean_ctor_get(v_a_909_, 0);
v_olean_x3f_911_ = lean_ctor_get(v_a_909_, 1);
v_oleanServer_x3f_912_ = lean_ctor_get(v_a_909_, 2);
v_oleanPrivate_x3f_913_ = lean_ctor_get(v_a_909_, 3);
v_ilean_x3f_914_ = lean_ctor_get(v_a_909_, 4);
v_irSig_x3f_915_ = lean_ctor_get(v_a_909_, 5);
v_c_x3f_916_ = lean_ctor_get(v_a_909_, 7);
v_bc_x3f_917_ = lean_ctor_get(v_a_909_, 8);
v_isSharedCheck_925_ = !lean_is_exclusive(v_a_909_);
if (v_isSharedCheck_925_ == 0)
{
lean_object* v_unused_926_; 
v_unused_926_ = lean_ctor_get(v_a_909_, 6);
lean_dec(v_unused_926_);
v___x_919_ = v_a_909_;
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_bc_x3f_917_);
lean_inc(v_c_x3f_916_);
lean_inc(v_irSig_x3f_915_);
lean_inc(v_ilean_x3f_914_);
lean_inc(v_oleanPrivate_x3f_913_);
lean_inc(v_oleanServer_x3f_912_);
lean_inc(v_olean_x3f_911_);
lean_inc(v_lean_x3f_910_);
lean_dec(v_a_909_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_921_, 0, v_filePath_908_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 6, v___x_921_);
v___x_923_ = v___x_919_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_lean_x3f_910_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_olean_x3f_911_);
lean_ctor_set(v_reuseFailAlloc_924_, 2, v_oleanServer_x3f_912_);
lean_ctor_set(v_reuseFailAlloc_924_, 3, v_oleanPrivate_x3f_913_);
lean_ctor_set(v_reuseFailAlloc_924_, 4, v_ilean_x3f_914_);
lean_ctor_set(v_reuseFailAlloc_924_, 5, v_irSig_x3f_915_);
lean_ctor_set(v_reuseFailAlloc_924_, 6, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_924_, 7, v_c_x3f_916_);
lean_ctor_set(v_reuseFailAlloc_924_, 8, v_bc_x3f_917_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__0(lean_object* v_filePath_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_lean_x3f_929_; lean_object* v_oleanServer_x3f_930_; lean_object* v_oleanPrivate_x3f_931_; lean_object* v_ilean_x3f_932_; lean_object* v_irSig_x3f_933_; lean_object* v_ir_x3f_934_; lean_object* v_c_x3f_935_; lean_object* v_bc_x3f_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_944_; 
v_lean_x3f_929_ = lean_ctor_get(v_a_928_, 0);
v_oleanServer_x3f_930_ = lean_ctor_get(v_a_928_, 2);
v_oleanPrivate_x3f_931_ = lean_ctor_get(v_a_928_, 3);
v_ilean_x3f_932_ = lean_ctor_get(v_a_928_, 4);
v_irSig_x3f_933_ = lean_ctor_get(v_a_928_, 5);
v_ir_x3f_934_ = lean_ctor_get(v_a_928_, 6);
v_c_x3f_935_ = lean_ctor_get(v_a_928_, 7);
v_bc_x3f_936_ = lean_ctor_get(v_a_928_, 8);
v_isSharedCheck_944_ = !lean_is_exclusive(v_a_928_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; 
v_unused_945_ = lean_ctor_get(v_a_928_, 1);
lean_dec(v_unused_945_);
v___x_938_ = v_a_928_;
v_isShared_939_ = v_isSharedCheck_944_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_bc_x3f_936_);
lean_inc(v_c_x3f_935_);
lean_inc(v_ir_x3f_934_);
lean_inc(v_irSig_x3f_933_);
lean_inc(v_ilean_x3f_932_);
lean_inc(v_oleanPrivate_x3f_931_);
lean_inc(v_oleanServer_x3f_930_);
lean_inc(v_lean_x3f_929_);
lean_dec(v_a_928_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_944_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_940_, 0, v_filePath_927_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 1, v___x_940_);
v___x_942_ = v___x_938_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_lean_x3f_929_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v___x_940_);
lean_ctor_set(v_reuseFailAlloc_943_, 2, v_oleanServer_x3f_930_);
lean_ctor_set(v_reuseFailAlloc_943_, 3, v_oleanPrivate_x3f_931_);
lean_ctor_set(v_reuseFailAlloc_943_, 4, v_ilean_x3f_932_);
lean_ctor_set(v_reuseFailAlloc_943_, 5, v_irSig_x3f_933_);
lean_ctor_set(v_reuseFailAlloc_943_, 6, v_ir_x3f_934_);
lean_ctor_set(v_reuseFailAlloc_943_, 7, v_c_x3f_935_);
lean_ctor_set(v_reuseFailAlloc_943_, 8, v_bc_x3f_936_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(lean_object* v_a_946_, lean_object* v_b_947_, lean_object* v_x_948_){
_start:
{
if (lean_obj_tag(v_x_948_) == 0)
{
lean_dec(v_b_947_);
lean_dec_ref(v_a_946_);
return v_x_948_;
}
else
{
lean_object* v_key_949_; lean_object* v_value_950_; lean_object* v_tail_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_963_; 
v_key_949_ = lean_ctor_get(v_x_948_, 0);
v_value_950_ = lean_ctor_get(v_x_948_, 1);
v_tail_951_ = lean_ctor_get(v_x_948_, 2);
v_isSharedCheck_963_ = !lean_is_exclusive(v_x_948_);
if (v_isSharedCheck_963_ == 0)
{
v___x_953_ = v_x_948_;
v_isShared_954_ = v_isSharedCheck_963_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_tail_951_);
lean_inc(v_value_950_);
lean_inc(v_key_949_);
lean_dec(v_x_948_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_963_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
uint8_t v___x_955_; 
v___x_955_ = lean_string_dec_eq(v_key_949_, v_a_946_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(v_a_946_, v_b_947_, v_tail_951_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 2, v___x_956_);
v___x_958_ = v___x_953_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_key_949_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_value_950_);
lean_ctor_set(v_reuseFailAlloc_959_, 2, v___x_956_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
else
{
lean_object* v___x_961_; 
lean_dec(v_value_950_);
lean_dec(v_key_949_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 1, v_b_947_);
lean_ctor_set(v___x_953_, 0, v_a_946_);
v___x_961_ = v___x_953_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_946_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_b_947_);
lean_ctor_set(v_reuseFailAlloc_962_, 2, v_tail_951_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(lean_object* v_x_964_, lean_object* v_x_965_){
_start:
{
if (lean_obj_tag(v_x_965_) == 0)
{
return v_x_964_;
}
else
{
lean_object* v_key_966_; lean_object* v_value_967_; lean_object* v_tail_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_991_; 
v_key_966_ = lean_ctor_get(v_x_965_, 0);
v_value_967_ = lean_ctor_get(v_x_965_, 1);
v_tail_968_ = lean_ctor_get(v_x_965_, 2);
v_isSharedCheck_991_ = !lean_is_exclusive(v_x_965_);
if (v_isSharedCheck_991_ == 0)
{
v___x_970_ = v_x_965_;
v_isShared_971_ = v_isSharedCheck_991_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_tail_968_);
lean_inc(v_value_967_);
lean_inc(v_key_966_);
lean_dec(v_x_965_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_991_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; uint64_t v___x_973_; uint64_t v___x_974_; uint64_t v___x_975_; uint64_t v_fold_976_; uint64_t v___x_977_; uint64_t v___x_978_; uint64_t v___x_979_; size_t v___x_980_; size_t v___x_981_; size_t v___x_982_; size_t v___x_983_; size_t v___x_984_; lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_972_ = lean_array_get_size(v_x_964_);
v___x_973_ = lean_string_hash(v_key_966_);
v___x_974_ = 32ULL;
v___x_975_ = lean_uint64_shift_right(v___x_973_, v___x_974_);
v_fold_976_ = lean_uint64_xor(v___x_973_, v___x_975_);
v___x_977_ = 16ULL;
v___x_978_ = lean_uint64_shift_right(v_fold_976_, v___x_977_);
v___x_979_ = lean_uint64_xor(v_fold_976_, v___x_978_);
v___x_980_ = lean_uint64_to_usize(v___x_979_);
v___x_981_ = lean_usize_of_nat(v___x_972_);
v___x_982_ = ((size_t)1ULL);
v___x_983_ = lean_usize_sub(v___x_981_, v___x_982_);
v___x_984_ = lean_usize_land(v___x_980_, v___x_983_);
v___x_985_ = lean_array_uget_borrowed(v_x_964_, v___x_984_);
lean_inc(v___x_985_);
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 2, v___x_985_);
v___x_987_ = v___x_970_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_key_966_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_value_967_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v___x_985_);
v___x_987_ = v_reuseFailAlloc_990_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_988_; 
v___x_988_ = lean_array_uset(v_x_964_, v___x_984_, v___x_987_);
v_x_964_ = v___x_988_;
v_x_965_ = v_tail_968_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(lean_object* v_i_992_, lean_object* v_source_993_, lean_object* v_target_994_){
_start:
{
lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_995_ = lean_array_get_size(v_source_993_);
v___x_996_ = lean_nat_dec_lt(v_i_992_, v___x_995_);
if (v___x_996_ == 0)
{
lean_dec_ref(v_source_993_);
lean_dec(v_i_992_);
return v_target_994_;
}
else
{
lean_object* v_es_997_; lean_object* v___x_998_; lean_object* v_source_999_; lean_object* v_target_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_es_997_ = lean_array_fget(v_source_993_, v_i_992_);
v___x_998_ = lean_box(0);
v_source_999_ = lean_array_fset(v_source_993_, v_i_992_, v___x_998_);
v_target_1000_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(v_target_994_, v_es_997_);
v___x_1001_ = lean_unsigned_to_nat(1u);
v___x_1002_ = lean_nat_add(v_i_992_, v___x_1001_);
lean_dec(v_i_992_);
v_i_992_ = v___x_1002_;
v_source_993_ = v_source_999_;
v_target_994_ = v_target_1000_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(lean_object* v_data_1004_){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v_nbuckets_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1005_ = lean_array_get_size(v_data_1004_);
v___x_1006_ = lean_unsigned_to_nat(2u);
v_nbuckets_1007_ = lean_nat_mul(v___x_1005_, v___x_1006_);
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = lean_box(0);
v___x_1010_ = lean_mk_array(v_nbuckets_1007_, v___x_1009_);
v___x_1011_ = lean_array_propagate_mark(v_data_1004_, v___x_1010_);
v___x_1012_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(v___x_1008_, v_data_1004_, v___x_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(lean_object* v_m_1013_, lean_object* v_a_1014_, lean_object* v_b_1015_){
_start:
{
lean_object* v_size_1016_; lean_object* v_buckets_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1060_; 
v_size_1016_ = lean_ctor_get(v_m_1013_, 0);
v_buckets_1017_ = lean_ctor_get(v_m_1013_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_m_1013_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1019_ = v_m_1013_;
v_isShared_1020_ = v_isSharedCheck_1060_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_buckets_1017_);
lean_inc(v_size_1016_);
lean_dec(v_m_1013_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1060_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; uint64_t v___x_1022_; uint64_t v___x_1023_; uint64_t v___x_1024_; uint64_t v_fold_1025_; uint64_t v___x_1026_; uint64_t v___x_1027_; uint64_t v___x_1028_; size_t v___x_1029_; size_t v___x_1030_; size_t v___x_1031_; size_t v___x_1032_; size_t v___x_1033_; lean_object* v_bkt_1034_; uint8_t v___x_1035_; 
v___x_1021_ = lean_array_get_size(v_buckets_1017_);
v___x_1022_ = lean_string_hash(v_a_1014_);
v___x_1023_ = 32ULL;
v___x_1024_ = lean_uint64_shift_right(v___x_1022_, v___x_1023_);
v_fold_1025_ = lean_uint64_xor(v___x_1022_, v___x_1024_);
v___x_1026_ = 16ULL;
v___x_1027_ = lean_uint64_shift_right(v_fold_1025_, v___x_1026_);
v___x_1028_ = lean_uint64_xor(v_fold_1025_, v___x_1027_);
v___x_1029_ = lean_uint64_to_usize(v___x_1028_);
v___x_1030_ = lean_usize_of_nat(v___x_1021_);
v___x_1031_ = ((size_t)1ULL);
v___x_1032_ = lean_usize_sub(v___x_1030_, v___x_1031_);
v___x_1033_ = lean_usize_land(v___x_1029_, v___x_1032_);
v_bkt_1034_ = lean_array_uget_borrowed(v_buckets_1017_, v___x_1033_);
v___x_1035_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_1014_, v_bkt_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; lean_object* v_size_x27_1037_; lean_object* v___x_1038_; lean_object* v_buckets_x27_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1036_ = lean_unsigned_to_nat(1u);
v_size_x27_1037_ = lean_nat_add(v_size_1016_, v___x_1036_);
lean_dec(v_size_1016_);
lean_inc(v_bkt_1034_);
v___x_1038_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1038_, 0, v_a_1014_);
lean_ctor_set(v___x_1038_, 1, v_b_1015_);
lean_ctor_set(v___x_1038_, 2, v_bkt_1034_);
v_buckets_x27_1039_ = lean_array_uset(v_buckets_1017_, v___x_1033_, v___x_1038_);
v___x_1040_ = lean_unsigned_to_nat(4u);
v___x_1041_ = lean_nat_mul(v_size_x27_1037_, v___x_1040_);
v___x_1042_ = lean_unsigned_to_nat(3u);
v___x_1043_ = lean_nat_div(v___x_1041_, v___x_1042_);
lean_dec(v___x_1041_);
v___x_1044_ = lean_array_get_size(v_buckets_x27_1039_);
v___x_1045_ = lean_nat_dec_le(v___x_1043_, v___x_1044_);
lean_dec(v___x_1043_);
if (v___x_1045_ == 0)
{
lean_object* v_val_1046_; lean_object* v___x_1048_; 
v_val_1046_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(v_buckets_x27_1039_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 1, v_val_1046_);
lean_ctor_set(v___x_1019_, 0, v_size_x27_1037_);
v___x_1048_ = v___x_1019_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_size_x27_1037_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_val_1046_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
else
{
lean_object* v___x_1051_; 
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 1, v_buckets_x27_1039_);
lean_ctor_set(v___x_1019_, 0, v_size_x27_1037_);
v___x_1051_ = v___x_1019_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_size_x27_1037_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_buckets_x27_1039_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
else
{
lean_object* v___x_1053_; lean_object* v_buckets_x27_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1058_; 
lean_inc(v_bkt_1034_);
v___x_1053_ = lean_box(0);
v_buckets_x27_1054_ = lean_array_uset(v_buckets_1017_, v___x_1033_, v___x_1053_);
v___x_1055_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(v_a_1014_, v_b_1015_, v_bkt_1034_);
v___x_1056_ = lean_array_uset(v_buckets_x27_1054_, v___x_1033_, v___x_1055_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 1, v___x_1056_);
v___x_1058_ = v___x_1019_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_size_1016_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(lean_object* v_as_1069_, size_t v_sz_1070_, size_t v_i_1071_, lean_object* v_b_1072_){
_start:
{
uint8_t v___x_1073_; 
v___x_1073_ = lean_usize_dec_lt(v_i_1071_, v_sz_1070_);
if (v___x_1073_ == 0)
{
return v_b_1072_;
}
else
{
lean_object* v_fst_1074_; lean_object* v_snd_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1125_; 
v_fst_1074_ = lean_ctor_get(v_b_1072_, 0);
v_snd_1075_ = lean_ctor_get(v_b_1072_, 1);
v_isSharedCheck_1125_ = !lean_is_exclusive(v_b_1072_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1077_ = v_b_1072_;
v_isShared_1078_ = v_isSharedCheck_1125_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_snd_1075_);
lean_inc(v_fst_1074_);
lean_dec(v_b_1072_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1125_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v_order_1082_; lean_object* v_fst_1094_; lean_object* v_snd_1095_; lean_object* v_a_1098_; lean_object* v_filePath_1099_; lean_object* v___f_1100_; lean_object* v___x_1101_; 
v_a_1098_ = lean_array_uget_borrowed(v_as_1069_, v_i_1071_);
v_filePath_1099_ = lean_ctor_get(v_a_1098_, 0);
lean_inc_ref_n(v_filePath_1099_, 2);
v___f_1100_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_1100_, 0, v_filePath_1099_);
v___x_1101_ = l_System_FilePath_extension(v_filePath_1099_);
if (lean_obj_tag(v___x_1101_) == 1)
{
lean_object* v_val_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_val_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_val_1102_);
lean_dec_ref_known(v___x_1101_, 1);
v___x_1103_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__1));
v___x_1104_ = lean_string_dec_eq(v_val_1102_, v___x_1103_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1105_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__2));
v___x_1106_ = lean_string_dec_eq(v_val_1102_, v___x_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; uint8_t v___x_1108_; 
v___x_1107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__3));
v___x_1108_ = lean_string_dec_eq(v_val_1102_, v___x_1107_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1109_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__4));
v___x_1110_ = lean_string_dec_eq(v_val_1102_, v___x_1109_);
lean_dec(v_val_1102_);
if (v___x_1110_ == 0)
{
lean_inc_ref(v_filePath_1099_);
v_fst_1094_ = v_filePath_1099_;
v_snd_1095_ = v___f_1100_;
goto v___jp_1093_;
}
else
{
lean_object* v___f_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
lean_dec_ref(v___f_1100_);
lean_inc_ref_n(v_filePath_1099_, 2);
v___f_1111_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__1), 2, 1);
lean_closure_set(v___f_1111_, 0, v_filePath_1099_);
v___x_1112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5));
v___x_1113_ = l_System_FilePath_withExtension(v_filePath_1099_, v___x_1112_);
v___x_1114_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6));
v___x_1115_ = l_System_FilePath_withExtension(v___x_1113_, v___x_1114_);
v_fst_1094_ = v___x_1115_;
v_snd_1095_ = v___f_1111_;
goto v___jp_1093_;
}
}
else
{
lean_object* v___f_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_dec(v_val_1102_);
lean_dec_ref(v___f_1100_);
lean_inc_ref_n(v_filePath_1099_, 2);
v___f_1116_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__2), 2, 1);
lean_closure_set(v___f_1116_, 0, v_filePath_1099_);
v___x_1117_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__6));
v___x_1118_ = l_System_FilePath_withExtension(v_filePath_1099_, v___x_1117_);
v_fst_1094_ = v___x_1118_;
v_snd_1095_ = v___f_1116_;
goto v___jp_1093_;
}
}
else
{
lean_object* v___f_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
lean_dec(v_val_1102_);
lean_dec_ref(v___f_1100_);
lean_inc_ref_n(v_filePath_1099_, 2);
v___f_1119_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__3), 2, 1);
lean_closure_set(v___f_1119_, 0, v_filePath_1099_);
v___x_1120_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5));
v___x_1121_ = l_System_FilePath_withExtension(v_filePath_1099_, v___x_1120_);
v_fst_1094_ = v___x_1121_;
v_snd_1095_ = v___f_1119_;
goto v___jp_1093_;
}
}
else
{
lean_object* v___f_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
lean_dec(v_val_1102_);
lean_dec_ref(v___f_1100_);
lean_inc_ref_n(v_filePath_1099_, 2);
v___f_1122_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___lam__4), 2, 1);
lean_closure_set(v___f_1122_, 0, v_filePath_1099_);
v___x_1123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__5));
v___x_1124_ = l_System_FilePath_withExtension(v_filePath_1099_, v___x_1123_);
v_fst_1094_ = v___x_1124_;
v_snd_1095_ = v___f_1122_;
goto v___jp_1093_;
}
}
else
{
lean_dec(v___x_1101_);
lean_inc_ref(v_filePath_1099_);
v_fst_1094_ = v_filePath_1099_;
v_snd_1095_ = v___f_1100_;
goto v___jp_1093_;
}
v___jp_1079_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1083_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___closed__0));
v___x_1084_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(v_snd_1075_, v___y_1081_, v___x_1083_);
v___x_1085_ = lean_apply_1(v___y_1080_, v___x_1084_);
v___x_1086_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(v_snd_1075_, v___y_1081_, v___x_1085_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 1, v___x_1086_);
lean_ctor_set(v___x_1077_, 0, v_order_1082_);
v___x_1088_ = v___x_1077_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_order_1082_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
size_t v___x_1089_; size_t v___x_1090_; 
v___x_1089_ = ((size_t)1ULL);
v___x_1090_ = lean_usize_add(v_i_1071_, v___x_1089_);
v_i_1071_ = v___x_1090_;
v_b_1072_ = v___x_1088_;
goto _start;
}
}
v___jp_1093_:
{
uint8_t v___x_1096_; 
v___x_1096_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(v_snd_1075_, v_fst_1094_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; 
lean_inc_ref(v_fst_1094_);
v___x_1097_ = lean_array_push(v_fst_1074_, v_fst_1094_);
v___y_1080_ = v_snd_1095_;
v___y_1081_ = v_fst_1094_;
v_order_1082_ = v___x_1097_;
goto v___jp_1079_;
}
else
{
v___y_1080_ = v_snd_1095_;
v___y_1081_ = v_fst_1094_;
v_order_1082_ = v_fst_1074_;
goto v___jp_1079_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3___boxed(lean_object* v_as_1126_, lean_object* v_sz_1127_, lean_object* v_i_1128_, lean_object* v_b_1129_){
_start:
{
size_t v_sz_boxed_1130_; size_t v_i_boxed_1131_; lean_object* v_res_1132_; 
v_sz_boxed_1130_ = lean_unbox_usize(v_sz_1127_);
lean_dec(v_sz_1127_);
v_i_boxed_1131_ = lean_unbox_usize(v_i_1128_);
lean_dec(v_i_1128_);
v_res_1132_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(v_as_1126_, v_sz_boxed_1130_, v_i_boxed_1131_, v_b_1129_);
lean_dec_ref(v_as_1126_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8_spec__10(lean_object* v_msg_1133_){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = l_Lean_instInhabitedModuleArtifacts_default;
v___x_1135_ = lean_panic_fn_borrowed(v___x_1134_, v_msg_1133_);
return v___x_1135_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1139_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__2));
v___x_1140_ = lean_unsigned_to_nat(11u);
v___x_1141_ = lean_unsigned_to_nat(163u);
v___x_1142_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__1));
v___x_1143_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__0));
v___x_1144_ = l_mkPanicMessageWithDecl(v___x_1143_, v___x_1142_, v___x_1141_, v___x_1140_, v___x_1139_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(lean_object* v_a_1145_, lean_object* v_x_1146_){
_start:
{
if (lean_obj_tag(v_x_1146_) == 0)
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___closed__3);
v___x_1148_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8_spec__10(v___x_1147_);
return v___x_1148_;
}
else
{
lean_object* v_key_1149_; lean_object* v_value_1150_; lean_object* v_tail_1151_; uint8_t v___x_1152_; 
v_key_1149_ = lean_ctor_get(v_x_1146_, 0);
v_value_1150_ = lean_ctor_get(v_x_1146_, 1);
v_tail_1151_ = lean_ctor_get(v_x_1146_, 2);
v___x_1152_ = lean_string_dec_eq(v_key_1149_, v_a_1145_);
if (v___x_1152_ == 0)
{
v_x_1146_ = v_tail_1151_;
goto _start;
}
else
{
lean_inc(v_value_1150_);
return v_value_1150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8___boxed(lean_object* v_a_1154_, lean_object* v_x_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(v_a_1154_, v_x_1155_);
lean_dec(v_x_1155_);
lean_dec_ref(v_a_1154_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(lean_object* v_m_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v_buckets_1159_; lean_object* v___x_1160_; uint64_t v___x_1161_; uint64_t v___x_1162_; uint64_t v___x_1163_; uint64_t v_fold_1164_; uint64_t v___x_1165_; uint64_t v___x_1166_; uint64_t v___x_1167_; size_t v___x_1168_; size_t v___x_1169_; size_t v___x_1170_; size_t v___x_1171_; size_t v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_buckets_1159_ = lean_ctor_get(v_m_1157_, 1);
v___x_1160_ = lean_array_get_size(v_buckets_1159_);
v___x_1161_ = lean_string_hash(v_a_1158_);
v___x_1162_ = 32ULL;
v___x_1163_ = lean_uint64_shift_right(v___x_1161_, v___x_1162_);
v_fold_1164_ = lean_uint64_xor(v___x_1161_, v___x_1163_);
v___x_1165_ = 16ULL;
v___x_1166_ = lean_uint64_shift_right(v_fold_1164_, v___x_1165_);
v___x_1167_ = lean_uint64_xor(v_fold_1164_, v___x_1166_);
v___x_1168_ = lean_uint64_to_usize(v___x_1167_);
v___x_1169_ = lean_usize_of_nat(v___x_1160_);
v___x_1170_ = ((size_t)1ULL);
v___x_1171_ = lean_usize_sub(v___x_1169_, v___x_1170_);
v___x_1172_ = lean_usize_land(v___x_1168_, v___x_1171_);
v___x_1173_ = lean_array_uget_borrowed(v_buckets_1159_, v___x_1172_);
v___x_1174_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4_spec__8(v_a_1158_, v___x_1173_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4___boxed(lean_object* v_m_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(v_m_1175_, v_a_1176_);
lean_dec_ref(v_a_1176_);
lean_dec_ref(v_m_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(lean_object* v___x_1178_, size_t v_sz_1179_, size_t v_i_1180_, lean_object* v_bs_1181_){
_start:
{
uint8_t v___x_1182_; 
v___x_1182_ = lean_usize_dec_lt(v_i_1180_, v_sz_1179_);
if (v___x_1182_ == 0)
{
return v_bs_1181_;
}
else
{
lean_object* v_v_1183_; lean_object* v___x_1184_; lean_object* v_bs_x27_1185_; lean_object* v___x_1186_; size_t v___x_1187_; size_t v___x_1188_; lean_object* v___x_1189_; 
v_v_1183_ = lean_array_uget(v_bs_1181_, v_i_1180_);
v___x_1184_ = lean_unsigned_to_nat(0u);
v_bs_x27_1185_ = lean_array_uset(v_bs_1181_, v_i_1180_, v___x_1184_);
v___x_1186_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__4(v___x_1178_, v_v_1183_);
lean_dec(v_v_1183_);
v___x_1187_ = ((size_t)1ULL);
v___x_1188_ = lean_usize_add(v_i_1180_, v___x_1187_);
v___x_1189_ = lean_array_uset(v_bs_x27_1185_, v_i_1180_, v___x_1186_);
v_i_1180_ = v___x_1188_;
v_bs_1181_ = v___x_1189_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5___boxed(lean_object* v___x_1191_, lean_object* v_sz_1192_, lean_object* v_i_1193_, lean_object* v_bs_1194_){
_start:
{
size_t v_sz_boxed_1195_; size_t v_i_boxed_1196_; lean_object* v_res_1197_; 
v_sz_boxed_1195_ = lean_unbox_usize(v_sz_1192_);
lean_dec(v_sz_1192_);
v_i_boxed_1196_ = lean_unbox_usize(v_i_1193_);
lean_dec(v_i_1193_);
v_res_1197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(v___x_1191_, v_sz_boxed_1195_, v_i_boxed_1196_, v_bs_1194_);
lean_dec_ref(v___x_1191_);
return v_res_1197_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1200_ = lean_box(0);
v___x_1201_ = lean_unsigned_to_nat(16u);
v___x_1202_ = lean_mk_array(v___x_1201_, v___x_1200_);
return v___x_1202_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v_byBase_1205_; 
v___x_1203_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1, &l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__1);
v___x_1204_ = lean_unsigned_to_nat(0u);
v_byBase_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_byBase_1205_, 0, v___x_1204_);
lean_ctor_set(v_byBase_1205_, 1, v___x_1203_);
return v_byBase_1205_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3(void){
_start:
{
lean_object* v_byBase_1206_; lean_object* v_order_1207_; lean_object* v___x_1208_; 
v_byBase_1206_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2, &l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__2);
v_order_1207_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__0));
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v_order_1207_);
lean_ctor_set(v___x_1208_, 1, v_byBase_1206_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(lean_object* v_regions_1209_){
_start:
{
lean_object* v___x_1210_; size_t v_sz_1211_; size_t v___x_1212_; lean_object* v___x_1213_; lean_object* v_fst_1214_; lean_object* v_snd_1215_; size_t v_sz_1216_; lean_object* v___x_1217_; 
v___x_1210_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3, &l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___closed__3);
v_sz_1211_ = lean_array_size(v_regions_1209_);
v___x_1212_ = ((size_t)0ULL);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__3(v_regions_1209_, v_sz_1211_, v___x_1212_, v___x_1210_);
v_fst_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_fst_1214_);
v_snd_1215_ = lean_ctor_get(v___x_1213_, 1);
lean_inc(v_snd_1215_);
lean_dec_ref(v___x_1213_);
v_sz_1216_ = lean_array_size(v_fst_1214_);
v___x_1217_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__5(v_snd_1215_, v_sz_1216_, v___x_1212_, v_fst_1214_);
lean_dec(v_snd_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts___boxed(lean_object* v_regions_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(v_regions_1218_);
lean_dec_ref(v_regions_1218_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0(lean_object* v_00_u03b2_1220_, lean_object* v_m_1221_, lean_object* v_a_1222_, lean_object* v_fallback_1223_){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___redArg(v_m_1221_, v_a_1222_, v_fallback_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0___boxed(lean_object* v_00_u03b2_1225_, lean_object* v_m_1226_, lean_object* v_a_1227_, lean_object* v_fallback_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0(v_00_u03b2_1225_, v_m_1226_, v_a_1227_, v_fallback_1228_);
lean_dec(v_fallback_1228_);
lean_dec_ref(v_a_1227_);
lean_dec_ref(v_m_1226_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1(lean_object* v_00_u03b2_1230_, lean_object* v_m_1231_, lean_object* v_a_1232_, lean_object* v_b_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1___redArg(v_m_1231_, v_a_1232_, v_b_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2(lean_object* v_00_u03b2_1235_, lean_object* v_m_1236_, lean_object* v_a_1237_){
_start:
{
uint8_t v___x_1238_; 
v___x_1238_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___redArg(v_m_1236_, v_a_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2___boxed(lean_object* v_00_u03b2_1239_, lean_object* v_m_1240_, lean_object* v_a_1241_){
_start:
{
uint8_t v_res_1242_; lean_object* v_r_1243_; 
v_res_1242_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__2(v_00_u03b2_1239_, v_m_1240_, v_a_1241_);
lean_dec_ref(v_a_1241_);
lean_dec_ref(v_m_1240_);
v_r_1243_ = lean_box(v_res_1242_);
return v_r_1243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0(lean_object* v_00_u03b2_1244_, lean_object* v_a_1245_, lean_object* v_fallback_1246_, lean_object* v_x_1247_){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___redArg(v_a_1245_, v_fallback_1246_, v_x_1247_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1249_, lean_object* v_a_1250_, lean_object* v_fallback_1251_, lean_object* v_x_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__0_spec__0(v_00_u03b2_1249_, v_a_1250_, v_fallback_1251_, v_x_1252_);
lean_dec(v_x_1252_);
lean_dec(v_fallback_1251_);
lean_dec_ref(v_a_1250_);
return v_res_1253_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2(lean_object* v_00_u03b2_1254_, lean_object* v_a_1255_, lean_object* v_x_1256_){
_start:
{
uint8_t v___x_1257_; 
v___x_1257_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___redArg(v_a_1255_, v_x_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1258_, lean_object* v_a_1259_, lean_object* v_x_1260_){
_start:
{
uint8_t v_res_1261_; lean_object* v_r_1262_; 
v_res_1261_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__2(v_00_u03b2_1258_, v_a_1259_, v_x_1260_);
lean_dec(v_x_1260_);
lean_dec_ref(v_a_1259_);
v_r_1262_ = lean_box(v_res_1261_);
return v_r_1262_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3(lean_object* v_00_u03b2_1263_, lean_object* v_data_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3___redArg(v_data_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4(lean_object* v_00_u03b2_1266_, lean_object* v_a_1267_, lean_object* v_b_1268_, lean_object* v_x_1269_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__4___redArg(v_a_1267_, v_b_1268_, v_x_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1271_, lean_object* v_i_1272_, lean_object* v_source_1273_, lean_object* v_target_1274_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4___redArg(v_i_1272_, v_source_1273_, v_target_1274_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_1276_, lean_object* v_x_1277_, lean_object* v_x_1278_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts_spec__1_spec__3_spec__4_spec__9___redArg(v_x_1277_, v_x_1278_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(lean_object* v_as_1280_, size_t v_sz_1281_, size_t v_i_1282_, lean_object* v_b_1283_){
_start:
{
uint8_t v___x_1285_; 
v___x_1285_ = lean_usize_dec_lt(v_i_1282_, v_sz_1281_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1286_; 
v___x_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1286_, 0, v_b_1283_);
return v___x_1286_;
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1288_; 
v_a_1287_ = lean_array_uget_borrowed(v_as_1280_, v_i_1282_);
v___x_1288_ = lean_compacted_region_read(v_a_1287_, v_b_1283_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; lean_object* v_snd_1290_; lean_object* v___x_1291_; size_t v___x_1292_; size_t v___x_1293_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_a_1289_);
lean_dec_ref_known(v___x_1288_, 1);
v_snd_1290_ = lean_ctor_get(v_a_1289_, 1);
lean_inc(v_snd_1290_);
lean_dec(v_a_1289_);
v___x_1291_ = lean_array_push(v_b_1283_, v_snd_1290_);
v___x_1292_ = ((size_t)1ULL);
v___x_1293_ = lean_usize_add(v_i_1282_, v___x_1292_);
v_i_1282_ = v___x_1293_;
v_b_1283_ = v___x_1291_;
goto _start;
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec_ref(v_b_1283_);
v_a_1295_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1288_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1288_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0___boxed(lean_object* v_as_1303_, lean_object* v_sz_1304_, lean_object* v_i_1305_, lean_object* v_b_1306_, lean_object* v___y_1307_){
_start:
{
size_t v_sz_boxed_1308_; size_t v_i_boxed_1309_; lean_object* v_res_1310_; 
v_sz_boxed_1308_ = lean_unbox_usize(v_sz_1304_);
lean_dec(v_sz_1304_);
v_i_boxed_1309_ = lean_unbox_usize(v_i_1305_);
lean_dec(v_i_1305_);
v_res_1310_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(v_as_1303_, v_sz_boxed_1308_, v_i_boxed_1309_, v_b_1306_);
lean_dec_ref(v_as_1303_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(lean_object* v_arts_1313_){
_start:
{
lean_object* v_oleanRegions_1315_; lean_object* v___x_1316_; size_t v_sz_1317_; size_t v___x_1318_; lean_object* v___x_1319_; 
v_oleanRegions_1315_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0));
lean_inc_ref(v_arts_1313_);
v___x_1316_ = l_Lean_ModuleArtifacts_oleanParts(v_arts_1313_);
v_sz_1317_ = lean_array_size(v___x_1316_);
v___x_1318_ = ((size_t)0ULL);
v___x_1319_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(v___x_1316_, v_sz_1317_, v___x_1318_, v_oleanRegions_1315_);
lean_dec_ref(v___x_1316_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1321_; size_t v_sz_1322_; lean_object* v___x_1323_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1319_, 1);
v___x_1321_ = l_Lean_ModuleArtifacts_irParts(v_arts_1313_);
v_sz_1322_ = lean_array_size(v___x_1321_);
v___x_1323_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions_spec__0(v___x_1321_, v_sz_1322_, v___x_1318_, v_oleanRegions_1315_);
lean_dec_ref(v___x_1321_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1332_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1326_ = v___x_1323_;
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1323_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1328_ = l_Array_append___redArg(v_a_1320_, v_a_1324_);
lean_dec(v_a_1324_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v___x_1328_);
v___x_1330_ = v___x_1326_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1328_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
else
{
lean_dec(v_a_1320_);
return v___x_1323_;
}
}
else
{
lean_dec_ref(v_arts_1313_);
return v___x_1319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___boxed(lean_object* v_arts_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(v_arts_1333_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(lean_object* v_e_1336_){
_start:
{
if (lean_obj_tag(v_e_1336_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1347_; 
v_a_1338_ = lean_ctor_get(v_e_1336_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_e_1336_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1340_ = v_e_1336_;
v_isShared_1341_ = v_isSharedCheck_1347_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v_e_1336_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1347_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1342_ = lean_io_error_to_string(v_a_1338_);
v___x_1343_ = lean_mk_io_user_error(v___x_1342_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 1);
lean_ctor_set(v___x_1340_, 0, v___x_1343_);
v___x_1345_ = v___x_1340_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
v_a_1348_ = lean_ctor_get(v_e_1336_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_e_1336_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v_e_1336_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v_e_1336_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
lean_ctor_set_tag(v___x_1350_, 0);
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg___boxed(lean_object* v_e_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(v_e_1356_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0(lean_object* v_00_u03b1_1359_, lean_object* v_e_1360_){
_start:
{
lean_object* v___x_1362_; 
v___x_1362_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(v_e_1360_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___boxed(lean_object* v_00_u03b1_1363_, lean_object* v_e_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0(v_00_u03b1_1363_, v_e_1364_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(lean_object* v_a_1367_, lean_object* v___y_1368_, lean_object* v_a_1369_){
_start:
{
lean_object* v_fst_1371_; lean_object* v_snd_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1400_; 
v_fst_1371_ = lean_ctor_get(v_a_1369_, 0);
v_snd_1372_ = lean_ctor_get(v_a_1369_, 1);
v_isSharedCheck_1400_ = !lean_is_exclusive(v_a_1369_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1374_ = v_a_1369_;
v_isShared_1375_ = v_isSharedCheck_1400_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_snd_1372_);
lean_inc(v_fst_1371_);
lean_dec(v_a_1369_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1400_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = lean_array_get_size(v_a_1367_);
v___x_1377_ = lean_nat_dec_lt(v_snd_1372_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1379_; 
if (v_isShared_1375_ == 0)
{
v___x_1379_ = v___x_1374_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_fst_1371_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v_snd_1372_);
v___x_1379_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1382_ = l_Lean_instInhabitedModuleArtifacts_default;
v___x_1383_ = lean_array_get_borrowed(v___x_1382_, v_a_1367_, v_snd_1372_);
lean_inc(v___x_1383_);
v___x_1384_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions(v___x_1383_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1389_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
v___x_1386_ = l_Array_append___redArg(v_fst_1371_, v_a_1385_);
lean_dec(v_a_1385_);
v___x_1387_ = lean_nat_add(v_snd_1372_, v___y_1368_);
lean_dec(v_snd_1372_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 1, v___x_1387_);
lean_ctor_set(v___x_1374_, 0, v___x_1386_);
v___x_1389_ = v___x_1374_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v___x_1386_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v___x_1387_);
v___x_1389_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
v_a_1369_ = v___x_1389_;
goto _start;
}
}
else
{
lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1399_; 
lean_del_object(v___x_1374_);
lean_dec(v_snd_1372_);
lean_dec(v_fst_1371_);
v_a_1392_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1399_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1394_ = v___x_1384_;
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1384_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1397_; 
if (v_isShared_1395_ == 0)
{
v___x_1397_ = v___x_1394_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_a_1392_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg___boxed(lean_object* v_a_1401_, lean_object* v___y_1402_, lean_object* v_a_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(v_a_1401_, v___y_1402_, v_a_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v_a_1401_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0(lean_object* v_a_1406_, lean_object* v___y_1407_, lean_object* v___x_1408_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(v_a_1406_, v___y_1407_, v___x_1408_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1419_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1413_ = v___x_1410_;
v_isShared_1414_ = v_isSharedCheck_1419_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1410_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1419_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v_fst_1415_; lean_object* v___x_1417_; 
v_fst_1415_ = lean_ctor_get(v_a_1411_, 0);
lean_inc(v_fst_1415_);
lean_dec(v_a_1411_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set_tag(v___x_1413_, 1);
lean_ctor_set(v___x_1413_, 0, v_fst_1415_);
v___x_1417_ = v___x_1413_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_fst_1415_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1427_; 
v_a_1420_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1422_ = v___x_1410_;
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1410_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 0);
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_a_1420_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0___boxed(lean_object* v_a_1428_, lean_object* v___y_1429_, lean_object* v___x_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0(v_a_1428_, v___y_1429_, v___x_1430_);
lean_dec(v___y_1429_);
lean_dec_ref(v_a_1428_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(lean_object* v_upperBound_1433_, lean_object* v_a_1434_, lean_object* v___y_1435_, lean_object* v_a_1436_, lean_object* v_b_1437_){
_start:
{
uint8_t v___x_1439_; 
v___x_1439_ = lean_nat_dec_lt(v_a_1436_, v_upperBound_1433_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; 
lean_dec(v_a_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v_a_1434_);
v___x_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1440_, 0, v_b_1437_);
return v___x_1440_;
}
else
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___f_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1441_ = lean_unsigned_to_nat(0u);
v___x_1442_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_readModuleArtifactRegions___closed__0));
lean_inc(v_a_1436_);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
lean_ctor_set(v___x_1443_, 1, v_a_1436_);
lean_inc(v___y_1435_);
lean_inc_ref(v_a_1434_);
v___f_1444_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1444_, 0, v_a_1434_);
lean_closure_set(v___f_1444_, 1, v___y_1435_);
lean_closure_set(v___f_1444_, 2, v___x_1443_);
v___x_1445_ = lean_io_as_task(v___f_1444_, v___x_1441_);
v___x_1446_ = lean_array_push(v_b_1437_, v___x_1445_);
v___x_1447_ = lean_unsigned_to_nat(1u);
v___x_1448_ = lean_nat_add(v_a_1436_, v___x_1447_);
lean_dec(v_a_1436_);
v_a_1436_ = v___x_1448_;
v_b_1437_ = v___x_1446_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg___boxed(lean_object* v_upperBound_1450_, lean_object* v_a_1451_, lean_object* v___y_1452_, lean_object* v_a_1453_, lean_object* v_b_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(v_upperBound_1450_, v_a_1451_, v___y_1452_, v_a_1453_, v_b_1454_);
lean_dec(v_upperBound_1450_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(lean_object* v_as_1457_, size_t v_sz_1458_, size_t v_i_1459_, lean_object* v_b_1460_){
_start:
{
uint8_t v___x_1462_; 
v___x_1462_ = lean_usize_dec_lt(v_i_1459_, v_sz_1458_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; 
v___x_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1463_, 0, v_b_1460_);
return v___x_1463_;
}
else
{
lean_object* v_a_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v_a_1464_ = lean_array_uget_borrowed(v_as_1457_, v_i_1459_);
lean_inc(v_a_1464_);
v___x_1465_ = lean_task_get_own(v_a_1464_);
v___x_1466_ = l_IO_ofExcept___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__0___redArg(v___x_1465_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1468_; size_t v___x_1469_; size_t v___x_1470_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v___x_1468_ = l_Array_append___redArg(v_b_1460_, v_a_1467_);
lean_dec(v_a_1467_);
v___x_1469_ = ((size_t)1ULL);
v___x_1470_ = lean_usize_add(v_i_1459_, v___x_1469_);
v_i_1459_ = v___x_1470_;
v_b_1460_ = v___x_1468_;
goto _start;
}
else
{
lean_dec_ref(v_b_1460_);
return v___x_1466_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2___boxed(lean_object* v_as_1472_, lean_object* v_sz_1473_, lean_object* v_i_1474_, lean_object* v_b_1475_, lean_object* v___y_1476_){
_start:
{
size_t v_sz_boxed_1477_; size_t v_i_boxed_1478_; lean_object* v_res_1479_; 
v_sz_boxed_1477_ = lean_unbox_usize(v_sz_1473_);
lean_dec(v_sz_1473_);
v_i_boxed_1478_ = lean_unbox_usize(v_i_1474_);
lean_dec(v_i_1474_);
v_res_1479_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(v_as_1472_, v_sz_boxed_1477_, v_i_boxed_1478_, v_b_1475_);
lean_dec_ref(v_as_1472_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(size_t v_sz_1480_, size_t v_i_1481_, lean_object* v_bs_1482_){
_start:
{
uint8_t v___x_1483_; 
v___x_1483_ = lean_usize_dec_lt(v_i_1481_, v_sz_1480_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1484_, 0, v_bs_1482_);
return v___x_1484_;
}
else
{
lean_object* v_v_1485_; lean_object* v___x_1486_; 
v_v_1485_ = lean_array_uget_borrowed(v_bs_1482_, v_i_1481_);
lean_inc(v_v_1485_);
v___x_1486_ = l_Lean_instFromJsonModuleArtifacts_fromJson(v_v_1485_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v_bs_1482_);
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1486_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1496_; lean_object* v_bs_x27_1497_; size_t v___x_1498_; size_t v___x_1499_; lean_object* v___x_1500_; 
v_a_1495_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1486_, 1);
v___x_1496_ = lean_unsigned_to_nat(0u);
v_bs_x27_1497_ = lean_array_uset(v_bs_1482_, v_i_1481_, v___x_1496_);
v___x_1498_ = ((size_t)1ULL);
v___x_1499_ = lean_usize_add(v_i_1481_, v___x_1498_);
v___x_1500_ = lean_array_uset(v_bs_x27_1497_, v_i_1481_, v_a_1495_);
v_i_1481_ = v___x_1499_;
v_bs_1482_ = v___x_1500_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1___boxed(lean_object* v_sz_1502_, lean_object* v_i_1503_, lean_object* v_bs_1504_){
_start:
{
size_t v_sz_boxed_1505_; size_t v_i_boxed_1506_; lean_object* v_res_1507_; 
v_sz_boxed_1505_ = lean_unbox_usize(v_sz_1502_);
lean_dec(v_sz_1502_);
v_i_boxed_1506_ = lean_unbox_usize(v_i_1503_);
lean_dec(v_i_1503_);
v_res_1507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(v_sz_boxed_1505_, v_i_boxed_1506_, v_bs_1504_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1(lean_object* v_x_1510_){
_start:
{
if (lean_obj_tag(v_x_1510_) == 4)
{
lean_object* v_elems_1511_; size_t v_sz_1512_; size_t v___x_1513_; lean_object* v___x_1514_; 
v_elems_1511_ = lean_ctor_get(v_x_1510_, 0);
lean_inc_ref(v_elems_1511_);
lean_dec_ref_known(v_x_1510_, 1);
v_sz_1512_ = lean_array_size(v_elems_1511_);
v___x_1513_ = ((size_t)0ULL);
v___x_1514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1_spec__1(v_sz_1512_, v___x_1513_, v_elems_1511_);
return v___x_1514_;
}
else
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1515_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__0));
v___x_1516_ = lean_unsigned_to_nat(80u);
v___x_1517_ = l_Lean_Json_pretty(v_x_1510_, v___x_1516_);
v___x_1518_ = lean_string_append(v___x_1515_, v___x_1517_);
lean_dec_ref(v___x_1517_);
v___x_1519_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1___closed__1));
v___x_1520_ = lean_string_append(v___x_1518_, v___x_1519_);
v___x_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
return v___x_1521_;
}
}
}
static uint32_t _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3(void){
_start:
{
lean_object* v___x_1525_; uint32_t v___x_1526_; 
v___x_1525_ = lean_box(0);
v___x_1526_ = lean_internal_get_hardware_concurrency(v___x_1525_);
return v___x_1526_;
}
}
static lean_object* _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4(void){
_start:
{
uint32_t v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_uint32_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__3);
v___x_1528_ = lean_uint32_to_nat(v___x_1527_);
return v___x_1528_;
}
}
static uint8_t _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6(void){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1530_ = lean_unsigned_to_nat(4u);
v___x_1531_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4);
v___x_1532_ = lean_nat_dec_le(v___x_1531_, v___x_1530_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(lean_object* v_fname_1533_){
_start:
{
lean_object* v___x_1535_; lean_object* v_depsFile_1536_; lean_object* v___x_1537_; 
v___x_1535_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0));
lean_inc_ref(v_fname_1533_);
v_depsFile_1536_ = l_System_FilePath_addExtension(v_fname_1533_, v___x_1535_);
v___x_1537_ = l_IO_FS_readFile(v_depsFile_1536_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1624_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1540_ = v___x_1537_;
v_isShared_1541_ = v_isSharedCheck_1624_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1537_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1624_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v_a_1543_; lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_Json_parse(v_a_1538_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; 
lean_dec_ref(v_fname_1533_);
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_a_1554_);
lean_dec_ref_known(v___x_1553_, 1);
v_a_1543_ = v_a_1554_;
goto v___jp_1542_;
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1556_; 
v_a_1555_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_a_1555_);
lean_dec_ref_known(v___x_1553_, 1);
v___x_1556_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__1(v_a_1555_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; 
lean_dec_ref(v_fname_1533_);
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1556_, 1);
v_a_1543_ = v_a_1557_;
goto v___jp_1542_;
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___y_1562_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1613_; uint8_t v___x_1623_; 
lean_del_object(v___x_1540_);
lean_dec_ref(v_depsFile_1536_);
v_a_1558_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1556_, 1);
v___x_1559_ = lean_obj_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__4);
v___x_1560_ = lean_unsigned_to_nat(4u);
v___x_1623_ = lean_uint8_once(&l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6, &l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6_once, _init_l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__6);
if (v___x_1623_ == 0)
{
v___y_1613_ = v___x_1560_;
goto v___jp_1612_;
}
else
{
v___y_1613_ = v___x_1559_;
goto v___jp_1612_;
}
v___jp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1563_ = lean_mk_empty_array_with_capacity(v___y_1562_);
v___x_1564_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_1558_);
lean_inc(v___y_1562_);
v___x_1565_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(v___y_1562_, v_a_1558_, v___y_1562_, v___x_1564_, v___x_1563_);
lean_dec(v___y_1562_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; size_t v_sz_1570_; size_t v___x_1571_; lean_object* v___x_1572_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1567_ = lean_array_get_size(v_a_1558_);
lean_dec(v_a_1558_);
v___x_1568_ = lean_nat_mul(v___x_1567_, v___x_1560_);
v___x_1569_ = lean_mk_empty_array_with_capacity(v___x_1568_);
lean_dec(v___x_1568_);
v_sz_1570_ = lean_array_size(v_a_1566_);
v___x_1571_ = ((size_t)0ULL);
v___x_1572_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__2(v_a_1566_, v_sz_1570_, v___x_1571_, v___x_1569_);
lean_dec(v_a_1566_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1574_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1574_ = lean_compacted_region_read(v_fname_1533_, v_a_1573_);
lean_dec(v_a_1573_);
lean_dec_ref(v_fname_1533_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1583_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1583_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1583_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v_fst_1579_; lean_object* v___x_1581_; 
v_fst_1579_ = lean_ctor_get(v_a_1575_, 0);
lean_inc(v_fst_1579_);
lean_dec(v_a_1575_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v_fst_1579_);
v___x_1581_ = v___x_1577_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_fst_1579_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
v_a_1584_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1574_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1574_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_dec_ref(v_fname_1533_);
v_a_1592_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1572_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1572_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
else
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
lean_dec(v_a_1558_);
lean_dec_ref(v_fname_1533_);
v_a_1600_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1565_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1565_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
v___jp_1608_:
{
uint8_t v___x_1611_; 
v___x_1611_ = lean_nat_dec_le(v___y_1609_, v___y_1610_);
if (v___x_1611_ == 0)
{
lean_dec(v___y_1610_);
v___y_1562_ = v___y_1609_;
goto v___jp_1561_;
}
else
{
lean_dec(v___y_1609_);
v___y_1562_ = v___y_1610_;
goto v___jp_1561_;
}
}
v___jp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1614_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__5));
v___x_1615_ = lean_io_getenv(v___x_1614_);
v___x_1616_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v___x_1615_) == 0)
{
v___y_1609_ = v___x_1616_;
v___y_1610_ = v___y_1613_;
goto v___jp_1608_;
}
else
{
lean_object* v_val_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_val_1617_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_val_1617_);
lean_dec_ref_known(v___x_1615_, 1);
v___x_1618_ = lean_unsigned_to_nat(0u);
v___x_1619_ = lean_string_utf8_byte_size(v_val_1617_);
v___x_1620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1620_, 0, v_val_1617_);
lean_ctor_set(v___x_1620_, 1, v___x_1618_);
lean_ctor_set(v___x_1620_, 2, v___x_1619_);
v___x_1621_ = l_String_Slice_toNat_x3f(v___x_1620_);
lean_dec_ref_known(v___x_1620_, 3);
if (lean_obj_tag(v___x_1621_) == 0)
{
v___y_1609_ = v___x_1616_;
v___y_1610_ = v___y_1613_;
goto v___jp_1608_;
}
else
{
lean_object* v_val_1622_; 
lean_dec(v___y_1613_);
v_val_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_val_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v___y_1609_ = v___x_1616_;
v___y_1610_ = v_val_1622_;
goto v___jp_1608_;
}
}
}
}
}
v___jp_1542_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1551_; 
v___x_1544_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__1));
v___x_1545_ = lean_string_append(v___x_1544_, v_depsFile_1536_);
lean_dec_ref(v_depsFile_1536_);
v___x_1546_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__2));
v___x_1547_ = lean_string_append(v___x_1545_, v___x_1546_);
v___x_1548_ = lean_string_append(v___x_1547_, v_a_1543_);
lean_dec_ref(v_a_1543_);
v___x_1549_ = lean_mk_io_user_error(v___x_1548_);
if (v_isShared_1541_ == 0)
{
lean_ctor_set_tag(v___x_1540_, 1);
lean_ctor_set(v___x_1540_, 0, v___x_1549_);
v___x_1551_ = v___x_1540_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1549_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec_ref(v_depsFile_1536_);
lean_dec_ref(v_fname_1533_);
v_a_1625_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1537_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1537_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___boxed(lean_object* v_fname_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(v_fname_1633_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3(lean_object* v_a_1636_, lean_object* v___y_1637_, lean_object* v_inst_1638_, lean_object* v_a_1639_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___redArg(v_a_1636_, v___y_1637_, v_a_1639_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3___boxed(lean_object* v_a_1642_, lean_object* v___y_1643_, lean_object* v_inst_1644_, lean_object* v_a_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__3(v_a_1642_, v___y_1643_, v_inst_1644_, v_a_1645_);
lean_dec(v___y_1643_);
lean_dec_ref(v_a_1642_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4(lean_object* v_upperBound_1648_, lean_object* v_a_1649_, lean_object* v___y_1650_, lean_object* v_inst_1651_, lean_object* v_R_1652_, lean_object* v_a_1653_, lean_object* v_b_1654_, lean_object* v_c_1655_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___redArg(v_upperBound_1648_, v_a_1649_, v___y_1650_, v_a_1653_, v_b_1654_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4___boxed(lean_object* v_upperBound_1658_, lean_object* v_a_1659_, lean_object* v___y_1660_, lean_object* v_inst_1661_, lean_object* v_R_1662_, lean_object* v_a_1663_, lean_object* v_b_1664_, lean_object* v_c_1665_, lean_object* v___y_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot_spec__4(v_upperBound_1658_, v_a_1659_, v___y_1660_, v_inst_1661_, v_R_1662_, v_a_1663_, v_b_1664_, v_c_1665_);
lean_dec(v_upperBound_1658_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(lean_object* v_as_1668_, size_t v_sz_1669_, size_t v_i_1670_, lean_object* v_b_1671_){
_start:
{
uint8_t v___x_1673_; 
v___x_1673_ = lean_usize_dec_lt(v_i_1670_, v_sz_1669_);
if (v___x_1673_ == 0)
{
return v_b_1671_;
}
else
{
lean_object* v_a_1674_; lean_object* v_cancelTk_x3f_1675_; lean_object* v___x_1676_; 
v_a_1674_ = lean_array_uget_borrowed(v_as_1668_, v_i_1670_);
v_cancelTk_x3f_1675_ = lean_ctor_get(v_a_1674_, 2);
v___x_1676_ = lean_box(0);
if (lean_obj_tag(v_cancelTk_x3f_1675_) == 1)
{
lean_object* v_val_1683_; lean_object* v___x_1684_; 
v_val_1683_ = lean_ctor_get(v_cancelTk_x3f_1675_, 0);
v___x_1684_ = l_IO_CancelToken_set(v_val_1683_);
goto v___jp_1677_;
}
else
{
goto v___jp_1677_;
}
v___jp_1677_:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; size_t v___x_1680_; size_t v___x_1681_; 
lean_inc(v_a_1674_);
v___x_1678_ = l_Lean_Language_SnapshotTask_get___redArg(v_a_1674_);
v___x_1679_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(v___x_1678_);
lean_dec(v___x_1678_);
v___x_1680_ = ((size_t)1ULL);
v___x_1681_ = lean_usize_add(v_i_1670_, v___x_1680_);
v_i_1670_ = v___x_1681_;
v_b_1671_ = v___x_1676_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(lean_object* v_s_1685_){
_start:
{
lean_object* v_children_1687_; lean_object* v___x_1688_; size_t v_sz_1689_; size_t v___x_1690_; lean_object* v___x_1691_; 
v_children_1687_ = lean_ctor_get(v_s_1685_, 1);
v___x_1688_ = lean_box(0);
v_sz_1689_ = lean_array_size(v_children_1687_);
v___x_1690_ = ((size_t)0ULL);
v___x_1691_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(v_children_1687_, v_sz_1689_, v___x_1690_, v___x_1688_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave___boxed(lean_object* v_s_1692_, lean_object* v_a_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(v_s_1692_);
lean_dec_ref(v_s_1692_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0___boxed(lean_object* v_as_1695_, lean_object* v_sz_1696_, lean_object* v_i_1697_, lean_object* v_b_1698_, lean_object* v___y_1699_){
_start:
{
size_t v_sz_boxed_1700_; size_t v_i_boxed_1701_; lean_object* v_res_1702_; 
v_sz_boxed_1700_ = lean_unbox_usize(v_sz_1696_);
lean_dec(v_sz_1696_);
v_i_boxed_1701_ = lean_unbox_usize(v_i_1697_);
lean_dec(v_i_1697_);
v_res_1702_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave_spec__0(v_as_1695_, v_sz_boxed_1700_, v_i_boxed_1701_, v_b_1698_);
lean_dec_ref(v_as_1695_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_setMainModule(lean_object* v_snap_1703_, lean_object* v_m_1704_){
_start:
{
lean_object* v_result_x3f_1705_; 
v_result_x3f_1705_ = lean_ctor_get(v_snap_1703_, 4);
lean_inc(v_result_x3f_1705_);
if (lean_obj_tag(v_result_x3f_1705_) == 1)
{
lean_object* v_val_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1806_; 
v_val_1706_ = lean_ctor_get(v_result_x3f_1705_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_result_x3f_1705_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1708_ = v_result_x3f_1705_;
v_isShared_1709_ = v_isSharedCheck_1806_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_val_1706_);
lean_dec(v_result_x3f_1705_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1806_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v_toSnapshot_1710_; lean_object* v_metaSnap_1711_; lean_object* v_ictx_1712_; lean_object* v_stx_1713_; lean_object* v_parserState_1714_; lean_object* v_processedSnap_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1805_; 
v_toSnapshot_1710_ = lean_ctor_get(v_snap_1703_, 0);
v_metaSnap_1711_ = lean_ctor_get(v_snap_1703_, 1);
v_ictx_1712_ = lean_ctor_get(v_snap_1703_, 2);
v_stx_1713_ = lean_ctor_get(v_snap_1703_, 3);
v_parserState_1714_ = lean_ctor_get(v_val_1706_, 0);
v_processedSnap_1715_ = lean_ctor_get(v_val_1706_, 1);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_val_1706_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1717_ = v_val_1706_;
v_isShared_1718_ = v_isSharedCheck_1805_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_processedSnap_1715_);
lean_inc(v_parserState_1714_);
lean_dec(v_val_1706_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1805_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v_processed_1719_; lean_object* v_result_x3f_1720_; 
v_processed_1719_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_1715_);
v_result_x3f_1720_ = lean_ctor_get(v_processed_1719_, 2);
lean_inc(v_result_x3f_1720_);
if (lean_obj_tag(v_result_x3f_1720_) == 1)
{
lean_object* v_val_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1804_; 
v_val_1721_ = lean_ctor_get(v_result_x3f_1720_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_result_x3f_1720_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1723_ = v_result_x3f_1720_;
v_isShared_1724_ = v_isSharedCheck_1804_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_val_1721_);
lean_dec(v_result_x3f_1720_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1804_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v_cmdState_1725_; lean_object* v_toSnapshot_1726_; lean_object* v_metaSnap_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1802_; 
v_cmdState_1725_ = lean_ctor_get(v_val_1721_, 0);
lean_inc_ref(v_cmdState_1725_);
v_toSnapshot_1726_ = lean_ctor_get(v_processed_1719_, 0);
v_metaSnap_1727_ = lean_ctor_get(v_processed_1719_, 1);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_processed_1719_);
if (v_isSharedCheck_1802_ == 0)
{
lean_object* v_unused_1803_; 
v_unused_1803_ = lean_ctor_get(v_processed_1719_, 2);
lean_dec(v_unused_1803_);
v___x_1729_ = v_processed_1719_;
v_isShared_1730_ = v_isSharedCheck_1802_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_metaSnap_1727_);
lean_inc(v_toSnapshot_1726_);
lean_dec(v_processed_1719_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1802_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v_firstCmdSnap_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1800_; 
v_firstCmdSnap_1731_ = lean_ctor_get(v_val_1721_, 1);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_val_1721_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; 
v_unused_1801_ = lean_ctor_get(v_val_1721_, 0);
lean_dec(v_unused_1801_);
v___x_1733_ = v_val_1721_;
v_isShared_1734_ = v_isSharedCheck_1800_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_firstCmdSnap_1731_);
lean_dec(v_val_1721_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1800_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v_env_1735_; lean_object* v_messages_1736_; lean_object* v_scopes_1737_; lean_object* v_usedQuotCtxts_1738_; lean_object* v_nextMacroScope_1739_; lean_object* v_maxRecDepth_1740_; lean_object* v_ngen_1741_; lean_object* v_auxDeclNGen_1742_; lean_object* v_infoState_1743_; lean_object* v_traceState_1744_; lean_object* v_snapshotTasks_1745_; lean_object* v_prevLinterStates_1746_; lean_object* v_codeQualityEntryTasks_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1799_; 
v_env_1735_ = lean_ctor_get(v_cmdState_1725_, 0);
v_messages_1736_ = lean_ctor_get(v_cmdState_1725_, 1);
v_scopes_1737_ = lean_ctor_get(v_cmdState_1725_, 2);
v_usedQuotCtxts_1738_ = lean_ctor_get(v_cmdState_1725_, 3);
v_nextMacroScope_1739_ = lean_ctor_get(v_cmdState_1725_, 4);
v_maxRecDepth_1740_ = lean_ctor_get(v_cmdState_1725_, 5);
v_ngen_1741_ = lean_ctor_get(v_cmdState_1725_, 6);
v_auxDeclNGen_1742_ = lean_ctor_get(v_cmdState_1725_, 7);
v_infoState_1743_ = lean_ctor_get(v_cmdState_1725_, 8);
v_traceState_1744_ = lean_ctor_get(v_cmdState_1725_, 9);
v_snapshotTasks_1745_ = lean_ctor_get(v_cmdState_1725_, 10);
v_prevLinterStates_1746_ = lean_ctor_get(v_cmdState_1725_, 11);
v_codeQualityEntryTasks_1747_ = lean_ctor_get(v_cmdState_1725_, 12);
v_isSharedCheck_1799_ = !lean_is_exclusive(v_cmdState_1725_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1749_ = v_cmdState_1725_;
v_isShared_1750_ = v_isSharedCheck_1799_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1747_);
lean_inc(v_prevLinterStates_1746_);
lean_inc(v_snapshotTasks_1745_);
lean_inc(v_traceState_1744_);
lean_inc(v_infoState_1743_);
lean_inc(v_auxDeclNGen_1742_);
lean_inc(v_ngen_1741_);
lean_inc(v_maxRecDepth_1740_);
lean_inc(v_nextMacroScope_1739_);
lean_inc(v_usedQuotCtxts_1738_);
lean_inc(v_scopes_1737_);
lean_inc(v_messages_1736_);
lean_inc(v_env_1735_);
lean_dec(v_cmdState_1725_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1799_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1751_; lean_object* v_mainModule_1752_; uint8_t v___x_1753_; 
v___x_1751_ = l_Lean_Environment_header(v_env_1735_);
v_mainModule_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_mainModule_1752_);
lean_dec_ref(v___x_1751_);
v___x_1753_ = lean_name_eq(v_mainModule_1752_, v_m_1704_);
lean_dec(v_mainModule_1752_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1793_; 
lean_inc(v_stx_1713_);
lean_inc_ref(v_ictx_1712_);
lean_inc_ref(v_metaSnap_1711_);
lean_inc_ref(v_toSnapshot_1710_);
v_isSharedCheck_1793_ = !lean_is_exclusive(v_snap_1703_);
if (v_isSharedCheck_1793_ == 0)
{
lean_object* v_unused_1794_; lean_object* v_unused_1795_; lean_object* v_unused_1796_; lean_object* v_unused_1797_; lean_object* v_unused_1798_; 
v_unused_1794_ = lean_ctor_get(v_snap_1703_, 4);
lean_dec(v_unused_1794_);
v_unused_1795_ = lean_ctor_get(v_snap_1703_, 3);
lean_dec(v_unused_1795_);
v_unused_1796_ = lean_ctor_get(v_snap_1703_, 2);
lean_dec(v_unused_1796_);
v_unused_1797_ = lean_ctor_get(v_snap_1703_, 1);
lean_dec(v_unused_1797_);
v_unused_1798_ = lean_ctor_get(v_snap_1703_, 0);
lean_dec(v_unused_1798_);
v___x_1755_ = v_snap_1703_;
v_isShared_1756_ = v_isSharedCheck_1793_;
goto v_resetjp_1754_;
}
else
{
lean_dec(v_snap_1703_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1793_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v_idx_1757_; lean_object* v_parentIdxs_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1791_; 
v_idx_1757_ = lean_ctor_get(v_auxDeclNGen_1742_, 1);
v_parentIdxs_1758_ = lean_ctor_get(v_auxDeclNGen_1742_, 2);
v_isSharedCheck_1791_ = !lean_is_exclusive(v_auxDeclNGen_1742_);
if (v_isSharedCheck_1791_ == 0)
{
lean_object* v_unused_1792_; 
v_unused_1792_ = lean_ctor_get(v_auxDeclNGen_1742_, 0);
lean_dec(v_unused_1792_);
v___x_1760_ = v_auxDeclNGen_1742_;
v_isShared_1761_ = v_isSharedCheck_1791_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_parentIdxs_1758_);
lean_inc(v_idx_1757_);
lean_dec(v_auxDeclNGen_1742_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1791_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v_newEnv_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v_newEnv_1762_ = l_Lean_Environment_setMainModule(v_env_1735_, v_m_1704_);
v___x_1763_ = lean_box(0);
v___x_1764_ = l_Lean_mkPrivateName(v_newEnv_1762_, v___x_1763_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v___x_1764_);
v___x_1766_ = v___x_1760_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1790_, 1, v_idx_1757_);
lean_ctor_set(v_reuseFailAlloc_1790_, 2, v_parentIdxs_1758_);
v___x_1766_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v_newCmdState_1768_; 
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 7, v___x_1766_);
lean_ctor_set(v___x_1749_, 0, v_newEnv_1762_);
v_newCmdState_1768_ = v___x_1749_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_newEnv_1762_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v_messages_1736_);
lean_ctor_set(v_reuseFailAlloc_1789_, 2, v_scopes_1737_);
lean_ctor_set(v_reuseFailAlloc_1789_, 3, v_usedQuotCtxts_1738_);
lean_ctor_set(v_reuseFailAlloc_1789_, 4, v_nextMacroScope_1739_);
lean_ctor_set(v_reuseFailAlloc_1789_, 5, v_maxRecDepth_1740_);
lean_ctor_set(v_reuseFailAlloc_1789_, 6, v_ngen_1741_);
lean_ctor_set(v_reuseFailAlloc_1789_, 7, v___x_1766_);
lean_ctor_set(v_reuseFailAlloc_1789_, 8, v_infoState_1743_);
lean_ctor_set(v_reuseFailAlloc_1789_, 9, v_traceState_1744_);
lean_ctor_set(v_reuseFailAlloc_1789_, 10, v_snapshotTasks_1745_);
lean_ctor_set(v_reuseFailAlloc_1789_, 11, v_prevLinterStates_1746_);
lean_ctor_set(v_reuseFailAlloc_1789_, 12, v_codeQualityEntryTasks_1747_);
v_newCmdState_1768_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1770_; 
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 0, v_newCmdState_1768_);
v___x_1770_ = v___x_1733_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_newCmdState_1768_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v_firstCmdSnap_1731_);
v___x_1770_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
lean_object* v___x_1772_; 
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 0, v___x_1770_);
v___x_1772_ = v___x_1723_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v_newProcessed_1774_; 
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 2, v___x_1772_);
v_newProcessed_1774_ = v___x_1729_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_toSnapshot_1726_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_metaSnap_1727_);
lean_ctor_set(v_reuseFailAlloc_1786_, 2, v___x_1772_);
v_newProcessed_1774_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1775_ = lean_box(0);
v___x_1776_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_1775_, v_newProcessed_1774_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 1, v___x_1776_);
v___x_1778_ = v___x_1717_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_parserState_1714_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v___x_1776_);
v___x_1778_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
lean_object* v___x_1780_; 
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 0, v___x_1778_);
v___x_1780_ = v___x_1708_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1778_);
v___x_1780_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
lean_object* v___x_1782_; 
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 4, v___x_1780_);
v___x_1782_ = v___x_1755_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_toSnapshot_1710_);
lean_ctor_set(v_reuseFailAlloc_1783_, 1, v_metaSnap_1711_);
lean_ctor_set(v_reuseFailAlloc_1783_, 2, v_ictx_1712_);
lean_ctor_set(v_reuseFailAlloc_1783_, 3, v_stx_1713_);
lean_ctor_set(v_reuseFailAlloc_1783_, 4, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
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
lean_del_object(v___x_1749_);
lean_dec_ref(v_codeQualityEntryTasks_1747_);
lean_dec(v_prevLinterStates_1746_);
lean_dec_ref(v_snapshotTasks_1745_);
lean_dec_ref(v_traceState_1744_);
lean_dec_ref(v_infoState_1743_);
lean_dec_ref(v_auxDeclNGen_1742_);
lean_dec_ref(v_ngen_1741_);
lean_dec(v_maxRecDepth_1740_);
lean_dec(v_nextMacroScope_1739_);
lean_dec(v_usedQuotCtxts_1738_);
lean_dec(v_scopes_1737_);
lean_dec_ref(v_messages_1736_);
lean_dec_ref(v_env_1735_);
lean_del_object(v___x_1733_);
lean_dec_ref(v_firstCmdSnap_1731_);
lean_del_object(v___x_1729_);
lean_dec_ref(v_metaSnap_1727_);
lean_dec_ref(v_toSnapshot_1726_);
lean_del_object(v___x_1723_);
lean_del_object(v___x_1717_);
lean_dec_ref(v_parserState_1714_);
lean_del_object(v___x_1708_);
lean_dec(v_m_1704_);
return v_snap_1703_;
}
}
}
}
}
}
else
{
lean_dec(v_result_x3f_1720_);
lean_dec(v_processed_1719_);
lean_del_object(v___x_1717_);
lean_dec_ref(v_parserState_1714_);
lean_del_object(v___x_1708_);
lean_dec(v_m_1704_);
return v_snap_1703_;
}
}
}
}
else
{
lean_dec(v_result_x3f_1705_);
lean_dec(v_m_1704_);
return v_snap_1703_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1(lean_object* v_incrFile_1807_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(v_incrFile_1807_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1___boxed(lean_object* v_incrFile_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__1(v_incrFile_1810_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4(lean_object* v_opts_1813_, lean_object* v_incr_1814_, lean_object* v_res_1815_){
_start:
{
lean_object* v_cmdState_1817_; lean_object* v_env_1818_; lean_object* v_initModIdxs_1819_; lean_object* v___x_1820_; 
v_cmdState_1817_ = lean_ctor_get(v_res_1815_, 0);
lean_inc_ref(v_cmdState_1817_);
lean_dec_ref(v_res_1815_);
v_env_1818_ = lean_ctor_get(v_cmdState_1817_, 0);
lean_inc_ref(v_env_1818_);
lean_dec_ref(v_cmdState_1817_);
v_initModIdxs_1819_ = lean_ctor_get(v_incr_1814_, 1);
v___x_1820_ = l_Lean_runInitAttrsForModules(v_env_1818_, v_initModIdxs_1819_, v_opts_1813_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4___boxed(lean_object* v_opts_1821_, lean_object* v_incr_1822_, lean_object* v_res_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__4(v_opts_1821_, v_incr_1822_, v_res_1823_);
lean_dec_ref(v_incr_1822_);
lean_dec_ref(v_opts_1821_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7(){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = lean_enable_initializer_execution();
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7___boxed(lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__7();
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12(lean_object* v_env_1833_, lean_object* v_incrFile_1834_, lean_object* v_toSave_1835_){
_start:
{
lean_object* v___x_1837_; lean_object* v_regions_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; lean_object* v___x_1842_; 
v___x_1837_ = l_Lean_Environment_header(v_env_1833_);
v_regions_1838_ = lean_ctor_get(v___x_1837_, 2);
lean_inc_ref(v_regions_1838_);
lean_dec_ref(v___x_1837_);
v___x_1839_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1));
v___x_1840_ = lean_box(0);
v___x_1841_ = 1;
v___x_1842_ = lean_compacted_region_save(v_incrFile_1834_, v___x_1839_, v_toSave_1835_, v_regions_1838_, v___x_1840_, v___x_1841_);
lean_dec_ref(v_regions_1838_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___boxed(lean_object* v_env_1843_, lean_object* v_incrFile_1844_, lean_object* v_toSave_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12(v_env_1843_, v_incrFile_1844_, v_toSave_1845_);
lean_dec_ref(v_toSave_1845_);
lean_dec_ref(v_incrFile_1844_);
lean_dec_ref(v_env_1843_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(lean_object* v_opts_1848_, lean_object* v_opt_1849_){
_start:
{
lean_object* v_name_1850_; lean_object* v_map_1851_; lean_object* v___x_1852_; 
v_name_1850_ = lean_ctor_get(v_opt_1849_, 0);
v_map_1851_ = lean_ctor_get(v_opts_1848_, 0);
v___x_1852_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1851_, v_name_1850_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_box(0);
return v___x_1853_;
}
else
{
lean_object* v_val_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1863_; 
v_val_1854_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1856_ = v___x_1852_;
v_isShared_1857_ = v_isSharedCheck_1863_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_val_1854_);
lean_dec(v___x_1852_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1863_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
if (lean_obj_tag(v_val_1854_) == 0)
{
lean_object* v_v_1858_; lean_object* v___x_1860_; 
v_v_1858_ = lean_ctor_get(v_val_1854_, 0);
lean_inc_ref(v_v_1858_);
lean_dec_ref_known(v_val_1854_, 1);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 0, v_v_1858_);
v___x_1860_ = v___x_1856_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_v_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
else
{
lean_object* v___x_1862_; 
lean_del_object(v___x_1856_);
lean_dec(v_val_1854_);
v___x_1862_ = lean_box(0);
return v___x_1862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4___boxed(lean_object* v_opts_1864_, lean_object* v_opt_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(v_opts_1864_, v_opt_1865_);
lean_dec_ref(v_opt_1865_);
lean_dec_ref(v_opts_1864_);
return v_res_1866_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(lean_object* v_opts_1867_, lean_object* v_opt_1868_){
_start:
{
lean_object* v_name_1869_; lean_object* v_defValue_1870_; lean_object* v_map_1871_; lean_object* v___x_1872_; 
v_name_1869_ = lean_ctor_get(v_opt_1868_, 0);
v_defValue_1870_ = lean_ctor_get(v_opt_1868_, 1);
v_map_1871_ = lean_ctor_get(v_opts_1867_, 0);
v___x_1872_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1871_, v_name_1869_);
if (lean_obj_tag(v___x_1872_) == 0)
{
uint8_t v___x_1873_; 
v___x_1873_ = lean_unbox(v_defValue_1870_);
return v___x_1873_;
}
else
{
lean_object* v_val_1874_; 
v_val_1874_ = lean_ctor_get(v___x_1872_, 0);
lean_inc(v_val_1874_);
lean_dec_ref_known(v___x_1872_, 1);
if (lean_obj_tag(v_val_1874_) == 1)
{
uint8_t v_v_1875_; 
v_v_1875_ = lean_ctor_get_uint8(v_val_1874_, 0);
lean_dec_ref_known(v_val_1874_, 0);
return v_v_1875_;
}
else
{
uint8_t v___x_1876_; 
lean_dec(v_val_1874_);
v___x_1876_ = lean_unbox(v_defValue_1870_);
return v___x_1876_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6___boxed(lean_object* v_opts_1877_, lean_object* v_opt_1878_){
_start:
{
uint8_t v_res_1879_; lean_object* v_r_1880_; 
v_res_1879_ = l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(v_opts_1877_, v_opt_1878_);
lean_dec_ref(v_opt_1878_);
lean_dec_ref(v_opts_1877_);
v_r_1880_ = lean_box(v_res_1879_);
return v_r_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__0(lean_object* v_x1_1881_, lean_object* v_x2_1882_){
_start:
{
lean_object* v_elabSnap_1883_; lean_object* v_resultSnap_1884_; lean_object* v___x_1885_; lean_object* v_codeQualityEntryTasks_1886_; lean_object* v___x_1887_; 
v_elabSnap_1883_ = lean_ctor_get(v_x2_1882_, 3);
lean_inc_ref(v_elabSnap_1883_);
lean_dec_ref(v_x2_1882_);
v_resultSnap_1884_ = lean_ctor_get(v_elabSnap_1883_, 2);
lean_inc_ref(v_resultSnap_1884_);
lean_dec_ref(v_elabSnap_1883_);
v___x_1885_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_1884_);
v_codeQualityEntryTasks_1886_ = lean_ctor_get(v___x_1885_, 2);
lean_inc_ref(v_codeQualityEntryTasks_1886_);
lean_dec(v___x_1885_);
v___x_1887_ = l_Array_append___redArg(v_x1_1881_, v_codeQualityEntryTasks_1886_);
lean_dec_ref(v_codeQualityEntryTasks_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1(lean_object* v_x_1888_, lean_object* v_x_1889_, lean_object* v_hOpt_1890_){
_start:
{
lean_inc_ref(v_hOpt_1890_);
return v_hOpt_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__1___boxed(lean_object* v_x_1891_, lean_object* v_x_1892_, lean_object* v_hOpt_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lean_Elab_runFrontend___lam__1(v_x_1891_, v_x_1892_, v_hOpt_1893_);
lean_dec_ref(v_hOpt_1893_);
lean_dec_ref(v_x_1892_);
lean_dec(v_x_1891_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9_spec__12(size_t v_sz_1895_, size_t v_i_1896_, lean_object* v_bs_1897_){
_start:
{
uint8_t v___x_1898_; 
v___x_1898_ = lean_usize_dec_lt(v_i_1896_, v_sz_1895_);
if (v___x_1898_ == 0)
{
return v_bs_1897_;
}
else
{
lean_object* v_v_1899_; lean_object* v___x_1900_; lean_object* v_bs_x27_1901_; lean_object* v___x_1902_; size_t v___x_1903_; size_t v___x_1904_; lean_object* v___x_1905_; 
v_v_1899_ = lean_array_uget(v_bs_1897_, v_i_1896_);
v___x_1900_ = lean_unsigned_to_nat(0u);
v_bs_x27_1901_ = lean_array_uset(v_bs_1897_, v_i_1896_, v___x_1900_);
v___x_1902_ = l_Lean_instToJsonModuleArtifacts_toJson(v_v_1899_);
v___x_1903_ = ((size_t)1ULL);
v___x_1904_ = lean_usize_add(v_i_1896_, v___x_1903_);
v___x_1905_ = lean_array_uset(v_bs_x27_1901_, v_i_1896_, v___x_1902_);
v_i_1896_ = v___x_1904_;
v_bs_1897_ = v___x_1905_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9_spec__12___boxed(lean_object* v_sz_1907_, lean_object* v_i_1908_, lean_object* v_bs_1909_){
_start:
{
size_t v_sz_boxed_1910_; size_t v_i_boxed_1911_; lean_object* v_res_1912_; 
v_sz_boxed_1910_ = lean_unbox_usize(v_sz_1907_);
lean_dec(v_sz_1907_);
v_i_boxed_1911_ = lean_unbox_usize(v_i_1908_);
lean_dec(v_i_1908_);
v_res_1912_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9_spec__12(v_sz_boxed_1910_, v_i_boxed_1911_, v_bs_1909_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9(lean_object* v_a_1913_){
_start:
{
size_t v_sz_1914_; size_t v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_sz_1914_ = lean_array_size(v_a_1913_);
v___x_1915_ = ((size_t)0ULL);
v___x_1916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9_spec__12(v_sz_1914_, v___x_1915_, v_a_1913_);
v___x_1917_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2(lean_object* v_a_1918_, uint8_t v___x_1919_, lean_object* v_incrFile_1920_, lean_object* v_snapToSave_1921_){
_start:
{
lean_object* v___x_1923_; lean_object* v_regions_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1923_ = l_Lean_Environment_header(v_a_1918_);
v_regions_1924_ = lean_ctor_get(v___x_1923_, 2);
lean_inc_ref(v_regions_1924_);
lean_dec_ref(v___x_1923_);
v___x_1925_ = l_Lean_getRegularInitAttrModIdxs(v_a_1918_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v_snapToSave_1921_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_runFrontend_unsafe__12___closed__1));
v___x_1928_ = lean_box(0);
v___x_1929_ = lean_compacted_region_save(v_incrFile_1920_, v___x_1927_, v___x_1926_, v_regions_1924_, v___x_1928_, v___x_1919_);
lean_dec_ref_known(v___x_1926_, 2);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref_known(v___x_1929_, 1);
v___x_1931_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_regionsToModuleArtifacts(v_regions_1924_);
lean_dec_ref(v_regions_1924_);
v___x_1932_ = ((lean_object*)(l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot___closed__0));
v___x_1933_ = l_System_FilePath_addExtension(v_incrFile_1920_, v___x_1932_);
v___x_1934_ = l_Lean_Array_toJson___at___00Lean_Elab_runFrontend_spec__9(v___x_1931_);
v___x_1935_ = l_Lean_Json_compress(v___x_1934_);
v___x_1936_ = l_IO_FS_writeFile(v___x_1933_, v___x_1935_);
lean_dec_ref(v___x_1935_);
lean_dec_ref(v___x_1933_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1944_; 
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1936_);
if (v_isSharedCheck_1944_ == 0)
{
lean_object* v_unused_1945_; 
v_unused_1945_ = lean_ctor_get(v___x_1936_, 0);
lean_dec(v_unused_1945_);
v___x_1938_ = v___x_1936_;
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
else
{
lean_dec(v___x_1936_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = lean_runtime_forget(v_a_1930_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1940_);
v___x_1942_ = v___x_1938_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
else
{
lean_dec(v_a_1930_);
return v___x_1936_;
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec_ref(v_regions_1924_);
lean_dec_ref(v_incrFile_1920_);
v_a_1946_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1929_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1929_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__2___boxed(lean_object* v_a_1954_, lean_object* v___x_1955_, lean_object* v_incrFile_1956_, lean_object* v_snapToSave_1957_, lean_object* v___y_1958_){
_start:
{
uint8_t v___x_7915__boxed_1959_; lean_object* v_res_1960_; 
v___x_7915__boxed_1959_ = lean_unbox(v___x_1955_);
v_res_1960_ = l_Lean_Elab_runFrontend___lam__2(v_a_1954_, v___x_7915__boxed_1959_, v_incrFile_1956_, v_snapToSave_1957_);
lean_dec_ref(v_a_1954_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3(lean_object* v_fileMap_1961_, lean_object* v_a_1962_, lean_object* v___x_1963_, lean_object* v_opts_1964_, lean_object* v_val_1965_, uint8_t v___x_1966_, uint8_t v_a_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v___x_1970_; lean_object* v___y_1972_; 
v___x_1970_ = l_Lean_Linter_recordLints(v_fileMap_1961_, v_a_1962_, v___x_1963_);
if (lean_obj_tag(v___y_1968_) == 0)
{
v___y_1972_ = v___x_1970_;
goto v___jp_1971_;
}
else
{
lean_object* v_val_1977_; lean_object* v_snd_1978_; lean_object* v_snd_1979_; lean_object* v_snd_1980_; lean_object* v_fst_1981_; lean_object* v_fst_1982_; lean_object* v_snd_1983_; lean_object* v___x_1984_; 
v_val_1977_ = lean_ctor_get(v___y_1968_, 0);
lean_inc(v_val_1977_);
lean_dec_ref_known(v___y_1968_, 1);
v_snd_1978_ = lean_ctor_get(v_val_1977_, 1);
lean_inc(v_snd_1978_);
lean_dec(v_val_1977_);
v_snd_1979_ = lean_ctor_get(v_snd_1978_, 1);
lean_inc(v_snd_1979_);
lean_dec(v_snd_1978_);
v_snd_1980_ = lean_ctor_get(v_snd_1979_, 1);
lean_inc(v_snd_1980_);
v_fst_1981_ = lean_ctor_get(v_snd_1979_, 0);
lean_inc(v_fst_1981_);
lean_dec(v_snd_1979_);
v_fst_1982_ = lean_ctor_get(v_snd_1980_, 0);
lean_inc(v_fst_1982_);
v_snd_1983_ = lean_ctor_get(v_snd_1980_, 1);
lean_inc(v_snd_1983_);
lean_dec(v_snd_1980_);
v___x_1984_ = l_Lean_ModuleUsage_setLocalDigests(v___x_1970_, v_fst_1981_, v_fst_1982_, v_snd_1983_);
v___y_1972_ = v___x_1984_;
goto v___jp_1971_;
}
v___jp_1971_:
{
lean_object* v___x_1973_; uint8_t v___x_1974_; 
v___x_1973_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_1974_ = l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(v_opts_1964_, v___x_1973_);
if (v___x_1974_ == 0)
{
lean_object* v___x_1975_; 
v___x_1975_ = l_Lean_writeModule(v___y_1972_, v_val_1965_, v___x_1966_);
return v___x_1975_;
}
else
{
lean_object* v___x_1976_; 
v___x_1976_ = l_Lean_writeModule(v___y_1972_, v_val_1965_, v_a_1967_);
return v___x_1976_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__3___boxed(lean_object* v_fileMap_1985_, lean_object* v_a_1986_, lean_object* v___x_1987_, lean_object* v_opts_1988_, lean_object* v_val_1989_, lean_object* v___x_1990_, lean_object* v_a_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
uint8_t v___x_7989__boxed_1994_; uint8_t v_a_7990__boxed_1995_; lean_object* v_res_1996_; 
v___x_7989__boxed_1994_ = lean_unbox(v___x_1990_);
v_a_7990__boxed_1995_ = lean_unbox(v_a_1991_);
v_res_1996_ = l_Lean_Elab_runFrontend___lam__3(v_fileMap_1985_, v_a_1986_, v___x_1987_, v_opts_1988_, v_val_1989_, v___x_7989__boxed_1994_, v_a_7990__boxed_1995_, v___y_1992_);
lean_dec_ref(v_opts_1988_);
lean_dec_ref(v___x_1987_);
lean_dec_ref(v_fileMap_1985_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(lean_object* v_as_1997_, size_t v_i_1998_, size_t v_stop_1999_, lean_object* v_b_2000_){
_start:
{
uint8_t v___x_2002_; 
v___x_2002_ = lean_usize_dec_eq(v_i_1998_, v_stop_1999_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = lean_array_uget_borrowed(v_as_1997_, v_i_1998_);
lean_inc(v___x_2003_);
v___x_2004_ = lean_load_dynlib(v___x_2003_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; size_t v___x_2006_; size_t v___x_2007_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
lean_inc(v_a_2005_);
lean_dec_ref_known(v___x_2004_, 1);
v___x_2006_ = ((size_t)1ULL);
v___x_2007_ = lean_usize_add(v_i_1998_, v___x_2006_);
v_i_1998_ = v___x_2007_;
v_b_2000_ = v_a_2005_;
goto _start;
}
else
{
return v___x_2004_;
}
}
else
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v_b_2000_);
return v___x_2009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1___boxed(lean_object* v_as_2010_, lean_object* v_i_2011_, lean_object* v_stop_2012_, lean_object* v_b_2013_, lean_object* v___y_2014_){
_start:
{
size_t v_i_boxed_2015_; size_t v_stop_boxed_2016_; lean_object* v_res_2017_; 
v_i_boxed_2015_ = lean_unbox_usize(v_i_2011_);
lean_dec(v_i_2011_);
v_stop_boxed_2016_ = lean_unbox_usize(v_stop_2012_);
lean_dec(v_stop_2012_);
v_res_2017_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(v_as_2010_, v_i_boxed_2015_, v_stop_boxed_2016_, v_b_2013_);
lean_dec_ref(v_as_2010_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4(lean_object* v_setup_x3f_2018_, lean_object* v___f_2019_, lean_object* v___x_2020_, lean_object* v_plugins_2021_, uint32_t v_trustLevel_2022_, uint8_t v___x_2023_, lean_object* v_mainModuleName_2024_, lean_object* v_stx_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v___y_2031_; lean_object* v___y_2032_; uint8_t v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2035_; 
if (lean_obj_tag(v_setup_x3f_2018_) == 1)
{
lean_object* v_val_2042_; lean_object* v_name_2043_; lean_object* v_package_x3f_2044_; uint8_t v_isModule_2045_; lean_object* v_imports_x3f_2046_; lean_object* v_importArts_2047_; lean_object* v_dynlibs_2048_; lean_object* v_plugins_2049_; lean_object* v_options_2050_; lean_object* v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
lean_dec(v_mainModuleName_2024_);
v_val_2042_ = lean_ctor_get(v_setup_x3f_2018_, 0);
lean_inc(v_val_2042_);
lean_dec_ref_known(v_setup_x3f_2018_, 1);
v_name_2043_ = lean_ctor_get(v_val_2042_, 0);
lean_inc(v_name_2043_);
v_package_x3f_2044_ = lean_ctor_get(v_val_2042_, 1);
lean_inc(v_package_x3f_2044_);
v_isModule_2045_ = lean_ctor_get_uint8(v_val_2042_, sizeof(void*)*7);
v_imports_x3f_2046_ = lean_ctor_get(v_val_2042_, 2);
lean_inc(v_imports_x3f_2046_);
v_importArts_2047_ = lean_ctor_get(v_val_2042_, 3);
lean_inc(v_importArts_2047_);
v_dynlibs_2048_ = lean_ctor_get(v_val_2042_, 4);
lean_inc_ref(v_dynlibs_2048_);
v_plugins_2049_ = lean_ctor_get(v_val_2042_, 5);
lean_inc_ref(v_plugins_2049_);
v_options_2050_ = lean_ctor_get(v_val_2042_, 6);
lean_inc(v_options_2050_);
lean_dec(v_val_2042_);
v___x_2056_ = lean_unsigned_to_nat(0u);
v___x_2057_ = lean_array_get_size(v_dynlibs_2048_);
v___x_2058_ = lean_nat_dec_lt(v___x_2056_, v___x_2057_);
if (v___x_2058_ == 0)
{
lean_dec_ref(v_dynlibs_2048_);
goto v___jp_2051_;
}
else
{
lean_object* v___x_2059_; size_t v___x_2060_; size_t v___x_2061_; lean_object* v___x_2062_; 
v___x_2059_ = lean_box(0);
v___x_2060_ = ((size_t)0ULL);
v___x_2061_ = lean_usize_of_nat(v___x_2057_);
v___x_2062_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__1(v_dynlibs_2048_, v___x_2060_, v___x_2061_, v___x_2059_);
lean_dec_ref(v_dynlibs_2048_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_dec_ref_known(v___x_2062_, 1);
goto v___jp_2051_;
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec(v_options_2050_);
lean_dec_ref(v_plugins_2049_);
lean_dec(v_importArts_2047_);
lean_dec(v_imports_x3f_2046_);
lean_dec(v_package_x3f_2044_);
lean_dec(v_name_2043_);
lean_dec(v_stx_2025_);
lean_dec_ref(v_plugins_2021_);
lean_dec_ref(v___x_2020_);
lean_dec_ref(v___f_2019_);
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2062_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2062_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
v___jp_2051_:
{
uint8_t v___x_2052_; uint8_t v___x_2053_; 
v___x_2052_ = l_Lean_Elab_HeaderSyntax_isModule(v_stx_2025_);
v___x_2053_ = lean_strict_or(v_isModule_2045_, v___x_2052_);
if (lean_obj_tag(v_imports_x3f_2046_) == 0)
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_2025_, v___x_2023_);
v___y_2029_ = v_importArts_2047_;
v___y_2030_ = v_name_2043_;
v___y_2031_ = v_plugins_2049_;
v___y_2032_ = v_package_x3f_2044_;
v___y_2033_ = v___x_2053_;
v___y_2034_ = v_options_2050_;
v___y_2035_ = v___x_2054_;
goto v___jp_2028_;
}
else
{
lean_object* v_val_2055_; 
lean_dec(v_stx_2025_);
v_val_2055_ = lean_ctor_get(v_imports_x3f_2046_, 0);
lean_inc(v_val_2055_);
lean_dec_ref_known(v_imports_x3f_2046_, 1);
v___y_2029_ = v_importArts_2047_;
v___y_2030_ = v_name_2043_;
v___y_2031_ = v_plugins_2049_;
v___y_2032_ = v_package_x3f_2044_;
v___y_2033_ = v___x_2053_;
v___y_2034_ = v_options_2050_;
v___y_2035_ = v_val_2055_;
goto v___jp_2028_;
}
}
}
else
{
lean_object* v___x_2071_; uint8_t v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
lean_dec_ref(v___f_2019_);
lean_dec(v_setup_x3f_2018_);
v___x_2071_ = lean_box(0);
v___x_2072_ = l_Lean_Elab_HeaderSyntax_isModule(v_stx_2025_);
v___x_2073_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_2025_, v___x_2023_);
v___x_2074_ = lean_box(1);
v___x_2075_ = lean_alloc_ctor(0, 6, 5);
lean_ctor_set(v___x_2075_, 0, v_mainModuleName_2024_);
lean_ctor_set(v___x_2075_, 1, v___x_2071_);
lean_ctor_set(v___x_2075_, 2, v___x_2073_);
lean_ctor_set(v___x_2075_, 3, v___x_2020_);
lean_ctor_set(v___x_2075_, 4, v___x_2074_);
lean_ctor_set(v___x_2075_, 5, v_plugins_2021_);
lean_ctor_set_uint8(v___x_2075_, sizeof(void*)*6 + 4, v___x_2072_);
lean_ctor_set_uint32(v___x_2075_, sizeof(void*)*6, v_trustLevel_2022_);
v___x_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
v___x_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
return v___x_2077_;
}
v___jp_2028_:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2036_ = l_Lean_LeanOptions_toOptions(v___y_2034_);
v___x_2037_ = l_Lean_Options_mergeBy(v___f_2019_, v___x_2020_, v___x_2036_);
v___x_2038_ = l_Array_append___redArg(v_plugins_2021_, v___y_2031_);
lean_dec_ref(v___y_2031_);
v___x_2039_ = lean_alloc_ctor(0, 6, 5);
lean_ctor_set(v___x_2039_, 0, v___y_2030_);
lean_ctor_set(v___x_2039_, 1, v___y_2032_);
lean_ctor_set(v___x_2039_, 2, v___y_2035_);
lean_ctor_set(v___x_2039_, 3, v___x_2037_);
lean_ctor_set(v___x_2039_, 4, v___y_2029_);
lean_ctor_set(v___x_2039_, 5, v___x_2038_);
lean_ctor_set_uint8(v___x_2039_, sizeof(void*)*6 + 4, v___y_2033_);
lean_ctor_set_uint32(v___x_2039_, sizeof(void*)*6, v_trustLevel_2022_);
v___x_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
v___x_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
return v___x_2041_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__4___boxed(lean_object* v_setup_x3f_2078_, lean_object* v___f_2079_, lean_object* v___x_2080_, lean_object* v_plugins_2081_, lean_object* v_trustLevel_2082_, lean_object* v___x_2083_, lean_object* v_mainModuleName_2084_, lean_object* v_stx_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
uint32_t v_trustLevel_boxed_2088_; uint8_t v___x_8059__boxed_2089_; lean_object* v_res_2090_; 
v_trustLevel_boxed_2088_ = lean_unbox_uint32(v_trustLevel_2082_);
lean_dec(v_trustLevel_2082_);
v___x_8059__boxed_2089_ = lean_unbox(v___x_2083_);
v_res_2090_ = l_Lean_Elab_runFrontend___lam__4(v_setup_x3f_2078_, v___f_2079_, v___x_2080_, v_plugins_2081_, v_trustLevel_boxed_2088_, v___x_8059__boxed_2089_, v_mainModuleName_2084_, v_stx_2085_, v___y_2086_);
lean_dec_ref(v___y_2086_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__5(lean_object* v_val_2091_, lean_object* v_initModIdxs_2092_, lean_object* v___x_2093_){
_start:
{
lean_object* v_cmdState_2095_; lean_object* v_env_2096_; lean_object* v___x_2097_; 
v_cmdState_2095_ = lean_ctor_get(v_val_2091_, 0);
lean_inc_ref(v_cmdState_2095_);
lean_dec_ref(v_val_2091_);
v_env_2096_ = lean_ctor_get(v_cmdState_2095_, 0);
lean_inc_ref(v_env_2096_);
lean_dec_ref(v_cmdState_2095_);
v___x_2097_ = l_Lean_runInitAttrsForModules(v_env_2096_, v_initModIdxs_2092_, v___x_2093_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___lam__5___boxed(lean_object* v_val_2098_, lean_object* v_initModIdxs_2099_, lean_object* v___x_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_Lean_Elab_runFrontend___lam__5(v_val_2098_, v_initModIdxs_2099_, v___x_2100_);
lean_dec_ref(v___x_2100_);
lean_dec_ref(v_initModIdxs_2099_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(size_t v_sz_2103_, size_t v_i_2104_, lean_object* v_bs_2105_){
_start:
{
uint8_t v___x_2106_; 
v___x_2106_ = lean_usize_dec_lt(v_i_2104_, v_sz_2103_);
if (v___x_2106_ == 0)
{
return v_bs_2105_;
}
else
{
lean_object* v_v_2107_; lean_object* v_traces_2108_; lean_object* v___x_2109_; lean_object* v_bs_x27_2110_; size_t v___x_2111_; size_t v___x_2112_; lean_object* v___x_2113_; 
v_v_2107_ = lean_array_uget_borrowed(v_bs_2105_, v_i_2104_);
v_traces_2108_ = lean_ctor_get(v_v_2107_, 3);
lean_inc_ref(v_traces_2108_);
v___x_2109_ = lean_unsigned_to_nat(0u);
v_bs_x27_2110_ = lean_array_uset(v_bs_2105_, v_i_2104_, v___x_2109_);
v___x_2111_ = ((size_t)1ULL);
v___x_2112_ = lean_usize_add(v_i_2104_, v___x_2111_);
v___x_2113_ = lean_array_uset(v_bs_x27_2110_, v_i_2104_, v_traces_2108_);
v_i_2104_ = v___x_2112_;
v_bs_2105_ = v___x_2113_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5___boxed(lean_object* v_sz_2115_, lean_object* v_i_2116_, lean_object* v_bs_2117_){
_start:
{
size_t v_sz_boxed_2118_; size_t v_i_boxed_2119_; lean_object* v_res_2120_; 
v_sz_boxed_2118_ = lean_unbox_usize(v_sz_2115_);
lean_dec(v_sz_2115_);
v_i_boxed_2119_ = lean_unbox_usize(v_i_2116_);
lean_dec(v_i_2116_);
v_res_2120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(v_sz_boxed_2118_, v_i_boxed_2119_, v_bs_2117_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(lean_object* v_as_2121_, size_t v_i_2122_, size_t v_stop_2123_, lean_object* v_b_2124_){
_start:
{
uint8_t v___x_2125_; 
v___x_2125_ = lean_usize_dec_eq(v_i_2122_, v_stop_2123_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; lean_object* v___x_2127_; size_t v___x_2128_; size_t v___x_2129_; 
v___x_2126_ = lean_array_uget_borrowed(v_as_2121_, v_i_2122_);
lean_inc(v___x_2126_);
v___x_2127_ = l_Lean_NameHashSet_insert(v_b_2124_, v___x_2126_);
v___x_2128_ = ((size_t)1ULL);
v___x_2129_ = lean_usize_add(v_i_2122_, v___x_2128_);
v_i_2122_ = v___x_2129_;
v_b_2124_ = v___x_2127_;
goto _start;
}
else
{
return v_b_2124_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7___boxed(lean_object* v_as_2131_, lean_object* v_i_2132_, lean_object* v_stop_2133_, lean_object* v_b_2134_){
_start:
{
size_t v_i_boxed_2135_; size_t v_stop_boxed_2136_; lean_object* v_res_2137_; 
v_i_boxed_2135_ = lean_unbox_usize(v_i_2132_);
lean_dec(v_i_2132_);
v_stop_boxed_2136_ = lean_unbox_usize(v_stop_2133_);
lean_dec(v_stop_2133_);
v_res_2137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(v_as_2131_, v_i_boxed_2135_, v_stop_boxed_2136_, v_b_2134_);
lean_dec_ref(v_as_2131_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(lean_object* v_o_2141_, lean_object* v_k_2142_, uint8_t v_v_2143_){
_start:
{
lean_object* v_map_2144_; uint8_t v_hasTrace_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2159_; 
v_map_2144_ = lean_ctor_get(v_o_2141_, 0);
v_hasTrace_2145_ = lean_ctor_get_uint8(v_o_2141_, sizeof(void*)*1);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_o_2141_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2147_ = v_o_2141_;
v_isShared_2148_ = v_isSharedCheck_2159_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_map_2144_);
lean_dec(v_o_2141_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2159_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2149_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2149_, 0, v_v_2143_);
lean_inc(v_k_2142_);
v___x_2150_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_2142_, v___x_2149_, v_map_2144_);
if (v_hasTrace_2145_ == 0)
{
lean_object* v___x_2151_; uint8_t v___x_2152_; lean_object* v___x_2154_; 
v___x_2151_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___closed__1));
v___x_2152_ = l_Lean_Name_isPrefixOf(v___x_2151_, v_k_2142_);
lean_dec(v_k_2142_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 0, v___x_2150_);
v___x_2154_ = v___x_2147_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v___x_2150_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
lean_ctor_set_uint8(v___x_2154_, sizeof(void*)*1, v___x_2152_);
return v___x_2154_;
}
}
else
{
lean_object* v___x_2157_; 
lean_dec(v_k_2142_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 0, v___x_2150_);
v___x_2157_ = v___x_2147_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2150_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*1, v_hasTrace_2145_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3___boxed(lean_object* v_o_2160_, lean_object* v_k_2161_, lean_object* v_v_2162_){
_start:
{
uint8_t v_v_boxed_2163_; lean_object* v_res_2164_; 
v_v_boxed_2163_ = lean_unbox(v_v_2162_);
v_res_2164_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(v_o_2160_, v_k_2161_, v_v_boxed_2163_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(lean_object* v_opts_2165_, lean_object* v_opt_2166_, uint8_t v_val_2167_){
_start:
{
lean_object* v_name_2168_; lean_object* v___x_2169_; 
v_name_2168_ = lean_ctor_get(v_opt_2166_, 0);
lean_inc(v_name_2168_);
lean_dec_ref(v_opt_2166_);
v___x_2169_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0_spec__3(v_opts_2165_, v_name_2168_, v_val_2167_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0___boxed(lean_object* v_opts_2170_, lean_object* v_opt_2171_, lean_object* v_val_2172_){
_start:
{
uint8_t v_val_boxed_2173_; lean_object* v_res_2174_; 
v_val_boxed_2173_ = lean_unbox(v_val_2172_);
v_res_2174_ = l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(v_opts_2170_, v_opt_2171_, v_val_boxed_2173_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(lean_object* v_opts_2175_, lean_object* v_opt_2176_, uint8_t v_val_2177_){
_start:
{
lean_object* v_name_2178_; lean_object* v_map_2179_; uint8_t v___x_2180_; 
v_name_2178_ = lean_ctor_get(v_opt_2176_, 0);
v_map_2179_ = lean_ctor_get(v_opts_2175_, 0);
v___x_2180_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_2178_, v_map_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; 
v___x_2181_ = l_Lean_Option_set___at___00Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0_spec__0(v_opts_2175_, v_opt_2176_, v_val_2177_);
return v___x_2181_;
}
else
{
lean_dec_ref(v_opt_2176_);
return v_opts_2175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0___boxed(lean_object* v_opts_2182_, lean_object* v_opt_2183_, lean_object* v_val_2184_){
_start:
{
uint8_t v_val_boxed_2185_; lean_object* v_res_2186_; 
v_val_boxed_2185_ = lean_unbox(v_val_2184_);
v_res_2186_ = l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(v_opts_2182_, v_opt_2183_, v_val_boxed_2185_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__10(lean_object* v_as_2187_, size_t v_i_2188_, size_t v_stop_2189_, lean_object* v_b_2190_){
_start:
{
uint8_t v___x_2191_; 
v___x_2191_ = lean_usize_dec_eq(v_i_2188_, v_stop_2189_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2192_; uint8_t v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; size_t v___x_2196_; size_t v___x_2197_; 
v___x_2192_ = lean_array_uget_borrowed(v_as_2187_, v_i_2188_);
v___x_2193_ = 2;
v___x_2194_ = lean_box(v___x_2193_);
lean_inc(v___x_2192_);
v___x_2195_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_2192_, v___x_2194_, v_b_2190_);
v___x_2196_ = ((size_t)1ULL);
v___x_2197_ = lean_usize_add(v_i_2188_, v___x_2196_);
v_i_2188_ = v___x_2197_;
v_b_2190_ = v___x_2195_;
goto _start;
}
else
{
return v_b_2190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__10___boxed(lean_object* v_as_2199_, lean_object* v_i_2200_, lean_object* v_stop_2201_, lean_object* v_b_2202_){
_start:
{
size_t v_i_boxed_2203_; size_t v_stop_boxed_2204_; lean_object* v_res_2205_; 
v_i_boxed_2203_ = lean_unbox_usize(v_i_2200_);
lean_dec(v_i_2200_);
v_stop_boxed_2204_ = lean_unbox_usize(v_stop_2201_);
lean_dec(v_stop_2201_);
v_res_2205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__10(v_as_2199_, v_i_boxed_2203_, v_stop_boxed_2204_, v_b_2202_);
lean_dec_ref(v_as_2199_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___lam__0(lean_object* v_a_2206_, lean_object* v_ps_2207_){
_start:
{
lean_object* v_importedEntries_2208_; lean_object* v_state_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2218_; 
v_importedEntries_2208_ = lean_ctor_get(v_ps_2207_, 0);
v_state_2209_ = lean_ctor_get(v_ps_2207_, 1);
v_isSharedCheck_2218_ = !lean_is_exclusive(v_ps_2207_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2211_ = v_ps_2207_;
v_isShared_2212_ = v_isSharedCheck_2218_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_state_2209_);
lean_inc(v_importedEntries_2208_);
lean_dec(v_ps_2207_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2218_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2216_; 
v___x_2213_ = lean_task_get_own(v_a_2206_);
v___x_2214_ = l_Array_append___redArg(v_state_2209_, v___x_2213_);
lean_dec(v___x_2213_);
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 1, v___x_2214_);
v___x_2216_ = v___x_2211_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_importedEntries_2208_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v___x_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(lean_object* v_as_2219_, size_t v_sz_2220_, size_t v_i_2221_, lean_object* v_b_2222_){
_start:
{
lean_object* v_a_2225_; uint8_t v___x_2229_; 
v___x_2229_ = lean_usize_dec_lt(v_i_2221_, v_sz_2220_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; 
v___x_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2230_, 0, v_b_2222_);
return v___x_2230_;
}
else
{
lean_object* v___x_2231_; lean_object* v_toEnvExtension_2232_; lean_object* v_asyncMode_2233_; uint8_t v_logWrites_2234_; lean_object* v_a_2235_; lean_object* v___f_2236_; lean_object* v___x_2237_; 
v___x_2231_ = l_Lean_Linter_codeQualityLogExt;
v_toEnvExtension_2232_ = lean_ctor_get(v___x_2231_, 0);
v_asyncMode_2233_ = lean_ctor_get(v_toEnvExtension_2232_, 2);
v_logWrites_2234_ = lean_ctor_get_uint8(v_toEnvExtension_2232_, sizeof(void*)*6);
v_a_2235_ = lean_array_uget_borrowed(v_as_2219_, v_i_2221_);
lean_inc(v_a_2235_);
v___f_2236_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_2236_, 0, v_a_2235_);
v___x_2237_ = lean_box(0);
if (v_logWrites_2234_ == 0)
{
lean_object* v___x_2238_; 
lean_inc_ref(v_toEnvExtension_2232_);
v___x_2238_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2232_, v_b_2222_, v___f_2236_, v_asyncMode_2233_, v___x_2237_, v___x_2229_);
v_a_2225_ = v___x_2238_;
goto v___jp_2224_;
}
else
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
lean_inc_ref_n(v_toEnvExtension_2232_, 2);
v___x_2239_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2232_, v_b_2222_);
lean_dec_ref(v_b_2222_);
v___x_2240_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2232_, v___x_2239_, v___f_2236_, v_asyncMode_2233_, v___x_2237_, v___x_2229_);
v_a_2225_ = v___x_2240_;
goto v___jp_2224_;
}
}
v___jp_2224_:
{
size_t v___x_2226_; size_t v___x_2227_; 
v___x_2226_ = ((size_t)1ULL);
v___x_2227_ = lean_usize_add(v_i_2221_, v___x_2226_);
v_i_2221_ = v___x_2227_;
v_b_2222_ = v_a_2225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3___boxed(lean_object* v_as_2241_, lean_object* v_sz_2242_, lean_object* v_i_2243_, lean_object* v_b_2244_, lean_object* v___y_2245_){
_start:
{
size_t v_sz_boxed_2246_; size_t v_i_boxed_2247_; lean_object* v_res_2248_; 
v_sz_boxed_2246_ = lean_unbox_usize(v_sz_2242_);
lean_dec(v_sz_2242_);
v_i_boxed_2247_ = lean_unbox_usize(v_i_2243_);
lean_dec(v_i_2243_);
v_res_2248_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(v_as_2241_, v_sz_boxed_2246_, v_i_boxed_2247_, v_b_2244_);
lean_dec_ref(v_as_2241_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0(lean_object* v_s_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2253_ = l_Lean_Language_Snapshot_transform(v_s_2251_, v___y_2252_);
v___x_2254_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___closed__0));
v___x_2255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2253_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0___boxed(lean_object* v_s_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___lam__0(v_s_2256_, v___y_2257_);
lean_dec_ref(v___y_2257_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(lean_object* v_t_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v___f_2262_; lean_object* v___x_2263_; 
v___f_2262_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___closed__0));
v___x_2263_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_2260_, v___f_2262_, v_a_2261_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3___boxed(lean_object* v_t_2264_, lean_object* v_a_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(v_t_2264_, v_a_2265_);
lean_dec_ref(v_a_2265_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(lean_object* v_t_2268_, lean_object* v_a_2269_){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___closed__0));
v___x_2271_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_2268_, v___x_2270_, v_a_2269_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8___boxed(lean_object* v_t_2272_, lean_object* v_a_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(v_t_2272_, v_a_2273_);
lean_dec_ref(v_a_2273_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0(lean_object* v_s_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v_toSnapshot_2277_; lean_object* v_metaSnap_2278_; lean_object* v_result_x3f_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___y_2283_; 
v_toSnapshot_2277_ = lean_ctor_get(v_s_2275_, 0);
lean_inc_ref(v_toSnapshot_2277_);
v_metaSnap_2278_ = lean_ctor_get(v_s_2275_, 1);
lean_inc_ref(v_metaSnap_2278_);
v_result_x3f_2279_ = lean_ctor_get(v_s_2275_, 2);
lean_inc(v_result_x3f_2279_);
lean_dec_ref(v_s_2275_);
v___x_2280_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_2277_, v___y_2276_);
v___x_2281_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(v_metaSnap_2278_, v___y_2276_);
if (lean_obj_tag(v_result_x3f_2279_) == 0)
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_box(0);
v___y_2283_ = v___x_2289_;
goto v___jp_2282_;
}
else
{
lean_object* v_val_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2299_; 
v_val_2290_ = lean_ctor_get(v_result_x3f_2279_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_result_x3f_2279_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2292_ = v_result_x3f_2279_;
v_isShared_2293_ = v_isSharedCheck_2299_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_val_2290_);
lean_dec(v_result_x3f_2279_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2299_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v_firstCmdSnap_2294_; lean_object* v___x_2295_; lean_object* v___x_2297_; 
v_firstCmdSnap_2294_ = lean_ctor_get(v_val_2290_, 1);
lean_inc_ref(v_firstCmdSnap_2294_);
lean_dec(v_val_2290_);
v___x_2295_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4_spec__8(v_firstCmdSnap_2294_, v___y_2276_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 0, v___x_2295_);
v___x_2297_ = v___x_2292_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v___x_2295_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
v___y_2283_ = v___x_2297_;
goto v___jp_2282_;
}
}
}
v___jp_2282_:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2284_ = lean_unsigned_to_nat(1u);
v___x_2285_ = lean_mk_empty_array_with_capacity(v___x_2284_);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2281_);
v___x_2287_ = l_Lean_Language_Lean_pushOpt___redArg(v___y_2283_, v___x_2286_);
v___x_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2280_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
return v___x_2288_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0___boxed(lean_object* v_s_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___lam__0(v_s_2300_, v___y_2301_);
lean_dec_ref(v___y_2301_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(lean_object* v_t_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v___f_2306_; lean_object* v___x_2307_; 
v___f_2306_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___closed__0));
v___x_2307_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_2304_, v___f_2306_, v_a_2305_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4___boxed(lean_object* v_t_2308_, lean_object* v_a_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(v_t_2308_, v_a_2309_);
lean_dec_ref(v_a_2309_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2(lean_object* v_a_2311_){
_start:
{
lean_object* v_toSnapshot_2312_; lean_object* v_metaSnap_2313_; lean_object* v_result_x3f_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___y_2319_; 
v_toSnapshot_2312_ = lean_ctor_get(v_a_2311_, 0);
lean_inc_ref(v_toSnapshot_2312_);
v_metaSnap_2313_ = lean_ctor_get(v_a_2311_, 1);
lean_inc_ref(v_metaSnap_2313_);
v_result_x3f_2314_ = lean_ctor_get(v_a_2311_, 4);
lean_inc(v_result_x3f_2314_);
lean_dec_ref(v_a_2311_);
v___x_2315_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_2316_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_2312_, v___x_2315_);
v___x_2317_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__3(v_metaSnap_2313_, v___x_2315_);
if (lean_obj_tag(v_result_x3f_2314_) == 0)
{
lean_object* v___x_2325_; 
v___x_2325_ = lean_box(0);
v___y_2319_ = v___x_2325_;
goto v___jp_2318_;
}
else
{
lean_object* v_val_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2335_; 
v_val_2326_ = lean_ctor_get(v_result_x3f_2314_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v_result_x3f_2314_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2328_ = v_result_x3f_2314_;
v_isShared_2329_ = v_isSharedCheck_2335_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_val_2326_);
lean_dec(v_result_x3f_2314_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2335_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v_processedSnap_2330_; lean_object* v___x_2331_; lean_object* v___x_2333_; 
v_processedSnap_2330_ = lean_ctor_get(v_val_2326_, 1);
lean_inc_ref(v_processedSnap_2330_);
lean_dec(v_val_2326_);
v___x_2331_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2_spec__4(v_processedSnap_2330_, v___x_2315_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v___x_2331_);
v___x_2333_ = v___x_2328_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2331_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
v___y_2319_ = v___x_2333_;
goto v___jp_2318_;
}
}
}
v___jp_2318_:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2320_ = lean_unsigned_to_nat(1u);
v___x_2321_ = lean_mk_empty_array_with_capacity(v___x_2320_);
v___x_2322_ = lean_array_push(v___x_2321_, v___x_2317_);
v___x_2323_ = l_Lean_Language_Lean_pushOpt___redArg(v___y_2319_, v___x_2322_);
v___x_2324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2316_);
lean_ctor_set(v___x_2324_, 1, v___x_2323_);
return v___x_2324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__8(lean_object* v_as_2336_, size_t v_i_2337_, size_t v_stop_2338_, lean_object* v_b_2339_){
_start:
{
lean_object* v___y_2341_; uint8_t v___x_2345_; 
v___x_2345_ = lean_usize_dec_eq(v_i_2337_, v_stop_2338_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; lean_object* v_infoTree_x3f_2347_; 
v___x_2346_ = lean_array_uget_borrowed(v_as_2336_, v_i_2337_);
v_infoTree_x3f_2347_ = lean_ctor_get(v___x_2346_, 2);
if (lean_obj_tag(v_infoTree_x3f_2347_) == 1)
{
lean_object* v_val_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v_val_2348_ = lean_ctor_get(v_infoTree_x3f_2347_, 0);
v___x_2349_ = lean_unsigned_to_nat(1u);
v___x_2350_ = lean_mk_empty_array_with_capacity(v___x_2349_);
lean_inc(v_val_2348_);
v___x_2351_ = lean_array_push(v___x_2350_, v_val_2348_);
v___x_2352_ = l_Array_append___redArg(v_b_2339_, v___x_2351_);
lean_dec_ref(v___x_2351_);
v___y_2341_ = v___x_2352_;
goto v___jp_2340_;
}
else
{
lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2353_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_Frontend_0__Lean_Elab_IO_processCommandsIncrementally_go_spec__1___closed__0));
v___x_2354_ = l_Array_append___redArg(v_b_2339_, v___x_2353_);
v___y_2341_ = v___x_2354_;
goto v___jp_2340_;
}
}
else
{
return v_b_2339_;
}
v___jp_2340_:
{
size_t v___x_2342_; size_t v___x_2343_; 
v___x_2342_ = ((size_t)1ULL);
v___x_2343_ = lean_usize_add(v_i_2337_, v___x_2342_);
v_i_2337_ = v___x_2343_;
v_b_2339_ = v___y_2341_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__8___boxed(lean_object* v_as_2355_, lean_object* v_i_2356_, lean_object* v_stop_2357_, lean_object* v_b_2358_){
_start:
{
size_t v_i_boxed_2359_; size_t v_stop_boxed_2360_; lean_object* v_res_2361_; 
v_i_boxed_2359_ = lean_unbox_usize(v_i_2356_);
lean_dec(v_i_2356_);
v_stop_boxed_2360_ = lean_unbox_usize(v_stop_2357_);
lean_dec(v_stop_2357_);
v_res_2361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__8(v_as_2355_, v_i_boxed_2359_, v_stop_boxed_2360_, v_b_2358_);
lean_dec_ref(v_as_2355_);
return v_res_2361_;
}
}
static double _init_l_Lean_Elab_runFrontend___closed__2(void){
_start:
{
lean_object* v___x_2364_; double v___x_2365_; 
v___x_2364_ = lean_unsigned_to_nat(1000000000u);
v___x_2365_ = lean_float_of_nat(v___x_2364_);
return v___x_2365_;
}
}
static lean_object* _init_l_Lean_Elab_runFrontend___closed__4(void){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = lean_box(0);
v___x_2368_ = lean_unsigned_to_nat(16u);
v___x_2369_ = lean_mk_array(v___x_2368_, v___x_2367_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend(lean_object* v_input_2370_, lean_object* v_opts_2371_, lean_object* v_fileName_2372_, lean_object* v_mainModuleName_2373_, uint32_t v_trustLevel_2374_, lean_object* v_oleanFileName_x3f_2375_, lean_object* v_ileanFileName_x3f_2376_, uint8_t v_jsonOutput_2377_, lean_object* v_errorOnKinds_2378_, lean_object* v_plugins_2379_, uint8_t v_printStats_2380_, lean_object* v_setup_x3f_2381_, lean_object* v_incrSaveFileName_x3f_2382_, lean_object* v_incrLoadFileName_x3f_2383_, lean_object* v_incrHeaderSaveFileName_x3f_2384_, lean_object* v_usageFileName_x3f_2385_){
_start:
{
lean_object* v___y_2388_; lean_object* v___y_2389_; lean_object* v___f_2393_; lean_object* v___f_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; double v___x_2397_; double v___x_2398_; double v___x_2399_; size_t v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; uint8_t v___y_2407_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2464_; size_t v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; uint8_t v___y_2470_; lean_object* v___y_2471_; uint8_t v___y_2472_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; uint8_t v___y_2511_; lean_object* v___y_2512_; uint8_t v___y_2513_; size_t v___y_2514_; lean_object* v___y_2515_; lean_object* v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2518_; lean_object* v___y_2519_; lean_object* v___y_2520_; lean_object* v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; uint8_t v___y_2524_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___y_2540_; uint8_t v___y_2541_; lean_object* v___y_2542_; uint8_t v___y_2543_; size_t v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; uint8_t v___y_2558_; uint8_t v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; uint8_t v___y_2563_; lean_object* v___y_2564_; uint8_t v___y_2565_; lean_object* v___y_2566_; size_t v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2616_; lean_object* v___y_2617_; uint8_t v___y_2618_; uint8_t v___y_2619_; lean_object* v___y_2620_; lean_object* v___y_2621_; size_t v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; uint8_t v___y_2628_; lean_object* v___y_2629_; uint8_t v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2653_; lean_object* v___y_2654_; uint8_t v___y_2655_; uint8_t v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; size_t v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; uint8_t v___y_2665_; uint8_t v___y_2666_; lean_object* v___y_2676_; lean_object* v___y_2677_; uint8_t v___y_2678_; uint8_t v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; size_t v___y_2682_; lean_object* v___y_2683_; lean_object* v___y_2684_; lean_object* v___y_2685_; lean_object* v___y_2686_; uint8_t v___y_2687_; uint8_t v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2700_; lean_object* v___y_2701_; lean_object* v___y_2702_; uint8_t v___y_2703_; uint8_t v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; size_t v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; uint8_t v___y_2711_; uint8_t v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2726_; uint8_t v___y_2727_; uint8_t v___y_2728_; lean_object* v___y_2729_; lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; uint8_t v___y_2734_; uint8_t v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; uint8_t v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; uint8_t v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; uint8_t v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v___y_2807_; uint8_t v___y_2808_; lean_object* v_a_2809_; uint8_t v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; lean_object* v___y_2823_; uint8_t v___y_2824_; lean_object* v_a_2825_; uint8_t v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; uint8_t v___y_2831_; 
v___f_2393_ = ((lean_object*)(l_Lean_Elab_runFrontend___closed__0));
v___f_2394_ = ((lean_object*)(l_Lean_Elab_runFrontend___closed__1));
v___x_2395_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2396_ = lean_io_mono_nanos_now();
v___x_2397_ = lean_float_of_nat(v___x_2396_);
v___x_2398_ = lean_float_once(&l_Lean_Elab_runFrontend___closed__2, &l_Lean_Elab_runFrontend___closed__2_once, _init_l_Lean_Elab_runFrontend___closed__2);
v___x_2399_ = lean_float_div(v___x_2397_, v___x_2398_);
if (lean_obj_tag(v_oleanFileName_x3f_2375_) == 0)
{
goto v___jp_2867_;
}
else
{
if (lean_obj_tag(v_usageFileName_x3f_2385_) == 0)
{
goto v___jp_2867_;
}
else
{
lean_object* v___x_2873_; 
v___x_2873_ = l_Lean_enableUsageRecording();
goto v___jp_2867_;
}
}
v___jp_2387_:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2390_ = lean_runtime_forget(v___y_2388_);
v___x_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2391_, 0, v___y_2389_);
v___x_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2391_);
return v___x_2392_;
}
v___jp_2400_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = l_Lean_trace_profiler_output;
v___x_2409_ = l_Lean_Option_get_x3f___at___00Lean_Elab_runFrontend_spec__4(v___y_2406_, v___x_2408_);
if (lean_obj_tag(v___x_2409_) == 1)
{
lean_object* v_val_2410_; size_t v_sz_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
lean_dec_ref(v___y_2404_);
v_val_2410_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_val_2410_);
lean_dec_ref_known(v___x_2409_, 1);
v_sz_2411_ = lean_array_size(v___y_2402_);
v___x_2412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(v_sz_2411_, v___y_2401_, v___y_2402_);
v___x_2413_ = l_Lean_Name_toString(v_mainModuleName_2373_, v___y_2407_);
v___x_2414_ = l_Lean_Firefox_Profile_export(v___x_2413_, v___x_2399_, v___x_2412_, v___y_2406_);
lean_dec_ref(v___y_2406_);
lean_dec_ref(v___x_2412_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
v___x_2416_ = l_Lean_Firefox_instToJsonProfile_toJson(v_a_2415_);
v___x_2417_ = l_Lean_Json_compress(v___x_2416_);
v___x_2418_ = l_IO_FS_writeFile(v_val_2410_, v___x_2417_);
lean_dec_ref(v___x_2417_);
lean_dec(v_val_2410_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_dec_ref_known(v___x_2418_, 1);
v___y_2388_ = v___y_2403_;
v___y_2389_ = v___y_2405_;
goto v___jp_2387_;
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
lean_dec_ref(v___y_2405_);
lean_dec_ref(v___y_2403_);
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2418_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2418_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
lean_dec(v_val_2410_);
lean_dec_ref(v___y_2405_);
lean_dec_ref(v___y_2403_);
v_a_2427_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2414_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2414_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
else
{
lean_object* v___x_2435_; uint8_t v___x_2436_; 
lean_dec(v___x_2409_);
v___x_2435_ = l_Lean_trace_profiler_serve;
v___x_2436_ = l_Lean_Option_get___at___00Lean_Elab_runFrontend_spec__6(v___y_2404_, v___x_2435_);
lean_dec_ref(v___y_2404_);
if (v___x_2436_ == 0)
{
lean_dec_ref(v___y_2406_);
lean_dec_ref(v___y_2402_);
lean_dec(v_mainModuleName_2373_);
v___y_2388_ = v___y_2403_;
v___y_2389_ = v___y_2405_;
goto v___jp_2387_;
}
else
{
size_t v_sz_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v_sz_2437_ = lean_array_size(v___y_2402_);
v___x_2438_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_runFrontend_spec__5(v_sz_2437_, v___y_2401_, v___y_2402_);
v___x_2439_ = l_Lean_Name_toString(v_mainModuleName_2373_, v___y_2407_);
v___x_2440_ = l_Lean_Firefox_Profile_export(v___x_2439_, v___x_2399_, v___x_2438_, v___y_2406_);
lean_dec_ref(v___y_2406_);
lean_dec_ref(v___x_2438_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2441_);
lean_dec_ref_known(v___x_2440_, 1);
v___x_2442_ = l_Lean_Firefox_instToJsonProfile_toJson(v_a_2441_);
v___x_2443_ = l_Lean_Json_compress(v___x_2442_);
v___x_2444_ = l_Lean_Firefox_Profile_serve(v___x_2443_);
if (lean_obj_tag(v___x_2444_) == 0)
{
lean_dec_ref_known(v___x_2444_, 1);
v___y_2388_ = v___y_2403_;
v___y_2389_ = v___y_2405_;
goto v___jp_2387_;
}
else
{
lean_object* v_a_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2452_; 
lean_dec_ref(v___y_2405_);
lean_dec_ref(v___y_2403_);
v_a_2445_ = lean_ctor_get(v___x_2444_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2447_ = v___x_2444_;
v_isShared_2448_ = v_isSharedCheck_2452_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_a_2445_);
lean_dec(v___x_2444_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2452_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2450_; 
if (v_isShared_2448_ == 0)
{
v___x_2450_ = v___x_2447_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_a_2445_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
return v___x_2450_;
}
}
}
}
else
{
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2460_; 
lean_dec_ref(v___y_2405_);
lean_dec_ref(v___y_2403_);
v_a_2453_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2460_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2460_ == 0)
{
v___x_2455_ = v___x_2440_;
v_isShared_2456_ = v_isSharedCheck_2460_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v___x_2440_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2460_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2458_; 
if (v_isShared_2456_ == 0)
{
v___x_2458_ = v___x_2455_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v_a_2453_);
v___x_2458_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
return v___x_2458_;
}
}
}
}
}
}
v___jp_2461_:
{
if (lean_obj_tag(v_ileanFileName_x3f_2376_) == 1)
{
lean_object* v_val_2473_; lean_object* v_fileMap_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v_fst_2477_; lean_object* v_snd_2478_; lean_object* v_stx_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2499_; 
v_val_2473_ = lean_ctor_get(v_ileanFileName_x3f_2376_, 0);
v_fileMap_2474_ = lean_ctor_get(v___y_2463_, 2);
lean_inc_ref(v_fileMap_2474_);
lean_dec_ref(v___y_2463_);
v___x_2475_ = l_Lean_Server_findModuleRefs(v_fileMap_2474_, v___y_2462_, v___y_2472_, v___y_2472_);
lean_dec_ref(v___y_2462_);
v___x_2476_ = l_Lean_Server_ModuleRefs_toLspModuleRefs(v___x_2475_);
v_fst_2477_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_fst_2477_);
v_snd_2478_ = lean_ctor_get(v___x_2476_, 1);
lean_inc(v_snd_2478_);
lean_dec_ref(v___x_2476_);
v_stx_2479_ = lean_ctor_get(v___y_2471_, 3);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___y_2471_);
if (v_isSharedCheck_2499_ == 0)
{
lean_object* v_unused_2500_; lean_object* v_unused_2501_; lean_object* v_unused_2502_; lean_object* v_unused_2503_; 
v_unused_2500_ = lean_ctor_get(v___y_2471_, 4);
lean_dec(v_unused_2500_);
v_unused_2501_ = lean_ctor_get(v___y_2471_, 2);
lean_dec(v_unused_2501_);
v_unused_2502_ = lean_ctor_get(v___y_2471_, 1);
lean_dec(v_unused_2502_);
v_unused_2503_ = lean_ctor_get(v___y_2471_, 0);
lean_dec(v_unused_2503_);
v___x_2481_ = v___y_2471_;
v_isShared_2482_ = v_isSharedCheck_2499_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_stx_2479_);
lean_dec(v___y_2471_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2499_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2486_; 
v___x_2483_ = lean_unsigned_to_nat(5u);
v___x_2484_ = l_Lean_Server_collectImports(v_stx_2479_);
lean_inc(v_mainModuleName_2373_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 4, v_snd_2478_);
lean_ctor_set(v___x_2481_, 3, v_fst_2477_);
lean_ctor_set(v___x_2481_, 2, v___x_2484_);
lean_ctor_set(v___x_2481_, 1, v_mainModuleName_2373_);
lean_ctor_set(v___x_2481_, 0, v___x_2483_);
v___x_2486_ = v___x_2481_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v___x_2483_);
lean_ctor_set(v_reuseFailAlloc_2498_, 1, v_mainModuleName_2373_);
lean_ctor_set(v_reuseFailAlloc_2498_, 2, v___x_2484_);
lean_ctor_set(v_reuseFailAlloc_2498_, 3, v_fst_2477_);
lean_ctor_set(v_reuseFailAlloc_2498_, 4, v_snd_2478_);
v___x_2486_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2487_ = l_Lean_Server_instToJsonIlean_toJson(v___x_2486_);
v___x_2488_ = l_Lean_Json_compress(v___x_2487_);
v___x_2489_ = l_IO_FS_writeFile(v_val_2473_, v___x_2488_);
lean_dec_ref(v___x_2488_);
if (lean_obj_tag(v___x_2489_) == 0)
{
lean_dec_ref_known(v___x_2489_, 1);
v___y_2401_ = v___y_2465_;
v___y_2402_ = v___y_2464_;
v___y_2403_ = v___y_2466_;
v___y_2404_ = v___y_2467_;
v___y_2405_ = v___y_2469_;
v___y_2406_ = v___y_2468_;
v___y_2407_ = v___y_2470_;
goto v___jp_2400_;
}
else
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2497_; 
lean_dec_ref(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec_ref(v___y_2464_);
lean_dec(v_mainModuleName_2373_);
v_a_2490_ = lean_ctor_get(v___x_2489_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2489_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2492_ = v___x_2489_;
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2489_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2493_ == 0)
{
v___x_2495_ = v___x_2492_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_a_2490_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_2471_);
lean_dec_ref(v___y_2463_);
lean_dec_ref(v___y_2462_);
v___y_2401_ = v___y_2465_;
v___y_2402_ = v___y_2464_;
v___y_2403_ = v___y_2466_;
v___y_2404_ = v___y_2467_;
v___y_2405_ = v___y_2469_;
v___y_2406_ = v___y_2468_;
v___y_2407_ = v___y_2470_;
goto v___jp_2400_;
}
}
v___jp_2504_:
{
lean_object* v___x_2525_; 
lean_inc_ref(v___y_2521_);
v___x_2525_ = l_Lean_ModuleUsage_writeUsage(v___y_2521_, v___y_2507_, v___y_2523_, v___y_2517_, v___y_2510_, v___y_2508_, v___y_2519_, v___y_2522_, v___y_2524_, v___y_2516_);
lean_dec_ref(v___y_2516_);
lean_dec_ref(v___y_2522_);
lean_dec_ref(v___y_2517_);
lean_dec_ref(v___y_2507_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_dec_ref_known(v___x_2525_, 1);
v___y_2462_ = v___y_2505_;
v___y_2463_ = v___y_2506_;
v___y_2464_ = v___y_2515_;
v___y_2465_ = v___y_2514_;
v___y_2466_ = v___y_2518_;
v___y_2467_ = v___y_2509_;
v___y_2468_ = v___y_2520_;
v___y_2469_ = v___y_2521_;
v___y_2470_ = v___y_2513_;
v___y_2471_ = v___y_2512_;
v___y_2472_ = v___y_2511_;
goto v___jp_2461_;
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
lean_dec_ref(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec_ref(v___y_2518_);
lean_dec_ref(v___y_2515_);
lean_dec_ref(v___y_2512_);
lean_dec_ref(v___y_2509_);
lean_dec_ref(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v_mainModuleName_2373_);
v_a_2526_ = lean_ctor_get(v___x_2525_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___x_2525_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___x_2525_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
v___jp_2534_:
{
lean_object* v___x_2553_; 
v___x_2553_ = l_Lean_lookedUpSpecKeys();
if (lean_obj_tag(v_incrLoadFileName_x3f_2383_) == 0)
{
v___y_2505_ = v___y_2535_;
v___y_2506_ = v___y_2536_;
v___y_2507_ = v___y_2537_;
v___y_2508_ = v___y_2538_;
v___y_2509_ = v___y_2539_;
v___y_2510_ = v___y_2540_;
v___y_2511_ = v___y_2541_;
v___y_2512_ = v___y_2542_;
v___y_2513_ = v___y_2543_;
v___y_2514_ = v___y_2544_;
v___y_2515_ = v___y_2545_;
v___y_2516_ = v___y_2546_;
v___y_2517_ = v___y_2547_;
v___y_2518_ = v___y_2548_;
v___y_2519_ = v___y_2552_;
v___y_2520_ = v___y_2550_;
v___y_2521_ = v___y_2549_;
v___y_2522_ = v___x_2553_;
v___y_2523_ = v___y_2551_;
v___y_2524_ = v___y_2541_;
goto v___jp_2504_;
}
else
{
lean_dec_ref_known(v_incrLoadFileName_x3f_2383_, 1);
v___y_2505_ = v___y_2535_;
v___y_2506_ = v___y_2536_;
v___y_2507_ = v___y_2537_;
v___y_2508_ = v___y_2538_;
v___y_2509_ = v___y_2539_;
v___y_2510_ = v___y_2540_;
v___y_2511_ = v___y_2541_;
v___y_2512_ = v___y_2542_;
v___y_2513_ = v___y_2543_;
v___y_2514_ = v___y_2544_;
v___y_2515_ = v___y_2545_;
v___y_2516_ = v___y_2546_;
v___y_2517_ = v___y_2547_;
v___y_2518_ = v___y_2548_;
v___y_2519_ = v___y_2552_;
v___y_2520_ = v___y_2550_;
v___y_2521_ = v___y_2549_;
v___y_2522_ = v___x_2553_;
v___y_2523_ = v___y_2551_;
v___y_2524_ = v___y_2543_;
goto v___jp_2504_;
}
}
v___jp_2554_:
{
lean_object* v_fileMap_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___f_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v_fileMap_2573_ = lean_ctor_get(v___y_2561_, 2);
v___x_2574_ = ((lean_object*)(l_Lean_Elab_runFrontend___closed__3));
v___x_2575_ = lean_box(0);
v___x_2576_ = lean_mk_empty_array_with_capacity(v___y_2566_);
lean_inc_ref(v___y_2569_);
v___x_2577_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_collectCommandLints(v___y_2569_, v___x_2575_, v___x_2576_);
v___x_2578_ = lean_box(v___y_2559_);
v___x_2579_ = lean_box(v___y_2558_);
lean_inc(v___y_2572_);
lean_inc_ref(v_fileMap_2573_);
v___f_2580_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2580_, 0, v_fileMap_2573_);
lean_closure_set(v___f_2580_, 1, v___y_2557_);
lean_closure_set(v___f_2580_, 2, v___x_2577_);
lean_closure_set(v___f_2580_, 3, v___y_2556_);
lean_closure_set(v___f_2580_, 4, v___y_2555_);
lean_closure_set(v___f_2580_, 5, v___x_2578_);
lean_closure_set(v___f_2580_, 6, v___x_2579_);
lean_closure_set(v___f_2580_, 7, v___y_2572_);
v___x_2581_ = lean_box(0);
v___x_2582_ = l_Lean_profileitIOUnsafe___redArg(v___x_2574_, v___y_2562_, v___f_2580_, v___x_2581_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_dec_ref_known(v___x_2582_, 1);
if (lean_obj_tag(v___y_2572_) == 1)
{
lean_object* v_val_2583_; lean_object* v_snd_2584_; lean_object* v_snd_2585_; lean_object* v_snd_2586_; lean_object* v_fst_2587_; lean_object* v_fst_2588_; lean_object* v_fst_2589_; lean_object* v_fst_2590_; lean_object* v_snd_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2606_; 
v_val_2583_ = lean_ctor_get(v___y_2572_, 0);
lean_inc(v_val_2583_);
lean_dec_ref_known(v___y_2572_, 1);
v_snd_2584_ = lean_ctor_get(v_val_2583_, 1);
lean_inc(v_snd_2584_);
v_snd_2585_ = lean_ctor_get(v_snd_2584_, 1);
lean_inc(v_snd_2585_);
v_snd_2586_ = lean_ctor_get(v_snd_2585_, 1);
lean_inc(v_snd_2586_);
v_fst_2587_ = lean_ctor_get(v_val_2583_, 0);
lean_inc(v_fst_2587_);
lean_dec(v_val_2583_);
v_fst_2588_ = lean_ctor_get(v_snd_2584_, 0);
lean_inc(v_fst_2588_);
lean_dec(v_snd_2584_);
v_fst_2589_ = lean_ctor_get(v_snd_2585_, 0);
lean_inc(v_fst_2589_);
lean_dec(v_snd_2585_);
v_fst_2590_ = lean_ctor_get(v_snd_2586_, 0);
v_snd_2591_ = lean_ctor_get(v_snd_2586_, 1);
v_isSharedCheck_2606_ = !lean_is_exclusive(v_snd_2586_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2593_ = v_snd_2586_;
v_isShared_2594_ = v_isSharedCheck_2606_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_snd_2591_);
lean_inc(v_fst_2590_);
lean_dec(v_snd_2586_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2606_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2600_; 
v___x_2595_ = l_Lean_usedNames();
v___x_2596_ = l_Lean_ModuleUsage_usedFromInfoTreesImpl(v___y_2560_, v___x_2595_);
v___x_2597_ = lean_usage_resolved_names();
v___x_2598_ = lean_obj_once(&l_Lean_Elab_runFrontend___closed__4, &l_Lean_Elab_runFrontend___closed__4_once, _init_l_Lean_Elab_runFrontend___closed__4);
lean_inc(v___y_2566_);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 1, v___x_2598_);
lean_ctor_set(v___x_2593_, 0, v___y_2566_);
v___x_2600_ = v___x_2593_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v___y_2566_);
lean_ctor_set(v_reuseFailAlloc_2605_, 1, v___x_2598_);
v___x_2600_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
lean_object* v___x_2601_; uint8_t v___x_2602_; 
v___x_2601_ = lean_array_get_size(v___x_2597_);
v___x_2602_ = lean_nat_dec_lt(v___y_2566_, v___x_2601_);
lean_dec(v___y_2566_);
if (v___x_2602_ == 0)
{
lean_dec_ref(v___x_2597_);
v___y_2535_ = v___y_2560_;
v___y_2536_ = v___y_2561_;
v___y_2537_ = v_fst_2588_;
v___y_2538_ = v___x_2596_;
v___y_2539_ = v___y_2562_;
v___y_2540_ = v_snd_2591_;
v___y_2541_ = v___y_2563_;
v___y_2542_ = v___y_2564_;
v___y_2543_ = v___y_2565_;
v___y_2544_ = v___y_2567_;
v___y_2545_ = v___y_2568_;
v___y_2546_ = v_fst_2587_;
v___y_2547_ = v_fst_2590_;
v___y_2548_ = v___y_2569_;
v___y_2549_ = v___y_2570_;
v___y_2550_ = v___y_2571_;
v___y_2551_ = v_fst_2589_;
v___y_2552_ = v___x_2600_;
goto v___jp_2534_;
}
else
{
size_t v___x_2603_; lean_object* v___x_2604_; 
v___x_2603_ = lean_usize_of_nat(v___x_2601_);
v___x_2604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__7(v___x_2597_, v___y_2567_, v___x_2603_, v___x_2600_);
lean_dec_ref(v___x_2597_);
v___y_2535_ = v___y_2560_;
v___y_2536_ = v___y_2561_;
v___y_2537_ = v_fst_2588_;
v___y_2538_ = v___x_2596_;
v___y_2539_ = v___y_2562_;
v___y_2540_ = v_snd_2591_;
v___y_2541_ = v___y_2563_;
v___y_2542_ = v___y_2564_;
v___y_2543_ = v___y_2565_;
v___y_2544_ = v___y_2567_;
v___y_2545_ = v___y_2568_;
v___y_2546_ = v_fst_2587_;
v___y_2547_ = v_fst_2590_;
v___y_2548_ = v___y_2569_;
v___y_2549_ = v___y_2570_;
v___y_2550_ = v___y_2571_;
v___y_2551_ = v_fst_2589_;
v___y_2552_ = v___x_2604_;
goto v___jp_2534_;
}
}
}
}
else
{
lean_dec(v___y_2572_);
lean_dec(v___y_2566_);
lean_dec(v_incrLoadFileName_x3f_2383_);
v___y_2462_ = v___y_2560_;
v___y_2463_ = v___y_2561_;
v___y_2464_ = v___y_2568_;
v___y_2465_ = v___y_2567_;
v___y_2466_ = v___y_2569_;
v___y_2467_ = v___y_2562_;
v___y_2468_ = v___y_2571_;
v___y_2469_ = v___y_2570_;
v___y_2470_ = v___y_2565_;
v___y_2471_ = v___y_2564_;
v___y_2472_ = v___y_2563_;
goto v___jp_2461_;
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec_ref(v___y_2568_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2564_);
lean_dec_ref(v___y_2562_);
lean_dec_ref(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_mainModuleName_2373_);
v_a_2607_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2582_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2582_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
v___jp_2615_:
{
if (lean_obj_tag(v_oleanFileName_x3f_2375_) == 1)
{
lean_object* v_val_2632_; lean_object* v___x_2633_; 
v_val_2632_ = lean_ctor_get(v_oleanFileName_x3f_2375_, 0);
lean_inc(v_val_2632_);
lean_dec_ref_known(v_oleanFileName_x3f_2375_, 1);
v___x_2633_ = l_Lean_recordedDeclConsts();
if (lean_obj_tag(v_usageFileName_x3f_2385_) == 0)
{
lean_object* v___x_2634_; 
lean_dec(v___x_2633_);
v___x_2634_ = lean_box(0);
v___y_2555_ = v_val_2632_;
v___y_2556_ = v___y_2616_;
v___y_2557_ = v___y_2617_;
v___y_2558_ = v___y_2619_;
v___y_2559_ = v___y_2618_;
v___y_2560_ = v___y_2631_;
v___y_2561_ = v___y_2621_;
v___y_2562_ = v___y_2625_;
v___y_2563_ = v___y_2628_;
v___y_2564_ = v___y_2629_;
v___y_2565_ = v___y_2630_;
v___y_2566_ = v___y_2620_;
v___y_2567_ = v___y_2622_;
v___y_2568_ = v___y_2623_;
v___y_2569_ = v___y_2624_;
v___y_2570_ = v___y_2626_;
v___y_2571_ = v___y_2627_;
v___y_2572_ = v___x_2634_;
goto v___jp_2554_;
}
else
{
lean_object* v_val_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2651_; 
v_val_2635_ = lean_ctor_get(v_usageFileName_x3f_2385_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v_usageFileName_x3f_2385_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2637_ = v_usageFileName_x3f_2385_;
v_isShared_2638_ = v_isSharedCheck_2651_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_val_2635_);
lean_dec(v_usageFileName_x3f_2385_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2651_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2649_; 
lean_inc_ref_n(v___y_2626_, 5);
v___x_2639_ = l_Lean_ModuleUsage_ownConsts(v___y_2626_, v___x_2633_);
v___x_2640_ = l_Lean_ModuleUsage_ownNodes(v___y_2626_, v___x_2639_);
lean_inc_ref(v___x_2640_);
v___x_2641_ = l_Lean_ModuleUsage_localDigests(v___y_2626_, v___x_2640_);
v___x_2642_ = l_Lean_ModuleUsage_closureDigest(v___y_2626_, v___x_2641_);
v___x_2643_ = l_Lean_ModuleUsage_ownProvides(v___y_2626_);
v___x_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2642_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2641_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2640_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2647_, 0, v_val_2635_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 0, v___x_2647_);
v___x_2649_ = v___x_2637_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2647_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
v___y_2555_ = v_val_2632_;
v___y_2556_ = v___y_2616_;
v___y_2557_ = v___y_2617_;
v___y_2558_ = v___y_2619_;
v___y_2559_ = v___y_2618_;
v___y_2560_ = v___y_2631_;
v___y_2561_ = v___y_2621_;
v___y_2562_ = v___y_2625_;
v___y_2563_ = v___y_2628_;
v___y_2564_ = v___y_2629_;
v___y_2565_ = v___y_2630_;
v___y_2566_ = v___y_2620_;
v___y_2567_ = v___y_2622_;
v___y_2568_ = v___y_2623_;
v___y_2569_ = v___y_2624_;
v___y_2570_ = v___y_2626_;
v___y_2571_ = v___y_2627_;
v___y_2572_ = v___x_2649_;
goto v___jp_2554_;
}
}
}
}
else
{
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_oleanFileName_x3f_2375_);
v___y_2462_ = v___y_2631_;
v___y_2463_ = v___y_2621_;
v___y_2464_ = v___y_2623_;
v___y_2465_ = v___y_2622_;
v___y_2466_ = v___y_2624_;
v___y_2467_ = v___y_2625_;
v___y_2468_ = v___y_2627_;
v___y_2469_ = v___y_2626_;
v___y_2470_ = v___y_2630_;
v___y_2471_ = v___y_2629_;
v___y_2472_ = v___y_2628_;
goto v___jp_2461_;
}
}
v___jp_2652_:
{
if (v___y_2666_ == 0)
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; uint8_t v___x_2670_; 
lean_inc_ref(v___y_2660_);
v___x_2667_ = l_Lean_Language_SnapshotTree_getAll(v___y_2660_);
v___x_2668_ = lean_mk_empty_array_with_capacity(v___y_2657_);
v___x_2669_ = lean_array_get_size(v___x_2667_);
v___x_2670_ = lean_nat_dec_lt(v___y_2657_, v___x_2669_);
if (v___x_2670_ == 0)
{
v___y_2616_ = v___y_2653_;
v___y_2617_ = v___y_2654_;
v___y_2618_ = v___y_2656_;
v___y_2619_ = v___y_2655_;
v___y_2620_ = v___y_2657_;
v___y_2621_ = v___y_2658_;
v___y_2622_ = v___y_2659_;
v___y_2623_ = v___x_2667_;
v___y_2624_ = v___y_2660_;
v___y_2625_ = v___y_2661_;
v___y_2626_ = v___y_2663_;
v___y_2627_ = v___y_2662_;
v___y_2628_ = v___y_2666_;
v___y_2629_ = v___y_2664_;
v___y_2630_ = v___y_2665_;
v___y_2631_ = v___x_2668_;
goto v___jp_2615_;
}
else
{
size_t v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = lean_usize_of_nat(v___x_2669_);
v___x_2672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__8(v___x_2667_, v___y_2659_, v___x_2671_, v___x_2668_);
v___y_2616_ = v___y_2653_;
v___y_2617_ = v___y_2654_;
v___y_2618_ = v___y_2656_;
v___y_2619_ = v___y_2655_;
v___y_2620_ = v___y_2657_;
v___y_2621_ = v___y_2658_;
v___y_2622_ = v___y_2659_;
v___y_2623_ = v___x_2667_;
v___y_2624_ = v___y_2660_;
v___y_2625_ = v___y_2661_;
v___y_2626_ = v___y_2663_;
v___y_2627_ = v___y_2662_;
v___y_2628_ = v___y_2666_;
v___y_2629_ = v___y_2664_;
v___y_2630_ = v___y_2665_;
v___y_2631_ = v___x_2672_;
goto v___jp_2615_;
}
}
else
{
lean_object* v___x_2673_; lean_object* v___x_2674_; 
lean_dec_ref(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec_ref(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec_ref(v___y_2658_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v___x_2673_ = lean_box(0);
v___x_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2673_);
return v___x_2674_;
}
}
v___jp_2675_:
{
if (v_printStats_2380_ == 0)
{
v___y_2653_ = v___y_2676_;
v___y_2654_ = v___y_2677_;
v___y_2655_ = v___y_2679_;
v___y_2656_ = v___y_2678_;
v___y_2657_ = v___y_2680_;
v___y_2658_ = v___y_2681_;
v___y_2659_ = v___y_2682_;
v___y_2660_ = v___y_2683_;
v___y_2661_ = v___y_2684_;
v___y_2662_ = v___y_2686_;
v___y_2663_ = v___y_2685_;
v___y_2664_ = v___y_2689_;
v___y_2665_ = v___y_2688_;
v___y_2666_ = v___y_2687_;
goto v___jp_2652_;
}
else
{
lean_object* v___x_2690_; 
lean_inc_ref(v___y_2685_);
v___x_2690_ = l_Lean_Environment_displayStats(v___y_2685_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_dec_ref_known(v___x_2690_, 1);
v___y_2653_ = v___y_2676_;
v___y_2654_ = v___y_2677_;
v___y_2655_ = v___y_2679_;
v___y_2656_ = v___y_2678_;
v___y_2657_ = v___y_2680_;
v___y_2658_ = v___y_2681_;
v___y_2659_ = v___y_2682_;
v___y_2660_ = v___y_2683_;
v___y_2661_ = v___y_2684_;
v___y_2662_ = v___y_2686_;
v___y_2663_ = v___y_2685_;
v___y_2664_ = v___y_2689_;
v___y_2665_ = v___y_2688_;
v___y_2666_ = v___y_2687_;
goto v___jp_2652_;
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref(v___y_2689_);
lean_dec_ref(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec_ref(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
v___jp_2699_:
{
if (lean_obj_tag(v_incrHeaderSaveFileName_x3f_2384_) == 1)
{
lean_object* v_val_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_val_2714_ = lean_ctor_get(v_incrHeaderSaveFileName_x3f_2384_, 0);
lean_inc(v_val_2714_);
lean_dec_ref_known(v_incrHeaderSaveFileName_x3f_2384_, 1);
lean_inc_ref(v___y_2713_);
v___x_2715_ = l_Lean_Language_Lean_truncateToHeader(v___y_2713_);
v___x_2716_ = lean_apply_3(v___y_2701_, v_val_2714_, v___x_2715_, lean_box(0));
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_dec_ref_known(v___x_2716_, 1);
lean_inc_ref(v___y_2702_);
v___y_2676_ = v___y_2700_;
v___y_2677_ = v___y_2702_;
v___y_2678_ = v___y_2704_;
v___y_2679_ = v___y_2703_;
v___y_2680_ = v___y_2705_;
v___y_2681_ = v___y_2706_;
v___y_2682_ = v___y_2707_;
v___y_2683_ = v___y_2708_;
v___y_2684_ = v___y_2709_;
v___y_2685_ = v___y_2702_;
v___y_2686_ = v___y_2710_;
v___y_2687_ = v___y_2712_;
v___y_2688_ = v___y_2711_;
v___y_2689_ = v___y_2713_;
goto v___jp_2675_;
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec_ref(v___y_2713_);
lean_dec_ref(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec_ref(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2702_);
lean_dec_ref(v___y_2700_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2716_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2716_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
else
{
lean_dec_ref(v___y_2701_);
lean_dec(v_incrHeaderSaveFileName_x3f_2384_);
lean_inc_ref(v___y_2702_);
v___y_2676_ = v___y_2700_;
v___y_2677_ = v___y_2702_;
v___y_2678_ = v___y_2704_;
v___y_2679_ = v___y_2703_;
v___y_2680_ = v___y_2705_;
v___y_2681_ = v___y_2706_;
v___y_2682_ = v___y_2707_;
v___y_2683_ = v___y_2708_;
v___y_2684_ = v___y_2709_;
v___y_2685_ = v___y_2702_;
v___y_2686_ = v___y_2710_;
v___y_2687_ = v___y_2712_;
v___y_2688_ = v___y_2711_;
v___y_2689_ = v___y_2713_;
goto v___jp_2675_;
}
}
v___jp_2725_:
{
size_t v_sz_2738_; size_t v___x_2739_; lean_object* v___x_2740_; 
v_sz_2738_ = lean_array_size(v___y_2737_);
v___x_2739_ = ((size_t)0ULL);
v___x_2740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_runFrontend_spec__3(v___y_2737_, v_sz_2738_, v___x_2739_, v___y_2733_);
lean_dec_ref(v___y_2737_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2742_; lean_object* v___f_2743_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc_n(v_a_2741_, 2);
lean_dec_ref_known(v___x_2740_, 1);
v___x_2742_ = lean_box(v___y_2728_);
v___f_2743_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__2___boxed), 5, 2);
lean_closure_set(v___f_2743_, 0, v_a_2741_);
lean_closure_set(v___f_2743_, 1, v___x_2742_);
if (lean_obj_tag(v_incrSaveFileName_x3f_2382_) == 1)
{
lean_object* v_val_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v_val_2744_ = lean_ctor_get(v_incrSaveFileName_x3f_2382_, 0);
lean_inc(v_val_2744_);
lean_dec_ref_known(v_incrSaveFileName_x3f_2382_, 1);
v___x_2745_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_resolveCancelTokensForSave(v___y_2731_);
lean_inc_ref(v___y_2736_);
v___x_2746_ = l_Lean_Elab_runFrontend___lam__2(v_a_2741_, v___y_2728_, v_val_2744_, v___y_2736_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_dec_ref_known(v___x_2746_, 1);
lean_inc_ref(v___y_2726_);
v___y_2700_ = v___y_2726_;
v___y_2701_ = v___f_2743_;
v___y_2702_ = v_a_2741_;
v___y_2703_ = v___y_2727_;
v___y_2704_ = v___y_2728_;
v___y_2705_ = v___y_2729_;
v___y_2706_ = v___y_2730_;
v___y_2707_ = v___x_2739_;
v___y_2708_ = v___y_2731_;
v___y_2709_ = v___y_2726_;
v___y_2710_ = v___y_2732_;
v___y_2711_ = v___y_2735_;
v___y_2712_ = v___y_2734_;
v___y_2713_ = v___y_2736_;
goto v___jp_2699_;
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v___f_2743_);
lean_dec(v_a_2741_);
lean_dec_ref(v___y_2736_);
lean_dec_ref(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec_ref(v___y_2730_);
lean_dec(v___y_2729_);
lean_dec_ref(v___y_2726_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrHeaderSaveFileName_x3f_2384_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___x_2746_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2746_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
}
}
else
{
lean_dec(v_incrSaveFileName_x3f_2382_);
lean_inc_ref(v___y_2726_);
v___y_2700_ = v___y_2726_;
v___y_2701_ = v___f_2743_;
v___y_2702_ = v_a_2741_;
v___y_2703_ = v___y_2727_;
v___y_2704_ = v___y_2728_;
v___y_2705_ = v___y_2729_;
v___y_2706_ = v___y_2730_;
v___y_2707_ = v___x_2739_;
v___y_2708_ = v___y_2731_;
v___y_2709_ = v___y_2726_;
v___y_2710_ = v___y_2732_;
v___y_2711_ = v___y_2735_;
v___y_2712_ = v___y_2734_;
v___y_2713_ = v___y_2736_;
goto v___jp_2699_;
}
}
else
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2762_; 
lean_dec_ref(v___y_2736_);
lean_dec_ref(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec_ref(v___y_2730_);
lean_dec(v___y_2729_);
lean_dec_ref(v___y_2726_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrHeaderSaveFileName_x3f_2384_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_incrSaveFileName_x3f_2382_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v_a_2755_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2757_ = v___x_2740_;
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2740_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_a_2755_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
}
v___jp_2763_:
{
lean_object* v___x_2772_; 
lean_inc_ref(v___y_2767_);
v___x_2772_ = l_Lean_Language_SnapshotTree_runAndReport(v___y_2767_, v___y_2768_, v_jsonOutput_2377_, v___y_2771_);
lean_dec(v___y_2771_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2794_; 
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2775_ = v___x_2772_;
v_isShared_2776_ = v_isSharedCheck_2794_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2772_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2794_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; 
lean_inc_ref(v___y_2770_);
v___x_2777_ = l_Lean_Language_Lean_waitForFinalCmdState_x3f(v___y_2770_);
if (lean_obj_tag(v___x_2777_) == 1)
{
lean_object* v_val_2778_; lean_object* v_env_2779_; lean_object* v_scopes_2780_; lean_object* v___x_2781_; lean_object* v_opts_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
lean_del_object(v___x_2775_);
v_val_2778_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_val_2778_);
lean_dec_ref_known(v___x_2777_, 1);
v_env_2779_ = lean_ctor_get(v_val_2778_, 0);
lean_inc_ref(v_env_2779_);
v_scopes_2780_ = lean_ctor_get(v_val_2778_, 2);
lean_inc(v_scopes_2780_);
lean_dec(v_val_2778_);
lean_inc(v___y_2765_);
v___x_2781_ = l_List_get_x21Internal___redArg(v___x_2395_, v_scopes_2780_, v___y_2765_);
lean_dec(v_scopes_2780_);
v_opts_2782_ = lean_ctor_get(v___x_2781_, 1);
lean_inc_ref(v_opts_2782_);
lean_dec(v___x_2781_);
v___x_2783_ = lean_mk_empty_array_with_capacity(v___y_2765_);
lean_inc_ref(v___x_2783_);
lean_inc_ref(v___y_2770_);
v___x_2784_ = l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(v___y_2770_, v___x_2783_, v___f_2393_);
if (lean_obj_tag(v___x_2784_) == 0)
{
uint8_t v___x_2785_; uint8_t v___x_2786_; 
v___x_2785_ = lean_unbox(v_a_2773_);
v___x_2786_ = lean_unbox(v_a_2773_);
lean_dec(v_a_2773_);
v___y_2726_ = v_opts_2782_;
v___y_2727_ = v___x_2785_;
v___y_2728_ = v___y_2764_;
v___y_2729_ = v___y_2765_;
v___y_2730_ = v___y_2766_;
v___y_2731_ = v___y_2767_;
v___y_2732_ = v___y_2768_;
v___y_2733_ = v_env_2779_;
v___y_2734_ = v___x_2786_;
v___y_2735_ = v___y_2769_;
v___y_2736_ = v___y_2770_;
v___y_2737_ = v___x_2783_;
goto v___jp_2725_;
}
else
{
lean_object* v_val_2787_; uint8_t v___x_2788_; uint8_t v___x_2789_; 
lean_dec_ref(v___x_2783_);
v_val_2787_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_val_2787_);
lean_dec_ref_known(v___x_2784_, 1);
v___x_2788_ = lean_unbox(v_a_2773_);
v___x_2789_ = lean_unbox(v_a_2773_);
lean_dec(v_a_2773_);
v___y_2726_ = v_opts_2782_;
v___y_2727_ = v___x_2788_;
v___y_2728_ = v___y_2764_;
v___y_2729_ = v___y_2765_;
v___y_2730_ = v___y_2766_;
v___y_2731_ = v___y_2767_;
v___y_2732_ = v___y_2768_;
v___y_2733_ = v_env_2779_;
v___y_2734_ = v___x_2789_;
v___y_2735_ = v___y_2769_;
v___y_2736_ = v___y_2770_;
v___y_2737_ = v_val_2787_;
goto v___jp_2725_;
}
}
else
{
lean_object* v___x_2790_; lean_object* v___x_2792_; 
lean_dec(v___x_2777_);
lean_dec(v_a_2773_);
lean_dec_ref(v___y_2770_);
lean_dec_ref(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrHeaderSaveFileName_x3f_2384_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_incrSaveFileName_x3f_2382_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v___x_2790_ = lean_box(0);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2790_);
v___x_2792_ = v___x_2775_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
lean_dec_ref(v___y_2770_);
lean_dec_ref(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrHeaderSaveFileName_x3f_2384_);
lean_dec(v_incrLoadFileName_x3f_2383_);
lean_dec(v_incrSaveFileName_x3f_2382_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v_a_2795_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2772_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2772_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
v___jp_2803_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; uint8_t v___x_2815_; 
v___x_2810_ = l_Lean_Language_Lean_process(v___y_2805_, v_a_2809_, v___y_2806_);
lean_inc_ref(v___x_2810_);
v___x_2811_ = l_Lean_Language_toSnapshotTree___at___00Lean_Elab_runFrontend_spec__2(v___x_2810_);
v___x_2812_ = lean_box(1);
v___x_2813_ = lean_unsigned_to_nat(0u);
v___x_2814_ = lean_array_get_size(v_errorOnKinds_2378_);
v___x_2815_ = lean_nat_dec_lt(v___x_2813_, v___x_2814_);
if (v___x_2815_ == 0)
{
v___y_2764_ = v___y_2804_;
v___y_2765_ = v___x_2813_;
v___y_2766_ = v___y_2806_;
v___y_2767_ = v___x_2811_;
v___y_2768_ = v___y_2807_;
v___y_2769_ = v___y_2808_;
v___y_2770_ = v___x_2810_;
v___y_2771_ = v___x_2812_;
goto v___jp_2763_;
}
else
{
size_t v___x_2816_; size_t v___x_2817_; lean_object* v___x_2818_; 
v___x_2816_ = ((size_t)0ULL);
v___x_2817_ = lean_usize_of_nat(v___x_2814_);
v___x_2818_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_runFrontend_spec__10(v_errorOnKinds_2378_, v___x_2816_, v___x_2817_, v___x_2812_);
v___y_2764_ = v___y_2804_;
v___y_2765_ = v___x_2813_;
v___y_2766_ = v___y_2806_;
v___y_2767_ = v___x_2811_;
v___y_2768_ = v___y_2807_;
v___y_2769_ = v___y_2808_;
v___y_2770_ = v___x_2810_;
v___y_2771_ = v___x_2818_;
goto v___jp_2763_;
}
}
v___jp_2819_:
{
lean_object* v___x_2826_; 
v___x_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2826_, 0, v_a_2825_);
v___y_2804_ = v___y_2820_;
v___y_2805_ = v___y_2821_;
v___y_2806_ = v___y_2822_;
v___y_2807_ = v___y_2823_;
v___y_2808_ = v___y_2824_;
v_a_2809_ = v___x_2826_;
goto v___jp_2803_;
}
v___jp_2827_:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___f_2837_; 
lean_inc_ref(v___y_2829_);
v___x_2832_ = l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(v_opts_2371_, v___y_2829_, v___y_2831_);
v___x_2833_ = l_Lean_Elab_async;
v___x_2834_ = l_Lean_Option_setIfNotSet___at___00Lean_Elab_runFrontend_spec__0(v___x_2832_, v___x_2833_, v___y_2828_);
v___x_2835_ = lean_box_uint32(v_trustLevel_2374_);
v___x_2836_ = lean_box(v___y_2828_);
lean_inc(v_mainModuleName_2373_);
lean_inc_ref(v___x_2834_);
v___f_2837_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__4___boxed), 10, 7);
lean_closure_set(v___f_2837_, 0, v_setup_x3f_2381_);
lean_closure_set(v___f_2837_, 1, v___f_2394_);
lean_closure_set(v___f_2837_, 2, v___x_2834_);
lean_closure_set(v___f_2837_, 3, v_plugins_2379_);
lean_closure_set(v___f_2837_, 4, v___x_2835_);
lean_closure_set(v___f_2837_, 5, v___x_2836_);
lean_closure_set(v___f_2837_, 6, v_mainModuleName_2373_);
if (lean_obj_tag(v_incrLoadFileName_x3f_2383_) == 0)
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_box(0);
v___y_2804_ = v___y_2828_;
v___y_2805_ = v___f_2837_;
v___y_2806_ = v___y_2830_;
v___y_2807_ = v___x_2834_;
v___y_2808_ = v___y_2828_;
v_a_2809_ = v___x_2838_;
goto v___jp_2803_;
}
else
{
lean_object* v_val_2839_; lean_object* v___x_2840_; 
v_val_2839_ = lean_ctor_get(v_incrLoadFileName_x3f_2383_, 0);
lean_inc(v_val_2839_);
v___x_2840_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_loadIncrSnapshot(v_val_2839_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; lean_object* v_snap_2842_; lean_object* v_initModIdxs_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
lean_dec_ref_known(v___x_2840_, 1);
v_snap_2842_ = lean_ctor_get(v_a_2841_, 0);
lean_inc_ref(v_snap_2842_);
v_initModIdxs_2843_ = lean_ctor_get(v_a_2841_, 1);
lean_inc_ref(v_initModIdxs_2843_);
lean_dec(v_a_2841_);
lean_inc(v_mainModuleName_2373_);
v___x_2844_ = l___private_Lean_Elab_Frontend_0__Lean_Elab_setMainModule(v_snap_2842_, v_mainModuleName_2373_);
lean_inc_ref(v___x_2844_);
v___x_2845_ = l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(v___x_2844_);
v___x_2846_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_2845_);
if (lean_obj_tag(v___x_2846_) == 1)
{
lean_object* v_val_2847_; lean_object* v___f_2848_; lean_object* v___x_2849_; 
v_val_2847_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_val_2847_);
lean_dec_ref_known(v___x_2846_, 1);
lean_inc_ref(v___x_2834_);
v___f_2848_ = lean_alloc_closure((void*)(l_Lean_Elab_runFrontend___lam__5___boxed), 4, 3);
lean_closure_set(v___f_2848_, 0, v_val_2847_);
lean_closure_set(v___f_2848_, 1, v_initModIdxs_2843_);
lean_closure_set(v___f_2848_, 2, v___x_2834_);
v___x_2849_ = l_Lean_withImporting___redArg(v___f_2848_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v___x_2850_; 
lean_dec_ref_known(v___x_2849_, 1);
v___x_2850_ = lean_enable_initializer_execution();
v___y_2820_ = v___y_2828_;
v___y_2821_ = v___f_2837_;
v___y_2822_ = v___y_2830_;
v___y_2823_ = v___x_2834_;
v___y_2824_ = v___y_2828_;
v_a_2825_ = v___x_2844_;
goto v___jp_2819_;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec_ref(v___x_2844_);
lean_dec_ref_known(v_incrLoadFileName_x3f_2383_, 1);
lean_dec_ref(v___f_2837_);
lean_dec_ref(v___x_2834_);
lean_dec_ref(v___y_2830_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrHeaderSaveFileName_x3f_2384_);
lean_dec(v_incrSaveFileName_x3f_2382_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v_a_2851_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2849_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2849_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
else
{
lean_dec(v___x_2846_);
lean_dec_ref(v_initModIdxs_2843_);
v___y_2820_ = v___y_2828_;
v___y_2821_ = v___f_2837_;
v___y_2822_ = v___y_2830_;
v___y_2823_ = v___x_2834_;
v___y_2824_ = v___y_2828_;
v_a_2825_ = v___x_2844_;
goto v___jp_2819_;
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec_ref_known(v_incrLoadFileName_x3f_2383_, 1);
lean_dec_ref(v___f_2837_);
lean_dec_ref(v___x_2834_);
lean_dec_ref(v___y_2830_);
lean_dec(v_usageFileName_x3f_2385_);
lean_dec(v_incrHeaderSaveFileName_x3f_2384_);
lean_dec(v_incrSaveFileName_x3f_2382_);
lean_dec(v_oleanFileName_x3f_2375_);
lean_dec(v_mainModuleName_2373_);
v_a_2859_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2840_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2840_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
}
v___jp_2867_:
{
uint8_t v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2868_ = 1;
v___x_2869_ = lean_string_utf8_byte_size(v_input_2370_);
v___x_2870_ = l_Lean_Parser_mkInputContext___redArg(v_input_2370_, v_fileName_2372_, v___x_2868_, v___x_2869_);
v___x_2871_ = l_Lean_internal_cmdlineSnapshots;
if (lean_obj_tag(v_incrSaveFileName_x3f_2382_) == 0)
{
v___y_2828_ = v___x_2868_;
v___y_2829_ = v___x_2871_;
v___y_2830_ = v___x_2870_;
v___y_2831_ = v___x_2868_;
goto v___jp_2827_;
}
else
{
uint8_t v___x_2872_; 
v___x_2872_ = 0;
v___y_2828_ = v___x_2868_;
v___y_2829_ = v___x_2871_;
v___y_2830_ = v___x_2870_;
v___y_2831_ = v___x_2872_;
goto v___jp_2827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runFrontend___boxed(lean_object** _args){
lean_object* v_input_2874_ = _args[0];
lean_object* v_opts_2875_ = _args[1];
lean_object* v_fileName_2876_ = _args[2];
lean_object* v_mainModuleName_2877_ = _args[3];
lean_object* v_trustLevel_2878_ = _args[4];
lean_object* v_oleanFileName_x3f_2879_ = _args[5];
lean_object* v_ileanFileName_x3f_2880_ = _args[6];
lean_object* v_jsonOutput_2881_ = _args[7];
lean_object* v_errorOnKinds_2882_ = _args[8];
lean_object* v_plugins_2883_ = _args[9];
lean_object* v_printStats_2884_ = _args[10];
lean_object* v_setup_x3f_2885_ = _args[11];
lean_object* v_incrSaveFileName_x3f_2886_ = _args[12];
lean_object* v_incrLoadFileName_x3f_2887_ = _args[13];
lean_object* v_incrHeaderSaveFileName_x3f_2888_ = _args[14];
lean_object* v_usageFileName_x3f_2889_ = _args[15];
lean_object* v_a_2890_ = _args[16];
_start:
{
uint32_t v_trustLevel_boxed_2891_; uint8_t v_jsonOutput_boxed_2892_; uint8_t v_printStats_boxed_2893_; lean_object* v_res_2894_; 
v_trustLevel_boxed_2891_ = lean_unbox_uint32(v_trustLevel_2878_);
lean_dec(v_trustLevel_2878_);
v_jsonOutput_boxed_2892_ = lean_unbox(v_jsonOutput_2881_);
v_printStats_boxed_2893_ = lean_unbox(v_printStats_2884_);
v_res_2894_ = l_Lean_Elab_runFrontend(v_input_2874_, v_opts_2875_, v_fileName_2876_, v_mainModuleName_2877_, v_trustLevel_boxed_2891_, v_oleanFileName_x3f_2879_, v_ileanFileName_x3f_2880_, v_jsonOutput_boxed_2892_, v_errorOnKinds_2882_, v_plugins_2883_, v_printStats_boxed_2893_, v_setup_x3f_2885_, v_incrSaveFileName_x3f_2886_, v_incrLoadFileName_x3f_2887_, v_incrHeaderSaveFileName_x3f_2888_, v_usageFileName_x3f_2889_);
lean_dec_ref(v_errorOnKinds_2882_);
lean_dec(v_ileanFileName_x3f_2880_);
return v_res_2894_;
}
}
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_References(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Profiler(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ProfilerServer(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ModuleUsage(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_UsedByChecks(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_References(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Profiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ProfilerServer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ModuleUsage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_UsedByChecks(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* initialize_Lean_Server_References(uint8_t builtin);
lean_object* initialize_Lean_Util_Profiler(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* initialize_Lean_Util_ProfilerServer(uint8_t builtin);
lean_object* initialize_Lean_Util_ModuleUsage(uint8_t builtin);
lean_object* initialize_Lean_Util_UsedByChecks(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_References(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Profiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ProfilerServer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ModuleUsage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_UsedByChecks(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Frontend(builtin);
}
#ifdef __cplusplus
}
#endif
