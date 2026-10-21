// Lean compiler output
// Module: Lean.Shell
// Imports: import Lean.Elab.Frontend import Lean.Elab.ParseImportsFast import Lean.Server.Watchdog import Lean.Server.FileWorker import Lean.Compiler.LCNF.EmitC import Init.System.Platform import Init.Data.String.Lossy import Lean.Compiler.Options import Std.Async.Process
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_IO_eprint___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
uint32_t lean_internal_get_hardware_concurrency(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_Lean_version_specialDesc;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_versionStringCore;
extern uint8_t l_Lean_version_isRelease;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_uv_os_getpid();
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
extern lean_object* l_Lean_githash;
extern lean_object* l_System_Platform_target;
lean_object* lean_get_stdout();
lean_object* l_String_toName(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_load_dynlib(lean_object*);
lean_object* lean_load_plugin(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_internal_has_llvm_backend(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_printImportsJson(lean_object*);
lean_object* lean_display_cumulative_profiling_times();
lean_object* lean_io_exit(uint8_t);
lean_object* l_Lean_Options_mergeBy(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_moduleNameOfFileName(lean_object*, lean_object*);
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
uint8_t l_String_Slice_beq(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImportSrcs(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImports(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lean_get_stdin();
lean_object* l_IO_FS_Stream_readBinToEnd(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_IO_FS_Stream_lines(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Server_Watchdog_watchdogMain(lean_object*);
lean_object* l_Lean_Server_FileWorker_workerMain(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_getBuildDir();
lean_object* l_Lean_getLibDir(lean_object*);
uint32_t lean_eval_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_init_llvm();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object*);
lean_object* lean_emit_llvm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_internal_has_address_sanitizer(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object*);
uint8_t lean_internal_is_multi_thread(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object*);
uint8_t lean_internal_is_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object*);
lean_object* lean_internal_get_build_type(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object*);
lean_object* lean_internal_get_default_max_memory(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object*);
lean_object* lean_internal_set_max_memory(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object*, lean_object*);
lean_object* lean_internal_get_default_max_heartbeat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object*);
lean_object* lean_internal_set_max_heartbeat(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object*, lean_object*);
uint8_t lean_internal_get_default_verbose(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object*);
lean_object* lean_internal_set_exit_on_panic(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object*, lean_object*);
lean_object* lean_internal_set_thread_stack_size(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object*, lean_object*);
lean_object* lean_internal_enable_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-pre"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shortVersionString;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean (version "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__7;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_versionHeader;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_featuresString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_featuresString___closed__0;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[LLVM]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_featuresString;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "      -D name=value      set a configuration option (see set_option command)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --plugin=file[=fn] load and initialize Lean shared library for registering linters etc."};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --load-dynlib=file load shared library to make its symbols available to the interpreter"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "      --setup=file       JSON file with module setup data (supersedes the file's header)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "      --json             report Lean output (e.g., messages) as JSON (one per line)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "  -E, --error=kind       report Lean messages of kind as errors"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "      --deps             just print dependencies of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "      --src-deps         just print dependency sources of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "      --print-prefix     print the installation prefix for Lean and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "      --print-libdir     print the installation directory for Lean's built-in libraries and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "      --profile          display elaboration/type checking time for each definition/theorem"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "      --stats            display environment statistics"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = "      --incr-save=file   EXPERIMENTAL: save a full incremental snapshot of post-elaboration state at end of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "      --incr-load=file   EXPERIMENTAL: reuse a snapshot saved by `--incr-(header-)save` at start of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "      --incr-header-save=file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "                         EXPERIMENTAL: like `--incr-save`, but save only the header (state after importing)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "      --debug=tag        enable assertions with the given tag"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Miscellaneous"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "  -h, --help             display this message"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "      --features         display features compiler provides (eg. LLVM support)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "  -v, --version          display version information"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "  -V, --short-version    display short version number"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "  -g, --githash          display the git commit hash number used to build this binary"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "      --run <file>       call the 'main' definition in the given file with the remaining arguments"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -o, --o=oname          create olean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -i, --i=iname          create ilean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 102, .m_capacity = 102, .m_length = 101, .m_data = "      --usage=file       with -o, add usage-cutoff digests to the olean and write its sidecar to file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "  -c, --c=fname          name of the C output file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__28 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -b, --bc=fname         name of the LLVM bitcode file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__29 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "      --stdin            take input from stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "  -R, --root=dir         set package root directory from which the module name\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "                         of the input file is calculated\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "                         (default: current working directory)\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "  -t, --trust=num        trust level (default: max) 0 means do not trust any macro,\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "                         and type check all imported modules\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -q, --quiet            do not print verbose messages"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "  -M, --memory=num       maximum amount of memory that should be used by Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "                         (in megabytes)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__38 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "  -T, --timeout=num      maximum number of memory allocations per task"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__39 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "                         this is a deterministic way of interrupting long running tasks"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__40 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__40_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__41;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "  -j, --threads=num      number of threads used to process lean files"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__42 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "  -s, --tstack=num       thread stack size in Kb"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__43 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "      --server           start lean in server mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__44 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "      --worker           start lean in server-worker mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__45 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__45_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "max_memory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 81, 94, 214, 186, 212, 139, 105)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Shell"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(32, 69, 169, 154, 100, 37, 235, 16)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(89, 66, 50, 199, 34, 209, 110, 139)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 66, 221, 81, 125, 65, 65, 89)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxMemory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(28, 55, 113, 152, 101, 101, 83, 88)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_maxMemory;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 201, 121, 146, 245, 42, 97, 81)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 41, 251, 70, 36, 12, 36, 182)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_timeout;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verbose"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 17, 151, 162, 143, 207, 214, 14)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 79, 210, 200, 161, 113, 65, 201)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_verbose;
lean_object* lean_internal_get_option_overrides(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getOptionOverrides___boxed(lean_object*);
uint32_t lean_internal_get_believer_trust_level(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads;
static const lean_array_object l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0;
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "argument missing for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value)}};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "error: expected numeric argument for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "error: argument value for '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Unknown command line option\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "H"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Z"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Y"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "E"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-t' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-t'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-T'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-M'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "U"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-s' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-s'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-j' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-j'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tmp"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "#lang"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object**);
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Shell_0__Lean_shellMain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shellMain___closed__1;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LLVM code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Expected exactly one file name"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__4_value;
static const lean_array_object l___private_Lean_Shell_0__Lean_shellMain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__6_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__6_value),LEAN_SCALAR_PTR_LITERAL(37, 142, 62, 167, 41, 238, 22, 79)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lean4"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown language '"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<stdin>"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__10_value;
LEAN_EXPORT lean_object* lean_shell_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object* v_env_5_, lean_object* v_opts_6_, lean_object* v_args_7_, lean_object* v_a_00___x40___internal___hyg_8_){
_start:
{
uint32_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = lean_eval_main(v_env_5_, v_opts_6_, v_args_7_);
lean_dec(v_args_7_);
lean_dec_ref(v_opts_6_);
lean_dec_ref(v_env_5_);
v_r_10_ = lean_box_uint32(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object* v_a_00___x40___internal___hyg_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lean_init_llvm();
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object* v_env_18_, lean_object* v_modName_19_, lean_object* v_filepath_20_, lean_object* v_a_00___x40___internal___hyg_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lean_emit_llvm(v_env_18_, v_modName_19_, v_filepath_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object* v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = lean_internal_has_address_sanitizer(v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object* v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = lean_internal_is_multi_thread(v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_28_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object* v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_32_){
_start:
{
uint8_t v_res_33_; lean_object* v_r_34_; 
v_res_33_ = lean_internal_is_debug(v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_32_);
v_r_34_ = lean_box(v_res_33_);
return v_r_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object* v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lean_internal_get_build_type(v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object* v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = lean_internal_get_default_max_memory(v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object* v_max_43_, lean_object* v_a_00___x40___internal___hyg_44_){
_start:
{
size_t v_max_boxed_45_; lean_object* v_res_46_; 
v_max_boxed_45_ = lean_unbox_usize(v_max_43_);
lean_dec(v_max_43_);
v_res_46_ = lean_internal_set_max_memory(v_max_boxed_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object* v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = lean_internal_get_default_max_heartbeat(v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object* v_max_52_, lean_object* v_a_00___x40___internal___hyg_53_){
_start:
{
size_t v_max_boxed_54_; lean_object* v_res_55_; 
v_max_boxed_54_ = lean_unbox_usize(v_max_52_);
lean_dec(v_max_52_);
v_res_55_ = lean_internal_set_max_heartbeat(v_max_boxed_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object* v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = lean_internal_get_default_verbose(v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_57_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object* v_exit_62_, lean_object* v_a_00___x40___internal___hyg_63_){
_start:
{
uint8_t v_exit_boxed_64_; lean_object* v_res_65_; 
v_exit_boxed_64_ = lean_unbox(v_exit_62_);
v_res_65_ = lean_internal_set_exit_on_panic(v_exit_boxed_64_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object* v_sz_68_, lean_object* v_a_00___x40___internal___hyg_69_){
_start:
{
size_t v_sz_boxed_70_; lean_object* v_res_71_; 
v_sz_boxed_70_ = lean_unbox_usize(v_sz_68_);
lean_dec(v_sz_68_);
v_res_71_ = lean_internal_set_thread_stack_size(v_sz_boxed_70_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object* v_tag_74_, lean_object* v_a_00___x40___internal___hyg_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lean_internal_enable_debug(v_tag_74_);
lean_dec_ref(v_tag_74_);
return v_res_76_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_78_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_79_ = l_Lean_version_specialDesc;
v___x_80_ = lean_string_dec_eq(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__2));
v___x_83_ = l_Lean_versionStringCore;
v___x_84_ = lean_string_append(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = l_Lean_version_specialDesc;
v___x_86_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__3, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3);
v___x_87_ = lean_string_append(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_89_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__5));
v___x_90_ = l_Lean_versionStringCore;
v___x_91_ = lean_string_append(v___x_90_, v___x_89_);
return v___x_91_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString(void){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__1, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
v___x_93_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__4, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4);
return v___x_93_;
}
else
{
uint8_t v___x_94_; 
v___x_94_ = l_Lean_version_isRelease;
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__6, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6);
return v___x_95_;
}
else
{
lean_object* v___x_96_; 
v___x_96_ = l_Lean_versionStringCore;
return v___x_96_;
}
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_box(0);
v___x_100_ = lean_internal_get_build_type(v___x_99_);
return v___x_100_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_102_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_103_ = l_Lean_githash;
v___x_104_ = lean_string_dec_eq(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_106_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_107_ = l_System_Platform_target;
v___x_108_ = lean_string_dec_eq(v___x_107_, v___x_106_);
return v___x_108_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7(void){
_start:
{
lean_object* v___x_109_; lean_object* v_ver_110_; lean_object* v___x_111_; 
v___x_109_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v_ver_110_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_111_ = lean_string_append(v_ver_110_, v___x_109_);
return v___x_111_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v_ver_114_; 
v___x_112_ = l_System_Platform_target;
v___x_113_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__7, &l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7);
v_ver_114_ = lean_string_append(v___x_113_, v___x_112_);
return v_ver_114_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader(void){
_start:
{
lean_object* v_ver_116_; lean_object* v_ver_126_; lean_object* v_ver_132_; uint8_t v___x_133_; 
v_ver_132_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_133_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__6, &l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6);
if (v___x_133_ == 0)
{
lean_object* v_ver_134_; 
v_ver_134_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__8, &l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8);
v_ver_126_ = v_ver_134_;
goto v___jp_125_;
}
else
{
v_ver_126_ = v_ver_132_;
goto v___jp_125_;
}
v___jp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_117_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__0));
v___x_118_ = lean_string_append(v___x_117_, v_ver_116_);
lean_dec_ref(v_ver_116_);
v___x_119_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v___x_120_ = lean_string_append(v___x_118_, v___x_119_);
v___x_121_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__2, &l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2);
v___x_122_ = lean_string_append(v___x_120_, v___x_121_);
v___x_123_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__3));
v___x_124_ = lean_string_append(v___x_122_, v___x_123_);
return v___x_124_;
}
v___jp_125_:
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = l_Lean_githash;
v___x_128_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__4, &l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v_ver_131_; 
v___x_129_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__5));
lean_inc_ref(v_ver_126_);
v___x_130_ = lean_string_append(v_ver_126_, v___x_129_);
v_ver_131_ = lean_string_append(v___x_130_, v___x_127_);
v_ver_116_ = v_ver_131_;
goto v___jp_115_;
}
else
{
lean_inc_ref(v_ver_126_);
v_ver_116_ = v_ver_126_;
goto v___jp_115_;
}
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0(void){
_start:
{
lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_135_ = lean_box(0);
v___x_136_ = lean_internal_has_llvm_backend(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_featuresString(void){
_start:
{
uint8_t v___x_139_; 
v___x_139_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_featuresString___closed__0, &l___private_Lean_Shell_0__Lean_featuresString___closed__0_once, _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; 
v___x_140_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__1));
return v___x_140_;
}
else
{
lean_object* v___x_141_; 
v___x_141_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__2));
return v___x_141_;
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16(void){
_start:
{
lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_158_ = lean_box(0);
v___x_159_ = lean_internal_is_debug(v___x_158_);
return v___x_159_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__41(void){
_start:
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = lean_box(0);
v___x_185_ = lean_internal_is_multi_thread(v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t v_useStderr_190_){
_start:
{
lean_object* v___y_193_; lean_object* v___y_197_; lean_object* v_out_232_; 
if (v_useStderr_190_ == 0)
{
lean_object* v___x_290_; 
v___x_290_ = lean_get_stdout();
v_out_232_ = v___x_290_;
goto v___jp_231_;
}
else
{
lean_object* v___x_291_; 
v___x_291_ = lean_get_stderr();
v_out_232_ = v___x_291_;
goto v___jp_231_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__0));
v___x_195_ = l_IO_FS_Stream_putStrLn(v___y_193_, v___x_194_);
return v___x_195_;
}
v___jp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__1));
lean_inc_ref(v___y_197_);
v___x_199_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_198_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec_ref_known(v___x_199_, 1);
v___x_200_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__2));
lean_inc_ref(v___y_197_);
v___x_201_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_200_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec_ref_known(v___x_201_, 1);
v___x_202_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__3));
lean_inc_ref(v___y_197_);
v___x_203_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_dec_ref_known(v___x_203_, 1);
v___x_204_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__4));
lean_inc_ref(v___y_197_);
v___x_205_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_204_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec_ref_known(v___x_205_, 1);
v___x_206_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__5));
lean_inc_ref(v___y_197_);
v___x_207_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_206_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec_ref_known(v___x_207_, 1);
v___x_208_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__6));
lean_inc_ref(v___y_197_);
v___x_209_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_208_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; 
lean_dec_ref_known(v___x_209_, 1);
v___x_210_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__7));
lean_inc_ref(v___y_197_);
v___x_211_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_210_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec_ref_known(v___x_211_, 1);
v___x_212_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__8));
lean_inc_ref(v___y_197_);
v___x_213_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_212_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec_ref_known(v___x_213_, 1);
v___x_214_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__9));
lean_inc_ref(v___y_197_);
v___x_215_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_214_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec_ref_known(v___x_215_, 1);
v___x_216_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__10));
lean_inc_ref(v___y_197_);
v___x_217_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec_ref_known(v___x_217_, 1);
v___x_218_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__11));
lean_inc_ref(v___y_197_);
v___x_219_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_218_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec_ref_known(v___x_219_, 1);
v___x_220_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__12));
lean_inc_ref(v___y_197_);
v___x_221_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_220_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec_ref_known(v___x_221_, 1);
v___x_222_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__13));
lean_inc_ref(v___y_197_);
v___x_223_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_222_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_dec_ref_known(v___x_223_, 1);
v___x_224_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__14));
lean_inc_ref(v___y_197_);
v___x_225_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_224_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec_ref_known(v___x_225_, 1);
v___x_226_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__15));
lean_inc_ref(v___y_197_);
v___x_227_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_226_);
if (lean_obj_tag(v___x_227_) == 0)
{
uint8_t v___x_228_; 
lean_dec_ref_known(v___x_227_, 1);
v___x_228_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_228_ == 0)
{
v___y_193_ = v___y_197_;
goto v___jp_192_;
}
else
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__17));
lean_inc_ref(v___y_197_);
v___x_230_ = l_IO_FS_Stream_putStrLn(v___y_197_, v___x_229_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_dec_ref_known(v___x_230_, 1);
v___y_193_ = v___y_197_;
goto v___jp_192_;
}
else
{
lean_dec_ref(v___y_197_);
return v___x_230_;
}
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_227_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_225_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_223_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_221_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_219_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_217_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_215_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_213_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_211_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_209_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_207_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_205_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_203_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_201_;
}
}
else
{
lean_dec_ref(v___y_197_);
return v___x_199_;
}
}
v___jp_231_:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = l___private_Lean_Shell_0__Lean_versionHeader;
lean_inc_ref(v_out_232_);
v___x_234_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_233_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; 
lean_dec_ref_known(v___x_234_, 1);
v___x_235_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__18));
lean_inc_ref(v_out_232_);
v___x_236_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_235_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec_ref_known(v___x_236_, 1);
v___x_237_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__19));
lean_inc_ref(v_out_232_);
v___x_238_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_237_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
lean_dec_ref_known(v___x_238_, 1);
v___x_239_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__20));
lean_inc_ref(v_out_232_);
v___x_240_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_239_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec_ref_known(v___x_240_, 1);
v___x_241_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__21));
lean_inc_ref(v_out_232_);
v___x_242_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_241_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref_known(v___x_242_, 1);
v___x_243_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__22));
lean_inc_ref(v_out_232_);
v___x_244_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_243_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; 
lean_dec_ref_known(v___x_244_, 1);
v___x_245_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__23));
lean_inc_ref(v_out_232_);
v___x_246_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_245_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec_ref_known(v___x_246_, 1);
v___x_247_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__24));
lean_inc_ref(v_out_232_);
v___x_248_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_247_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec_ref_known(v___x_248_, 1);
v___x_249_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__25));
lean_inc_ref(v_out_232_);
v___x_250_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_249_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_dec_ref_known(v___x_250_, 1);
v___x_251_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__26));
lean_inc_ref(v_out_232_);
v___x_252_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_251_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec_ref_known(v___x_252_, 1);
v___x_253_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__27));
lean_inc_ref(v_out_232_);
v___x_254_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_253_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec_ref_known(v___x_254_, 1);
v___x_255_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__28));
lean_inc_ref(v_out_232_);
v___x_256_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec_ref_known(v___x_256_, 1);
v___x_257_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__29));
lean_inc_ref(v_out_232_);
v___x_258_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec_ref_known(v___x_258_, 1);
v___x_259_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__30));
lean_inc_ref(v_out_232_);
v___x_260_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_259_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref_known(v___x_260_, 1);
v___x_261_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__31));
lean_inc_ref(v_out_232_);
v___x_262_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_261_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec_ref_known(v___x_262_, 1);
v___x_263_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__32));
lean_inc_ref(v_out_232_);
v___x_264_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_263_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v___x_265_; lean_object* v___x_266_; 
lean_dec_ref_known(v___x_264_, 1);
v___x_265_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__33));
lean_inc_ref(v_out_232_);
v___x_266_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec_ref_known(v___x_266_, 1);
v___x_267_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__34));
lean_inc_ref(v_out_232_);
v___x_268_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_267_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; 
lean_dec_ref_known(v___x_268_, 1);
v___x_269_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__35));
lean_inc_ref(v_out_232_);
v___x_270_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_269_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec_ref_known(v___x_270_, 1);
v___x_271_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__36));
lean_inc_ref(v_out_232_);
v___x_272_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_271_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec_ref_known(v___x_272_, 1);
v___x_273_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__37));
lean_inc_ref(v_out_232_);
v___x_274_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_273_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
lean_dec_ref_known(v___x_274_, 1);
v___x_275_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__38));
lean_inc_ref(v_out_232_);
v___x_276_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_275_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v___x_277_; lean_object* v___x_278_; 
lean_dec_ref_known(v___x_276_, 1);
v___x_277_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__39));
lean_inc_ref(v_out_232_);
v___x_278_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_277_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; 
lean_dec_ref_known(v___x_278_, 1);
v___x_279_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__40));
lean_inc_ref(v_out_232_);
v___x_280_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_279_);
if (lean_obj_tag(v___x_280_) == 0)
{
uint8_t v___x_281_; 
lean_dec_ref_known(v___x_280_, 1);
v___x_281_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__41, &l___private_Lean_Shell_0__Lean_displayHelp___closed__41_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__41);
if (v___x_281_ == 0)
{
v___y_197_ = v_out_232_;
goto v___jp_196_;
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__42));
lean_inc_ref(v_out_232_);
v___x_283_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_282_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec_ref_known(v___x_283_, 1);
v___x_284_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__43));
lean_inc_ref(v_out_232_);
v___x_285_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_284_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
lean_dec_ref_known(v___x_285_, 1);
v___x_286_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__44));
lean_inc_ref(v_out_232_);
v___x_287_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_286_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec_ref_known(v___x_287_, 1);
v___x_288_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__45));
lean_inc_ref(v_out_232_);
v___x_289_ = l_IO_FS_Stream_putStrLn(v_out_232_, v___x_288_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_dec_ref_known(v___x_289_, 1);
v___y_197_ = v_out_232_;
goto v___jp_196_;
}
else
{
lean_dec_ref(v_out_232_);
return v___x_289_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_287_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_285_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_283_;
}
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_280_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_278_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_276_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_274_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_272_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_270_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_268_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_266_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_264_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_262_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_260_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_258_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_256_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_254_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_252_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_250_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_248_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_246_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_244_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_242_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_240_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_238_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_236_;
}
}
else
{
lean_dec_ref(v_out_232_);
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object* v_useStderr_292_, lean_object* v_a_293_){
_start:
{
uint8_t v_useStderr_boxed_294_; lean_object* v_res_295_; 
v_useStderr_boxed_294_ = lean_unbox(v_useStderr_292_);
v_res_295_ = l___private_Lean_Shell_0__Lean_displayHelp(v_useStderr_boxed_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___impl(uint8_t v_x_296_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_box(v_x_296_);
v___x_298_ = lean_obj_tag_nat(v___x_297_);
lean_dec(v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___impl___boxed(lean_object* v_x_299_){
_start:
{
uint8_t v_x_4__boxed_300_; lean_object* v_res_301_; 
v_x_4__boxed_300_ = lean_unbox(v_x_299_);
v_res_301_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___impl(v_x_4__boxed_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object* v_k_302_){
_start:
{
lean_inc(v_k_302_);
return v_k_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object* v_k_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(v_k_303_);
lean_dec(v_k_303_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object* v_motive_305_, lean_object* v_ctorIdx_306_, uint8_t v_t_307_, lean_object* v_h_308_, lean_object* v_k_309_){
_start:
{
lean_inc(v_k_309_);
return v_k_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object* v_motive_310_, lean_object* v_ctorIdx_311_, lean_object* v_t_312_, lean_object* v_h_313_, lean_object* v_k_314_){
_start:
{
uint8_t v_t_boxed_315_; lean_object* v_res_316_; 
v_t_boxed_315_ = lean_unbox(v_t_312_);
v_res_316_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(v_motive_310_, v_ctorIdx_311_, v_t_boxed_315_, v_h_313_, v_k_314_);
lean_dec(v_k_314_);
lean_dec(v_ctorIdx_311_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object* v_frontend_317_){
_start:
{
lean_inc(v_frontend_317_);
return v_frontend_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object* v_frontend_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(v_frontend_318_);
lean_dec(v_frontend_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object* v_motive_320_, uint8_t v_t_321_, lean_object* v_h_322_, lean_object* v_frontend_323_){
_start:
{
lean_inc(v_frontend_323_);
return v_frontend_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object* v_motive_324_, lean_object* v_t_325_, lean_object* v_h_326_, lean_object* v_frontend_327_){
_start:
{
uint8_t v_t_boxed_328_; lean_object* v_res_329_; 
v_t_boxed_328_ = lean_unbox(v_t_325_);
v_res_329_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(v_motive_324_, v_t_boxed_328_, v_h_326_, v_frontend_327_);
lean_dec(v_frontend_327_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object* v_watchdog_330_){
_start:
{
lean_inc(v_watchdog_330_);
return v_watchdog_330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object* v_watchdog_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(v_watchdog_331_);
lean_dec(v_watchdog_331_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object* v_motive_333_, uint8_t v_t_334_, lean_object* v_h_335_, lean_object* v_watchdog_336_){
_start:
{
lean_inc(v_watchdog_336_);
return v_watchdog_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object* v_motive_337_, lean_object* v_t_338_, lean_object* v_h_339_, lean_object* v_watchdog_340_){
_start:
{
uint8_t v_t_boxed_341_; lean_object* v_res_342_; 
v_t_boxed_341_ = lean_unbox(v_t_338_);
v_res_342_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(v_motive_337_, v_t_boxed_341_, v_h_339_, v_watchdog_340_);
lean_dec(v_watchdog_340_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object* v_worker_343_){
_start:
{
lean_inc(v_worker_343_);
return v_worker_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object* v_worker_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(v_worker_344_);
lean_dec(v_worker_344_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object* v_motive_346_, uint8_t v_t_347_, lean_object* v_h_348_, lean_object* v_worker_349_){
_start:
{
lean_inc(v_worker_349_);
return v_worker_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object* v_motive_350_, lean_object* v_t_351_, lean_object* v_h_352_, lean_object* v_worker_353_){
_start:
{
uint8_t v_t_boxed_354_; lean_object* v_res_355_; 
v_t_boxed_354_ = lean_unbox(v_t_351_);
v_res_355_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(v_motive_350_, v_t_boxed_354_, v_h_352_, v_worker_353_);
lean_dec(v_worker_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__spec__0(lean_object* v_name_356_, lean_object* v_decl_357_, lean_object* v_ref_358_){
_start:
{
lean_object* v_defValue_360_; lean_object* v_descr_361_; lean_object* v_deprecation_x3f_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_defValue_360_ = lean_ctor_get(v_decl_357_, 0);
v_descr_361_ = lean_ctor_get(v_decl_357_, 1);
v_deprecation_x3f_362_ = lean_ctor_get(v_decl_357_, 2);
lean_inc(v_defValue_360_);
v___x_363_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_363_, 0, v_defValue_360_);
lean_inc(v_deprecation_x3f_362_);
lean_inc_ref(v_descr_361_);
lean_inc_n(v_name_356_, 2);
v___x_364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_364_, 0, v_name_356_);
lean_ctor_set(v___x_364_, 1, v_ref_358_);
lean_ctor_set(v___x_364_, 2, v___x_363_);
lean_ctor_set(v___x_364_, 3, v_descr_361_);
lean_ctor_set(v___x_364_, 4, v_deprecation_x3f_362_);
v___x_365_ = lean_register_option(v_name_356_, v___x_364_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_373_; 
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_373_ == 0)
{
lean_object* v_unused_374_; 
v_unused_374_ = lean_ctor_get(v___x_365_, 0);
lean_dec(v_unused_374_);
v___x_367_ = v___x_365_;
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
else
{
lean_dec(v___x_365_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_371_; 
lean_inc(v_defValue_360_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_name_356_);
lean_ctor_set(v___x_369_, 1, v_defValue_360_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_369_);
v___x_371_ = v___x_367_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
lean_dec(v_name_356_);
v_a_375_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_365_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_365_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_383_, lean_object* v_decl_384_, lean_object* v_ref_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__spec__0(v_name_383_, v_decl_384_, v_ref_385_);
lean_dec_ref(v_decl_384_);
return v_res_387_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = lean_box(0);
v___x_392_ = lean_internal_get_default_max_memory(v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_393_ = lean_box(0);
v___x_394_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_395_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_);
v___x_396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v___x_394_);
lean_ctor_set(v___x_396_, 2, v___x_393_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_420_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_));
v___x_421_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_);
v___x_422_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_));
v___x_423_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__spec__0(v___x_420_, v___x_421_, v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2____boxed(lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_();
return v_res_425_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_box(0);
v___x_430_ = lean_internal_get_default_max_heartbeat(v___x_429_);
return v___x_430_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_431_ = lean_box(0);
v___x_432_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_433_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_);
v___x_434_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
lean_ctor_set(v___x_434_, 1, v___x_432_);
lean_ctor_set(v___x_434_, 2, v___x_431_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_439_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_));
v___x_440_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_);
v___x_441_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_));
v___x_442_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2__spec__0(v___x_439_, v___x_440_, v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2____boxed(lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_();
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__spec__0(lean_object* v_name_445_, lean_object* v_decl_446_, lean_object* v_ref_447_){
_start:
{
lean_object* v_defValue_449_; lean_object* v_descr_450_; lean_object* v_deprecation_x3f_451_; lean_object* v___x_452_; uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v_defValue_449_ = lean_ctor_get(v_decl_446_, 0);
v_descr_450_ = lean_ctor_get(v_decl_446_, 1);
v_deprecation_x3f_451_ = lean_ctor_get(v_decl_446_, 2);
v___x_452_ = lean_alloc_ctor(1, 0, 1);
v___x_453_ = lean_unbox(v_defValue_449_);
lean_ctor_set_uint8(v___x_452_, 0, v___x_453_);
lean_inc(v_deprecation_x3f_451_);
lean_inc_ref(v_descr_450_);
lean_inc_n(v_name_445_, 2);
v___x_454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_454_, 0, v_name_445_);
lean_ctor_set(v___x_454_, 1, v_ref_447_);
lean_ctor_set(v___x_454_, 2, v___x_452_);
lean_ctor_set(v___x_454_, 3, v_descr_450_);
lean_ctor_set(v___x_454_, 4, v_deprecation_x3f_451_);
v___x_455_ = lean_register_option(v_name_445_, v___x_454_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_463_; 
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_463_ == 0)
{
lean_object* v_unused_464_; 
v_unused_464_ = lean_ctor_get(v___x_455_, 0);
lean_dec(v_unused_464_);
v___x_457_ = v___x_455_;
v_isShared_458_ = v_isSharedCheck_463_;
goto v_resetjp_456_;
}
else
{
lean_dec(v___x_455_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_463_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v___x_461_; 
lean_inc(v_defValue_449_);
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v_name_445_);
lean_ctor_set(v___x_459_, 1, v_defValue_449_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v___x_459_);
v___x_461_ = v___x_457_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec(v_name_445_);
v_a_465_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_455_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_455_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_473_, lean_object* v_decl_474_, lean_object* v_ref_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__spec__0(v_name_473_, v_decl_474_, v_ref_475_);
lean_dec_ref(v_decl_474_);
return v_res_477_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_481_ = lean_box(0);
v___x_482_ = lean_internal_get_default_verbose(v___x_481_);
return v___x_482_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_483_ = lean_box(0);
v___x_484_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_485_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_);
v___x_486_ = lean_box(v___x_485_);
v___x_487_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
lean_ctor_set(v___x_487_, 1, v___x_484_);
lean_ctor_set(v___x_487_, 2, v___x_483_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_492_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_));
v___x_493_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_);
v___x_494_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_));
v___x_495_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2__spec__0(v___x_492_, v___x_493_, v___x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2____boxed(lean_object* v_a_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_();
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getOptionOverrides___boxed(lean_object* v_x_00___x40_Lean_Shell_1930944040____hygCtx___hyg_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = lean_internal_get_option_overrides(v_x_00___x40_Lean_Shell_1930944040____hygCtx___hyg_499_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object* v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_502_){
_start:
{
uint32_t v_res_503_; lean_object* v_r_504_; 
v_res_503_ = lean_internal_get_believer_trust_level(v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_502_);
v_r_504_ = lean_box_uint32(v_res_503_);
return v_r_504_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0(void){
_start:
{
lean_object* v___x_505_; uint32_t v___x_506_; 
v___x_505_ = lean_box(0);
v___x_506_ = lean_internal_get_believer_trust_level(v___x_505_);
return v___x_506_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1(void){
_start:
{
uint32_t v___x_507_; uint32_t v___x_508_; uint32_t v___x_509_; 
v___x_507_ = 1;
v___x_508_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0);
v___x_509_ = lean_uint32_add(v___x_508_, v___x_507_);
return v___x_509_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel(void){
_start:
{
uint32_t v___x_510_; 
v___x_510_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1);
return v___x_510_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0(void){
_start:
{
lean_object* v___x_511_; uint32_t v___x_512_; 
v___x_511_ = lean_box(0);
v___x_512_ = lean_internal_get_hardware_concurrency(v___x_511_);
return v___x_512_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads(void){
_start:
{
uint8_t v___x_513_; 
v___x_513_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__41, &l___private_Lean_Shell_0__Lean_displayHelp___closed__41_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__41);
if (v___x_513_ == 0)
{
uint32_t v___x_514_; 
v___x_514_ = 0;
return v___x_514_;
}
else
{
uint32_t v___x_515_; 
v___x_515_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0, &l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0);
return v___x_515_;
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1(void){
_start:
{
lean_object* v___x_518_; uint32_t v___x_519_; uint32_t v___x_520_; uint8_t v___x_521_; uint8_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_518_ = lean_box(0);
v___x_519_ = l___private_Lean_Shell_0__Lean_defaultNumThreads;
v___x_520_ = l___private_Lean_Shell_0__Lean_defaultTrustLevel;
v___x_521_ = 0;
v___x_522_ = 0;
v___x_523_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__0));
v___x_524_ = l_Lean_Options_empty;
v___x_525_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v___x_523_);
lean_ctor_set(v___x_525_, 2, v___x_524_);
lean_ctor_set(v___x_525_, 3, v___x_518_);
lean_ctor_set(v___x_525_, 4, v___x_518_);
lean_ctor_set(v___x_525_, 5, v___x_518_);
lean_ctor_set(v___x_525_, 6, v___x_518_);
lean_ctor_set(v___x_525_, 7, v___x_518_);
lean_ctor_set(v___x_525_, 8, v___x_518_);
lean_ctor_set(v___x_525_, 9, v___x_518_);
lean_ctor_set(v___x_525_, 10, v___x_523_);
lean_ctor_set(v___x_525_, 11, v___x_518_);
lean_ctor_set(v___x_525_, 12, v___x_518_);
lean_ctor_set(v___x_525_, 13, v___x_518_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 8, v___x_522_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 9, v___x_521_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 10, v___x_521_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 11, v___x_521_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 12, v___x_521_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 13, v___x_521_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 14, v___x_521_);
lean_ctor_set_uint32(v___x_525_, sizeof(void*)*14, v___x_520_);
lean_ctor_set_uint32(v___x_525_, sizeof(void*)*14 + 4, v___x_519_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 15, v___x_521_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 16, v___x_521_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*14 + 17, v___x_521_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg(){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1, &l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___closed__1);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___redArg___boxed(lean_object* v___dummy_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l___private_Lean_Shell_0__Lean_mkShellOptions___redArg();
return v_res_529_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0(void){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l___private_Lean_Shell_0__Lean_mkShellOptions___redArg();
return v___x_530_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object* v_x_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0);
return v___x_532_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object* v_opts_533_){
_start:
{
uint8_t v_run_534_; 
v_run_534_ = lean_ctor_get_uint8(v_opts_533_, sizeof(void*)*14 + 17);
lean_dec_ref(v_opts_533_);
return v_run_534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object* v_opts_535_){
_start:
{
uint8_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = lean_shell_options_get_run(v_opts_535_);
v_r_537_ = lean_box(v_res_536_);
return v_r_537_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(lean_object* v_opts_538_, lean_object* v_opt_539_){
_start:
{
lean_object* v_name_540_; lean_object* v_defValue_541_; lean_object* v_map_542_; lean_object* v___x_543_; 
v_name_540_ = lean_ctor_get(v_opt_539_, 0);
v_defValue_541_ = lean_ctor_get(v_opt_539_, 1);
v_map_542_ = lean_ctor_get(v_opts_538_, 0);
v___x_543_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_542_, v_name_540_);
if (lean_obj_tag(v___x_543_) == 0)
{
uint8_t v___x_544_; 
v___x_544_ = lean_unbox(v_defValue_541_);
return v___x_544_;
}
else
{
lean_object* v_val_545_; 
v_val_545_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_val_545_);
lean_dec_ref_known(v___x_543_, 1);
if (lean_obj_tag(v_val_545_) == 1)
{
uint8_t v_v_546_; 
v_v_546_ = lean_ctor_get_uint8(v_val_545_, 0);
lean_dec_ref_known(v_val_545_, 0);
return v_v_546_;
}
else
{
uint8_t v___x_547_; 
lean_dec(v_val_545_);
v___x_547_ = lean_unbox(v_defValue_541_);
return v___x_547_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0___boxed(lean_object* v_opts_548_, lean_object* v_opt_549_){
_start:
{
uint8_t v_res_550_; lean_object* v_r_551_; 
v_res_550_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v_opts_548_, v_opt_549_);
lean_dec_ref(v_opt_549_);
lean_dec_ref(v_opts_548_);
v_r_551_ = lean_box(v_res_550_);
return v_r_551_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object* v_opts_552_){
_start:
{
lean_object* v_leanOpts_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_leanOpts_553_ = lean_ctor_get(v_opts_552_, 0);
lean_inc_ref(v_leanOpts_553_);
lean_dec_ref(v_opts_552_);
v___x_554_ = l_Lean_profiler;
v___x_555_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_ShellOptions_getProfiler_spec__0(v_leanOpts_553_, v___x_554_);
lean_dec_ref(v_leanOpts_553_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object* v_opts_556_){
_start:
{
uint8_t v_res_557_; lean_object* v_r_558_; 
v_res_557_ = lean_shell_options_get_profiler(v_opts_556_);
v_r_558_ = lean_box(v_res_557_);
return v_r_558_;
}
}
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object* v_opts_559_){
_start:
{
uint32_t v_numThreads_560_; 
v_numThreads_560_ = lean_ctor_get_uint32(v_opts_559_, sizeof(void*)*14 + 4);
lean_dec_ref(v_opts_559_);
return v_numThreads_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object* v_opts_561_){
_start:
{
uint32_t v_res_562_; lean_object* v_r_563_; 
v_res_562_ = lean_shell_options_get_num_threads(v_opts_561_);
v_r_563_ = lean_box_uint32(v_res_562_);
return v_r_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object* v_optName_566_, lean_object* v_optArg_x3f_567_){
_start:
{
if (lean_obj_tag(v_optArg_x3f_567_) == 1)
{
lean_object* v_val_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
v_val_569_ = lean_ctor_get(v_optArg_x3f_567_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v_optArg_x3f_567_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v_optArg_x3f_567_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_val_569_);
lean_dec(v_optArg_x3f_567_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set_tag(v___x_571_, 0);
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_val_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
else
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
lean_dec(v_optArg_x3f_567_);
v___x_577_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__0));
v___x_578_ = lean_string_append(v___x_577_, v_optName_566_);
v___x_579_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_580_ = lean_string_append(v___x_578_, v___x_579_);
v___x_581_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object* v_optName_583_, lean_object* v_optArg_x3f_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l___private_Lean_Shell_0__Lean_checkOptArg(v_optName_583_, v_optArg_x3f_584_);
lean_dec_ref(v_optName_583_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object* v_o_590_, lean_object* v_k_591_, lean_object* v_v_592_){
_start:
{
lean_object* v_map_593_; uint8_t v_hasTrace_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_608_; 
v_map_593_ = lean_ctor_get(v_o_590_, 0);
v_hasTrace_594_ = lean_ctor_get_uint8(v_o_590_, sizeof(void*)*1);
v_isSharedCheck_608_ = !lean_is_exclusive(v_o_590_);
if (v_isSharedCheck_608_ == 0)
{
v___x_596_ = v_o_590_;
v_isShared_597_ = v_isSharedCheck_608_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_map_593_);
lean_dec(v_o_590_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_608_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v_v_592_);
lean_inc(v_k_591_);
v___x_599_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_591_, v___x_598_, v_map_593_);
if (v_hasTrace_594_ == 0)
{
lean_object* v___x_600_; uint8_t v___x_601_; lean_object* v___x_603_; 
v___x_600_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_601_ = l_Lean_Name_isPrefixOf(v___x_600_, v_k_591_);
lean_dec(v_k_591_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_599_);
v___x_603_ = v___x_596_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_599_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_ctor_set_uint8(v___x_603_, sizeof(void*)*1, v___x_601_);
return v___x_603_;
}
}
else
{
lean_object* v___x_606_; 
lean_dec(v_k_591_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_599_);
v___x_606_ = v___x_596_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_599_);
lean_ctor_set_uint8(v_reuseFailAlloc_607_, sizeof(void*)*1, v_hasTrace_594_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object* v___x_609_, lean_object* v_arg_610_, lean_object* v_a_611_, lean_object* v_b_612_){
_start:
{
uint8_t v_decide_613_; 
v_decide_613_ = lean_nat_dec_eq(v_a_611_, v___x_609_);
if (v_decide_613_ == 0)
{
uint32_t v___x_614_; uint32_t v___x_615_; uint8_t v___x_616_; 
v___x_614_ = lean_string_utf8_get_fast(v_arg_610_, v_a_611_);
v___x_615_ = 61;
v___x_616_ = lean_uint32_dec_eq(v___x_614_, v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_box(0);
v___x_618_ = lean_string_utf8_next_fast(v_arg_610_, v_a_611_);
lean_dec(v_a_611_);
v_a_611_ = v___x_618_;
v_b_612_ = v___x_617_;
goto _start;
}
else
{
lean_object* v___x_620_; 
v___x_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_620_, 0, v_a_611_);
return v___x_620_;
}
}
else
{
lean_dec(v_a_611_);
lean_inc(v_b_612_);
return v_b_612_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object* v___x_621_, lean_object* v_arg_622_, lean_object* v_a_623_, lean_object* v_b_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_621_, v_arg_622_, v_a_623_, v_b_624_);
lean_dec(v_b_624_);
lean_dec_ref(v_arg_622_);
lean_dec(v___x_621_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object* v_opts_629_, lean_object* v_arg_630_){
_start:
{
lean_object* v___y_633_; lean_object* v_searcher_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_searcher_664_ = lean_unsigned_to_nat(0u);
v___x_665_ = lean_string_utf8_byte_size(v_arg_630_);
v___x_666_ = lean_box(0);
v___x_667_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_665_, v_arg_630_, v_searcher_664_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
v___y_633_ = v___x_665_;
goto v___jp_632_;
}
else
{
lean_object* v_val_668_; 
v_val_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_val_668_);
lean_dec_ref_known(v___x_667_, 1);
v___y_633_ = v_val_668_;
goto v___jp_632_;
}
v___jp_632_:
{
lean_object* v___x_634_; uint8_t v_decide_635_; 
v___x_634_ = lean_string_utf8_byte_size(v_arg_630_);
v_decide_635_ = lean_nat_dec_eq(v___y_633_, v___x_634_);
if (v_decide_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v_name_638_; lean_object* v___x_639_; lean_object* v_val_640_; lean_object* v___x_641_; 
v___x_636_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_633_);
lean_inc_ref(v_arg_630_);
v___x_637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_637_, 0, v_arg_630_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
lean_ctor_set(v___x_637_, 2, v___y_633_);
v_name_638_ = l_String_Slice_toName(v___x_637_);
lean_dec_ref_known(v___x_637_, 3);
v___x_639_ = lean_string_utf8_next_fast(v_arg_630_, v___y_633_);
lean_dec(v___y_633_);
v_val_640_ = lean_string_utf8_extract_fast(v_arg_630_, v___x_639_, v___x_634_);
lean_dec_ref(v_arg_630_);
v___x_641_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_653_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_653_ == 0)
{
v___x_644_ = v___x_641_;
v_isShared_645_ = v_isSharedCheck_653_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_653_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; 
v___x_646_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_642_, v_name_638_);
lean_dec(v_a_642_);
if (lean_obj_tag(v___x_646_) == 1)
{
lean_object* v_val_647_; lean_object* v___x_648_; 
lean_del_object(v___x_644_);
v_val_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_val_647_);
lean_dec_ref_known(v___x_646_, 1);
v___x_648_ = l_Lean_Language_Lean_setOption(v_opts_629_, v_val_647_, v_name_638_, v_val_640_);
return v___x_648_;
}
else
{
lean_object* v___x_649_; lean_object* v___x_651_; 
lean_dec(v___x_646_);
v___x_649_ = l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(v_opts_629_, v_name_638_, v_val_640_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v___x_649_);
v___x_651_ = v___x_644_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec_ref(v_val_640_);
lean_dec(v_name_638_);
lean_dec_ref(v_opts_629_);
v_a_654_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_641_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_641_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
else
{
lean_object* v___x_662_; lean_object* v___x_663_; 
lean_dec(v___y_633_);
lean_dec_ref(v_arg_630_);
lean_dec_ref(v_opts_629_);
v___x_662_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_setConfigOption___closed__1));
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
return v___x_663_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object* v_opts_669_, lean_object* v_arg_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_opts_669_, v_arg_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object* v___x_673_, lean_object* v___x_674_, lean_object* v_arg_675_, lean_object* v_inst_676_, lean_object* v_R_677_, lean_object* v_a_678_, lean_object* v_b_679_, lean_object* v_c_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_673_, v_arg_675_, v_a_678_, v_b_679_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object* v___x_682_, lean_object* v___x_683_, lean_object* v_arg_684_, lean_object* v_inst_685_, lean_object* v_R_686_, lean_object* v_a_687_, lean_object* v_b_688_, lean_object* v_c_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(v___x_682_, v___x_683_, v_arg_684_, v_inst_685_, v_R_686_, v_a_687_, v_b_688_, v_c_689_);
lean_dec(v_b_688_);
lean_dec_ref(v_arg_684_);
lean_dec_ref(v___x_683_);
lean_dec(v___x_682_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object* v_msg_692_){
_start:
{
lean_object* v___f_694_; lean_object* v___x_695_; 
v___f_694_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_695_ = l_IO_eprint___redArg(v___f_694_, v_msg_692_);
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
lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_711_; 
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; 
v_unused_712_ = lean_ctor_get(v___x_695_, 0);
lean_dec(v_unused_712_);
v___x_705_ = v___x_695_;
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
else
{
lean_dec(v___x_695_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v___x_709_; 
v___x_707_ = lean_box(0);
if (v_isShared_706_ == 0)
{
lean_ctor_set_tag(v___x_705_, 0);
lean_ctor_set(v___x_705_, 0, v___x_707_);
v___x_709_ = v___x_705_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object* v_msg_713_, lean_object* v_a_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(v_msg_713_);
return v_res_715_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_718_; lean_object* v___x_719_; 
v___x_718_ = 1;
v___x_719_ = lean_box_uint32(v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object* v_x_720_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = lean_apply_1(v_x_720_, lean_box(0));
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_729_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_743_; lean_object* v___f_744_; lean_object* v___x_745_; 
v_a_738_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_729_, 1);
v___x_743_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_744_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_745_ = l_IO_eprint___redArg(v___f_744_, v___x_743_);
lean_dec_ref(v___x_745_);
goto v___jp_739_;
v___jp_739_:
{
lean_object* v___x_740_; lean_object* v___f_741_; lean_object* v___x_742_; 
v___x_740_ = lean_io_error_to_string(v_a_738_);
v___f_741_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_742_ = l_IO_eprint___redArg(v___f_741_, v___x_740_);
lean_dec_ref(v___x_742_);
goto v___jp_725_;
}
}
v___jp_722_:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
v___jp_725_:
{
lean_object* v___x_726_; lean_object* v___f_727_; lean_object* v___x_728_; 
v___x_726_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_727_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_728_ = l_IO_eprint___redArg(v___f_727_, v___x_726_);
lean_dec_ref(v___x_728_);
goto v___jp_722_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object* v_x_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(v_x_746_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object* v_00_u03b1_749_, lean_object* v_x_750_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = lean_apply_1(v_x_750_, lean_box(0));
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_773_; lean_object* v___f_774_; lean_object* v___x_775_; 
v_a_768_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_759_, 1);
v___x_773_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_774_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_775_ = l_IO_eprint___redArg(v___f_774_, v___x_773_);
lean_dec_ref(v___x_775_);
goto v___jp_769_;
v___jp_769_:
{
lean_object* v___x_770_; lean_object* v___f_771_; lean_object* v___x_772_; 
v___x_770_ = lean_io_error_to_string(v_a_768_);
v___f_771_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_772_ = l_IO_eprint___redArg(v___f_771_, v___x_770_);
lean_dec_ref(v___x_772_);
goto v___jp_755_;
}
}
v___jp_752_:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
v___jp_755_:
{
lean_object* v___x_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v___x_756_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_757_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_758_ = l_IO_eprint___redArg(v___f_757_, v___x_756_);
lean_dec_ref(v___x_758_);
goto v___jp_752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object* v_00_u03b1_776_, lean_object* v_x_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(v_00_u03b1_776_, v_x_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object* v_opt_782_){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___f_791_; lean_object* v___x_792_; 
v___x_787_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0));
v___x_788_ = lean_string_append(v___x_787_, v_opt_782_);
v___x_789_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_790_ = lean_string_append(v___x_788_, v___x_789_);
v___f_791_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_792_ = l_IO_eprint___redArg(v___f_791_, v___x_790_);
lean_dec_ref(v___x_792_);
goto v___jp_784_;
v___jp_784_:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
return v___x_786_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object* v_opt_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(v_opt_793_);
lean_dec_ref(v_opt_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object* v_opt_798_){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___f_807_; lean_object* v___x_808_; 
v___x_803_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0));
v___x_804_ = lean_string_append(v___x_803_, v_opt_798_);
v___x_805_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1));
v___x_806_ = lean_string_append(v___x_804_, v___x_805_);
v___f_807_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_808_ = l_IO_eprint___redArg(v___f_807_, v___x_806_);
lean_dec_ref(v___x_808_);
goto v___jp_800_;
v___jp_800_:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object* v_opt_809_, lean_object* v_a_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(v_opt_809_);
lean_dec_ref(v_opt_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object* v_s_812_){
_start:
{
lean_object* v___x_814_; lean_object* v_putStr_815_; lean_object* v___x_816_; 
v___x_814_ = lean_get_stderr();
v_putStr_815_ = lean_ctor_get(v___x_814_, 4);
lean_inc_ref(v_putStr_815_);
lean_dec_ref(v___x_814_);
v___x_816_ = lean_apply_2(v_putStr_815_, v_s_812_, lean_box(0));
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object* v_s_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_s_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object* v_s_820_){
_start:
{
lean_object* v___x_822_; lean_object* v_putStr_823_; lean_object* v___x_824_; 
v___x_822_ = lean_get_stdout();
v_putStr_823_ = lean_ctor_get(v___x_822_, 4);
lean_inc_ref(v_putStr_823_);
lean_dec_ref(v___x_822_);
v___x_824_ = lean_apply_2(v_putStr_823_, v_s_820_, lean_box(0));
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object* v_s_825_, lean_object* v_a_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v_s_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object* v_s_828_){
_start:
{
uint32_t v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = 10;
v___x_831_ = lean_string_push(v_s_828_, v___x_830_);
v___x_832_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object* v_s_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v_s_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object* v_o_836_, lean_object* v_k_837_, uint8_t v_v_838_){
_start:
{
lean_object* v_map_839_; uint8_t v_hasTrace_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_854_; 
v_map_839_ = lean_ctor_get(v_o_836_, 0);
v_hasTrace_840_ = lean_ctor_get_uint8(v_o_836_, sizeof(void*)*1);
v_isSharedCheck_854_ = !lean_is_exclusive(v_o_836_);
if (v_isSharedCheck_854_ == 0)
{
v___x_842_ = v_o_836_;
v_isShared_843_ = v_isSharedCheck_854_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_map_839_);
lean_dec(v_o_836_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_854_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_844_, 0, v_v_838_);
lean_inc(v_k_837_);
v___x_845_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_837_, v___x_844_, v_map_839_);
if (v_hasTrace_840_ == 0)
{
lean_object* v___x_846_; uint8_t v___x_847_; lean_object* v___x_849_; 
v___x_846_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_847_ = l_Lean_Name_isPrefixOf(v___x_846_, v_k_837_);
lean_dec(v_k_837_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_845_);
v___x_849_ = v___x_842_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_845_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*1, v___x_847_);
return v___x_849_;
}
}
else
{
lean_object* v___x_852_; 
lean_dec(v_k_837_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_845_);
v___x_852_ = v___x_842_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_845_);
lean_ctor_set_uint8(v_reuseFailAlloc_853_, sizeof(void*)*1, v_hasTrace_840_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object* v_o_855_, lean_object* v_k_856_, lean_object* v_v_857_){
_start:
{
uint8_t v_v_boxed_858_; lean_object* v_res_859_; 
v_v_boxed_858_ = lean_unbox(v_v_857_);
v_res_859_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_o_855_, v_k_856_, v_v_boxed_858_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object* v_opts_860_, lean_object* v_opt_861_, uint8_t v_val_862_){
_start:
{
lean_object* v_name_863_; lean_object* v___x_864_; 
v_name_863_ = lean_ctor_get(v_opt_861_, 0);
lean_inc(v_name_863_);
lean_dec_ref(v_opt_861_);
v___x_864_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_opts_860_, v_name_863_, v_val_862_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object* v_opts_865_, lean_object* v_opt_866_, lean_object* v_val_867_){
_start:
{
uint8_t v_val_boxed_868_; lean_object* v_res_869_; 
v_val_boxed_868_ = lean_unbox(v_val_867_);
v_res_869_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_opts_865_, v_opt_866_, v_val_boxed_868_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object* v_o_870_, lean_object* v_k_871_, lean_object* v_v_872_){
_start:
{
lean_object* v_map_873_; uint8_t v_hasTrace_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_888_; 
v_map_873_ = lean_ctor_get(v_o_870_, 0);
v_hasTrace_874_ = lean_ctor_get_uint8(v_o_870_, sizeof(void*)*1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_o_870_);
if (v_isSharedCheck_888_ == 0)
{
v___x_876_ = v_o_870_;
v_isShared_877_ = v_isSharedCheck_888_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_map_873_);
lean_dec(v_o_870_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_888_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_878_, 0, v_v_872_);
lean_inc(v_k_871_);
v___x_879_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_871_, v___x_878_, v_map_873_);
if (v_hasTrace_874_ == 0)
{
lean_object* v___x_880_; uint8_t v___x_881_; lean_object* v___x_883_; 
v___x_880_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_881_ = l_Lean_Name_isPrefixOf(v___x_880_, v_k_871_);
lean_dec(v_k_871_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_879_);
v___x_883_ = v___x_876_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_879_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*1, v___x_881_);
return v___x_883_;
}
}
else
{
lean_object* v___x_886_; 
lean_dec(v_k_871_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_879_);
v___x_886_ = v___x_876_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_879_);
lean_ctor_set_uint8(v_reuseFailAlloc_887_, sizeof(void*)*1, v_hasTrace_874_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object* v_opts_889_, lean_object* v_opt_890_, lean_object* v_val_891_){
_start:
{
lean_object* v_name_892_; lean_object* v___x_893_; 
v_name_892_ = lean_ctor_get(v_opt_890_, 0);
lean_inc(v_name_892_);
lean_dec_ref(v_opt_890_);
v___x_893_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(v_opts_889_, v_name_892_, v_val_891_);
return v___x_893_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = l_System_Platform_numBits;
v___x_924_ = lean_unsigned_to_nat(2u);
v___x_925_ = lean_nat_pow(v___x_924_, v___x_923_);
return v___x_925_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1(void){
_start:
{
uint32_t v___x_935_; lean_object* v___x_936_; 
v___x_935_ = 0;
v___x_936_ = lean_box_uint32(v___x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object* v_opts_937_, uint32_t v_opt_938_, lean_object* v_optArg_x3f_939_){
_start:
{
lean_object* v___y_1023_; lean_object* v___y_1057_; uint32_t v___x_1165_; uint8_t v___x_1166_; 
v___x_1165_ = 101;
v___x_1166_ = lean_uint32_dec_eq(v_opt_938_, v___x_1165_);
if (v___x_1166_ == 0)
{
uint32_t v___x_1167_; uint8_t v___x_1168_; 
v___x_1167_ = 106;
v___x_1168_ = lean_uint32_dec_eq(v_opt_938_, v___x_1167_);
if (v___x_1168_ == 0)
{
uint32_t v___x_1169_; uint8_t v___x_1170_; 
v___x_1169_ = 118;
v___x_1170_ = lean_uint32_dec_eq(v_opt_938_, v___x_1169_);
if (v___x_1170_ == 0)
{
uint32_t v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = 86;
v___x_1172_ = lean_uint32_dec_eq(v_opt_938_, v___x_1171_);
if (v___x_1172_ == 0)
{
uint32_t v___x_1173_; uint8_t v___x_1174_; 
v___x_1173_ = 103;
v___x_1174_ = lean_uint32_dec_eq(v_opt_938_, v___x_1173_);
if (v___x_1174_ == 0)
{
uint32_t v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = 104;
v___x_1176_ = lean_uint32_dec_eq(v_opt_938_, v___x_1175_);
if (v___x_1176_ == 0)
{
uint32_t v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = 102;
v___x_1178_ = lean_uint32_dec_eq(v_opt_938_, v___x_1177_);
if (v___x_1178_ == 0)
{
uint32_t v___x_1179_; uint8_t v___x_1180_; 
v___x_1179_ = 99;
v___x_1180_ = lean_uint32_dec_eq(v_opt_938_, v___x_1179_);
if (v___x_1180_ == 0)
{
uint32_t v___x_1181_; uint8_t v___x_1182_; 
v___x_1181_ = 98;
v___x_1182_ = lean_uint32_dec_eq(v_opt_938_, v___x_1181_);
if (v___x_1182_ == 0)
{
uint32_t v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = 115;
v___x_1184_ = lean_uint32_dec_eq(v_opt_938_, v___x_1183_);
if (v___x_1184_ == 0)
{
uint32_t v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = 73;
v___x_1186_ = lean_uint32_dec_eq(v_opt_938_, v___x_1185_);
if (v___x_1186_ == 0)
{
uint32_t v___x_1187_; uint8_t v___x_1188_; 
v___x_1187_ = 114;
v___x_1188_ = lean_uint32_dec_eq(v_opt_938_, v___x_1187_);
if (v___x_1188_ == 0)
{
uint32_t v___x_1189_; uint8_t v___x_1190_; 
v___x_1189_ = 111;
v___x_1190_ = lean_uint32_dec_eq(v_opt_938_, v___x_1189_);
if (v___x_1190_ == 0)
{
uint32_t v___x_1191_; uint8_t v___x_1192_; 
v___x_1191_ = 105;
v___x_1192_ = lean_uint32_dec_eq(v_opt_938_, v___x_1191_);
if (v___x_1192_ == 0)
{
uint32_t v___x_1193_; uint8_t v___x_1194_; 
v___x_1193_ = 85;
v___x_1194_ = lean_uint32_dec_eq(v_opt_938_, v___x_1193_);
if (v___x_1194_ == 0)
{
uint32_t v___x_1195_; uint8_t v___x_1196_; 
v___x_1195_ = 82;
v___x_1196_ = lean_uint32_dec_eq(v_opt_938_, v___x_1195_);
if (v___x_1196_ == 0)
{
uint32_t v___x_1197_; uint8_t v___x_1198_; 
v___x_1197_ = 77;
v___x_1198_ = lean_uint32_dec_eq(v_opt_938_, v___x_1197_);
if (v___x_1198_ == 0)
{
uint32_t v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = 84;
v___x_1200_ = lean_uint32_dec_eq(v_opt_938_, v___x_1199_);
if (v___x_1200_ == 0)
{
uint32_t v___x_1201_; uint8_t v___x_1202_; 
v___x_1201_ = 116;
v___x_1202_ = lean_uint32_dec_eq(v_opt_938_, v___x_1201_);
if (v___x_1202_ == 0)
{
uint32_t v___x_1203_; uint8_t v___x_1204_; 
v___x_1203_ = 113;
v___x_1204_ = lean_uint32_dec_eq(v_opt_938_, v___x_1203_);
if (v___x_1204_ == 0)
{
uint32_t v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = 100;
v___x_1206_ = lean_uint32_dec_eq(v_opt_938_, v___x_1205_);
if (v___x_1206_ == 0)
{
uint32_t v___x_1207_; uint8_t v___x_1208_; 
v___x_1207_ = 79;
v___x_1208_ = lean_uint32_dec_eq(v_opt_938_, v___x_1207_);
if (v___x_1208_ == 0)
{
uint32_t v___x_1209_; uint8_t v___x_1210_; 
v___x_1209_ = 78;
v___x_1210_ = lean_uint32_dec_eq(v_opt_938_, v___x_1209_);
if (v___x_1210_ == 0)
{
uint32_t v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = 74;
v___x_1212_ = lean_uint32_dec_eq(v_opt_938_, v___x_1211_);
if (v___x_1212_ == 0)
{
uint32_t v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = 97;
v___x_1214_ = lean_uint32_dec_eq(v_opt_938_, v___x_1213_);
if (v___x_1214_ == 0)
{
uint32_t v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = 120;
v___x_1216_ = lean_uint32_dec_eq(v_opt_938_, v___x_1215_);
if (v___x_1216_ == 0)
{
uint32_t v___x_1217_; uint8_t v___x_1218_; 
v___x_1217_ = 76;
v___x_1218_ = lean_uint32_dec_eq(v_opt_938_, v___x_1217_);
if (v___x_1218_ == 0)
{
uint32_t v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = 68;
v___x_1220_ = lean_uint32_dec_eq(v_opt_938_, v___x_1219_);
if (v___x_1220_ == 0)
{
uint32_t v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = 83;
v___x_1222_ = lean_uint32_dec_eq(v_opt_938_, v___x_1221_);
if (v___x_1222_ == 0)
{
uint32_t v___x_1223_; uint8_t v___x_1224_; 
v___x_1223_ = 87;
v___x_1224_ = lean_uint32_dec_eq(v_opt_938_, v___x_1223_);
if (v___x_1224_ == 0)
{
uint32_t v___x_1225_; uint8_t v___x_1226_; 
v___x_1225_ = 80;
v___x_1226_ = lean_uint32_dec_eq(v_opt_938_, v___x_1225_);
if (v___x_1226_ == 0)
{
uint32_t v___x_1227_; uint8_t v___x_1228_; 
v___x_1227_ = 66;
v___x_1228_ = lean_uint32_dec_eq(v_opt_938_, v___x_1227_);
if (v___x_1228_ == 0)
{
uint32_t v___x_1229_; uint8_t v___x_1230_; 
v___x_1229_ = 112;
v___x_1230_ = lean_uint32_dec_eq(v_opt_938_, v___x_1229_);
if (v___x_1230_ == 0)
{
uint32_t v___x_1231_; uint8_t v___x_1232_; 
v___x_1231_ = 108;
v___x_1232_ = lean_uint32_dec_eq(v_opt_938_, v___x_1231_);
if (v___x_1232_ == 0)
{
uint32_t v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = 117;
v___x_1234_ = lean_uint32_dec_eq(v_opt_938_, v___x_1233_);
if (v___x_1234_ == 0)
{
uint32_t v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = 69;
v___x_1236_ = lean_uint32_dec_eq(v_opt_938_, v___x_1235_);
if (v___x_1236_ == 0)
{
uint32_t v___x_1237_; uint8_t v___x_1238_; 
v___x_1237_ = 89;
v___x_1238_ = lean_uint32_dec_eq(v_opt_938_, v___x_1237_);
if (v___x_1238_ == 0)
{
uint32_t v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = 90;
v___x_1240_ = lean_uint32_dec_eq(v_opt_938_, v___x_1239_);
if (v___x_1240_ == 0)
{
uint32_t v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = 72;
v___x_1242_ = lean_uint32_dec_eq(v_opt_938_, v___x_1241_);
if (v___x_1242_ == 0)
{
lean_dec(v_optArg_x3f_939_);
lean_dec_ref(v_opts_937_);
goto v___jp_1075_;
}
else
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1));
v___x_1244_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1243_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1286_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1247_ = v___x_1244_;
v_isShared_1248_ = v_isSharedCheck_1286_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1244_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1286_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v_leanOpts_1249_; lean_object* v_forwardedArgs_1250_; uint8_t v_component_1251_; uint8_t v_printPrefix_1252_; uint8_t v_printLibDir_1253_; uint8_t v_useStdin_1254_; uint8_t v_onlyDeps_1255_; uint8_t v_onlySrcDeps_1256_; uint8_t v_depsJson_1257_; lean_object* v_opts_1258_; uint32_t v_trustLevel_1259_; uint32_t v_numThreads_1260_; lean_object* v_rootDir_x3f_1261_; lean_object* v_setupFileName_x3f_1262_; lean_object* v_oleanFileName_x3f_1263_; lean_object* v_usageFileName_x3f_1264_; lean_object* v_ileanFileName_x3f_1265_; lean_object* v_cFileName_x3f_1266_; lean_object* v_bcFileName_x3f_1267_; uint8_t v_jsonOutput_1268_; lean_object* v_errorOnKinds_1269_; uint8_t v_printStats_1270_; uint8_t v_run_1271_; lean_object* v_incrSaveFileName_x3f_1272_; lean_object* v_incrLoadFileName_x3f_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1284_; 
v_leanOpts_1249_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1250_ = lean_ctor_get(v_opts_937_, 1);
v_component_1251_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1252_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1253_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1254_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1255_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1256_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1257_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1258_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1259_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1260_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1261_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1262_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1263_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1264_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1265_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1266_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1267_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1268_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1269_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1270_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1271_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1272_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1273_ = lean_ctor_get(v_opts_937_, 12);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1284_ == 0)
{
lean_object* v_unused_1285_; 
v_unused_1285_ = lean_ctor_get(v_opts_937_, 13);
lean_dec(v_unused_1285_);
v___x_1275_ = v_opts_937_;
v_isShared_1276_ = v_isSharedCheck_1284_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_incrLoadFileName_x3f_1273_);
lean_inc(v_incrSaveFileName_x3f_1272_);
lean_inc(v_errorOnKinds_1269_);
lean_inc(v_bcFileName_x3f_1267_);
lean_inc(v_cFileName_x3f_1266_);
lean_inc(v_ileanFileName_x3f_1265_);
lean_inc(v_usageFileName_x3f_1264_);
lean_inc(v_oleanFileName_x3f_1263_);
lean_inc(v_setupFileName_x3f_1262_);
lean_inc(v_rootDir_x3f_1261_);
lean_inc(v_opts_1258_);
lean_inc(v_forwardedArgs_1250_);
lean_inc(v_leanOpts_1249_);
lean_dec(v_opts_937_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1284_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1277_; lean_object* v___x_1279_; 
v___x_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1277_, 0, v_a_1245_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 13, v___x_1277_);
v___x_1279_ = v___x_1275_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_leanOpts_1249_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v_forwardedArgs_1250_);
lean_ctor_set(v_reuseFailAlloc_1283_, 2, v_opts_1258_);
lean_ctor_set(v_reuseFailAlloc_1283_, 3, v_rootDir_x3f_1261_);
lean_ctor_set(v_reuseFailAlloc_1283_, 4, v_setupFileName_x3f_1262_);
lean_ctor_set(v_reuseFailAlloc_1283_, 5, v_oleanFileName_x3f_1263_);
lean_ctor_set(v_reuseFailAlloc_1283_, 6, v_usageFileName_x3f_1264_);
lean_ctor_set(v_reuseFailAlloc_1283_, 7, v_ileanFileName_x3f_1265_);
lean_ctor_set(v_reuseFailAlloc_1283_, 8, v_cFileName_x3f_1266_);
lean_ctor_set(v_reuseFailAlloc_1283_, 9, v_bcFileName_x3f_1267_);
lean_ctor_set(v_reuseFailAlloc_1283_, 10, v_errorOnKinds_1269_);
lean_ctor_set(v_reuseFailAlloc_1283_, 11, v_incrSaveFileName_x3f_1272_);
lean_ctor_set(v_reuseFailAlloc_1283_, 12, v_incrLoadFileName_x3f_1273_);
lean_ctor_set(v_reuseFailAlloc_1283_, 13, v___x_1277_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 8, v_component_1251_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 9, v_printPrefix_1252_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 10, v_printLibDir_1253_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 11, v_useStdin_1254_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 12, v_onlyDeps_1255_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 13, v_onlySrcDeps_1256_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 14, v_depsJson_1257_);
lean_ctor_set_uint32(v_reuseFailAlloc_1283_, sizeof(void*)*14, v_trustLevel_1259_);
lean_ctor_set_uint32(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 4, v_numThreads_1260_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 15, v_jsonOutput_1268_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 16, v_printStats_1270_);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, sizeof(void*)*14 + 17, v_run_1271_);
v___x_1279_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1281_; 
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 0, v___x_1279_);
v___x_1281_ = v___x_1247_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
lean_dec_ref(v_opts_937_);
v_a_1287_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1244_, 1);
v___x_1291_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1292_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1291_);
lean_dec_ref(v___x_1292_);
goto v___jp_1288_;
v___jp_1288_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_io_error_to_string(v_a_1287_);
v___x_1290_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1289_);
lean_dec_ref(v___x_1290_);
goto v___jp_1081_;
}
}
}
}
else
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2));
v___x_1294_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1293_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1336_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1294_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1297_ = v___x_1294_;
v_isShared_1298_ = v_isSharedCheck_1336_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1294_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1336_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v_leanOpts_1299_; lean_object* v_forwardedArgs_1300_; uint8_t v_component_1301_; uint8_t v_printPrefix_1302_; uint8_t v_printLibDir_1303_; uint8_t v_useStdin_1304_; uint8_t v_onlyDeps_1305_; uint8_t v_onlySrcDeps_1306_; uint8_t v_depsJson_1307_; lean_object* v_opts_1308_; uint32_t v_trustLevel_1309_; uint32_t v_numThreads_1310_; lean_object* v_rootDir_x3f_1311_; lean_object* v_setupFileName_x3f_1312_; lean_object* v_oleanFileName_x3f_1313_; lean_object* v_usageFileName_x3f_1314_; lean_object* v_ileanFileName_x3f_1315_; lean_object* v_cFileName_x3f_1316_; lean_object* v_bcFileName_x3f_1317_; uint8_t v_jsonOutput_1318_; lean_object* v_errorOnKinds_1319_; uint8_t v_printStats_1320_; uint8_t v_run_1321_; lean_object* v_incrSaveFileName_x3f_1322_; lean_object* v_incrHeaderSaveFileName_x3f_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1334_; 
v_leanOpts_1299_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1300_ = lean_ctor_get(v_opts_937_, 1);
v_component_1301_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1302_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1303_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1304_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1305_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1306_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1307_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1308_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1309_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1310_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1311_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1312_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1313_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1314_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1315_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1316_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1317_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1318_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1319_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1320_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1321_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1322_ = lean_ctor_get(v_opts_937_, 11);
v_incrHeaderSaveFileName_x3f_1323_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1334_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1334_ == 0)
{
lean_object* v_unused_1335_; 
v_unused_1335_ = lean_ctor_get(v_opts_937_, 12);
lean_dec(v_unused_1335_);
v___x_1325_ = v_opts_937_;
v_isShared_1326_ = v_isSharedCheck_1334_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1323_);
lean_inc(v_incrSaveFileName_x3f_1322_);
lean_inc(v_errorOnKinds_1319_);
lean_inc(v_bcFileName_x3f_1317_);
lean_inc(v_cFileName_x3f_1316_);
lean_inc(v_ileanFileName_x3f_1315_);
lean_inc(v_usageFileName_x3f_1314_);
lean_inc(v_oleanFileName_x3f_1313_);
lean_inc(v_setupFileName_x3f_1312_);
lean_inc(v_rootDir_x3f_1311_);
lean_inc(v_opts_1308_);
lean_inc(v_forwardedArgs_1300_);
lean_inc(v_leanOpts_1299_);
lean_dec(v_opts_937_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1334_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1327_, 0, v_a_1295_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 12, v___x_1327_);
v___x_1329_ = v___x_1325_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_leanOpts_1299_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v_forwardedArgs_1300_);
lean_ctor_set(v_reuseFailAlloc_1333_, 2, v_opts_1308_);
lean_ctor_set(v_reuseFailAlloc_1333_, 3, v_rootDir_x3f_1311_);
lean_ctor_set(v_reuseFailAlloc_1333_, 4, v_setupFileName_x3f_1312_);
lean_ctor_set(v_reuseFailAlloc_1333_, 5, v_oleanFileName_x3f_1313_);
lean_ctor_set(v_reuseFailAlloc_1333_, 6, v_usageFileName_x3f_1314_);
lean_ctor_set(v_reuseFailAlloc_1333_, 7, v_ileanFileName_x3f_1315_);
lean_ctor_set(v_reuseFailAlloc_1333_, 8, v_cFileName_x3f_1316_);
lean_ctor_set(v_reuseFailAlloc_1333_, 9, v_bcFileName_x3f_1317_);
lean_ctor_set(v_reuseFailAlloc_1333_, 10, v_errorOnKinds_1319_);
lean_ctor_set(v_reuseFailAlloc_1333_, 11, v_incrSaveFileName_x3f_1322_);
lean_ctor_set(v_reuseFailAlloc_1333_, 12, v___x_1327_);
lean_ctor_set(v_reuseFailAlloc_1333_, 13, v_incrHeaderSaveFileName_x3f_1323_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 8, v_component_1301_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 9, v_printPrefix_1302_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 10, v_printLibDir_1303_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 11, v_useStdin_1304_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 12, v_onlyDeps_1305_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 13, v_onlySrcDeps_1306_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 14, v_depsJson_1307_);
lean_ctor_set_uint32(v_reuseFailAlloc_1333_, sizeof(void*)*14, v_trustLevel_1309_);
lean_ctor_set_uint32(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 4, v_numThreads_1310_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 15, v_jsonOutput_1318_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 16, v_printStats_1320_);
lean_ctor_set_uint8(v_reuseFailAlloc_1333_, sizeof(void*)*14 + 17, v_run_1321_);
v___x_1329_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1331_; 
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 0, v___x_1329_);
v___x_1331_ = v___x_1297_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1329_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_dec_ref(v_opts_937_);
v_a_1337_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1294_, 1);
v___x_1341_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1342_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1341_);
lean_dec_ref(v___x_1342_);
goto v___jp_1338_;
v___jp_1338_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = lean_io_error_to_string(v_a_1337_);
v___x_1340_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1339_);
lean_dec_ref(v___x_1340_);
goto v___jp_1047_;
}
}
}
}
else
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3));
v___x_1344_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1343_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1386_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1347_ = v___x_1344_;
v_isShared_1348_ = v_isSharedCheck_1386_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1344_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1386_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v_leanOpts_1349_; lean_object* v_forwardedArgs_1350_; uint8_t v_component_1351_; uint8_t v_printPrefix_1352_; uint8_t v_printLibDir_1353_; uint8_t v_useStdin_1354_; uint8_t v_onlyDeps_1355_; uint8_t v_onlySrcDeps_1356_; uint8_t v_depsJson_1357_; lean_object* v_opts_1358_; uint32_t v_trustLevel_1359_; uint32_t v_numThreads_1360_; lean_object* v_rootDir_x3f_1361_; lean_object* v_setupFileName_x3f_1362_; lean_object* v_oleanFileName_x3f_1363_; lean_object* v_usageFileName_x3f_1364_; lean_object* v_ileanFileName_x3f_1365_; lean_object* v_cFileName_x3f_1366_; lean_object* v_bcFileName_x3f_1367_; uint8_t v_jsonOutput_1368_; lean_object* v_errorOnKinds_1369_; uint8_t v_printStats_1370_; uint8_t v_run_1371_; lean_object* v_incrLoadFileName_x3f_1372_; lean_object* v_incrHeaderSaveFileName_x3f_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1384_; 
v_leanOpts_1349_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1350_ = lean_ctor_get(v_opts_937_, 1);
v_component_1351_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1352_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1353_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1354_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1355_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1356_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1357_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1358_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1359_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1360_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1361_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1362_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1363_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1364_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1365_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1366_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1367_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1368_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1369_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1370_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1371_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrLoadFileName_x3f_1372_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1373_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1384_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1384_ == 0)
{
lean_object* v_unused_1385_; 
v_unused_1385_ = lean_ctor_get(v_opts_937_, 11);
lean_dec(v_unused_1385_);
v___x_1375_ = v_opts_937_;
v_isShared_1376_ = v_isSharedCheck_1384_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1373_);
lean_inc(v_incrLoadFileName_x3f_1372_);
lean_inc(v_errorOnKinds_1369_);
lean_inc(v_bcFileName_x3f_1367_);
lean_inc(v_cFileName_x3f_1366_);
lean_inc(v_ileanFileName_x3f_1365_);
lean_inc(v_usageFileName_x3f_1364_);
lean_inc(v_oleanFileName_x3f_1363_);
lean_inc(v_setupFileName_x3f_1362_);
lean_inc(v_rootDir_x3f_1361_);
lean_inc(v_opts_1358_);
lean_inc(v_forwardedArgs_1350_);
lean_inc(v_leanOpts_1349_);
lean_dec(v_opts_937_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1384_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1379_; 
v___x_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1377_, 0, v_a_1345_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 11, v___x_1377_);
v___x_1379_ = v___x_1375_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_leanOpts_1349_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v_forwardedArgs_1350_);
lean_ctor_set(v_reuseFailAlloc_1383_, 2, v_opts_1358_);
lean_ctor_set(v_reuseFailAlloc_1383_, 3, v_rootDir_x3f_1361_);
lean_ctor_set(v_reuseFailAlloc_1383_, 4, v_setupFileName_x3f_1362_);
lean_ctor_set(v_reuseFailAlloc_1383_, 5, v_oleanFileName_x3f_1363_);
lean_ctor_set(v_reuseFailAlloc_1383_, 6, v_usageFileName_x3f_1364_);
lean_ctor_set(v_reuseFailAlloc_1383_, 7, v_ileanFileName_x3f_1365_);
lean_ctor_set(v_reuseFailAlloc_1383_, 8, v_cFileName_x3f_1366_);
lean_ctor_set(v_reuseFailAlloc_1383_, 9, v_bcFileName_x3f_1367_);
lean_ctor_set(v_reuseFailAlloc_1383_, 10, v_errorOnKinds_1369_);
lean_ctor_set(v_reuseFailAlloc_1383_, 11, v___x_1377_);
lean_ctor_set(v_reuseFailAlloc_1383_, 12, v_incrLoadFileName_x3f_1372_);
lean_ctor_set(v_reuseFailAlloc_1383_, 13, v_incrHeaderSaveFileName_x3f_1373_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 8, v_component_1351_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 9, v_printPrefix_1352_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 10, v_printLibDir_1353_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 11, v_useStdin_1354_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 12, v_onlyDeps_1355_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 13, v_onlySrcDeps_1356_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 14, v_depsJson_1357_);
lean_ctor_set_uint32(v_reuseFailAlloc_1383_, sizeof(void*)*14, v_trustLevel_1359_);
lean_ctor_set_uint32(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 4, v_numThreads_1360_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 15, v_jsonOutput_1368_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 16, v_printStats_1370_);
lean_ctor_set_uint8(v_reuseFailAlloc_1383_, sizeof(void*)*14 + 17, v_run_1371_);
v___x_1379_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
lean_object* v___x_1381_; 
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 0, v___x_1379_);
v___x_1381_ = v___x_1347_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_opts_937_);
v_a_1387_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1387_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1391_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1392_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1391_);
lean_dec_ref(v___x_1392_);
goto v___jp_1388_;
v___jp_1388_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = lean_io_error_to_string(v_a_1387_);
v___x_1390_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1389_);
lean_dec_ref(v___x_1390_);
goto v___jp_1087_;
}
}
}
}
else
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4));
v___x_1394_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1393_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1437_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1397_ = v___x_1394_;
v_isShared_1398_ = v_isSharedCheck_1437_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1437_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v_leanOpts_1399_; lean_object* v_forwardedArgs_1400_; uint8_t v_component_1401_; uint8_t v_printPrefix_1402_; uint8_t v_printLibDir_1403_; uint8_t v_useStdin_1404_; uint8_t v_onlyDeps_1405_; uint8_t v_onlySrcDeps_1406_; uint8_t v_depsJson_1407_; lean_object* v_opts_1408_; uint32_t v_trustLevel_1409_; uint32_t v_numThreads_1410_; lean_object* v_rootDir_x3f_1411_; lean_object* v_setupFileName_x3f_1412_; lean_object* v_oleanFileName_x3f_1413_; lean_object* v_usageFileName_x3f_1414_; lean_object* v_ileanFileName_x3f_1415_; lean_object* v_cFileName_x3f_1416_; lean_object* v_bcFileName_x3f_1417_; uint8_t v_jsonOutput_1418_; lean_object* v_errorOnKinds_1419_; uint8_t v_printStats_1420_; uint8_t v_run_1421_; lean_object* v_incrSaveFileName_x3f_1422_; lean_object* v_incrLoadFileName_x3f_1423_; lean_object* v_incrHeaderSaveFileName_x3f_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1436_; 
v_leanOpts_1399_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1400_ = lean_ctor_get(v_opts_937_, 1);
v_component_1401_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1402_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1403_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1404_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1405_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1406_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1407_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1408_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1409_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1410_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1411_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1412_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1413_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1414_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1415_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1416_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1417_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1418_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1419_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1420_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1421_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1422_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1423_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1424_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1436_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1426_ = v_opts_937_;
v_isShared_1427_ = v_isSharedCheck_1436_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1424_);
lean_inc(v_incrLoadFileName_x3f_1423_);
lean_inc(v_incrSaveFileName_x3f_1422_);
lean_inc(v_errorOnKinds_1419_);
lean_inc(v_bcFileName_x3f_1417_);
lean_inc(v_cFileName_x3f_1416_);
lean_inc(v_ileanFileName_x3f_1415_);
lean_inc(v_usageFileName_x3f_1414_);
lean_inc(v_oleanFileName_x3f_1413_);
lean_inc(v_setupFileName_x3f_1412_);
lean_inc(v_rootDir_x3f_1411_);
lean_inc(v_opts_1408_);
lean_inc(v_forwardedArgs_1400_);
lean_inc(v_leanOpts_1399_);
lean_dec(v_opts_937_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1436_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1431_; 
v___x_1428_ = l_String_toName(v_a_1395_);
v___x_1429_ = lean_array_push(v_errorOnKinds_1419_, v___x_1428_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 10, v___x_1429_);
v___x_1431_ = v___x_1426_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_leanOpts_1399_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v_forwardedArgs_1400_);
lean_ctor_set(v_reuseFailAlloc_1435_, 2, v_opts_1408_);
lean_ctor_set(v_reuseFailAlloc_1435_, 3, v_rootDir_x3f_1411_);
lean_ctor_set(v_reuseFailAlloc_1435_, 4, v_setupFileName_x3f_1412_);
lean_ctor_set(v_reuseFailAlloc_1435_, 5, v_oleanFileName_x3f_1413_);
lean_ctor_set(v_reuseFailAlloc_1435_, 6, v_usageFileName_x3f_1414_);
lean_ctor_set(v_reuseFailAlloc_1435_, 7, v_ileanFileName_x3f_1415_);
lean_ctor_set(v_reuseFailAlloc_1435_, 8, v_cFileName_x3f_1416_);
lean_ctor_set(v_reuseFailAlloc_1435_, 9, v_bcFileName_x3f_1417_);
lean_ctor_set(v_reuseFailAlloc_1435_, 10, v___x_1429_);
lean_ctor_set(v_reuseFailAlloc_1435_, 11, v_incrSaveFileName_x3f_1422_);
lean_ctor_set(v_reuseFailAlloc_1435_, 12, v_incrLoadFileName_x3f_1423_);
lean_ctor_set(v_reuseFailAlloc_1435_, 13, v_incrHeaderSaveFileName_x3f_1424_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 8, v_component_1401_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 9, v_printPrefix_1402_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 10, v_printLibDir_1403_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 11, v_useStdin_1404_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 12, v_onlyDeps_1405_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 13, v_onlySrcDeps_1406_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 14, v_depsJson_1407_);
lean_ctor_set_uint32(v_reuseFailAlloc_1435_, sizeof(void*)*14, v_trustLevel_1409_);
lean_ctor_set_uint32(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 4, v_numThreads_1410_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 15, v_jsonOutput_1418_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 16, v_printStats_1420_);
lean_ctor_set_uint8(v_reuseFailAlloc_1435_, sizeof(void*)*14 + 17, v_run_1421_);
v___x_1431_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
lean_object* v___x_1433_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 0, v___x_1431_);
v___x_1433_ = v___x_1397_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec_ref(v_opts_937_);
v_a_1438_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1394_, 1);
v___x_1442_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1443_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1442_);
lean_dec_ref(v___x_1443_);
goto v___jp_1439_;
v___jp_1439_:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; 
v___x_1440_ = lean_io_error_to_string(v_a_1438_);
v___x_1441_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1440_);
lean_dec_ref(v___x_1441_);
goto v___jp_1041_;
}
}
}
}
else
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5));
v___x_1445_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1444_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1487_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1487_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1487_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v_leanOpts_1450_; lean_object* v_forwardedArgs_1451_; uint8_t v_component_1452_; uint8_t v_printPrefix_1453_; uint8_t v_printLibDir_1454_; uint8_t v_useStdin_1455_; uint8_t v_onlyDeps_1456_; uint8_t v_onlySrcDeps_1457_; uint8_t v_depsJson_1458_; lean_object* v_opts_1459_; uint32_t v_trustLevel_1460_; uint32_t v_numThreads_1461_; lean_object* v_rootDir_x3f_1462_; lean_object* v_oleanFileName_x3f_1463_; lean_object* v_usageFileName_x3f_1464_; lean_object* v_ileanFileName_x3f_1465_; lean_object* v_cFileName_x3f_1466_; lean_object* v_bcFileName_x3f_1467_; uint8_t v_jsonOutput_1468_; lean_object* v_errorOnKinds_1469_; uint8_t v_printStats_1470_; uint8_t v_run_1471_; lean_object* v_incrSaveFileName_x3f_1472_; lean_object* v_incrLoadFileName_x3f_1473_; lean_object* v_incrHeaderSaveFileName_x3f_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1485_; 
v_leanOpts_1450_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1451_ = lean_ctor_get(v_opts_937_, 1);
v_component_1452_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1453_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1454_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1455_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1456_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1457_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1458_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1459_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1460_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1461_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1462_ = lean_ctor_get(v_opts_937_, 3);
v_oleanFileName_x3f_1463_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1464_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1465_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1466_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1467_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1468_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1469_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1470_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1471_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1472_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1473_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1474_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1485_ == 0)
{
lean_object* v_unused_1486_; 
v_unused_1486_ = lean_ctor_get(v_opts_937_, 4);
lean_dec(v_unused_1486_);
v___x_1476_ = v_opts_937_;
v_isShared_1477_ = v_isSharedCheck_1485_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1474_);
lean_inc(v_incrLoadFileName_x3f_1473_);
lean_inc(v_incrSaveFileName_x3f_1472_);
lean_inc(v_errorOnKinds_1469_);
lean_inc(v_bcFileName_x3f_1467_);
lean_inc(v_cFileName_x3f_1466_);
lean_inc(v_ileanFileName_x3f_1465_);
lean_inc(v_usageFileName_x3f_1464_);
lean_inc(v_oleanFileName_x3f_1463_);
lean_inc(v_rootDir_x3f_1462_);
lean_inc(v_opts_1459_);
lean_inc(v_forwardedArgs_1451_);
lean_inc(v_leanOpts_1450_);
lean_dec(v_opts_937_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1485_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1480_; 
v___x_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_a_1446_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 4, v___x_1478_);
v___x_1480_ = v___x_1476_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_leanOpts_1450_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v_forwardedArgs_1451_);
lean_ctor_set(v_reuseFailAlloc_1484_, 2, v_opts_1459_);
lean_ctor_set(v_reuseFailAlloc_1484_, 3, v_rootDir_x3f_1462_);
lean_ctor_set(v_reuseFailAlloc_1484_, 4, v___x_1478_);
lean_ctor_set(v_reuseFailAlloc_1484_, 5, v_oleanFileName_x3f_1463_);
lean_ctor_set(v_reuseFailAlloc_1484_, 6, v_usageFileName_x3f_1464_);
lean_ctor_set(v_reuseFailAlloc_1484_, 7, v_ileanFileName_x3f_1465_);
lean_ctor_set(v_reuseFailAlloc_1484_, 8, v_cFileName_x3f_1466_);
lean_ctor_set(v_reuseFailAlloc_1484_, 9, v_bcFileName_x3f_1467_);
lean_ctor_set(v_reuseFailAlloc_1484_, 10, v_errorOnKinds_1469_);
lean_ctor_set(v_reuseFailAlloc_1484_, 11, v_incrSaveFileName_x3f_1472_);
lean_ctor_set(v_reuseFailAlloc_1484_, 12, v_incrLoadFileName_x3f_1473_);
lean_ctor_set(v_reuseFailAlloc_1484_, 13, v_incrHeaderSaveFileName_x3f_1474_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 8, v_component_1452_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 9, v_printPrefix_1453_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 10, v_printLibDir_1454_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 11, v_useStdin_1455_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 12, v_onlyDeps_1456_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 13, v_onlySrcDeps_1457_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 14, v_depsJson_1458_);
lean_ctor_set_uint32(v_reuseFailAlloc_1484_, sizeof(void*)*14, v_trustLevel_1460_);
lean_ctor_set_uint32(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 4, v_numThreads_1461_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 15, v_jsonOutput_1468_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 16, v_printStats_1470_);
lean_ctor_set_uint8(v_reuseFailAlloc_1484_, sizeof(void*)*14 + 17, v_run_1471_);
v___x_1480_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
lean_object* v___x_1482_; 
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1480_);
v___x_1482_ = v___x_1448_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
}
else
{
lean_object* v_a_1488_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_dec_ref(v_opts_937_);
v_a_1488_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_a_1488_);
lean_dec_ref_known(v___x_1445_, 1);
v___x_1492_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1493_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1492_);
lean_dec_ref(v___x_1493_);
goto v___jp_1489_;
v___jp_1489_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = lean_io_error_to_string(v_a_1488_);
v___x_1491_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1490_);
lean_dec_ref(v___x_1491_);
goto v___jp_1093_;
}
}
}
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6));
v___x_1495_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1494_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1497_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc_n(v_a_1496_, 2);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1497_ = lean_load_dynlib(v_a_1496_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1540_; 
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1540_ == 0)
{
lean_object* v_unused_1541_; 
v_unused_1541_ = lean_ctor_get(v___x_1497_, 0);
lean_dec(v_unused_1541_);
v___x_1499_ = v___x_1497_;
v_isShared_1500_ = v_isSharedCheck_1540_;
goto v_resetjp_1498_;
}
else
{
lean_dec(v___x_1497_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1540_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v_leanOpts_1501_; lean_object* v_forwardedArgs_1502_; uint8_t v_component_1503_; uint8_t v_printPrefix_1504_; uint8_t v_printLibDir_1505_; uint8_t v_useStdin_1506_; uint8_t v_onlyDeps_1507_; uint8_t v_onlySrcDeps_1508_; uint8_t v_depsJson_1509_; lean_object* v_opts_1510_; uint32_t v_trustLevel_1511_; uint32_t v_numThreads_1512_; lean_object* v_rootDir_x3f_1513_; lean_object* v_setupFileName_x3f_1514_; lean_object* v_oleanFileName_x3f_1515_; lean_object* v_usageFileName_x3f_1516_; lean_object* v_ileanFileName_x3f_1517_; lean_object* v_cFileName_x3f_1518_; lean_object* v_bcFileName_x3f_1519_; uint8_t v_jsonOutput_1520_; lean_object* v_errorOnKinds_1521_; uint8_t v_printStats_1522_; uint8_t v_run_1523_; lean_object* v_incrSaveFileName_x3f_1524_; lean_object* v_incrLoadFileName_x3f_1525_; lean_object* v_incrHeaderSaveFileName_x3f_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1539_; 
v_leanOpts_1501_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1502_ = lean_ctor_get(v_opts_937_, 1);
v_component_1503_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1504_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1505_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1506_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1507_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1508_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1509_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1510_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1511_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1512_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1513_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1514_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1515_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1516_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1517_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1518_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1519_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1520_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1521_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1522_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1523_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1524_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1525_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1526_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1539_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1528_ = v_opts_937_;
v_isShared_1529_ = v_isSharedCheck_1539_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1526_);
lean_inc(v_incrLoadFileName_x3f_1525_);
lean_inc(v_incrSaveFileName_x3f_1524_);
lean_inc(v_errorOnKinds_1521_);
lean_inc(v_bcFileName_x3f_1519_);
lean_inc(v_cFileName_x3f_1518_);
lean_inc(v_ileanFileName_x3f_1517_);
lean_inc(v_usageFileName_x3f_1516_);
lean_inc(v_oleanFileName_x3f_1515_);
lean_inc(v_setupFileName_x3f_1514_);
lean_inc(v_rootDir_x3f_1513_);
lean_inc(v_opts_1510_);
lean_inc(v_forwardedArgs_1502_);
lean_inc(v_leanOpts_1501_);
lean_dec(v_opts_937_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1539_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1530_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7));
v___x_1531_ = lean_string_append(v___x_1530_, v_a_1496_);
lean_dec(v_a_1496_);
v___x_1532_ = lean_array_push(v_forwardedArgs_1502_, v___x_1531_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 1, v___x_1532_);
v___x_1534_ = v___x_1528_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_leanOpts_1501_);
lean_ctor_set(v_reuseFailAlloc_1538_, 1, v___x_1532_);
lean_ctor_set(v_reuseFailAlloc_1538_, 2, v_opts_1510_);
lean_ctor_set(v_reuseFailAlloc_1538_, 3, v_rootDir_x3f_1513_);
lean_ctor_set(v_reuseFailAlloc_1538_, 4, v_setupFileName_x3f_1514_);
lean_ctor_set(v_reuseFailAlloc_1538_, 5, v_oleanFileName_x3f_1515_);
lean_ctor_set(v_reuseFailAlloc_1538_, 6, v_usageFileName_x3f_1516_);
lean_ctor_set(v_reuseFailAlloc_1538_, 7, v_ileanFileName_x3f_1517_);
lean_ctor_set(v_reuseFailAlloc_1538_, 8, v_cFileName_x3f_1518_);
lean_ctor_set(v_reuseFailAlloc_1538_, 9, v_bcFileName_x3f_1519_);
lean_ctor_set(v_reuseFailAlloc_1538_, 10, v_errorOnKinds_1521_);
lean_ctor_set(v_reuseFailAlloc_1538_, 11, v_incrSaveFileName_x3f_1524_);
lean_ctor_set(v_reuseFailAlloc_1538_, 12, v_incrLoadFileName_x3f_1525_);
lean_ctor_set(v_reuseFailAlloc_1538_, 13, v_incrHeaderSaveFileName_x3f_1526_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 8, v_component_1503_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 9, v_printPrefix_1504_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 10, v_printLibDir_1505_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 11, v_useStdin_1506_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 12, v_onlyDeps_1507_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 13, v_onlySrcDeps_1508_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 14, v_depsJson_1509_);
lean_ctor_set_uint32(v_reuseFailAlloc_1538_, sizeof(void*)*14, v_trustLevel_1511_);
lean_ctor_set_uint32(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 4, v_numThreads_1512_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 15, v_jsonOutput_1520_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 16, v_printStats_1522_);
lean_ctor_set_uint8(v_reuseFailAlloc_1538_, sizeof(void*)*14 + 17, v_run_1523_);
v___x_1534_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
lean_object* v___x_1536_; 
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v___x_1534_);
v___x_1536_ = v___x_1499_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1534_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
lean_dec(v_a_1496_);
lean_dec_ref(v_opts_937_);
v_a_1542_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1546_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1547_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1546_);
lean_dec_ref(v___x_1547_);
goto v___jp_1543_;
v___jp_1543_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = lean_io_error_to_string(v_a_1542_);
v___x_1545_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1544_);
lean_dec_ref(v___x_1545_);
goto v___jp_1035_;
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
lean_dec_ref(v_opts_937_);
v_a_1548_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1552_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1553_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1552_);
lean_dec_ref(v___x_1553_);
goto v___jp_1549_;
v___jp_1549_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = lean_io_error_to_string(v_a_1548_);
v___x_1551_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1550_);
lean_dec_ref(v___x_1551_);
goto v___jp_1029_;
}
}
}
}
else
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8));
v___x_1555_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1554_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1628_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1558_ = v___x_1555_;
v_isShared_1559_ = v_isSharedCheck_1628_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1555_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1628_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v_fst_1561_; lean_object* v_snd_1562_; lean_object* v___y_1612_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1623_ = lean_unsigned_to_nat(0u);
v___x_1624_ = lean_string_utf8_byte_size(v_a_1556_);
v___x_1625_ = lean_box(0);
v___x_1626_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1624_, v_a_1556_, v___x_1623_, v___x_1625_);
if (lean_obj_tag(v___x_1626_) == 0)
{
v___y_1612_ = v___x_1624_;
goto v___jp_1611_;
}
else
{
lean_object* v_val_1627_; 
v_val_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_val_1627_);
lean_dec_ref_known(v___x_1626_, 1);
v___y_1612_ = v_val_1627_;
goto v___jp_1611_;
}
v___jp_1560_:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_load_plugin(v_fst_1561_, v_snd_1562_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1606_; 
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1606_ == 0)
{
lean_object* v_unused_1607_; 
v_unused_1607_ = lean_ctor_get(v___x_1563_, 0);
lean_dec(v_unused_1607_);
v___x_1565_ = v___x_1563_;
v_isShared_1566_ = v_isSharedCheck_1606_;
goto v_resetjp_1564_;
}
else
{
lean_dec(v___x_1563_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1606_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v_leanOpts_1567_; lean_object* v_forwardedArgs_1568_; uint8_t v_component_1569_; uint8_t v_printPrefix_1570_; uint8_t v_printLibDir_1571_; uint8_t v_useStdin_1572_; uint8_t v_onlyDeps_1573_; uint8_t v_onlySrcDeps_1574_; uint8_t v_depsJson_1575_; lean_object* v_opts_1576_; uint32_t v_trustLevel_1577_; uint32_t v_numThreads_1578_; lean_object* v_rootDir_x3f_1579_; lean_object* v_setupFileName_x3f_1580_; lean_object* v_oleanFileName_x3f_1581_; lean_object* v_usageFileName_x3f_1582_; lean_object* v_ileanFileName_x3f_1583_; lean_object* v_cFileName_x3f_1584_; lean_object* v_bcFileName_x3f_1585_; uint8_t v_jsonOutput_1586_; lean_object* v_errorOnKinds_1587_; uint8_t v_printStats_1588_; uint8_t v_run_1589_; lean_object* v_incrSaveFileName_x3f_1590_; lean_object* v_incrLoadFileName_x3f_1591_; lean_object* v_incrHeaderSaveFileName_x3f_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1605_; 
v_leanOpts_1567_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1568_ = lean_ctor_get(v_opts_937_, 1);
v_component_1569_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1570_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1571_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1572_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1573_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1574_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1575_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1576_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1577_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1578_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1579_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1580_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1581_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1582_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1583_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1584_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1585_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1586_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1587_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1588_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1589_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1590_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1591_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1592_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1605_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1594_ = v_opts_937_;
v_isShared_1595_ = v_isSharedCheck_1605_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1592_);
lean_inc(v_incrLoadFileName_x3f_1591_);
lean_inc(v_incrSaveFileName_x3f_1590_);
lean_inc(v_errorOnKinds_1587_);
lean_inc(v_bcFileName_x3f_1585_);
lean_inc(v_cFileName_x3f_1584_);
lean_inc(v_ileanFileName_x3f_1583_);
lean_inc(v_usageFileName_x3f_1582_);
lean_inc(v_oleanFileName_x3f_1581_);
lean_inc(v_setupFileName_x3f_1580_);
lean_inc(v_rootDir_x3f_1579_);
lean_inc(v_opts_1576_);
lean_inc(v_forwardedArgs_1568_);
lean_inc(v_leanOpts_1567_);
lean_dec(v_opts_937_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1605_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1600_; 
v___x_1596_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9));
v___x_1597_ = lean_string_append(v___x_1596_, v_a_1556_);
lean_dec(v_a_1556_);
v___x_1598_ = lean_array_push(v_forwardedArgs_1568_, v___x_1597_);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 1, v___x_1598_);
v___x_1600_ = v___x_1594_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_leanOpts_1567_);
lean_ctor_set(v_reuseFailAlloc_1604_, 1, v___x_1598_);
lean_ctor_set(v_reuseFailAlloc_1604_, 2, v_opts_1576_);
lean_ctor_set(v_reuseFailAlloc_1604_, 3, v_rootDir_x3f_1579_);
lean_ctor_set(v_reuseFailAlloc_1604_, 4, v_setupFileName_x3f_1580_);
lean_ctor_set(v_reuseFailAlloc_1604_, 5, v_oleanFileName_x3f_1581_);
lean_ctor_set(v_reuseFailAlloc_1604_, 6, v_usageFileName_x3f_1582_);
lean_ctor_set(v_reuseFailAlloc_1604_, 7, v_ileanFileName_x3f_1583_);
lean_ctor_set(v_reuseFailAlloc_1604_, 8, v_cFileName_x3f_1584_);
lean_ctor_set(v_reuseFailAlloc_1604_, 9, v_bcFileName_x3f_1585_);
lean_ctor_set(v_reuseFailAlloc_1604_, 10, v_errorOnKinds_1587_);
lean_ctor_set(v_reuseFailAlloc_1604_, 11, v_incrSaveFileName_x3f_1590_);
lean_ctor_set(v_reuseFailAlloc_1604_, 12, v_incrLoadFileName_x3f_1591_);
lean_ctor_set(v_reuseFailAlloc_1604_, 13, v_incrHeaderSaveFileName_x3f_1592_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 8, v_component_1569_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 9, v_printPrefix_1570_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 10, v_printLibDir_1571_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 11, v_useStdin_1572_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 12, v_onlyDeps_1573_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 13, v_onlySrcDeps_1574_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 14, v_depsJson_1575_);
lean_ctor_set_uint32(v_reuseFailAlloc_1604_, sizeof(void*)*14, v_trustLevel_1577_);
lean_ctor_set_uint32(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 4, v_numThreads_1578_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 15, v_jsonOutput_1586_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 16, v_printStats_1588_);
lean_ctor_set_uint8(v_reuseFailAlloc_1604_, sizeof(void*)*14 + 17, v_run_1589_);
v___x_1600_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
lean_object* v___x_1602_; 
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 0, v___x_1600_);
v___x_1602_ = v___x_1565_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
lean_dec(v_a_1556_);
lean_dec_ref(v_opts_937_);
v_a_1608_ = lean_ctor_get(v___x_1563_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1563_, 1);
v___x_1609_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1610_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1609_);
lean_dec_ref(v___x_1610_);
v___y_1023_ = v_a_1608_;
goto v___jp_1022_;
}
}
v___jp_1611_:
{
lean_object* v___x_1613_; uint8_t v_decide_1614_; 
v___x_1613_ = lean_string_utf8_byte_size(v_a_1556_);
v_decide_1614_ = lean_nat_dec_eq(v___y_1612_, v___x_1613_);
if (v_decide_1614_ == 0)
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1620_; 
v___x_1615_ = lean_unsigned_to_nat(0u);
v___x_1616_ = lean_string_utf8_next_fast(v_a_1556_, v___y_1612_);
v___x_1617_ = lean_string_utf8_extract_fast(v_a_1556_, v___x_1615_, v___y_1612_);
lean_dec(v___y_1612_);
v___x_1618_ = lean_string_utf8_extract_fast(v_a_1556_, v___x_1616_, v___x_1613_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set_tag(v___x_1558_, 1);
lean_ctor_set(v___x_1558_, 0, v___x_1618_);
v___x_1620_ = v___x_1558_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
v_fst_1561_ = v___x_1617_;
v_snd_1562_ = v___x_1620_;
goto v___jp_1560_;
}
}
else
{
lean_object* v___x_1622_; 
lean_dec(v___y_1612_);
lean_del_object(v___x_1558_);
v___x_1622_ = lean_box(0);
lean_inc(v_a_1556_);
v_fst_1561_ = v_a_1556_;
v_snd_1562_ = v___x_1622_;
goto v___jp_1560_;
}
}
}
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
lean_dec_ref(v_opts_937_);
v_a_1629_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1633_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1634_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1633_);
lean_dec_ref(v___x_1634_);
goto v___jp_1630_;
v___jp_1630_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = lean_io_error_to_string(v_a_1629_);
v___x_1632_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1631_);
lean_dec_ref(v___x_1632_);
goto v___jp_1013_;
}
}
}
}
else
{
uint8_t v___x_1635_; 
v___x_1635_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_1635_ == 0)
{
lean_dec(v_optArg_x3f_939_);
lean_dec_ref(v_opts_937_);
goto v___jp_1075_;
}
else
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10));
v___x_1637_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1636_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1646_; 
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1640_ = v___x_1637_;
v_isShared_1641_ = v_isSharedCheck_1646_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1637_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1646_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1642_ = lean_internal_enable_debug(v_a_1638_);
lean_dec(v_a_1638_);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 0, v_opts_937_);
v___x_1644_ = v___x_1640_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_opts_937_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
lean_dec_ref(v_opts_937_);
v_a_1647_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1637_, 1);
v___x_1651_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1652_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1651_);
lean_dec_ref(v___x_1652_);
goto v___jp_1648_;
v___jp_1648_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_io_error_to_string(v_a_1647_);
v___x_1650_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1649_);
lean_dec_ref(v___x_1650_);
goto v___jp_1007_;
}
}
}
}
}
else
{
lean_object* v_leanOpts_1653_; lean_object* v_forwardedArgs_1654_; uint8_t v_component_1655_; uint8_t v_printPrefix_1656_; uint8_t v_printLibDir_1657_; uint8_t v_useStdin_1658_; uint8_t v_onlyDeps_1659_; uint8_t v_onlySrcDeps_1660_; uint8_t v_depsJson_1661_; lean_object* v_opts_1662_; uint32_t v_trustLevel_1663_; uint32_t v_numThreads_1664_; lean_object* v_rootDir_x3f_1665_; lean_object* v_setupFileName_x3f_1666_; lean_object* v_oleanFileName_x3f_1667_; lean_object* v_usageFileName_x3f_1668_; lean_object* v_ileanFileName_x3f_1669_; lean_object* v_cFileName_x3f_1670_; lean_object* v_bcFileName_x3f_1671_; uint8_t v_jsonOutput_1672_; lean_object* v_errorOnKinds_1673_; uint8_t v_printStats_1674_; uint8_t v_run_1675_; lean_object* v_incrSaveFileName_x3f_1676_; lean_object* v_incrLoadFileName_x3f_1677_; lean_object* v_incrHeaderSaveFileName_x3f_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1688_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1653_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1654_ = lean_ctor_get(v_opts_937_, 1);
v_component_1655_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1656_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1657_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1658_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1659_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1660_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1661_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1662_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1663_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1664_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1665_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1666_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1667_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1668_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1669_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1670_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1671_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1672_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1673_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1674_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1675_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1676_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1677_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1678_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1680_ = v_opts_937_;
v_isShared_1681_ = v_isSharedCheck_1688_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1678_);
lean_inc(v_incrLoadFileName_x3f_1677_);
lean_inc(v_incrSaveFileName_x3f_1676_);
lean_inc(v_errorOnKinds_1673_);
lean_inc(v_bcFileName_x3f_1671_);
lean_inc(v_cFileName_x3f_1670_);
lean_inc(v_ileanFileName_x3f_1669_);
lean_inc(v_usageFileName_x3f_1668_);
lean_inc(v_oleanFileName_x3f_1667_);
lean_inc(v_setupFileName_x3f_1666_);
lean_inc(v_rootDir_x3f_1665_);
lean_inc(v_opts_1662_);
lean_inc(v_forwardedArgs_1654_);
lean_inc(v_leanOpts_1653_);
lean_dec(v_opts_937_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1688_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1685_; 
v___x_1682_ = l_Lean_profiler;
v___x_1683_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_1653_, v___x_1682_, v___x_1226_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1683_);
v___x_1685_ = v___x_1680_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1683_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_forwardedArgs_1654_);
lean_ctor_set(v_reuseFailAlloc_1687_, 2, v_opts_1662_);
lean_ctor_set(v_reuseFailAlloc_1687_, 3, v_rootDir_x3f_1665_);
lean_ctor_set(v_reuseFailAlloc_1687_, 4, v_setupFileName_x3f_1666_);
lean_ctor_set(v_reuseFailAlloc_1687_, 5, v_oleanFileName_x3f_1667_);
lean_ctor_set(v_reuseFailAlloc_1687_, 6, v_usageFileName_x3f_1668_);
lean_ctor_set(v_reuseFailAlloc_1687_, 7, v_ileanFileName_x3f_1669_);
lean_ctor_set(v_reuseFailAlloc_1687_, 8, v_cFileName_x3f_1670_);
lean_ctor_set(v_reuseFailAlloc_1687_, 9, v_bcFileName_x3f_1671_);
lean_ctor_set(v_reuseFailAlloc_1687_, 10, v_errorOnKinds_1673_);
lean_ctor_set(v_reuseFailAlloc_1687_, 11, v_incrSaveFileName_x3f_1676_);
lean_ctor_set(v_reuseFailAlloc_1687_, 12, v_incrLoadFileName_x3f_1677_);
lean_ctor_set(v_reuseFailAlloc_1687_, 13, v_incrHeaderSaveFileName_x3f_1678_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 8, v_component_1655_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 9, v_printPrefix_1656_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 10, v_printLibDir_1657_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 11, v_useStdin_1658_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 12, v_onlyDeps_1659_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 13, v_onlySrcDeps_1660_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 14, v_depsJson_1661_);
lean_ctor_set_uint32(v_reuseFailAlloc_1687_, sizeof(void*)*14, v_trustLevel_1663_);
lean_ctor_set_uint32(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 4, v_numThreads_1664_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 15, v_jsonOutput_1672_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 16, v_printStats_1674_);
lean_ctor_set_uint8(v_reuseFailAlloc_1687_, sizeof(void*)*14 + 17, v_run_1675_);
v___x_1685_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
return v___x_1686_;
}
}
}
}
else
{
lean_object* v_leanOpts_1689_; lean_object* v_forwardedArgs_1690_; uint8_t v_printPrefix_1691_; uint8_t v_printLibDir_1692_; uint8_t v_useStdin_1693_; uint8_t v_onlyDeps_1694_; uint8_t v_onlySrcDeps_1695_; uint8_t v_depsJson_1696_; lean_object* v_opts_1697_; uint32_t v_trustLevel_1698_; uint32_t v_numThreads_1699_; lean_object* v_rootDir_x3f_1700_; lean_object* v_setupFileName_x3f_1701_; lean_object* v_oleanFileName_x3f_1702_; lean_object* v_usageFileName_x3f_1703_; lean_object* v_ileanFileName_x3f_1704_; lean_object* v_cFileName_x3f_1705_; lean_object* v_bcFileName_x3f_1706_; uint8_t v_jsonOutput_1707_; lean_object* v_errorOnKinds_1708_; uint8_t v_printStats_1709_; uint8_t v_run_1710_; lean_object* v_incrSaveFileName_x3f_1711_; lean_object* v_incrLoadFileName_x3f_1712_; lean_object* v_incrHeaderSaveFileName_x3f_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1722_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1689_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1690_ = lean_ctor_get(v_opts_937_, 1);
v_printPrefix_1691_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1692_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1693_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1694_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1695_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1696_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1697_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1698_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1699_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1700_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1701_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1702_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1703_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1704_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1705_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1706_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1707_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1708_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1709_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1710_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1711_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1712_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1713_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1722_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1715_ = v_opts_937_;
v_isShared_1716_ = v_isSharedCheck_1722_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1713_);
lean_inc(v_incrLoadFileName_x3f_1712_);
lean_inc(v_incrSaveFileName_x3f_1711_);
lean_inc(v_errorOnKinds_1708_);
lean_inc(v_bcFileName_x3f_1706_);
lean_inc(v_cFileName_x3f_1705_);
lean_inc(v_ileanFileName_x3f_1704_);
lean_inc(v_usageFileName_x3f_1703_);
lean_inc(v_oleanFileName_x3f_1702_);
lean_inc(v_setupFileName_x3f_1701_);
lean_inc(v_rootDir_x3f_1700_);
lean_inc(v_opts_1697_);
lean_inc(v_forwardedArgs_1690_);
lean_inc(v_leanOpts_1689_);
lean_dec(v_opts_937_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1722_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
uint8_t v___x_1717_; lean_object* v___x_1719_; 
v___x_1717_ = 2;
if (v_isShared_1716_ == 0)
{
v___x_1719_ = v___x_1715_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_leanOpts_1689_);
lean_ctor_set(v_reuseFailAlloc_1721_, 1, v_forwardedArgs_1690_);
lean_ctor_set(v_reuseFailAlloc_1721_, 2, v_opts_1697_);
lean_ctor_set(v_reuseFailAlloc_1721_, 3, v_rootDir_x3f_1700_);
lean_ctor_set(v_reuseFailAlloc_1721_, 4, v_setupFileName_x3f_1701_);
lean_ctor_set(v_reuseFailAlloc_1721_, 5, v_oleanFileName_x3f_1702_);
lean_ctor_set(v_reuseFailAlloc_1721_, 6, v_usageFileName_x3f_1703_);
lean_ctor_set(v_reuseFailAlloc_1721_, 7, v_ileanFileName_x3f_1704_);
lean_ctor_set(v_reuseFailAlloc_1721_, 8, v_cFileName_x3f_1705_);
lean_ctor_set(v_reuseFailAlloc_1721_, 9, v_bcFileName_x3f_1706_);
lean_ctor_set(v_reuseFailAlloc_1721_, 10, v_errorOnKinds_1708_);
lean_ctor_set(v_reuseFailAlloc_1721_, 11, v_incrSaveFileName_x3f_1711_);
lean_ctor_set(v_reuseFailAlloc_1721_, 12, v_incrLoadFileName_x3f_1712_);
lean_ctor_set(v_reuseFailAlloc_1721_, 13, v_incrHeaderSaveFileName_x3f_1713_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 9, v_printPrefix_1691_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 10, v_printLibDir_1692_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 11, v_useStdin_1693_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 12, v_onlyDeps_1694_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 13, v_onlySrcDeps_1695_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 14, v_depsJson_1696_);
lean_ctor_set_uint32(v_reuseFailAlloc_1721_, sizeof(void*)*14, v_trustLevel_1698_);
lean_ctor_set_uint32(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 4, v_numThreads_1699_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 15, v_jsonOutput_1707_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 16, v_printStats_1709_);
lean_ctor_set_uint8(v_reuseFailAlloc_1721_, sizeof(void*)*14 + 17, v_run_1710_);
v___x_1719_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
lean_object* v___x_1720_; 
lean_ctor_set_uint8(v___x_1719_, sizeof(void*)*14 + 8, v___x_1717_);
v___x_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
return v___x_1720_;
}
}
}
}
else
{
lean_object* v_leanOpts_1723_; lean_object* v_forwardedArgs_1724_; uint8_t v_printPrefix_1725_; uint8_t v_printLibDir_1726_; uint8_t v_useStdin_1727_; uint8_t v_onlyDeps_1728_; uint8_t v_onlySrcDeps_1729_; uint8_t v_depsJson_1730_; lean_object* v_opts_1731_; uint32_t v_trustLevel_1732_; uint32_t v_numThreads_1733_; lean_object* v_rootDir_x3f_1734_; lean_object* v_setupFileName_x3f_1735_; lean_object* v_oleanFileName_x3f_1736_; lean_object* v_usageFileName_x3f_1737_; lean_object* v_ileanFileName_x3f_1738_; lean_object* v_cFileName_x3f_1739_; lean_object* v_bcFileName_x3f_1740_; uint8_t v_jsonOutput_1741_; lean_object* v_errorOnKinds_1742_; uint8_t v_printStats_1743_; uint8_t v_run_1744_; lean_object* v_incrSaveFileName_x3f_1745_; lean_object* v_incrLoadFileName_x3f_1746_; lean_object* v_incrHeaderSaveFileName_x3f_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1756_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1723_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1724_ = lean_ctor_get(v_opts_937_, 1);
v_printPrefix_1725_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1726_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1727_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1728_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1729_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1730_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1731_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1732_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1733_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1734_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1735_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1736_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1737_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1738_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1739_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1740_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1741_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1742_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1743_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1744_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1745_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1746_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1747_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1749_ = v_opts_937_;
v_isShared_1750_ = v_isSharedCheck_1756_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1747_);
lean_inc(v_incrLoadFileName_x3f_1746_);
lean_inc(v_incrSaveFileName_x3f_1745_);
lean_inc(v_errorOnKinds_1742_);
lean_inc(v_bcFileName_x3f_1740_);
lean_inc(v_cFileName_x3f_1739_);
lean_inc(v_ileanFileName_x3f_1738_);
lean_inc(v_usageFileName_x3f_1737_);
lean_inc(v_oleanFileName_x3f_1736_);
lean_inc(v_setupFileName_x3f_1735_);
lean_inc(v_rootDir_x3f_1734_);
lean_inc(v_opts_1731_);
lean_inc(v_forwardedArgs_1724_);
lean_inc(v_leanOpts_1723_);
lean_dec(v_opts_937_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1756_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
uint8_t v___x_1751_; lean_object* v___x_1753_; 
v___x_1751_ = 1;
if (v_isShared_1750_ == 0)
{
v___x_1753_ = v___x_1749_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_leanOpts_1723_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v_forwardedArgs_1724_);
lean_ctor_set(v_reuseFailAlloc_1755_, 2, v_opts_1731_);
lean_ctor_set(v_reuseFailAlloc_1755_, 3, v_rootDir_x3f_1734_);
lean_ctor_set(v_reuseFailAlloc_1755_, 4, v_setupFileName_x3f_1735_);
lean_ctor_set(v_reuseFailAlloc_1755_, 5, v_oleanFileName_x3f_1736_);
lean_ctor_set(v_reuseFailAlloc_1755_, 6, v_usageFileName_x3f_1737_);
lean_ctor_set(v_reuseFailAlloc_1755_, 7, v_ileanFileName_x3f_1738_);
lean_ctor_set(v_reuseFailAlloc_1755_, 8, v_cFileName_x3f_1739_);
lean_ctor_set(v_reuseFailAlloc_1755_, 9, v_bcFileName_x3f_1740_);
lean_ctor_set(v_reuseFailAlloc_1755_, 10, v_errorOnKinds_1742_);
lean_ctor_set(v_reuseFailAlloc_1755_, 11, v_incrSaveFileName_x3f_1745_);
lean_ctor_set(v_reuseFailAlloc_1755_, 12, v_incrLoadFileName_x3f_1746_);
lean_ctor_set(v_reuseFailAlloc_1755_, 13, v_incrHeaderSaveFileName_x3f_1747_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 9, v_printPrefix_1725_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 10, v_printLibDir_1726_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 11, v_useStdin_1727_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 12, v_onlyDeps_1728_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 13, v_onlySrcDeps_1729_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 14, v_depsJson_1730_);
lean_ctor_set_uint32(v_reuseFailAlloc_1755_, sizeof(void*)*14, v_trustLevel_1732_);
lean_ctor_set_uint32(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 4, v_numThreads_1733_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 15, v_jsonOutput_1741_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 16, v_printStats_1743_);
lean_ctor_set_uint8(v_reuseFailAlloc_1755_, sizeof(void*)*14 + 17, v_run_1744_);
v___x_1753_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1754_; 
lean_ctor_set_uint8(v___x_1753_, sizeof(void*)*14 + 8, v___x_1751_);
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
}
}
else
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1757_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11));
v___x_1758_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1757_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v_leanOpts_1760_; lean_object* v_forwardedArgs_1761_; uint8_t v_component_1762_; uint8_t v_printPrefix_1763_; uint8_t v_printLibDir_1764_; uint8_t v_useStdin_1765_; uint8_t v_onlyDeps_1766_; uint8_t v_onlySrcDeps_1767_; uint8_t v_depsJson_1768_; lean_object* v_opts_1769_; uint32_t v_trustLevel_1770_; uint32_t v_numThreads_1771_; lean_object* v_rootDir_x3f_1772_; lean_object* v_setupFileName_x3f_1773_; lean_object* v_oleanFileName_x3f_1774_; lean_object* v_usageFileName_x3f_1775_; lean_object* v_ileanFileName_x3f_1776_; lean_object* v_cFileName_x3f_1777_; lean_object* v_bcFileName_x3f_1778_; uint8_t v_jsonOutput_1779_; lean_object* v_errorOnKinds_1780_; uint8_t v_printStats_1781_; uint8_t v_run_1782_; lean_object* v_incrSaveFileName_x3f_1783_; lean_object* v_incrLoadFileName_x3f_1784_; lean_object* v_incrHeaderSaveFileName_x3f_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1810_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1759_);
lean_dec_ref_known(v___x_1758_, 1);
v_leanOpts_1760_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1761_ = lean_ctor_get(v_opts_937_, 1);
v_component_1762_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1763_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1764_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1765_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1766_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1767_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1768_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1769_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1770_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1771_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1772_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1773_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1774_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1775_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1776_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1777_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1778_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1779_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1780_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1781_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1782_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1783_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1784_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1785_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1787_ = v_opts_937_;
v_isShared_1788_ = v_isSharedCheck_1810_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1785_);
lean_inc(v_incrLoadFileName_x3f_1784_);
lean_inc(v_incrSaveFileName_x3f_1783_);
lean_inc(v_errorOnKinds_1780_);
lean_inc(v_bcFileName_x3f_1778_);
lean_inc(v_cFileName_x3f_1777_);
lean_inc(v_ileanFileName_x3f_1776_);
lean_inc(v_usageFileName_x3f_1775_);
lean_inc(v_oleanFileName_x3f_1774_);
lean_inc(v_setupFileName_x3f_1773_);
lean_inc(v_rootDir_x3f_1772_);
lean_inc(v_opts_1769_);
lean_inc(v_forwardedArgs_1761_);
lean_inc(v_leanOpts_1760_);
lean_dec(v_opts_937_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1810_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; 
lean_inc(v_a_1759_);
v___x_1789_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_leanOpts_1760_, v_a_1759_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1803_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1792_ = v___x_1789_;
v_isShared_1793_ = v_isSharedCheck_1803_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1789_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1803_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1798_; 
v___x_1794_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12));
v___x_1795_ = lean_string_append(v___x_1794_, v_a_1759_);
lean_dec(v_a_1759_);
v___x_1796_ = lean_array_push(v_forwardedArgs_1761_, v___x_1795_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 1, v___x_1796_);
lean_ctor_set(v___x_1787_, 0, v_a_1790_);
v___x_1798_ = v___x_1787_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1790_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v___x_1796_);
lean_ctor_set(v_reuseFailAlloc_1802_, 2, v_opts_1769_);
lean_ctor_set(v_reuseFailAlloc_1802_, 3, v_rootDir_x3f_1772_);
lean_ctor_set(v_reuseFailAlloc_1802_, 4, v_setupFileName_x3f_1773_);
lean_ctor_set(v_reuseFailAlloc_1802_, 5, v_oleanFileName_x3f_1774_);
lean_ctor_set(v_reuseFailAlloc_1802_, 6, v_usageFileName_x3f_1775_);
lean_ctor_set(v_reuseFailAlloc_1802_, 7, v_ileanFileName_x3f_1776_);
lean_ctor_set(v_reuseFailAlloc_1802_, 8, v_cFileName_x3f_1777_);
lean_ctor_set(v_reuseFailAlloc_1802_, 9, v_bcFileName_x3f_1778_);
lean_ctor_set(v_reuseFailAlloc_1802_, 10, v_errorOnKinds_1780_);
lean_ctor_set(v_reuseFailAlloc_1802_, 11, v_incrSaveFileName_x3f_1783_);
lean_ctor_set(v_reuseFailAlloc_1802_, 12, v_incrLoadFileName_x3f_1784_);
lean_ctor_set(v_reuseFailAlloc_1802_, 13, v_incrHeaderSaveFileName_x3f_1785_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 8, v_component_1762_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 9, v_printPrefix_1763_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 10, v_printLibDir_1764_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 11, v_useStdin_1765_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 12, v_onlyDeps_1766_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 13, v_onlySrcDeps_1767_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 14, v_depsJson_1768_);
lean_ctor_set_uint32(v_reuseFailAlloc_1802_, sizeof(void*)*14, v_trustLevel_1770_);
lean_ctor_set_uint32(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 4, v_numThreads_1771_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 15, v_jsonOutput_1779_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 16, v_printStats_1781_);
lean_ctor_set_uint8(v_reuseFailAlloc_1802_, sizeof(void*)*14 + 17, v_run_1782_);
v___x_1798_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
lean_object* v___x_1800_; 
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 0, v___x_1798_);
v___x_1800_ = v___x_1792_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
lean_del_object(v___x_1787_);
lean_dec(v_incrHeaderSaveFileName_x3f_1785_);
lean_dec(v_incrLoadFileName_x3f_1784_);
lean_dec(v_incrSaveFileName_x3f_1783_);
lean_dec_ref(v_errorOnKinds_1780_);
lean_dec(v_bcFileName_x3f_1778_);
lean_dec(v_cFileName_x3f_1777_);
lean_dec(v_ileanFileName_x3f_1776_);
lean_dec(v_usageFileName_x3f_1775_);
lean_dec(v_oleanFileName_x3f_1774_);
lean_dec(v_setupFileName_x3f_1773_);
lean_dec(v_rootDir_x3f_1772_);
lean_dec_ref(v_opts_1769_);
lean_dec_ref(v_forwardedArgs_1761_);
lean_dec(v_a_1759_);
v_a_1804_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___x_1789_, 1);
v___x_1808_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1809_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1808_);
lean_dec_ref(v___x_1809_);
goto v___jp_1805_;
v___jp_1805_:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = lean_io_error_to_string(v_a_1804_);
v___x_1807_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1806_);
lean_dec_ref(v___x_1807_);
goto v___jp_1105_;
}
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
lean_dec_ref(v_opts_937_);
v_a_1811_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1811_);
lean_dec_ref_known(v___x_1758_, 1);
v___x_1815_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1816_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1815_);
lean_dec_ref(v___x_1816_);
goto v___jp_1812_;
v___jp_1812_:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = lean_io_error_to_string(v_a_1811_);
v___x_1814_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1813_);
lean_dec_ref(v___x_1814_);
goto v___jp_1099_;
}
}
}
}
else
{
lean_object* v_leanOpts_1817_; lean_object* v_forwardedArgs_1818_; uint8_t v_component_1819_; uint8_t v_printPrefix_1820_; uint8_t v_useStdin_1821_; uint8_t v_onlyDeps_1822_; uint8_t v_onlySrcDeps_1823_; uint8_t v_depsJson_1824_; lean_object* v_opts_1825_; uint32_t v_trustLevel_1826_; uint32_t v_numThreads_1827_; lean_object* v_rootDir_x3f_1828_; lean_object* v_setupFileName_x3f_1829_; lean_object* v_oleanFileName_x3f_1830_; lean_object* v_usageFileName_x3f_1831_; lean_object* v_ileanFileName_x3f_1832_; lean_object* v_cFileName_x3f_1833_; lean_object* v_bcFileName_x3f_1834_; uint8_t v_jsonOutput_1835_; lean_object* v_errorOnKinds_1836_; uint8_t v_printStats_1837_; uint8_t v_run_1838_; lean_object* v_incrSaveFileName_x3f_1839_; lean_object* v_incrLoadFileName_x3f_1840_; lean_object* v_incrHeaderSaveFileName_x3f_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1849_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1817_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1818_ = lean_ctor_get(v_opts_937_, 1);
v_component_1819_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1820_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_useStdin_1821_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1822_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1823_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1824_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1825_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1826_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1827_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1828_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1829_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1830_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1831_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1832_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1833_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1834_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1835_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1836_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1837_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1838_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1839_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1840_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1841_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1843_ = v_opts_937_;
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1841_);
lean_inc(v_incrLoadFileName_x3f_1840_);
lean_inc(v_incrSaveFileName_x3f_1839_);
lean_inc(v_errorOnKinds_1836_);
lean_inc(v_bcFileName_x3f_1834_);
lean_inc(v_cFileName_x3f_1833_);
lean_inc(v_ileanFileName_x3f_1832_);
lean_inc(v_usageFileName_x3f_1831_);
lean_inc(v_oleanFileName_x3f_1830_);
lean_inc(v_setupFileName_x3f_1829_);
lean_inc(v_rootDir_x3f_1828_);
lean_inc(v_opts_1825_);
lean_inc(v_forwardedArgs_1818_);
lean_inc(v_leanOpts_1817_);
lean_dec(v_opts_937_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_leanOpts_1817_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v_forwardedArgs_1818_);
lean_ctor_set(v_reuseFailAlloc_1848_, 2, v_opts_1825_);
lean_ctor_set(v_reuseFailAlloc_1848_, 3, v_rootDir_x3f_1828_);
lean_ctor_set(v_reuseFailAlloc_1848_, 4, v_setupFileName_x3f_1829_);
lean_ctor_set(v_reuseFailAlloc_1848_, 5, v_oleanFileName_x3f_1830_);
lean_ctor_set(v_reuseFailAlloc_1848_, 6, v_usageFileName_x3f_1831_);
lean_ctor_set(v_reuseFailAlloc_1848_, 7, v_ileanFileName_x3f_1832_);
lean_ctor_set(v_reuseFailAlloc_1848_, 8, v_cFileName_x3f_1833_);
lean_ctor_set(v_reuseFailAlloc_1848_, 9, v_bcFileName_x3f_1834_);
lean_ctor_set(v_reuseFailAlloc_1848_, 10, v_errorOnKinds_1836_);
lean_ctor_set(v_reuseFailAlloc_1848_, 11, v_incrSaveFileName_x3f_1839_);
lean_ctor_set(v_reuseFailAlloc_1848_, 12, v_incrLoadFileName_x3f_1840_);
lean_ctor_set(v_reuseFailAlloc_1848_, 13, v_incrHeaderSaveFileName_x3f_1841_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 8, v_component_1819_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 9, v_printPrefix_1820_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 11, v_useStdin_1821_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 12, v_onlyDeps_1822_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 13, v_onlySrcDeps_1823_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 14, v_depsJson_1824_);
lean_ctor_set_uint32(v_reuseFailAlloc_1848_, sizeof(void*)*14, v_trustLevel_1826_);
lean_ctor_set_uint32(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 4, v_numThreads_1827_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 15, v_jsonOutput_1835_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 16, v_printStats_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1848_, sizeof(void*)*14 + 17, v_run_1838_);
v___x_1846_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1847_; 
lean_ctor_set_uint8(v___x_1846_, sizeof(void*)*14 + 10, v___x_1218_);
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
}
}
}
else
{
lean_object* v_leanOpts_1850_; lean_object* v_forwardedArgs_1851_; uint8_t v_component_1852_; uint8_t v_printLibDir_1853_; uint8_t v_useStdin_1854_; uint8_t v_onlyDeps_1855_; uint8_t v_onlySrcDeps_1856_; uint8_t v_depsJson_1857_; lean_object* v_opts_1858_; uint32_t v_trustLevel_1859_; uint32_t v_numThreads_1860_; lean_object* v_rootDir_x3f_1861_; lean_object* v_setupFileName_x3f_1862_; lean_object* v_oleanFileName_x3f_1863_; lean_object* v_usageFileName_x3f_1864_; lean_object* v_ileanFileName_x3f_1865_; lean_object* v_cFileName_x3f_1866_; lean_object* v_bcFileName_x3f_1867_; uint8_t v_jsonOutput_1868_; lean_object* v_errorOnKinds_1869_; uint8_t v_printStats_1870_; uint8_t v_run_1871_; lean_object* v_incrSaveFileName_x3f_1872_; lean_object* v_incrLoadFileName_x3f_1873_; lean_object* v_incrHeaderSaveFileName_x3f_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1882_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1850_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1851_ = lean_ctor_get(v_opts_937_, 1);
v_component_1852_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printLibDir_1853_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1854_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1855_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1856_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1857_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1858_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1859_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1860_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1861_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1862_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1863_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1864_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1865_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1866_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1867_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1868_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1869_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1870_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1871_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1872_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1873_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1874_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1882_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1876_ = v_opts_937_;
v_isShared_1877_ = v_isSharedCheck_1882_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1874_);
lean_inc(v_incrLoadFileName_x3f_1873_);
lean_inc(v_incrSaveFileName_x3f_1872_);
lean_inc(v_errorOnKinds_1869_);
lean_inc(v_bcFileName_x3f_1867_);
lean_inc(v_cFileName_x3f_1866_);
lean_inc(v_ileanFileName_x3f_1865_);
lean_inc(v_usageFileName_x3f_1864_);
lean_inc(v_oleanFileName_x3f_1863_);
lean_inc(v_setupFileName_x3f_1862_);
lean_inc(v_rootDir_x3f_1861_);
lean_inc(v_opts_1858_);
lean_inc(v_forwardedArgs_1851_);
lean_inc(v_leanOpts_1850_);
lean_dec(v_opts_937_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1882_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_leanOpts_1850_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v_forwardedArgs_1851_);
lean_ctor_set(v_reuseFailAlloc_1881_, 2, v_opts_1858_);
lean_ctor_set(v_reuseFailAlloc_1881_, 3, v_rootDir_x3f_1861_);
lean_ctor_set(v_reuseFailAlloc_1881_, 4, v_setupFileName_x3f_1862_);
lean_ctor_set(v_reuseFailAlloc_1881_, 5, v_oleanFileName_x3f_1863_);
lean_ctor_set(v_reuseFailAlloc_1881_, 6, v_usageFileName_x3f_1864_);
lean_ctor_set(v_reuseFailAlloc_1881_, 7, v_ileanFileName_x3f_1865_);
lean_ctor_set(v_reuseFailAlloc_1881_, 8, v_cFileName_x3f_1866_);
lean_ctor_set(v_reuseFailAlloc_1881_, 9, v_bcFileName_x3f_1867_);
lean_ctor_set(v_reuseFailAlloc_1881_, 10, v_errorOnKinds_1869_);
lean_ctor_set(v_reuseFailAlloc_1881_, 11, v_incrSaveFileName_x3f_1872_);
lean_ctor_set(v_reuseFailAlloc_1881_, 12, v_incrLoadFileName_x3f_1873_);
lean_ctor_set(v_reuseFailAlloc_1881_, 13, v_incrHeaderSaveFileName_x3f_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 8, v_component_1852_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 10, v_printLibDir_1853_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 11, v_useStdin_1854_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 12, v_onlyDeps_1855_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 13, v_onlySrcDeps_1856_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 14, v_depsJson_1857_);
lean_ctor_set_uint32(v_reuseFailAlloc_1881_, sizeof(void*)*14, v_trustLevel_1859_);
lean_ctor_set_uint32(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 4, v_numThreads_1860_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 15, v_jsonOutput_1868_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 16, v_printStats_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*14 + 17, v_run_1871_);
v___x_1879_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; 
lean_ctor_set_uint8(v___x_1879_, sizeof(void*)*14 + 9, v___x_1216_);
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
return v___x_1880_;
}
}
}
}
else
{
lean_object* v_leanOpts_1883_; lean_object* v_forwardedArgs_1884_; uint8_t v_component_1885_; uint8_t v_printPrefix_1886_; uint8_t v_printLibDir_1887_; uint8_t v_useStdin_1888_; uint8_t v_onlyDeps_1889_; uint8_t v_onlySrcDeps_1890_; uint8_t v_depsJson_1891_; lean_object* v_opts_1892_; uint32_t v_trustLevel_1893_; uint32_t v_numThreads_1894_; lean_object* v_rootDir_x3f_1895_; lean_object* v_setupFileName_x3f_1896_; lean_object* v_oleanFileName_x3f_1897_; lean_object* v_usageFileName_x3f_1898_; lean_object* v_ileanFileName_x3f_1899_; lean_object* v_cFileName_x3f_1900_; lean_object* v_bcFileName_x3f_1901_; uint8_t v_jsonOutput_1902_; lean_object* v_errorOnKinds_1903_; uint8_t v_run_1904_; lean_object* v_incrSaveFileName_x3f_1905_; lean_object* v_incrLoadFileName_x3f_1906_; lean_object* v_incrHeaderSaveFileName_x3f_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1915_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1883_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1884_ = lean_ctor_get(v_opts_937_, 1);
v_component_1885_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1886_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1887_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1888_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1889_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1890_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1891_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1892_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1893_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1894_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1895_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1896_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1897_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1898_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1899_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1900_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1901_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1902_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1903_ = lean_ctor_get(v_opts_937_, 10);
v_run_1904_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1905_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1906_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1907_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1909_ = v_opts_937_;
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1907_);
lean_inc(v_incrLoadFileName_x3f_1906_);
lean_inc(v_incrSaveFileName_x3f_1905_);
lean_inc(v_errorOnKinds_1903_);
lean_inc(v_bcFileName_x3f_1901_);
lean_inc(v_cFileName_x3f_1900_);
lean_inc(v_ileanFileName_x3f_1899_);
lean_inc(v_usageFileName_x3f_1898_);
lean_inc(v_oleanFileName_x3f_1897_);
lean_inc(v_setupFileName_x3f_1896_);
lean_inc(v_rootDir_x3f_1895_);
lean_inc(v_opts_1892_);
lean_inc(v_forwardedArgs_1884_);
lean_inc(v_leanOpts_1883_);
lean_dec(v_opts_937_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1915_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_leanOpts_1883_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v_forwardedArgs_1884_);
lean_ctor_set(v_reuseFailAlloc_1914_, 2, v_opts_1892_);
lean_ctor_set(v_reuseFailAlloc_1914_, 3, v_rootDir_x3f_1895_);
lean_ctor_set(v_reuseFailAlloc_1914_, 4, v_setupFileName_x3f_1896_);
lean_ctor_set(v_reuseFailAlloc_1914_, 5, v_oleanFileName_x3f_1897_);
lean_ctor_set(v_reuseFailAlloc_1914_, 6, v_usageFileName_x3f_1898_);
lean_ctor_set(v_reuseFailAlloc_1914_, 7, v_ileanFileName_x3f_1899_);
lean_ctor_set(v_reuseFailAlloc_1914_, 8, v_cFileName_x3f_1900_);
lean_ctor_set(v_reuseFailAlloc_1914_, 9, v_bcFileName_x3f_1901_);
lean_ctor_set(v_reuseFailAlloc_1914_, 10, v_errorOnKinds_1903_);
lean_ctor_set(v_reuseFailAlloc_1914_, 11, v_incrSaveFileName_x3f_1905_);
lean_ctor_set(v_reuseFailAlloc_1914_, 12, v_incrLoadFileName_x3f_1906_);
lean_ctor_set(v_reuseFailAlloc_1914_, 13, v_incrHeaderSaveFileName_x3f_1907_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 8, v_component_1885_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 9, v_printPrefix_1886_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 10, v_printLibDir_1887_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 11, v_useStdin_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 12, v_onlyDeps_1889_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 13, v_onlySrcDeps_1890_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 14, v_depsJson_1891_);
lean_ctor_set_uint32(v_reuseFailAlloc_1914_, sizeof(void*)*14, v_trustLevel_1893_);
lean_ctor_set_uint32(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 4, v_numThreads_1894_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 15, v_jsonOutput_1902_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*14 + 17, v_run_1904_);
v___x_1912_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
lean_object* v___x_1913_; 
lean_ctor_set_uint8(v___x_1912_, sizeof(void*)*14 + 16, v___x_1214_);
v___x_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
return v___x_1913_;
}
}
}
}
else
{
lean_object* v_leanOpts_1916_; lean_object* v_forwardedArgs_1917_; uint8_t v_component_1918_; uint8_t v_printPrefix_1919_; uint8_t v_printLibDir_1920_; uint8_t v_useStdin_1921_; uint8_t v_onlyDeps_1922_; uint8_t v_onlySrcDeps_1923_; uint8_t v_depsJson_1924_; lean_object* v_opts_1925_; uint32_t v_trustLevel_1926_; uint32_t v_numThreads_1927_; lean_object* v_rootDir_x3f_1928_; lean_object* v_setupFileName_x3f_1929_; lean_object* v_oleanFileName_x3f_1930_; lean_object* v_usageFileName_x3f_1931_; lean_object* v_ileanFileName_x3f_1932_; lean_object* v_cFileName_x3f_1933_; lean_object* v_bcFileName_x3f_1934_; lean_object* v_errorOnKinds_1935_; uint8_t v_printStats_1936_; uint8_t v_run_1937_; lean_object* v_incrSaveFileName_x3f_1938_; lean_object* v_incrLoadFileName_x3f_1939_; lean_object* v_incrHeaderSaveFileName_x3f_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1948_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1916_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1917_ = lean_ctor_get(v_opts_937_, 1);
v_component_1918_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1919_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1920_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1921_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1922_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1923_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_1924_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1925_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1926_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1927_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1928_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1929_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1930_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1931_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1932_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1933_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1934_ = lean_ctor_get(v_opts_937_, 9);
v_errorOnKinds_1935_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1936_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1937_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1938_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1939_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1940_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1942_ = v_opts_937_;
v_isShared_1943_ = v_isSharedCheck_1948_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1940_);
lean_inc(v_incrLoadFileName_x3f_1939_);
lean_inc(v_incrSaveFileName_x3f_1938_);
lean_inc(v_errorOnKinds_1935_);
lean_inc(v_bcFileName_x3f_1934_);
lean_inc(v_cFileName_x3f_1933_);
lean_inc(v_ileanFileName_x3f_1932_);
lean_inc(v_usageFileName_x3f_1931_);
lean_inc(v_oleanFileName_x3f_1930_);
lean_inc(v_setupFileName_x3f_1929_);
lean_inc(v_rootDir_x3f_1928_);
lean_inc(v_opts_1925_);
lean_inc(v_forwardedArgs_1917_);
lean_inc(v_leanOpts_1916_);
lean_dec(v_opts_937_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1948_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_leanOpts_1916_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v_forwardedArgs_1917_);
lean_ctor_set(v_reuseFailAlloc_1947_, 2, v_opts_1925_);
lean_ctor_set(v_reuseFailAlloc_1947_, 3, v_rootDir_x3f_1928_);
lean_ctor_set(v_reuseFailAlloc_1947_, 4, v_setupFileName_x3f_1929_);
lean_ctor_set(v_reuseFailAlloc_1947_, 5, v_oleanFileName_x3f_1930_);
lean_ctor_set(v_reuseFailAlloc_1947_, 6, v_usageFileName_x3f_1931_);
lean_ctor_set(v_reuseFailAlloc_1947_, 7, v_ileanFileName_x3f_1932_);
lean_ctor_set(v_reuseFailAlloc_1947_, 8, v_cFileName_x3f_1933_);
lean_ctor_set(v_reuseFailAlloc_1947_, 9, v_bcFileName_x3f_1934_);
lean_ctor_set(v_reuseFailAlloc_1947_, 10, v_errorOnKinds_1935_);
lean_ctor_set(v_reuseFailAlloc_1947_, 11, v_incrSaveFileName_x3f_1938_);
lean_ctor_set(v_reuseFailAlloc_1947_, 12, v_incrLoadFileName_x3f_1939_);
lean_ctor_set(v_reuseFailAlloc_1947_, 13, v_incrHeaderSaveFileName_x3f_1940_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 8, v_component_1918_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 9, v_printPrefix_1919_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 10, v_printLibDir_1920_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 11, v_useStdin_1921_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 12, v_onlyDeps_1922_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 13, v_onlySrcDeps_1923_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 14, v_depsJson_1924_);
lean_ctor_set_uint32(v_reuseFailAlloc_1947_, sizeof(void*)*14, v_trustLevel_1926_);
lean_ctor_set_uint32(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 4, v_numThreads_1927_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 16, v_printStats_1936_);
lean_ctor_set_uint8(v_reuseFailAlloc_1947_, sizeof(void*)*14 + 17, v_run_1937_);
v___x_1945_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
lean_object* v___x_1946_; 
lean_ctor_set_uint8(v___x_1945_, sizeof(void*)*14 + 15, v___x_1212_);
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
return v___x_1946_;
}
}
}
}
else
{
lean_object* v_leanOpts_1949_; lean_object* v_forwardedArgs_1950_; uint8_t v_component_1951_; uint8_t v_printPrefix_1952_; uint8_t v_printLibDir_1953_; uint8_t v_useStdin_1954_; uint8_t v_onlySrcDeps_1955_; lean_object* v_opts_1956_; uint32_t v_trustLevel_1957_; uint32_t v_numThreads_1958_; lean_object* v_rootDir_x3f_1959_; lean_object* v_setupFileName_x3f_1960_; lean_object* v_oleanFileName_x3f_1961_; lean_object* v_usageFileName_x3f_1962_; lean_object* v_ileanFileName_x3f_1963_; lean_object* v_cFileName_x3f_1964_; lean_object* v_bcFileName_x3f_1965_; uint8_t v_jsonOutput_1966_; lean_object* v_errorOnKinds_1967_; uint8_t v_printStats_1968_; uint8_t v_run_1969_; lean_object* v_incrSaveFileName_x3f_1970_; lean_object* v_incrLoadFileName_x3f_1971_; lean_object* v_incrHeaderSaveFileName_x3f_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1980_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1949_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1950_ = lean_ctor_get(v_opts_937_, 1);
v_component_1951_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1952_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1953_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1954_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlySrcDeps_1955_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_opts_1956_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1957_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1958_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1959_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1960_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1961_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1962_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1963_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1964_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1965_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1966_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_1967_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_1968_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_1969_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1970_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_1971_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_1972_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_1980_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1974_ = v_opts_937_;
v_isShared_1975_ = v_isSharedCheck_1980_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1972_);
lean_inc(v_incrLoadFileName_x3f_1971_);
lean_inc(v_incrSaveFileName_x3f_1970_);
lean_inc(v_errorOnKinds_1967_);
lean_inc(v_bcFileName_x3f_1965_);
lean_inc(v_cFileName_x3f_1964_);
lean_inc(v_ileanFileName_x3f_1963_);
lean_inc(v_usageFileName_x3f_1962_);
lean_inc(v_oleanFileName_x3f_1961_);
lean_inc(v_setupFileName_x3f_1960_);
lean_inc(v_rootDir_x3f_1959_);
lean_inc(v_opts_1956_);
lean_inc(v_forwardedArgs_1950_);
lean_inc(v_leanOpts_1949_);
lean_dec(v_opts_937_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1980_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_leanOpts_1949_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_forwardedArgs_1950_);
lean_ctor_set(v_reuseFailAlloc_1979_, 2, v_opts_1956_);
lean_ctor_set(v_reuseFailAlloc_1979_, 3, v_rootDir_x3f_1959_);
lean_ctor_set(v_reuseFailAlloc_1979_, 4, v_setupFileName_x3f_1960_);
lean_ctor_set(v_reuseFailAlloc_1979_, 5, v_oleanFileName_x3f_1961_);
lean_ctor_set(v_reuseFailAlloc_1979_, 6, v_usageFileName_x3f_1962_);
lean_ctor_set(v_reuseFailAlloc_1979_, 7, v_ileanFileName_x3f_1963_);
lean_ctor_set(v_reuseFailAlloc_1979_, 8, v_cFileName_x3f_1964_);
lean_ctor_set(v_reuseFailAlloc_1979_, 9, v_bcFileName_x3f_1965_);
lean_ctor_set(v_reuseFailAlloc_1979_, 10, v_errorOnKinds_1967_);
lean_ctor_set(v_reuseFailAlloc_1979_, 11, v_incrSaveFileName_x3f_1970_);
lean_ctor_set(v_reuseFailAlloc_1979_, 12, v_incrLoadFileName_x3f_1971_);
lean_ctor_set(v_reuseFailAlloc_1979_, 13, v_incrHeaderSaveFileName_x3f_1972_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 8, v_component_1951_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 9, v_printPrefix_1952_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 10, v_printLibDir_1953_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 11, v_useStdin_1954_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 13, v_onlySrcDeps_1955_);
lean_ctor_set_uint32(v_reuseFailAlloc_1979_, sizeof(void*)*14, v_trustLevel_1957_);
lean_ctor_set_uint32(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 4, v_numThreads_1958_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 15, v_jsonOutput_1966_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 16, v_printStats_1968_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*14 + 17, v_run_1969_);
v___x_1977_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
lean_object* v___x_1978_; 
lean_ctor_set_uint8(v___x_1977_, sizeof(void*)*14 + 12, v___x_1210_);
lean_ctor_set_uint8(v___x_1977_, sizeof(void*)*14 + 14, v___x_1210_);
v___x_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
return v___x_1978_;
}
}
}
}
else
{
lean_object* v_leanOpts_1981_; lean_object* v_forwardedArgs_1982_; uint8_t v_component_1983_; uint8_t v_printPrefix_1984_; uint8_t v_printLibDir_1985_; uint8_t v_useStdin_1986_; uint8_t v_onlyDeps_1987_; uint8_t v_depsJson_1988_; lean_object* v_opts_1989_; uint32_t v_trustLevel_1990_; uint32_t v_numThreads_1991_; lean_object* v_rootDir_x3f_1992_; lean_object* v_setupFileName_x3f_1993_; lean_object* v_oleanFileName_x3f_1994_; lean_object* v_usageFileName_x3f_1995_; lean_object* v_ileanFileName_x3f_1996_; lean_object* v_cFileName_x3f_1997_; lean_object* v_bcFileName_x3f_1998_; uint8_t v_jsonOutput_1999_; lean_object* v_errorOnKinds_2000_; uint8_t v_printStats_2001_; uint8_t v_run_2002_; lean_object* v_incrSaveFileName_x3f_2003_; lean_object* v_incrLoadFileName_x3f_2004_; lean_object* v_incrHeaderSaveFileName_x3f_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2013_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_1981_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_1982_ = lean_ctor_get(v_opts_937_, 1);
v_component_1983_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_1984_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_1985_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_1986_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_1987_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_depsJson_1988_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_1989_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_1990_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_1991_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1992_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_1993_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_1994_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_1995_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_1996_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_1997_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_1998_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_1999_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2000_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2001_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2002_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2003_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2004_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2005_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2013_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2007_ = v_opts_937_;
v_isShared_2008_ = v_isSharedCheck_2013_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2005_);
lean_inc(v_incrLoadFileName_x3f_2004_);
lean_inc(v_incrSaveFileName_x3f_2003_);
lean_inc(v_errorOnKinds_2000_);
lean_inc(v_bcFileName_x3f_1998_);
lean_inc(v_cFileName_x3f_1997_);
lean_inc(v_ileanFileName_x3f_1996_);
lean_inc(v_usageFileName_x3f_1995_);
lean_inc(v_oleanFileName_x3f_1994_);
lean_inc(v_setupFileName_x3f_1993_);
lean_inc(v_rootDir_x3f_1992_);
lean_inc(v_opts_1989_);
lean_inc(v_forwardedArgs_1982_);
lean_inc(v_leanOpts_1981_);
lean_dec(v_opts_937_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2013_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2010_; 
if (v_isShared_2008_ == 0)
{
v___x_2010_ = v___x_2007_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_leanOpts_1981_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_forwardedArgs_1982_);
lean_ctor_set(v_reuseFailAlloc_2012_, 2, v_opts_1989_);
lean_ctor_set(v_reuseFailAlloc_2012_, 3, v_rootDir_x3f_1992_);
lean_ctor_set(v_reuseFailAlloc_2012_, 4, v_setupFileName_x3f_1993_);
lean_ctor_set(v_reuseFailAlloc_2012_, 5, v_oleanFileName_x3f_1994_);
lean_ctor_set(v_reuseFailAlloc_2012_, 6, v_usageFileName_x3f_1995_);
lean_ctor_set(v_reuseFailAlloc_2012_, 7, v_ileanFileName_x3f_1996_);
lean_ctor_set(v_reuseFailAlloc_2012_, 8, v_cFileName_x3f_1997_);
lean_ctor_set(v_reuseFailAlloc_2012_, 9, v_bcFileName_x3f_1998_);
lean_ctor_set(v_reuseFailAlloc_2012_, 10, v_errorOnKinds_2000_);
lean_ctor_set(v_reuseFailAlloc_2012_, 11, v_incrSaveFileName_x3f_2003_);
lean_ctor_set(v_reuseFailAlloc_2012_, 12, v_incrLoadFileName_x3f_2004_);
lean_ctor_set(v_reuseFailAlloc_2012_, 13, v_incrHeaderSaveFileName_x3f_2005_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 8, v_component_1983_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 9, v_printPrefix_1984_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 10, v_printLibDir_1985_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 11, v_useStdin_1986_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 12, v_onlyDeps_1987_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 14, v_depsJson_1988_);
lean_ctor_set_uint32(v_reuseFailAlloc_2012_, sizeof(void*)*14, v_trustLevel_1990_);
lean_ctor_set_uint32(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 4, v_numThreads_1991_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 15, v_jsonOutput_1999_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 16, v_printStats_2001_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*14 + 17, v_run_2002_);
v___x_2010_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; 
lean_ctor_set_uint8(v___x_2010_, sizeof(void*)*14 + 13, v___x_1208_);
v___x_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
return v___x_2011_;
}
}
}
}
else
{
lean_object* v_leanOpts_2014_; lean_object* v_forwardedArgs_2015_; uint8_t v_component_2016_; uint8_t v_printPrefix_2017_; uint8_t v_printLibDir_2018_; uint8_t v_useStdin_2019_; uint8_t v_onlySrcDeps_2020_; uint8_t v_depsJson_2021_; lean_object* v_opts_2022_; uint32_t v_trustLevel_2023_; uint32_t v_numThreads_2024_; lean_object* v_rootDir_x3f_2025_; lean_object* v_setupFileName_x3f_2026_; lean_object* v_oleanFileName_x3f_2027_; lean_object* v_usageFileName_x3f_2028_; lean_object* v_ileanFileName_x3f_2029_; lean_object* v_cFileName_x3f_2030_; lean_object* v_bcFileName_x3f_2031_; uint8_t v_jsonOutput_2032_; lean_object* v_errorOnKinds_2033_; uint8_t v_printStats_2034_; uint8_t v_run_2035_; lean_object* v_incrSaveFileName_x3f_2036_; lean_object* v_incrLoadFileName_x3f_2037_; lean_object* v_incrHeaderSaveFileName_x3f_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2046_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_2014_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2015_ = lean_ctor_get(v_opts_937_, 1);
v_component_2016_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2017_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2018_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2019_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlySrcDeps_2020_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2021_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2022_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2023_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2024_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2025_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2026_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2027_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2028_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2029_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2030_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2031_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2032_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2033_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2034_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2035_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2036_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2037_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2038_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2046_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2040_ = v_opts_937_;
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2038_);
lean_inc(v_incrLoadFileName_x3f_2037_);
lean_inc(v_incrSaveFileName_x3f_2036_);
lean_inc(v_errorOnKinds_2033_);
lean_inc(v_bcFileName_x3f_2031_);
lean_inc(v_cFileName_x3f_2030_);
lean_inc(v_ileanFileName_x3f_2029_);
lean_inc(v_usageFileName_x3f_2028_);
lean_inc(v_oleanFileName_x3f_2027_);
lean_inc(v_setupFileName_x3f_2026_);
lean_inc(v_rootDir_x3f_2025_);
lean_inc(v_opts_2022_);
lean_inc(v_forwardedArgs_2015_);
lean_inc(v_leanOpts_2014_);
lean_dec(v_opts_937_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_leanOpts_2014_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v_forwardedArgs_2015_);
lean_ctor_set(v_reuseFailAlloc_2045_, 2, v_opts_2022_);
lean_ctor_set(v_reuseFailAlloc_2045_, 3, v_rootDir_x3f_2025_);
lean_ctor_set(v_reuseFailAlloc_2045_, 4, v_setupFileName_x3f_2026_);
lean_ctor_set(v_reuseFailAlloc_2045_, 5, v_oleanFileName_x3f_2027_);
lean_ctor_set(v_reuseFailAlloc_2045_, 6, v_usageFileName_x3f_2028_);
lean_ctor_set(v_reuseFailAlloc_2045_, 7, v_ileanFileName_x3f_2029_);
lean_ctor_set(v_reuseFailAlloc_2045_, 8, v_cFileName_x3f_2030_);
lean_ctor_set(v_reuseFailAlloc_2045_, 9, v_bcFileName_x3f_2031_);
lean_ctor_set(v_reuseFailAlloc_2045_, 10, v_errorOnKinds_2033_);
lean_ctor_set(v_reuseFailAlloc_2045_, 11, v_incrSaveFileName_x3f_2036_);
lean_ctor_set(v_reuseFailAlloc_2045_, 12, v_incrLoadFileName_x3f_2037_);
lean_ctor_set(v_reuseFailAlloc_2045_, 13, v_incrHeaderSaveFileName_x3f_2038_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 8, v_component_2016_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 9, v_printPrefix_2017_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 10, v_printLibDir_2018_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 11, v_useStdin_2019_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 13, v_onlySrcDeps_2020_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 14, v_depsJson_2021_);
lean_ctor_set_uint32(v_reuseFailAlloc_2045_, sizeof(void*)*14, v_trustLevel_2023_);
lean_ctor_set_uint32(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 4, v_numThreads_2024_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 15, v_jsonOutput_2032_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 16, v_printStats_2034_);
lean_ctor_set_uint8(v_reuseFailAlloc_2045_, sizeof(void*)*14 + 17, v_run_2035_);
v___x_2043_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2044_; 
lean_ctor_set_uint8(v___x_2043_, sizeof(void*)*14 + 12, v___x_1206_);
v___x_2044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
return v___x_2044_;
}
}
}
}
else
{
lean_object* v_leanOpts_2047_; lean_object* v_forwardedArgs_2048_; uint8_t v_component_2049_; uint8_t v_printPrefix_2050_; uint8_t v_printLibDir_2051_; uint8_t v_useStdin_2052_; uint8_t v_onlyDeps_2053_; uint8_t v_onlySrcDeps_2054_; uint8_t v_depsJson_2055_; lean_object* v_opts_2056_; uint32_t v_trustLevel_2057_; uint32_t v_numThreads_2058_; lean_object* v_rootDir_x3f_2059_; lean_object* v_setupFileName_x3f_2060_; lean_object* v_oleanFileName_x3f_2061_; lean_object* v_usageFileName_x3f_2062_; lean_object* v_ileanFileName_x3f_2063_; lean_object* v_cFileName_x3f_2064_; lean_object* v_bcFileName_x3f_2065_; uint8_t v_jsonOutput_2066_; lean_object* v_errorOnKinds_2067_; uint8_t v_printStats_2068_; uint8_t v_run_2069_; lean_object* v_incrSaveFileName_x3f_2070_; lean_object* v_incrLoadFileName_x3f_2071_; lean_object* v_incrHeaderSaveFileName_x3f_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2082_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_2047_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2048_ = lean_ctor_get(v_opts_937_, 1);
v_component_2049_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2050_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2051_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2052_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2053_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2054_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2055_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2056_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2057_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2058_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2059_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2060_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2061_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2062_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2063_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2064_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2065_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2066_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2067_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2068_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2069_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2070_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2071_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2072_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2074_ = v_opts_937_;
v_isShared_2075_ = v_isSharedCheck_2082_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2072_);
lean_inc(v_incrLoadFileName_x3f_2071_);
lean_inc(v_incrSaveFileName_x3f_2070_);
lean_inc(v_errorOnKinds_2067_);
lean_inc(v_bcFileName_x3f_2065_);
lean_inc(v_cFileName_x3f_2064_);
lean_inc(v_ileanFileName_x3f_2063_);
lean_inc(v_usageFileName_x3f_2062_);
lean_inc(v_oleanFileName_x3f_2061_);
lean_inc(v_setupFileName_x3f_2060_);
lean_inc(v_rootDir_x3f_2059_);
lean_inc(v_opts_2056_);
lean_inc(v_forwardedArgs_2048_);
lean_inc(v_leanOpts_2047_);
lean_dec(v_opts_937_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2082_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2076_ = l___private_Lean_Shell_0__Lean_verbose;
v___x_2077_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2047_, v___x_2076_, v___x_1202_);
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 0, v___x_2077_);
v___x_2079_ = v___x_2074_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2077_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v_forwardedArgs_2048_);
lean_ctor_set(v_reuseFailAlloc_2081_, 2, v_opts_2056_);
lean_ctor_set(v_reuseFailAlloc_2081_, 3, v_rootDir_x3f_2059_);
lean_ctor_set(v_reuseFailAlloc_2081_, 4, v_setupFileName_x3f_2060_);
lean_ctor_set(v_reuseFailAlloc_2081_, 5, v_oleanFileName_x3f_2061_);
lean_ctor_set(v_reuseFailAlloc_2081_, 6, v_usageFileName_x3f_2062_);
lean_ctor_set(v_reuseFailAlloc_2081_, 7, v_ileanFileName_x3f_2063_);
lean_ctor_set(v_reuseFailAlloc_2081_, 8, v_cFileName_x3f_2064_);
lean_ctor_set(v_reuseFailAlloc_2081_, 9, v_bcFileName_x3f_2065_);
lean_ctor_set(v_reuseFailAlloc_2081_, 10, v_errorOnKinds_2067_);
lean_ctor_set(v_reuseFailAlloc_2081_, 11, v_incrSaveFileName_x3f_2070_);
lean_ctor_set(v_reuseFailAlloc_2081_, 12, v_incrLoadFileName_x3f_2071_);
lean_ctor_set(v_reuseFailAlloc_2081_, 13, v_incrHeaderSaveFileName_x3f_2072_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 8, v_component_2049_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 9, v_printPrefix_2050_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 10, v_printLibDir_2051_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 11, v_useStdin_2052_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 12, v_onlyDeps_2053_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 13, v_onlySrcDeps_2054_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 14, v_depsJson_2055_);
lean_ctor_set_uint32(v_reuseFailAlloc_2081_, sizeof(void*)*14, v_trustLevel_2057_);
lean_ctor_set_uint32(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 4, v_numThreads_2058_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 15, v_jsonOutput_2066_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 16, v_printStats_2068_);
lean_ctor_set_uint8(v_reuseFailAlloc_2081_, sizeof(void*)*14 + 17, v_run_2069_);
v___x_2079_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2080_; 
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
return v___x_2080_;
}
}
}
}
else
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13));
v___x_2084_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2083_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2139_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2087_ = v___x_2084_;
v_isShared_2088_ = v_isSharedCheck_2139_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2084_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2139_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2089_ = lean_unsigned_to_nat(0u);
v___x_2090_ = lean_string_utf8_byte_size(v_a_2085_);
lean_inc(v_a_2085_);
v___x_2091_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2091_, 0, v_a_2085_);
lean_ctor_set(v___x_2091_, 1, v___x_2089_);
lean_ctor_set(v___x_2091_, 2, v___x_2090_);
v___x_2092_ = l_String_Slice_toNat_x3f(v___x_2091_);
lean_dec_ref_known(v___x_2091_, 3);
if (lean_obj_tag(v___x_2092_) == 1)
{
lean_object* v_val_2093_; lean_object* v___x_2094_; uint8_t v___x_2095_; 
v_val_2093_ = lean_ctor_get(v___x_2092_, 0);
lean_inc(v_val_2093_);
lean_dec_ref_known(v___x_2092_, 1);
v___x_2094_ = lean_cstr_to_nat("4294967296");
v___x_2095_ = lean_nat_dec_lt(v_val_2093_, v___x_2094_);
if (v___x_2095_ == 0)
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
lean_dec(v_val_2093_);
lean_del_object(v___x_2087_);
lean_dec(v_a_2085_);
lean_dec_ref(v_opts_937_);
v___x_2096_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14));
v___x_2097_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2096_);
lean_dec_ref(v___x_2097_);
goto v___jp_1114_;
}
else
{
lean_object* v_leanOpts_2098_; lean_object* v_forwardedArgs_2099_; uint8_t v_component_2100_; uint8_t v_printPrefix_2101_; uint8_t v_printLibDir_2102_; uint8_t v_useStdin_2103_; uint8_t v_onlyDeps_2104_; uint8_t v_onlySrcDeps_2105_; uint8_t v_depsJson_2106_; lean_object* v_opts_2107_; uint32_t v_numThreads_2108_; lean_object* v_rootDir_x3f_2109_; lean_object* v_setupFileName_x3f_2110_; lean_object* v_oleanFileName_x3f_2111_; lean_object* v_usageFileName_x3f_2112_; lean_object* v_ileanFileName_x3f_2113_; lean_object* v_cFileName_x3f_2114_; lean_object* v_bcFileName_x3f_2115_; uint8_t v_jsonOutput_2116_; lean_object* v_errorOnKinds_2117_; uint8_t v_printStats_2118_; uint8_t v_run_2119_; lean_object* v_incrSaveFileName_x3f_2120_; lean_object* v_incrLoadFileName_x3f_2121_; lean_object* v_incrHeaderSaveFileName_x3f_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2136_; 
v_leanOpts_2098_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2099_ = lean_ctor_get(v_opts_937_, 1);
v_component_2100_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2101_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2102_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2103_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2104_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2105_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2106_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2107_ = lean_ctor_get(v_opts_937_, 2);
v_numThreads_2108_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2109_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2110_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2111_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2112_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2113_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2114_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2115_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2116_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2117_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2118_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2119_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2120_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2121_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2122_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2136_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2124_ = v_opts_937_;
v_isShared_2125_ = v_isSharedCheck_2136_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2122_);
lean_inc(v_incrLoadFileName_x3f_2121_);
lean_inc(v_incrSaveFileName_x3f_2120_);
lean_inc(v_errorOnKinds_2117_);
lean_inc(v_bcFileName_x3f_2115_);
lean_inc(v_cFileName_x3f_2114_);
lean_inc(v_ileanFileName_x3f_2113_);
lean_inc(v_usageFileName_x3f_2112_);
lean_inc(v_oleanFileName_x3f_2111_);
lean_inc(v_setupFileName_x3f_2110_);
lean_inc(v_rootDir_x3f_2109_);
lean_inc(v_opts_2107_);
lean_inc(v_forwardedArgs_2099_);
lean_inc(v_leanOpts_2098_);
lean_dec(v_opts_937_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2136_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
uint32_t v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2131_; 
v___x_2126_ = lean_uint32_of_nat(v_val_2093_);
lean_dec(v_val_2093_);
v___x_2127_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15));
v___x_2128_ = lean_string_append(v___x_2127_, v_a_2085_);
lean_dec(v_a_2085_);
v___x_2129_ = lean_array_push(v_forwardedArgs_2099_, v___x_2128_);
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 1, v___x_2129_);
v___x_2131_ = v___x_2124_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_leanOpts_2098_);
lean_ctor_set(v_reuseFailAlloc_2135_, 1, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2135_, 2, v_opts_2107_);
lean_ctor_set(v_reuseFailAlloc_2135_, 3, v_rootDir_x3f_2109_);
lean_ctor_set(v_reuseFailAlloc_2135_, 4, v_setupFileName_x3f_2110_);
lean_ctor_set(v_reuseFailAlloc_2135_, 5, v_oleanFileName_x3f_2111_);
lean_ctor_set(v_reuseFailAlloc_2135_, 6, v_usageFileName_x3f_2112_);
lean_ctor_set(v_reuseFailAlloc_2135_, 7, v_ileanFileName_x3f_2113_);
lean_ctor_set(v_reuseFailAlloc_2135_, 8, v_cFileName_x3f_2114_);
lean_ctor_set(v_reuseFailAlloc_2135_, 9, v_bcFileName_x3f_2115_);
lean_ctor_set(v_reuseFailAlloc_2135_, 10, v_errorOnKinds_2117_);
lean_ctor_set(v_reuseFailAlloc_2135_, 11, v_incrSaveFileName_x3f_2120_);
lean_ctor_set(v_reuseFailAlloc_2135_, 12, v_incrLoadFileName_x3f_2121_);
lean_ctor_set(v_reuseFailAlloc_2135_, 13, v_incrHeaderSaveFileName_x3f_2122_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 8, v_component_2100_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 9, v_printPrefix_2101_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 10, v_printLibDir_2102_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 11, v_useStdin_2103_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 12, v_onlyDeps_2104_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 13, v_onlySrcDeps_2105_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 14, v_depsJson_2106_);
lean_ctor_set_uint32(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 4, v_numThreads_2108_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 15, v_jsonOutput_2116_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 16, v_printStats_2118_);
lean_ctor_set_uint8(v_reuseFailAlloc_2135_, sizeof(void*)*14 + 17, v_run_2119_);
v___x_2131_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2133_; 
lean_ctor_set_uint32(v___x_2131_, sizeof(void*)*14, v___x_2126_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v___x_2131_);
v___x_2133_ = v___x_2087_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
else
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_dec(v___x_2092_);
lean_del_object(v___x_2087_);
lean_dec(v_a_2085_);
lean_dec_ref(v_opts_937_);
v___x_2137_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16));
v___x_2138_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2137_);
lean_dec_ref(v___x_2138_);
goto v___jp_1117_;
}
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
lean_dec_ref(v_opts_937_);
v_a_2140_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2140_);
lean_dec_ref_known(v___x_2084_, 1);
v___x_2144_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2145_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2144_);
lean_dec_ref(v___x_2145_);
goto v___jp_2141_;
v___jp_2141_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = lean_io_error_to_string(v_a_2140_);
v___x_2143_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2142_);
lean_dec_ref(v___x_2143_);
goto v___jp_1111_;
}
}
}
}
else
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17));
v___x_2147_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2146_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2200_; 
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2150_ = v___x_2147_;
v_isShared_2151_ = v_isSharedCheck_2200_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2147_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2200_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2152_ = lean_unsigned_to_nat(0u);
v___x_2153_ = lean_string_utf8_byte_size(v_a_2148_);
lean_inc(v_a_2148_);
v___x_2154_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2154_, 0, v_a_2148_);
lean_ctor_set(v___x_2154_, 1, v___x_2152_);
lean_ctor_set(v___x_2154_, 2, v___x_2153_);
v___x_2155_ = l_String_Slice_toNat_x3f(v___x_2154_);
lean_dec_ref_known(v___x_2154_, 3);
if (lean_obj_tag(v___x_2155_) == 1)
{
lean_object* v_val_2156_; lean_object* v_leanOpts_2157_; lean_object* v_forwardedArgs_2158_; uint8_t v_component_2159_; uint8_t v_printPrefix_2160_; uint8_t v_printLibDir_2161_; uint8_t v_useStdin_2162_; uint8_t v_onlyDeps_2163_; uint8_t v_onlySrcDeps_2164_; uint8_t v_depsJson_2165_; lean_object* v_opts_2166_; uint32_t v_trustLevel_2167_; uint32_t v_numThreads_2168_; lean_object* v_rootDir_x3f_2169_; lean_object* v_setupFileName_x3f_2170_; lean_object* v_oleanFileName_x3f_2171_; lean_object* v_usageFileName_x3f_2172_; lean_object* v_ileanFileName_x3f_2173_; lean_object* v_cFileName_x3f_2174_; lean_object* v_bcFileName_x3f_2175_; uint8_t v_jsonOutput_2176_; lean_object* v_errorOnKinds_2177_; uint8_t v_printStats_2178_; uint8_t v_run_2179_; lean_object* v_incrSaveFileName_x3f_2180_; lean_object* v_incrLoadFileName_x3f_2181_; lean_object* v_incrHeaderSaveFileName_x3f_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2197_; 
v_val_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_val_2156_);
lean_dec_ref_known(v___x_2155_, 1);
v_leanOpts_2157_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2158_ = lean_ctor_get(v_opts_937_, 1);
v_component_2159_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2160_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2161_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2162_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2163_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2164_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2165_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2166_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2167_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2168_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2169_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2170_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2171_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2172_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2173_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2174_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2175_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2176_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2177_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2178_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2179_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2180_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2181_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2182_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2197_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2184_ = v_opts_937_;
v_isShared_2185_ = v_isSharedCheck_2197_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2182_);
lean_inc(v_incrLoadFileName_x3f_2181_);
lean_inc(v_incrSaveFileName_x3f_2180_);
lean_inc(v_errorOnKinds_2177_);
lean_inc(v_bcFileName_x3f_2175_);
lean_inc(v_cFileName_x3f_2174_);
lean_inc(v_ileanFileName_x3f_2173_);
lean_inc(v_usageFileName_x3f_2172_);
lean_inc(v_oleanFileName_x3f_2171_);
lean_inc(v_setupFileName_x3f_2170_);
lean_inc(v_rootDir_x3f_2169_);
lean_inc(v_opts_2166_);
lean_inc(v_forwardedArgs_2158_);
lean_inc(v_leanOpts_2157_);
lean_dec(v_opts_937_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2197_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2186_ = l___private_Lean_Shell_0__Lean_timeout;
v___x_2187_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2157_, v___x_2186_, v_val_2156_);
v___x_2188_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18));
v___x_2189_ = lean_string_append(v___x_2188_, v_a_2148_);
lean_dec(v_a_2148_);
v___x_2190_ = lean_array_push(v_forwardedArgs_2158_, v___x_2189_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2190_);
lean_ctor_set(v___x_2184_, 0, v___x_2187_);
v___x_2192_ = v___x_2184_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v___x_2187_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v___x_2190_);
lean_ctor_set(v_reuseFailAlloc_2196_, 2, v_opts_2166_);
lean_ctor_set(v_reuseFailAlloc_2196_, 3, v_rootDir_x3f_2169_);
lean_ctor_set(v_reuseFailAlloc_2196_, 4, v_setupFileName_x3f_2170_);
lean_ctor_set(v_reuseFailAlloc_2196_, 5, v_oleanFileName_x3f_2171_);
lean_ctor_set(v_reuseFailAlloc_2196_, 6, v_usageFileName_x3f_2172_);
lean_ctor_set(v_reuseFailAlloc_2196_, 7, v_ileanFileName_x3f_2173_);
lean_ctor_set(v_reuseFailAlloc_2196_, 8, v_cFileName_x3f_2174_);
lean_ctor_set(v_reuseFailAlloc_2196_, 9, v_bcFileName_x3f_2175_);
lean_ctor_set(v_reuseFailAlloc_2196_, 10, v_errorOnKinds_2177_);
lean_ctor_set(v_reuseFailAlloc_2196_, 11, v_incrSaveFileName_x3f_2180_);
lean_ctor_set(v_reuseFailAlloc_2196_, 12, v_incrLoadFileName_x3f_2181_);
lean_ctor_set(v_reuseFailAlloc_2196_, 13, v_incrHeaderSaveFileName_x3f_2182_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 8, v_component_2159_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 9, v_printPrefix_2160_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 10, v_printLibDir_2161_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 11, v_useStdin_2162_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 12, v_onlyDeps_2163_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 13, v_onlySrcDeps_2164_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 14, v_depsJson_2165_);
lean_ctor_set_uint32(v_reuseFailAlloc_2196_, sizeof(void*)*14, v_trustLevel_2167_);
lean_ctor_set_uint32(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 4, v_numThreads_2168_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 15, v_jsonOutput_2176_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 16, v_printStats_2178_);
lean_ctor_set_uint8(v_reuseFailAlloc_2196_, sizeof(void*)*14 + 17, v_run_2179_);
v___x_2192_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2194_; 
if (v_isShared_2151_ == 0)
{
lean_ctor_set(v___x_2150_, 0, v___x_2192_);
v___x_2194_ = v___x_2150_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
else
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
lean_dec(v___x_2155_);
lean_del_object(v___x_2150_);
lean_dec(v_a_2148_);
lean_dec_ref(v_opts_937_);
v___x_2198_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19));
v___x_2199_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2198_);
lean_dec_ref(v___x_2199_);
goto v___jp_1001_;
}
}
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
lean_dec_ref(v_opts_937_);
v_a_2201_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2147_, 1);
v___x_2205_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2206_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2205_);
lean_dec_ref(v___x_2206_);
goto v___jp_2202_;
v___jp_2202_:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = lean_io_error_to_string(v_a_2201_);
v___x_2204_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2203_);
lean_dec_ref(v___x_2204_);
goto v___jp_998_;
}
}
}
}
else
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2207_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20));
v___x_2208_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2207_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2261_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2211_ = v___x_2208_;
v_isShared_2212_ = v_isSharedCheck_2261_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2208_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2261_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2213_ = lean_unsigned_to_nat(0u);
v___x_2214_ = lean_string_utf8_byte_size(v_a_2209_);
lean_inc(v_a_2209_);
v___x_2215_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2215_, 0, v_a_2209_);
lean_ctor_set(v___x_2215_, 1, v___x_2213_);
lean_ctor_set(v___x_2215_, 2, v___x_2214_);
v___x_2216_ = l_String_Slice_toNat_x3f(v___x_2215_);
lean_dec_ref_known(v___x_2215_, 3);
if (lean_obj_tag(v___x_2216_) == 1)
{
lean_object* v_val_2217_; lean_object* v_leanOpts_2218_; lean_object* v_forwardedArgs_2219_; uint8_t v_component_2220_; uint8_t v_printPrefix_2221_; uint8_t v_printLibDir_2222_; uint8_t v_useStdin_2223_; uint8_t v_onlyDeps_2224_; uint8_t v_onlySrcDeps_2225_; uint8_t v_depsJson_2226_; lean_object* v_opts_2227_; uint32_t v_trustLevel_2228_; uint32_t v_numThreads_2229_; lean_object* v_rootDir_x3f_2230_; lean_object* v_setupFileName_x3f_2231_; lean_object* v_oleanFileName_x3f_2232_; lean_object* v_usageFileName_x3f_2233_; lean_object* v_ileanFileName_x3f_2234_; lean_object* v_cFileName_x3f_2235_; lean_object* v_bcFileName_x3f_2236_; uint8_t v_jsonOutput_2237_; lean_object* v_errorOnKinds_2238_; uint8_t v_printStats_2239_; uint8_t v_run_2240_; lean_object* v_incrSaveFileName_x3f_2241_; lean_object* v_incrLoadFileName_x3f_2242_; lean_object* v_incrHeaderSaveFileName_x3f_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2258_; 
v_val_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_val_2217_);
lean_dec_ref_known(v___x_2216_, 1);
v_leanOpts_2218_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2219_ = lean_ctor_get(v_opts_937_, 1);
v_component_2220_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2221_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2222_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2223_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2224_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2225_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2226_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2227_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2228_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2229_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2230_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2231_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2232_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2233_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2234_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2235_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2236_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2237_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2238_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2239_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2240_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2241_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2242_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2243_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2258_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2245_ = v_opts_937_;
v_isShared_2246_ = v_isSharedCheck_2258_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2243_);
lean_inc(v_incrLoadFileName_x3f_2242_);
lean_inc(v_incrSaveFileName_x3f_2241_);
lean_inc(v_errorOnKinds_2238_);
lean_inc(v_bcFileName_x3f_2236_);
lean_inc(v_cFileName_x3f_2235_);
lean_inc(v_ileanFileName_x3f_2234_);
lean_inc(v_usageFileName_x3f_2233_);
lean_inc(v_oleanFileName_x3f_2232_);
lean_inc(v_setupFileName_x3f_2231_);
lean_inc(v_rootDir_x3f_2230_);
lean_inc(v_opts_2227_);
lean_inc(v_forwardedArgs_2219_);
lean_inc(v_leanOpts_2218_);
lean_dec(v_opts_937_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2258_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2253_; 
v___x_2247_ = l___private_Lean_Shell_0__Lean_maxMemory;
v___x_2248_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2218_, v___x_2247_, v_val_2217_);
v___x_2249_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21));
v___x_2250_ = lean_string_append(v___x_2249_, v_a_2209_);
lean_dec(v_a_2209_);
v___x_2251_ = lean_array_push(v_forwardedArgs_2219_, v___x_2250_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 1, v___x_2251_);
lean_ctor_set(v___x_2245_, 0, v___x_2248_);
v___x_2253_ = v___x_2245_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2248_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2257_, 2, v_opts_2227_);
lean_ctor_set(v_reuseFailAlloc_2257_, 3, v_rootDir_x3f_2230_);
lean_ctor_set(v_reuseFailAlloc_2257_, 4, v_setupFileName_x3f_2231_);
lean_ctor_set(v_reuseFailAlloc_2257_, 5, v_oleanFileName_x3f_2232_);
lean_ctor_set(v_reuseFailAlloc_2257_, 6, v_usageFileName_x3f_2233_);
lean_ctor_set(v_reuseFailAlloc_2257_, 7, v_ileanFileName_x3f_2234_);
lean_ctor_set(v_reuseFailAlloc_2257_, 8, v_cFileName_x3f_2235_);
lean_ctor_set(v_reuseFailAlloc_2257_, 9, v_bcFileName_x3f_2236_);
lean_ctor_set(v_reuseFailAlloc_2257_, 10, v_errorOnKinds_2238_);
lean_ctor_set(v_reuseFailAlloc_2257_, 11, v_incrSaveFileName_x3f_2241_);
lean_ctor_set(v_reuseFailAlloc_2257_, 12, v_incrLoadFileName_x3f_2242_);
lean_ctor_set(v_reuseFailAlloc_2257_, 13, v_incrHeaderSaveFileName_x3f_2243_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 8, v_component_2220_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 9, v_printPrefix_2221_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 10, v_printLibDir_2222_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 11, v_useStdin_2223_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 12, v_onlyDeps_2224_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 13, v_onlySrcDeps_2225_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 14, v_depsJson_2226_);
lean_ctor_set_uint32(v_reuseFailAlloc_2257_, sizeof(void*)*14, v_trustLevel_2228_);
lean_ctor_set_uint32(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 4, v_numThreads_2229_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 15, v_jsonOutput_2237_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 16, v_printStats_2239_);
lean_ctor_set_uint8(v_reuseFailAlloc_2257_, sizeof(void*)*14 + 17, v_run_2240_);
v___x_2253_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2255_; 
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 0, v___x_2253_);
v___x_2255_ = v___x_2211_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
else
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
lean_dec(v___x_2216_);
lean_del_object(v___x_2211_);
lean_dec(v_a_2209_);
lean_dec_ref(v_opts_937_);
v___x_2259_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22));
v___x_2260_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2259_);
lean_dec_ref(v___x_2260_);
goto v___jp_1126_;
}
}
}
else
{
lean_object* v_a_2262_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
lean_dec_ref(v_opts_937_);
v_a_2262_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_a_2262_);
lean_dec_ref_known(v___x_2208_, 1);
v___x_2266_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2267_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2266_);
lean_dec_ref(v___x_2267_);
goto v___jp_2263_;
v___jp_2263_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = lean_io_error_to_string(v_a_2262_);
v___x_2265_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2264_);
lean_dec_ref(v___x_2265_);
goto v___jp_1123_;
}
}
}
}
else
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2268_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23));
v___x_2269_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2268_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2314_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2272_ = v___x_2269_;
v_isShared_2273_ = v_isSharedCheck_2314_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2269_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2314_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v_leanOpts_2274_; lean_object* v_forwardedArgs_2275_; uint8_t v_component_2276_; uint8_t v_printPrefix_2277_; uint8_t v_printLibDir_2278_; uint8_t v_useStdin_2279_; uint8_t v_onlyDeps_2280_; uint8_t v_onlySrcDeps_2281_; uint8_t v_depsJson_2282_; lean_object* v_opts_2283_; uint32_t v_trustLevel_2284_; uint32_t v_numThreads_2285_; lean_object* v_setupFileName_x3f_2286_; lean_object* v_oleanFileName_x3f_2287_; lean_object* v_usageFileName_x3f_2288_; lean_object* v_ileanFileName_x3f_2289_; lean_object* v_cFileName_x3f_2290_; lean_object* v_bcFileName_x3f_2291_; uint8_t v_jsonOutput_2292_; lean_object* v_errorOnKinds_2293_; uint8_t v_printStats_2294_; uint8_t v_run_2295_; lean_object* v_incrSaveFileName_x3f_2296_; lean_object* v_incrLoadFileName_x3f_2297_; lean_object* v_incrHeaderSaveFileName_x3f_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2312_; 
v_leanOpts_2274_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2275_ = lean_ctor_get(v_opts_937_, 1);
v_component_2276_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2277_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2278_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2279_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2280_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2281_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2282_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2283_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2284_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2285_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_setupFileName_x3f_2286_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2287_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2288_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2289_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2290_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2291_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2292_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2293_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2294_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2295_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2296_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2297_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2298_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2312_ == 0)
{
lean_object* v_unused_2313_; 
v_unused_2313_ = lean_ctor_get(v_opts_937_, 3);
lean_dec(v_unused_2313_);
v___x_2300_ = v_opts_937_;
v_isShared_2301_ = v_isSharedCheck_2312_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2298_);
lean_inc(v_incrLoadFileName_x3f_2297_);
lean_inc(v_incrSaveFileName_x3f_2296_);
lean_inc(v_errorOnKinds_2293_);
lean_inc(v_bcFileName_x3f_2291_);
lean_inc(v_cFileName_x3f_2290_);
lean_inc(v_ileanFileName_x3f_2289_);
lean_inc(v_usageFileName_x3f_2288_);
lean_inc(v_oleanFileName_x3f_2287_);
lean_inc(v_setupFileName_x3f_2286_);
lean_inc(v_opts_2283_);
lean_inc(v_forwardedArgs_2275_);
lean_inc(v_leanOpts_2274_);
lean_dec(v_opts_937_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2312_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2302_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24));
v___x_2303_ = lean_string_append(v___x_2302_, v_a_2270_);
v___x_2304_ = lean_array_push(v_forwardedArgs_2275_, v___x_2303_);
v___x_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_a_2270_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 3, v___x_2305_);
lean_ctor_set(v___x_2300_, 1, v___x_2304_);
v___x_2307_ = v___x_2300_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_leanOpts_2274_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v___x_2304_);
lean_ctor_set(v_reuseFailAlloc_2311_, 2, v_opts_2283_);
lean_ctor_set(v_reuseFailAlloc_2311_, 3, v___x_2305_);
lean_ctor_set(v_reuseFailAlloc_2311_, 4, v_setupFileName_x3f_2286_);
lean_ctor_set(v_reuseFailAlloc_2311_, 5, v_oleanFileName_x3f_2287_);
lean_ctor_set(v_reuseFailAlloc_2311_, 6, v_usageFileName_x3f_2288_);
lean_ctor_set(v_reuseFailAlloc_2311_, 7, v_ileanFileName_x3f_2289_);
lean_ctor_set(v_reuseFailAlloc_2311_, 8, v_cFileName_x3f_2290_);
lean_ctor_set(v_reuseFailAlloc_2311_, 9, v_bcFileName_x3f_2291_);
lean_ctor_set(v_reuseFailAlloc_2311_, 10, v_errorOnKinds_2293_);
lean_ctor_set(v_reuseFailAlloc_2311_, 11, v_incrSaveFileName_x3f_2296_);
lean_ctor_set(v_reuseFailAlloc_2311_, 12, v_incrLoadFileName_x3f_2297_);
lean_ctor_set(v_reuseFailAlloc_2311_, 13, v_incrHeaderSaveFileName_x3f_2298_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 8, v_component_2276_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 9, v_printPrefix_2277_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 10, v_printLibDir_2278_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 11, v_useStdin_2279_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 12, v_onlyDeps_2280_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 13, v_onlySrcDeps_2281_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 14, v_depsJson_2282_);
lean_ctor_set_uint32(v_reuseFailAlloc_2311_, sizeof(void*)*14, v_trustLevel_2284_);
lean_ctor_set_uint32(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 4, v_numThreads_2285_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 15, v_jsonOutput_2292_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 16, v_printStats_2294_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*14 + 17, v_run_2295_);
v___x_2307_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2309_; 
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 0, v___x_2307_);
v___x_2309_ = v___x_2272_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2307_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
lean_dec_ref(v_opts_937_);
v_a_2315_ = lean_ctor_get(v___x_2269_, 0);
lean_inc(v_a_2315_);
lean_dec_ref_known(v___x_2269_, 1);
v___x_2319_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2320_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2319_);
lean_dec_ref(v___x_2320_);
goto v___jp_2316_;
v___jp_2316_:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = lean_io_error_to_string(v_a_2315_);
v___x_2318_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2317_);
lean_dec_ref(v___x_2318_);
goto v___jp_992_;
}
}
}
}
else
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25));
v___x_2322_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2321_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2364_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2325_ = v___x_2322_;
v_isShared_2326_ = v_isSharedCheck_2364_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2322_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2364_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v_leanOpts_2327_; lean_object* v_forwardedArgs_2328_; uint8_t v_component_2329_; uint8_t v_printPrefix_2330_; uint8_t v_printLibDir_2331_; uint8_t v_useStdin_2332_; uint8_t v_onlyDeps_2333_; uint8_t v_onlySrcDeps_2334_; uint8_t v_depsJson_2335_; lean_object* v_opts_2336_; uint32_t v_trustLevel_2337_; uint32_t v_numThreads_2338_; lean_object* v_rootDir_x3f_2339_; lean_object* v_setupFileName_x3f_2340_; lean_object* v_oleanFileName_x3f_2341_; lean_object* v_ileanFileName_x3f_2342_; lean_object* v_cFileName_x3f_2343_; lean_object* v_bcFileName_x3f_2344_; uint8_t v_jsonOutput_2345_; lean_object* v_errorOnKinds_2346_; uint8_t v_printStats_2347_; uint8_t v_run_2348_; lean_object* v_incrSaveFileName_x3f_2349_; lean_object* v_incrLoadFileName_x3f_2350_; lean_object* v_incrHeaderSaveFileName_x3f_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2362_; 
v_leanOpts_2327_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2328_ = lean_ctor_get(v_opts_937_, 1);
v_component_2329_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2330_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2331_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2332_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2333_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2334_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2335_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2336_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2337_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2338_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2339_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2340_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2341_ = lean_ctor_get(v_opts_937_, 5);
v_ileanFileName_x3f_2342_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2343_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2344_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2345_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2346_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2347_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2348_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2349_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2350_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2351_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2362_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2362_ == 0)
{
lean_object* v_unused_2363_; 
v_unused_2363_ = lean_ctor_get(v_opts_937_, 6);
lean_dec(v_unused_2363_);
v___x_2353_ = v_opts_937_;
v_isShared_2354_ = v_isSharedCheck_2362_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2351_);
lean_inc(v_incrLoadFileName_x3f_2350_);
lean_inc(v_incrSaveFileName_x3f_2349_);
lean_inc(v_errorOnKinds_2346_);
lean_inc(v_bcFileName_x3f_2344_);
lean_inc(v_cFileName_x3f_2343_);
lean_inc(v_ileanFileName_x3f_2342_);
lean_inc(v_oleanFileName_x3f_2341_);
lean_inc(v_setupFileName_x3f_2340_);
lean_inc(v_rootDir_x3f_2339_);
lean_inc(v_opts_2336_);
lean_inc(v_forwardedArgs_2328_);
lean_inc(v_leanOpts_2327_);
lean_dec(v_opts_937_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2362_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2355_, 0, v_a_2323_);
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 6, v___x_2355_);
v___x_2357_ = v___x_2353_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_leanOpts_2327_);
lean_ctor_set(v_reuseFailAlloc_2361_, 1, v_forwardedArgs_2328_);
lean_ctor_set(v_reuseFailAlloc_2361_, 2, v_opts_2336_);
lean_ctor_set(v_reuseFailAlloc_2361_, 3, v_rootDir_x3f_2339_);
lean_ctor_set(v_reuseFailAlloc_2361_, 4, v_setupFileName_x3f_2340_);
lean_ctor_set(v_reuseFailAlloc_2361_, 5, v_oleanFileName_x3f_2341_);
lean_ctor_set(v_reuseFailAlloc_2361_, 6, v___x_2355_);
lean_ctor_set(v_reuseFailAlloc_2361_, 7, v_ileanFileName_x3f_2342_);
lean_ctor_set(v_reuseFailAlloc_2361_, 8, v_cFileName_x3f_2343_);
lean_ctor_set(v_reuseFailAlloc_2361_, 9, v_bcFileName_x3f_2344_);
lean_ctor_set(v_reuseFailAlloc_2361_, 10, v_errorOnKinds_2346_);
lean_ctor_set(v_reuseFailAlloc_2361_, 11, v_incrSaveFileName_x3f_2349_);
lean_ctor_set(v_reuseFailAlloc_2361_, 12, v_incrLoadFileName_x3f_2350_);
lean_ctor_set(v_reuseFailAlloc_2361_, 13, v_incrHeaderSaveFileName_x3f_2351_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 8, v_component_2329_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 9, v_printPrefix_2330_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 10, v_printLibDir_2331_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 11, v_useStdin_2332_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 12, v_onlyDeps_2333_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 13, v_onlySrcDeps_2334_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 14, v_depsJson_2335_);
lean_ctor_set_uint32(v_reuseFailAlloc_2361_, sizeof(void*)*14, v_trustLevel_2337_);
lean_ctor_set_uint32(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 4, v_numThreads_2338_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 15, v_jsonOutput_2345_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 16, v_printStats_2347_);
lean_ctor_set_uint8(v_reuseFailAlloc_2361_, sizeof(void*)*14 + 17, v_run_2348_);
v___x_2357_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2359_; 
if (v_isShared_2326_ == 0)
{
lean_ctor_set(v___x_2325_, 0, v___x_2357_);
v___x_2359_ = v___x_2325_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
lean_dec_ref(v_opts_937_);
v_a_2365_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2365_);
lean_dec_ref_known(v___x_2322_, 1);
v___x_2369_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2370_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2369_);
lean_dec_ref(v___x_2370_);
goto v___jp_2366_;
v___jp_2366_:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = lean_io_error_to_string(v_a_2365_);
v___x_2368_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2367_);
lean_dec_ref(v___x_2368_);
goto v___jp_1132_;
}
}
}
}
else
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26));
v___x_2372_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2371_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2414_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2375_ = v___x_2372_;
v_isShared_2376_ = v_isSharedCheck_2414_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2372_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2414_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v_leanOpts_2377_; lean_object* v_forwardedArgs_2378_; uint8_t v_component_2379_; uint8_t v_printPrefix_2380_; uint8_t v_printLibDir_2381_; uint8_t v_useStdin_2382_; uint8_t v_onlyDeps_2383_; uint8_t v_onlySrcDeps_2384_; uint8_t v_depsJson_2385_; lean_object* v_opts_2386_; uint32_t v_trustLevel_2387_; uint32_t v_numThreads_2388_; lean_object* v_rootDir_x3f_2389_; lean_object* v_setupFileName_x3f_2390_; lean_object* v_oleanFileName_x3f_2391_; lean_object* v_usageFileName_x3f_2392_; lean_object* v_cFileName_x3f_2393_; lean_object* v_bcFileName_x3f_2394_; uint8_t v_jsonOutput_2395_; lean_object* v_errorOnKinds_2396_; uint8_t v_printStats_2397_; uint8_t v_run_2398_; lean_object* v_incrSaveFileName_x3f_2399_; lean_object* v_incrLoadFileName_x3f_2400_; lean_object* v_incrHeaderSaveFileName_x3f_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2412_; 
v_leanOpts_2377_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2378_ = lean_ctor_get(v_opts_937_, 1);
v_component_2379_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2380_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2381_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2382_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2383_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2384_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2385_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2386_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2387_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2388_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2389_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2390_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2391_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2392_ = lean_ctor_get(v_opts_937_, 6);
v_cFileName_x3f_2393_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2394_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2395_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2396_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2397_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2398_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2399_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2400_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2401_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2412_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2412_ == 0)
{
lean_object* v_unused_2413_; 
v_unused_2413_ = lean_ctor_get(v_opts_937_, 7);
lean_dec(v_unused_2413_);
v___x_2403_ = v_opts_937_;
v_isShared_2404_ = v_isSharedCheck_2412_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2401_);
lean_inc(v_incrLoadFileName_x3f_2400_);
lean_inc(v_incrSaveFileName_x3f_2399_);
lean_inc(v_errorOnKinds_2396_);
lean_inc(v_bcFileName_x3f_2394_);
lean_inc(v_cFileName_x3f_2393_);
lean_inc(v_usageFileName_x3f_2392_);
lean_inc(v_oleanFileName_x3f_2391_);
lean_inc(v_setupFileName_x3f_2390_);
lean_inc(v_rootDir_x3f_2389_);
lean_inc(v_opts_2386_);
lean_inc(v_forwardedArgs_2378_);
lean_inc(v_leanOpts_2377_);
lean_dec(v_opts_937_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2412_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2405_; lean_object* v___x_2407_; 
v___x_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2405_, 0, v_a_2373_);
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 7, v___x_2405_);
v___x_2407_ = v___x_2403_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_leanOpts_2377_);
lean_ctor_set(v_reuseFailAlloc_2411_, 1, v_forwardedArgs_2378_);
lean_ctor_set(v_reuseFailAlloc_2411_, 2, v_opts_2386_);
lean_ctor_set(v_reuseFailAlloc_2411_, 3, v_rootDir_x3f_2389_);
lean_ctor_set(v_reuseFailAlloc_2411_, 4, v_setupFileName_x3f_2390_);
lean_ctor_set(v_reuseFailAlloc_2411_, 5, v_oleanFileName_x3f_2391_);
lean_ctor_set(v_reuseFailAlloc_2411_, 6, v_usageFileName_x3f_2392_);
lean_ctor_set(v_reuseFailAlloc_2411_, 7, v___x_2405_);
lean_ctor_set(v_reuseFailAlloc_2411_, 8, v_cFileName_x3f_2393_);
lean_ctor_set(v_reuseFailAlloc_2411_, 9, v_bcFileName_x3f_2394_);
lean_ctor_set(v_reuseFailAlloc_2411_, 10, v_errorOnKinds_2396_);
lean_ctor_set(v_reuseFailAlloc_2411_, 11, v_incrSaveFileName_x3f_2399_);
lean_ctor_set(v_reuseFailAlloc_2411_, 12, v_incrLoadFileName_x3f_2400_);
lean_ctor_set(v_reuseFailAlloc_2411_, 13, v_incrHeaderSaveFileName_x3f_2401_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 8, v_component_2379_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 9, v_printPrefix_2380_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 10, v_printLibDir_2381_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 11, v_useStdin_2382_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 12, v_onlyDeps_2383_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 13, v_onlySrcDeps_2384_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 14, v_depsJson_2385_);
lean_ctor_set_uint32(v_reuseFailAlloc_2411_, sizeof(void*)*14, v_trustLevel_2387_);
lean_ctor_set_uint32(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 4, v_numThreads_2388_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 15, v_jsonOutput_2395_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 16, v_printStats_2397_);
lean_ctor_set_uint8(v_reuseFailAlloc_2411_, sizeof(void*)*14 + 17, v_run_2398_);
v___x_2407_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
lean_object* v___x_2409_; 
if (v_isShared_2376_ == 0)
{
lean_ctor_set(v___x_2375_, 0, v___x_2407_);
v___x_2409_ = v___x_2375_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2407_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
lean_dec_ref(v_opts_937_);
v_a_2415_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2372_, 1);
v___x_2419_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2420_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2419_);
lean_dec_ref(v___x_2420_);
goto v___jp_2416_;
v___jp_2416_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_io_error_to_string(v_a_2415_);
v___x_2418_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2417_);
lean_dec_ref(v___x_2418_);
goto v___jp_986_;
}
}
}
}
else
{
lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2421_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27));
v___x_2422_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2421_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2464_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2425_ = v___x_2422_;
v_isShared_2426_ = v_isSharedCheck_2464_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2422_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2464_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v_leanOpts_2427_; lean_object* v_forwardedArgs_2428_; uint8_t v_component_2429_; uint8_t v_printPrefix_2430_; uint8_t v_printLibDir_2431_; uint8_t v_useStdin_2432_; uint8_t v_onlyDeps_2433_; uint8_t v_onlySrcDeps_2434_; uint8_t v_depsJson_2435_; lean_object* v_opts_2436_; uint32_t v_trustLevel_2437_; uint32_t v_numThreads_2438_; lean_object* v_rootDir_x3f_2439_; lean_object* v_setupFileName_x3f_2440_; lean_object* v_usageFileName_x3f_2441_; lean_object* v_ileanFileName_x3f_2442_; lean_object* v_cFileName_x3f_2443_; lean_object* v_bcFileName_x3f_2444_; uint8_t v_jsonOutput_2445_; lean_object* v_errorOnKinds_2446_; uint8_t v_printStats_2447_; uint8_t v_run_2448_; lean_object* v_incrSaveFileName_x3f_2449_; lean_object* v_incrLoadFileName_x3f_2450_; lean_object* v_incrHeaderSaveFileName_x3f_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2462_; 
v_leanOpts_2427_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2428_ = lean_ctor_get(v_opts_937_, 1);
v_component_2429_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2430_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2431_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2432_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2433_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2434_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2435_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2436_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2437_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2438_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2439_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2440_ = lean_ctor_get(v_opts_937_, 4);
v_usageFileName_x3f_2441_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2442_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2443_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2444_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2445_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2446_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2447_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2448_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2449_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2450_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2451_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2462_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2462_ == 0)
{
lean_object* v_unused_2463_; 
v_unused_2463_ = lean_ctor_get(v_opts_937_, 5);
lean_dec(v_unused_2463_);
v___x_2453_ = v_opts_937_;
v_isShared_2454_ = v_isSharedCheck_2462_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2451_);
lean_inc(v_incrLoadFileName_x3f_2450_);
lean_inc(v_incrSaveFileName_x3f_2449_);
lean_inc(v_errorOnKinds_2446_);
lean_inc(v_bcFileName_x3f_2444_);
lean_inc(v_cFileName_x3f_2443_);
lean_inc(v_ileanFileName_x3f_2442_);
lean_inc(v_usageFileName_x3f_2441_);
lean_inc(v_setupFileName_x3f_2440_);
lean_inc(v_rootDir_x3f_2439_);
lean_inc(v_opts_2436_);
lean_inc(v_forwardedArgs_2428_);
lean_inc(v_leanOpts_2427_);
lean_dec(v_opts_937_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2462_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2455_; lean_object* v___x_2457_; 
v___x_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2455_, 0, v_a_2423_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 5, v___x_2455_);
v___x_2457_ = v___x_2453_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v_leanOpts_2427_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v_forwardedArgs_2428_);
lean_ctor_set(v_reuseFailAlloc_2461_, 2, v_opts_2436_);
lean_ctor_set(v_reuseFailAlloc_2461_, 3, v_rootDir_x3f_2439_);
lean_ctor_set(v_reuseFailAlloc_2461_, 4, v_setupFileName_x3f_2440_);
lean_ctor_set(v_reuseFailAlloc_2461_, 5, v___x_2455_);
lean_ctor_set(v_reuseFailAlloc_2461_, 6, v_usageFileName_x3f_2441_);
lean_ctor_set(v_reuseFailAlloc_2461_, 7, v_ileanFileName_x3f_2442_);
lean_ctor_set(v_reuseFailAlloc_2461_, 8, v_cFileName_x3f_2443_);
lean_ctor_set(v_reuseFailAlloc_2461_, 9, v_bcFileName_x3f_2444_);
lean_ctor_set(v_reuseFailAlloc_2461_, 10, v_errorOnKinds_2446_);
lean_ctor_set(v_reuseFailAlloc_2461_, 11, v_incrSaveFileName_x3f_2449_);
lean_ctor_set(v_reuseFailAlloc_2461_, 12, v_incrLoadFileName_x3f_2450_);
lean_ctor_set(v_reuseFailAlloc_2461_, 13, v_incrHeaderSaveFileName_x3f_2451_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 8, v_component_2429_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 9, v_printPrefix_2430_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 10, v_printLibDir_2431_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 11, v_useStdin_2432_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 12, v_onlyDeps_2433_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 13, v_onlySrcDeps_2434_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 14, v_depsJson_2435_);
lean_ctor_set_uint32(v_reuseFailAlloc_2461_, sizeof(void*)*14, v_trustLevel_2437_);
lean_ctor_set_uint32(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 4, v_numThreads_2438_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 15, v_jsonOutput_2445_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 16, v_printStats_2447_);
lean_ctor_set_uint8(v_reuseFailAlloc_2461_, sizeof(void*)*14 + 17, v_run_2448_);
v___x_2457_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2459_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 0, v___x_2457_);
v___x_2459_ = v___x_2425_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
lean_dec_ref(v_opts_937_);
v_a_2465_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2465_);
lean_dec_ref_known(v___x_2422_, 1);
v___x_2469_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2470_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2469_);
lean_dec_ref(v___x_2470_);
goto v___jp_2466_;
v___jp_2466_:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = lean_io_error_to_string(v_a_2465_);
v___x_2468_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2467_);
lean_dec_ref(v___x_2468_);
goto v___jp_1138_;
}
}
}
}
else
{
lean_object* v_leanOpts_2471_; lean_object* v_forwardedArgs_2472_; uint8_t v_component_2473_; uint8_t v_printPrefix_2474_; uint8_t v_printLibDir_2475_; uint8_t v_useStdin_2476_; uint8_t v_onlyDeps_2477_; uint8_t v_onlySrcDeps_2478_; uint8_t v_depsJson_2479_; lean_object* v_opts_2480_; uint32_t v_trustLevel_2481_; uint32_t v_numThreads_2482_; lean_object* v_rootDir_x3f_2483_; lean_object* v_setupFileName_x3f_2484_; lean_object* v_oleanFileName_x3f_2485_; lean_object* v_usageFileName_x3f_2486_; lean_object* v_ileanFileName_x3f_2487_; lean_object* v_cFileName_x3f_2488_; lean_object* v_bcFileName_x3f_2489_; uint8_t v_jsonOutput_2490_; lean_object* v_errorOnKinds_2491_; uint8_t v_printStats_2492_; lean_object* v_incrSaveFileName_x3f_2493_; lean_object* v_incrLoadFileName_x3f_2494_; lean_object* v_incrHeaderSaveFileName_x3f_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2505_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_2471_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2472_ = lean_ctor_get(v_opts_937_, 1);
v_component_2473_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2474_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2475_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2476_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2477_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2478_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2479_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2480_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2481_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2482_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2483_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2484_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2485_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2486_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2487_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2488_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2489_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2490_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2491_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2492_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_incrSaveFileName_x3f_2493_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2494_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2495_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2505_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2497_ = v_opts_937_;
v_isShared_2498_ = v_isSharedCheck_2505_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2495_);
lean_inc(v_incrLoadFileName_x3f_2494_);
lean_inc(v_incrSaveFileName_x3f_2493_);
lean_inc(v_errorOnKinds_2491_);
lean_inc(v_bcFileName_x3f_2489_);
lean_inc(v_cFileName_x3f_2488_);
lean_inc(v_ileanFileName_x3f_2487_);
lean_inc(v_usageFileName_x3f_2486_);
lean_inc(v_oleanFileName_x3f_2485_);
lean_inc(v_setupFileName_x3f_2484_);
lean_inc(v_rootDir_x3f_2483_);
lean_inc(v_opts_2480_);
lean_inc(v_forwardedArgs_2472_);
lean_inc(v_leanOpts_2471_);
lean_dec(v_opts_937_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2505_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2502_; 
v___x_2499_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_2500_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2471_, v___x_2499_, v___x_1186_);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 0, v___x_2500_);
v___x_2502_ = v___x_2497_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v___x_2500_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v_forwardedArgs_2472_);
lean_ctor_set(v_reuseFailAlloc_2504_, 2, v_opts_2480_);
lean_ctor_set(v_reuseFailAlloc_2504_, 3, v_rootDir_x3f_2483_);
lean_ctor_set(v_reuseFailAlloc_2504_, 4, v_setupFileName_x3f_2484_);
lean_ctor_set(v_reuseFailAlloc_2504_, 5, v_oleanFileName_x3f_2485_);
lean_ctor_set(v_reuseFailAlloc_2504_, 6, v_usageFileName_x3f_2486_);
lean_ctor_set(v_reuseFailAlloc_2504_, 7, v_ileanFileName_x3f_2487_);
lean_ctor_set(v_reuseFailAlloc_2504_, 8, v_cFileName_x3f_2488_);
lean_ctor_set(v_reuseFailAlloc_2504_, 9, v_bcFileName_x3f_2489_);
lean_ctor_set(v_reuseFailAlloc_2504_, 10, v_errorOnKinds_2491_);
lean_ctor_set(v_reuseFailAlloc_2504_, 11, v_incrSaveFileName_x3f_2493_);
lean_ctor_set(v_reuseFailAlloc_2504_, 12, v_incrLoadFileName_x3f_2494_);
lean_ctor_set(v_reuseFailAlloc_2504_, 13, v_incrHeaderSaveFileName_x3f_2495_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 8, v_component_2473_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 9, v_printPrefix_2474_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 10, v_printLibDir_2475_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 11, v_useStdin_2476_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 12, v_onlyDeps_2477_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 13, v_onlySrcDeps_2478_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 14, v_depsJson_2479_);
lean_ctor_set_uint32(v_reuseFailAlloc_2504_, sizeof(void*)*14, v_trustLevel_2481_);
lean_ctor_set_uint32(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 4, v_numThreads_2482_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 15, v_jsonOutput_2490_);
lean_ctor_set_uint8(v_reuseFailAlloc_2504_, sizeof(void*)*14 + 16, v_printStats_2492_);
v___x_2502_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
lean_object* v___x_2503_; 
lean_ctor_set_uint8(v___x_2502_, sizeof(void*)*14 + 17, v___x_1188_);
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
return v___x_2503_;
}
}
}
}
else
{
lean_object* v_leanOpts_2506_; lean_object* v_forwardedArgs_2507_; uint8_t v_component_2508_; uint8_t v_printPrefix_2509_; uint8_t v_printLibDir_2510_; uint8_t v_onlyDeps_2511_; uint8_t v_onlySrcDeps_2512_; uint8_t v_depsJson_2513_; lean_object* v_opts_2514_; uint32_t v_trustLevel_2515_; uint32_t v_numThreads_2516_; lean_object* v_rootDir_x3f_2517_; lean_object* v_setupFileName_x3f_2518_; lean_object* v_oleanFileName_x3f_2519_; lean_object* v_usageFileName_x3f_2520_; lean_object* v_ileanFileName_x3f_2521_; lean_object* v_cFileName_x3f_2522_; lean_object* v_bcFileName_x3f_2523_; uint8_t v_jsonOutput_2524_; lean_object* v_errorOnKinds_2525_; uint8_t v_printStats_2526_; uint8_t v_run_2527_; lean_object* v_incrSaveFileName_x3f_2528_; lean_object* v_incrLoadFileName_x3f_2529_; lean_object* v_incrHeaderSaveFileName_x3f_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2538_; 
lean_dec(v_optArg_x3f_939_);
v_leanOpts_2506_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2507_ = lean_ctor_get(v_opts_937_, 1);
v_component_2508_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2509_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2510_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_onlyDeps_2511_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2512_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2513_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2514_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2515_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2516_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2517_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2518_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2519_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2520_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2521_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2522_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2523_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2524_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2525_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2526_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2527_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2528_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2529_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2530_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2538_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2532_ = v_opts_937_;
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2530_);
lean_inc(v_incrLoadFileName_x3f_2529_);
lean_inc(v_incrSaveFileName_x3f_2528_);
lean_inc(v_errorOnKinds_2525_);
lean_inc(v_bcFileName_x3f_2523_);
lean_inc(v_cFileName_x3f_2522_);
lean_inc(v_ileanFileName_x3f_2521_);
lean_inc(v_usageFileName_x3f_2520_);
lean_inc(v_oleanFileName_x3f_2519_);
lean_inc(v_setupFileName_x3f_2518_);
lean_inc(v_rootDir_x3f_2517_);
lean_inc(v_opts_2514_);
lean_inc(v_forwardedArgs_2507_);
lean_inc(v_leanOpts_2506_);
lean_dec(v_opts_937_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_leanOpts_2506_);
lean_ctor_set(v_reuseFailAlloc_2537_, 1, v_forwardedArgs_2507_);
lean_ctor_set(v_reuseFailAlloc_2537_, 2, v_opts_2514_);
lean_ctor_set(v_reuseFailAlloc_2537_, 3, v_rootDir_x3f_2517_);
lean_ctor_set(v_reuseFailAlloc_2537_, 4, v_setupFileName_x3f_2518_);
lean_ctor_set(v_reuseFailAlloc_2537_, 5, v_oleanFileName_x3f_2519_);
lean_ctor_set(v_reuseFailAlloc_2537_, 6, v_usageFileName_x3f_2520_);
lean_ctor_set(v_reuseFailAlloc_2537_, 7, v_ileanFileName_x3f_2521_);
lean_ctor_set(v_reuseFailAlloc_2537_, 8, v_cFileName_x3f_2522_);
lean_ctor_set(v_reuseFailAlloc_2537_, 9, v_bcFileName_x3f_2523_);
lean_ctor_set(v_reuseFailAlloc_2537_, 10, v_errorOnKinds_2525_);
lean_ctor_set(v_reuseFailAlloc_2537_, 11, v_incrSaveFileName_x3f_2528_);
lean_ctor_set(v_reuseFailAlloc_2537_, 12, v_incrLoadFileName_x3f_2529_);
lean_ctor_set(v_reuseFailAlloc_2537_, 13, v_incrHeaderSaveFileName_x3f_2530_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 8, v_component_2508_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 9, v_printPrefix_2509_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 10, v_printLibDir_2510_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 12, v_onlyDeps_2511_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 13, v_onlySrcDeps_2512_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 14, v_depsJson_2513_);
lean_ctor_set_uint32(v_reuseFailAlloc_2537_, sizeof(void*)*14, v_trustLevel_2515_);
lean_ctor_set_uint32(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 4, v_numThreads_2516_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 15, v_jsonOutput_2524_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 16, v_printStats_2526_);
lean_ctor_set_uint8(v_reuseFailAlloc_2537_, sizeof(void*)*14 + 17, v_run_2527_);
v___x_2535_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
lean_object* v___x_2536_; 
lean_ctor_set_uint8(v___x_2535_, sizeof(void*)*14 + 11, v___x_1186_);
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
return v___x_2536_;
}
}
}
}
else
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28));
v___x_2540_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2539_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2603_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2543_ = v___x_2540_;
v_isShared_2544_ = v_isSharedCheck_2603_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2540_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2603_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2545_ = lean_unsigned_to_nat(0u);
v___x_2546_ = lean_string_utf8_byte_size(v_a_2541_);
lean_inc(v_a_2541_);
v___x_2547_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2547_, 0, v_a_2541_);
lean_ctor_set(v___x_2547_, 1, v___x_2545_);
lean_ctor_set(v___x_2547_, 2, v___x_2546_);
v___x_2548_ = l_String_Slice_toNat_x3f(v___x_2547_);
lean_dec_ref_known(v___x_2547_, 3);
if (lean_obj_tag(v___x_2548_) == 1)
{
lean_object* v_val_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; uint8_t v___x_2557_; 
v_val_2549_ = lean_ctor_get(v___x_2548_, 0);
lean_inc(v_val_2549_);
lean_dec_ref_known(v___x_2548_, 1);
v___x_2550_ = lean_unsigned_to_nat(4u);
v___x_2551_ = lean_unsigned_to_nat(2u);
v___x_2552_ = lean_nat_shiftr(v_val_2549_, v___x_2551_);
lean_dec(v_val_2549_);
v___x_2553_ = lean_nat_mul(v___x_2552_, v___x_2550_);
lean_dec(v___x_2552_);
v___x_2554_ = lean_unsigned_to_nat(1024u);
v___x_2555_ = lean_nat_mul(v___x_2553_, v___x_2554_);
lean_dec(v___x_2553_);
v___x_2556_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29, &l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_once, _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29);
v___x_2557_ = lean_nat_dec_lt(v___x_2555_, v___x_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
lean_dec(v___x_2555_);
lean_del_object(v___x_2543_);
lean_dec(v_a_2541_);
lean_dec_ref(v_opts_937_);
v___x_2558_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30));
v___x_2559_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2558_);
lean_dec_ref(v___x_2559_);
goto v___jp_977_;
}
else
{
size_t v___x_2560_; lean_object* v___x_2561_; lean_object* v_leanOpts_2562_; lean_object* v_forwardedArgs_2563_; uint8_t v_component_2564_; uint8_t v_printPrefix_2565_; uint8_t v_printLibDir_2566_; uint8_t v_useStdin_2567_; uint8_t v_onlyDeps_2568_; uint8_t v_onlySrcDeps_2569_; uint8_t v_depsJson_2570_; lean_object* v_opts_2571_; uint32_t v_trustLevel_2572_; uint32_t v_numThreads_2573_; lean_object* v_rootDir_x3f_2574_; lean_object* v_setupFileName_x3f_2575_; lean_object* v_oleanFileName_x3f_2576_; lean_object* v_usageFileName_x3f_2577_; lean_object* v_ileanFileName_x3f_2578_; lean_object* v_cFileName_x3f_2579_; lean_object* v_bcFileName_x3f_2580_; uint8_t v_jsonOutput_2581_; lean_object* v_errorOnKinds_2582_; uint8_t v_printStats_2583_; uint8_t v_run_2584_; lean_object* v_incrSaveFileName_x3f_2585_; lean_object* v_incrLoadFileName_x3f_2586_; lean_object* v_incrHeaderSaveFileName_x3f_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2600_; 
v___x_2560_ = lean_usize_of_nat(v___x_2555_);
lean_dec(v___x_2555_);
v___x_2561_ = lean_internal_set_thread_stack_size(v___x_2560_);
v_leanOpts_2562_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2563_ = lean_ctor_get(v_opts_937_, 1);
v_component_2564_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2565_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2566_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2567_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2568_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2569_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2570_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2571_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2572_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2573_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2574_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2575_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2576_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2577_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2578_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2579_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2580_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2581_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2582_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2583_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2584_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2585_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2586_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2587_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2600_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2589_ = v_opts_937_;
v_isShared_2590_ = v_isSharedCheck_2600_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2587_);
lean_inc(v_incrLoadFileName_x3f_2586_);
lean_inc(v_incrSaveFileName_x3f_2585_);
lean_inc(v_errorOnKinds_2582_);
lean_inc(v_bcFileName_x3f_2580_);
lean_inc(v_cFileName_x3f_2579_);
lean_inc(v_ileanFileName_x3f_2578_);
lean_inc(v_usageFileName_x3f_2577_);
lean_inc(v_oleanFileName_x3f_2576_);
lean_inc(v_setupFileName_x3f_2575_);
lean_inc(v_rootDir_x3f_2574_);
lean_inc(v_opts_2571_);
lean_inc(v_forwardedArgs_2563_);
lean_inc(v_leanOpts_2562_);
lean_dec(v_opts_937_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2600_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2595_; 
v___x_2591_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31));
v___x_2592_ = lean_string_append(v___x_2591_, v_a_2541_);
lean_dec(v_a_2541_);
v___x_2593_ = lean_array_push(v_forwardedArgs_2563_, v___x_2592_);
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 1, v___x_2593_);
v___x_2595_ = v___x_2589_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_leanOpts_2562_);
lean_ctor_set(v_reuseFailAlloc_2599_, 1, v___x_2593_);
lean_ctor_set(v_reuseFailAlloc_2599_, 2, v_opts_2571_);
lean_ctor_set(v_reuseFailAlloc_2599_, 3, v_rootDir_x3f_2574_);
lean_ctor_set(v_reuseFailAlloc_2599_, 4, v_setupFileName_x3f_2575_);
lean_ctor_set(v_reuseFailAlloc_2599_, 5, v_oleanFileName_x3f_2576_);
lean_ctor_set(v_reuseFailAlloc_2599_, 6, v_usageFileName_x3f_2577_);
lean_ctor_set(v_reuseFailAlloc_2599_, 7, v_ileanFileName_x3f_2578_);
lean_ctor_set(v_reuseFailAlloc_2599_, 8, v_cFileName_x3f_2579_);
lean_ctor_set(v_reuseFailAlloc_2599_, 9, v_bcFileName_x3f_2580_);
lean_ctor_set(v_reuseFailAlloc_2599_, 10, v_errorOnKinds_2582_);
lean_ctor_set(v_reuseFailAlloc_2599_, 11, v_incrSaveFileName_x3f_2585_);
lean_ctor_set(v_reuseFailAlloc_2599_, 12, v_incrLoadFileName_x3f_2586_);
lean_ctor_set(v_reuseFailAlloc_2599_, 13, v_incrHeaderSaveFileName_x3f_2587_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 8, v_component_2564_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 9, v_printPrefix_2565_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 10, v_printLibDir_2566_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 11, v_useStdin_2567_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 12, v_onlyDeps_2568_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 13, v_onlySrcDeps_2569_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 14, v_depsJson_2570_);
lean_ctor_set_uint32(v_reuseFailAlloc_2599_, sizeof(void*)*14, v_trustLevel_2572_);
lean_ctor_set_uint32(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 4, v_numThreads_2573_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 15, v_jsonOutput_2581_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 16, v_printStats_2583_);
lean_ctor_set_uint8(v_reuseFailAlloc_2599_, sizeof(void*)*14 + 17, v_run_2584_);
v___x_2595_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2597_; 
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 0, v___x_2595_);
v___x_2597_ = v___x_2543_;
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
}
}
else
{
lean_object* v___x_2601_; lean_object* v___x_2602_; 
lean_dec(v___x_2548_);
lean_del_object(v___x_2543_);
lean_dec(v_a_2541_);
lean_dec_ref(v_opts_937_);
v___x_2601_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32));
v___x_2602_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2601_);
lean_dec_ref(v___x_2602_);
goto v___jp_980_;
}
}
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
lean_dec_ref(v_opts_937_);
v_a_2604_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v___x_2540_, 1);
v___x_2608_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2609_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2608_);
lean_dec_ref(v___x_2609_);
goto v___jp_2605_;
v___jp_2605_:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = lean_io_error_to_string(v_a_2604_);
v___x_2607_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2606_);
lean_dec_ref(v___x_2607_);
goto v___jp_974_;
}
}
}
}
else
{
lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2610_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33));
v___x_2611_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2610_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2653_; 
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2614_ = v___x_2611_;
v_isShared_2615_ = v_isSharedCheck_2653_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2611_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2653_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v_leanOpts_2616_; lean_object* v_forwardedArgs_2617_; uint8_t v_component_2618_; uint8_t v_printPrefix_2619_; uint8_t v_printLibDir_2620_; uint8_t v_useStdin_2621_; uint8_t v_onlyDeps_2622_; uint8_t v_onlySrcDeps_2623_; uint8_t v_depsJson_2624_; lean_object* v_opts_2625_; uint32_t v_trustLevel_2626_; uint32_t v_numThreads_2627_; lean_object* v_rootDir_x3f_2628_; lean_object* v_setupFileName_x3f_2629_; lean_object* v_oleanFileName_x3f_2630_; lean_object* v_usageFileName_x3f_2631_; lean_object* v_ileanFileName_x3f_2632_; lean_object* v_cFileName_x3f_2633_; uint8_t v_jsonOutput_2634_; lean_object* v_errorOnKinds_2635_; uint8_t v_printStats_2636_; uint8_t v_run_2637_; lean_object* v_incrSaveFileName_x3f_2638_; lean_object* v_incrLoadFileName_x3f_2639_; lean_object* v_incrHeaderSaveFileName_x3f_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2651_; 
v_leanOpts_2616_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2617_ = lean_ctor_get(v_opts_937_, 1);
v_component_2618_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2619_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2620_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2621_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2622_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2623_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2624_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2625_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2626_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2627_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2628_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2629_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2630_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2631_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2632_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2633_ = lean_ctor_get(v_opts_937_, 8);
v_jsonOutput_2634_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2635_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2636_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2637_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2638_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2639_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2640_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2651_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2651_ == 0)
{
lean_object* v_unused_2652_; 
v_unused_2652_ = lean_ctor_get(v_opts_937_, 9);
lean_dec(v_unused_2652_);
v___x_2642_ = v_opts_937_;
v_isShared_2643_ = v_isSharedCheck_2651_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2640_);
lean_inc(v_incrLoadFileName_x3f_2639_);
lean_inc(v_incrSaveFileName_x3f_2638_);
lean_inc(v_errorOnKinds_2635_);
lean_inc(v_cFileName_x3f_2633_);
lean_inc(v_ileanFileName_x3f_2632_);
lean_inc(v_usageFileName_x3f_2631_);
lean_inc(v_oleanFileName_x3f_2630_);
lean_inc(v_setupFileName_x3f_2629_);
lean_inc(v_rootDir_x3f_2628_);
lean_inc(v_opts_2625_);
lean_inc(v_forwardedArgs_2617_);
lean_inc(v_leanOpts_2616_);
lean_dec(v_opts_937_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2651_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2644_; lean_object* v___x_2646_; 
v___x_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_a_2612_);
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 9, v___x_2644_);
v___x_2646_ = v___x_2642_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_leanOpts_2616_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_forwardedArgs_2617_);
lean_ctor_set(v_reuseFailAlloc_2650_, 2, v_opts_2625_);
lean_ctor_set(v_reuseFailAlloc_2650_, 3, v_rootDir_x3f_2628_);
lean_ctor_set(v_reuseFailAlloc_2650_, 4, v_setupFileName_x3f_2629_);
lean_ctor_set(v_reuseFailAlloc_2650_, 5, v_oleanFileName_x3f_2630_);
lean_ctor_set(v_reuseFailAlloc_2650_, 6, v_usageFileName_x3f_2631_);
lean_ctor_set(v_reuseFailAlloc_2650_, 7, v_ileanFileName_x3f_2632_);
lean_ctor_set(v_reuseFailAlloc_2650_, 8, v_cFileName_x3f_2633_);
lean_ctor_set(v_reuseFailAlloc_2650_, 9, v___x_2644_);
lean_ctor_set(v_reuseFailAlloc_2650_, 10, v_errorOnKinds_2635_);
lean_ctor_set(v_reuseFailAlloc_2650_, 11, v_incrSaveFileName_x3f_2638_);
lean_ctor_set(v_reuseFailAlloc_2650_, 12, v_incrLoadFileName_x3f_2639_);
lean_ctor_set(v_reuseFailAlloc_2650_, 13, v_incrHeaderSaveFileName_x3f_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 8, v_component_2618_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 9, v_printPrefix_2619_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 10, v_printLibDir_2620_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 11, v_useStdin_2621_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 12, v_onlyDeps_2622_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 13, v_onlySrcDeps_2623_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 14, v_depsJson_2624_);
lean_ctor_set_uint32(v_reuseFailAlloc_2650_, sizeof(void*)*14, v_trustLevel_2626_);
lean_ctor_set_uint32(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 4, v_numThreads_2627_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 15, v_jsonOutput_2634_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 16, v_printStats_2636_);
lean_ctor_set_uint8(v_reuseFailAlloc_2650_, sizeof(void*)*14 + 17, v_run_2637_);
v___x_2646_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
lean_object* v___x_2648_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 0, v___x_2646_);
v___x_2648_ = v___x_2614_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
lean_dec_ref(v_opts_937_);
v_a_2654_ = lean_ctor_get(v___x_2611_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v___x_2611_, 1);
v___x_2658_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2659_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2658_);
lean_dec_ref(v___x_2659_);
goto v___jp_2655_;
v___jp_2655_:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2656_ = lean_io_error_to_string(v_a_2654_);
v___x_2657_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2656_);
lean_dec_ref(v___x_2657_);
goto v___jp_1144_;
}
}
}
}
else
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2660_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34));
v___x_2661_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2660_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2703_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2664_ = v___x_2661_;
v_isShared_2665_ = v_isSharedCheck_2703_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2661_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2703_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v_leanOpts_2666_; lean_object* v_forwardedArgs_2667_; uint8_t v_component_2668_; uint8_t v_printPrefix_2669_; uint8_t v_printLibDir_2670_; uint8_t v_useStdin_2671_; uint8_t v_onlyDeps_2672_; uint8_t v_onlySrcDeps_2673_; uint8_t v_depsJson_2674_; lean_object* v_opts_2675_; uint32_t v_trustLevel_2676_; uint32_t v_numThreads_2677_; lean_object* v_rootDir_x3f_2678_; lean_object* v_setupFileName_x3f_2679_; lean_object* v_oleanFileName_x3f_2680_; lean_object* v_usageFileName_x3f_2681_; lean_object* v_ileanFileName_x3f_2682_; lean_object* v_bcFileName_x3f_2683_; uint8_t v_jsonOutput_2684_; lean_object* v_errorOnKinds_2685_; uint8_t v_printStats_2686_; uint8_t v_run_2687_; lean_object* v_incrSaveFileName_x3f_2688_; lean_object* v_incrLoadFileName_x3f_2689_; lean_object* v_incrHeaderSaveFileName_x3f_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2701_; 
v_leanOpts_2666_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2667_ = lean_ctor_get(v_opts_937_, 1);
v_component_2668_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2669_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2670_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2671_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2672_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2673_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2674_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2675_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2676_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_numThreads_2677_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2678_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2679_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2680_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2681_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2682_ = lean_ctor_get(v_opts_937_, 7);
v_bcFileName_x3f_2683_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2684_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2685_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2686_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2687_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2688_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2689_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2690_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2701_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2701_ == 0)
{
lean_object* v_unused_2702_; 
v_unused_2702_ = lean_ctor_get(v_opts_937_, 8);
lean_dec(v_unused_2702_);
v___x_2692_ = v_opts_937_;
v_isShared_2693_ = v_isSharedCheck_2701_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2690_);
lean_inc(v_incrLoadFileName_x3f_2689_);
lean_inc(v_incrSaveFileName_x3f_2688_);
lean_inc(v_errorOnKinds_2685_);
lean_inc(v_bcFileName_x3f_2683_);
lean_inc(v_ileanFileName_x3f_2682_);
lean_inc(v_usageFileName_x3f_2681_);
lean_inc(v_oleanFileName_x3f_2680_);
lean_inc(v_setupFileName_x3f_2679_);
lean_inc(v_rootDir_x3f_2678_);
lean_inc(v_opts_2675_);
lean_inc(v_forwardedArgs_2667_);
lean_inc(v_leanOpts_2666_);
lean_dec(v_opts_937_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2701_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2694_; lean_object* v___x_2696_; 
v___x_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2694_, 0, v_a_2662_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 8, v___x_2694_);
v___x_2696_ = v___x_2692_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_leanOpts_2666_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_forwardedArgs_2667_);
lean_ctor_set(v_reuseFailAlloc_2700_, 2, v_opts_2675_);
lean_ctor_set(v_reuseFailAlloc_2700_, 3, v_rootDir_x3f_2678_);
lean_ctor_set(v_reuseFailAlloc_2700_, 4, v_setupFileName_x3f_2679_);
lean_ctor_set(v_reuseFailAlloc_2700_, 5, v_oleanFileName_x3f_2680_);
lean_ctor_set(v_reuseFailAlloc_2700_, 6, v_usageFileName_x3f_2681_);
lean_ctor_set(v_reuseFailAlloc_2700_, 7, v_ileanFileName_x3f_2682_);
lean_ctor_set(v_reuseFailAlloc_2700_, 8, v___x_2694_);
lean_ctor_set(v_reuseFailAlloc_2700_, 9, v_bcFileName_x3f_2683_);
lean_ctor_set(v_reuseFailAlloc_2700_, 10, v_errorOnKinds_2685_);
lean_ctor_set(v_reuseFailAlloc_2700_, 11, v_incrSaveFileName_x3f_2688_);
lean_ctor_set(v_reuseFailAlloc_2700_, 12, v_incrLoadFileName_x3f_2689_);
lean_ctor_set(v_reuseFailAlloc_2700_, 13, v_incrHeaderSaveFileName_x3f_2690_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 8, v_component_2668_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 9, v_printPrefix_2669_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 10, v_printLibDir_2670_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 11, v_useStdin_2671_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 12, v_onlyDeps_2672_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 13, v_onlySrcDeps_2673_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 14, v_depsJson_2674_);
lean_ctor_set_uint32(v_reuseFailAlloc_2700_, sizeof(void*)*14, v_trustLevel_2676_);
lean_ctor_set_uint32(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 4, v_numThreads_2677_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 15, v_jsonOutput_2684_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 16, v_printStats_2686_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*14 + 17, v_run_2687_);
v___x_2696_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
lean_object* v___x_2698_; 
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 0, v___x_2696_);
v___x_2698_ = v___x_2664_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2696_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
}
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
lean_dec_ref(v_opts_937_);
v_a_2704_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2661_, 1);
v___x_2708_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2709_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2708_);
lean_dec_ref(v___x_2709_);
goto v___jp_2705_;
v___jp_2705_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = lean_io_error_to_string(v_a_2704_);
v___x_2707_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2706_);
lean_dec_ref(v___x_2707_);
goto v___jp_968_;
}
}
}
}
else
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
lean_dec(v_optArg_x3f_939_);
lean_dec_ref(v_opts_937_);
v___x_2710_ = l___private_Lean_Shell_0__Lean_featuresString;
v___x_2711_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2710_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2719_; 
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2719_ == 0)
{
lean_object* v_unused_2720_; 
v_unused_2720_ = lean_ctor_get(v___x_2711_, 0);
lean_dec(v_unused_2720_);
v___x_2713_ = v___x_2711_;
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
else
{
lean_dec(v___x_2711_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2715_; lean_object* v___x_2717_; 
v___x_2715_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2714_ == 0)
{
lean_ctor_set_tag(v___x_2713_, 1);
lean_ctor_set(v___x_2713_, 0, v___x_2715_);
v___x_2717_ = v___x_2713_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
else
{
lean_object* v_a_2721_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v_a_2721_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2721_);
lean_dec_ref_known(v___x_2711_, 1);
v___x_2725_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2726_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2725_);
lean_dec_ref(v___x_2726_);
goto v___jp_2722_;
v___jp_2722_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_io_error_to_string(v_a_2721_);
v___x_2724_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2723_);
lean_dec_ref(v___x_2724_);
goto v___jp_1150_;
}
}
}
}
else
{
lean_object* v___x_2727_; 
lean_dec(v_optArg_x3f_939_);
lean_dec_ref(v_opts_937_);
v___x_2727_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1174_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2735_; 
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2735_ == 0)
{
lean_object* v_unused_2736_; 
v_unused_2736_ = lean_ctor_get(v___x_2727_, 0);
lean_dec(v_unused_2736_);
v___x_2729_ = v___x_2727_;
v_isShared_2730_ = v_isSharedCheck_2735_;
goto v_resetjp_2728_;
}
else
{
lean_dec(v___x_2727_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2735_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2731_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2730_ == 0)
{
lean_ctor_set_tag(v___x_2729_, 1);
lean_ctor_set(v___x_2729_, 0, v___x_2731_);
v___x_2733_ = v___x_2729_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2731_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v_a_2737_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2737_);
lean_dec_ref_known(v___x_2727_, 1);
v___x_2741_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2742_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2741_);
lean_dec_ref(v___x_2742_);
goto v___jp_2738_;
v___jp_2738_:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = lean_io_error_to_string(v_a_2737_);
v___x_2740_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2739_);
lean_dec_ref(v___x_2740_);
goto v___jp_962_;
}
}
}
}
else
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
lean_dec(v_optArg_x3f_939_);
lean_dec_ref(v_opts_937_);
v___x_2743_ = l_Lean_githash;
v___x_2744_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2743_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2752_; 
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2752_ == 0)
{
lean_object* v_unused_2753_; 
v_unused_2753_ = lean_ctor_get(v___x_2744_, 0);
lean_dec(v_unused_2753_);
v___x_2746_ = v___x_2744_;
v_isShared_2747_ = v_isSharedCheck_2752_;
goto v_resetjp_2745_;
}
else
{
lean_dec(v___x_2744_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2752_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2748_; lean_object* v___x_2750_; 
v___x_2748_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2747_ == 0)
{
lean_ctor_set_tag(v___x_2746_, 1);
lean_ctor_set(v___x_2746_, 0, v___x_2748_);
v___x_2750_ = v___x_2746_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v___x_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v_a_2754_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2744_, 1);
v___x_2758_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2759_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2758_);
lean_dec_ref(v___x_2759_);
goto v___jp_2755_;
v___jp_2755_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = lean_io_error_to_string(v_a_2754_);
v___x_2757_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2756_);
lean_dec_ref(v___x_2757_);
goto v___jp_1156_;
}
}
}
}
else
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
lean_dec(v_optArg_x3f_939_);
lean_dec_ref(v_opts_937_);
v___x_2760_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_2761_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2760_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2769_; 
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2761_);
if (v_isSharedCheck_2769_ == 0)
{
lean_object* v_unused_2770_; 
v_unused_2770_ = lean_ctor_get(v___x_2761_, 0);
lean_dec(v_unused_2770_);
v___x_2763_ = v___x_2761_;
v_isShared_2764_ = v_isSharedCheck_2769_;
goto v_resetjp_2762_;
}
else
{
lean_dec(v___x_2761_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2769_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2765_; lean_object* v___x_2767_; 
v___x_2765_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2764_ == 0)
{
lean_ctor_set_tag(v___x_2763_, 1);
lean_ctor_set(v___x_2763_, 0, v___x_2765_);
v___x_2767_ = v___x_2763_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v___x_2765_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v_a_2771_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2771_);
lean_dec_ref_known(v___x_2761_, 1);
v___x_2775_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2776_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2775_);
lean_dec_ref(v___x_2776_);
goto v___jp_2772_;
v___jp_2772_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = lean_io_error_to_string(v_a_2771_);
v___x_2774_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2773_);
lean_dec_ref(v___x_2774_);
goto v___jp_956_;
}
}
}
}
else
{
lean_object* v___x_2777_; lean_object* v___x_2778_; 
lean_dec(v_optArg_x3f_939_);
lean_dec_ref(v_opts_937_);
v___x_2777_ = l___private_Lean_Shell_0__Lean_versionHeader;
v___x_2778_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2777_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2786_; 
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2786_ == 0)
{
lean_object* v_unused_2787_; 
v_unused_2787_ = lean_ctor_get(v___x_2778_, 0);
lean_dec(v_unused_2787_);
v___x_2780_ = v___x_2778_;
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
else
{
lean_dec(v___x_2778_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2782_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2781_ == 0)
{
lean_ctor_set_tag(v___x_2780_, 1);
lean_ctor_set(v___x_2780_, 0, v___x_2782_);
v___x_2784_ = v___x_2780_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v_a_2788_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v___x_2778_, 1);
v___x_2792_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2793_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2792_);
lean_dec_ref(v___x_2793_);
goto v___jp_2789_;
v___jp_2789_:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2790_ = lean_io_error_to_string(v_a_2788_);
v___x_2791_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2790_);
lean_dec_ref(v___x_2791_);
goto v___jp_1162_;
}
}
}
}
else
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2794_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35));
v___x_2795_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2794_, v_optArg_x3f_939_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2850_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2850_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2850_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2800_ = lean_unsigned_to_nat(0u);
v___x_2801_ = lean_string_utf8_byte_size(v_a_2796_);
lean_inc(v_a_2796_);
v___x_2802_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2802_, 0, v_a_2796_);
lean_ctor_set(v___x_2802_, 1, v___x_2800_);
lean_ctor_set(v___x_2802_, 2, v___x_2801_);
v___x_2803_ = l_String_Slice_toNat_x3f(v___x_2802_);
lean_dec_ref_known(v___x_2802_, 3);
if (lean_obj_tag(v___x_2803_) == 1)
{
lean_object* v_val_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v_val_2804_ = lean_ctor_get(v___x_2803_, 0);
lean_inc(v_val_2804_);
lean_dec_ref_known(v___x_2803_, 1);
v___x_2805_ = lean_cstr_to_nat("4294967296");
v___x_2806_ = lean_nat_dec_lt(v_val_2804_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
lean_dec(v_val_2804_);
lean_del_object(v___x_2798_);
lean_dec(v_a_2796_);
lean_dec_ref(v_opts_937_);
v___x_2807_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36));
v___x_2808_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2807_);
lean_dec_ref(v___x_2808_);
goto v___jp_947_;
}
else
{
lean_object* v_leanOpts_2809_; lean_object* v_forwardedArgs_2810_; uint8_t v_component_2811_; uint8_t v_printPrefix_2812_; uint8_t v_printLibDir_2813_; uint8_t v_useStdin_2814_; uint8_t v_onlyDeps_2815_; uint8_t v_onlySrcDeps_2816_; uint8_t v_depsJson_2817_; lean_object* v_opts_2818_; uint32_t v_trustLevel_2819_; lean_object* v_rootDir_x3f_2820_; lean_object* v_setupFileName_x3f_2821_; lean_object* v_oleanFileName_x3f_2822_; lean_object* v_usageFileName_x3f_2823_; lean_object* v_ileanFileName_x3f_2824_; lean_object* v_cFileName_x3f_2825_; lean_object* v_bcFileName_x3f_2826_; uint8_t v_jsonOutput_2827_; lean_object* v_errorOnKinds_2828_; uint8_t v_printStats_2829_; uint8_t v_run_2830_; lean_object* v_incrSaveFileName_x3f_2831_; lean_object* v_incrLoadFileName_x3f_2832_; lean_object* v_incrHeaderSaveFileName_x3f_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2847_; 
v_leanOpts_2809_ = lean_ctor_get(v_opts_937_, 0);
v_forwardedArgs_2810_ = lean_ctor_get(v_opts_937_, 1);
v_component_2811_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 8);
v_printPrefix_2812_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 9);
v_printLibDir_2813_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 10);
v_useStdin_2814_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 11);
v_onlyDeps_2815_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2816_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 13);
v_depsJson_2817_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 14);
v_opts_2818_ = lean_ctor_get(v_opts_937_, 2);
v_trustLevel_2819_ = lean_ctor_get_uint32(v_opts_937_, sizeof(void*)*14);
v_rootDir_x3f_2820_ = lean_ctor_get(v_opts_937_, 3);
v_setupFileName_x3f_2821_ = lean_ctor_get(v_opts_937_, 4);
v_oleanFileName_x3f_2822_ = lean_ctor_get(v_opts_937_, 5);
v_usageFileName_x3f_2823_ = lean_ctor_get(v_opts_937_, 6);
v_ileanFileName_x3f_2824_ = lean_ctor_get(v_opts_937_, 7);
v_cFileName_x3f_2825_ = lean_ctor_get(v_opts_937_, 8);
v_bcFileName_x3f_2826_ = lean_ctor_get(v_opts_937_, 9);
v_jsonOutput_2827_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 15);
v_errorOnKinds_2828_ = lean_ctor_get(v_opts_937_, 10);
v_printStats_2829_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 16);
v_run_2830_ = lean_ctor_get_uint8(v_opts_937_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2831_ = lean_ctor_get(v_opts_937_, 11);
v_incrLoadFileName_x3f_2832_ = lean_ctor_get(v_opts_937_, 12);
v_incrHeaderSaveFileName_x3f_2833_ = lean_ctor_get(v_opts_937_, 13);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_opts_937_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2835_ = v_opts_937_;
v_isShared_2836_ = v_isSharedCheck_2847_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2833_);
lean_inc(v_incrLoadFileName_x3f_2832_);
lean_inc(v_incrSaveFileName_x3f_2831_);
lean_inc(v_errorOnKinds_2828_);
lean_inc(v_bcFileName_x3f_2826_);
lean_inc(v_cFileName_x3f_2825_);
lean_inc(v_ileanFileName_x3f_2824_);
lean_inc(v_usageFileName_x3f_2823_);
lean_inc(v_oleanFileName_x3f_2822_);
lean_inc(v_setupFileName_x3f_2821_);
lean_inc(v_rootDir_x3f_2820_);
lean_inc(v_opts_2818_);
lean_inc(v_forwardedArgs_2810_);
lean_inc(v_leanOpts_2809_);
lean_dec(v_opts_937_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2847_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
uint32_t v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
v___x_2837_ = lean_uint32_of_nat(v_val_2804_);
lean_dec(v_val_2804_);
v___x_2838_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37));
v___x_2839_ = lean_string_append(v___x_2838_, v_a_2796_);
lean_dec(v_a_2796_);
v___x_2840_ = lean_array_push(v_forwardedArgs_2810_, v___x_2839_);
if (v_isShared_2836_ == 0)
{
lean_ctor_set(v___x_2835_, 1, v___x_2840_);
v___x_2842_ = v___x_2835_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_leanOpts_2809_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v___x_2840_);
lean_ctor_set(v_reuseFailAlloc_2846_, 2, v_opts_2818_);
lean_ctor_set(v_reuseFailAlloc_2846_, 3, v_rootDir_x3f_2820_);
lean_ctor_set(v_reuseFailAlloc_2846_, 4, v_setupFileName_x3f_2821_);
lean_ctor_set(v_reuseFailAlloc_2846_, 5, v_oleanFileName_x3f_2822_);
lean_ctor_set(v_reuseFailAlloc_2846_, 6, v_usageFileName_x3f_2823_);
lean_ctor_set(v_reuseFailAlloc_2846_, 7, v_ileanFileName_x3f_2824_);
lean_ctor_set(v_reuseFailAlloc_2846_, 8, v_cFileName_x3f_2825_);
lean_ctor_set(v_reuseFailAlloc_2846_, 9, v_bcFileName_x3f_2826_);
lean_ctor_set(v_reuseFailAlloc_2846_, 10, v_errorOnKinds_2828_);
lean_ctor_set(v_reuseFailAlloc_2846_, 11, v_incrSaveFileName_x3f_2831_);
lean_ctor_set(v_reuseFailAlloc_2846_, 12, v_incrLoadFileName_x3f_2832_);
lean_ctor_set(v_reuseFailAlloc_2846_, 13, v_incrHeaderSaveFileName_x3f_2833_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 8, v_component_2811_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 9, v_printPrefix_2812_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 10, v_printLibDir_2813_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 11, v_useStdin_2814_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 12, v_onlyDeps_2815_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 13, v_onlySrcDeps_2816_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 14, v_depsJson_2817_);
lean_ctor_set_uint32(v_reuseFailAlloc_2846_, sizeof(void*)*14, v_trustLevel_2819_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 15, v_jsonOutput_2827_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 16, v_printStats_2829_);
lean_ctor_set_uint8(v_reuseFailAlloc_2846_, sizeof(void*)*14 + 17, v_run_2830_);
v___x_2842_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
lean_object* v___x_2844_; 
lean_ctor_set_uint32(v___x_2842_, sizeof(void*)*14 + 4, v___x_2837_);
if (v_isShared_2799_ == 0)
{
lean_ctor_set(v___x_2798_, 0, v___x_2842_);
v___x_2844_ = v___x_2798_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v___x_2842_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
return v___x_2844_;
}
}
}
}
}
else
{
lean_object* v___x_2848_; lean_object* v___x_2849_; 
lean_dec(v___x_2803_);
lean_del_object(v___x_2798_);
lean_dec(v_a_2796_);
lean_dec_ref(v_opts_937_);
v___x_2848_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38));
v___x_2849_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2848_);
lean_dec_ref(v___x_2849_);
goto v___jp_950_;
}
}
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
lean_dec_ref(v_opts_937_);
v_a_2851_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2851_);
lean_dec_ref_known(v___x_2795_, 1);
v___x_2855_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2856_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2855_);
lean_dec_ref(v___x_2856_);
goto v___jp_2852_;
v___jp_2852_:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2853_ = lean_io_error_to_string(v_a_2851_);
v___x_2854_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2853_);
lean_dec_ref(v___x_2854_);
goto v___jp_944_;
}
}
}
}
else
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
lean_dec(v_optArg_x3f_939_);
v___x_2857_ = lean_internal_set_exit_on_panic(v___x_1166_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_opts_937_);
return v___x_2858_;
}
v___jp_941_:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
return v___x_943_;
}
v___jp_944_:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_946_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_945_);
lean_dec_ref(v___x_946_);
goto v___jp_941_;
}
v___jp_947_:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
v___jp_950_:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
return v___x_952_;
}
v___jp_953_:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
v___jp_956_:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_958_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_957_);
lean_dec_ref(v___x_958_);
goto v___jp_953_;
}
v___jp_959_:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
return v___x_961_;
}
v___jp_962_:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_964_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_963_);
lean_dec_ref(v___x_964_);
goto v___jp_959_;
}
v___jp_965_:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
return v___x_967_;
}
v___jp_968_:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_970_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_969_);
lean_dec_ref(v___x_970_);
goto v___jp_965_;
}
v___jp_971_:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
return v___x_973_;
}
v___jp_974_:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_976_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_975_);
lean_dec_ref(v___x_976_);
goto v___jp_971_;
}
v___jp_977_:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
return v___x_979_;
}
v___jp_980_:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
return v___x_982_;
}
v___jp_983_:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
return v___x_985_;
}
v___jp_986_:
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_988_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_987_);
lean_dec_ref(v___x_988_);
goto v___jp_983_;
}
v___jp_989_:
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
return v___x_991_;
}
v___jp_992_:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_994_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_993_);
lean_dec_ref(v___x_994_);
goto v___jp_989_;
}
v___jp_995_:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
return v___x_997_;
}
v___jp_998_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1000_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_999_);
lean_dec_ref(v___x_1000_);
goto v___jp_995_;
}
v___jp_1001_:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
return v___x_1003_;
}
v___jp_1004_:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
v___jp_1007_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1009_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1008_);
lean_dec_ref(v___x_1009_);
goto v___jp_1004_;
}
v___jp_1010_:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
return v___x_1012_;
}
v___jp_1013_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1015_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1014_);
lean_dec_ref(v___x_1015_);
goto v___jp_1010_;
}
v___jp_1016_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
return v___x_1018_;
}
v___jp_1019_:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1021_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1020_);
lean_dec_ref(v___x_1021_);
goto v___jp_1016_;
}
v___jp_1022_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_io_error_to_string(v___y_1023_);
v___x_1025_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1024_);
lean_dec_ref(v___x_1025_);
goto v___jp_1019_;
}
v___jp_1026_:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
return v___x_1028_;
}
v___jp_1029_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1031_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1030_);
lean_dec_ref(v___x_1031_);
goto v___jp_1026_;
}
v___jp_1032_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
return v___x_1034_;
}
v___jp_1035_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1037_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1036_);
lean_dec_ref(v___x_1037_);
goto v___jp_1032_;
}
v___jp_1038_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
return v___x_1040_;
}
v___jp_1041_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1043_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1042_);
lean_dec_ref(v___x_1043_);
goto v___jp_1038_;
}
v___jp_1044_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
return v___x_1046_;
}
v___jp_1047_:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1049_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1048_);
lean_dec_ref(v___x_1049_);
goto v___jp_1044_;
}
v___jp_1050_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
return v___x_1052_;
}
v___jp_1053_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1055_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1054_);
lean_dec_ref(v___x_1055_);
goto v___jp_1050_;
}
v___jp_1056_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_io_error_to_string(v___y_1057_);
v___x_1059_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1058_);
lean_dec_ref(v___x_1059_);
goto v___jp_1053_;
}
v___jp_1060_:
{
uint8_t v___x_1061_; lean_object* v___x_1062_; 
v___x_1061_ = 1;
v___x_1062_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1061_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1070_; 
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v___x_1062_, 0);
lean_dec(v_unused_1071_);
v___x_1064_ = v___x_1062_;
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
else
{
lean_dec(v___x_1062_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1070_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1066_; lean_object* v___x_1068_; 
v___x_1066_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_1065_ == 0)
{
lean_ctor_set_tag(v___x_1064_, 1);
lean_ctor_set(v___x_1064_, 0, v___x_1066_);
v___x_1068_ = v___x_1064_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v_a_1072_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1062_, 1);
v___x_1073_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1074_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1073_);
lean_dec_ref(v___x_1074_);
v___y_1057_ = v_a_1072_;
goto v___jp_1056_;
}
}
v___jp_1075_:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0));
v___x_1077_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1076_);
lean_dec_ref(v___x_1077_);
goto v___jp_1060_;
}
v___jp_1078_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
return v___x_1080_;
}
v___jp_1081_:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1083_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1082_);
lean_dec_ref(v___x_1083_);
goto v___jp_1078_;
}
v___jp_1084_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1085_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
return v___x_1086_;
}
v___jp_1087_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1089_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1088_);
lean_dec_ref(v___x_1089_);
goto v___jp_1084_;
}
v___jp_1090_:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
return v___x_1092_;
}
v___jp_1093_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1095_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1094_);
lean_dec_ref(v___x_1095_);
goto v___jp_1090_;
}
v___jp_1096_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
return v___x_1098_;
}
v___jp_1099_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1101_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1100_);
lean_dec_ref(v___x_1101_);
goto v___jp_1096_;
}
v___jp_1102_:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
return v___x_1104_;
}
v___jp_1105_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1107_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1106_);
lean_dec_ref(v___x_1107_);
goto v___jp_1102_;
}
v___jp_1108_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
v___jp_1111_:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1113_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1112_);
lean_dec_ref(v___x_1113_);
goto v___jp_1108_;
}
v___jp_1114_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
return v___x_1116_;
}
v___jp_1117_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
return v___x_1119_;
}
v___jp_1120_:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
return v___x_1122_;
}
v___jp_1123_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1125_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1124_);
lean_dec_ref(v___x_1125_);
goto v___jp_1120_;
}
v___jp_1126_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
return v___x_1128_;
}
v___jp_1129_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
return v___x_1131_;
}
v___jp_1132_:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1133_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1134_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1133_);
lean_dec_ref(v___x_1134_);
goto v___jp_1129_;
}
v___jp_1135_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
v___jp_1138_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1140_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1139_);
lean_dec_ref(v___x_1140_);
goto v___jp_1135_;
}
v___jp_1141_:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
return v___x_1143_;
}
v___jp_1144_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1146_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1145_);
lean_dec_ref(v___x_1146_);
goto v___jp_1141_;
}
v___jp_1147_:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
return v___x_1149_;
}
v___jp_1150_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1152_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1151_);
lean_dec_ref(v___x_1152_);
goto v___jp_1147_;
}
v___jp_1153_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
return v___x_1155_;
}
v___jp_1156_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1157_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1158_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1157_);
lean_dec_ref(v___x_1158_);
goto v___jp_1153_;
}
v___jp_1159_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
return v___x_1161_;
}
v___jp_1162_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1164_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1163_);
lean_dec_ref(v___x_1164_);
goto v___jp_1159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object* v_opts_2859_, lean_object* v_opt_2860_, lean_object* v_optArg_x3f_2861_, lean_object* v_a_2862_){
_start:
{
uint32_t v_opt_boxed_2863_; lean_object* v_res_2864_; 
v_opt_boxed_2863_ = lean_unbox_uint32(v_opt_2860_);
lean_dec(v_opt_2860_);
v_res_2864_ = lean_shell_options_process(v_opts_2859_, v_opt_boxed_2863_, v_optArg_x3f_2861_);
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(lean_object* v_name_2866_, lean_object* v_f_2867_){
_start:
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_uv_os_getpid();
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2905_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2872_ = v___x_2869_;
v_isShared_2873_ = v_isSharedCheck_2905_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2869_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2905_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2874_; uint64_t v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v_a_2881_; uint8_t v___x_2895_; lean_object* v___x_2896_; 
v___x_2874_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___closed__0));
v___x_2875_ = lean_unbox_uint64(v_a_2870_);
lean_dec(v_a_2870_);
v___x_2876_ = lean_uint64_to_nat(v___x_2875_);
v___x_2877_ = l_Nat_reprFast(v___x_2876_);
v___x_2878_ = lean_string_append(v___x_2874_, v___x_2877_);
lean_dec_ref(v___x_2877_);
lean_inc_ref(v_name_2866_);
v___x_2879_ = l_System_FilePath_addExtension(v_name_2866_, v___x_2878_);
lean_dec_ref(v___x_2878_);
v___x_2895_ = 1;
v___x_2896_ = lean_io_prim_handle_mk(v___x_2879_, v___x_2895_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v___x_2898_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc_n(v_a_2897_, 2);
lean_dec_ref_known(v___x_2896_, 1);
v___x_2898_ = lean_apply_2(v_f_2867_, v_a_2897_, lean_box(0));
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v___x_2899_; 
lean_dec_ref_known(v___x_2898_, 1);
v___x_2899_ = lean_io_prim_handle_flush(v_a_2897_);
lean_dec(v_a_2897_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v___x_2900_; 
lean_dec_ref_known(v___x_2899_, 1);
v___x_2900_ = lean_io_rename(v___x_2879_, v_name_2866_);
lean_dec_ref(v_name_2866_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_dec_ref(v___x_2879_);
lean_del_object(v___x_2872_);
return v___x_2900_;
}
else
{
lean_object* v_a_2901_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
lean_dec_ref_known(v___x_2900_, 1);
v_a_2881_ = v_a_2901_;
goto v___jp_2880_;
}
}
else
{
lean_object* v_a_2902_; 
lean_dec_ref(v_name_2866_);
v_a_2902_ = lean_ctor_get(v___x_2899_, 0);
lean_inc(v_a_2902_);
lean_dec_ref_known(v___x_2899_, 1);
v_a_2881_ = v_a_2902_;
goto v___jp_2880_;
}
}
else
{
lean_object* v_a_2903_; 
lean_dec(v_a_2897_);
lean_dec_ref(v_name_2866_);
v_a_2903_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_a_2903_);
lean_dec_ref_known(v___x_2898_, 1);
v_a_2881_ = v_a_2903_;
goto v___jp_2880_;
}
}
else
{
lean_object* v_a_2904_; 
lean_dec_ref(v_f_2867_);
lean_dec_ref(v_name_2866_);
v_a_2904_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2904_);
lean_dec_ref_known(v___x_2896_, 1);
v_a_2881_ = v_a_2904_;
goto v___jp_2880_;
}
v___jp_2880_:
{
uint8_t v___x_2882_; 
v___x_2882_ = l_System_FilePath_pathExists(v___x_2879_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2884_; 
lean_dec_ref(v___x_2879_);
if (v_isShared_2873_ == 0)
{
lean_ctor_set_tag(v___x_2872_, 1);
lean_ctor_set(v___x_2872_, 0, v_a_2881_);
v___x_2884_ = v___x_2872_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2881_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
else
{
lean_object* v___x_2886_; 
lean_del_object(v___x_2872_);
v___x_2886_ = lean_io_remove_file(v___x_2879_);
lean_dec_ref(v___x_2879_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2893_ == 0)
{
lean_object* v_unused_2894_; 
v_unused_2894_ = lean_ctor_get(v___x_2886_, 0);
lean_dec(v_unused_2894_);
v___x_2888_ = v___x_2886_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_dec(v___x_2886_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
lean_ctor_set_tag(v___x_2888_, 1);
lean_ctor_set(v___x_2888_, 0, v_a_2881_);
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2881_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
else
{
lean_dec(v_a_2881_);
return v___x_2886_;
}
}
}
}
}
else
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2913_; 
lean_dec_ref(v_f_2867_);
lean_dec_ref(v_name_2866_);
v_a_2906_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2908_ = v___x_2869_;
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___x_2869_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2906_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically___boxed(lean_object* v_name_2914_, lean_object* v_f_2915_, lean_object* v_a_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(v_name_2914_, v_f_2915_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object* v_opts_2918_, lean_object* v_opt_2919_){
_start:
{
lean_object* v_name_2920_; lean_object* v_defValue_2921_; lean_object* v_map_2922_; lean_object* v___x_2923_; 
v_name_2920_ = lean_ctor_get(v_opt_2919_, 0);
v_defValue_2921_ = lean_ctor_get(v_opt_2919_, 1);
v_map_2922_ = lean_ctor_get(v_opts_2918_, 0);
v___x_2923_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2922_, v_name_2920_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_inc(v_defValue_2921_);
return v_defValue_2921_;
}
else
{
lean_object* v_val_2924_; 
v_val_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_val_2924_);
lean_dec_ref_known(v___x_2923_, 1);
if (lean_obj_tag(v_val_2924_) == 3)
{
lean_object* v_v_2925_; 
v_v_2925_ = lean_ctor_get(v_val_2924_, 0);
lean_inc(v_v_2925_);
lean_dec_ref_known(v_val_2924_, 1);
return v_v_2925_;
}
else
{
lean_dec(v_val_2924_);
lean_inc(v_defValue_2921_);
return v_defValue_2921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object* v_opts_2926_, lean_object* v_opt_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v_opts_2926_, v_opt_2927_);
lean_dec_ref(v_opt_2927_);
lean_dec_ref(v_opts_2926_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object* v_s_2930_){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; 
v___x_2931_ = lean_string_utf8_byte_size(v_s_2930_);
v___x_2932_ = lean_unsigned_to_nat(5u);
v___x_2933_ = lean_nat_dec_le(v___x_2932_, v___x_2931_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; 
lean_dec_ref(v_s_2930_);
v___x_2934_ = lean_box(0);
return v___x_2934_;
}
else
{
lean_object* v___x_2935_; lean_object* v___x_2936_; uint8_t v___x_2937_; 
v___x_2935_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___closed__0));
v___x_2936_ = lean_unsigned_to_nat(0u);
v___x_2937_ = lean_string_memcmp(v_s_2930_, v___x_2935_, v___x_2936_, v___x_2936_, v___x_2932_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; 
lean_dec_ref(v_s_2930_);
v___x_2938_ = lean_box(0);
return v___x_2938_;
}
else
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_inc_ref(v_s_2930_);
v___x_2939_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2939_, 0, v_s_2930_);
lean_ctor_set(v___x_2939_, 1, v___x_2936_);
lean_ctor_set(v___x_2939_, 2, v___x_2931_);
v___x_2940_ = l_String_Slice_pos_x21(v___x_2939_, v___x_2932_);
lean_dec_ref_known(v___x_2939_, 3);
v___x_2941_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2941_, 0, v_s_2930_);
lean_ctor_set(v___x_2941_, 1, v___x_2940_);
lean_ctor_set(v___x_2941_, 2, v___x_2931_);
v___x_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
return v___x_2942_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object* v_s_2943_, lean_object* v_pat_2944_){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_s_2943_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object* v_s_2946_, lean_object* v_pat_2947_){
_start:
{
lean_object* v_res_2948_; 
v_res_2948_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(v_s_2946_, v_pat_2947_);
lean_dec_ref(v_pat_2947_);
return v_res_2948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object* v_x_2949_, lean_object* v_x_2950_, lean_object* v_v_2951_){
_start:
{
lean_inc_ref(v_v_2951_);
return v_v_2951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object* v_x_2952_, lean_object* v_x_2953_, lean_object* v_v_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l___private_Lean_Shell_0__Lean_shellMain___lam__0(v_x_2952_, v_x_2953_, v_v_2954_);
lean_dec_ref(v_v_2954_);
lean_dec_ref(v_x_2953_);
lean_dec(v_x_2952_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object* v___x_2959_, lean_object* v_mainModuleName_2960_, lean_object* v_out_2961_, uint8_t v___x_2962_, lean_object* v___x_2963_, lean_object* v_fileName_2964_, lean_object* v___x_2965_, lean_object* v___x_2966_, lean_object* v___x_2967_, lean_object* v___x_2968_, lean_object* v___x_2969_, lean_object* v___x_2970_, lean_object* v___x_2971_, lean_object* v___x_2972_, uint8_t v_run_2973_, lean_object* v___x_2974_, uint8_t v_printLibDir_2975_){
_start:
{
lean_object* v_a_2978_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___y_2984_; uint16_t v___y_2985_; lean_object* v_fileName_2986_; lean_object* v_fileMap_2987_; lean_object* v_currNamespace_2988_; lean_object* v_openDecls_2989_; lean_object* v_initHeartbeats_2990_; lean_object* v_maxHeartbeats_2991_; lean_object* v_quotContext_2992_; lean_object* v_currMacroScope_2993_; lean_object* v_cancelTk_x3f_2994_; lean_object* v_inheritedTraceOptions_2995_; lean_object* v_currRecDepth_2996_; lean_object* v_ref_2997_; uint8_t v_suppressElabErrors_2998_; uint8_t v_isRecordingDeps_2999_; lean_object* v___x_3031_; lean_object* v___x_3032_; uint8_t v___y_3034_; lean_object* v___y_3035_; uint16_t v___y_3036_; uint16_t v___x_3057_; lean_object* v___x_3058_; lean_object* v_env_3059_; uint8_t v___x_3060_; uint16_t v___x_3061_; uint16_t v___x_3062_; uint16_t v___x_3063_; uint8_t v___x_3064_; 
v___x_2981_ = lean_io_get_num_heartbeats();
v___x_2982_ = lean_st_mk_ref(v___x_2959_);
v___x_3031_ = l_Lean_inheritedTraceOptions;
v___x_3032_ = lean_st_ref_get(v___x_3031_);
v___x_3057_ = l_Lean_OptionFlags_ofOptions(v___x_2974_);
v___x_3058_ = lean_st_ref_get(v___x_2982_);
v_env_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc_ref(v_env_3059_);
lean_dec(v___x_3058_);
v___x_3060_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3059_);
lean_dec_ref(v_env_3059_);
v___x_3061_ = 512;
v___x_3062_ = lean_uint16_land(v___x_3057_, v___x_3061_);
v___x_3063_ = 0;
v___x_3064_ = lean_uint16_dec_eq(v___x_3062_, v___x_3063_);
if (v___x_3064_ == 0)
{
if (v___x_3060_ == 0)
{
v___y_3034_ = v___x_2962_;
v___y_3035_ = v___x_2974_;
v___y_3036_ = v___x_3057_;
goto v___jp_3033_;
}
else
{
lean_dec_ref(v___x_2963_);
lean_inc(v___x_2966_);
v___y_2984_ = v___x_2974_;
v___y_2985_ = v___x_3057_;
v_fileName_2986_ = v_fileName_2964_;
v_fileMap_2987_ = v___x_2965_;
v_currNamespace_2988_ = v___x_2966_;
v_openDecls_2989_ = v___x_2967_;
v_initHeartbeats_2990_ = v___x_2981_;
v_maxHeartbeats_2991_ = v___x_2968_;
v_quotContext_2992_ = v___x_2966_;
v_currMacroScope_2993_ = v___x_2969_;
v_cancelTk_x3f_2994_ = v___x_2970_;
v_inheritedTraceOptions_2995_ = v___x_3032_;
v_currRecDepth_2996_ = v___x_2971_;
v_ref_2997_ = v___x_2972_;
v_suppressElabErrors_2998_ = v_run_2973_;
v_isRecordingDeps_2999_ = v_run_2973_;
goto v___jp_2983_;
}
}
else
{
if (v___x_3060_ == 0)
{
lean_dec_ref(v___x_2963_);
lean_inc(v___x_2966_);
v___y_2984_ = v___x_2974_;
v___y_2985_ = v___x_3057_;
v_fileName_2986_ = v_fileName_2964_;
v_fileMap_2987_ = v___x_2965_;
v_currNamespace_2988_ = v___x_2966_;
v_openDecls_2989_ = v___x_2967_;
v_initHeartbeats_2990_ = v___x_2981_;
v_maxHeartbeats_2991_ = v___x_2968_;
v_quotContext_2992_ = v___x_2966_;
v_currMacroScope_2993_ = v___x_2969_;
v_cancelTk_x3f_2994_ = v___x_2970_;
v_inheritedTraceOptions_2995_ = v___x_3032_;
v_currRecDepth_2996_ = v___x_2971_;
v_ref_2997_ = v___x_2972_;
v_suppressElabErrors_2998_ = v_run_2973_;
v_isRecordingDeps_2999_ = v_run_2973_;
goto v___jp_2983_;
}
else
{
v___y_3034_ = v_printLibDir_2975_;
v___y_3035_ = v___x_2974_;
v___y_3036_ = v___x_3057_;
goto v___jp_3033_;
}
}
v___jp_2977_:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = lean_mk_io_user_error(v_a_2978_);
v___x_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
return v___x_2980_;
}
v___jp_2983_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3000_ = l_Lean_maxRecDepth;
v___x_3001_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v___y_2984_, v___x_3000_);
v___x_3002_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3002_, 0, v_fileName_2986_);
lean_ctor_set(v___x_3002_, 1, v_fileMap_2987_);
lean_ctor_set(v___x_3002_, 2, v___y_2984_);
lean_ctor_set(v___x_3002_, 3, v___x_3001_);
lean_ctor_set(v___x_3002_, 4, v_currNamespace_2988_);
lean_ctor_set(v___x_3002_, 5, v_openDecls_2989_);
lean_ctor_set(v___x_3002_, 6, v_initHeartbeats_2990_);
lean_ctor_set(v___x_3002_, 7, v_maxHeartbeats_2991_);
lean_ctor_set(v___x_3002_, 8, v_quotContext_2992_);
lean_ctor_set(v___x_3002_, 9, v_currMacroScope_2993_);
lean_ctor_set(v___x_3002_, 10, v_cancelTk_x3f_2994_);
lean_ctor_set(v___x_3002_, 11, v_inheritedTraceOptions_2995_);
v___x_3003_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3003_, 0, v___x_3002_);
lean_ctor_set(v___x_3003_, 1, v_currRecDepth_2996_);
lean_ctor_set(v___x_3003_, 2, v_ref_2997_);
lean_ctor_set_uint16(v___x_3003_, sizeof(void*)*3, v___y_2985_);
lean_ctor_set_uint8(v___x_3003_, sizeof(void*)*3 + 2, v_suppressElabErrors_2998_);
lean_ctor_set_uint8(v___x_3003_, sizeof(void*)*3 + 3, v_isRecordingDeps_2999_);
v___x_3004_ = l_Lean_Compiler_LCNF_emitC(v_mainModuleName_2960_, v___x_3003_, v___x_2982_);
lean_dec_ref_known(v___x_3003_, 3);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref_known(v___x_3004_, 1);
v___x_3006_ = lean_st_ref_get(v___x_2982_);
lean_dec(v___x_2982_);
lean_dec(v___x_3006_);
v___x_3007_ = lean_string_to_utf8(v_a_3005_);
v___x_3008_ = lean_io_prim_handle_write(v_out_2961_, v___x_3007_);
lean_dec_ref(v___x_3007_);
return v___x_3008_;
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3030_; 
lean_dec(v___x_2982_);
v_a_3009_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3011_ = v___x_3004_;
v_isShared_3012_ = v_isSharedCheck_3030_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3004_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3030_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
if (lean_obj_tag(v_a_3009_) == 0)
{
lean_object* v_msg_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3017_; 
v_msg_3013_ = lean_ctor_get(v_a_3009_, 1);
lean_inc_ref(v_msg_3013_);
lean_dec_ref_known(v_a_3009_, 2);
v___x_3014_ = l_Lean_MessageData_toString(v_msg_3013_);
v___x_3015_ = lean_mk_io_user_error(v___x_3014_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3015_);
v___x_3017_ = v___x_3011_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
else
{
lean_object* v_id_3019_; lean_object* v___x_3020_; 
lean_del_object(v___x_3011_);
v_id_3019_ = lean_ctor_get(v_a_3009_, 0);
lean_inc(v_id_3019_);
lean_dec_ref_known(v_a_3009_, 2);
v___x_3020_ = l_Lean_InternalExceptionId_getName(v_id_3019_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
lean_dec(v_id_3019_);
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3022_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__0));
v___x_3023_ = l_Lean_Name_toString(v_a_3021_, v___x_2962_);
v___x_3024_ = lean_string_append(v___x_3022_, v___x_3023_);
lean_dec_ref(v___x_3023_);
v_a_2978_ = v___x_3024_;
goto v___jp_2977_;
}
else
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
lean_dec_ref_known(v___x_3020_, 1);
v___x_3025_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__1));
v___x_3026_ = l_Nat_reprFast(v_id_3019_);
v___x_3027_ = lean_string_append(v___x_3025_, v___x_3026_);
lean_dec_ref(v___x_3026_);
v___x_3028_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___closed__2));
v___x_3029_ = lean_string_append(v___x_3027_, v___x_3028_);
v_a_2978_ = v___x_3029_;
goto v___jp_2977_;
}
}
}
}
}
v___jp_3033_:
{
lean_object* v___x_3037_; lean_object* v_env_3038_; lean_object* v_nextMacroScope_3039_; lean_object* v_ngen_3040_; lean_object* v_auxDeclNGen_3041_; lean_object* v_traceState_3042_; lean_object* v_recordedDeps_3043_; lean_object* v_messages_3044_; lean_object* v_infoState_3045_; lean_object* v_snapshotTasks_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3055_; 
v___x_3037_ = lean_st_ref_take(v___x_2982_);
v_env_3038_ = lean_ctor_get(v___x_3037_, 0);
v_nextMacroScope_3039_ = lean_ctor_get(v___x_3037_, 1);
v_ngen_3040_ = lean_ctor_get(v___x_3037_, 2);
v_auxDeclNGen_3041_ = lean_ctor_get(v___x_3037_, 3);
v_traceState_3042_ = lean_ctor_get(v___x_3037_, 4);
v_recordedDeps_3043_ = lean_ctor_get(v___x_3037_, 6);
v_messages_3044_ = lean_ctor_get(v___x_3037_, 7);
v_infoState_3045_ = lean_ctor_get(v___x_3037_, 8);
v_snapshotTasks_3046_ = lean_ctor_get(v___x_3037_, 9);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3055_ == 0)
{
lean_object* v_unused_3056_; 
v_unused_3056_ = lean_ctor_get(v___x_3037_, 5);
lean_dec(v_unused_3056_);
v___x_3048_ = v___x_3037_;
v_isShared_3049_ = v_isSharedCheck_3055_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_snapshotTasks_3046_);
lean_inc(v_infoState_3045_);
lean_inc(v_messages_3044_);
lean_inc(v_recordedDeps_3043_);
lean_inc(v_traceState_3042_);
lean_inc(v_auxDeclNGen_3041_);
lean_inc(v_ngen_3040_);
lean_inc(v_nextMacroScope_3039_);
lean_inc(v_env_3038_);
lean_dec(v___x_3037_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3055_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3050_; lean_object* v___x_3052_; 
v___x_3050_ = l_Lean_Kernel_enableDiag(v_env_3038_, v___y_3034_);
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 5, v___x_2963_);
lean_ctor_set(v___x_3048_, 0, v___x_3050_);
v___x_3052_ = v___x_3048_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3050_);
lean_ctor_set(v_reuseFailAlloc_3054_, 1, v_nextMacroScope_3039_);
lean_ctor_set(v_reuseFailAlloc_3054_, 2, v_ngen_3040_);
lean_ctor_set(v_reuseFailAlloc_3054_, 3, v_auxDeclNGen_3041_);
lean_ctor_set(v_reuseFailAlloc_3054_, 4, v_traceState_3042_);
lean_ctor_set(v_reuseFailAlloc_3054_, 5, v___x_2963_);
lean_ctor_set(v_reuseFailAlloc_3054_, 6, v_recordedDeps_3043_);
lean_ctor_set(v_reuseFailAlloc_3054_, 7, v_messages_3044_);
lean_ctor_set(v_reuseFailAlloc_3054_, 8, v_infoState_3045_);
lean_ctor_set(v_reuseFailAlloc_3054_, 9, v_snapshotTasks_3046_);
v___x_3052_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
lean_object* v___x_3053_; 
v___x_3053_ = lean_st_ref_put(v___x_2982_, v___x_3052_);
lean_inc(v___x_2966_);
v___y_2984_ = v___y_3035_;
v___y_2985_ = v___y_3036_;
v_fileName_2986_ = v_fileName_2964_;
v_fileMap_2987_ = v___x_2965_;
v_currNamespace_2988_ = v___x_2966_;
v_openDecls_2989_ = v___x_2967_;
v_initHeartbeats_2990_ = v___x_2981_;
v_maxHeartbeats_2991_ = v___x_2968_;
v_quotContext_2992_ = v___x_2966_;
v_currMacroScope_2993_ = v___x_2969_;
v_cancelTk_x3f_2994_ = v___x_2970_;
v_inheritedTraceOptions_2995_ = v___x_3032_;
v_currRecDepth_2996_ = v___x_2971_;
v_ref_2997_ = v___x_2972_;
v_suppressElabErrors_2998_ = v_run_2973_;
v_isRecordingDeps_2999_ = v_run_2973_;
goto v___jp_2983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object** _args){
lean_object* v___x_3065_ = _args[0];
lean_object* v_mainModuleName_3066_ = _args[1];
lean_object* v_out_3067_ = _args[2];
lean_object* v___x_3068_ = _args[3];
lean_object* v___x_3069_ = _args[4];
lean_object* v_fileName_3070_ = _args[5];
lean_object* v___x_3071_ = _args[6];
lean_object* v___x_3072_ = _args[7];
lean_object* v___x_3073_ = _args[8];
lean_object* v___x_3074_ = _args[9];
lean_object* v___x_3075_ = _args[10];
lean_object* v___x_3076_ = _args[11];
lean_object* v___x_3077_ = _args[12];
lean_object* v___x_3078_ = _args[13];
lean_object* v_run_3079_ = _args[14];
lean_object* v___x_3080_ = _args[15];
lean_object* v_printLibDir_3081_ = _args[16];
lean_object* v___y_3082_ = _args[17];
_start:
{
uint8_t v___x_12853__boxed_3083_; uint8_t v_run_boxed_3084_; uint8_t v_printLibDir_boxed_3085_; lean_object* v_res_3086_; 
v___x_12853__boxed_3083_ = lean_unbox(v___x_3068_);
v_run_boxed_3084_ = lean_unbox(v_run_3079_);
v_printLibDir_boxed_3085_ = lean_unbox(v_printLibDir_3081_);
v_res_3086_ = l___private_Lean_Shell_0__Lean_shellMain___lam__1(v___x_3065_, v_mainModuleName_3066_, v_out_3067_, v___x_12853__boxed_3083_, v___x_3069_, v_fileName_3070_, v___x_3071_, v___x_3072_, v___x_3073_, v___x_3074_, v___x_3075_, v___x_3076_, v___x_3077_, v___x_3078_, v_run_boxed_3084_, v___x_3080_, v_printLibDir_boxed_3085_);
lean_dec(v_out_3067_);
return v_res_3086_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3088_ = l_Lean_Options_empty;
v___x_3089_ = l_Lean_Core_getMaxHeartbeats(v___x_3088_);
return v___x_3089_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2(void){
_start:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3090_ = lean_unsigned_to_nat(1u);
v___x_3091_ = l_Lean_firstFrontendMacroScope;
v___x_3092_ = lean_nat_add(v___x_3091_, v___x_3090_);
return v___x_3092_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3103_ = lean_unsigned_to_nat(32u);
v___x_3104_ = lean_mk_empty_array_with_capacity(v___x_3103_);
v___x_3105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3104_);
return v___x_3105_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8(void){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3106_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9(void){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__8);
v___x_3108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3107_);
return v___x_3108_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9);
v___x_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2(lean_object* v___x_3111_, uint8_t v___x_3112_, lean_object* v_val_3113_, lean_object* v_mainModuleName_3114_, lean_object* v_fileName_3115_, uint8_t v_run_3116_, uint8_t v_printLibDir_3117_, lean_object* v___x_3118_, lean_object* v_out_3119_){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; uint64_t v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; size_t v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___f_3151_; lean_object* v___x_3152_; 
v___x_3121_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__0));
v___x_3122_ = l_Lean_instInhabitedFileMap_default;
v___x_3123_ = l_Lean_Options_empty;
v___x_3124_ = lean_box(0);
v___x_3125_ = lean_box(0);
v___x_3126_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__1);
v___x_3127_ = l_Lean_firstFrontendMacroScope;
v___x_3128_ = lean_box(0);
v___x_3129_ = lean_box(0);
v___x_3130_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__2);
v___x_3131_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__5));
v___x_3132_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__6));
v___x_3133_ = 0ULL;
v___x_3134_ = lean_unsigned_to_nat(32u);
v___x_3135_ = lean_mk_empty_array_with_capacity(v___x_3134_);
v___x_3136_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__7);
v___x_3137_ = ((size_t)5ULL);
lean_inc_n(v___x_3111_, 5);
v___x_3138_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3138_, 0, v___x_3136_);
lean_ctor_set(v___x_3138_, 1, v___x_3135_);
lean_ctor_set(v___x_3138_, 2, v___x_3111_);
lean_ctor_set(v___x_3138_, 3, v___x_3111_);
lean_ctor_set_usize(v___x_3138_, 4, v___x_3137_);
lean_inc_ref_n(v___x_3138_, 3);
v___x_3139_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
lean_ctor_set_uint64(v___x_3139_, sizeof(void*)*1, v___x_3133_);
v___x_3140_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__9);
v___x_3141_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10, &l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10_once, _init_l___private_Lean_Shell_0__Lean_shellMain___lam__2___closed__10);
v___x_3142_ = lean_mk_empty_array_with_capacity(v___x_3111_);
lean_inc_ref_n(v___x_3142_, 2);
v___x_3143_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3142_);
lean_ctor_set(v___x_3143_, 1, v___x_3123_);
lean_ctor_set(v___x_3143_, 2, v___x_3142_);
lean_ctor_set(v___x_3143_, 3, v___x_3111_);
lean_ctor_set(v___x_3143_, 4, v___x_3111_);
lean_ctor_set(v___x_3143_, 5, v___x_3111_);
v___x_3144_ = l_Lean_NameSet_empty;
v___x_3145_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3138_);
lean_ctor_set(v___x_3145_, 1, v___x_3138_);
lean_ctor_set(v___x_3145_, 2, v___x_3144_);
v___x_3146_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3146_, 0, v___x_3140_);
lean_ctor_set(v___x_3146_, 1, v___x_3140_);
lean_ctor_set(v___x_3146_, 2, v___x_3138_);
lean_ctor_set_uint8(v___x_3146_, sizeof(void*)*3, v___x_3112_);
v___x_3147_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3147_, 0, v_val_3113_);
lean_ctor_set(v___x_3147_, 1, v___x_3130_);
lean_ctor_set(v___x_3147_, 2, v___x_3131_);
lean_ctor_set(v___x_3147_, 3, v___x_3132_);
lean_ctor_set(v___x_3147_, 4, v___x_3139_);
lean_ctor_set(v___x_3147_, 5, v___x_3141_);
lean_ctor_set(v___x_3147_, 6, v___x_3143_);
lean_ctor_set(v___x_3147_, 7, v___x_3145_);
lean_ctor_set(v___x_3147_, 8, v___x_3146_);
lean_ctor_set(v___x_3147_, 9, v___x_3142_);
v___x_3148_ = lean_box(v___x_3112_);
v___x_3149_ = lean_box(v_run_3116_);
v___x_3150_ = lean_box(v_printLibDir_3117_);
v___f_3151_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed), 18, 17);
lean_closure_set(v___f_3151_, 0, v___x_3147_);
lean_closure_set(v___f_3151_, 1, v_mainModuleName_3114_);
lean_closure_set(v___f_3151_, 2, v_out_3119_);
lean_closure_set(v___f_3151_, 3, v___x_3148_);
lean_closure_set(v___f_3151_, 4, v___x_3141_);
lean_closure_set(v___f_3151_, 5, v_fileName_3115_);
lean_closure_set(v___f_3151_, 6, v___x_3122_);
lean_closure_set(v___f_3151_, 7, v___x_3124_);
lean_closure_set(v___f_3151_, 8, v___x_3125_);
lean_closure_set(v___f_3151_, 9, v___x_3126_);
lean_closure_set(v___f_3151_, 10, v___x_3127_);
lean_closure_set(v___f_3151_, 11, v___x_3128_);
lean_closure_set(v___f_3151_, 12, v___x_3111_);
lean_closure_set(v___f_3151_, 13, v___x_3129_);
lean_closure_set(v___f_3151_, 14, v___x_3149_);
lean_closure_set(v___f_3151_, 15, v___x_3123_);
lean_closure_set(v___f_3151_, 16, v___x_3150_);
v___x_3152_ = l_Lean_profileitIOUnsafe___redArg(v___x_3121_, v___x_3118_, v___f_3151_, v___x_3124_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__2___boxed(lean_object* v___x_3153_, lean_object* v___x_3154_, lean_object* v_val_3155_, lean_object* v_mainModuleName_3156_, lean_object* v_fileName_3157_, lean_object* v_run_3158_, lean_object* v_printLibDir_3159_, lean_object* v___x_3160_, lean_object* v_out_3161_, lean_object* v___y_3162_){
_start:
{
uint8_t v___x_13076__boxed_3163_; uint8_t v_run_boxed_3164_; uint8_t v_printLibDir_boxed_3165_; lean_object* v_res_3166_; 
v___x_13076__boxed_3163_ = lean_unbox(v___x_3154_);
v_run_boxed_3164_ = lean_unbox(v_run_3158_);
v_printLibDir_boxed_3165_ = lean_unbox(v_printLibDir_3159_);
v_res_3166_ = l___private_Lean_Shell_0__Lean_shellMain___lam__2(v___x_3153_, v___x_13076__boxed_3163_, v_val_3155_, v_mainModuleName_3156_, v_fileName_3157_, v_run_boxed_3164_, v_printLibDir_boxed_3165_, v___x_3160_, v_out_3161_);
lean_dec_ref(v___x_3160_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(lean_object* v_val_3167_, lean_object* v_a_3168_, lean_object* v_b_3169_){
_start:
{
lean_object* v_str_3170_; lean_object* v_startInclusive_3171_; lean_object* v_endExclusive_3172_; lean_object* v___x_3173_; uint8_t v_decide_3174_; 
v_str_3170_ = lean_ctor_get(v_val_3167_, 0);
v_startInclusive_3171_ = lean_ctor_get(v_val_3167_, 1);
v_endExclusive_3172_ = lean_ctor_get(v_val_3167_, 2);
v___x_3173_ = lean_nat_sub(v_endExclusive_3172_, v_startInclusive_3171_);
v_decide_3174_ = lean_nat_dec_eq(v_a_3168_, v___x_3173_);
lean_dec(v___x_3173_);
if (v_decide_3174_ == 0)
{
lean_object* v___x_3175_; uint32_t v___x_3176_; uint32_t v___x_3177_; uint8_t v___x_3178_; 
v___x_3175_ = lean_nat_add(v_startInclusive_3171_, v_a_3168_);
v___x_3176_ = lean_string_utf8_get_fast(v_str_3170_, v___x_3175_);
v___x_3177_ = 10;
v___x_3178_ = lean_uint32_dec_eq(v___x_3176_, v___x_3177_);
if (v___x_3178_ == 0)
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
lean_dec(v_a_3168_);
v___x_3179_ = lean_box(0);
v___x_3180_ = lean_string_utf8_next_fast(v_str_3170_, v___x_3175_);
lean_dec(v___x_3175_);
v___x_3181_ = lean_nat_sub(v___x_3180_, v_startInclusive_3171_);
v_a_3168_ = v___x_3181_;
v_b_3169_ = v___x_3179_;
goto _start;
}
else
{
lean_object* v___x_3183_; 
lean_dec(v___x_3175_);
v___x_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3183_, 0, v_a_3168_);
return v___x_3183_;
}
}
else
{
lean_dec(v_a_3168_);
lean_inc(v_b_3169_);
return v_b_3169_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg___boxed(lean_object* v_val_3184_, lean_object* v_a_3185_, lean_object* v_b_3186_){
_start:
{
lean_object* v_res_3187_; 
v_res_3187_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(v_val_3184_, v_a_3185_, v_b_3186_);
lean_dec(v_b_3186_);
lean_dec_ref(v_val_3184_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object* v_s_3188_){
_start:
{
uint32_t v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3190_ = 10;
v___x_3191_ = lean_string_push(v_s_3188_, v___x_3190_);
v___x_3192_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3191_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object* v_s_3193_, lean_object* v_a_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v_s_3193_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(lean_object* v_s_3196_){
_start:
{
uint32_t v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3198_ = 10;
v___x_3199_ = lean_string_push(v_s_3196_, v___x_3198_);
v___x_3200_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4___boxed(lean_object* v_s_3201_, lean_object* v_a_3202_){
_start:
{
lean_object* v_res_3203_; 
v_res_3203_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(v_s_3201_);
return v_res_3203_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1(void){
_start:
{
lean_object* v___x_3205_; uint8_t v___x_3206_; 
v___x_3205_ = lean_box(0);
v___x_3206_ = lean_internal_has_address_sanitizer(v___x_3205_);
return v___x_3206_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3207_ = lean_box(0);
v___x_3208_ = lean_internal_get_option_overrides(v___x_3207_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* lean_shell_main(lean_object* v_args_3219_, lean_object* v_opts_3220_){
_start:
{
lean_object* v_fns_3223_; uint8_t v_printPrefix_3242_; 
v_printPrefix_3242_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 9);
if (v_printPrefix_3242_ == 0)
{
uint8_t v_printLibDir_3243_; 
v_printLibDir_3243_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 10);
if (v_printLibDir_3243_ == 0)
{
lean_object* v_leanOpts_3244_; lean_object* v_forwardedArgs_3245_; uint8_t v_component_3246_; uint8_t v_useStdin_3247_; uint8_t v_onlyDeps_3248_; uint8_t v_onlySrcDeps_3249_; uint8_t v_depsJson_3250_; uint32_t v_trustLevel_3251_; lean_object* v_rootDir_x3f_3252_; lean_object* v_setupFileName_x3f_3253_; lean_object* v_oleanFileName_x3f_3254_; lean_object* v_usageFileName_x3f_3255_; lean_object* v_ileanFileName_x3f_3256_; lean_object* v_cFileName_x3f_3257_; lean_object* v_bcFileName_x3f_3258_; uint8_t v_jsonOutput_3259_; lean_object* v_errorOnKinds_3260_; uint8_t v_printStats_3261_; uint8_t v_run_3262_; lean_object* v_incrSaveFileName_x3f_3263_; lean_object* v_incrLoadFileName_x3f_3264_; lean_object* v_incrHeaderSaveFileName_x3f_3265_; lean_object* v___f_3266_; lean_object* v___y_3268_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; uint8_t v___x_3314_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v_mainModuleName_3350_; lean_object* v___y_3390_; lean_object* v___y_3391_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v_contents_3394_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v_str_3440_; lean_object* v_startInclusive_3441_; lean_object* v_endExclusive_3442_; lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v_fileName_3547_; lean_object* v___y_3552_; lean_object* v___y_3553_; lean_object* v___y_3585_; uint8_t v___y_3586_; lean_object* v___y_3587_; uint8_t v___y_3590_; lean_object* v_fst_3591_; lean_object* v_snd_3592_; uint8_t v___y_3594_; lean_object* v___x_3624_; lean_object* v_maxMemory_3625_; lean_object* v___x_3626_; uint8_t v___x_3627_; 
v_leanOpts_3244_ = lean_ctor_get(v_opts_3220_, 0);
lean_inc_ref(v_leanOpts_3244_);
v_forwardedArgs_3245_ = lean_ctor_get(v_opts_3220_, 1);
lean_inc_ref(v_forwardedArgs_3245_);
v_component_3246_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 8);
v_useStdin_3247_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 11);
v_onlyDeps_3248_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 12);
v_onlySrcDeps_3249_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 13);
v_depsJson_3250_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 14);
v_trustLevel_3251_ = lean_ctor_get_uint32(v_opts_3220_, sizeof(void*)*14);
v_rootDir_x3f_3252_ = lean_ctor_get(v_opts_3220_, 3);
lean_inc(v_rootDir_x3f_3252_);
v_setupFileName_x3f_3253_ = lean_ctor_get(v_opts_3220_, 4);
lean_inc(v_setupFileName_x3f_3253_);
v_oleanFileName_x3f_3254_ = lean_ctor_get(v_opts_3220_, 5);
lean_inc(v_oleanFileName_x3f_3254_);
v_usageFileName_x3f_3255_ = lean_ctor_get(v_opts_3220_, 6);
lean_inc(v_usageFileName_x3f_3255_);
v_ileanFileName_x3f_3256_ = lean_ctor_get(v_opts_3220_, 7);
lean_inc(v_ileanFileName_x3f_3256_);
v_cFileName_x3f_3257_ = lean_ctor_get(v_opts_3220_, 8);
lean_inc(v_cFileName_x3f_3257_);
v_bcFileName_x3f_3258_ = lean_ctor_get(v_opts_3220_, 9);
lean_inc(v_bcFileName_x3f_3258_);
v_jsonOutput_3259_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 15);
v_errorOnKinds_3260_ = lean_ctor_get(v_opts_3220_, 10);
lean_inc_ref(v_errorOnKinds_3260_);
v_printStats_3261_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 16);
v_run_3262_ = lean_ctor_get_uint8(v_opts_3220_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_3263_ = lean_ctor_get(v_opts_3220_, 11);
lean_inc(v_incrSaveFileName_x3f_3263_);
v_incrLoadFileName_x3f_3264_ = lean_ctor_get(v_opts_3220_, 12);
lean_inc(v_incrLoadFileName_x3f_3264_);
v_incrHeaderSaveFileName_x3f_3265_ = lean_ctor_get(v_opts_3220_, 13);
lean_inc(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec_ref(v_opts_3220_);
v___f_3266_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__0));
v___x_3286_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__2, &l___private_Lean_Shell_0__Lean_shellMain___closed__2_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2);
v___x_3287_ = l_Lean_Options_mergeBy(v___f_3266_, v_leanOpts_3244_, v___x_3286_);
v___x_3314_ = 1;
v___x_3624_ = l___private_Lean_Shell_0__Lean_maxMemory;
v_maxMemory_3625_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v___x_3287_, v___x_3624_);
v___x_3626_ = lean_unsigned_to_nat(0u);
v___x_3627_ = lean_nat_dec_eq(v_maxMemory_3625_, v___x_3626_);
if (v___x_3627_ == 0)
{
size_t v___x_3628_; size_t v___x_3629_; size_t v___x_3630_; size_t v___x_3631_; lean_object* v___x_3632_; 
v___x_3628_ = lean_usize_of_nat(v_maxMemory_3625_);
lean_dec(v_maxMemory_3625_);
v___x_3629_ = ((size_t)10ULL);
v___x_3630_ = lean_usize_shift_left(v___x_3628_, v___x_3629_);
v___x_3631_ = lean_usize_shift_left(v___x_3630_, v___x_3629_);
v___x_3632_ = lean_internal_set_max_memory(v___x_3631_);
goto v___jp_3615_;
}
else
{
lean_dec(v_maxMemory_3625_);
goto v___jp_3615_;
}
v___jp_3267_:
{
lean_object* v___x_3269_; uint8_t v___x_3270_; 
v___x_3269_ = lean_display_cumulative_profiling_times();
v___x_3270_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__1, &l___private_Lean_Shell_0__Lean_shellMain___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1);
if (v___x_3270_ == 0)
{
if (lean_obj_tag(v___y_3268_) == 0)
{
uint8_t v___x_3271_; lean_object* v___x_3272_; 
v___x_3271_ = 1;
v___x_3272_ = lean_io_exit(v___x_3271_);
return v___x_3272_;
}
else
{
uint8_t v___x_3273_; lean_object* v___x_3274_; 
lean_dec_ref_known(v___y_3268_, 1);
v___x_3273_ = 0;
v___x_3274_ = lean_io_exit(v___x_3273_);
return v___x_3274_;
}
}
else
{
if (lean_obj_tag(v___y_3268_) == 0)
{
lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3275_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3275_);
return v___x_3276_;
}
else
{
lean_object* v___x_3278_; uint8_t v_isShared_3279_; uint8_t v_isSharedCheck_3284_; 
v_isSharedCheck_3284_ = !lean_is_exclusive(v___y_3268_);
if (v_isSharedCheck_3284_ == 0)
{
lean_object* v_unused_3285_; 
v_unused_3285_ = lean_ctor_get(v___y_3268_, 0);
lean_dec(v_unused_3285_);
v___x_3278_ = v___y_3268_;
v_isShared_3279_ = v_isSharedCheck_3284_;
goto v_resetjp_3277_;
}
else
{
lean_dec(v___y_3268_);
v___x_3278_ = lean_box(0);
v_isShared_3279_ = v_isSharedCheck_3284_;
goto v_resetjp_3277_;
}
v_resetjp_3277_:
{
lean_object* v___x_3280_; lean_object* v___x_3282_; 
v___x_3280_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3279_ == 0)
{
lean_ctor_set_tag(v___x_3278_, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3280_);
v___x_3282_ = v___x_3278_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v___x_3280_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
v___jp_3288_:
{
if (lean_obj_tag(v_bcFileName_x3f_3258_) == 1)
{
lean_object* v_val_3292_; lean_object* v___x_3293_; 
v_val_3292_ = lean_ctor_get(v_bcFileName_x3f_3258_, 0);
lean_inc(v_val_3292_);
lean_dec_ref_known(v_bcFileName_x3f_3258_, 1);
v___x_3293_ = lean_init_llvm();
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
lean_dec_ref_known(v___x_3293_, 1);
v___x_3294_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__3));
v___x_3295_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_emitLLVM___boxed), 4, 3);
lean_closure_set(v___x_3295_, 0, v___y_3291_);
lean_closure_set(v___x_3295_, 1, v___y_3289_);
lean_closure_set(v___x_3295_, 2, v_val_3292_);
v___x_3296_ = lean_box(0);
v___x_3297_ = l_Lean_profileitIOUnsafe___redArg(v___x_3294_, v___x_3287_, v___x_3295_, v___x_3296_);
lean_dec_ref(v___x_3287_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_dec_ref_known(v___x_3297_, 1);
v___y_3268_ = v___y_3290_;
goto v___jp_3267_;
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3305_; 
lean_dec(v___y_3290_);
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3300_ = v___x_3297_;
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3297_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3303_; 
if (v_isShared_3301_ == 0)
{
v___x_3303_ = v___x_3300_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v_a_3298_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
}
else
{
lean_object* v_a_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3313_; 
lean_dec(v_val_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___x_3287_);
v_a_3306_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3313_ == 0)
{
v___x_3308_ = v___x_3293_;
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_a_3306_);
lean_dec(v___x_3293_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_a_3306_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
}
else
{
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3289_);
lean_dec_ref(v___x_3287_);
lean_dec(v_bcFileName_x3f_3258_);
v___y_3268_ = v___y_3290_;
goto v___jp_3267_;
}
}
v___jp_3315_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
v___x_3317_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3316_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v___x_3318_; 
lean_dec_ref_known(v___x_3317_, 1);
v___x_3318_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3314_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3326_; 
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3326_ == 0)
{
lean_object* v_unused_3327_; 
v_unused_3327_ = lean_ctor_get(v___x_3318_, 0);
lean_dec(v_unused_3327_);
v___x_3320_ = v___x_3318_;
v_isShared_3321_ = v_isSharedCheck_3326_;
goto v_resetjp_3319_;
}
else
{
lean_dec(v___x_3318_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3326_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3322_; lean_object* v___x_3324_; 
v___x_3322_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 0, v___x_3322_);
v___x_3324_ = v___x_3320_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v___x_3322_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
else
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3335_; 
v_a_3328_ = lean_ctor_get(v___x_3318_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3330_ = v___x_3318_;
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v___x_3318_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3335_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v___x_3333_; 
if (v_isShared_3331_ == 0)
{
v___x_3333_ = v___x_3330_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3328_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
else
{
lean_object* v_a_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3343_; 
v_a_3336_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3338_ = v___x_3317_;
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_a_3336_);
lean_dec(v___x_3317_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3341_; 
if (v_isShared_3339_ == 0)
{
v___x_3341_ = v___x_3338_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3336_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
}
v___jp_3344_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3351_ = lean_unsigned_to_nat(0u);
v___x_3352_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__5));
lean_inc(v_mainModuleName_3350_);
lean_inc_ref(v___x_3287_);
v___x_3353_ = l_Lean_Elab_runFrontend(v___y_3346_, v___x_3287_, v___y_3347_, v_mainModuleName_3350_, v_trustLevel_3251_, v_oleanFileName_x3f_3254_, v_ileanFileName_x3f_3256_, v_jsonOutput_3259_, v_errorOnKinds_3260_, v___x_3352_, v_printStats_3261_, v___y_3349_, v_incrSaveFileName_x3f_3263_, v_incrLoadFileName_x3f_3264_, v_incrHeaderSaveFileName_x3f_3265_, v_usageFileName_x3f_3255_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_ileanFileName_x3f_3256_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3380_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3356_ = v___x_3353_;
v_isShared_3357_ = v_isSharedCheck_3380_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3380_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
if (lean_obj_tag(v_a_3354_) == 1)
{
if (v_run_3262_ == 0)
{
lean_del_object(v___x_3356_);
lean_dec(v___y_3348_);
if (lean_obj_tag(v_cFileName_x3f_3257_) == 1)
{
lean_object* v_val_3358_; lean_object* v_val_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___f_3363_; lean_object* v___x_3364_; 
v_val_3358_ = lean_ctor_get(v_a_3354_, 0);
lean_inc_n(v_val_3358_, 2);
v_val_3359_ = lean_ctor_get(v_cFileName_x3f_3257_, 0);
lean_inc(v_val_3359_);
lean_dec_ref_known(v_cFileName_x3f_3257_, 1);
v___x_3360_ = lean_box(v___x_3314_);
v___x_3361_ = lean_box(v_run_3262_);
v___x_3362_ = lean_box(v_printLibDir_3243_);
lean_inc_ref(v___x_3287_);
lean_inc(v_mainModuleName_3350_);
v___f_3363_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__2___boxed), 10, 8);
lean_closure_set(v___f_3363_, 0, v___x_3351_);
lean_closure_set(v___f_3363_, 1, v___x_3360_);
lean_closure_set(v___f_3363_, 2, v_val_3358_);
lean_closure_set(v___f_3363_, 3, v_mainModuleName_3350_);
lean_closure_set(v___f_3363_, 4, v___y_3345_);
lean_closure_set(v___f_3363_, 5, v___x_3361_);
lean_closure_set(v___f_3363_, 6, v___x_3362_);
lean_closure_set(v___f_3363_, 7, v___x_3287_);
v___x_3364_ = l___private_Lean_Shell_0__Lean_shellMain_writeFileAtomically(v_val_3359_, v___f_3363_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_dec_ref_known(v___x_3364_, 1);
v___y_3289_ = v_mainModuleName_3350_;
v___y_3290_ = v_a_3354_;
v___y_3291_ = v_val_3358_;
goto v___jp_3288_;
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v_val_3358_);
lean_dec_ref_known(v_a_3354_, 1);
lean_dec(v_mainModuleName_3350_);
lean_dec_ref(v___x_3287_);
lean_dec(v_bcFileName_x3f_3258_);
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3364_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3364_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
else
{
lean_object* v_val_3373_; 
lean_dec_ref(v___y_3345_);
lean_dec(v_cFileName_x3f_3257_);
v_val_3373_ = lean_ctor_get(v_a_3354_, 0);
lean_inc(v_val_3373_);
v___y_3289_ = v_mainModuleName_3350_;
v___y_3290_ = v_a_3354_;
v___y_3291_ = v_val_3373_;
goto v___jp_3288_;
}
}
else
{
lean_object* v_val_3374_; uint32_t v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3378_; 
lean_dec(v_mainModuleName_3350_);
lean_dec_ref(v___y_3345_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
v_val_3374_ = lean_ctor_get(v_a_3354_, 0);
lean_inc(v_val_3374_);
lean_dec_ref_known(v_a_3354_, 1);
v___x_3375_ = lean_eval_main(v_val_3374_, v___x_3287_, v___y_3348_);
lean_dec(v___y_3348_);
lean_dec_ref(v___x_3287_);
lean_dec(v_val_3374_);
v___x_3376_ = lean_box_uint32(v___x_3375_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 0, v___x_3376_);
v___x_3378_ = v___x_3356_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
else
{
lean_del_object(v___x_3356_);
lean_dec(v_mainModuleName_3350_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3345_);
lean_dec_ref(v___x_3287_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
v___y_3268_ = v_a_3354_;
goto v___jp_3267_;
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec(v_mainModuleName_3350_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3345_);
lean_dec_ref(v___x_3287_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
v_a_3381_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3353_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3353_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
v___jp_3389_:
{
if (lean_obj_tag(v_setupFileName_x3f_3253_) == 0)
{
lean_object* v___x_3395_; 
v___x_3395_ = lean_box(0);
if (lean_obj_tag(v___y_3393_) == 1)
{
lean_object* v_val_3396_; lean_object* v___x_3397_; 
v_val_3396_ = lean_ctor_get(v___y_3393_, 0);
lean_inc(v_val_3396_);
lean_dec_ref_known(v___y_3393_, 1);
v___x_3397_ = l_Lean_moduleNameOfFileName(v_val_3396_, v_rootDir_x3f_3252_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v___y_3345_ = v___y_3390_;
v___y_3346_ = v_contents_3394_;
v___y_3347_ = v___y_3391_;
v___y_3348_ = v___y_3392_;
v___y_3349_ = v___x_3395_;
v_mainModuleName_3350_ = v_a_3398_;
goto v___jp_3344_;
}
else
{
if (lean_obj_tag(v_oleanFileName_x3f_3254_) == 0)
{
if (lean_obj_tag(v_cFileName_x3f_3257_) == 0)
{
lean_object* v___x_3399_; 
lean_dec_ref_known(v___x_3397_, 1);
v___x_3399_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__7));
v___y_3345_ = v___y_3390_;
v___y_3346_ = v_contents_3394_;
v___y_3347_ = v___y_3391_;
v___y_3348_ = v___y_3392_;
v___y_3349_ = v___x_3395_;
v_mainModuleName_3350_ = v___x_3399_;
goto v___jp_3344_;
}
else
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3407_; 
lean_dec_ref_known(v_cFileName_x3f_3257_, 1);
lean_dec_ref(v_contents_3394_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
v_a_3400_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3402_ = v___x_3397_;
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v___x_3397_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v___x_3405_; 
if (v_isShared_3403_ == 0)
{
v___x_3405_ = v___x_3402_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_a_3400_);
v___x_3405_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
return v___x_3405_;
}
}
}
}
else
{
lean_object* v_a_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3415_; 
lean_dec_ref_known(v_oleanFileName_x3f_3254_, 1);
lean_dec_ref(v_contents_3394_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
v_a_3408_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3415_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3415_ == 0)
{
v___x_3410_ = v___x_3397_;
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_a_3408_);
lean_dec(v___x_3397_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3415_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3413_; 
if (v_isShared_3411_ == 0)
{
v___x_3413_ = v___x_3410_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3408_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
return v___x_3413_;
}
}
}
}
}
else
{
lean_object* v___x_3416_; 
lean_dec(v___y_3393_);
lean_dec(v_rootDir_x3f_3252_);
v___x_3416_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__7));
v___y_3345_ = v___y_3390_;
v___y_3346_ = v_contents_3394_;
v___y_3347_ = v___y_3391_;
v___y_3348_ = v___y_3392_;
v___y_3349_ = v___x_3395_;
v_mainModuleName_3350_ = v___x_3416_;
goto v___jp_3344_;
}
}
else
{
lean_object* v_val_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3435_; 
lean_dec(v___y_3393_);
lean_dec(v_rootDir_x3f_3252_);
v_val_3417_ = lean_ctor_get(v_setupFileName_x3f_3253_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v_setupFileName_x3f_3253_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3419_ = v_setupFileName_x3f_3253_;
v_isShared_3420_ = v_isSharedCheck_3435_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_val_3417_);
lean_dec(v_setupFileName_x3f_3253_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3435_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Lean_ModuleSetup_load(v_val_3417_);
lean_dec(v_val_3417_);
if (lean_obj_tag(v___x_3421_) == 0)
{
lean_object* v_a_3422_; lean_object* v_name_3423_; lean_object* v___x_3425_; 
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc(v_a_3422_);
lean_dec_ref_known(v___x_3421_, 1);
v_name_3423_ = lean_ctor_get(v_a_3422_, 0);
lean_inc(v_name_3423_);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 0, v_a_3422_);
v___x_3425_ = v___x_3419_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3422_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
v___y_3345_ = v___y_3390_;
v___y_3346_ = v_contents_3394_;
v___y_3347_ = v___y_3391_;
v___y_3348_ = v___y_3392_;
v___y_3349_ = v___x_3425_;
v_mainModuleName_3350_ = v_name_3423_;
goto v___jp_3344_;
}
}
else
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3434_; 
lean_del_object(v___x_3419_);
lean_dec_ref(v_contents_3394_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
v_a_3427_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3429_ = v___x_3421_;
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3421_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3432_; 
if (v_isShared_3430_ == 0)
{
v___x_3432_ = v___x_3429_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v_a_3427_);
v___x_3432_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
return v___x_3432_;
}
}
}
}
}
}
v___jp_3436_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; uint8_t v___x_3452_; 
v___x_3446_ = lean_nat_add(v_startInclusive_3441_, v___y_3445_);
lean_dec(v___y_3445_);
lean_inc(v___x_3446_);
lean_inc_ref(v_str_3440_);
v___x_3447_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3447_, 0, v_str_3440_);
lean_ctor_set(v___x_3447_, 1, v_startInclusive_3441_);
lean_ctor_set(v___x_3447_, 2, v___x_3446_);
v___x_3448_ = l_String_Slice_trimAscii(v___x_3447_);
v___x_3449_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___x_3450_ = lean_unsigned_to_nat(5u);
v___x_3451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___y_3438_);
lean_ctor_set(v___x_3451_, 2, v___x_3450_);
v___x_3452_ = l_String_Slice_beq(v___x_3448_, v___x_3451_);
lean_dec_ref_known(v___x_3451_, 3);
if (v___x_3452_ == 0)
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
lean_dec(v___x_3446_);
lean_dec(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec(v_endExclusive_3442_);
lean_dec_ref(v_str_3440_);
lean_dec_ref(v___y_3439_);
lean_dec_ref(v___y_3437_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
v___x_3453_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__9));
v___x_3454_ = l_String_Slice_toString(v___x_3448_);
lean_dec_ref(v___x_3448_);
v___x_3455_ = lean_string_append(v___x_3453_, v___x_3454_);
lean_dec_ref(v___x_3454_);
v___x_3456_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_3457_ = lean_string_append(v___x_3455_, v___x_3456_);
v___x_3458_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3457_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3466_; 
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3466_ == 0)
{
lean_object* v_unused_3467_; 
v_unused_3467_ = lean_ctor_get(v___x_3458_, 0);
lean_dec(v_unused_3467_);
v___x_3460_ = v___x_3458_;
v_isShared_3461_ = v_isSharedCheck_3466_;
goto v_resetjp_3459_;
}
else
{
lean_dec(v___x_3458_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3466_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3462_; lean_object* v___x_3464_; 
v___x_3462_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 0, v___x_3462_);
v___x_3464_ = v___x_3460_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3462_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3475_; 
v_a_3468_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3470_ = v___x_3458_;
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3458_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
if (v_isShared_3471_ == 0)
{
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3468_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
else
{
lean_object* v___x_3476_; 
lean_dec_ref(v___x_3448_);
v___x_3476_ = lean_string_utf8_extract_fast(v_str_3440_, v___x_3446_, v_endExclusive_3442_);
lean_dec(v_endExclusive_3442_);
lean_dec(v___x_3446_);
lean_dec_ref(v_str_3440_);
v___y_3390_ = v___y_3437_;
v___y_3391_ = v___y_3439_;
v___y_3392_ = v___y_3444_;
v___y_3393_ = v___y_3443_;
v_contents_3394_ = v___x_3476_;
goto v___jp_3389_;
}
}
v___jp_3477_:
{
if (lean_obj_tag(v___y_3481_) == 0)
{
lean_object* v_a_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; 
v_a_3482_ = lean_ctor_get(v___y_3481_, 0);
lean_inc(v_a_3482_);
lean_dec_ref_known(v___y_3481_, 1);
v___x_3483_ = lean_unsigned_to_nat(0u);
v___x_3484_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_3485_ = l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(v_a_3482_, v___x_3483_, v___x_3484_);
lean_dec(v_a_3482_);
if (v_onlyDeps_3248_ == 0)
{
if (v_onlySrcDeps_3249_ == 0)
{
lean_object* v___x_3486_; 
lean_inc_ref(v___x_3485_);
v___x_3486_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v___x_3485_);
if (lean_obj_tag(v___x_3486_) == 1)
{
lean_object* v_val_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
lean_dec_ref(v___x_3485_);
v_val_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_val_3487_);
lean_dec_ref_known(v___x_3486_, 1);
v___x_3488_ = lean_box(0);
v___x_3489_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(v_val_3487_, v___x_3483_, v___x_3488_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_str_3490_; lean_object* v_startInclusive_3491_; lean_object* v_endExclusive_3492_; lean_object* v___x_3493_; 
v_str_3490_ = lean_ctor_get(v_val_3487_, 0);
lean_inc_ref(v_str_3490_);
v_startInclusive_3491_ = lean_ctor_get(v_val_3487_, 1);
lean_inc(v_startInclusive_3491_);
v_endExclusive_3492_ = lean_ctor_get(v_val_3487_, 2);
lean_inc(v_endExclusive_3492_);
lean_dec(v_val_3487_);
v___x_3493_ = lean_nat_sub(v_endExclusive_3492_, v_startInclusive_3491_);
lean_inc_ref(v___y_3480_);
v___y_3437_ = v___y_3480_;
v___y_3438_ = v___x_3483_;
v___y_3439_ = v___y_3480_;
v_str_3440_ = v_str_3490_;
v_startInclusive_3441_ = v_startInclusive_3491_;
v_endExclusive_3442_ = v_endExclusive_3492_;
v___y_3443_ = v___y_3479_;
v___y_3444_ = v___y_3478_;
v___y_3445_ = v___x_3493_;
goto v___jp_3436_;
}
else
{
lean_object* v_val_3494_; lean_object* v_str_3495_; lean_object* v_startInclusive_3496_; lean_object* v_endExclusive_3497_; 
v_val_3494_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_val_3494_);
lean_dec_ref_known(v___x_3489_, 1);
v_str_3495_ = lean_ctor_get(v_val_3487_, 0);
lean_inc_ref(v_str_3495_);
v_startInclusive_3496_ = lean_ctor_get(v_val_3487_, 1);
lean_inc(v_startInclusive_3496_);
v_endExclusive_3497_ = lean_ctor_get(v_val_3487_, 2);
lean_inc(v_endExclusive_3497_);
lean_dec(v_val_3487_);
lean_inc_ref(v___y_3480_);
v___y_3437_ = v___y_3480_;
v___y_3438_ = v___x_3483_;
v___y_3439_ = v___y_3480_;
v_str_3440_ = v_str_3495_;
v_startInclusive_3441_ = v_startInclusive_3496_;
v_endExclusive_3442_ = v_endExclusive_3497_;
v___y_3443_ = v___y_3479_;
v___y_3444_ = v___y_3478_;
v___y_3445_ = v_val_3494_;
goto v___jp_3436_;
}
}
else
{
lean_dec(v___x_3486_);
lean_inc_ref(v___y_3480_);
v___y_3390_ = v___y_3480_;
v___y_3391_ = v___y_3480_;
v___y_3392_ = v___y_3478_;
v___y_3393_ = v___y_3479_;
v_contents_3394_ = v___x_3485_;
goto v___jp_3389_;
}
}
else
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
lean_dec(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
v___x_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3498_, 0, v___y_3480_);
v___x_3499_ = l_Lean_Elab_printImportSrcs(v___x_3485_, v___x_3498_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3507_; 
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3507_ == 0)
{
lean_object* v_unused_3508_; 
v_unused_3508_ = lean_ctor_get(v___x_3499_, 0);
lean_dec(v_unused_3508_);
v___x_3501_ = v___x_3499_;
v_isShared_3502_ = v_isSharedCheck_3507_;
goto v_resetjp_3500_;
}
else
{
lean_dec(v___x_3499_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3507_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3503_; lean_object* v___x_3505_; 
v___x_3503_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3502_ == 0)
{
lean_ctor_set(v___x_3501_, 0, v___x_3503_);
v___x_3505_ = v___x_3501_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v___x_3503_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
else
{
lean_object* v_a_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3516_; 
v_a_3509_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3511_ = v___x_3499_;
v_isShared_3512_ = v_isSharedCheck_3516_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_a_3509_);
lean_dec(v___x_3499_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3516_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3514_; 
if (v_isShared_3512_ == 0)
{
v___x_3514_ = v___x_3511_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_a_3509_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
return v___x_3514_;
}
}
}
}
}
else
{
lean_object* v___x_3517_; lean_object* v___x_3518_; 
lean_dec(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
v___x_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3517_, 0, v___y_3480_);
v___x_3518_ = l_Lean_Elab_printImports(v___x_3485_, v___x_3517_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3526_; 
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3526_ == 0)
{
lean_object* v_unused_3527_; 
v_unused_3527_ = lean_ctor_get(v___x_3518_, 0);
lean_dec(v_unused_3527_);
v___x_3520_ = v___x_3518_;
v_isShared_3521_ = v_isSharedCheck_3526_;
goto v_resetjp_3519_;
}
else
{
lean_dec(v___x_3518_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3526_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
lean_object* v___x_3522_; lean_object* v___x_3524_; 
v___x_3522_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3521_ == 0)
{
lean_ctor_set(v___x_3520_, 0, v___x_3522_);
v___x_3524_ = v___x_3520_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v___x_3522_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
}
else
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3535_; 
v_a_3528_ = lean_ctor_get(v___x_3518_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3530_ = v___x_3518_;
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3518_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3528_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
v_a_3536_ = lean_ctor_get(v___y_3481_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___y_3481_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___y_3481_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___y_3481_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
v___jp_3544_:
{
if (v_useStdin_3247_ == 0)
{
lean_object* v___x_3548_; 
v___x_3548_ = l_IO_FS_readBinFile(v_fileName_3547_);
v___y_3478_ = v___y_3546_;
v___y_3479_ = v___y_3545_;
v___y_3480_ = v_fileName_3547_;
v___y_3481_ = v___x_3548_;
goto v___jp_3477_;
}
else
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = lean_get_stdin();
v___x_3550_ = l_IO_FS_Stream_readBinToEnd(v___x_3549_);
v___y_3478_ = v___y_3546_;
v___y_3479_ = v___y_3545_;
v___y_3480_ = v_fileName_3547_;
v___y_3481_ = v___x_3550_;
goto v___jp_3477_;
}
}
v___jp_3551_:
{
if (lean_obj_tag(v___y_3553_) == 1)
{
lean_object* v_val_3554_; 
v_val_3554_ = lean_ctor_get(v___y_3553_, 0);
lean_inc(v_val_3554_);
v___y_3545_ = v___y_3553_;
v___y_3546_ = v___y_3552_;
v_fileName_3547_ = v_val_3554_;
goto v___jp_3544_;
}
else
{
if (v_useStdin_3247_ == 0)
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
lean_dec(v___y_3553_);
lean_dec(v___y_3552_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
v___x_3555_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
v___x_3556_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3555_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v___x_3557_; 
lean_dec_ref_known(v___x_3556_, 1);
v___x_3557_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3314_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3565_; 
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3565_ == 0)
{
lean_object* v_unused_3566_; 
v_unused_3566_ = lean_ctor_get(v___x_3557_, 0);
lean_dec(v_unused_3566_);
v___x_3559_ = v___x_3557_;
v_isShared_3560_ = v_isSharedCheck_3565_;
goto v_resetjp_3558_;
}
else
{
lean_dec(v___x_3557_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3565_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3561_; lean_object* v___x_3563_; 
v___x_3561_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v___x_3561_);
v___x_3563_ = v___x_3559_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v___x_3561_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
v_a_3567_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3557_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3557_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
v_a_3575_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3556_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3556_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
else
{
lean_object* v___x_3583_; 
v___x_3583_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__10));
v___y_3545_ = v___y_3553_;
v___y_3546_ = v___y_3552_;
v_fileName_3547_ = v___x_3583_;
goto v___jp_3544_;
}
}
}
v___jp_3584_:
{
uint8_t v___x_3588_; 
v___x_3588_ = l_List_isEmpty___redArg(v___y_3587_);
if (v___x_3588_ == 0)
{
lean_dec(v___y_3587_);
lean_dec(v___y_3585_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
goto v___jp_3315_;
}
else
{
if (v___y_3586_ == 0)
{
v___y_3552_ = v___y_3587_;
v___y_3553_ = v___y_3585_;
goto v___jp_3551_;
}
else
{
lean_dec(v___y_3587_);
lean_dec(v___y_3585_);
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
goto v___jp_3315_;
}
}
}
v___jp_3589_:
{
if (v_run_3262_ == 0)
{
v___y_3585_ = v_fst_3591_;
v___y_3586_ = v___y_3590_;
v___y_3587_ = v_snd_3592_;
goto v___jp_3584_;
}
else
{
if (v___y_3590_ == 0)
{
v___y_3552_ = v_snd_3592_;
v___y_3553_ = v_fst_3591_;
goto v___jp_3551_;
}
else
{
v___y_3585_ = v_fst_3591_;
v___y_3586_ = v___y_3590_;
v___y_3587_ = v_snd_3592_;
goto v___jp_3584_;
}
}
}
v___jp_3593_:
{
if (lean_obj_tag(v_args_3219_) == 0)
{
lean_object* v___x_3595_; 
v___x_3595_ = lean_box(0);
v___y_3590_ = v___y_3594_;
v_fst_3591_ = v___x_3595_;
v_snd_3592_ = v_args_3219_;
goto v___jp_3589_;
}
else
{
lean_object* v_head_3596_; lean_object* v_tail_3597_; lean_object* v___x_3598_; 
v_head_3596_ = lean_ctor_get(v_args_3219_, 0);
lean_inc(v_head_3596_);
v_tail_3597_ = lean_ctor_get(v_args_3219_, 1);
lean_inc(v_tail_3597_);
lean_dec_ref_known(v_args_3219_, 2);
v___x_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3598_, 0, v_head_3596_);
v___y_3590_ = v___y_3594_;
v_fst_3591_ = v___x_3598_;
v_snd_3592_ = v_tail_3597_;
goto v___jp_3589_;
}
}
v___jp_3599_:
{
switch(v_component_3246_)
{
case 0:
{
lean_dec_ref(v_forwardedArgs_3245_);
if (v_onlyDeps_3248_ == 0)
{
v___y_3594_ = v_printLibDir_3243_;
goto v___jp_3593_;
}
else
{
if (v_depsJson_3250_ == 0)
{
v___y_3594_ = v_depsJson_3250_;
goto v___jp_3593_;
}
else
{
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
if (v_useStdin_3247_ == 0)
{
lean_object* v___x_3600_; 
v___x_3600_ = lean_array_mk(v_args_3219_);
v_fns_3223_ = v___x_3600_;
goto v___jp_3222_;
}
else
{
lean_object* v___x_3601_; lean_object* v___x_3602_; 
lean_dec(v_args_3219_);
v___x_3601_ = lean_get_stdin();
v___x_3602_ = l_IO_FS_Stream_lines(v___x_3601_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
v_fns_3223_ = v_a_3603_;
goto v___jp_3222_;
}
else
{
lean_object* v_a_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3611_; 
v_a_3604_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3606_ = v___x_3602_;
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_a_3604_);
lean_dec(v___x_3602_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3609_; 
if (v_isShared_3607_ == 0)
{
v___x_3609_ = v___x_3606_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v_a_3604_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; 
lean_dec_ref(v___x_3287_);
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
lean_dec(v_args_3219_);
v___x_3612_ = lean_array_to_list(v_forwardedArgs_3245_);
v___x_3613_ = l_Lean_Server_Watchdog_watchdogMain(v___x_3612_);
return v___x_3613_;
}
default: 
{
lean_object* v___x_3614_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3265_);
lean_dec(v_incrLoadFileName_x3f_3264_);
lean_dec(v_incrSaveFileName_x3f_3263_);
lean_dec_ref(v_errorOnKinds_3260_);
lean_dec(v_bcFileName_x3f_3258_);
lean_dec(v_cFileName_x3f_3257_);
lean_dec(v_ileanFileName_x3f_3256_);
lean_dec(v_usageFileName_x3f_3255_);
lean_dec(v_oleanFileName_x3f_3254_);
lean_dec(v_setupFileName_x3f_3253_);
lean_dec(v_rootDir_x3f_3252_);
lean_dec_ref(v_forwardedArgs_3245_);
lean_dec(v_args_3219_);
v___x_3614_ = l_Lean_Server_FileWorker_workerMain(v___x_3287_);
return v___x_3614_;
}
}
}
v___jp_3615_:
{
lean_object* v___x_3616_; lean_object* v_timeout_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; 
v___x_3616_ = l___private_Lean_Shell_0__Lean_timeout;
v_timeout_3617_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v___x_3287_, v___x_3616_);
v___x_3618_ = lean_unsigned_to_nat(0u);
v___x_3619_ = lean_nat_dec_eq(v_timeout_3617_, v___x_3618_);
if (v___x_3619_ == 0)
{
size_t v___x_3620_; size_t v___x_3621_; size_t v___x_3622_; lean_object* v___x_3623_; 
v___x_3620_ = lean_usize_of_nat(v_timeout_3617_);
lean_dec(v_timeout_3617_);
v___x_3621_ = ((size_t)1000ULL);
v___x_3622_ = lean_usize_mul(v___x_3620_, v___x_3621_);
v___x_3623_ = lean_internal_set_max_heartbeat(v___x_3622_);
goto v___jp_3599_;
}
else
{
lean_dec(v_timeout_3617_);
goto v___jp_3599_;
}
}
}
else
{
lean_object* v___x_3633_; 
lean_dec_ref(v_opts_3220_);
lean_dec(v_args_3219_);
v___x_3633_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3633_) == 0)
{
lean_object* v_a_3634_; lean_object* v___x_3635_; 
v_a_3634_ = lean_ctor_get(v___x_3633_, 0);
lean_inc(v_a_3634_);
lean_dec_ref_known(v___x_3633_, 1);
v___x_3635_ = l_Lean_getLibDir(v_a_3634_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v_a_3636_; lean_object* v___x_3637_; 
v_a_3636_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_a_3636_);
lean_dec_ref_known(v___x_3635_, 1);
v___x_3637_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(v_a_3636_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3645_; 
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3645_ == 0)
{
lean_object* v_unused_3646_; 
v_unused_3646_ = lean_ctor_get(v___x_3637_, 0);
lean_dec(v_unused_3646_);
v___x_3639_ = v___x_3637_;
v_isShared_3640_ = v_isSharedCheck_3645_;
goto v_resetjp_3638_;
}
else
{
lean_dec(v___x_3637_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3645_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3641_; lean_object* v___x_3643_; 
v___x_3641_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3640_ == 0)
{
lean_ctor_set(v___x_3639_, 0, v___x_3641_);
v___x_3643_ = v___x_3639_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v___x_3641_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
else
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
v_a_3647_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3637_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3637_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
v_a_3655_ = lean_ctor_get(v___x_3635_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3635_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3635_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3635_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
v_a_3663_ = lean_ctor_get(v___x_3633_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3633_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3633_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3633_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
}
else
{
lean_object* v___x_3671_; 
lean_dec_ref(v_opts_3220_);
lean_dec(v_args_3219_);
v___x_3671_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3673_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
lean_inc(v_a_3672_);
lean_dec_ref_known(v___x_3671_, 1);
v___x_3673_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(v_a_3672_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3681_; 
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3681_ == 0)
{
lean_object* v_unused_3682_; 
v_unused_3682_ = lean_ctor_get(v___x_3673_, 0);
lean_dec(v_unused_3682_);
v___x_3675_ = v___x_3673_;
v_isShared_3676_ = v_isSharedCheck_3681_;
goto v_resetjp_3674_;
}
else
{
lean_dec(v___x_3673_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3681_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3677_; lean_object* v___x_3679_; 
v___x_3677_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3676_ == 0)
{
lean_ctor_set(v___x_3675_, 0, v___x_3677_);
v___x_3679_ = v___x_3675_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v___x_3677_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
v_a_3683_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3673_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3673_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3698_; 
v_a_3691_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3693_ = v___x_3671_;
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3671_);
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
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3691_);
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
v___jp_3222_:
{
lean_object* v___x_3224_; 
v___x_3224_ = l_Lean_printImportsJson(v_fns_3223_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3232_; 
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3232_ == 0)
{
lean_object* v_unused_3233_; 
v_unused_3233_ = lean_ctor_get(v___x_3224_, 0);
lean_dec(v_unused_3233_);
v___x_3226_ = v___x_3224_;
v_isShared_3227_ = v_isSharedCheck_3232_;
goto v_resetjp_3225_;
}
else
{
lean_dec(v___x_3224_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3232_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3228_; lean_object* v___x_3230_; 
v___x_3228_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v___x_3228_);
v___x_3230_ = v___x_3226_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v___x_3228_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
v_a_3234_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3224_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3224_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object* v_args_3699_, lean_object* v_opts_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = lean_shell_main(v_args_3699_, v_opts_3700_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object* v_val_3703_, lean_object* v_inst_3704_, lean_object* v_R_3705_, lean_object* v_a_3706_, lean_object* v_b_3707_, lean_object* v_c_3708_){
_start:
{
lean_object* v___x_3709_; 
v___x_3709_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___redArg(v_val_3703_, v_a_3706_, v_b_3707_);
return v___x_3709_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object* v_val_3710_, lean_object* v_inst_3711_, lean_object* v_R_3712_, lean_object* v_a_3713_, lean_object* v_b_3714_, lean_object* v_c_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_val_3710_, v_inst_3711_, v_R_3712_, v_a_3713_, v_b_3714_, v_c_3715_);
lean_dec(v_b_3714_);
lean_dec_ref(v_val_3710_);
return v_res_3716_;
}
}
lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lossy(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_Process(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_shortVersionString = _init_l___private_Lean_Shell_0__Lean_shortVersionString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString);
l___private_Lean_Shell_0__Lean_versionHeader = _init_l___private_Lean_Shell_0__Lean_versionHeader();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader);
l___private_Lean_Shell_0__Lean_featuresString = _init_l___private_Lean_Shell_0__Lean_featuresString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_featuresString);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1059550402____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_maxMemory = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_maxMemory);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_2938679178____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_timeout = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_timeout);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1321479241____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_verbose = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_verbose);
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_defaultTrustLevel = _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel();
l___private_Lean_Shell_0__Lean_defaultNumThreads = _init_l___private_Lean_Shell_0__Lean_defaultNumThreads();
l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1);
l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lossy(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Std_Async_Process(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Shell(builtin);
}
#ifdef __cplusplus
}
#endif
